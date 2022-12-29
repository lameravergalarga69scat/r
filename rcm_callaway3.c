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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = -1;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 1097859072;
	var uLocal_44 = 1000;
	var uLocal_45 = 1067450368;
	var uLocal_46 = 5000;
	var uLocal_47 = 42;
	var uLocal_48 = 1103626240;
	var uLocal_49 = 1077936128;
	var uLocal_50 = 1106247680;
	var uLocal_51 = 1103101952;
	var uLocal_52 = 1097859072;
	var uLocal_53 = 1103626240;
	var uLocal_54 = 0;
	struct<148> Local_55[4];
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	vector3 vLocal_650 = { 0f, 0f, 0f };
	float fLocal_653 = 0f;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	vector3 vLocal_656 = { 0f, 0f, 0f };
	float fLocal_659 = 0f;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	vector3 vLocal_662 = { 0f, 0f, 0f };
	float fLocal_665 = 0f;
	struct<5> Local_666[1];
	int iLocal_672 = 0;
	int iLocal_673[3] = { 0, 0, 0 };
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	struct<16> Local_681[7];
	vector3 vLocal_794 = { 0f, 0f, 0f };
	float fLocal_797 = 0f;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	struct<62> Local_802 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1065353216, 0, 0, 0, 0, 0, -1082130432, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_874 = -1;
	var uLocal_875 = -1;
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
	struct<72> Local_896 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 3;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = -1082130432;
	var uLocal_976 = -1082130432;
	var uLocal_977 = -1082130432;
	var uLocal_978 = 1;
	var uLocal_979 = 1050253722;
	var uLocal_980 = 3000;
	var uLocal_981 = 6000;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = -1;
	bool bLocal_987 = false;
	vector3 vLocal_988 = { 0f, 0f, 0f };
	vector3 vLocal_991 = { 0f, 0f, 0f };
	float fLocal_994 = 0f;
	vector3 vLocal_995 = { 0f, 0f, 0f };
	float fLocal_998 = 0f;
	vector3 vLocal_999 = { 0f, 0f, 0f };
	float fLocal_1002 = 0f;
	struct<4> Local_1003 = { 0, 0, 0, 0 } ;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 21;
	var uLocal_1011 = 6;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	float fLocal_1015 = 0f;
	bool bLocal_1016 = false;
	bool bLocal_1017 = false;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
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
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	vector3 vLocal_1079 = { 0f, 0f, 0f };
	float fLocal_1082 = 0f;
	char* sLocal_1083 = NULL;
	bool bLocal_1084 = false;
	bool bLocal_1085 = false;
	bool bLocal_1086 = false;
	bool bLocal_1087 = false;
	bool bLocal_1088 = false;
	bool bLocal_1089 = false;
	bool bLocal_1090 = false;
	bool bLocal_1091 = false;
	bool bLocal_1092 = false;
	bool bLocal_1093 = false;
	struct<17> Local_1094[1];
	vector3 vLocal_1112 = { 0f, NaNf, 0f };
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = -1;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 1073741824;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 1;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 1106247680;
	var uLocal_1139 = 1067450368;
	var uLocal_1140 = 0;
	var uLocal_1141 = 1092616192;
	var uLocal_1142 = 1112014848;
	var uLocal_1143 = 1106247680;
	var uLocal_1144 = 1101529088;
	var uLocal_1145 = 1101004800;
	var uLocal_1146 = 1084227584;
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
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	vector3 vLocal_1175 = { 0f, 0f, 0f };
	vector3 vLocal_1178 = { 0f, 0f, 0f };
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	vector3 vLocal_1183 = { 0f, 0f, 0f };
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	struct<2> Local_1192[33];
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	int iLocal_1262 = 0;
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	int iLocal_1265 = 0;
	int iLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = -1;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 1097859072;
	var uLocal_1285 = 1000;
	var uLocal_1286 = 1067450368;
	var uLocal_1287 = 5000;
	var uLocal_1288 = 42;
	var uLocal_1289 = 1103626240;
	var uLocal_1290 = 1077936128;
	var uLocal_1291 = 1106247680;
	var uLocal_1292 = 1103101952;
	var uLocal_1293 = 1097859072;
	var uLocal_1294 = 1103626240;
	var uLocal_1295 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_19 = 1;
	vLocal_22 = { 2906.817f, 1315.221f, 43.9307f };
	fLocal_25 = 225.1046f;
	vLocal_794 = { 2917.819f, 1315.843f, 43.1258f };
	fLocal_797 = 72.5096f;
	vLocal_988 = { 2682.1f, 1940.63f, 102.006f };
	vLocal_991 = { 2677.641f, 1944.906f, 102.1006f };
	fLocal_994 = 226.0541f;
	vLocal_995 = { 2686.595f, 1943.414f, 102.4167f };
	fLocal_998 = 88.8752f;
	vLocal_999 = { 2679.944f, 1937.827f, 101.9209f };
	fLocal_1002 = 187.1849f;
	iLocal_1077 = -1;
	iLocal_1173 = -1;
	iLocal_1174 = -1;
	vLocal_1178 = { 2359.327f, 1592.351f, 84.5419f };
	vLocal_1183 = { 2368.755f, 1587.665f, 84.5419f };
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		__LIB_0__::func_7(&(Var0.f_172), 4096);
	}
	else
	{
		__LIB_0__::func_8(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_9(&Var0);
					break;
				case 3:
					func_10(&Var0);
					break;
				case 4:
					func_11(&Var0);
					break;
				case 2:
					func_12(&Var0);
					break;
				case 5:
					func_13(&Var0);
					break;
				case 6:
					func_14(&Var0);
					break;
				case 7:
					func_15(&Var0);
					break;
				case 8:
					func_16(&Var0);
					break;
				case 9:
					func_17(&Var0, 0);
					break;
				case 10:
					func_18(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_22(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_22(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (uParam0->f_174 == __LIB_10__::func_698())
	{
		bVar0 = true;
	}
	else if (__LIB_12__::func_738(uParam0))
	{
		bVar0 = true;
		__LIB_12__::func_638(uParam0, 128);
	}
	if (bVar0)
	{
		__LIB_12__::func_638(uParam0, 64);
		if (__LIB_4__::func_512())
		{
			__LIB_12__::func_638(uParam0, 128);
		}
		__LIB_0__::func_145(0, 0);
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		__LIB_12__::func_640(uParam0->f_174, 1);
		__LIB_12__::func_641(uParam0->f_174, 1);
	}
	__LIB_11__::func_196(uParam0->f_174);
	func_36(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_42(uParam0);
	__LIB_12__::func_918(uParam0, 1);
	iVar1 = __LIB_1__::func_976(uParam0);
	if (!__LIB_0__::func_1(uParam0->f_172, 8388608) && __LIB_12__::func_882(uParam0))
	{
		iVar1 = 4;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		}
	}
	__LIB_0__::func_769();
	__LIB_12__::func_837(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 16777216);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 14);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 33554432);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 15);
		}
		return;
	}
	if (func_53(uParam0))
	{
		return;
	}
	__LIB_0__::func_8(&(uParam0->f_172), 64);
	__LIB_0__::func_8(&(uParam0->f_172), 128);
	if (__LIB_0__::func_1(uParam0->f_172, 67108864))
	{
		__LIB_12__::func_868(1);
		__LIB_0__::func_8(&(uParam0->f_172), 67108864);
	}
	__LIB_12__::func_963(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 4096))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (!__LIB_0__::func_6(iVar0) || Global_1347702[uParam0->f_174 /*49*/].f_15 == iVar0)
		{
			__LIB_0__::func_8(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 8) && __LIB_12__::func_766())
	{
		if (uParam0->f_174 != 59 || !__LIB_1__::func_200(97))
		{
			if (uParam0->f_174 != 155 || !__LIB_1__::func_200(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (__LIB_12__::func_639(uParam0, 32))
			{
				if (!__LIB_12__::func_639(uParam0, 64))
				{
					if (!__LIB_0__::func_13(32768))
					{
						Var1 = { func_61(0) };
						if (func_62(&Var1))
						{
							__LIB_12__::func_791(uParam0, 32);
						}
					}
					else
					{
						__LIB_12__::func_791(uParam0, 32);
					}
				}
				else
				{
					__LIB_12__::func_791(uParam0, 32);
				}
			}
			if (func_64(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 9);
					return;
				}
			}
			else if (__LIB_0__::func_58(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 8);
					return;
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 131072))
			{
				if (!Global_1935630.f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 268435456))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1073741824 /* Float: 2f */))
			{
				__LIB_4__::func_516(1, 0);
			}
			func_68(uParam0);
		}
		else if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_12__::func_738(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
			if (func_70(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_12__::func_996(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_10__::func_532(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_964(uParam0))
		{
		}
	}
}

void func_7(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2597)))
		{
			__LIB_4__::func_89(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_592(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_86(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_0__::func_11(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_9__::func_816(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (__LIB_12__::func_738(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		__LIB_12__::func_964(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_96(uParam0, __LIB_12__::func_767(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		__LIB_8__::func_710(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	func_99(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_103(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	if (func_104(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		func_106(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_107(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0[24];
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	if (uParam0->f_177 != 8)
	{
		__LIB_12__::func_837(uParam0, 8);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		__LIB_12__::func_643(uParam0, 0);
		if (__LIB_1__::func_241(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
				STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_76(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_872(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), 0);
			}
		}
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 262144))
		{
			__LIB_0__::func_496();
			__LIB_1__::func_323(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0);
		}
		__LIB_9__::func_830(uParam0->f_174, 1);
		__LIB_12__::func_869(uParam0);
		func_118(__LIB_0__::func_12(), 0);
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_5__::func_109(uParam0, 0, 1);
			if (__LIB_3__::func_736(uParam0->f_174, 128))
			{
				__LIB_3__::func_735(uParam0->f_174, 128);
			}
		}
		__LIB_0__::func_11(uParam0);
		if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				__LIB_0__::func_769();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				__LIB_5__::func_370(Global_1347702[uParam0->f_174 /*49*/].f_15);
				__LIB_5__::func_102();
				__LIB_0__::func_8(&Global_1935630, 8);
			}
			MemCopy(&cVar0, {Global_1347702[uParam0->f_174 /*49*/].f_1}, 3);
			StringConCat(&cVar0, "_obj", 24);
			if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4))
			{
				if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
					{
						func_126(uParam0, &cVar0, 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = __LIB_0__::func_513();
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				iVar4 = __LIB_12__::func_767(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = __LIB_0__::func_299(__LIB_12__::func_609(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = __LIB_12__::func_644(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = __LIB_0__::func_398(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1347702[uParam0->f_174 /*49*/].f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					__LIB_0__::func_297();
					__LIB_1__::func_140();
				}
			}
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
	{
		if (__LIB_12__::func_738(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_131();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			func_133(1, 1);
			__LIB_0__::func_7(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_1__::func_954(1);
		__LIB_5__::func_116();
		__LIB_0__::func_320(6);
		__LIB_0__::func_319(4096);
	}
	func_72(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_22(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	__LIB_12__::func_837(uParam0, 9);
	if (__LIB_12__::func_644(uParam0) != 1)
	{
		__LIB_12__::func_643(uParam0, 1);
		if (__LIB_3__::func_736(uParam0->f_174, 128))
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		func_138(uParam0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	__LIB_9__::func_830(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == __LIB_10__::func_698())
		{
			__LIB_0__::func_297();
			__LIB_1__::func_140();
		}
	}
	else
	{
		bVar0 = false;
		if (__LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || __LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			if (!__LIB_0__::func_899(&(uParam0->f_2597)))
			{
				__LIB_4__::func_89(&(uParam0->f_2597), 0);
			}
			__LIB_0__::func_11(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					__LIB_1__::func_193(1, 1);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			else if (__LIB_1__::func_592(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (__LIB_0__::func_1(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (__LIB_0__::func_1(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		__LIB_1__::func_611(Global_1347702[uParam0->f_174 /*49*/].f_15, iVar3, &(uParam0->f_2578), __LIB_12__::func_793(uParam0), 0, bVar0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 8);
	}
	if (__LIB_12__::func_648(&(uParam0->f_2605)))
	{
		__LIB_12__::func_768(uParam0);
	}
	__LIB_1__::func_645(Global_1347702[uParam0->f_174 /*49*/].f_15);
	bParam1 = true;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (Global_1347702[uParam0->f_174 /*49*/].f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37);
		uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
		__LIB_12__::func_613(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar1 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar1))
		{
			__LIB_0__::func_11(uParam0);
			func_22(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_22(uParam0);
	}
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_159(uParam0);
	__LIB_3__::func_319(uParam0->f_751);
	__LIB_12__::func_975(uParam0);
	__LIB_12__::func_907(uParam0);
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_0__::func_698(2);
	iVar0 = 0;
	bVar2 = false;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		__LIB_12__::func_993(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	else
	{
		__LIB_2__::func_788(&(Global_1347702[uParam0->f_174 /*49*/].f_43), 1, 0, 1);
	}
	Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	__LIB_12__::func_652(uParam0);
	__LIB_12__::func_653(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_8__::func_992(uParam0->f_174);
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_8__::func_993(uParam0->f_174);
	}
	if (__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		__LIB_1__::func_559(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
	}
	__LIB_12__::func_966(uParam0, 0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	if (Global_1347702[uParam0->f_174 /*49*/].f_35 != -1)
	{
		__LIB_12__::func_654(uParam0->f_174, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && __LIB_0__::func_298(0) == Global_1888801[16 /*35*/])
		{
			__LIB_4__::func_838(uParam0->f_174, 8192);
		}
	}
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 32768);
	__LIB_12__::func_949(uParam0);
	__LIB_0__::func_769();
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	__LIB_4__::func_509(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_36(var uParam0)
{
	__LIB_12__::func_658(uParam0, 3);
	__LIB_12__::func_659(uParam0, 15);
	func_187();
	func_188();
	__LIB_13__::func_488(uParam0, 25977);
	__LIB_13__::func_264(uParam0, 26413);
	__LIB_13__::func_487(uParam0, 26755);
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_16 = 0;
	iLocal_18 = 0;
	PED::ADD_RELATIONSHIP_GROUP("outlawRel", &iLocal_801);
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	__LIB_0__::func_267(1);
	Local_681[0 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@leadin@s3@int@base", func_196(0)) };
	Local_681[1 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@leadin@rc3@waiting", func_196(1)) };
	Local_681[2 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@ig@rc3@ig3_calloway_dueltrick@ig3_calloway_dueltrick", func_196(2)) };
	Local_681[3 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@ig@s3@ig1_slimtied@rcal_s3_ig1_slimtied_calloway", func_196(3)) };
	Local_681[4 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@ig@s3@ig1_slimtied@rcal_s3_ig1_slimtied_main", func_196(20)) };
	Local_681[5 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@ig@s3@ig1_slimtied@rcal_s3_ig1_slimtied_main", func_196(20)) };
	Local_681[6 /*16*/] = { __LIB_10__::func_449("script@rcm@cal@ig@s3@ig1_slimtied@rcal_s3_ig1_slimtied_main", func_196(22)) };
	func_198();
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, iLocal_649, 2);
	__LIB_12__::func_867(uParam0, iLocal_655, 2);
	__LIB_12__::func_867(uParam0, iLocal_661, 2);
	__LIB_12__::func_867(uParam0, iLocal_672, 2);
	__LIB_12__::func_867(uParam0, Local_55[0 /*148*/].f_1, 2);
	__LIB_12__::func_867(uParam0, joaat("P_PEN01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_JOURNAL01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BAGLEVIN01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_LANTERN09X"), 2);
	__LIB_12__::func_908(uParam0, 0);
}

bool func_53(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return true;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((__LIB_0__::func_6(iVar0) && iVar0 == Global_1347702[uParam0->f_174 /*49*/].f_15) && __LIB_0__::func_1(uParam0->f_172, 8)) && (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 134217728) || __LIB_0__::func_13(32768)))
			{
				bVar1 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, bVar1);
			break;
	}
	return false;
}

struct<4> func_61(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		Var1 = { 2913.775f, 1309.608f, 43.583f };
		Var1.f_3 = 330.6305f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 2408.967f, 1573.087f, 84.9139f };
		Var1.f_3 = 71.8639f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 2506.121f, 1538.016f, 84.2466f };
		Var1.f_3 = 348.7368f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 2680.819f, 1934.862f, 101.8106f };
		Var1.f_3 = 11.427f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { vLocal_988 };
		Var1.f_3 = 39.03f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { vLocal_988 };
		Var1.f_3 = 39.03f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_211(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "CAL3_FAIL_08", 24);
		return true;
	}
	if (!__LIB_0__::func_266(Global_35, vLocal_1178, 1000f, 1, 1))
	{
		if (iLocal_14 < 2)
		{
			StringCopy(&(uParam0->f_2578), "CAL3_FAIL_02", 24);
			return true;
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "CAL3_FAIL_04", 24);
			return true;
		}
	}
	if (iLocal_14 >= 2)
	{
		if (__LIB_1__::func_923())
		{
			StringCopy(&(uParam0->f_2578), "CAL3_FAIL_04", 24);
			return true;
		}
	}
	if (iLocal_14 == 0)
	{
		if (__LIB_2__::func_901(iLocal_21, Global_35) || __LIB_13__::func_714(iLocal_21, 0, &uLocal_1267, &uLocal_1295, 1, 0))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_21))
				{
					PED::_0x802092B07E3B1EEA(iLocal_21, Global_36, 3);
					PED::REGISTER_TARGET(iLocal_21, Global_35, 1);
					TASK::TASK_COMBAT_PED(iLocal_21, Global_35, 0, 0);
				}
				StringCopy(&(uParam0->f_2578), "CAL3_FAIL_08", 24);
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_21))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_21))
			{
				if (__LIB_3__::func_982())
				{
					LAW::_REPORT_CRIME(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, true);
				}
			}
		}
	}
	if (iLocal_14 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
		{
			if (!__LIB_0__::func_48(Global_35, iLocal_648, 200f, 1))
			{
				StringCopy(&(uParam0->f_2578), "CAL3_FAIL_07", 24);
				return true;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "CAL3_FAIL_01", 24);
			__LIB_1__::func_281(&iLocal_1078, 1, 1);
			return true;
		}
	}
	if (func_220(2048))
	{
		if ((((iLocal_14 == 1 || iLocal_14 == 0) || iLocal_14 == 2) || iLocal_14 == 5) || iLocal_14 == 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
			{
				if (!__LIB_0__::func_48(Global_35, iLocal_648, 150f, 1))
				{
					StringCopy(&(uParam0->f_2578), "CAL3_FAIL_02", 24);
					return true;
				}
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "CAL3_FAIL_01", 24);
				__LIB_1__::func_281(&iLocal_1078, 1, 1);
				return true;
			}
		}
	}
	if ((func_220(16) && iLocal_14 != 6) && iLocal_14 != 7)
	{
		if (((((ENTITY::IS_ENTITY_DEAD(iLocal_660) || ENTITY::IS_ENTITY_DEAD(Local_666[0 /*5*/])) || __LIB_4__::func_172(iLocal_660, 0, 0, 0, 1)) || __LIB_4__::func_172(Local_666[0 /*5*/], 0, 0, 0, 1)) || MISC::IS_BULLET_IN_AREA(vLocal_1175, 15f, true)) || __LIB_4__::func_237(iLocal_660, &uLocal_1267))
		{
			StringCopy(&(uParam0->f_2578), "CAL3_FAIL_05", 24);
			return true;
		}
	}
	return false;
}

void func_68(var uParam0)
{
	if (!bLocal_1087)
	{
		return;
	}
	if (iLocal_14 < 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() > 16 || CLOCK::GET_CLOCK_HOURS() < 12)
		{
			if (!bLocal_1086)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(1000);
				bLocal_1086 = true;
			}
		}
		else if (bLocal_1086)
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			bLocal_1086 = false;
		}
		else
		{
			__LIB_9__::func_827(16, 0, 0, 0);
		}
	}
	else
	{
		func_224();
	}
}

bool func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_382(64))
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	else if (__LIB_1__::func_927())
	{
		return false;
	}
	else if (Global_1310720.f_6)
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && __LIB_12__::func_769(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_12__::func_643(uParam0, 12);
			return true;
		}
	}
	if (func_227(uParam0->f_174))
	{
		__LIB_12__::func_643(uParam0, 13);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (Global_1347702[uParam0->f_174 /*49*/].f_17 * Global_1347702[uParam0->f_174 /*49*/].f_17))
		{
			__LIB_12__::func_643(uParam0, 2);
			return true;
		}
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 65536) && !__LIB_9__::func_138(uParam0->f_174))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 16384);
		__LIB_12__::func_643(uParam0, 3);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 8388608 != 0)
	{
		iVar1 = __LIB_11__::func_128(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_730(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
			else if (__LIB_3__::func_151(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_45 != -1)
	{
		if (__LIB_0__::func_730(Global_1347702[uParam0->f_174 /*49*/].f_45))
		{
			__LIB_4__::func_838(uParam0->f_174, 2048);
			__LIB_12__::func_643(uParam0, 6);
			return true;
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_46 != 0)
	{
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 268435456 == 0)
		{
			iVar2 = __LIB_2__::func_954();
			if (!__LIB_12__::func_614(iVar2, Global_1347702[uParam0->f_174 /*49*/].f_46))
			{
				__LIB_12__::func_643(uParam0, 7);
				return true;
			}
		}
	}
	if (Global_1357549.f_1614 == 1)
	{
		__LIB_12__::func_643(uParam0, 8);
		return true;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_4__::func_838(uParam0->f_174, 16384);
			__LIB_12__::func_643(uParam0, 9);
			return true;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !__LIB_12__::func_778(uParam0->f_174, 1, 1, 0, 0))
	{
		__LIB_12__::func_643(uParam0, 10);
		return true;
	}
	if (func_236(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 1024);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	if (!__LIB_0__::func_58(uParam0) && __LIB_10__::func_270(uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 8192);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	return false;
}

void func_72(var uParam0)
{
	bool bVar0;
	__LIB_12__::func_955();
	func_241(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_8__::func_992(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_975(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_1__::func_561(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_74(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if ((__LIB_0__::func_1(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 256);
			__LIB_3__::func_319(uParam0->f_751);
			func_256(uParam0);
		}
		else
		{
			__LIB_12__::func_838(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (__LIB_12__::func_882(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 16))
			{
				cVar0 = { __LIB_0__::func_134() };
				Var8 = { __LIB_12__::func_665(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					__LIB_12__::func_909(&(uParam0->f_206));
					__LIB_12__::func_839(&(uParam0->f_206), &cVar0);
				}
			}
			__LIB_0__::func_7(&(uParam0->f_172), 256);
		}
	}
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (func_280(uParam0) && func_281(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_86(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			__LIB_3__::func_727(uParam0->f_174, 128);
		}
		else
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
			{
				__LIB_7__::func_602(uParam0->f_174);
				__LIB_10__::func_822(uParam0->f_174);
			}
		}
		else
		{
			__LIB_10__::func_694(Global_1347702[uParam0->f_174 /*49*/]);
			__LIB_7__::func_602(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174), 0, "");
		}
	}
	if (!__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		if (!__LIB_0__::func_702(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			__LIB_1__::func_298(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		__LIB_1__::func_821(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_12__::func_667(uParam0);
	__LIB_0__::func_7(&(uParam0->f_172), 8);
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		__LIB_12__::func_868(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		__LIB_0__::func_112(1, 16384, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 67108864);
	}
	__LIB_5__::func_109(uParam0, 1, 0);
	__LIB_1__::func_723(1);
	__LIB_1__::func_564(1);
	__LIB_12__::func_770();
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_12__::func_898(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
	if (__LIB_12__::func_882(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 256);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8388608) || !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_12__::func_918(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(Global_1347702[uParam0->f_174 /*49*/].f_3));
	HUD::SET_MISSION_NAME(true, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_0__::func_11(uParam0);
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		if (!__LIB_0__::func_13(32768))
		{
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
			{
				__LIB_12__::func_638(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (__LIB_12__::func_871(uParam0))
	{
		iVar5 = __LIB_12__::func_767(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0, iVar5, __LIB_12__::func_639(uParam0, 64));
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		func_299(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	StringCopy(&(uParam0->f_2575), "RCAL_S3_INT", 24);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_21, "CS_ASBDEPUTY_01", 0, 0, 0);
	__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
	__LIB_12__::func_909(&(uParam0->f_206));
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_92(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_106(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
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
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || func_302(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_87(uParam0);
				}
				func_299(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else if (!func_306(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_307(9);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 1:
			if (!func_306(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_307(10);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 2:
			if (!func_306(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_307(11);
				func_309(8192);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 3:
			if (!func_306(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_309(524288);
				func_309(1048576);
				func_309(2097152);
				func_309(262144);
				func_309(8192);
				func_309(8388608);
				func_309(16777216);
				func_309(33554432);
				func_309(4194304);
				func_307(6);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 4:
			if (!func_306(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_307(12);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 5:
			if (!func_306(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_307(8);
				__LIB_13__::func_105(1, 1);
				return 5;
			}
			break;
	}
	return 7;
}

bool func_98(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
		MISC::_0xA565FAC215CBC77D();
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if (!__LIB_13__::func_281(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_106(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		func_315(uParam0);
		if (!__LIB_0__::func_0(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_99(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_299(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

int func_101(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_322(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	switch (iLocal_16)
	{
		case 0:
			if (!__LIB_0__::func_255(iLocal_21, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_21, vLocal_22, 2.5f, 0, false, false, true, false);
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_660))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_660, vLocal_995, fLocal_998, true, false, true);
			}
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			__LIB_0__::func_489(0, 0);
			__LIB_12__::func_773(0, 0, 1, 1);
			func_329(6);
			break;
		case 2:
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			func_330();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_654) && !ENTITY::IS_ENTITY_DEAD(iLocal_648))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_654, vLocal_991, fLocal_994, true, false, true);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_654, true);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_654, 0, 0);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_648, true);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_648, 0, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_654, 186, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_648, 186, true);
			if (!func_220(67108864))
			{
				func_331();
				func_332(67108864);
			}
			func_329(7);
			__LIB_6__::func_891(Global_35);
			__LIB_1__::func_951(&(iLocal_673[1]));
			__LIB_1__::func_951(&(iLocal_673[2]));
			__LIB_1__::func_951(&(iLocal_673[0]));
			__LIB_3__::func_319(Local_681[2 /*16*/]);
			__LIB_0__::func_489(0, 0);
			break;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_281(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_299(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

void func_106(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (func_335(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	if (!bLocal_1087)
	{
		bLocal_1087 = true;
	}
	func_337();
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (func_220(1048576))
	{
		__LIB_13__::func_278(&uLocal_1186, vLocal_1183, 1, -1082130432 /* Float: -1f */);
	}
	if (!func_220(16777216))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1182))
		{
			iLocal_1182 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2680.792f, 1875.068f, 102.1045f, 0f, 0f, 0f, 200f, 200f, 100f, "m_volBwineAmbientRestriction");
		}
		else
		{
			__LIB_4__::func_112(iLocal_1182);
			__LIB_2__::func_261(iLocal_1182, "RCAL3_BwineAmbientRestrict", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			__LIB_3__::func_241(iLocal_1182, 1);
			func_332(16777216);
		}
	}
	if (!func_220(33554432))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1181))
		{
			iLocal_1181 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2500.353f, 1653.52f, 84.5419f, 0f, 0f, 0f, 200f, 200f, 100f, "m_volCampAmbientRestriction");
		}
		else
		{
			__LIB_4__::func_112(iLocal_1181);
			__LIB_2__::func_261(iLocal_1181, "RCAL3_OutlawCampAmbientRestrict", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			func_332(33554432);
		}
	}
	switch (iLocal_14)
	{
		case 0:
			func_342(uParam0);
			func_343(uParam0);
			func_344(uParam0);
			break;
		case 1:
			func_342(uParam0);
			func_343(uParam0);
			func_345(uParam0);
			break;
		case 2:
			func_342(uParam0);
			func_343(uParam0);
			func_346(uParam0);
			break;
		case 3:
			func_342(uParam0);
			func_343(uParam0);
			func_347();
			break;
		case 4:
			func_342(uParam0);
			func_343(uParam0);
			func_348(uParam0);
			if (__LIB_0__::func_48(Global_35, iLocal_660, 10f, 1))
			{
				if (!func_349(134217728))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_660, Global_35, 8000, 0, 51, 0);
					func_350(uParam0, Local_1192[31 /*2*/], 1);
				}
				else if (!func_349(268435456))
				{
					if (!__LIB_0__::func_899(&uLocal_1073))
					{
						if (!__LIB_13__::func_273(Local_1192[31 /*2*/]) && !__LIB_13__::func_273(Local_1192[32 /*2*/]))
						{
							__LIB_2__::func_259(&uLocal_1073);
						}
					}
					else if (__LIB_4__::func_118(&uLocal_1073) > 15f)
					{
						if (func_350(uParam0, Local_1192[32 /*2*/], 1))
						{
							__LIB_1__::func_561(&uLocal_1073);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_660, Global_35, 8000, 0, 51, 0);
							func_353(268435456);
						}
					}
				}
			}
			break;
		case 5:
			func_342(uParam0);
			func_343(uParam0);
			if (!__LIB_0__::func_48(Global_35, iLocal_648, 20f, 1))
			{
				func_354(0);
				__LIB_1__::func_681(&iLocal_1266, 16);
				__LIB_1__::func_681(&iLocal_1266, 8);
				func_329(4);
				return 7;
			}
			if (__LIB_0__::func_266(iLocal_648, vLocal_1175, 6.5f, 1, 1))
			{
				func_356(uParam0, 1);
			}
			else
			{
				func_356(uParam0, 0);
			}
			if (!func_349(536870912))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_660, 10f, 1))
				{
					if (__LIB_3__::func_458(iLocal_648) == 5)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[1 /*16*/]))
						{
							if (__LIB_12__::func_876(uParam0, "RCAL_RC3_LI_A", 0))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_681[1 /*16*/], "LOOP", true, false);
								func_309(536870912);
							}
						}
					}
					else if (!func_349(134217728))
					{
						if (!__LIB_0__::func_48(iLocal_648, iLocal_660, 20f, 1))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_660, Global_35, 8000, 0, 51, 0);
							func_350(uParam0, Local_1192[31 /*2*/], 1);
						}
						else
						{
							__LIB_1__::func_585(&uLocal_1073, 13f);
							func_309(134217728);
						}
					}
					else if (!func_349(268435456))
					{
						if (!__LIB_0__::func_899(&uLocal_1073))
						{
							if (!__LIB_13__::func_273(Local_1192[31 /*2*/]) && !__LIB_13__::func_273(Local_1192[32 /*2*/]))
							{
								__LIB_2__::func_259(&uLocal_1073);
							}
						}
						else if (__LIB_4__::func_118(&uLocal_1073) > 15f)
						{
							if (func_350(uParam0, Local_1192[32 /*2*/], 1))
							{
								__LIB_1__::func_561(&uLocal_1073);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_660, Global_35, 8000, 0, 51, 0);
								func_353(268435456);
							}
						}
					}
				}
			}
			else
			{
				func_360(1, "Got_Em");
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_681[1 /*16*/], "LOOP"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_681[1 /*16*/], "LOOP", false, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_660))
			{
				if (func_361())
				{
					if (__LIB_0__::func_48(iLocal_648, iLocal_660, 10f, 1))
					{
						PED::SET_PED_RESET_FLAG(Global_35, 224, true);
						ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_648, 4, 1);
						if (!__LIB_0__::func_27(iLocal_1266, 2048))
						{
							iLocal_16 = 1;
							func_363(uParam0);
							__LIB_1__::func_683(&iLocal_1266, 2048);
						}
						else if (__LIB_0__::func_266(iLocal_648, vLocal_1175, 6.5f, 1, 1))
						{
							if (!bLocal_1085)
							{
								if (!__LIB_0__::func_899(&uLocal_1049))
								{
									__LIB_2__::func_259(&uLocal_1049);
								}
								else if (__LIB_4__::func_118(&uLocal_1049) > 4f)
								{
									TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_648, Global_36, 1f, 1);
									__LIB_1__::func_561(&uLocal_1049);
									bLocal_1085 = true;
								}
							}
							if (!__LIB_0__::func_899(&uLocal_1022))
							{
								if (__LIB_3__::func_458(iLocal_648) == 6)
								{
									__LIB_2__::func_259(&uLocal_1022);
								}
							}
							else if (__LIB_4__::func_118(&uLocal_1022) > 1f)
							{
								CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
								__LIB_1__::func_561(&uLocal_1022);
								func_299(uParam0, func_61(3), func_61(4), 3, 4, 0);
								func_354(0);
								__LIB_5__::func_20(0, 0);
								func_366();
								return 6;
							}
							else
							{
								CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
							}
						}
						else if (__LIB_0__::func_899(&uLocal_1049))
						{
							__LIB_1__::func_561(&uLocal_1049);
						}
					}
				}
			}
			break;
		case 6:
			if (!bLocal_1088)
			{
				if (!__LIB_0__::func_163(Global_35, -717627678))
				{
					__LIB_12__::func_773(0, 0, 1, 1);
				}
				else
				{
					bLocal_1088 = true;
				}
			}
			if (!__LIB_0__::func_899(&uLocal_1046))
			{
				if (func_368(uParam0) && !CAM::_0x1204EB53A5FBC63D())
				{
					__LIB_2__::func_259(&uLocal_1046);
				}
			}
			else if (__LIB_4__::func_118(&uLocal_1046) > 2.5f)
			{
				__LIB_12__::func_773(0, 0, 1, 1);
				func_366();
				return 6;
			}
			else
			{
				if (!__LIB_0__::func_163(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_654, -1, -1f, -1f, -1f);
				}
				__LIB_12__::func_773(0, 0, 1, 1);
			}
			break;
		case 7:
			__LIB_6__::func_765(21, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return 8;
	}
	return 7;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	bVar0 = __LIB_0__::func_21(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && __LIB_1__::func_972(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			__LIB_4__::func_521(iParam0, __LIB_0__::func_23());
			__LIB_0__::func_24(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		__LIB_0__::func_25(iParam0, 67108864);
		__LIB_4__::func_521(iParam0, -15);
	}
	func_387(iParam0);
}

void func_126(var uParam0, char* sParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	__LIB_12__::func_772(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (bParam2 || !func_395(sParam1))
	{
		__LIB_1__::func_422(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_3__::func_727(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!__LIB_0__::func_13(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!__LIB_0__::func_113())
		{
			Global_1347702[iParam0 /*49*/].f_35 = 104;
			Global_1347702[104 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
	}
	__LIB_13__::func_134(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_12__::func_899(Global_1347702[iParam0 /*49*/].f_35);
		if (iParam1 == 1)
		{
			__LIB_4__::func_471(Global_1347702[iParam0 /*49*/].f_35, 0);
			if (__LIB_11__::func_197(iParam0))
			{
				Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43 = Global_1347702[iParam0 /*49*/].f_43;
			}
		}
	}
	else
	{
		__LIB_12__::func_628();
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1) && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 33554432))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 262144))
		{
			if (bParam5)
			{
				__LIB_10__::func_709(iParam0);
			}
			bParam5 = false;
			cVar0 = __LIB_1__::func_613(Global_1347702[iParam0 /*49*/].f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cVar0), 2);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_405(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_406(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_409(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_133(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && __LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_413(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (__LIB_0__::func_13(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = __LIB_0__::func_23();
	}
}

void func_138(var uParam0)
{
	func_307(8);
	__LIB_6__::func_726(&(Local_802.f_61), 0);
	func_416(&Local_896, &Local_802);
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!func_435() || __LIB_0__::func_266(Global_35, vLocal_1175, 150f, 1, 1))
		{
			return false;
		}
	}
	if (__LIB_12__::func_644(uParam0) == 11 || __LIB_12__::func_644(uParam0) == 9)
	{
		if (bLocal_1092)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[0 /*16*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_681[0 /*16*/], false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_681[0 /*16*/]) > 0.98f)
					{
						__LIB_2__::func_788(&iLocal_21, 1, 1, 1);
					}
					return false;
				}
			}
		}
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	__LIB_2__::func_788(&iLocal_660, 1, 0, 1);
	__LIB_2__::func_788(&(Local_666[0 /*5*/]), 1, 0, 1);
	if (!__LIB_0__::func_27(iLocal_1264, 2))
	{
		func_436(uParam0);
	}
	__LIB_0__::func_400(joaat("AMB_CAMP_ROA_RC_CALLOWAY"));
	__LIB_5__::func_440("CAL_3_Outlaw_Camp");
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_800))
	{
		OBJECT::REMOVE_PICKUP(iLocal_800);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_681[iVar0 /*16*/]);
		}
		iVar0++;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_187()
{
	iLocal_649 = joaat("CS_FAMOUSGUNSLINGER_06");
	iLocal_672 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	vLocal_650 = { 2376.062f, 1599.311f, 86.9439f };
	fLocal_653 = 151.1228f;
	Local_55[0 /*148*/].f_1 = joaat("RCSP_CALLOWAY_MALES_01");
	Local_55[0 /*148*/].f_2 = { 2363.831f, 1584.8f, 84.4963f };
	Local_55[0 /*148*/].f_5 = 55.3889f;
	Local_55[0 /*148*/].f_6 = { 2358.352f, 1586.969f, 84.4638f };
	Local_55[0 /*148*/].f_9 = 77.5069f;
	Local_55[0 /*148*/].f_10 = 0;
	Local_55[0 /*148*/].f_11 = 0;
	Local_55[0 /*148*/].f_48 = 15;
	Local_55[1 /*148*/].f_1 = joaat("RCSP_CALLOWAY_MALES_01");
	Local_55[1 /*148*/].f_2 = { 2370.386f, 1590.423f, 84.6107f };
	Local_55[1 /*148*/].f_5 = 143.8463f;
	Local_55[1 /*148*/].f_6 = { 2370.386f, 1590.423f, 84.6107f };
	Local_55[1 /*148*/].f_9 = 143.8463f;
	Local_55[1 /*148*/].f_10 = 0;
	Local_55[1 /*148*/].f_11 = 0;
	Local_55[1 /*148*/].f_48 = 45;
	Local_55[2 /*148*/].f_1 = joaat("RCSP_CALLOWAY_MALES_01");
	Local_55[2 /*148*/].f_2 = { 2369.901f, 1582.372f, 84.535f };
	Local_55[2 /*148*/].f_5 = 176.5809f;
	Local_55[2 /*148*/].f_6 = { 2370.165f, 1575.172f, 84.1942f };
	Local_55[2 /*148*/].f_9 = 171.1069f;
	Local_55[2 /*148*/].f_10 = 0;
	Local_55[2 /*148*/].f_11 = 0;
	Local_55[2 /*148*/].f_48 = 15;
	Local_55[3 /*148*/].f_1 = joaat("RCSP_CALLOWAY_MALES_01");
	Local_55[3 /*148*/].f_2 = { 2372.782f, 1586.943f, 84.5609f };
	Local_55[3 /*148*/].f_5 = 105.1777f;
	Local_55[3 /*148*/].f_6 = { 2372.782f, 1586.943f, 84.5609f };
	Local_55[3 /*148*/].f_9 = 105.1777f;
	Local_55[3 /*148*/].f_10 = 0;
	Local_55[3 /*148*/].f_11 = 0;
	Local_55[3 /*148*/].f_48 = 50;
}

void func_188()
{
	iLocal_655 = joaat("CS_JIMCALLOWAY");
	iLocal_661 = joaat("CS_THEODORELEVIN");
	Local_666[0 /*5*/].f_1 = { 2683.38f, 1945.2f, 102.3347f };
	Local_666[0 /*5*/].f_4 = 10.38f;
	vLocal_656 = { 2676.486f, 1948.333f, 102.0387f };
	fLocal_659 = 66.6671f;
	vLocal_662 = { 2681.746f, 1945.321f, 102.2004f };
	fLocal_665 = 179.2073f;
	vLocal_1175 = { 2680.792f, 1943.437f, 102.1045f };
}

int func_189(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iLocal_16 == 0)
	{
		iVar0 = (CLOCK::GET_CLOCK_HOURS() * 100 + CLOCK::GET_CLOCK_MINUTES());
		if (iVar0 > 1500 && iVar0 < 2000)
		{
			CLOCK::SET_CLOCK_TIME(15, 55, 0);
		}
		if (iVar0 >= 2000 || iVar0 < 500)
		{
			CLOCK::SET_CLOCK_TIME(5, 0, 0);
		}
		__LIB_13__::func_574(uParam0, &iLocal_798, vLocal_794, fLocal_797, 1, 1, 1, 1, 1);
	}
	else if (iLocal_16 == 1)
	{
		CLOCK::SET_CLOCK_TIME(16, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_648, 6, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_654))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_654, 2680.038f, 1960.259f, 104.7847f, 189.778f, true, false, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_654, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_654, false);
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_55[iVar1 /*148*/]))
			{
				__LIB_0__::func_325(&(Local_55[iVar1 /*148*/].f_12));
				__LIB_2__::func_426(&(Local_55[iVar1 /*148*/]));
			}
			iVar1++;
		}
		if (!func_220(16384))
		{
			if (func_464(2683.614f, 1929.953f, 101.5614f, 16.4156f))
			{
				func_465(2683.614f, 1929.953f, 101.5614f, 16.4156f);
				func_332(16384);
			}
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCAL_DROP_OFF");
	}
	else if (iLocal_16 == 2)
	{
		__LIB_3__::func_811(&Local_896, &Local_802);
		func_416(&Local_896, &Local_802);
		__LIB_1__::func_951(&(iLocal_673[2]));
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vLocal_991, 15f);
		GRAPHICS::_ADD_BLOOD_POOL_2(2677.472f, 1945.298f, 102.097f, 1f, 1f, 1f, false, NaNf, false);
	}
	return 1;
}

int func_191(var uParam0)
{
	var uVar0;
	var uVar3;
	if (iLocal_16 == 0)
	{
		if (!bLocal_1017)
		{
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), false, true, true, 30f, false);
			bLocal_1017 = true;
		}
		if (__LIB_13__::func_193(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
		{
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
		__LIB_13__::func_574(uParam0, &iLocal_798, vLocal_794, fLocal_797, 1, 1, 1, 1, 1);
	}
	else if (iLocal_16 == 1)
	{
		if (__LIB_13__::func_23(&(uParam0->f_206), "RCAL_RC3"))
		{
			func_470(2, 0, func_196(2));
			if (!func_220(16384))
			{
				if (func_464(2683.614f, 1929.953f, 101.5614f, 16.4156f))
				{
					func_465(2683.614f, 1929.953f, 101.5614f, 16.4156f);
					func_332(16384);
				}
			}
		}
		if (__LIB_13__::func_193(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
		{
			if (func_470(2, 0, func_196(2)))
			{
				func_471();
				ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_681[2 /*16*/], &uVar0, &uVar3, 2);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_681[2 /*16*/], vLocal_991.x, vLocal_991.y, 103.165f, 0f, 0f, -140f, 2);
				ANIMSCENE::START_ANIM_SCENE(Local_681[2 /*16*/]);
				func_472(&Local_896, &Local_802);
			}
		}
	}
	else if (iLocal_16 == 2)
	{
	}
	return 1;
}

int func_193(var uParam0)
{
	if (iLocal_16 == 0)
	{
	}
	else if (iLocal_16 == 1)
	{
		if (!func_470(2, 0, func_196(2)))
		{
			return 0;
		}
	}
	else if (iLocal_16 == 2)
	{
	}
	return 1;
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_leadin";
		case 1:
			return "PL_Leadin";
		case 2:
			return "pbl_Belt_Trick_and_Draw";
		case 3:
			return "pbl_Calloway_Captured_Idle";
		case 4:
			return "pbl_Calloway_Front_Look_Respond";
		case 5:
			return "pbl_Calloway_Left_Look_Respond";
		case 6:
			return "pbl_Calloway_Right_Look_Respond";
		case 19:
			return "pbl_Player_Normal_Approach";
		case 20:
			return "pbl_Player_Stealth_Approach";
		case 21:
			return "pbl_Normal_Need_A_Favour";
		case 22:
			return "pbl_Stealth_Need_A_Favour";
		case 7:
			return "pbl_Stealth_Enter_FRONT_LEFT";
		case 8:
			return "pbl_Stealth_Enter_FRONT_RIGHT";
		case 9:
			return "pbl_Stealth_Enter_LEFT";
		case 10:
			return "pbl_Stealth_Enter_RIGHT";
		case 11:
			return "pbl_Mid_Combat_Enter_FRONT_LEFT";
		case 12:
			return "pbl_Mid_Combat_Enter_FRONT_RIGHT";
		case 13:
			return "pbl_Mid_Combat_Enter_LEFT";
		case 14:
			return "pbl_Mid_Combat_Enter_RIGHT";
		case 15:
			return "pbl_Normal_Enter_FRONT_LEFT";
		case 16:
			return "pbl_Normal_Enter_FRONT_RIGHT";
		case 17:
			return "pbl_Normal_Enter_LEFT";
		case 18:
			return "pbl_Normal_Enter_RIGHT";
	}
	return "";
}

void func_198()
{
	if (!__LIB_0__::func_181())
	{
		Local_1192[1 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_SEE_PA", 2) };
		Local_1192[2 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_SEE_NA", 4) };
		Local_1192[3 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_NSE_PA", 2) };
		Local_1192[4 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_NSE_NA", 4) };
		Local_1192[13 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_S1A", 2048) };
		Local_1192[14 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_N1A", 2048) };
		Local_1192[15 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_S2A", 4096) };
		Local_1192[16 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_N2A", 4096) };
		Local_1192[17 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_F1A", 8192) };
		Local_1192[19 /*2*/] = { __LIB_13__::func_265("RCAL_UNTIECB_A", 32768) };
		Local_1192[22 /*2*/] = { __LIB_13__::func_265("CAL3_SAVED", 262144) };
		Local_1192[23 /*2*/] = { __LIB_13__::func_265("CAL3_JOURNEY1", 524288) };
		Local_1192[24 /*2*/] = { __LIB_13__::func_265("CAL3_JOURNEY2", 1048576) };
		Local_1192[25 /*2*/] = { __LIB_13__::func_265("CAL3_JOURNEY3_A", 2097152) };
		Local_1192[28 /*2*/] = { __LIB_13__::func_265("RCAL_BWD_A", 4194304) };
		Local_1192[27 /*2*/] = { __LIB_13__::func_265("RCAL_POSTRIVERA", 16777216) };
		Local_1192[31 /*2*/] = { __LIB_13__::func_265("CAL3_LEVGREET3", 134217728) };
	}
	else
	{
		Local_1192[1 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_SEE_PJ", 2) };
		Local_1192[2 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_SEE_NJ", 4) };
		Local_1192[3 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_NSE_PJ", 2) };
		Local_1192[4 /*2*/] = { __LIB_13__::func_265("CAL3_ILO_NSE_NJ", 4) };
		Local_1192[13 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_S1J", 2048) };
		Local_1192[14 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_N1J", 2048) };
		Local_1192[15 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_S2J", 4096) };
		Local_1192[16 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_N2J", 4096) };
		Local_1192[17 /*2*/] = { __LIB_13__::func_265("RCAL_S3_IG3_F1J", 8192) };
		Local_1192[19 /*2*/] = { __LIB_13__::func_265("RCAL_UNTIECB_J", 32768) };
		Local_1192[22 /*2*/] = { __LIB_13__::func_265("CAL3_SAVED_J", 262144) };
		Local_1192[23 /*2*/] = { __LIB_13__::func_265("CAL3_JOURNEY1_J", 524288) };
		Local_1192[24 /*2*/] = { __LIB_13__::func_265("CAL3_JOURNEY2_J", 1048576) };
		Local_1192[25 /*2*/] = { __LIB_13__::func_265("CAL3_JOURNEY3_J", 2097152) };
		Local_1192[28 /*2*/] = { __LIB_13__::func_265("RCAL_BWD_J", 4194304) };
		Local_1192[27 /*2*/] = { __LIB_13__::func_265("RCAL_POSTRIVERJ", 16777216) };
		Local_1192[31 /*2*/] = { __LIB_13__::func_265("CAL3_LEVGREET3J", 134217728) };
	}
	Local_1192[0 /*2*/] = { __LIB_13__::func_265("CAL3_OLW_INT", 1) };
	Local_1192[5 /*2*/] = { __LIB_13__::func_265("CAL3_OLW_SPTK", 8) };
	Local_1192[6 /*2*/] = { __LIB_13__::func_265("CAL3_OLW_SPTK2", 16) };
	Local_1192[7 /*2*/] = { __LIB_13__::func_265("RCAL_OLW1_CMBT", 32) };
	Local_1192[8 /*2*/] = { __LIB_13__::func_265("RCAL_OLW2_CMBT", 64) };
	Local_1192[9 /*2*/] = { __LIB_13__::func_265("RCAL_OLW1_TAKEG", 128) };
	Local_1192[10 /*2*/] = { __LIB_13__::func_265("RCAL_OLW2_TAKEG", 256) };
	Local_1192[11 /*2*/] = { __LIB_13__::func_265("RCAL_CO_ALIVE", 512) };
	Local_1192[12 /*2*/] = { __LIB_13__::func_265("RCAL_GRNT_CLOSE", 1024) };
	Local_1192[18 /*2*/] = { __LIB_13__::func_265("RCAL_SEEN", 16384) };
	Local_1192[20 /*2*/] = { __LIB_13__::func_265("RCAL_ALLDEAD", 65536) };
	Local_1192[21 /*2*/] = { __LIB_13__::func_265("RCAL_CO_DEAD", 131072) };
	Local_1192[26 /*2*/] = { __LIB_13__::func_265("RCAL_RIVER", 8388608) };
	Local_1192[29 /*2*/] = { __LIB_13__::func_265("RCAL_COMPLAIN", 33554432) };
	Local_1192[30 /*2*/] = { __LIB_13__::func_265("CAL3_LEVGREET1", 67108864) };
	Local_1192[32 /*2*/] = { __LIB_13__::func_265("CAL3_LEVINWAIT", 268435456) };
}

int func_211(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_133(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_500(0, 0);
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

bool func_220(int iParam0)
{
	return __LIB_0__::func_27(iLocal_1262, iParam0);
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1600;
	iVar1 = (iVar0 / 100);
	iVar2 = (iVar0 % 100);
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	iVar4 = CLOCK::GET_CLOCK_MINUTES();
	if (!bLocal_1016)
	{
		if (iVar3 == iVar1 && (iVar4 >= iVar2 && iVar4 < iVar2 + 6))
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			bLocal_1016 = true;
		}
	}
	else if (iVar3 != iVar1 && (iVar4 < iVar2 && iVar4 > iVar2 + 6))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		bLocal_1016 = false;
	}
	func_550();
}

bool func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1347702[iParam0 /*49*/].f_13 & 8 != 0)
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		if (!__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
		{
			if ((!__LIB_1__::func_25(Global_1347702[8 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[67 /*74*/].f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[67 /*74*/].f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!__LIB_8__::func_779(2) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = __LIB_1__::func_293(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
		if (__LIB_0__::func_6(iVar1))
		{
			iVar0 = __LIB_0__::func_895(iVar1);
			if (!__LIB_0__::func_27(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[0 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[94 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1835011[25 /*74*/].f_1, 1)) && (__LIB_1__::func_25(Global_1835011[8 /*74*/].f_1, 1) || (__LIB_1__::func_25(Global_1347702[98 /*49*/].f_15, 1) && __LIB_0__::func_895(Global_1347702[98 /*49*/].f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!__LIB_1__::func_25(Global_1835011[34 /*74*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!__LIB_1__::func_25(Global_1347702[41 /*49*/].f_15, 1))
		{
			if (!__LIB_0__::func_315(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!__LIB_11__::func_139(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!__LIB_1__::func_25(Global_1347702[51 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (__LIB_5__::func_297(Global_1347702[iParam0 /*49*/].f_15) == 0)
		{
			if (__LIB_0__::func_342() <= 160)
			{
				return true;
			}
			else
			{
				__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 1);
			}
		}
		if (!__LIB_1__::func_187(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (__LIB_0__::func_702(Global_1835011[47 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[45 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_627(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (__LIB_0__::func_702(Global_1835011[20 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < Global_1898438)
		{
			return true;
		}
		else if (Global_1879534.f_1 || Global_1879534)
		{
			return true;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[113 /*49*/].f_42, false) && __LIB_11__::func_188())
		{
			if (__LIB_1__::func_422("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (__LIB_0__::func_702(Global_1835011[69 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	return false;
}

int func_236(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_21))
		{
			return 1;
		}
		else if (__LIB_13__::func_714(iLocal_21, 0, &uLocal_26, &uLocal_54, 0, 0))
		{
			return 1;
		}
		else if (__LIB_3__::func_982() && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_21))
		{
			LAW::_REPORT_CRIME(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, true);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_13__::func_222(uParam0, 2);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_577();
		__LIB_1__::func_240(526, 0);
		PED::_0x6569F31A01B4C097(iLocal_648, 4, 1);
		PED::_0x6569F31A01B4C097(iLocal_648, 0, 1);
		PED::_0x6569F31A01B4C097(iLocal_648, 1, 1);
		func_436(uParam0);
		if (!__LIB_0__::func_181())
		{
			if (!__LIB_0__::func_878(joaat("TP_RCAL_LEVIN_LETTER"), -1))
			{
				iVar0 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar0, 0, 0, 0, 3, 0, 0, 0);
				__LIB_1__::func_612(joaat("TP_RCAL_LEVIN_LETTER"), iVar0, 1);
			}
		}
		else if (!__LIB_0__::func_878(joaat("TP_RCAL_LEVIN_LETTER_JN"), -1))
		{
			iVar1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, 0, 3, 0, 0, 0);
			__LIB_1__::func_612(joaat("TP_RCAL_LEVIN_LETTER_JN"), iVar1, 1);
		}
		if (!func_220(67108864))
		{
			func_331();
			func_332(67108864);
		}
	}
	else if (__LIB_12__::func_644(uParam0) == 11 || __LIB_12__::func_644(uParam0) == 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_21))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[0 /*16*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_681[0 /*16*/], "b_breakout", true, false);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_21, Global_35, 10000, 0, 51, 0);
				bLocal_1092 = true;
			}
		}
		__LIB_2__::func_624(&Local_1094, 1, 1, 1, 0);
		vLocal_1112.f_2 = 0;
		__LIB_1__::func_480(&iLocal_21);
	}
}

void func_256(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_280(var uParam0)
{
	vector3 vVar0;
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		STREAMING::REQUEST_MODEL(Global_1347702[uParam0->f_174 /*49*/].f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(Global_1347702[uParam0->f_174 /*49*/].f_28))
		{
			return 0;
		}
		vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
		__LIB_3__::func_618(vVar0, 2.5f, 1, 0, 0, 0, 0);
		PERSISTENCE::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 524288))
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = func_634(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = func_634(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43) && !PED::IS_PED_INJURED(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_281(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		iLocal_21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_21, true))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_21, true, true);
		return 0;
	}
	if (!__LIB_12__::func_871(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_679))
		{
			if (iLocal_680 == 0)
			{
				iLocal_680 = ENTITY::_0x6F3068258A499E52(joaat("P_WOODENCHAIR01X"), 2907.414f, 1314.471f, 44.39078f, 7);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_680))
			{
				iLocal_679 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_680));
			}
			return 0;
		}
		else if (!func_470(0, 0, func_196(0)))
		{
			return 0;
		}
	}
	if (!__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_21))
	{
		__LIB_12__::func_875(uParam0, iLocal_21, "RCAL_DEPUTY", 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_21, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_21, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_21, vLocal_22, fLocal_25, true, false, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_21, 66, true);
		WEAPON::_0x899A04AFCC725D04(iLocal_21, joaat("AMBIENT_REVOLVER_PISTOL"));
		__LIB_4__::func_228(&uLocal_26);
		__LIB_1__::func_402(&uLocal_26, 1);
		__LIB_1__::func_401(&uLocal_26, 1);
		if (__LIB_12__::func_871(uParam0))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_21, vLocal_22, 2.5f, 0, false, false, true, false);
		}
		else
		{
			ANIMSCENE::START_ANIM_SCENE(Local_681[0 /*16*/]);
		}
	}
	__LIB_4__::func_228(&uLocal_1267);
	__LIB_6__::func_905(&uLocal_1267);
	__LIB_1__::func_402(&uLocal_1267, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_ASBDEPUTY_01"));
	return 1;
}

void func_299(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;
	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			__LIB_12__::func_945(uParam0);
		}
		uParam0->f_752 = iParam9;
		__LIB_12__::func_946(uParam0);
	}
	if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
	{
		__LIB_0__::func_869(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((__LIB_4__::func_513() == iParam9 && __LIB_12__::func_799() == iParam10) && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (__LIB_4__::func_513() != iParam9 && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
	{
		__LIB_0__::func_304(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_659(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

bool func_302(var uParam0)
{
	if (__LIB_0__::func_266(Global_35, vLocal_22, 6.5f, 1, 1) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_21, -1, 0, 51, 0);
	}
	if (!bLocal_1089)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_22, 9f, 1, 1) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
		{
			__LIB_12__::func_980(&vLocal_1112, &Local_1094, 0, Global_1347702[29 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_1094[0 /*17*/]), "CAL1_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_515(&(Local_1094[0 /*17*/]), 0, 0);
			bLocal_1089 = true;
		}
	}
	else if (!bLocal_1090)
	{
		iLocal_1173 = func_664(&iLocal_21, &vLocal_1112, 5f, &Local_1094, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (__LIB_0__::func_48(Global_35, iLocal_21, 5f, 1))
		{
			if (!bLocal_1091)
			{
				__LIB_3__::func_515(&(Local_1094[0 /*17*/]), 1, 0);
				bLocal_1091 = true;
			}
		}
		else if (bLocal_1091)
		{
			__LIB_3__::func_515(&(Local_1094[0 /*17*/]), 0, 0);
			bLocal_1091 = false;
		}
		if (iLocal_1173 == 0)
		{
			__LIB_5__::func_20(0, 0);
			__LIB_2__::func_624(&Local_1094, 1, 1, 1, 0);
			vLocal_1112.f_2 = 0;
			__LIB_1__::func_480(&iLocal_21);
			bLocal_1090 = true;
		}
	}
	else
	{
		__LIB_13__::func_282(&iLocal_21, &vLocal_1112, &Local_1094, 9f, -1082130432 /* Float: -1f */, 0);
		__LIB_3__::func_10(Global_35);
		__LIB_5__::func_20(0, 0);
		__LIB_13__::func_279();
		__LIB_12__::func_991(&vLocal_1112, iLocal_21);
		return true;
	}
	return false;
}

bool func_306(var uParam0, int iParam1)
{
	switch (iLocal_17)
	{
		case 0:
			if (!bLocal_1017)
			{
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, true, 0f, false);
				bLocal_1017 = true;
			}
			switch (iParam1)
			{
				case 0:
					PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 250f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1178, 50f, 1, 0);
					iLocal_14 = 0;
					if (__LIB_4__::func_511())
					{
						func_299(uParam0, func_61(0), func_61(1), 0, 1, 0);
					}
					break;
				case 1:
					PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 250f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1178, 50f, 1, 0);
					__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
					iLocal_14 = 0;
					if (__LIB_4__::func_511())
					{
						func_299(uParam0, func_61(1), func_61(2), 1, 2, 0);
					}
					break;
				case 2:
					PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 250f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1178, 50f, 1, 0);
					__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
					func_309(262144);
					iLocal_14 = 2;
					iLocal_19 = 1;
					func_332(1);
					__LIB_1__::func_683(&iLocal_1265, 16384);
					if (__LIB_4__::func_511())
					{
						func_299(uParam0, func_61(2), func_61(3), 2, 3, 0);
					}
					break;
				case 3:
					PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 250f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1178, 50f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1175, 150f, 1, 0);
					__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
					func_309(262144);
					func_309(524288);
					func_309(1048576);
					iLocal_14 = 2;
					iLocal_19 = 1;
					func_332(1);
					func_332(262144);
					__LIB_1__::func_683(&iLocal_1265, 16384);
					iLocal_16 = 1;
					if (__LIB_4__::func_511())
					{
						func_299(uParam0, func_61(3), func_61(4), 3, 4, 0);
					}
					break;
				case 4:
					PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 250f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1178, 50f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1175, 150f, 1, 0);
					__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
					func_309(262144);
					iLocal_14 = 6;
					func_332(1);
					if (__LIB_4__::func_511())
					{
						func_299(uParam0, func_61(4), func_61(5), 4, 5, 0);
					}
					break;
				case 5:
					PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 250f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1178, 50f, 1, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_1175, 150f, 1, 0);
					__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
					func_309(262144);
					iLocal_14 = 7;
					func_332(1);
					iLocal_16 = 2;
					break;
			}
			iLocal_17 = 1;
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_464(vLocal_794, fLocal_797))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_798, vLocal_794, true, false, true, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_798, fLocal_797);
						}
						func_671();
						iLocal_17 = 2;
					}
					break;
				case 1:
					__LIB_2__::func_259(&uLocal_1025);
					if (!func_220(2048))
					{
						if (func_672(uParam0, 1, 1))
						{
							func_332(2048);
						}
					}
					else if (!func_673())
					{
					}
					else if (!func_470(3, 4, func_196(3)))
					{
					}
					else if (!func_220(524288))
					{
						STREAMING::_REQUEST_IMAP(joaat("AMB_CAMP_ROA_RC_CALLOWAY"));
						__LIB_5__::func_441("CAL_3_Outlaw_Camp");
						__LIB_1__::func_683(&iLocal_1265, 16384);
						func_332(524288);
					}
					else if (!func_220(32768))
					{
						if (func_675(uParam0))
						{
							func_332(32768);
						}
					}
					else if (func_464(2414.432f, 1574.302f, 85.4443f, 27.125f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_798, 2414.432f, 1574.302f, 85.4443f, true, false, true, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_798, 27.125f);
						}
						iLocal_17 = 2;
					}
					break;
				case 2:
					if (!func_220(2048))
					{
						if (func_672(uParam0, 1, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_648, 2509.452f, 1541.933f, 84.2567f, true, false, true, true);
							func_332(2048);
						}
					}
					else if (!func_220(524288))
					{
						STREAMING::_REQUEST_IMAP(joaat("AMB_CAMP_ROA_RC_CALLOWAY"));
						__LIB_5__::func_441("CAL_3_Outlaw_Camp");
						func_332(524288);
					}
					else if (func_464(2509.452f, 1541.933f, 84.2567f, 348.1441f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_798, 2509.452f, 1541.933f, 84.2567f, true, false, true, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_798, 348.1441f);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_648) && !ENTITY::IS_ENTITY_DEAD(iLocal_798))
						{
							if (__LIB_0__::func_163(iLocal_648, joaat("SCRIPT_TASK_CARRIABLE")))
							{
								__LIB_2__::func_259(&uLocal_1025);
								PED::SET_PED_CAN_BE_TARGETTED(iLocal_648, true);
								iLocal_17 = 2;
							}
							else
							{
								TASK::TASK_CARRIABLE(iLocal_648, joaat("HOGTIED_PED"), Global_35, 0, 0);
							}
						}
					}
					break;
				case 3:
					if (!func_220(2048))
					{
						if (func_672(uParam0, 0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_648, 2678.615f, 2197.442f, 97.1939f, true, false, true, true);
							func_332(2048);
						}
					}
					else if (!func_220(16))
					{
						func_676(uParam0, 1, 1);
					}
					else if (func_464(2683.614f, 1929.953f, 101.5614f, 16.4156f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
						{
							func_465(2683.614f, 1929.953f, 101.5614f, 16.4156f);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_648) && !ENTITY::IS_ENTITY_DEAD(iLocal_660))
						{
							if (__LIB_0__::func_163(iLocal_648, joaat("SCRIPT_TASK_CARRIABLE")))
							{
								if (PED::_0xA0BC8FAED8CFEB3C(iLocal_648) && PED::_0xA0BC8FAED8CFEB3C(iLocal_660))
								{
									__LIB_2__::func_259(&uLocal_1025);
									PED::SET_PED_CAN_BE_TARGETTED(iLocal_648, true);
									__LIB_1__::func_683(&iLocal_1266, 4096);
									iLocal_17 = 2;
								}
							}
							else
							{
								TASK::TASK_CARRIABLE(iLocal_648, joaat("HOGTIED_PED"), Global_35, 0, 0);
							}
						}
					}
					break;
				case 4:
					if (!func_220(2048))
					{
						if (func_672(uParam0, 0, 0))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_648, vLocal_999, fLocal_1002, true, false, true);
							func_332(2048);
						}
					}
					else if (!func_220(16))
					{
						func_676(uParam0, 0, 0);
					}
					else if (!func_470(2, 0, func_196(2)))
					{
					}
					else if (func_464(2683.614f, 1929.953f, 101.5614f, 16.4156f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
						{
							func_465(2683.614f, 1929.953f, 101.5614f, 16.4156f);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_654))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_654, vLocal_991, fLocal_994, true, false, true);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_660))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_660, vLocal_995, fLocal_998, true, false, true);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_648, 6, true);
							AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_648, true);
							ENTITY::_SET_ENTITY_HEALTH(iLocal_648, 0, 0);
						}
						if (!PED::IS_PED_RAGDOLL(iLocal_648))
						{
							__LIB_2__::func_259(&uLocal_1025);
							iLocal_17 = 2;
						}
					}
					break;
				case 5:
					if (!func_220(2048))
					{
						if (func_672(uParam0, 0, 0))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_648, 6, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_648, vLocal_999, fLocal_1002, true, false, true);
							func_332(2048);
						}
					}
					else if (!func_220(16))
					{
						func_676(uParam0, 0, 0);
					}
					else if (func_464(2683.614f, 1929.953f, 101.5614f, 16.4156f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_648, 6, true);
							AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_648, true);
							ENTITY::_SET_ENTITY_HEALTH(iLocal_648, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_654))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_654, vLocal_991, fLocal_994, true, false, true);
							AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_654, true);
							ENTITY::_SET_ENTITY_HEALTH(iLocal_654, 0, 0);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_799))
						{
							iLocal_799 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2);
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_799))
							{
								iLocal_799 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
							}
							func_677(uParam0);
							__LIB_2__::func_259(&uLocal_1025);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
							{
								func_465(2683.614f, 1929.953f, 101.5614f, 16.4156f);
							}
						}
						if (__LIB_0__::func_899(&uLocal_1025))
						{
							if (__LIB_0__::func_1(uParam0->f_172, 1))
							{
								__LIB_2__::func_259(&uLocal_1025);
								iLocal_17 = 2;
							}
						}
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					CLOCK::SET_CLOCK_TIME(12, 0, 0);
					break;
				case 1:
					if (__LIB_1__::func_583(&uLocal_1025) < 3f)
					{
						return false;
					}
					CLOCK::SET_CLOCK_TIME(14, 0, 0);
					break;
				case 2:
					if (__LIB_1__::func_583(&uLocal_1025) < 3f)
					{
						return false;
					}
					CLOCK::SET_CLOCK_TIME(14, 0, 0);
					break;
				case 3:
					if (__LIB_1__::func_583(&uLocal_1025) < 3f)
					{
						return false;
					}
					else
					{
						__LIB_1__::func_561(&uLocal_1025);
						CLOCK::SET_CLOCK_TIME(16, 0, 0);
					}
					break;
				case 4:
					if (__LIB_1__::func_583(&uLocal_1025) < 3f)
					{
						return false;
					}
					else
					{
						__LIB_1__::func_561(&uLocal_1025);
						CLOCK::SET_CLOCK_TIME(16, 0, 0);
					}
					break;
				case 5:
					if (__LIB_1__::func_583(&uLocal_1025) < 2f)
					{
						return false;
					}
					else
					{
						__LIB_1__::func_561(&uLocal_1025);
						CLOCK::SET_CLOCK_TIME(16, 0, 0);
					}
					break;
			}
			__LIB_0__::func_568(Global_36, 200f, 0);
			return true;
	}
	return false;
}

void func_307(int iParam0)
{
	if (iLocal_20 != iParam0)
	{
		__LIB_3__::func_353(func_680(iParam0), 0);
		iLocal_20 = iParam0;
	}
}

void func_309(int iParam0)
{
	__LIB_1__::func_683(&iLocal_1263, iParam0);
}

void func_315(var uParam0)
{
	if (iLocal_16 == 1)
	{
		CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
	}
	else if (iLocal_16 != 2)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
}

int func_322(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_13__::func_56(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false))
				{
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					__LIB_8__::func_726(uParam4, 4);
					return 0;
				}
				else
				{
					if (__LIB_12__::func_688(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					__LIB_12__::func_800(uParam5);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_12__::func_909(uParam4);
				}
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
					{
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_705(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_13__::func_14(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_2__::func_259(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_726(uParam4, 4);
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
				__LIB_13__::func_56(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_12__::func_689(uParam4) - __LIB_12__::func_685(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_12__::func_752(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_12__::func_685(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_12__::func_690(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_13__::func_329(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_12__::func_685(uParam4) <= 5000) && __LIB_12__::func_685(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_405), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_12__::func_685(uParam4) >= 5000 && __LIB_12__::func_685(uParam4) <= (__LIB_12__::func_689(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_12__::func_690(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_13__::func_329(uParam4);
				return 1;
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (__LIB_12__::func_801(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_726(uParam4, 3);
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
			__LIB_8__::func_726(uParam4, 4);
			break;
	}
	return 0;
}

void func_329(int iParam0)
{
	int iVar0;
	if (iParam0 == 8)
	{
		iVar0 = iLocal_14;
		iVar0++;
		iLocal_14 = iVar0;
		if (iLocal_14 == 8)
		{
			iLocal_14 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_14 = iParam0;
	}
	iLocal_15 = 0;
}

void func_330()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_798, 48, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_798, false);
	}
}

void func_331()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_666[0 /*5*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_666[0 /*5*/], 2681.635f, 1942.05f, 102.1317f, 164.4549f, true, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_666[0 /*5*/], joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CONFIG_FLAG(Local_666[0 /*5*/], 253, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_660))
	{
		__LIB_1__::func_571(iLocal_660, Local_666[0 /*5*/], 0, -1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_660, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CONFIG_FLAG(iLocal_660, 253, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_660, 66, true);
		TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_660, Global_35, -1f, 0, 0);
	}
	__LIB_2__::func_426(&iLocal_660);
	__LIB_2__::func_426(&(Local_666[0 /*5*/]));
	__LIB_2__::func_788(&iLocal_660, 1, 1, 1);
	__LIB_2__::func_788(&(Local_666[0 /*5*/]), 1, 1, 1);
}

void func_332(int iParam0)
{
	__LIB_1__::func_683(&iLocal_1262, iParam0);
}

bool func_335(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			func_721(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_989(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_13__::func_57(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_732(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		func_736(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_4__::func_118(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_13__::func_57(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_13__::func_57(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_337()
{
	switch (iLocal_20)
	{
		case 0:
			if (__LIB_0__::func_71(Global_35) || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1178, true) < 600f)
			{
				func_307(1);
			}
			break;
		case 1:
			if (iLocal_14 == 1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1178, true) < 50f)
			{
				func_307(2);
			}
			break;
		case 2:
			if (func_220(131072))
			{
				func_307(3);
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iLocal_1265, 8) || func_220(262144))
			{
				func_307(4);
			}
			break;
		case 4:
			if (iLocal_1076 == 2 || __LIB_0__::func_94(iLocal_648, vLocal_1175, 1) < 400f)
			{
				func_307(5);
			}
			break;
		case 5:
			if (func_349(536870912) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_660) && PED::IS_PED_ON_FOOT(Global_35)) && __LIB_0__::func_48(iLocal_648, iLocal_660, 12f, 1)))
			{
				func_307(6);
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			if (iLocal_14 == 1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1178, true) < 50f)
			{
				func_307(2);
			}
			break;
		case 10:
			if (func_220(131072))
			{
				func_307(3);
			}
			break;
		case 11:
			if (func_349(536870912) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_660) && PED::IS_PED_ON_FOOT(Global_35)) && __LIB_0__::func_48(iLocal_648, iLocal_660, 12f, 1)))
			{
				func_307(6);
			}
			break;
		case 12:
			break;
	}
}

void func_342(var uParam0)
{
	int iVar0;
	if (!func_220(32768))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_55[iVar0 /*148*/]))
		{
			switch (Local_55[iVar0 /*148*/].f_10)
			{
				case 0:
					func_767(uParam0, iVar0);
					break;
				case 1:
					func_768(uParam0, iVar0);
					break;
				case 2:
					__LIB_0__::func_11();
					break;
			}
		}
		else
		{
			if (__LIB_0__::func_899(&(Local_55[iVar0 /*148*/].f_45)))
			{
				__LIB_1__::func_561(&(Local_55[iVar0 /*148*/].f_45));
			}
			if (Local_55[iVar0 /*148*/].f_10 != 3)
			{
				Local_55[iVar0 /*148*/].f_10 = 3;
				if (!func_220(268435456))
				{
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
					{
						func_332(268435456);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_343(var uParam0)
{
	if (!func_220(2048))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
	{
		PED::SET_PED_RESET_FLAG(iLocal_648, 147, true);
		switch (iLocal_19)
		{
			case 0:
				func_770(uParam0);
				break;
			case 1:
				func_771();
				break;
			case 2:
				func_772(uParam0);
				break;
		}
	}
	else
	{
		iLocal_19 = 3;
	}
}

void func_344(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_1018))
			{
				iLocal_1018 = __LIB_8__::func_777(-308585968, vLocal_1178, 30f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1018, "CAL3_BLIP_CAMP");
			}
			func_126(uParam0, "CAL3_OBJ_TRACK", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_13__::func_266();
			break;
		case 1:
			if (!func_220(2048))
			{
				if (__LIB_0__::func_266(Global_35, vLocal_1178, 100f, 1, 1))
				{
					if (func_672(uParam0, 1, 1))
					{
						func_332(2048);
					}
				}
			}
			else if (!func_673())
			{
			}
			else if (!__LIB_0__::func_27(iLocal_1265, 16384))
			{
				if (func_470(3, 4, func_196(3)))
				{
					__LIB_1__::func_683(&iLocal_1265, 16384);
				}
			}
			if (!func_220(32768))
			{
				if (__LIB_0__::func_266(Global_35, vLocal_1178, 100f, 1, 1))
				{
					if (func_675(uParam0))
					{
						func_332(32768);
					}
				}
			}
			if (!func_220(524288))
			{
				STREAMING::_REQUEST_IMAP(joaat("AMB_CAMP_ROA_RC_CALLOWAY"));
				__LIB_5__::func_441("CAL_3_Outlaw_Camp");
				func_332(524288);
			}
			else if (!func_220(1048576))
			{
				if (__LIB_13__::func_278(&uLocal_1186, vLocal_1183, 1, -1082130432 /* Float: -1f */))
				{
					func_332(1048576);
				}
			}
			else if (!func_220(-2147483648))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_677))
				{
					iLocal_677 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_LANTERN09X"), 2374.156f, 1597.853f, 86.29553f, true, true, false, true);
					ENTITY::_0x9587913B9E772D29(iLocal_677, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_677, true);
					func_332(-2147483648);
				}
			}
			if ((((__LIB_0__::func_266(Global_35, vLocal_1178, 29f, 1, 1) || Local_55[0 /*148*/].f_10 != 0) || Local_55[1 /*148*/].f_10 != 0) || Local_55[2 /*148*/].f_10 != 0) || Local_55[3 /*148*/].f_10 != 0)
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_329(1);
			break;
	}
}

void func_345(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			func_299(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_266();
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_1266, 1024))
			{
				if (__LIB_0__::func_266(Global_35, vLocal_1178, 29f, 1, 1))
				{
					func_126(uParam0, "CAL3_OBJ_SEARCH", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_1266, 1024);
				}
			}
			else
			{
				if (__LIB_0__::func_48(Global_35, iLocal_648, 25f, 1) || (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iLocal_648, 17) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_648)))
				{
					func_775();
					__LIB_0__::func_325(&iLocal_1018);
				}
				func_776(uParam0);
			}
			if (!func_220(262144))
			{
				if (func_777(uParam0) || !__LIB_0__::func_266(iLocal_648, vLocal_650, 150f, 1, 1))
				{
					if ((__LIB_0__::func_48(Global_35, iLocal_648, 20f, 1) && !PED::IS_PED_DEAD_OR_DYING(iLocal_648, true)) && __LIB_0__::func_27(iLocal_1265, 256))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_648, true);
						func_332(262144);
					}
				}
			}
			else if (!__LIB_0__::func_899(&uLocal_1064))
			{
				if (!__LIB_6__::func_904())
				{
					__LIB_2__::func_259(&uLocal_1064);
				}
			}
			else if (__LIB_4__::func_118(&uLocal_1064) > 3f)
			{
				if (!func_349(8192))
				{
					func_350(uParam0, Local_1192[17 /*2*/], 1);
				}
				else if (!__LIB_6__::func_904())
				{
					func_350(uParam0, Local_1192[22 /*2*/], 1);
				}
			}
			if (func_220(65536))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_329(2);
			break;
	}
}

void func_346(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			func_775();
			__LIB_2__::func_259(&uLocal_1259);
			__LIB_1__::func_561(&uLocal_1031);
			__LIB_13__::func_266();
			break;
		case 1:
			if (!func_220(262144))
			{
				if (func_777(uParam0) || !__LIB_0__::func_266(iLocal_648, vLocal_650, 150f, 1, 1))
				{
					func_299(uParam0, func_61(2), func_61(3), 2, 3, 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_648, true);
					func_332(262144);
					__LIB_2__::func_259(&uLocal_1259);
				}
			}
			else if (!__LIB_0__::func_899(&uLocal_1064))
			{
				if (!__LIB_6__::func_904())
				{
					__LIB_2__::func_259(&uLocal_1064);
				}
			}
			else if (__LIB_4__::func_118(&uLocal_1064) > 3f)
			{
				if (!func_349(8192))
				{
					func_350(uParam0, Local_1192[17 /*2*/], 1);
				}
				else if (!__LIB_6__::func_904())
				{
					func_350(uParam0, Local_1192[22 /*2*/], 1);
				}
			}
			func_356(uParam0, 0);
			if (!func_220(16))
			{
				func_676(uParam0, 1, 1);
			}
			if (__LIB_0__::func_71(Global_35))
			{
				__LIB_1__::func_448(Global_35, vLocal_1175, 0, 50f, 30f, 16f, 15f, 1, 1, 1, 0);
			}
			if (!func_220(64) && __LIB_0__::func_266(iLocal_648, vLocal_1175, 30f, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_1259);
				func_332(64);
			}
			else if (__LIB_0__::func_266(iLocal_648, vLocal_1175, 15f, 1, 1))
			{
				func_329(5);
				return;
			}
			else if (!__LIB_0__::func_48(Global_35, iLocal_648, 20f, 1))
			{
				func_354(0);
				__LIB_1__::func_681(&iLocal_1266, 16);
				__LIB_1__::func_681(&iLocal_1266, 8);
				func_329(4);
				return;
			}
			if (iLocal_19 != 1)
			{
				func_354(0);
				func_775();
				__LIB_13__::func_89(uParam0, "CAL3_OBJ_RECAPTURE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_329(3);
				return;
			}
			if (!func_349(8388608))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(iLocal_648) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_648) > 0.5f)
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_648))
					{
						__LIB_5__::func_20(0, 0);
					}
					else
					{
						__LIB_5__::func_20(1, 0);
					}
					func_350(uParam0, Local_1192[26 /*2*/], 1);
				}
			}
			else if (!func_349(16777216))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_648) && !__LIB_13__::func_273(Local_1192[26 /*2*/]))
				{
					func_350(uParam0, Local_1192[27 /*2*/], 1);
				}
			}
			if (!func_349(4194304))
			{
				if (__LIB_0__::func_266(iLocal_648, vLocal_1175, 75f, 1, 1))
				{
					__LIB_5__::func_20(1, 0);
					if (!__LIB_6__::func_904())
					{
						if (func_350(uParam0, Local_1192[28 /*2*/], 1))
						{
							func_781(0);
							__LIB_1__::func_561(&uLocal_1070);
						}
					}
				}
			}
			if (!func_349(4194304))
			{
				if (func_349(8388608) && !func_349(16777216))
				{
					return;
				}
				if (!func_349(524288))
				{
					if ((func_349(262144) && __LIB_1__::func_583(&uLocal_1259) > 15f) && !__LIB_6__::func_904())
					{
						func_350(uParam0, Local_1192[23 /*2*/], 1);
					}
				}
				else if (!func_349(1048576))
				{
					if (!__LIB_0__::func_899(&uLocal_1070))
					{
						if (!__LIB_13__::func_273(Local_1192[23 /*2*/]))
						{
							__LIB_2__::func_259(&uLocal_1070);
						}
					}
					else if (__LIB_1__::func_583(&uLocal_1070) > 6f && !__LIB_6__::func_904())
					{
						if (func_350(uParam0, Local_1192[24 /*2*/], 1))
						{
							__LIB_1__::func_561(&uLocal_1070);
						}
					}
				}
				else if (!func_349(2097152))
				{
					if (!__LIB_0__::func_899(&uLocal_1070))
					{
						if (!__LIB_13__::func_273(Local_1192[24 /*2*/]))
						{
							__LIB_2__::func_259(&uLocal_1070);
						}
					}
					else if (__LIB_1__::func_583(&uLocal_1070) > 7f && !__LIB_6__::func_904())
					{
						if (func_350(uParam0, Local_1192[25 /*2*/], 1))
						{
							__LIB_1__::func_561(&uLocal_1070);
						}
					}
				}
				else if (!func_349(33554432))
				{
					if (!__LIB_0__::func_899(&uLocal_1070))
					{
						if (!__LIB_13__::func_273(Local_1192[25 /*2*/]) && !__LIB_13__::func_273(Local_1192[29 /*2*/]))
						{
							__LIB_2__::func_259(&uLocal_1070);
						}
					}
					else if (__LIB_1__::func_583(&uLocal_1070) > 11f && !__LIB_6__::func_904())
					{
						if (func_350(uParam0, Local_1192[29 /*2*/], 1))
						{
							func_353(33554432);
							__LIB_1__::func_561(&uLocal_1070);
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

void func_347()
{
	if (iLocal_19 == 1)
	{
		func_329(2);
	}
}

void func_348(var uParam0)
{
	if (__LIB_0__::func_48(Global_35, iLocal_648, 5f, 1))
	{
		__LIB_2__::func_259(&uLocal_1259);
		__LIB_1__::func_681(&iLocal_1266, 32);
		func_329(2);
		return;
	}
	if (!__LIB_0__::func_27(iLocal_1266, 32))
	{
		__LIB_13__::func_89(uParam0, "CAL3_OBJ_RETURN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		if (!__LIB_0__::func_27(iLocal_1266, 64))
		{
			func_126(uParam0, "CAL3_OBJ_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_683(&iLocal_1266, 64);
		}
		__LIB_1__::func_683(&iLocal_1266, 32);
	}
	func_775();
}

bool func_349(int iParam0)
{
	return __LIB_0__::func_27(iLocal_1263, iParam0);
}

bool func_350(var uParam0, struct<2> Param1, bool bParam3)
{
	if (!func_349(Param1.f_1))
	{
		if (__LIB_12__::func_876(uParam0, Param1, 0))
		{
			if (bParam3)
			{
				func_309(Param1.f_1);
			}
			return true;
		}
	}
	return false;
}

void func_353(int iParam0)
{
	__LIB_1__::func_681(&iLocal_1263, iParam0);
}

void func_354(bool bParam0)
{
	if (func_220(2))
	{
		if (bParam0)
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_1019))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_1019, -1186550032);
			}
		}
		else
		{
			__LIB_0__::func_325(&iLocal_1019);
		}
		func_784(2);
		if (MAP::DOES_BLIP_EXIST(iLocal_1019))
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_1019, -1186550032);
		}
	}
}

void func_356(var uParam0, bool bParam1)
{
	switch (iLocal_1076)
	{
		case 0:
			if (bParam1)
			{
				return;
			}
			if (!__LIB_0__::func_27(iLocal_1266, 16))
			{
				__LIB_13__::func_89(uParam0, "CAL3_OBJ_PICKUP", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_683(&iLocal_1266, 16);
				__LIB_1__::func_681(&iLocal_1266, 8);
			}
			func_775();
			func_354(0);
			if (__LIB_3__::func_458(iLocal_648) == 4 || __LIB_3__::func_458(iLocal_648) == 5)
			{
				iLocal_1076 = 1;
			}
			else if (__LIB_3__::func_458(iLocal_648) == 8 || __LIB_3__::func_458(iLocal_648) == 7)
			{
				func_781(1);
				iLocal_1076 = 2;
			}
			else
			{
				Jump @869; //curOff = 175
				if (!__LIB_0__::func_27(iLocal_1266, 4096))
				{
					if (__LIB_0__::func_266(Global_35, vLocal_1175, 22f, 1, 1))
					{
						func_126(uParam0, "CAL3_OBJ_PLACE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_683(&iLocal_1266, 4096);
						func_354(0);
						func_786();
					}
				}
				if (!__LIB_0__::func_27(iLocal_1266, 8))
				{
					if (__LIB_0__::func_27(iLocal_1266, 4096))
					{
						__LIB_13__::func_89(uParam0, "CAL3_OBJ_PLACE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else
					{
						__LIB_13__::func_89(uParam0, "CAL3_OBJ_DELIVER", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					__LIB_1__::func_683(&iLocal_1266, 8);
					__LIB_1__::func_681(&iLocal_1266, 16);
				}
				if (!func_220(4096))
				{
					if (__LIB_0__::func_27(iLocal_1266, 4096))
					{
						func_126(uParam0, "CAL3_OBJ_PLACE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else
					{
						func_126(uParam0, "CAL3_OBJ_DELIVER", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					func_332(4096);
				}
				func_787();
				func_786();
				if (__LIB_3__::func_458(iLocal_648) == 6)
				{
					iLocal_1076 = 0;
				}
				else if (__LIB_3__::func_458(iLocal_648) == 8)
				{
					func_781(1);
					iLocal_1076 = 2;
				}
				else if ((__LIB_3__::func_458(iLocal_648) != 4 && __LIB_3__::func_458(iLocal_648) != 9) && __LIB_3__::func_458(iLocal_648) != 5)
				{
					iLocal_1076 = 0;
				}
				else
				{
					Jump @869; //curOff = 532
					if (!__LIB_0__::func_27(iLocal_1266, 4096))
					{
						if (func_349(536870912))
						{
							func_126(uParam0, "CAL3_OBJ_PLACE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_1__::func_683(&iLocal_1266, 4096);
							func_354(0);
							func_786();
						}
					}
					if (!__LIB_0__::func_27(iLocal_1266, 8))
					{
						if (__LIB_0__::func_27(iLocal_1266, 4096))
						{
							__LIB_13__::func_89(uParam0, "CAL3_OBJ_PLACE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						else
						{
							__LIB_13__::func_89(uParam0, "CAL3_OBJ_DELIVER", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						__LIB_1__::func_683(&iLocal_1266, 8);
						__LIB_1__::func_681(&iLocal_1266, 16);
					}
					if (!func_220(4096))
					{
						if (__LIB_0__::func_27(iLocal_1266, 4096))
						{
							func_126(uParam0, "CAL3_OBJ_PLACE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						else
						{
							func_126(uParam0, "CAL3_OBJ_DELIVER", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						func_332(4096);
					}
					func_787();
					func_786();
					if (__LIB_3__::func_458(iLocal_648) == 9)
					{
						func_781(0);
						iLocal_1076 = 1;
					}
					else if ((__LIB_3__::func_458(iLocal_648) != 7 && __LIB_3__::func_458(iLocal_648) != 5) && __LIB_3__::func_458(iLocal_648) != 8)
					{
						func_781(0);
						iLocal_1076 = 0;
					}
				else
				{
					}
				}
			}
			default:
				break;
	}
}

int func_360(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[iParam0 /*16*/]))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_681[iParam0 /*16*/], sParam1, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_361()
{
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		__LIB_1__::func_538(1);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_660))
	{
		__LIB_9__::func_204(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_660, true, false), &uLocal_1034, 50f, 20f, 18f, 15f, 1f, 0, 0, 1, 1, 1);
	}
	return false;
}

void func_363(var uParam0)
{
	StringCopy(&(uParam0->f_2575), "RCAL_RC3", 24);
	__LIB_12__::func_957(uParam0, iLocal_654, "JimCalloway", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_660, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_648, "cs_famousgunslinger_06", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_666[0 /*5*/], "Horse_01", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_673[0], "p_cs_journal01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_673[1], "p_pen01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_673[2], "p_cs_baglevin01x", 0, 0, 0);
	__LIB_12__::func_779(uParam0, vLocal_1175);
	__LIB_12__::func_846(&(uParam0->f_206));
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_366()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_798))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
		{
			if (TASK::IS_PED_IN_WRITHE(iLocal_798))
			{
				ENTITY::_SET_ENTITY_HEALTH(iLocal_798, 0, 0);
				func_332(16384);
			}
		}
	}
	if (__LIB_0__::func_797(0))
	{
		if (__LIB_1__::func_53(0))
		{
			__LIB_1__::func_54(0);
		}
	}
	if (__LIB_0__::func_797(1))
	{
		if (__LIB_1__::func_53(1))
		{
			__LIB_1__::func_54(1);
		}
	}
}

bool func_368(var uParam0)
{
	var uVar0;
	var uVar3;
	switch (iLocal_18)
	{
		case 0:
			if (!func_220(8192))
			{
				func_794(uParam0, 0);
			}
			if (func_470(2, 0, func_196(2)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_648))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_648, true);
					ENTITY::_SET_ENTITY_HEALTH(iLocal_648, 0, 0);
				}
				__LIB_13__::func_89(uParam0, "CAL3_OBJ_KILL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_299(uParam0, func_61(4), func_61(5), 4, 5, 0);
				func_471();
				if (iLocal_20 != 12)
				{
					func_307(7);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_681[2 /*16*/], false))
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_681[2 /*16*/], &uVar0, &uVar3, 2);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_681[2 /*16*/], vLocal_991.x, vLocal_991.y, 103.165f, 0f, 0f, -140f, 2);
					ANIMSCENE::START_ANIM_SCENE(Local_681[2 /*16*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					bLocal_987 = func_472(&Local_896, &Local_802);
				}
				iLocal_16 = 2;
				func_677(uParam0);
				iLocal_18 = 1;
			}
			break;
		case 1:
			__LIB_1__::func_951(&(iLocal_673[2]));
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				bLocal_987 = func_472(&Local_896, &Local_802);
			}
			if (bLocal_987 && !ENTITY::DOES_ENTITY_EXIST(iLocal_799))
			{
				iLocal_799 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
				__LIB_12__::func_957(uParam0, iLocal_799, "w_pistol_mauser01", 0, 0, 0);
			}
			if (bLocal_987)
			{
				__LIB_3__::func_319(Local_681[2 /*16*/]);
				func_307(8);
				return true;
			}
			break;
	}
	return false;
}

void func_387(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (__LIB_3__::func_151(iParam0))
	{
		func_800(iParam0);
	}
	else
	{
		func_801(iParam0);
	}
}

bool func_395(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return (func_802(sParam0, 0, 0, -1, -1, 0) && __LIB_1__::func_325());
}

void func_405(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
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
			__LIB_9__::func_202();
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
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
					__LIB_10__::func_525(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_832(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_832(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_832(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_832(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_832(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_832(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_832(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_832(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_832(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_832(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_832(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_832(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_832(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_834();
						func_835(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_832(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_405(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_405(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_405(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
							if (!func_855(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_832(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_832(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
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
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				Jump @5350; //curOff = 4236
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
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
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
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				Jump @5350; //curOff = 5288
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
				__LIB_0__::func_894(iParam0);
				func_867();
				switch (iVar0)
				{
					case 1:
						switch (__LIB_0__::func_76(iParam0))
						{
							case 4:
								__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 61:
							case 62:
							case 63:
								__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 25:
								__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 12:
								__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 53:
								__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 20:
								__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 19:
								__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
								break;
							case 24:
								iVar18 = __LIB_0__::func_895(iParam0);
								__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 28:
								__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 34:
								__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
								if (!func_855(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
								{
									func_832(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
								}
								break;
							case 29:
								__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
								break;
							case 37:
								break;
							case 58:
								break;
							case 57:
								__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
								break;
							case 76:
								__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 72:
								if (__LIB_0__::func_895(iParam0) == 0)
								{
									__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								}
								else
								{
									__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
								__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 55:
								__LIB_0__::func_896(8, 1);
								break;
							case 138:
								MISC::SET_BIT(&(Global_40.f_9052), 1);
								MISC::SET_BIT(&(Global_40.f_9052), 3);
								break;
							case 94:
								__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 63:
								__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
								break;
							case 37:
								__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 116:
								__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
								break;
							case 9:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
								break;
						}
						break;
					case 11:
						if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
						{
							__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
						{
							__LIB_1__::func_777(iParam0, func_870(9), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
						{
							__LIB_1__::func_777(iParam0, func_870(10), 1, 0.5f, 2, 0, 0, 1);
						}
						else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
						{
							__LIB_1__::func_777(iParam0, func_870(8), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
						{
							__LIB_1__::func_777(iParam0, func_870(11), 1, 0.5f, 2, 0, 0, 1);
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
void func_406(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar0);
		if (__LIB_0__::func_13(32768))
		{
			iVar1 = __LIB_0__::func_700(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = __LIB_1__::func_753();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
	else if (__LIB_1__::func_44(iParam0))
	{
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam1)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

Vector3 func_409(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_874(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_874(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_413(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_6__::func_775();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	func_884();
}

void func_416(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_88, 1024))
	{
		__LIB_3__::func_839(uParam0, uParam1);
	}
	__LIB_1__::func_539();
	MISC::SET_TIME_SCALE(1f);
	__LIB_1__::func_390(__LIB_3__::func_805(uParam1, uParam0), 1);
	__LIB_0__::func_769();
	__LIB_3__::func_760();
	__LIB_0__::func_11();
	__LIB_1__::func_561(&(uParam1->f_26));
	__LIB_1__::func_561(&(uParam1->f_29));
	__LIB_1__::func_561(&(uParam1->f_32));
	__LIB_1__::func_561(&(uParam1->f_35));
	__LIB_1__::func_561(&(uParam1->f_38));
	__LIB_1__::func_561(&(uParam1->f_41));
	if (__LIB_0__::func_272(uParam0->f_1, 0))
	{
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, false);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 0);
		}
		if (__LIB_3__::func_761(uParam0, 1024))
		{
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
		}
		if (__LIB_3__::func_761(uParam0, 128) || __LIB_3__::func_761(uParam0, 4096))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, false, -1, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, false, 0f);
	}
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	if (!__LIB_3__::func_761(uParam0, 2048))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (__LIB_0__::func_239(uParam1, 2048))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, false);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), true);
	if (__LIB_0__::func_239(uParam1, 2) && !__LIB_3__::func_761(uParam0, 32768))
	{
		__LIB_3__::func_806(1, uParam0, uParam1, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
		__LIB_3__::func_728(uParam1, 2);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_86);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_86);
	}
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
	__LIB_3__::func_824(uParam0, uParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && (__LIB_0__::func_239(uParam1, 8) && (!__LIB_0__::func_239(uParam1, 1) || TASK::_IS_PED_DUELLING(*uParam0))))
	{
		TASK::_0xEED08A3A98B847E2(*uParam0, (!__LIB_3__::func_761(uParam0, 256) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1)), 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && TASK::_IS_PED_DUELLING(uParam0->f_1))
	{
		TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
	}
	MAP::DISPLAY_RADAR(true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, false, -1, 0);
	}
	GRAPHICS::ANIMPOSTFX_STOP("Duel");
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_16)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_20)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_28)))
		{
		}
	}
	HUD::_TEXT_DATABASE_DELETE("MGDUL");
	if (__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_8__::func_512();
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	MISC::_0x4D5C9CC7E7E23E09();
	__LIB_3__::func_762(uParam1, 9);
}

bool func_435()
{
	int iVar0;
	MISC::SET_BIT(&iVar0, 16);
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_800))
	{
		iLocal_800 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REVOLVER_SCHOFIELD_CALLOWAY"), 2676.61f, 1945.77f, 102.11f, 0f, 0f, 0f, iVar0, 1, 2, true, 0, 0, 0f, 0);
	}
	else
	{
		return true;
	}
	return false;
}

void func_436(var uParam0)
{
	func_926();
	if (iLocal_20 != 0)
	{
		func_307(8);
	}
	__LIB_2__::func_624(&Local_1094, 1, 1, 1, 0);
	vLocal_1112.f_2 = 0;
	__LIB_0__::func_325(&iLocal_1019);
	__LIB_0__::func_325(&iLocal_1020);
	__LIB_0__::func_325(&iLocal_1021);
	__LIB_0__::func_325(&iLocal_1018);
	__LIB_1__::func_281(&iLocal_1078, 1, 1);
	func_330();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_677))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_677);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_678))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_678);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1181))
	{
		__LIB_1__::func_544(iLocal_1181);
		VOLUME::_DELETE_VOLUME(iLocal_1181);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1182))
	{
		__LIB_3__::func_241(iLocal_1182, 0);
		__LIB_1__::func_544(iLocal_1182);
		VOLUME::_DELETE_VOLUME(iLocal_1182);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_680))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_680);
	}
	if (func_220(1048576))
	{
		__LIB_10__::func_26(&uLocal_1186, 106);
	}
	if (!__LIB_0__::func_27(iLocal_1264, 2))
	{
		__LIB_1__::func_683(&iLocal_1264, 2);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCAL_DROP_OFF");
}

bool func_464(vector3 vParam0, float fParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_798))
	{
		__LIB_13__::func_71(&iLocal_798, vParam0.x, vParam0.y, vParam0.z, fParam3, 1, 1, 1, 1);
	}
	else
	{
		return true;
	}
	return false;
}

void func_465(vector3 vParam0, float fParam3)
{
	if (iLocal_798 == 0)
	{
		func_963();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_798))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_798, vParam0, fParam3, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_798, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_798, true);
	}
}

bool func_470(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_681[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_681[iParam0 /*16*/], true, false))
			{
				Local_681[iParam0 /*16*/].f_14 = 1;
				return Local_681[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_681[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_681[iParam0 /*16*/].f_1, iParam1, Local_681[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_681[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_681[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_681[iParam0 /*16*/]);
				func_965(iParam0);
			}
		}
	}
	return Local_681[iParam0 /*16*/].f_14;
}

void func_471()
{
	if (!bLocal_1093)
	{
		Local_896 = Global_35;
		Local_896.f_1 = iLocal_654;
		Local_896.f_42 = { vLocal_988 };
		Local_896.f_45 = { vLocal_991 };
		PED::SET_PED_CONFIG_FLAG(iLocal_654, 143, true);
		Local_896.f_51[2 /*3*/] = { 2684.411f, 1939.867f, 103.1f };
		Local_896.f_61[2 /*3*/] = { 0.7928f, 0f, 59.2981f };
		Local_896.f_71[2] = 30.0101f;
		__LIB_3__::func_775(&Local_896, 16);
		__LIB_3__::func_775(&Local_896, 256);
		__LIB_3__::func_775(&Local_896, 8192);
		__LIB_3__::func_775(&Local_896, 128);
		__LIB_3__::func_775(&Local_896, 512);
		__LIB_3__::func_775(&Local_896, 2);
		__LIB_3__::func_775(&Local_896, 524288);
		__LIB_3__::func_775(&Local_896, 16384);
		__LIB_4__::func_869(&Local_896, 2);
		Local_896.f_49 = joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY");
		Local_896.f_39 = Local_681[2 /*16*/];
		Local_896.f_39.f_1 = func_196(2);
		Local_896.f_39.f_2 = "bBreakout";
		bLocal_1093 = true;
	}
}

int func_472(var uParam0, var uParam1)
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
				__LIB_13__::func_280(uParam0, uParam1);
			}
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				func_416(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (__LIB_0__::func_272(*uParam0, 0) && func_978(uParam0, uParam1))
			{
				__LIB_3__::func_762(uParam1, 1);
			}
			break;
		case 1:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				__LIB_13__::func_280(uParam0, uParam1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (__LIB_3__::func_767(uParam0, uParam1) && __LIB_18__::func_363(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 0);
				Global_19 = 0;
				__LIB_13__::func_196(uParam0, uParam1);
				func_983(uParam0, uParam1);
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
					__LIB_11__::func_533(uParam1, 0);
					MAP::DISPLAY_RADAR(false);
					__LIB_3__::func_762(uParam1, 3);
				}
			}
			break;
		case 3:
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			__LIB_13__::func_196(uParam0, uParam1);
			bVar0 = __LIB_13__::func_280(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				func_416(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
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
			__LIB_13__::func_196(uParam0, uParam1);
			if (func_989(uParam0, uParam1))
			{
				func_416(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				return 1;
			}
			break;
		case 8:
			__LIB_13__::func_196(uParam0, uParam1);
			__LIB_13__::func_681(uParam0);
			if (!__LIB_0__::func_27(uParam1->f_1, 512) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, -529482553))
			{
				EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
				uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_AMUSING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
				TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, false, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
				TASK::TASK_KNOCKED_OUT(uParam0->f_1, 60f, true);
				__LIB_0__::func_7(&(uParam1->f_1), 512);
				func_416(uParam0, uParam1);
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
				return 1;
			}
			break;
		case 9:
			func_416(uParam0, uParam1);
			return 1;
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
	return 0;
}

int func_500(int iParam0, int iParam1)
{
	var uVar0;
	return func_1005(&uVar0, iParam0, iParam1);
}

void func_550()
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = (CLOCK::GET_CLOCK_HOURS() * 100 + CLOCK::GET_CLOCK_MINUTES());
	if (fLocal_1015 == 0f)
	{
		fLocal_1015 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1175, true) - 20f);
		Local_1003.f_3 = 0;
	}
	if (iVar0 < 1200)
	{
		fVar1 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1175, true) - 20f);
		fVar2 = __LIB_0__::func_251(((fLocal_1015 - fVar1) / fLocal_1015), 0f, 1f);
		__LIB_5__::func_375(12, 0, fVar2, &Local_1003);
	}
}

void func_577()
{
	if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY"));
	}
	if (!__LIB_0__::func_428(joaat("WEAPON_REVOLVER_SCHOFIELD")))
	{
		__LIB_0__::func_877(joaat("WEAPON_REVOLVER_SCHOFIELD"));
	}
}

int func_634(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = __LIB_4__::func_205(iParam1, vParam2, iParam5, iParam6, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_12__::func_703(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_0__::func_7(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

void func_659(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_133(1, 1);
	__LIB_5__::func_119(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

int func_664(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	int iVar9;
	int iVar10;
	bool bVar11;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		__LIB_13__::func_282(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_2__::func_259(&(iParam1->f_13));
		}
		if (__LIB_9__::func_905(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_14__::func_92(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_664(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_11__::func_617(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
					if (__LIB_14__::func_93(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_14__::func_91(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_10__::func_933(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_14__::func_93(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_11__::func_617(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					__LIB_1__::func_491(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!__LIB_0__::func_163(Global_35, -828834893) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar10 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_6__::func_789(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_12__::func_960(iParam1)))
					{
					}
					else if (!func_1169(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_2__::func_259(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								__LIB_4__::func_101(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (__LIB_12__::func_952(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_10__::func_933(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_14__::func_93(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_11__::func_617(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_12__::func_952(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_14__::func_94(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_671()
{
	iLocal_15 = 0;
	iLocal_14 = 0;
}

bool func_672(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!ENTITY::_0x6BFBDC46139C45AB(vLocal_650))
		{
			if (!func_220(8388608))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(vLocal_650);
				func_332(8388608);
			}
			return false;
		}
	}
	if (func_1188(uParam0, bParam2))
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iLocal_648, true);
		if (!bParam2)
		{
			__LIB_5__::func_509(iLocal_648, 0, 0);
		}
		PED::_UPDATE_PED_VARIATION(iLocal_648, false, true, true, true, false);
		__LIB_3__::func_608(iLocal_648);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_648, true);
		ENTITY::_SET_ENTITY_SOMETHING(iLocal_648, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_648, 1);
		__LIB_12__::func_875(uParam0, iLocal_648, "RCAL_GRANT", 1);
		__LIB_3__::func_459(iLocal_648, 0);
		PED::_0x6569F31A01B4C097(iLocal_648, 4, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_648, 10, 0);
		PED::_0x6569F31A01B4C097(iLocal_648, 4, 0);
		PED::_0xAE6004120C18DF97(iLocal_648, 0, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_648, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_648, false);
		ENTITY::_0x18FF3110CF47115D(iLocal_648, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_648, 6, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_648, 253, true);
		__LIB_1__::func_991(iLocal_648, joaat("HONOR_EVENT_TRAMPLED_INNOCENT"));
		return true;
	}
	return false;
}

bool func_673()
{
	if (!__LIB_0__::func_27(iLocal_1265, 4096))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_678))
		{
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_ROPE02X")))
			{
				STREAMING::REQUEST_MODEL(joaat("P_CS_ROPE02X"), false);
			}
			else
			{
				iLocal_678 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_ROPE02X"), 2375.156f, 1597.853f, 86.29553f, true, true, false, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_ROPE02X"));
				__LIB_1__::func_683(&iLocal_1265, 4096);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1265, 8192))
	{
		if (!PED::_0x5DA36CCCB63C0895(iLocal_648, 1, 1))
		{
			PED::_0x3FDBB99EFD8CE4AF(iLocal_648, 1, 1);
			__LIB_1__::func_683(&iLocal_1265, 8192);
		}
		else
		{
			__LIB_1__::func_683(&iLocal_1265, 8192);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_675(var uParam0)
{
	int iVar0;
	if (func_1193(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55[iVar0 /*148*/], true);
			ENTITY::_SET_ENTITY_SOMETHING(Local_55[iVar0 /*148*/], true);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_55[iVar0 /*148*/], __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 24, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_55[iVar0 /*148*/], __LIB_3__::func_672(7340032, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 24, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
			PED::SET_PED_COMBAT_ABILITY(Local_55[iVar0 /*148*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_55[iVar0 /*148*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*148*/], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*148*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*148*/], 43, true);
			PED::SET_PED_COMBAT_RANGE(Local_55[iVar0 /*148*/], 0);
			__LIB_2__::func_542(Local_55[iVar0 /*148*/], vLocal_1178, 100f, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_55[iVar0 /*148*/], 6, true);
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_55[iVar0 /*148*/], false);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_55[iVar0 /*148*/], true, 1f);
			ENTITY::_0x18FF3110CF47115D(Local_55[iVar0 /*148*/], 7, 1);
			ENTITY::_0x18FF3110CF47115D(Local_55[iVar0 /*148*/], 1, 0);
			__LIB_4__::func_228(&(Local_55[iVar0 /*148*/].f_13));
			__LIB_6__::func_905(&(Local_55[iVar0 /*148*/].f_13));
			__LIB_9__::func_261(&(Local_55[iVar0 /*148*/].f_13));
			__LIB_1__::func_399(&(Local_55[iVar0 /*148*/].f_13), 1);
			__LIB_1__::func_397(&(Local_55[iVar0 /*148*/].f_13), 1);
			__LIB_1__::func_393(&(Local_55[iVar0 /*148*/].f_13), 0);
			PED::SET_PED_HEARING_RANGE(Local_55[iVar0 /*148*/], 2.5f);
			PED::SET_PED_SEEING_RANGE(Local_55[iVar0 /*148*/], 20f);
			PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(Local_55[iVar0 /*148*/], 70f);
			AUDIO::STOP_PED_SPEAKING(Local_55[iVar0 /*148*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_55[iVar0 /*148*/], iLocal_801);
			if (iVar0 == 1 || iVar0 == 3)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_55[iVar0 /*148*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_55[iVar0 /*148*/], WEAPON::GET_BEST_PED_WEAPON(Local_55[iVar0 /*148*/], false, false), true, 0, false, false);
			}
			__LIB_2__::func_259(&(Local_55[iVar0 /*148*/].f_42));
			iVar0++;
		}
		__LIB_12__::func_875(uParam0, Local_55[1 /*148*/], "RCAL_OUTLAW", 1);
		__LIB_12__::func_875(uParam0, Local_55[3 /*148*/], "RCAL_OUTLAW2", 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_801, joaat("PLAYER"));
		return true;
	}
	return false;
}

void func_676(var uParam0, bool bParam1, bool bParam2)
{
	if (__LIB_0__::func_266(Global_35, vLocal_1175, 350f, 1, 1))
	{
		if (func_1200())
		{
			if (bParam2)
			{
				if (func_1201(uParam0) && func_1202(uParam0))
				{
					func_1203();
					func_794(uParam0, bParam2);
					if (bParam1)
					{
						iLocal_16 = 1;
						func_363(uParam0);
						__LIB_1__::func_683(&iLocal_1266, 2048);
					}
					if (func_470(1, 4, func_196(1)))
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_660, "RC_CALLOWAY_3", 2683.014f, 1945.439f, 102.8488f, 0, "RCAL_DROP_OFF");
						func_332(16);
					}
				}
			}
			else if (func_1201(uParam0) && func_1202(uParam0))
			{
				func_1203();
				func_794(uParam0, 0);
				__LIB_0__::func_568(vLocal_1175, 50f, 0);
				func_332(16);
			}
		}
	}
}

void func_677(var uParam0)
{
	StringCopy(&(uParam0->f_2575), "RCAL_RC4", 24);
	__LIB_12__::func_957(uParam0, iLocal_654, "JimCalloway", 0, 0, 1);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_660, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_648, "cs_famousgunslinger_06", 0, 0, 1);
	__LIB_12__::func_957(uParam0, Local_666[0 /*5*/], "Horse_01", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_798, "Horse_01^1", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_673[0], "p_cs_journal01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_673[1], "p_pen01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_799, "w_pistol_mauser01", 0, 0, 0);
	__LIB_12__::func_779(uParam0, vLocal_1175);
	__LIB_0__::func_88(&(uParam0->f_206), 65536);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

char* func_680(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "CAL3_START";
		case 2:
			return "CAL3_ARRIVED";
		case 3:
			return "CAL3_ALERTED";
		case 4:
			return "CAL3_SAVED";
		case 5:
			return "CAL3_ON_HORSE";
		case 6:
			return "CAL3_DUEL_CS";
		case 7:
			return "CAL3_DUEL_2";
		case 8:
			return "CAL3_STOP";
		case 9:
			return "CAL3_START";
		case 10:
			return "CAL3_RT_2";
		case 11:
			return "CAL3_RT_3";
		case 12:
			return "CAL3_DUEL_2";
	}
	return "";
}

void func_705(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_12__::func_705(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_404, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_416));
		}
		func_1229(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1231(uParam0);
		func_1232(uParam0);
		__LIB_12__::func_901(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_12__::func_853(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

void func_721(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 4096) && uParam0->f_1792)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_732(uParam0);
	__LIB_12__::func_915(uParam0, uParam0->f_1793, uParam0->f_1795);
	__LIB_12__::func_855(uParam0);
	if (uParam0->f_1796 && !uParam0->f_1795)
	{
		if (((((uParam0->f_1791 >= 0 && uParam0->f_912[uParam0->f_1791 /*41*/].f_17 > 0f) && uParam0->f_1584 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, (uParam0->f_912[uParam0->f_1791 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_12__::func_655(uParam0, 33554432)) && !__LIB_12__::func_655(uParam0, 4))
		{
			func_1249(uParam0, uParam0->f_1793);
			return;
		}
	}
	if (!__LIB_12__::func_655(uParam0, 4))
	{
		if (__LIB_12__::func_856(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1580 = uParam0->f_1584;
				__LIB_12__::func_693(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1249(uParam0, uParam0->f_1793);
		}
		if (uParam0->f_912[uParam0->f_1586 /*41*/].f_29)
		{
			fVar0 = __LIB_12__::func_932(uParam0, uParam0->f_1586);
			if (fVar0 < 0f || (uParam0->f_1793 && fVar0 < 1f))
			{
				uParam0->f_1584 = uParam0->f_1586;
				if (!bParam2)
				{
					uParam0->f_1580 = uParam0->f_1586;
					__LIB_12__::func_693(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1585 == -1f || fVar0 <= uParam0->f_1585) || uParam0->f_1586 == uParam0->f_1584)
				{
					if (uParam0->f_1586 != uParam0->f_1584)
					{
					}
					uParam0->f_1584 = uParam0->f_1586;
					uParam0->f_1585 = fVar0;
					__LIB_12__::func_693(uParam0, 16);
					if (((!__LIB_12__::func_655(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, true) < (uParam0->f_912[uParam0->f_1584 /*41*/].f_11 + 5f))
					{
						__LIB_12__::func_916(uParam0);
						__LIB_12__::func_693(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1584 == uParam0->f_1586)
			{
				__LIB_12__::func_686(uParam0, 16);
			}
		}
		if (uParam0->f_1586 + 1 >= 8)
		{
			uParam0->f_1586 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1586 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_912[iVar2 /*41*/].f_29)
				{
					uParam0->f_1586 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1586 = 0;
			}
		}
		if (uParam0->f_1584 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2) && uParam0->f_1793)
		{
			return;
		}
	}
	if (__LIB_12__::func_655(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		if (uParam0->f_1793 && fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_912[uParam0->f_1584 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 + uParam0->f_912[uParam0->f_1584 /*41*/].f_10))
			{
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1795 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1797) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
			}
		}
		else if ((uParam0->f_1793 && fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1794))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1794, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1793 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1794) > 1.25f) || __LIB_12__::func_655(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775) && __LIB_12__::func_932(uParam0, uParam0->f_1584) < 10000f) && __LIB_12__::func_655(uParam0, 16)) || __LIB_12__::func_655(uParam0, 4))
		{
			if (!__LIB_12__::func_655(uParam0, 4))
			{
				__LIB_12__::func_693(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_912[uParam0->f_1584 /*41*/].f_7, uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1582 = 0;
				__LIB_12__::func_686(uParam0, 4);
			}
		}
	}
	else if (__LIB_12__::func_655(uParam0, 4))
	{
		__LIB_12__::func_686(uParam0, 4);
	}
}

void func_732(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_1584;
	if (iVar0 >= 0 && !__LIB_12__::func_695(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, true) <= uParam0->f_912[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1588 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1588), __LIB_1__::func_569(uParam0->f_1241[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1588.f_8), __LIB_1__::func_569(uParam0->f_1241[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1588)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1588.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1241[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1241[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1800), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_912[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1241[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 27)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1241[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1241[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798) || iVar26 != uParam0->f_1798))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
											__LIB_12__::func_709(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1241[iVar0 /*22*/].f_18 != 0f || uParam0->f_1241[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1241[iVar0 /*22*/].f_18, 0f, uParam0->f_1241[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1241[iVar0 /*22*/].f_18 != 0f || uParam0->f_1241[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, 1), uParam0->f_1241[iVar0 /*22*/].f_18, 0f, uParam0->f_1241[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_912[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_912[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1588));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_12__::func_709(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1604.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1604.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1604.f_22 != bVar30);
								uParam0->f_1604.f_16 = iVar23;
								uParam0->f_1604.f_17 = { vVar20 };
								uParam0->f_1604.f_20 = fVar27;
								uParam0->f_1604.f_21 = fVar28;
								uParam0->f_1604.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1604 = { uParam0->f_1588 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1604));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1627.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1627.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1627.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1627.f_21 != bVar30);
								uParam0->f_1627.f_16 = iVar23;
								uParam0->f_1627.f_17 = { vVar20 };
								uParam0->f_1627.f_20 = !bVar31;
								uParam0->f_1627.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1627 = { uParam0->f_1588 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1627));
								}
							}
							Jump @1469; //curOff = 1425
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
							}
							StringCopy(&(uParam0->f_1588), "", 64);
							StringCopy(&(uParam0->f_1588.f_8), "", 64);
							__LIB_12__::func_711(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_736(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				func_1274(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					func_1276(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			func_1277(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			func_1274(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				func_1276(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_767(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!Local_55[iParam1 /*148*/].f_51)
	{
		__LIB_2__::func_602(&(Local_55[iParam1 /*148*/].f_52[0 /*17*/]), __LIB_2__::func_460(24), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_55[iParam1 /*148*/].f_52[1 /*17*/]), __LIB_2__::func_460(27), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		Local_55[iParam1 /*148*/].f_51 = 1;
	}
	else
	{
		iLocal_1174 = func_1301(&(Local_55[iParam1 /*148*/]), &(Local_55[iParam1 /*148*/].f_87), 30f, &(Local_55[iParam1 /*148*/].f_52), 0f, 3, 0, 0, 1, 0, 2, -1082130432 /* Float: -1f */);
		if (!func_349(4) && !func_349(2))
		{
			if (iLocal_1174 == 0)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_55[iParam1 /*148*/], Global_35, -1, -1f, -1f, -1f);
				__LIB_5__::func_20(1, 0);
				if (iLocal_14 == 1)
				{
					if (func_350(uParam0, Local_1192[1 /*2*/], 1))
					{
						func_1302();
					}
				}
				else if (func_350(uParam0, Local_1192[3 /*2*/], 1))
				{
					func_1302();
				}
			}
			else if (iLocal_1174 == 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_55[iParam1 /*148*/], Global_35, -1, -1f, -1f, -1f);
				__LIB_5__::func_20(1, 0);
				if (iLocal_14 == 1)
				{
					if (func_350(uParam0, Local_1192[2 /*2*/], 1))
					{
						func_1302();
					}
				}
				else if (func_350(uParam0, Local_1192[4 /*2*/], 1))
				{
					func_1302();
				}
			}
		}
		else if (!__LIB_6__::func_904())
		{
			func_1303(uParam0, iParam1);
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Local_55[iParam1 /*148*/].f_12))
	{
		if (__LIB_0__::func_48(Global_35, Local_55[iParam1 /*148*/], 30f, 1) || ((__LIB_0__::func_48(Global_35, Local_55[iParam1 /*148*/], 50f, 1) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_55[iParam1 /*148*/], 17)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_55[iParam1 /*148*/])))
		{
			Local_55[iParam1 /*148*/].f_12 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_55[iParam1 /*148*/]);
			MAP::_BLIP_SET_MODIFIER(Local_55[iParam1 /*148*/].f_12, -1118229366);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_55[iParam1 /*148*/].f_12, "CAL3_BLIP_OUTLAW");
		}
	}
	if (iParam1 == 1)
	{
		if (!func_220(536870912))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_55[iParam1 /*148*/], 2369.378f, 1589.706f, 85.0145f, 1f, -1, false, false, false, false);
			func_332(536870912);
		}
	}
	if (iParam1 == 3)
	{
		if (!func_220(1073741824 /* Float: 2f */))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_55[iParam1 /*148*/], 2370.583f, 1588.635f, 85.01236f, 1f, -1, false, false, false, false);
			func_332(1073741824 /* Float: 2f */);
		}
	}
	if (!func_220(2097152))
	{
		if (__LIB_0__::func_27(iLocal_1265, 32))
		{
			__LIB_2__::func_259(&uLocal_1040);
			__LIB_2__::func_259(&uLocal_1043);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_648, true);
			func_332(2097152);
		}
	}
	else if (!func_220(4194304))
	{
		if (__LIB_4__::func_118(&uLocal_1040) > 8f)
		{
			if (iParam1 == 1)
			{
				PED::_0x802092B07E3B1EEA(Local_55[iParam1 /*148*/], Global_36, 3);
				TASK::TASK_ACHIEVE_HEADING(Local_55[iParam1 /*148*/], (Local_55[iParam1 /*148*/].f_5 - 180f), 0);
				__LIB_1__::func_561(&uLocal_1040);
				func_332(4194304);
			}
		}
	}
	if (!func_220(65536))
	{
		if (!__LIB_0__::func_27(iLocal_1265, 32))
		{
			if (!func_349(1))
			{
				if (__LIB_0__::func_266(Global_35, vLocal_1178, 52f, 1, 1) && iParam1 == 1)
				{
					func_350(uParam0, Local_1192[0 /*2*/], 1);
				}
			}
		}
	}
	if (PED::_IS_PED_HOGTIED(Local_55[iParam1 /*148*/]))
	{
		func_1304(iParam1);
		return;
	}
	if (func_220(131072))
	{
		if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_55[iParam1 /*148*/]))
		{
			func_1303(uParam0, iParam1);
			return;
		}
	}
	if (func_220(268435456))
	{
		if (((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3)
		{
			func_1303(uParam0, iParam1);
			return;
		}
	}
	if (((PED::_0xB7DBB2986B87E230(Local_55[iParam1 /*148*/], 5000f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_55[iParam1 /*148*/], true, false), 50f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_55[iParam1 /*148*/], true, false), 50f)) || __LIB_13__::func_211(Local_55[iParam1 /*148*/], 1097859072 /* Float: 15f */))
	{
		if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_55[iParam1 /*148*/]))
		{
			func_1303(uParam0, iParam1);
			return;
		}
	}
	if (__LIB_13__::func_714(Local_55[iParam1 /*148*/], 0, &(Local_55[iParam1 /*148*/].f_13), &(Local_55[iParam1 /*148*/].f_41), 0, 0))
	{
		func_1303(uParam0, iParam1);
		return;
	}
	if (!Local_55[iParam1 /*148*/].f_49)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (((iVar0 > 20 || iVar0 < 6) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			if (!func_220(4194304))
			{
				if (PED::_0x2BA9D7BF629F920C(Local_55[iParam1 /*148*/]) != 5f)
				{
					PED::SET_PED_SEEING_RANGE(Local_55[iParam1 /*148*/], 5f);
					Local_55[iParam1 /*148*/].f_49 = 1;
				}
			}
		}
	}
	else
	{
		iVar1 = CLOCK::GET_CLOCK_HOURS();
		if ((((iVar1 < 20 && iVar1 > 6) && !PED::IS_PED_IN_COVER(Global_35, false, false)) && !PED::_GET_PED_CROUCH_MOVEMENT(Global_35)) || func_220(4194304))
		{
			if (PED::_0x2BA9D7BF629F920C(Local_55[iParam1 /*148*/]) != 20f)
			{
				PED::SET_PED_SEEING_RANGE(Local_55[iParam1 /*148*/], 20f);
				Local_55[iParam1 /*148*/].f_49 = 0;
			}
		}
	}
	if (func_1306(Local_55[iParam1 /*148*/], &(Local_55[iParam1 /*148*/].f_13), &(Local_55[iParam1 /*148*/].f_41), 0))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_55[iParam1 /*148*/], Global_35, 17) && !__LIB_0__::func_48(Global_35, iLocal_648, 3.5f, 0))
		{
			if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_55[iParam1 /*148*/]))
			{
				func_1303(uParam0, iParam1);
				return;
			}
		}
	}
	if (((iParam1 != 1 && iParam1 != 3) && !func_349(4)) && !func_349(2))
	{
		switch (Local_55[iParam1 /*148*/].f_11)
		{
			case 0:
				if (__LIB_4__::func_118(&(Local_55[iParam1 /*148*/].f_42)) > IntToFloat(Local_55[iParam1 /*148*/].f_48))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(Local_55[iParam1 /*148*/], Local_55[iParam1 /*148*/].f_6, 1f, -1, Local_55[iParam1 /*148*/].f_9, 1056964608 /* Float: 0.5f */, 0);
					Local_55[iParam1 /*148*/].f_11 = 1;
				}
				break;
			case 1:
				if (!__LIB_0__::func_163(Local_55[iParam1 /*148*/], 2106541073))
				{
					Local_55[iParam1 /*148*/].f_48 = MISC::GET_RANDOM_INT_IN_RANGE(12, 20);
					__LIB_2__::func_259(&(Local_55[iParam1 /*148*/].f_42));
					Local_55[iParam1 /*148*/].f_11 = 2;
				}
				break;
			case 2:
				if (__LIB_4__::func_118(&(Local_55[iParam1 /*148*/].f_42)) > IntToFloat(Local_55[iParam1 /*148*/].f_48))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(Local_55[iParam1 /*148*/], Local_55[iParam1 /*148*/].f_2, 1f, -1, Local_55[iParam1 /*148*/].f_5, 1056964608 /* Float: 0.5f */, 0);
					Local_55[iParam1 /*148*/].f_11 = 3;
				}
				break;
			case 3:
				if (!__LIB_0__::func_163(Local_55[iParam1 /*148*/], 2106541073))
				{
					Local_55[iParam1 /*148*/].f_48 = MISC::GET_RANDOM_INT_IN_RANGE(40, 50);
					__LIB_2__::func_259(&(Local_55[iParam1 /*148*/].f_42));
					Local_55[iParam1 /*148*/].f_11 = 0;
				}
				break;
		}
	}
}

void func_768(var uParam0, int iParam1)
{
	if (PED::_IS_PED_HOGTIED(Local_55[iParam1 /*148*/]))
	{
		func_1304(iParam1);
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(Local_55[iParam1 /*148*/]))
	{
		if (__LIB_0__::func_899(&(Local_55[iParam1 /*148*/].f_45)))
		{
			__LIB_1__::func_561(&(Local_55[iParam1 /*148*/].f_45));
		}
	}
	if (func_220(2097152))
	{
		if (__LIB_0__::func_899(&uLocal_1043))
		{
			if (((__LIB_3__::func_458(iLocal_648) != 4 && __LIB_3__::func_458(iLocal_648) != 5) && __LIB_0__::func_27(iLocal_1265, 512)) || __LIB_4__::func_118(&uLocal_1043) > 20f)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_648, false);
				__LIB_1__::func_561(&uLocal_1043);
			}
		}
	}
	if (!func_349(16) && !func_349(64))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_55[3 /*148*/]))
		{
			__LIB_2__::func_259(&uLocal_1055);
			func_309(64);
			return;
		}
		if (!__LIB_6__::func_904())
		{
			if (!__LIB_0__::func_899(&uLocal_1055))
			{
				__LIB_2__::func_259(&uLocal_1055);
			}
			else if (__LIB_4__::func_118(&uLocal_1055) > 2f)
			{
				if (iParam1 == 3)
				{
					if ((func_220(2097152) || func_220(65536)) || __LIB_0__::func_48(Global_35, iLocal_648, 5f, 1))
					{
						__LIB_6__::func_900(Local_1192[0 /*2*/], 0, 0);
						func_350(uParam0, Local_1192[6 /*2*/], 1);
						__LIB_2__::func_259(&uLocal_1055);
					}
					else
					{
						__LIB_6__::func_900(Local_1192[0 /*2*/], 0, 0);
						func_350(uParam0, Local_1192[8 /*2*/], 1);
						__LIB_2__::func_259(&uLocal_1055);
					}
				}
			}
		}
	}
	else if (__LIB_4__::func_118(&uLocal_1055) > 9f)
	{
		if (iParam1 == 1)
		{
			if (!__LIB_6__::func_904())
			{
				if (func_350(uParam0, Local_1192[9 /*2*/], 1))
				{
					__LIB_2__::func_259(&uLocal_1055);
				}
			}
		}
		else if (iParam1 == 3)
		{
			if (!__LIB_6__::func_904())
			{
				if (func_350(uParam0, Local_1192[10 /*2*/], 1))
				{
					__LIB_2__::func_259(&uLocal_1055);
				}
			}
		}
	}
	if (!func_349(Local_1192[18 /*2*/].f_1))
	{
		if (!__LIB_6__::func_904() && __LIB_4__::func_118(&uLocal_1055) > 2f)
		{
			func_350(uParam0, Local_1192[18 /*2*/], 1);
		}
	}
	else if (!func_349(Local_1192[19 /*2*/].f_1))
	{
		if (!__LIB_0__::func_899(&uLocal_1067))
		{
			__LIB_2__::func_259(&uLocal_1067);
		}
		else if (__LIB_4__::func_118(&uLocal_1067) > 3f)
		{
			if (__LIB_0__::func_27(iLocal_1265, 512))
			{
				if (!__LIB_6__::func_904())
				{
					if (func_350(uParam0, Local_1192[19 /*2*/], 1))
					{
						__LIB_1__::func_561(&uLocal_1067);
					}
				}
			}
		}
	}
	if (!func_220(131072))
	{
		if (__LIB_0__::func_899(&(Local_55[iParam1 /*148*/].f_45)))
		{
			if (__LIB_4__::func_118(&(Local_55[iParam1 /*148*/].f_45)) > 2f)
			{
				if (!func_220(131072))
				{
					func_332(131072);
					__LIB_1__::func_561(&(Local_55[iParam1 /*148*/].f_45));
				}
			}
		}
	}
}

void func_770(var uParam0)
{
	if (PED::_IS_PED_HOGTIED(iLocal_648))
	{
		func_1308(uParam0);
	}
	else if (!PED::_IS_PED_LASSOED(iLocal_648))
	{
		func_1309();
	}
}

void func_771()
{
	if ((!PED::_IS_PED_HOGTIED(iLocal_648) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_648, -1)) && __LIB_0__::func_27(iLocal_1265, 16384))
	{
		if ((!__LIB_0__::func_27(iLocal_1265, 512) && !__LIB_0__::func_27(iLocal_1265, 32)) && iLocal_14 == 1)
		{
			__LIB_1__::func_864(iLocal_648, 0, 0);
		}
		else if (iLocal_14 != 1)
		{
			func_1309();
		}
		return;
	}
	if (!func_220(65536))
	{
		if (__LIB_3__::func_649(Global_35, iLocal_648) || (__LIB_3__::func_458(iLocal_648) == 7 && __LIB_0__::func_27(iLocal_1265, 512)))
		{
			func_332(65536);
		}
	}
}

void func_772(var uParam0)
{
	if (PED::_IS_PED_LASSOED(iLocal_648))
	{
		func_1312();
	}
	else if (PED::_IS_PED_HOGTIED(iLocal_648))
	{
		func_1308(uParam0);
	}
	if (!__LIB_6__::func_904())
	{
		AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_648, false);
	}
}

void func_775()
{
	if (!func_220(4))
	{
		iLocal_1020 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_648);
		MAP::_BLIP_SET_MODIFIER(iLocal_1020, -546708623);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1020, "CAL3_BLIP_GRANT");
		func_332(4);
	}
}

void func_776(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (!__LIB_0__::func_27(iLocal_1265, 1))
	{
		if (func_470(5, 0, func_196(20)))
		{
			if (!__LIB_0__::func_27(iLocal_1265, 4))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_648, 10f, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_648, Global_35, 500, 0, 51, 0);
					func_350(uParam0, Local_1192[11 /*2*/], 1);
				}
				if (__LIB_0__::func_48(Global_35, iLocal_648, 5f, 1) && !__LIB_13__::func_273(Local_1192[11 /*2*/]))
				{
					if (func_350(uParam0, Local_1192[13 /*2*/], 1))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_681[5 /*16*/]);
						__LIB_2__::func_259(&uLocal_1058);
						__LIB_1__::func_683(&iLocal_1265, 1);
					}
				}
			}
			else if (__LIB_0__::func_27(iLocal_1265, 8))
			{
				if (!__LIB_6__::func_904())
				{
					if (!__LIB_0__::func_899(&uLocal_1061))
					{
						if (func_349(Local_1192[20 /*2*/].f_1))
						{
							__LIB_2__::func_259(&uLocal_1061);
						}
					}
					else if (__LIB_4__::func_118(&uLocal_1061) > 10f)
					{
						if (func_350(uParam0, Local_1192[21 /*2*/], 1))
						{
							func_353(Local_1192[21 /*2*/].f_1);
							__LIB_2__::func_259(&uLocal_1061);
						}
					}
				}
				if (!__LIB_0__::func_27(iLocal_1265, 128))
				{
					if (func_1313(5, func_196(19)))
					{
						__LIB_1__::func_683(&iLocal_1265, 128);
					}
				}
				else if (__LIB_0__::func_48(Global_35, iLocal_648, 5f, 1))
				{
					if (func_349(Local_1192[20 /*2*/].f_1) && !__LIB_6__::func_904())
					{
						if (func_350(uParam0, Local_1192[14 /*2*/], 1))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_681[5 /*16*/]);
							__LIB_1__::func_683(&iLocal_1265, 1);
						}
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1265, 2))
	{
		iVar0 = __LIB_3__::func_547(iLocal_648, Global_35, 0.707f);
		iVar1 = __LIB_3__::func_547(iLocal_648, Global_35, 1f);
		if (iVar0 == 0)
		{
			sVar2 = func_196(4);
		}
		else if (iVar0 == 1)
		{
			if (iVar1 == 3)
			{
				sVar2 = func_196(5);
			}
			else
			{
				sVar2 = func_196(6);
			}
		}
		else if (iVar0 == 3)
		{
			sVar2 = func_196(5);
		}
		else
		{
			sVar2 = func_196(6);
		}
		if (func_1313(3, sVar2))
		{
			__LIB_1__::func_683(&iLocal_1265, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1265, 32))
	{
		if (func_470(4, 0, 0))
		{
			if (!__LIB_0__::func_27(iLocal_1265, 64))
			{
				if ((!__LIB_0__::func_139(iLocal_1078) && !PED::_0x3BDFCF25B58B0415(Global_35)) && !__LIB_0__::func_255(iLocal_648, 0))
				{
					iLocal_1078 = __LIB_2__::func_403("CAL3_CTX_TREE", joaat("INPUT_CUT_FREE"), iLocal_648, 3, 0, 1, 0, 4, 1.6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_221(iLocal_1078, 0, 1);
					__LIB_1__::func_683(&iLocal_1265, 64);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_1265, 16))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_648, 4f, 1))
				{
					ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
					ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 18, 1);
					ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 17, 1);
				}
				iLocal_1077 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_648, 1.6f, 2, 1, 0, 0, 0);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_1078), iLocal_1077, 0);
				if (!__LIB_0__::func_572(iLocal_1078, 0))
				{
					if ((((!__LIB_13__::func_273(Local_1192[11 /*2*/]) && !__LIB_13__::func_273(Local_1192[13 /*2*/])) && !__LIB_13__::func_273(Local_1192[14 /*2*/])) && !PED::_IS_PED_CARRYING(Global_35)) && PED::IS_PED_ON_FOOT(Global_35))
					{
						__LIB_1__::func_221(iLocal_1078, 1, 1);
					}
				}
				else if ((((__LIB_13__::func_273(Local_1192[11 /*2*/]) || __LIB_13__::func_273(Local_1192[13 /*2*/])) || __LIB_13__::func_273(Local_1192[14 /*2*/])) || PED::_IS_PED_CARRYING(Global_35)) || !PED::IS_PED_ON_FOOT(Global_35))
				{
					__LIB_1__::func_221(iLocal_1078, 0, 1);
				}
				if (__LIB_4__::func_118(&uLocal_1058) > 9f && __LIB_0__::func_48(Global_35, iLocal_648, 5f, 1))
				{
					if (func_350(uParam0, Local_1192[12 /*2*/], 1))
					{
						__LIB_1__::func_561(&uLocal_1058);
					}
				}
				if (__LIB_0__::func_567(iLocal_1078, 1))
				{
					__LIB_1__::func_281(&iLocal_1078, 1, 1);
					func_1317();
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					__LIB_1__::func_683(&iLocal_1265, 16);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_1265, 32))
			{
				if (func_1313(4, sLocal_1083))
				{
					if (func_1318())
					{
						ANIMSCENE::START_ANIM_SCENE(Local_681[4 /*16*/]);
						if (!__LIB_0__::func_27(iLocal_1265, 4))
						{
							func_350(uParam0, Local_1192[15 /*2*/], 1);
						}
						else if (__LIB_0__::func_27(iLocal_1265, 8))
						{
							func_350(uParam0, Local_1192[16 /*2*/], 1);
						}
						__LIB_1__::func_683(&iLocal_1265, 32);
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1265, 512))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_648))
		{
			TASK::_0xFF745B0346E19E2C(ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_648, 1));
			if (!TASK::_0x0CCFE72B43C9CF96(iLocal_648) && (ANIMSCENE::_0x005E6F28DD7ED58D(Local_681[4 /*16*/], "Calloway") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_681[4 /*16*/], "Calloway")))
			{
				if (!__LIB_0__::func_27(iLocal_1265, 1024))
				{
					TASK::TASK_CARRIABLE(iLocal_648, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_648, 1), Global_35, 0, 0);
				}
				else
				{
					TASK::TASK_CARRIABLE(iLocal_648, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_648, 1), 0, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_1265, 512);
				__LIB_1__::func_683(&iLocal_1265, 256);
			}
		}
	}
}

bool func_777(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_55[iVar1 /*148*/].f_10 == 3 || Local_55[iVar1 /*148*/].f_10 == 2)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		if (!__LIB_0__::func_899(&uLocal_1037))
		{
			__LIB_2__::func_259(&uLocal_1037);
		}
		else if (__LIB_4__::func_118(&uLocal_1037) > 3f)
		{
			__LIB_1__::func_561(&uLocal_1037);
			if (!__LIB_0__::func_27(iLocal_1265, 8))
			{
				if (func_350(uParam0, Local_1192[20 /*2*/], 1))
				{
					__LIB_1__::func_683(&iLocal_1265, 8);
				}
			}
			return true;
		}
	}
	return false;
}

void func_781(bool bParam0)
{
	if (func_349(4194304) && bParam0)
	{
		return;
	}
	AUDIO::_0x0D7FD6A55FD63AEF(7, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 3, bParam0);
	if (bParam0)
	{
		PED::_0x1E017404784AA6A3(iLocal_648, joaat("RCAL1_RIDE1"));
	}
	else
	{
		PED::_0x2B4CE170DE09F346(iLocal_648, joaat("RCAL1_RIDE1"));
	}
}

void func_784(int iParam0)
{
	__LIB_1__::func_681(&iLocal_1262, iParam0);
}

void func_786()
{
	if (!func_220(2))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_1019))
		{
			if (__LIB_0__::func_27(iLocal_1266, 4096))
			{
				iLocal_1019 = __LIB_8__::func_777(-308585968, vLocal_1175, 5f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1019, "CAL3_BLIP_LEVIN");
			}
			else
			{
				iLocal_1019 = __LIB_8__::func_777(-308585968, vLocal_1175, 12.5f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1019, "CAL3_BLIP_DROPOFF");
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_1019, -1186550032);
		}
		func_332(2);
	}
}

void func_787()
{
	if (func_220(4))
	{
		__LIB_0__::func_325(&iLocal_1020);
		func_784(4);
	}
}

void func_794(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_654))
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iLocal_654, true);
		PED::_UPDATE_PED_VARIATION(iLocal_654, false, true, true, true, false);
		PED::SET_PED_COMBAT_ABILITY(iLocal_654, 2);
		PED::SET_PED_CONFIG_FLAG(iLocal_654, 186, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_654, true, true);
		WEAPON::_0x899A04AFCC725D04(iLocal_654, WEAPON::_0xD42514C182121C23(iLocal_655));
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_654, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_654, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_654, 266, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_654, 6, true);
		if (bParam1)
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_654, false);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_654, 2715.926f, 2047.398f, 111.7913f, 0f, true, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_654, true);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_654, true);
		}
	}
	__LIB_12__::func_875(uParam0, iLocal_654, "CALLOWAY", 1);
	func_332(8192);
}

void func_800(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	StringCopy(&cVar0, func_1324(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = __LIB_1__::func_569(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_801(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;
	StringCopy(&cVar0, func_1324(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = __LIB_1__::func_569(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_802(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = __LIB_0__::func_958(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_1325());
}

bool func_832(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_1350(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (func_1353(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = func_1357(iVar6) + 1;
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
				func_832(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						func_1365(38, __LIB_0__::func_354(iVar6), 0, 0, func_1364(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						func_1365(38, __LIB_0__::func_354(iVar6), 0, 0, func_1364(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					func_1365(38, 0, 0, 0, func_1364(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					func_1365(38, 0, 0, 0, func_1364(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_10__::func_706(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_10__::func_706(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		func_1372(28);
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
			if (!func_1378(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_1380(iParam0, &iVar0, iParam5))
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
				func_1386(iParam0);
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
				func_1388(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_1389(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			func_1390(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			func_1391(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_1392(iParam0);
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
			func_1394(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1396(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			func_1386(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			func_1397(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_855(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_832(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_855(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_832(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_855(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_832(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_855(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_832(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_855(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_832(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_855(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_832(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1399(iParam0, &iVar2);
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
				func_832(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1372(24);
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
					func_832(func_1416(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_832(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1420(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1421(iParam0);
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
				func_832(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return true;
}

void func_834()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1434();
	func_1435();
	func_1436();
	func_1437();
	func_1438();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_835(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1441(iParam0, 1, 1, -142743235, 1);
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

bool func_855(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_1457(iParam0, 1))
		{
			return false;
		}
	}
	return func_1353(iParam0, 0, bParam2) >= iParam1;
}

void func_867()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1463(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
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

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_1470(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

Vector3 func_874(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
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
	fVar2 = 9999999f;
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
		bVar10 = func_1477();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1478(Global_1310720.f_21))
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
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (func_1483(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
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

void func_884()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	if (!__LIB_0__::func_1(Global_1935630, 8192))
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_0__::func_8(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(10f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(25f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * __LIB_0__::func_646(6f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = __LIB_0__::func_648();
	fVar0 = (fVar0 + (0.1111111f * __LIB_0__::func_646(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + __LIB_0__::func_646(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * __LIB_0__::func_646(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(__LIB_1__::func_5()))));
	if (__LIB_1__::func_187(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * __LIB_0__::func_646(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1495(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(__LIB_1__::func_6());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = __LIB_0__::func_650(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (__LIB_0__::func_6(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = __LIB_0__::func_291(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					__LIB_1__::func_722(Global_1898330[iVar61]);
				}
				else
				{
					__LIB_1__::func_130(iVar61, 0);
					if (__LIB_0__::func_700(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = __LIB_0__::func_299(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = __LIB_0__::func_299(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(__LIB_0__::func_299(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_926()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_2__::func_788(&(Local_55[iVar0 /*148*/]), 1, 0, 1);
		__LIB_0__::func_325(&(Local_55[iVar0 /*148*/].f_12));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*148*/].f_1);
		iVar0++;
	}
	__LIB_2__::func_788(&iLocal_648, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_654, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_798, 0, 1, 0);
}

void func_963()
{
	int iVar0;
	iLocal_798 = __LIB_0__::func_398(7);
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (iVar0 != iLocal_798)
	{
		iLocal_798 = iVar0;
	}
}

void func_965(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1558(iParam0);
			break;
		case 1:
			func_1559(iParam0);
			break;
		case 3:
			func_1560(iParam0);
			break;
		case 4:
			func_1561(iParam0);
			break;
		case 5:
			func_1561(iParam0);
			break;
		case 6:
			func_1561(iParam0);
			break;
		case 2:
			func_1562(iParam0);
			break;
	}
}

bool func_978(var uParam0, var uParam1)
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
	func_1574(uParam0, uParam1);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	if ((iVar1 == joaat("WEAPON_UNARMED") || iVar1 != uParam0->f_48) && !__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_3__::func_809();
		__LIB_0__::func_240(uParam1, 16777216);
		__LIB_1__::func_766(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
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
		__LIB_1__::func_766(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, __LIB_3__::func_761(uParam0, 512), 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
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

void func_983(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		func_416(uParam0, uParam1);
		__LIB_3__::func_762(uParam1, 9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		if (!__LIB_3__::func_761(uParam0, 32768))
		{
			__LIB_3__::func_806(0, uParam0, uParam1, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
			__LIB_0__::func_240(uParam1, 2);
		}
	}
	__LIB_13__::func_190(uParam1, uParam0, *uParam0, uParam0->f_42, uParam0->f_45, uParam0->f_48);
	__LIB_13__::func_186(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
	Global_19 = 1;
	MAP::DISPLAY_RADAR(false);
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	__LIB_3__::func_849(*uParam0);
	__LIB_0__::func_240(uParam1, 8);
}

bool func_989(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	__LIB_3__::func_831(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		__LIB_13__::func_274(uParam0, uParam1);
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
					__LIB_2__::func_259(&(uParam1->f_35));
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
			__LIB_11__::func_537(uParam1);
			if (__LIB_11__::func_532(uParam0, uParam1))
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
			__LIB_19__::func_480(uParam0, uParam1);
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 33554432))
			{
				if (PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) && PLAYER::_0xCCD9B77F70D31C9D(PLAYER::PLAYER_ID()) > 1)
				{
					CAM::_0x5B637D6F3B67716A(uParam0->f_1);
					__LIB_3__::func_775(uParam0, 4194304);
				}
			}
			if (__LIB_18__::func_636(uParam0, uParam1))
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
						if (func_1478(uParam1->f_62))
						{
							__LIB_3__::func_850(&(uParam0->f_1));
							__LIB_13__::func_677(uParam1->f_62);
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
								if (__LIB_13__::func_680(uParam0, uParam1, 0))
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
								__LIB_10__::func_525(13, 0, 0, 0, uParam0->f_1, 0, 1065353216 /* Float: 1f */, 0);
							}
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), fVar2);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 5);
						break;
					case 3:
						__LIB_13__::func_267(uParam1);
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
								__LIB_13__::func_683(uParam0, uParam1);
							}
							if (!__LIB_0__::func_272(*uParam0, 9))
							{
								__LIB_3__::func_778(uParam1, 6);
							}
						}
						break;
					case 5:
						__LIB_13__::func_267(uParam1);
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
			if (func_1478(uParam1->f_62))
			{
				__LIB_13__::func_677(uParam1->f_62);
			}
			if (__LIB_3__::func_291(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (__LIB_13__::func_684(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!func_1478(uParam1->f_62) || __LIB_13__::func_677(uParam1->f_62)))
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

int func_1005(var uParam0, int iParam1, int iParam2)
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
		return func_1005(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1169(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1709())
			{
			}
		}
		else
		{
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_4__::func_118(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || func_1709()) || bVar1)
		{
			if (bVar1)
			{
				__LIB_10__::func_248();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

bool func_1188(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_648))
	{
		iLocal_648 = func_634(uParam0, iLocal_649, vLocal_650, fLocal_653, 1, 1, 0, bParam1, 1, 0, 0, 0);
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iLocal_648))
	{
		return true;
	}
	return false;
}

bool func_1193(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_55[iVar1 /*148*/]))
		{
			Local_55[iVar1 /*148*/] = func_634(uParam0, Local_55[iVar1 /*148*/].f_1, Local_55[iVar1 /*148*/].f_2, Local_55[iVar1 /*148*/].f_5, 1, 1, 0, 1, 1, 0, 0, 1);
		}
		else if (!Local_55[iVar1 /*148*/].f_50)
		{
			if (PED::_0xA0BC8FAED8CFEB3C(Local_55[iVar1 /*148*/]))
			{
				if (iVar1 == 0)
				{
					iVar2 = 968029114;
				}
				else if (iVar1 == 1)
				{
					iVar2 = 453588583;
				}
				else if (iVar1 == 2)
				{
					iVar2 = 703616053;
				}
				else
				{
					iVar2 = 124489516;
				}
				__LIB_0__::func_862(Local_55[iVar1 /*148*/], iVar2);
				Local_55[iVar1 /*148*/].f_50 = 1;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1200()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_673[0]))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_JOURNAL01X")))
		{
			iLocal_673[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_JOURNAL01X"), 2684.263f, 2205.66f, 97.28424f, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_673[1]))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_PEN01X")))
		{
			iLocal_673[1] = OBJECT::CREATE_OBJECT(joaat("P_PEN01X"), 2684.209f, 2205.183f, 97.28386f, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_673[2]))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BAGLEVIN01X")))
		{
			iLocal_673[2] = OBJECT::CREATE_OBJECT(joaat("P_CS_BAGLEVIN01X"), 2682.99f, 1946.54f, 103f, true, true, false, false, true);
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_673[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_673[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_673[2]))
	{
		return true;
	}
	return false;
}

int func_1201(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_660))
	{
		iLocal_660 = func_634(uParam0, iLocal_661, vLocal_662, fLocal_665, 1, 1, 0, 1, 1, 0, 1, 0);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_666[0 /*5*/]))
	{
		Local_666[0 /*5*/] = func_634(uParam0, iLocal_672, Local_666[0 /*5*/].f_1, Local_666[0 /*5*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_660))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(Local_666[0 /*5*/]))
	{
		return 0;
	}
	__LIB_12__::func_875(uParam0, iLocal_660, "RCAL_LEVIN", 1);
	return 1;
}

int func_1202(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_654))
	{
		iLocal_654 = func_634(uParam0, iLocal_655, vLocal_656, fLocal_659, 1, 1, 0, 1, 1, 0, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_654, false);
		return 0;
	}
	return 1;
}

void func_1203()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_660))
	{
		__LIB_0__::func_862(iLocal_660, -1293422565);
		PED::SET_PED_CONFIG_FLAG(iLocal_660, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_660, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_660, 6, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_660, joaat("REL_PLAYER_ALLY"));
		PED::_0xB8DE69D9473B7593(iLocal_660, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_666[0 /*5*/]))
	{
		PED::_SET_PED_SCALE(Local_666[0 /*5*/], 1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_666[0 /*5*/], true);
		PED::SET_PED_CONFIG_FLAG(Local_666[0 /*5*/], 6, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_666[0 /*5*/], joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CONFIG_FLAG(Local_666[0 /*5*/], 253, true);
		PED::SET_PED_CONFIG_FLAG(Local_666[0 /*5*/], 26, true);
		ENTITY::_0x9587913B9E772D29(Local_666[0 /*5*/], 0);
		AITRANSPORT::_0xBA8818212633500A(Local_666[0 /*5*/], 0, 1);
		PED::_0xB8DE69D9473B7593(Local_666[0 /*5*/], 0);
		PED::_0xAE6004120C18DF97(Local_666[0 /*5*/], 0, 0);
	}
}

void func_1229(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
	if (!__LIB_0__::func_1(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*uParam0, 4) && !__LIB_0__::func_1(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*uParam0, 8192))
	{
		func_1734();
	}
	if (!__LIB_0__::func_1(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 1024))
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
		if (!__LIB_0__::func_1(*uParam0, 16))
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
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
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
	if (!__LIB_0__::func_1(*uParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 2097152))
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
	*uParam0 = 0;
}

void func_1231(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0)))
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
			func_1742(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1742(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1232(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1742(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1249(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1529[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1529[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1794) && !uParam0->f_1529[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1794, uParam0->f_1529[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1794, 1);
				uParam0->f_1529[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1583 != 0 || __LIB_12__::func_655(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_1583 = 0;
					__LIB_12__::func_686(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_1529[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_1529[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_1529[iVar2 /*15*/].f_10, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					func_1755(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_1529[iVar2 /*15*/])) != 0)
				{
					func_1755(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_1529[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1584 >= 0)
				{
					if (((__LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1) > uParam0->f_912[uParam0->f_1584 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_1794, uParam0->f_1529[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1583 != 0) || __LIB_12__::func_655(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_3__::func_869(Global_35, &(uParam0->f_1583), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1583 = 0;
							__LIB_12__::func_686(uParam0, 33554432);
						}
						else
						{
							__LIB_12__::func_693(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

void func_1274(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			func_1277(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_1276(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_1277(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_1__::func_583(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

int func_1277(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_12__::func_984(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_12__::func_984(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_12__::func_984(uParam0, 5);
			}
			else
			{
				__LIB_13__::func_37(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_4__::func_118(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_13__::func_37(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_13__::func_37(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_13__::func_37(uParam0);
				}
				else
				{
					__LIB_12__::func_990(uParam0, iParam1, bParam2);
					__LIB_2__::func_259(&(uParam0->f_1765));
					__LIB_12__::func_984(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_12__::func_984(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					func_1775(uParam0->f_1799, 0);
				}
			}
			__LIB_2__::func_259(&(uParam0->f_1765));
			__LIB_12__::func_984(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_12__::func_984(uParam0, 10);
				}
				else
				{
					__LIB_12__::func_984(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_12__::func_984(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_12__::func_984(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_4__::func_118(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_984(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

int func_1301(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_664(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

void func_1302()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_3__::func_515(&(Local_55[iVar0 /*148*/].f_52[0 /*17*/]), 0, 0);
		__LIB_3__::func_515(&(Local_55[iVar0 /*148*/].f_52[1 /*17*/]), 0, 0);
		iVar0++;
	}
}

void func_1303(var uParam0, int iParam1)
{
	if (!func_220(131072))
	{
		if (__LIB_0__::func_899(&uLocal_1052))
		{
			if (__LIB_4__::func_118(&uLocal_1052) < 0.4f)
			{
				return;
			}
		}
	}
	__LIB_2__::func_624(&(Local_55[iParam1 /*148*/].f_52), 1, 1, 1, 0);
	Local_55[iParam1 /*148*/].f_87.f_2 = 0;
	__LIB_1__::func_480(&(Local_55[iParam1 /*148*/]));
	if (!MAP::DOES_BLIP_EXIST(Local_55[iParam1 /*148*/].f_12))
	{
		Local_55[iParam1 /*148*/].f_12 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_55[iParam1 /*148*/]);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_55[iParam1 /*148*/].f_12, "CAL3_BLIP_OUTLAW");
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Local_55[iParam1 /*148*/].f_12, -1118229366);
	}
	PED::_0x802092B07E3B1EEA(Local_55[iParam1 /*148*/], Global_36, 3);
	if (!func_349(8) && !func_349(32))
	{
		if (iParam1 == 1)
		{
			if ((func_220(2097152) || func_220(65536)) || __LIB_0__::func_48(Global_35, iLocal_648, 5f, 1))
			{
				__LIB_6__::func_900(Local_1192[0 /*2*/], 0, 0);
				func_350(uParam0, Local_1192[5 /*2*/], 1);
			}
			else
			{
				__LIB_6__::func_900(Local_1192[0 /*2*/], 0, 0);
				func_350(uParam0, Local_1192[7 /*2*/], 1);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1265, 4))
	{
		__LIB_1__::func_683(&iLocal_1265, 4);
	}
	TASK::TASK_COMBAT_HATED_TARGETS(Local_55[iParam1 /*148*/], -1f);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_55[iParam1 /*148*/], 512, true);
	__LIB_2__::func_259(&(Local_55[iParam1 /*148*/].f_45));
	__LIB_2__::func_259(&uLocal_1052);
	func_1802(iParam1, 1);
}

void func_1304(int iParam0)
{
	__LIB_2__::func_624(&(Local_55[iParam0 /*148*/].f_52), 1, 1, 1, 0);
	Local_55[iParam0 /*148*/].f_87.f_2 = 0;
	__LIB_1__::func_480(&(Local_55[iParam0 /*148*/]));
	func_1802(iParam0, 2);
}

bool func_1306(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_5__::func_686(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_11__::func_404(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_11__::func_404(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_1308(var uParam0)
{
	ENTITY::SET_ENTITY_PROOFS(iLocal_648, 0, false);
	__LIB_10__::func_593(1);
}

void func_1309()
{
	TASK::CLEAR_PED_TASKS(iLocal_648, true, false);
	PED::REGISTER_TARGET(iLocal_648, Global_35, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_648, 27, false);
	PED::SET_PED_ACCURACY(iLocal_648, 50);
	ENTITY::SET_ENTITY_PROOFS(iLocal_648, 0, false);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_648, ENTITY::GET_ENTITY_COORDS(iLocal_648, true, false), 10f, 0, false, 0);
	func_787();
	func_775();
	if (__LIB_0__::func_899(&uLocal_1028))
	{
		__LIB_1__::func_561(&uLocal_1028);
	}
	TASK::TASK_COMBAT_PED(iLocal_648, Global_35, 0, 0);
	__LIB_10__::func_593(2);
}

void func_1312()
{
	func_332(256);
	ENTITY::SET_ENTITY_PROOFS(iLocal_648, 8, false);
	__LIB_10__::func_593(0);
}

bool func_1313(int iParam0, char* sParam1)
{
	if (func_1807(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_681[iParam0 /*16*/], sParam1, true);
		Local_681[iParam0 /*16*/].f_15 = sParam1;
		return true;
	}
	return false;
}

void func_1317()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	if (!__LIB_0__::func_27(iLocal_1265, 4))
	{
		vVar6 = { 2373.42f, 1596.17f, 87.3f };
		vVar9 = { 2373.52f, 1596.23f, 87.3f };
		vVar3 = { 2372.8f, 1596.73f, 87.3f };
		vVar0 = { 2374.23f, 1596.87f, 87.3f };
		fVar14 = -0.42f;
		fVar15 = -0.46f;
		fVar13 = -81.59f;
		fVar12 = 96.71f;
	}
	else if (!__LIB_0__::func_27(iLocal_1265, 8))
	{
		vVar6 = { 2373.87f, 1596.05f, 87.27f };
		vVar9 = { 2373.37f, 1595.82f, 87.27f };
		vVar3 = { 2372.8f, 1596.73f, 87.3f };
		vVar0 = { 2374.23f, 1596.87f, 87.3f };
		fVar14 = 19.2f;
		fVar15 = 5.78f;
		fVar13 = -81.59f;
		fVar12 = 96.71f;
	}
	else
	{
		vVar6 = { 2373.43f, 1596.26f, 87.25f };
		vVar9 = { 2373.52f, 1596.23f, 87.29f };
		vVar3 = { 2372.8f, 1596.73f, 87.3f };
		vVar0 = { 2374.23f, 1596.87f, 87.3f };
		fVar14 = 6.19f;
		fVar15 = 6f;
		fVar13 = -81.59f;
		fVar12 = 96.71f;
	}
	fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar6, true);
	fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar9, true);
	fVar18 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, true);
	fVar19 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
	if (fVar18 < fVar19)
	{
		if (fVar16 < fVar18)
		{
			vLocal_1079 = { vVar6 };
			fLocal_1082 = fVar14;
			if (!__LIB_0__::func_27(iLocal_1265, 4))
			{
				sLocal_1083 = func_196(7);
			}
			else if (!__LIB_0__::func_27(iLocal_1265, 8))
			{
				sLocal_1083 = func_196(11);
				__LIB_1__::func_683(&iLocal_1265, 1024);
			}
			else
			{
				sLocal_1083 = func_196(15);
			}
		}
		else
		{
			vLocal_1079 = { vVar3 };
			fLocal_1082 = fVar13;
			if (!__LIB_0__::func_27(iLocal_1265, 4))
			{
				sLocal_1083 = func_196(9);
			}
			else if (!__LIB_0__::func_27(iLocal_1265, 8))
			{
				sLocal_1083 = func_196(13);
				__LIB_1__::func_683(&iLocal_1265, 1024);
			}
			else
			{
				sLocal_1083 = func_196(17);
			}
		}
	}
	else if (fVar17 < fVar19)
	{
		vLocal_1079 = { vVar9 };
		fLocal_1082 = fVar15;
		if (!__LIB_0__::func_27(iLocal_1265, 4))
		{
			sLocal_1083 = func_196(8);
		}
		else if (!__LIB_0__::func_27(iLocal_1265, 8))
		{
			sLocal_1083 = func_196(12);
			__LIB_1__::func_683(&iLocal_1265, 1024);
		}
		else
		{
			sLocal_1083 = func_196(16);
		}
	}
	else
	{
		vLocal_1079 = { vVar0 };
		fLocal_1082 = fVar12;
		if (!__LIB_0__::func_27(iLocal_1265, 4))
		{
			sLocal_1083 = func_196(10);
		}
		else if (!__LIB_0__::func_27(iLocal_1265, 8))
		{
			sLocal_1083 = func_196(14);
			__LIB_1__::func_683(&iLocal_1265, 1024);
		}
		else
		{
			sLocal_1083 = func_196(18);
		}
	}
}

bool func_1318()
{
	char* sVar0;
	__LIB_12__::func_773(1, 0, 1, 1);
	if (!bLocal_1084)
	{
		if (__LIB_0__::func_153(Global_35, 0, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_153(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
		}
		bLocal_1084 = true;
		return false;
	}
	if (__LIB_0__::func_181())
	{
		sVar0 = "Arthur_Morgan";
	}
	else
	{
		sVar0 = "john_marston";
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[4 /*16*/]))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_681[4 /*16*/], sLocal_1083))
		{
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_681[4 /*16*/], sVar0))
			{
				return true;
			}
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_681[4 /*16*/], sVar0, sLocal_1083, 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
		}
	}
	if (fLocal_1082 == 0f || __LIB_0__::func_86(vLocal_1079))
	{
	}
	return false;
}

char* func_1324(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
			return "REGION_GRZ_TEMPEST_RIM";
			return "REGION_GRZ_THELOFT";
			return "REGION_GRE_VETERAN";
			return "REGION_GRZ_WAPITI";
			return "REGION_GRZ_WINTERMINING_TOWN";
			return "REGION_GUA_AGUASDULCES";
			return "REGION_GUA_CAMP";
			return "REGION_GUA_CINCOTORRES";
			return "REGION_GUA_LACAPILLA";
			return "REGION_GUA_MANICATO";
			return "REGION_HRT_ABANDONED_MILL";
			return "REGION_HRT_CARMODYDELL";
			return "REGION_HRT_CORNWALLKEROSENE";
			return "REGION_HRT_CROP_FARM";
			return "REGION_HRT_CUMBERLANDFALLS";
			return "REGION_HRT_DOWNSRANCH";
			return "REGION_HRT_EMERALDRANCH";
			return "REGION_HRT_GRANGERS_HOGGERY";
			return "REGION_HRT_HORSESHOEOVERLOOK";
			return "REGION_HRT_LARNEDSOD";
			return "REGION_HRT_LOONY_CULT";
			return "REGION_HRT_LUCKYSCABIN";
			return "REGION_HRT_SWANSONS_STATION";
			return "REGION_HRT_VALENTINE";
			return "REGION_ROA_ABERDEENPIGFARM";
			return "REGION_ROA_ANNESBURG";
			return "REGION_ROA_BEAVERHOLLOW";
			return "REGION_ROA_BEECHERS_C";
			return "REGION_ROA_BLACK_BALSAM_RISE";
			return "REGION_ROA_BRANDYWINE_DROP";
			return "REGION_ROA_BUTCHERCREEK";
			return "REGION_ROA_DOVERHILL";
			return "REGION_ROA_HAPPY_FAMILY";
			return "REGION_ROA_ISOLATIONIST";
			return "REGION_ROA_MACLEANSHOUSE";
			return "REGION_ROA_MOSSY_FLATS";
			return "REGION_ROA_ROANOKE_VALLEY";
			return "REGION_ROA_ROCKYSEVEN";
			return "REGION_ROA_TRAPPER";
			return "REGION_ROA_VANHORNMANSION";
			return "REGION_ROA_VANHORNPOST";
			return "REGION_SCM_BRAITHWAITEMANOR";
			return "REGION_SCM_BULGERGLADE";
			return "REGION_SCM_CALIGAHALL";
			return "REGION_SCM_CATFISHJACKSONS";
			return "REGION_SCM_CLEMENSCOVE";
			return "REGION_SCM_CLEMENSPOINT";
			return "REGION_SCM_COMPSONS_STEAD";
			return "REGION_SCM_DAIRY_FARM";
			return "REGION_SCM_HORSE_SHOP";
			return "REGION_SCM_LONNIESSHACK";
			return "REGION_SCM_LOVE_TRIANGLE";
			return "REGION_SCM_RADLEYS_PASTURE";
			return "REGION_SCM_RHODES";
			return "REGION_SCM_SLAVE_PEN";
			return "REGION_TAL_AURORA_BASIN";
			return "REGION_TAL_DEAD_SETTLER";
			return "REGION_TAL_COCHINAY";
			return "REGION_TAL_MANZANITAPOST";
			return "REGION_TAL_PACIFICUNIONRR";
			return "REGION_TAL_TANNERSREACH";
			return "REGION_TAL_TRAPPER";
			return "REGION_HEN_MACFARLANES_RANCH";
			return "REGION_HEN_THIEVES_LANDING";
			return "REGION_CHO_ARMADILLO";
			return "REGION_CHO_COOTS_CHAPEL";
			return "REGION_CHO_DON_JULIO_HOUSE";
			return "REGION_CHO_RIDGEWOOD_FARM";
			return "REGION_CHO_RILEYS_CHARGE";
			return "REGION_CHO_TWIN_ROCKS";
			return "REGION_GAP_GAPTOOTH_BREACH";
			return "REGION_GAP_TUMBLEWEED";
			return "REGION_GAP_RATHSKELLER_FORK";
			return "REGION_GAP_SOLOMONS_FOLLY";
			return "REGION_RIO_BENEDICT_POINT";
			return "REGION_RIO_FORT_MERCER";
			return "REGION_RIO_PLAIN_VIEW";
			return "REGION_CENTRALUNIONRR";
			return "REGION_INVALID";
			return "REGION_INVALID";
		}
char* func_1325()
{
	return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
}

bool func_1350(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1825(iParam0))
		{
			func_1826(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

int func_1353(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_1831(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return __LIB_1__::func_428(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return iVar2;
}

int func_1357(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < __LIB_0__::func_419())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == __LIB_0__::func_352(iVar0))
		{
			if (func_855(__LIB_0__::func_420(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_1364()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_855(__LIB_0__::func_421(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1365(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = __LIB_1__::func_34(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(41) || __LIB_1__::func_154(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = __LIB_1__::func_34(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_1838(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (__LIB_0__::func_422(iParam0, iVar13, iVar14))
	{
	}
	if (__LIB_0__::func_423(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (__LIB_0__::func_424(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1842(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1372(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1849(iParam0);
}

bool func_1378(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_1826(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_1380(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_855(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return __LIB_1__::func_825(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1386(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_192(iParam0, -2017733358);
	if (func_1856() < 3)
	{
		if (bVar0)
		{
			if (func_1858(__LIB_0__::func_432(iParam0), iParam0))
			{
				__LIB_1__::func_424(79, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
			else
			{
				__LIB_1__::func_424(78, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
		}
		else
		{
			__LIB_1__::func_424(80, __LIB_0__::func_776(__LIB_0__::func_789(iParam0)), 1);
		}
	}
}

int func_1388(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = func_1470(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		__LIB_1__::func_113(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	__LIB_1__::func_430(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1389(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_1365(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_1365(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_1365(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_1365(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_1867(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_1365(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_1867(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_1365(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_1867(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_1365(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_1867(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_1365(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_1867(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_1390(int iParam0)
{
	if (__LIB_0__::func_942() == 1)
	{
		if (__LIB_1__::func_154(39))
		{
			__LIB_1__::func_240(342, 0);
		}
		else
		{
			__LIB_1__::func_240(343, 0);
			__LIB_0__::func_434(1);
		}
	}
	if (__LIB_0__::func_942() >= 30)
	{
		__LIB_1__::func_240(344, 0);
	}
	func_1365(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_10__::func_706(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_1391(int iParam0)
{
	if (__LIB_0__::func_438() == 1)
	{
		if (__LIB_1__::func_154(49))
		{
			__LIB_1__::func_240(409, 0);
		}
		else
		{
			__LIB_1__::func_240(410, 0);
			__LIB_0__::func_436(1);
		}
	}
	if (__LIB_0__::func_438() >= 10)
	{
		__LIB_1__::func_240(411, 0);
	}
	func_1365(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_10__::func_706(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_1392(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_1871(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_1871(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_1871(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_1871(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_1871(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_1365(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1394(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_1875(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_1875(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_1875(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_1875(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_1875(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1396(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_855(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1881(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1882(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1388(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_1388(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_1388(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_1388(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_1388(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_1388(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_1388(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_1388(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_1388(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_1388(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_1388(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_1388(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_1388(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!__LIB_1__::func_202())
			{
				func_1388(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_1388(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_1388(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_1388(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_1388(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_1388(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_1388(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_1388(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_1388(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_1388(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_1388(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_1388(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_1388(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1399(int iParam0, int iParam1)
{
	var uVar0;
	func_1887(iParam0, iParam1, &uVar0);
}

int func_1416()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == __LIB_0__::func_419())
	{
		return __LIB_0__::func_920();
	}
	iVar4 = (__LIB_0__::func_419() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < __LIB_0__::func_419())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1888(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return __LIB_0__::func_420(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

void func_1420(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1372(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1421(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1897(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1897(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1897(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1897(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1897(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1897(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1897(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1897(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1897(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1897(-1, iParam0);
	}
}

void func_1434()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1909(0);
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
	func_1909(1);
}

void func_1435()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_832(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1436()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1912(0);
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
	func_1912(1);
}

void func_1437()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1912(0);
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
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1912(1);
}

void func_1438()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_855(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_832(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_855(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_832(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
			if (func_855(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_1441(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_855(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1441(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1441(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = func_1831(iParam0, 1);
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
	if (!func_855(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_1353(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_1353(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1441(iParam0, func_1353(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1920(iParam0, iParam1);
	return 1;
}

bool func_1457(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_1831(iParam0, iParam1);
	Var4.f_9 = -1591664384;
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
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				__LIB_0__::func_238(iVar1);
				return true;
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return false;
}

int func_1463(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1944(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_832(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1470(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_855(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (__LIB_0__::func_144(iVar25, 0) && __LIB_0__::func_192(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_1477()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1953(8);
		}
	}
	return 0;
}

bool func_1478(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1954(iParam0));
}

bool func_1483(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1963(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_744())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_8__::func_724(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_1495(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_1353(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_1353(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_1353(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

void func_1558(int iParam0)
{
	func_2024(iParam0, "CS_ASBDEPUTY_01", iLocal_21);
	func_2024(iParam0, "p_woodenchair01x", iLocal_679);
}

void func_1559(int iParam0)
{
	func_2024(iParam0, "TheodoreLevin", iLocal_660);
	func_2024(iParam0, "Horse_01", Local_666[0 /*5*/]);
	func_2024(iParam0, "p_cs_baglevin01x", iLocal_673[2]);
	func_2024(iParam0, "p_cs_journal01x", iLocal_673[0]);
	func_2024(iParam0, "p_pen01x", iLocal_673[1]);
}

void func_1560(int iParam0)
{
	func_2024(iParam0, "Calloway", iLocal_648);
	func_2024(iParam0, "Tree_Rope", iLocal_678);
}

void func_1561(int iParam0)
{
	func_2024(iParam0, "Calloway", iLocal_648);
	if (!__LIB_0__::func_181())
	{
		func_2024(iParam0, "Arthur_Morgan", Global_35);
	}
	else
	{
		func_2024(iParam0, "john_marston", Global_35);
	}
	func_2024(iParam0, "Tree_Rope", iLocal_678);
}

void func_1562(int iParam0)
{
	func_2024(iParam0, "CALLOWAY", iLocal_654);
	if (__LIB_0__::func_181())
	{
		func_2024(iParam0, "JOHN", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_681[iParam0 /*16*/], "b_PlayerArthur", false, false);
	}
	else
	{
		func_2024(iParam0, "ARTHUR", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_681[iParam0 /*16*/], "b_PlayerArthur", true, false);
	}
}

void func_1574(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@REPOSITION@BASE");
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_65);
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_66);
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@ACTION");
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@NORMAL");
	if (!__LIB_11__::func_77(&(uParam0->f_48)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_500(268435584, 0);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_11__::func_77(&(uParam0->f_49)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
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

int func_1709()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!func_2104(iVar0))
	{
		return 0;
	}
	iVar1 = __LIB_1__::func_710(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

void func_1734()
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
	iVar0 = func_2113(6291456, 0);
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

void func_1742(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1742(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1742(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1755(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_1529[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_1529[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					func_1775(uParam0->f_1799, 0);
					__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_1529[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
			}
			break;
	}
}

int func_1775(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!func_2104(iParam0))
	{
		return 0;
	}
	if (__LIB_5__::func_100(iParam0))
	{
		iVar0 = 0;
		if (__LIB_0__::func_357(iParam0) == 81053684)
		{
			if (bParam1)
			{
				__LIB_1__::func_683(&iVar0, 2);
			}
		}
		return __LIB_3__::func_630(iParam0, iVar0);
	}
	return 0;
}

void func_1802(int iParam0, int iParam1)
{
	Local_55[iParam0 /*148*/].f_10 = iParam1;
}

bool func_1807(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_681[iParam0 /*16*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_681[iParam0 /*16*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_681[iParam0 /*16*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_681[iParam0 /*16*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_681[iParam0 /*16*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_681[iParam0 /*16*/], sParam1))
		{
			func_965(iParam0);
		}
	}
	return false;
}

bool func_1825(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return __LIB_1__::func_761(iParam0, &uVar0, 1, 0, 0);
	}
	return func_855(iParam0, 1, 0);
}

void func_1826(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_1353(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				__LIB_1__::func_158(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

int func_1831(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (__LIB_0__::func_192(iParam0, 1399091007))
	{
		func_1887(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

char* func_1838(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_1364() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", __LIB_0__::func_964(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_2157(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (__LIB_0__::func_942() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", __LIB_0__::func_965(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", __LIB_0__::func_942(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", __LIB_0__::func_966(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (__LIB_0__::func_438() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", __LIB_0__::func_528(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", __LIB_0__::func_438(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, __LIB_1__::func_34(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1842(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = __LIB_0__::func_421(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_855(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_426(__LIB_0__::func_421(iVar0))), __LIB_0__::func_426(__LIB_0__::func_421(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_942() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_965() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1876(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = func_1876(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1876(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = func_1876(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_534(iVar2)), __LIB_0__::func_534(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), __LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_438() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_528() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1876(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_2171(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_2171(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_1__::func_72(iVar2)), __LIB_1__::func_72(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

void func_1849(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_855(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_855(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_855(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!func_855(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_855(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_855(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!func_855(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_8__::func_228();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_1856()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_855(__LIB_0__::func_547(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1858(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_855(iVar0, 1, 0) && func_855(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1867(int iParam0)
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
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_1876(iVar9);
	iVar2 = func_1876(iVar10);
	iVar3 = func_1876(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1876(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

bool func_1871(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_2171(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2171(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2171(iVar0))
		{
			*sParam2++;
		}
		if (func_2171(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_2171(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2171(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2171(iVar0))
		{
			*sParam2++;
		}
		if (func_2171(iVar1))
		{
			*sParam2++;
		}
		if (func_2171(iVar0) && func_2171(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_2171(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2171(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2171(iVar0))
		{
			*sParam2++;
		}
		if (func_2171(iVar1))
		{
			*sParam2++;
		}
		if (func_2171(iVar2))
		{
			*sParam2++;
		}
		if ((func_2171(iVar0) && func_2171(iVar1)) && func_2171(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_2171(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2171(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2171(iVar0))
		{
			*sParam2++;
		}
		if (func_2171(iVar1))
		{
			*sParam2++;
		}
		if (func_2171(iVar2))
		{
			*sParam2++;
		}
		if (func_2171(iVar3))
		{
			*sParam2++;
		}
		if (((func_2171(iVar0) && func_2171(iVar1)) && func_2171(iVar2)) && func_2171(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_1875(int iParam0, int iParam1, int iParam2)
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
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_1876(iVar9);
	iVar2 = func_1876(iVar10);
	iVar3 = func_1876(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1876(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1876(int iParam0)
{
	int iVar0;
	if (func_855(iParam0, 1, 0))
	{
		iVar0 = func_1353(iParam0, 0, 0);
	}
	return iVar0;
}

void func_1881(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_1871(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_1365(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1882(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_1871(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_1365(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_1365(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_1887(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			Jump @525; //curOff = 389
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			Jump @525; //curOff = 408
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			Jump @525; //curOff = 427
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			Jump @525; //curOff = 446
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			Jump @525; //curOff = 465
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			Jump @525; //curOff = 484
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			Jump @525; //curOff = 503
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
		}
bool func_1888(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1897(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2206(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2206(iParam1, 1);
		func_2207(iParam0);
	}
}

void func_1909(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_832(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2212(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_835(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1441(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2217(Var0);
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

void func_1912(bool bParam0)
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
		func_832(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_832(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1441(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1441(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1441(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1920(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_2232(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1396(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1944(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1944(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1944(iVar63, -915411861, 1, 0, 0));
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

int func_1953(int iParam0)
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
			break;
		case 5:
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
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
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
			break;
		case 10:
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
bool func_1954(int iParam0)
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

bool func_1963(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	__LIB_0__::func_720(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_855(iVar7, 1, 0);
		}
	}
	return true;
}

void func_2024(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_681[iParam0 /*16*/], sParam1, iParam2, 0);
	}
}

bool func_2104(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!func_855(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_2113(int iParam0, int iParam1)
{
	var uVar0;
	return func_2317(&uVar0, iParam0, iParam1);
}

int func_2157()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = __LIB_0__::func_421(iVar1);
		if (func_855(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_2171(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && func_855(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_1__::func_609(iParam0))
	{
		return true;
	}
	return false;
}

void func_2206(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1372(50);
			}
			else
			{
				func_1372(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1372(51);
			}
			else
			{
				func_1372(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2348(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_1372(24);
			if (bParam1)
			{
				if (!func_2348(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_2207(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2349(0))
			{
				iVar0++;
			}
			if (func_2349(2))
			{
				iVar0++;
			}
			if (func_2349(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					__LIB_1__::func_839();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_839();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2349(1))
			{
				iVar0++;
			}
			if (func_2349(3))
			{
				iVar0++;
			}
			if (func_2349(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					__LIB_1__::func_840();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_840();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2349(5))
			{
				iVar0++;
			}
			if (func_2349(6))
			{
				iVar0++;
			}
			if (func_2349(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					__LIB_1__::func_841();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_841();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_2212(int iParam0)
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
	func_1441(iParam0, 1, 1, -142743235, 1);
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
		func_1441(uVar18[iVar36], 1, 1, -142743235, 1);
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
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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

void func_2217(struct<6> Param0)
{
	if (!func_2376(Param0.f_4, 1))
	{
	}
	if (!func_2376(Param0, 1))
	{
	}
	if (!func_2376(Param0.f_2, 1))
	{
	}
	if (!func_2376(Param0.f_5, 1))
	{
	}
	if (!func_2376(Param0.f_3, 1))
	{
	}
	if (!func_2376(Param0.f_1, 1))
	{
	}
}

void func_2232(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_2400(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_2400(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_2400(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_2400(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_2400(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_1876(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1365(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_2317(var uParam0, int iParam1, int iParam2)
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
		return func_2317(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2348(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_855(__LIB_1__::func_8(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_2349(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_855(__LIB_1__::func_9(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_2376(int iParam0, int iParam1)
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
				if (func_2376(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2376(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2376(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2376(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_2400(int iParam0, int iParam1, int iParam2)
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
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_1876(iVar9);
	iVar2 = func_1876(iVar10);
	iVar3 = func_1876(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1876(iVar12);
	}
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

