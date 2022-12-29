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
	struct<12> Local_15[30];
	struct<9> Local_376 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_385 = -1;
	var uLocal_386 = 1;
	var uLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	vector3 vLocal_390[30] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<193> Local_481 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_674 = 0;
	struct<32> Local_675[4];
	int iLocal_804 = 0;
	struct<11> Local_805 = { 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
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
	var uLocal_837 = 1080033280;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 1;
	var uLocal_841 = 23;
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
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
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
	struct<2> Local_1026[23];
	struct<7> Local_1073 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1080 = 0;
	int iLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	int iLocal_1088 = 0;
	int iLocal_1089 = 0;
	struct<22> Local_1090 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_1112 = 3;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 256;
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
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 1048576000;
	var uLocal_1148 = 1048576000;
	var uLocal_1149 = 1193033728;
	var uLocal_1150 = 1092616192;
	var uLocal_1151 = 1065353216;
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
	int iLocal_1163[4] = { 0, 0, 0, 0 };
	var uLocal_1168[4] = { 0, 0, 0, 0 };
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	var uLocal_1177 = 0;
	int iLocal_1178 = 0;
	float fLocal_1179 = 0f;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	var uLocal_1197 = 0;
	int iLocal_1198 = 0;
	int iLocal_1199 = 0;
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	var uLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	bool bLocal_1231 = false;
	vector3 vLocal_1232 = { 0f, 0f, 0f };
	vector3 vLocal_1235 = { 0f, 0f, 0f };
	vector3 vLocal_1238 = { 0f, 0f, 0f };
	vector3 vLocal_1241 = { 0f, 0f, 0f };
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	vector3 vLocal_1247 = { 0f, 0f, 0f };
	vector3 vLocal_1250[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1266[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1282 = 0f;
	float fLocal_1283 = 0f;
	float fLocal_1284 = 0f;
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	var uLocal_1291 = 0;
	struct<5> Local_1292[5];
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
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
	vector3 vLocal_1369 = { 0f, 0f, 0f };
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	struct<21> Local_1378[3];
	struct<17> Local_1442[2];
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	struct<4> Local_1482 = { 0, 0, 0, 0 } ;
	var uLocal_1486 = 0;
	var uLocal_1487 = 1065353216;
	var uLocal_1488 = 1119092736;
	var uLocal_1489 = 1092616192;
	var uLocal_1490 = 1085276160;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	int iLocal_1493 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_14 = "WILD";
	iLocal_389 = 1;
	fLocal_1179 = 75f;
	iLocal_1182 = 1;
	iLocal_1185 = 5;
	iLocal_1186 = 2;
	iLocal_1193 = -1;
	iLocal_1194 = -1;
	iLocal_1195 = 1;
	iLocal_1211 = 1;
	iLocal_1214 = 1;
	iLocal_1219 = 1;
	iLocal_1223 = 1;
	vLocal_1247 = { 2414.545f, 1767.348f, 88.90353f };
	fLocal_1282 = 0f;
	fLocal_1283 = 50f;
	fLocal_1288 = 55f;
	fLocal_1289 = 25f;
	fLocal_1290 = 1f;
	iLocal_1477 = -1;
	Local_481.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	iVar0 = 0;
	iVar1 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1231 = true;
	}
	if (!bLocal_1231)
	{
		func_2();
		Local_481.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_481.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		__LIB_3__::func_420(&Local_481, 1);
		func_5();
		__LIB_2__::func_290(&(Local_481.f_5));
		__LIB_1__::func_336(&(Local_481.f_5.f_1), 4);
		__LIB_1__::func_336(&(Local_481.f_5.f_1), 8);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1231, 1126, 0);
		if (bLocal_1231)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1117)
			{
				case 0:
					if (func_10())
					{
						iLocal_1117 = 1;
					}
					break;
				case 1:
					if (func_11(&Local_481, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_12(&Local_481, &uLocal_1492, &uLocal_1491);
						__LIB_3__::func_503(&Local_481, uLocal_1492, 2147);
						iLocal_1117 = 3;
					}
					else if (Local_481.f_160)
					{
						func_8();
					}
					break;
				case 3:
					if (func_15())
					{
						if (func_16())
						{
							func_17();
							iLocal_1188 = GRAPHICS::CREATE_TRACKED_POINT();
							__LIB_3__::func_337(&uLocal_1374, Local_481.f_51, 1.5f);
							__LIB_2__::func_659(&uLocal_1375, Local_481.f_51, 1.5f, 0, 0);
							func_20();
							func_21();
							if (AUDIO::_0xE368E8422C860BA7("DISTANT_HOWL", "REWM_Sounds", -2))
							{
							}
							func_22();
							iLocal_1117 = 4;
						}
					}
					break;
				case 4:
					if (!func_23(&Local_481, &iLocal_1163, iLocal_1081, 0, 1, 0, 1, 0))
					{
						func_8();
					}
					if (iLocal_1202 == 0)
					{
						if (func_24())
						{
						}
					}
					if (!Local_481.f_46)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
						{
							if (((__LIB_4__::func_499(iLocal_1163[0], 0, &(Local_481.f_5), &uLocal_1373, 0, 0) || __LIB_4__::func_499(iLocal_1163[2], 0, &(Local_481.f_5), &uLocal_1373, 0, 0)) || __LIB_4__::func_499(iLocal_1163[3], 0, &(Local_481.f_5), &uLocal_1373, 0, 0)) || __LIB_0__::func_27(iLocal_1180, 512))
							{
								if (__LIB_2__::func_1(iLocal_1163[1], 0, 1))
								{
									__LIB_1__::func_864(iLocal_1163[1], 0, 0);
								}
								Local_481.f_46 = 1;
								if (iLocal_1081 == 0 || iLocal_1081 == 1)
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1163[0], Global_35, 4, 16768, -1082130432 /* Float: -1f */, -1, 0);
									PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
								}
								else if (iLocal_1081 != 2)
								{
								}
								else if (iLocal_804 < 12)
								{
									iLocal_804 = 12;
								}
							}
						}
					}
					if (func_29())
					{
						Local_481.f_50 = 1;
						func_8();
					}
					if (iLocal_804 != 6)
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (__LIB_3__::func_365(&Local_481, &iLocal_1163, 1, 0, bVar2, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_8();
					}
					break;
			}
			BUILTIN::WAIT(Local_481.f_158);
		}
	}
}

void func_2()
{
	Local_1090 = { 0f, 0f, 0f };
	Local_1090.f_3 = Global_35;
	Local_1090.f_8 = 4;
	Local_1090.f_19 = 4;
	Local_1090.f_21 = 4;
	Local_1090.f_17 = 4;
	Local_1090.f_18 = 4;
	Local_1090.f_7 = 20000;
}

void func_5()
{
	iLocal_388 = __LIB_3__::func_657(73);
	switch (iLocal_388)
	{
		case 0:
			iLocal_1081 = 0;
			break;
		case 1:
			iLocal_1081 = 1;
			break;
		case 2:
			iLocal_1081 = 2;
			break;
		default:
			iLocal_1081 = 2;
			break;
	}
}

void func_8()
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1175))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1175);
	}
	FLOCK::_0xA881F5C77A560906(-1f);
	FLOCK::_0x706B434FEFAD6A24(-1f);
	if (iLocal_1081 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
		{
			if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_1163[0]))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_1163[0]);
			}
		}
	}
	if (__LIB_2__::func_901(iLocal_1163[0], Global_35))
	{
		__LIB_3__::func_666(73, 0, 2, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1088))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1088, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1089))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1089, 0);
	}
	if (__LIB_4__::func_497())
	{
		__LIB_4__::func_500("j_14_cave_wildman_Lit", 0);
		__LIB_4__::func_500("j_14_cave_wildman_unlit", 1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_389)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_15[iVar0 /*12*/].f_8));
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 0))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1163[0], Global_35, 4, 4194464, -1082130432 /* Float: -1f */, -1, 0);
		PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1163[0]))
		{
			PED::DELETE_PED(&(iLocal_1163[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
	{
		__LIB_3__::func_475(iLocal_1163[0], 3, 30f, 75f, 500, 1, 1, -1082130432 /* Float: -1f */);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1163[0]));
	}
	__LIB_3__::func_480(&Local_15);
	__LIB_1__::func_345();
	__LIB_3__::func_953(&iLocal_1477, 1);
	if (iLocal_1117 == 4)
	{
		if (iLocal_1188 != 0)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1188);
			iLocal_1188 = 0;
		}
	}
	AUDIO::_0x35B8C070E0C16E2F(1, 78);
	__LIB_2__::func_353(&uLocal_1374, 1);
	__LIB_2__::func_353(&uLocal_1375, 1);
	__LIB_2__::func_353(&uLocal_1376, 1);
	__LIB_2__::func_353(&uLocal_1377, 1);
	__LIB_3__::func_524(&iLocal_1187);
	func_50(&Local_481, &iLocal_1163, &uLocal_1168, 0, uLocal_1492, uLocal_1491, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_10()
{
	int iVar0;
	switch (iLocal_1116)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_481))
			{
				func_53();
				func_54();
				func_55();
				func_56();
				func_57();
				func_58();
				func_59();
				AUDIO::_0xD9130842D7226045("REWM_Sound", 0);
				iLocal_1116 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_1115, cLocal_14))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_841))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_15))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_376.f_7))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_675[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (!__LIB_3__::func_449(&Local_675))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("REWM_Sounds", 0))
			{
				return false;
			}
			if (!AUDIO::_0x4AD019591E94C064("DISTANT_HOWL", Global_35, "REWM_Sounds", -2))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_11(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_4__::func_280(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_555(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_12(var uParam0, var uParam1, var uParam2)
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
		case 2:
			*uParam1 = 10;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 3;
			break;
	}
}

Vector3 func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48.24f;
				case 1:
					return 0f, 0f, 56.16f;
				case 2:
					return 0f, 0f, -135.36f;
				case 3:
					return 0f, 0f, 184.32f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_15()
{
	if (iLocal_1215 == 0)
	{
		fLocal_1285 = Local_481.f_51.f_3;
		vLocal_1232 = { 2415.104f, 1760.313f, 88.64397f };
		vLocal_1238 = { 2421.129f, 1749.41f, 88.5206f };
		vLocal_1241 = { 2417.33f, 1753.585f, 88.63364f };
		fLocal_1286 = 16.01f;
		__LIB_2__::func_659(&uLocal_1377, Local_481.f_51, 3f, 1, 0);
		vLocal_1235 = { 2413.439f, 1769.58f, 88.65602f };
		fLocal_1284 = 16.13f;
		if (iLocal_1081 == 2)
		{
			fLocal_1285 = (fLocal_1285 - 180f);
		}
		iLocal_1215 = 1;
		__LIB_3__::func_618(vLocal_1232, 10f, 1, 0, 0, 0, 0);
		__LIB_2__::func_659(&uLocal_1376, vLocal_1232, 7f, 0, 0);
	}
	return true;
}

bool func_16()
{
	switch (iLocal_1118)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_481), __LIB_3__::func_526(&Local_481), &Local_675, &iLocal_1163, 0, 0, 1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_17()
{
	int iVar0;
	iVar0 = 0;
	switch (Local_481.f_51.f_4)
	{
		case 0:
			vLocal_390[0 /*3*/] = { 2407.274f, 1642.559f, 91.56572f };
			vLocal_390[1 /*3*/] = { 2409.314f, 1644.385f, 91.58958f };
			vLocal_390[2 /*3*/] = { 2407.491f, 1646.351f, 92.03047f };
			vLocal_390[3 /*3*/] = { 2405.908f, 1644.283f, 91.86738f };
			vLocal_390[4 /*3*/] = { 2389.204f, 1655.698f, 94.04832f };
			vLocal_390[5 /*3*/] = { 2392.528f, 1657.028f, 94.40183f };
			vLocal_390[6 /*3*/] = { 2390.753f, 1654.811f, 93.94657f };
			vLocal_390[7 /*3*/] = { 2389.055f, 1659.085f, 94.59885f };
			vLocal_390[8 /*3*/] = { 2392.582f, 1675.574f, 95.69451f };
			vLocal_390[9 /*3*/] = { 2390.598f, 1679.411f, 95.96333f };
			vLocal_390[10 /*3*/] = { 2389.095f, 1676.768f, 95.75558f };
			vLocal_390[11 /*3*/] = { 2401.496f, 1670.06f, 94.68948f };
			vLocal_390[12 /*3*/] = { 2422.708f, 1677.094f, 92.71586f };
			vLocal_390[13 /*3*/] = { 2408.395f, 1689.624f, 95.88232f };
			vLocal_390[14 /*3*/] = { 2415.27f, 1650.893f, 91.0397f };
			vLocal_390[15 /*3*/] = { 2436.586f, 1644.521f, 89.73685f };
			vLocal_390[16 /*3*/] = { 2404.489f, 1620.831f, 90.8886f };
			vLocal_390[17 /*3*/] = { 2371.755f, 1624.456f, 91.50584f };
			vLocal_390[18 /*3*/] = { 2354.004f, 1648.512f, 94.06827f };
			vLocal_390[19 /*3*/] = { 2357.914f, 1687.097f, 97.02679f };
			vLocal_390[20 /*3*/] = { 2384.329f, 1708.724f, 98.42733f };
			vLocal_390[21 /*3*/] = { 2420.97f, 1700.87f, 95.96232f };
			vLocal_390[22 /*3*/] = { 2440.03f, 1669.127f, 93.04741f };
			vLocal_390[23 /*3*/] = { 2431.289f, 1688.097f, 95.25391f };
			vLocal_390[24 /*3*/] = { 2426.086f, 1687.557f, 94.84286f };
			vLocal_390[25 /*3*/] = { 2355.077f, 1672.139f, 96.07481f };
			vLocal_390[26 /*3*/] = { 2361.156f, 1698.063f, 99.45784f };
			vLocal_390[27 /*3*/] = { 2442.436f, 1679.526f, 95.61847f };
			vLocal_390[28 /*3*/] = { 2435.219f, 1643.914f, 89.5379f };
			vLocal_390[29 /*3*/] = { 2394.582f, 1624.337f, 93.07285f };
			iLocal_389 = 29;
			break;
		case 1:
			vLocal_390[0 /*3*/] = { 2468.674f, 1576.705f, 86.24084f };
			vLocal_390[1 /*3*/] = { 2465.493f, 1576.677f, 86.22726f };
			vLocal_390[2 /*3*/] = { 2466.741f, 1579.064f, 86.24706f };
			vLocal_390[3 /*3*/] = { 2466.92f, 1573.406f, 86.20065f };
			vLocal_390[4 /*3*/] = { 2467.585f, 1567.202f, 86.13135f };
			vLocal_390[5 /*3*/] = { 2469.519f, 1569.353f, 86.17622f };
			vLocal_390[6 /*3*/] = { 2487.427f, 1550.029f, 84.58849f };
			vLocal_390[7 /*3*/] = { 2486.31f, 1556.599f, 85.16306f };
			vLocal_390[8 /*3*/] = { 2483.799f, 1552.229f, 84.74144f };
			vLocal_390[9 /*3*/] = { 2489.81f, 1553.823f, 84.74947f };
			vLocal_390[10 /*3*/] = { 2491.834f, 1558.287f, 85.29976f };
			vLocal_390[11 /*3*/] = { 2487.961f, 1560.46f, 85.84727f };
			vLocal_390[12 /*3*/] = { 2495.138f, 1583.402f, 85.32762f };
			vLocal_390[13 /*3*/] = { 2482.042f, 1582.6f, 86.2104f };
			vLocal_390[14 /*3*/] = { 2474.582f, 1600.176f, 86.20519f };
			vLocal_390[15 /*3*/] = { 2442.865f, 1594.049f, 86.48864f };
			vLocal_390[16 /*3*/] = { 2466.435f, 1618.787f, 87.80533f };
			vLocal_390[17 /*3*/] = { 2500.79f, 1604.043f, 84.66685f };
			vLocal_390[18 /*3*/] = { 2508.133f, 1574.839f, 84.66521f };
			vLocal_390[19 /*3*/] = { 2508.028f, 1544.417f, 84.26324f };
			vLocal_390[20 /*3*/] = { 2480.114f, 1526.396f, 84.57036f };
			vLocal_390[21 /*3*/] = { 2449.223f, 1546.054f, 84.74023f };
			vLocal_390[22 /*3*/] = { 2428.155f, 1560.662f, 84.26222f };
			vLocal_390[23 /*3*/] = { 2441.178f, 1560.849f, 85.69655f };
			vLocal_390[24 /*3*/] = { 2445.744f, 1559.797f, 85.62171f };
			vLocal_390[25 /*3*/] = { 2441.472f, 1565.677f, 85.92973f };
			vLocal_390[26 /*3*/] = { 2419.93f, 1591.154f, 86.72971f };
			vLocal_390[27 /*3*/] = { 2475.341f, 1626.556f, 87.60898f };
			vLocal_390[28 /*3*/] = { 2465.875f, 1630.523f, 88.99384f };
			vLocal_390[29 /*3*/] = { 2478.417f, 1596.574f, 85.99134f };
			iLocal_389 = 29;
			break;
		case 2:
			vLocal_390[0 /*3*/] = { 2314.867f, 1740.874f, 104.3214f };
			vLocal_390[1 /*3*/] = { 2316.352f, 1745.276f, 105.2123f };
			vLocal_390[2 /*3*/] = { 2318.099f, 1742.799f, 104.7948f };
			vLocal_390[3 /*3*/] = { 2313.674f, 1743.743f, 104.8545f };
			vLocal_390[4 /*3*/] = { 2336.613f, 1742.187f, 103.6699f };
			vLocal_390[5 /*3*/] = { 2334.062f, 1739.312f, 104.1366f };
			vLocal_390[6 /*3*/] = { 2337.106f, 1739.515f, 103.7069f };
			vLocal_390[7 /*3*/] = { 2334.193f, 1741.411f, 104.0852f };
			vLocal_390[8 /*3*/] = { 2343.497f, 1745.744f, 101.6646f };
			vLocal_390[9 /*3*/] = { 2333.382f, 1764.003f, 106.6485f };
			vLocal_390[10 /*3*/] = { 2349.287f, 1751.896f, 100.0006f };
			vLocal_390[11 /*3*/] = { 2351.263f, 1733.738f, 101.4189f };
			vLocal_390[12 /*3*/] = { 2321.018f, 1711.217f, 98.90485f };
			vLocal_390[13 /*3*/] = { 2331.772f, 1702.475f, 97.87445f };
			vLocal_390[14 /*3*/] = { 2294.861f, 1727.403f, 103.862f };
			vLocal_390[15 /*3*/] = { 2335.748f, 1773.074f, 108.0866f };
			vLocal_390[16 /*3*/] = { 2364.212f, 1761.774f, 105.7004f };
			vLocal_390[17 /*3*/] = { 2373.081f, 1733.385f, 94.89901f };
			vLocal_390[18 /*3*/] = { 2366.463f, 1711.398f, 100.5132f };
			vLocal_390[19 /*3*/] = { 2334.865f, 1714.568f, 102.0089f };
			vLocal_390[20 /*3*/] = { 2296.557f, 1711.706f, 100.5745f };
			vLocal_390[21 /*3*/] = { 2283.364f, 1744.179f, 105.9997f };
			vLocal_390[22 /*3*/] = { 2289.488f, 1772.59f, 108.4163f };
			vLocal_390[23 /*3*/] = { 2318.313f, 1785.329f, 113.939f };
			vLocal_390[24 /*3*/] = { 2369.362f, 1740.095f, 95.76883f };
			vLocal_390[25 /*3*/] = { 2377.717f, 1738.66f, 94.29879f };
			vLocal_390[26 /*3*/] = { 2353.663f, 1720.151f, 101.7993f };
			vLocal_390[27 /*3*/] = { 2335.841f, 1715.724f, 102.1541f };
			vLocal_390[28 /*3*/] = { 2302.942f, 1713.333f, 99.47104f };
			vLocal_390[29 /*3*/] = { 2317.355f, 1755.05f, 106.8131f };
			iLocal_389 = 29;
			break;
		case 3:
		default:
			vLocal_390[0 /*3*/] = { 2381.754f, 1753.4f, 102.4513f };
			vLocal_390[1 /*3*/] = { 2376.338f, 1751.581f, 101.1806f };
			vLocal_390[2 /*3*/] = { 2366.736f, 1755.321f, 102.9442f };
			vLocal_390[3 /*3*/] = { 2366.411f, 1761.07f, 105.6039f };
			vLocal_390[4 /*3*/] = { 2386.39f, 1762.854f, 106.4014f };
			vLocal_390[5 /*3*/] = { 2366.411f, 1761.07f, 105.6039f };
			vLocal_390[6 /*3*/] = { 2386.258f, 1781.931f, 108.4043f };
			vLocal_390[7 /*3*/] = { 2375.143f, 1779.058f, 109.5234f };
			vLocal_390[8 /*3*/] = { 2399.612f, 1765.198f, 103.3851f };
			vLocal_390[9 /*3*/] = { 2393.651f, 1784.957f, 105.4756f };
			vLocal_390[10 /*3*/] = { 2361.19f, 1776.211f, 110.0345f };
			vLocal_390[11 /*3*/] = { 2359.001f, 1759.746f, 104.5024f };
			vLocal_390[12 /*3*/] = { 2382.75f, 1745.288f, 96.90578f };
			vLocal_390[13 /*3*/] = { 2359.001f, 1759.746f, 104.5024f };
			vLocal_390[14 /*3*/] = { 2395.318f, 1753.68f, 103.2622f };
			vLocal_390[15 /*3*/] = { 2384.911f, 1806.241f, 109.3414f };
			vLocal_390[16 /*3*/] = { 2420.252f, 1788.146f, 91.84072f };
			vLocal_390[17 /*3*/] = { 2428.084f, 1754.668f, 104.2578f };
			vLocal_390[18 /*3*/] = { 2406.867f, 1727.56f, 91.20815f };
			vLocal_390[19 /*3*/] = { 2380.031f, 1722.282f, 95.20935f };
			vLocal_390[20 /*3*/] = { 2347.609f, 1735.542f, 101.959f };
			vLocal_390[21 /*3*/] = { 2335.625f, 1756.319f, 103.9591f };
			vLocal_390[22 /*3*/] = { 2346.523f, 1785.127f, 114.8639f };
			vLocal_390[23 /*3*/] = { 2419.208f, 1764.066f, 102.5361f };
			vLocal_390[24 /*3*/] = { 2416.422f, 1771.87f, 98.82829f };
			vLocal_390[25 /*3*/] = { 2401.573f, 1743.968f, 99.48017f };
			vLocal_390[26 /*3*/] = { 2373.57f, 1805.775f, 114.6114f };
			vLocal_390[27 /*3*/] = { 2350.104f, 1791.12f, 117.134f };
			vLocal_390[28 /*3*/] = { 2345.118f, 1747.625f, 100.9235f };
			vLocal_390[29 /*3*/] = { 2416.907f, 1795.691f, 98.42239f };
			iLocal_389 = 29;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_389)
	{
		vLocal_390[iVar0 /*3*/].f_2 = (vLocal_390[iVar0 /*3*/].f_2 + 0.25f);
		Local_15[iVar0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_15[iVar0 /*12*/].f_7, vLocal_390[iVar0 /*3*/], true, true, false, false, true);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_15[iVar0 /*12*/].f_8, false);
			ENTITY::SET_ENTITY_COLLISION(Local_15[iVar0 /*12*/].f_8, false, false);
		}
		iVar0++;
	}
}

void func_20()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1163[0], true);
	if (iLocal_1081 == 2)
	{
		PED::_0x923583741DC87BCE(iLocal_1163[0], "Primate");
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_1163[0], 6, true);
	__LIB_2__::func_190(iLocal_1163[0], 0);
	__LIB_3__::func_459(iLocal_1163[0], 0);
	GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1188, Local_481.f_51, 0.5f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_675[0 /*32*/].f_23)))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_1163[0], &(Local_675[0 /*32*/].f_23));
		DECORATOR::DECOR_SET_BOOL(iLocal_1163[0], "Has_Voice", true);
	}
	PED::ADD_RELATIONSHIP_GROUP("Beat_Wildman", &iLocal_1174);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1163[0], iLocal_1174);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_1163[0], false);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("WILD_UC_NAME"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1163[1], true);
	__LIB_3__::func_459(iLocal_1163[1], 0);
	__LIB_3__::func_285(iLocal_1163[0], &Local_481, 0);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1163[0]);
	AUDIO::STOP_PED_SPEAKING(iLocal_1163[0], true);
}

void func_21()
{
	__LIB_2__::func_602(&(Local_1442[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_1442[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 1, 0);
}

void func_22()
{
	Local_1073 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1073.f_4, 0, "PBL_NORMAL", false, true);
	Local_1073.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1073.f_5, 0, "PBL_NORMAL", false, true);
	Local_1073.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1073.f_6, 0, 0, false, true);
	__LIB_2__::func_106(&(Local_481.f_51), 50, 10, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1073, Local_481.f_51, 0f, 0f, fLocal_1285, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1073.f_1, vLocal_1232, 0f, 0f, fLocal_1286, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1073.f_2, vLocal_1232, 0f, 0f, fLocal_1286, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073, "PED_WILDMAN", iLocal_1163[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073, "PED_DEAD_RABBIT", iLocal_1163[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "PED_WILDMAN", iLocal_1163[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "WOLF_1", iLocal_1163[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "WOLF_2", iLocal_1163[3], 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_1073.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1073);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_1073.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1073.f_1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_1073.f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1073.f_2);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1073, "ACTION1", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1073, "ACTION2", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1073.f_2, "ACTION1", false, false);
}

bool func_23(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_80(uParam0, iParam2);
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
			if (!__LIB_4__::func_143(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
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

bool func_24()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_1073, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073, "PBL_NORMAL"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073, "PBL_NORMAL"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073, "PBL_NORMAL");
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073, "PBL_ALERT_BACK"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073, "PBL_ALERT_BACK"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073, "PBL_ALERT_BACK");
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073, "PBL_ALERT_FRONT"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073, "PBL_ALERT_FRONT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073, "PBL_ALERT_FRONT");
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073, "PBL_ALERT_LEFT"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073, "PBL_ALERT_LEFT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073, "PBL_ALERT_LEFT");
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073, "PBL_ALERT_RIGHT"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073, "PBL_ALERT_RIGHT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073, "PBL_ALERT_RIGHT");
				}
			}
			iVar0 = 1;
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_1073.f_1, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073.f_1, "PBL_NORMAL"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_NORMAL"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_NORMAL");
					if (__LIB_0__::func_86(vLocal_1369))
					{
						vLocal_1369 = { __LIB_4__::func_494(Local_1073.f_1, "PED_WILDMAN", "PBL_NORMAL") };
					}
				}
			}
			else if (__LIB_0__::func_86(vLocal_1369))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_NORMAL");
				vLocal_1369 = { __LIB_4__::func_494(Local_1073.f_1, "PED_WILDMAN", "PBL_NORMAL") };
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073.f_1, "PBL_WAITING"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_WAITING"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_WAITING");
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_1073.f_1, "PBL_WAITING_02"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_WAITING_02"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_WAITING_02");
				}
			}
			iVar1 = 1;
		}
	}
	if (iVar0 == 1 && iVar1 == 1)
	{
		iLocal_1202 = 1;
		return true;
	}
	return false;
}

bool func_29()
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	if (!__LIB_0__::func_27(iLocal_1180, 1))
	{
		func_122();
	}
	if (iLocal_1081 != 2 && !__LIB_0__::func_27(iLocal_1180, 33554432))
	{
		func_123();
	}
	if (iLocal_1205 == 1)
	{
		func_124();
	}
	func_125();
	if ((((iLocal_804 == 5 || iLocal_804 == 7) || iLocal_804 == 4) || iLocal_804 == 6) || iLocal_804 == 8)
	{
		func_126();
	}
	if (iLocal_804 == 14)
	{
		func_127();
		func_128();
		func_129();
		func_130();
		if (__LIB_0__::func_27(iLocal_1180, 8))
		{
			func_131();
		}
		else
		{
			func_132();
		}
		func_133();
		if (!MAP::DOES_BLIP_EXIST(uLocal_1168[0]))
		{
			if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
			{
				if (__LIB_0__::func_27(iLocal_1180, 8) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1163[0]))
				{
					if (MAP::DOES_BLIP_EXIST(uLocal_1168[0]))
					{
						MAP::REMOVE_BLIP(&(uLocal_1168[0]));
					}
					__LIB_2__::func_73(iLocal_1163[0], &(uLocal_1168[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, "WILD_UC_NAME");
				}
			}
		}
	}
	if (iLocal_1081 == 2)
	{
		func_135();
		if (ENTITY::DOES_ENTITY_EXIST(Local_376.f_8))
		{
			TASK::_0xA6A76D666A281F2D(Local_376.f_8, joaat("DOCUMENT_WILD_MAN_JOURNAL"));
		}
	}
	func_136();
	if (__LIB_3__::func_601(&uLocal_1333, fLocal_1290))
	{
		__LIB_2__::func_315(64252593, iLocal_1163[0], 1);
	}
	func_139();
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1073, false))
			{
				fLocal_1287 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1073);
				fLocal_1287 = fLocal_1287;
			}
		}
	}
	switch (iLocal_804)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_2, true, false))
			{
				__LIB_3__::func_594(&iLocal_1176, &uLocal_1177, 2416.306f, 1752.131f, 88.618f, 0f, 0f, -7.563f, 6.877f, 12.962f, 8f, 0, 0, 1, 0, "CAVE_SCENARIO_BLOCKER");
				__LIB_4__::func_248(2416.733f, 1752.131f, 88.61816f, 8f);
				__LIB_4__::func_248(2417.353f, 1752.137f, 106.2018f, 8f);
				if (iLocal_1081 == 2)
				{
					func_142();
					STREAMING::REQUEST_MODEL(joaat("A_C_WOLF"), false);
					STREAMING::REQUEST_MODEL(joaat("A_C_WOLF_MEDIUM"), false);
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("A_C_WOLF_SMALL"), false);
				}
				__LIB_3__::func_558(&iLocal_1479, Local_481.f_51, 0f, 0f, 0f, 160f, 160f, 20f, "REWM_AMBIENT_RESTRICTION_VOLUME");
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1479))
				{
					__LIB_3__::func_457(iLocal_1479, 0);
					POPULATION::_0xB56D41A694E42E86(iLocal_1479, 4096, 0, 0, -1, -1, 0);
				}
				__LIB_3__::func_527(&iLocal_1481, 2414.709f, 1759.637f, 88.61706f, 0f, 0f, -13.8044f, 8.507976f, 14.74552f, 5.14701f, "volTriggerCombat");
				__LIB_3__::func_557(&iLocal_1480, 2420.158f, 1753.866f, 88.61706f, 0f, 0f, -11.334f, 19.30521f, 19.22318f, 8.719916f, "volCave");
				if (iLocal_1211 == 1 && (iLocal_1081 == 0 || iLocal_1081 == 1))
				{
					iLocal_1478 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iLocal_1163[0], true, false), 0f, 0f, 0f, 27f, 27f, 10f);
					iLocal_1477 = __LIB_3__::func_721(iLocal_1163[0], iLocal_1478, 4);
				}
				ANIMSCENE::START_ANIM_SCENE(Local_1073);
				if (iLocal_1081 == 0)
				{
					fLocal_1288 = 55f;
					fLocal_1289 = 55f;
				}
				else if (iLocal_1081 == 1)
				{
					fLocal_1288 = 55f;
					fLocal_1289 = 55f;
				}
				else
				{
					fLocal_1288 = 55f;
					fLocal_1289 = 50f;
				}
				vLocal_1250[0 /*3*/] = { 2419.449f, 1754.781f, 88.63166f };
				vLocal_1250[1 /*3*/] = { 2421.127f, 1749.976f, 88.54352f };
				vLocal_1250[2 /*3*/] = { 2416.517f, 1747.718f, 88.67023f };
				vLocal_1250[3 /*3*/] = { 2414.416f, 1752.894f, 88.61585f };
				vLocal_1250[4 /*3*/] = { 2415.111f, 1757.253f, 88.65759f };
				iLocal_1185 = 4;
				iLocal_804 = 1;
			}
			break;
		case 1:
			if (iLocal_1081 == 2)
			{
				func_148();
			}
			func_149();
			if (!__LIB_0__::func_27(iLocal_1180, 256))
			{
				if (iLocal_1081 == 0)
				{
					fVar0 = 120f;
				}
				else if (iLocal_1081 == 1)
				{
					fVar0 = 120f;
				}
				else
				{
					fVar0 = 120f;
				}
				fVar1 = __LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1);
				if (fVar1 < fVar0)
				{
					if (fVar1 > 90f)
					{
						vVar2 = { __LIB_4__::func_147(Global_36, Local_481.f_51) };
						AUDIO::_PLAY_SOUND_FROM_POSITION("DISTANT_HOWL", vVar2, "REWM_Sounds", false, 0, true, 0);
						__LIB_3__::func_596(&uLocal_1333, 0);
						fLocal_1290 = 1f;
					}
					else
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("DISTANT_HOWL", iLocal_1163[0], "REWM_Sounds", false, 0, 0);
					}
					iVar5 = PED::GET_MOUNT(Global_35);
					PED::_0x06D26A96CA1BCA75(iVar5, 3, 0.8f, iLocal_1163[0]);
					iLocal_1187 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), Local_481.f_51, -1f, 120f, 120f, -1f, -1f, -1, -1);
					__LIB_1__::func_683(&iLocal_1180, 256);
					__LIB_3__::func_596(&uLocal_1327, 0);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1180, 134217728))
			{
				if (__LIB_3__::func_601(&uLocal_1327, 2.5f))
				{
					__LIB_3__::func_524(&iLocal_1187);
				}
				if (__LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < fLocal_1179)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1073, "ACTION1", true, false);
					__LIB_3__::func_596(&uLocal_1333, 0);
					fLocal_1290 = 4.75f;
					__LIB_1__::func_683(&iLocal_1180, 134217728);
					__LIB_2__::func_259(&uLocal_1327);
					__LIB_4__::func_86(&Local_1482);
					__LIB_2__::func_619(&(Local_1482.f_3), 1);
				}
			}
			if ((__LIB_4__::func_118(&uLocal_1327) >= 1f && __LIB_0__::func_27(iLocal_1180, 134217728)) && (iLocal_1081 == 0 || iLocal_1081 == 1))
			{
				if (iLocal_1211 == 1 && iLocal_1213 == 0)
				{
					PED::_0x7C00CFC48A782DC0(iLocal_1478, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					iLocal_1213 = 1;
					iVar6 = PED::GET_MOUNT(Global_35);
					PED::_0x06D26A96CA1BCA75(iVar6, 3, 1f, iLocal_1163[0]);
				}
			}
			if (__LIB_4__::func_118(&uLocal_1327) >= 2.5f)
			{
				__LIB_3__::func_524(&iLocal_1187);
			}
			if (__LIB_0__::func_27(iLocal_1180, 134217728))
			{
				if (__LIB_3__::func_601(&uLocal_1327, 7f))
				{
					iVar7 = PED::GET_MOUNT(Global_35);
					PED::_0x06D26A96CA1BCA75(iVar7, 3, 1f, iLocal_1163[0]);
					if (iLocal_1211 == 1 && iLocal_1213 == 1)
					{
						if (iLocal_1081 == 0 || iLocal_1081 == 1)
						{
							PED::_0x19C975B81BE53C28(iLocal_1478, Global_35);
							PED::_0x7C00CFC48A782DC0(iLocal_1478, iLocal_1163[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
							iLocal_1211 = 0;
						}
						else if (iLocal_1081 == 2)
						{
							__LIB_3__::func_953(&iLocal_1477, 1);
							iLocal_1211 = 0;
						}
					}
				}
			}
			if (iLocal_1212 == 1)
			{
				__LIB_17__::func_905(iLocal_1163[0], &Local_1482, 0f, 0f, 0f, 1, 30f, 110f, -1, 2000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			}
			func_159();
			if (func_160(&Local_481, 3f, fLocal_1288, fLocal_1289, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) || __LIB_0__::func_27(iLocal_1180, 268435456))
			{
				iLocal_804 = 2;
			}
			break;
		case 2:
			func_159();
			func_149();
			if (iLocal_1211 == 1 && iLocal_1213 == 1)
			{
				if (iLocal_1081 == 0 || iLocal_1081 == 1)
				{
					PED::_0x19C975B81BE53C28(iLocal_1478, Global_35);
					VOLUME::_SET_VOLUME_SCALE(iLocal_1478, 40f, 40f, 20f);
					PED::_0x7C00CFC48A782DC0(iLocal_1478, iLocal_1163[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					iLocal_1213 = 0;
				}
				else if (iLocal_1081 == 2)
				{
					__LIB_3__::func_953(&iLocal_1477, 1);
					iLocal_1213 = 0;
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1073, "HOWL", 1))
			{
				if (iLocal_1081 == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1073, 1.7f);
				}
				else if (iLocal_1081 == 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1073, 1.4f);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1073, 1.4f);
				}
			}
			else
			{
				__LIB_3__::func_608(iLocal_1163[0]);
				__LIB_2__::func_73(iLocal_1163[0], &(uLocal_1168[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				if (iLocal_1081 == 2)
				{
					func_162();
				}
				iLocal_1119 = __LIB_3__::func_112(iLocal_1163[0], Global_35, 1060437492 /* Float: 0.707f */);
				if (iLocal_1119 == 3)
				{
					iLocal_1119 = __LIB_3__::func_112(iLocal_1163[0], Global_35, 0f);
					if (iLocal_1119 == 0)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073, "PBL_ALERT_LEFT", true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073, "PBL_ALERT_BACK", true);
					}
				}
				else if (iLocal_1119 == 2)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073, "PBL_ALERT_RIGHT", true);
				}
				else if (iLocal_1119 == 0)
				{
					iLocal_1119 = __LIB_3__::func_112(iLocal_1163[0], Global_35, 1f);
					if (iLocal_1119 == 3)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073, "PBL_ALERT_LEFT", true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073, "PBL_ALERT_FRONT", true);
					}
				}
				else if (iLocal_1119 == 1)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073, "PBL_ALERT_BACK", true);
				}
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1073, "ACTION2", true, false);
				if (iLocal_1081 == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1073, 1.6f);
				}
				else if (iLocal_1081 == 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1073, 1.3f);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1073, 1.3f);
				}
				__LIB_1__::func_683(&iLocal_1180, 16384);
				iLocal_804 = 3;
			}
			break;
		case 3:
			func_159();
			func_129();
			if (iLocal_1081 == 2)
			{
				func_162();
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_1, true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "WOLF_1", iLocal_1163[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "WOLF_2", iLocal_1163[3], 0);
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1073.f_1);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_2, true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_2, "WOLF_1", iLocal_1163[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_2, "WOLF_2", iLocal_1163[3], 0);
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1073.f_2);
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_1(iLocal_1163[1], 0, 1))
			{
				__LIB_1__::func_864(iLocal_1163[1], 0, 0);
			}
			fVar8 = __LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1);
			if (fVar8 < 10f)
			{
				iVar9 = PED::GET_MOUNT(Global_35);
				PED::_0x06D26A96CA1BCA75(iVar9, 3, 1f, iLocal_1163[0]);
				if (fVar8 < 7f)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.25f);
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					}
				}
				else if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!__LIB_0__::func_163(iVar9, 1041577989))
					{
						iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						switch (iVar10)
						{
							case 0:
								TASK::TASK_HORSE_ACTION(iVar9, 1, iLocal_1163[0], 0);
								break;
							case 1:
								TASK::TASK_HORSE_ACTION(iVar9, 1, iLocal_1163[0], 0);
								break;
						}
					}
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
				}
			}
			func_162();
			func_129();
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
			fVar11 = __LIB_0__::func_94(iLocal_1163[0], vLocal_1369, 0);
			if (__LIB_0__::func_491(iLocal_1163[0], 242628503))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_1163[0]) >= 2 && iLocal_1217 == 0)
				{
					iLocal_1217 = 1;
				}
			}
			if (iLocal_1217 == 1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_1, true, false))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1073.f_1);
				}
				if (fVar11 < 0.5f || ((!__LIB_0__::func_163(iLocal_1163[0], 1435919172) && fVar11 < 5f) && Local_481.f_46 == 0))
				{
					if (!__LIB_0__::func_163(iLocal_1163[0], 1435919172))
					{
					}
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1163[0], &Local_1090);
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_1, true, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1073.f_2, false))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_1073.f_2);
						}
						ANIMSCENE::START_ANIM_SCENE(Local_1073.f_1);
						__LIB_1__::func_683(&iLocal_1180, 131072);
						__LIB_1__::func_991(iLocal_1163[0], 0);
						iLocal_804 = 9;
						iLocal_1493 = 2;
						func_21();
						__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 1, 0);
					}
				}
			}
			if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_1481) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_1163[0], iLocal_1481, true, 0)) && !__LIB_0__::func_163(iLocal_1163[0], 1435919172))
			{
				if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1163[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1163[2], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1163[3], Global_35, 17))
				{
					if (__LIB_2__::func_1(iLocal_1163[1], 0, 1))
					{
						__LIB_1__::func_864(iLocal_1163[1], 0, 0);
					}
					Local_481.f_46 = 1;
					iLocal_804 = 12;
				}
			}
			break;
		case 5:
			func_168();
			if (__LIB_2__::func_1(iLocal_1163[1], 0, 1))
			{
				__LIB_1__::func_864(iLocal_1163[1], 0, 0);
			}
			__LIB_3__::func_596(&uLocal_1363, 0);
			if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
			{
				__LIB_3__::func_608(iLocal_1163[0]);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1163[0], Global_35, 4, 16768, -1082130432 /* Float: -1f */, -1, 0);
				TASK::_0xE8F1A5B4CED3725A(iLocal_1163[0], vLocal_1232, -1082130432 /* Float: -1f */);
				__LIB_3__::func_596(&uLocal_1324, 0);
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1163[0], 3f);
				__LIB_3__::func_953(&iLocal_1477, 0);
			}
			iLocal_804 = 6;
			break;
		case 6:
			func_168();
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ANIMAL"), false);
			}
			fVar12 = __LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1);
			fVar14 = 100f;
			if (__LIB_2__::func_1(iLocal_1163[2], 0, 1))
			{
				fVar14 = __LIB_0__::func_665(Global_35, iLocal_1163[2], 1, 1);
			}
			iVar13 = 0;
			if (iLocal_1224 == 1)
			{
				if (__LIB_2__::func_710(Global_35, &uLocal_1197, 1, 1, 256, 0))
				{
					iLocal_1224 = 0;
					__LIB_4__::func_181(&uLocal_1197);
					TASK::_TASK_SMART_FLEE_STYLE_PED(PED::_GET_LAST_MOUNT(Global_35), iLocal_1163[0], 3, 0, 30f, -1, 0);
					if (__LIB_2__::func_1(iLocal_1163[2], 0, 1))
					{
						TASK::_0x3923EC958249657D(PED::_GET_LAST_MOUNT(Global_35), iLocal_1163[2], 5000f);
					}
				}
			}
			if (fVar12 < 30f)
			{
				if (fVar12 < 15f || fVar14 < 15f)
				{
					if (__LIB_4__::func_118(&uLocal_1363) > 1f)
					{
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
							TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(Global_35), 2, iLocal_1163[0], 0);
							__LIB_2__::func_259(&uLocal_1363);
							iLocal_1224 = 1;
						}
					}
				}
				if (fVar12 < 15f)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						iVar15 = PED::GET_MOUNT(Global_35);
						if (ENTITY::DOES_ENTITY_EXIST(iVar15))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar15, 1.25f);
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					}
				}
				else if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					iVar16 = PED::GET_MOUNT(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(iVar16))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar16, 1.75f);
					}
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
				}
				iVar13 = 1;
			}
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
			if (iLocal_1081 == 0 || iLocal_1081 == 1)
			{
				if (!__LIB_0__::func_163(iLocal_1163[0], 1435919172))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1163[0], Global_35, 4, 16768, -1082130432 /* Float: -1f */, -1, 0);
					TASK::_0xE8F1A5B4CED3725A(iLocal_1163[0], vLocal_1232, -1082130432 /* Float: -1f */);
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
				}
			}
			if ((__LIB_0__::func_27(iLocal_1180, 33554432) && __LIB_2__::func_1(iLocal_1163[2], 0, 1)) && !__LIB_0__::func_27(iLocal_1180, 67108864))
			{
				FLOCK::_0xA881F5C77A560906(10f);
				TASK::TASK_COMBAT_PED(iLocal_1163[2], Global_35, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_1163[2], true);
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[2], 112, 9001f);
				if (!MAP::DOES_BLIP_EXIST(uLocal_1168[2]))
				{
					MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_1163[2]);
				}
				PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1163[2]);
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_1163[2], "BARK", false);
				__LIB_1__::func_683(&iLocal_1180, 67108864);
			}
			if (__LIB_0__::func_27(iLocal_1180, 33554432) && !__LIB_2__::func_1(iLocal_1163[2], 0, 1))
			{
				iLocal_1221 = 1;
				__LIB_1__::func_681(&iLocal_1180, 33554432);
				__LIB_1__::func_681(&iLocal_1180, 67108864);
				__LIB_1__::func_681(&iLocal_1180, 16);
			}
			if (__LIB_0__::func_27(iLocal_1180, 67108864) && !__LIB_0__::func_27(iLocal_1180, 16))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (__LIB_0__::func_396(Global_35))
					{
						iVar17 = PED::GET_MOUNT(Global_35);
						if (__LIB_2__::func_1(iVar17, 0, 1))
						{
							TASK::TASK_HORSE_ACTION(iVar17, 4, iLocal_1163[2], 0);
						}
					}
					__LIB_1__::func_683(&iLocal_1180, 16);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1180, 16777216) && (__LIB_0__::func_94(iLocal_1163[0], Local_481.f_51, 1) > 7.5f || iVar13 == 1))
			{
				if (iLocal_1214 == 1)
				{
					iLocal_1221 = 1;
					if (iLocal_1188 != 0)
					{
						GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1188);
						iLocal_1188 = 0;
					}
					__LIB_1__::func_683(&iLocal_1180, 16777216);
				}
			}
			if (__LIB_2__::func_901(iLocal_1163[0], Global_35))
			{
				__LIB_3__::func_666(73, 0, 2, 0, 0);
				Local_481.f_44 = 1;
				return true;
			}
			if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
			{
				if (__LIB_4__::func_118(&uLocal_1324) > 1f && iLocal_1210 == 1)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1163[0], 3f);
					__LIB_1__::func_561(&uLocal_1324);
				}
				if (__LIB_3__::func_601(&uLocal_1324, 2f) && iLocal_1210 == 0)
				{
					__LIB_3__::func_596(&uLocal_1324, 0);
					iLocal_1210 = 1;
					__LIB_4__::func_86(&Local_1482);
				}
				if (((__LIB_2__::func_118(iLocal_1163[0], 1, 1) > 17f || __LIB_0__::func_27(iLocal_1180, 33554432)) && iLocal_1210 == 1) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_1163[0]))
				{
					__LIB_2__::func_426(&(iLocal_1163[0]));
					__LIB_3__::func_658(iLocal_1477, 1);
					Local_481.f_44 = 1;
					if (__LIB_2__::func_1(iLocal_1163[2], 0, 1))
					{
						iLocal_804 = 8;
					}
					else
					{
						return true;
					}
				}
			}
			else
			{
				Local_481.f_44 = 1;
			}
			break;
		case 8:
			if (iLocal_1224 == 1)
			{
				if (__LIB_2__::func_710(Global_35, &uLocal_1197, 1, 1, 256, 0))
				{
					iLocal_1224 = 0;
				}
				return false;
			}
			if (!__LIB_2__::func_1(iLocal_1163[0], 0, 1))
			{
				if (!__LIB_2__::func_1(iLocal_1163[2], 0, 1))
				{
					return true;
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_1163[2], 1, 1) > 40f)
				{
					return true;
				}
			}
			break;
		case 9:
			func_129();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073.f_1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1073.f_1, false))
				{
					if (!__LIB_0__::func_27(iLocal_1180, 2048))
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_LEAVE"))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_LEAVE");
						}
					}
					if (!__LIB_0__::func_27(iLocal_1180, 2048) && !ANIMSCENE::_0x1F0E401031E20146(Local_1073.f_1, "PBL_LEAVE"))
					{
						if (__LIB_0__::func_393(Global_35, iLocal_1480, 0, 1))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_LEAVE"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073.f_1, "PBL_LEAVE", true);
								__LIB_3__::func_596(&uLocal_1345, 0);
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], 77774557))
					{
						if (iLocal_1181 == 0)
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_WAITING_02"))
							{
								iLocal_1181 = 1;
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073.f_1, "PBL_WAITING_02", true);
								if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_WAITING"))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_WAITING");
								}
							}
							else
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_WAITING_02");
							}
						}
						else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_WAITING"))
						{
							iLocal_1181 = 0;
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1073.f_1, "PBL_WAITING", true);
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1073.f_1, "PBL_WAITING_02"))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_WAITING_02");
							}
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_WAITING");
						}
					}
					if ((((__LIB_0__::func_393(Global_35, iLocal_1481, 0, 1) || (__LIB_0__::func_393(Global_35, iLocal_1480, 0, 1) && __LIB_4__::func_118(&uLocal_1345) > 7f)) || __LIB_0__::func_27(iLocal_1180, 536870912)) && !__LIB_0__::func_899(&uLocal_1330)) && ((ANIMSCENE::_0x8D81E7824B7753F7(Local_1073.f_1, "NUZZLE", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_1073.f_1, "PR", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_1073.f_1, "PL", 1)))
					{
						iLocal_804 = 12;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
						{
							if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_1163[0]))
							{
								PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_1163[0]);
							}
						}
					}
				}
			}
			break;
		case 12:
			iLocal_1209 = 1;
			func_129();
			__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 0, 0);
			__LIB_2__::func_480(&Local_1442, 1, 1, 1, 0);
			__LIB_4__::func_399(&(Local_1378[0 /*21*/]), &Local_1442);
			__LIB_4__::func_86(&Local_1482);
			__LIB_2__::func_298();
			__LIB_0__::func_7(&(Local_1482.f_3), 4);
			__LIB_0__::func_7(&(Local_1482.f_3), 2);
			__LIB_3__::func_608(iLocal_1163[0]);
			func_183();
			func_184();
			Local_481.f_46 = 1;
			iLocal_804 = 13;
			break;
		case 13:
			func_129();
			func_131();
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
			if ((__LIB_4__::func_118(&uLocal_1321) > 0.75f && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[0], Local_1026[0 /*2*/], Local_1026[0 /*2*/].f_1, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[0], Local_1026[1 /*2*/], Local_1026[1 /*2*/].f_1, 1))
			{
				iLocal_1205 = 1;
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1163[0], 0f);
				func_185(&uLocal_1321);
			}
			if (func_186())
			{
				iLocal_1199 = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0"), 2414.32f, 1767.23f, 88.66f, -90f, 0, 0, 0);
				iLocal_1200 = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0"), 2414.57f, 1766.9f, 88.72f, 0f, 0, 0, 0);
				iLocal_1201 = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0"), 2414.83f, 1767.31f, 88.65f, 90f, 0, 0, 0);
				if (__LIB_2__::func_1(iLocal_1163[2], 0, 1))
				{
					TASK::TASK_COMBAT_PED(iLocal_1163[2], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_1163[2], true);
					FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[2], 112, 9001f);
				}
				if (__LIB_2__::func_1(iLocal_1163[3], 0, 1))
				{
					TASK::TASK_COMBAT_PED(iLocal_1163[3], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_1163[3], true);
					FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[3], 112, 9001f);
				}
				iLocal_804 = 14;
			}
			break;
		case 14:
			func_129();
			func_186();
			if (((iLocal_1225 == 1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !__LIB_3__::func_982()) && !__LIB_3__::func_463(joaat("DOCUMENT_WILD_MAN_JOURNAL"), 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_376.f_8))
				{
					if (iLocal_1229 == 1)
					{
						iLocal_1229 = 0;
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1199))
						{
							TASK::_DELETE_SCENARIO_POINT(iLocal_1199);
						}
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1200))
						{
							TASK::_DELETE_SCENARIO_POINT(iLocal_1200);
						}
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1201))
						{
							TASK::_DELETE_SCENARIO_POINT(iLocal_1201);
						}
						iLocal_1199 = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0"), 2414.32f, 1767.23f, 88.66f, -90f, 0, 0, 0);
						iLocal_1200 = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0"), 2414.57f, 1766.9f, 88.72f, 0f, 0, 0, 0);
						iLocal_1201 = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0"), 2414.83f, 1767.31f, 88.65f, 90f, 0, 0, 0);
					}
				}
			}
			if (__LIB_4__::func_118(&uLocal_1357) > 11f)
			{
				__LIB_1__::func_561(&uLocal_1357);
			}
			if (!__LIB_0__::func_27(iLocal_1180, 8192))
			{
				if (__LIB_3__::func_601(&uLocal_1366, 1f))
				{
					__LIB_3__::func_465(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, iLocal_1163[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_683(&iLocal_1180, 8192);
				}
			}
			if (((__LIB_2__::func_1(iLocal_1163[0], 0, 0) && !__LIB_0__::func_27(iLocal_1180, 1048576)) && !__LIB_0__::func_27(iLocal_1180, 32768)) && __LIB_0__::func_27(iLocal_1180, 8388608))
			{
				iVar18 = __LIB_4__::func_5(Global_35);
				iVar19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar18);
				if (iVar19 == iLocal_1163[2])
				{
					if (!__LIB_0__::func_27(iLocal_1180, 64))
					{
						if (!__LIB_0__::func_899(&uLocal_1354))
						{
							__LIB_3__::func_596(&uLocal_1354, 0);
							__LIB_2__::func_259(&uLocal_1357);
						}
						else if (__LIB_4__::func_118(&uLocal_1354) > 4f)
						{
							__LIB_2__::func_504(iLocal_1163[0], 0);
							__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_WOLFTWO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_1180, 64);
							__LIB_1__::func_561(&uLocal_1354);
						}
					}
				}
				else if (iVar19 == iLocal_1163[3])
				{
					if (!__LIB_0__::func_27(iLocal_1180, 128))
					{
						if (!__LIB_0__::func_899(&uLocal_1354))
						{
							__LIB_3__::func_596(&uLocal_1354, 0);
							__LIB_2__::func_259(&uLocal_1357);
						}
						else if (__LIB_4__::func_118(&uLocal_1354) > 4f)
						{
							__LIB_2__::func_504(iLocal_1163[0], 0);
							__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_WOLFTWO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_1180, 128);
							__LIB_1__::func_561(&uLocal_1354);
						}
					}
				}
			}
			if (!__LIB_2__::func_1(iLocal_1163[0], 0, 0))
			{
				if (((iLocal_1081 == 2 && __LIB_0__::func_27(iLocal_1180, 2)) || iLocal_1081 == 0) || iLocal_1081 == 1)
				{
					return true;
				}
			}
			if (__LIB_3__::func_332(vLocal_1232, 1) > 50f)
			{
				if (__LIB_2__::func_1(iLocal_1163[0], 0, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1163[0], Global_35, 3, 128, -1082130432 /* Float: -1f */, -1, 0);
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
					PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
				}
				return true;
			}
			break;
	}
	return false;
}

void func_50(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		func_80(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_226(uParam0->f_3, uParam0->f_185);
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
		func_227(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_53()
{
	Local_675[0 /*32*/].f_1 = joaat("RE_WILDMAN_01");
	Local_675[0 /*32*/] = 4;
	StringCopy(&(Local_675[0 /*32*/].f_23), "WILDMAN", 64);
	Local_675[0 /*32*/].f_3 = 1417771390;
	__LIB_3__::func_303(&(Local_675[0 /*32*/].f_22));
	Local_675[1 /*32*/].f_1 = joaat("A_C_RABBIT_01");
	Local_675[1 /*32*/] = 28;
	Local_675[2 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
	Local_675[2 /*32*/] = 28;
	__LIB_3__::func_303(&(Local_675[2 /*32*/].f_22));
	Local_675[3 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
	Local_675[3 /*32*/] = 28;
	__LIB_3__::func_303(&(Local_675[3 /*32*/].f_22));
}

void func_54()
{
	__LIB_3__::func_445(&Local_675);
}

void func_55()
{
	Local_1026[0 /*2*/] = "script_re@wild_man";
	Local_1026[0 /*2*/].f_1 = "order_attack_n_wild";
	Local_1026[1 /*2*/] = "script_re@wild_man";
	Local_1026[1 /*2*/].f_1 = "order_attack_nuzzle_wild";
	Local_1026[2 /*2*/] = "script_re@wild_man";
	Local_1026[2 /*2*/].f_1 = "order_attack_n_wolf01";
	Local_1026[3 /*2*/] = "script_re@wild_man";
	Local_1026[3 /*2*/].f_1 = "order_attack_n_wolf02";
	Local_1026[4 /*2*/] = "script_re@wild_man";
	Local_1026[4 /*2*/].f_1 = "attack_idle_one_wild";
	Local_1026[5 /*2*/] = "script_re@wild_man";
	Local_1026[5 /*2*/].f_1 = "wolf_die_one_wild";
	Local_1026[6 /*2*/] = "script_re@wild_man";
	Local_1026[6 /*2*/].f_1 = "wolf_die_two_wild";
	Local_1026[7 /*2*/] = "script_re@wild_man";
	Local_1026[7 /*2*/].f_1 = "cry_loop_wild";
	Local_1026[8 /*2*/] = "script_re@wild_man";
	Local_1026[8 /*2*/].f_1 = "cry_getup_wild";
	Local_1026[9 /*2*/] = "script_re@wild_man";
	Local_1026[9 /*2*/].f_1 = "alert_flee_back_wildman";
	Local_1026[10 /*2*/] = "script_re@wild_man";
	Local_1026[10 /*2*/].f_1 = "alert_flee_n_wildman";
	Local_1026[11 /*2*/] = "script_re@wild_man";
	Local_1026[11 /*2*/].f_1 = "alert_flee_l_wildman";
	Local_1026[12 /*2*/] = "script_re@wild_man";
	Local_1026[12 /*2*/].f_1 = "alert_flee_r_wildman";
	Local_1026[13 /*2*/] = "amb_creature_mammal@world_wolf_sleeping@base";
	Local_1026[13 /*2*/].f_1 = "base";
	Local_1026[14 /*2*/] = "amb_creature_mammal@world_wolf_sleeping@stand_enter";
	Local_1026[14 /*2*/].f_1 = "enter";
	Local_1026[15 /*2*/] = "amb_creature_mammal@world_wolf_sleeping@stand_exit";
	Local_1026[15 /*2*/].f_1 = "exit";
	Local_1026[16 /*2*/] = "amb_creature_mammal@world_wolf_resting@base";
	Local_1026[16 /*2*/].f_1 = "base";
	Local_1026[17 /*2*/] = "amb_creature_mammal@world_wolf_resting@stand_enter";
	Local_1026[17 /*2*/].f_1 = "enter";
	Local_1026[18 /*2*/] = "amb_creature_mammal@world_wolf_resting@stand_exit";
	Local_1026[18 /*2*/].f_1 = "exit";
	Local_1026[19 /*2*/] = "script_re@wild_man";
	Local_1026[19 /*2*/].f_1 = "leave_wild";
	Local_1026[21 /*2*/] = "script_re@wild_man";
	Local_1026[21 /*2*/].f_1 = "eat_loop_wildman";
	Local_1026[20 /*2*/] = "script_re@wild_man";
	Local_1026[20 /*2*/].f_1 = "enter_den_wild";
	Local_1026[22 /*2*/] = "script_re@wild_man";
	Local_1026[22 /*2*/].f_1 = "howl_wildman";
	__LIB_3__::func_318(Local_1026[0 /*2*/], &uLocal_841);
	__LIB_3__::func_318(Local_1026[13 /*2*/], &uLocal_841);
	__LIB_3__::func_318(Local_1026[14 /*2*/], &uLocal_841);
	__LIB_3__::func_318(Local_1026[15 /*2*/], &uLocal_841);
	__LIB_3__::func_318(Local_1026[16 /*2*/], &uLocal_841);
	__LIB_3__::func_318(Local_1026[17 /*2*/], &uLocal_841);
	__LIB_3__::func_318(Local_1026[18 /*2*/], &uLocal_841);
}

void func_56()
{
	Local_805.f_8 = 0;
	Local_805.f_10.f_17 = "MECH_PICKUP@OBJECT";
	Local_805.f_10.f_15 = "pickup_low";
	Local_805.f_10.f_11 = 38.5f;
	Local_805.f_10.f_8 = { 1.3987f, 1.167f, -0.6517f };
	Local_805.f_10.f_12 = { -1.3775f, 0.8164f, 0.4297f };
	Local_805.f_10.f_22 = 2f;
	__LIB_3__::func_318(Local_805.f_10.f_17, &uLocal_841);
}

void func_57()
{
	Local_1073.f_4 = "script@beat@wilderness@wildMan@wildMan";
	Local_1073.f_5 = "script@beat@wilderness@wildMan@wildManDen";
	Local_1073.f_6 = "script@beat@wilderness@wildMan@wildManWolfIdle";
}

void func_58()
{
	Local_15[0 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[1 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[2 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[3 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[4 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[5 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[6 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[7 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[8 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[9 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[10 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[11 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[12 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[13 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[14 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[15 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[16 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[17 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[18 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[19 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[20 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[21 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[22 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[23 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[24 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[25 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[26 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[27 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[28 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_15[29 /*12*/].f_7 = joaat("P_CRATE03X");
	Local_376.f_7 = joaat("P_CS_BOOKHARDCV02X_DUPE");
}

void func_59()
{
	__LIB_3__::func_314(&Local_15);
	STREAMING::REQUEST_MODEL(Local_376.f_7, false);
}

void func_80(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_226(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_122()
{
	if (iLocal_1081 == 2)
	{
		if ((__LIB_4__::func_500("j_14_cave_wildman", 1) && __LIB_4__::func_500("j_14_cave_wildman_unlit", 0)) && __LIB_4__::func_500("j_14_cave_wildman_Lit", 1))
		{
			__LIB_1__::func_683(&iLocal_1180, 1);
		}
	}
	else if ((__LIB_4__::func_500("j_14_cave_wildman", 1) && __LIB_4__::func_500("j_14_cave_wildman_unlit", 1)) && __LIB_4__::func_500("j_14_cave_wildman_Lit", 0))
	{
		__LIB_1__::func_683(&iLocal_1180, 1);
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	int iVar22;
	if (iLocal_1221 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	fVar2 = 901f;
	fVar3 = 901f;
	fVar5 = 900f;
	iVar6 = 0;
	vVar7 = { ENTITY::GET_ENTITY_COORDS(iLocal_1163[0], true, false) };
	if (__LIB_0__::func_86(vVar7))
	{
		vVar7 = { Local_481.f_51 };
	}
	vVar10 = { __LIB_4__::func_345(Global_35, vVar7, 1065353216 /* Float: 1f */) };
	vVar13 = { __LIB_4__::func_83(vVar10, 0) };
	vVar16 = { vVar7 };
	vVar19 = { vVar7 + vVar13 };
	if (__LIB_0__::func_195(vVar16, vVar19, Global_36))
	{
	}
	iVar1 = 0;
	while (iVar1 <= iLocal_389)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Local_15[iVar1 /*12*/].f_8))
		{
			fVar2 = __LIB_0__::func_94(Global_35, vLocal_390[iVar1 /*3*/], 1);
			fVar3 = __LIB_0__::func_94(iLocal_1163[0], vLocal_390[iVar1 /*3*/], 1);
			iVar22 = 0;
			if (!__LIB_0__::func_195(vVar16, vVar19, vLocal_390[iVar1 /*3*/]))
			{
				if (iLocal_1193 == iVar1 && iLocal_1194 == iVar1)
				{
					iVar22 = 1;
					iLocal_1193 = -1;
					iLocal_1194 = -1;
				}
				if (((fVar3 < fVar5 || iVar6 == 0) && fVar2 > 7f) && iVar22 == 0)
				{
					fVar5 = fVar3;
					iVar4 = iVar1;
					iVar0 = 1;
					iVar6 = 1;
				}
			}
			else if (iVar6 == 0)
			{
				if (fVar3 < fVar5)
				{
					fVar5 = fVar3;
					iVar4 = iVar1;
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		if ((fVar5 > 40f && iVar6 == 0) && __LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < 15f)
		{
			func_344(0);
		}
		else
		{
			func_345(vLocal_390[iVar4 /*3*/]);
			if (iLocal_1195 == 1)
			{
				iLocal_1193 = iVar4;
			}
			else
			{
				iLocal_1194 = iVar4;
			}
			iLocal_1195++;
			if (iLocal_1195 == 3)
			{
				iLocal_1195 = 1;
			}
		}
	}
}

void func_124()
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
	{
		if (((__LIB_0__::func_27(iLocal_1180, 1048576) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[0], Local_1026[5 /*2*/], Local_1026[5 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[0], Local_1026[6 /*2*/], Local_1026[6 /*2*/].f_1, 1)) || __LIB_0__::func_27(iLocal_1180, 32))
		{
			return;
		}
		if (!__LIB_0__::func_899(&uLocal_1348))
		{
			__LIB_3__::func_596(&uLocal_1348, 0);
		}
		if (__LIB_4__::func_118(&uLocal_1348) > 2f && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, 1))
		{
			iLocal_1119 = __LIB_3__::func_112(iLocal_1163[0], Global_35, 1060437492 /* Float: 0.707f */);
			if (iLocal_1119 == 0)
			{
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_PLAY_ANIM(0, Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 1048576, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[0], iLocal_1173);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
				__LIB_2__::func_259(&uLocal_1348);
			}
		}
		if (((__LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < 2f || !__LIB_0__::func_393(iLocal_1163[0], iLocal_1480, 0, 1)) && iLocal_1206 == 0) && !__LIB_0__::func_27(iLocal_1180, 32))
		{
			iLocal_1206 = 1;
			iLocal_1186 = 2;
			iVar5 = 1;
			fVar7 = 2f;
			fVar8 = 1f;
			iVar6 = iLocal_1185 + 1;
			iVar6 = func_346(iVar6);
			fVar8 = __LIB_0__::func_94(Global_35, vLocal_1250[iVar6 /*3*/], 1);
			iVar6 = (iLocal_1185 - 1);
			iVar6 = func_346(iVar6);
			fVar7 = __LIB_0__::func_94(Global_35, vLocal_1250[iVar6 /*3*/], 1);
			if (fVar8 < fVar7)
			{
				iVar5 = -1;
			}
			iVar0[0] = -10;
			iVar0[1] = -10;
			iVar0[2] = -10;
			iVar0[3] = -10;
			iVar0[0] = (iLocal_1185 + iVar5);
			iVar0[0] = func_346(iVar0[0]);
			iLocal_1185 = iVar0[0];
			TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, -8f);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1250[iVar0[0] /*3*/], 2f, -1, 0.25f, 1, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::TASK_PLAY_ANIM(0, Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 1048576, false, 0, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			__LIB_1__::func_474(iLocal_1163[0], &iLocal_1173, 0, 0, 1, 1);
		}
		else if (iLocal_1206 == 1)
		{
			if (__LIB_0__::func_163(iLocal_1163[0], 242628503))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_1163[0]) >= iLocal_1186)
				{
					iLocal_1206 = 0;
				}
			}
		}
	}
}

void func_125()
{
	int iVar0;
	if (__LIB_3__::func_601(&uLocal_1342, 2.5f))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1163[0], false);
	}
	if ((!__LIB_0__::func_27(iLocal_1180, 1048576) && !__LIB_0__::func_27(iLocal_1180, 32768)) && __LIB_0__::func_27(iLocal_1180, 131072))
	{
		if ((PED::_IS_PED_HOGTIED(iLocal_1163[0]) && !__LIB_2__::func_1(iLocal_1163[2], 0, 1)) && !__LIB_2__::func_1(iLocal_1163[3], 0, 1))
		{
			__LIB_1__::func_683(&iLocal_1180, 1048576);
		}
		iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_1163[0]);
		if (iVar0 <= 40 || PED::_0xBD6B242B8BD5543A(iLocal_1163[0]))
		{
			if (iVar0 <= 40)
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_1163[0], false);
			}
			if (PED::_0xBD6B242B8BD5543A(iLocal_1163[0]))
			{
				iLocal_1226 = 1;
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1163[0]))
				{
					__LIB_1__::func_864(iLocal_1163[0], 1, 0);
				}
			}
			TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, -8f);
			__LIB_1__::func_683(&iLocal_1180, 1048576);
			if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
			{
				__LIB_4__::func_63(iLocal_1163[0], 30);
				TASK::TASK_KNOCKED_OUT(iLocal_1163[0], 9000f, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1163[0], true);
				__LIB_3__::func_596(&uLocal_1342, 0);
				PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
			}
			__LIB_3__::func_465(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, iLocal_1163[0], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_991(iLocal_1163[0], 0);
			__LIB_1__::func_681(&iLocal_1180, 8);
		}
	}
}

void func_126()
{
	float fVar0;
	int iVar1;
	if (__LIB_0__::func_27(iLocal_1180, 131072) || __LIB_0__::func_27(iLocal_1180, 1048576))
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
	{
		fVar0 = 50f;
		fVar0 = __LIB_0__::func_94(iLocal_1163[0], vLocal_1369, 0);
		if (fVar0 < 10f)
		{
			return;
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1163[0]))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
			if (iLocal_1183 == iVar1)
			{
				iVar1++;
			}
			if (iVar1 > 7)
			{
				iVar1 = 0;
			}
			iLocal_1183 = iVar1;
			switch (iVar1)
			{
				case 0:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 1:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 2:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 3:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_READY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 4:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_IDLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 5:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_SPUR", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 6:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_D", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
				case 7:
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_E", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					break;
			}
		}
	}
}

void func_127()
{
	if (!__LIB_0__::func_27(iLocal_1180, 2))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1199))
		{
			if (iLocal_1228 == 0)
			{
				iLocal_1228 = 1;
				if (__LIB_0__::func_94(iLocal_1163[2], vLocal_1247, 1) < 3f && __LIB_10__::func_388(iLocal_1163[2]))
				{
					iLocal_1207 = 1;
					__LIB_3__::func_459(iLocal_1163[2], 0);
				}
				if (__LIB_0__::func_94(iLocal_1163[3], vLocal_1247, 1) < 3f && __LIB_10__::func_388(iLocal_1163[3]))
				{
					iLocal_1208 = 1;
					__LIB_3__::func_459(iLocal_1163[3], 0);
				}
			}
		}
		if (__LIB_0__::func_94(Global_35, vLocal_1247, 0) < 4f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_376.f_8))
			{
				TASK::_0xA6A76D666A281F2D(Local_376.f_8, joaat("DOCUMENT_WILD_MAN_JOURNAL"));
			}
			if (iLocal_1222 == 0)
			{
				iLocal_1222 = 1;
			}
		}
	}
}

void func_128()
{
	if (!__LIB_0__::func_27(iLocal_1180, 4194304) && !__LIB_0__::func_27(iLocal_1180, 1048576))
	{
		if (__LIB_2__::func_1(iLocal_1163[0], 0, 1) && (PED::IS_PED_RAGDOLL(iLocal_1163[0]) || TASK::IS_PED_GETTING_UP(iLocal_1163[0])))
		{
			__LIB_4__::func_63(iLocal_1163[0], 30);
			TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[6 /*2*/], Local_1026[6 /*2*/].f_1, -8f);
			TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[7 /*2*/], Local_1026[7 /*2*/].f_1, -8f);
			__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 0, 0);
			__LIB_2__::func_480(&Local_1442, 1, 1, 1, 0);
			__LIB_4__::func_399(&(Local_1378[0 /*21*/]), &Local_1442);
		}
	}
}

void func_129()
{
	if (!__LIB_0__::func_27(iLocal_1180, 2048))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], 157502494))
		{
			__LIB_1__::func_683(&iLocal_1180, 2048);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1180, 4096))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], joaat("RE_WILD_UNI_ALL_GETHIM")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GETHIM", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_1180, 4096);
		}
	}
	if (iLocal_1209 == 0)
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], -1931509438) || (!__LIB_0__::func_163(iLocal_1163[0], 1435919172) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1163[0], Local_1073))) || (__LIB_0__::func_27(iLocal_1180, 16384) && (iLocal_1081 == 0 || iLocal_1081 == 1)))
		{
			func_168();
			if (!__LIB_0__::func_163(iLocal_1163[0], 1435919172) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1163[0], Local_1073))
			{
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1073, "PED_WILDMAN", iLocal_1163[0]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1073, "PED_DEAD_RABBIT", iLocal_1163[1]);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_1163[1]);
			if (iLocal_1081 == 0 || iLocal_1081 == 1)
			{
				iLocal_804 = 5;
				iLocal_1209 = 1;
			}
			else if (iLocal_1081 == 2)
			{
				if (func_351())
				{
					iLocal_804 = 4;
					iLocal_1209 = 1;
					PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_1163[0], 1);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1163[0], 2f);
				}
			}
		}
	}
	if ((iLocal_1209 == 1 && iLocal_1230 == 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		iLocal_1230 = 1;
		func_21();
		__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 1, 0);
		iLocal_1493 = 1;
	}
	if ((((__LIB_0__::func_27(iLocal_1180, 8388608) && !__LIB_0__::func_27(iLocal_1180, 32768)) && !__LIB_0__::func_27(iLocal_1180, 1048576)) && !__LIB_0__::func_27(iLocal_1180, 2097152)) && __LIB_0__::func_665(Global_35, iLocal_1163[0], 0, 1) < 2f)
	{
		__LIB_2__::func_504(iLocal_1163[0], 0);
		__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_LEAVE_2", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_683(&iLocal_1180, 2097152);
		iLocal_1184++;
	}
	if (!__LIB_0__::func_27(iLocal_1180, 4))
	{
		if (((((((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], 1996600636) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[0], Local_1026[7 /*2*/], Local_1026[7 /*2*/].f_1, 1)) || PED::_IS_PED_HOGTIED(iLocal_1163[0])) && !__LIB_0__::func_899(&uLocal_1330)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1163[0])) && !__LIB_0__::func_27(iLocal_1180, 32768)) && !__LIB_2__::func_1(iLocal_1163[2], 0, 1)) && !__LIB_2__::func_1(iLocal_1163[3], 0, 1))
		{
			func_352();
			iLocal_1493 = 3;
			__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 1, 0);
			__LIB_1__::func_683(&iLocal_1180, 4);
		}
	}
	if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], 1996600636) || PED::_IS_PED_HOGTIED(iLocal_1163[0])) && !__LIB_0__::func_27(iLocal_1180, 32768))
	{
		if (PED::_IS_PED_HOGTIED(iLocal_1163[0]))
		{
			if (!__LIB_0__::func_899(&uLocal_1336))
			{
				__LIB_3__::func_596(&uLocal_1336, 0);
			}
			if (__LIB_3__::func_601(&uLocal_1336, 5f))
			{
				if (iLocal_1184 <= 0)
				{
					iLocal_1184 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (!__LIB_0__::func_27(iLocal_1180, 8388608))
					{
						TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, -8f);
						__LIB_1__::func_683(&iLocal_1180, 8388608);
					}
				}
				else
				{
					iLocal_1184 = (iLocal_1184 - 1);
				}
			}
			return;
		}
		if (iLocal_1184 <= 0)
		{
			iLocal_1184 = MISC::GET_RANDOM_INT_IN_RANGE(1, 7);
			if (!__LIB_0__::func_27(iLocal_1180, 8388608))
			{
				TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, -8f);
				__LIB_1__::func_683(&iLocal_1180, 8388608);
			}
		}
		else
		{
			iLocal_1184 = (iLocal_1184 - 1);
		}
	}
}

void func_130()
{
	float fVar0;
	vector3 vVar1;
	if (((((__LIB_0__::func_27(iLocal_1180, 32768) || (!__LIB_0__::func_27(iLocal_1180, 1048576) && !__LIB_0__::func_27(iLocal_1180, 8388608))) || __LIB_0__::func_27(iLocal_1180, 8)) || iLocal_804 != 14) || iLocal_1226 == 1) || PED::_0xBD6B242B8BD5543A(iLocal_1163[0]))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_1180, 1048576) && ENTITY::DOES_ENTITY_EXIST(iLocal_1163[0]))
	{
		PED::_0x8B3B71C80A29A4BB(iLocal_1163[0], joaat("MOODDEAD"), 6);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_1163[0], false);
		PED::SET_PED_RESET_FLAG(iLocal_1163[0], 269, true);
		if ((((!PED::_IS_METAPED_USING_COMPONENT(iLocal_1163[0], joaat("HEADS")) || PED::_IS_METAPED_USING_COMPONENT(iLocal_1163[0], -390732739)) || PED::_IS_METAPED_USING_COMPONENT(iLocal_1163[0], -1593369262)) || PED::_IS_METAPED_USING_COMPONENT(iLocal_1163[0], 539656276)) || PED::_IS_METAPED_USING_COMPONENT(iLocal_1163[0], 1666268640))
		{
			return;
		}
	}
	if (!__LIB_0__::func_899(&uLocal_1339))
	{
		__LIB_3__::func_596(&uLocal_1339, 0);
	}
	fVar0 = __LIB_4__::func_118(&uLocal_1339);
	if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1163[0]) && iLocal_1218 == 0)
	{
		__LIB_2__::func_259(&uLocal_1339);
	}
	else if (((fVar0 > 5f && iLocal_1218 == 0) && (__LIB_0__::func_27(iLocal_1180, 2) || iLocal_1222 == 1)) && __LIB_0__::func_94(Global_35, 2413.037f, 1743.682f, 88.62486f, 1) > 2f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(2413.037f, 1743.682f, 88.62486f, 1f) && !__LIB_0__::func_899(&uLocal_1357))
		{
			if (__LIB_0__::func_899(&uLocal_1354))
			{
				__LIB_1__::func_561(&uLocal_1354);
			}
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1163[0], true, false) };
			if (__LIB_3__::func_528(iLocal_1163[0], Global_35))
			{
				GRAPHICS::_ADD_BLOOD_POOL(vVar1, true);
				__LIB_4__::func_63(iLocal_1163[0], 60);
			}
			if (!__LIB_2__::func_1(iLocal_1163[0], 0, 1))
			{
				PED::REVIVE_INJURED_PED(iLocal_1163[0]);
			}
			TASK::CLEAR_PED_TASKS(iLocal_1163[0], true, false);
			iLocal_1218 = 1;
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1163[0], 2413.037f, 1743.682f, 88.62486f, -42f, true, false, true);
			TASK::TASK_SET_CROUCH_MOVEMENT(iLocal_1163[0], true, 0, true);
			__LIB_1__::func_561(&uLocal_1339);
			iLocal_1178 = __LIB_2__::func_272(iLocal_1163[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1163[0], iLocal_1178, true, 0, false, false);
			__LIB_2__::func_504(iLocal_1163[0], 0);
			__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_HIDE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
			iLocal_1183 = 1;
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1163[0], false);
			AUDIO::STOP_PED_SPEAKING(iLocal_1163[0], true);
			__LIB_1__::func_683(&iLocal_1180, 32768);
		}
	}
	else if (fVar0 > 10f)
	{
	}
}

void func_131()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 1) && !__LIB_0__::func_27(iLocal_1180, 1048576))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1163[0]))
		{
			iVar0 = 0;
			if (PED::_0x3BDFCF25B58B0415(iLocal_1163[0]) || PED::_0x0E99E3BF11BB6367(iLocal_1163[0]))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				if (iLocal_1183 == iVar0)
				{
					iVar0++;
				}
				if (iVar0 > 4)
				{
					iVar0 = 0;
				}
				iLocal_1183 = iVar0;
				switch (iVar0)
				{
					case 0:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GRAPPLE_SNARL_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 1:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GRAPPLE_SNARL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 2:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GRAPPLE_SNARL_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 3:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_COMBAT_GROWL_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 4:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_COMBAT_GROWL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				if (iLocal_1183 == iVar0)
				{
					iVar0++;
				}
				if (iVar0 > 5)
				{
					iVar0 = 0;
				}
				iLocal_1183 = iVar0;
				switch (iVar0)
				{
					case 0:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_COMBAT_GROWL_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 1:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_COMBAT_GROWL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 2:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_READY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 3:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_SPUR", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 4:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_IDLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 5:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GRAPPLE_SNARL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
			}
		}
	}
}

void func_132()
{
	int iVar0;
	if ((__LIB_0__::func_27(iLocal_1180, 8) || __LIB_0__::func_27(iLocal_1180, 32768)) || __LIB_0__::func_27(iLocal_1180, 1048576))
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 0))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1163[0]))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
			if (!__LIB_0__::func_27(iLocal_1180, 8388608))
			{
				TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, -8f);
				__LIB_1__::func_683(&iLocal_1180, 8388608);
			}
			if (iLocal_1183 == iVar0)
			{
				iVar0++;
			}
			if (iVar0 > 8)
			{
				iVar0 = 0;
			}
			iLocal_1183 = iVar0;
			if (__LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < 2f && __LIB_0__::func_27(iLocal_1180, 2097152))
			{
				switch (iVar0)
				{
					case 0:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 1:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_COMBAT_GROWL_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 2:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_COMBAT_GROWL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 3:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_READY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 4:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_IDLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 5:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_E", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 6:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GRAPPLE_SNARL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 7:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_GRAPPLE_SNARL_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 8:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_I", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
				}
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 1:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 2:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 3:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_D", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 4:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_E", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 5:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_F", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 6:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_G", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 7:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_H", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
					case 8:
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_CRY_LOOP_I", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						break;
				}
			}
		}
	}
}

void func_133()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
	{
		if (__LIB_0__::func_27(iLocal_1180, 8) && iLocal_1223 == 1)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1163[0], 3f);
		}
	}
	if (__LIB_3__::func_601(&uLocal_1360, 1.5f))
	{
		if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_1163[0], joaat("WEAPON_MELEE_KNIFE"), 0, false))
			{
				iLocal_1178 = __LIB_2__::func_272(iLocal_1163[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			if (!__LIB_0__::func_163(iLocal_1163[0], 1435919172))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
				TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 3f, 1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(iLocal_1163[0], &iLocal_1173, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
				__LIB_3__::func_596(&uLocal_1360, 0);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1180, 8) && __LIB_0__::func_27(iLocal_1180, 32768))
	{
		if (((__LIB_4__::func_117(iLocal_1163[0], 1114636288 /* Float: 60f */, 0) || __LIB_0__::func_195(Global_36, 2420.762f, 1754.869f, 88.65359f, 2418.807f, 1746.339f, 88.79163f)) && __LIB_0__::func_27(iLocal_1180, 262144)) && (__LIB_0__::func_27(iLocal_1180, 2) || iLocal_1222 == 1))
		{
			__LIB_1__::func_683(&iLocal_1180, 8);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1163[0], false, 0, false);
			__LIB_2__::func_133(iLocal_1163[0], &(Local_675[0 /*32*/].f_23), 0);
			__LIB_2__::func_504(iLocal_1163[0], 0);
			__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_ATTACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_1163[0], joaat("WEAPON_MELEE_KNIFE"), 0, false))
			{
				iLocal_1178 = __LIB_2__::func_272(iLocal_1163[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_1163[0], true);
			iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1174, iVar0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, iLocal_1174);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
			TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 3f, 1, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
			__LIB_1__::func_474(iLocal_1163[0], &iLocal_1173, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
			__LIB_3__::func_596(&uLocal_1360, 0);
		}
	}
}

void func_135()
{
	int iVar0;
	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (__LIB_0__::func_27(iLocal_1180, 2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_376.f_8))
		{
			TASK::_0xA6A76D666A281F2D(Local_376.f_8, joaat("DOCUMENT_WILD_MAN_JOURNAL"));
		}
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && (((iVar0 == iLocal_1198 || iVar0 == iLocal_1199) || iVar0 == iLocal_1200) || iVar0 == iLocal_1201))
	{
		iLocal_1229 = 1;
		__LIB_8__::func_225(vLocal_1247, &Local_1482, 0f, 0f, 0f, 30f, 15f, -1, 2000, 1000, 1);
		if (iLocal_1225 == 0 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			__LIB_3__::func_600(Global_35, Global_35, "RE_WILD_UNI_JOURNAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1225 = 1;
			if (iLocal_1207 == 1)
			{
				__LIB_3__::func_459(iLocal_1163[2], 1);
			}
			if (iLocal_1208 == 1)
			{
				__LIB_3__::func_459(iLocal_1163[3], 1);
			}
			__LIB_1__::func_683(&iLocal_1180, 2);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	}
	if (iLocal_1223 == 1)
	{
		if (__LIB_0__::func_27(iLocal_1180, 8) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1163[0]))
		{
			iLocal_1223 = 0;
		}
		if (__LIB_0__::func_27(iLocal_1180, 32) && iLocal_1223 == 1)
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1480, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1481, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
		}
	}
}

void func_136()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_1180, 8))
	{
		return;
	}
	iVar0 = -1;
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 0))
	{
		iVar0 = func_359(&(iLocal_1163[0]), &(Local_1378[0 /*21*/]), fLocal_1283, &Local_1442, &(Local_481.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 8 | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iLocal_1493 == 2)
		{
			if (iVar0 == -1 && __LIB_2__::func_1(iLocal_1163[2], 0, 1))
			{
				iVar0 = func_359(&(iLocal_1163[2]), &(Local_1378[1 /*21*/]), fLocal_1283, &Local_1442, &(Local_481.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				if (iVar0 != -1)
				{
				}
			}
			if (iVar0 == -1 && __LIB_2__::func_1(iLocal_1163[3], 0, 1))
			{
				iVar0 = func_359(&(iLocal_1163[3]), &(Local_1378[2 /*21*/]), fLocal_1283, &Local_1442, &(Local_481.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				if (iVar0 != -1)
				{
				}
			}
		}
		if (iVar0 == 0)
		{
			__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 0, 0);
			switch (iLocal_1493)
			{
				case 0:
					__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_GREET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1180, 268435456);
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				case 1:
					switch (__LIB_3__::func_657(73))
					{
						case 0:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_GREET_FAR_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 1:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_GREET_FAR_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 2:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_GREET_FAR_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						default:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_GREET_FAR_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				case 2:
					__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_DEN_GREET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1180, 536870912);
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				case 3:
					__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_IM_SORRY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1180, 1073741824 /* Float: 2f */);
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
			}
			__LIB_3__::func_596(&uLocal_1330, 0);
		}
		else if (iVar0 == 1)
		{
			__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 0, 0);
			switch (iLocal_1493)
			{
				case 0:
					__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_ANTAGONIZE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1180, 268435456);
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				case 1:
					switch (__LIB_3__::func_657(73))
					{
						case 0:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_ANTAGONIZE_FAR_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 1:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_ANTAGONIZE_FAR_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 2:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_ANTAGONIZE_FAR_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						default:
							__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_INT_ANTAGONIZE_FAR_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				case 2:
					__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_DEN_ANTAGONIZE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1180, 536870912);
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				case 3:
					__LIB_3__::func_600(Global_35, iLocal_1163[0], "RE_WILD_UNI_NOT_SORRY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1180, -2147483648);
					__LIB_2__::func_526(&Local_1442, 0, 0);
					break;
				default:
					break;
			}
			__LIB_3__::func_596(&uLocal_1330, 0);
		}
		if (__LIB_4__::func_118(&uLocal_1330) > 2f && !__LIB_2__::func_136(Global_35, 0))
		{
			__LIB_1__::func_561(&uLocal_1330);
			switch (iLocal_1493)
			{
				case 3:
					if (__LIB_0__::func_27(iLocal_1180, 1073741824 /* Float: 2f */))
					{
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_ILO_POS_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (__LIB_0__::func_27(iLocal_1180, -2147483648))
					{
						__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_ILO_NEG_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					break;
			}
		}
	}
}

void func_139()
{
	if (!__LIB_0__::func_27(iLocal_1180, 65536))
	{
		return;
	}
	if (__LIB_0__::func_393(Global_35, iLocal_1480, 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_1180, 262144))
		{
			__LIB_1__::func_683(&iLocal_1180, 262144);
		}
		if (!__LIB_0__::func_27(iLocal_1180, 16384))
		{
			func_162();
		}
	}
	if (!__LIB_0__::func_27(iLocal_1180, 512))
	{
		if (__LIB_0__::func_393(Global_35, iLocal_1481, 0, 1) && __LIB_0__::func_27(iLocal_1180, 524288))
		{
			__LIB_1__::func_683(&iLocal_1180, 512);
		}
	}
}

void func_142()
{
	__LIB_4__::func_495(183);
	Local_376.f_8 = OBJECT::CREATE_OBJECT(Local_376.f_7, vLocal_1247, true, true, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_376.f_8))
	{
		ENTITY::SET_ENTITY_HEADING(Local_376.f_8, fLocal_1282);
	}
	TASK::_0xA6A76D666A281F2D(Local_376.f_8, joaat("DOCUMENT_WILD_MAN_JOURNAL"));
}

int func_148()
{
	struct<4> Var0;
	struct<4> Var4;
	if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_WOLF")))
	{
	}
	else
	{
		return 0;
	}
	if (iLocal_1182 == 1 && iLocal_1202 == 1)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_2, true, false))
		{
			Var0 = { __LIB_4__::func_494(Local_1073.f_2, "WOLF_1", 0) };
			if (!__LIB_0__::func_86(Var0))
			{
				iLocal_1163[2] = __LIB_3__::func_403(Local_675[2 /*32*/].f_1, &(Local_675[2 /*32*/]), Var0, Var0.f_3, 1, 0, 1, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1163[2], true);
				PED::SET_PED_CONFIG_FLAG(iLocal_1163[2], 6, true);
				iLocal_1182++;
			}
		}
	}
	else if (iLocal_1182 == 2)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1073.f_2, true, false))
		{
			Var4 = { __LIB_4__::func_494(Local_1073.f_2, "WOLF_2", 0) };
			if (!__LIB_0__::func_86(Var4))
			{
				iLocal_1163[3] = __LIB_3__::func_403(Local_675[3 /*32*/].f_1, &(Local_675[3 /*32*/]), Var4, Var4.f_3, 1, 0, 1, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1163[3], true);
				__LIB_1__::func_683(&iLocal_1180, 65536);
				PED::SET_PED_CONFIG_FLAG(iLocal_1163[3], 6, true);
				iLocal_1182++;
			}
		}
	}
	else if (iLocal_1182 == 3)
	{
		if (__LIB_2__::func_1(iLocal_1163[2], 0, 1) && __LIB_2__::func_1(iLocal_1163[3], 0, 1))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
			TASK::TASK_PLAY_ANIM(0, Local_1026[14 /*2*/], Local_1026[14 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
			TASK::TASK_PLAY_ANIM(0, Local_1026[13 /*2*/], Local_1026[13 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 0, false, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[2], iLocal_1173);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
			TASK::TASK_PLAY_ANIM(0, Local_1026[17 /*2*/], Local_1026[17 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
			TASK::TASK_PLAY_ANIM(0, Local_1026[16 /*2*/], Local_1026[16 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 0, false, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[3], iLocal_1173);
			AUDIO::_0x35B8C070E0C16E2F(0, 78);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
			iLocal_1182++;
			return 1;
		}
	}
	return 0;
}

void func_149()
{
	int iVar0;
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1163[0], Local_1073) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_1073, "HOWL", 1))
	{
		switch (iLocal_1196)
		{
			case 0:
				if (__LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < 65f)
				{
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, iLocal_1163[0], 1);
					iLocal_1196++;
					return;
				}
				break;
			case 1:
				if (__LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < 57f)
				{
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, iLocal_1163[0], 1);
					iLocal_1196++;
					return;
				}
				break;
			case 2:
				if (__LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1) < 40f)
				{
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, iLocal_1163[0], 1);
					iLocal_1196++;
					return;
				}
				break;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], -359258003) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1163[0]))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		if (iVar0 == 0)
		{
			__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_RUN_GRUNT_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_EAT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_159()
{
	float fVar0;
	if (iLocal_1081 == 2)
	{
		fVar0 = __LIB_0__::func_665(Global_35, iLocal_1163[0], 1, 1);
		if (fVar0 < 10f)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
		}
		else if (fVar0 < 20f)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.25f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
		}
		else if (fVar0 < 30f)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.5f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			}
		}
		else if (fVar0 < 40f)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.75f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			}
		}
	}
}

bool func_160(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
				STATS::_0xB2A38826E5886E83(func_226(uParam0->f_3, uParam0->f_185), 0);
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
					STATS::_0xB2A38826E5886E83(func_226(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_162()
{
	if (Local_481.f_46 == 1)
	{
		return;
	}
	if (!__LIB_0__::func_899(&uLocal_1318))
	{
		TASK::TASK_PLAY_ANIM(iLocal_1163[2], Local_1026[15 /*2*/], Local_1026[15 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		TASK::TASK_PLAY_ANIM(iLocal_1163[3], Local_1026[18 /*2*/], Local_1026[18 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		__LIB_3__::func_596(&uLocal_1318, 0);
	}
	else if (__LIB_4__::func_118(&uLocal_1318) > 0.8f)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[2], Local_1026[15 /*2*/], Local_1026[15 /*2*/].f_1, 1) && iLocal_1203 == 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "WOLF_1", iLocal_1163[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_2, "WOLF_1", iLocal_1163[2], 0);
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1163[2], &Local_1090);
			iLocal_1203 = 1;
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[3], Local_1026[15 /*2*/], Local_1026[15 /*2*/].f_1, 1) && iLocal_1204 == 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_1, "WOLF_2", iLocal_1163[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1073.f_2, "WOLF_2", iLocal_1163[3], 0);
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1163[3], &Local_1090);
			iLocal_1204 = 1;
		}
	}
	if ((iLocal_1203 == 1 && iLocal_1204 == 1) && !__LIB_0__::func_27(iLocal_1180, 524288))
	{
		__LIB_1__::func_683(&iLocal_1180, 524288);
		ANIMSCENE::START_ANIM_SCENE(Local_1073.f_2);
	}
}

void func_168()
{
	if (!__LIB_0__::func_899(&uLocal_1351))
	{
		__LIB_3__::func_596(&uLocal_1351, 0);
	}
	if (__LIB_4__::func_118(&uLocal_1351) > 2.5f)
	{
		if (iLocal_1191 >= 5)
		{
			iLocal_1191 = 0;
		}
		vLocal_1266[iLocal_1191 /*3*/] = { Global_36 };
		__LIB_2__::func_259(&uLocal_1351);
		iLocal_1191++;
	}
}

void func_183()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1073);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1073.f_1);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1073.f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1073.f_2);
	}
}

void func_184()
{
	if (!__LIB_0__::func_27(iLocal_1180, 65536))
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
		if (__LIB_0__::func_27(iLocal_1180, 131072))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1163[0], joaat("BREAKOUT")))
			{
				TASK::TASK_PLAY_ANIM(0, Local_1026[1 /*2*/], Local_1026[1 /*2*/].f_1, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, Local_1026[0 /*2*/], Local_1026[0 /*2*/].f_1, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
		if (!__LIB_0__::func_27(iLocal_1180, 131072))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::TASK_PLAY_ANIM(0, Local_1026[0 /*2*/], Local_1026[0 /*2*/].f_1, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
			__LIB_1__::func_683(&iLocal_1180, 131072);
		}
		TASK::TASK_PLAY_ANIM(0, Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 1048576, false, 0, false);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[0], iLocal_1173);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
		__LIB_3__::func_596(&uLocal_1321, 0);
	}
	FLOCK::_0xA881F5C77A560906(10f);
	if (__LIB_2__::func_1(iLocal_1163[2], 0, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[2], Local_1026[13 /*2*/], Local_1026[13 /*2*/].f_1, 1))
		{
			TASK::TASK_PLAY_ANIM(0, Local_1026[15 /*2*/], Local_1026[15 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		}
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1163[2], 512, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 46, true);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[2], 112, 9001f);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[2], iLocal_1173);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
		__LIB_2__::func_73(iLocal_1163[2], &(uLocal_1168[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
	}
	if (__LIB_2__::func_1(iLocal_1163[3], 0, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1163[3], Local_1026[16 /*2*/], Local_1026[16 /*2*/].f_1, 1))
		{
			TASK::TASK_PLAY_ANIM(0, Local_1026[18 /*2*/], Local_1026[18 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		}
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1163[3], 512, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[3], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[3], 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[3], 46, true);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[3], 112, 9001f);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[3], iLocal_1173);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
		__LIB_2__::func_73(iLocal_1163[3], &(uLocal_1168[3]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
	}
}

void func_185(var uParam0)
{
	if (__LIB_0__::func_899(uParam0))
	{
		__LIB_1__::func_561(uParam0);
	}
}

bool func_186()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_1180, 65536))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(iLocal_1163[0]) || PED::_IS_PED_LASSOED(iLocal_1163[0]))
	{
		iVar0 = 1;
	}
	if (!__LIB_0__::func_27(iLocal_1180, 1024))
	{
		if (!__LIB_2__::func_1(iLocal_1163[2], 0, 1) || !__LIB_2__::func_1(iLocal_1163[3], 0, 1))
		{
			if (__LIB_2__::func_1(iLocal_1163[0], 0, 0) && ((__LIB_0__::func_393(iLocal_1163[0], iLocal_1176, 0, 1) || __LIB_0__::func_393(iLocal_1163[0], iLocal_1481, 0, 1)) || iVar0 == 1))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_WOLFONE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (__LIB_0__::func_27(iLocal_1180, 1048576))
				{
				}
				else
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::TASK_PLAY_ANIM(0, Local_1026[5 /*2*/], Local_1026[5 /*2*/].f_1, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::TASK_PLAY_ANIM(0, Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 1048576, false, 0, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[0], iLocal_1173);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
				}
			}
			__LIB_1__::func_683(&iLocal_1180, 1024);
		}
	}
	if ((!__LIB_0__::func_27(iLocal_1180, 32) && !__LIB_2__::func_1(iLocal_1163[2], 0, 1)) && !__LIB_2__::func_1(iLocal_1163[3], 0, 1))
	{
		if (__LIB_2__::func_1(iLocal_1163[0], 0, 0) && ((__LIB_0__::func_393(iLocal_1163[0], iLocal_1176, 0, 1) || __LIB_0__::func_393(iLocal_1163[0], iLocal_1481, 0, 1)) || iVar0 == 1))
		{
			iLocal_1205 = 0;
			if (iVar0 == 1)
			{
				__LIB_3__::func_600(iLocal_1163[0], Global_35, "RE_WILD_UNI_ALL_WOLFTWO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1163[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
			}
			else if (__LIB_0__::func_27(iLocal_1180, 1048576))
			{
			}
			else
			{
				TASK::STOP_ANIM_TASK(iLocal_1163[0], Local_1026[4 /*2*/], Local_1026[4 /*2*/].f_1, -8f);
				_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_1163[0], 6, 1);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1163[0]);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_PLAY_ANIM(0, Local_1026[6 /*2*/], Local_1026[6 /*2*/].f_1, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, Local_1026[7 /*2*/], Local_1026[7 /*2*/].f_1, 2f, -2f, -1, 5, 0f, false, 0, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[0], iLocal_1173);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
				PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
				func_352();
				__LIB_4__::func_63(iLocal_1163[0], 45);
			}
			__LIB_1__::func_683(&iLocal_1180, 32);
		}
		if (!__LIB_0__::func_27(iLocal_1180, 8192))
		{
			if (!__LIB_0__::func_899(&uLocal_1366))
			{
				__LIB_3__::func_596(&uLocal_1366, 0);
			}
		}
		return true;
	}
	return false;
}

int func_226(int iParam0, int iParam1)
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
				Jump @3273; //curOff = 1105
				return 1583531269;
				Jump @3273; //curOff = 1116
				return -728402510;
				Jump @3273; //curOff = 1127
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
				Jump @3273; //curOff = 1174
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
				Jump @3273; //curOff = 1207
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
				Jump @3273; //curOff = 1268
				return 856957155;
				Jump @3273; //curOff = 1279
				return 199192985;
				Jump @3273; //curOff = 1290
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
				Jump @3273; //curOff = 1365
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
				Jump @3273; //curOff = 1412
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
				Jump @3273; //curOff = 1459
				return -1065165983;
				Jump @3273; //curOff = 1470
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
				Jump @3273; //curOff = 1531
				return -1641231995;
				Jump @3273; //curOff = 1542
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
				Jump @3273; //curOff = 1589
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
				Jump @3273; //curOff = 1636
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
				Jump @3273; //curOff = 1683
				return -800701784;
				Jump @3273; //curOff = 1694
				return -1599472750;
				Jump @3273; //curOff = 1705
				return 239043929;
				Jump @3273; //curOff = 1716
				return -1534174498;
				Jump @3273; //curOff = 1727
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
				Jump @3273; //curOff = 1774
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
				Jump @3273; //curOff = 1821
				return 1895786957;
				Jump @3273; //curOff = 1832
				return -2058137475;
				Jump @3273; //curOff = 1843
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
				Jump @3273; //curOff = 1932
				return 598461796;
				Jump @3273; //curOff = 1943
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
				Jump @3273; //curOff = 1990
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
				Jump @3273; //curOff = 2065
				return 544369376;
				Jump @3273; //curOff = 2076
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
				Jump @3273; //curOff = 2123
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
				Jump @3273; //curOff = 2170
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3273; //curOff = 2203
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3273; //curOff = 2236
				return 1602493990;
				Jump @3273; //curOff = 2247
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
				Jump @3273; //curOff = 2336
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
				Jump @3273; //curOff = 2383
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
				Jump @3273; //curOff = 2430
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
				Jump @3273; //curOff = 2477
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
				Jump @3273; //curOff = 2524
				return 1762656414;
				Jump @3273; //curOff = 2535
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
				Jump @3273; //curOff = 2596
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
				Jump @3273; //curOff = 2657
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
				Jump @3273; //curOff = 2704
				return -2018341642;
				Jump @3273; //curOff = 2715
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3273; //curOff = 2748
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3273; //curOff = 2781
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
				Jump @3273; //curOff = 2828
				return -1618254924;
				Jump @3273; //curOff = 2839
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
				Jump @3273; //curOff = 2886
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
				Jump @3273; //curOff = 2933
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3273; //curOff = 2966
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
				Jump @3273; //curOff = 3013
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
				Jump @3273; //curOff = 3060
				return -2137572125;
				Jump @3273; //curOff = 3071
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
				Jump @3273; //curOff = 3118
				return -774894224;
				Jump @3273; //curOff = 3129
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
				Jump @3273; //curOff = 3176
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
				Jump @3273; //curOff = 3237
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
void func_227(int iParam0, int iParam1, int iParam2)
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

void func_344(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	if (iLocal_1221 == 0)
	{
		return;
	}
	if (iLocal_1190 < 5)
	{
		iLocal_1190++;
		return;
	}
	iLocal_1190 = 0;
	if (iLocal_1219 == 1)
	{
		if (iLocal_1216 == 0 && __LIB_2__::func_1(iLocal_1163[0], 0, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1163[0], true, false) };
			vVar0 = { __LIB_2__::func_114(iLocal_1163[0], 5f) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, true))
			{
				vVar0.f_2 = uVar3;
			}
		}
		else
		{
			vVar0 = { Global_36 };
		}
		if (__LIB_0__::func_86(vVar0))
		{
			vVar0 = { Global_36 };
		}
		iLocal_1188 = GRAPHICS::CREATE_TRACKED_POINT();
		func_513(&Local_1292, vVar0, 10f, 23, 1, 1, 0, 1088421888 /* Float: 7f */, 0f, 0);
		iLocal_1189 = 0;
		iLocal_1219 = 0;
		iLocal_1220 = 0;
		iLocal_1192++;
	}
	else if (iLocal_1220 == 0)
	{
		if (Local_1292[iLocal_1189 /*5*/].f_3 == 1 && !__LIB_0__::func_86(Local_1292[iLocal_1189 /*5*/]))
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_1292[iLocal_1189 /*5*/], &uVar4, false))
			{
				Local_1292[iLocal_1189 /*5*/].f_2 = uVar4;
			}
			GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1188, Local_1292[iLocal_1189 /*5*/], 0.5f);
			iLocal_1220 = 1;
		}
		else
		{
			if (iLocal_1192 >= 3)
			{
				fVar6 = 90f;
				iVar5 = 0;
				while (iVar5 < 5)
				{
					if (!__LIB_0__::func_86(vLocal_1266[iVar5 /*3*/]))
					{
						fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1266[iVar5 /*3*/], true);
						if (fVar7 < 15f && fVar7 > 5f)
						{
							if (!__LIB_1__::func_373(vLocal_1266[iVar5 /*3*/], 0.1f, 0.9f, 0.1f, 0.9f))
							{
								if (fVar7 < fVar6)
								{
									GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1188, vLocal_1266[iVar5 /*3*/], 0.5f);
									iLocal_1220 = 1;
									iLocal_1219 = 0;
									Local_1292[iLocal_1189 /*5*/] = { vLocal_1266[iVar5 /*3*/] };
									fVar6 = fVar7;
								}
							}
						}
					}
					iVar5++;
				}
			}
			if (iLocal_1220 == 0)
			{
				iLocal_1189++;
			}
			if (iLocal_1189 >= 5 && iLocal_1220 == 0)
			{
				iLocal_1219 = 1;
				iLocal_1220 = 0;
				iLocal_1189 = 0;
				if (iLocal_1188 != 0)
				{
					GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1188);
					iLocal_1188 = 0;
				}
			}
		}
	}
	else
	{
		if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_1188))
		{
			iLocal_1219 = 1;
			iLocal_1221 = 0;
			if (iLocal_1188 != 0)
			{
				GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1188);
				iLocal_1188 = 0;
			}
			if (iParam0 == 0)
			{
				func_345(Local_1292[iLocal_1189 /*5*/]);
			}
		}
		iLocal_1220 = 0;
		iLocal_1189++;
		if (iLocal_1189 >= 5)
		{
			iLocal_1219 = 1;
			iLocal_1220 = 0;
			iLocal_1189 = 0;
			if (iLocal_1188 != 0)
			{
				GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1188);
				iLocal_1188 = 0;
			}
		}
	}
}

void func_345(vector3 vParam0)
{
	float fVar0;
	fVar0 = 0f;
	fVar0 = __LIB_3__::func_731(vParam0, Global_36);
	iLocal_1163[2] = __LIB_3__::func_403(joaat("A_C_WOLF_SMALL"), &(Local_675[2 /*32*/]), vParam0, fVar0, 1, 0, 1, 0, 1);
	__LIB_2__::func_73(iLocal_1163[2], &(uLocal_1168[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
	FLOCK::_0xA881F5C77A560906(10f);
	TASK::TASK_COMBAT_PED(iLocal_1163[2], Global_35, 0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1163[2], 512, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1163[2], 46, true);
	FLOCK::_0x706B434FEFAD6A24(1f);
	PED::SET_PED_KEEP_TASK(iLocal_1163[2], true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iLocal_1163[2], 112, 9001f);
	__LIB_1__::func_683(&iLocal_1180, 33554432);
}

int func_346(int iParam0)
{
	if (iParam0 > 4)
	{
		iParam0 = ((iParam0 - 4) - 1);
	}
	else if (iParam0 < 0)
	{
		iParam0 = (4 + iParam0) + 1;
	}
	return iParam0;
}

bool func_351()
{
	if (__LIB_2__::func_1(iLocal_1163[0], 0, 1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1073, "PED_DEAD_RABBIT", iLocal_1163[1]);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_1163[1]);
		iLocal_1175 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_1232, 0f, 0f, 0f, 15f, 15f, 15f);
		POPULATION::_0xB56D41A694E42E86(iLocal_1175, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1175, 0, 0, 0, -1, -1, 0);
		__LIB_3__::func_457(iLocal_1175, 0);
		if (!__LIB_0__::func_86(vLocal_1232))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_1163[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			if (__LIB_0__::func_86(vLocal_1369))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1073.f_1, "PBL_NORMAL");
				vLocal_1369 = { __LIB_4__::func_494(Local_1073.f_1, "PED_WILDMAN", "PBL_NORMAL") };
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1173);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1238, 3f, -1, 0.01f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1241, 2f, -1, 0.01f, 1, 40000f);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_1369, 2f, 20000, 1193033728 /* Float: 40000f */, 0.1f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1173);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1163[0], iLocal_1173);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1173);
			PED::SET_PED_KEEP_TASK(iLocal_1163[0], true);
			return true;
		}
	}
	return false;
}

void func_352()
{
	__LIB_2__::func_602(&(Local_1442[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_1442[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(Local_1442[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_1442[1 /*17*/]), 0, 0);
}

int func_359(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_522(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_95(iParam1, uParam3, uParam0);
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

int func_513(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	var uVar7;
	iVar1 = *uParam0;
	iVar2 = 0;
	fVar3 = (360f / BUILTIN::TO_FLOAT(iVar1));
	vVar4 = { 0f, 1f, 0f };
	uVar7 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(uVar7))
	{
		return 0;
	}
	else
	{
		TASK::_0x9B6A58FDB0024F12(uVar7, fParam9);
		TASK::_0xE9225354FB7437A7(uVar7, 1);
		TASK::_0x954451EA2D2120FB(uVar7, fParam10);
		TASK::_0x0F4F6C4CE471259D(uVar7, fParam4);
		if (!bParam8)
		{
			TASK::_0x5D9B0BAAF04CF65B(uVar7, 50, iParam6, 0);
		}
		if (bParam7)
		{
			TASK::_0x5D9B0BAAF04CF65B(uVar7, 44, iParam6, 0);
		}
		if (bParam11)
		{
			TASK::_0x5D9B0BAAF04CF65B(uVar7, iParam5, iParam6, 0);
		}
		TASK::_0x19BC99C678FBA139(uVar7, 80, 0);
		TASK::_0x2B8AF29A78024BD3(uVar7);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		vVar4 = { __LIB_3__::func_509(vVar4, fVar3) };
		*(uParam0[iVar0 /*5*/]) = { vParam1 + vVar4 * Vector(fParam4, fParam4, fParam4) };
		if (__LIB_4__::func_496(uParam0[iVar0 /*5*/], fParam9))
		{
			if (TASK::_0xFE5D28B9B7837CC1(uVar7, *(uParam0[iVar0 /*5*/])))
			{
				iVar2 = 1;
				(uParam0[iVar0 /*5*/])->f_3 = 1;
			}
			else
			{
				(uParam0[iVar0 /*5*/])->f_3 = 0;
			}
		}
		else
		{
			(uParam0[iVar0 /*5*/])->f_3 = 0;
		}
		iVar0++;
	}
	TASK::_0xBEEFBB608D2AA68A(uVar7);
	return iVar2;
}

int func_522(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_2__::func_259(&(iParam1->f_13));
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
					if (__LIB_17__::func_906(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_522(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (func_631(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_4__::func_394(*uParam0, iParam1, uParam3))
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
				if (__LIB_4__::func_395(uParam0, iParam1, fParam4, bVar6))
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
					func_631(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_4__::func_395(uParam0, iParam1, fParam4, bVar6))
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
			__LIB_4__::func_399(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_631(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_3__::func_351(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_4__::func_122(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
						__LIB_2__::func_259(&(iParam1->f_18));
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

