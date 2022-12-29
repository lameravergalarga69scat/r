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
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_27 = { 0f, 0f, 0f };
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_37 = { 0f, 0f, 0f };
	vector3 vLocal_40 = { 0f, 0f, 0f };
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	vector3 vLocal_46 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	vector3 vLocal_62 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	vector3 vLocal_106 = { 0f, 0f, 0f };
	float fLocal_109 = 0f;
	vector3 vLocal_110 = { 0f, 0f, 0f };
	vector3 vLocal_113 = { 0f, 0f, 0f };
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	struct<19> Local_135 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	struct<21> Local_156 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<19> Local_177 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	struct<21> Local_240[3];
	struct<21> Local_304[1];
	struct<21> Local_326[6];
	struct<21> Local_453[4];
	struct<21> Local_538[3];
	struct<21> Local_602[8];
	int iLocal_771 = 0;
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
	int iLocal_792 = 0;
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
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = -1;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 1097859072;
	var uLocal_836 = 1000;
	var uLocal_837 = 1067450368;
	var uLocal_838 = 5000;
	var uLocal_839 = 42;
	var uLocal_840 = 1103626240;
	var uLocal_841 = 1077936128;
	var uLocal_842 = 1106247680;
	var uLocal_843 = 1103101952;
	var uLocal_844 = 1097859072;
	var uLocal_845 = 1103626240;
	var uLocal_846 = 0;
	int iLocal_847[3] = { 0, 0, 0 };
	struct<5> Local_851[21];
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 21;
	var uLocal_966 = 6;
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
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029[2] = { 0, 0 };
	int iLocal_1032 = 0;
	int iLocal_1033[4] = { 0, 0, 0, 0 };
	int iLocal_1038 = 0;
	int iLocal_1039 = 0;
	int iLocal_1040 = 0;
	int iLocal_1041[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1073[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1091[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	int iLocal_1104 = 0;
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	int iLocal_1109 = 0;
	int iLocal_1110 = 0;
	int iLocal_1111 = 0;
	int iLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	int iLocal_1115 = 0;
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	int iLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	int iLocal_1128 = 0;
	var uLocal_1129 = 0;
	int iLocal_1130[139] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_1270 = 0f;
	vector3 vLocal_1271 = { 0f, 0f, 0f };
	int iLocal_1274 = 0;
	int iLocal_1275 = 0;
	var uLocal_1276 = -1;
	var uLocal_1277 = 0;
	var uLocal_1278 = -1;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = -1;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 1073741824;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 1;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 1106247680;
	var uLocal_1302 = 1067450368;
	var uLocal_1303 = 0;
	var uLocal_1304 = 1092616192;
	var uLocal_1305 = 1112014848;
	var uLocal_1306 = 1106247680;
	var uLocal_1307 = 1101529088;
	var uLocal_1308 = 1101004800;
	var uLocal_1309 = 1084227584;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
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
	struct<17> Local_1336[2];
	var uLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	int iLocal_1374 = 0;
	int iLocal_1375 = 0;
	int iLocal_1376 = 0;
	int iLocal_1377 = 0;
	int iLocal_1378 = 0;
	int iLocal_1379 = 0;
	int iLocal_1380 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 4295;
	vLocal_15 = { -36.2f, 1229.36f, 172.07f };
	vLocal_18 = { -139.6707f, -15.5576f, 95.1052f };
	vLocal_21 = { -116.0146f, -38.8059f, 94.7549f };
	vLocal_24 = { -134.6858f, -14.8597f, 95.2986f };
	vLocal_27 = { -136.8936f, -14.2431f, 95.1704f };
	fLocal_30 = 269.1229f;
	fLocal_31 = 319.0163f;
	fLocal_32 = -104.66f;
	fLocal_33 = 257.3237f;
	vLocal_34 = { -106.5346f, -30.8247f, 94.9305f };
	vLocal_37 = { -110.5735f, -32.0264f, 94.9155f };
	vLocal_40 = { -114.6658f, -18.0266f, 94.9137f };
	fLocal_43 = 172.8357f;
	fLocal_44 = 197.9091f;
	fLocal_45 = 75.5312f;
	vLocal_46 = { 181.4059f, 923.3757f, 195.2063f };
	vLocal_49 = { 181.8302f, 927.0699f, 195.139f };
	vLocal_52 = { 181.8302f, 927.0699f, 195.139f };
	vLocal_55 = { 176.9347f, 920.9265f, 195.1901f };
	fLocal_58 = 308.8856f;
	fLocal_59 = 312.6442f;
	fLocal_60 = 312.6442f;
	fLocal_61 = 314.5561f;
	vLocal_62 = { 59.729f, 1179.228f, 187.1215f };
	vLocal_65 = { 59.268f, 1176.836f, 186.9116f };
	vLocal_68 = { 58.8297f, 1177.722f, 186.9797f };
	vLocal_71 = { 59.4509f, 1178.33f, 187.0486f };
	fLocal_74 = 34.26f;
	fLocal_75 = 34.64f;
	fLocal_76 = 11.6f;
	fLocal_77 = 31.1f;
	vLocal_78 = { 0.0513f, 1214.947f, 173.6967f };
	vLocal_81 = { -1.595f, 1211.175f, 173.8056f };
	vLocal_84 = { 6.9616f, 1210.031f, 173.9651f };
	vLocal_87 = { -0.4993f, 1206.171f, 174.0611f };
	fLocal_90 = 148.2589f;
	fLocal_91 = 156.804f;
	fLocal_92 = 150.0038f;
	fLocal_93 = 337.6864f;
	vLocal_94 = { 92.8947f, 1159.877f, 184.0362f };
	vLocal_97 = { 87.7391f, 1156.747f, 184.2615f };
	vLocal_100 = { 75.917f, 1168.557f, 186.9588f };
	fLocal_103 = 60.2363f;
	fLocal_104 = 44.18f;
	fLocal_105 = 26.07f;
	vLocal_106 = { -72.1745f, 1238.903f, 169.3239f };
	fLocal_109 = 170.0367f;
	vLocal_110 = { -66.393f, 1233.378f, 169.823f };
	vLocal_113 = { -84.7528f, 177.979f, -88.3515f };
	sLocal_116 = "rdst2_kieran_to_horses";
	sLocal_117 = "rdst2_kieran_to_six_point_cabin_01";
	sLocal_118 = "rdst2_kieran_to_hill";
	sLocal_119 = "rdst2_bill_to_enemy";
	sLocal_120 = "rdst2_rsc3_enemy_walk_01";
	vLocal_121 = { -58.91f, 1239.81f, 170.745f };
	vLocal_124 = { 0f, 0f, 25.9f };
	iLocal_127 = 3;
	iLocal_131 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	iLocal_134 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	vLocal_1271 = { 76.85136f, 1163.501f, 187.5447f };
	iLocal_1274 = -1;
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
					if (Var0.f_174 != __LIB_10__::func_698())
					{
					}
					else
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
	__LIB_13__::func_208(uParam0);
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
				__LIB_13__::func_52(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_653(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, func_76(uParam0));
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
		if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
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
		iVar0 = func_93(uParam0);
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
		__LIB_13__::func_841(uParam0, __LIB_0__::func_58(uParam0));
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
		__LIB_11__::func_382(uParam0->f_174, 1);
		__LIB_12__::func_869(uParam0);
		__LIB_5__::func_496(__LIB_0__::func_12(), 0);
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_5__::func_109(uParam0, 0, 1);
			if (__LIB_3__::func_736(uParam0->f_174, 128))
			{
				__LIB_3__::func_735(uParam0->f_174, 128);
			}
		}
		func_122(uParam0);
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
						__LIB_12__::func_883(uParam0, &cVar0, 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
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
			__LIB_13__::func_467();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_9__::func_786(1, 1);
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
		__LIB_0__::func_11(uParam0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	__LIB_11__::func_382(uParam0->f_174, 0);
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
			else if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
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
		__LIB_11__::func_382(uParam0->f_174, 0);
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
	__LIB_1__::func_408(1982676972, 1, 0);
	__LIB_1__::func_408(-2034257789, 0, 0);
	__LIB_12__::func_659(uParam0, 32);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 2f);
	__LIB_13__::func_487(uParam0, 32054);
	__LIB_13__::func_488(uParam0, 32556);
	__LIB_13__::func_264(uParam0, 33229);
	func_195();
	__LIB_12__::func_25(36, 1, 0);
	__LIB_4__::func_228(&uLocal_818);
	__LIB_6__::func_905(&uLocal_818);
	__LIB_9__::func_261(&uLocal_818);
	__LIB_1__::func_396(&uLocal_818, 1);
	__LIB_1__::func_393(&uLocal_818, 0);
	__LIB_1__::func_400(&uLocal_818, 1);
	__LIB_9__::func_714(&uLocal_818, 1);
	__LIB_9__::func_262(&uLocal_818, 1);
	__LIB_1__::func_336(&uLocal_1371, __LIB_0__::func_771(10));
	__LIB_1__::func_336(&uLocal_1371, __LIB_0__::func_771(0));
	__LIB_1__::func_336(&uLocal_1371, __LIB_0__::func_771(3));
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
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_27 };
			Var1.f_3 = fLocal_33;
			break;
		case 1:
			Var1 = { vLocal_55 };
			Var1.f_3 = fLocal_61;
			break;
		case 2:
		case 3:
			Var1 = { vLocal_71 };
			Var1.f_3 = fLocal_77;
			break;
		case 4:
			Var1 = { vLocal_87 };
			Var1.f_3 = fLocal_93;
			break;
		case 5:
		case 6:
		case 7:
			Var1 = { -64.9876f, 1236.563f, 169.7658f };
			Var1.f_3 = 295.766f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_220(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (uParam0->f_177 == 7)
	{
		if (__LIB_0__::func_27(iLocal_1117, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_177))
			{
				if (func_222(Local_177))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_DEAD_BILL", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_156))
			{
				if (func_222(Local_156))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_DEAD_JOHN", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
			{
				if (func_222(iLocal_198))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_DEAD_DUTCH", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_135))
			{
				if (func_222(Local_135))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_DEAD_KIERAN", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 16))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_814))
			{
				if (func_222(iLocal_814))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_MOUNT_DEAD_BILL", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 32))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_813))
			{
				if (func_222(iLocal_813))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_MOUNT_DEAD_JOHN", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 64))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_815))
			{
				if (func_222(iLocal_815))
				{
					StringCopy(&(uParam0->f_2578), "ALLY_DEAD_HORSE_PLAYER", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 256))
		{
			if (!PED::IS_PED_INJURED(iLocal_815))
			{
				if (__LIB_0__::func_27(iLocal_1118, 64))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_815, 1, 1) > (300f / 4f))
					{
						StringCopy(&(uParam0->f_2578), "HORSE_FAIL", 24);
						return true;
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 128))
		{
			if ((!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(Local_177)) && !PED::IS_PED_INJURED(Local_135))
			{
				if (!__LIB_0__::func_27(iLocal_1118, 64))
				{
					if (__LIB_0__::func_27(Local_156.f_8, 268435456))
					{
						if (Local_156.f_18 > __LIB_5__::func_439(__LIB_0__::func_27(iLocal_1118, 33554432), (300f / 8f), (300f / 3f)))
						{
							StringCopy(&(uParam0->f_2578), "GANG_FAIL", 24);
							return true;
						}
					}
					else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
					{
						if (Local_135.f_18 > __LIB_5__::func_439(__LIB_0__::func_27(iLocal_1118, 33554432), (300f / 8f), (300f / 4f)))
						{
							StringCopy(&(uParam0->f_2578), "KIERAN_ABANDON", 24);
							return true;
						}
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 1024))
		{
			if (!__LIB_0__::func_27(iLocal_1118, 134217728))
			{
				if (func_225(5))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), vLocal_15, true) > 180f)
					{
						StringCopy(&(uParam0->f_2578), "GANG_FAIL", 24);
						return true;
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1117, 512))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_1038))
			{
				if (func_225(7))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), -62.84f, 1237.88f, 169.77f, true) > (300f / 3f))
					{
						StringCopy(&(uParam0->f_2578), "RDST2_F_HLB", 24);
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_68(var uParam0)
{
	func_226(uParam0);
	func_227(uParam0);
	switch (iLocal_130)
	{
		case 1:
		case 2:
		case 3:
			POPULATION::_0xF45E46DEECF7DF6E(iLocal_14, 0, 0, -1, -1);
			__LIB_5__::func_521(0.8f);
			break;
		default:
			POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			__LIB_6__::func_357();
			break;
	}
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	if (!__LIB_0__::func_27(iLocal_1118, 8))
	{
		if (func_230(&iLocal_1091))
		{
			if (func_231(&iLocal_1041, &uLocal_1100))
			{
				__LIB_1__::func_683(&iLocal_1118, 8);
			}
		}
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
	if (func_235(uParam0->f_174))
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
		if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
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
	if (__LIB_14__::func_16(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_249(uParam0);
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
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
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
			func_264(uParam0);
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

int func_76(var uParam0)
{
	return uLocal_128;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_289(uParam0))
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
		__LIB_11__::func_382(uParam0->f_174, 0);
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
	func_305(uParam0);
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_308(uParam0, 0, 0);
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
		__LIB_13__::func_841(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_309(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	__LIB_5__::func_547(2);
	return 5;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	if (!__LIB_0__::func_27(iLocal_1118, 8))
	{
		if (func_230(&iLocal_1091))
		{
			if (func_231(&iLocal_1041, &uLocal_1100))
			{
				__LIB_1__::func_683(&iLocal_1118, 8);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1116, 16384))
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
		__LIB_1__::func_683(&iLocal_1116, 16384);
	}
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				func_308(uParam0, 0, 1);
				return 5;
			}
			else if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_315();
				if (!__LIB_0__::func_27(iLocal_1116, 8192))
				{
					if (__LIB_0__::func_27(iLocal_1118, 8))
					{
						func_316(&(iLocal_1041[13]), &uLocal_1026);
						func_316(&(iLocal_1041[14]), &uLocal_1026);
						func_317();
						__LIB_1__::func_683(&iLocal_1116, 8192);
					}
				}
				if ((func_318(&Local_177, 3, vLocal_18.x, vLocal_18.y, vLocal_18.z, fLocal_30, 1) && func_318(&Local_156, 1, vLocal_21.x, vLocal_21.y, vLocal_21.z, fLocal_31, 1)) && func_318(&Local_135, 10, vLocal_24.x, vLocal_24.y, vLocal_24.z, fLocal_32, 1))
				{
					if ((func_319(&iLocal_813, 1, 1, 1, vLocal_37.x, vLocal_37.y, vLocal_37.z, fLocal_44) && func_319(&iLocal_814, 3, 1, 1, vLocal_34.x, vLocal_34.y, vLocal_34.z, fLocal_43)) && func_320(uParam0, &iLocal_815, vLocal_40.x, vLocal_40.y, vLocal_40.z, fLocal_45))
					{
						if ((((((__LIB_0__::func_272(Local_135, 256) && __LIB_0__::func_272(Local_156, 256)) && __LIB_0__::func_272(Local_177, 256)) && __LIB_0__::func_272(iLocal_815, 256)) && __LIB_0__::func_272(iLocal_813, 256)) && __LIB_0__::func_272(iLocal_814, 256)) && __LIB_0__::func_272(Global_35, 256))
						{
							TASK::REQUEST_WAYPOINT_RECORDING(sLocal_116);
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_116))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1379, true, false))
								{
									func_322(uParam0);
									WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_177, vLocal_18, fLocal_30, true, false, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_177, true);
									TASK::TASK_STAND_STILL(Local_177, -1);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_156, vLocal_21, fLocal_31, true, false, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_156, true);
									TASK::TASK_STAND_STILL(Local_156, -1);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_814, vLocal_34, fLocal_43, true, false, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_814, true);
									TASK::TASK_STAND_STILL(iLocal_814, -1);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_813, vLocal_37, fLocal_44, true, false, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_813, true);
									TASK::TASK_STAND_STILL(iLocal_813, -1);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_815, vLocal_40, fLocal_45, true, false, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_815, true);
									TASK::TASK_STAND_STILL(iLocal_815, -1);
									func_323(&Local_135, 1, 0, 0);
									func_323(&Local_177, 1, 0, 0);
									func_323(&Local_156, 1, 0, 0);
									__LIB_0__::func_900(10);
									func_325(0);
									__LIB_0__::func_489(0f, 0f);
									__LIB_2__::func_259(&uLocal_986);
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 100)
			{
				__LIB_0__::func_19(&uLocal_128, 1);
				iLocal_129 = 0;
				iLocal_130 = 0;
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(0, 1);
				return 7;
			}
			return 2;
		case 1:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if ((func_318(&Local_177, 3, vLocal_46.x, vLocal_46.y, vLocal_46.z, fLocal_58, 1) && func_318(&Local_156, 1, vLocal_49.x, vLocal_49.y, vLocal_49.z, fLocal_59, 1)) && func_318(&Local_135, 10, vLocal_52.x, vLocal_52.y, vLocal_52.z, fLocal_60, 1))
				{
					if ((func_319(&iLocal_813, 1, 1, 1, vLocal_49.x, vLocal_49.y, vLocal_49.z, fLocal_59) && func_319(&iLocal_814, 3, 1, 1, vLocal_46.x, vLocal_46.y, vLocal_46.z, fLocal_58)) && func_320(uParam0, &iLocal_815, vLocal_55.x, vLocal_55.y, vLocal_55.z, fLocal_61))
					{
						if ((((((__LIB_0__::func_272(Local_135, 256) && __LIB_0__::func_272(Local_156, 256)) && __LIB_0__::func_272(Local_177, 256)) && __LIB_0__::func_272(iLocal_815, 256)) && __LIB_0__::func_272(iLocal_813, 256)) && __LIB_0__::func_272(iLocal_814, 256)) && __LIB_0__::func_272(Global_35, 256))
						{
							TASK::REQUEST_WAYPOINT_RECORDING(sLocal_117);
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_117))
							{
								func_322(uParam0);
								if (!__LIB_0__::func_394(Local_135, iLocal_813, 0))
								{
									PED::_SET_PED_ON_MOUNT(Local_135, iLocal_813, 0, true);
								}
								if (!__LIB_0__::func_394(Local_156, iLocal_813, 0))
								{
									PED::_SET_PED_ON_MOUNT(Local_156, iLocal_813, -1, true);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_813, vLocal_49, fLocal_59, true, false, true);
								}
								if (!__LIB_0__::func_394(Local_177, iLocal_814, 0))
								{
									PED::_SET_PED_ON_MOUNT(Local_177, iLocal_814, -1, true);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_814, vLocal_46, fLocal_58, true, false, true);
								}
								if (!__LIB_0__::func_394(Global_35, iLocal_815, 0))
								{
									PED::_SET_PED_ON_MOUNT(Global_35, iLocal_815, -1, true);
									WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_815, vLocal_55, fLocal_61, true, false, true);
								}
								func_330();
								func_331(1);
								func_332(1);
								func_333();
								__LIB_0__::func_489(0f, -10f);
								func_323(&Local_156, 4, 1, 2);
								func_323(&Local_177, 4, 1, 0);
								func_323(&Local_135, 4, 1, 8);
								func_334(1);
								__LIB_2__::func_259(&uLocal_986);
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 100)
			{
				__LIB_0__::func_19(&uLocal_128, 2);
				iLocal_129 = 1;
				iLocal_130 = 1;
				__LIB_1__::func_683(&iLocal_1118, 128);
				__LIB_1__::func_683(&iLocal_1118, 67108864);
				__LIB_1__::func_683(&(Local_156.f_8), 16777216);
				__LIB_1__::func_683(&(Local_156.f_8), 8388608);
				__LIB_1__::func_683(&(Local_156.f_8), 268435456);
				__LIB_1__::func_683(&(Local_177.f_8), 16777216);
				__LIB_1__::func_683(&(Local_177.f_8), 8388608);
				__LIB_1__::func_683(&(Local_135.f_8), 16777216);
				__LIB_1__::func_683(&(Local_135.f_8), 8388608);
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_13__::func_105(0, 1);
				return 7;
			}
			return 2;
		case 2:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_335();
				func_336();
				func_337();
				func_338();
				if ((func_318(&Local_156, 1, vLocal_65.x, vLocal_65.y, vLocal_65.z, fLocal_75, 1) && func_318(&Local_177, 3, vLocal_62.x, vLocal_62.y, vLocal_62.z, fLocal_74, 1)) && func_318(&Local_135, 10, vLocal_68.x, vLocal_68.y, vLocal_68.z, fLocal_76, 1))
				{
					if (((__LIB_0__::func_272(Local_135, 256) && __LIB_0__::func_272(Local_156, 256)) && __LIB_0__::func_272(Local_177, 256)) && __LIB_0__::func_272(Global_35, 256))
					{
						if (func_339(uParam0, iVar0, 1, 1, 1, 1, 1, 1))
						{
							if (func_340())
							{
								if (func_341())
								{
									if (((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1377, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1376, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1378)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1378, true, false))
									{
										func_322(uParam0);
										__LIB_4__::func_7(Local_177, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
										__LIB_4__::func_7(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
										__LIB_2__::func_259(&uLocal_986);
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 100)
			{
				iLocal_129 = 3;
				__LIB_0__::func_19(&uLocal_128, 4);
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				func_308(uParam0, 1, 1);
				__LIB_13__::func_105(1, 0);
				return 5;
			}
			return 2;
		case 3:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_335();
				func_336();
				func_343();
				func_337();
				func_338();
				if ((func_318(&Local_156, 1, vLocal_65.x, vLocal_65.y, vLocal_65.z, fLocal_75, 1) && func_318(&Local_177, 3, vLocal_62.x, vLocal_62.y, vLocal_62.z, fLocal_74, 1)) && func_318(&Local_135, 10, vLocal_68.x, vLocal_68.y, vLocal_68.z, fLocal_76, 1))
				{
					if ((func_319(&iLocal_813, 1, 1, 1, vLocal_97.x, vLocal_97.y, vLocal_97.z, fLocal_104) && func_319(&iLocal_814, 3, 1, 1, vLocal_94.x, vLocal_94.y, vLocal_94.z, fLocal_103)) && func_320(uParam0, &iLocal_815, vLocal_100.x, vLocal_100.y, vLocal_100.z, fLocal_105))
					{
						if (((__LIB_0__::func_272(Local_135, 256) && __LIB_0__::func_272(Local_156, 256)) && __LIB_0__::func_272(Local_177, 256)) && __LIB_0__::func_272(Global_35, 256))
						{
							if (func_339(uParam0, iVar0, 1, 1, 1, 1, 1, 1))
							{
								if (func_340())
								{
									PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
									PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_177);
									PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_156);
									PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_135);
									AICOVERPOINT::_0x140B3CB1D424A945(Local_177, joaat("WEAPON_MELEE_KNIFE_BILL"));
									AICOVERPOINT::_0x140B3CB1D424A945(Local_177, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"));
									AICOVERPOINT::_0x140B3CB1D424A945(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
									if (func_341())
									{
										if (((PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Global_35) && PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Local_177)) && PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Local_156)) && PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Local_135))
										{
											if (((((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1377, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1375)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1375, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1376, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1378)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1378, true, false))
											{
												func_322(uParam0);
												__LIB_4__::func_7(Local_177, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
												__LIB_4__::func_7(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
												func_344(0);
												func_345(0);
												func_346();
												__LIB_0__::func_489(20f, -20f);
												func_323(&Local_177, 11, 0, 0);
												func_323(&Local_156, 8, 0, 0);
												func_323(&Local_135, 8, 0, 0);
												WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
												__LIB_2__::func_259(&uLocal_986);
											}
											else
											{
												return 2;
											}
										}
										else
										{
											return 2;
										}
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 1250)
			{
				__LIB_9__::func_603(36);
				__LIB_0__::func_19(&uLocal_128, 5);
				iLocal_129 = 3;
				iLocal_130 = 2;
				__LIB_1__::func_683(&iLocal_1121, 536870912);
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_13__::func_105(0, 1);
				__LIB_0__::func_489(20f, -20f);
				return 7;
			}
			return 2;
		case 4:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_348();
				WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), -1, 0);
				WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), -1, 0);
				func_335();
				func_336();
				func_338();
				if ((func_318(&Local_177, 3, vLocal_78.x, vLocal_78.y, vLocal_78.z, fLocal_90, 1) && func_318(&Local_156, 1, vLocal_81.x, vLocal_81.y, vLocal_81.z, fLocal_91, 1)) && func_318(&Local_135, 10, vLocal_84.x, vLocal_84.y, vLocal_84.z, fLocal_92, 1))
				{
					if ((func_319(&iLocal_813, 1, 1, 1, vLocal_97.x, vLocal_97.y, vLocal_97.z, fLocal_104) && func_319(&iLocal_814, 3, 1, 1, vLocal_94.x, vLocal_94.y, vLocal_94.z, fLocal_103)) && func_320(uParam0, &iLocal_815, vLocal_100.x, vLocal_100.y, vLocal_100.z, fLocal_105))
					{
						if (((__LIB_0__::func_272(Local_135, 256) && __LIB_0__::func_272(Local_156, 256)) && __LIB_0__::func_272(Local_177, 256)) && __LIB_0__::func_272(Global_35, 256))
						{
							if (func_339(uParam0, iVar0, 0, 0, 1, 1, 1, 1))
							{
								if (func_340())
								{
									if (func_341())
									{
										if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1377, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1378)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1378, true, false))
										{
											func_322(uParam0);
											__LIB_4__::func_7(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
											__LIB_4__::func_7(Local_177, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135, true);
											TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_135, Local_851[13 /*5*/], -1, 0, 0f, 0, 0, Local_851[13 /*5*/].f_4, 0, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_156, true);
											TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_156, Local_851[15 /*5*/], -1, 0, 0f, 0, 0, Local_851[15 /*5*/].f_4, 0, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_177, true);
											TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_177, Local_851[16 /*5*/], -1, 0, 0f, 1, 1, Local_851[16 /*5*/].f_4, 0, 0, 0);
											TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, Local_851[17 /*5*/], -1, 0, 0f, 1, 0, Local_851[17 /*5*/].f_4, 0, 0, 0);
											func_323(&Local_156, 11, 1, 5);
											func_323(&Local_177, 11, 1, 5);
											func_323(&Local_135, 11, 0, 7);
											func_349();
											func_350();
											__LIB_2__::func_259(&uLocal_986);
										}
										else
										{
											return 2;
										}
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 500)
			{
				__LIB_9__::func_603(36);
				__LIB_0__::func_19(&uLocal_128, 8);
				AUDIO::TRIGGER_MUSIC_EVENT("RDST21_GUARDS_RESTART");
				iLocal_129 = 3;
				iLocal_130 = 2;
				__LIB_1__::func_683(&iLocal_1121, 536870912);
				__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
				__LIB_0__::func_489(87.5f, -22.5f);
				__LIB_13__::func_105(0, 1);
				return 7;
			}
			return 2;
		case 5:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if ((func_318(&Local_177, 3, vLocal_78.x, vLocal_78.y, vLocal_78.z, fLocal_90, 1) && func_318(&Local_156, 1, vLocal_81.x, vLocal_81.y, vLocal_81.z, fLocal_91, 1)) && func_318(&Local_135, 10, vLocal_84.x, vLocal_84.y, vLocal_84.z, fLocal_92, 1))
				{
					if (func_351(&iLocal_219, joaat("G_M_M_UNIDUSTER_05"), -65.7344f, 1238.17f, 169.7831f, 266.1227f, joaat("REL_PLAYER_ENEMY"), 1, 1, 0, -2, 1, joaat("WEAPON_UNARMED"), -662009659))
					{
						if ((((__LIB_0__::func_272(iLocal_219, 256) && __LIB_0__::func_272(Local_135, 256)) && __LIB_0__::func_272(Local_156, 256)) && __LIB_0__::func_272(Local_177, 256)) && __LIB_0__::func_272(Global_35, 256))
						{
							if (func_340())
							{
								func_322(uParam0);
								__LIB_2__::func_259(&uLocal_986);
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 100)
			{
				func_308(uParam0, 2, 0);
				__LIB_12__::func_997(uParam0, func_61(6), func_61(7), 6, 7, 0);
				__LIB_13__::func_105(1, 0);
				return 5;
			}
			return 2;
		case 6:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (__LIB_0__::func_272(Global_35, 256))
				{
					if (func_340())
					{
						if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35)))
						{
							func_322(uParam0);
							if (!PED::IS_PED_INJURED(Global_35))
							{
								WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
							}
							__LIB_1__::func_948(joaat("DOOR_SIX_CABIN_FRONT"), 0, -1f, 1, 0, 0, 1, 0);
							__LIB_2__::func_259(&uLocal_986);
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 100)
			{
				iLocal_129 = 0;
				iLocal_130 = 3;
				__LIB_12__::func_997(uParam0, func_61(6), func_61(7), 6, 7, 0);
				__LIB_13__::func_105(0, 1);
				return 7;
			}
			return 2;
		case 7:
			if (!__LIB_0__::func_899(&uLocal_986))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_320(uParam0, &iLocal_815, -77.3827f, 1234.516f, 167.7726f, 287.6414f))
				{
					if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(iLocal_815, 256))
					{
						if (func_340())
						{
							if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35)))
							{
								func_322(uParam0);
								__LIB_1__::func_948(joaat("DOOR_SIX_CABIN_FRONT"), 0, -1f, 1, 0, 0, 1, 0);
								__LIB_2__::func_259(&uLocal_986);
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_9__::func_401(&uLocal_986) >= 100)
			{
				__LIB_1__::func_683(&iLocal_1118, 268435456);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1032))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1032);
				}
				__LIB_13__::func_105(1, 1);
				return 8;
			}
			return 2;
		default:
			break;
	}
	return 2;
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
		__LIB_13__::func_841(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		func_357(uParam0);
		if (!func_358(uParam0))
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_364(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_127)
	{
		case 0:
			__LIB_0__::func_19(&uLocal_128, 1);
			__LIB_8__::func_863(&iLocal_1028, 0, 1, 1);
			__LIB_9__::func_203(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1380);
			}
			func_322(uParam0);
			func_370();
			__LIB_4__::func_253(joaat("CSTAG_FLOW_DST2_ACTIVE"), 1017034651, -469960592, -1, 1, 1, 0);
			if (!PED::IS_PED_INJURED(Local_156))
			{
				PED::SET_PED_CONFIG_FLAG(Local_156, 130, true);
				PED::SET_PED_CONFIG_FLAG(Local_156, 315, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_156, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_156, 24592);
			}
			if (!PED::IS_PED_INJURED(Local_177))
			{
				PED::SET_PED_CONFIG_FLAG(Local_177, 130, true);
				PED::SET_PED_CONFIG_FLAG(Local_177, 315, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_177, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_177, 24592);
			}
			if (!PED::IS_PED_INJURED(Local_135))
			{
				PED::SET_PED_CONFIG_FLAG(Local_135, 130, true);
				PED::SET_PED_CONFIG_FLAG(Local_135, 315, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_135, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_135, 24592);
			}
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			return 7;
		case 1:
			__LIB_9__::func_603(36);
			if (!PED::IS_PED_INJURED(iLocal_813))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_813, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_813, vLocal_97, fLocal_104, true, false, true);
				TASK::TASK_STAND_STILL(iLocal_813, -1);
			}
			if (!PED::IS_PED_INJURED(iLocal_814))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_814, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_814, vLocal_94, fLocal_103, true, false, true);
				TASK::TASK_STAND_STILL(iLocal_814, -1);
			}
			if (!PED::IS_PED_INJURED(iLocal_815))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_815, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_815, vLocal_100, fLocal_105, true, false, true);
				TASK::TASK_STAND_STILL(iLocal_815, -1);
			}
			__LIB_0__::func_745(10);
			func_323(&Local_177, 11, 0, 0);
			func_323(&Local_156, 8, 0, 0);
			func_323(&Local_135, 8, 0, 0);
			__LIB_1__::func_683(&iLocal_1121, 536870912);
			iLocal_130 = 2;
			return 7;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_135))
			{
				__LIB_9__::func_203(10, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_177))
			{
				__LIB_9__::func_203(3, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_156))
			{
				__LIB_9__::func_203(1, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			__LIB_1__::func_463(iLocal_814, 3, 1, 0, 1);
			__LIB_1__::func_463(iLocal_813, 1, 1, 0, 1);
			__LIB_1__::func_561(&uLocal_989);
			__LIB_1__::func_561(&uLocal_1001);
			func_374(8, 0);
			__LIB_1__::func_681(&iLocal_1118, 2);
			__LIB_1__::func_681(&iLocal_1118, 4);
			iLocal_130 = 3;
			return 7;
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
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	func_378(uParam0);
	switch (iLocal_130)
	{
		case 0:
			if (func_379(uParam0, &iLocal_132))
			{
				func_380();
				iLocal_129 = 1;
				iLocal_130 = 1;
			}
			break;
		case 1:
			if (func_381(uParam0, &iLocal_132))
			{
				func_380();
				return 5;
			}
			break;
		case 2:
			if (func_382(uParam0, &iLocal_132))
			{
				func_380();
				return 5;
			}
			break;
		case 3:
			if (func_383(uParam0, &iLocal_132))
			{
				return 8;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	__LIB_2__::func_145(iLocal_815, 0);
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
	__LIB_13__::func_576(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_13__::func_8(Global_1347702[iParam0 /*49*/].f_35);
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
		__LIB_12__::func_931();
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
		func_420(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_421(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_448();
		if (__LIB_0__::func_27(iLocal_1122, 32))
		{
			return true;
		}
		if (!__LIB_1__::func_205(Global_35, iLocal_1041[17], 1, 0) && !__LIB_0__::func_266(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_1041[17]), 100f, 1, 1))
		{
			return true;
		}
		if (__LIB_0__::func_27(iLocal_1118, 268435456))
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iLocal_198))
	{
		__LIB_9__::func_203(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_177))
	{
		if (__LIB_0__::func_866(3, 0))
		{
			__LIB_1__::func_640(3);
		}
		__LIB_8__::func_771(Local_177, 0, 1, 0);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_177, "Stealth", 0f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_177, "Cautious", 0f, -1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_177, true);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_177, 24592);
		__LIB_9__::func_203(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_156))
	{
		if (__LIB_0__::func_866(1, 0))
		{
			__LIB_1__::func_640(1);
		}
		__LIB_8__::func_771(Local_156, 0, 1, 0);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_156, "Stealth", 0f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_156, "Cautious", 0f, -1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_156, true);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_156, 24592);
		__LIB_9__::func_203(1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_135))
	{
		if (__LIB_0__::func_866(10, 0))
		{
			__LIB_1__::func_640(10);
		}
		__LIB_8__::func_771(Local_135, 0, 1, 0);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_135, "Stealth", 0f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_135, "Cautious", 0f, -1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_135, true);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_135, 24592);
		__LIB_9__::func_203(10, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdst21_icmp_kieran_wnt");
	}
	func_370();
	func_454();
	__LIB_1__::func_449(joaat("CSTAG_FLOW_DST2_ACTIVE"), 1, 0);
	__LIB_1__::func_724(256);
	iVar1 = __LIB_12__::func_644(uParam0);
	if (iVar1 == 0)
	{
		__LIB_13__::func_513(60f);
		__LIB_12__::func_25(36, 0, 0);
		func_458(36, 0, 0);
		__LIB_0__::func_915(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
	}
	if (iVar1 >= 2 && iVar1 <= 13)
	{
		__LIB_12__::func_25(36, 0, 0);
	}
	__LIB_2__::func_145(iLocal_815, 0);
	__LIB_1__::func_463(iLocal_813, 1, 1, 0, 0);
	__LIB_1__::func_463(iLocal_814, 3, 1, 0, 0);
	__LIB_0__::func_745(10);
	__LIB_0__::func_490(&iLocal_219, 1);
	func_461(&Local_326, 1, 1);
	func_461(&Local_538, 1, 1);
	func_461(&Local_453, 1, 1);
	func_461(&Local_240, 1, 1);
	func_461(&Local_304, 1, 1);
	func_461(&Local_602, 1, 1);
	func_462(&iLocal_817, 1);
	__LIB_0__::func_490(&iLocal_771, 1);
	iVar0 = 0;
	while (iVar0 < iLocal_1029)
	{
		__LIB_8__::func_863(&(iLocal_1029[iVar0]), 1, 1, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1033)
	{
		__LIB_8__::func_863(&(iLocal_1033[iVar0]), 1, 1, 1);
		iVar0++;
	}
	__LIB_13__::func_520(&iLocal_847);
	if (PED::DOES_GROUP_EXIST(iLocal_1040))
	{
		PED::REMOVE_GROUP(iLocal_1040);
	}
	__LIB_0__::func_325(&iLocal_1038);
	func_464();
	func_465();
	STREAMING::_REMOVE_IMAP(1190000937);
	STREAMING::_REMOVE_IMAP(1274066881);
	if (PATHFIND::_0x5AC0944C156E5F44("nav_dusters21"))
	{
		PATHFIND::_0x527B97C203BB8606("nav_dusters21");
	}
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(MISC::GET_HASH_KEY("vegmods_six01_rc_odriscolls")))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(MISC::GET_HASH_KEY("vegmods_six01_rc_odriscolls"));
	}
	__LIB_0__::func_121(941, 32);
	__LIB_0__::func_121(943, 32);
	__LIB_0__::func_121(944, 32);
	__LIB_0__::func_121(942, 32);
	__LIB_5__::func_547(2);
	__LIB_1__::func_721(7);
	__LIB_1__::func_978(1);
	MAP::ALLOW_SONAR_BLIPS(false);
	func_468(uParam0);
}

int func_189(var uParam0)
{
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC_1"))
	{
		if ((((((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_813)) && !PED::IS_PED_INJURED(iLocal_814)) && !PED::IS_PED_INJURED(iLocal_815)) && !PED::IS_PED_INJURED(Local_177)) && !PED::IS_PED_INJURED(Local_156)) && !PED::IS_PED_INJURED(Local_135))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_116);
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_116))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1379, true, false))
				{
					return 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_814))
		{
			func_319(&iLocal_814, 3, 1, 1, vLocal_34.x, vLocal_34.y, vLocal_34.z, fLocal_43);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_813))
		{
			func_319(&iLocal_813, 1, 1, 1, vLocal_37.x, vLocal_37.y, vLocal_37.z, fLocal_44);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_815))
		{
			func_320(uParam0, &iLocal_815, vLocal_40.x, vLocal_40.y, vLocal_40.z, fLocal_45);
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC3"))
	{
		if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_177)) && !PED::IS_PED_INJURED(Local_156)) && !PED::IS_PED_INJURED(Local_135))
		{
			func_335();
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_177);
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_156);
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_135);
			if (func_341())
			{
				if (((PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Global_35) && PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Local_177)) && PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Local_156)) && PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Local_135))
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC2"))
	{
		return 1;
	}
	return 0;
}

int func_191(var uParam0)
{
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC_1"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		}
		__LIB_0__::func_707(3, 0, 0, 0);
		__LIB_0__::func_707(0, 0, 0, 0);
		__LIB_0__::func_707(10, 0, 0, 0);
		__LIB_12__::func_891(&(uParam0->f_206), iLocal_198, "DUTCH", 0, 0, 0);
		__LIB_12__::func_891(&(uParam0->f_206), Local_177, "BILLWILLIAMSON", 0, 0, 0);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[3]) && VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[5]))
		{
			func_499(&(iLocal_1041[3]), uLocal_1371);
			func_499(&(iLocal_1041[5]), uLocal_1371);
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC3"))
	{
		__LIB_1__::func_726(Local_135, 1);
		__LIB_1__::func_727(Global_35, 1);
		__LIB_5__::func_438(&uLocal_970);
		func_503(&(uParam0->f_206), Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 0, "w_revolver_cattleman01", 1);
		func_503(&(uParam0->f_206), Local_177, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), 0, "w_revolver_schofield01", 1);
		func_503(&(uParam0->f_206), Local_240[2 /*21*/], joaat("WEAPON_REPEATER_CARBINE"), 0, "w_repeater_carbine01", 1);
		if (!PED::IS_PED_INJURED(Local_156))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_156, "Stealth", 0f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_156, "Cautious", 0f, -1);
		}
		if (!PED::IS_PED_INJURED(Local_177))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_177, "Stealth", 0f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_177, "Cautious", 0f, -1);
		}
		if (!PED::IS_PED_INJURED(Local_135))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_135, "Stealth", 0f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_135, "Cautious", 0f, -1);
		}
		__LIB_1__::func_681(&(Local_156.f_8), -2147483648);
		__LIB_1__::func_681(&(Local_156.f_8), 1073741824 /* Float: 2f */);
		__LIB_1__::func_681(&(Local_177.f_8), -2147483648);
		__LIB_1__::func_681(&(Local_177.f_8), 1073741824 /* Float: 2f */);
		__LIB_1__::func_681(&(Local_135.f_8), -2147483648);
		__LIB_1__::func_681(&(Local_135.f_8), 1073741824 /* Float: 2f */);
		func_323(&(Local_326[5 /*21*/]), 19, 0, 0);
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC2"))
	{
		if (!PED::IS_PED_INJURED(Local_135))
		{
			TASK::CLEAR_PED_TASKS(Local_135, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_135, vLocal_84, fLocal_92, true, false, true);
		}
		if (!PED::IS_PED_INJURED(Local_177))
		{
			TASK::CLEAR_PED_TASKS(Local_177, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_177, true);
			WEAPON::_HIDE_PED_WEAPONS(Local_177, 2, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_177, vLocal_78, fLocal_90, true, false, true);
		}
		if (!PED::IS_PED_INJURED(Local_156))
		{
			TASK::CLEAR_PED_TASKS(Local_156, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_156, true);
			WEAPON::_HIDE_PED_WEAPONS(Local_156, 2, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_156, vLocal_81, fLocal_91, true, false, true);
		}
		__LIB_0__::func_19(&uLocal_128, 11);
		__LIB_1__::func_206(-67.2138f, 1235.34f, 169.8096f, 2f, 2);
		__LIB_1__::func_681(&iLocal_1118, 16);
	}
	return 1;
}

int func_193(var uParam0)
{
	int iVar0;
	struct<27> Var1;
	int iVar39;
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC_1"))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1380);
		}
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379))
		{
			func_315();
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_116);
		}
		if (!__LIB_0__::func_27(iLocal_1116, 16384))
		{
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			__LIB_1__::func_683(&iLocal_1116, 16384);
		}
		if (!__LIB_0__::func_27(iLocal_1116, 2048))
		{
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_815))
			{
				func_505(Global_35, joaat("WEAPON_BOW"), 0, 12, iLocal_815, 1, 1);
				func_505(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"), 0, 12, iLocal_815, 1, 0);
				__LIB_1__::func_683(&iLocal_1116, 2048);
			}
		}
		if (!__LIB_0__::func_27(iLocal_1116, 4096))
		{
			if (((VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[6]) && VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[7])) && VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[3])) && VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[5]))
			{
				if (PATHFIND::_0x19C7567D2F2287D6(iLocal_1041[7], 7))
				{
					PATHFIND::_0xE5EF9DE716FF737E(iLocal_1041[7], 0, 1);
				}
				if (PATHFIND::_0x19C7567D2F2287D6(iLocal_1041[3], 7))
				{
					PATHFIND::_0xE5EF9DE716FF737E(iLocal_1041[3], 0, 1);
				}
				__LIB_10__::func_957();
				__LIB_1__::func_683(&iLocal_1116, 4096);
			}
		}
		if (!__LIB_0__::func_27(iLocal_1116, 8192))
		{
			if (__LIB_0__::func_27(iLocal_1118, 8))
			{
				func_316(&(iLocal_1041[13]), &uLocal_1026);
				func_316(&(iLocal_1041[14]), &uLocal_1026);
				func_317();
				__LIB_1__::func_683(&iLocal_1116, 8192);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_156))
		{
			func_318(&Local_156, 1, vLocal_21.x, vLocal_21.y, vLocal_21.z, fLocal_31, 1);
		}
		if (__LIB_0__::func_27(iLocal_1116, 8192))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_814))
			{
				func_319(&iLocal_814, 3, 1, 1, vLocal_34.x, vLocal_34.y, vLocal_34.z, fLocal_43);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_813))
			{
				func_319(&iLocal_813, 1, 1, 1, vLocal_37.x, vLocal_37.y, vLocal_37.z, fLocal_44);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_815))
			{
				func_320(uParam0, &iLocal_815, vLocal_40.x, vLocal_40.y, vLocal_40.z, fLocal_45);
			}
			if (!__LIB_0__::func_27(iLocal_1116, 1048576))
			{
				if (func_507(&(iLocal_1041[3]), uLocal_1371) || func_507(&(iLocal_1041[5]), uLocal_1371))
				{
					if (__LIB_13__::func_499(0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_1116, 1048576);
					}
				}
				else
				{
					__LIB_1__::func_683(&iLocal_1116, 1048576);
				}
			}
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1.f_4 = 1065353216;
				Var1.f_5 = 1065353216;
				Var1.f_9 = 1065353216;
				Var1.f_10 = 1065353216;
				Var1.f_14 = 1065353216;
				Var1.f_15 = 1065353216;
				Var1.f_17 = 1040187392;
				Var1.f_18 = 1040187392;
				Var1.f_19 = -1;
				Var1.f_26 = -1082130432;
				__LIB_3__::func_898(Global_35, Local_135, &Var1, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 4500, 257.3237f, false, false);
			}
		}
		if (Local_135.f_3 == 1)
		{
			__LIB_9__::func_397(&uLocal_970, Local_135);
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Local_135, "KIERAN", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_135))
			{
				func_325(1);
				PED::FORCE_PED_MOTION_STATE(Local_135, joaat("MOTIONSTATE_WALK"), false, 1, false);
				__LIB_0__::func_900(10);
				func_323(&Local_135, 1, 0, 0);
			}
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Local_177, "BILLWILLIAMSON", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_177))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_177, vLocal_18, fLocal_30, true, false, true);
				WEAPON::_HIDE_PED_WEAPONS(Local_177, 2, true);
				func_323(&Local_177, 1, 0, 0);
				__LIB_0__::func_904(3, 1);
			}
			if (!PED::IS_PED_INJURED(Local_156))
			{
				WEAPON::_HIDE_PED_WEAPONS(Local_156, 2, true);
				func_323(&Local_156, 1, 0, 0);
				__LIB_0__::func_904(1, 1);
			}
		}
		if (__LIB_13__::func_14(&(uParam0->f_206), 1))
		{
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC3"))
	{
		WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REPEATER_CARBINE"), -1, 0);
		func_335();
		func_343();
		if (!PED::IS_PED_INJURED(Global_35))
		{
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
		}
		if (!PED::IS_PED_INJURED(Local_177))
		{
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_177);
			AICOVERPOINT::_0x140B3CB1D424A945(Local_177, joaat("WEAPON_MELEE_KNIFE_BILL"));
			AICOVERPOINT::_0x140B3CB1D424A945(Local_177, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"));
		}
		if (!PED::IS_PED_INJURED(Local_156))
		{
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_156);
			AICOVERPOINT::_0x140B3CB1D424A945(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		}
		if (!PED::IS_PED_INJURED(Local_135))
		{
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_135);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_240[0 /*21*/]))
		{
			Local_240[0 /*21*/] = __LIB_13__::func_225(&(uParam0->f_206), "G_M_M_UNIDUSTER_05", 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_240[0 /*21*/]))
			{
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_240[1 /*21*/]))
		{
			Local_240[1 /*21*/] = __LIB_13__::func_225(&(uParam0->f_206), "G_M_M_UNIDUSTER_05^1", 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_240[1 /*21*/]))
			{
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_240[2 /*21*/]))
		{
			Local_240[2 /*21*/] = __LIB_13__::func_225(&(uParam0->f_206), "G_M_M_UNIDUSTER_05^2", 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_240[2 /*21*/]))
			{
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_177, "BillWilliamson", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_177))
			{
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_156, "JohnMarston", 0, 1, 1))
		{
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_135, "KIERAN", 0, 1, 1))
		{
			func_346();
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_240[0 /*21*/], "G_M_M_UNIDUSTER_05", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[12]))
				{
					if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_PEE"), false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_240[0 /*21*/], false);
						TASK::_TASK_USE_SCENARIO_POINT(Local_240[0 /*21*/], iLocal_1073[12], 0, 0, false, true, 0, false, -1f, false);
					}
				}
				func_323(&(Local_240[0 /*21*/]), 16, 0, -1);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_240[1 /*21*/], "G_M_M_UNIDUSTER_05^1", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[11]))
				{
					if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BADASS"), false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_240[1 /*21*/], true);
						TASK::_TASK_USE_SCENARIO_POINT(Local_240[1 /*21*/], iLocal_1073[11], 0, 0, false, true, 0, false, -1f, false);
					}
				}
				func_323(&(Local_240[1 /*21*/]), 17, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_240[2 /*21*/], "G_M_M_UNIDUSTER_05^2", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[7]))
				{
					if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
					{
						PED::SET_PED_CONFIG_FLAG(Local_240[2 /*21*/], 143, true);
						PED::SET_PED_CONFIG_FLAG(Local_240[2 /*21*/], 250, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_240[2 /*21*/], true);
						TASK::_TASK_USE_SCENARIO_POINT(Local_240[2 /*21*/], iLocal_1073[7], 0, 0, false, true, 0, false, -1f, false);
					}
				}
				func_323(&(Local_240[2 /*21*/]), 17, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_326[5 /*21*/]))
			{
				func_323(&(Local_326[5 /*21*/]), 18, 0, 0);
			}
		}
		if (__LIB_13__::func_14(&(uParam0->f_206), 1))
		{
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_206.f_348))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_120);
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC2"))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_206.f_348, "RDST2_RSC2_P3_T03_Shot_1_790-3380", 1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1377);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1378))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1378);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1376);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1372))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1372);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1374))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1374);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1373))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1373);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1375))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1375);
		}
		if (!__LIB_0__::func_27(iLocal_1118, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_240)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_240[iVar0 /*21*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_240[iVar0 /*21*/], iLocal_1041[27], false, 0))
					{
						__LIB_0__::func_490(&(Local_240[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_304)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_304[iVar0 /*21*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_304[iVar0 /*21*/], iLocal_1041[27], false, 0))
					{
						__LIB_0__::func_490(&(Local_304[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_326)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_326[iVar0 /*21*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_326[iVar0 /*21*/], iLocal_1041[27], false, 0))
					{
						__LIB_0__::func_490(&(Local_326[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_453)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_453[iVar0 /*21*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_453[iVar0 /*21*/], iLocal_1041[27], false, 0))
					{
						__LIB_0__::func_490(&(Local_453[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_538)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_538[iVar0 /*21*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_538[iVar0 /*21*/], iLocal_1041[27], false, 0))
					{
						__LIB_0__::func_490(&(Local_538[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_602)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_602[iVar0 /*21*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_602[iVar0 /*21*/], iLocal_1041[27], false, 0))
					{
						__LIB_0__::func_490(&(Local_602[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			__LIB_1__::func_683(&iLocal_1118, 32);
		}
		if (!__LIB_0__::func_27(iLocal_1118, 16))
		{
			iVar39 = PED::_GET_LAST_MOUNT(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar39) && !ENTITY::IS_ENTITY_DEAD(iVar39))
			{
				if ((__LIB_1__::func_205(iVar39, iLocal_1041[27], 1, 0) || __LIB_1__::func_205(iVar39, iLocal_1041[21], 1, 0)) || __LIB_1__::func_205(iVar39, iLocal_1041[20], 1, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar39, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar39, vLocal_106, fLocal_109, true, false, true);
					ENTITY::_0x9587913B9E772D29(iVar39, 0);
					POPULATION::_0xF74E134F40192884(iVar39, 2);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar39, 48, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar39, 512, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar39, 16384, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar39, true);
					TASK::TASK_STAND_STILL(iVar39, -1);
				}
			}
			__LIB_1__::func_683(&iLocal_1118, 16);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_219))
		{
			iLocal_219 = __LIB_13__::func_225(&(uParam0->f_206), "G_M_M_UNIDUSTER_05", 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_219) && !ENTITY::IS_ENTITY_DEAD(iLocal_219))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_219, joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_CONFIG_FLAG(iLocal_219, 233, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_219, 6, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_219, 148, true);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_219, "G_M_M_UNIDUSTER_05", 0, 0, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_219))
			{
			}
			if (!__LIB_0__::func_27(iLocal_1118, 2048))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(iLocal_1027))
				{
					iLocal_1027 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REPEATER_CARBINE"), vLocal_110, vLocal_113, 0, -1, 2, true, 0, 0, 0f, 0);
					__LIB_1__::func_683(&iLocal_1118, 2048);
				}
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_135, "KIERAN", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_135))
			{
				__LIB_9__::func_203(10, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_156, "JOHNMARSTON", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_156))
			{
				__LIB_9__::func_203(1, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_177, "BILLWILLIAMSON", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_177))
			{
				__LIB_9__::func_203(3, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_14(&(uParam0->f_206), 1))
		{
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_206.f_348, false))
		{
			__LIB_3__::func_124(joaat("DOOR_SIX_CABIN_FRONT"), 1);
		}
	}
	return 1;
}

void func_195()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[0]))
	{
		iLocal_1041[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-138.7684f, -15.10952f, 96.20078f, 0f, 0f, -9.999995f, 12f, 6f, 3f, "RDST2_VOLUME_INTRO_CUTSCENE_KIERAN_REACTION_BOX_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[1]))
	{
		iLocal_1041[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-138.2428f, -12.15118f, 96.2f, 0f, 0f, -39.99999f, 6f, 6f, 1.5f, "RDST2_VOLUME_INTRO_CUTSCENE_KIERAN_REACTION_CYLINDER_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[2]))
	{
		iLocal_1041[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-138.71f, -12.59f, 96f, 0f, 0f, 0f, 8f, 8f, 6f, "RDST2_VOLUME_INTRO_CUTSCENE_SCENARIO_BLOCKING_AREA");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[3]))
	{
		iLocal_1041[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-138.9286f, -16.88293f, 96.99093f, 0f, 0f, -27f, 7f, 3f, 4f, "RDST2_VOLUME_INTRO_CUTSCENE_SCENARIO_BLOCKING_AREA_2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[4]))
	{
		iLocal_1041[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-138.1235f, -26.16341f, 95.54397f, 0f, 0f, -25f, 1f, 1f, 1f, "RDST2_VOLUME_INTRO_CUTSCENE_SCENARIO_BLOCKING_AREA_3");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[5]))
	{
		iLocal_1041[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-144.0472f, -15.08005f, 96.48812f, 0f, 0f, -56f, 4f, 6f, 5f, "RDST2_VOLUME_INTRO_CUTSCENE_SCENARIO_BLOCKING_AREA_4");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[6]))
	{
		iLocal_1041[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-138.1377f, -12.23094f, 96f, 0f, 0f, 0f, 2f, 2f, 2f, "RDST2_VOLUME_INTRO_CUTSCENE_NAVMESH_BLOCKING_AREA");
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_1041[6], 7))
		{
			PATHFIND::_0xE5EF9DE716FF737E(iLocal_1041[6], 0, 1);
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[7]))
	{
		iLocal_1041[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-139.4325f, -13.58323f, 96.00117f, 0f, 0f, -40.99999f, 0.25f, 8f, 2f, "RDST2_VOLUME_INTRO_CUTSCENE_NAVMESH_BLOCKING_AREA_2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[8]))
	{
		iLocal_1041[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-140.2547f, -14.64116f, 95.5f, 0f, 0f, -61.5f, 1f, 2f, 1f, "RDST2_VOLUME_INTRO_CUTSCENE_INITIAL_SCENE");
		if (!PED::_0x91A5F9CBEBB9D936(iLocal_1091[0]))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[8]))
			{
				iLocal_1091[0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[8], 0, 15);
			}
		}
	}
}

int func_220(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_9__::func_786(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_551(0, 0);
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

bool func_222(int iParam0)
{
	if (((((((ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0)) || TASK::IS_PED_IN_WRITHE(iParam0)) || PED::IS_PED_DEAD_OR_DYING(iParam0, true)) || PED::IS_PED_FATALLY_INJURED(iParam0)) || (FIRE::IS_ENTITY_ON_FIRE(iParam0) && PED::IS_PED_RAGDOLL(iParam0))) || (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_THROWN_MOLOTOV"), 0) && PED::IS_PED_RAGDOLL(iParam0))) || (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), 0) && PED::IS_PED_RAGDOLL(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0)
{
	return iLocal_1130[iParam0];
}

void func_226(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_1118, -2147483648))
	{
		__LIB_9__::func_827(17, 30, 0, 0);
	}
	if (__LIB_0__::func_27(iLocal_1118, 536870912))
	{
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iLocal_957), __LIB_0__::func_42(iLocal_957), __LIB_0__::func_43(iLocal_957));
	}
	if (__LIB_0__::func_27(iLocal_1118, 1073741824 /* Float: 2f */))
	{
		if ((__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC_1") && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false))
		{
			CLOCK::SET_CLOCK_TIME(4, 0, 0);
			__LIB_1__::func_681(&iLocal_1118, 1073741824 /* Float: 2f */);
			__LIB_1__::func_683(&iLocal_1118, -2147483648);
		}
	}
}

void func_227(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_129)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, vLocal_15, 250f, 1, 1))
			{
				iLocal_129 = 2;
			}
			break;
		case 2:
			func_338();
			func_336();
			func_337();
			if (func_340())
			{
				iVar1 = 1;
			}
			if (((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1376, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1377, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1378)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1378, true, false))
			{
				iVar2 = 1;
			}
			if ((func_339(uParam0, 1, 1, 1, 1, 1, 1, 0) && iVar1 == 1) && iVar2 == 1)
			{
				iVar0 = 0;
				while (iVar0 < Local_240)
				{
					if (!PED::IS_PED_INJURED(Local_240[iVar0 /*21*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_240[iVar0 /*21*/], true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_240[iVar0 /*21*/], VOLUME::_GET_VOLUME_COORDS(iLocal_1041[16]), 0f, true, false, true);
					}
					iVar0++;
				}
				iLocal_129 = 3;
			}
			break;
		case 3:
			iLocal_133 = func_559(__LIB_0__::func_27(iLocal_1121, 65536));
			if (!__LIB_0__::func_27(iLocal_1121, 65536))
			{
				if (func_560(uParam0, iLocal_133))
				{
					iLocal_133 = func_559(__LIB_0__::func_27(iLocal_1121, 65536));
				}
			}
			if (!__LIB_0__::func_27(iLocal_1121, -2147483648))
			{
				if (__LIB_0__::func_27(iLocal_1121, 32768) && __LIB_0__::func_27(iLocal_1121, 65536))
				{
					if (iLocal_133 <= 2)
					{
						iVar0 = 0;
						while (iVar0 < Local_240)
						{
							if (!PED::IS_PED_INJURED(Local_240[iVar0 /*21*/]) && Local_240[iVar0 /*21*/].f_3 != 21)
							{
								func_323(&(Local_240[iVar0 /*21*/]), 21, 0, 0);
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < Local_304)
						{
							if (!PED::IS_PED_INJURED(Local_304[iVar0 /*21*/]) && Local_304[iVar0 /*21*/].f_3 != 21)
							{
								func_323(&(Local_304[iVar0 /*21*/]), 21, 0, 0);
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < Local_326)
						{
							if (!PED::IS_PED_INJURED(Local_326[iVar0 /*21*/]) && Local_326[iVar0 /*21*/].f_3 != 21)
							{
								func_323(&(Local_326[iVar0 /*21*/]), 21, 0, 0);
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < Local_453)
						{
							if (!PED::IS_PED_INJURED(Local_453[iVar0 /*21*/]) && Local_453[iVar0 /*21*/].f_3 != 21)
							{
								func_323(&(Local_453[iVar0 /*21*/]), 21, 0, 0);
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < Local_538)
						{
							if (!PED::IS_PED_INJURED(Local_538[iVar0 /*21*/]) && Local_538[iVar0 /*21*/].f_3 != 21)
							{
								func_323(&(Local_538[iVar0 /*21*/]), 21, 0, 0);
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < Local_602)
						{
							if (!PED::IS_PED_INJURED(Local_602[iVar0 /*21*/]) && Local_602[iVar0 /*21*/].f_3 != 21)
							{
								func_323(&(Local_602[iVar0 /*21*/]), 21, 0, 0);
							}
							iVar0++;
						}
						__LIB_1__::func_683(&iLocal_1121, -2147483648);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_240)
			{
				func_561(uParam0, &(Local_240[iVar0 /*21*/]), iVar0);
				func_562(&(Local_240[iVar0 /*21*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_304)
			{
				func_563(uParam0, &(Local_304[iVar0 /*21*/]), iVar0, &iLocal_1376);
				func_562(&(Local_304[iVar0 /*21*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_326)
			{
				func_564(uParam0, &(Local_326[iVar0 /*21*/]), iVar0, &iLocal_1378, &iLocal_1377);
				func_562(&(Local_326[iVar0 /*21*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_453)
			{
				func_565(uParam0, &(Local_453[iVar0 /*21*/]), iVar0);
				func_562(&(Local_453[iVar0 /*21*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_538)
			{
				func_566(uParam0, &(Local_538[iVar0 /*21*/]), iVar0, &iLocal_1377);
				func_562(&(Local_538[iVar0 /*21*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_602)
			{
				func_567(uParam0, &(Local_602[iVar0 /*21*/]), iVar0);
				func_562(&(Local_602[iVar0 /*21*/]));
				iVar0++;
			}
			if (!__LIB_0__::func_27(iLocal_1121, 4))
			{
				if (func_568(&Local_240))
				{
					__LIB_1__::func_683(&iLocal_1121, 4);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1121, 2048))
			{
				if (func_568(&Local_304))
				{
					__LIB_1__::func_683(&iLocal_1121, 2048);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1121, 32))
			{
				if (func_568(&Local_326))
				{
					__LIB_1__::func_683(&iLocal_1121, 32);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1121, 256))
			{
				if (func_568(&Local_453))
				{
					__LIB_1__::func_683(&iLocal_1121, 256);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1121, 16384))
			{
				if (func_568(&Local_538))
				{
					__LIB_1__::func_683(&iLocal_1121, 16384);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1121, 131072))
			{
				if (__LIB_0__::func_27(iLocal_1121, 65536))
				{
					if (func_568(&Local_602))
					{
						__LIB_1__::func_683(&iLocal_1121, 131072);
					}
				}
			}
			break;
	}
}

bool func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iVar0 == iVar1)
		{
			switch (iVar0)
			{
				case 1:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[2]))
						{
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[2], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[2], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[2], 0, 15);
						}
					}
					break;
				case 2:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[3]))
						{
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[3], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[3], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[3], 0, 15);
						}
					}
					break;
				case 3:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[4]))
						{
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[4], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[4], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[4], 0, 15);
						}
					}
					break;
				case 4:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[5]))
						{
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[5], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[5], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[5], 0, 15);
						}
					}
					break;
				case 5:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[13]))
						{
							MISC::_0x2FCD528A397E5C88(iLocal_1041[13], 2442122);
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[13], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[13], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[13], 0, 15);
						}
					}
					break;
				case 6:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[14]))
						{
							MISC::_0x2FCD528A397E5C88(iLocal_1041[14], 2442122);
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[14], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[14], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[14], 0, 15);
						}
					}
					break;
				case 7:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[24]))
						{
							MISC::_0x2FCD528A397E5C88(iLocal_1041[24], 2442122);
							__LIB_2__::func_261(iLocal_1041[24], "RDST2_VOLUME_SIX_POINT_CABIN_AMBIENT_CAMP", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1041[24], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1041[24], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1041[24], 0, 15);
						}
					}
					break;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_231(int iParam0, var uParam1)
{
	if (*uParam1 == *iParam0)
	{
		return true;
	}
	switch (*uParam1)
	{
		case 9:
			if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[*uParam1]))
			{
			}
			break;
		case 10:
			if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[*uParam1]))
			{
				MISC::_0x2FCD528A397E5C88((*iParam0)[*uParam1], 2442122);
				PATHFIND::_0xC1799FAFD2FDF52B((*iParam0)[*uParam1], 0, 0, 0);
			}
			break;
		case 11:
			if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[*uParam1]))
			{
				MISC::_0x2FCD528A397E5C88((*iParam0)[*uParam1], 2442122);
				PATHFIND::_0xC1799FAFD2FDF52B((*iParam0)[*uParam1], 0, 0, 0);
			}
			break;
		case 12:
			if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[*uParam1]))
			{
				MISC::_0x2FCD528A397E5C88((*iParam0)[*uParam1], 2442122);
				PATHFIND::_0xC1799FAFD2FDF52B((*iParam0)[*uParam1], 0, 0, 0);
			}
			break;
		case 17:
			if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[*uParam1]))
			{
				GRAPHICS::REMOVE_DECALS_IN_RANGE(VOLUME::_GET_VOLUME_COORDS((*iParam0)[*uParam1]), 500f);
				MISC::CLEAR_AREA(VOLUME::_GET_VOLUME_COORDS((*iParam0)[*uParam1]), 500f, 2442122);
				POPULATION::_0xB56D41A694E42E86((*iParam0)[*uParam1], iLocal_14, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1((*iParam0)[*uParam1], iLocal_14, 0, 0, -1, -1, 0);
			}
			break;
		case 29:
			if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[*uParam1]))
			{
				__LIB_3__::func_241((*iParam0)[*uParam1], 1);
			}
			break;
	}
	*uParam1++;
	return false;
}

bool func_235(int iParam0)
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

void func_249(var uParam0)
{
	func_468(uParam0);
}

void func_264(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_289(var uParam0)
{
	if (!func_654(uParam0))
	{
		return 0;
	}
	__LIB_13__::func_489(uParam0, (5f * 5f));
	return 1;
}

void func_305(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_1123 = __LIB_0__::func_895(__LIB_12__::func_609(63));
	__LIB_4__::func_253(joaat("CSTAG_FLOW_DST2_ACTIVE"), 1017034651, -469960592, -1, 1, 1, 0);
	iVar0 = __LIB_0__::func_23();
	iVar2 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_23();
	iLocal_957 = __LIB_0__::func_23();
	__LIB_0__::func_467(&iVar0, 4);
	__LIB_0__::func_468(&iVar0, 30);
	__LIB_0__::func_469(&iVar0, 0);
	__LIB_0__::func_467(&iVar1, 17);
	__LIB_0__::func_468(&iVar1, 30);
	__LIB_0__::func_469(&iVar1, 0);
	__LIB_0__::func_467(&iVar2, 20);
	__LIB_0__::func_468(&iVar2, 20);
	__LIB_0__::func_469(&iVar2, 0);
	if (__LIB_6__::func_683(iLocal_957, iVar0) && !__LIB_1__::func_110(iLocal_957, iVar1, 1))
	{
		__LIB_1__::func_683(&iLocal_1118, -2147483648);
	}
	if (__LIB_6__::func_683(iLocal_957, iVar1) && !__LIB_1__::func_110(iLocal_957, iVar2, 1))
	{
		__LIB_1__::func_683(&iLocal_1118, 536870912);
	}
	if (__LIB_6__::func_683(iLocal_957, iVar2) || !__LIB_6__::func_683(iLocal_957, iVar0))
	{
		__LIB_1__::func_683(&iLocal_1118, 1073741824 /* Float: 2f */);
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	func_679();
	func_680();
	func_681();
	func_682();
	__LIB_0__::func_915(joaat("WEAPON_THROWN_THROWING_KNIVES"));
	__LIB_0__::func_635(256);
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1016982061))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1016982061, true);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 0);
	}
	__LIB_1__::func_948(joaat("DOOR_SIX_CABIN_FRONT"), 1, 0f, 0, 0, 0, 0, 0);
	__LIB_3__::func_229(941);
	__LIB_3__::func_229(943);
	__LIB_3__::func_229(944);
	__LIB_3__::func_229(942);
	__LIB_0__::func_123(941, 32);
	__LIB_0__::func_123(943, 32);
	__LIB_0__::func_123(944, 32);
	__LIB_0__::func_123(942, 32);
	MAP::ALLOW_SONAR_BLIPS(true);
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	iLocal_127 = iParam1;
	switch (iLocal_127)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RDST2_RSC_1", 24);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_0__::func_136(&(uParam0->f_206));
			__LIB_0__::func_88(&(uParam0->f_206), 16);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_198, "DUTCH", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_177, "BILLWILLIAMSON", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_135, "KIERAN", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1028, "P_CS_ROPE03X", 1, 0, 0);
			__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RDST2_RSC3", 24);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_135, "KIERAN", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_156, "JOHNMARSTON", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_177, "BILLWILLIAMSON", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_240[0 /*21*/], "G_M_M_UNIDUSTER_05", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_240[1 /*21*/], "G_M_M_UNIDUSTER_05^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_240[2 /*21*/], "G_M_M_UNIDUSTER_05^2", 0, 0, 0);
			func_503(&(uParam0->f_206), Local_240[2 /*21*/], joaat("WEAPON_REPEATER_CARBINE"), 0, "w_repeater_carbine01", 1);
			__LIB_0__::func_143(&(uParam0->f_206.f_13[__LIB_12__::func_716(&(uParam0->f_206), Local_156) /*12*/]), 8);
			__LIB_0__::func_143(&(uParam0->f_206.f_13[__LIB_12__::func_716(&(uParam0->f_206), Local_177) /*12*/]), 8);
			if (iParam2 == 1)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_12__::func_779(uParam0, 62.5933f, 1177.398f, 187.0703f);
			__LIB_13__::func_490(uParam0, 40f, 75f);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "RDST2_RSC2", 24);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_135, "KIERAN", 1, 0, 0);
			__LIB_12__::func_957(uParam0, Local_156, "JOHNMARSTON", 1, 0, 0);
			__LIB_12__::func_957(uParam0, Local_177, "BILLWILLIAMSON", 1, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_219, "G_M_M_UNIDUSTER_05", 0, 0, 0);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_779(uParam0, -66.3335f, 1235.934f, 169.7664f);
			break;
		default:
			break;
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_309(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (!PED::IS_PED_INJURED(Local_135))
	{
		PED::SET_PED_RESET_FLAG(Local_135, 53, true);
		if (__LIB_0__::func_27(iLocal_1116, 1))
		{
			bVar1 = __LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_135);
		}
		bVar0 = __LIB_0__::func_48(Global_35, Local_135, 4.5f, 1);
		bVar2 = __LIB_0__::func_48(Global_35, Local_135, 6.1f, 1);
		bVar3 = (__LIB_1__::func_205(Global_35, iLocal_1041[0], 1, 0) && __LIB_1__::func_205(Global_35, iLocal_1041[1], 1, 0));
		if (__LIB_0__::func_27(iLocal_1116, 1) && !__LIB_0__::func_27(iLocal_1116, 2))
		{
			iLocal_1274 = func_699(&Local_135, &iLocal_1275, 4.5f, &Local_1336, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1380, false))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1380, "pl_base"))
			{
				if (bVar3 == 1)
				{
					__LIB_2__::func_259(&uLocal_1016);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1380, "pl_base_to_look", true);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1380, "pl_look_to_base");
				}
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1380, "pl_base_to_look"))
			{
				if (!__LIB_0__::func_27(iLocal_1116, 4))
				{
					if (bVar3 == 1)
					{
						if (__LIB_0__::func_899(&uLocal_1016) && __LIB_1__::func_583(&uLocal_1016) >= 2f)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_KBEG", 0))
								{
									if (!__LIB_0__::func_27(iLocal_1116, 1))
									{
										iLocal_1274 = -1;
										__LIB_12__::func_953(&iLocal_1275, 0);
										__LIB_3__::func_157(&(Local_1336[0 /*17*/]), "INTERACT_INSULT", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
										__LIB_3__::func_157(&(Local_1336[1 /*17*/]), "INTERACT_THREATEN", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
										__LIB_12__::func_980(&iLocal_1275, &Local_1336, 0, Global_1347702[63 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
										__LIB_1__::func_471(&iLocal_1275, 20);
										__LIB_1__::func_471(&iLocal_1275, 18);
										__LIB_1__::func_683(&iLocal_1116, 1);
									}
									__LIB_2__::func_259(&uLocal_1016);
									Local_135.f_13++;
									__LIB_1__::func_683(&iLocal_1116, 4);
								}
							}
						}
					}
				}
				else if (bVar3 == 1)
				{
					if (__LIB_0__::func_899(&uLocal_1016) && __LIB_1__::func_583(&uLocal_1016) >= (10f + (IntToFloat(Local_135.f_13) * 4.5f)))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2_KBEG", 0))
							{
								__LIB_2__::func_259(&uLocal_1016);
								Local_135.f_13++;
							}
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1116, 2))
				{
					if ((__LIB_8__::func_684("DST2_ANTAG3") || __LIB_8__::func_684("DST2_ANTAG2")) || __LIB_8__::func_684("DST2_ANTAG1"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1380, "pl_look_to_base", true);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1380, "pl_base_to_look");
					}
				}
				if (bVar3 == 0)
				{
					if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && !AUDIO::_0x54B187F111D9C6F8(Local_135, 1))
					{
						__LIB_1__::func_561(&uLocal_1016);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1380, "pl_look_to_base", true);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1380, "pl_base_to_look");
					}
				}
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1380, "pl_look_to_base"))
			{
				if (bVar3 == 1)
				{
					if (((!__LIB_0__::func_27(iLocal_1116, 2) && !__LIB_6__::func_903("DST2_ANTAG2")) && !__LIB_8__::func_684("DST2_ANTAG2")) && !AUDIO::_0x54B187F111D9C6F8(Local_135, 1))
					{
						__LIB_2__::func_259(&uLocal_1016);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1380, "pl_base_to_look", true);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1380, "pl_look_to_base");
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1116, 4))
	{
		if (bVar1 == 1 && bVar2 == 1)
		{
			__LIB_5__::func_548(2);
		}
		else
		{
			__LIB_5__::func_547(2);
		}
	}
	if (bVar1 == 1 && bVar0 == 1)
	{
		if (AUDIO::_0x54B187F111D9C6F8(Global_35, 1) || __LIB_0__::func_27(iLocal_1116, 2))
		{
		}
	}
	if (!__LIB_0__::func_27(iLocal_1116, 2))
	{
		if (iLocal_1274 != -1)
		{
			__LIB_1__::func_480(&Local_135);
			__LIB_2__::func_480(&Local_1336, 1, 1, 1, 0);
			if (iLocal_1274 == 0)
			{
				if (__LIB_12__::func_876(uParam0, "DST2_ANTAG1", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_135, 3000, 2048, 51, 0);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					__LIB_1__::func_683(&iLocal_1116, 2);
				}
			}
			else if (iLocal_1274 == 1)
			{
				if (__LIB_12__::func_876(uParam0, "DST2_ANTAG2", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_135, 3000, 2048, 51, 0);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					__LIB_1__::func_683(&iLocal_1116, 2);
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1116, 2))
	{
		if (__LIB_6__::func_904() || __LIB_5__::func_463())
		{
			if (((__LIB_8__::func_684("DST2_ANTAG1") && AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (__LIB_8__::func_684("DST2_ANTAG2") && AUDIO::_0x54B187F111D9C6F8(Global_35, 1))) || (__LIB_8__::func_684("DST2_ANTAG3") && AUDIO::_0x54B187F111D9C6F8(Global_35, 1)))
			{
				if (!__LIB_0__::func_899(&uLocal_1007))
				{
					__LIB_2__::func_259(&uLocal_1007);
				}
				else if (__LIB_0__::func_899(&uLocal_1007) && __LIB_9__::func_401(&uLocal_1007) >= 500)
				{
					if (__LIB_8__::func_684("DST2_KBEG") && AUDIO::_0x54B187F111D9C6F8(Local_135, 1))
					{
						__LIB_6__::func_900("DST2_KBEG", 0, 0);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1116, 2))
	{
		__LIB_13__::func_282(&Local_135, &iLocal_1275, &Local_1336, 4.5f, -1082130432 /* Float: -1f */, 0);
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1380, false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_1380, "pl_base_to_look"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1380, "pl_look_to_base", true);
		}
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_1116, 2))
	{
		if (__LIB_0__::func_27(iLocal_1116, 1))
		{
			if (bVar2 == 0)
			{
				Local_135.f_13 = 0;
				__LIB_1__::func_480(&Local_135);
				__LIB_2__::func_480(&Local_1336, 1, 1, 1, 0);
				__LIB_13__::func_520(&iLocal_847);
				__LIB_8__::func_771(Local_135, 1, 1, 0);
				__LIB_1__::func_681(&iLocal_1116, 1);
				__LIB_1__::func_681(&iLocal_1116, 4);
			}
		}
	}
	return false;
}

void func_315()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379))
	{
		iLocal_1379 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@ig@rsc1_ig1_walk_n_talk@rsc1_ig1_walk_n_talk", 0, "pbl_Walk_N_Talk", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1379);
	}
}

void func_316(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		if (ENTITY::_0x886171A12F400B89(*uParam0, *uParam1, 1) > 0)
		{
			iVar0 = 0;
			while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(*uParam1))
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, *uParam1);
				if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
				{
					iVar2 = iVar1;
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (__LIB_0__::func_125(iVar2))
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
							{
								iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
								if (!PED::IS_PED_INJURED(iVar3))
								{
									func_719(iVar3, &uLocal_1101);
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
}

void func_317()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = __LIB_0__::func_398(iVar0);
		if (iVar0 == 1)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1)) && __LIB_0__::func_266(iVar1, VOLUME::_GET_VOLUME_COORDS(iLocal_1041[13]), 30f, 1, 1))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
				func_720(iVar1, -113.0928f, -15.9552f, 94.8926f, 60.1353f, 2, 1073741824 /* Float: 2f */);
				__LIB_11__::func_4(iVar1);
			}
		}
		iVar0++;
	}
	iVar1 = PED::_GET_LAST_MOUNT(Global_35);
	if (iVar1 != __LIB_0__::func_398(1) && iVar1 != __LIB_0__::func_398(7))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1)) && __LIB_0__::func_266(iVar1, VOLUME::_GET_VOLUME_COORDS(iLocal_1041[13]), 30f, 1, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			func_720(iVar1, -112.6118f, -14.3629f, 94.8285f, 75.4923f, 2, 1073741824 /* Float: 2f */);
			__LIB_11__::func_4(iVar1);
		}
	}
}

bool func_318(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = 0;
		switch (iParam1)
		{
			case 1:
			case 3:
				iVar0 = -268604689;
				break;
			case 0:
				iVar0 = -1632589543;
				break;
			case 10:
				iVar0 = -310473775;
				break;
		}
		*iParam0 = func_722(iParam1, 1, 1, fParam2, fParam3, fParam4, fParam5, bParam6, 1, 0, 0, 0, 0, iVar0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
			}
			if (bParam6 == 1 && !__LIB_0__::func_86(fParam2, fParam3, fParam4))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam2, fParam3, fParam4, fParam5, true, false, true);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 58, true);
			PED::SET_COMBAT_FLOAT(*iParam0, 12, 2f);
			WEAPON::SET_PED_INFINITE_AMMO(*iParam0, true, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 24592);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			switch (iParam1)
			{
				case 1:
					WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_MELEE_KNIFE_JOHN"), -1, false, true, 4, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), -1, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
					break;
				case 0:
					break;
				case 3:
					WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_MELEE_KNIFE_BILL"), -1, false, true, 4, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), -1, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
					break;
				case 10:
					WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
					break;
			}
			__LIB_0__::func_904(iParam1, 1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_319(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(iParam1)))
		{
			*iParam0 = func_723(iParam1, bParam2, bParam3, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
				}
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
					POPULATION::_0xF74E134F40192884(*iParam0, 2);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, true, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam4, fParam5, fParam6, fParam7, true, false, true);
					TASK::TASK_STAND_STILL(*iParam0, -1);
				}
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_320(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_13__::func_543(uParam0, iParam1, fParam2, fParam3, fParam4, fParam5, 1, 1, 1, 1, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam1, false))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, true);
				}
				if (!PED::IS_PED_INJURED(*iParam1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam1, false);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam1, 48, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, fParam2, fParam3, fParam4, fParam5, true, false, true);
					TASK::TASK_STAND_STILL(*iParam1, -1);
				}
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_322(var uParam0)
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	if (!PED::IS_PED_INJURED(Local_156))
	{
		__LIB_12__::func_875(uParam0, Local_156, "JOHN", 1);
	}
	if (!PED::IS_PED_INJURED(Local_177))
	{
		__LIB_12__::func_875(uParam0, Local_177, "BILL", 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_198))
	{
		__LIB_12__::func_875(uParam0, iLocal_198, "DUTCH", 0);
	}
	if (!PED::IS_PED_INJURED(Local_135))
	{
		__LIB_12__::func_875(uParam0, Local_135, "KIERAN", 1);
	}
}

void func_323(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_6 = iParam2;
	iParam0->f_3 = iParam1;
	if (iParam3 != -1)
	{
		iParam0->f_7 = iParam3;
	}
}

void func_325(int iParam0)
{
	vector3 vVar0;
	struct<27> Var3;
	struct<27> Var41;
	if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_135)) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (iParam0 == 0)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_27, fLocal_33, true, false, true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_135, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_135, vLocal_24, fLocal_32, true, false, true);
		}
		Var3.f_4 = 1065353216;
		Var3.f_5 = 1065353216;
		Var3.f_9 = 1065353216;
		Var3.f_10 = 1065353216;
		Var3.f_14 = 1065353216;
		Var3.f_15 = 1065353216;
		Var3.f_17 = 1040187392;
		Var3.f_18 = 1040187392;
		Var3.f_19 = -1;
		Var3.f_26 = -1082130432;
		__LIB_9__::func_175(Local_135, Global_35, &Var3, vVar0, sLocal_116, 4194344, 1, 3f, 2f, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
		if (iParam0 == 0)
		{
			Var41.f_4 = 1065353216;
			Var41.f_5 = 1065353216;
			Var41.f_9 = 1065353216;
			Var41.f_10 = 1065353216;
			Var41.f_14 = 1065353216;
			Var41.f_15 = 1065353216;
			Var41.f_17 = 1040187392;
			Var41.f_18 = 1040187392;
			Var41.f_19 = -1;
			Var41.f_26 = -1082130432;
			__LIB_3__::func_898(Global_35, Local_135, &Var41, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
		}
		__LIB_1__::func_731(&uLocal_970);
		if (iParam0 == 0)
		{
			PED::FORCE_PED_MOTION_STATE(Local_135, joaat("MOTIONSTATE_WALK"), true, 0, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), true, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 4500, 257.3237f, false, false);
		}
		__LIB_1__::func_683(&(Local_135.f_8), 268435456);
	}
}

void func_330()
{
	if (!PED::IS_PED_INJURED(Local_156))
	{
		if (!PED::DOES_GROUP_EXIST(iLocal_1040))
		{
			iLocal_1040 = PED::CREATE_GROUP(2);
		}
		if (PED::DOES_GROUP_EXIST(iLocal_1040))
		{
			if (!PED::_0x878B68960C1C2A35(Local_156, iLocal_1040))
			{
				PED::SET_PED_CONFIG_FLAG(Local_156, 279, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_156, iLocal_1040, false);
				PED::SET_GROUP_FORMATION(iLocal_1040, 10);
			}
		}
	}
}

void func_331(int iParam0)
{
	struct<15> Var0;
	if ((!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(iLocal_813)) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0.f_2 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1082130432;
		Var0.f_12 = -1082130432;
		Var0.f_13 = 1;
		Var0.f_14 = -1082130432;
		Var0 = sLocal_117;
		Var0.f_1 = 0;
		Var0.f_3 = 9230;
		Var0.f_13 = 0;
		Var0.f_5 = 1;
		if (iParam0 == 1)
		{
			Var0.f_12 = 1.75f;
			Var0.f_14 = -1f;
		}
		else
		{
			Var0.f_12 = 1f;
			Var0.f_14 = 0.2f;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_156, true);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_156, &Var0);
		if (iParam0 == 1)
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_813, joaat("MOTIONSTATE_RUN"), true, 0, false);
		}
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), Local_156, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
	}
}

void func_332(int iParam0)
{
	if (!PED::IS_PED_INJURED(Local_177) && !PED::IS_PED_INJURED(iLocal_814))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_177, false);
		if (PED::DOES_GROUP_EXIST(iLocal_1040))
		{
			if (!PED::IS_PED_IN_GROUP(Local_177))
			{
				PED::SET_PED_CONFIG_FLAG(Local_177, 279, true);
				PED::SET_PED_AS_GROUP_MEMBER(Local_177, iLocal_1040);
				PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_177, iLocal_1040, true);
				PED::SET_PED_CONFIG_FLAG(Local_177, 280, true);
				PED::SET_PED_CONFIG_FLAG(Local_177, 105, false);
			}
		}
		if (iParam0 == 1)
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_814, joaat("MOTIONSTATE_RUN"), true, 0, false);
		}
	}
}

void func_333()
{
	struct<15> Var0;
	if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_815)) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_117))
		{
			Var0.f_2 = -1;
			Var0.f_7 = -1;
			Var0.f_8 = -1082130432;
			Var0.f_12 = -1082130432;
			Var0.f_13 = 1;
			Var0.f_14 = -1082130432;
			Var0 = sLocal_117;
			Var0.f_1 = 0;
			Var0.f_3 = 4194316;
			Var0.f_13 = 0;
			Var0.f_12 = 1.75f;
			Var0.f_14 = -1f;
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Global_35, &Var0);
			PED::FORCE_PED_MOTION_STATE(iLocal_815, joaat("MOTIONSTATE_RUN"), true, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.75f, 3000, ENTITY::GET_ENTITY_HEADING(Global_35), false, false);
			__LIB_2__::func_259(&uLocal_995);
			__LIB_1__::func_683(&iLocal_1118, 32768);
		}
	}
}

void func_334(int iParam0)
{
	if (!PED::IS_PED_INJURED(Local_135))
	{
		if (iParam0 == 1)
		{
			PED::_0x1E017404784AA6A3(Local_135, joaat("ODR2_RIDE1"));
			AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
		}
		else
		{
			PED::_0x2B4CE170DE09F346(Local_135, joaat("ODR2_RIDE1"));
			AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 0);
		}
	}
}

void func_335()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BADASS"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_FAN"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_PEE"), 15, 0, 0);
}

void func_336()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377))
	{
		iLocal_1377 = ANIMSCENE::_CREATE_ANIM_SCENE("script@hideout@sixpoint@couple", 0, "pbl_idle", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1377);
	}
}

void func_337()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376))
	{
		iLocal_1376 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@ig@rsc2_ig1_goon_assassination@rsc2_ig1_goon_assassination", 0, "pbl_Guard_Sitting_Loop", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1376);
	}
}

void func_338()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1378))
	{
		iLocal_1378 = ANIMSCENE::_CREATE_ANIM_SCENE("script@hideout@sixpoint@robdiscuss", 0, "pbl_base", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1378);
		STREAMING::REQUEST_MODEL(joaat("P_BOTTLEBEER01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
	}
}

bool func_339(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (iParam2 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1121, 2))
		{
			if (!__LIB_0__::func_27(iLocal_1121, 1))
			{
				__LIB_1__::func_683(&iLocal_1121, 1);
			}
			else if (func_729(&Local_240, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam7, -1673621462, -1318864268, -1062053615, 0))
			{
				if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_240[0 /*21*/], "0359_G_M_M_UniDuster_02_IRISH_01");
					__LIB_12__::func_875(uParam0, Local_240[0 /*21*/], "ODR_PED7", 0);
					__LIB_13__::func_514(Local_240[0 /*21*/], 2);
					__LIB_4__::func_7(Local_240[0 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (iParam1 == 3)
					{
						func_323(&(Local_240[0 /*21*/]), 16, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_240[1 /*21*/], "0361_G_M_M_UniDuster_03_WHITE_01");
					__LIB_12__::func_875(uParam0, Local_240[1 /*21*/], "ODR_PED4", 0);
					__LIB_13__::func_514(Local_240[1 /*21*/], 2);
					__LIB_4__::func_7(Local_240[1 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (iParam1 == 3)
					{
						func_323(&(Local_240[1 /*21*/]), 17, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]))
				{
					__LIB_12__::func_875(uParam0, Local_240[2 /*21*/], "RDST2_ODR_05", 0);
					__LIB_13__::func_514(Local_240[2 /*21*/], 2);
					__LIB_4__::func_7(Local_240[2 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_7(Local_240[2 /*21*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (iParam1 == 3)
					{
						func_323(&(Local_240[2 /*21*/]), 17, 0, 0);
					}
				}
				__LIB_1__::func_683(&iLocal_1121, 2);
			}
		}
	}
	if (iParam3 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1121, 1024))
		{
			if (!__LIB_0__::func_27(iLocal_1121, 512))
			{
				if (iParam2 == 0 || (iParam2 == 1 && __LIB_0__::func_27(iLocal_1121, 2)))
				{
					__LIB_1__::func_683(&iLocal_1121, 512);
				}
			}
			else if (func_351(&(Local_304[0 /*21*/]), Local_304[0 /*21*/].f_4, Local_304[0 /*21*/].f_14, Local_304[0 /*21*/].f_17, joaat("REL_PLAYER_ENEMY"), 1, 1, 0, -2, 1, joaat("WEAPON_UNARMED"), 312093580))
			{
				if (!PED::IS_PED_INJURED(Local_304[0 /*21*/]))
				{
					__LIB_4__::func_7(Local_304[0 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_304[0 /*21*/]), 24, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_1121, 1024);
			}
		}
	}
	if (iParam4 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1121, 16))
		{
			if (!__LIB_0__::func_27(iLocal_1121, 8))
			{
				if (iParam3 == 0 || (iParam3 == 1 && __LIB_0__::func_27(iLocal_1121, 1024)))
				{
					__LIB_1__::func_683(&iLocal_1121, 8);
				}
			}
			else if (func_729(&Local_326, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam7, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), 0))
			{
				if (!PED::IS_PED_INJURED(Local_326[0 /*21*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_326[0 /*21*/], "0360_G_M_M_UNIDUSTER_03_IRISH_01");
					__LIB_12__::func_875(uParam0, Local_326[0 /*21*/], "ODR_PED8", 0);
					func_731(Local_326[0 /*21*/]);
					__LIB_4__::func_7(Local_326[0 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_326[0 /*21*/]), 27, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_326[1 /*21*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_326[1 /*21*/], "0355_G_M_M_UNIDUSTER_01_WHITE_01");
					__LIB_12__::func_875(uParam0, Local_326[1 /*21*/], "ODR_PED5", 0);
					func_731(Local_326[1 /*21*/]);
					__LIB_4__::func_7(Local_326[1 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_326[1 /*21*/]), 27, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_326[2 /*21*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_326[2 /*21*/], "0356_G_M_M_UNIDUSTER_01_WHITE_02");
					__LIB_12__::func_875(uParam0, Local_326[2 /*21*/], "ODR_PED1", 0);
					func_731(Local_326[2 /*21*/]);
					__LIB_4__::func_7(Local_326[2 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_326[2 /*21*/]), 27, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_326[3 /*21*/]))
				{
					func_731(Local_326[3 /*21*/]);
					__LIB_4__::func_7(Local_326[3 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_326[3 /*21*/]), 27, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_326[4 /*21*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_326[4 /*21*/], "1018_G_M_M_UNIDUSTER_01_IRISH_01");
					__LIB_12__::func_875(uParam0, Local_326[4 /*21*/], "ODR_PED9", 0);
					func_731(Local_326[4 /*21*/]);
					__LIB_4__::func_7(Local_326[4 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_326[4 /*21*/]), 33, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_326[5 /*21*/]))
				{
					__LIB_4__::func_7(Local_326[5 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_7(Local_326[5 /*21*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_326[5 /*21*/]), 18, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_1121, 16);
			}
		}
	}
	if (iParam5 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1121, 128))
		{
			if (!__LIB_0__::func_27(iLocal_1121, 64))
			{
				if (iParam4 == 0 || (iParam4 == 1 && __LIB_0__::func_27(iLocal_1121, 16)))
				{
					__LIB_1__::func_683(&iLocal_1121, 64);
				}
			}
			else if (func_729(&Local_453, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam7, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), 0))
			{
				if (!PED::IS_PED_INJURED(Local_453[0 /*21*/]))
				{
					__LIB_4__::func_7(Local_453[0 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_453[0 /*21*/]), 18, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_453[1 /*21*/]))
				{
					__LIB_13__::func_514(Local_453[1 /*21*/], 1);
					__LIB_4__::func_7(Local_453[1 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_7(Local_453[1 /*21*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_453[1 /*21*/]), 18, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_453[2 /*21*/]))
				{
					__LIB_4__::func_7(Local_453[2 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_7(Local_453[2 /*21*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_453[2 /*21*/]), 18, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_453[3 /*21*/]))
				{
					__LIB_4__::func_7(Local_453[3 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_453[3 /*21*/]), 18, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_1121, 128);
			}
		}
	}
	if (iParam6 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1121, 8192))
		{
			if (!__LIB_0__::func_27(iLocal_1121, 4096))
			{
				if (iParam5 == 0 || (iParam5 == 1 && __LIB_0__::func_27(iLocal_1121, 128)))
				{
					__LIB_1__::func_683(&iLocal_1121, 4096);
				}
			}
			else if (func_729(&Local_538, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam7, -1801420626, -1502403501, -113718815, 0))
			{
				if (!PED::IS_PED_INJURED(Local_538[0 /*21*/]))
				{
					__LIB_12__::func_875(uParam0, Local_538[0 /*21*/], "ODR_WHORE", 0);
					func_323(&(Local_538[0 /*21*/]), 33, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_538[1 /*21*/]))
				{
					func_323(&(Local_538[1 /*21*/]), 18, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_538[2 /*21*/]))
				{
					func_323(&(Local_538[2 /*21*/]), 18, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_1121, 8192);
			}
		}
	}
	return (((((iParam2 == 0 || (iParam2 == 1 && __LIB_0__::func_27(iLocal_1121, 2))) && (iParam3 == 0 || (iParam3 == 1 && __LIB_0__::func_27(iLocal_1121, 1024)))) && (iParam4 == 0 || (iParam4 == 1 && __LIB_0__::func_27(iLocal_1121, 16)))) && (iParam5 == 0 || (iParam5 == 1 && __LIB_0__::func_27(iLocal_1121, 128)))) && (iParam6 == 0 || (iParam6 == 1 && __LIB_0__::func_27(iLocal_1121, 8192))));
}

bool func_340()
{
	STREAMING::_REQUEST_IMAP(1190000937);
	STREAMING::_REQUEST_IMAP(1274066881);
	if (PATHFIND::_0x495CFAB2924237C7("nav_dusters21"))
	{
		if (!PATHFIND::_0x5AC0944C156E5F44("nav_dusters21"))
		{
			PATHFIND::_0x7C334FF4D9215912("nav_dusters21");
		}
	}
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(MISC::GET_HASH_KEY("vegmods_six01_rc_odriscolls")))
	{
		GRAPHICS::_0xDFEA23EC90113657(MISC::GET_HASH_KEY("vegmods_six01_rc_odriscolls"));
	}
	if ((func_732(&(iLocal_1029[0]), joaat("P_LANTERN05X"), -21.64f, 1203f, 173.28f, 0f, 0f, 0f, 0, 0) && func_732(&(iLocal_1029[1]), joaat("P_LANTERN05X"), -26.24f, 1232.75f, 172.83f, 0f, 0f, 0f, 0, 0)) && func_732(&iLocal_1032, joaat("P_CS_BILLSTACK01X"), vLocal_121, vLocal_124, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_341()
{
	return ((((((STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BADASS"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_FAN"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_PEE"), false));
}

void func_343()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1375))
	{
		iLocal_1375 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@leadout@rsc_3@base", 0, "pl_loop", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1375);
	}
}

void func_344(int iParam0)
{
	if (!PED::IS_PED_INJURED(Local_177))
	{
		if (iParam0 == 0)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_177, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_177, vLocal_62, fLocal_74, true, false, true);
		}
		PED::_SET_PED_CROUCH_MOVEMENT(Local_177, true, 0, true);
		if (iParam0 == 0)
		{
			PED::FORCE_PED_MOTION_STATE(Local_177, joaat("MOTIONSTATE_CROUCH_IDLE"), true, 0, false);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(Local_177, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 1, false);
		}
	}
}

void func_345(int iParam0)
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (iParam0 == 0)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_71, fLocal_77, true, false, true);
		}
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
		if (iParam0 == 0)
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), true, 0, false);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 1, false);
		}
	}
}

void func_346()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1375) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1375, true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1375, "pl_loop"))
	{
		if (!PED::IS_PED_INJURED(Local_135) && !PED::IS_PED_INJURED(Local_156))
		{
			__LIB_4__::func_7(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_156, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), false, 0, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1375, "Kieran", Local_135, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_156, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1375, "JohnMarston", Local_156, 0);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1375, "pl_loop", true);
			ANIMSCENE::START_ANIM_SCENE(iLocal_1375);
		}
	}
}

void func_348()
{
	int iVar0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) && WEAPON::IS_WEAPON_VALID(iVar0))
		{
			WEAPON::_0x72D4CB5DB927009C(iVar0, -1, 0);
		}
	}
}

void func_349()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1377, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1377, false))
		{
			if (!PED::IS_PED_INJURED(Local_326[4 /*21*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[4 /*21*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1377, "male", Local_326[4 /*21*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_538[0 /*21*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_538[0 /*21*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1377, "female", Local_538[0 /*21*/], 0);
			}
			Local_326[4 /*21*/].f_13 = 0;
			ANIMSCENE::START_ANIM_SCENE(iLocal_1377);
		}
	}
}

void func_350()
{
	vector3 vVar0;
	var uVar3;
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1378, false))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEBEER01X")) && STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_1378, &vVar0, &uVar3, 2);
			if (!PED::IS_PED_INJURED(Local_326[0 /*21*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[0 /*21*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "peda", Local_326[0 /*21*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_326[1 /*21*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[1 /*21*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "pedb", Local_326[1 /*21*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_326[2 /*21*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[2 /*21*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "pedc", Local_326[2 /*21*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_326[3 /*21*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[3 /*21*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "pedd", Local_326[3 /*21*/], 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1033[0]))
			{
				iLocal_1033[0] = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEBEER01X"), vVar0, true, true, false, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "beer", iLocal_1033[0], 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1033[1]))
			{
				iLocal_1033[1] = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEBEER01X"), vVar0, true, true, false, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "beer02", iLocal_1033[1], 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1033[2]))
			{
				iLocal_1033[2] = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), vVar0, true, true, false, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1378, "jd", iLocal_1033[2], 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1033[3]))
			{
				iLocal_1033[3] = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEBEER01X"), vVar0, true, true, false, false, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_1033[3], vVar0, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1033[3], 0f, 0f, 50f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1033[3], true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1033[3], false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1033[3], true);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BOTTLEBEER01X"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BOTTLEJD01X"));
			ANIMSCENE::START_ANIM_SCENE(iLocal_1378);
		}
	}
}

bool func_351(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12, bool bParam13)
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			bVar0 = true;
			if (bParam13 != joaat("META_OUTFIT_DEFAULT"))
			{
				bVar0 = false;
			}
			*iParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 1, 1, 0, 1, 1, bVar0, !bParam11, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			if (bParam11 == 1)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, false, true);
			}
			if (iParam6 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iParam6);
			}
			if (PED::IS_PED_HUMAN(*iParam0))
			{
				if (iParam12 != joaat("WEAPON_UNARMED"))
				{
					__LIB_4__::func_7(*iParam0, iParam12, 24, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(*iParam0, 2, true);
				}
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(*iParam0, true);
			}
			if (bParam13 != joaat("META_OUTFIT_DEFAULT"))
			{
				PED::_SET_PED_BODY_COMPONENT(*iParam0, bParam13);
				PED::_UPDATE_PED_VARIATION(*iParam0, false, true, true, true, false);
			}
			PED::SET_PED_CAN_BE_TARGETTED(*iParam0, bParam7);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 233, bParam8);
			if (bParam8 == 1)
			{
				PED::SET_PED_ACCURACY(*iParam0, 50);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 167, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 307, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 52, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 41, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 143, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 103, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 146, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 148, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 168, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 250, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 96, true);
				PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, true);
				PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 58, true);
				PED::SET_PED_SEEING_RANGE(*iParam0, 30f);
				PED::_0x6569F31A01B4C097(*iParam0, 6, 1);
				PED::_0x6569F31A01B4C097(*iParam0, 0, 1);
				if (PED::IS_PED_HUMAN(*iParam0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 1, 0);
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), *iParam0, 7, 0, 1);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 186, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 35, true);
			WEAPON::SET_PED_INFINITE_AMMO(*iParam0, true, 0);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			if (ENTITY::DOES_ENTITY_EXIST(iParam9) && !ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iParam9))
				{
					PED::SET_PED_INTO_VEHICLE(*iParam0, ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam9), iParam10);
				}
				else if (ENTITY::IS_ENTITY_A_PED(iParam9) && PED::_0x2D64376CF437363E(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam9)))
				{
					PED::_SET_PED_ON_MOUNT(*iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam9), iParam10, true);
				}
			}
			return true;
		}
	}
	return false;
}

void func_357(var uParam0)
{
	if (iLocal_127 == 2)
	{
		return;
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

bool func_358(var uParam0)
{
	if (iLocal_127 == 0)
	{
		__LIB_13__::func_282(&Local_135, &iLocal_1275, &Local_1336, 4.5f, -1082130432 /* Float: -1f */, 0);
		if (func_318(&iLocal_198, 0, 0f, 0f, 0f, 0f, 0))
		{
		}
		if (func_318(&Local_177, 3, 0f, 0f, 0f, 0f, 0))
		{
		}
		if (((!__LIB_8__::func_684("DST2_KBEG") && !__LIB_8__::func_684("DST2_ANTAG1")) && !__LIB_8__::func_684("DST2_ANTAG2")) && !__LIB_8__::func_684("DST2_ANTAG3"))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_135) && ENTITY::DOES_ENTITY_EXIST(iLocal_198)) && ENTITY::DOES_ENTITY_EXIST(Local_177))
			{
				__LIB_13__::func_520(&iLocal_847);
				__LIB_8__::func_771(Local_135, 1, 1, 0);
				__LIB_1__::func_480(&Local_135);
				__LIB_2__::func_480(&Local_1336, 1, 1, 1, 0);
				__LIB_12__::func_991(&iLocal_1275, Local_135);
				return true;
			}
		}
		return false;
	}
	return true;
}

int func_364(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_12__::func_927(uParam4);
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
			func_767(uParam4);
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
				__LIB_12__::func_927(uParam4);
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
				func_773(uParam4);
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
					func_774(&(uParam4->f_405), 0);
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
				func_773(uParam4);
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

void func_370()
{
	if (PED::_0x91A5F9CBEBB9D936(iLocal_1091[0]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1091[0], false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_1091[1]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1091[1], false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_1091[2]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1091[2], false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_1091[3]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1091[3], false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_1091[4]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1091[4], false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[2]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_1041[2]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_1041[2]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[2]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[3]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_1041[3]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_1041[3]);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_1041[3], 1, 0);
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1041[3]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[3]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[6]))
	{
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_1041[6], 1, 0);
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1041[6]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[6]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[7]))
	{
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_1041[7], 1, 0);
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1041[7]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[7]);
	}
}

void func_374(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_225(iParam0))
		{
			iLocal_1130[iParam0] = 1;
		}
	}
	else
	{
		iLocal_1130[iParam0] = 0;
	}
}

void func_378(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_1124, 1))
	{
		if (iLocal_1128 >= 4)
		{
			__LIB_1__::func_683(&iLocal_1124, 1);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1124, 2))
	{
		if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_SHOOTOUT"));
			__LIB_1__::func_683(&iLocal_1124, 1);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1124, 4))
	{
		if (__LIB_0__::func_27(iLocal_1124, 2))
		{
			if (__LIB_0__::func_27(iLocal_1118, 134217728))
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_SHOOTOUT"));
				__LIB_1__::func_683(&iLocal_1124, 4);
			}
		}
	}
}

bool func_379(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iLocal_1118, 1))
	{
		func_836(0);
		__LIB_1__::func_683(&iLocal_1118, 1);
	}
	func_838(uParam0, &Local_135, __LIB_2__::func_825(Local_156), 10, &iLocal_1379, &iLocal_1373, &iLocal_1375);
	func_839(uParam0, &Local_156, iLocal_813, 1, &iLocal_1374, &iLocal_1376, &iLocal_1375);
	func_840(uParam0, &Local_177, iLocal_814, 3, &iLocal_1372);
	func_841();
	func_842(uParam0);
	switch (*iParam1)
	{
		case 0:
			if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_177)) && !PED::IS_PED_INJURED(Local_156)) && !PED::IS_PED_INJURED(Local_135))
			{
				if (__LIB_0__::func_394(Local_156, iLocal_813, 0) && __LIB_13__::func_561(Local_156, Local_135))
				{
					if (Local_156.f_3 == 4)
					{
						if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_156, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_156)) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_156) >= 800)
						{
							*iParam1++;
						}
					}
				}
			}
			break;
		case 1:
			__LIB_0__::func_490(&iLocal_792, 0);
			__LIB_0__::func_490(&iLocal_816, 0);
			__LIB_0__::func_490(&iLocal_771, 0);
			func_462(&iLocal_817, 0);
			__LIB_1__::func_683(&iLocal_1118, 67108864);
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			return true;
	}
	return false;
}

void func_380()
{
	iLocal_132 = 0;
	__LIB_1__::func_681(&iLocal_1118, 1);
}

bool func_381(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iLocal_1118, 1))
	{
		func_836(1);
		__LIB_1__::func_683(&iLocal_1118, 1);
	}
	func_838(uParam0, &Local_135, __LIB_2__::func_825(Local_156), 10, &iLocal_1379, &iLocal_1373, &iLocal_1375);
	func_839(uParam0, &Local_156, iLocal_813, 1, &iLocal_1374, &iLocal_1376, &iLocal_1375);
	func_840(uParam0, &Local_177, iLocal_814, 3, &iLocal_1372);
	if (!__LIB_0__::func_27(iLocal_1118, 4194304))
	{
		if (__LIB_0__::func_266(Global_35, vLocal_71, 40f, 1, 1))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
			__LIB_1__::func_683(&iLocal_1118, 4194304);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1118, 8388608))
	{
		if (__LIB_0__::func_266(Global_35, vLocal_71, 25f, 1, 1))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
			__LIB_1__::func_683(&iLocal_1118, 8388608);
		}
	}
	__LIB_9__::func_204(Global_35, vLocal_1271, &uLocal_992, 60f, 50f, 35f, 29f, 2f, 0, 0, 1, 1, 1);
	func_845();
	func_846();
	func_842(uParam0);
	switch (*iParam1)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, vLocal_68, 50f, 1, 1))
			{
				func_308(uParam0, 1, 1);
				*iParam1++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_135) && !PED::IS_PED_INJURED(Global_35))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1373) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1373, false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_135, iLocal_1373))
				{
					__LIB_1__::func_683(&iLocal_1118, 262144);
					__LIB_2__::func_259(&uLocal_995);
					*iParam1++;
				}
				else if (__LIB_1__::func_205(Global_35, iLocal_1041[23], 1, 0))
				{
					__LIB_1__::func_683(&iLocal_1118, 262144);
					*iParam1++;
				}
			}
			break;
		case 2:
			if ((__LIB_0__::func_899(&uLocal_995) && __LIB_9__::func_401(&uLocal_995) > 650) || __LIB_1__::func_205(Global_35, iLocal_1041[23], 1, 0))
			{
				if ((((__LIB_0__::func_27(iLocal_1118, 524288) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1372)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1372, false)) || !__LIB_0__::func_27(iLocal_1118, 524288)) && (((__LIB_0__::func_27(iLocal_1118, 1048576) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1374)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1374, false)) || !__LIB_0__::func_27(iLocal_1118, 1048576)))
				{
					__LIB_0__::func_105(1);
					__LIB_1__::func_681(&iLocal_1118, 33554432);
					__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_382(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iLocal_1118, 1))
	{
		func_836(2);
		__LIB_1__::func_683(&iLocal_1118, 1);
	}
	if (!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	}
	func_838(uParam0, &Local_135, iLocal_813, 10, &iLocal_1379, &iLocal_1373, &iLocal_1375);
	func_839(uParam0, &Local_156, iLocal_813, 1, &iLocal_1372, &iLocal_1376, &iLocal_1375);
	func_840(uParam0, &Local_177, iLocal_814, 3, &iLocal_1374);
	func_848(iLocal_1376);
	if (!__LIB_0__::func_27(iLocal_1118, 65536))
	{
		if (!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			if (__LIB_0__::func_27(iLocal_1121, 4) && __LIB_0__::func_27(iLocal_1121, 2048))
			{
				if (func_225(108) || func_225(109))
				{
					__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
					__LIB_1__::func_683(&iLocal_1118, 65536);
				}
			}
		}
		else if (__LIB_0__::func_27(iLocal_1118, 134217728))
		{
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			__LIB_1__::func_683(&iLocal_1118, 65536);
		}
	}
	if (!func_225(6))
	{
		if (!__LIB_0__::func_899(&uLocal_989))
		{
			if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || func_225(109))
			{
				__LIB_13__::func_89(uParam0, "RDST2_O_KILLENEMIES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				}
				__LIB_2__::func_259(&uLocal_989);
			}
		}
		else
		{
			if (!func_225(6))
			{
				if (__LIB_5__::func_352("RDST2_O_KILLENEMIES"))
				{
					func_374(6, 1);
				}
			}
			if (!func_225(6) && !__LIB_5__::func_352("RDST2_O_KILLENEMIES"))
			{
				if (!__LIB_0__::func_27(iLocal_1118, 131072))
				{
					if (!PED::IS_PED_INJURED(Global_35) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PED::IS_PED_SHOOTING(Global_35) || PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
						{
							__LIB_1__::func_683(&iLocal_1118, 131072);
						}
					}
				}
				if (!__LIB_0__::func_27(iLocal_1118, 131072))
				{
					if ((__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) && __LIB_1__::func_583(&uLocal_989) > 10f) || (func_225(109) && __LIB_1__::func_583(&uLocal_989) > 20f))
					{
						__LIB_12__::func_883(uParam0, "RDST2_O_KILLENEMIES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_374(6, 1);
					}
				}
				else
				{
					func_374(6, 1);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1118, 134217728) && __LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			if (__LIB_0__::func_27(iLocal_1118, 4194304))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
				__LIB_1__::func_681(&iLocal_1118, 4194304);
			}
			if (__LIB_0__::func_27(iLocal_1118, 8388608))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
				__LIB_1__::func_683(&iLocal_1118, 8388608);
			}
		}
		if (!PED::IS_PED_INJURED(Local_177))
		{
			if (__LIB_0__::func_27(Local_177.f_8, 4194304))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_177, "Cautious", 0f, -1);
				__LIB_1__::func_681(&(Local_177.f_8), 4194304);
			}
			if (__LIB_0__::func_27(Local_177.f_8, 8388608))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_177, "Stealth", 0f, -1);
				__LIB_1__::func_683(&(Local_177.f_8), 8388608);
			}
		}
		if (!PED::IS_PED_INJURED(Local_156))
		{
			if (__LIB_0__::func_27(Local_156.f_8, 4194304))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_156, "Cautious", 0f, -1);
				__LIB_1__::func_681(&(Local_156.f_8), 4194304);
			}
			if (__LIB_0__::func_27(Local_156.f_8, 8388608))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_156, "Stealth", 0f, -1);
				__LIB_1__::func_683(&(Local_156.f_8), 8388608);
			}
		}
	}
	func_850();
	func_851(uParam0);
	func_852();
	__LIB_0__::func_11(uParam0);
	switch (*iParam1)
	{
		case 0:
			if (__LIB_0__::func_272(Local_135, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135, true);
			}
			__LIB_13__::func_89(uParam0, "RDST2_O_KILLENEMIES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			*iParam1++;
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_1118, 134217728))
			{
				if (__LIB_0__::func_27(iLocal_1117, 1024))
				{
					if (!func_225(5))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), vLocal_15, true) > 130f)
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_12__::func_883(uParam0, "GANG_RET", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_374(5, 1);
						}
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_1118, 134217728) && MAP::DOES_BLIP_EXIST(iLocal_1038))
			{
				if (__LIB_0__::func_27(iLocal_1117, 512))
				{
					if (!func_225(7))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), -62.84f, 1237.88f, 169.77f, true) > (150f / 2f))
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_12__::func_883(uParam0, "RDST2_O_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_374(7, 1);
						}
					}
				}
			}
			if (!__LIB_0__::func_27(iLocal_1118, 134217728))
			{
				if (__LIB_0__::func_27(iLocal_1121, -2147483648))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (!func_225(125) && !func_225(126))
						{
							if (Local_156.f_18 <= Local_177.f_18)
							{
								if (__LIB_12__::func_876(uParam0, "DST2LASTONEBJ", 0))
								{
									func_374(125, 1);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "DST2LASTONEBB", 0))
							{
								func_374(126, 1);
							}
						}
						else if (!func_225(127))
						{
							if (__LIB_12__::func_876(uParam0, "DST2LASTONEB", 0))
							{
								__LIB_1__::func_683(&iLocal_1118, 134217728);
								func_374(127, 1);
							}
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_1121, 65536))
				{
					if ((!func_225(120) && !func_225(118)) && !func_225(122))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (Local_156.f_18 < 15f || Local_177.f_18 < 15f)
							{
								if (Local_156.f_18 < Local_177.f_18)
								{
									if (__LIB_12__::func_876(uParam0, "DST2MOREEJ", 0))
									{
										Local_156.f_13 = 0;
										Local_156.f_12 = MISC::GET_GAME_TIMER();
										Local_177.f_13 = 0;
										Local_177.f_12 = MISC::GET_GAME_TIMER();
										iLocal_1102 = MISC::GET_GAME_TIMER();
										func_374(120, 1);
										func_374(118, 1);
										func_374(122, 1);
									}
								}
								else if (__LIB_12__::func_876(uParam0, "DST2MOREEB", 0))
								{
									Local_156.f_13 = 0;
									Local_156.f_12 = MISC::GET_GAME_TIMER();
									Local_177.f_13 = 0;
									Local_177.f_12 = MISC::GET_GAME_TIMER();
									iLocal_1102 = MISC::GET_GAME_TIMER();
									func_374(120, 1);
									func_374(118, 1);
									func_374(122, 1);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "DST2MOREEA", 0))
							{
								Local_156.f_13 = 0;
								Local_156.f_12 = MISC::GET_GAME_TIMER();
								Local_177.f_13 = 0;
								Local_177.f_12 = MISC::GET_GAME_TIMER();
								iLocal_1102 = MISC::GET_GAME_TIMER();
								func_374(120, 1);
								func_374(118, 1);
								func_374(122, 1);
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_1102) > 12500)
					{
						if ((!func_225(121) && !func_225(119)) && !func_225(123))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (Local_156.f_18 < 15f || Local_177.f_18 < 15f)
								{
									if (Local_156.f_18 < Local_177.f_18)
									{
										if (__LIB_12__::func_876(uParam0, "DST2MOREE2J", 0))
										{
											Local_156.f_13 = 0;
											Local_156.f_12 = MISC::GET_GAME_TIMER();
											Local_177.f_13 = 0;
											Local_177.f_12 = MISC::GET_GAME_TIMER();
											iLocal_1102 = MISC::GET_GAME_TIMER();
											func_374(121, 1);
											func_374(119, 1);
											func_374(123, 1);
										}
									}
									else if (__LIB_12__::func_876(uParam0, "DST2MOREE2B", 0))
									{
										Local_156.f_13 = 0;
										Local_156.f_12 = MISC::GET_GAME_TIMER();
										Local_177.f_13 = 0;
										Local_177.f_12 = MISC::GET_GAME_TIMER();
										iLocal_1102 = MISC::GET_GAME_TIMER();
										func_374(121, 1);
										func_374(119, 1);
										func_374(123, 1);
									}
								}
								else if (__LIB_12__::func_876(uParam0, "DST2MOREE2A", 0))
								{
									Local_156.f_13 = 0;
									Local_156.f_12 = MISC::GET_GAME_TIMER();
									Local_177.f_13 = 0;
									Local_177.f_12 = MISC::GET_GAME_TIMER();
									iLocal_1102 = MISC::GET_GAME_TIMER();
									func_374(121, 1);
									func_374(119, 1);
									func_374(123, 1);
								}
							}
						}
					}
				}
			}
			else if ((!func_225(128) && !func_225(132)) && !func_225(130))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (Local_156.f_18 < 15f || Local_177.f_18 < 15f)
					{
						if (Local_156.f_18 < Local_177.f_18)
						{
							if (__LIB_12__::func_876(uParam0, "DST2GOCABIN", 0))
							{
								__LIB_1__::func_561(&uLocal_989);
								Local_156.f_13 = 0;
								Local_156.f_12 = MISC::GET_GAME_TIMER();
								Local_177.f_13 = 0;
								Local_177.f_12 = MISC::GET_GAME_TIMER();
								Local_135.f_13 = 0;
								Local_135.f_12 = MISC::GET_GAME_TIMER();
								func_374(128, 1);
								func_374(132, 1);
								func_374(130, 1);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "DST2GOCABINB", 0))
						{
							__LIB_1__::func_561(&uLocal_989);
							Local_156.f_13 = 0;
							Local_156.f_12 = MISC::GET_GAME_TIMER();
							Local_177.f_13 = 0;
							Local_177.f_12 = MISC::GET_GAME_TIMER();
							Local_135.f_13 = 0;
							Local_135.f_12 = MISC::GET_GAME_TIMER();
							func_374(128, 1);
							func_374(132, 1);
							func_374(130, 1);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "DST2GOCABINA", 0))
					{
						__LIB_1__::func_561(&uLocal_989);
						Local_156.f_13 = 0;
						Local_156.f_12 = MISC::GET_GAME_TIMER();
						Local_177.f_13 = 0;
						Local_177.f_12 = MISC::GET_GAME_TIMER();
						func_374(128, 1);
						func_374(132, 1);
						func_374(130, 1);
					}
				}
			}
			else if (!func_225(8))
			{
				if (!__LIB_0__::func_899(&uLocal_989))
				{
					__LIB_13__::func_89(uParam0, "RDST2_O_SEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_1038))
					{
						iLocal_1038 = __LIB_5__::func_554(408396114, iLocal_1041[16], 1);
					}
					func_323(&Local_156, 14, 0, -1);
					func_323(&Local_177, 14, 0, -1);
					func_323(&Local_135, 14, 0, -1);
					__LIB_2__::func_259(&uLocal_989);
				}
				else
				{
					if (!func_225(8))
					{
						if (__LIB_5__::func_352("RDST2_O_SEARCH"))
						{
							func_374(8, 1);
						}
					}
					if (!func_225(8) && !__LIB_5__::func_352("RDST2_O_SEARCH"))
					{
						if ((func_225(128) || func_225(132)) || func_225(130))
						{
							if ((!__LIB_8__::func_684("DST2GOCABIN") && !__LIB_8__::func_684("DST2GOCABINA")) && !__LIB_8__::func_684("DST2GOCABINB"))
							{
								__LIB_12__::func_883(uParam0, "RDST2_O_SEARCH", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(8, 1);
							}
						}
					}
				}
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_1038))
			{
				if (!__LIB_0__::func_27(iLocal_1118, 4194304))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
					__LIB_1__::func_683(&iLocal_1118, 4194304);
				}
				if (!__LIB_0__::func_27(iLocal_1118, 1024))
				{
					func_308(uParam0, 2, 0);
					__LIB_1__::func_683(&iLocal_1118, 1024);
				}
				if (PED::IS_PED_RESPONDING_TO_EVENT(Global_35, 769834622) || __LIB_1__::func_205(Global_35, iLocal_1041[18], 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
				}
				if (PED::IS_PED_RESPONDING_TO_EVENT(Global_35, 769834622) || __LIB_1__::func_205(Global_35, iLocal_1041[19], 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
				}
				if (!PED::IS_PED_RESPONDING_TO_EVENT(Global_35, 769834622) && __LIB_1__::func_205(Global_35, iLocal_1041[19], 1, 0))
				{
					if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
						PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					}
				}
				if (__LIB_1__::func_205(Global_35, iLocal_1041[18], 1, 0) && PED::IS_PED_RESPONDING_TO_EVENT(Global_35, 769834622))
				{
					if (!__LIB_0__::func_899(&uLocal_1010))
					{
						__LIB_2__::func_259(&uLocal_1010);
					}
				}
				else
				{
					__LIB_1__::func_561(&uLocal_1010);
				}
				if (__LIB_1__::func_205(Global_35, iLocal_1041[18], 1, 0))
				{
					if (!__LIB_0__::func_899(&uLocal_1013))
					{
						__LIB_2__::func_259(&uLocal_1013);
					}
				}
				else
				{
					__LIB_1__::func_561(&uLocal_1013);
				}
				if (((__LIB_0__::func_899(&uLocal_1010) && __LIB_9__::func_401(&uLocal_1010) >= 1250) || (__LIB_0__::func_899(&uLocal_1013) && __LIB_9__::func_401(&uLocal_1013) >= 1550)) || (__LIB_1__::func_205(Global_35, iLocal_1041[18], 1, 0) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -252307178)))
				{
					__LIB_0__::func_325(&iLocal_1038);
					__LIB_1__::func_561(&uLocal_989);
					__LIB_1__::func_561(&uLocal_1001);
					func_374(8, 0);
					__LIB_12__::func_997(uParam0, func_61(6), func_61(7), 6, 7, 0);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_383(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iLocal_1118, 1))
	{
		func_836(3);
		__LIB_1__::func_683(&iLocal_1118, 1);
	}
	func_855();
	func_448();
	func_856();
	func_857(uParam0);
	switch (*iParam1)
	{
		case 0:
			if ((__LIB_0__::func_27(iLocal_1118, 4096) && __LIB_0__::func_27(iLocal_1118, 8192)) && __LIB_0__::func_27(iLocal_1115, 4))
			{
				if (func_320(uParam0, &iLocal_815, vLocal_106.x, vLocal_106.y, vLocal_106.z, fLocal_109))
				{
					if (!PED::IS_PED_INJURED(iLocal_815))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_815, vLocal_106, fLocal_109, true, false, true);
						ENTITY::_0x9587913B9E772D29(iLocal_815, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_815, true);
						TASK::TASK_STAND_STILL(iLocal_815, -1);
					}
					__LIB_0__::func_325(&iLocal_1038);
					UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_2__::func_259(&uLocal_995);
					*iParam1++;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_899(&uLocal_995) && __LIB_1__::func_583(&uLocal_995) > 2.5f)
			{
				if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_BILLSTACK")))
				{
					MISC::_0x154340E87D8CC178(joaat("REWARD_BILLSTACK"));
				}
				return true;
			}
			break;
	}
	return false;
}

void func_420(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = __LIB_1__::func_145(iParam0, &iVar7, &iVar8);
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
						func_899(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_899(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_899(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_899(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_899(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_899(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_899(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_899(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_899(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_899(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_899(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_899(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_899(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_901();
						func_902(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						Jump @4027; //curOff = 2447
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						Jump @4027; //curOff = 2467
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						Jump @4027; //curOff = 2487
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						Jump @4027; //curOff = 2510
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						Jump @4027; //curOff = 2527
						func_899(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						Jump @4027; //curOff = 2584
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						Jump @4027; //curOff = 2618
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						Jump @4027; //curOff = 2672
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_420(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						Jump @4027; //curOff = 2761
						__LIB_0__::func_875();
						Jump @4027; //curOff = 2768
						__LIB_0__::func_876();
						Jump @4027; //curOff = 2775
						func_909(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						Jump @4027; //curOff = 2815
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						Jump @4027; //curOff = 2869
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
						Jump @4027; //curOff = 2950
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						Jump @4027; //curOff = 2969
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						Jump @4027; //curOff = 2989
						__LIB_0__::func_879();
						Jump @4027; //curOff = 2996
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
						Jump @4027; //curOff = 3039
						__LIB_0__::func_881();
						Jump @4027; //curOff = 3046
						__LIB_0__::func_882();
						Jump @4027; //curOff = 3053
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_420(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_420(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						Jump @4027; //curOff = 3206
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						Jump @4027; //curOff = 3226
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						Jump @4027; //curOff = 3246
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						Jump @4027; //curOff = 3266
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						Jump @4027; //curOff = 3303
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						Jump @4027; //curOff = 3323
						Jump @4027; //curOff = 3326
						__LIB_0__::func_883();
						Jump @4027; //curOff = 3333
						__LIB_0__::func_884();
						Jump @4027; //curOff = 3340
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						Jump @4027; //curOff = 3360
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						Jump @4027; //curOff = 3401
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						Jump @4027; //curOff = 3421
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						Jump @4027; //curOff = 3458
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
						func_899(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_899(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @4027; //curOff = 3661
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						Jump @4027; //curOff = 3703
						__LIB_0__::func_887();
						Jump @4027; //curOff = 3710
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
						Jump @4027; //curOff = 3962
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						Jump @4027; //curOff = 3990
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						Jump @4027; //curOff = 4014
						__LIB_1__::func_146(-5500);
						Jump @5141; //curOff = 4027
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
						Jump @5141; //curOff = 5079
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
						func_936();
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
										if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
										{
											func_899(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
									__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
								{
									__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
								}
								else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
								{
									__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
								{
									__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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
void func_421(int iParam0, bool bParam1)
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

void func_448()
{
	int iVar0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (!__LIB_0__::func_27(iLocal_1122, 1))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1041[16], 1, 0))
			{
				if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_HUMAN_WEAPON_DBSHOTGUN_PICKUP_WORN")) && TASK::_0x02EBBB3989B7E695(Global_35))
				{
					__LIB_0__::func_325(&iLocal_1038);
					UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_899(joaat("KIT_GUN_OIL"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
					func_899(joaat("AMMO_SHOTGUN"), 4, 1, 0, 0, 752097756, 0, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1122, 1);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_1122, 2))
		{
			if (__LIB_0__::func_27(iLocal_1122, 1))
			{
				if ((!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_HUMAN_WEAPON_DBSHOTGUN_PICKUP_WORN")) && WEAPON::IS_WEAPON_VALID(iVar0)) && iVar0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
				{
					WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 1);
					WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0);
					__LIB_1__::func_683(&iLocal_1115, 1);
					__LIB_1__::func_683(&iLocal_1122, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_1122, 16))
		{
			if (__LIB_0__::func_27(iLocal_1122, 1))
			{
				if (__LIB_0__::func_27(iLocal_1115, 1))
				{
					if (!func_225(137))
					{
						iLocal_1025 = __LIB_0__::func_45("RDST2_H_SHOTGUN_2", 10000, 0, 0, 0, 1);
						if (__LIB_0__::func_269(iLocal_1025))
						{
							func_374(137, 1);
							__LIB_1__::func_683(&iLocal_1122, 16);
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_1122, 32))
		{
			if (__LIB_0__::func_27(iLocal_1122, 16))
			{
				if (!func_225(138))
				{
					if (!__LIB_0__::func_269(iLocal_1025))
					{
						iLocal_1025 = __LIB_0__::func_45("RDST2_H_SHOTGUN_3", 10000, 0, 0, 0, 1);
						if (__LIB_0__::func_269(iLocal_1025))
						{
							func_374(138, 1);
							__LIB_1__::func_683(&iLocal_1122, 32);
						}
					}
				}
			}
		}
		if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_HUMAN_WEAPON_DBSHOTGUN_PICKUP_WORN")))
		{
			if (__LIB_3__::func_63())
			{
				__LIB_3__::func_739(0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		}
	}
}

void func_454()
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[23]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1041[23]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[15]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1041[15]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[16]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1041[16]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[13]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1041[13]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[14]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1041[14]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[28]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1041[28]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[17]))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1041[17]);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1041[17]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[17]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[9]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1041[9], 0);
		VOLUME::_DELETE_VOLUME(iLocal_1041[9]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[10]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1041[10], 0);
		VOLUME::_DELETE_VOLUME(iLocal_1041[10]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[11]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1041[11], 0);
		VOLUME::_DELETE_VOLUME(iLocal_1041[11]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[12]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_1041[12], 0);
		VOLUME::_DELETE_VOLUME(iLocal_1041[12]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[24]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_1041[24]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[24]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[29]))
	{
		__LIB_3__::func_142(iLocal_1041[29]);
		VOLUME::_DELETE_VOLUME(iLocal_1041[29]);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1091)
	{
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1091[iVar0]))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1091[iVar0], false);
		}
		iVar0++;
	}
}

void func_458(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	func_420(iVar0, 1, bParam1, 0, 1);
	__LIB_9__::func_615(iParam0, -1);
	if (bParam2)
	{
		if (__LIB_1__::func_268(iVar0) >= 1)
		{
			__LIB_9__::func_616(iVar0, (__LIB_1__::func_268(iVar0) - 1));
		}
	}
	else
	{
		__LIB_0__::func_703(0, 12);
		iVar1 = __LIB_9__::func_602(iParam0);
		if (__LIB_1__::func_268(iVar0) <= 1)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (__LIB_0__::func_485() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			__LIB_13__::func_367(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_461(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_0__::func_325(&((iParam0[iVar0 /*21*/])->f_2));
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*21*/], 0))
		{
			PED::SET_PED_KEEP_TASK((*iParam0)[iVar0 /*21*/], bParam2);
		}
		__LIB_0__::func_490(iParam0[iVar0 /*21*/], bParam1);
		iVar0++;
	}
}

void func_462(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_992(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_464()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_851)
	{
		if (Local_851[iVar0 /*5*/].f_4 != 0)
		{
			TASK::REMOVE_COVER_POINT(Local_851[iVar0 /*5*/].f_4);
		}
		iVar0++;
	}
}

void func_465()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1073)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_1073[iVar0]);
		}
		iVar0++;
	}
}

void func_468(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	if (__LIB_0__::func_272(Local_135, 0))
	{
		__LIB_1__::func_726(Local_135, 1);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_1__::func_727(Global_35, 1);
	}
	__LIB_5__::func_438(&uLocal_970);
	if (!PED::IS_PED_INJURED(Global_35))
	{
		WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 1);
		WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
	}
	if (!PED::IS_PED_INJURED(iLocal_815))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_815, 48, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_813))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_813, 48, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_814))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_814, 48, false);
	}
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	HUD::_0x160825DADF1B04B3();
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_BILLSTACK")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_BILLSTACK"));
	}
}

void func_499(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_3__::func_743(iVar0, &uParam1))
		{
		}
		else if (__LIB_0__::func_903(iVar0) && !__LIB_0__::func_699(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(__LIB_0__::func_271(iVar0), *uParam0, true, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_271(iVar0), false, true);
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(iVar0, 0));
				PERSCHAR::_0x631CD2D77FDC0316(__LIB_0__::func_748(iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_503(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (iParam3 == 0)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true, 0, false) && iVar0 == iParam2)
			{
				__LIB_13__::func_522(uParam0, iParam1, 0, sParam4, 0, 0);
			}
			else if (iParam5 == 1)
			{
				if ((WEAPON::_IS_WEAPON_REPEATER(iParam2) || WEAPON::_IS_WEAPON_RIFLE(iParam2)) || WEAPON::_IS_WEAPON_SNIPER(iParam2))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true, 9, false) && iVar0 == iParam2)
					{
						__LIB_13__::func_522(uParam0, iParam1, 9, sParam4, 0, 0);
					}
				}
				else if (WEAPON::_IS_WEAPON_REVOLVER(iParam2) || WEAPON::_IS_WEAPON_PISTOL(iParam2))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true, 2, false) && iVar0 == iParam2)
					{
						__LIB_13__::func_522(uParam0, iParam1, 2, sParam4, 0, 0);
					}
				}
			}
		}
		else if (iParam3 == 1)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true, 1, false) && iVar0 == iParam2)
			{
				__LIB_13__::func_522(uParam0, iParam1, 1, sParam4, 0, 0);
			}
			else if (iParam5 == 1)
			{
				if (WEAPON::_IS_WEAPON_REVOLVER(iParam2) || WEAPON::_IS_WEAPON_PISTOL(iParam2))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true, 3, false) && iVar0 == iParam2)
					{
						__LIB_13__::func_522(uParam0, iParam1, 3, sParam4, 0, 0);
					}
				}
			}
		}
		else if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true, iParam3, false))
		{
			__LIB_13__::func_522(uParam0, iParam1, iParam3, sParam4, 0, 0);
		}
	}
}

void func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!PED::IS_PED_INJURED(iParam0) && WEAPON::IS_WEAPON_VALID(iParam1))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, true) && !WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, false))
		{
			__LIB_4__::func_7(iParam0, iParam1, iParam3, iParam2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			if (iParam5 == 1)
			{
				WEAPON::_0xE9BD19F8121ADE3E(iParam0, iParam1);
			}
			if (iParam6 == 1 && !PED::IS_PED_INJURED(iParam4))
			{
				WEAPON::_0x14FF0C2545527F9B(iParam4, iParam1, iParam0);
			}
		}
		else
		{
			func_899(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam1), iParam3, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
}

int func_507(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_3__::func_743(iVar1, &uParam1))
		{
		}
		else if (__LIB_0__::func_903(iVar1))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(__LIB_0__::func_271(iVar1), *uParam0, true, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_551(int iParam0, int iParam1)
{
	var uVar0;
	return func_1039(&uVar0, iParam0, iParam1);
}

int func_559(bool bParam0)
{
	if (bParam0 == 1)
	{
		return (((((func_1048(&Local_240) + func_1048(&Local_304)) + func_1048(&Local_326)) + func_1048(&Local_453)) + func_1048(&Local_538)) + func_1048(&Local_602));
	}
	return ((((func_1048(&Local_240) + func_1048(&Local_304)) + func_1048(&Local_326)) + func_1048(&Local_453)) + func_1048(&Local_538));
}

bool func_560(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_1121, 65536))
	{
		if (!__LIB_0__::func_27(iLocal_1121, 32768))
		{
			if (iParam1 <= 2)
			{
				__LIB_1__::func_683(&iLocal_1121, 32768);
			}
		}
		else if (func_729(&Local_602, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, 1, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), 1))
		{
			iVar0 = 0;
			while (iVar0 < Local_602)
			{
				if (!PED::IS_PED_INJURED(Local_602[iVar0 /*21*/]))
				{
					__LIB_4__::func_7(Local_602[iVar0 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_323(&(Local_602[iVar0 /*21*/]), 22, 0, 0);
				}
				iVar0++;
			}
			__LIB_1__::func_683(&iLocal_1121, 65536);
		}
	}
	return __LIB_0__::func_27(iLocal_1121, 65536);
}

void func_561(var uParam0, int* iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_177, 1, 1);
			if (__LIB_0__::func_27(iLocal_1121, 536870912))
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!__LIB_0__::func_27(iParam1->f_8, 4))
					{
						func_1049(iParam1, 1);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (((((func_1050(uParam0, iParam1, Global_35, 1, 1, 0) || __LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */)) || (iParam2 == 0 && __LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8))) || (iParam2 == 0 && __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))) || (iParam2 == 1 && __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))) || (iParam2 == 2 && __LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)))
				{
					__LIB_1__::func_683(&(iParam1->f_8), 8);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (AUDIO::_0x54B187F111D9C6F8(*iParam1, 1))
				{
					__LIB_1__::func_683(&(iParam1->f_8), 2097152);
				}
				else
				{
					__LIB_1__::func_681(&(iParam1->f_8), 2097152);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 33554432))
			{
				if (PED::IS_PED_BEING_STEALTH_KILLED(*iParam1))
				{
					AUDIO::STOP_PED_SPEAKING(*iParam1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 77, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 75, true);
					__LIB_1__::func_683(&(iParam1->f_8), 33554432);
				}
			}
			else if (!PED::IS_PED_BEING_STEALTH_KILLED(*iParam1))
			{
				AUDIO::STOP_PED_SPEAKING(*iParam1, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 77, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 75, false);
				__LIB_1__::func_681(&(iParam1->f_8), 33554432);
			}
			switch (iParam1->f_3)
			{
				case 16:
				case 17:
				case 20:
					if (!__LIB_0__::func_27(iParam1->f_8, 64))
					{
						PED::SET_PED_CONFIG_FLAG(*iParam1, 354, true);
						__LIB_1__::func_683(&(iParam1->f_8), 64);
					}
					break;
				default:
					if (__LIB_0__::func_27(iParam1->f_8, 64))
					{
						PED::SET_PED_CONFIG_FLAG(*iParam1, 354, false);
						__LIB_1__::func_681(&(iParam1->f_8), 64);
					}
					break;
			}
			if (__LIB_0__::func_27(iParam1->f_8, 67108864))
			{
				if (!__LIB_0__::func_27(iParam1->f_8, 134217728))
				{
					if ((((func_1051(iParam1) || PED::IS_PED_BEING_STEALTH_KILLED(*iParam1)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 32768, 0)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 8, 0)) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						__LIB_13__::func_520(&iLocal_847);
						__LIB_8__::func_771(*iParam1, 0, 1, 0);
						__LIB_8__::func_771(Local_177, 1, 1, 0);
						__LIB_1__::func_683(&(iParam1->f_8), 134217728);
					}
				}
			}
			switch (iParam1->f_3)
			{
				case 16:
					if (iParam1->f_6 == 0)
					{
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[12]))
						{
							STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_PEE"), 15, 0, 0);
							if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_PEE"), false))
							{
								if (!PED::_IS_PED_USING_SCENARIO_HASH(*iParam1, joaat("WORLD_HUMAN_PEE")))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
									TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[12], 0, 0, false, true, 0, false, -1f, false);
								}
								__LIB_1__::func_683(&(iParam1->f_8), 128);
								iParam1->f_6 = 1;
							}
						}
					}
					if (__LIB_0__::func_27(iParam1->f_8, 8))
					{
						if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
						{
							func_323(iParam1, 22, 0, 0);
						}
						else
						{
							func_323(iParam1, 20, 0, 0);
						}
					}
					break;
				case 17:
					switch (iParam2)
					{
						case 1:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_6 == 0)
									{
										if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[11]))
										{
											STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BADASS"), 15, 0, 0);
											if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BADASS"), false))
											{
												if (!PED::_IS_PED_USING_SCENARIO_HASH(*iParam1, joaat("WORLD_HUMAN_BADASS")))
												{
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[11], 0, 0, false, true, 0, false, -1f, false);
												}
												__LIB_1__::func_683(&(iParam1->f_8), 128);
												iParam1->f_10 = 0;
												iParam1->f_6 = 1;
											}
										}
									}
									else if (func_225(50))
									{
										if (!__LIB_8__::func_684("DST2_GRD4TURNS"))
										{
											if (iParam1->f_10 == 0)
											{
												iParam1->f_10 = MISC::GET_GAME_TIMER();
											}
											else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 1500)
											{
												func_323(iParam1, 17, 0, 1);
											}
										}
									}
									break;
								case 1:
									if (iParam1->f_6 == 0)
									{
										if (__LIB_0__::func_27(iParam1->f_8, 128))
										{
											PED::_0xEC6935EBE0847B90(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[0 /*21*/], false, false));
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[0 /*21*/], false, false), 0);
										TASK::TASK_LOOK_AT_COORD(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[0 /*21*/], false, false), 3000, 2048, 51, 0);
										__LIB_2__::func_698(*iParam1, 90f, 15f, 160f, -120f, 120f);
										iParam1->f_10 = 0;
										iParam1->f_6 = 1;
									}
									else if (((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(*iParam1, Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(*iParam1, Local_177, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(*iParam1, Local_156, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(*iParam1, Local_135, 17))
									{
										__LIB_1__::func_683(&(iParam1->f_8), 8);
									}
									break;
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[7]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
									{
										if (!PED::_IS_PED_USING_SCENARIO_HASH(*iParam1, joaat("WORLD_HUMAN_GUARD_SCOUT")))
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 143, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 250, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[7], 0, 0, false, true, 0, false, -1f, false);
										}
										__LIB_1__::func_683(&(iParam1->f_8), 128);
										iParam1->f_6 = 1;
									}
								}
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_8, 8))
					{
						if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
						{
							func_323(iParam1, 22, 0, 0);
						}
						else
						{
							func_323(iParam1, 20, 0, 0);
						}
					}
					break;
				case 20:
					PED::SET_PED_RESET_FLAG(*iParam1, 27, true);
					if (iParam1->f_6 == 0)
					{
						func_1053(*iParam1);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_COMBAT_FLOAT(*iParam1, 5, 1f);
						PED::SET_COMBAT_FLOAT(*iParam1, 8, 0f);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 77, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 75, true);
						if (__LIB_0__::func_27(iParam1->f_8, 128))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						switch (iParam2)
						{
							case 0:
							case 1:
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
								break;
							case 2:
								AUDIO::SET_AMBIENT_VOICE_NAME(*iParam1, "0356_G_M_M_UniDuster_01_WHITE_02");
								__LIB_12__::func_875(uParam0, *iParam1, "ODR_PED1", 0);
								break;
						}
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 5000)
					{
						if (((!PED::IS_PED_DEAD_OR_DYING(*iParam1, true) && !PED::IS_PED_BEING_STUNNED(*iParam1, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(*iParam1)) && !PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 1, 0))
						{
							func_323(iParam1, 22, 0, 0);
						}
					}
					break;
				case 22:
					if (iParam1->f_6 == 0)
					{
						__LIB_1__::func_683(&iLocal_1121, 1073741824 /* Float: 2f */);
						func_1049(iParam1, 0);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						if (__LIB_0__::func_27(iParam1->f_8, 128))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						switch (iParam2)
						{
							case 0:
							case 1:
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
								break;
						}
						iParam1->f_6 = 1;
					}
					break;
				case 21:
					if (iParam1->f_6 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_2));
						func_1054(iParam1);
						func_1055(iParam1);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 1, 3f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 4);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if (iParam1->f_18 < 35f)
						{
							func_1056(iParam1, 4500, 6501);
						}
						if (iParam1->f_18 > 150f)
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
							__LIB_1__::func_683(&(iParam1->f_8), 32);
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_8, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_8), 1);
			}
			if (iParam1->f_5 == 0)
			{
				iParam1->f_5 = func_1057(iParam1);
				func_1058(iParam1->f_5, &uLocal_1125, &uLocal_1126, &uLocal_1127, &iLocal_1128, &uLocal_1129);
			}
		}
	}
}

void func_562(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_8, 16))
	{
		if (!func_1059(uParam0))
		{
			if (PED::_IS_PED_HOGTIED(*uParam0))
			{
				__LIB_1__::func_683(&(uParam0->f_8), 16);
			}
		}
	}
}

void func_563(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (__LIB_0__::func_27(iLocal_1121, 536870912))
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!__LIB_0__::func_27(iParam1->f_8, 4))
					{
						func_1049(iParam1, 1);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (func_1050(uParam0, iParam1, Global_35, 0, 0, 0) || __LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
				{
					__LIB_1__::func_683(&(iParam1->f_8), 8);
				}
			}
			if (__LIB_0__::func_27(iParam1->f_8, 67108864))
			{
				if (!__LIB_0__::func_27(iParam1->f_8, 134217728))
				{
					if ((((func_1051(iParam1) || PED::IS_PED_BEING_STEALTH_KILLED(*iParam1)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 32768, 0)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 8, 0)) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						__LIB_13__::func_520(&iLocal_847);
						__LIB_8__::func_771(*iParam1, 0, 1, 0);
						__LIB_8__::func_771(Local_156, 1, 1, 0);
						__LIB_1__::func_683(&(iParam1->f_8), 134217728);
					}
				}
			}
			switch (iParam1->f_3)
			{
				case 24:
					if (iParam1->f_6 == 0)
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_Guard_Sitting_Loop"))
						{
							PED::SET_PED_CONFIG_FLAG(*iParam1, 138, true);
							PED::SET_PED_CONFIG_FLAG(*iParam1, 354, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "enemy", *iParam1, 0);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_Guard_Sitting_Loop", true);
							ANIMSCENE::START_ANIM_SCENE(*iParam3);
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_Action_John_Kills_Enemy");
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_Guard_React_Back");
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_Guard_React_Left");
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_Guard_React_Right");
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_Guard_React_Forward");
							PED::_0xB8DE69D9473B7593(*iParam1, 17);
							PED::_0xB8DE69D9473B7593(*iParam1, 16);
							PED::_0xB8DE69D9473B7593(*iParam1, 15);
							PED::SET_PED_HEARING_RANGE(*iParam1, 100f);
							iParam1->f_6 = 1;
						}
					}
					else if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						func_323(iParam1, 26, 0, 0);
					}
					break;
				case 26:
					if (iParam1->f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
						{
							if (__LIB_8__::func_684("DST2DECIDEC2"))
							{
								__LIB_6__::func_900("DST2DECIDEC2", 1, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "enemy", *iParam1, 0);
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
							if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
							{
								if (vVar0.x < 0f)
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_Guard_React_Left", true);
								}
								else
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_Guard_React_Right", true);
								}
							}
							else if (vVar0.y < 0f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_Guard_React_Back", true);
							}
							else
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_Guard_React_Forward", true);
							}
							func_1053(*iParam1);
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
							TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
							iParam1->f_6 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
					{
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(*iParam3, "enemy") || ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "enemy"))
						{
							func_323(iParam1, 22, 0, 0);
						}
					}
					break;
				case 22:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								__LIB_1__::func_683(&iLocal_1121, 1073741824 /* Float: 2f */);
								func_1049(iParam1, 0);
								__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 138, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 354, false);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 81, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 30, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 24, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
								PED::_0x949B2F9ED2917F5D(*iParam1, 17);
								PED::_0x949B2F9ED2917F5D(*iParam1, 16);
								PED::_0x949B2F9ED2917F5D(*iParam1, 15);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 100f, 67108864, 0);
								iParam1->f_10 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 5000)
							{
								func_323(iParam1, 22, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 81, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 31, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
								iParam1->f_6 = 1;
							}
							break;
					}
					break;
				case 21:
					if (iParam1->f_6 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_2));
						func_1054(iParam1);
						func_1055(iParam1);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 1, 3f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 4);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if (iParam1->f_18 < 35f)
						{
							func_1056(iParam1, 4500, 6501);
						}
						if (iParam1->f_18 > 150f)
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
							__LIB_1__::func_683(&(iParam1->f_8), 32);
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_8, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_8), 1);
			}
			if (iParam1->f_5 == 0)
			{
				iParam1->f_5 = func_1057(iParam1);
				func_1058(iParam1->f_5, &uLocal_1125, &uLocal_1126, &uLocal_1127, &iLocal_1128, &uLocal_1129);
			}
		}
		switch (iParam1->f_3)
		{
			case 25:
				if (iParam1->f_6 == 0)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false) && !ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_Action_John_Kills_Enemy"))
						{
							if ((!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Global_35)) && !PED::IS_PED_INJURED(Local_156))
							{
								AUDIO::STOP_PED_SPEAKING(*iParam1, true);
								AUDIO::DISABLE_PED_PAIN_AUDIO(*iParam1, true);
								WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*iParam1, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "enemy", *iParam1, 0);
								switch (iParam1->f_7)
								{
									case 0:
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "john", Global_35, 0);
										break;
									case 1:
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_156, true);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "john", Local_156, 0);
										PED::SET_PED_CAN_BE_TARGETTED(*iParam1, false);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
										break;
								}
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_Action_John_Kills_Enemy", true);
								iParam1->f_6 = 1;
							}
						}
					}
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_Action_John_Kills_Enemy"))
				{
					switch (iParam1->f_7)
					{
						case 0:
							PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
							break;
						case 1:
							PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_156);
							break;
					}
					if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "john"))
					{
						switch (iParam1->f_7)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Global_35))
								{
									PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
									PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
								}
								break;
							case 1:
								if (!PED::IS_PED_INJURED(Local_156))
								{
									PED::_SET_PED_CROUCH_MOVEMENT(Local_156, true, 0, false);
									PED::FORCE_PED_MOTION_STATE(Local_156, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
								}
								break;
						}
						__LIB_1__::func_683(&iLocal_1118, 512);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(*iParam3);
				}
				break;
		}
	}
}

void func_564(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar12;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (__LIB_0__::func_27(iLocal_1121, 536870912))
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!__LIB_0__::func_27(iParam1->f_8, 4))
					{
						func_1049(iParam1, 1);
					}
				}
			}
			switch (iParam2)
			{
				case 0:
				case 1:
				case 2:
				case 4:
				case 5:
					if (!__LIB_0__::func_27(iParam1->f_8, 8))
					{
						if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 1)
						{
							if (__LIB_0__::func_27(iParam1->f_8, 1048576))
							{
								__LIB_1__::func_681(&(iParam1->f_8), 262144);
								__LIB_1__::func_681(&(iParam1->f_8), 1048576);
							}
							if (!__LIB_0__::func_27(iParam1->f_8, 262144))
							{
								switch (iParam2)
								{
									case 4:
										__LIB_2__::func_698(*iParam1, 21.25f, 5f, 60f, -30f, 30f);
										break;
									default:
										__LIB_2__::func_698(*iParam1, 12.25f, 5f, 90f, -30f, 30f);
										break;
								}
								__LIB_1__::func_683(&(iParam1->f_8), 262144);
							}
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 0)
						{
							if (__LIB_0__::func_27(iParam1->f_8, 262144))
							{
								__LIB_1__::func_681(&(iParam1->f_8), 262144);
								__LIB_1__::func_681(&(iParam1->f_8), 1048576);
							}
							if (!__LIB_0__::func_27(iParam1->f_8, 1048576))
							{
								switch (iParam2)
								{
									case 4:
										__LIB_2__::func_698(*iParam1, 32.5f, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
										break;
									case 5:
										__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 5f, 105f, -75f, 75f);
										break;
									default:
										__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
										break;
								}
								__LIB_1__::func_683(&(iParam1->f_8), 1048576);
							}
						}
					}
					break;
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (func_1050(uParam0, iParam1, Global_35, 0, 0, 1) || __LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
				{
					__LIB_1__::func_683(&(iParam1->f_8), 8);
				}
			}
			if (__LIB_0__::func_27(iParam1->f_8, 67108864))
			{
				if (!__LIB_0__::func_27(iParam1->f_8, 134217728))
				{
					if ((((func_1051(iParam1) || PED::IS_PED_BEING_STEALTH_KILLED(*iParam1)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 32768, 0)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*iParam1, 8, 0)) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						__LIB_13__::func_520(&iLocal_847);
						__LIB_8__::func_771(*iParam1, 0, 1, 0);
						__LIB_8__::func_771(Local_156, 1, 1, 0);
						__LIB_1__::func_683(&(iParam1->f_8), 134217728);
					}
				}
			}
			switch (iParam1->f_3)
			{
				case 18:
					if (iParam1->f_6 == 0)
					{
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[0]))
						{
							STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 15, 0, 0);
							if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), false))
							{
								if (!__LIB_3__::func_138(*iParam1, joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE")))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[0], 0, 0, false, true, 0, false, -1f, false);
								}
								__LIB_1__::func_683(&(iParam1->f_8), 128);
								iParam1->f_6 = 1;
							}
						}
					}
					else if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						func_323(iParam1, 22, 0, 0);
					}
					break;
				case 19:
					if (iParam1->f_6 == 0)
					{
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_120);
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_120))
						{
							if (__LIB_13__::func_23(&(uParam0->f_206), "RDST2_RSC3") && __LIB_12__::func_685(&(uParam0->f_206)) >= 8500)
							{
								if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_120, 10, &vVar0))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam1, true, true);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, vVar0, 156.4017f, true, false, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, sLocal_120, 0, 4194312, -1, 0, 0, -1);
									PED::FORCE_PED_MOTION_STATE(*iParam1, joaat("MOTIONSTATE_WALK"), true, 0, false);
									ENTITY::SET_ENTITY_LOD_DIST(*iParam1, 100);
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam1, 1);
									iParam1->f_6 = 1;
								}
							}
						}
					}
					else
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 0.66f, 0, -1082130432 /* Float: -1f */, 0);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 8)
						{
							TASK::REMOVE_WAYPOINT_RECORDING(sLocal_120);
							func_323(iParam1, 18, 0, 0);
						}
					}
					break;
				case 32:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
						{
							fVar3 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3);
						}
						switch (iParam2)
						{
							case 1:
								if ((ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "pedb") || ANIMSCENE::_0xB89FCFF19DAFFF28(*iParam3, "pedb")) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam3, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1033[2]))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1033[2]))
										{
											ENTITY::DETACH_ENTITY(iLocal_1033[2], false, true);
											ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1033[2]));
										}
									}
									func_323(iParam1, 22, 0, 0);
								}
								break;
							case 2:
								if ((ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "pedc") || ANIMSCENE::_0xB89FCFF19DAFFF28(*iParam3, "pedc")) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam3, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1033[1]))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1033[1]))
										{
											ENTITY::DETACH_ENTITY(iLocal_1033[1], false, true);
											ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1033[1]));
										}
									}
									func_323(iParam1, 22, 0, 0);
								}
								break;
							case 3:
								if ((ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "pedd") || ANIMSCENE::_0xB89FCFF19DAFFF28(*iParam3, "pedd")) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam3, false))
								{
									func_323(iParam1, 22, 0, 0);
								}
								break;
						}
					}
					break;
				case 22:
					if (iParam1->f_6 == 0)
					{
						__LIB_1__::func_683(&iLocal_1121, 1073741824 /* Float: 2f */);
						func_1049(iParam1, 0);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						if (__LIB_0__::func_27(iParam1->f_8, 128))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 33554432, 0);
						iParam1->f_6 = 1;
					}
					break;
				case 21:
					if (iParam1->f_6 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_2));
						func_1054(iParam1);
						func_1055(iParam1);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 1, 3f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 4);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if (iParam1->f_18 < 35f)
						{
							func_1056(iParam1, 4500, 6501);
						}
						if (iParam1->f_18 > 150f)
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
							__LIB_1__::func_683(&(iParam1->f_8), 32);
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_8, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_8), 1);
			}
			if (iParam1->f_5 == 0)
			{
				iParam1->f_5 = func_1057(iParam1);
				func_1058(iParam1->f_5, &uLocal_1125, &uLocal_1126, &uLocal_1127, &iLocal_1128, &uLocal_1129);
			}
		}
		if (iParam2 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_326[0 /*21*/]) && Local_326[0 /*21*/].f_18 < 50f)
			{
				__LIB_1__::func_683(&(Local_326[0 /*21*/].f_8), 2097152);
			}
			else
			{
				__LIB_1__::func_681(&(Local_326[0 /*21*/].f_8), 2097152);
			}
			switch (Local_326[0 /*21*/].f_3)
			{
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
					if (Local_326[0 /*21*/].f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								func_350();
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								switch (Local_326[0 /*21*/].f_3)
								{
									case 27:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_base"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_base", true);
										}
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.2");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.2");
										break;
									case 28:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_conversation1.1"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_conversation1.1", true);
										}
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.2");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.2");
										break;
									case 29:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_conversation1.2"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_conversation1.2", true);
										}
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.2");
										break;
									case 30:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_conversation2.1"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_conversation2.1", true);
										}
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.2");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.2");
										break;
									case 31:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pbl_conversation2.2"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_conversation2.2", true);
										}
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.1");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation1.2");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_conversation2.1");
										break;
								}
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_f");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_l");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_r");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_br");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_bl");
								Local_326[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
								Local_326[0 /*21*/].f_6 = 1;
							}
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
					{
						switch (Local_326[0 /*21*/].f_3)
						{
							case 27:
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_base", 1))
								{
									if (__LIB_0__::func_27(Local_326[0 /*21*/].f_8, 2097152))
									{
										if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_conversation1.1") && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_conversation2.1"))
										{
											switch (iLocal_134)
											{
												case 1:
													func_323(&(Local_326[0 /*21*/]), 28, 0, 0);
													func_323(&(Local_326[1 /*21*/]), 28, 0, 0);
													func_323(&(Local_326[2 /*21*/]), 28, 0, 0);
													func_323(&(Local_326[3 /*21*/]), 28, 0, 0);
													break;
												case 2:
													func_323(&(Local_326[0 /*21*/]), 30, 0, 0);
													func_323(&(Local_326[1 /*21*/]), 30, 0, 0);
													func_323(&(Local_326[2 /*21*/]), 30, 0, 0);
													func_323(&(Local_326[3 /*21*/]), 30, 0, 0);
													break;
											}
										}
									}
								}
								break;
							case 28:
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_base", 1))
								{
									__LIB_1__::func_683(&(Local_326[0 /*21*/].f_8), 8192);
									if (__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 32768))
									{
										if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_conversation1.2"))
										{
											func_323(&(Local_326[0 /*21*/]), 29, 0, 0);
											func_323(&(Local_326[1 /*21*/]), 29, 0, 0);
											func_323(&(Local_326[2 /*21*/]), 29, 0, 0);
											func_323(&(Local_326[3 /*21*/]), 29, 0, 0);
										}
									}
								}
								break;
							case 29:
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_base", 1))
								{
									__LIB_1__::func_683(&(Local_326[0 /*21*/].f_8), 16384);
									if (__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 65536))
									{
									}
								}
								break;
							case 30:
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_base", 1))
								{
									__LIB_1__::func_683(&(Local_326[0 /*21*/].f_8), 8192);
									if (__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 32768))
									{
										if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_conversation2.2"))
										{
											func_323(&(Local_326[0 /*21*/]), 31, 0, 0);
											func_323(&(Local_326[1 /*21*/]), 31, 0, 0);
											func_323(&(Local_326[2 /*21*/]), 31, 0, 0);
											func_323(&(Local_326[3 /*21*/]), 31, 0, 0);
										}
									}
								}
								break;
							case 31:
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_base", 1))
								{
									__LIB_1__::func_683(&(Local_326[0 /*21*/].f_8), 16384);
									if (__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 65536))
									{
									}
								}
								break;
						}
						if (__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 65536))
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_base", 1))
							{
								if ((MISC::GET_GAME_TIMER() - Local_326[0 /*21*/].f_12) > 0)
								{
									if (((((!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) && !__LIB_0__::func_27(Local_326[0 /*21*/].f_8, 8)) && !__LIB_0__::func_27(Local_326[1 /*21*/].f_8, 8)) && !__LIB_0__::func_27(Local_326[2 /*21*/].f_8, 8)) && !__LIB_0__::func_27(Local_326[3 /*21*/].f_8, 8)) && !__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 8))
									{
										iVar4 = -1;
										iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
										if (!PED::IS_PED_INJURED(Local_326[iVar5 /*21*/]))
										{
											if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_326[iVar5 /*21*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_326[iVar5 /*21*/]))
											{
												iVar4 = iVar5;
											}
										}
										if (iVar4 != -1)
										{
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
											{
												case 0:
													if (__LIB_1__::func_265(Local_326[iVar4 /*21*/], "DRUNK", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1))
													{
														Local_326[0 /*21*/].f_12 = (MISC::GET_GAME_TIMER() + 7000 + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5001));
													}
													break;
												case 1:
													if (__LIB_1__::func_265(Local_326[iVar4 /*21*/], "CHAT_STORY", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1))
													{
														Local_326[0 /*21*/].f_12 = (MISC::GET_GAME_TIMER() + 8000 + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6001));
													}
													break;
												case 2:
													if (__LIB_1__::func_265(Local_326[iVar4 /*21*/], "CHAT_GANG_DIALOG", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1))
													{
														Local_326[0 /*21*/].f_12 = (MISC::GET_GAME_TIMER() + 9000 + MISC::GET_RANDOM_INT_IN_RANGE(2500, 7001));
													}
													break;
											}
										}
									}
								}
							}
						}
						if (((((__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || __LIB_0__::func_27(Local_326[0 /*21*/].f_8, 8)) || __LIB_0__::func_27(Local_326[1 /*21*/].f_8, 8)) || __LIB_0__::func_27(Local_326[2 /*21*/].f_8, 8)) || __LIB_0__::func_27(Local_326[3 /*21*/].f_8, 8)) || (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1377) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1377, false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_1377, "pbl_breakout")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1377) >= 0.6f))
						{
							func_323(&(Local_326[0 /*21*/]), 32, 0, 0);
							func_323(&(Local_326[1 /*21*/]), 32, 0, 0);
							func_323(&(Local_326[2 /*21*/]), 32, 0, 0);
							func_323(&(Local_326[3 /*21*/]), 32, 0, 0);
						}
					}
					break;
				case 32:
					if (Local_326[0 /*21*/].f_6 == 0)
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1033[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1033[3]))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_f");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_l");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_r");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_br");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pbl_brkout_bl");
								if ((((ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_brkout_f") && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_brkout_l")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_brkout_r")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_brkout_br")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pbl_brkout_bl"))
								{
									vVar12 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1033[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
									if (vVar12.y < 0f)
									{
										if (vVar12.x < 1f)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_brkout_bl", true);
										}
										else
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_brkout_br", true);
										}
									}
									else if (MISC::ABSF(vVar12.x) > MISC::ABSF(vVar12.y))
									{
										if (vVar12.x < 0f)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_brkout_l", true);
										}
										else
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_brkout_r", true);
										}
									}
									else
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pbl_brkout_f", true);
									}
									Local_326[0 /*21*/].f_6 = 1;
								}
							}
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
						{
							fVar3 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3);
						}
						if (!PED::IS_PED_INJURED(Local_326[0 /*21*/]))
						{
							if ((ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "peda") || ANIMSCENE::_0xB89FCFF19DAFFF28(*iParam3, "peda")) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam3, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1033[0]))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1033[0]))
									{
										ENTITY::DETACH_ENTITY(iLocal_1033[0], false, true);
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1033[0]));
									}
								}
								func_323(&(Local_326[0 /*21*/]), 22, 0, 0);
							}
						}
					}
					break;
			}
		}
		if (iParam2 == 4)
		{
			switch (Local_326[4 /*21*/].f_3)
			{
				case 33:
				case 34:
					if (Local_326[4 /*21*/].f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam4, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false))
							{
								func_349();
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false))
							{
								switch (Local_326[4 /*21*/].f_3)
								{
									case 33:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam4, "pbl_idle"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam4, "pbl_idle", true);
										}
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam4, "pbl_dialogue");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam4, "pbl_breakout");
										break;
									case 34:
										if (!ANIMSCENE::_0x1F0E401031E20146(*iParam4, "pbl_dialogue"))
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam4, "pbl_dialogue", true);
										}
										if (!PED::IS_PED_INJURED(Local_326[4 /*21*/]) && !PED::IS_PED_INJURED(Local_538[0 /*21*/]))
										{
											if (!__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 32768))
											{
												__LIB_12__::func_876(uParam0, "DST2_WMN_LAP", 0);
											}
											else if (!__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 65536))
											{
												__LIB_12__::func_876(uParam0, "DST2_WMN_RCT1", 0);
											}
										}
										Local_326[4 /*21*/].f_13++;
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam4, "pbl_idle");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam4, "pbl_breakout");
										break;
								}
								Local_326[4 /*21*/].f_6 = 1;
							}
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false))
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam4, "idle", 1))
							{
								switch (Local_326[4 /*21*/].f_3)
								{
									case 33:
										if ((__LIB_0__::func_27(Local_326[0 /*21*/].f_8, 8192) && !__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 32768)) || (__LIB_0__::func_27(Local_326[0 /*21*/].f_8, 16384) && !__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 65536)))
										{
											func_323(&(Local_326[4 /*21*/]), 34, 0, 0);
											func_323(&(Local_538[0 /*21*/]), 34, 0, 0);
										}
										break;
									case 34:
										if (Local_326[4 /*21*/].f_13 == 1)
										{
											__LIB_1__::func_683(&(Local_326[4 /*21*/].f_8), 32768);
										}
										if (Local_326[4 /*21*/].f_13 == 2)
										{
											Local_326[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
											__LIB_1__::func_683(&(Local_326[4 /*21*/].f_8), 65536);
										}
										func_323(&(Local_326[4 /*21*/]), 33, 0, 0);
										func_323(&(Local_538[0 /*21*/]), 33, 0, 0);
										break;
								}
							}
						}
						if ((__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || __LIB_0__::func_27(Local_326[4 /*21*/].f_8, 8)) || __LIB_0__::func_27(Local_538[0 /*21*/].f_8, 8))
						{
							func_323(&(Local_326[4 /*21*/]), 35, 0, 0);
							func_323(&(Local_538[0 /*21*/]), 35, 0, 0);
						}
					}
					break;
				case 35:
					if (Local_326[4 /*21*/].f_6 == 0)
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam4, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam4, "pbl_breakout", true);
							Local_326[4 /*21*/].f_6 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false))
						{
							fVar3 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam4);
							if (!PED::IS_PED_INJURED(Local_326[4 /*21*/]))
							{
								if (!__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 1024))
								{
									if ((__LIB_6__::func_903("DST2_WMN_RCT1") || __LIB_8__::func_684("DST2_WMN_RCT1")) || (__LIB_6__::func_903("DST2_WMN_LAP") || __LIB_8__::func_684("DST2_WMN_LAP")))
									{
										__LIB_5__::func_20(0, 0);
									}
									if (__LIB_12__::func_876(uParam0, "DST2_WMN_BO_1", 0))
									{
										func_374(40, 1);
										__LIB_1__::func_683(&(Local_326[4 /*21*/].f_8), 1024);
									}
								}
								if (!__LIB_0__::func_27(Local_326[4 /*21*/].f_8, 512))
								{
									if (fVar3 >= 0.6f)
									{
										WEAPON::SET_CURRENT_PED_WEAPON(Local_326[4 /*21*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
										TASK::TASK_SWAP_WEAPON(Local_326[4 /*21*/], 1, 1, 0, 0);
										__LIB_1__::func_683(&(Local_326[4 /*21*/].f_8), 512);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_538[0 /*21*/]))
							{
								if (!__LIB_0__::func_27(Local_538[0 /*21*/].f_8, 1024))
								{
									if (__LIB_1__::func_265(Local_538[0 /*21*/], "SCREAM_TERROR", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1))
									{
										__LIB_1__::func_683(&(Local_538[0 /*21*/].f_8), 1024);
									}
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_326[4 /*21*/]) && Local_326[4 /*21*/].f_3 != 22)
						{
							if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam4, "male") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam4, false))
							{
								func_323(&(Local_326[4 /*21*/]), 22, 0, 0);
							}
						}
					}
					break;
			}
		}
	}
}

void func_565(var uParam0, int* iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (__LIB_0__::func_27(iLocal_1121, 536870912))
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!__LIB_0__::func_27(iParam1->f_8, 4))
					{
						func_1049(iParam1, 1);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (func_1050(uParam0, iParam1, Global_35, 0, 0, 0) || __LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
				{
					__LIB_1__::func_683(&(iParam1->f_8), 8);
				}
			}
			switch (iParam1->f_3)
			{
				case 18:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[1]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[1], "WORLD_HUMAN_LEAN_BACK_WALL_MALE_C", 0, false, true, 0, false, -1f, false);
										TASK::_0x0000A8ACDC2E1B6A(*iParam1, 1);
										__LIB_1__::func_683(&(iParam1->f_8), 128);
										iParam1->f_6 = 1;
									}
								}
							}
							break;
						case 1:
							vVar0 = { -41.127f, 1207.525f, 171.104f };
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_6 == 0)
									{
										if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[5]))
										{
											STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
											if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
												PED::_0xEC6935EBE0847B90(*iParam1, vVar0);
												TASK::CLEAR_SEQUENCE_TASK(&iVar3);
												TASK::OPEN_SEQUENCE_TASK(&iVar3);
												if (__LIB_0__::func_27(iParam1->f_8, 128))
												{
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, (1f * 0.75f), 20000, (0.25f * 5f), 2097153, 40000f);
												}
												TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1073[5], 0, 0, true, false, 0, false, -1f, false);
												TASK::CLOSE_SEQUENCE_TASK(iVar3);
												TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar3);
												TASK::CLEAR_SEQUENCE_TASK(&iVar3);
												__LIB_1__::func_683(&(iParam1->f_8), 128);
												iParam1->f_10 = 0;
												iParam1->f_6 = 1;
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 1)
									{
										if (TASK::_0x02EBBB3989B7E695(*iParam1))
										{
											if (iParam1->f_10 == 0)
											{
												iParam1->f_10 = MISC::GET_GAME_TIMER();
											}
											else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 10000)
											{
												func_323(iParam1, 18, 0, 1);
											}
										}
									}
									break;
								case 1:
									if (iParam1->f_6 == 0)
									{
										if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[6]))
										{
											STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
											if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
												PED::_0xEC6935EBE0847B90(*iParam1, vVar0);
												TASK::CLEAR_SEQUENCE_TASK(&iVar3);
												TASK::OPEN_SEQUENCE_TASK(&iVar3);
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, (1f * 0.75f), 20000, (0.25f * 5f), 2097153, 40000f);
												TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1073[6], 0, 0, true, false, 0, false, -1f, false);
												TASK::CLOSE_SEQUENCE_TASK(iVar3);
												TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar3);
												TASK::CLEAR_SEQUENCE_TASK(&iVar3);
												iParam1->f_10 = 0;
												iParam1->f_6 = 1;
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 1)
									{
										if (TASK::_0x02EBBB3989B7E695(*iParam1))
										{
											if (iParam1->f_10 == 0)
											{
												iParam1->f_10 = MISC::GET_GAME_TIMER();
											}
											else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 10000)
											{
												func_323(iParam1, 18, 0, 0);
											}
										}
									}
									break;
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[8]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[8], 0, 0, false, true, 0, false, -1f, false);
										__LIB_1__::func_683(&(iParam1->f_8), 128);
										iParam1->f_6 = 1;
									}
								}
							}
							break;
						case 5:
							if (iParam1->f_6 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[14]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_CHECK_PISTOL"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_LEAN_CHECK_PISTOL"), false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[14], 0, 0, false, true, 0, false, -1f, false);
										__LIB_1__::func_683(&(iParam1->f_8), 128);
										iParam1->f_6 = 1;
									}
								}
							}
							break;
					}
					if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						func_323(iParam1, 22, 0, 0);
					}
					break;
				case 22:
					if (iParam1->f_6 == 0)
					{
						__LIB_1__::func_683(&iLocal_1121, 1073741824 /* Float: 2f */);
						func_1049(iParam1, 0);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						if (__LIB_0__::func_27(iParam1->f_8, 128))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						switch (iParam2)
						{
							case 0:
							case 2:
							case 3:
								if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[30]))
								{
									PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
									PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_1041[30], 0, 0, 0);
								}
								break;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						iParam1->f_6 = 1;
					}
					break;
				case 21:
					if (iParam1->f_6 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_2));
						func_1054(iParam1);
						func_1055(iParam1);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 1, 3f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 4);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if (iParam1->f_18 < 35f)
						{
							func_1056(iParam1, 4500, 6501);
						}
						if (iParam1->f_18 > 150f)
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
							__LIB_1__::func_683(&(iParam1->f_8), 32);
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_8, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_8), 1);
			}
			if (iParam1->f_5 == 0)
			{
				iParam1->f_5 = func_1057(iParam1);
				func_1058(iParam1->f_5, &uLocal_1125, &uLocal_1126, &uLocal_1127, &iLocal_1128, &uLocal_1129);
			}
		}
	}
}

void func_566(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (__LIB_0__::func_27(iLocal_1121, 536870912))
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!__LIB_0__::func_27(iParam1->f_8, 4))
					{
						func_1049(iParam1, 1);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 1)
				{
					if (__LIB_0__::func_27(iParam1->f_8, 1048576))
					{
						__LIB_1__::func_681(&(iParam1->f_8), 262144);
						__LIB_1__::func_681(&(iParam1->f_8), 1048576);
					}
					if (!__LIB_0__::func_27(iParam1->f_8, 262144))
					{
						__LIB_2__::func_698(*iParam1, 13.25f, 5f, 90f, -30f, 30f);
						__LIB_1__::func_683(&(iParam1->f_8), 262144);
					}
				}
				else if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 0)
				{
					if (__LIB_0__::func_27(iParam1->f_8, 262144))
					{
						__LIB_1__::func_681(&(iParam1->f_8), 262144);
						__LIB_1__::func_681(&(iParam1->f_8), 1048576);
					}
					if (!__LIB_0__::func_27(iParam1->f_8, 1048576))
					{
						switch (iParam2)
						{
							case 1:
							case 2:
								__LIB_2__::func_698(*iParam1, 32.5f, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
								break;
							default:
								__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
								break;
						}
						__LIB_1__::func_683(&(iParam1->f_8), 1048576);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_8, 8))
			{
				if (func_1050(uParam0, iParam1, Global_35, 0, 0, 1) || __LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
				{
					__LIB_1__::func_683(&(iParam1->f_8), 8);
				}
			}
			switch (iParam1->f_3)
			{
				case 18:
					switch (iParam2)
					{
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[9]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_FAN"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_FAN"), false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[9], 0, 0, false, true, 0, false, -1f, false);
										__LIB_1__::func_683(&(iParam1->f_8), 128);
										iParam1->f_6 = 1;
									}
								}
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[10]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[10], 0, 0, false, true, 0, false, -1f, false);
										__LIB_1__::func_683(&(iParam1->f_8), 128);
										iParam1->f_6 = 1;
									}
								}
							}
							break;
					}
					if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || __LIB_0__::func_27(iParam1->f_8, 8))
					{
						func_323(iParam1, 21, 0, 0);
					}
					break;
				case 35:
					if (iParam1->f_6 == 0)
					{
						iParam1->f_6 = 1;
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
					{
						if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "female") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam3, false))
						{
							func_323(iParam1, 21, 0, 0);
						}
					}
					break;
				case 21:
					if (iParam1->f_6 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_2));
						func_1054(iParam1);
						func_1055(iParam1);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						__LIB_1__::func_683(&iLocal_1121, 1073741824 /* Float: 2f */);
						if (__LIB_0__::func_27(iParam1->f_8, 128))
						{
							PED::_0xEEED8FAFEC331A70(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 1, 3f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 4);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if (iParam1->f_18 < 35f)
						{
							func_1056(iParam1, 3500, 4501);
						}
						if (iParam1->f_18 > 150f)
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
							__LIB_1__::func_683(&(iParam1->f_8), 32);
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_8, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_8), 1);
			}
			if (iParam1->f_5 == 0)
			{
				iParam1->f_5 = func_1057(iParam1);
				func_1058(iParam1->f_5, &uLocal_1125, &uLocal_1126, &uLocal_1127, &iLocal_1128, &uLocal_1129);
			}
		}
	}
}

void func_567(var uParam0, int* iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (__LIB_0__::func_27(iLocal_1121, 536870912))
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!__LIB_0__::func_27(iParam1->f_8, 4))
					{
						func_1049(iParam1, 0);
					}
				}
			}
			switch (iParam1->f_3)
			{
				case 22:
					if (iParam1->f_6 == 0)
					{
						func_1049(iParam1, 0);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 1);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
						PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_1041[15], 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 64);
						iParam1->f_6 = 1;
					}
					break;
				case 21:
					if (iParam1->f_6 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_2));
						func_1054(iParam1);
						func_1055(iParam1);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 1, 3f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 4);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if (iParam1->f_18 < 35f)
						{
							func_1056(iParam1, 4500, 6501);
						}
						if (iParam1->f_18 > 150f)
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
							__LIB_1__::func_683(&(iParam1->f_8), 32);
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_8, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_8), 1);
			}
			if (iParam1->f_5 == 0)
			{
				iParam1->f_5 = func_1057(iParam1);
				func_1058(iParam1->f_5, &uLocal_1125, &uLocal_1126, &uLocal_1127, &iLocal_1128, &uLocal_1129);
			}
		}
	}
}

bool func_568(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_1051(iParam0[iVar0 /*21*/]))
		{
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_654(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_12__::func_871(uParam0) && !__LIB_12__::func_936(uParam0))
	{
		return true;
	}
	iVar0 = 0;
	iVar1 = 1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380))
	{
		iLocal_1380 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@leadin@rsc_1@kieran", 0, "pl_base", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1380);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1380, true, false))
		{
			iVar0 = 1;
		}
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 8192) || __LIB_12__::func_936(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198))
		{
			func_318(&iLocal_198, 0, 0f, 0f, 0f, 0f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198))
			{
				iVar1 = 0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_177))
		{
			func_318(&Local_177, 3, 0f, 0f, 0f, 0f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_177))
			{
				iVar1 = 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_135))
	{
		Local_135 = func_722(10, 1, 1, -138.5301f, -12.0562f, 95.3322f, 120.2492f, 0, 1, 0, 0, 0, 0, -310473775, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_135))
		{
			iVar1 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_135))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1028))
		{
			STREAMING::REQUEST_MODEL(joaat("P_CS_ROPE03X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_ROPE03X")))
			{
				iLocal_1028 = OBJECT::CREATE_OBJECT(joaat("P_CS_ROPE03X"), ENTITY::GET_ENTITY_COORDS(Local_135, true, false), true, true, false, false, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_ROPE03X"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1028))
			{
				iVar1 = 0;
			}
		}
	}
	if (iVar1 == 1 && iVar0 == 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1380))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1380, true, false))
			{
				if (!PED::IS_PED_INJURED(Local_135))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_135, true, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_135, -138.5301f, -12.0562f, 95.3322f, 120.2492f, true, false, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_135, true, true);
					PED::SET_PED_CONFIG_FLAG(Local_135, 234, true);
				}
				func_322(uParam0);
				if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_135)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1028)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1028))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1028, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1380, "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1380, "P_CS_ROPE03X", iLocal_1028, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1380, "KIERAN", Local_135, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1380);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1380, "pl_base_to_look");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1380, "pl_look_to_base");
				}
				return true;
			}
		}
	}
	return false;
}

void func_679()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[9]))
	{
		iLocal_1041[9] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST2_VOLUME_ROADS_BLOCKING_HORSESHOE_CAMP");
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[9], 428.7143f, 296.7381f, 106.9427f, 0f, 0f, -36.5f, 82f, 36f, 16f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[9], 181.2226f, 80.32627f, 82.38888f, 0f, 0f, 10.99999f, 600f, 256f, 64f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[9], 455.1213f, 277.6968f, 105.3859f, 0f, 0f, 35.25f, 90.5f, 17.25f, 16f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[9], 50.90413f, 237.6397f, 109.6235f, 0f, 0f, 27.5f, 16f, 8f, 4f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[9], 214.3564f, 468.9327f, 121.2471f, 0f, 0f, 20f, 4f, 4f, 4f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[10]))
	{
		iLocal_1041[10] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST2_VOLUME_ROADS_BLOCKING_HORSESHOE_CAMP_ALT");
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[10], 65.24648f, 39.85964f, 101.4136f, 0f, 0f, -26.24999f, 36f, 36f, 8f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[10], 49.80856f, 227.7542f, 109.0697f, 0f, 0f, 17.5f, 36f, 36f, 8f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[11]))
	{
		iLocal_1041[11] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST2_VOLUME_ROADS_BLOCKING_SIX_POINT_CABIN_CAMP");
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[11], 225.215f, 1160.023f, 178.1706f, 0f, 0f, -126.5f, 34f, 18f, 8f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[11], 98.49827f, 1118.246f, 169f, 0f, 0f, 10f, 282f, 64f, 29f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[12]))
	{
		iLocal_1041[12] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST2_VOLUME_ROADS_BLOCKING_SIX_POINT_CABIN_ROAD");
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[12], 302.4144f, 954.485f, 186.5078f, 0f, 0f, 28.99999f, 256f, 128f, 32f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[12], 240.8671f, 550.1893f, 115.198f, 0f, 0f, 0.5f, 14f, 22f, 4f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[13]))
	{
		iLocal_1041[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-112.1006f, -18.4918f, 96.85f, 0f, 0f, -32f, 10f, 7.5f, 5f, "RDST2_VOLUME_HORSESHOE_HITCHING_POST_PLAYER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[14]))
	{
		iLocal_1041[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-109.278f, -31.666f, 96.85f, 0f, 0f, 7.5f, 7.5f, 3.5f, 5f, "RDST2_VOLUME_HORSESHOE_HITCHING_POST_COMPANIONS");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[15]))
	{
		iLocal_1041[15] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-38.12561f, 1221.367f, 176.0409f, 0f, 0f, 0f, 48f, 48f, 16f, "RDST2_VOLUME_SIX_POINT_CABIN_CAMP");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[16]))
	{
		iLocal_1041[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-62.639f, 1237.639f, 170.926f, 0f, 0f, 30f, 9.5f, 6f, 3f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[18]))
	{
		iLocal_1041[18] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-67.06239f, 1235.327f, 170.7905f, 0f, 0f, 30f, 0.6f, 0.6f, 1.25f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN_DOOR");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[19]))
	{
		iLocal_1041[19] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-67.26909f, 1235.223f, 170.8617f, 0f, 0f, 29.75f, 1.75f, 1.75f, 1.5f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN_DOOR_CROUCH");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[20]))
	{
		iLocal_1041[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-68.05699f, 1233.823f, 170.5996f, 0f, 0f, 30f, 3.5f, 10f, 4f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN_PORCH");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[20]))
	{
		iLocal_1041[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-68.05699f, 1233.823f, 170.5996f, 0f, 0f, 30f, 3f, 9.75f, 4f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN_PORCH");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[21]))
	{
		iLocal_1041[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-68.05699f, 1233.823f, 170.5996f, 0f, 0f, 30f, 4.5f, 11.5f, 4f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN_PORCH_BIG");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[22]))
	{
		iLocal_1041[22] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-59.03482f, 1239.69f, 170.7111f, 0f, 0f, 30f, 1f, 1f, 1f, "RDST2_VOLUME_SIX_POINT_CABIN_CABIN_CHIMNEY");
		__LIB_3__::func_710(iLocal_1041[22], 8);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[17]))
	{
		iLocal_1041[17] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(33.03f, 1210.068f, 176.346f, 0f, 0f, 0f, 128f, 102f, 32f, "RDST2_VOLUME_SIX_POINT_CABIN_FOREST");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[23]))
	{
		iLocal_1041[23] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(46.76258f, 1183.638f, 185.9932f, 0f, 0f, -24f, 15f, 25f, 8f, "RDST2_VOLUME_SIX_POINT_CABIN_RSC3_LEADIN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[24]))
	{
		iLocal_1041[24] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(210.9115f, 1090.496f, 180.1356f, 0f, 0f, 0f, 16f, 16f, 4f, "RDST2_VOLUME_SIX_POINT_CABIN_AMBIENT_CAMP");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[25]))
	{
		iLocal_1041[25] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-30.4804f, 1225.397f, 172.8913f, 0f, 0f, -120.75f, 15f, 18f, 4f, "RDST2_VOLUME_SIX_POINT_CABIN_CAMP_PLAYER_SEEN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[26]))
	{
		iLocal_1041[26] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-27.71416f, 1221.419f, 174.2886f, 0f, 0f, 0f, 20f, 20f, 4f, "RDST2_VOLUME_SIX_POINT_CABIN_CAMP_COMPANION_SEEN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[27]))
	{
		iLocal_1041[27] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST2_VOLUME_CUTSCENE_RSC2_CORPSE_CLEAR_VOLUME");
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[27], -69.50124f, 1233.5f, 170.2f, 0f, 0f, 31f, 6f, 6f, 4f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1041[27], -70.93417f, 1230.985f, 170.2f, 0f, 0f, 31f, 5f, 12f, 4f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[29]))
	{
		iLocal_1041[29] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(36.29692f, 1193.248f, 182.89f, 0f, 0f, 0f, 16f, 16f, 6f, "RDST2_VOLUME_HERB_SYSTEM_BLOCKING_01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[30]))
	{
		iLocal_1041[30] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-61.05985f, 1211.55f, 170.992f, 0f, 0f, 53.25001f, 16f, 28f, 6f, "RDST2_VOLUME_SIX_POINT_CABIN_DEFENSIVE_VOLUME_CABIN_ENEMIES");
	}
}

void func_680()
{
	int iVar0;
	iLocal_1073[0] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), -21.25f, 1201.7f, 172.975f, 215f, 2f, 0, 0);
	iLocal_1073[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), -68.58f, 1230.49f, 169.3813f, 122.1141f, 2f, 0, 0);
	iLocal_1073[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), -58.95f, 1235.49f, 169.77f, 210.5373f, 2f, 0, 0);
	iLocal_1073[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), -66.5483f, 1220.712f, 169.7594f, 78f, 2f, 0, 0);
	iLocal_1073[4] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), -54.7663f, 1225.108f, 170.1656f, 280f, 2f, 0, 0);
	iLocal_1073[5] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), -47.9054f, 1209.284f, 170.1811f, 98.3096f, 2f, 0, 0);
	iLocal_1073[6] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), -34.4879f, 1202.018f, 171.5355f, 188.2838f, 2f, 0, 0);
	iLocal_1073[7] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 26.0202f, 1197.637f, 178.6957f, 75f, 2f, 0, 0);
	iLocal_1073[8] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), -61.02f, 1200.74f, 167.52f, 85f, 2f, 0, 0);
	iLocal_1073[9] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_FAN"), -28.7408f, 1233.23f, 171.9263f, 185.7343f, 2f, 0, 0);
	iLocal_1073[10] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -31.3176f, 1232.784f, 171.8393f, 233.0977f, 2f, 0, 0);
	iLocal_1073[11] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_BADASS"), 25.5395f, 1196.768f, 178.662f, 40.13846f, 2f, 0, 0);
	iLocal_1073[12] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_PEE"), 37.48f, 1197.08f, 180.03f, 53.89199f, 2f, 0, 0);
	iLocal_1073[13] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_CHECK_PISTOL"), -37.67f, 1229.61f, 171.57f, 211.7534f, 2f, 0, 0);
	iLocal_1073[14] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_CHECK_PISTOL"), -64.63f, 1206.09f, 167.39f, 177.987f, 2f, 0, 0);
	iLocal_1073[15] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_CAMP_MICAH_SEAT_CHAIR_CLEAN_GUN"), -29.27f, 1227.98f, 172.43f, 135f, 2f, 0, 0);
	iLocal_1073[16] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_FIRE_STAND"), -27.4488f, 1230.67f, 171.9936f, 88.7663f, 2f, 0, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_1073)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1073[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1073[iVar0], 8, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1073[iVar0], 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1073[iVar0], 25, true);
		}
		iVar0++;
	}
}

void func_681()
{
	__LIB_13__::func_491(&(Local_851[0 /*5*/]), 46.906f, 1180.554f, 182.5895f, 91.1107f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[1 /*5*/]), 46.1515f, 1184.472f, 181.8157f, 98.8695f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_851[2 /*5*/]), 36.9293f, 1184.901f, 181.4021f, 90.0045f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[3 /*5*/]), 44.0077f, 1178.574f, 182.4854f, 98.5991f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[4 /*5*/]), 39.1668f, 1188.383f, 181.1265f, 89.1732f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[5 /*5*/]), 36.98f, 1193.21f, 180.53f, 88.7357f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[6 /*5*/]), 36.9838f, 1197.75f, 179.905f, 63.6531f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[7 /*5*/]), 30.51f, 1190.126f, 180.298f, 69.5616f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[8 /*5*/]), 21.48f, 1187.27f, 178.41f, 85.3945f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[9 /*5*/]), 12.3689f, 1188.171f, 175.9888f, 72.532f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[10 /*5*/]), 6.8748f, 1191.392f, 174.9746f, 81.3255f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[11 /*5*/]), 6.1761f, 1198.107f, 174.6472f, 69.3704f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[12 /*5*/]), 14.0299f, 1207.343f, 175.0545f, 67.4952f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[13 /*5*/]), 8.7183f, 1209.501f, 174.0587f, 85.3095f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[14 /*5*/]), 4.2414f, 1202.317f, 174.263f, 69.9884f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[15 /*5*/]), -0.98f, 1211.54f, 173.82f, 71.8612f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_851[16 /*5*/]), 0.37f, 1214.95f, 173.68f, 67.3499f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_851[17 /*5*/]), -0.4904f, 1206.323f, 174.0517f, 86.9506f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[18 /*5*/]), -68.4f, 1229.77f, 169.39f, 293.1137f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_851[19 /*5*/]), -66.0409f, 1222.895f, 169.8776f, 295.293f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_851[20 /*5*/]), -64.657f, 1215.452f, 169.9835f, 296.1411f, 3, 2, 0, 0);
}

void func_682()
{
	Local_240[0 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_240[0 /*21*/].f_14 = { 37.48f, 1197.08f, 180.03f };
	Local_240[0 /*21*/].f_17 = 53.89199f;
	Local_240[1 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_240[1 /*21*/].f_14 = { 25.5395f, 1196.768f, 178.662f };
	Local_240[1 /*21*/].f_17 = 40.13846f;
	Local_240[2 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_240[2 /*21*/].f_14 = { 26.0202f, 1197.637f, 178.6957f };
	Local_240[2 /*21*/].f_17 = 76.03583f;
	Local_304[0 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_304[0 /*21*/].f_14 = { -3.2759f, 1210.352f, 173.808f };
	Local_304[0 /*21*/].f_17 = 73.6771f;
	Local_326[0 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_326[0 /*21*/].f_14 = { -24.9879f, 1230.602f, 172.0721f };
	Local_326[0 /*21*/].f_17 = 89.0989f;
	Local_326[1 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_326[1 /*21*/].f_14 = { -26.5029f, 1228.128f, 172.051f };
	Local_326[1 /*21*/].f_17 = 52.6806f;
	Local_326[2 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_326[2 /*21*/].f_14 = { -29.8947f, 1227.714f, 171.9415f };
	Local_326[2 /*21*/].f_17 = 326.2785f;
	Local_326[3 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_326[3 /*21*/].f_14 = { -26.7861f, 1234.835f, 171.968f };
	Local_326[3 /*21*/].f_17 = 14.4455f;
	Local_326[4 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_326[4 /*21*/].f_14 = { -30.9751f, 1230.594f, 171.8742f };
	Local_326[4 /*21*/].f_17 = 318.6641f;
	Local_326[5 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_326[5 /*21*/].f_14 = { -21.078f, 1201.207f, 172.4713f };
	Local_326[5 /*21*/].f_17 = 196.7985f;
	Local_453[0 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_453[0 /*21*/].f_14 = { -68.8099f, 1230.931f, 169.3813f };
	Local_453[0 /*21*/].f_17 = 122.1141f;
	Local_453[1 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_453[1 /*21*/].f_14 = { -47.9054f, 1209.284f, 170.1811f };
	Local_453[1 /*21*/].f_17 = 100f;
	Local_453[2 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_453[2 /*21*/].f_14 = { -61.0677f, 1200.966f, 167.5161f };
	Local_453[2 /*21*/].f_17 = 69.2748f;
	Local_453[3 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_453[3 /*21*/].f_14 = { -64.6017f, 1206.2f, 167.41f };
	Local_453[3 /*21*/].f_17 = 182.3077f;
	Local_538[0 /*21*/].f_4 = joaat("RCSP_ODRISCOLLS2_FEMALES_01");
	Local_538[0 /*21*/].f_14 = { -30.9174f, 1231.017f, 171.8723f };
	Local_538[0 /*21*/].f_17 = 215.5396f;
	Local_538[1 /*21*/].f_4 = joaat("RCSP_ODRISCOLLS2_FEMALES_01");
	Local_538[1 /*21*/].f_14 = { -28.4998f, 1232.742f, 171.9399f };
	Local_538[1 /*21*/].f_17 = 186.6741f;
	Local_538[2 /*21*/].f_4 = joaat("RCSP_ODRISCOLLS2_FEMALES_01");
	Local_538[2 /*21*/].f_14 = { -32.1706f, 1233.307f, 171.8008f };
	Local_538[2 /*21*/].f_17 = 230.6018f;
	Local_602[0 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[0 /*21*/].f_14 = { -103.3289f, 1164.455f, 161.5276f };
	Local_602[0 /*21*/].f_17 = 326.4474f;
	Local_602[1 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[1 /*21*/].f_14 = { -88.2617f, 1274.589f, 168.1186f };
	Local_602[1 /*21*/].f_17 = 217.069f;
	Local_602[2 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[2 /*21*/].f_14 = { -19.5388f, 1157.399f, 169.1502f };
	Local_602[2 /*21*/].f_17 = 90.5716f;
	Local_602[3 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[3 /*21*/].f_14 = { -54.6877f, 1150.401f, 164.8136f };
	Local_602[3 /*21*/].f_17 = 354.9616f;
	Local_602[4 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[4 /*21*/].f_14 = { -108.6715f, 1255.69f, 165.2087f };
	Local_602[4 /*21*/].f_17 = 241.7913f;
	Local_602[5 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[5 /*21*/].f_14 = { -123.9433f, 1207.298f, 162.4918f };
	Local_602[5 /*21*/].f_17 = 315.6318f;
	Local_602[6 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[6 /*21*/].f_14 = { -61.4301f, 1306.614f, 172.7929f };
	Local_602[6 /*21*/].f_17 = 176.7906f;
	Local_602[7 /*21*/].f_4 = joaat("G_M_M_UNIDUSTER_05");
	Local_602[7 /*21*/].f_14 = { -84.6074f, 1162.811f, 162.2424f };
	Local_602[7 /*21*/].f_17 = 9.0236f;
}

int func_699(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_500(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_699(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
					if (__LIB_13__::func_501(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_43(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_501(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
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
					else if (!__LIB_13__::func_571(iParam1))
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
								__LIB_2__::func_526(uParam3, 0, 0);
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_501(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_13__::func_47(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

int func_719(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1[8];
	vector3 vVar10[8];
	vVar10[0 /*3*/] = { -103.139f, 2.123f, 93.311f };
	fVar1[0] = 5.977f;
	vVar10[1 /*3*/] = { -106.971f, 1.023f, 93.658f };
	fVar1[1] = 72.221f;
	vVar10[2 /*3*/] = { -103.727f, -6.635f, 94.533f };
	fVar1[2] = -124.258f;
	vVar10[3 /*3*/] = { -107.129f, -7.635f, 94.563f };
	fVar1[3] = -176.619f;
	vVar10[4 /*3*/] = { -109.787f, -7.588f, 94.561f };
	fVar1[4] = 51.105f;
	vVar10[5 /*3*/] = { -110.022f, -10.842f, 94.647f };
	fVar1[5] = 72.221f;
	vVar10[6 /*3*/] = { -112.443f, -12.073f, 94.733f };
	fVar1[6] = -88.08f;
	vVar10[7 /*3*/] = { -108.384f, -13.138f, 94.665f };
	fVar1[7] = -41.129f;
	iVar0 = 0;
	while (iVar0 < vVar10.x)
	{
		if (iVar0 >= *uParam1)
		{
			if (TASK::_0x6EEAD6AF637DA752(vVar10[iVar0 /*3*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), 0.75f, 1) && !PED::IS_ANY_PED_NEAR_POINT(vVar10[iVar0 /*3*/], 0.75f))
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vVar10[iVar0 /*3*/], fVar1[iVar0], true, false, true);
					TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), vVar10[iVar0 /*3*/], fVar1[iVar0], 0, false, true, 0, -1f, false);
					*uParam1 = iVar0 + 1;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_720(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_720(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_720(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_722(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_9__::func_203(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_720(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_723(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1218(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_729(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = joaat("META_OUTFIT_DEFAULT");
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*21*/]) || __LIB_0__::func_27((iParam0[iVar0 /*21*/])->f_8, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		if (iParam6 == 1)
		{
			iVar0 = 0;
			while (iVar0 < *iParam0)
			{
				if ((!__LIB_0__::func_27((iParam0[iVar0 /*21*/])->f_8, 1) && !PED::IS_PED_INJURED((*iParam0)[iVar0 /*21*/])) && !PED::_0xA0BC8FAED8CFEB3C((*iParam0)[iVar0 /*21*/]))
				{
					return false;
				}
				iVar0++;
			}
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((iParam7 != joaat("META_OUTFIT_DEFAULT") && iParam8 != joaat("META_OUTFIT_DEFAULT")) && iParam9 != joaat("META_OUTFIT_DEFAULT"))
		{
			switch (iVar0)
			{
				case 0:
					bVar2 = iParam7;
					break;
				case 1:
					bVar2 = iParam8;
					break;
				case 2:
					bVar2 = iParam9;
					break;
			}
		}
		if ((iVar0 == iVar1 && (iParam10 == 0 || (iParam10 == 1 && func_1222((iParam0[iVar0 /*21*/])->f_14)))) && func_351(iParam0[iVar0 /*21*/], (iParam0[iVar0 /*21*/])->f_4, (iParam0[iVar0 /*21*/])->f_14, (iParam0[iVar0 /*21*/])->f_17, iParam1, iParam2, iParam3, 0, -2, iParam4, joaat("WEAPON_UNARMED"), bVar2))
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*21*/]))
			{
				func_323(iParam0[iVar0 /*21*/], iParam5, 0, 0);
			}
		}
		else if (iVar0 == iVar1 && (iParam10 == 1 && !func_1222((iParam0[iVar0 /*21*/])->f_14)))
		{
			__LIB_1__::func_683(&((iParam0[iVar0 /*21*/])->f_8), 1);
		}
		iVar0++;
	}
	return false;
}

void func_731(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::_0x9238A3D970BBB0A9(iParam0, -820192119);
	}
}

int func_732(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, vParam2, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, vParam5, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam8);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_767(var uParam0)
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
			func_1252(&(uParam0->f_416));
		}
		func_1253(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1255(uParam0);
		func_1256(uParam0);
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

void func_773(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_774(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_774(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		func_1269(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_836(int iParam0)
{
	iLocal_1117 = 0;
	if (iParam0 == 0)
	{
		__LIB_1__::func_683(&iLocal_1117, 2);
		__LIB_1__::func_683(&iLocal_1117, 1);
		__LIB_1__::func_683(&iLocal_1117, 4);
		__LIB_1__::func_683(&iLocal_1117, 8);
		__LIB_1__::func_683(&iLocal_1117, 32);
		__LIB_1__::func_683(&iLocal_1117, 16);
		__LIB_1__::func_683(&iLocal_1117, 64);
		__LIB_1__::func_683(&iLocal_1117, 128);
		__LIB_1__::func_683(&iLocal_1117, 256);
	}
	else if (iParam0 == 1)
	{
		__LIB_1__::func_683(&iLocal_1117, 2);
		__LIB_1__::func_683(&iLocal_1117, 1);
		__LIB_1__::func_683(&iLocal_1117, 8);
		__LIB_1__::func_683(&iLocal_1117, 32);
		__LIB_1__::func_683(&iLocal_1117, 16);
		__LIB_1__::func_683(&iLocal_1117, 64);
		__LIB_1__::func_683(&iLocal_1117, 128);
		__LIB_1__::func_683(&iLocal_1117, 256);
	}
	else if (iParam0 == 2)
	{
		__LIB_1__::func_683(&iLocal_1117, 2);
		__LIB_1__::func_683(&iLocal_1117, 1);
		__LIB_1__::func_683(&iLocal_1117, 8);
		__LIB_1__::func_683(&iLocal_1117, 32);
		__LIB_1__::func_683(&iLocal_1117, 16);
		__LIB_1__::func_683(&iLocal_1117, 64);
		__LIB_1__::func_683(&iLocal_1117, 512);
		__LIB_1__::func_683(&iLocal_1117, 1024);
	}
	else if (iParam0 == 3)
	{
		__LIB_1__::func_683(&iLocal_1117, 512);
	}
}

void func_838(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	vector3 vVar1;
	struct<27> Var4;
	struct<6> Var42;
	struct<7> Var53;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (!__LIB_0__::func_27(iLocal_1116, 32768))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4))
				{
					__LIB_2__::func_966(*iParam1, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					__LIB_2__::func_966(Global_35, *iParam1, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					__LIB_9__::func_397(&uLocal_970, *iParam1);
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false))
					{
						if (ANIMSCENE::_0x6F1F0B17109309DA(*iParam4, "ARTHUR"))
						{
							if (!PED::IS_PED_INJURED(Global_35))
							{
								if (PED::IS_PED_ON_MOUNT(Global_35) || AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_815, 0))
								{
									ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*iParam4, "ARTHUR", Global_35);
								}
							}
						}
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam4, false))
					{
						__LIB_1__::func_726(Local_135, 1);
						__LIB_1__::func_727(Global_35, 1);
						__LIB_5__::func_438(&uLocal_970);
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdst21_icmp_kieran_wnt");
						__LIB_1__::func_683(&iLocal_1116, 32768);
					}
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam4, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*iParam4);
			}
			switch (iParam1->f_3)
			{
				case 1:
					if (iParam1->f_6 == 0)
					{
						if (iParam1->f_10 == 0)
						{
							iParam1->f_10 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 500)
						{
							func_1336();
							iParam1->f_6 = 1;
						}
					}
					else
					{
						if (__LIB_0__::func_27(iLocal_1116, 32768) || ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam4, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam4) > 0.81f))
						{
							if (!__LIB_0__::func_27(iParam1->f_8, 536870912))
							{
								func_323(iParam1, 2, 0, -1);
							}
						}
						if (!__LIB_0__::func_27(iParam1->f_8, 536870912))
						{
							if (iParam1->f_18 > 20f)
							{
								__LIB_1__::func_683(&(iParam1->f_8), 536870912);
							}
						}
						else if (iParam1->f_18 < (30f / 2f))
						{
							__LIB_1__::func_681(&(iParam1->f_8), 536870912);
						}
					}
					break;
				case 2:
					if (iParam1->f_6 == 0)
					{
						if (__LIB_0__::func_866(iParam3, 0))
						{
							__LIB_1__::func_640(iParam3);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, 0, -1f, -1f, -1f);
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else
					{
						if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 2000)
						{
							func_323(iParam1, 2, 0, -1);
						}
						if ((__LIB_0__::func_394(Global_35, iLocal_815, 0) || __LIB_0__::func_394(Local_156, iLocal_813, 0)) || AITRANSPORT::_0x619E63980BFC0096(Local_156, iLocal_813, 0))
						{
							if (!__LIB_0__::func_27(iParam1->f_8, 536870912))
							{
								func_323(iParam1, 4, 0, 0);
							}
						}
						if (!__LIB_0__::func_27(iParam1->f_8, 536870912))
						{
							if (iParam1->f_18 > 20f)
							{
								__LIB_1__::func_683(&(iParam1->f_8), 536870912);
							}
						}
						else if (iParam1->f_18 < (30f / 2f))
						{
							__LIB_1__::func_681(&(iParam1->f_8), 536870912);
						}
					}
					break;
				case 3:
					if (iParam1->f_6 == 0)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2)) && PED::_0x2D64376CF437363E(iParam2))
						{
							PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdst21_icmp_kieran_wnt");
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_MOUNT_ANIMAL(*iParam1, iParam2, 60000, 0, __LIB_5__::func_439(__LIB_18__::func_605(iParam3, 0), 1f, 1.5f), 1, 0, 0);
							__LIB_1__::func_683(&(iParam1->f_8), 16777216);
							__LIB_1__::func_681(&(iParam1->f_8), 268435456);
							__LIB_1__::func_681(&(iParam1->f_8), 536870912);
							iParam1->f_6 = 1;
						}
					}
					else if (__LIB_0__::func_394(*iParam1, iParam2, 1))
					{
						if (__LIB_13__::func_561(*iParam1, Local_156))
						{
							func_323(iParam1, 4, 0, -1);
						}
					}
					else
					{
						if (!PED::IS_PED_ON_MOUNT(*iParam1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) == 1)
							{
								if (__LIB_0__::func_394(Global_35, iLocal_815, 0) || __LIB_0__::func_394(Local_156, iLocal_813, 0))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, __LIB_5__::func_439(__LIB_18__::func_605(iParam3, 0), 1.5f, 2f));
								}
							}
						}
						if (!PED::IS_PED_ON_MOUNT(*iParam1) && !PED::_0x1D46B417F926D34D(*iParam1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) != 1)
							{
								func_323(iParam1, 3, 0, -1);
							}
						}
					}
					break;
				case 4:
					if (iParam1->f_6 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						__LIB_1__::func_683(&(iParam1->f_8), 16777216);
						__LIB_1__::func_681(&(iParam1->f_8), 536870912);
						iParam1->f_6 = 1;
					}
					else if (!PED::IS_PED_ON_MOUNT(*iParam1) && !PED::IS_PED_RAGDOLL(*iParam1))
					{
						func_323(iParam1, 3, 0, -1);
					}
					break;
				case 5:
					__LIB_1__::func_681(&(iParam1->f_8), 16777216);
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (PED::IS_PED_ON_MOUNT(*iParam1))
								{
									if (__LIB_0__::func_272(Local_156, 0) && !__LIB_0__::func_394(Local_156, iParam2, 0))
									{
										if (Local_156.f_3 == 5)
										{
											if (__LIB_0__::func_866(iParam3, 0))
											{
												__LIB_1__::func_640(iParam3);
											}
											if (PED::IS_PED_GROUP_MEMBER(*iParam1, iLocal_1040, 0))
											{
												PED::REMOVE_PED_FROM_GROUP(*iParam1);
											}
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(iVar0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											if (!__LIB_0__::func_27(iParam1->f_8, 1073741824 /* Float: 2f */))
											{
												PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Cautious", 1f, -1);
												__LIB_1__::func_683(&(iParam1->f_8), 1073741824 /* Float: 2f */);
											}
											func_334(0);
											iParam1->f_6 = 1;
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8)
							{
								func_323(iParam1, 5, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, 0, -1f, -1f, -1f);
								TASK::REQUEST_WAYPOINT_RECORDING(sLocal_118);
								iParam1->f_6 = 1;
							}
							else if ((!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Local_177)) && !PED::IS_PED_INJURED(Local_156))
							{
								if (Local_177.f_3 == 5 && Local_156.f_3 == 5)
								{
									if (iParam1->f_18 < 15f || func_1338(Global_35, vLocal_68, *iParam1, 15f))
									{
										func_323(iParam1, 6, 0, 0);
									}
								}
							}
							break;
					}
					break;
				case 6:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								TASK::REQUEST_WAYPOINT_RECORDING(sLocal_118);
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_118))
								{
									if (__LIB_0__::func_866(iParam3, 0))
									{
										__LIB_1__::func_640(iParam3);
									}
									Var4.f_4 = 1065353216;
									Var4.f_5 = 1065353216;
									Var4.f_9 = 1065353216;
									Var4.f_10 = 1065353216;
									Var4.f_14 = 1065353216;
									Var4.f_15 = 1065353216;
									Var4.f_17 = 1040187392;
									Var4.f_18 = 1040187392;
									Var4.f_19 = -1;
									Var4.f_26 = -1082130432;
									Var53.f_1 = 1050253722;
									Var53.f_2 = 1067030938;
									Var53.f_5 = -1082130432;
									Var53.f_6 = -1082130432;
									Var42 = 2;
									Var42.f_4 = sLocal_118;
									Var42.f_5 = 4219918;
									Var53.f_5 = 1.5f;
									Var53 = 0;
									Var53.f_6 = 4f;
									__LIB_9__::func_175(*iParam1, Global_35, &Var4, vVar1, Var42.f_4, Var42.f_5, 1, 9f, 8f, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
									__LIB_13__::func_492(Global_35, *iParam1, &Var53, -1, 0, 0);
									__LIB_1__::func_731(&uLocal_970);
									__LIB_1__::func_683(&iLocal_1118, 16777216);
									if (!__LIB_0__::func_27(iParam1->f_8, 268435456))
									{
										__LIB_1__::func_681(&iLocal_1118, 2);
										__LIB_1__::func_683(&(iParam1->f_8), 268435456);
										__LIB_1__::func_681(&(Local_156.f_8), 268435456);
									}
									__LIB_1__::func_681(&(iParam1->f_8), 536870912);
									iParam1->f_10 = 0;
									iParam1->f_7 = 0;
									iParam1->f_6 = 1;
								}
							}
							else
							{
								__LIB_2__::func_966(*iParam1, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
								__LIB_2__::func_966(Global_35, *iParam1, 1, 0, 0, 0, 1, 1, 0, 1, 1);
								__LIB_9__::func_397(&uLocal_970, *iParam1);
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
								PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
								if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam5))
								{
									*iParam5 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@leadin@rsc_3@kieran_enter", 0, "pl_Kieran_Enter", false, true);
									ANIMSCENE::LOAD_ANIM_SCENE(*iParam5);
								}
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
								{
									iParam1->f_20 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
									if (!__LIB_0__::func_27(iParam1->f_8, -2147483648))
									{
										if (iParam1->f_20 >= 15)
										{
											PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Stealth", 1f, -1);
											__LIB_1__::func_683(&(iParam1->f_8), -2147483648);
										}
									}
									if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam1))
									{
										if (iParam1->f_10 == 0)
										{
											iParam1->f_10 = MISC::GET_GAME_TIMER();
										}
										else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 1500)
										{
											__LIB_1__::func_683(&(iParam1->f_8), 536870912);
										}
									}
									else
									{
										iParam1->f_10 = 0;
										__LIB_1__::func_681(&(iParam1->f_8), 536870912);
									}
									if (iParam1->f_20 >= 51)
									{
										func_323(iParam1, 6, 0, 1);
										func_323(&Local_177, 6, 0, 1);
										func_323(&Local_156, 6, 0, 1);
									}
								}
							}
							break;
						case 1:
							__LIB_2__::func_966(Global_35, *iParam1, 1, 0, 0, 0, 1, 1, 0, 1, 1);
							__LIB_9__::func_397(&uLocal_970, *iParam1);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
							if (iParam1->f_6 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam5) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam5, true, false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_ENTER_ANIM_SCENE(*iParam1, *iParam5, "kieran", "pl_kieran_enter", 1.48f, 1, 11, 20000, -1082130432 /* Float: -1f */);
									iParam1->f_6 = 1;
								}
							}
							break;
					}
					break;
				case 7:
					if (iParam1->f_6 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::CLEAR_PED_TASKS(*iParam1, true, false);
						PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
						iParam1->f_6 = 1;
					}
					break;
				case 8:
					if (iParam1->f_6 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						iParam1->f_12 = 0;
						iParam1->f_13 = 0;
						iParam1->f_6 = 1;
					}
					break;
				case 9:
					if (iParam1->f_6 == 0)
					{
						iParam1->f_6 = 1;
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam6) && ANIMSCENE::_0x1F0E401031E20146(*iParam6, "pl_exit"))
					{
						PED::_0xF7EA250B9A919E03(joaat("CROUCH"), *iParam1);
						if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam6, "Kieran"))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
							TASK::TASK_SET_CROUCH_MOVEMENT(*iParam1, true, 0, false);
							func_323(iParam1, 11, 0, 0);
						}
					}
					break;
				case 11:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam1, 1f);
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								iParam1->f_13 = 0;
								iParam1->f_12 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (((!__LIB_11__::func_307(Global_35, Local_851[0 /*5*/].f_4, 1, 7.5f) && !__LIB_11__::func_307(Global_35, Local_851[1 /*5*/].f_4, 1, 7.5f)) && !__LIB_11__::func_307(Local_156, Local_851[0 /*5*/].f_4, 1, 7.5f)) && !__LIB_11__::func_307(Local_156, Local_851[1 /*5*/].f_4, 1, 7.5f))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[0 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
									iParam1->f_6 = 1;
								}
							}
							else
							{
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1716541277, true) != 1)
								{
									iParam1->f_6 = 0;
								}
								if (__LIB_0__::func_255(Local_240[1 /*21*/], 0) && __LIB_0__::func_255(Local_240[2 /*21*/], 0))
								{
									iParam1->f_6 = 0;
									iParam1->f_7++;
								}
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[7 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (__LIB_13__::func_516(*iParam1, Local_851[7 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
							{
								iParam1->f_6 = 0;
								iParam1->f_7++;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1716541277, true) != 1)
							{
								iParam1->f_6 = 0;
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[8 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (__LIB_13__::func_516(*iParam1, Local_851[8 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
							{
								iParam1->f_6 = 0;
								iParam1->f_7++;
							}
							break;
						case 4:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[9 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (__LIB_13__::func_516(*iParam1, Local_851[9 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
							{
								iParam1->f_6 = 0;
								iParam1->f_7++;
							}
							break;
						case 5:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[10 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (__LIB_13__::func_516(*iParam1, Local_851[10 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
							{
								iParam1->f_6 = 0;
								iParam1->f_7++;
							}
							break;
						case 6:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[11 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							break;
						case 7:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								iParam1->f_6 = 1;
							}
							break;
						case 8:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(*iParam1, Local_851[14 /*5*/].f_4, vLocal_15, -1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1716541277, true) != 1)
							{
								iParam1->f_6 = 0;
							}
							break;
					}
					if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
					{
						func_323(iParam1, 15, 0, 0);
					}
					break;
				case 15:
					PED::SET_PED_RESET_FLAG(*iParam1, 132, true);
					if (iParam1->f_6 == 0)
					{
						PED::SET_COMBAT_FLOAT(*iParam1, 40, 0f);
						PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 35, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 93, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 512, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1024, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 128, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 32768, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COWER(*iParam1, -1, 0, 0);
						iParam1->f_6 = 1;
					}
					break;
				case 14:
					if (!__LIB_0__::func_27(iParam1->f_8, 1073741824 /* Float: 2f */))
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Cautious", 1f, -1);
						__LIB_1__::func_683(&(iParam1->f_8), 1073741824 /* Float: 2f */);
					}
					if (iParam1->f_6 == 0)
					{
						iParam1->f_1 = func_1343(*iParam1, Local_177, Local_156, Local_177.f_1, Local_156.f_1);
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
						{
							if (iParam1->f_10 == 0)
							{
								iParam1->f_10 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 2500)
							{
								func_323(iParam1, 18, 0, 0);
							}
						}
						else
						{
							__LIB_4__::func_719(iParam3, 0, 1, 1, 1, 0);
							PED::_0x6569F31A01B4C097(*iParam1, 3, 1);
							PED::_0x6569F31A01B4C097(*iParam1, 2, 1);
							PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, false, 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_LOOT_ENTITY(*iParam1, iParam1->f_1);
							__LIB_1__::func_681(&(iParam1->f_8), 256);
							iParam1->f_10 = 0;
							iParam1->f_6 = 1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 8)
						{
							if (!func_1345(iParam1, iParam1->f_1))
							{
								if (__LIB_3__::func_578(iParam1->f_1))
								{
									iParam1->f_10 = 0;
									func_323(iParam1, 14, 0, 0);
								}
								else if (iParam1->f_10 == 0)
								{
									iParam1->f_10 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 5000)
								{
									func_323(iParam1, 14, 0, 0);
								}
							}
						}
					}
					break;
				case 18:
					if (iParam1->f_6 == 0)
					{
						STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_FIRE_STAND"), 15, 0, 0);
						if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_FIRE_STAND"), false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[16], 0, 0, true, false, 0, false, -1f, false);
							iParam1->f_6 = 1;
						}
					}
					break;
			}
		}
	}
}

void func_839(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	struct<27> Var19;
	int iVar57;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if ((((((iParam1->f_3 != 22 && iParam1->f_3 != 23) && iParam1->f_3 != 14) && iParam1->f_3 != 8) && iParam1->f_3 != 9) && iParam1->f_3 != 10) && iParam1->f_3 != 18)
			{
				if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
				{
					func_323(iParam1, 22, 0, -1);
				}
			}
			switch (iParam1->f_3)
			{
				case 1:
					if (iParam1->f_6 == 0)
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1379, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1379) >= 0.375f)
						{
							WEAPON::_HIDE_PED_WEAPONS(*iParam1, 2, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -113.3041f, -31.4506f, 94.8303f, 1f, 20000, 0.25f, 512, 13.9701f);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							iParam1->f_6 = 1;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8)
					{
						func_323(iParam1, 2, 0, -1);
					}
					break;
				case 2:
					if (iParam1->f_6 == 0)
					{
						iParam1->f_6 = 1;
					}
					else if (func_225(11) || ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1379, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1379) > 0.85f))
					{
						func_323(iParam1, 3, 0, 0);
					}
					break;
				case 3:
					if (iParam1->f_6 == 0)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2)) && PED::_0x2D64376CF437363E(iParam2))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_MOUNT_ANIMAL(*iParam1, iParam2, 60000, -1, __LIB_5__::func_439(__LIB_18__::func_605(iParam3, 0), 1f, 1.5f), 1, 0, 0);
							__LIB_1__::func_683(&(iParam1->f_8), 16777216);
							iParam1->f_6 = 1;
						}
					}
					else if (__LIB_0__::func_394(*iParam1, iParam2, 1))
					{
						if (__LIB_13__::func_561(*iParam1, Local_135))
						{
							func_323(iParam1, 4, 0, -1);
						}
					}
					else
					{
						if (!PED::IS_PED_ON_MOUNT(*iParam1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) == 1)
							{
								if (__LIB_0__::func_394(Global_35, iLocal_815, 0))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, __LIB_5__::func_439(__LIB_18__::func_605(iParam3, 0), 1.5f, 2f));
								}
							}
						}
						if (!PED::IS_PED_ON_MOUNT(*iParam1) && !PED::_0x1D46B417F926D34D(*iParam1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) != 1)
							{
								func_323(iParam1, 3, 0, -1);
							}
						}
					}
					break;
				case 4:
					if (iParam1->f_6 == 0)
					{
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_117);
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_117))
						{
							func_330();
							func_331(0);
							__LIB_1__::func_683(&(iParam1->f_8), 16777216);
							if (!__LIB_0__::func_27(iParam1->f_8, 268435456))
							{
								__LIB_1__::func_681(&iLocal_1118, 2);
								__LIB_1__::func_683(&(iParam1->f_8), 268435456);
							}
							__LIB_1__::func_681(&(iParam1->f_8), 8388608);
							iParam1->f_6 = 1;
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
							{
								__LIB_11__::func_346(*iParam1, &uLocal_1019);
								fVar18 = 1.501f;
								iParam1->f_20 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
								if (!__LIB_0__::func_27(iLocal_1118, 33554432))
								{
									if (!__LIB_0__::func_27(iParam1->f_8, 8388608))
									{
										if (iParam1->f_20 >= 5)
										{
											__LIB_1__::func_683(&(iParam1->f_8), 8388608);
										}
									}
								}
								switch (iParam1->f_7)
								{
									case 0:
										if (iParam1->f_20 >= 0)
										{
											if (PED::DOES_GROUP_EXIST(iLocal_1040) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
											{
												PED::_0xD5BD1B5318A81994(iLocal_1040, 1);
												PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_156, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
												PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam1, 2);
												PED::_0x9BBEAF8B0C007F1E(*iParam1, 0);
												iParam1->f_7++;
											}
										}
										break;
									case 1:
										if (iParam1->f_20 >= 70)
										{
											if (PED::DOES_GROUP_EXIST(iLocal_1040) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
											{
												PED::_0xD5BD1B5318A81994(iLocal_1040, 0);
												PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_156, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
												PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam1, 0);
												PED::_0x9BBEAF8B0C007F1E(*iParam1, 1);
												iParam1->f_7++;
											}
										}
										break;
									case 2:
										if (iParam1->f_20 >= 825)
										{
											if (PED::DOES_GROUP_EXIST(iLocal_1040))
											{
												PED::_0xE1103300F3456DE7(iLocal_1040, 1.5f, 3f);
												if (__LIB_0__::func_272(Local_177, 0))
												{
													PED::_0x0E9E95FDEDCC9D35(Local_177, 0, 0);
												}
												if (__LIB_0__::func_272(Global_35, 0))
												{
													PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 0);
												}
											}
											iParam1->f_7++;
										}
										break;
									case 3:
										if (iParam1->f_20 >= 890)
										{
											if (PED::DOES_GROUP_EXIST(iLocal_1040) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
											{
												PED::_0xD5BD1B5318A81994(iLocal_1040, 1);
												PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_156, -1082130432 /* Float: -1f */, 10f, 2, 2, 0);
												PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam1, 2);
												PED::_0x9BBEAF8B0C007F1E(*iParam1, 0);
												iParam1->f_7++;
											}
										}
										break;
									case 4:
										if (iParam1->f_20 >= 915)
										{
											if (PED::DOES_GROUP_EXIST(iLocal_1040) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
											{
												PED::_0xD5BD1B5318A81994(iLocal_1040, 1);
												PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_156, -1082130432 /* Float: -1f */, 15f, 2, 2, 0);
												PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam1, 2);
												PED::_0x9BBEAF8B0C007F1E(*iParam1, 0);
												__LIB_1__::func_683(&iLocal_1118, 33554432);
												__LIB_1__::func_681(&(iParam1->f_8), 8388608);
												iParam1->f_7++;
											}
										}
										break;
								}
								if (iParam1->f_20 >= 960)
								{
									fVar18 = 1.001f;
								}
								else if (iParam1->f_20 >= 920)
								{
									fVar18 = 1.25f;
								}
								else if (iParam1->f_20 >= 830)
								{
									fVar18 = 1.5f;
								}
								else if (iParam1->f_20 >= 745)
								{
									fVar18 = 1.75f;
								}
								else if (iParam1->f_20 >= 550)
								{
									fVar18 = 1.501f;
								}
								else if (iParam1->f_20 >= 390)
								{
									fVar18 = 1.75f;
								}
								else if (iParam1->f_20 >= 300)
								{
									fVar18 = 1.501f;
								}
								else if (iParam1->f_20 >= 90)
								{
									fVar18 = 1.75f;
								}
								else if (iParam1->f_20 >= 65)
								{
									fVar18 = 1.501f;
								}
								else if (iParam1->f_20 >= 15)
								{
									fVar18 = 1.25f;
								}
								else
								{
									fVar18 = 1f;
								}
								__LIB_17__::func_726(*iParam1, fVar18, 0, 0.2f, 1, 3f, 30f, 60f, 0.075f, 0.75f, 1, __LIB_0__::func_27(iParam1->f_8, 8388608), -1f, iLocal_815);
								if (__LIB_0__::func_27(iLocal_1118, 33554432) || __LIB_17__::func_725(*iParam1, Global_35, sLocal_117))
								{
									TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(*iParam1, 0);
								}
								if (iParam1->f_20 >= 970)
								{
									func_323(iParam1, 5, 0, 0);
								}
							}
						}
						if (!PED::IS_PED_ON_MOUNT(*iParam1) && !PED::IS_PED_RAGDOLL(*iParam1))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0) && !PED::IS_PED_RAGDOLL(*iParam1))
							{
								TASK::CLEAR_PED_TASKS(*iParam1, true, false);
							}
							func_323(iParam1, 3, 0, -1);
						}
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) != 1)
							{
								if (__LIB_0__::func_394(*iParam1, iParam2, 1) && __LIB_0__::func_394(Local_135, iParam2, 1))
								{
									func_323(iParam1, 4, 0, -1);
								}
							}
						}
					}
					break;
				case 5:
					__LIB_1__::func_681(&(iParam1->f_8), 16777216);
					WEAPON::_0xB832F1A686B9B810(*iParam1, 1, 1);
					vVar3 = { 88.3307f, 1157.093f, 184.257f };
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (__LIB_0__::func_866(iParam3, 0))
								{
									__LIB_1__::func_640(iParam3);
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar2);
								TASK::OPEN_SEQUENCE_TASK(&iVar2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1.001f, 40000, (0.25f * 2f), 0, 25f);
								TASK::CLOSE_SEQUENCE_TASK(iVar2);
								TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar2);
								TASK::CLEAR_SEQUENCE_TASK(&iVar2);
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
								}
								if (!__LIB_0__::func_27(iParam1->f_8, 1073741824 /* Float: 2f */))
								{
									PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Cautious", 1f, -1);
									__LIB_1__::func_683(&(iParam1->f_8), 1073741824 /* Float: 2f */);
								}
								func_323(&Local_135, 5, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8 || __LIB_0__::func_266(*iParam1, vVar3, (0.25f * 2f), 1, 1))
							{
								func_323(iParam1, 5, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_DISMOUNT_ANIMAL(*iParam1, 131072, 0, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam1) && !AITRANSPORT::_0x660639BC60157048(*iParam1, iParam2))
							{
								if (__LIB_0__::func_27(iLocal_1118, 16777216))
								{
									if (!PED::IS_PED_INJURED(Local_135))
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_135) >= 10)
										{
											func_323(iParam1, 6, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				case 7:
					if (iParam1->f_6 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, -1, -1f, 1.309f, -1f);
						iParam1->f_6 = 1;
					}
					else if (!__LIB_0__::func_27(Local_135.f_8, 536870912))
					{
						func_323(iParam1, 6, 0, -1);
					}
					break;
				case 6:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								Var19.f_4 = 1065353216;
								Var19.f_5 = 1065353216;
								Var19.f_9 = 1065353216;
								Var19.f_10 = 1065353216;
								Var19.f_14 = 1065353216;
								Var19.f_15 = 1065353216;
								Var19.f_17 = 1040187392;
								Var19.f_18 = 1040187392;
								Var19.f_19 = -1;
								Var19.f_26 = -1082130432;
								if (__LIB_0__::func_866(iParam3, 0))
								{
									__LIB_1__::func_640(iParam3);
								}
								if (PED::IS_PED_IN_GROUP(*iParam1))
								{
									PED::REMOVE_PED_FROM_GROUP(*iParam1);
								}
								PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(*iParam1, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								__LIB_3__::func_898(*iParam1, Local_135, &Var19, -1082130432 /* Float: -1f */, 0, 0, -1f, 1f, 1, 32, -1.15f, -0.5f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
								__LIB_1__::func_681(&(iParam1->f_8), 268435456);
								iParam1->f_6 = 1;
							}
							else
							{
								__LIB_2__::func_966(*iParam1, Local_135, 1, 1, 1, 0, 1, 1, 0, 1, 1);
								if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4))
								{
									*iParam4 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@leadin@rsc_3@john_enter", 0, "pl_John_Enter", false, true);
									ANIMSCENE::LOAD_ANIM_SCENE(*iParam4);
								}
								if (!__LIB_0__::func_27(iParam1->f_8, -2147483648))
								{
									if (__LIB_0__::func_266(*iParam1, vLocal_65, 25f, 1, 1) || __LIB_0__::func_27(Local_135.f_8, -2147483648))
									{
										PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Stealth", 1f, -1);
										__LIB_1__::func_683(&(iParam1->f_8), -2147483648);
									}
								}
								if (!PED::IS_PED_INJURED(Local_135))
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_135))
									{
										if (__LIB_0__::func_27(Local_135.f_8, 536870912))
										{
											func_323(iParam1, 7, 0, -1);
										}
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam4, true, false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_ENTER_ANIM_SCENE(*iParam1, *iParam4, "johnmarston", "pl_john_enter", 1.48f, 0, 3, 20000, -1082130432 /* Float: -1f */);
									iParam1->f_6 = 1;
								}
							}
							else if (ANIMSCENE::_0x337F1CC8EE895601(*iParam4, "johnmarston") || TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1369124074, true) == 8)
							{
								__LIB_1__::func_683(&iLocal_1118, 1048576);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam4, "johnmarston", *iParam1, 0);
								ANIMSCENE::START_ANIM_SCENE(*iParam4);
								func_323(iParam1, 6, 1, 2);
							}
							break;
						case 2:
							break;
					}
					break;
				case 8:
					if (iParam1->f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam6) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam6, false))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam6, "pl_exit");
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						iParam1->f_12 = 0;
						iParam1->f_13 = 0;
						iParam1->f_6 = 1;
					}
					else
					{
						if (!__LIB_0__::func_27(iLocal_1120, 536870912))
						{
							__LIB_13__::func_493(Local_135, 0);
							__LIB_10__::func_979(*iParam1, __LIB_1__::func_464(iParam3, 0), 5f, 0, 0, 0);
							__LIB_1__::func_683(&(iParam1->f_8), 67108864);
							__LIB_1__::func_683(&(Local_135.f_8), 67108864);
							__LIB_1__::func_683(&iLocal_1120, 536870912);
						}
						else if (!func_225(66) && !func_225(67))
						{
							if (!__LIB_0__::func_139(iLocal_847[2]))
							{
								bVar0 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && __LIB_0__::func_48(Global_35, *iParam1, 5f, 1));
								if (bVar0 == 1)
								{
									iLocal_847[2] = __LIB_1__::func_877("RDST2_U_JTALK2", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
									if (__LIB_0__::func_139(iLocal_847[2]))
									{
										__LIB_9__::func_332(&(iLocal_847[2]), *iParam1);
										if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
										{
											__LIB_1__::func_221(iLocal_847[2], 0, 1);
										}
										else
										{
											__LIB_1__::func_221(iLocal_847[2], 1, 1);
										}
									}
								}
							}
							else
							{
								if (__LIB_0__::func_139(iLocal_847[2]))
								{
									if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
									{
										__LIB_1__::func_221(iLocal_847[2], 0, 1);
									}
									else
									{
										__LIB_1__::func_221(iLocal_847[2], 1, 1);
									}
								}
								if (__LIB_0__::func_572(iLocal_847[2], 0))
								{
									if (__LIB_1__::func_732(iLocal_847[2], 1))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												if (__LIB_12__::func_876(uParam0, "DST2_JHASK1", 0))
												{
													__LIB_1__::func_748(&(iLocal_847[2]), 1, 1);
													func_374(66, 1);
													__LIB_8__::func_771(*iParam1, 1, 1, 0);
												}
												break;
											case 1:
												if (__LIB_12__::func_876(uParam0, "DST2_JHASK2", 0))
												{
													__LIB_1__::func_748(&(iLocal_847[2]), 1, 1);
													func_374(67, 1);
													__LIB_8__::func_771(*iParam1, 1, 1, 0);
												}
												break;
										}
									}
								}
							}
						}
						if (__LIB_0__::func_139(iLocal_847[2]))
						{
							if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) || !__LIB_0__::func_48(Global_35, *iParam1, 5f, 1))
							{
								__LIB_1__::func_748(&(iLocal_847[2]), 1, 1);
							}
						}
						if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) || func_1059(&(Local_240[0 /*21*/])))
						{
							if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) && !AUDIO::_0x54B187F111D9C6F8(*iParam1, 0))
							{
								__LIB_1__::func_748(&(iLocal_847[2]), 1, 1);
								__LIB_8__::func_771(*iParam1, 1, 1, 0);
								func_323(iParam1, 9, 0, 0);
								func_323(&Local_135, 9, 0, 0);
							}
						}
					}
					break;
				case 9:
					if (iParam1->f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam6) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam6, false))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam6, "pl_exit");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam6, "pl_exit"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135, true);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam6, "pl_exit", true);
								iParam1->f_6 = 1;
							}
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam6) && ANIMSCENE::_0x1F0E401031E20146(*iParam6, "pl_exit"))
					{
						PED::_0xF7EA250B9A919E03(joaat("CROUCH"), *iParam1);
						if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam6, "JohnMarston"))
						{
							if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
							{
								func_323(iParam1, 22, 0, 0);
							}
							else
							{
								func_323(iParam1, 11, 0, 0);
							}
						}
					}
					break;
				case 11:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
								if (!__LIB_11__::func_307(Global_35, Local_851[1 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 1;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[0 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 0;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 1, 1, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
								{
									if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
									{
										PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
									}
									else
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
									}
								}
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
								{
									switch (iParam1->f_9)
									{
										case 1:
											if (__LIB_11__::func_307(Global_35, Local_851[1 /*5*/].f_4, 1, 3f))
											{
												func_323(iParam1, 11, 0, 0);
											}
											break;
										case 0:
											if (__LIB_11__::func_307(Global_35, Local_851[0 /*5*/].f_4, 1, 3f))
											{
												func_323(iParam1, 11, 0, 0);
											}
											break;
									}
								}
								if (func_1059(&(Local_240[0 /*21*/])))
								{
									func_323(iParam1, 11, 0, 1);
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
								if (!__LIB_11__::func_307(Global_35, Local_851[7 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 7;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[2 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 2;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 1, 1, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
								{
									if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
									{
										PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
									}
									else
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
									}
								}
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
								{
									switch (iParam1->f_9)
									{
										case 7:
											if (__LIB_11__::func_307(Global_35, Local_851[7 /*5*/].f_4, 1, 3f))
											{
												func_323(iParam1, 11, 0, 1);
											}
											break;
										case 2:
											if (__LIB_11__::func_307(Global_35, Local_851[2 /*5*/].f_4, 1, 3f))
											{
												func_323(iParam1, 11, 0, 1);
											}
											break;
									}
								}
								if (__LIB_0__::func_27(iLocal_1121, 4))
								{
									func_323(iParam1, 11, 0, 2);
								}
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
								if (!__LIB_11__::func_307(Global_35, Local_851[14 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 14;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[11 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 11;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 1, 1, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
								{
									if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
									{
										PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
									}
									else
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
									}
								}
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
								{
									switch (iParam1->f_9)
									{
										case 14:
											if (__LIB_11__::func_307(Global_35, Local_851[14 /*5*/].f_4, 1, 3f))
											{
												func_323(iParam1, 11, 0, 2);
											}
											break;
										case 11:
											if (__LIB_11__::func_307(Global_35, Local_851[11 /*5*/].f_4, 1, 3f))
											{
												func_323(iParam1, 11, 0, 2);
											}
											break;
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 32768))
								{
									if (func_225(103))
									{
										__LIB_10__::func_979(Local_304[0 /*21*/], "", 30f, 0, 30f, 0);
										__LIB_10__::func_979(*iParam1, __LIB_1__::func_464(iParam3, 0), 15f, 0, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_8), 67108864);
										__LIB_1__::func_683(&(Local_304[0 /*21*/].f_8), 67108864);
										__LIB_1__::func_683(&iLocal_1120, 32768);
									}
								}
								else if (((!__LIB_0__::func_27(iLocal_1120, 65536) && !__LIB_0__::func_27(iLocal_1120, 131072)) && !__LIB_0__::func_27(iLocal_1120, 262144)) && !__LIB_0__::func_27(Local_304[0 /*21*/].f_8, 8))
								{
									if (__LIB_0__::func_27(iParam1->f_8, 67108864))
									{
										if (__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 5f, 1))
										{
											__LIB_8__::func_771(*iParam1, 1, 1, 0);
											__LIB_1__::func_681(&(iParam1->f_8), 67108864);
										}
									}
									else if (!__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 5f, 1))
									{
										__LIB_10__::func_979(*iParam1, __LIB_1__::func_464(iParam3, 0), 15f, 0, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_8), 67108864);
									}
									if ((!__LIB_0__::func_139(iLocal_847[0]) && !__LIB_0__::func_139(iLocal_847[1])) && !__LIB_0__::func_139(iLocal_847[2]))
									{
										bVar0 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && __LIB_0__::func_48(Global_35, *iParam1, 15f, 1));
										bVar1 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_304[0 /*21*/]) && __LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 30f, 1));
										if (bVar0 == 1 || bVar1 == 1)
										{
											if (bVar0 == 1 && __LIB_0__::func_27(iParam1->f_8, 67108864))
											{
												iLocal_847[0] = __LIB_1__::func_877("RDST2_U_DECIDEC2", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												iLocal_847[1] = __LIB_1__::func_877("RDST2_U_DECIDEA1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												__LIB_9__::func_332(&(iLocal_847[0]), *iParam1);
												__LIB_9__::func_332(&(iLocal_847[1]), *iParam1);
											}
											else if (bVar1 == 1)
											{
												iLocal_847[0] = __LIB_1__::func_877("RDST2_U_DECIDEC2", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												iLocal_847[1] = __LIB_1__::func_877("RDST2_U_DECIDEA1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												__LIB_9__::func_332(&(iLocal_847[0]), Local_304[0 /*21*/]);
												__LIB_9__::func_332(&(iLocal_847[1]), Local_304[0 /*21*/]);
												__LIB_5__::func_437(Local_304[0 /*21*/], "", 1);
											}
											if (__LIB_0__::func_139(iLocal_847[0]) || __LIB_0__::func_139(iLocal_847[1]))
											{
												if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
												{
													if (__LIB_0__::func_139(iLocal_847[0]))
													{
														__LIB_1__::func_221(iLocal_847[0], 0, 1);
													}
													if (__LIB_0__::func_139(iLocal_847[1]))
													{
														__LIB_1__::func_221(iLocal_847[1], 0, 1);
													}
												}
												else
												{
													if (__LIB_0__::func_139(iLocal_847[0]))
													{
														__LIB_1__::func_221(iLocal_847[0], 1, 1);
													}
													if (__LIB_0__::func_139(iLocal_847[1]))
													{
														__LIB_1__::func_221(iLocal_847[1], 1, 1);
													}
												}
											}
										}
									}
									else
									{
										if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
										{
											if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
											{
												__LIB_1__::func_221(iLocal_847[0], 0, 1);
												__LIB_1__::func_221(iLocal_847[1], 0, 1);
											}
											else
											{
												__LIB_1__::func_221(iLocal_847[0], 1, 1);
												__LIB_1__::func_221(iLocal_847[1], 1, 1);
											}
										}
										if (__LIB_0__::func_572(iLocal_847[0], 0) && __LIB_1__::func_732(iLocal_847[0], 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2DECIDEC2", 0))
											{
												iParam1->f_10 = MISC::GET_GAME_TIMER();
												iParam1->f_12 = MISC::GET_GAME_TIMER();
												__LIB_13__::func_520(&iLocal_847);
												func_374(106, 1);
												__LIB_8__::func_771(*iParam1, 1, 1, 0);
												__LIB_8__::func_771(Local_304[0 /*21*/], 0, 1, 0);
												__LIB_1__::func_683(&iLocal_1120, 65536);
											}
										}
										else if (__LIB_0__::func_572(iLocal_847[1], 0) && __LIB_1__::func_732(iLocal_847[1], 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2DECIDEC1", 0))
											{
												iParam1->f_10 = MISC::GET_GAME_TIMER();
												iParam1->f_12 = MISC::GET_GAME_TIMER();
												fLocal_1270 = Local_304[0 /*21*/].f_18;
												__LIB_13__::func_520(&iLocal_847);
												func_374(105, 1);
												__LIB_8__::func_771(*iParam1, 1, 1, 0);
												__LIB_8__::func_771(Local_304[0 /*21*/], 0, 1, 0);
												__LIB_1__::func_683(&iLocal_1120, 131072);
											}
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 262144))
								{
									if (!__LIB_0__::func_139(iLocal_847[2]))
									{
										if (__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 4f, 1))
										{
											iLocal_847[2] = __LIB_2__::func_403("INTERACT_STEALTH_KILL", joaat("INPUT_INTERACT_LOCKON_NEG"), Local_304[0 /*21*/], 1, 1, 1, 1, 0, 4f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
											__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
											__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
										}
									}
									else if (__LIB_0__::func_572(iLocal_847[2], 0) && __LIB_1__::func_732(iLocal_847[2], 1))
									{
										__LIB_13__::func_520(&iLocal_847);
										__LIB_8__::func_771(*iParam1, 1, 1, 0);
										__LIB_8__::func_771(Local_304[0 /*21*/], 0, 1, 0);
										__LIB_1__::func_683(&iLocal_1120, 262144);
									}
								}
								if (__LIB_0__::func_139(iLocal_847[0]) || __LIB_0__::func_139(iLocal_847[1]))
								{
									if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_304[0 /*21*/]))
									{
										__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
										__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
									}
								}
								if (__LIB_0__::func_139(iLocal_847[2]))
								{
									if (!__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 4f, 1))
									{
										__LIB_1__::func_748(&(iLocal_847[2]), 1, 1);
									}
								}
								if (__LIB_0__::func_27(iLocal_1120, 65536))
								{
									if (func_225(106))
									{
										if (__LIB_8__::func_684("DST2DECIDEC2") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DST2DECIDEC2") > 0)
										{
											func_323(iParam1, 11, 0, 3);
										}
										if (!__LIB_8__::func_684("DST2DECIDEC2"))
										{
											func_323(iParam1, 11, 0, 3);
										}
									}
								}
								if (func_1059(&(Local_304[0 /*21*/])))
								{
									func_323(iParam1, 11, 0, 5);
								}
							}
							break;
						case 3:
							if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam5, true, false))
							{
								ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(*iParam5, &vVar6, &vVar9, 2);
								vVar12 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("script_rc@dst2@ig@rcs2_ig1_goon_assassination", "action_john", vVar6, vVar9, 0f, 2) };
								vVar15 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("script_rc@dst2@ig@rcs2_ig1_goon_assassination", "action_john", vVar6, vVar9, 0f, 2) };
							}
							if (iParam1->f_6 == 0)
							{
								if (!__LIB_0__::func_266(Global_35, vVar12, 1f, 1, 1) && !func_1357())
								{
									if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam1, &iVar57, true, 0, false) == 0 || (WEAPON::GET_CURRENT_PED_WEAPON(*iParam1, &iVar57, true, 0, false) && iVar57 != joaat("WEAPON_MELEE_KNIFE_JOHN")))
									{
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_MELEE_KNIFE_JOHN"), false, 0, false, false);
										TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
									}
									PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vVar12, 1f, 40000, 0.25f, 0, vVar15.z);
									iParam1->f_6 = 1;
								}
							}
							else
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 1)
								{
									PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
								{
									if (!__LIB_0__::func_266(Global_35, vVar12, 1f, 1, 1))
									{
										func_323(iParam1, 11, 0, 4);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 1)
								{
									if (func_1357() || __LIB_0__::func_266(Global_35, vVar12, 1f, 1, 1))
									{
										TASK::CLEAR_PED_TASKS(*iParam1, false, false);
										func_323(iParam1, 11, 0, 3);
									}
								}
							}
							if (PED::IS_PED_INJURED(Local_304[0 /*21*/]))
							{
								if (__LIB_9__::func_225(Global_35, Local_304[0 /*21*/]) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam5) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam5, false)))
								{
									func_323(iParam1, 11, 0, 5);
								}
							}
							break;
						case 4:
							if (iParam1->f_6 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam5) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam5, true, false))
								{
									if (!PED::IS_PED_INJURED(Local_304[0 /*21*/]) && !func_1357())
									{
										func_323(&(Local_304[0 /*21*/]), 25, 0, 1);
										iParam1->f_6 = 1;
									}
								}
							}
							if (PED::IS_PED_INJURED(Local_304[0 /*21*/]))
							{
								if (__LIB_9__::func_225(Global_35, Local_304[0 /*21*/]) || __LIB_0__::func_27(iLocal_1118, 512))
								{
									func_323(iParam1, 11, 0, 5);
								}
							}
							break;
						case 5:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
								if (!__LIB_11__::func_307(Global_35, Local_851[15 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 15;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[17 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 17;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								}
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 0, 0, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								if ((!__LIB_0__::func_27(iLocal_1120, 67108864) && !__LIB_0__::func_27(iLocal_1120, 134217728)) && !__LIB_0__::func_27(Local_326[1 /*21*/].f_8, 8))
								{
									if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
									{
										if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
										{
											PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
										}
										if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
										}
										else
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
										}
									}
									if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
									{
										switch (iParam1->f_9)
										{
											case 15:
												if (__LIB_11__::func_307(Global_35, Local_851[15 /*5*/].f_4, 1, 3f))
												{
													func_323(iParam1, 11, 0, 5);
												}
												break;
											case 17:
												if (__LIB_11__::func_307(Global_35, Local_851[17 /*5*/].f_4, 1, 3f))
												{
													func_323(iParam1, 11, 0, 5);
												}
												break;
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 33554432))
								{
									if (func_225(108))
									{
										__LIB_10__::func_979(Local_326[1 /*21*/], "", 50f, 0, 50f, 0);
										__LIB_10__::func_979(*iParam1, __LIB_1__::func_464(iParam3, 0), 15f, 0, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_8), 67108864);
										__LIB_1__::func_683(&(Local_326[1 /*21*/].f_8), 67108864);
										__LIB_1__::func_683(&iLocal_1120, 33554432);
									}
								}
								else if ((!__LIB_0__::func_27(iLocal_1120, 67108864) && !__LIB_0__::func_27(iLocal_1120, 134217728)) && !__LIB_0__::func_27(Local_326[1 /*21*/].f_8, 8))
								{
									if (!__LIB_0__::func_139(iLocal_847[0]) && !__LIB_0__::func_139(iLocal_847[1]))
									{
										bVar0 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && __LIB_0__::func_48(Global_35, *iParam1, 15f, 1));
										bVar1 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_326[1 /*21*/]) && __LIB_0__::func_48(Global_35, Local_326[1 /*21*/], 40f, 1));
										if (bVar0 == 1 || bVar1 == 1)
										{
											iLocal_847[0] = __LIB_1__::func_877("RDST2_U_DECIDED1", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
											iLocal_847[1] = __LIB_1__::func_877("RDST2_U_DECIDEA1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
											if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
											{
												if (bVar0 == 1)
												{
													__LIB_9__::func_332(&(iLocal_847[0]), *iParam1);
													__LIB_9__::func_332(&(iLocal_847[1]), *iParam1);
												}
												else if (bVar1 == 1)
												{
													__LIB_9__::func_332(&(iLocal_847[0]), Local_326[1 /*21*/]);
													__LIB_9__::func_332(&(iLocal_847[1]), Local_326[1 /*21*/]);
													__LIB_5__::func_437(Local_326[1 /*21*/], "", 1);
												}
												if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
												{
													__LIB_1__::func_221(iLocal_847[0], 0, 1);
													__LIB_1__::func_221(iLocal_847[1], 0, 1);
												}
												else
												{
													__LIB_1__::func_221(iLocal_847[0], 1, 1);
													__LIB_1__::func_221(iLocal_847[1], 1, 1);
												}
											}
										}
									}
									else
									{
										if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
										{
											if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
											{
												__LIB_1__::func_221(iLocal_847[0], 0, 1);
												__LIB_1__::func_221(iLocal_847[1], 0, 1);
											}
											else
											{
												__LIB_1__::func_221(iLocal_847[0], 1, 1);
												__LIB_1__::func_221(iLocal_847[1], 1, 1);
											}
										}
										if (__LIB_0__::func_572(iLocal_847[0], 0) && __LIB_0__::func_572(iLocal_847[1], 0))
										{
											if (__LIB_1__::func_732(iLocal_847[0], 1))
											{
												if (__LIB_12__::func_876(uParam0, "DST2_ATTACK", 0))
												{
													iParam1->f_10 = MISC::GET_GAME_TIMER();
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													__LIB_13__::func_520(&iLocal_847);
													func_374(110, 1);
													__LIB_8__::func_771(*iParam1, 1, 1, 0);
													__LIB_8__::func_771(Local_326[1 /*21*/], 1, 1, 0);
													__LIB_1__::func_683(&iLocal_1120, 67108864);
												}
											}
											else if (__LIB_1__::func_732(iLocal_847[1], 1))
											{
												if (__LIB_12__::func_876(uParam0, "DST2WAITSIG", 0))
												{
													iParam1->f_10 = MISC::GET_GAME_TIMER();
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													__LIB_13__::func_520(&iLocal_847);
													func_374(109, 1);
													__LIB_8__::func_771(*iParam1, 1, 1, 0);
													__LIB_8__::func_771(Local_326[1 /*21*/], 1, 1, 0);
													__LIB_1__::func_683(&iLocal_1120, 134217728);
												}
											}
										}
									}
								}
								if (__LIB_0__::func_139(iLocal_847[0]) || __LIB_0__::func_139(iLocal_847[1]))
								{
									if ((!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) || !__LIB_0__::func_48(Global_35, *iParam1, 15f, 1)) && (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_326[1 /*21*/]) || !__LIB_0__::func_48(Global_35, Local_326[1 /*21*/], 40f, 1)))
									{
										__LIB_13__::func_520(&iLocal_847);
									}
								}
								if (__LIB_0__::func_27(iLocal_1120, 67108864))
								{
									if (func_225(110))
									{
										if (!__LIB_8__::func_684("DST2_ATTACK"))
										{
											__LIB_13__::func_520(&iLocal_847);
											__LIB_8__::func_771(*iParam1, 1, 1, 0);
											__LIB_8__::func_771(Local_326[1 /*21*/], 1, 1, 0);
											func_323(iParam1, 23, 0, 0);
											func_323(&Local_177, 23, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				case 23:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam1, 0f);
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 0f);
					if (iParam1->f_6 == 0)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
						func_1359(iParam1, 0, 55, 0.35f);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 2);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 0);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 91, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						if (ENTITY::DOES_ENTITY_EXIST(Local_326[2 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_326[2 /*21*/]))
						{
							TASK::TASK_COMBAT_PED(*iParam1, Local_326[2 /*21*/], 117440512, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_326[1 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_326[1 /*21*/]))
						{
							TASK::TASK_COMBAT_PED(*iParam1, Local_326[1 /*21*/], 117440512, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_326[4 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_326[4 /*21*/]))
						{
							TASK::TASK_COMBAT_PED(*iParam1, Local_326[4 /*21*/], 117440512, 0);
						}
						else
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 117440512, 0);
						}
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) && (MISC::GET_GAME_TIMER() - iParam1->f_10) > 7500)
					{
						func_323(iParam1, 22, 0, -1);
					}
					break;
				case 22:
					PED::SET_PED_RESET_FLAG(*iParam1, 132, true);
					if (iParam1->f_6 == 0)
					{
						func_1359(iParam1, 0, 55, 0.35f);
						__LIB_13__::func_520(&iLocal_847);
						__LIB_8__::func_771(*iParam1, 1, 1, 0);
						__LIB_8__::func_771(Local_304[0 /*21*/], 1, 1, 0);
						__LIB_8__::func_771(Local_326[5 /*21*/], 1, 1, 0);
						__LIB_8__::func_771(Local_240[1 /*21*/], 1, 1, 0);
						__LIB_8__::func_771(Local_240[0 /*21*/], 1, 1, 0);
						func_1360(*iParam1, &Local_326);
						func_1360(*iParam1, &Local_240);
						PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, false, 0, false);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 3, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 35, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 91, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
						PED::SET_COMBAT_FLOAT(*iParam1, 5, 1f);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 113, true);
						__LIB_4__::func_719(iParam3, 1, 1, 1, 1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						iParam1->f_6 = 1;
					}
					break;
				case 14:
					if (!__LIB_0__::func_27(iParam1->f_8, 1073741824 /* Float: 2f */))
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Cautious", 1f, -1);
						__LIB_1__::func_683(&(iParam1->f_8), 1073741824 /* Float: 2f */);
					}
					if (iParam1->f_6 == 0)
					{
						iParam1->f_1 = func_1343(*iParam1, Local_177, Local_135, Local_177.f_1, Local_135.f_1);
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
						{
							if (iParam1->f_10 == 0)
							{
								iParam1->f_10 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 2500)
							{
								func_323(iParam1, 18, 0, 0);
							}
						}
						else
						{
							__LIB_4__::func_719(iParam3, 0, 1, 1, 1, 0);
							PED::_0x6569F31A01B4C097(*iParam1, 3, 1);
							PED::_0x6569F31A01B4C097(*iParam1, 2, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_LOOT_ENTITY(*iParam1, iParam1->f_1);
							__LIB_1__::func_681(&(iParam1->f_8), 256);
							iParam1->f_10 = 0;
							iParam1->f_6 = 1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 8)
						{
							if (!func_1345(iParam1, iParam1->f_1))
							{
								if (__LIB_3__::func_578(iParam1->f_1))
								{
									iParam1->f_10 = 0;
									func_323(iParam1, 14, 0, 0);
								}
								else if (iParam1->f_10 == 0)
								{
									iParam1->f_10 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 5000)
								{
									func_323(iParam1, 14, 0, 0);
								}
							}
						}
					}
					break;
				case 18:
					if (iParam1->f_6 == 0)
					{
						STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_CHECK_PISTOL"), 15, 0, 0);
						if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_LEAN_CHECK_PISTOL"), false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[13], 0, 0, true, false, 0, false, -1f, false);
							iParam1->f_6 = 1;
						}
					}
					break;
			}
		}
	}
}

void func_840(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	Vector3 vVar3;
	vector3 vVar6;
	struct<27> Var9;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (((iParam1->f_3 != 22 && iParam1->f_3 != 23) && iParam1->f_3 != 14) && iParam1->f_3 != 18)
			{
				if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
				{
					func_323(iParam1, 22, 0, -1);
				}
			}
			switch (iParam1->f_3)
			{
				case 1:
					if (iParam1->f_6 == 0)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -131.0576f, -24.1616f, 95.1471f, 1f, 40000, (0.25f * 4f), 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -125.5034f, -28.9135f, 94.9413f, 1f, 40000, (0.25f * 4f), 1, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						iParam1->f_6 = 1;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8 || __LIB_0__::func_266(*iParam1, -125.5034f, -28.9135f, 94.9413f, (0.25f * 6f), 1, 1))
					{
						func_323(iParam1, 3, 0, -1);
					}
					break;
				case 3:
					if (iParam1->f_6 == 0)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2)) && PED::_0x2D64376CF437363E(iParam2))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_MOUNT_ANIMAL(*iParam1, iParam2, 60000, -1, __LIB_5__::func_439(__LIB_18__::func_605(iParam3, 0), 1f, 1.5f), 1, 0, 0);
							__LIB_1__::func_683(&(iParam1->f_8), 16777216);
							iParam1->f_6 = 1;
						}
					}
					else if (__LIB_0__::func_394(*iParam1, iParam2, 1))
					{
						if (__LIB_0__::func_394(Global_35, iLocal_815, 1) || __LIB_0__::func_394(Local_156, iLocal_813, 1))
						{
							if (PED::DOES_GROUP_EXIST(iLocal_1040))
							{
								func_323(iParam1, 4, 0, -1);
							}
						}
					}
					else
					{
						if (!PED::IS_PED_ON_MOUNT(*iParam1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) == 1)
							{
								if (__LIB_0__::func_394(Global_35, iLocal_815, 0))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, __LIB_5__::func_439(__LIB_18__::func_605(iParam3, 0), 1.5f, 2f));
								}
							}
						}
						if (!PED::IS_PED_ON_MOUNT(*iParam1) && !PED::_0x1D46B417F926D34D(*iParam1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) != 1)
							{
								func_323(iParam1, 3, 0, -1);
							}
						}
					}
					break;
				case 4:
					if (iParam1->f_6 == 0)
					{
						func_332(0);
						iParam1->f_6 = 1;
					}
					else
					{
						__LIB_11__::func_346(*iParam1, &uLocal_1022);
						if (__LIB_10__::func_397(*iParam1, sLocal_117, &vVar3) >= 960)
						{
							func_323(iParam1, 5, 0, 0);
						}
						if (!PED::IS_PED_ON_MOUNT(*iParam1) && !PED::IS_PED_RAGDOLL(*iParam1))
						{
							func_323(iParam1, 3, 0, -1);
						}
					}
					break;
				case 5:
					WEAPON::_0xB832F1A686B9B810(*iParam1, 1, 1);
					vVar6 = { 92.5253f, 1159.245f, 184.0628f };
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (__LIB_0__::func_866(iParam3, 0))
								{
									__LIB_1__::func_640(iParam3);
								}
								if (PED::IS_PED_GROUP_MEMBER(*iParam1, iLocal_1040, 0))
								{
									PED::REMOVE_PED_FROM_GROUP(*iParam1);
								}
								WEAPON::_HIDE_PED_WEAPONS(*iParam1, 2, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar2);
								TASK::OPEN_SEQUENCE_TASK(&iVar2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1.001f, 40000, (0.25f * 2f), 0, 30f);
								TASK::CLOSE_SEQUENCE_TASK(iVar2);
								TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar2);
								TASK::CLEAR_SEQUENCE_TASK(&iVar2);
								if (!__LIB_0__::func_27(iParam1->f_8, 1073741824 /* Float: 2f */))
								{
									PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Cautious", 1f, -1);
									__LIB_1__::func_683(&(iParam1->f_8), 1073741824 /* Float: 2f */);
								}
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8 || __LIB_0__::func_266(*iParam1, vVar6, (0.25f * 2f), 1, 1))
							{
								func_323(iParam1, 5, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_DISMOUNT_ANIMAL(*iParam1, 131072, 0, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam1) && !AITRANSPORT::_0x660639BC60157048(*iParam1, iParam2))
							{
								if (__LIB_0__::func_27(iLocal_1118, 16777216))
								{
									if (!PED::IS_PED_INJURED(Local_135))
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_135) >= 10)
										{
											func_323(iParam1, 6, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				case 7:
					if (iParam1->f_6 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, -1, -1f, 1.309f, -1f);
						iParam1->f_6 = 1;
					}
					else if (!__LIB_0__::func_27(Local_135.f_8, 536870912))
					{
						func_323(iParam1, 6, 0, -1);
					}
					break;
				case 6:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								Var9.f_4 = 1065353216;
								Var9.f_5 = 1065353216;
								Var9.f_9 = 1065353216;
								Var9.f_10 = 1065353216;
								Var9.f_14 = 1065353216;
								Var9.f_15 = 1065353216;
								Var9.f_17 = 1040187392;
								Var9.f_18 = 1040187392;
								Var9.f_19 = -1;
								Var9.f_26 = -1082130432;
								if (__LIB_0__::func_866(iParam3, 0))
								{
									__LIB_1__::func_640(iParam3);
								}
								if (PED::IS_PED_IN_GROUP(*iParam1))
								{
									PED::REMOVE_PED_FROM_GROUP(*iParam1);
								}
								PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(*iParam1, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								__LIB_3__::func_898(*iParam1, Local_135, &Var9, -1082130432 /* Float: -1f */, 0, 0, -1f, 1f, 1, 32, 2f, -0.5f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
								iParam1->f_6 = 1;
							}
							else
							{
								__LIB_2__::func_966(*iParam1, Local_135, 1, 1, 1, 0, 1, 1, 0, 1, 1);
								if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4))
								{
									*iParam4 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst2@leadin@rsc_3@bill_enter", 0, "pl_Bill_Enter", false, true);
									ANIMSCENE::LOAD_ANIM_SCENE(*iParam4);
								}
								if (!__LIB_0__::func_27(iParam1->f_8, -2147483648))
								{
									if (__LIB_0__::func_266(*iParam1, vLocal_62, 25f, 1, 1) || __LIB_0__::func_27(Local_135.f_8, -2147483648))
									{
										PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Stealth", 1f, -1);
										__LIB_1__::func_683(&(iParam1->f_8), -2147483648);
									}
								}
								if (!PED::IS_PED_INJURED(Local_135))
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_135))
									{
										if (__LIB_0__::func_27(Local_135.f_8, 536870912))
										{
											func_323(iParam1, 7, 0, -1);
										}
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam4, true, false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_ENTER_ANIM_SCENE(*iParam1, *iParam4, "billwilliamson", "pl_bill_enter", 1.48f, 0, 3, 20000, -1082130432 /* Float: -1f */);
									iParam1->f_6 = 1;
								}
							}
							else if (ANIMSCENE::_0x337F1CC8EE895601(*iParam4, "billwilliamson") || TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1369124074, true) == 8)
							{
								__LIB_1__::func_683(&iLocal_1118, 524288);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam4, "billwilliamson", *iParam1, 0);
								ANIMSCENE::START_ANIM_SCENE(*iParam4);
								func_323(iParam1, 6, 1, 2);
							}
							break;
						case 2:
							break;
					}
					break;
				case 11:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								TASK::REQUEST_WAYPOINT_RECORDING(sLocal_119);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Stealth", 1f, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								__LIB_1__::func_681(&(iParam1->f_8), 131072);
								iParam1->f_10 = 0;
								iParam1->f_6 = 1;
							}
							else
							{
								if (!__LIB_0__::func_27(iLocal_1120, 8))
								{
									if (__LIB_0__::func_27(iLocal_1120, 1))
									{
										if (!__LIB_0__::func_27(iLocal_1120, 2) && !__LIB_0__::func_27(iLocal_1120, 4))
										{
											if (__LIB_0__::func_48(Global_35, Local_240[0 /*21*/], 7.5f, 1))
											{
												__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
												__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
												__LIB_8__::func_771(Local_240[0 /*21*/], 0, 0, 0);
												__LIB_1__::func_683(&iLocal_1120, 8);
											}
										}
									}
								}
								else if (!__LIB_0__::func_48(Global_35, Local_240[0 /*21*/], 8f, 1))
								{
									__LIB_1__::func_681(&iLocal_1120, 8);
								}
								if (!__LIB_0__::func_27(iLocal_1120, 16))
								{
									if (!__LIB_0__::func_27(iLocal_1120, 2) && !__LIB_0__::func_27(iLocal_1120, 4))
									{
										if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]) && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
										{
											if (func_225(95))
											{
												PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
												TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(*iParam1, Global_35, sLocal_119, 0f, 0f, 0, 1024, 10, 0);
												__LIB_1__::func_683(&iLocal_1120, 16);
											}
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 8))
								{
									if (!__LIB_0__::func_27(iLocal_1120, 1))
									{
										if (func_225(89))
										{
											__LIB_10__::func_979(Local_240[0 /*21*/], "", 40f, 0, 40f, 0);
											__LIB_10__::func_979(*iParam1, __LIB_1__::func_464(iParam3, 0), 10f, 0, 0, 0);
											__LIB_1__::func_683(&(iParam1->f_8), 67108864);
											__LIB_1__::func_683(&(Local_240[0 /*21*/].f_8), 67108864);
											__LIB_1__::func_683(&iLocal_1120, 1);
										}
									}
									else if ((!__LIB_0__::func_27(iLocal_1120, 4) && !__LIB_0__::func_27(iLocal_1120, 2)) && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
									{
										if (!__LIB_0__::func_139(iLocal_847[0]) && !__LIB_0__::func_139(iLocal_847[1]))
										{
											bVar0 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && __LIB_0__::func_48(Global_35, *iParam1, 10f, 1));
											bVar1 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_240[0 /*21*/]) && __LIB_0__::func_48(Global_35, Local_240[0 /*21*/], 40f, 1));
											if (bVar0 == 1 || bVar1 == 1)
											{
												iLocal_847[0] = __LIB_1__::func_877("RDST2_U_DECIDEA2", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												iLocal_847[1] = __LIB_1__::func_877("RDST2_U_DECIDEA1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
												{
													if (bVar0 == 1)
													{
														__LIB_9__::func_332(&(iLocal_847[0]), *iParam1);
														__LIB_9__::func_332(&(iLocal_847[1]), *iParam1);
													}
													else if (bVar1 == 1)
													{
														__LIB_9__::func_332(&(iLocal_847[0]), Local_240[0 /*21*/]);
														__LIB_9__::func_332(&(iLocal_847[1]), Local_240[0 /*21*/]);
														__LIB_5__::func_437(Local_240[0 /*21*/], "", 1);
													}
													if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
													{
														__LIB_1__::func_221(iLocal_847[0], 0, 1);
														__LIB_1__::func_221(iLocal_847[1], 0, 1);
													}
													else
													{
														__LIB_1__::func_221(iLocal_847[0], 1, 1);
														__LIB_1__::func_221(iLocal_847[1], 1, 1);
													}
												}
											}
										}
										else
										{
											if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
											{
												if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
												{
													__LIB_1__::func_221(iLocal_847[0], 0, 1);
													__LIB_1__::func_221(iLocal_847[1], 0, 1);
												}
												else
												{
													__LIB_1__::func_221(iLocal_847[0], 1, 1);
													__LIB_1__::func_221(iLocal_847[1], 1, 1);
												}
											}
											if (__LIB_0__::func_572(iLocal_847[0], 0) && __LIB_0__::func_572(iLocal_847[1], 0))
											{
												if (__LIB_1__::func_732(iLocal_847[0], 1))
												{
													if (__LIB_12__::func_876(uParam0, "DST2DECIDEA2", 0))
													{
														iParam1->f_10 = MISC::GET_GAME_TIMER();
														iParam1->f_12 = MISC::GET_GAME_TIMER();
														__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
														__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
														func_374(92, 1);
														__LIB_8__::func_771(*iParam1, 1, 1, 0);
														__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
														__LIB_1__::func_683(&iLocal_1120, 2);
													}
												}
												else if (__LIB_1__::func_732(iLocal_847[1], 1))
												{
													if (__LIB_12__::func_876(uParam0, "DST2DECIDEA1", 0))
													{
														iParam1->f_10 = MISC::GET_GAME_TIMER();
														iParam1->f_12 = MISC::GET_GAME_TIMER();
														fLocal_1270 = Local_240[0 /*21*/].f_18;
														__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
														__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
														func_374(91, 1);
														__LIB_8__::func_771(*iParam1, 1, 1, 0);
														__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
														__LIB_1__::func_683(&iLocal_1120, 4);
													}
												}
											}
										}
									}
								}
								if (__LIB_0__::func_139(iLocal_847[0]) || __LIB_0__::func_139(iLocal_847[1]))
								{
									if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_240[0 /*21*/]))
									{
										__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
										__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
									}
								}
								if (__LIB_0__::func_27(iLocal_1120, 2))
								{
									if (func_225(92))
									{
										if (__LIB_6__::func_903("DST2DECIDEA2") && __LIB_8__::func_684("DST2DECIDEA2"))
										{
											if (iParam1->f_10 != 0 && (MISC::GET_GAME_TIMER() - iParam1->f_10) > 750)
											{
												func_323(iParam1, 11, 0, 1);
											}
										}
										else if (!__LIB_8__::func_684("DST2DECIDEA2"))
										{
											func_323(iParam1, 11, 0, 1);
										}
									}
								}
								func_1362(iParam1);
								if (func_1059(&(Local_240[0 /*21*/])))
								{
									__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
									__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
									__LIB_8__::func_771(*iParam1, 1, 1, 0);
									__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
									func_323(iParam1, 11, 0, 3);
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, sLocal_119, 0, 4196360, 16, 0, 0, -1);
								__LIB_1__::func_681(&(iParam1->f_8), 512);
								iParam1->f_6 = 1;
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, sLocal_119))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
								}
								if (!__LIB_0__::func_27(iParam1->f_8, 512))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_MELEE_KNIFE_BILL"), false, 0, false, false);
									TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 1, 0);
									__LIB_1__::func_683(&(iParam1->f_8), 512);
								}
								if (!func_1059(&(Local_240[0 /*21*/])))
								{
									if (__LIB_0__::func_48(*iParam1, Local_240[0 /*21*/], 10f, 1) || TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 8)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Local_240[0 /*21*/], 1))
										{
											func_323(iParam1, 11, 0, 2);
										}
									}
								}
								func_1362(iParam1);
								if (func_1059(&(Local_240[0 /*21*/])))
								{
									__LIB_13__::func_520(&iLocal_847);
									__LIB_8__::func_771(*iParam1, 1, 1, 0);
									__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
									func_323(iParam1, 11, 0, 3);
								}
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								if (!func_1059(&(Local_240[0 /*21*/])) && !AUDIO::_0x54B187F111D9C6F8(Local_240[0 /*21*/], 1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_MELEE(*iParam1, Local_240[0 /*21*/], joaat("AR_STEALTH_KILL_V2"), 0, 1, 1f, 1, -1082130432 /* Float: -1f */);
								}
								iParam1->f_6 = 1;
							}
							else
							{
								func_1362(iParam1);
								if (func_1059(&(Local_240[0 /*21*/])))
								{
									__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
									__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
									__LIB_8__::func_771(*iParam1, 1, 1, 0);
									__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
									func_323(iParam1, 11, 0, 3);
								}
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
								if (__LIB_9__::func_225(*iParam1, Local_240[0 /*21*/]))
								{
									if (!__LIB_11__::func_307(Global_35, Local_851[6 /*5*/].f_4, 1, 3f))
									{
										iParam1->f_9 = 6;
									}
									else if (!__LIB_11__::func_307(Global_35, Local_851[5 /*5*/].f_4, 1, 3f))
									{
										iParam1->f_9 = 5;
									}
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[5 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 5;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[6 /*5*/].f_4, 1, 3f))
								{
									iParam1->f_9 = 6;
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								if (iParam1->f_9 == 5)
								{
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 0, 0, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								}
								else
								{
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 1, 1, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								}
								__LIB_1__::func_681(&(iParam1->f_8), 512);
								__LIB_1__::func_681(&(iParam1->f_8), 131072);
								iParam1->f_6 = 1;
							}
							else
							{
								if ((((!__LIB_0__::func_27(iLocal_1120, 128) && !__LIB_0__::func_27(iLocal_1120, 64)) && !__LIB_0__::func_27(iParam1->f_8, 131072)) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
								{
									if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
									{
										if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
										{
											PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
										}
										if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
										}
										else
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
										}
									}
									if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
									{
										switch (iParam1->f_9)
										{
											case 5:
												if (__LIB_11__::func_307(Global_35, Local_851[5 /*5*/].f_4, 1, 3f))
												{
													func_323(iParam1, 11, 0, 3);
												}
												break;
											case 6:
												if (__LIB_11__::func_307(Global_35, Local_851[6 /*5*/].f_4, 1, 3f))
												{
													func_323(iParam1, 11, 0, 3);
												}
												break;
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 256))
								{
									if (__LIB_0__::func_27(iLocal_1120, 32))
									{
										if (!__LIB_0__::func_27(iLocal_1120, 64) && !__LIB_0__::func_27(iLocal_1120, 128))
										{
											if (__LIB_0__::func_48(Global_35, Local_240[1 /*21*/], 6f, 1))
											{
												__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
												__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
												__LIB_8__::func_771(Local_240[1 /*21*/], 0, 0, 0);
												__LIB_1__::func_683(&iLocal_1120, 256);
											}
										}
									}
								}
								else if (!__LIB_0__::func_48(Global_35, Local_240[1 /*21*/], 6.5f, 1))
								{
									__LIB_1__::func_681(&iLocal_1120, 256);
								}
								if (!__LIB_0__::func_27(iLocal_1120, 256) && !__LIB_0__::func_27(iParam1->f_8, 131072))
								{
									if (!__LIB_0__::func_27(iLocal_1120, 32))
									{
										if (func_225(99))
										{
											__LIB_10__::func_979(Local_240[1 /*21*/], "", 40f, 0, 40f, 0);
											__LIB_10__::func_979(*iParam1, __LIB_1__::func_464(iParam3, 0), 10f, 0, 0, 0);
											__LIB_1__::func_683(&(iParam1->f_8), 67108864);
											__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 67108864);
											__LIB_1__::func_683(&iLocal_1120, 32);
										}
									}
									else if ((!__LIB_0__::func_27(iLocal_1120, 128) && !__LIB_0__::func_27(iLocal_1120, 64)) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8))
									{
										if (!__LIB_0__::func_139(iLocal_847[0]) && !__LIB_0__::func_139(iLocal_847[1]))
										{
											bVar0 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && __LIB_0__::func_48(Global_35, *iParam1, 10f, 1));
											bVar1 = (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_240[1 /*21*/]) && __LIB_0__::func_48(Global_35, Local_240[1 /*21*/], 40f, 1));
											if (bVar0 == 1 || bVar1 == 1)
											{
												iLocal_847[0] = __LIB_1__::func_877("RDST2_U_DECIDEB1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												iLocal_847[1] = __LIB_1__::func_877("RDST2_U_DECIDEB2", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
												if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
												{
													if (bVar0 == 1)
													{
														__LIB_9__::func_332(&(iLocal_847[0]), *iParam1);
														__LIB_9__::func_332(&(iLocal_847[1]), *iParam1);
													}
													else if (bVar1 == 1)
													{
														__LIB_9__::func_332(&(iLocal_847[0]), Local_240[1 /*21*/]);
														__LIB_9__::func_332(&(iLocal_847[1]), Local_240[1 /*21*/]);
														__LIB_5__::func_437(Local_240[1 /*21*/], "", 1);
													}
													if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
													{
														__LIB_1__::func_221(iLocal_847[0], 0, 1);
														__LIB_1__::func_221(iLocal_847[1], 0, 1);
													}
													else
													{
														__LIB_1__::func_221(iLocal_847[0], 1, 1);
														__LIB_1__::func_221(iLocal_847[1], 1, 1);
													}
												}
											}
										}
										else
										{
											if (__LIB_0__::func_139(iLocal_847[0]) && __LIB_0__::func_139(iLocal_847[1]))
											{
												if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || AUDIO::_0x54B187F111D9C6F8(*iParam1, 1)))
												{
													__LIB_1__::func_221(iLocal_847[0], 0, 1);
													__LIB_1__::func_221(iLocal_847[1], 0, 1);
												}
												else
												{
													__LIB_1__::func_221(iLocal_847[0], 1, 1);
													__LIB_1__::func_221(iLocal_847[1], 1, 1);
												}
											}
											if (__LIB_0__::func_572(iLocal_847[0], 0) && __LIB_0__::func_572(iLocal_847[1], 0))
											{
												if (__LIB_1__::func_732(iLocal_847[0], 1))
												{
													if (__LIB_12__::func_876(uParam0, "DST2BSNEAKC1", 0))
													{
														iParam1->f_10 = MISC::GET_GAME_TIMER();
														iParam1->f_12 = MISC::GET_GAME_TIMER();
														__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
														__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
														func_374(101, 1);
														__LIB_8__::func_771(*iParam1, 1, 1, 0);
														__LIB_8__::func_771(Local_240[1 /*21*/], 0, 1, 0);
														__LIB_1__::func_683(&iLocal_1120, 64);
													}
												}
												else if (__LIB_1__::func_732(iLocal_847[1], 1))
												{
													if (__LIB_12__::func_876(uParam0, "DST2BSNEAKC", 0))
													{
														iParam1->f_10 = MISC::GET_GAME_TIMER();
														iParam1->f_12 = MISC::GET_GAME_TIMER();
														fLocal_1270 = Local_240[1 /*21*/].f_18;
														__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
														__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
														func_374(100, 1);
														__LIB_8__::func_771(*iParam1, 1, 1, 0);
														__LIB_8__::func_771(Local_240[1 /*21*/], 0, 1, 0);
														__LIB_1__::func_683(&iLocal_1120, 128);
													}
												}
											}
										}
									}
								}
								if (__LIB_0__::func_139(iLocal_847[0]) || __LIB_0__::func_139(iLocal_847[1]))
								{
									if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_240[1 /*21*/]))
									{
										__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
										__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
									}
								}
							}
							if (__LIB_0__::func_27(iLocal_1120, 64))
							{
								if (!__LIB_0__::func_27(iLocal_1120, 512))
								{
									if (PED::IS_PED_IN_COVER(*iParam1, false, false))
									{
										if ((func_1363(Local_240[1 /*21*/], 1.5f) || func_1363(Local_240[2 /*21*/], 1.5f)) || ((func_225(101) && __LIB_8__::func_684("DST2BSNEAKC1")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DST2BSNEAKC1") > 0))
										{
											PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, false, 0, false);
											__LIB_4__::func_7(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
											WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), true, 0, false, false);
											TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar2);
											TASK::OPEN_SEQUENCE_TASK(&iVar2);
											if (__LIB_11__::func_307(*iParam1, Local_851[6 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 34.5645f, 1196.979f, 179.8155f, Local_240[2 /*21*/].f_14, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
											}
											else if (__LIB_11__::func_307(*iParam1, Local_851[5 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 34.7908f, 1194.763f, 180.1662f, Local_240[2 /*21*/].f_14, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
											}
											TASK::TASK_AIM_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_240[2 /*21*/], false, false), -1, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(iVar2);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar2);
											TASK::CLEAR_SEQUENCE_TASK(&iVar2);
											__LIB_1__::func_683(&iLocal_1120, 512);
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 1024))
								{
									if (__LIB_0__::func_27(iLocal_1120, 512))
									{
										if (((func_1363(Local_240[1 /*21*/], 1.5f) || func_1363(Local_240[2 /*21*/], 1.5f)) && PED::IS_PED_SHOOTING(Global_35)) || (func_1059(&(Local_240[1 /*21*/])) || func_1059(&(Local_240[2 /*21*/]))))
										{
											__LIB_4__::func_7(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
											WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), true, 0, false, false);
											if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar48))
											{
												iVar47 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar48);
												if (iVar47 == Local_240[1 /*21*/])
												{
													TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[2 /*21*/], false, false));
												}
												else if (iVar47 == Local_240[2 /*21*/])
												{
													TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[1 /*21*/], false, false));
												}
											}
											else if (func_1059(&(Local_240[1 /*21*/])) || func_1059(&(Local_240[2 /*21*/])))
											{
												if (func_1059(&(Local_240[1 /*21*/])))
												{
													TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[2 /*21*/], false, false));
												}
												else if (func_1059(&(Local_240[2 /*21*/])))
												{
													TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[1 /*21*/], false, false));
												}
											}
											__LIB_1__::func_683(&iLocal_1120, 1024);
										}
									}
								}
							}
							else if (__LIB_0__::func_27(iLocal_1120, 128))
							{
								if (!__LIB_0__::func_27(iLocal_1120, 2048))
								{
									if (((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !PED::IS_PED_INJURED(Local_240[2 /*21*/])) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
									{
										if ((func_225(100) && __LIB_8__::func_684("DST2BSNEAKC")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DST2BSNEAKC") > 0)
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											if (__LIB_11__::func_307(*iParam1, Local_851[6 /*5*/].f_4, 1, 2f))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 33.08f, 1195.95f, 179.84f, 1.5f, 20000, (0.25f * 2f), 1, 75f);
											}
											else if (__LIB_11__::func_307(*iParam1, Local_851[5 /*5*/].f_4, 1, 2f))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 31.32f, 1193.8f, 179.97f, 1.5f, 20000, (0.25f * 2f), 1, 75f);
											}
											else
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 33.08f, 1195.95f, 179.84f, 1.5f, 20000, (0.25f * 2f), 1, 75f);
											}
											__LIB_1__::func_683(&iLocal_1120, 2048);
										}
									}
								}
								else
								{
									PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									if (!__LIB_0__::func_27(iParam1->f_8, 512))
									{
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_MELEE_KNIFE_BILL"), false, 0, false, false);
										TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_8), 512);
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 4096))
								{
									if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
									{
										if (__LIB_0__::func_665(Global_35, Local_240[1 /*21*/], 1, 1) < 7.5f)
										{
											if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
												WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_MELEE_KNIFE_BILL"), false, 0, false, false);
												TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
												PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
												TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*iParam1, Local_240[2 /*21*/], 0f, -1.5f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
												__LIB_1__::func_683(&iLocal_1120, 4096);
											}
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 4096))
								{
									if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]))
									{
										if (__LIB_0__::func_665(Global_35, Local_240[2 /*21*/], 1, 1) < 7.5f)
										{
											if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
												WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_MELEE_KNIFE_BILL"), false, 0, false, false);
												TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
												PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
												TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*iParam1, Local_240[1 /*21*/], 0f, -1.5f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
												__LIB_1__::func_683(&iLocal_1120, 4096);
											}
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1120, 8192))
								{
									if (!__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 4194304) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 4194304))
									{
										if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]) || !PED::IS_PED_INJURED(Local_240[2 /*21*/]))
										{
											if ((PED::IS_PED_BEING_STEALTH_KILLED(Local_240[1 /*21*/]) || PED::IS_PED_PERFORMING_MELEE_ACTION(Local_240[1 /*21*/], 32768, 0)) || __LIB_9__::func_225(Global_35, Local_240[1 /*21*/]))
											{
												__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 4194304);
											}
											else if ((PED::IS_PED_BEING_STEALTH_KILLED(Local_240[2 /*21*/]) || PED::IS_PED_PERFORMING_MELEE_ACTION(Local_240[2 /*21*/], 32768, 0)) || __LIB_9__::func_225(Global_35, Local_240[2 /*21*/]))
											{
												__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 4194304);
											}
											else if ((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && __LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !__LIB_0__::func_48(Global_35, Local_240[1 /*21*/], 1f, 1))
											{
												__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 4194304);
											}
											else if ((!PED::IS_PED_INJURED(Local_240[2 /*21*/]) && __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8)) && !__LIB_0__::func_48(Global_35, Local_240[2 /*21*/], 1f, 1))
											{
												__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 4194304);
											}
											else if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && __LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8))
											{
												__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 4194304);
											}
											else if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]) && __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
											{
												__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 4194304);
											}
										}
									}
									if (__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 4194304) || __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 4194304))
									{
										if (__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 4194304))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											TASK::TASK_MELEE(*iParam1, Local_240[1 /*21*/], joaat("AR_STEALTH_KILL"), 0, 1, (1.5f * 1.25f), 0, -1082130432 /* Float: -1f */);
										}
										else if (__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 4194304))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											TASK::TASK_MELEE(*iParam1, Local_240[2 /*21*/], joaat("AR_STEALTH_KILL"), 0, 1, (1.5f * 1.25f), 0, -1082130432 /* Float: -1f */);
										}
										__LIB_1__::func_683(&iLocal_1120, 8192);
									}
								}
							}
							func_1364(iParam1);
							if ((func_1059(&(Local_240[0 /*21*/])) && func_1059(&(Local_240[1 /*21*/]))) && func_1059(&(Local_240[2 /*21*/])))
							{
								__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
								__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
								__LIB_8__::func_771(*iParam1, 1, 1, 0);
								__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
								__LIB_8__::func_771(Local_240[1 /*21*/], 0, 1, 0);
								__LIB_8__::func_771(Local_240[2 /*21*/], 0, 1, 0);
								func_323(iParam1, 11, 0, 4);
							}
							break;
						case 4:
							if (iParam1->f_6 == 0)
							{
								if (iParam1->f_10 == 0)
								{
									iParam1->f_10 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 1000)
								{
									PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
									if (!__LIB_11__::func_307(Global_35, Local_851[13 /*5*/].f_4, 1, 2f))
									{
										iParam1->f_9 = 13;
										PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
									}
									else if (!__LIB_11__::func_307(Global_35, Local_851[12 /*5*/].f_4, 1, 2f))
									{
										iParam1->f_9 = 12;
										PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
									}
									PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 1, 1, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
									__LIB_1__::func_681(&(iParam1->f_8), 512);
									iParam1->f_6 = 1;
								}
							}
							else
							{
								if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
								{
									if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
									{
										PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
									}
									else
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
									}
								}
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
								{
									switch (iParam1->f_9)
									{
										case 13:
											if (__LIB_11__::func_307(Global_35, Local_851[13 /*5*/].f_4, 1, 2f))
											{
												func_323(iParam1, 11, 0, 4);
											}
											break;
										case 12:
											if (__LIB_11__::func_307(Global_35, Local_851[12 /*5*/].f_4, 1, 2f))
											{
												func_323(iParam1, 11, 0, 4);
											}
											break;
									}
								}
								if (!__LIB_0__::func_27(iParam1->f_8, 512))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), false, 0, false, false);
									TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_8), 512);
								}
								if (__LIB_0__::func_27(iLocal_1121, 2048))
								{
									func_323(iParam1, 11, 0, 5);
								}
							}
							break;
						case 5:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 252, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
								if (!__LIB_11__::func_307(Global_35, Local_851[16 /*5*/].f_4, 1, 2f))
								{
									iParam1->f_9 = 16;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
								}
								else if (!__LIB_11__::func_307(Global_35, Local_851[13 /*5*/].f_4, 1, 2f))
								{
									iParam1->f_9 = 13;
									PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 33, false);
								}
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Local_851[iParam1->f_9 /*5*/], -1, 0, 1f, 1, 1, Local_851[iParam1->f_9 /*5*/].f_4, 1, 0, 0);
								__LIB_1__::func_681(&(iParam1->f_8), 512);
								iParam1->f_6 = 1;
							}
							else
							{
								if (TASK::IS_PED_WALKING(*iParam1) || TASK::IS_PED_RUNNING(*iParam1))
								{
									if (PED::_GET_PED_CROUCH_MOVEMENT(*iParam1) == 0)
									{
										PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam1) && !__LIB_0__::func_266(*iParam1, Local_851[iParam1->f_9 /*5*/], 5f, 1, 1))
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 2f);
									}
									else
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 1.5f);
									}
								}
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
								{
									switch (iParam1->f_9)
									{
										case 16:
											if (__LIB_11__::func_307(Global_35, Local_851[16 /*5*/].f_4, 1, 2f))
											{
												func_323(iParam1, 11, 0, 5);
											}
											break;
										case 13:
											if (__LIB_11__::func_307(Global_35, Local_851[13 /*5*/].f_4, 1, 2f))
											{
												func_323(iParam1, 11, 0, 5);
											}
											break;
									}
								}
								if (!__LIB_0__::func_27(iParam1->f_8, 512))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), false, 0, false, false);
									TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_8), 512);
								}
							}
							break;
					}
					break;
				case 12:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam1, &iVar49, true, 0, false) && iVar49 == joaat("WEAPON_THROWN_THROWING_KNIVES"))
								{
									if (__LIB_0__::func_272(Local_240[1 /*21*/], 0))
									{
										PED::SET_PED_CONFIG_FLAG(Local_240[1 /*21*/], 138, true);
									}
									if (__LIB_0__::func_272(Local_240[2 /*21*/], 0))
									{
										PED::SET_PED_CONFIG_FLAG(Local_240[2 /*21*/], 138, true);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, false, 0, false);
									if (__LIB_11__::func_307(*iParam1, Local_851[6 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
									{
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(*iParam1, 35.5073f, 1196.635f, 179.9369f, Local_240[2 /*21*/].f_14, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
									}
									else if (__LIB_11__::func_307(*iParam1, Local_851[5 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
									{
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(*iParam1, 36.8863f, 1193.746f, 180.4651f, Local_240[2 /*21*/].f_14, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
									}
									iParam1->f_10 = 0;
									iParam1->f_6 = 1;
								}
								else
								{
									__LIB_4__::func_7(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), 2, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
									WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), false, 0, false, false);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 432954108, true) == 8)
							{
								func_323(iParam1, 12, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_AIM_AT_COORD(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[2 /*21*/], false, false), -1, 1, 0);
								iParam1->f_10 = 0;
								iParam1->f_6 = 1;
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								TASK::CLEAR_PED_TASKS(*iParam1, true, false);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, false);
								iParam1->f_6 = 1;
							}
							else if (func_1365(Local_240[1 /*21*/], 1045220557 /* Float: 0.2f */, 1048576000 /* Float: 0.25f */) || func_1365(Local_240[2 /*21*/], 1045220557 /* Float: 0.2f */, 1048576000 /* Float: 0.25f */))
							{
								func_323(iParam1, 12, 0, 1);
							}
							break;
					}
					if (func_1365(Local_240[1 /*21*/], 1045220557 /* Float: 0.2f */, 1048576000 /* Float: 0.25f */) || func_1365(Local_240[2 /*21*/], 1045220557 /* Float: 0.2f */, 1048576000 /* Float: 0.25f */))
					{
						iParam1->f_10 = 0;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 329066242, true) == 1)
					{
						if (iParam1->f_10 == 0)
						{
							iParam1->f_10 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 3000)
						{
							func_323(iParam1, 12, 0, 2);
						}
					}
					if ((((func_1365(Local_240[1 /*21*/], 1045220557 /* Float: 0.2f */, 1048576000 /* Float: 0.25f */) || func_1365(Local_240[2 /*21*/], 1045220557 /* Float: 0.2f */, 1048576000 /* Float: 0.25f */)) && PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_255(Local_240[1 /*21*/], 0)) || __LIB_0__::func_255(Local_240[2 /*21*/], 0))
					{
						func_323(iParam1, 13, 0, -1);
					}
					break;
				case 13:
					if (iParam1->f_6 == 0)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1388855549, true) != 1)
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam1, &iVar50, true, 0, false) && iVar50 == joaat("WEAPON_THROWN_THROWING_KNIVES"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar52))
								{
									iVar51 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar52);
									if (iVar51 == Local_240[1 /*21*/])
									{
										TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[2 /*21*/], false, false));
									}
									else if (iVar51 == Local_240[2 /*21*/])
									{
										TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[1 /*21*/], false, false));
									}
								}
								else if (__LIB_0__::func_255(Local_240[1 /*21*/], 0) || __LIB_0__::func_255(Local_240[2 /*21*/], 0))
								{
									if (__LIB_0__::func_255(Local_240[1 /*21*/], 0))
									{
										TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[2 /*21*/], false, false));
									}
									else if (__LIB_0__::func_255(Local_240[2 /*21*/], 0))
									{
										TASK::TASK_THROW_PROJECTILE(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_240[1 /*21*/], false, false));
									}
								}
							}
							else
							{
								__LIB_4__::func_7(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), 2, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), false, 0, false, false);
							}
						}
						else
						{
							iParam1->f_10 = MISC::GET_GAME_TIMER();
							iParam1->f_6 = 1;
						}
					}
					if (__LIB_0__::func_255(Local_240[1 /*21*/], 0) && __LIB_0__::func_255(Local_240[2 /*21*/], 0))
					{
						iParam1->f_10 = 0;
						func_323(iParam1, 11, 0, 3);
					}
					break;
				case 23:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam1, 0f);
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, 0f);
					if (iParam1->f_6 == 0)
					{
						func_1359(iParam1, 0, 35, 0.3f);
						__LIB_13__::func_520(&iLocal_847);
						__LIB_8__::func_771(*iParam1, 1, 1, 0);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 2);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 0);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 91, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						if (ENTITY::DOES_ENTITY_EXIST(Local_326[1 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_326[1 /*21*/]))
						{
							TASK::TASK_COMBAT_PED(*iParam1, Local_326[1 /*21*/], 117440512, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_326[2 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_326[2 /*21*/]))
						{
							TASK::TASK_COMBAT_PED(*iParam1, Local_326[2 /*21*/], 117440512, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_326[4 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_326[4 /*21*/]))
						{
							TASK::TASK_COMBAT_PED(*iParam1, Local_326[4 /*21*/], 117440512, 0);
						}
						else
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 117440512, 0);
						}
						iParam1->f_10 = MISC::GET_GAME_TIMER();
						iParam1->f_6 = 1;
					}
					else if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) && (MISC::GET_GAME_TIMER() - iParam1->f_10) > 6000)
					{
						func_323(iParam1, 22, 0, -1);
					}
					break;
				case 22:
					PED::SET_PED_RESET_FLAG(*iParam1, 132, true);
					if (iParam1->f_6 == 0)
					{
						func_1359(iParam1, 0, 35, 0.3f);
						__LIB_13__::func_520(&iLocal_847);
						func_1360(*iParam1, &Local_326);
						func_1360(*iParam1, &Local_240);
						if (!func_1366(*iParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), 0))
						{
							func_1367(*iParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), 0, 1, 1);
						}
						PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, false, 0, false);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
						PED::SET_COMBAT_FLOAT(*iParam1, 5, 1f);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 81, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 3, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 35, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 91, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 113, true);
						__LIB_4__::func_719(iParam3, 1, 1, 2, 1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						iParam1->f_6 = 1;
					}
					break;
				case 14:
					if (!__LIB_0__::func_27(iParam1->f_8, 1073741824 /* Float: 2f */))
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Cautious", 1f, -1);
						__LIB_1__::func_683(&(iParam1->f_8), 1073741824 /* Float: 2f */);
					}
					if (iParam1->f_6 == 0)
					{
						iParam1->f_1 = func_1343(*iParam1, Local_156, Local_135, Local_156.f_1, Local_135.f_1);
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
						{
							if (iParam1->f_10 == 0)
							{
								iParam1->f_10 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 2500)
							{
								func_323(iParam1, 18, 0, 0);
							}
						}
						else
						{
							__LIB_4__::func_719(iParam3, 0, 1, 1, 1, 0);
							PED::_0x6569F31A01B4C097(*iParam1, 3, 1);
							PED::_0x6569F31A01B4C097(*iParam1, 2, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_LOOT_ENTITY(*iParam1, iParam1->f_1);
							__LIB_1__::func_681(&(iParam1->f_8), 256);
							iParam1->f_10 = 0;
							iParam1->f_6 = 1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 8)
						{
							if (!func_1345(iParam1, iParam1->f_1))
							{
								if (__LIB_3__::func_578(iParam1->f_1))
								{
									iParam1->f_10 = 0;
									func_323(iParam1, 14, 0, 0);
								}
								else if (iParam1->f_10 == 0)
								{
									iParam1->f_10 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iParam1->f_10) > 5000)
								{
									func_323(iParam1, 14, 0, 0);
								}
							}
						}
					}
					break;
				case 18:
					if (iParam1->f_6 == 0)
					{
						STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_CAMP_MICAH_SEAT_CHAIR_CLEAN_GUN"), 15, 0, 0);
						if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_CAMP_MICAH_SEAT_CHAIR_CLEAN_GUN"), false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1073[15], 0, 0, true, false, 0, false, -1f, false);
							iParam1->f_6 = 1;
						}
					}
					break;
			}
		}
	}
}

void func_841()
{
	if (!__LIB_0__::func_27(iLocal_1119, 1))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			if (__LIB_0__::func_394(Global_35, iLocal_815, 0) || PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_0__::func_19(&uLocal_128, 2);
				__LIB_1__::func_683(&iLocal_1119, 1);
			}
		}
	}
}

void func_842(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_27(iLocal_1118, 128))
	{
		if (__LIB_0__::func_394(Global_35, iLocal_815, 0))
		{
			__LIB_1__::func_683(&iLocal_1118, 128);
		}
	}
	if (__LIB_0__::func_27(iLocal_1118, 256))
	{
		if (__LIB_0__::func_665(Global_35, iLocal_815, 1, 1) > (150f / 4f))
		{
			if (!__LIB_0__::func_27(iLocal_1118, 4))
			{
				func_374(3, 0);
				func_374(2, 0);
				func_374(5, 0);
				func_374(4, 0);
				func_374(1, 0);
				func_374(0, 0);
				__LIB_1__::func_681(&iLocal_1118, 2);
				__LIB_1__::func_683(&iLocal_1118, 4);
			}
		}
		else if (__LIB_0__::func_27(iLocal_1118, 4))
		{
			func_374(3, 0);
			func_374(2, 0);
			func_374(5, 0);
			func_374(4, 0);
			func_374(1, 0);
			func_374(0, 0);
			__LIB_1__::func_681(&iLocal_1118, 2);
			__LIB_1__::func_681(&iLocal_1118, 4);
		}
	}
	else if (__LIB_0__::func_27(Local_156.f_8, 268435456))
	{
		if (Local_156.f_18 > __LIB_5__::func_439(__LIB_0__::func_27(iLocal_1118, 33554432), (150f / 6f), (150f / 4f)))
		{
			if (!__LIB_0__::func_27(iLocal_1118, 4))
			{
				func_374(3, 0);
				func_374(2, 0);
				func_374(5, 0);
				func_374(4, 0);
				func_374(1, 0);
				func_374(0, 0);
				__LIB_1__::func_681(&iLocal_1118, 2);
				__LIB_1__::func_683(&iLocal_1118, 4);
			}
		}
		else if (__LIB_0__::func_27(iLocal_1118, 4))
		{
			func_374(3, 0);
			func_374(2, 0);
			func_374(5, 0);
			func_374(4, 0);
			func_374(1, 0);
			func_374(0, 0);
			__LIB_1__::func_681(&iLocal_1118, 2);
			__LIB_1__::func_681(&iLocal_1118, 4);
		}
	}
	else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
	{
		if (Local_135.f_18 > __LIB_5__::func_439(__LIB_0__::func_27(iLocal_1118, 33554432), (150f / 6f), (150f / 4f)))
		{
			if (!__LIB_0__::func_27(iLocal_1118, 4))
			{
				func_374(2, 0);
				func_374(5, 0);
				func_374(4, 0);
				func_374(1, 0);
				func_374(0, 0);
				__LIB_1__::func_681(&iLocal_1118, 2);
				__LIB_1__::func_683(&iLocal_1118, 4);
			}
		}
		else if (__LIB_0__::func_27(iLocal_1118, 4))
		{
			func_374(3, 0);
			func_374(2, 0);
			func_374(5, 0);
			func_374(4, 0);
			func_374(1, 0);
			func_374(0, 0);
			__LIB_1__::func_681(&iLocal_1118, 2);
			__LIB_1__::func_681(&iLocal_1118, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1118, 4))
	{
		if (!__LIB_0__::func_27(iLocal_1118, 2))
		{
			__LIB_1__::func_561(&uLocal_989);
			__LIB_1__::func_561(&uLocal_1001);
			func_374(3, 0);
			func_374(5, 0);
			func_374(4, 0);
			func_374(1, 0);
			func_374(0, 0);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1118, 2);
		}
		if (__LIB_0__::func_27(Local_135.f_8, 16777216))
		{
			if (__LIB_0__::func_394(Global_35, iLocal_815, 0))
			{
				if (__LIB_0__::func_27(iLocal_1118, 256))
				{
					__LIB_1__::func_561(&uLocal_989);
					__LIB_1__::func_561(&uLocal_1001);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_374(3, 0);
					func_374(2, 0);
					func_374(5, 0);
					func_374(4, 0);
					func_374(1, 0);
					func_374(0, 0);
					__LIB_1__::func_681(&iLocal_1118, 256);
				}
			}
			else if (!__LIB_0__::func_394(Global_35, iLocal_815, 0) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_815, 0))
			{
				if (!__LIB_0__::func_27(iLocal_1118, 256))
				{
					__LIB_1__::func_561(&uLocal_989);
					__LIB_1__::func_561(&uLocal_1001);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_374(3, 0);
					func_374(2, 0);
					func_374(5, 0);
					func_374(4, 0);
					func_374(1, 0);
					func_374(0, 0);
					__LIB_1__::func_683(&iLocal_1118, 256);
				}
			}
			if (func_225(32))
			{
				if (__LIB_0__::func_27(iLocal_1118, 256))
				{
					__LIB_1__::func_561(&uLocal_989);
					__LIB_1__::func_561(&uLocal_1001);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_374(3, 0);
					func_374(2, 0);
					func_374(5, 0);
					func_374(4, 0);
					func_374(1, 0);
					func_374(0, 0);
					__LIB_1__::func_681(&iLocal_1118, 256);
				}
				__LIB_1__::func_681(&(Local_156.f_8), 16777216);
				__LIB_1__::func_681(&(Local_177.f_8), 16777216);
				__LIB_1__::func_681(&(Local_135.f_8), 16777216);
			}
		}
		if (__LIB_0__::func_27(Local_135.f_8, 16777216) && __LIB_0__::func_27(iLocal_1118, 256))
		{
			if (!func_225(2))
			{
				if (!__LIB_0__::func_899(&uLocal_989))
				{
					fLocal_1270 = 0f;
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_13__::func_89(uParam0, "HORSE_MOUNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_718(7);
					__LIB_0__::func_745(1);
					__LIB_0__::func_745(10);
					if (__LIB_0__::func_27(iLocal_1118, 128))
					{
						__LIB_0__::func_904(10, 0);
						__LIB_0__::func_904(1, 0);
						__LIB_0__::func_904(3, 0);
					}
					__LIB_1__::func_683(&iLocal_1118, 64);
					__LIB_2__::func_259(&uLocal_989);
					__LIB_2__::func_259(&uLocal_1001);
				}
				else
				{
					if (!func_225(2))
					{
						if (__LIB_5__::func_352("HORSE_MOUNT"))
						{
							func_374(2, 1);
						}
					}
					if (!func_225(2) && !__LIB_5__::func_352("HORSE_MOUNT"))
					{
						iVar0 = 1;
						bVar2 = __LIB_13__::func_494(&fLocal_1270, __LIB_0__::func_665(Global_35, iLocal_815, 1, 1));
						if (iVar0 == 1 || bVar2 == 0)
						{
							if ((iVar0 == 1 || __LIB_1__::func_583(&uLocal_989) > 12f) || __LIB_1__::func_583(&uLocal_1001) > 7f)
							{
								__LIB_12__::func_883(uParam0, "HORSE_MOUNT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(2, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_989);
							__LIB_2__::func_259(&uLocal_1001);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1001);
						}
					}
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_27(iLocal_1118, 2))
			{
				__LIB_1__::func_561(&uLocal_989);
				__LIB_1__::func_561(&uLocal_1001);
				func_374(5, 0);
				func_374(4, 0);
				func_374(1, 0);
				func_374(0, 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_683(&iLocal_1118, 2);
			}
			if (!func_225(4) && !func_225(0))
			{
				if (!__LIB_0__::func_899(&uLocal_989))
				{
					fLocal_1270 = 0f;
					__LIB_1__::func_721(7);
					__LIB_1__::func_681(&iLocal_1118, 64);
					__LIB_0__::func_904(1, 1);
					__LIB_0__::func_904(3, 1);
					__LIB_0__::func_904(10, 1);
					if (__LIB_0__::func_27(Local_156.f_8, 268435456))
					{
						__LIB_13__::func_89(uParam0, "JOHN_FOLLOW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_0__::func_900(1);
						__LIB_0__::func_745(10);
					}
					else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
					{
						__LIB_13__::func_89(uParam0, "KIERAN_FOLLOW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_0__::func_900(10);
						__LIB_0__::func_745(1);
					}
					__LIB_2__::func_259(&uLocal_989);
					__LIB_2__::func_259(&uLocal_1001);
				}
				else if (__LIB_0__::func_27(Local_156.f_8, 268435456))
				{
					if (!func_225(4))
					{
						if (__LIB_5__::func_352("JOHN_FOLLOW"))
						{
							func_374(4, 1);
						}
					}
					if (!func_225(4) && !__LIB_5__::func_352("JOHN_FOLLOW"))
					{
						bVar1 = __LIB_13__::func_562(Global_35, Local_156, sLocal_117);
						bVar2 = __LIB_13__::func_494(&fLocal_1270, Local_156.f_18);
						if (bVar1 == 1 && bVar2 == 0)
						{
							if (__LIB_1__::func_583(&uLocal_989) > 12f || __LIB_1__::func_583(&uLocal_1001) > 7f)
							{
								__LIB_12__::func_883(uParam0, "JOHN_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(4, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_989);
							__LIB_2__::func_259(&uLocal_1001);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1001);
						}
					}
				}
				else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
				{
					if (!func_225(0))
					{
						if (__LIB_5__::func_352("KIERAN_FOLLOW"))
						{
							func_374(0, 1);
						}
					}
					if (!func_225(0) && !__LIB_5__::func_352("KIERAN_FOLLOW"))
					{
						bVar1 = (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_135, true) || __LIB_13__::func_562(Global_35, Local_135, sLocal_117));
						bVar2 = __LIB_13__::func_494(&fLocal_1270, Local_135.f_18);
						if (bVar1 == 1 && bVar2 == 0)
						{
							if (__LIB_1__::func_583(&uLocal_989) > 12f || __LIB_1__::func_583(&uLocal_1001) > 7f)
							{
								__LIB_12__::func_883(uParam0, "KIERAN_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(0, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_989);
							__LIB_2__::func_259(&uLocal_1001);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1001);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_1118, 2))
		{
			__LIB_1__::func_561(&uLocal_989);
			__LIB_1__::func_561(&uLocal_1001);
			func_374(5, 0);
			func_374(4, 0);
			func_374(1, 0);
			func_374(0, 0);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1118, 2);
		}
		if (__LIB_0__::func_27(iLocal_1118, 64))
		{
			if (!func_225(3))
			{
				if (!__LIB_0__::func_899(&uLocal_989))
				{
					fLocal_1270 = 0f;
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_13__::func_89(uParam0, "HORSE_RET", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_718(7);
					__LIB_0__::func_745(1);
					__LIB_0__::func_745(10);
					__LIB_0__::func_904(10, 0);
					__LIB_0__::func_904(1, 0);
					__LIB_0__::func_904(3, 0);
					__LIB_2__::func_259(&uLocal_989);
					__LIB_2__::func_259(&uLocal_1001);
				}
				else
				{
					if (!func_225(3))
					{
						if (__LIB_5__::func_352("HORSE_RET"))
						{
							func_374(3, 1);
						}
					}
					if (!func_225(3) && !__LIB_5__::func_352("HORSE_RET"))
					{
						iVar0 = 1;
						bVar2 = __LIB_13__::func_494(&fLocal_1270, __LIB_0__::func_665(Global_35, iLocal_815, 1, 1));
						if (iVar0 == 1 || bVar2 == 0)
						{
							if ((iVar0 == 1 || __LIB_1__::func_583(&uLocal_989) > 12f) || __LIB_1__::func_583(&uLocal_1001) > 7f)
							{
								__LIB_12__::func_883(uParam0, "HORSE_RET", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(3, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_989);
							__LIB_2__::func_259(&uLocal_1001);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1001);
						}
					}
				}
			}
		}
		else if (!func_225(1) && !func_225(5))
		{
			if (!__LIB_0__::func_899(&uLocal_989))
			{
				fLocal_1270 = 0f;
				__LIB_13__::func_495(7);
				if (__LIB_0__::func_27(Local_156.f_8, 268435456))
				{
					__LIB_13__::func_89(uParam0, "GANG_RET", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_900(1);
					__LIB_0__::func_745(10);
					__LIB_0__::func_904(3, 0);
					__LIB_0__::func_904(10, 0);
				}
				else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
				{
					__LIB_13__::func_89(uParam0, "KIERAN_RETURN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_900(10);
					__LIB_0__::func_745(1);
					__LIB_0__::func_904(3, 0);
					__LIB_0__::func_904(1, 0);
				}
				__LIB_2__::func_259(&uLocal_989);
				__LIB_2__::func_259(&uLocal_1001);
			}
			else
			{
				if (__LIB_0__::func_27(Local_156.f_8, 268435456))
				{
					if (!func_225(5))
					{
						if (__LIB_5__::func_352("GANG_RET"))
						{
							func_374(5, 1);
						}
					}
				}
				else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
				{
					if (!func_225(1))
					{
						if (__LIB_5__::func_352("KIERAN_RETURN"))
						{
							func_374(1, 1);
						}
					}
				}
				if (__LIB_0__::func_27(Local_156.f_8, 268435456))
				{
					if (!func_225(5) && !__LIB_5__::func_352("GANG_RET"))
					{
						iVar0 = 1;
						bVar2 = __LIB_13__::func_494(&fLocal_1270, Local_156.f_18);
						if (iVar0 == 1 || bVar2 == 0)
						{
							if ((__LIB_1__::func_583(&uLocal_989) > 12f || __LIB_1__::func_583(&uLocal_1001) > 7f) || iVar0 == 1)
							{
								__LIB_12__::func_883(uParam0, "GANG_RET", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(5, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_989);
							__LIB_2__::func_259(&uLocal_1001);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1001);
						}
					}
				}
				else if (__LIB_0__::func_27(Local_135.f_8, 268435456))
				{
					if (!func_225(1) && !__LIB_5__::func_352("KIERAN_RETURN"))
					{
						iVar0 = 1;
						bVar2 = __LIB_13__::func_494(&fLocal_1270, Local_135.f_18);
						if (iVar0 == 1 || bVar2 == 0)
						{
							if ((__LIB_1__::func_583(&uLocal_989) > 12f || __LIB_1__::func_583(&uLocal_1001) > 7f) || iVar0 == 1)
							{
								__LIB_12__::func_883(uParam0, "KIERAN_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(1, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_989);
							__LIB_2__::func_259(&uLocal_1001);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1001);
						}
					}
				}
			}
		}
	}
	if (!func_225(134))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_815))
		{
			if (func_225(37) && !__LIB_8__::func_684("DST2_BILLGUN"))
			{
				if ((!PED::IS_PED_ON_MOUNT(Global_35) && !AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_815)) || (PED::IS_PED_ON_MOUNT(Global_35) && func_1373(Global_35, sLocal_117) >= 900))
				{
					__LIB_0__::func_105(1);
					__LIB_1__::func_561(&uLocal_998);
					iLocal_1039 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
					if (__LIB_0__::func_293(42))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_1039, 673950256);
					}
					__LIB_4__::func_981(MISC::_CREATE_VAR_STRING(0, -1517813921, iLocal_1039), 0, 0, 1);
					if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_BOW"), 0, false))
					{
						Var3 = 1;
						Var3.f_1 = joaat("WEAPON_BOW");
						HUD::_0x8A59D44189AF2BC5(&Var3, 1856029758);
					}
					func_374(134, 1);
				}
			}
		}
	}
	else if (!func_225(135))
	{
		if (!__LIB_0__::func_899(&uLocal_998))
		{
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_815))
			{
				if (!__LIB_0__::func_48(Global_35, iLocal_815, 7.5f, 1) || (WEAPON::_0x23BF601A42F329A0(Global_35) && __LIB_4__::func_365()))
				{
					__LIB_4__::func_89(&uLocal_998, 0);
				}
			}
		}
		else if (__LIB_1__::func_583(&uLocal_998) >= 1f)
		{
			__LIB_0__::func_105(1);
			HUD::_0x160825DADF1B04B3();
			func_374(135, 1);
		}
	}
	if (!func_225(11))
	{
		if (__LIB_0__::func_27(iLocal_1116, 32768))
		{
			if (Local_156.f_18 < 25f && Local_135.f_18 < 25f)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "DST2_MNTUP", 0))
					{
						Local_156.f_12 = MISC::GET_GAME_TIMER() + 15000;
						Local_177.f_12 = MISC::GET_GAME_TIMER();
						Local_135.f_12 = MISC::GET_GAME_TIMER();
						iLocal_1103 = 0;
						func_374(11, 1);
					}
				}
			}
		}
	}
	else if (!func_225(12))
	{
		if (!__LIB_0__::func_27(iLocal_1118, 128))
		{
			if ((__LIB_0__::func_394(Local_156, iLocal_813, 0) && __LIB_0__::func_394(Local_177, iLocal_814, 0)) && __LIB_0__::func_394(Local_135, iLocal_813, 0))
			{
				if ((MISC::GET_GAME_TIMER() - Local_156.f_12) > 0)
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "DST2_NORIDE", 0))
						{
							iLocal_1103++;
							Local_156.f_12 = (MISC::GET_GAME_TIMER() + 15000 + iLocal_1103 * 1000);
							if (iLocal_1103 == 3)
							{
								func_374(12, 1);
							}
						}
					}
				}
			}
		}
	}
	if ((!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(Local_135)) && __LIB_13__::func_561(Local_156, Local_135))
	{
		if ((Local_156.f_3 == 4 && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_156, 0)) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_156))
		{
			if (!__LIB_0__::func_27(iLocal_1118, 67108864))
			{
				if (!func_225(14))
				{
					if (Local_156.f_20 >= 100 && Local_156.f_20 < 110)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRLEFT", 0))
							{
								func_374(14, 1);
							}
						}
						else
						{
							func_374(14, 1);
						}
					}
				}
				if (!func_225(15))
				{
					if (Local_156.f_20 >= 115)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRCROSS", 0))
							{
								__LIB_1__::func_561(&uLocal_1004);
								func_374(15, 1);
							}
						}
					}
				}
				if (!func_225(16))
				{
					if (Local_156.f_20 >= 120)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (!__LIB_0__::func_899(&uLocal_1004))
							{
								__LIB_2__::func_259(&uLocal_1004);
							}
							if (__LIB_0__::func_899(&uLocal_1004) && __LIB_1__::func_583(&uLocal_1004) > 1f)
							{
								if (__LIB_12__::func_876(uParam0, "DST2DIRUP", 0))
								{
									__LIB_1__::func_561(&uLocal_1004);
									func_374(16, 1);
								}
							}
						}
					}
				}
				if (!func_225(18))
				{
					if (Local_156.f_20 >= 430 && Local_156.f_20 <= 455)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRUPROUND", 0))
							{
								func_374(18, 1);
							}
						}
						else
						{
							__LIB_5__::func_20(1, 0);
							if (Local_156.f_20 > 450)
							{
								func_374(18, 1);
							}
						}
					}
				}
				if (!func_225(17))
				{
					if (Local_156.f_20 >= 515)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRHILLS", 0))
							{
								__LIB_1__::func_561(&uLocal_1004);
								func_374(17, 1);
							}
						}
					}
				}
				if (!func_225(20))
				{
					if (Local_156.f_20 >= 520)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRCLIMB", 0))
							{
								func_374(20, 1);
							}
						}
					}
				}
			}
			else
			{
				if (!func_225(21))
				{
					if (Local_156.f_20 >= 825)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRFOREST", 0))
							{
								func_374(21, 1);
							}
						}
						else
						{
							__LIB_5__::func_20(1, 0);
						}
					}
				}
				if (!func_225(22))
				{
					if (Local_156.f_20 >= 880)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2DIRTREES", 0))
							{
								func_374(22, 1);
							}
						}
					}
				}
				if (!func_225(31))
				{
					if (Local_156.f_20 >= 920)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2TURN", 0))
							{
								func_374(31, 1);
							}
						}
					}
				}
				if (!func_225(32))
				{
					if (Local_156.f_20 >= 960)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2CLOSE", 0))
							{
								__LIB_5__::func_511(5);
								func_334(0);
								func_374(32, 1);
							}
						}
					}
				}
			}
		}
	}
	if (((!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(Local_177)) && !PED::IS_PED_INJURED(Local_135)) && !PED::IS_PED_INJURED(Global_35))
	{
		if ((__LIB_0__::func_394(Global_35, iLocal_815, 0) && __LIB_0__::func_394(Local_177, iLocal_814, 0)) && __LIB_13__::func_561(Local_156, Local_135))
		{
			if ((Local_156.f_3 == 4 && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_156, 0)) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_156))
			{
				if (!__LIB_0__::func_27(iLocal_1118, 67108864))
				{
					if (!func_225(23))
					{
						if (Local_156.f_20 >= 8)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_RCHAT1", 0))
								{
									func_334(1);
									func_374(23, 1);
								}
							}
						}
					}
					if (!func_225(28))
					{
						if (Local_156.f_20 >= 43)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2KNIVES", 0))
								{
									func_374(28, 1);
								}
							}
						}
					}
					if (!func_225(25))
					{
						if (Local_156.f_20 >= 525)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_RCHAT2", 0))
								{
									func_374(25, 1);
								}
							}
						}
					}
					if (!func_225(29))
					{
						if (Local_156.f_20 >= 720)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_PLAN1", 0))
								{
									func_374(29, 1);
								}
							}
						}
					}
					if (func_225(16) && !__LIB_8__::func_684("DST2DIRUP"))
					{
						if ((!func_225(27) && !func_225(26)) && !func_225(24))
						{
							if (!func_225(24))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (Local_156.f_20 >= 215)
									{
										if (__LIB_12__::func_876(uParam0, "DST2_RCHAT1AC", 0))
										{
											__LIB_13__::func_520(&iLocal_847);
											__LIB_8__::func_771(Local_156, 1, 1, 0);
											__LIB_8__::func_771(Local_177, 1, 1, 0);
											__LIB_1__::func_681(&iLocal_1120, 536870912);
											__LIB_1__::func_681(&iLocal_1120, 1073741824 /* Float: 2f */);
											func_374(24, 1);
										}
									}
								}
							}
						}
						if ((!func_225(27) && !func_225(26)) && !func_225(24))
						{
							if (!__LIB_0__::func_27(iLocal_1120, 536870912))
							{
								if ((__LIB_0__::func_394(Global_35, iLocal_815, 1) && __LIB_0__::func_394(Local_156, iLocal_813, 1)) && __LIB_0__::func_394(Local_135, iLocal_813, 1))
								{
									if (CAM::IS_CINEMATIC_CAM_RENDERING())
									{
										__LIB_10__::func_979(Local_156, __LIB_1__::func_464(1, 0), 15f, 0, 0, 320);
									}
									else
									{
										__LIB_10__::func_979(Local_156, __LIB_1__::func_464(1, 0), 15f, 0, 0, 0);
									}
									__LIB_1__::func_683(&iLocal_1120, 536870912);
								}
							}
							else if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_156))
							{
								if (!__LIB_0__::func_139(iLocal_847[0]))
								{
									iLocal_847[0] = __LIB_1__::func_877("RDST2_U_JTALK", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
									__LIB_9__::func_332(&(iLocal_847[0]), Local_156);
									if (__LIB_6__::func_904() || __LIB_5__::func_463())
									{
										__LIB_1__::func_221(iLocal_847[0], 0, 1);
									}
									else
									{
										__LIB_1__::func_221(iLocal_847[0], 1, 1);
									}
								}
								if (__LIB_0__::func_139(iLocal_847[0]))
								{
									if (__LIB_6__::func_904() || __LIB_5__::func_463())
									{
										__LIB_1__::func_221(iLocal_847[0], 0, 1);
									}
									else
									{
										__LIB_1__::func_221(iLocal_847[0], 1, 1);
									}
									if (__LIB_0__::func_572(iLocal_847[0], 0) && __LIB_1__::func_732(iLocal_847[0], 1))
									{
										if (__LIB_12__::func_876(uParam0, "DTS2_TALKJOHN", 0))
										{
											__LIB_13__::func_520(&iLocal_847);
											__LIB_8__::func_771(Local_156, 1, 1, 0);
											__LIB_8__::func_771(Local_177, 1, 1, 0);
											__LIB_1__::func_681(&iLocal_1120, 536870912);
											__LIB_1__::func_681(&iLocal_1120, 1073741824 /* Float: 2f */);
											func_374(27, 1);
										}
									}
								}
							}
						}
						if ((!func_225(27) && !func_225(26)) && !func_225(24))
						{
							if (!__LIB_0__::func_27(iLocal_1120, 1073741824 /* Float: 2f */))
							{
								if (__LIB_0__::func_394(Global_35, iLocal_815, 1) && __LIB_0__::func_394(Local_177, iLocal_814, 1))
								{
									if (CAM::IS_CINEMATIC_CAM_RENDERING())
									{
										__LIB_10__::func_979(Local_177, __LIB_1__::func_464(3, 0), 15f, 0, 0, 320);
									}
									else
									{
										__LIB_10__::func_979(Local_177, __LIB_1__::func_464(3, 0), 15f, 0, 0, 0);
									}
									__LIB_1__::func_683(&iLocal_1120, 1073741824 /* Float: 2f */);
								}
							}
							else if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_177))
							{
								if (!__LIB_0__::func_139(iLocal_847[0]))
								{
									iLocal_847[0] = __LIB_1__::func_877("RDST2_U_BTALK", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
									__LIB_9__::func_332(&(iLocal_847[0]), Local_177);
									if (__LIB_6__::func_904() || __LIB_5__::func_463())
									{
										__LIB_1__::func_221(iLocal_847[0], 0, 1);
									}
									else
									{
										__LIB_1__::func_221(iLocal_847[0], 1, 1);
									}
								}
								if (__LIB_0__::func_139(iLocal_847[0]))
								{
									if (__LIB_6__::func_904() || __LIB_5__::func_463())
									{
										__LIB_1__::func_221(iLocal_847[0], 0, 1);
									}
									else
									{
										__LIB_1__::func_221(iLocal_847[0], 1, 1);
									}
									if (__LIB_0__::func_572(iLocal_847[0], 0) && __LIB_1__::func_732(iLocal_847[0], 1))
									{
										if (__LIB_12__::func_876(uParam0, "DTS2_TALKBILL", 0))
										{
											__LIB_13__::func_520(&iLocal_847);
											__LIB_8__::func_771(Local_156, 1, 1, 0);
											__LIB_8__::func_771(Local_177, 1, 1, 0);
											__LIB_1__::func_681(&iLocal_1120, 536870912);
											__LIB_1__::func_681(&iLocal_1120, 1073741824 /* Float: 2f */);
											func_374(26, 1);
										}
									}
								}
							}
						}
					}
					if (__LIB_0__::func_139(iLocal_847[0]))
					{
						if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_156) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_177))
						{
							__LIB_13__::func_520(&iLocal_847);
						}
					}
				}
				else if (!func_225(30))
				{
					if (Local_156.f_20 >= 845)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "DST2_PLAN2", 0))
							{
								func_374(30, 1);
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1118, 67108864))
	{
		if ((!PED::IS_PED_INJURED(Local_177) && !PED::IS_PED_INJURED(Local_156)) && !PED::IS_PED_INJURED(Local_135))
		{
			if (!func_225(37))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (Local_177.f_3 == 5 || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_156, sLocal_117) && Local_156.f_20 >= 930))
					{
						if (__LIB_12__::func_876(uParam0, "DST2_BILLGUN", 0))
						{
							func_374(37, 1);
						}
					}
				}
			}
			if (!func_225(38))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (Local_177.f_3 == 5)
					{
						if (__LIB_12__::func_876(uParam0, "DST2_BILLKNIFE", 0))
						{
							func_374(38, 1);
						}
					}
				}
			}
			if (!func_225(33))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(iLocal_1118, 16777216))
					{
						if (__LIB_12__::func_876(uParam0, "DST2CLOSE1", 0))
						{
							iLocal_1103 = 0;
							func_374(33, 1);
						}
					}
				}
			}
			if (!func_225(34))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(iLocal_1118, 16777216))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_135) > 5)
						{
							if (__LIB_12__::func_876(uParam0, "DST2CLOSEC", 0))
							{
								func_374(34, 1);
							}
						}
					}
				}
			}
			if (!func_225(35))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(iLocal_1118, 16777216))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_135) > 20)
						{
							if (__LIB_12__::func_876(uParam0, "DST2_CAMP", 0))
							{
								func_374(35, 1);
							}
						}
					}
				}
			}
			if (!func_225(36))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(iLocal_1118, 16777216))
					{
						if (((Local_156.f_3 == 6 && Local_156.f_7 >= 1) || (Local_177.f_3 == 6 && Local_177.f_7 >= 1)) || (Local_135.f_3 == 6 && Local_135.f_7 >= 1))
						{
							if (__LIB_12__::func_876(uParam0, "DST2_JGETDOWN", 0))
							{
								func_374(36, 1);
							}
						}
					}
				}
			}
			if (!func_225(39))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(iLocal_1118, 16777216))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_135, sLocal_118))
						{
							if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_135))
							{
								if (MISC::GET_GAME_TIMER() - Local_156.f_12) > (5000 + iLocal_1103 * 2500)
								{
									if (__LIB_12__::func_876(uParam0, "DST2_JHURRY", 0))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_156, Global_35, 5000, 2048, 51, 0);
										iLocal_1103++;
										Local_156.f_12 = MISC::GET_GAME_TIMER();
										if (iLocal_1103 == 3)
										{
											func_374(39, 1);
										}
									}
								}
							}
							else
							{
								Local_156.f_12 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
	}
	if (func_225(24))
	{
		__LIB_8__::func_875(Local_156, "DST2_RCHAT1AC", 1, 1);
		__LIB_8__::func_875(Local_177, "DST2_RCHAT1AC", 1, 1);
	}
	if (func_225(25))
	{
		__LIB_8__::func_875(Local_156, "DST2_RCHAT2", 1, 1);
		__LIB_8__::func_875(Local_177, "DST2_RCHAT2", 1, 1);
	}
	if (func_225(26))
	{
		__LIB_8__::func_875(Local_156, "DTS2_TALKBILL", 1, 1);
		__LIB_8__::func_875(Local_177, "DTS2_TALKBILL", 1, 1);
	}
	if (func_225(27))
	{
		__LIB_8__::func_875(Local_156, "DTS2_TALKJOHN", 1, 1);
		__LIB_8__::func_875(Local_177, "DTS2_TALKJOHN", 1, 1);
	}
}

void func_845()
{
	if (__LIB_0__::func_27(iLocal_1118, 32768))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_815))
		{
			if (__LIB_0__::func_394(Global_35, iLocal_815, 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.501f, 0, -1082130432 /* Float: -1f */, 0);
				}
			}
			if (__LIB_1__::func_583(&uLocal_995) > 5f || (__LIB_1__::func_583(&uLocal_995) > 3.5f && ((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_MOVE_LR"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_MOVE_UD")))))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_1__::func_681(&iLocal_1118, 32768);
			}
		}
	}
}

void func_846()
{
	if (!__LIB_0__::func_27(iLocal_1119, 2))
	{
		if ((!PED::IS_PED_INJURED(Local_177) && !PED::IS_PED_INJURED(Local_156)) && !PED::IS_PED_INJURED(Local_135))
		{
			if ((!PED::IS_PED_ON_MOUNT(Local_177) && !PED::IS_PED_ON_MOUNT(Local_156)) && !PED::IS_PED_ON_MOUNT(Local_135))
			{
				__LIB_0__::func_19(&uLocal_128, 3);
				__LIB_1__::func_683(&iLocal_1119, 2);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1119, 4))
	{
		if (__LIB_0__::func_27(iLocal_1119, 2))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_68, 10f, 1, 1) || __LIB_0__::func_27(iLocal_1118, 262144))
			{
				__LIB_0__::func_19(&uLocal_128, 4);
				__LIB_1__::func_683(&iLocal_1119, 4);
			}
		}
	}
}

void func_848(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	if (!__LIB_0__::func_27(iLocal_1120, 524288))
	{
		if (!PED::IS_PED_INJURED(Local_304[0 /*21*/]) && Local_304[0 /*21*/].f_3 == 24)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
			{
				if (__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 5.25f, 1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
				}
				if (__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 5f, 1))
				{
					if (__LIB_0__::func_27(iLocal_1120, 65536))
					{
						if (!__LIB_0__::func_27(iLocal_1120, 524288))
						{
							if (!__LIB_0__::func_139(iLocal_847[2]))
							{
								if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_304[0 /*21*/]))
								{
									iLocal_847[2] = __LIB_1__::func_877("INTERACT_MELEE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
								}
							}
						}
					}
					if (func_1380(Global_35, Local_304[0 /*21*/]) && PED::IS_PED_FACING_PED(Global_35, Local_304[0 /*21*/], 90f))
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_MELEE_ATTACK")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || __LIB_0__::func_27(iLocal_1120, 262144)) || ((__LIB_0__::func_27(iLocal_1120, 65536) && __LIB_0__::func_139(iLocal_847[2])) && __LIB_1__::func_732(iLocal_847[2], 1)))
							{
								if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
								{
									ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iParam0, &vVar0, &vVar3, 2);
									vVar6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("script_rc@dst2@ig@rcs2_ig1_goon_assassination", "action_john", vVar0, vVar3, 0f, 2) };
									vVar9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("script_rc@dst2@ig@rcs2_ig1_goon_assassination", "action_john", vVar0, vVar3, 0f, 2) };
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar6, 1f, 40000, 0.25f, 0, vVar9.z);
									if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar12, true, 0, false) == 0 || (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar12, true, 0, false) && iVar12 != joaat("WEAPON_MELEE_KNIFE")))
									{
										WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
										TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
									}
								}
								__LIB_13__::func_520(&iLocal_847);
								__LIB_8__::func_771(Local_304[0 /*21*/], 0, 1, 0);
								__LIB_1__::func_683(&iLocal_1120, 524288);
							}
						}
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1120, 1048576))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) == 8)
		{
			func_323(&(Local_304[0 /*21*/]), 25, 0, 0);
			__LIB_1__::func_683(&iLocal_1120, 1048576);
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) == 1)
		{
			if (!PED::IS_PED_INJURED(Local_304[0 /*21*/]) && Local_304[0 /*21*/].f_3 != 24)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_1__::func_683(&iLocal_1120, 1048576);
			}
		}
	}
}

void func_850()
{
	int iVar0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 104, true);
		if (__LIB_1__::func_205(Global_35, iLocal_1041[21], 1, 0))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
			__LIB_4__::func_636();
		}
		if (__LIB_1__::func_205(Global_35, iLocal_1041[20], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f, 1);
				}
			}
		}
	}
}

void func_851(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
	{
		if (((((!PED::IS_PED_INJURED(Local_240[0 /*21*/]) && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8)) && !PED::IS_PED_INJURED(Local_240[1 /*21*/])) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !PED::IS_PED_INJURED(Local_240[2 /*21*/])) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
		{
			if (!func_225(89))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "DST2JOHSEE", 0))
					{
						fLocal_1270 = Local_240[0 /*21*/].f_18;
						Local_177.f_12 = MISC::GET_GAME_TIMER();
						func_374(89, 1);
					}
				}
			}
			if (!__LIB_0__::func_27(iLocal_1120, 2) && !__LIB_0__::func_27(iLocal_1120, 4))
			{
				if (!func_225(95))
				{
					if (func_225(89))
					{
						if (__LIB_13__::func_494(&fLocal_1270, Local_240[0 /*21*/].f_18))
						{
							if (Local_240[0 /*21*/].f_18 < 27.5f)
							{
								if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35))
								{
									if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
									{
										if (__LIB_12__::func_876(uParam0, "DST2_AADV", 0))
										{
											Local_177.f_12 = MISC::GET_GAME_TIMER();
											func_374(95, 1);
										}
									}
								}
							}
						}
					}
				}
				if (!func_225(90))
				{
					if (func_225(89))
					{
						if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 15000)
						{
							if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
							{
								if (__LIB_12__::func_876(uParam0, "DST2DECIDEA", 0))
								{
									Local_177.f_12 = MISC::GET_GAME_TIMER();
									func_374(90, 1);
								}
							}
						}
					}
				}
				if (!func_225(80))
				{
					if (func_225(90))
					{
						if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 17500)
						{
							if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
							{
								if (__LIB_12__::func_876(uParam0, "DST2_ANRSPND", 0))
								{
									Local_177.f_12 = MISC::GET_GAME_TIMER();
									func_374(80, 1);
								}
							}
						}
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_1120, 2))
			{
			}
			else if (__LIB_0__::func_27(iLocal_1120, 4))
			{
				if (func_225(91))
				{
					if (!func_225(83))
					{
						if (!__LIB_13__::func_494(&fLocal_1270, Local_240[0 /*21*/].f_18))
						{
							if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 10000)
							{
								if (Local_177.f_18 < 15f)
								{
									if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
									{
										if (__LIB_12__::func_876(uParam0, "DST2_ANPLAN", 0))
										{
											Local_177.f_12 = MISC::GET_GAME_TIMER();
											func_374(83, 1);
										}
									}
								}
							}
						}
						else
						{
							Local_177.f_12 = MISC::GET_GAME_TIMER();
						}
					}
					if (!func_225(93))
					{
						if (func_225(83))
						{
							if (!__LIB_13__::func_494(&fLocal_1270, Local_240[0 /*21*/].f_18))
							{
								if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 12500)
								{
									if (Local_177.f_18 < 15f)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2_ANOMOVE", 0))
											{
												Local_177.f_12 = MISC::GET_GAME_TIMER();
												func_374(93, 1);
											}
										}
									}
								}
							}
							else
							{
								Local_177.f_12 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!func_225(94))
					{
						if (func_225(93))
						{
							if (!__LIB_13__::func_494(&fLocal_1270, Local_240[0 /*21*/].f_18))
							{
								if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 15000)
								{
									if (Local_177.f_18 < 15f)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2_ANOMOVE", 0))
											{
												Local_177.f_12 = MISC::GET_GAME_TIMER();
												func_374(94, 1);
											}
										}
									}
								}
							}
							else
							{
								Local_177.f_12 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(Local_240[0 /*21*/]) || ENTITY::IS_ENTITY_DEAD(Local_240[0 /*21*/]))
		{
			if (((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !PED::IS_PED_INJURED(Local_240[2 /*21*/])) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
			{
				if (__LIB_0__::func_27(iLocal_1120, 2))
				{
					if (func_225(92))
					{
						if (!func_225(98))
						{
							if (__LIB_9__::func_225(Global_35, Local_240[0 /*21*/]))
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2DECIDEA2B", 0))
									{
										func_374(98, 1);
									}
								}
							}
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_1120, 4))
				{
					if (func_225(91))
					{
						if (!func_225(96))
						{
							if (__LIB_9__::func_225(Global_35, Local_240[0 /*21*/]))
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2BSNEAKA1", 0))
									{
										func_374(96, 1);
									}
								}
							}
						}
					}
				}
				if (!func_225(97))
				{
					if (__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
					{
						if (__LIB_9__::func_225(Local_177, Local_240[0 /*21*/]))
						{
							if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
							{
								if (__LIB_12__::func_876(uParam0, "DST2BSNEAKA2", 0))
								{
									func_374(97, 1);
								}
							}
						}
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(Local_240[0 /*21*/]) || ENTITY::IS_ENTITY_DEAD(Local_240[0 /*21*/]))
		{
			if (((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !PED::IS_PED_INJURED(Local_240[2 /*21*/])) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
			{
				if (!func_225(79))
				{
					if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
					{
						if (Local_240[1 /*21*/].f_19 < 25f)
						{
							if (!PED::IS_PED_PERFORMING_MELEE_ACTION(Local_177, 8, 0))
							{
								if (__LIB_12__::func_876(uParam0, "DTS2_BILLPSST", 0))
								{
									func_374(79, 1);
								}
							}
						}
					}
				}
				if (!func_225(99))
				{
					if ((!__LIB_8__::func_684("DTS2_BILLPSST") && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
					{
						if (Local_240[1 /*21*/].f_19 < 25f && Local_177.f_18 < 12.5f)
						{
							if (!PED::IS_PED_PERFORMING_MELEE_ACTION(Local_177, 8, 0))
							{
								if (__LIB_12__::func_876(uParam0, "DST2BSNEAKB", 0))
								{
									fLocal_1270 = Local_240[1 /*21*/].f_18;
									Local_177.f_12 = MISC::GET_GAME_TIMER();
									func_374(99, 1);
								}
							}
						}
					}
				}
				if (!__LIB_0__::func_27(iLocal_1120, 128) && !__LIB_0__::func_27(iLocal_1120, 64))
				{
					if (!func_225(81))
					{
						if (func_225(99))
						{
							if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 15000)
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2_ANRSPND", 0))
									{
										Local_177.f_12 = MISC::GET_GAME_TIMER();
										func_374(81, 1);
									}
								}
							}
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1120, 64))
				{
					if (func_225(101))
					{
						if (!func_225(84))
						{
							if (!func_1363(Local_240[1 /*21*/], 1.5f))
							{
								if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 10000)
								{
									if (Local_177.f_18 < 15f)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2_ANPLAN", 0))
											{
												Local_177.f_12 = MISC::GET_GAME_TIMER();
												func_374(84, 1);
											}
										}
									}
								}
							}
							else
							{
								Local_177.f_12 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_1120, 128))
				{
					if (func_225(100))
					{
						if (!func_225(85))
						{
							if (!__LIB_13__::func_494(&fLocal_1270, Local_240[1 /*21*/].f_18))
							{
								if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 10000)
								{
									if (Local_177.f_18 < 15f)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2_ANPLAN", 0))
											{
												Local_177.f_12 = MISC::GET_GAME_TIMER();
												func_374(85, 1);
											}
										}
									}
								}
							}
							else
							{
								Local_177.f_12 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1121, 4))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_304[0 /*21*/]) && !PED::IS_PED_INJURED(Local_304[0 /*21*/])) && !__LIB_0__::func_27(Local_304[0 /*21*/].f_8, 8))
			{
				if (((((!PED::IS_PED_INJURED(Local_304[0 /*21*/]) && !PED::IS_PED_IN_COMBAT(Local_304[0 /*21*/], 0)) && !PED::IS_PED_DEAD_OR_DYING(Local_304[0 /*21*/], true)) && !PED::IS_PED_BEING_STUNNED(Local_304[0 /*21*/], 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_304[0 /*21*/])) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Local_304[0 /*21*/], 1, 0))
				{
					if (!func_1357())
					{
						if (__LIB_0__::func_266(Local_156, Local_851[11 /*5*/], 12.5f, 1, 1) || __LIB_0__::func_266(Local_156, Local_851[14 /*5*/], 12.5f, 1, 1))
						{
							if ((__LIB_0__::func_266(Global_35, Local_851[11 /*5*/], 10f, 1, 1) || __LIB_0__::func_266(Global_35, Local_851[14 /*5*/], 10f, 1, 1)) || func_1338(Global_35, vLocal_15, Local_156, 10f))
							{
								if (!func_225(77))
								{
									if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2_JOHNPSST", 0))
											{
												func_374(77, 1);
											}
										}
									}
								}
								if (!func_225(103))
								{
									if (func_225(77) && !__LIB_8__::func_684("DST2_JOHNPSST"))
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
										{
											if (__LIB_12__::func_876(uParam0, "DST2DECIDEC", 0))
											{
												Local_156.f_12 = MISC::GET_GAME_TIMER();
												func_374(103, 1);
											}
										}
									}
								}
							}
						}
						if ((!__LIB_0__::func_27(iLocal_1120, 131072) && !__LIB_0__::func_27(iLocal_1120, 65536)) && !__LIB_0__::func_27(iLocal_1120, 262144))
						{
							if (!func_225(86))
							{
								if (func_225(103))
								{
									if ((MISC::GET_GAME_TIMER() - Local_156.f_12) > 15000)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
										{
											if (!__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 5f, 1) && !func_1363(Local_304[0 /*21*/], 1.5f))
											{
												if (__LIB_12__::func_876(uParam0, "DST2DECIDECR", 0))
												{
													Local_156.f_12 = MISC::GET_GAME_TIMER();
													func_374(86, 1);
												}
											}
										}
									}
								}
							}
							if (!func_225(87))
							{
								if (func_225(86))
								{
									if ((MISC::GET_GAME_TIMER() - Local_156.f_12) > 15000)
									{
										if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
										{
											if (!__LIB_0__::func_48(Global_35, Local_304[0 /*21*/], 5f, 1) && !func_1363(Local_304[0 /*21*/], 1.5f))
											{
												if (__LIB_12__::func_876(uParam0, "DST2DECIDECR", 0))
												{
													Local_156.f_12 = MISC::GET_GAME_TIMER();
													func_374(87, 1);
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
			if ((ENTITY::DOES_ENTITY_EXIST(Local_240[0 /*21*/]) && ENTITY::DOES_ENTITY_EXIST(Local_240[1 /*21*/])) && ENTITY::DOES_ENTITY_EXIST(Local_240[2 /*21*/]))
			{
				if (!func_225(102))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (Local_156.f_18 < 25f)
						{
							if (!AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
							{
								if (__LIB_12__::func_876(uParam0, "DST2_JTAKEDWN", 0))
								{
									func_374(102, 1);
								}
							}
						}
					}
				}
				if (!func_225(71))
				{
					if (!func_225(103))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (Local_156.f_18 < 15f)
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2_JMENTK", 0))
									{
										func_374(71, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && !__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !PED::IS_PED_INJURED(Local_240[2 /*21*/])) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
		{
			if (!func_225(45))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RDST2_RSC3_P2PU", 0))
					{
						Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
						Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
						{
							MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
							MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[1 /*21*/]);
						}
						func_374(45, 1);
					}
				}
			}
			else
			{
				if (!func_225(47))
				{
					if (Local_240[1 /*21*/].f_3 == 17)
					{
						if ((MISC::GET_GAME_TIMER() - Local_240[1 /*21*/].f_12) > 12500)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_GRD4WAITS", 0))
								{
									Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
									Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
									if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
									{
										MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
										MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[1 /*21*/]);
									}
									func_374(47, 1);
								}
							}
						}
					}
				}
				if (!func_225(48))
				{
					if (func_225(41) || PED::IS_PED_INJURED(Local_240[0 /*21*/]))
					{
						if (Local_240[1 /*21*/].f_3 == 17)
						{
							if ((MISC::GET_GAME_TIMER() - Local_240[1 /*21*/].f_12) > 15000)
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2_GRD4WAITS", 0))
									{
										Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
										{
											MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
											MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[1 /*21*/]);
										}
										func_374(48, 1);
									}
								}
							}
						}
					}
				}
				if (!func_225(49))
				{
					if (func_225(43) || PED::IS_PED_INJURED(Local_240[0 /*21*/]))
					{
						if (Local_240[1 /*21*/].f_3 == 17)
						{
							if ((MISC::GET_GAME_TIMER() - Local_240[1 /*21*/].f_12) > 15000)
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2_GRD4WAITS", 0))
									{
										Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
										{
											MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
											MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[1 /*21*/]);
										}
										func_374(49, 1);
									}
								}
							}
						}
					}
				}
				if (!func_225(50))
				{
					if (func_225(44) || PED::IS_PED_INJURED(Local_240[0 /*21*/]))
					{
						if (Local_240[1 /*21*/].f_3 == 17)
						{
							if ((MISC::GET_GAME_TIMER() - Local_240[1 /*21*/].f_12) > 15000)
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2_GRD4TURNS", 0))
									{
										Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]))
										{
											MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
											MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[1 /*21*/]);
										}
										func_374(50, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]) && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 1))
		{
			if (!func_225(41))
			{
				if (func_225(47))
				{
					if (Local_240[0 /*21*/].f_3 == 16 && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
					{
						if ((MISC::GET_GAME_TIMER() - Local_240[0 /*21*/].f_12) > 5000)
						{
							if (!__LIB_0__::func_48(Local_177, Local_240[0 /*21*/], 10f, 1))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2_GRD7PISS", 0))
									{
										Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]))
										{
											MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
											MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[0 /*21*/]);
										}
										func_374(41, 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_225(43))
			{
				if (func_225(48))
				{
					if (Local_240[0 /*21*/].f_3 == 16 && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
					{
						if ((MISC::GET_GAME_TIMER() - Local_240[0 /*21*/].f_12) > 5000)
						{
							if (!__LIB_0__::func_48(Local_177, Local_240[0 /*21*/], 10f, 1))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2_GRD7PISSR", 0))
									{
										Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]))
										{
											MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
											MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[0 /*21*/]);
										}
										func_374(43, 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_225(44))
			{
				if (func_225(49))
				{
					if (Local_240[0 /*21*/].f_3 == 16 && !__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
					{
						if ((MISC::GET_GAME_TIMER() - Local_240[0 /*21*/].f_12) > 5000)
						{
							if (!__LIB_0__::func_48(Local_177, Local_240[0 /*21*/], 10f, 1))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2_GRD7PISSR", 0))
									{
										Local_240[0 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										Local_240[1 /*21*/].f_12 = MISC::GET_GAME_TIMER();
										if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]))
										{
											MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
											MAP::_TRIGGER_SONAR_BLIP_2(1359446981, Local_240[0 /*21*/]);
										}
										func_374(44, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1120, 65536))
		{
			if (!func_225(107))
			{
				if (!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(Global_35))
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1376, false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_156, iLocal_1376))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1376) > 0.275f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1376) < 0.6f)
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(Local_156) && !ENTITY::IS_ENTITY_OCCLUDED(Local_156))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, Local_156, 17))
								{
									if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1))
									{
										if (__LIB_12__::func_876(uParam0, "DST2DECIDECJV", 0))
										{
											TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_156, 2000, 2048, 51, 0);
											func_374(107, 1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_326[1 /*21*/]) && !__LIB_0__::func_27(Local_326[1 /*21*/].f_8, 8))
		{
			if (__LIB_0__::func_27(iLocal_1121, 4) && __LIB_0__::func_27(iLocal_1121, 2048))
			{
				if (!func_225(108))
				{
					if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
					{
						if (__LIB_12__::func_876(uParam0, "DST2_JASKPLAN", 0))
						{
							Local_156.f_12 = MISC::GET_GAME_TIMER();
							Local_177.f_12 = MISC::GET_GAME_TIMER();
							func_374(108, 1);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1120, 33554432))
				{
					if (!__LIB_0__::func_27(iLocal_1120, 67108864) && !__LIB_0__::func_27(iLocal_1120, 134217728))
					{
						if (!func_225(88))
						{
							if (func_225(108))
							{
								if ((MISC::GET_GAME_TIMER() - Local_156.f_12) > 15000)
								{
									if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
									{
										if (__LIB_12__::func_876(uParam0, "DST2DECIDECR", 0))
										{
											Local_156.f_12 = MISC::GET_GAME_TIMER();
											Local_177.f_12 = MISC::GET_GAME_TIMER();
											func_374(88, 1);
										}
									}
								}
							}
						}
						if (!func_225(82))
						{
							if (func_225(88))
							{
								if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 17500)
								{
									if (!AUDIO::_0x54B187F111D9C6F8(Global_35, 1) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
									{
										if (__LIB_12__::func_876(uParam0, "DST2_ANRSPND", 0))
										{
											Local_177.f_12 = MISC::GET_GAME_TIMER();
											func_374(82, 1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1375) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1375, false))
		{
			if (!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(Local_135))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1375, "pl_loop"))
				{
					if (Local_135.f_12 == 0)
					{
						Local_156.f_12 = 0;
						Local_156.f_13 = 0;
						Local_135.f_12 = MISC::GET_GAME_TIMER() + 12500;
						__LIB_1__::func_681(&(Local_156.f_8), 2097152);
					}
					if (Local_156.f_18 < 7.5f || Local_135.f_18 < 7.5f)
					{
						if (__LIB_0__::func_27(Local_156.f_8, 2097152))
						{
							if (!func_225(68))
							{
								if (((!AUDIO::_0x54B187F111D9C6F8(Local_156, 0) && !AUDIO::_0x54B187F111D9C6F8(Local_135, 0)) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2_JGUNK", 0))
									{
										Local_156.f_13++;
										Local_135.f_12 = (MISC::GET_GAME_TIMER() + 12500 + Local_156.f_13 * 3500);
										if (Local_156.f_13 == 4)
										{
											func_374(68, 1);
										}
										__LIB_1__::func_681(&(Local_156.f_8), 2097152);
									}
								}
							}
							else
							{
								__LIB_1__::func_681(&(Local_156.f_8), 2097152);
							}
						}
						else if ((MISC::GET_GAME_TIMER() - Local_135.f_12) > 0)
						{
							if (((!AUDIO::_0x54B187F111D9C6F8(Local_156, 0) && !AUDIO::_0x54B187F111D9C6F8(Local_135, 0)) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
							{
								if (__LIB_12__::func_876(uParam0, "DST2_KMUFFL", 0))
								{
									Local_135.f_12 = (MISC::GET_GAME_TIMER() + 12500 + Local_156.f_13 * 3500);
									__LIB_1__::func_683(&(Local_156.f_8), 2097152);
								}
							}
						}
					}
				}
				else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1375, "pl_exit"))
				{
					if (!func_225(70))
					{
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_156, iLocal_1375))
						{
							if (!AUDIO::_0x54B187F111D9C6F8(Local_156, 0))
							{
								if (__LIB_12__::func_876(uParam0, "DST2_JDWNHILL", 0))
								{
									func_374(70, 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_225(72))
		{
			if (__LIB_0__::func_27(iLocal_1121, 4))
			{
				if (Local_135.f_3 == 11)
				{
					if (Local_135.f_18 < 5f)
					{
						if ((MISC::GET_GAME_TIMER() - Local_135.f_12) > 0)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_KBEGS", 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_135, Global_35, 3000, 2048, 51, 0);
									Local_135.f_13++;
									Local_135.f_12 = (MISC::GET_GAME_TIMER() + 7500 + Local_135.f_13 * 3500);
									if (Local_135.f_13 == 5)
									{
										func_374(72, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (((!PED::IS_PED_INJURED(Local_240[0 /*21*/]) && Local_240[0 /*21*/].f_3 == 20) || (!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && Local_240[1 /*21*/].f_3 == 20)) || (!PED::IS_PED_INJURED(Local_240[2 /*21*/]) && Local_240[2 /*21*/].f_3 == 20))
		{
			if (__LIB_5__::func_463())
			{
				if ((((__LIB_8__::func_684("RDST2_RSC3_P2PU") || __LIB_8__::func_684("DST2_GRD4WAITS")) || __LIB_8__::func_684("DST2_GRD4TURNS")) || __LIB_8__::func_684("DST2_GRD7PISSR")) || __LIB_8__::func_684("DST2_GRD7PISS"))
				{
					__LIB_5__::func_20(0, 0);
					return;
				}
			}
			if (__LIB_5__::func_463())
			{
				if (((__LIB_8__::func_684("DST2DECIDEA1") || __LIB_8__::func_684("DST2DECIDEA2")) || __LIB_8__::func_684("DST2BSNEAKC")) || __LIB_8__::func_684("DST2BSNEAKC1"))
				{
					__LIB_5__::func_20(1, 0);
					return;
				}
			}
			if (!__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 1024))
			{
				if ((!PED::IS_PED_INJURED(Local_240[0 /*21*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_240[0 /*21*/], true)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_240[0 /*21*/]))
				{
					if (Local_240[0 /*21*/].f_3 == 20)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								__LIB_1__::func_265(Local_240[0 /*21*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
							case 1:
								__LIB_1__::func_265(Local_240[0 /*21*/], "GENERIC_ANGRY_REACTION", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
							case 2:
								__LIB_1__::func_265(Local_240[0 /*21*/], "GENERIC_SHOCKED_MED", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
						}
						__LIB_1__::func_683(&(Local_240[0 /*21*/].f_8), 1024);
					}
				}
			}
			if (!__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 1024))
			{
				if ((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_240[1 /*21*/], true)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_240[1 /*21*/]))
				{
					if (Local_240[1 /*21*/].f_3 == 20)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								__LIB_1__::func_265(Local_240[1 /*21*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
							case 1:
								__LIB_1__::func_265(Local_240[1 /*21*/], "CHALLENGE_THREATEN", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
							case 2:
								__LIB_1__::func_265(Local_240[1 /*21*/], "CHALLENGE_THREATEN_ARMED", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
						}
						__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 1024);
					}
				}
			}
			if (!__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 1024))
			{
				if ((!PED::IS_PED_INJURED(Local_240[2 /*21*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_240[2 /*21*/], true)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_240[2 /*21*/]))
				{
					if (Local_240[2 /*21*/].f_3 == 20)
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(Local_240[2 /*21*/], "0356_G_M_M_UniDuster_01_WHITE_02");
						__LIB_12__::func_875(uParam0, Local_240[2 /*21*/], "ODR_PED1", 0);
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								__LIB_1__::func_265(Local_240[2 /*21*/], "GENERIC_ANGRY_REACTION", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
							case 1:
								__LIB_1__::func_265(Local_240[2 /*21*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
							case 2:
								__LIB_1__::func_265(Local_240[2 /*21*/], "GENERIC_SHOCKED_DISBELIEF", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
								break;
						}
						__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 1024);
					}
				}
			}
		}
	}
	else
	{
		if (__LIB_5__::func_463())
		{
			if ((((__LIB_8__::func_684("RDST2_RSC3_P2PU") || __LIB_8__::func_684("DST2_GRD4WAITS")) || __LIB_8__::func_684("DST2_GRD4TURNS")) || __LIB_8__::func_684("DST2_GRD7PISSR")) || __LIB_8__::func_684("DST2_GRD7PISS"))
			{
				__LIB_5__::func_20(0, 0);
			}
		}
		if (__LIB_5__::func_463())
		{
			if (((((((__LIB_8__::func_684("DST2DECIDEA1") || __LIB_8__::func_684("DST2DECIDEA2")) || __LIB_8__::func_684("DST2BSNEAKC")) || __LIB_8__::func_684("DST2BSNEAKC1")) || __LIB_8__::func_684("DST2DECIDEC1")) || __LIB_8__::func_684("DST2DECIDEC2")) || __LIB_8__::func_684("DST2WAITSIG")) || __LIB_8__::func_684("DST2_ATTACK"))
			{
				__LIB_5__::func_20(1, 0);
				return;
			}
		}
		if (((!func_225(52) && !func_225(53)) && !func_225(54)) && !func_225(55))
		{
			iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), 0, 0, 28);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::IS_PED_MALE(iVar1))
			{
				if (iVar1 == Local_304[0 /*21*/])
				{
					__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 1);
					if (__LIB_12__::func_876(uParam0, "DST2_ODRATK8", 0))
					{
						iLocal_1104 = MISC::GET_GAME_TIMER();
						func_374(54, 1);
					}
				}
				else if ((iVar1 == Local_240[0 /*21*/] || iVar1 == Local_240[1 /*21*/]) || iVar1 == Local_240[2 /*21*/])
				{
					if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]))
					{
						__LIB_12__::func_875(uParam0, Local_240[2 /*21*/], "ODR_PED1", 1);
						if (__LIB_12__::func_876(uParam0, "DST2_ODRATK1", 0))
						{
							iLocal_1104 = MISC::GET_GAME_TIMER();
							func_374(52, 1);
						}
					}
					else
					{
						__LIB_1__::func_265(iVar1, "CALL_FOR_SUPPORT", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
						iLocal_1104 = MISC::GET_GAME_TIMER();
						func_374(55, 1);
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 1);
							if (__LIB_12__::func_876(uParam0, "DST2_ODRATK1", 0))
							{
								iLocal_1104 = MISC::GET_GAME_TIMER();
								func_374(52, 1);
							}
							break;
						case 1:
							__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
							if (__LIB_12__::func_876(uParam0, "DST2_ODRATK2", 0))
							{
								iLocal_1104 = MISC::GET_GAME_TIMER();
								func_374(53, 1);
							}
							break;
					}
				}
			}
		}
		else if (((!func_225(56) && !func_225(57)) && !func_225(58)) && !func_225(59))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1104) > 10000)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0, 28);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::IS_PED_MALE(iVar1))
					{
						if ((iVar1 == Local_240[0 /*21*/] || iVar1 == Local_240[1 /*21*/]) || iVar1 == Local_240[2 /*21*/])
						{
							iLocal_1104 = MISC::GET_GAME_TIMER();
							return;
						}
						vVar2 = { __LIB_13__::func_515(&(uParam0->f_643), iVar1) };
						if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar2))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
							{
								case 0:
									iVar0 = 0;
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 1);
									break;
								case 1:
									iVar0 = 1;
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
									break;
								case 2:
									iVar0 = 2;
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 1);
									break;
								case 3:
									iVar0 = 3;
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 1);
									break;
							}
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED1"))
						{
							iVar0 = 0;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED2"))
						{
							iVar0 = 1;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED3"))
						{
							iVar0 = 2;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED8"))
						{
							iVar0 = 3;
						}
						switch (iVar0)
						{
							case 0:
								if (__LIB_12__::func_876(uParam0, "DST2_ODRDUTCH1", 0))
								{
									iLocal_1104 = MISC::GET_GAME_TIMER();
									func_374(56, 1);
								}
								break;
							case 1:
								if (__LIB_12__::func_876(uParam0, "DST2_ODRDUTCH2", 0))
								{
									iLocal_1104 = MISC::GET_GAME_TIMER();
									func_374(57, 1);
								}
								break;
							case 2:
								if (__LIB_12__::func_876(uParam0, "DST2_ODRDUTCH3", 0))
								{
									iLocal_1104 = MISC::GET_GAME_TIMER();
									func_374(59, 1);
								}
								break;
							case 3:
								if (__LIB_12__::func_876(uParam0, "DST2_ODRDUTCH8", 0))
								{
									iLocal_1104 = MISC::GET_GAME_TIMER();
									func_374(58, 1);
								}
								break;
						}
					}
				}
			}
		}
		else if (!func_225(60) && !func_225(61))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1104) > 10000)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0, 28);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::IS_PED_MALE(iVar1))
					{
						if ((iVar1 == Local_240[0 /*21*/] || iVar1 == Local_240[1 /*21*/]) || iVar1 == Local_240[2 /*21*/])
						{
							iLocal_1104 = MISC::GET_GAME_TIMER();
							return;
						}
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 1);
								if (__LIB_12__::func_876(uParam0, "DST2_CABIN1", 0))
								{
									iLocal_1104 = MISC::GET_GAME_TIMER();
									func_374(60, 1);
								}
								break;
							case 1:
								__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
								if (__LIB_12__::func_876(uParam0, "DST2_CABIN2", 0))
								{
									iLocal_1104 = MISC::GET_GAME_TIMER();
									func_374(61, 1);
								}
								break;
						}
					}
				}
			}
		}
		else if (((!func_225(62) && !func_225(63)) && !func_225(64)) && !func_225(65))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1104) > 10000)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0, 28);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::IS_PED_MALE(iVar1))
					{
						if (__LIB_0__::func_48(iVar1, Local_135, 25f, 1))
						{
							if ((iVar1 == Local_240[0 /*21*/] || iVar1 == Local_240[1 /*21*/]) || iVar1 == Local_240[2 /*21*/])
							{
								iLocal_1104 = MISC::GET_GAME_TIMER();
								return;
							}
							vVar2 = { __LIB_13__::func_515(&(uParam0->f_643), iVar1) };
							if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar2))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										iVar0 = 0;
										__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 1);
										break;
									case 1:
										iVar0 = 1;
										__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
										break;
									case 2:
										iVar0 = 2;
										__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 1);
										break;
									case 3:
										iVar0 = 3;
										__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 1);
										break;
								}
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED1"))
							{
								iVar0 = 0;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED2"))
							{
								iVar0 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED3"))
							{
								iVar0 = 2;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED8"))
							{
								iVar0 = 3;
							}
							switch (iVar0)
							{
								case 0:
									if (__LIB_12__::func_876(uParam0, "DST2_ODRKIER1", 0))
									{
										iLocal_1104 = MISC::GET_GAME_TIMER();
										func_374(62, 1);
									}
									break;
								case 1:
									if (__LIB_12__::func_876(uParam0, "DST2_ODRKIER2", 0))
									{
										iLocal_1104 = MISC::GET_GAME_TIMER();
										func_374(63, 1);
									}
									break;
								case 2:
									if (__LIB_12__::func_876(uParam0, "DST2_ODRKIER3", 0))
									{
										iLocal_1104 = MISC::GET_GAME_TIMER();
										func_374(65, 1);
									}
									break;
								case 3:
									if (__LIB_12__::func_876(uParam0, "DST2_ODRKIER8", 0))
									{
										iLocal_1104 = MISC::GET_GAME_TIMER();
										func_374(64, 1);
									}
									break;
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1120, 67108864))
	{
		if (!func_225(111))
		{
			if (!PED::IS_PED_INJURED(Local_156) && !PED::IS_PED_INJURED(Local_177))
			{
				if (((!AUDIO::_0x54B187F111D9C6F8(Local_156, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_156)) && !AUDIO::_0x54B187F111D9C6F8(Local_177, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_177))
				{
					if (Local_156.f_3 == 23 && Local_177.f_3 == 23)
					{
						if (__LIB_12__::func_876(uParam0, "DST2_JBATK", 0))
						{
							Local_177.f_13 = 0;
							Local_156.f_13 = 0;
							Local_177.f_12 = MISC::GET_GAME_TIMER();
							Local_156.f_12 = MISC::GET_GAME_TIMER();
							func_374(111, 1);
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
	{
		if (!__LIB_0__::func_27(iLocal_1120, 33554432))
		{
			if (!func_225(112) && !func_225(113))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (Local_177.f_18 <= Local_156.f_18)
					{
						if (__LIB_12__::func_876(uParam0, "DST2_BEARLYATK", 0))
						{
							Local_177.f_13 = 0;
							Local_156.f_13 = 0;
							Local_177.f_12 = MISC::GET_GAME_TIMER();
							Local_156.f_12 = MISC::GET_GAME_TIMER();
							func_374(113, 1);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "DST2_JEARLYATK", 0))
					{
						Local_177.f_13 = 0;
						Local_156.f_13 = 0;
						Local_177.f_12 = MISC::GET_GAME_TIMER();
						Local_156.f_12 = MISC::GET_GAME_TIMER();
						func_374(112, 1);
					}
				}
			}
		}
		if (!func_225(114))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "DST2_AATKSTART", 0))
				{
					iLocal_1106 = 0;
					iLocal_1105 = MISC::GET_GAME_TIMER() + 12500;
					func_374(114, 1);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_1118, 134217728))
		{
			if (!__LIB_0__::func_27(iLocal_1121, -2147483648))
			{
				if (iLocal_133 < 6)
				{
					if (!func_225(124))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1107) > 0)
							{
								if (__LIB_12__::func_876(uParam0, "DST2_ASOEND", 0))
								{
									iLocal_1108++;
									iLocal_1107 = (MISC::GET_GAME_TIMER() + 12500 + iLocal_1108 * 5500);
									if (iLocal_1108 == 3)
									{
										func_374(124, 1);
									}
								}
							}
						}
					}
				}
				else if (!func_225(117))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1105) > 0)
						{
							if (__LIB_12__::func_876(uParam0, "DST2ARTHCOMB", 0))
							{
								iLocal_1106++;
								iLocal_1108 = 0;
								iLocal_1107 = MISC::GET_GAME_TIMER() + 12500;
								iLocal_1105 = (MISC::GET_GAME_TIMER() + 12500 + iLocal_1106 * 4500);
								if (iLocal_1106 == 5)
								{
									func_374(117, 1);
								}
							}
						}
					}
				}
				if (!func_225(115))
				{
					if (!PED::IS_PED_INJURED(Local_156))
					{
						if (Local_156.f_3 == 22)
						{
							if ((MISC::GET_GAME_TIMER() - Local_156.f_12) > 0)
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2JOHCOMB", 0))
									{
										Local_156.f_13++;
										Local_156.f_12 = (MISC::GET_GAME_TIMER() + 14500 + Local_156.f_13 * 3500);
										if (Local_156.f_13 == 5)
										{
											func_374(115, 1);
										}
									}
								}
							}
						}
					}
				}
				if (!func_225(116))
				{
					if (!PED::IS_PED_INJURED(Local_177))
					{
						if (Local_177.f_3 == 22)
						{
							if ((MISC::GET_GAME_TIMER() - Local_177.f_12) > 0)
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DST2LENCOMB", 0))
									{
										Local_177.f_13++;
										Local_177.f_12 = (MISC::GET_GAME_TIMER() + 17500 + Local_177.f_13 * 5500);
										if (Local_177.f_13 == 5)
										{
											func_374(116, 1);
										}
									}
								}
							}
						}
					}
				}
				if (!func_225(73))
				{
					if (!PED::IS_PED_INJURED(Local_135))
					{
						if (Local_135.f_3 == 15)
						{
							if (Local_135.f_18 < 20f)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1111) > 0)
								{
									if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
									{
										if (__LIB_12__::func_876(uParam0, "DST2_KIE_ATTACK", 0))
										{
											iLocal_1112++;
											iLocal_1111 = (MISC::GET_GAME_TIMER() + 17500 + iLocal_1112 * 5500);
											if (iLocal_1112 == 5)
											{
												func_374(73, 1);
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
	}
	if (__LIB_0__::func_27(iLocal_1118, 134217728))
	{
		if (Local_156.f_3 == 14)
		{
			if (!__LIB_0__::func_27(Local_156.f_8, 256))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_156, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 1)
				{
					if (__LIB_3__::func_996(Local_156) && func_1345(&Local_156, Local_156.f_1))
					{
						if ((!__LIB_8__::func_684("DST2_JLOOT") && !__LIB_8__::func_684("DST2_BLOOT")) && !__LIB_8__::func_684("DST2_KIE_LOOT"))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Local_156, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2_JLOOT", 0))
									{
										__LIB_1__::func_683(&(Local_156.f_8), 256);
									}
								}
							}
						}
					}
				}
			}
		}
		if (Local_177.f_3 == 14)
		{
			if (!__LIB_0__::func_27(Local_177.f_8, 256))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_177, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 1)
				{
					if (__LIB_3__::func_996(Local_177) && func_1345(&Local_177, Local_177.f_1))
					{
						if ((!__LIB_8__::func_684("DST2_JLOOT") && !__LIB_8__::func_684("DST2_BLOOT")) && !__LIB_8__::func_684("DST2_KIE_LOOT"))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Local_177, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2_BLOOT", 0))
									{
										__LIB_1__::func_683(&(Local_177.f_8), 256);
									}
								}
							}
						}
					}
				}
			}
		}
		if (Local_135.f_3 == 14)
		{
			if (!__LIB_0__::func_27(Local_135.f_8, 256))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_135, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 1)
				{
					if (__LIB_3__::func_996(Local_135) && func_1345(&Local_135, Local_135.f_1))
					{
						if ((!__LIB_8__::func_684("DST2_JLOOT") && !__LIB_8__::func_684("DST2_BLOOT")) && !__LIB_8__::func_684("DST2_KIE_LOOT"))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (!AUDIO::_0x54B187F111D9C6F8(Local_135, 1))
								{
									if (__LIB_12__::func_876(uParam0, "DST2_KIE_LOOT", 0))
									{
										__LIB_1__::func_683(&(Local_135.f_8), 256);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_225(129))
		{
			if (Local_156.f_3 == 14 || Local_156.f_3 == 18)
			{
				if (MISC::GET_GAME_TIMER() - Local_156.f_12) > (12500 + Local_156.f_13 * 6500)
				{
					if (Local_156.f_18 < 10f)
					{
						if (!__LIB_3__::func_996(Local_156))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2GOCABINR", 0))
								{
									Local_156.f_13++;
									Local_156.f_12 = MISC::GET_GAME_TIMER();
									if (Local_156.f_13 == 2)
									{
										func_374(129, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_225(131))
		{
			if (Local_177.f_3 == 14 || Local_177.f_3 == 18)
			{
				if (MISC::GET_GAME_TIMER() - Local_177.f_12) > (15000 + Local_177.f_13 * 9500)
				{
					if (Local_177.f_18 < 10f)
					{
						if (!__LIB_3__::func_996(Local_177))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2GOCABINBR", 0))
								{
									Local_177.f_13++;
									Local_177.f_12 = MISC::GET_GAME_TIMER();
									if (Local_177.f_13 == 2)
									{
										func_374(131, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_225(76))
		{
			if (Local_135.f_3 == 14 || Local_135.f_3 == 18)
			{
				if (MISC::GET_GAME_TIMER() - Local_135.f_12) > (15000 + Local_135.f_13 * 9500)
				{
					if (Local_135.f_18 < 10f)
					{
						if (!__LIB_3__::func_996(Local_135))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_KIE_CABIN", 0))
								{
									Local_135.f_13++;
									Local_135.f_12 = MISC::GET_GAME_TIMER();
									if (Local_135.f_13 == 2)
									{
										func_374(76, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_225(75))
		{
			if (Local_135.f_3 == 14 || Local_135.f_3 == 18)
			{
				if (MISC::GET_GAME_TIMER() - iLocal_1109) > (12500 + iLocal_1110 * 7500)
				{
					if (Local_135.f_18 < 25f)
					{
						if (!__LIB_3__::func_996(Local_135))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DST2_KIE_AFTER", 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_135, Global_35, 5000, 2048, 51, 0);
									iLocal_1110++;
									iLocal_1109 = MISC::GET_GAME_TIMER();
									if (iLocal_1110 == 4)
									{
										func_374(75, 1);
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

void func_852()
{
	if (!__LIB_0__::func_27(iLocal_1119, 8))
	{
		if (!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			if (Local_177.f_3 == 11 && Local_177.f_7 == 0)
			{
				__LIB_0__::func_19(&uLocal_128, 5);
				__LIB_1__::func_683(&iLocal_1119, 8);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1119, 16))
	{
		if (!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_240[0 /*21*/]) && ENTITY::DOES_ENTITY_EXIST(Local_240[1 /*21*/])) && ENTITY::DOES_ENTITY_EXIST(Local_240[2 /*21*/]))
			{
				if ((ENTITY::IS_ENTITY_DEAD(Local_240[0 /*21*/]) && ENTITY::IS_ENTITY_DEAD(Local_240[1 /*21*/])) && ENTITY::IS_ENTITY_DEAD(Local_240[2 /*21*/]))
				{
					__LIB_0__::func_19(&uLocal_128, 6);
					__LIB_1__::func_683(&iLocal_1119, 16);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1119, 32))
	{
		if (!__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			if (Local_156.f_3 == 11 && Local_156.f_7 == 4)
			{
				__LIB_0__::func_19(&uLocal_128, 7);
				__LIB_1__::func_683(&iLocal_1119, 32);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1119, 64))
	{
		if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			if (__LIB_0__::func_27(iLocal_1119, 32) || __LIB_1__::func_205(Global_35, iLocal_1041[15], 1, 0))
			{
				__LIB_0__::func_19(&uLocal_128, 8);
				__LIB_1__::func_683(&iLocal_1119, 64);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1119, 128))
	{
		if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */))
		{
			__LIB_0__::func_19(&uLocal_128, 9);
			__LIB_1__::func_683(&iLocal_1119, 128);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1119, 256))
	{
		if (__LIB_0__::func_27(iLocal_1121, 1073741824 /* Float: 2f */) && __LIB_0__::func_27(iLocal_1121, -2147483648))
		{
			__LIB_0__::func_19(&uLocal_128, 10);
			__LIB_1__::func_683(&iLocal_1119, 256);
		}
	}
}

void func_855()
{
	struct<6> Var0;
	if (!__LIB_0__::func_27(iLocal_1118, 16384))
	{
		if (!__LIB_0__::func_27(iLocal_1118, 4096) && !__LIB_0__::func_27(iLocal_1118, 8192))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1041[22], true, 0))
			{
				MISC::_0x49F3241C28EBBFBC(0);
				Var0 = joaat("CURRENCY_CASH");
				Var0.f_3 = 6;
				Var0.f_1 = 1f;
				Var0.f_4 = 0;
				Var0.f_5 = 0;
				MISC::_0x183672FE838A661B(&Var0);
				MISC::_0x38C0C9CAE1544500(joaat("REWARD_BILLSTACK"));
				__LIB_1__::func_683(&iLocal_1118, 16384);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1041[22], true, 0))
	{
		if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_BILLSTACK")))
		{
			MISC::_0x154340E87D8CC178(joaat("REWARD_BILLSTACK"));
		}
		__LIB_1__::func_681(&iLocal_1118, 16384);
	}
}

void func_856()
{
	if (!__LIB_0__::func_27(iLocal_1119, 512))
	{
		if (__LIB_0__::func_27(iLocal_1118, 8192))
		{
			__LIB_0__::func_19(&uLocal_128, 12);
			__LIB_1__::func_683(&iLocal_1119, 512);
		}
	}
}

void func_857(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	if (!__LIB_0__::func_266(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_1041[16]), 25f, 1, 1))
	{
		if (!__LIB_0__::func_27(iLocal_1118, 4))
		{
			__LIB_0__::func_325(&iLocal_1038);
			func_374(8, 0);
			func_374(7, 0);
			func_374(9, 0);
			func_374(10, 0);
			__LIB_1__::func_681(&iLocal_1118, 2);
			__LIB_1__::func_683(&iLocal_1118, 4);
		}
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_1041[16], 1, 0))
	{
		if (__LIB_0__::func_27(iLocal_1118, 4))
		{
			func_374(8, 0);
			func_374(7, 0);
			func_374(9, 0);
			func_374(10, 0);
			__LIB_1__::func_681(&iLocal_1118, 2);
			__LIB_1__::func_681(&iLocal_1118, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1118, 4))
	{
		if (!__LIB_0__::func_27(iLocal_1118, 2))
		{
			__LIB_1__::func_561(&uLocal_989);
			__LIB_1__::func_561(&uLocal_1001);
			func_374(8, 0);
			func_374(7, 0);
			func_374(9, 0);
			func_374(10, 0);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1118, 2);
		}
		if (!__LIB_0__::func_27(iLocal_1118, 8192) && !__LIB_0__::func_27(iLocal_1115, 4))
		{
			if (!func_225(8))
			{
				if (!__LIB_0__::func_899(&uLocal_989))
				{
					__LIB_13__::func_89(uParam0, "RDST2_O_SEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_1038))
					{
						iLocal_1038 = __LIB_5__::func_554(408396114, iLocal_1041[16], 1);
					}
					__LIB_2__::func_259(&uLocal_989);
					__LIB_2__::func_259(&uLocal_1001);
				}
				else
				{
					if (!func_225(8))
					{
						if (__LIB_5__::func_352("RDST2_O_SEARCH"))
						{
							func_374(8, 1);
						}
					}
					if (!func_225(8) && !__LIB_5__::func_352("RDST2_O_SEARCH"))
					{
						iVar0 = 1;
						if (!__LIB_0__::func_27(iLocal_1118, 4096))
						{
							if ((!func_1385(Global_35) || __LIB_1__::func_583(&uLocal_989) > 12f) || iVar0 == 1)
							{
								__LIB_12__::func_883(uParam0, "RDST2_O_SEARCH", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(8, 1);
							}
							if ((func_1385(Global_35) && !PED::IS_PED_INJURED(Global_35)) && PED::IS_PED_USING_ANY_SCENARIO(Global_35))
							{
								__LIB_2__::func_259(&uLocal_989);
							}
						}
					}
				}
			}
		}
		else if (!func_225(9) || !func_225(10))
		{
			if (!__LIB_0__::func_899(&uLocal_989))
			{
				if (__LIB_0__::func_27(iLocal_1118, 8192))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 2) && !__LIB_0__::func_27(iLocal_1115, 4))
					{
						__LIB_0__::func_325(&iLocal_1038);
						__LIB_13__::func_89(uParam0, "RDST2_O_SHOTGUN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						if (!MAP::DOES_BLIP_EXIST(iLocal_1038))
						{
							iLocal_1038 = MAP::_BLIP_ADD_FOR_COORD(-1383961727, -59.1f, 1239.7f, 171.2f);
							MAP::_BLIP_SET_MODIFIER(iLocal_1038, -401963276);
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_1115, 4))
				{
					__LIB_0__::func_325(&iLocal_1038);
					__LIB_13__::func_89(uParam0, "RDST2_O_CHIMNEY", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_1038))
					{
						iLocal_1038 = MAP::_BLIP_ADD_FOR_COORD(408396114, -59.1f, 1239.7f, 171.2f);
						MAP::_BLIP_SET_MODIFIER(iLocal_1038, -401963276);
					}
				}
				__LIB_2__::func_259(&uLocal_989);
				__LIB_2__::func_259(&uLocal_1001);
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_1118, 8192))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 2) && !__LIB_0__::func_27(iLocal_1115, 4))
					{
						if (!func_225(10))
						{
							if (__LIB_5__::func_352("RDST2_O_SHOTGUN"))
							{
								func_374(10, 1);
							}
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_1115, 4))
				{
					if (!func_225(9))
					{
						if (__LIB_5__::func_352("RDST2_O_CHIMNEY"))
						{
							func_374(9, 1);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1118, 8192))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 2) && !__LIB_0__::func_27(iLocal_1115, 4))
					{
						if (!func_225(10) && !__LIB_5__::func_352("RDST2_O_SHOTGUN"))
						{
							iVar0 = 1;
							if ((iVar0 == 1 || !func_1385(Global_35)) || __LIB_1__::func_583(&uLocal_989) > 12f)
							{
								__LIB_12__::func_883(uParam0, "RDST2_O_SHOTGUN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_374(10, 1);
							}
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_1115, 4))
				{
					if (!func_225(9) && !__LIB_5__::func_352("RDST2_O_CHIMNEY"))
					{
						iVar0 = 1;
						if ((iVar0 == 1 || !func_1385(Global_35)) || __LIB_1__::func_583(&uLocal_989) > 12f)
						{
							__LIB_12__::func_883(uParam0, "RDST2_O_CHIMNEY", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_374(9, 1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_1118, 2))
		{
			__LIB_1__::func_561(&uLocal_989);
			__LIB_1__::func_561(&uLocal_1001);
			func_374(8, 0);
			func_374(7, 0);
			func_374(9, 0);
			func_374(10, 0);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1118, 2);
		}
		if (!func_225(7))
		{
			if (!__LIB_0__::func_899(&uLocal_989))
			{
				__LIB_13__::func_89(uParam0, "RDST2_O_RETURN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_1038))
				{
					iLocal_1038 = __LIB_5__::func_554(408396114, iLocal_1041[16], 1);
				}
				__LIB_2__::func_259(&uLocal_989);
				__LIB_2__::func_259(&uLocal_1001);
			}
			else
			{
				if (!func_225(7))
				{
					if (__LIB_5__::func_352("RDST2_O_RETURN"))
					{
						func_374(7, 1);
					}
				}
				if (!func_225(7) && !__LIB_5__::func_352("RDST2_O_RETURN"))
				{
					__LIB_12__::func_883(uParam0, "RDST2_O_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_374(7, 1);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1118, 4096))
	{
		if (__LIB_13__::func_496(Global_35, joaat("RANSACK_CHIMNEY_WITH_MANTLE_GENERIC_01")))
		{
			__LIB_2__::func_259(&uLocal_995);
			__LIB_0__::func_325(&iLocal_1038);
			UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1118, 4096);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1118, 8192))
	{
		if (__LIB_13__::func_496(Global_35, joaat("RANSACK_CHIMNEY_WITH_MANTLE_GENERIC_01")))
		{
			if (!func_225(133))
			{
				if (__LIB_0__::func_899(&uLocal_995) && __LIB_1__::func_583(&uLocal_995) > 5f)
				{
					if (__LIB_12__::func_876(uParam0, "DST2CASHB", 0))
					{
						__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "FEED_MONEY_EARN", 60000), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
						func_374(133, 1);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_561(&uLocal_989);
			func_374(8, 1);
			func_374(9, 1);
			func_374(10, 0);
			__LIB_1__::func_683(&iLocal_1118, 8192);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1115, 4))
	{
		if (__LIB_0__::func_27(iLocal_1115, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
			if ((__LIB_4__::func_365() && __LIB_0__::func_154(__LIB_11__::func_805())) && __LIB_11__::func_805() == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				__LIB_1__::func_978(1);
			}
			else
			{
				__LIB_1__::func_978(0);
			}
			if (!__LIB_0__::func_27(iLocal_1115, 2))
			{
				UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_10__::func_731();
				__LIB_3__::func_834(4);
				Var1 = 1;
				Var1.f_1 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
				HUD::_0x8A59D44189AF2BC5(&Var1, -1001145251);
				__LIB_1__::func_683(&iLocal_1115, 2);
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_1115, 2))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 16384))
					{
						if (__LIB_0__::func_27(iLocal_1115, 4096))
						{
							if (!__LIB_0__::func_27(iLocal_1115, 8192))
							{
								UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
								__LIB_3__::func_760();
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_1__::func_683(&iLocal_1115, 8192);
							}
							else if (!func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
							{
								__LIB_1__::func_561(&uLocal_989);
								func_374(8, 1);
								func_374(10, 1);
								func_374(9, 0);
								HUD::_0x160825DADF1B04B3();
								__LIB_1__::func_681(&iLocal_1115, 2);
								__LIB_1__::func_978(1);
								__LIB_1__::func_683(&iLocal_1115, 4);
								__LIB_1__::func_683(&iLocal_1115, 16384);
							}
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1115, 2))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 4096))
					{
						if ((__LIB_0__::func_27(iLocal_1115, 1024) && __LIB_0__::func_27(iLocal_1115, 256)) && __LIB_0__::func_27(iLocal_1115, 64))
						{
							if (!__LIB_0__::func_27(iLocal_1115, 2048))
							{
								__LIB_3__::func_787(3);
								__LIB_12__::func_883(uParam0, "RDST2_B_WEAPON_3", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_1__::func_683(&iLocal_1115, 2048);
							}
							else if (func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1408485018))
							{
								UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
								__LIB_3__::func_760();
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_1__::func_683(&iLocal_1115, 4096);
							}
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1115, 2))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 4096))
					{
						if (!__LIB_0__::func_27(iLocal_1115, 1024))
						{
							if (__LIB_0__::func_27(iLocal_1115, 256) && __LIB_0__::func_27(iLocal_1115, 64))
							{
								if (!__LIB_0__::func_27(iLocal_1115, 512))
								{
									__LIB_3__::func_787(2);
									__LIB_12__::func_883(uParam0, "RDST2_B_WEAPON_2", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
									__LIB_1__::func_683(&iLocal_1115, 512);
								}
								else if (func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
								{
									__LIB_1__::func_683(&iLocal_1115, 1024);
								}
							}
						}
						else if (func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
						{
						}
						else
						{
							__LIB_1__::func_681(&iLocal_1115, 512);
							__LIB_1__::func_681(&iLocal_1115, 1024);
							__LIB_1__::func_681(&iLocal_1115, 2048);
							__LIB_1__::func_681(&iLocal_1115, 4096);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1115, 2))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 4096))
					{
						if (!__LIB_0__::func_27(iLocal_1115, 256))
						{
							if (__LIB_0__::func_27(iLocal_1115, 64))
							{
								if (!__LIB_0__::func_27(iLocal_1115, 128))
								{
									__LIB_3__::func_787(1);
									__LIB_12__::func_883(uParam0, "RDST2_B_WEAPON_1", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
									__LIB_1__::func_683(&iLocal_1115, 128);
								}
								else if (((__LIB_4__::func_365() && __LIB_0__::func_154(__LIB_11__::func_805())) && __LIB_11__::func_805() == joaat("WEAPON_SHOTGUN_DOUBLEBARREL")) || func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
								{
									__LIB_1__::func_683(&iLocal_1115, 256);
								}
							}
						}
						else if (((__LIB_4__::func_365() && __LIB_0__::func_154(__LIB_11__::func_805())) && __LIB_11__::func_805() == joaat("WEAPON_SHOTGUN_DOUBLEBARREL")) || func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
						{
						}
						else
						{
							__LIB_1__::func_681(&iLocal_1115, 128);
							__LIB_1__::func_681(&iLocal_1115, 256);
							__LIB_1__::func_681(&iLocal_1115, 512);
							__LIB_1__::func_681(&iLocal_1115, 1024);
							__LIB_1__::func_681(&iLocal_1115, 2048);
							__LIB_1__::func_681(&iLocal_1115, 4096);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_1115, 2))
				{
					if (!__LIB_0__::func_27(iLocal_1115, 4096))
					{
						if (!__LIB_0__::func_27(iLocal_1115, 64))
						{
							if (!__LIB_0__::func_27(iLocal_1115, 32))
							{
								__LIB_3__::func_787(0);
								__LIB_12__::func_883(uParam0, "RDST2_B_WEAPON_0", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_1__::func_683(&iLocal_1115, 32);
							}
							else if (__LIB_4__::func_365() || func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
							{
								__LIB_1__::func_683(&iLocal_1115, 64);
							}
						}
						else if (__LIB_4__::func_365() || func_1392(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
						{
						}
						else
						{
							__LIB_1__::func_681(&iLocal_1115, 32);
							__LIB_1__::func_681(&iLocal_1115, 64);
							__LIB_1__::func_681(&iLocal_1115, 128);
							__LIB_1__::func_681(&iLocal_1115, 256);
							__LIB_1__::func_681(&iLocal_1115, 512);
							__LIB_1__::func_681(&iLocal_1115, 1024);
							__LIB_1__::func_681(&iLocal_1115, 2048);
							__LIB_1__::func_681(&iLocal_1115, 4096);
						}
					}
				}
			}
		}
	}
}

bool func_899(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
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
				func_899(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1434(28);
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			func_1443(iParam0);
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
			__LIB_12__::func_629(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_630(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_631(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_632(iParam0);
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
			__LIB_12__::func_633(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, 0, 0, 0);
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
						func_899(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_899(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_899(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_899(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_899(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_899(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_899(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1434(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_1269(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_1269(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_899(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_899(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1481(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1482(iParam0);
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
				func_899(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_901()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1495();
	func_1496();
	func_1497();
	func_1498();
	func_1499();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_902(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1502(iParam0, 1, 1, -142743235, 1);
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
	func_1509(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1509(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
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

int func_909(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_1269(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_936()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1526(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_992(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_720(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

int func_1039(var uParam0, int iParam1, int iParam2)
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
		return func_1039(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1048(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*21*/]))
		{
			if ((((((!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*21*/]) && !PED::IS_PED_INJURED((*iParam0)[iVar0 /*21*/])) && !PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar0 /*21*/], true)) && !PED::IS_PED_FATALLY_INJURED((*iParam0)[iVar0 /*21*/])) && !__LIB_0__::func_27((iParam0[iVar0 /*21*/])->f_8, 1)) && !__LIB_0__::func_27((iParam0[iVar0 /*21*/])->f_8, 4)) && !__LIB_0__::func_27((iParam0[iVar0 /*21*/])->f_8, 16))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1049(int* iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((((((!PED::IS_PED_INJURED(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && !PED::IS_PED_DEAD_OR_DYING(*iParam0, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam0)) && !PED::GET_PED_CONFIG_FLAG(*iParam0, 11, false)) && !PED::GET_PED_CONFIG_FLAG(*iParam0, 9, false)) && !PED::GET_PED_CONFIG_FLAG(*iParam0, 10, false))
		{
			if (!MAP::DOES_BLIP_EXIST(iParam0->f_2))
			{
				iParam0->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam0);
			}
			if (MAP::DOES_BLIP_EXIST(iParam0->f_2))
			{
				if (iParam1 == 1)
				{
					MAP::_BLIP_SET_MODIFIER(iParam0->f_2, -662251075);
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(iParam0->f_2, -1034486097);
				}
			}
		}
	}
}

bool func_1050(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	if (!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(iParam2))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true, false) };
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_43800, false)) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false)))
		{
			return false;
		}
		if (PED::IS_PED_BEING_STEALTH_KILLED(*iParam1))
		{
			return false;
		}
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1376, false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_1376, "pbl_Action_John_Kills_Enemy")) && ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_1376, "enemy", false) == *iParam1)
		{
			return false;
		}
		if (__LIB_9__::func_716(*iParam1, &uLocal_818, &uLocal_846, 0))
		{
			return true;
		}
		if (__LIB_13__::func_262(*iParam1, 0, &uLocal_818, &uLocal_846, 0, 0))
		{
			return true;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, iParam2, 1, 1))
		{
			return true;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, Local_177, 1, 1))
		{
			return true;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, Local_156, 1, 1))
		{
			return true;
		}
		fVar2 = 25f;
		if (*iParam1 == Local_326[5 /*21*/] || *iParam1 == Local_304[0 /*21*/])
		{
			fVar2 = 50f;
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam1, false, false), fVar2, true))
		{
			return true;
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam1, false, false), fVar2, false))
		{
			return true;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*iParam1, false, false), 65f))
		{
			return true;
		}
		if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_1041[15]))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam1, iParam2))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_MODEL(*iParam1, joaat("G_M_M_UNIDUSTER_05")) || ENTITY::IS_ENTITY_TOUCHING_MODEL(*iParam1, joaat("RCSP_ODRISCOLLS2_FEMALES_01")))
		{
			if ((ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, iLocal_1377) || *iParam1 == Local_326[4 /*21*/]) || *iParam1 == Local_538[0 /*21*/])
			{
			}
			else if (((*iParam1 == Local_240[0 /*21*/] || *iParam1 == Local_240[1 /*21*/]) || *iParam1 == Local_240[2 /*21*/]) && (((ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam1, Local_240[0 /*21*/]) && !PED::IS_PED_INJURED(Local_240[0 /*21*/])) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam1, Local_240[1 /*21*/]) && !PED::IS_PED_INJURED(Local_240[1 /*21*/]))) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam1, Local_240[2 /*21*/]) && !PED::IS_PED_INJURED(Local_240[2 /*21*/]))))
			{
			}
			else
			{
				return true;
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar3, joaat("WEAPON_BOW"), 2.5f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar3, joaat("WEAPON_BOW_IMPROVED"), 2.5f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, joaat("WEAPON_BOW"), 0) && !WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, joaat("WEAPON_BOW_IMPROVED"), 0))
			{
				if (!__LIB_0__::func_27(iParam1->f_8, 2048))
				{
					iParam1->f_11 = MISC::GET_GAME_TIMER();
					__LIB_1__::func_683(&(iParam1->f_8), 2048);
				}
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar3, joaat("WEAPON_THROWN_THROWING_KNIVES"), 2.5f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, joaat("WEAPON_THROWN_THROWING_KNIVES"), 0))
			{
				if (!__LIB_0__::func_27(iParam1->f_8, 2048))
				{
					iParam1->f_11 = MISC::GET_GAME_TIMER();
					__LIB_1__::func_683(&(iParam1->f_8), 2048);
				}
			}
		}
		if (__LIB_0__::func_27(iParam1->f_8, 2048))
		{
			if (iParam1->f_11 != 0 && (MISC::GET_GAME_TIMER() - iParam1->f_11) > 250)
			{
				return true;
			}
		}
		if (PED::IS_PED_A_PLAYER(iParam2))
		{
			fVar1 = 6.5f;
			if (iParam1->f_18 < fVar1)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam2))
				{
					return true;
				}
			}
			fVar1 = 25f;
			if (iParam1->f_18 < fVar1)
			{
				if (__LIB_2__::func_385(iParam2))
				{
					return true;
				}
			}
			fVar1 = 35f;
			if (iParam1->f_18 < fVar1)
			{
				if (PED::IS_PED_ON_MOUNT(iParam2))
				{
					if (((TASK::IS_PED_WALKING(PED::GET_MOUNT(iParam2)) || TASK::IS_PED_RUNNING(PED::GET_MOUNT(iParam2))) || TASK::IS_PED_SPRINTING(PED::GET_MOUNT(iParam2))) || AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(PED::GET_MOUNT(iParam2)))
					{
						return true;
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_815))
			{
				if (__LIB_0__::func_48(*iParam1, iLocal_815, 15f, 1))
				{
					if (((TASK::IS_PED_WALKING(iLocal_815) || TASK::IS_PED_RUNNING(iLocal_815)) || TASK::IS_PED_SPRINTING(iLocal_815)) || AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(iLocal_815))
					{
						return true;
					}
				}
			}
			if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam2))
			{
				return true;
			}
		}
		if (PED::IS_PED_IN_COMBAT(*iParam1, 0) || PED::_0x77525BBF433F2CD6(*iParam1))
		{
			return true;
		}
		if (iParam3 == 1)
		{
		}
		if (iParam4 == 1)
		{
			if (!__LIB_0__::func_27(iParam1->f_8, 4096))
			{
				iVar0 = 0;
				while (iVar0 < Local_240)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_240[iVar0 /*21*/]))
					{
						if (__LIB_0__::func_27(Local_240[iVar0 /*21*/].f_8, 2097152))
						{
							if ((PED::IS_PED_INJURED(Local_240[iVar0 /*21*/]) || ENTITY::IS_ENTITY_DEAD(Local_240[iVar0 /*21*/])) || PED::IS_PED_DEAD_OR_DYING(Local_240[iVar0 /*21*/], true))
							{
								iParam1->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1501));
								__LIB_1__::func_683(&(iParam1->f_8), 4096);
							}
							if (PED::IS_PED_BEING_STEALTH_KILLED(Local_240[iVar0 /*21*/]) || PED::IS_PED_PERFORMING_MELEE_ACTION(Local_240[iVar0 /*21*/], 32768, 0))
							{
								iParam1->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1501));
								__LIB_1__::func_683(&(iParam1->f_8), 4096);
							}
							if ((PED::_IS_PED_LASSOED(Local_240[iVar0 /*21*/]) || PED::_IS_PED_HOGTIED(Local_240[iVar0 /*21*/])) || ENTITY::_0x61914209C36EFDDB(Local_240[iVar0 /*21*/]) == 1)
							{
								iParam1->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1501));
								__LIB_1__::func_683(&(iParam1->f_8), 4096);
							}
						}
						if ((!PED::IS_PED_INJURED(Local_240[iVar0 /*21*/]) && !ENTITY::IS_ENTITY_DEAD(Local_240[iVar0 /*21*/])) && !PED::IS_PED_DEAD_OR_DYING(Local_240[iVar0 /*21*/], true))
						{
							if ((PED::_IS_PED_LASSOED(Local_240[iVar0 /*21*/]) || PED::_IS_PED_HOGTIED(Local_240[iVar0 /*21*/])) || ENTITY::_0x61914209C36EFDDB(Local_240[iVar0 /*21*/]) == 1)
							{
								iParam1->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1501));
								__LIB_1__::func_683(&(iParam1->f_8), 4096);
							}
							if (__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 1024) && AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_240[iVar0 /*21*/]))
							{
								iParam1->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1501));
								__LIB_1__::func_683(&(iParam1->f_8), 4096);
							}
						}
					}
					iVar0++;
				}
			}
			if (__LIB_0__::func_27(iParam1->f_8, 4096))
			{
				if (iParam1->f_11 != 0 && (MISC::GET_GAME_TIMER() - iParam1->f_11) > 0)
				{
					return true;
				}
			}
		}
		if (iParam5 == 0)
		{
			if (__LIB_1__::func_205(Local_156, iLocal_1041[26], 1, 0) || __LIB_1__::func_205(Local_177, iLocal_1041[26], 1, 0))
			{
				return true;
			}
		}
		if (__LIB_1__::func_205(Global_35, iLocal_1041[25], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1051(int* iParam0)
{
	if (((((((ENTITY::IS_ENTITY_DEAD(*iParam0) || PED::IS_PED_INJURED(*iParam0)) || PED::IS_PED_DEAD_OR_DYING(*iParam0, true)) || PED::IS_PED_FATALLY_INJURED(*iParam0)) || __LIB_0__::func_27(iParam0->f_8, 1)) || __LIB_0__::func_27(iParam0->f_8, 4)) || __LIB_0__::func_27(iParam0->f_8, 16)) || __LIB_0__::func_27(iParam0->f_8, 32))
	{
		if (__LIB_0__::func_27(iParam0->f_8, 4))
		{
		}
		if (__LIB_0__::func_27(iParam0->f_8, 16))
		{
		}
		if (__LIB_0__::func_27(iParam0->f_8, 32))
		{
		}
		return true;
	}
	return false;
}

void func_1053(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::REGISTER_TARGET(iParam0, Global_35, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_156) && !ENTITY::IS_ENTITY_DEAD(Local_156))
		{
			PED::REGISTER_TARGET(iParam0, Local_156, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_177) && !ENTITY::IS_ENTITY_DEAD(Local_177))
		{
			PED::REGISTER_TARGET(iParam0, Local_177, 1);
		}
	}
}

void func_1054(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				TASK::_0x3923EC958249657D(*iParam0, Global_35, -1f);
			}
			if (!PED::IS_PED_INJURED(Local_177))
			{
				TASK::_0x3923EC958249657D(*iParam0, Local_177, -1f);
			}
			if (!PED::IS_PED_INJURED(Local_156))
			{
				TASK::_0x3923EC958249657D(*iParam0, Local_156, -1f);
			}
			if (!PED::IS_PED_INJURED(Local_135))
			{
				TASK::_0x3923EC958249657D(*iParam0, Local_135, -1f);
			}
			TASK::_0xE8F1A5B4CED3725A(*iParam0, vLocal_15, -1f);
		}
	}
}

void func_1055(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1, false);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, false);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1048576, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 0, false);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 32768, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 14, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 58, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 68, true);
		}
	}
}

void func_1056(int* iParam0, int iParam1, int iParam2)
{
	if (!PED::_IS_PED_HOGTIED(*iParam0))
	{
		if ((MISC::GET_GAME_TIMER() - iParam0->f_10) > 0)
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
			{
				if (PED::IS_PED_MALE(*iParam0))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							__LIB_1__::func_265(*iParam0, "COMBAT_FLEE_CALL_OUT", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
							break;
						case 1:
							__LIB_1__::func_265(*iParam0, "COMBAT_FLEE", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
							break;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							__LIB_1__::func_265(*iParam0, "PANIC_COMMUNICATE", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
							break;
						case 1:
							__LIB_1__::func_265(*iParam0, "SCREAM_TERROR", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
							break;
						case 2:
							__LIB_1__::func_265(*iParam0, "PANIC_HELP", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
							break;
					}
				}
			}
			else
			{
				iParam0->f_10 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2));
			}
		}
	}
}

int func_1057(int* iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (__LIB_9__::func_225(Global_35, *iParam0))
			{
				if (PED::GET_PED_CONFIG_FLAG(*iParam0, 9, false) == 1)
				{
					return 4;
				}
				else
				{
					iVar0 = PED::GET_PED_CAUSE_OF_DEATH(*iParam0);
					if (WEAPON::_IS_WEAPON_BOW(iVar0) || iVar0 == joaat("WEAPON_THROWN_THROWING_KNIVES"))
					{
						if ((iParam0->f_3 != 22 && iParam0->f_3 != 20) && iParam0->f_3 != 21)
						{
						}
						else
						{
							return 3;
						}
					}
					else
					{
						return 3;
					}
				}
			}
			else if (__LIB_9__::func_225(Local_156, *iParam0))
			{
				return 1;
			}
			else if (__LIB_9__::func_225(Local_177, *iParam0))
			{
				return 2;
			}
			else
			{
				return 6;
			}
		}
	}
	return 0;
}

void func_1058(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5)
{
	switch (iParam0)
	{
		case 1:
			*uParam1++;
			break;
		case 2:
			*uParam2++;
			break;
		case 3:
			*uParam3++;
			break;
		case 4:
			*iParam4++;
			break;
		case 5:
			*uParam5++;
			break;
	}
}

bool func_1059(var uParam0)
{
	if ((((ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::IS_PED_INJURED(*uParam0)) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true)) || PED::IS_PED_FATALLY_INJURED(*uParam0)) || __LIB_0__::func_27(uParam0->f_8, 1))
	{
		return true;
	}
	return false;
}

int func_1218(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1762(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

bool func_1222(vector3 vParam0)
{
	if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f) && !__LIB_0__::func_266(Global_35, vParam0, 10f, 1, 1))
	{
		return true;
	}
	return false;
}

void func_1252(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_1269(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1253(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1783();
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

void func_1255(var uParam0)
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
			func_720(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_720(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1256(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_720(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1269(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1804(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1336()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1379) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1379, true, false))
	{
		if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_135)) && !PED::IS_PED_INJURED(Local_156))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_135, "RC_DUSTERS_21_KIERAN", 0f, 0f, 0f, 0, "rdst21_icmp_kieran_wnt");
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1379, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1379, "JOHN", Local_156, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1379, "KIERAN", Local_135, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_1379);
		}
	}
}

bool func_1338(int iParam0, vector3 vParam1, int iParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam4))
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam4, true, false), vParam1, true) + fParam5);
	}
	return false;
}

int func_1343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, 28, -1);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]) && ENTITY::IS_ENTITY_DEAD(iVar0[iVar17]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == joaat("REL_PLAYER_ENEMY"))
				{
					if ((!FIRE::IS_ENTITY_ON_FIRE(iVar0[iVar17]) && !ENTITY::_0x8DE41E9902E85756(iVar0[iVar17])) && !ENTITY::DOES_ENTITY_EXIST(ENTITY::_0xEF2D9ED7CE684F08(iVar0[iVar17])))
					{
						if (PED::_0xE4C11F104620DDCE(iVar0[iVar17], 6) == 1)
						{
							if (!__LIB_0__::func_266(iParam1, ENTITY::GET_ENTITY_COORDS(iVar0[iVar17], true, false), 3f, 1, 1) && !__LIB_0__::func_266(iParam2, ENTITY::GET_ENTITY_COORDS(iVar0[iVar17], true, false), 3f, 1, 1))
							{
								if (iVar0[iVar17] != iParam3 && iVar0[iVar17] != iParam4)
								{
									return iVar0[iVar17];
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

bool func_1345(int iParam0, int iParam1)
{
	var uVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (ENTITY::_0xEF2D9ED7CE684F08(iParam1) == *iParam0)
			{
				if (PED::_0x5463C962BC7777C3(*iParam0, 0, &uVar0, 1, 1) == 7)
				{
					return true;
				}
				if (PED::_0x5463C962BC7777C3(*iParam0, 2, &uVar0, 1, 1) == 7)
				{
					return true;
				}
				if (PED::_0x5463C962BC7777C3(*iParam0, 1, &uVar0, 1, 1) == 7)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1357()
{
	return (((!PED::IS_PED_INJURED(Local_304[0 /*21*/]) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1376)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1376, false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_1376, "pbl_Action_John_Kills_Enemy"));
}

void func_1359(int iParam0, bool bParam1, int iParam2, float fParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		PED::SET_PED_ACCURACY(*iParam0, iParam2);
		PED::SET_COMBAT_FLOAT(*iParam0, 6, fParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 27, bParam1);
	}
}

void func_1360(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_272(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (!PED::IS_PED_INJURED((*iParam1)[iVar0 /*21*/]))
			{
				PED::REGISTER_TARGET(iParam0, (*iParam1)[iVar0 /*21*/], 1);
			}
			iVar0++;
		}
	}
}

void func_1362(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_8, 131072))
	{
		if (!__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 4194304))
		{
			if (!PED::IS_PED_INJURED(Local_240[0 /*21*/]) && __LIB_0__::func_27(Local_240[0 /*21*/].f_8, 8))
			{
				if (!__LIB_0__::func_48(Global_35, Local_240[0 /*21*/], 2f, 1))
				{
					__LIB_1__::func_683(&(Local_240[0 /*21*/].f_8), 4194304);
				}
				else
				{
					__LIB_1__::func_683(&(iParam0->f_8), 131072);
				}
			}
		}
		if (__LIB_0__::func_27(Local_240[0 /*21*/].f_8, 4194304))
		{
			if (__LIB_0__::func_48(*iParam0, Local_240[0 /*21*/], 12.5f, 1))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_MELEE_KNIFE_BILL"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(*iParam0, 1, 1, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				TASK::TASK_MELEE(*iParam0, Local_240[0 /*21*/], joaat("AR_STEALTH_KILL"), 0, 1, (1.5f * 1.25f), 0, -1082130432 /* Float: -1f */);
			}
			else if (__LIB_0__::func_48(*iParam0, Local_240[0 /*21*/], 25f, 1))
			{
				__LIB_4__::func_7(*iParam0, joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_THROWN_THROWING_KNIVES"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(*iParam0, 1, 1, 0, 0);
				func_1359(iParam0, 1, 100, 1f);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 30, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 31, false);
				PED::REGISTER_TARGET(*iParam0, Local_240[0 /*21*/], 1);
				TASK::TASK_COMBAT_PED(*iParam0, Local_240[0 /*21*/], 16777216, 0);
			}
			__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
			__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
			__LIB_8__::func_771(*iParam0, 1, 1, 0);
			__LIB_8__::func_771(Local_240[0 /*21*/], 0, 1, 0);
			__LIB_1__::func_683(&(iParam0->f_8), 131072);
		}
	}
}

bool func_1363(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				PLAYER::_0x3DAABE78A23694BC(PLAYER::PLAYER_ID(), &vVar3);
				if (__LIB_1__::func_410(vVar3, vVar0, fParam1, 1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	return false;
}

void func_1364(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_27(iParam0->f_8, 131072))
	{
		if (!__LIB_0__::func_27(iLocal_1120, 64) && !__LIB_0__::func_27(iLocal_1120, 128))
		{
			if (!__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 4194304) && !__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 4194304))
			{
				if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]) || !PED::IS_PED_INJURED(Local_240[2 /*21*/]))
				{
					if ((PED::IS_PED_BEING_STEALTH_KILLED(Local_240[1 /*21*/]) || PED::IS_PED_PERFORMING_MELEE_ACTION(Local_240[1 /*21*/], 32768, 0)) || __LIB_9__::func_225(Global_35, Local_240[1 /*21*/]))
					{
						__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 4194304);
					}
					else if ((PED::IS_PED_BEING_STEALTH_KILLED(Local_240[2 /*21*/]) || PED::IS_PED_PERFORMING_MELEE_ACTION(Local_240[2 /*21*/], 32768, 0)) || __LIB_9__::func_225(Global_35, Local_240[2 /*21*/]))
					{
						__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 4194304);
					}
					else if ((!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && __LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8)) && !__LIB_0__::func_48(Global_35, Local_240[1 /*21*/], 1f, 1))
					{
						__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 4194304);
					}
					else if ((!PED::IS_PED_INJURED(Local_240[2 /*21*/]) && __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8)) && !__LIB_0__::func_48(Global_35, Local_240[2 /*21*/], 1f, 1))
					{
						__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 4194304);
					}
					else if (!PED::IS_PED_INJURED(Local_240[1 /*21*/]) && __LIB_0__::func_27(Local_240[1 /*21*/].f_8, 8))
					{
						__LIB_1__::func_683(&(Local_240[1 /*21*/].f_8), 4194304);
					}
					else if (!PED::IS_PED_INJURED(Local_240[2 /*21*/]) && __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 8))
					{
						__LIB_1__::func_683(&(Local_240[2 /*21*/].f_8), 4194304);
					}
				}
			}
			if (__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 4194304) || __LIB_0__::func_27(Local_240[2 /*21*/].f_8, 4194304))
			{
				if (__LIB_0__::func_27(Local_240[1 /*21*/].f_8, 4194304))
				{
					iVar0 = Local_240[1 /*21*/];
				}
				else if (__LIB_0__::func_27(Local_240[2 /*21*/].f_8, 4194304))
				{
					iVar0 = Local_240[2 /*21*/];
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (__LIB_0__::func_48(*iParam0, iVar0, 10f, 1))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_MELEE_KNIFE_BILL"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(*iParam0, 1, 1, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
						TASK::TASK_MELEE(*iParam0, iVar0, joaat("AR_STEALTH_KILL"), 0, 1, (1.5f * 1.25f), 0, -1082130432 /* Float: -1f */);
					}
					else if (__LIB_0__::func_48(*iParam0, iVar0, 25f, 1))
					{
						__LIB_4__::func_7(*iParam0, joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_THROWN_THROWING_KNIVES"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(*iParam0, 1, 1, 0, 0);
						func_1359(iParam0, 1, 100, 1f);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 30, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 31, false);
						PED::REGISTER_TARGET(*iParam0, iVar0, 1);
						TASK::TASK_COMBAT_PED(*iParam0, iVar0, 16777216, 0);
					}
				}
				__LIB_1__::func_748(&(iLocal_847[0]), 1, 1);
				__LIB_1__::func_748(&(iLocal_847[1]), 1, 1);
				__LIB_8__::func_771(*iParam0, 1, 1, 0);
				__LIB_8__::func_771(Local_240[1 /*21*/], 0, 1, 0);
				__LIB_1__::func_683(&(iParam0->f_8), 131072);
			}
		}
	}
}

int func_1365(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
		{
			if (((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true, 0, false))
				{
					if (WEAPON::_IS_WEAPON_BOW(iVar0) || iVar0 == joaat("WEAPON_THROWN_THROWING_KNIVES"))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
						{
							if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1f))
							{
								GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &fVar1, &fVar2);
								if (((fVar1 > (0.5f - fParam1) && fVar1 < (0.5f + fParam1)) && fVar2 > (0.5f - fParam2)) && fVar2 < (0.5f + fParam2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_1366(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam2, false) && WEAPON::IS_WEAPON_VALID(iVar0)) && iVar0 == iParam1)
		{
			return true;
		}
	}
	return false;
}

void func_1367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!PED::IS_PED_INJURED(iParam0) && WEAPON::IS_WEAPON_VALID(iParam1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, iParam2, false, false);
		if (iParam3 == 1)
		{
			TASK::TASK_SWAP_WEAPON(iParam0, 1, iParam4, 0, 0);
		}
	}
}

int func_1373(int iParam0, char* sParam1)
{
	var uVar0;
	bool bVar1;
	vector3 vVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			bVar1 = false;
		}
		else
		{
			bVar1 = true;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, bVar1, false) };
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, vVar2, &uVar0))
		{
			return uVar0;
		}
	}
	return uVar0;
}

bool func_1380(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, false, false)) };
			if (vVar0.y < 0f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1385(int iParam0)
{
	return (VOLUME::_DOES_VOLUME_EXIST(iLocal_1041[16]) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_1041[16], false, 0));
}

bool func_1392(int iParam0, int iParam1)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
		if ((TASK::_0xEC7E480FF8BD0BED(iParam0) && __LIB_0__::func_154(iVar0)) && iVar0 == iParam1)
		{
			return true;
		}
	}
	return false;
}

void func_1434(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1912(iParam0);
}

void func_1443(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_757(Global_35, iParam0, &uVar0))
		{
			func_1269(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_1481(int iParam0)
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
			func_1269(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1434(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1482(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1960(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1960(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1960(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1960(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1960(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1960(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1960(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1960(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1960(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1960(-1, iParam0);
	}
}

void func_1495()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1972(0);
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
	func_1972(1);
}

void func_1496()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_899(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1497()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1975(0);
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
	func_1975(1);
}

void func_1498()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1975(0);
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
	func_1975(1);
}

void func_1499()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_899(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_899(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1502(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1502(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1502(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_1502(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_12__::func_934(iParam0, iParam1);
	return 1;
}

bool func_1509(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_0__::func_948(iVar3) && __LIB_0__::func_220(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							func_1993(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

int func_1526(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2006(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_899(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1762(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_12__::func_619(iParam0, vVar0, fParam6, iParam10))
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
				func_720(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_12__::func_620(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
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

void func_1783()
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
	iVar0 = func_2182(6291456, 0);
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

bool func_1804(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1993(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1912(int iParam0)
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
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					func_1269(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
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
			__LIB_8__::func_368();
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

void func_1960(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2284(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2284(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_1972(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_899(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2290(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_902(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1502(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2295(Var0);
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

void func_1975(bool bParam0)
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
		func_899(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_899(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1502(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1502(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1502(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1993(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1472; //curOff = 582
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1472; //curOff = 713
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1472; //curOff = 748
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1472; //curOff = 843
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1472; //curOff = 864
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1472; //curOff = 1187
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1472; //curOff = 1285
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_2006(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2006(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2006(iVar63, -915411861, 1, 0, 0));
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

int func_2182(int iParam0, int iParam1)
{
	var uVar0;
	return func_2389(&uVar0, iParam0, iParam1);
}

void func_2284(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1434(50);
			}
			else
			{
				func_1434(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1434(51);
			}
			else
			{
				func_1434(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
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
			func_1434(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_2290(int iParam0)
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
	func_1502(iParam0, 1, 1, -142743235, 1);
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
		func_1502(uVar18[iVar36], 1, 1, -142743235, 1);
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
	func_1509(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
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
					func_1509(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
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
					func_1509(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
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
					func_2446(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	func_1509(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_1509(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_2295(struct<6> Param0)
{
	if (!func_2456(Param0.f_4, 1))
	{
	}
	if (!func_2456(Param0, 1))
	{
	}
	if (!func_2456(Param0.f_2, 1))
	{
	}
	if (!func_2456(Param0.f_5, 1))
	{
	}
	if (!func_2456(Param0.f_3, 1))
	{
	}
	if (!func_2456(Param0.f_1, 1))
	{
	}
}

int func_2389(var uParam0, int iParam1, int iParam2)
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
		return func_2389(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_2446(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		__LIB_0__::func_207(iParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		func_2544(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

bool func_2456(int iParam0, int iParam1)
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
				if (func_2456(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2456(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2456(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2456(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2544(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!func_2591(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(iVar3, 1, 1, 1, 1, 1);
	__LIB_1__::func_452(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

bool func_2591(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !func_1509(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (__LIB_0__::func_156(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			__LIB_0__::func_968(1108822547);
		}
		else
		{
			__LIB_0__::func_860(1108822547);
		}
	}
	__LIB_1__::func_183(uParam0, 0, 0);
	__LIB_0__::func_245(iParam5);
	return true;
}

