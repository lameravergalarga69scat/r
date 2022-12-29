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
	int iLocal_22 = 0;
	vector3 vLocal_23[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_51[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<19> Local_70[3];
	struct<22> Local_128 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_150 = 3;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	struct<10> Local_153[4];
	var uLocal_194 = 4;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 4;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	struct<91> Local_212[7];
	struct<22> Local_850 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_872 = 3;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	vector3 vLocal_878 = { 0f, 0f, 0f };
	vector3 vLocal_881 = { 0f, 0f, 0f };
	vector3 vLocal_884 = { 0f, 0f, 0f };
	struct<22> Local_887 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_909 = 3;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	char[] cLocal_912[8] = 0;
	char* sLocal_913[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_923 = 0;
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
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	var uLocal_957 = 0;
	vector3 vLocal_958 = { 0f, 0f, 0f };
	vector3 vLocal_961 = { 0f, 0f, 0f };
	vector3 vLocal_964[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_971[2] = { 0f, 0f };
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	var uLocal_979[2] = { 0, 0 };
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	struct<180> Local_992 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 1, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = -1082130432;
	var uLocal_1177 = -1082130432;
	var uLocal_1178 = 1103626240;
	var uLocal_1179 = -1067450368;
	var uLocal_1180 = 1097859072;
	var uLocal_1181 = 1073741824;
	var uLocal_1182 = 4000;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
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
	var uLocal_1204 = 1073741824;
	var uLocal_1205 = 0;
	struct<8> Local_1206 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_1214 = 2;
	var uLocal_1215 = 1;
	var uLocal_1216 = 1;
	var uLocal_1217 = 1;
	var uLocal_1218 = 0;
	var uLocal_1219 = 1;
	var uLocal_1220 = 2;
	var uLocal_1221 = 2;
	var uLocal_1222 = 3;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 3;
	var uLocal_1226 = 1;
	var uLocal_1227 = 3;
	var uLocal_1228 = 3;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	struct<19> Local_1231 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0 } ;
	var uLocal_1250 = 3;
	var uLocal_1251 = 1;
	var uLocal_1252 = 3;
	var uLocal_1253 = 3;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	int iLocal_1256 = 0;
	bool bLocal_1257 = false;
	bool bLocal_1258 = false;
	int iLocal_1259 = 0;
	int iLocal_1260 = 0;
	int iLocal_1261 = 0;
	var uLocal_1262 = 0;
	bool bLocal_1263 = false;
	int iLocal_1264 = 0;
	bool bLocal_1265 = false;
	bool bLocal_1266 = false;
	int iLocal_1267 = 0;
	struct<61> Local_1268[1];
	struct<17> Local_1330[2];
	struct<61> Local_1365[1];
	struct<17> Local_1427[1];
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 1097859072;
	var uLocal_1463 = 1000;
	var uLocal_1464 = 1067450368;
	var uLocal_1465 = 5000;
	var uLocal_1466 = 42;
	var uLocal_1467 = 1103626240;
	var uLocal_1468 = 1077936128;
	var uLocal_1469 = 1106247680;
	var uLocal_1470 = 1103101952;
	var uLocal_1471 = 1097859072;
	var uLocal_1472 = 1103626240;
	int iLocal_1473 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2278> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 5;
	iLocal_21 = 5;
	iLocal_876 = 3;
	vLocal_878 = { 1456.76f, 368.45f, 87.99f };
	vLocal_881 = { 1439.79f, 366.67f, 87.95f };
	vLocal_884 = { 1433.33f, 355.64f, 88.06f };
	cLocal_912 = "script_proc@loansharking@emerald_ranch";
	iLocal_952 = -1;
	vLocal_958 = { 1444.36f, 375.16f, 89.39f };
	vLocal_961 = { 1444.34f, 374.46f, 88.94f };
	iLocal_974 = joaat("CS_COOPER");
	iLocal_975 = joaat("CS_LILLYMILLET");
	iLocal_976 = joaat("A_M_M_FARMTRAVELERS_COOL_01");
	iLocal_1267 = -1;
	Var0.f_3.f_5 = 1065353216;
	Var0.f_3.f_6 = 1119092736;
	Var0.f_3.f_7 = 1092616192;
	Var0.f_3.f_8 = 1085276160;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_17.f_2 = 1106247680;
	Var0.f_17.f_3 = 1101004800;
	Var0.f_17.f_4 = 1099431936;
	Var0.f_17.f_5 = 1098907648;
	Var0.f_17.f_6 = 1082130432;
	Var0.f_32 = 1;
	Var0.f_32.f_13 = 17;
	Var0.f_32.f_218 = 1097859072;
	Var0.f_32.f_219 = 1101004800;
	Var0.f_32.f_246 = 4;
	Var0.f_352.f_3 = 17;
	Var0.f_352.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_225.f_15 = 1;
	Var0.f_352.f_241 = 30;
	Var0.f_352.f_241.f_1 = -1;
	Var0.f_352.f_241.f_1.f_2 = 1;
	Var0.f_352.f_241.f_1.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_782 = 8;
	Var0.f_352.f_1111 = 8;
	Var0.f_352.f_1111.f_1.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1288 = 11;
	Var0.f_352.f_1399 = 2;
	Var0.f_352.f_1434 = 2;
	Var0.f_352.f_1451 = -1;
	Var0.f_352.f_1454 = -1;
	Var0.f_352.f_1455 = -1082130432;
	Var0.f_352.f_1537 = 24;
	Var0.f_352.f_1661 = -1;
	Var0.f_2041 = 10;
	Var0.f_2052 = 11;
	Var0.f_2077.f_8 = -1;
	Var0.f_2077.f_17 = 1097859072;
	Var0.f_2077.f_18 = 1000;
	Var0.f_2077.f_19 = 1067450368;
	Var0.f_2077.f_20 = 5000;
	Var0.f_2077.f_21 = 42;
	Var0.f_2077.f_22 = 1103626240;
	Var0.f_2077.f_23 = 1077936128;
	Var0.f_2077.f_24 = 1106247680;
	Var0.f_2077.f_25 = 1103101952;
	Var0.f_2077.f_26 = 1097859072;
	Var0.f_2077.f_27 = 1103626240;
	Var0.f_2106 = 24;
	Var0.f_2204 = -1;
	Var0.f_2210 = 2;
	Var0.f_2213 = 2;
	Var0.f_2216.f_1 = -1;
	Var0.f_2216.f_3 = -1;
	Var0.f_2216.f_6 = -1;
	Var0.f_2216.f_12 = 1073741824;
	Var0.f_2216.f_16 = 1;
	Var0.f_2216.f_26 = 1106247680;
	Var0.f_2216.f_27 = 1067450368;
	Var0.f_2216.f_29 = 1092616192;
	Var0.f_2216.f_30 = 1112014848;
	Var0.f_2216.f_31 = 1106247680;
	Var0.f_2216.f_32 = 1101529088;
	Var0.f_2216.f_33 = 1101004800;
	Var0.f_2216.f_34 = 1084227584;
	Var0.f_2277 = 1;
	Var0.f_2277.f_1.f_2 = 570;
	Var0.f_2277.f_1.f_3 = 1065353216;
	Var0.f_2277.f_1.f_4 = -1082130432;
	Var0.f_2277.f_1.f_9 = 3;
	Var0 = uScriptParam_0;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&Var0);
	while (true)
	{
		func_3(&Var0);
		if (__LIB_0__::func_1(Var0.f_16, 12))
		{
			func_5(&Var0);
		}
		else
		{
			switch (Var0.f_1)
			{
				case 0:
					__LIB_10__::func_536(&Var0);
					break;
				case 1:
					func_7(&Var0);
					break;
				case 3:
					func_8(&Var0);
					break;
				case 2:
					__LIB_10__::func_253(&Var0, func_10(&Var0, __LIB_4__::func_513()));
					if (Var0.f_1 == 8 || Var0.f_1 == 9)
					{
						HUD::DISPLAY_HUD(true);
						MAP::DISPLAY_RADAR(true);
					}
					break;
				case 6:
					func_12(&Var0);
					break;
				case 7:
					func_13(&Var0);
					break;
				case 8:
					func_14(&Var0);
					break;
				case 9:
					func_15(&Var0);
					break;
				case 10:
					func_16(&Var0, 0);
					break;
				case 11:
					func_17(&Var0);
					break;
				case 12:
					func_18(&Var0);
					break;
				case 13:
					func_19(&Var0, 0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
	}
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_15(uParam0);
		}
		else
		{
			func_16(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_1 == 11)
	{
		__LIB_0__::func_11(uParam0);
	}
	func_23(uParam0);
}

void func_2(char[4] cParam0)
{
	__LIB_4__::func_228(&(cParam0->f_2077));
	__LIB_1__::func_402(&(cParam0->f_2077), 1);
	__LIB_2__::func_828(&(cParam0->f_2077), 1);
	__LIB_1__::func_413(&(cParam0->f_2077), 1);
	if (*cParam0 == __LIB_10__::func_367())
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
		__LIB_0__::func_145(0, 0);
	}
	HUD::_TEXT_DATABASE_REQUEST("LOAN");
	func_31(cParam0);
	__LIB_10__::func_254(cParam0);
	__LIB_10__::func_253(cParam0, 0);
}

void func_3(char[4] cParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 4);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 8);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 8);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 9);
		}
		return;
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 256);
	if (cParam0->f_1 != 12 && cParam0->f_1 != 11)
	{
		if (!__LIB_0__::func_1(cParam0->f_16, 1) && cParam0->f_1 <= 3)
		{
			if (func_38(cParam0))
			{
				func_39(cParam0);
				if (cParam0->f_15 == 2 || cParam0->f_15 == 6)
				{
					func_23(cParam0);
				}
				else
				{
					__LIB_10__::func_253(cParam0, 11);
				}
				return;
			}
			__LIB_10__::func_613(cParam0);
		}
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			if (__LIB_0__::func_1(cParam0->f_16, 128))
			{
				if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
				{
					Var0 = { func_41(0) };
					if (func_42(&Var0))
					{
						__LIB_0__::func_8(&(cParam0->f_16), 128);
					}
				}
				else
				{
					__LIB_0__::func_8(&(cParam0->f_16), 128);
				}
			}
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 2048))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 32))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 64))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 256))
			{
				__LIB_4__::func_516(1, 0);
			}
			if (func_46(cParam0))
			{
				__LIB_10__::func_253(cParam0, 10);
				return;
			}
		}
		func_47(cParam0);
		__LIB_19__::func_175(cParam0);
	}
}

void func_5(var uParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		func_16(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2070)))
		{
			__LIB_1__::func_283(&(uParam0->f_2070), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_1 == 11)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_39(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_7(char[4] cParam0)
{
	if (func_57(cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
		{
			func_58(cParam0);
			__LIB_10__::func_253(cParam0, 2);
		}
		else
		{
			func_59(cParam0);
			__LIB_10__::func_253(cParam0, 3);
		}
	}
}

void func_8(char[4] cParam0)
{
	if (func_60(cParam0))
	{
		func_61(cParam0);
	}
}

int func_10(char[4] cParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		if (PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]) && PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1]))
		{
			iLocal_16 = 1;
			func_59(cParam0);
			__LIB_10__::func_260(1, 0);
			return 6;
		}
		else
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]))
			{
			}
			if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1]))
			{
			}
		}
	}
	else if (iVar0 == 1)
	{
		if (__LIB_0__::func_272(uLocal_979[0], 0) && __LIB_0__::func_272(uLocal_979[1], 0))
		{
			if (PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]) && PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
				func_64();
				func_65(67108864);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, PLAYER::_0x0139637A3BFF8B6D(uLocal_979[1], &uVar1));
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[1], 1425.229f, 382.8184f, 88.9811f, 257.4694f, true, false, true);
				func_66();
				func_67(0);
				__LIB_10__::func_260(1, 1);
				return 8;
			}
			else
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]))
				{
				}
				if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1]))
				{
				}
			}
		}
	}
	else if (iVar0 == 2)
	{
		if (__LIB_0__::func_272(uLocal_979[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
			func_64();
		}
		func_68();
		if (__LIB_0__::func_272(uLocal_979[1], 0) && !TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[1], 1427.44f, 383.25f, 88.86f, 248.0144f, true, false, true);
			TASK::TASK_KNOCKED_OUT(uLocal_979[1], 10f, true);
			__LIB_2__::func_463(uLocal_979[1], Local_992.f_74, 1, 0);
			func_65(256);
		}
		else if (TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			if ((PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]) && PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
			{
				if (!__LIB_0__::func_75(&uLocal_946))
				{
					__LIB_1__::func_148(&uLocal_946);
				}
				else if (__LIB_1__::func_871(&uLocal_946) > 1000)
				{
					__LIB_0__::func_37(&uLocal_946);
					func_67(3);
					PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, PLAYER::_0x0139637A3BFF8B6D(uLocal_979[1], &uVar2));
					__LIB_10__::func_260(1, 1);
					return 8;
				}
			}
			else
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]))
				{
				}
				if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1]))
				{
				}
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
				{
				}
			}
		}
	}
	else if (iVar0 == 3)
	{
		if (__LIB_0__::func_272(uLocal_979[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
		}
		func_68();
		if (__LIB_0__::func_272(uLocal_979[1], 0) && !TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			func_65(256);
			func_72(Local_992.f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_73(uLocal_979[1], 1, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[1], 1427.44f, 383.25f, 88.86f, 248.0144f, true, false, true);
			TASK::TASK_KNOCKED_OUT(uLocal_979[1], 15f, false);
		}
		else if (TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			if ((PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]) && PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
			{
				if (__LIB_0__::func_272(uLocal_979[0], 0))
				{
					func_74();
				}
				__LIB_10__::func_260(1, 1);
				return 9;
			}
			else
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[0]))
				{
				}
				if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_979[1]))
				{
				}
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
				{
				}
			}
		}
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_75(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_78(cParam0);
		}
		else
		{
			__LIB_10__::func_262(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_10__::func_263(0, 1, 1);
		}
		__LIB_10__::func_253(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_78(cParam0))
			{
				__LIB_10__::func_465(cParam0, 1);
				iVar0 = func_82(cParam0);
				__LIB_10__::func_253(cParam0, iVar0);
			}
		}
	}
	else
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (__LIB_0__::func_58(cParam0))
		{
			__LIB_10__::func_264(cParam0);
			__LIB_10__::func_465(cParam0, 0);
			iVar0 = func_82(cParam0);
			__LIB_10__::func_253(cParam0, iVar0);
		}
		else
		{
			__LIB_10__::func_263(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
			__LIB_0__::func_11(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;
	iVar0 = func_86(cParam0);
	if (iVar0 != 8)
	{
		__LIB_10__::func_253(cParam0, iVar0);
	}
}

void func_15(char[4] cParam0)
{
	bool bVar0;
	if (cParam0->f_1 != 9)
	{
		__LIB_10__::func_253(cParam0, 9);
	}
	__LIB_10__::func_256(cParam0, 0);
	func_87(*cParam0, 1, 1);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_5__::func_109(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_867(0);
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	if (__LIB_10__::func_341(*cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_1__::func_422("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	__LIB_0__::func_8(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	__LIB_10__::func_253(cParam0, 11);
}

void func_16(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (cParam0->f_1 != 10)
	{
		__LIB_10__::func_253(cParam0, 10);
	}
	__LIB_10__::func_256(cParam0, 1);
	if (bParam1 == 1)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_75(&(cParam0->f_2070)))
			{
				__LIB_1__::func_283(&(cParam0->f_2070), 0);
			}
			__LIB_0__::func_11(cParam0);
			bVar0 = CAM::_0x139EFB0A71DD9011();
			bVar1 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(cParam0->f_16, 16) && !bVar1)
			{
				if (!bVar0)
				{
					__LIB_1__::func_193(1, 1);
					__LIB_0__::func_7(&(Global_1347343.f_11), 131072);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(cParam0->f_16), 16);
				}
			}
			if (bVar1)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			else if (__LIB_1__::func_871(&(cParam0->f_2070)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
		}
		iVar2 = 1;
		if (__LIB_0__::func_1(cParam0->f_16, 4))
		{
			iVar2 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_KO", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_DEAD", 16);
			}
		}
		else if (__LIB_0__::func_1(cParam0->f_16, 8))
		{
			iVar2 = 6;
			StringCopy(&(cParam0->f_2208), "PLAYER_ARRESTED", 16);
		}
		__LIB_1__::func_611(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), __LIB_0__::func_58(), 0, 0);
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_867(0);
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	__LIB_10__::func_375(*cParam0);
	bParam1 = true;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		bParam1 = true;
	}
	else
	{
		func_39(cParam0);
	}
	if (bParam1)
	{
		func_23(cParam0);
	}
	else
	{
		__LIB_0__::func_8(&(cParam0->f_16), 1);
		__LIB_10__::func_253(cParam0, 11);
	}
}

void func_17(char[4] cParam0)
{
	int iVar0;
	if (Global_1392626[*cParam0 /*32*/].f_9 & 4096 != 0)
	{
		__LIB_10__::func_361(*cParam0);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0))
		{
			__LIB_0__::func_11(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (__LIB_10__::func_265())
	{
		__LIB_0__::func_11(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!__LIB_0__::func_75(&(cParam0->f_2064)) || IntToFloat(__LIB_1__::func_871(&(cParam0->f_2064))) > __LIB_2__::func_18(cParam0))
	{
		__LIB_1__::func_283(&(cParam0->f_2064), 1);
		if (func_108(cParam0))
		{
			__LIB_10__::func_253(cParam0, 12);
		}
	}
}

void func_18(var uParam0)
{
	func_19(uParam0, 1);
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 512))
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
}

void func_19(var uParam0, int iParam1)
{
	__LIB_10__::func_249(*uParam0, iParam1);
	func_23(uParam0);
}

void func_23(char[4] cParam0)
{
	func_110(cParam0);
	__LIB_10__::func_342(cParam0);
	__LIB_10__::func_479(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_471(*cParam0);
	}
	__LIB_2__::func_788(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
	HUD::_TEXT_DATABASE_DELETE("LOAN");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_2205)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(cParam0->f_2205));
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_31(var uParam0)
{
	__LIB_10__::func_267(uParam0, "LSWOMAU");
	__LIB_2__::func_887(&uLocal_1445, 1);
	__LIB_1__::func_396(&uLocal_1445, 0);
	__LIB_1__::func_404(&uLocal_1445, 0);
	__LIB_1__::func_405(&uLocal_1445, 1);
	__LIB_1__::func_406(&uLocal_1445, 0);
	__LIB_10__::func_590(&uLocal_1445, 1);
	__LIB_1__::func_393(&uLocal_1445, 1);
	__LIB_1__::func_392(&uLocal_1445, 0);
	__LIB_10__::func_268(uParam0, 2);
	__LIB_10__::func_269(uParam0, 2);
	__LIB_3__::func_557(&iLocal_984, 1429.981f, 380.7025f, 90.07715f, 0f, 0f, -13.17413f, 12.22747f, 14.6034f, 4f, "volCutsceneTrigger");
	__LIB_3__::func_557(&iLocal_985, 1405.467f, 321.6705f, 89.68785f, 0f, 0f, 0f, 102.7853f, 128.9887f, 19.83388f, "volBlocking");
	__LIB_10__::func_458(uParam0, Global_1392626[*uParam0 /*32*/].f_24, 0f, 0f, 0f, 5f, 5f, 5f);
	func_139(uParam0, &iLocal_984, 0);
	uParam0->f_347 = 8f;
	func_140(uParam0);
	func_141();
	HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_2205));
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_985, 224, 8192, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_985, 224, 8192, 0, -1, -1, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		__LIB_3__::func_729(iLocal_985, 0, 0);
		__LIB_2__::func_761(VOLUME::_GET_VOLUME_COORDS(iLocal_985), 150f, 0, 0);
	}
	if (*uParam0 == __LIB_10__::func_367())
	{
		func_144(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 1, 1, -142743235, 0);
	}
	__LIB_0__::func_928(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (func_146(cParam0))
		{
			__LIB_10__::func_234(*cParam0, 1024);
			__LIB_10__::func_256(cParam0, 5);
			return true;
		}
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != __LIB_0__::func_298(0))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (__LIB_0__::func_730(Global_1392626[*cParam0 /*32*/].f_12))
		{
			__LIB_10__::func_234(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!__LIB_2__::func_117(Global_1392626[*cParam0 /*32*/].f_22))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 3);
			return true;
		}
	}
	if (__LIB_10__::func_362(*cParam0))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		__LIB_10__::func_256(cParam0, 7);
		return true;
	}
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_10__::func_234(*cParam0, 16384);
		__LIB_10__::func_256(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			__LIB_10__::func_256(cParam0, 2);
			return true;
		}
	}
	else if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !__LIB_10__::func_608(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				__LIB_10__::func_256(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (__LIB_10__::func_270(fVar1))
	{
		__LIB_10__::func_234(*cParam0, 8192);
		__LIB_10__::func_256(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_156(cParam0);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
		__LIB_1__::func_723(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		__LIB_5__::func_102();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (__LIB_10__::func_266(cParam0) != 2 && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_471(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_345();
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	__LIB_10__::func_384(cParam0);
}

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	if (iVar0 == 1 || iVar0 == 0)
	{
		Var1 = { 1429.529f, 381.9952f, 88.532f };
		Var1.f_3 = 84.4395f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1429.529f, 381.9952f, 88.532f };
		Var1.f_3 = 85.6777f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1427.761f, 382.037f, 88.6908f };
		Var1.f_3 = 13.3192f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_164(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_165(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_47(char[4] cParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	if (!func_166(16384) && !func_166(8192))
	{
		if (ENTITY::_0x6BFBDC46139C45AB(vLocal_964[0 /*3*/]))
		{
			if (__LIB_0__::func_272(uLocal_979[0], 0) && __LIB_0__::func_272(uLocal_979[1], 0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_70[1 /*19*/], true, false))
				{
					func_167();
				}
			}
		}
	}
	func_168(cParam0);
	if (cParam0->f_1 <= 3)
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("LOAN"))
		{
			if (!__LIB_10__::func_235(*cParam0, 4))
			{
				if (((BUILTIN::VDIST2(Global_36, Global_1392626[*cParam0 /*32*/].f_27) <= (75f * 75f) || __LIB_0__::func_393(Global_35, iLocal_986, 108, 1)) || __LIB_0__::func_393(Global_35, iLocal_987, 108, 1)) || __LIB_0__::func_393(Global_35, iLocal_988, 108, 1))
				{
					func_170();
					func_171(cParam0);
					if (HUD::_TEXT_DATABASE_HAS_LOADED(&(cParam0->f_2205)))
					{
						func_172(cParam0);
					}
				}
			}
			else
			{
				func_173(cParam0);
			}
		}
		if (func_166(8192))
		{
			func_174(cParam0);
		}
	}
}

bool func_57(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = func_188(cParam0);
	iVar1 = func_189();
	func_171(cParam0);
	if (iVar0 && iVar1)
	{
		bVar2 = func_190(1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_986))
	{
		iLocal_986 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1447.252f, 278.7756f, 89.07455f, 0f, 0f, -4.041848f, 34.36525f, 26.62215f, 11.51713f, "Investigation allow vol 1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_987))
	{
		iLocal_987 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1380.175f, 316.9712f, 89.07455f, 0f, 0f, -77.84428f, 34.36525f, 26.62215f, 11.51713f, "Investigation allow vol 2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_988))
	{
		iLocal_988 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1476.477f, 404.1175f, 89.07455f, 0f, 0f, -139.8795f, 79.17475f, 42.50597f, 11.51713f, "Investigation allow vol 3");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_990))
	{
		iLocal_990 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1425.103f, 383.0199f, 89.44349f, 0f, 0f, -14.06964f, 2.114243f, 2.815163f, 1.883742f, "Bench scenario blocker");
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_1262))
	{
		uLocal_1262 = PED::_0x4C39C95AE5DB1329(iLocal_990, 0, 15);
	}
	if ((((((iVar0 && iVar1) && bVar2) && VOLUME::_DOES_VOLUME_EXIST(iLocal_986)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_987)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_988)) && PED::_0x91A5F9CBEBB9D936(uLocal_1262))
	{
		func_65(8192);
		func_191(cParam0);
		__LIB_13__::func_283(&(uLocal_979[0]));
		__LIB_13__::func_283(&(uLocal_979[1]));
		PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(uLocal_979[0], false, false), 25f, 1, 0);
		if (func_166(16384))
		{
			return true;
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!__LIB_1__::func_44(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!__LIB_0__::func_702(Global_1392626[*cParam0 /*32*/].f_3))
		{
			__LIB_1__::func_298(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		__LIB_1__::func_821(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_10__::func_237(4);
	}
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_8__::func_985(*cParam0);
	MISC::_0x1096603B519C905F(__LIB_10__::func_274(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_5__::func_109(cParam0, 1, 0);
	AUDIO::_0x33D51F801CB16E4F();
	__LIB_1__::func_723(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	__LIB_10__::func_275(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			__LIB_0__::func_7(&(cParam0->f_16), 128);
		}
		__LIB_10__::func_378(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	switch (iLocal_16)
	{
		case 0:
			cParam0->f_346 = func_203();
			__LIB_10__::func_599(cParam0, 34734);
			__LIB_10__::func_558(cParam0, 34834);
			__LIB_10__::func_402(&(cParam0->f_32));
			__LIB_10__::func_591(cParam0, &iLocal_984);
			__LIB_10__::func_564(cParam0, Global_35, 0, 0, 0, 0);
			__LIB_10__::func_564(cParam0, uLocal_979[0], 0, 0, 0, 0);
			__LIB_10__::func_564(cParam0, uLocal_979[1], 0, 0, 0, 0);
			__LIB_10__::func_401(cParam0, __LIB_10__::func_343(*cParam0));
			__LIB_10__::func_552(&(cParam0->f_32), 1433.423f, 395.39f, 89.9713f, 130.7584f, 0);
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 512);
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			break;
		case 1:
			cParam0->f_346 = func_203();
			__LIB_10__::func_558(cParam0, 34834);
			__LIB_10__::func_459(&(cParam0->f_32));
			__LIB_10__::func_564(cParam0, Global_35, 0, 0, 0, 0);
			__LIB_10__::func_564(cParam0, uLocal_979[0], 0, 0, 0, 0);
			__LIB_10__::func_564(cParam0, uLocal_979[1], 0, 0, 0, 0);
			__LIB_10__::func_401(cParam0, __LIB_10__::func_343(*cParam0));
			__LIB_10__::func_552(&(cParam0->f_32), 1433.423f, 395.39f, 89.9713f, 130.7584f, 1);
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			break;
	}
}

bool func_60(char[4] cParam0)
{
	if (!__LIB_10__::func_344(cParam0))
	{
		return false;
	}
	__LIB_18__::func_249(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && __LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				__LIB_10__::func_565(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_217(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (__LIB_10__::func_277(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (__LIB_10__::func_261(cParam0->f_346))
			{
				if (!__LIB_0__::func_86(cParam0->f_32.f_5))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								__LIB_10__::func_342(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							__LIB_10__::func_342(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					__LIB_10__::func_342(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_219(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_220(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(cParam0->f_2216)))
					{
						__LIB_10__::func_479(cParam0);
						__LIB_10__::func_345(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_223(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			__LIB_10__::func_342(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;
	func_58(cParam0);
	__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
	__LIB_10__::func_479(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	__LIB_0__::func_11(cParam0);
	__LIB_10__::func_253(cParam0, func_226(cParam0));
	iVar0 = func_226(cParam0);
	if (iVar0 == 7)
	{
		func_12(cParam0);
		if (cParam0->f_1 != 7)
		{
			iVar0 = 6;
		}
	}
	else if (iVar0 == 8)
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
}

void func_64()
{
	if (__LIB_0__::func_272(uLocal_979[0], 0))
	{
		TASK::CLEAR_PED_TASKS(uLocal_979[0], true, false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_979[0], false);
		func_228(0, 1000f, -1056964608 /* Float: -8f */, 2, 1, 1);
		__LIB_1__::func_148(&uLocal_931);
		func_229();
		__LIB_10__::func_592(1);
	}
}

void func_65(int iParam0)
{
	__LIB_1__::func_683(&iLocal_949, iParam0);
}

void func_66()
{
	if (__LIB_0__::func_272(uLocal_979[1], 0))
	{
		if (!__LIB_0__::func_163(uLocal_979[1], 780511057))
		{
			PED::_0xFC3DB99C8144CD81(uLocal_979[1], iLocal_989, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 6, true);
			PED::_0x4F27603E44A8E4C0(uLocal_979[1], 10, 1);
			PED::_0xC163DAC52AC975D3(uLocal_979[1], 28);
			__LIB_10__::func_528(&iLocal_978, uLocal_979[1], joaat("BLIP_STYLE_ENEMY"), "BLIP_COOP");
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_979[1], true, true);
			PED::_SET_PED_BRAWLING_STYLE(uLocal_979[1], joaat("BS_AI_BARBRAWL"));
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(uLocal_979[1], Global_35, 0, 0, 0, 1, 1048576);
			PED::REGISTER_TARGET(uLocal_979[1], Global_35, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_979[1], true, 0f);
			PED::REGISTER_TARGET(uLocal_979[1], Global_35, 1);
			PED::_0x2E5B5D1F1453E08E(uLocal_979[1], 1);
			PED::SET_COMBAT_FLOAT(uLocal_979[1], 7, 1f);
			PED::_0x5BCF0B79D4F5DBA3(uLocal_979[1], 20f);
			PED::_0x29924EB8EE9DB926(uLocal_979[1], 20f);
			PED::_0x2208438012482A1A(uLocal_979[1], false, false);
			ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 2, 0);
			ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 0, 0);
			ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 7, 0);
			PED::_0xAE6004120C18DF97(uLocal_979[1], 0, 0);
			PED::SET_PED_MAX_HEALTH(uLocal_979[1], 145);
			ENTITY::_SET_ENTITY_HEALTH(uLocal_979[1], 145, 0);
			PED::_0x57F35552E771BE9D(uLocal_979[1], 12);
			__LIB_2__::func_463(uLocal_979[1], Local_992.f_74, 1, 0);
			__LIB_10__::func_593(1);
		}
	}
}

void func_67(int iParam0)
{
	int iVar0;
	if (iParam0 == 5)
	{
		iVar0 = iLocal_15;
		iVar0++;
		iLocal_15 = iVar0;
		if (iLocal_15 == 5)
		{
			iLocal_15 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_15 = iParam0;
	}
	iLocal_14 = 0;
}

void func_68()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1260))
		{
			STREAMING::REQUEST_MODEL(joaat("P_BENCHCH01X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_BENCHCH01X")))
			{
				if (iLocal_1259 == 0)
				{
					iLocal_1259 = ENTITY::_0x6F3068258A499E52(joaat("P_BENCHCH01X"), vLocal_961, 9);
				}
				else if (ENTITY::_0x1FF441D7954F8709(iLocal_1259))
				{
					iLocal_1260 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1259));
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1260))
		{
			if (__LIB_2__::func_312(joaat("PROP_HUMAN_SEAT_CHAIR_SAD"), 15, 0, 0))
			{
				iLocal_1261 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_1260, joaat("PROP_HUMAN_SEAT_CHAIR_SAD"), -0.507656f, 0.030655f, 0.5f, 180f, 1f, 0f, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BENCHCH01X"));
			}
		}
	}
}

bool func_72(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_72(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_10__::func_252(28);
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
						func_72(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_72(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_72(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_72(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_72(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_72(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_72(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_10__::func_252(24);
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
				Jump @4450; //curOff = 4243
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4450; //curOff = 4290
				__LIB_1__::func_240(488, 0);
				Jump @4450; //curOff = 4301
				__LIB_1__::func_240(491, 0);
				Jump @4450; //curOff = 4312
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_72(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_72(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4450; //curOff = 4385
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				Jump @4450; //curOff = 4404
				__LIB_1__::func_240(486, 0);
				Jump @4450; //curOff = 4415
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				Jump @4450; //curOff = 4433
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
					__LIB_10__::func_379(iParam0);
				}
				if (__LIB_0__::func_192(iParam0, -1979000645))
				{
					__LIB_10__::func_485(iParam0);
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
						func_72(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
void func_73(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = __LIB_3__::func_698(iParam0);
		__LIB_3__::func_906(iVar0, ENTITY::_0xC346A546612C49A9(iParam0));
	}
	if (bParam1)
	{
		__LIB_10__::func_594(iParam0, 0);
	}
}

void func_74()
{
	if (((__LIB_0__::func_272(uLocal_979[0], 0) && !TASK::IS_PED_CUFFED(uLocal_979[0])) && iLocal_18 != 3) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
	{
		func_190(2, 0);
		func_329(5000);
		PED::_0x89F5E7ADECCCB49C(uLocal_979[0], "sad");
		TASK::_TASK_USE_SCENARIO_POINT(uLocal_979[0], iLocal_1261, "", 0, true, false, 0, false, -1f, false);
		__LIB_10__::func_590(&uLocal_1445, 1);
		__LIB_1__::func_393(&uLocal_1445, 1);
		__LIB_1__::func_392(&uLocal_1445, 0);
		__LIB_10__::func_592(8);
		func_65(32);
	}
	else if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
	{
	}
}

bool func_75(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_217(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		__LIB_0__::func_11(cParam0);
		if (!__LIB_10__::func_605(cParam0))
		{
			return false;
		}
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(1);
			return false;
		}
	}
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

int func_78(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_343(cVar0, &(cParam0->f_32), cParam0);
}

int func_82(char[4] cParam0)
{
	var uVar0;
	__LIB_0__::func_172(iLocal_991);
	func_65(67108864);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, PLAYER::_0x0139637A3BFF8B6D(uLocal_979[1], &uVar0));
	return 8;
}

int func_86(char[4] cParam0)
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
	func_348();
	switch (iLocal_15)
	{
		case 0:
			func_349(cParam0);
			break;
		case 2:
			if (func_350(cParam0))
			{
				return 9;
			}
			break;
		case 1:
			if (func_351(cParam0))
			{
				return 9;
			}
			break;
		case 3:
			if (func_352(cParam0))
			{
				return 9;
			}
			break;
	}
	return 8;
}

void func_87(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!__LIB_8__::func_779(1))
	{
		__LIB_10__::func_226(1);
	}
	__LIB_8__::func_985(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_358(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_359(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_108(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_10__::func_266(uParam0);
	if (((((iVar0 == 4 || iVar0 == 1) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 2)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[1 /*19*/], false))
		{
			if (func_386())
			{
				func_387(1);
			}
		}
	}
	if (iVar0 == 0)
	{
		func_388(uParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
	{
		if ((!TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11) && !PED::IS_PED_FLEEING(uLocal_979[1])) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_979[1], -1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_979[1], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(uLocal_979[0]) && !PED::IS_PED_FLEEING(uLocal_979[0])) && !PED::IS_PED_IN_COMBAT(uLocal_979[0], 0))
	{
		if (((((iVar0 == 4 || iVar0 == 1) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 2)
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_979[0], -1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_979[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
		else if (!bLocal_1265)
		{
			func_389();
			bLocal_1265 = true;
		}
		else if (!bLocal_1266)
		{
			if (!bLocal_1258)
			{
				if (__LIB_0__::func_665(Global_35, uLocal_979[0], 1, 1) <= 5f && !__LIB_5__::func_463())
				{
					if (__LIB_10__::func_513(&(uParam0->f_2106), "LS_EMR_GRIEF", 0))
					{
						bLocal_1258 = true;
					}
				}
			}
			if (((!ENTITY::IS_ENTITY_DEAD(iLocal_877) && AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_877)) || iLocal_875 <= 5) || __LIB_5__::func_463())
			{
				if (__LIB_2__::func_466(&(Local_1330[0 /*17*/]), 0, 0) || __LIB_2__::func_466(&(Local_1330[1 /*17*/]), 0, 0))
				{
					func_394();
				}
			}
			else if (!__LIB_2__::func_466(&(Local_1330[0 /*17*/]), 0, 0) || !__LIB_2__::func_466(&(Local_1330[1 /*17*/]), 0, 0))
			{
				__LIB_2__::func_526(&Local_1330, 1, 0);
			}
			iLocal_1267 = func_396(&(uLocal_979[0]), &(Local_1268[0 /*61*/]), 20f, &Local_1330, 0.25f, 3, 0, "", 3, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_1267 == 0)
			{
				if (__LIB_10__::func_513(&(uParam0->f_2106), "LS_EMR_POST_POS", 0))
				{
					func_394();
					TASK::_0xE7FA07624574B79A(uLocal_979[0], Global_35, 1, 2, 5000f, 1, 0, 0, 0);
					bLocal_1266 = true;
				}
			}
			else if (iLocal_1267 == 1)
			{
				if (__LIB_10__::func_513(&(uParam0->f_2106), "LS_EMR_POST_NEG", 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_979[0], Global_35, 1, 2, 5000f, 1, 0, 0, 0);
					func_394();
					bLocal_1266 = true;
				}
			}
		}
		else
		{
			func_396(&(uLocal_979[0]), &(Local_1268[0 /*61*/]), 20f, &Local_1330, 0.25f, 3, 0, "", 3, 0, 2, -1082130432 /* Float: -1f */);
		}
	}
	else if (bLocal_1265)
	{
		func_394();
		bLocal_1265 = false;
		bLocal_1266 = true;
	}
	if (iVar0 == 4)
	{
		if (func_397())
		{
			return true;
		}
		return false;
	}
	else if (iVar0 == 1)
	{
		func_398();
		return true;
	}
	else if (iVar0 == 5)
	{
		if (func_399(uLocal_979[1], -1f, 125f) && func_399(uLocal_979[0], -1f, 125f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_979[1], true, false);
				ENTITY::SET_ENTITY_COORDS(uLocal_979[1], 1454.951f, 319.6451f, 88.4759f, true, false, true, true);
			}
			return true;
		}
		return false;
	}
	if (!func_400(uParam0))
	{
		return false;
	}
	return true;
}

void func_110(char[4] cParam0)
{
	int iVar0;
	func_402();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_985))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_985);
		POPULATION::_0xA1CFB35069D23C23(iLocal_985);
		VOLUME::_DELETE_VOLUME(iLocal_985);
	}
	__LIB_0__::func_172(iLocal_991);
	__LIB_0__::func_172(iLocal_984);
	if (__LIB_0__::func_272(uLocal_979[0], 0))
	{
		PED::_0x4FD80C3DD84B817B(uLocal_979[0]);
		PED::_0x58F7DB5BD8FA2288(uLocal_979[0]);
	}
	if (iLocal_952 > 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_952);
	}
	if (func_403(1))
	{
		AUDIO::_0x9428447DED71FC7E("LSEMR_Scenes");
	}
	__LIB_6__::func_815(&(Local_1365[0 /*61*/]), uLocal_979[0]);
	__LIB_0__::func_325(&iLocal_977);
	AUDIO::TRIGGER_MUSIC_EVENT("LSER_STOP");
	__LIB_0__::func_172(iLocal_985);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_1262))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1262, false);
	}
	func_65(65536);
	func_406();
	if (__LIB_0__::func_29(594))
	{
		__LIB_4__::func_193(594);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_ACTIVE");
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_PRE");
	iVar0 = __LIB_10__::func_266(cParam0);
	if (iVar0 == 1)
	{
	}
	if (iLocal_1259 != 0 && ENTITY::_0x1FF441D7954F8709(iLocal_1259))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_1259);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_986))
	{
		VOLUME::_DELETE_VOLUME(iLocal_986);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_987))
	{
		VOLUME::_DELETE_VOLUME(iLocal_987);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_988))
	{
		VOLUME::_DELETE_VOLUME(iLocal_988);
	}
	func_409();
	__LIB_2__::func_788(&iLocal_877, 1, 1, 1);
	__LIB_2__::func_788(&(uLocal_979[0]), 1, 0, 1);
	__LIB_2__::func_788(&(uLocal_979[1]), 1, 0, 1);
}

void func_139(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	uParam0->f_2040 = *iParam1;
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_2040) };
	vVar3 = { VOLUME::_GET_VOLUME_ROTATION(uParam0->f_2040) };
	vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2040) };
	if (bParam2)
	{
		__LIB_10__::func_458(uParam0, vVar6, vVar3, vVar0);
	}
}

void func_140(var uParam0)
{
	func_420();
	func_421();
	func_422();
	func_423();
	func_424(uParam0);
}

void func_141()
{
	PED::ADD_RELATIONSHIP_GROUP("GroupCooper", &iLocal_982);
	PED::ADD_RELATIONSHIP_GROUP("GroupLilly", &iLocal_983);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_982, iLocal_983);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_983, iLocal_982);
}

int func_144(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_144(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

bool func_146(var uParam0)
{
	if (!__LIB_0__::func_272(uLocal_979[0], 0))
	{
		return true;
	}
	else if (!__LIB_0__::func_272(uLocal_979[1], 0))
	{
		return true;
	}
	else if ((iLocal_18 == 3 || iLocal_19 == 6) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_979[0], true, false), 5f, true))
	{
		if (func_386())
		{
			__LIB_6__::func_815(&(Local_1365[0 /*61*/]), uLocal_979[0]);
			return true;
		}
	}
	return false;
}

void func_156(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_10__::func_266(cParam0);
	__LIB_10__::func_285(cParam0, 2);
	func_65(65536);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	if (((((iVar0 == 4 || iVar0 == 1) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 2)
	{
		func_467(&(uLocal_979[1]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
		{
			__LIB_10__::func_594(uLocal_979[1], 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 186, false);
			if (iLocal_19 != 6)
			{
				func_468();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[0]))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_979[0], 186, false);
			if (iLocal_18 != 3)
			{
				func_387(1);
			}
		}
		if (iVar0 == 5)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[1 /*19*/]);
			}
		}
		__LIB_6__::func_815(&(Local_1365[0 /*61*/]), uLocal_979[0]);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_PRE");
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_ACTIVE");
	}
}

int func_164(vector3 vParam0, var uParam3)
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
		iVar0 = func_477(0, 0);
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

bool func_165(char[4] cParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	if (((!__LIB_0__::func_272(uLocal_979[0], 0) || !__LIB_0__::func_272(uLocal_979[1], 0)) || iLocal_18 == 3) || iLocal_19 == 6)
	{
		if (!func_166(256))
		{
			__LIB_10__::func_531(cParam0, "FAIL_EMERALD");
			return true;
		}
	}
	if (func_166(512))
	{
		__LIB_10__::func_531(cParam0, "FAIL_EMERALD");
		return true;
	}
	if (cParam0->f_1 == 8)
	{
		if (iLocal_15 >= 0)
		{
			if (func_482())
			{
				__LIB_10__::func_531(cParam0, "FAIL_EMERALD");
				return true;
			}
			if (func_483())
			{
				__LIB_10__::func_531(cParam0, "FAIL_EMERALD");
				return true;
			}
		}
		if (iLocal_15 == 3)
		{
			if (((((ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 0, Global_35) == 0 && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, uLocal_979[1], 2, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar2, uLocal_979[1], 1, Global_35) == 0) && !ENTITY::_0x8DE41E9902E85756(uLocal_979[1])) && !PED::_0x3AEC4A410ECAF30D(uLocal_979[1])) && __LIB_0__::func_665(Global_35, uLocal_979[1], 1, 1) > 1f)
			{
				__LIB_10__::func_531(cParam0, "FAIL_EMERALD");
				return true;
			}
		}
	}
	return false;
}

bool func_166(int iParam0)
{
	return __LIB_0__::func_27(iLocal_949, iParam0);
}

void func_167()
{
	func_484();
	func_485();
	func_65(16384);
}

void func_168(char[4] cParam0)
{
	if (!func_403(1))
	{
		if (AUDIO::_0x6339C1EA3979B5F7("Search_For_Milly", "LSEMR_Scenes"))
		{
			func_486(1);
		}
	}
	if ((cParam0->f_1 > 3 && iLocal_15 >= 0) && func_166(67108864))
	{
		if (!func_403(2))
		{
			if (AUDIO::_0xAC84686C06184B0D("Fight_Cooper", "LSEMR_Scenes"))
			{
				func_486(2);
			}
		}
	}
	if (iLocal_15 >= 3)
	{
		if (!func_403(4))
		{
			if (AUDIO::_0xAC84686C06184B0D("Retrieve_Debt", "LSEMR_Scenes"))
			{
				func_486(4);
			}
		}
	}
}

void func_170()
{
	vector3 vVar0[24];
	if (!func_487(2))
	{
		if (!__LIB_0__::func_627(94, 0))
		{
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (__LIB_8__::func_779(1))
				{
					StringCopy(&cVar0, "OBJ_SEARCH_GREY", 24);
				}
				else
				{
					StringCopy(&cVar0, "OBJ_SEARCH_LIL", 24);
				}
				if (__LIB_1__::func_422(&cVar0, 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
				{
					func_489(2);
				}
			}
		}
	}
}

int func_171(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (!__LIB_1__::func_220(Global_1392626[0 /*32*/].f_12))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (!Local_212[iVar1 /*91*/].f_88)
		{
			iVar0 = 0;
			if (Local_212[iVar1 /*91*/] == -1)
			{
				Local_212[iVar1 /*91*/] = iVar1;
			}
			if (__LIB_0__::func_29(func_491(&(Local_212[iVar1 /*91*/]))))
			{
				if (__LIB_2__::func_767(func_491(&(Local_212[iVar1 /*91*/])), 0))
				{
					if (Local_212[iVar1 /*91*/] == 1)
					{
						if (__LIB_0__::func_627(94, 0) || __LIB_1__::func_200(94))
						{
							Local_212[iVar1 /*91*/].f_88 = 1;
						}
						else
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_212[iVar1 /*91*/].f_84))
							{
								Local_212[iVar1 /*91*/].f_84 = __LIB_2__::func_965(func_491(&(Local_212[iVar1 /*91*/])), 0, 0, 0, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_212[iVar1 /*91*/].f_84))
								{
									return 0;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_212[iVar1 /*91*/].f_84))
							{
								func_495(&(Local_212[iVar1 /*91*/]));
								func_496(&(Local_212[iVar1 /*91*/]));
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 225, false);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 130, true);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 297, true);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 317, true);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 277, false);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 315, true);
								TASK::TASK_PERSISTENT_CHARACTER(Local_212[iVar1 /*91*/].f_84);
								MISC::_0xE98D55C5983F2509(Local_212[iVar1 /*91*/].f_84);
								__LIB_0__::func_928(&(cParam0->f_2106), Local_212[iVar1 /*91*/].f_84, func_497(&(Local_212[iVar1 /*91*/])), 0);
								if (Local_212[iVar1 /*91*/] == 0 || Local_212[iVar1 /*91*/] == 4)
								{
									Local_212[iVar1 /*91*/].f_89 = 1;
								}
								if (Local_212[iVar1 /*91*/] == 2)
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(Local_212[iVar1 /*91*/].f_84, "0827_S_M_M_LiveryWorker_01_WHITE_03");
								}
								Local_212[iVar1 /*91*/].f_88 = 1;
							}
							else
							{
								__LIB_4__::func_193(func_491(&(Local_212[iVar1 /*91*/])));
							}
							Jump @545; //curOff = 481
							if (Local_212[iVar1 /*91*/] == 0 || Local_212[iVar1 /*91*/] == 4)
							{
								__LIB_4__::func_193(func_491(&(Local_212[iVar1 /*91*/])));
							}
							else
							{
								Local_212[iVar1 /*91*/].f_88 = 1;
								Local_212[iVar1 /*91*/].f_1 = 5;
							}
							iVar1++;
						}
						return iVar0;
					}
				}
			}
		}
	}
}

void func_172(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_10__::func_235(*cParam0, 4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_212[iVar0 /*91*/].f_88)
		{
			if (Local_212[iVar0 /*91*/].f_1 >= 1)
			{
				if ((!__LIB_0__::func_75(&(Local_212[iVar0 /*91*/].f_81)) || __LIB_0__::func_264(&(Local_212[iVar0 /*91*/].f_81)) < 5f) && !ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84))
				{
					PED::SET_PED_RESET_FLAG(Local_212[iVar0 /*91*/].f_84, 49, true);
				}
			}
			if (PED::IS_PED_DEAD_OR_DYING(Local_212[iVar0 /*91*/].f_84, true) && Local_212[iVar0 /*91*/].f_1 != 5)
			{
				func_499(&(Local_212[iVar0 /*91*/]));
				__LIB_1__::func_148(&(Local_212[iVar0 /*91*/].f_81));
				Local_212[iVar0 /*91*/].f_1 = 5;
			}
			switch (Local_212[iVar0 /*91*/].f_1)
			{
				case 0:
					if (((!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && __LIB_0__::func_266(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1)) && !PED::IS_PED_FLEEING(Local_212[iVar0 /*91*/].f_84)) && !PED::IS_PED_IN_COMBAT(Local_212[iVar0 /*91*/].f_84, 0))
					{
						func_500(&(Local_212[iVar0 /*91*/]));
						Local_212[iVar0 /*91*/].f_1 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && !__LIB_0__::func_266(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1))
					{
						func_499(&(Local_212[iVar0 /*91*/]));
						__LIB_6__::func_786(&(Local_212[iVar0 /*91*/].f_2), 0);
						Local_212[iVar0 /*91*/].f_1 = 0;
					}
					func_396(&(Local_212[iVar0 /*91*/].f_84), &(Local_212[iVar0 /*91*/].f_2), 8f, &(Local_212[iVar0 /*91*/].f_63), 5f, 3, 0, "", 2, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(Local_212[iVar0 /*91*/].f_2)))
					{
						func_502(&(Local_212[iVar0 /*91*/]));
						func_489(1);
						Local_212[iVar0 /*91*/].f_1 = 2;
					}
					break;
				case 2:
					if (!__LIB_6__::func_903("IN_EMR_PLAYR"))
					{
						if (__LIB_10__::func_513(&(cParam0->f_2106), "IN_EMR_PLAYR", 0))
						{
						}
					}
					else if (__LIB_8__::func_684("IN_EMR_PLAYR"))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(Local_212[iVar0 /*91*/].f_84, &Local_850);
						TASK::_0xE7FA07624574B79A(Local_212[iVar0 /*91*/].f_84, Global_35, 1, 1, 7500f, 1, 0, 0, 0);
						Local_212[iVar0 /*91*/].f_1 = 3;
					}
					break;
				case 3:
					if (!__LIB_8__::func_684("IN_EMR_PLAYR"))
					{
						if (((!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && !__LIB_0__::func_266(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1)) && !__LIB_6__::func_903(Local_212[iVar0 /*91*/].f_86)) && !__LIB_6__::func_903(Local_212[iVar0 /*91*/].f_87))
						{
							__LIB_6__::func_786(&(Local_212[iVar0 /*91*/].f_2), 0);
							Local_212[iVar0 /*91*/].f_1 = 0;
						}
						else if (Local_212[iVar0 /*91*/].f_85 < func_505(&(Local_212[iVar0 /*91*/])))
						{
							if (!__LIB_6__::func_903(Local_212[iVar0 /*91*/].f_86))
							{
								if (__LIB_10__::func_513(&(cParam0->f_2106), Local_212[iVar0 /*91*/].f_86, 0))
								{
								}
							}
							else if (__LIB_8__::func_684(Local_212[iVar0 /*91*/].f_86))
							{
								Local_212[iVar0 /*91*/].f_85++;
								Local_212[iVar0 /*91*/].f_1 = 4;
							}
						}
						else if (!__LIB_6__::func_903(Local_212[iVar0 /*91*/].f_87))
						{
							if (__LIB_10__::func_513(&(cParam0->f_2106), Local_212[iVar0 /*91*/].f_87, 0))
							{
							}
						}
						else if (__LIB_8__::func_684(Local_212[iVar0 /*91*/].f_87))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_212[iVar0 /*91*/].f_84, false);
							Local_212[iVar0 /*91*/].f_85++;
							func_499(&(Local_212[iVar0 /*91*/]));
							func_506(&(Local_212[iVar0 /*91*/]));
							__LIB_1__::func_148(&(Local_212[iVar0 /*91*/].f_81));
							Local_212[iVar0 /*91*/].f_1 = 5;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && !__LIB_0__::func_266(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1))
					{
						__LIB_6__::func_786(&(Local_212[iVar0 /*91*/].f_2), 0);
						Local_212[iVar0 /*91*/].f_1 = 0;
					}
					break;
				case 4:
					if (!__LIB_8__::func_684(Local_212[iVar0 /*91*/].f_86))
					{
						if (Local_212[iVar0 /*91*/].f_89)
						{
							func_507(0, 1419.59f, 379.1001f, 88.97112f, 15f);
							iVar1 = 0;
							while (iVar1 < 7)
							{
								if (Local_212[iVar1 /*91*/].f_88)
								{
									func_499(&(Local_212[iVar1 /*91*/]));
									func_506(&(Local_212[iVar1 /*91*/]));
								}
								iVar1++;
							}
							__LIB_1__::func_148(&(Local_212[iVar0 /*91*/].f_81));
							Local_212[iVar0 /*91*/].f_1 = 5;
						}
						else
						{
							__LIB_6__::func_786(&(Local_212[iVar0 /*91*/].f_2), 0);
							Local_212[iVar0 /*91*/].f_1 = 0;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_212[iVar0 /*91*/].f_84, false);
					}
					break;
				case 5:
					if (PED::IS_PED_DEAD_OR_DYING(Local_212[iVar0 /*91*/].f_84, true))
					{
						if (!Local_212[iVar0 /*91*/].f_90)
						{
							func_499(&(Local_212[iVar0 /*91*/]));
							Local_212[iVar0 /*91*/].f_90 = 1;
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_173(char[4] cParam0)
{
	if (!func_487(4))
	{
		if (BUILTIN::VDIST2(Global_36, Global_1392626[*cParam0 /*32*/].f_24) <= (25f * 25f))
		{
			if ((!__LIB_0__::func_270() && !__LIB_6__::func_904()) && __LIB_10__::func_235(*cParam0, 4))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_70[1 /*19*/]) >= 83.3f)
				{
					__LIB_1__::func_422("OBJ_CONFRONT_LIL", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_489(4);
				}
			}
		}
	}
}

void func_174(char[4] cParam0)
{
	func_509(cParam0);
	func_510(cParam0);
	if (__LIB_0__::func_1(cParam0->f_16, 2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1392626[*cParam0 /*32*/].f_11))
		{
			if (__LIB_0__::func_266(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 20f, 1, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_979[0], -1, 0, 51, 0);
			}
			else if (!__LIB_0__::func_266(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 25f, 1, 1))
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
			}
		}
	}
}

int func_188(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[0]))
	{
		return 1;
	}
	func_529();
	if (__LIB_0__::func_272(uLocal_979[0], 1))
	{
		Global_1392626[*uParam0 /*32*/].f_11 = uLocal_979[0];
		PLAYER::_0xA342495F93B7B838(PLAYER::PLAYER_ID(), uLocal_979[0]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_979[0], iLocal_983);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[0], true);
		ENTITY::SET_ENTITY_COORDS(uLocal_979[0], vLocal_964[0 /*3*/], true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_979[0], fLocal_971[0]);
		PED::_0x923583741DC87BCE(uLocal_979[0], "Lilly_Millet");
		PED::SET_PED_CONFIG_FLAG(uLocal_979[0], 315, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_979[0]);
		__LIB_4__::func_490(uLocal_979[0]);
		func_531(uLocal_979[0], 0);
		PED::_0xAAB050DA48B57978(uLocal_979[0], "Default_Nervous", Global_35, -1, 4);
		__LIB_2__::func_190(uLocal_979[0], __LIB_1__::func_760(joaat("REWARD_PED_SMALL"), 0, -1));
		return 1;
	}
	return 0;
}

int func_189()
{
	if (__LIB_0__::func_29(594))
	{
		if (!__LIB_1__::func_220(Global_1392626[0 /*32*/].f_12))
		{
			return 0;
		}
		if (!__LIB_5__::func_194(594, 1))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_272(uLocal_979[1], 0))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 38, true);
		PED::_0x6569F31A01B4C097(uLocal_979[1], 6, false);
		PED::_0x6569F31A01B4C097(uLocal_979[1], 4, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 315, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[1], true);
		__LIB_1__::func_991(uLocal_979[1], 0);
		__LIB_4__::func_490(uLocal_979[1]);
		__LIB_3__::func_579(uLocal_979[1]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_979[1], iLocal_982);
		ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_979[1], 145);
		ENTITY::_SET_ENTITY_HEALTH(uLocal_979[1], 145, 0);
		return 1;
	}
	else if (!func_537(0, &(uLocal_979[1]), iLocal_974, vLocal_964[1 /*3*/], fLocal_971[1], 1, 1, 0, 1, 1, 1, 1))
	{
		return 0;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)
{
	if (!Local_70[iParam0 /*19*/].f_17)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[iParam0 /*19*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_70[iParam0 /*19*/], true, false))
			{
				Local_70[iParam0 /*19*/].f_17 = 1;
				if (iParam0 == 2)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_70[iParam0 /*19*/], "Lilly", &(Local_70[iParam0 /*19*/].f_5), false, 0, 2))
					{
						vLocal_958 = { Local_70[iParam0 /*19*/].f_5 };
					}
				}
				return Local_70[iParam0 /*19*/].f_17;
			}
		}
		else
		{
			Local_70[iParam0 /*19*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_70[iParam0 /*19*/].f_1, iParam1, Local_70[iParam0 /*19*/].f_18, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[iParam0 /*19*/]))
			{
				func_538(iParam0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_70[iParam0 /*19*/]);
			}
		}
	}
	return Local_70[iParam0 /*19*/].f_17;
}

void func_191(char[4] cParam0)
{
	if (!func_166(16384))
	{
		if (ENTITY::_0x6BFBDC46139C45AB(vLocal_964[0 /*3*/]))
		{
			func_167();
		}
	}
	__LIB_3__::func_594(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]), vLocal_964[0 /*3*/], 0f, 0f, 0f, 12f, 12f, 12f, 0, 0, 1, 0, 0);
	__LIB_0__::func_928(&(cParam0->f_2106), Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&(cParam0->f_2106), uLocal_979[0], "LOAN_EMR_WOMAN", 0);
	__LIB_0__::func_928(&(cParam0->f_2106), uLocal_979[1], "LOAN_EMR_MAN", 0);
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
	__LIB_0__::func_928(&(Local_992.f_81), Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&(Local_992.f_81), uLocal_979[1], "LOAN_EMR_MAN", 0);
}

char* func_203()
{
	return "LSEMR_MCS1";
}

void func_204(var uParam0)
{
	__LIB_6__::func_815(&(Local_1365[0 /*61*/]), uLocal_979[0]);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[1 /*19*/]);
	}
	WEAPON::_0xD53846B9C931C181(Global_35, joaat("WEAPON_UNARMED"), 45f);
	WEAPON::_0xD53846B9C931C181(uLocal_979[1], joaat("WEAPON_UNARMED"), 45f);
}

void func_206(var uParam0)
{
	if (__LIB_10__::func_551(uParam0, func_203()))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[1 /*19*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[1 /*19*/]);
			}
		}
		if (!func_166(1024))
		{
			if (__LIB_10__::func_304(uParam0) > 23000)
			{
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Face_Dirt", 1f, 1f);
				func_65(1024);
			}
		}
	}
	func_569(uParam0, 0);
	if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		if (!func_166(1024))
		{
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Face_Dirt", 1f, 1f);
			func_65(1024);
			iLocal_1256 = 1;
		}
	}
}

bool func_217(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_10__::func_278(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1662 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1663 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1665 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1663)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1664 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1664 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1665)
		{
			uParam0->f_1667 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1668 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_10__::func_406(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_10__::func_612(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_10__::func_278(uParam0, 524288))
				{
					func_582(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__::func_291(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_10__::func_475(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_10__::func_278(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
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
			if (uParam0->f_1450 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_10__::func_292(uParam0, uParam0->f_1450))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_10__::func_559(uParam0);
			}
		}
	}
	bVar0 = __LIB_10__::func_473(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_10__::func_278(uParam0, 268435456) && bVar1) && !__LIB_10__::func_278(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668);
			if (uParam0->f_1450 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[uParam0->f_1450 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1668)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_10__::func_293(uParam0, 131072);
				__LIB_10__::func_293(uParam0, 268435456);
			}
		}
		if (__LIB_10__::func_280(uParam0, 64) || (uParam0->f_1450 >= 0 && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_10__::func_278(uParam0, 131072))
	{
		__LIB_10__::func_386(uParam0);
		if (!__LIB_10__::func_278(uParam0, 262144))
		{
			if ((bVar0 && __LIB_10__::func_278(uParam0, 65536)) || __LIB_10__::func_278(uParam0, 131072))
			{
				__LIB_10__::func_293(uParam0, 32768);
				__LIB_10__::func_291(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1535 = 1;
				__LIB_10__::func_475(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_18__::func_234(uParam0, iParam5);
		__LIB_10__::func_294(uParam0);
		if (!__LIB_10__::func_295(uParam0, 1))
		{
			__LIB_10__::func_350(uParam0);
		}
		__LIB_10__::func_296(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_10__::func_540(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_10__::func_480(uParam0);
			break;
		case 2:
			__LIB_10__::func_541(uParam0);
			break;
		case 3:
			if (__LIB_10__::func_277(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1638));
				__LIB_10__::func_291(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_10__::func_278(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_10__::func_297(uParam0))
				{
					__LIB_10__::func_291(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_10__::func_298(uParam0))
				{
					__LIB_10__::func_291(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || __LIB_0__::func_264(&(uParam0->f_1638)) >= 15f)
			{
				if (__LIB_10__::func_467(uParam0, iParam5))
				{
					if (__LIB_10__::func_299(uParam0))
					{
						uParam0->f_1451 = __LIB_10__::func_351(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_10__::func_291(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_10__::func_291(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_10__::func_475(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_467(uParam0, iParam5))
			{
				__LIB_10__::func_475(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_219(char[4] cParam0)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 20f;
	if (!__LIB_0__::func_1(cParam0->f_16, 2))
	{
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (__LIB_0__::func_266(Global_1392626[*cParam0 /*32*/].f_11, Global_36, fVar0, 1, 1))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				if (func_607(vVar1))
				{
					__LIB_0__::func_7(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_1392626[*cParam0 /*32*/].f_11) && __LIB_0__::func_266(Global_1392626[*cParam0 /*32*/].f_11, Global_36, fVar0, 1, 1))
	{
	}
}

int func_220(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		__LIB_10__::func_609(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_612(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_220(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(uParam0);
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
					__LIB_17__::func_774(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (func_619(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*uParam0, iParam1, uParam3))
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
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_17__::func_776(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_619(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_774(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
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
							if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
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
							if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_10__::func_245(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!__LIB_10__::func_482(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_1__::func_148(&(iParam1->f_18));
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
					__LIB_17__::func_776(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_619(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_774(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_6__::func_835(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_223(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
	{
		if (!__LIB_0__::func_474(169))
		{
			__LIB_1__::func_240(169, 0);
		}
		else if (!__LIB_1__::func_262(169) && !__LIB_3__::func_829(169))
		{
			func_635();
		}
	}
	switch (iLocal_17)
	{
		case 0:
			if (func_166(16384))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_989))
				{
					iLocal_989 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1429.055f, 381.8093f, 91.05302f, 0f, 0f, -13.12048f, 9.152395f, 13.39776f, 7.020107f, "ILO allow vol");
				}
				else if ((__LIB_0__::func_665(uLocal_979[0], Global_35, 1, 1) <= 25f && PED::_0x164CECC59E70DF86(uLocal_979[0], 80f)) && __LIB_2__::func_215(Global_35, uLocal_979[0], 0, 1114636288 /* Float: 60f */, 0))
				{
					iLocal_17 = 1;
				}
			}
			break;
		case 1:
			CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_979[0], 0f, 0f, 0f, true, 3500, 2000, 2000, 0);
			__LIB_10__::func_415(*cParam0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (Local_212[iVar0 /*91*/].f_88)
				{
					func_499(&(Local_212[iVar0 /*91*/]));
					func_638(Local_212[iVar0 /*91*/].f_84);
				}
				iVar0++;
			}
			func_639(1, "bIdletoArgue", 1);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uLocal_979[0], "LSEM_LEADIN", 0f, 0f, 0f, 0, "LSEM_PRE");
			iLocal_17 = 2;
			break;
		case 2:
			if (!bLocal_1263)
			{
				if (func_640())
				{
					bLocal_1263 = true;
				}
			}
			else
			{
				if (func_396(&(uLocal_979[0]), &(Local_1365[0 /*61*/]), 15f, &Local_1427, 0.25f, 3, 0, "", 4, iLocal_989, 2, -1082130432 /* Float: -1f */) > -1)
				{
					__LIB_2__::func_411(&(Local_1427[0 /*17*/]), 0, 0);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_PRE");
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uLocal_979[0], "LSEM_LEADIN_ACTIVE", 0f, 0f, 0f, uLocal_979[0], "LSEM_ACTIVE");
					iLocal_17 = 3;
				}
				if (iLocal_17 == 2)
				{
					fVar1 = __LIB_0__::func_665(uLocal_979[0], Global_35, 0, 1);
					if (fVar1 > 5f)
					{
						if (__LIB_2__::func_466(&(Local_1427[0 /*17*/]), 0, 0))
						{
							__LIB_2__::func_411(&(Local_1427[0 /*17*/]), 0, 0);
						}
					}
					else if (!__LIB_2__::func_466(&(Local_1427[0 /*17*/]), 0, 0))
					{
						__LIB_2__::func_411(&(Local_1427[0 /*17*/]), 1, 0);
					}
				}
			}
			break;
		case 3:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_991))
			{
				iLocal_991 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1422.077f, 387.7596f, 90.25286f, 0f, 0f, -14.70995f, 5.068347f, 13.97886f, 4.026019f);
			}
			__LIB_10__::func_609(&(uLocal_979[0]), &(Local_1365[0 /*61*/]), &Local_1427, 15f, -1082130432 /* Float: -1f */, 0);
			if (func_642())
			{
				if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_MCS1_LI", 0))
				{
					if (AUDIO::_0x1ECC76792F661CF5("LS_EMR_IG2_P1"))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION("LS_EMR_IG2_P1", false, false);
					}
					iLocal_17 = 4;
				}
			}
			break;
		case 4:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_991))
			{
				iLocal_991 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1422.077f, 387.7596f, 90.25286f, 0f, 0f, -14.70995f, 5.068347f, 13.97886f, 4.026019f);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			__LIB_1__::func_538(0);
			__LIB_10__::func_609(&(uLocal_979[0]), &(Local_1365[0 /*61*/]), &Local_1427, 15f, -1082130432 /* Float: -1f */, 0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!__LIB_0__::func_163(Global_35, 716706914))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_70[1 /*19*/]) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_70[1 /*19*/]) > 0.98f)
			{
				__LIB_0__::func_172(iLocal_991);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_ACTIVE");
				return true;
			}
			break;
	}
	return false;
}

int func_226(char[4] cParam0)
{
	if (func_166(512))
	{
		return 8;
	}
	__LIB_3__::func_10(Global_35);
	return 6;
}

void func_228(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_979[0], cLocal_912, vLocal_23[iParam0 /*3*/], 1))
	{
		if (bParam5)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_979[0], cLocal_912, vLocal_23[iParam0 /*3*/], Global_35, -1, fParam1, fParam2, iParam3, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(uLocal_979[0], cLocal_912, vLocal_23[iParam0 /*3*/], fParam1, fParam2, -1, iParam3, 0f, false, 0, false, 0, false);
		}
		if (bParam4)
		{
			PED::_0x2208438012482A1A(uLocal_979[0], false, false);
		}
		__LIB_10__::func_595(iParam0);
		__LIB_3__::func_689(uLocal_979[1]);
		__LIB_3__::func_689(Global_35);
	}
}

void func_229()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!Local_153[iVar0 /*10*/].f_9)
		{
			Local_153[iVar0 /*10*/] = 0;
			Local_153[iVar0 /*10*/].f_9 = 0;
			Local_153[iVar0 /*10*/].f_1 = -1;
		}
		iVar0++;
	}
}

void func_329(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		Local_1206.f_3 = Global_35;
		Local_1206.f_7 = iParam0;
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_979[0], &Local_1206);
	}
}

int func_343(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_10__::func_348(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		func_789(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false))
				{
					__LIB_18__::func_250(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_10__::func_302(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_10__::func_459(uParam4);
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
				__LIB_10__::func_466(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (__LIB_18__::func_248(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_18__::func_250(uParam4, &cParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_796(uParam4);
			if (__LIB_10__::func_302(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_10__::func_460(uParam4, 1))
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
				func_789(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_10__::func_303(uParam4) - __LIB_10__::func_304(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_10__::func_352(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_10__::func_304(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_10__::func_305(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_10__::func_547(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_228);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_10__::func_288(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_10__::func_304(uParam4) <= 5000) && __LIB_10__::func_304(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_285), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_10__::func_304(uParam4) >= 5000 && __LIB_10__::func_304(uParam4) <= (__LIB_10__::func_303(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_10__::func_305(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_10__::func_547(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_228))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_10__::func_302(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
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
	return 0;
}

void func_348()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[iVar0 /*19*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[iVar0 /*19*/], false))
			{
				if (func_806(iVar0))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[iVar0 /*19*/]);
				}
			}
		}
		iVar0++;
	}
}

void func_349(char[4] cParam0)
{
	func_510(cParam0);
	func_509(cParam0);
	func_388(cParam0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_LOOTING"), 0, 0, -1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, -1);
	__LIB_1__::func_538(0);
	switch (iLocal_14)
	{
		case 0:
			func_807(cParam0);
			break;
		case 1:
			func_808();
			if (iLocal_1256 == 1)
			{
				__LIB_1__::func_422("OBJ_CONVINCE_EMERALD", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_489(8);
				iLocal_1256 = 0;
			}
			if (!func_166(33554432))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[0 /*19*/]))
				{
					if (((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[0 /*19*/], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_70[0 /*19*/]) >= 0.86f) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[0 /*19*/], false)) || func_806(Local_70[0 /*19*/]))
					{
						func_809();
						func_65(33554432);
					}
				}
				else
				{
					func_809();
					func_65(33554432);
				}
			}
			if (__LIB_0__::func_272(uLocal_979[1], 2) && !TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
			{
				if (!__LIB_6__::func_904())
				{
					if (!func_487(8))
					{
						if (__LIB_5__::func_352("OBJ_CONVINCE_EMERALD"))
						{
							func_489(8);
						}
						else if (__LIB_0__::func_665(Global_35, uLocal_979[1], 1, 1) > 10f)
						{
							__LIB_1__::func_422("OBJ_CONVINCE_EMERALD", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_489(8);
						}
					}
				}
				if (!__LIB_0__::func_393(uLocal_979[1], iLocal_989, 0, 1))
				{
					if (PED::_0xF3C873ED0C595109(uLocal_979[1]) != 4096)
					{
						PED::_0x789DABD18E9024DB(uLocal_979[1], 4096, 1);
					}
				}
				else if (PED::_0xF3C873ED0C595109(uLocal_979[1]) == 4096)
				{
					PED::_0xEAE3B5B019C8D23F(uLocal_979[1], 4096);
				}
				if (func_166(32768))
				{
					iLocal_14 = 2;
				}
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("LSER_STOP");
				if (!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_337(), "OBJ_LOOT"))
				{
					__LIB_10__::func_561(cParam0, "OBJ_LOOT", 0f, 0f, 0f);
				}
				if (func_813(2))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
					{
						ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 2, 0);
						ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 0, 0);
						ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 7, 0);
						func_814(uLocal_979[1]);
						if (MAP::_DOES_ENTITY_HAVE_BLIP(uLocal_979[1]))
						{
							__LIB_3__::func_608(uLocal_979[1]);
						}
					}
					__LIB_10__::func_528(&iLocal_978, uLocal_979[1], 203020899, "PICKUP_DEBT");
					iLocal_14 = 2;
				}
			}
			break;
		case 2:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				func_816(cParam0);
				if (!func_166(16))
				{
					if (func_166(32768))
					{
						func_67(2);
					}
					else
					{
						func_67(3);
					}
				}
				else
				{
					func_67(5);
				}
			}
			break;
		case 3:
			break;
	}
}

bool func_350(char[4] cParam0)
{
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_LOOTING"), 0, 0, -1);
	func_510(cParam0);
	func_509(cParam0);
	func_388(cParam0);
	switch (iLocal_14)
	{
		case 0:
			func_817();
			break;
		case 1:
			func_818(cParam0);
			if (__LIB_0__::func_272(uLocal_979[1], 0))
			{
				if (iLocal_19 == 4)
				{
					iLocal_14 = 2;
				}
			}
			else
			{
				func_67(5);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_351(char[4] cParam0)
{
	func_510(cParam0);
	func_509(cParam0);
	func_388(cParam0);
	switch (iLocal_14)
	{
		case 0:
			func_819(cParam0);
			break;
		case 1:
			if (!__LIB_6__::func_903("LS_EMR_SUR3"))
			{
				iLocal_14 = 2;
			}
			break;
		case 2:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				iLocal_14 = 0;
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_3__::func_732(0);
				__LIB_0__::func_325(&iLocal_978);
				return true;
			}
			break;
		case 3:
			break;
	}
	return false;
}

bool func_352(char[4] cParam0)
{
	var uVar0;
	func_510(cParam0);
	func_388(cParam0);
	switch (iLocal_14)
	{
		case 0:
			func_820(cParam0);
			break;
		case 1:
			func_818(cParam0);
			if ((ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && MISC::_0x7A76104CC2CC69E8(uLocal_979[1], 1, 1)) && PED::GET_PED_CONFIG_FLAG(uLocal_979[1], 11, true))
			{
				if (__LIB_5__::func_463() || __LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_KO_ATT", 0))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 11, false);
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == uLocal_979[1]) && !__LIB_5__::func_463())
			{
				if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_KO_ATT", 0))
				{
				}
			}
			if (((__LIB_0__::func_665(Global_35, uLocal_979[0], 1, 1) <= 3.5f && !bLocal_1257) && !__LIB_5__::func_463()) && !ENTITY::_0x8DE41E9902E85756(uLocal_979[1]))
			{
				if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_POCKETS", 0))
				{
					bLocal_1257 = true;
				}
			}
			else if (ENTITY::_0x8DE41E9902E85756(uLocal_979[1]))
			{
				bLocal_1257 = true;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
			{
			}
			else if (((!MAP::_DOES_ENTITY_HAVE_BLIP(uLocal_979[1]) && !__LIB_3__::func_578(uLocal_979[1])) && !ENTITY::_0x8E10DF0FFA63FB65(ENTITY::GET_ENTITY_COORDS(uLocal_979[1], false, false), 2f, 1)) && !__LIB_1__::func_707(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 1, 0))
			{
				__LIB_10__::func_528(&iLocal_978, uLocal_979[1], 203020899, "PICKUP_DEBT");
			}
			else if (!__LIB_3__::func_578(uLocal_979[1]))
			{
			}
			if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 1, 0) && (__LIB_3__::func_578(uLocal_979[1]) || iLocal_1264 == 1))
			{
				func_409();
				if (func_813(2))
				{
					if (__LIB_2__::func_215(uLocal_979[0], Global_35, 1, 15f, 0))
					{
						if (__LIB_0__::func_272(uLocal_979[0], 0))
						{
							if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_GRIEF", 0))
							{
								bLocal_1258 = true;
								iLocal_14 = 2;
							}
						}
						else
						{
							iLocal_14 = 2;
						}
					}
					else
					{
						iLocal_14 = 2;
					}
				}
			}
			else if ((((((((ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 0, Global_35) == 0 && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 2, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 1, Global_35) == 0) && !ENTITY::_0x8DE41E9902E85756(uLocal_979[1])) && !func_822(Global_35, 0)) && !func_822(Global_35, 2)) && !func_822(Global_35, 1)) && !PED::_0x3AEC4A410ECAF30D(uLocal_979[1])) && __LIB_0__::func_665(Global_35, uLocal_979[1], 1, 1) <= 1f)
			{
				func_72(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 1, 0, 0, 0, -897553835, 0, 0, 0, 0);
				func_73(uLocal_979[1], 1, 0);
				iLocal_1264 = 1;
			}
			break;
		case 2:
			if (!AUDIO::_0xD89504D9D7D5057D("LS_EMR_GRIEF") || func_166(1))
			{
				__LIB_8__::func_227(75, 1);
				func_824();
				return true;
			}
			break;
		case 3:
			break;
	}
	return false;
}

void func_358(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_72(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_72(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_72(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_72(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_72(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_72(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_72(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_72(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_72(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_72(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_72(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_72(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_72(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_852();
						func_853(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_72(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_358(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_358(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_358(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_72(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_886();
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
											func_72(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
void func_359(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		__LIB_8__::func_985(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (__LIB_0__::func_746(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		__LIB_1__::func_559(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_386()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[1 /*19*/], false))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_70[1 /*19*/], sLocal_913[7]))
		{
			if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_70[1 /*19*/], sLocal_913[7]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_70[1 /*19*/], sLocal_913[7]))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_70[1 /*19*/], sLocal_913[7], true);
			}
			else if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_70[1 /*19*/], sLocal_913[7]) && ANIMSCENE::_0x0DF57F86FE71DBE5(Local_70[1 /*19*/], sLocal_913[7]))
			{
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_387(bool bParam0)
{
	PED::_0xEEED8FAFEC331A70(uLocal_979[0], Global_36, 1);
	if (!__LIB_0__::func_163(uLocal_979[0], 518218985))
	{
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(uLocal_979[0], true, false);
		}
		TASK::TASK_SMART_FLEE_PED(uLocal_979[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
	}
	__LIB_10__::func_592(3);
}

void func_388(char[4] cParam0)
{
	int iVar0;
	switch (iLocal_875)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_877))
			{
				iLocal_877 = __LIB_8__::func_931(iLocal_976, vLocal_878, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_877, 146, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_877, 178, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_877, 168, true);
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_877, "0401_U_M_M_RhdGunsmith_01");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, 0);
				__LIB_0__::func_928(&(cParam0->f_2106), iLocal_877, "LSER_FightWatcher", 0);
				iLocal_875 = 1;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_877))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_877, vLocal_881, 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!__LIB_0__::func_163(iLocal_877, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_877, vLocal_881, 1.5f, 20000, 0.25f, 0, 58.6493f);
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1500, -1f, -1f, -1f);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 0, true, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_877, iVar0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_877, &Local_887);
					iLocal_875 = 2;
				}
			}
			break;
		case 2:
			if (cParam0->f_1 == 8)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_877, 1, 1) < 5f || __LIB_0__::func_665(uLocal_979[1], iLocal_877, 1, 1) < 5f)
				{
					PED::_0xEEED8FAFEC331A70(iLocal_877, Global_36, 3);
					iLocal_875 = iLocal_876;
				}
			}
			else if (cParam0->f_1 == 9 || cParam0->f_1 == 11)
			{
				iLocal_875 = 5;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_877))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_877, vLocal_884, 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!__LIB_0__::func_163(iLocal_877, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_877, vLocal_884, 1.5f, 20000, 0.25f, 0, __LIB_3__::func_978(iLocal_877, Global_35, 1));
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1500, -1f, -1f, -1f);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 0, true, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_877, iVar0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_877, &Local_887);
					iLocal_876 = 4;
					iLocal_875 = 2;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_877))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_877, vLocal_881, 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!__LIB_0__::func_163(iLocal_877, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_877, vLocal_881, 1.5f, 20000, 0.25f, 0, __LIB_3__::func_978(iLocal_877, Global_35, 1));
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1500, -1f, -1f, -1f);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), 0, true, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_877, iVar0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_877, &Local_887);
					iLocal_876 = 3;
					iLocal_875 = 2;
				}
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_877) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_877))
			{
				if (!__LIB_0__::func_75(&uLocal_943))
				{
					__LIB_1__::func_148(&uLocal_943);
				}
				else if (__LIB_1__::func_871(&uLocal_943) > 2000)
				{
					if (__LIB_2__::func_122(iLocal_877, "STEAL_MULTIPLE_ITEM", -1050591818, Global_35, 1, "0401_U_M_M_RhdGunsmith_01", 2, 1))
					{
						iLocal_875 = 6;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(iLocal_877))
			{
				iLocal_875 = 7;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_877))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_877))
				{
					if (LAW::_0xF0B67BAD53C35BD9(iLocal_877, Global_35, uLocal_979[1], Global_36, joaat("CRIME_ROBBERY")) || LAW::_0x0EAF918F751F27BA(iLocal_877))
					{
						if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_WANTED", 0))
						{
							__LIB_2__::func_788(&iLocal_877, 1, 1, 1);
							iLocal_875 = 7;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(iLocal_877))
			{
				iLocal_875 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_389()
{
	var uVar0;
	__LIB_2__::func_602(&(Local_1330[0 /*17*/]), "INTERACT_ENCOURAGE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_1330[1 /*17*/]), "INTERACT_SCOLD", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(uLocal_979[0], &uVar0));
}

void func_394()
{
	__LIB_2__::func_411(&(Local_1330[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_1330[1 /*17*/]), 0, 0);
}

int func_396(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_220(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

bool func_397()
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_0__::func_272(uLocal_979[1], 0))
	{
		if (!__LIB_0__::func_163(uLocal_979[1], 518218985))
		{
			PED::SET_PED_KEEP_TASK(uLocal_979[1], true);
			TASK::TASK_SMART_FLEE_PED(uLocal_979[1], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
		}
		if (!__LIB_0__::func_266(uLocal_979[1], Global_36, 60f, 1, 1))
		{
			bVar0 = true;
		}
	}
	if (__LIB_0__::func_272(uLocal_979[0], 0))
	{
		if (!__LIB_0__::func_163(uLocal_979[0], 518218985))
		{
			TASK::TASK_SMART_FLEE_PED(uLocal_979[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
		}
		if (!__LIB_0__::func_266(uLocal_979[0], Global_36, 60f, 1, 1) && bVar0)
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

void func_398()
{
	func_74();
	if (__LIB_0__::func_272(uLocal_979[1], 0))
	{
		PED::SET_PED_KEEP_TASK(uLocal_979[1], true);
	}
}

int func_399(int iParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 1;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return 0;
	}
	else if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		if (fParam1 == -1f)
		{
			fParam1 = __LIB_0__::func_94(iParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_400(var uParam0)
{
	if (!__LIB_0__::func_272(uLocal_979[0], 0))
	{
		return true;
	}
	else
	{
		func_510(uParam0);
		func_509(uParam0);
		if (func_399(uLocal_979[1], -1f, 125f) && func_399(uLocal_979[0], -1f, 125f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_979[1], true, false);
				ENTITY::SET_ENTITY_COORDS(uLocal_979[1], 1454.951f, 319.6451f, 88.4759f, true, false, true, true);
			}
			return true;
		}
	}
	return false;
}

void func_402()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
	}
}

bool func_403(int iParam0)
{
	return __LIB_0__::func_27(iLocal_951, iParam0);
}

void func_406()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_212[iVar0 /*91*/].f_84) && __LIB_2__::func_763(func_491(&(Local_212[iVar0 /*91*/])), 0))
		{
			func_506(&(Local_212[iVar0 /*91*/]));
			__LIB_2__::func_753(func_491(&(Local_212[iVar0 /*91*/])), 0, 1, 0, 0);
		}
		func_499(&(Local_212[iVar0 /*91*/]));
		iVar0++;
	}
}

void func_409()
{
	__LIB_0__::func_325(&iLocal_978);
	__LIB_10__::func_597("OBJ_LOOT");
	__LIB_0__::func_769();
}

void func_420()
{
	StringCopy(&(Local_992.f_34), "LS_EMR_COOP_GIV", 64);
	Local_992.f_179 = 1;
	Local_992.f_74 = joaat("MONEY_LOANSHARK_LILLY_DEBT");
	Local_992.f_78 = 0;
	Local_128.f_3 = Global_35;
	Local_128.f_4 = 21030;
	Local_128.f_8 = 4;
	Local_128.f_13 = 2;
	Local_128.f_19 = 4;
	Local_128.f_21 = 4;
	Local_850.f_3 = Global_35;
	Local_850.f_7 = 7500;
	Local_850.f_4 = 21030;
	Local_850.f_8 = 4;
	Local_850.f_13 = 2;
	Local_850.f_19 = 4;
	Local_850.f_21 = 4;
	Local_887.f_3 = Global_35;
	Local_887.f_7 = -1;
	Local_887.f_4 = 21030;
	Local_887.f_8 = 4;
	Local_887.f_13 = 2;
	Local_887.f_19 = 4;
	Local_887.f_21 = 4;
}

void func_421()
{
	vLocal_964[0 /*3*/] = { 1424.431f, 382.2698f, 89.48783f };
	fLocal_971[0] = 263.327f;
	vLocal_964[1 /*3*/] = { 1424.889f, 383.4419f, 89.48783f };
	fLocal_971[1] = 263.327f;
}

void func_422()
{
	Local_70[0 /*19*/] = { func_936("script@proc@loansharking@emerald@leadout@mcs1@leadout", 0) };
	Local_70[1 /*19*/] = { func_936("script@proc@loansharking@emerald@leadin@mcs1@intro", "PBL_Intro") };
	Local_70[2 /*19*/] = { func_936("script@proc@loansharking@emerald@LillySitBench", "Enter") };
	sLocal_913[0] = "Enter";
	sLocal_913[1] = "IDLE";
	sLocal_913[2] = "IKnew";
	sLocal_913[3] = "JustLeave";
	sLocal_913[4] = "WannaLeave";
	sLocal_913[5] = "WhatMore";
	sLocal_913[6] = "WillUPlease";
	sLocal_913[7] = "pl_exit";
	sLocal_913[8] = "pl_leadin_front";
}

void func_423()
{
	func_937();
}

void func_424(var uParam0)
{
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_974);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_975);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_976);
	__LIB_10__::func_575(&(uParam0->f_2052), cLocal_912);
}

void func_467(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	func_986(*uParam0, bParam1);
	if (bParam1)
	{
		func_814(*uParam0);
	}
}

void func_468()
{
	__LIB_10__::func_593(6);
}

int func_477(int iParam0, int iParam1)
{
	var uVar0;
	return func_994(&uVar0, iParam0, iParam1);
}

bool func_482()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
	{
		if (__LIB_0__::func_94(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_979[1], false, false), 1) > 65f)
		{
			func_73(uLocal_979[1], 1, 0);
			return true;
		}
	}
	return false;
}

bool func_483()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(uLocal_979[1]))
		{
			return true;
		}
	}
	return false;
}

void func_484()
{
	if (__LIB_0__::func_272(uLocal_979[0], 0))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_70[1 /*19*/]);
		__LIB_10__::func_592(0);
	}
}

void func_485()
{
	if (__LIB_0__::func_272(uLocal_979[1], 0))
	{
		__LIB_10__::func_593(0);
	}
}

void func_486(int iParam0)
{
	__LIB_1__::func_683(&iLocal_951, iParam0);
}

bool func_487(int iParam0)
{
	return __LIB_0__::func_27(iLocal_950, iParam0);
}

void func_489(int iParam0)
{
	__LIB_1__::func_683(&iLocal_950, iParam0);
}

int func_491(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return 589;
		case 1:
			return 598;
		case 2:
			return 595;
		case 3:
			return 596;
		case 4:
			return 591;
		case 5:
			return 593;
		case 6:
			return 590;
	}
	return -1;
}

void func_495(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			uParam0->f_86 = "IN_EMR_FATHER";
			break;
		case 1:
			if (__LIB_1__::func_187(94))
			{
				uParam0->f_86 = "IN_EMR_SON_KNW1";
			}
			else
			{
				uParam0->f_86 = "IN_EMR_SON";
			}
			break;
		case 2:
			uParam0->f_86 = "IN_EMR_FHAND2";
			break;
		case 3:
			uParam0->f_86 = "IN_EMR_FHAND3";
			break;
		case 4:
			uParam0->f_86 = "IN_EMR_GRDNR";
			break;
		case 5:
			uParam0->f_86 = "IN_EMR_HNDYMN";
			break;
		case 6:
			uParam0->f_86 = "IN_EMR_TRNWRKR";
			break;
	}
}

void func_496(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			uParam0->f_87 = "IN_EMR_FATHER";
			break;
		case 1:
			if (__LIB_1__::func_187(94))
			{
				uParam0->f_87 = "IN_EMR_SON_KNW2";
			}
			else
			{
				uParam0->f_87 = "IN_EMR_SON_F";
			}
			break;
		case 2:
			uParam0->f_87 = "IN_EMR_FHAND2_F";
			break;
		case 3:
			uParam0->f_87 = "IN_EMR_FHAND3_F";
			break;
		case 4:
			uParam0->f_87 = "IN_EMR_GRDNR";
			break;
		case 5:
			uParam0->f_87 = "IN_EMR_HNDYMN_F";
			break;
		case 6:
			uParam0->f_87 = "IN_EMR_TRNWRKRF";
			break;
	}
}

char* func_497(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return "EMR_Father";
		case 1:
			return "EMR_Son1";
		case 2:
			return "EMR_Farmhand2";
		case 3:
			return "EMR_Farmhand3";
		case 4:
			return "EMR_Gardener";
		case 5:
			return "EMR_Handyman";
		case 6:
			return "EMR_TrainStationWorker";
	}
	return "!!Invalid investigation ped";
}

void func_499(var uParam0)
{
	__LIB_2__::func_480(&(uParam0->f_63), 1, 1, 1, 0);
}

void func_500(var uParam0)
{
	__LIB_2__::func_602(&(uParam0->f_63[0 /*17*/]), "OBJ_INVESTI", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(uParam0->f_2), 17);
}

void func_502(var uParam0)
{
	__LIB_2__::func_411(&(uParam0->f_63[0 /*17*/]), 0, 0);
}

int func_505(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
			return 1;
	}
	return 2;
}

void func_506(var uParam0)
{
	if (uParam0->f_85 == 0)
	{
		func_638(uParam0->f_84);
	}
	else if (uParam0->f_85 >= 3)
	{
		func_1006(uParam0->f_84);
	}
	else if (*uParam0 == 1)
	{
		func_1006(uParam0->f_84);
	}
	else
	{
		func_1006(uParam0->f_84);
	}
}

void func_507(int iParam0, vector3 vParam1, float fParam4)
{
	__LIB_0__::func_325(&(Global_1392626[iParam0 /*32*/].f_1));
	__LIB_0__::func_325(&(Global_1392626[iParam0 /*32*/]));
	Global_1392626[iParam0 /*32*/].f_27 = { vParam1 };
	Global_1392626[iParam0 /*32*/].f_4 = fParam4;
	__LIB_10__::func_230(iParam0, 2);
	__LIB_10__::func_526(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
}

void func_509(char[4] cParam0)
{
	if (__LIB_0__::func_272(uLocal_979[1], 8))
	{
		func_1009();
		switch (iLocal_19)
		{
			case 0:
				func_1010();
				break;
			case 1:
				func_1011(cParam0);
				break;
			case 2:
				func_1012();
				break;
			case 3:
				func_1013();
				break;
			case 4:
				func_1014(cParam0);
				break;
			case 5:
				func_1015(cParam0);
				break;
			case 7:
				func_1016();
				break;
			case 8:
				func_1017(cParam0);
				break;
		}
	}
	else if (!TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11) && !PED::GET_PED_CONFIG_FLAG(uLocal_979[1], 11, true))
	{
		if (!func_166(128))
		{
			func_65(128);
			func_1018(16);
		}
	}
}

void func_510(char[4] cParam0)
{
	if (__LIB_0__::func_272(uLocal_979[0], 0))
	{
		switch (iLocal_18)
		{
			case 0:
				func_1019();
				break;
			case 1:
				func_1020(cParam0);
				break;
			case 2:
				func_1021();
				break;
			case 4:
				func_1022();
				break;
			case 7:
				func_1023();
				break;
			case 5:
				func_1024();
				break;
			case 8:
				func_1025(cParam0);
				func_1026();
				break;
			case 9:
				func_1027(cParam0);
				func_1026();
				break;
			case 10:
				func_1028();
				func_1026();
				break;
		}
	}
	else if (!func_166(1))
	{
		func_65(1);
	}
}

void func_529()
{
	vector3 vVar0;
	vVar0 = { vLocal_964[0 /*3*/] };
	__LIB_3__::func_618(vVar0, 10f, 1, 0, 0, 0, 0);
	func_537(0, &(uLocal_979[0]), iLocal_975, vVar0, fLocal_971[0], 1, 1, 2, 1, 1, 1, 1);
}

void func_531(int iParam0, int iParam1)
{
	__LIB_10__::func_594(iParam0, iParam1);
}

bool func_537(int iParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam1 = __LIB_8__::func_931(iParam2, vParam3, iParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (__LIB_0__::func_272(*uParam1, 0))
			{
				__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 256);
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

void func_538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1045(iParam0);
			break;
		case 1:
			func_1046(iParam0);
			break;
		case 2:
			func_1047(iParam0);
			break;
	}
}

void func_569(var uParam0, bool bParam1)
{
	func_190(0, 0);
	if (bParam1 || __LIB_10__::func_460(uParam0, 1))
	{
		if (!func_166(16777216))
		{
			func_65(16777216);
		}
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_228)) || bParam1)
	{
		if (!func_166(4194304))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[0 /*19*/]))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_70[0 /*19*/]);
				func_65(4194304);
			}
		}
	}
	if (bParam1 || __LIB_18__::func_251(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!func_166(2097152))
		{
			PED::_0x2208438012482A1A(Global_35, false, false);
			func_65(2097152);
		}
	}
	if (bParam1 || ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_228, "LillyMillet"))
	{
		if (!func_166(8388608))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
			func_64();
			func_65(8388608);
		}
	}
}

void func_582(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_10__::func_278(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (__LIB_8__::func_356(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_10__::func_293(uParam0, 524288);
	}
}

bool func_607(vector3 vParam0)
{
	if (__LIB_1__::func_373(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_612(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_6__::func_814(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_601(*uParam0, iParam1, uParam2, fParam3, bVar4);
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

bool func_619(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bool bVar13;
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
		__LIB_10__::func_603(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_6__::func_814(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_10__::func_604(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_10__::func_537(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
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

void func_635()
{
	if (!func_487(1))
	{
		if (!__LIB_10__::func_598())
		{
			if (__LIB_0__::func_45("INVEST_HELP", 10000, 0, 0, 0, 1) != 0)
			{
				func_489(1);
			}
		}
	}
}

void func_638(int iParam0)
{
	__LIB_3__::func_141(iParam0, 1088421888 /* Float: 7f */, 1, 0);
}

void func_639(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_0x6F1F0B17109309DA(Local_70[iParam0 /*19*/], sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_70[iParam0 /*19*/], sParam1, bParam2, false);
	}
}

bool func_640()
{
	if (MAP::DOES_BLIP_EXIST(iLocal_977))
	{
		__LIB_6__::func_736(&(Local_1365[0 /*61*/]), &Local_1427, 0, iLocal_977, 0, 5.5f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);
		__LIB_2__::func_602(&(Local_1427[0 /*17*/]), __LIB_2__::func_460(27), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_1427[0 /*17*/]), 0, 0);
		return true;
	}
	else
	{
		iLocal_977 = MAP::_0x3E593DF9C2962EC6(-936216634);
		MAP::SET_BLIP_SPRITE(iLocal_977, joaat("BLIP_AMBIENT_LOAN_SHARK"), true);
		if (!__LIB_8__::func_779(1))
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_977, -401963276);
		}
	}
	return false;
}

bool func_642()
{
	if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[1 /*19*/], false)) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_70[1 /*19*/], sLocal_913[8]))
		{
			if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_70[1 /*19*/], sLocal_913[8]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_70[1 /*19*/], sLocal_913[8]))
			{
				if (func_1193())
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_70[1 /*19*/], sLocal_913[8], true);
				}
			}
			else if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_70[1 /*19*/], sLocal_913[8]) && ANIMSCENE::_0x0DF57F86FE71DBE5(Local_70[1 /*19*/], sLocal_913[8]))
			{
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_789(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_228, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_285, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_10__::func_352(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_228, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_228))
	{
		if (!__LIB_0__::func_1(uParam0->f_285, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_285, 512))
	{
		bVar2 = true;
	}
	if (__LIB_8__::func_356(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_228);
		__LIB_3__::func_120();
	}
}

void func_796(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_284, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_10__::func_315(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_284, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_296));
		}
		func_1326(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1328(uParam0);
		func_1329(uParam0);
		__LIB_10__::func_552(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_10__::func_416(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_297)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_297));
		}
	}
}

bool func_806(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_70[iVar0 /*19*/], "ARTHUR") && ANIMSCENE::_0xB89FCFF19DAFFF28(Local_70[iVar0 /*19*/], "A_M_M_EMRFARMHAND_01"))
		{
			return true;
		}
	}
	else if (iVar0 == 1)
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_70[iVar0 /*19*/], "LillyMillet") && ANIMSCENE::_0xB89FCFF19DAFFF28(Local_70[iVar0 /*19*/], "A_M_M_EMRFARMHAND_01"))
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_70[iVar0 /*19*/], "Lilly"))
		{
			return true;
		}
	}
	return false;
}

void func_807(char[4] cParam0)
{
	func_1343();
	__LIB_1__::func_539();
	func_65(256);
	func_1345();
	__LIB_10__::func_561(cParam0, "OBJ_CONVINCE_EMERALD", 0f, 0f, 0f);
	__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
	AUDIO::TRIGGER_MUSIC_EVENT("LSER_START_MUSIC");
	if (func_166(2))
	{
		func_66();
		if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_SUR9", 0))
		{
			iLocal_14 = 1;
		}
	}
	else
	{
		iLocal_14 = 1;
	}
}

void func_808()
{
	if (func_190(2, 0))
	{
	}
	func_68();
}

void func_809()
{
	TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, uLocal_979[1], 0, 0, 1000f, 1, 0);
	PED::REGISTER_TARGET(Global_35, uLocal_979[1], 1);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_66();
}

bool func_813(int iParam0)
{
	if (!__LIB_0__::func_75(&uLocal_928))
	{
		__LIB_1__::func_283(&uLocal_928, 0);
	}
	else if (__LIB_0__::func_265(&uLocal_928) > IntToFloat(iParam0))
	{
		return true;
	}
	return false;
}

void func_814(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 7, true);
}

void func_816(char[4] cParam0)
{
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_952);
	__LIB_0__::func_37(&uLocal_928);
	if (__LIB_0__::func_272(uLocal_979[0], 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_979[0], true);
		__LIB_10__::func_385(uLocal_979[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
	{
		TASK::TASK_KNOCKED_OUT(uLocal_979[1], 10f, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 6, false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("LSER_STOP");
	func_1350(5000);
	__LIB_3__::func_732(0);
	__LIB_10__::func_561(cParam0, "OBJ_LOOT", 0f, 0f, 0f);
	func_402();
}

void func_817()
{
	if (MAP::_DOES_ENTITY_HAVE_BLIP(uLocal_979[1]))
	{
		__LIB_3__::func_608(uLocal_979[1]);
	}
	__LIB_10__::func_528(&iLocal_978, uLocal_979[1], 203020899, "PICKUP_DEBT");
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_978, "PICKUP_DEBT");
	iLocal_14 = 1;
}

void func_818(char[4] cParam0)
{
	if (!func_487(64))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !__LIB_3__::func_578(uLocal_979[1])) && !PED::IS_PED_RAGDOLL(uLocal_979[1])) && !__LIB_6__::func_904())
		{
			if (__LIB_1__::func_422("OBJ_LOOT", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_489(64);
			}
		}
	}
}

void func_819(char[4] cParam0)
{
	if (__LIB_0__::func_272(uLocal_979[1], 0) && func_166(16))
	{
		if (!__LIB_6__::func_904())
		{
			if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_SUR3", 0))
			{
				iLocal_14 = 1;
			}
		}
	}
}

void func_820(char[4] cParam0)
{
	__LIB_10__::func_378(*cParam0, func_41(2), func_41(3), 2, 3);
	__LIB_0__::func_37(&uLocal_925);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
	{
		ENTITY::_0x18FF3110CF47115D(uLocal_979[1], 7, 0);
		func_814(uLocal_979[1]);
		if (!MAP::_DOES_ENTITY_HAVE_BLIP(uLocal_979[1]))
		{
			__LIB_10__::func_528(&iLocal_978, uLocal_979[1], 203020899, "PICKUP_DEBT");
		}
	}
	if (!__LIB_0__::func_474(168))
	{
		__LIB_1__::func_240(168, 0);
	}
	iLocal_14 = 1;
}

bool func_822(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_10__::func_596(iParam0, iParam1);
	if (iVar0 != 0)
	{
		return true;
	}
	return false;
}

void func_824()
{
	if (!func_166(32))
	{
		func_74();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
	{
		if (TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(uLocal_979[1], 15, 0);
		TASK::TASK_KNOCKED_OUT(uLocal_979[1], 15f, false);
		PED::_0x2E5B5D1F1453E08E(uLocal_979[1], 1);
		PED::_0x5BCF0B79D4F5DBA3(uLocal_979[1], 15f);
		PED::_0x29924EB8EE9DB926(uLocal_979[1], 15f);
	}
	__LIB_0__::func_37(&uLocal_928);
	__LIB_0__::func_37(&uLocal_925);
}

void func_852()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1389();
	func_1390();
	func_1391();
	func_1392();
	func_1393();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_853(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_144(iParam0, 1, 1, -142743235, 1);
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

void func_886()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1415(&uVar4, &iVar1, &iVar2, &iVar3)))
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

struct<19> func_936(char* sParam0, int iParam1)
{
	struct<19> Var0;
	Var0.f_2 = 2;
	Var0.f_1 = sParam0;
	Var0.f_2[0] = 0;
	Var0.f_2[1] = 0;
	Var0.f_18 = iParam1;
	return Var0;
}

void func_937()
{
	vLocal_51[0 /*3*/] = { func_1445("avoid_left_lilly", 1f, "") };
	vLocal_51[1 /*3*/] = { func_1445("avoid_right_lilly", 1f, "") };
	vLocal_51[2 /*3*/] = { func_1445("avoid_forward_lilly", 1f, "") };
	vLocal_51[3 /*3*/] = { func_1445("avoid_foward_180_lilly", 1f, "") };
	vLocal_51[4 /*3*/] = { func_1445("avoid_backward_lilly", 1f, "") };
	vLocal_23[0 /*3*/] = { func_1445("enter_cower_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[1 /*3*/] = { func_1445("cower_idle_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[2 /*3*/] = { func_1445("no_no_please_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[3 /*3*/] = { func_1445("stop_it_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[4 /*3*/] = { func_1445("dont_hurt_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[5 /*3*/] = { func_1445("cooper_give_money_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[6 /*3*/] = { func_1445("thats_enough_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[7 /*3*/] = { func_1445("knock_out_cooper_lilly", 1f, "LS_EMR_IG4_P1") };
	vLocal_23[8 /*3*/] = { func_1445("kill_cooper_lilly", 1f, "LS_EMR_IG4_P1") };
}

void func_986(int iParam0, bool bParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PED::_0x6569F31A01B4C097(iVar0, 5, bParam1);
		}
	}
}

int func_994(var uParam0, int iParam1, int iParam2)
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
		return func_994(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1006(int iParam0)
{
	__LIB_3__::func_141(iParam0, 1088421888 /* Float: 7f */, 1, 0);
	PED::_0xE737D5F14304A2EC(iParam0, PLAYER::PLAYER_ID(), 300000);
}

void func_1009()
{
	iLocal_956 = ENTITY::GET_ENTITY_HEALTH(uLocal_979[1]);
}

void func_1010()
{
	if (__LIB_10__::func_608(uLocal_979[1], 0, &uLocal_1445, &iLocal_1473, 0, 0))
	{
		if (iLocal_1473 == 8)
		{
			if (__LIB_0__::func_665(Global_35, uLocal_979[1], 1, 1) < 10f && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO"))
			{
				func_468();
			}
		}
		else
		{
			func_468();
		}
	}
	if (PED::_IS_PED_LASSOED(uLocal_979[1]))
	{
		func_468();
	}
}

void func_1011(char[4] cParam0)
{
	if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			func_1479(cParam0);
			return;
		}
		if (__LIB_2__::func_401(uLocal_979[1], 1, 0, 1, 0, 0))
		{
			if (__LIB_0__::func_266(uLocal_979[1], Global_36, 5f, 1, 1))
			{
				if (!func_487(128))
				{
					if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_COOP_GUN", 0))
					{
						func_489(128);
					}
				}
			}
			else
			{
				func_1479(cParam0);
			}
		}
	}
}

void func_1012()
{
	if (!__LIB_6__::func_904() && !__LIB_0__::func_163(uLocal_979[1], -1519143300))
	{
		func_1480();
	}
}

void func_1013()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]) && __LIB_0__::func_266(uLocal_979[1], Global_36, 2f, 1, 1))
	{
		if (func_1481(uLocal_979[1], &iLocal_978, Global_35, &uLocal_1205, &Local_992))
		{
			func_531(uLocal_979[1], 0);
			func_1482();
		}
	}
}

void func_1014(char[4] cParam0)
{
	if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
	{
		if (__LIB_2__::func_401(uLocal_979[1], 1, 0, 1, 0, 0) || PED::IS_PED_SHOOTING(Global_35))
		{
			func_468();
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]) && __LIB_0__::func_266(uLocal_979[1], Global_36, 10f, 1, 1))
	{
	}
	if (!__LIB_0__::func_163(uLocal_979[1], 713668775))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]) && __LIB_0__::func_266(uLocal_979[1], 1437.151f, 344.7974f, 107.6088f, 2.5f, 1, 1))
		{
			func_1483();
		}
		else
		{
			func_1482();
		}
	}
}

void func_1015(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]) && __LIB_0__::func_266(uLocal_979[1], Global_36, 10f, 1, 1))
	{
		func_1484(cParam0, "LS_EMR_COOP_HAN", 3, 7);
	}
	if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
	{
		if (__LIB_2__::func_401(uLocal_979[1], 1, 0, 1, 0, 0) || PED::IS_PED_SHOOTING(Global_35))
		{
			func_468();
		}
	}
}

void func_1016()
{
	if (__LIB_3__::func_458(uLocal_979[1]) != 0)
	{
		func_1486();
	}
	else if (PED::_GET_LASSO_TARGET(Global_35) != uLocal_979[1])
	{
		func_66();
	}
}

void func_1017(char[4] cParam0)
{
	if (__LIB_3__::func_458(uLocal_979[1]) == 0)
	{
		func_1487(cParam0);
	}
}

void func_1018(int iParam0)
{
	__LIB_1__::func_681(&iLocal_949, iParam0);
}

void func_1019()
{
	if (__LIB_10__::func_608(uLocal_979[0], 0, &uLocal_1445, &iLocal_1473, 1, 0))
	{
		if (iLocal_1473 == 8)
		{
			if (__LIB_0__::func_665(Global_35, uLocal_979[0], 1, 1) < 10f)
			{
				__LIB_10__::func_592(3);
			}
		}
		else
		{
			__LIB_10__::func_592(3);
		}
	}
	if (PED::_IS_PED_LASSOED(uLocal_979[0]))
	{
		__LIB_10__::func_592(3);
	}
}

void func_1020(char[4] cParam0)
{
	func_1489(cParam0);
	if (func_1490(cParam0))
	{
		return;
	}
	if (func_1491(cParam0))
	{
		return;
	}
	if (func_1492(cParam0))
	{
		return;
	}
	func_1493(cParam0);
}

void func_1021()
{
	if (!WEAPON::_0xCB690F680A3EA971(Global_35, 4) && __LIB_0__::func_265(&uLocal_925) > 4f)
	{
		if (!__LIB_2__::func_401(uLocal_979[0], 1, 0, 1, 0, 0))
		{
			func_387(1);
		}
		__LIB_1__::func_148(&uLocal_925);
	}
	else if (!__LIB_0__::func_75(&uLocal_925))
	{
		__LIB_1__::func_148(&uLocal_925);
	}
}

void func_1022()
{
	if ((__LIB_10__::func_608(uLocal_979[0], 0, &uLocal_1445, &iLocal_1473, 0, 0) || PED::IS_PED_RAGDOLL(uLocal_979[0])) || PED::_0x29FCE825613FEFCA(uLocal_979[0], 1000))
	{
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(0);
			func_387(1);
			return;
		}
	}
	if (!__LIB_0__::func_163(uLocal_979[0], -2017877118) && !__LIB_0__::func_163(uLocal_979[0], -1162159953))
	{
		func_74();
	}
}

void func_1023()
{
	if ((__LIB_10__::func_608(uLocal_979[0], 0, &uLocal_1445, &iLocal_1473, 0, 0) || PED::IS_PED_RAGDOLL(uLocal_979[0])) || PED::_0x29FCE825613FEFCA(uLocal_979[0], 1000))
	{
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(0);
			func_387(1);
			return;
		}
	}
	if ((!__LIB_0__::func_163(uLocal_979[0], -2017877118) && !__LIB_0__::func_163(uLocal_979[0], -1162159953)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_979[0], cLocal_912, vLocal_23[7 /*3*/], 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_979[0], cLocal_912, vLocal_23[7 /*3*/]) > 0.8f))
	{
		func_74();
	}
}

void func_1024()
{
	if (!__LIB_0__::func_163(uLocal_979[0], -2017877118) && !__LIB_0__::func_163(uLocal_979[0], -1162159953))
	{
		func_74();
	}
}

void func_1025(char[4] cParam0)
{
	if (__LIB_10__::func_608(uLocal_979[0], 0, &uLocal_1445, &iLocal_1473, 1, 0))
	{
		func_387(1);
	}
	else
	{
		func_190(2, 0);
		func_68();
		func_1494(cParam0);
		if (!func_166(64))
		{
			if (!__LIB_0__::func_163(uLocal_979[0], -76381094))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[0]) && __LIB_0__::func_266(uLocal_979[0], vLocal_958, 0.75f, 1, 1))
				{
					func_1495();
				}
				else
				{
					func_74();
				}
			}
		}
	}
}

void func_1026()
{
	if (__LIB_10__::func_608(uLocal_979[0], 0, &uLocal_1445, &iLocal_1473, 0, 0))
	{
		if (AUDIO::_0x1ECC76792F661CF5("LS_EMR_IG8_P1"))
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION("LS_EMR_IG8_P1", false, false);
		}
		func_387(1);
	}
}

void func_1027(char[4] cParam0)
{
	func_68();
	func_1496();
	func_1497(cParam0);
}

void func_1028()
{
	func_1496();
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_979[0], cLocal_912, func_1498(), 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_979[0], cLocal_912, func_1498()) >= 0.9f)
		{
			Local_70[2 /*19*/].f_2[1] = 0;
			func_639(2, "bIdle", 0);
			TASK::TASK_CLEAR_LOOK_AT(uLocal_979[0]);
			func_1495();
		}
	}
	else
	{
		Local_70[2 /*19*/].f_2[1] = 0;
		func_639(2, "bIdle", 0);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_979[0]);
		func_1495();
	}
}

void func_1045(int iParam0)
{
	func_1504(iParam0, "A_M_M_EMRFARMHAND_01", uLocal_979[1]);
	func_1504(iParam0, "ARTHUR", Global_35);
}

void func_1046(int iParam0)
{
	func_1504(iParam0, "LillyMillet", uLocal_979[0]);
	func_1504(iParam0, "A_M_M_EMRFARMHAND_01", uLocal_979[1]);
	func_1504(iParam0, "player", Global_35);
	func_1504(iParam0, "ARTHUR", Global_35);
}

void func_1047(int iParam0)
{
	func_1504(iParam0, "Lilly", uLocal_979[0]);
	func_1504(iParam0, "player", Global_35);
}

bool func_1193()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_70[1 /*19*/], false))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_70[1 /*19*/], "S_Action", 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_979[0], 904336888) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_979[1], 904336888))
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
			return true;
		}
	}
	return true;
}

void func_1326(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1674();
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

void func_1328(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0)))
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
			func_1684(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1684(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1329(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_1684(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1343()
{
	if (iLocal_952 == -1)
	{
		iLocal_952 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_INTERESTING_MELEE_FIGHT"), uLocal_979[1], 0f, 30f, 35f, -1f, 20f, 180f, false, false, -1, -1);
	}
}

void func_1345()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		func_1693();
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), false);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
	}
}

void func_1350(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[0]))
	{
		Local_1231.f_3 = uLocal_979[0];
		Local_1231.f_7 = iParam0;
		Local_1231.f_18 = 3;
		Local_1231.f_17 = 3;
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_1231);
	}
}

void func_1389()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1720(0);
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
	func_1720(1);
}

void func_1390()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_72(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1391()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1723(0);
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
	func_1723(1);
}

void func_1392()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1723(0);
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
	func_1723(1);
}

void func_1393()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_72(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_72(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_144(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_144(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1415(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1739(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_72(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_1445(char* sParam0, float fParam1, char* sParam2)
{
	vector3 vVar0;
	vVar0.x = sParam0;
	vVar0.f_2 = sParam2;
	vVar0.f_1 = fParam1;
	return vVar0;
}

void func_1479(char[4] cParam0)
{
	if (__LIB_0__::func_163(uLocal_979[1], 780511057))
	{
		__LIB_0__::func_325(&iLocal_978);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[1], true);
		TASK::CLEAR_PED_TASKS(uLocal_979[1], true, false);
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 6, false);
	func_65(32768);
	__LIB_10__::func_593(2);
}

void func_1480()
{
	TASK::TASK_GO_TO_ENTITY(uLocal_979[1], Global_35, 20000, 0.5f, 2f, 2f, 0);
	__LIB_10__::func_593(3);
}

bool func_1481(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
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
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
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
					__LIB_10__::func_607(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_1791(uParam4);
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
				__LIB_10__::func_607(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (__LIB_18__::func_252(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
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
					__LIB_10__::func_607(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
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
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		return true;
	}
	return false;
}

void func_1482()
{
	func_1793(&uLocal_934, &iLocal_955);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_979[1], 1437.151f, 344.7974f, 107.6088f, 1f, 70000, 0.25f, 0, 40000f);
	__LIB_10__::func_593(4);
}

void func_1483()
{
	func_1793(&uLocal_934, &iLocal_955);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[1], false);
	TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_979[1], 1437.151f, 344.7974f, 107.6088f, 50f, 15000, false, false, false);
	__LIB_10__::func_593(5);
}

void func_1484(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3)
{
	if (iLocal_955 <= iParam2)
	{
		if (__LIB_0__::func_75(&uLocal_934))
		{
			if (__LIB_0__::func_265(&uLocal_934) > IntToFloat(iParam3))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_10__::func_513(&(cParam0->f_2106), cParam1, 0))
					{
						__LIB_0__::func_37(&uLocal_934);
						iLocal_955++;
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_934);
				}
			}
		}
		else if (!__LIB_6__::func_904())
		{
			__LIB_1__::func_148(&uLocal_934);
		}
	}
}

void func_1486()
{
	func_65(16);
	__LIB_0__::func_325(&iLocal_978);
	__LIB_10__::func_593(8);
}

void func_1487(char[4] cParam0)
{
	if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_SUR9", 0))
	{
		__LIB_10__::func_593(9);
	}
}

void func_1489(char[4] cParam0)
{
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_979[0], &Local_128);
	func_1795();
	if (!func_166(2048))
	{
		func_1796(cParam0);
	}
}

bool func_1490(char[4] cParam0)
{
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_979[0], &Local_128);
	if ((PED::GET_PED_CONFIG_FLAG(uLocal_979[1], 11, false) || __LIB_0__::func_163(uLocal_979[1], 1313215416)) || TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
	{
		if (!__LIB_0__::func_75(&uLocal_940))
		{
			__LIB_1__::func_148(&uLocal_940);
		}
		else if (__LIB_1__::func_871(&uLocal_940) > 800)
		{
			__LIB_0__::func_37(&uLocal_940);
			func_1797(cParam0);
			return true;
		}
	}
	return false;
}

bool func_1491(char[4] cParam0)
{
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_979[0], &Local_128);
	if (func_166(128))
	{
		if (!__LIB_0__::func_75(&uLocal_940))
		{
			__LIB_1__::func_148(&uLocal_940);
		}
		else if (__LIB_1__::func_871(&uLocal_940) > 800)
		{
			__LIB_0__::func_37(&uLocal_940);
			func_1798(cParam0);
			return true;
		}
	}
	return false;
}

bool func_1492(char[4] cParam0)
{
	if (iLocal_19 == 8)
	{
		if (!__LIB_0__::func_75(&uLocal_940))
		{
			__LIB_1__::func_148(&uLocal_940);
		}
		else if (__LIB_1__::func_871(&uLocal_940) > 800)
		{
			__LIB_0__::func_37(&uLocal_940);
			func_1799(cParam0);
			return true;
		}
	}
	return false;
}

void func_1493(char[4] cParam0)
{
	if (WEAPON::_0xCB690F680A3EA971(Global_35, 4) && __LIB_0__::func_265(&uLocal_925) > 1f)
	{
		if (__LIB_2__::func_401(uLocal_979[0], 1, 0, 1, 0, 0))
		{
			func_1800();
		}
		else if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_LIL_GUN", 0))
		{
			func_387(1);
		}
		__LIB_1__::func_148(&uLocal_925);
	}
	else if (!__LIB_0__::func_75(&uLocal_925))
	{
		__LIB_1__::func_148(&uLocal_925);
	}
}

void func_1494(char[4] cParam0)
{
	if (__LIB_0__::func_665(Global_35, uLocal_979[0], 1, 1) < 5f)
	{
		if (iLocal_954 < 3)
		{
			if (!__LIB_0__::func_75(&uLocal_937))
			{
				__LIB_1__::func_148(&uLocal_937);
			}
			else if (__LIB_3__::func_135(&uLocal_937) > 5000)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_IG7_P1", 0))
					{
						iLocal_954++;
						__LIB_1__::func_148(&uLocal_937);
					}
				}
			}
		}
	}
}

void func_1495()
{
	__LIB_1__::func_283(&uLocal_925, 1);
	__LIB_10__::func_592(9);
}

void func_1496()
{
	if ((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_979[0], 1)) && !PED::IS_PED_USING_ANY_SCENARIO(uLocal_979[0]))
	{
		TASK::_TASK_USE_SCENARIO_POINT(uLocal_979[0], iLocal_1261, "", 0, true, false, 0, false, -1f, false);
	}
	else if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_979[0], -1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_979[0], 0)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_70[2 /*19*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[2 /*19*/]);
	}
}

void func_1497(char[4] cParam0)
{
	if ((ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_979[0], -1) || __LIB_3__::func_138(uLocal_979[0], joaat("PROP_HUMAN_SEAT_CHAIR_SAD"))) || PED::_IS_PED_USING_SCENARIO_POINT(uLocal_979[0], iLocal_1261))
	{
		if (!__LIB_0__::func_75(&uLocal_925))
		{
			__LIB_1__::func_283(&uLocal_925, 1);
		}
		else if (__LIB_0__::func_265(&uLocal_925) > 15f)
		{
			if (((!__LIB_6__::func_904() && __LIB_0__::func_48(Global_35, uLocal_979[0], 5f, 1)) && iLocal_953 < 2) && !__LIB_0__::func_270())
			{
				func_1803(cParam0);
			}
		}
	}
}

char* func_1498()
{
	if (iLocal_923 == 2)
	{
		return "i_knew_lilly";
	}
	else if (iLocal_923 == 3)
	{
		return "just_leave_lilly";
	}
	else if (iLocal_923 == 4)
	{
		return "i_wanna_leave_lilly";
	}
	else if (iLocal_923 == 5)
	{
		return "what_more_lilly";
	}
	else if (iLocal_923 == 6)
	{
		return "will_u_please_lilly";
	}
	return "";
}

void func_1504(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_70[iParam0 /*19*/], sParam1, iParam2, 0);
	}
}

void func_1674()
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
	iVar0 = func_1871(6291456, 0);
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

void func_1684(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1684(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1684(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1693()
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 258, true);
}

void func_1720(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_72(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1887(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_853(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_144(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1893(Var0);
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

void func_1723(bool bParam0)
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
		func_72(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_72(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_144(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_144(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_144(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1739(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1739(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1739(iVar63, -915411861, 1, 0, 0));
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

void func_1791(var uParam0)
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
		func_72(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_10__::func_525(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_1793(var uParam0, int iParam1)
{
	__LIB_1__::func_148(uParam0);
	*iParam1 = 0;
}

void func_1795()
{
	func_1939();
}

void func_1796(char[4] cParam0)
{
	switch (iLocal_22)
	{
		case 0:
			func_1940();
			break;
		case 1:
			func_1941(cParam0);
			break;
		default:
			func_1942();
			break;
	}
}

void func_1797(char[4] cParam0)
{
	if (func_1943(cParam0, "LS_EMR_IG6_P1KO", 1))
	{
		func_329(-1);
		func_228(7, 1090519040 /* Float: 8f */, -1.5f, 0, 0, 1);
		func_65(8);
		__LIB_10__::func_592(7);
	}
}

void func_1798(char[4] cParam0)
{
	if (func_1943(cParam0, "LS_EMR_IG6_P1K", 1))
	{
		func_329(-1);
		func_228(8, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 0, 0, 0);
		func_65(8);
		__LIB_10__::func_592(4);
	}
}

void func_1799(char[4] cParam0)
{
	if (func_1943(cParam0, "LS_EMR_IG6_P1KO", 0))
	{
		func_65(8);
		func_228(7, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 0, 0, 0);
		__LIB_10__::func_592(5);
	}
}

void func_1800()
{
	PED::_0xF1C03A5352243A30(uLocal_979[0]);
	TASK::TASK_HANDS_UP(uLocal_979[0], -1, Global_35, -1, false);
	__LIB_1__::func_148(&uLocal_925);
	__LIB_10__::func_592(2);
}

void func_1803(char[4] cParam0)
{
	if (__LIB_10__::func_513(&(cParam0->f_2106), "LS_EMR_IG8_P1", 0))
	{
		iLocal_953++;
		__LIB_1__::func_148(&uLocal_925);
	}
}

int func_1871(int iParam0, int iParam1)
{
	var uVar0;
	return func_1981(&uVar0, iParam0, iParam1);
}

void func_1887(int iParam0)
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
	func_144(iParam0, 1, 1, -142743235, 1);
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
		func_144(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1893(struct<6> Param0)
{
	if (!func_2002(Param0.f_4, 1))
	{
	}
	if (!func_2002(Param0, 1))
	{
	}
	if (!func_2002(Param0.f_2, 1))
	{
	}
	if (!func_2002(Param0.f_5, 1))
	{
	}
	if (!func_2002(Param0.f_3, 1))
	{
	}
	if (!func_2002(Param0.f_1, 1))
	{
	}
}

void func_1939()
{
	if (func_166(2048))
	{
		if (func_2035())
		{
			func_228(1, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 1, 0, 1);
			func_1018(2048);
			func_1018(4096);
		}
	}
}

void func_1940()
{
	if (func_2036())
	{
		func_228(1, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 1, 0, 1);
		__LIB_1__::func_148(&uLocal_931);
	}
}

void func_1941(char[4] cParam0)
{
	if (__LIB_1__::func_871(&uLocal_931) > 2000)
	{
		if (!__LIB_0__::func_270() && !__LIB_6__::func_904())
		{
			if (((PED::IS_PED_FACING_PED(uLocal_979[0], Global_35, 5f) && iLocal_19 == 1) && iLocal_956 > 20) && (__LIB_3__::func_528(Global_35, uLocal_979[1]) || __LIB_1__::func_871(&uLocal_931) > 5000))
			{
				if (__LIB_10__::func_513(&(cParam0->f_2106), vLocal_23[iLocal_22 /*3*/].f_2, 0))
				{
					func_228(func_2038(), 1.5f, -1056964608 /* Float: -8f */, 2, 0, 0);
				}
			}
			else
			{
				func_228(1, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 2, 0, 1);
			}
		}
	}
	else if (!PED::IS_PED_FACING_PED(uLocal_979[0], Global_35, 5f))
	{
		func_228(1, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 2, 0, 1);
	}
	else if (func_2036())
	{
		func_228(1, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, 1, 0, 0);
	}
}

void func_1942()
{
	if (func_2036())
	{
		func_228(func_2038(), 1.5f, -1056964608 /* Float: -8f */, 1, 0, 1);
		__LIB_1__::func_148(&uLocal_931);
	}
}

bool func_1943(char[4] cParam0, char[4] cParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[0]))
	{
		if (!__LIB_6__::func_904())
		{
			return __LIB_10__::func_513(&(cParam0->f_2106), cParam1, 0);
		}
		else if (bParam2)
		{
			__LIB_3__::func_732(0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_1981(var uParam0, int iParam1, int iParam2)
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
		return func_1981(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2002(int iParam0, int iParam1)
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
				if (func_2002(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2002(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2002(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2002(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2035()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_979[0], cLocal_912, vLocal_51[iLocal_20 /*3*/], 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_979[0], cLocal_912, vLocal_51[iLocal_20 /*3*/]) >= vLocal_51[iLocal_20 /*3*/].f_1)
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

bool func_2036()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_979[0], cLocal_912, vLocal_23[iLocal_22 /*3*/], 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_979[0], cLocal_912, vLocal_23[iLocal_22 /*3*/]) >= vLocal_23[iLocal_22 /*3*/].f_1)
		{
			return true;
		}
	}
	return false;
}

int func_2038()
{
	if (iLocal_22 == 1)
	{
		return MISC::GET_RANDOM_INT_IN_RANGE(2, 7);
	}
	return 1;
}

