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
	var uLocal_14 = 0;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	int iLocal_17[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char[] cLocal_43[8] = 0;
	var uLocal_44 = 4;
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
	vector3 vLocal_77 = { 0f, 0f, 0f };
	var uLocal_80[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97 = 0;
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[4] = { 0, 0, 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<2> Local_136[4];
	struct<6> Local_145 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	struct<7> Local_153 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_160 = 0;
	struct<193> Local_161 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 1176256512;
	struct<32> Local_358[16];
	struct<12> Local_871[3];
	struct<23> Local_908 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
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
	float fLocal_942 = 0f;
	bool bLocal_943 = false;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	var uLocal_946[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	struct<76> Local_967 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0 } ;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 1;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 24;
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
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
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
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
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
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = -1082130432;
	var uLocal_1152 = -1082130432;
	var uLocal_1153 = 1103626240;
	var uLocal_1154 = -1067450368;
	var uLocal_1155 = 1097859072;
	var uLocal_1156 = 1073741824;
	var uLocal_1157 = 4000;
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
	var uLocal_1179 = 1073741824;
	int iLocal_1180 = 0;
	var uLocal_1181 = 0;
	struct<4> Local_1182 = { 0, 0, 0, 0 } ;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	vector3 vLocal_1194 = { 0f, 0f, 0f };
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	int iLocal_1206 = 0;
	var uLocal_1207 = 0;
	int iLocal_1208[2] = { 0, 0 };
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	bool bLocal_1213 = false;
	bool bLocal_1214 = false;
	float fLocal_1215 = 0f;
	float fLocal_1216 = 0f;
	float fLocal_1217 = 0f;
	var uLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	char* sLocal_1228 = NULL;
	int iLocal_1229 = 0;
	int iLocal_1230[2] = { 0, 0 };
	var uLocal_1233 = 0;
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
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
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
	var uLocal_1267 = 1065353216;
	var uLocal_1268 = 1119092736;
	var uLocal_1269 = 1092616192;
	var uLocal_1270 = 1085276160;
	int iLocal_1271 = 0;
	vector3 vLocal_1272 = { 0f, 0f, 0f };
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	int iLocal_1278 = 0;
	var uLocal_1279 = -1;
	var uLocal_1280 = 0;
	var uLocal_1281 = -1;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = -1;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 1073741824;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 1;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	struct<17> Local_1299[2];
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
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
	cLocal_43 = "RE_RI";
	iLocal_1180 = 138;
	fLocal_1215 = 2f;
	fLocal_1216 = 5f;
	fLocal_1217 = 5f;
	sLocal_1228 = "";
	vLocal_1272 = { 2795.084f, -1169.017f, 46.924f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1214 = true;
	}
	if (!bLocal_1214)
	{
		Local_161.f_3 = __LIB_4__::func_289(&vScriptParam_0);
		Local_161.f_43 = __LIB_0__::func_12();
		Local_161.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		func_4(&Local_1299);
		__LIB_3__::func_420(&Local_161, 1);
		func_6();
		iLocal_944 = __LIB_3__::func_390(vScriptParam_0.x, 2, 0);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1214, 1009, 0);
		if (bLocal_1214)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_966)
			{
				case 0:
					if (func_10())
					{
						iLocal_966 = 1;
					}
					break;
				case 1:
					if (func_11(&Local_161, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_4__::func_362(&Local_161, &uLocal_1207, &uLocal_1218);
						func_13();
						func_14();
						iLocal_966 = 3;
					}
					else if (Local_161.f_160)
					{
						func_8();
					}
					break;
				case 3:
					if (!__LIB_0__::func_27(iLocal_35, 33554432))
					{
						__LIB_4__::func_212(iLocal_127, 1, 0, 0, 0);
						__LIB_1__::func_683(&iLocal_35, 33554432);
					}
					if (func_18() && func_19())
					{
						if (func_20())
						{
							func_21();
							func_22(1, -1, -1);
							__LIB_3__::func_400(Local_161.f_51, &Local_871, 0, 0, 0, -1, 0);
							ENTITY::SET_ENTITY_VISIBLE(Local_871[0 /*12*/].f_8, false);
							func_24();
							iLocal_966 = 4;
						}
					}
					else
					{
						if (!__LIB_0__::func_75(&uLocal_939))
						{
							__LIB_1__::func_148(&uLocal_939);
						}
						else if (__LIB_0__::func_265(&uLocal_939) > 15f)
						{
							func_8();
						}
						if (__LIB_3__::func_365(&Local_161, &iLocal_98, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0) || __LIB_1__::func_205(Global_35, iLocal_129, 1, 0))
						{
							func_8();
						}
					}
					break;
				case 4:
					if (!__LIB_4__::func_175(&Local_161, &iLocal_98, iLocal_944, 0, 0, 0, 1, 0))
					{
						func_8();
					}
					if (!Local_161.f_46)
					{
						if (func_31(&iLocal_34) || __LIB_0__::func_27(iLocal_34, 8192))
						{
							Local_161.f_46 = 1;
							if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_120))
							{
								__LIB_1__::func_683(&iLocal_34, 8192);
							}
							if (__LIB_0__::func_27(iLocal_1275, 8) && !bLocal_1213)
							{
								__LIB_1__::func_715(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_98[0], 0, 1065353216 /* Float: 1f */, 0);
							}
							func_33(1);
							if (!__LIB_0__::func_27(iLocal_35, 1))
							{
								func_34();
							}
							else if (__LIB_0__::func_27(iLocal_34, 8192) && !__LIB_0__::func_27(iLocal_34, 32))
							{
								__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DESTROYED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							if (iLocal_965 < 12)
							{
								func_37();
								__LIB_0__::func_325(&(uLocal_80[0]));
								iLocal_965 = 12;
							}
						}
					}
					if (func_39())
					{
						Local_161.f_50 = 1;
						func_8();
					}
					if (__LIB_3__::func_365(&Local_161, &iLocal_98, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_8();
					}
					break;
			}
			BUILTIN::WAIT(Local_161.f_158);
		}
	}
}

void func_4(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], "BEAT_GRT_POS", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], "BEAT_GRT_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_6()
{
	__LIB_2__::func_110(&(Local_161.f_5), 1);
	__LIB_2__::func_105(&(Local_161.f_5), 1);
	__LIB_2__::func_662(&(Local_161.f_5), 0);
	__LIB_1__::func_975(&(Local_161.f_5), 3f);
	__LIB_2__::func_507(&(Local_161.f_5), 2000);
}

void func_8()
{
	int iVar0;
	if (__LIB_4__::func_296("RE_RI_OBJ_RETURN", 1) || __LIB_4__::func_296("RE_RI_OBJ_KILL", 1))
	{
		__LIB_0__::func_769();
	}
	func_37();
	__LIB_2__::func_480(&Local_1299, 0, 0, 1, 0);
	func_22(0, -1, -1);
	func_53(0);
	__LIB_1__::func_345();
	func_33(1);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1271))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1271);
	}
	if (__LIB_0__::func_27(iLocal_34, 16384))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (!__LIB_0__::func_27(iLocal_34, 67108864))
	{
		Local_161.f_45 = 0;
	}
	else
	{
		func_55();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_871[0 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_871[0 /*12*/].f_8));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_120))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
		{
			func_56();
		}
		EVENT::_0x56B3410626A473E7(&uLocal_97);
		POPULATION::_0x74C2B3DC0B294102(iLocal_120);
		POPULATION::_0xA1CFB35069D23C23(iLocal_127);
		VOLUME::_DELETE_VOLUME(iLocal_120);
		VOLUME::_DELETE_VOLUME(iLocal_127);
	}
	__LIB_0__::func_172(iLocal_130);
	__LIB_0__::func_172(iLocal_131);
	__LIB_0__::func_172(iLocal_133);
	__LIB_0__::func_172(iLocal_134);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_115))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_115, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_116))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_116, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_117))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_117, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_117))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_118, false);
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_2__::func_1(iLocal_98[iVar0], 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[iVar0], false);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
	{
		if (__LIB_4__::func_274(iLocal_98[0], 0))
		{
			__LIB_4__::func_72(iLocal_98[0]);
			__LIB_2__::func_753(iLocal_1180, 0, 1, 0, 0);
		}
	}
	if (bLocal_15)
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(287));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(288));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(286));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(298));
	}
	__LIB_4__::func_72(Global_35);
	if (__LIB_0__::func_30(iLocal_1208[0]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 0);
	}
	if (__LIB_0__::func_30(iLocal_1208[1]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 0);
	}
	if (__LIB_0__::func_30(iLocal_1211))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1211, 0);
	}
	if (__LIB_0__::func_30(iLocal_1212))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1212, 0);
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_42))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_42);
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_41))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_41);
	}
	__LIB_3__::func_872(&Local_161, &iLocal_98, &uLocal_80, iLocal_944, uLocal_1207, uLocal_1218, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_10()
{
	switch (iLocal_964)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_161))
			{
				func_67();
				__LIB_3__::func_284(&Local_358);
				func_69();
				func_70(&Local_967);
				func_71();
				func_72();
				__LIB_3__::func_314(&Local_871);
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, joaat("WORLD_HUMAN_SMOKE_MALE_A"));
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_TWNREC_SCRUB_BLOOD_FLOOR_BUCKET"), 15, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("P_DOOR_NEW_SALOON02X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_CANDLELAMP01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_GLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEWINE03X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_WHISKEYGLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("S_INV_WHISKEY01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_SAL_SHELFSET04X"), false);
				iLocal_964 = 1;
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CANDLELAMP01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_GLASS01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEWINE03X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHISKEYGLASS01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("S_INV_WHISKEY01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SAL_SHELFSET04X")))
			{
				return false;
			}
			if (!__LIB_0__::func_0(&uLocal_963, cLocal_43))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_44))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_871))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_358))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_DOOR_NEW_SALOON02X")))
			{
				return false;
			}
			if (!func_78())
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_TWNREC_SCRUB_BLOOD_FLOOR_BUCKET"), false))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_11(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_79(*iParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *iParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *iParam1))
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
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
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

void func_13()
{
	vLocal_77 = { 2796.746f, -1167.405f, 46.92401f };
	iLocal_122[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.383f, -1169.701f, 48.64964f, 0f, 0f, 149.9696f, 7.680243f, 7.442864f, 4.887091f, "volFront");
	iLocal_122[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2797.689f, -1164.03f, 48.64964f, 0f, 0f, 149.9696f, 7.593349f, 5.83218f, 4.887091f, "volBack");
	iLocal_122[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2802.157f, -1166.223f, 48.64964f, 0f, 0f, 149.9696f, 2.432765f, 5.624192f, 4.887091f, "volHall");
	iLocal_122[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2799.795f, -1169.92f, 48.64964f, 0f, 0f, 149.9696f, 2.878195f, 2.828049f, 4.887091f, "volBackRoom");
	iLocal_120 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.799f, -1167.807f, 49.224f, 0f, 0f, 150f, 10.315f, 13.684f, 5.096f, "m_volStore");
	__LIB_4__::func_212(iLocal_120, 1, 0, 0, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_120, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_120, 0, 0, 0, -1, -1, 0);
	uLocal_115 = PED::_0x4C39C95AE5DB1329(iLocal_120, 0, 15);
	iLocal_121 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.136f, -1173.19f, 48.0258f, 0f, 0f, -29.6619f, 2.388672f, 2.484698f, 2.493898f, "m_volShopDoor");
	iLocal_127 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2792.137f, -1175.657f, 47.09799f, 0f, 0f, -30.95912f, 9.80044f, 4.089561f, 4.642987f, "m_volStoreSidewalk");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_127, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_127, 0, 0, -156825994, -1, -1, 2);
	uLocal_116 = PED::_0x4C39C95AE5DB1329(iLocal_127, 0, 15);
	iLocal_128 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2787.507f, -1182.052f, 46.8672f, 0f, 0f, 0f, 0.5f, 0.5f, 1f, "m_volRoad");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_128, 0, 0, 0, -1, -1, 0);
	uLocal_117 = PED::_0x4C39C95AE5DB1329(iLocal_128, 0, 15);
	iLocal_119 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2787.705f, -1182.19f, 46.85251f, 0f, 0f, 0f, 1f, 1f, 1f, "m_volHorseCartAcrossStreet");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_119, 0, 0, 0, -1, -1, 0);
	uLocal_118 = PED::_0x4C39C95AE5DB1329(iLocal_119, 0, 15);
	iLocal_130 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.919f, -1172.553f, 48.8768f, 0f, 0f, -29.66189f, 1.878804f, 0.624271f, 2.500972f, "m_volWindow");
	iLocal_129 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.019f, -1180.614f, 47.098f, 0f, 0f, -30.959f, 17f, 13f, 10f, "m_volCallover");
	iLocal_132 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.978f, -1173.951f, 48.026f, 0f, 0f, -29.662f, 3.144f, 2.232f, 2.494f, "m_volSidewalk");
	iLocal_133 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_161.f_51, 0f, 0f, 0f, 2f, 2f, 2f);
	VOLUME::_0xBE551C2CC421185D(iLocal_133, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_133, 0);
	iLocal_134 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2793.75f, -1174.116f, 46.88817f, 0f, 0f, 0f, 3.5f, 3.5f, 3.5f);
	VOLUME::_0xBE551C2CC421185D(iLocal_134, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_134, 0);
	uLocal_97 = EVENT::_0x18E93EBFC1FCFA48(iLocal_120, 1, 1);
	if (iLocal_944 == 0)
	{
		iLocal_135 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volOpeningDialogue");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_135, VOLUME::_CREATE_VOLUME_BOX(2821.35f, -1173.793f, 48.026f, 0f, 0f, 5.789957f, 58.59459f, 23.87292f, 10.70794f));
		VOLUME::_0x6E0D3C3F828DA773(iLocal_135, VOLUME::_CREATE_VOLUME_BOX(2801.273f, -1187.073f, 48.026f, 0f, 0f, -75.61369f, 87.07604f, 26.24648f, 10.70794f));
		VOLUME::_0x6E0D3C3F828DA773(iLocal_135, VOLUME::_CREATE_VOLUME_BOX(2758.489f, -1185.248f, 48.026f, 0f, 0f, -117.6775f, 67.96555f, 26.24648f, 10.70794f));
		VOLUME::_0x6E0D3C3F828DA773(iLocal_135, VOLUME::_CREATE_VOLUME_BOX(2758.746f, -1161.83f, 48.026f, 0f, 0f, -31f, 64.31004f, 14.15442f, 10.70794f));
	}
}

void func_14()
{
	Local_358[0 /*32*/].f_6 = { 2792.286f, -1174.795f, 46.89715f };
	Local_358[0 /*32*/].f_9 = 155.2901f;
	StringCopy(&(Local_358[0 /*32*/].f_23), "0312_U_M_M_NbxBartender_02", 64);
	__LIB_3__::func_626(&(Local_358[0 /*32*/].f_22));
	Local_358[1 /*32*/].f_6 = { 2793.74f, -1176.192f, 46.86639f };
	Local_358[1 /*32*/].f_9 = 268.4264f;
	if (iLocal_944 == 0)
	{
		StringCopy(&(Local_358[1 /*32*/].f_23), "0878_A_M_M_Civ_Poor_Asian_AVOID_02", 64);
	}
	else
	{
		StringCopy(&(Local_358[1 /*32*/].f_23), "0950_A_M_M_Guard_White_AGGRESSIVE_05", 64);
	}
	__LIB_3__::func_626(&(Local_358[1 /*32*/].f_22));
	Local_358[2 /*32*/].f_6 = { 2797.846f, -1167.75f, 46.924f };
	Local_358[2 /*32*/].f_9 = 226.8494f;
	__LIB_3__::func_626(&(Local_358[2 /*32*/].f_22));
	Local_358[3 /*32*/].f_6 = { 2793.011f, -1166.657f, 46.93268f };
	Local_358[3 /*32*/].f_9 = 209.8502f;
	__LIB_3__::func_626(&(Local_358[3 /*32*/].f_22));
	__LIB_4__::func_292(&(Local_358[3 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[3 /*32*/].f_22));
	Local_358[4 /*32*/].f_6 = { 2790.815f, -1169.837f, 46.924f };
	Local_358[4 /*32*/].f_9 = 63.8435f;
	__LIB_3__::func_626(&(Local_358[4 /*32*/].f_22));
	Local_358[5 /*32*/].f_6 = { 2793.942f, -1167.316f, 47.97197f };
	Local_358[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[5 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[5 /*32*/].f_22));
	Local_358[6 /*32*/].f_6 = { 2795.769f, -1164.274f, 46.924f };
	Local_358[6 /*32*/].f_9 = 91.8245f;
	__LIB_3__::func_626(&(Local_358[6 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[6 /*32*/].f_22));
	Local_358[7 /*32*/].f_6 = { 2799.974f, -1164.842f, 46.92401f };
	Local_358[7 /*32*/].f_9 = 81.9027f;
	__LIB_3__::func_626(&(Local_358[7 /*32*/].f_22));
	Local_358[8 /*32*/].f_6 = { 2802.033f, -1166.782f, 46.92401f };
	Local_358[8 /*32*/].f_9 = 71.2798f;
	__LIB_3__::func_626(&(Local_358[8 /*32*/].f_22));
	Local_358[9 /*32*/].f_6 = { 2802.678f, -1164.265f, 46.924f };
	Local_358[9 /*32*/].f_9 = 71.2798f;
	__LIB_3__::func_626(&(Local_358[9 /*32*/].f_22));
	Local_358[10 /*32*/].f_6 = { 2799.45f, -1169.807f, 46.924f };
	Local_358[10 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[10 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[10 /*32*/].f_22));
	Local_358[11 /*32*/].f_6 = { 2799.674f, -1169.394f, 46.924f };
	Local_358[11 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[11 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[11 /*32*/].f_22));
	Local_358[12 /*32*/].f_6 = { 2800.018f, -1169.773f, 46.924f };
	Local_358[12 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[12 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[12 /*32*/].f_22));
	Local_358[13 /*32*/].f_6 = { 2800.355f, -1169.263f, 46.924f };
	Local_358[13 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[13 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[13 /*32*/].f_22));
	Local_358[14 /*32*/].f_6 = { 2799.819f, -1170.586f, 46.924f };
	Local_358[14 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[14 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[14 /*32*/].f_22));
	Local_358[15 /*32*/].f_6 = { 2800.611f, -1169.293f, 46.924f };
	Local_358[15 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
	__LIB_3__::func_626(&(Local_358[15 /*32*/].f_22));
	__LIB_4__::func_293(&(Local_358[15 /*32*/].f_22));
}

int func_18()
{
	if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
	{
		return 1;
	}
	if (__LIB_2__::func_934(iLocal_1180, 0))
	{
		iLocal_98[0] = __LIB_2__::func_965(iLocal_1180, 0, 0, 0, 1, 1);
	}
	if (!__LIB_2__::func_1(iLocal_98[0], 0, 1))
	{
		__LIB_5__::func_348(iLocal_1180, 1, Local_358[0 /*32*/].f_6, Local_358[0 /*32*/].f_6.f_1, Local_358[0 /*32*/].f_6.f_2, 0);
		return 0;
	}
	return 0;
}

int func_19()
{
	switch (iLocal_37)
	{
		case 0:
			uLocal_41 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR_NEW_SALOON02X"), 2793.192f, -1173.657f, 46.924f, 5);
			uLocal_42 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR_NEW_SALOON02X"), 2794.293f, -1174.435f, 46.924f, 5);
			iLocal_37++;
			break;
		case 1:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_42) && ENTITY::_0x1FF441D7954F8709(uLocal_41))
			{
				iLocal_1230[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_41));
				iLocal_1230[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_42));
				iLocal_37++;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1230[0]))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1230[1]))
			{
			}
			iLocal_37++;
			return 1;
		case 3:
			return 1;
	}
	return 0;
}

bool func_20()
{
	switch (iLocal_1206)
	{
		case 0:
			iLocal_1206 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_161.f_51, Local_161.f_51.f_3, &Local_358, &iLocal_98, 1, 0, -1, 1))
			{
				return false;
			}
			iLocal_1206 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

int func_21()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_98[0]);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], true);
		__LIB_2__::func_133(iLocal_98[0], &(Local_358[0 /*32*/].f_23), 0);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_133))
		{
			PED::_0x7C00CFC48A782DC0(iLocal_133, iLocal_98[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (__LIB_2__::func_1(iLocal_98[1], 0, 1))
		{
			PED::_0x24C82EF607105FAA(iLocal_98[1], joaat("AGGRESSIVE"));
			func_93(iLocal_98[1], 1);
			__LIB_2__::func_56(iLocal_98[1], 1, 1);
		}
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (__LIB_2__::func_1(iLocal_98[iVar0], 0, 1) && iVar0 != 1)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_98[iVar0], Local_358[iVar0 /*32*/].f_6, Local_358[iVar0 /*32*/].f_9, true, false, true);
			}
			if (iLocal_98[iVar0] != iLocal_98[0] && iLocal_98[iVar0] != iLocal_98[1])
			{
				if (__LIB_2__::func_1(iLocal_98[iVar0], 0, 1))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_98[iVar0], "RAT_INFESTATION_RATS_GROUP", 0f);
					__LIB_1__::func_991(iLocal_98[iVar0], joaat("HONOR_EVENT_KILL_VERMIN"));
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_98[iVar0], 1);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_358[iVar0 /*32*/].f_23)))
			{
				__LIB_2__::func_133(iLocal_98[iVar0], &(Local_358[iVar0 /*32*/].f_23), 0);
			}
			iVar0++;
		}
		func_96();
		__LIB_3__::func_285(iLocal_98[0], &Local_161, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
		{
			__LIB_3__::func_285(iLocal_98[1], &Local_161, 0);
		}
		return 1;
	}
	return 0;
}

void func_22(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((iVar0 >= 2 && iVar0 != iParam1) && iVar0 != iParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_98[iVar0], bParam0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_98[iVar0], bParam0);
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_24()
{
	if (iLocal_944 == 0)
	{
		Local_145 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_145.f_4, 0, "PBL_Intro_Idle", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_145, Local_161.f_51, 0f, 0f, -30f, 2);
		if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145, "barman", iLocal_98[0], 0);
		}
		if (__LIB_2__::func_1(iLocal_98[1], 0, 1))
		{
			TASK::CLEAR_PED_TASKS(iLocal_98[1], true, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145, "man", iLocal_98[1], 0);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_145.f_4))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_145, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_145);
			}
		}
	}
}

bool func_31(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
	{
		if (func_118(iLocal_98[0], 0, &(Local_161.f_5), &uLocal_1181, 0, 0))
		{
			__LIB_1__::func_683(iParam0, 1);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
	{
		if (func_118(iLocal_98[1], 0, &(Local_161.f_5), &uLocal_1181, 0, 0))
		{
			return true;
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_120))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
		{
			if (bLocal_943)
			{
				return true;
			}
		}
		else if (func_119())
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iLocal_34, 131072))
	{
		return true;
	}
	return false;
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		if (__LIB_0__::func_27(iLocal_34, 128))
		{
			PED::CLEAR_PED_NON_CREATION_AREA();
			__LIB_1__::func_681(&iLocal_34, 128);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_34, 128))
	{
		PED::SET_PED_NON_CREATION_AREA(2784.866f, -1179.439f, 40.3084f, 2808.771f, -1155.45f, 50.432f);
		__LIB_1__::func_683(&iLocal_34, 128);
	}
}

void func_34()
{
	int iVar0;
	PED::_0xEEED8FAFEC331A70(iLocal_98[0], Global_36, 3);
	TASK::_0x2E1D6D87346BB7D2(iLocal_98[0], Global_35, 0, 0);
	if (!func_126(iLocal_98[0]))
	{
		__LIB_2__::func_504(iLocal_98[0], 0);
		if (!__LIB_0__::func_27(iLocal_34, 32))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_34, 32);
		}
		TASK::TASK_SMART_FLEE_PED(iLocal_98[0], Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2795.592f, -1164.554f, 46.924f, 2f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
	}
}

char* func_35(char* sParam0)
{
	char cVar0[64];
	struct<8> Var8;
	Var8 = { __LIB_0__::func_482(sParam0) };
	if (iLocal_944 == 0)
	{
		StringCopy(&cVar0, "RE_RI_NBX_V1_", 64);
	}
	else
	{
		StringCopy(&cVar0, "RE_RI_NBX_V2_", 64);
	}
	StringConCat(&cVar0, &Var8, 64);
	return __LIB_1__::func_569(cVar0);
}

void func_37()
{
	__LIB_0__::func_325(&iLocal_1229);
}

bool func_39()
{
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
	if (iLocal_965 > 2)
	{
		if (iLocal_944 == 0)
		{
			func_138();
		}
		func_139();
		func_140();
	}
	if (!__LIB_0__::func_27(iLocal_34, 262144))
	{
		if (iLocal_965 <= 8)
		{
			__LIB_4__::func_113(Global_35, iLocal_98[0], 5f, &uLocal_14, 0, 1, 0);
		}
		else
		{
			func_142();
		}
	}
	if (iLocal_965 > 0)
	{
		func_143();
		func_144();
		func_145();
	}
	switch (iLocal_965)
	{
		case 0:
			if (func_146())
			{
				if (iLocal_944 == 0)
				{
					ANIMSCENE::START_ANIM_SCENE(Local_145);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_145, "PBL_Intro_Idle", true);
				}
				func_147();
				func_148();
				func_33(0);
				func_149();
				__LIB_2__::func_133(iLocal_98[0], &(Local_358[0 /*32*/].f_23), 0);
				iLocal_965 = 1;
			}
			break;
		case 1:
			if (iLocal_944 == 0)
			{
				if (__LIB_3__::func_647(&Local_161, &uLocal_355, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 35f, 1500, 5.5f, 2f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1, 0))
				{
					if (__LIB_2__::func_227(0, 1, iLocal_98[0], 1) && __LIB_2__::func_227(0, 1, iLocal_98[1], 1))
					{
						func_22(0, 4, 5);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_145, "PBL_Intro_Action", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_145, "BOOL_Intro", true, false);
						__LIB_3__::func_164(&(Local_161.f_121));
						iLocal_965 = 2;
					}
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_98[0], 1, 1) < 60f)
				{
					func_153();
				}
			}
			else if (__LIB_3__::func_647(&Local_161, &uLocal_355, 1077936128 /* Float: 3f */, 50f, 35f, 1500, 5.5f, 1065353216 /* Float: 1f */, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 0, 0))
			{
				func_22(0, 4, 5);
				__LIB_3__::func_164(&(Local_161.f_121));
				iLocal_965 = 2;
			}
			break;
		case 2:
			if (func_154())
			{
				func_96();
				__LIB_3__::func_409(&Local_1182, 2f);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_145))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_145, "barman", iLocal_98[0]);
				}
				func_156();
				iLocal_965 = 3;
			}
			break;
		case 3:
			if (__LIB_1__::func_205(Global_35, iLocal_129, 1, 0) && !func_157())
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_80[0]))
				{
					func_158();
				}
				iLocal_965 = 4;
			}
			break;
		case 4:
			if (__LIB_3__::func_452(&Local_161, 1f, (40f / 2f), 10f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_98[0]))
			{
				if (func_160())
				{
				}
				func_161();
				func_162();
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
				if (__LIB_0__::func_665(Global_35, iLocal_98[0], 1, 1) > 5f)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], Local_136[0 /*2*/], "close_callover_f_barman", Global_35, -1, 4f, -4f, 67108864, 0f, false, false, -1f, 0, 65536, -1f);
					func_163();
				}
				iLocal_965 = 5;
			}
			break;
		case 5:
			func_162();
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "close_callover_f_barman", 1))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_98[0], 1, 1) < 13f && __LIB_2__::func_227(0, 1, iLocal_98[0], 1))
				{
					func_164();
					func_165(iLocal_120, joaat("P_MASONJARMOONSHINE01X"), 0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
					iLocal_965 = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], -1162159953, true) != 1)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], Local_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108865, 0f, false, false, -1f, 0, 65536, -1f);
				}
			}
			break;
		case 6:
			func_162();
			if (__LIB_0__::func_27(iLocal_34, 67108864))
			{
				func_56();
			}
			if (func_166())
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], -1162159953, true) != 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "interact_01_barman", 1)) && !__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], Local_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108864, 0f, false, false, -1f, 0, 65536, -1f);
				}
				if (__LIB_0__::func_27(iLocal_1275, 8))
				{
					Local_161.f_44 = 1;
					__LIB_1__::func_539();
					MAP::REMOVE_BLIP(&(uLocal_80[0]));
					iLocal_965 = 8;
					Jump @2902; //curOff = 1147
				}
				else if (__LIB_0__::func_27(iLocal_1275, 16))
				{
					Local_161.f_44 = 1;
					__LIB_1__::func_539();
					MAP::REMOVE_BLIP(&(uLocal_80[0]));
					iLocal_965 = 7;
				}
				else
				{
					func_168();
					if (__LIB_0__::func_27(iLocal_1275, 32))
					{
						__LIB_1__::func_539();
						MAP::REMOVE_BLIP(&(uLocal_80[0]));
						iLocal_965 = 7;
					}
					Jump @2902; //curOff = 1223
					func_169();
					if (__LIB_2__::func_227(-2f, 1, Global_35, 1) || __LIB_0__::func_27(iLocal_34, 65536))
					{
						func_170();
						iLocal_965 = 14;
					}
					Jump @2902; //curOff = 1272
					if (__LIB_0__::func_27(iLocal_1275, 1024))
					{
						func_171(1);
						__LIB_1__::func_539();
						MAP::REMOVE_BLIP(&(uLocal_80[0]));
						iLocal_965 = 7;
						Jump @2902; //curOff = 1310
					}
					else if (__LIB_0__::func_27(iLocal_1275, 16))
					{
						func_171(1);
					}
					func_172();
					func_173();
					func_174();
					func_175();
					func_176();
					if (!__LIB_0__::func_27(iLocal_34, 262144))
					{
						if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
						{
							func_142();
						}
					}
					if (func_177() && __LIB_0__::func_94(Global_35, vLocal_1194, 1) > 2f)
					{
						func_37();
						__LIB_2__::func_73(iLocal_98[0], &(uLocal_80[0]), -89429847, -401963276, 0, "BLIP_BARTENDER");
						__LIB_3__::func_662("RE_RI_OBJ_RETURN", 7500, 0, 0, -1, -1, 0);
						iLocal_965 = 9;
					}
					else if (__LIB_0__::func_27(iLocal_34, 2))
					{
						if (!__LIB_0__::func_27(iLocal_34, 134217728))
						{
							if (__LIB_2__::func_227(-1f, 1, 0, 0))
							{
								__LIB_0__::func_325(&(uLocal_80[0]));
								func_181();
								__LIB_3__::func_662("RE_RI_OBJ_KILL", 7500, 0, 0, -1, -1, 0);
								__LIB_1__::func_683(&iLocal_34, 134217728);
							}
						}
					}
					Jump @2902; //curOff = 1543
					func_172();
					func_174();
					func_176();
					if (__LIB_0__::func_94(Global_35, vLocal_1194, 1) < 1f)
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_121, true, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_871[0 /*12*/].f_8, true);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							__LIB_1__::func_683(&iLocal_34, 16384);
							iLocal_965 = 10;
						}
					}
					else
					{
						func_173();
					}
					Jump @2902; //curOff = 1637
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					ANIMSCENE::START_ANIM_SCENE(Local_145.f_1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_145.f_1, "PBL_Window_Idle", true);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_1__::func_390("RE_RI_OBJ_RETURN", 1);
					__LIB_0__::func_769();
					if (__LIB_0__::func_27(iLocal_34, 512) || __LIB_0__::func_27(iLocal_34, 256))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_145.f_1, "PBL_Reward_Avg", true);
						Local_967.f_75 = __LIB_1__::func_760(joaat("REWARD_BEAT_LARGE"), 0, -1);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_145.f_1, "PBL_Reward_Good", true);
						Local_967.f_75 = __LIB_1__::func_760(joaat("REWARD_BEAT_HUGE"), 0, -1);
					}
					if (iLocal_944 == 1)
					{
						Local_967.f_75 *= 2;
					}
					iLocal_965 = 11;
					Jump @2902; //curOff = 1805
					func_184();
					if (__LIB_0__::func_27(iLocal_34, 16384))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("ENDSINWALK")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_145.f_1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_871[0 /*12*/].f_8))
							{
								OBJECT::DELETE_OBJECT(&(Local_871[0 /*12*/].f_8));
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
							__LIB_0__::func_325(&(uLocal_80[0]));
							func_185(&Local_967);
							func_186();
							func_187(33, Global_35);
							__LIB_1__::func_715(12, 0, 0, "RE_HONOR_HELPED_STRANGER", iLocal_98[0], 0, 1065353216 /* Float: 1f */, 0);
							__LIB_3__::func_615(iLocal_98[0], 3);
							EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(2796.864f, -1168.91f, 46.924f, 5f, false);
							LAW::_0x61B98367D93F012F(PLAYER::PLAYER_ID());
							iLocal_131 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2793.771f, -1174.144f, 46.88809f, 0f, 0f, 0f, 1f, 1f, 1f);
							func_171(1);
							bLocal_1213 = true;
							__LIB_1__::func_681(&iLocal_34, 16384);
						}
						else
						{
							CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						}
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_145.f_1, false))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[0], vLocal_77, 1f, 20000, 0.25f, 0, 40000f);
						__LIB_2__::func_104(&(Local_161.f_5), 1);
						iLocal_965 = 13;
					}
					Jump @2902; //curOff = 2107
					func_22(0, -1, -1);
					func_175();
					if (__LIB_0__::func_27(iLocal_34, 8192))
					{
					}
					else if (!__LIB_0__::func_27(iLocal_34, 32))
					{
						__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_34, 32);
					}
					if (__LIB_0__::func_27(iLocal_34, 16384))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						__LIB_1__::func_681(&iLocal_34, 16384);
					}
					if (__LIB_2__::func_1(iLocal_98[0], 0, 1) && !__LIB_0__::func_27(iLocal_35, 1))
					{
						if (func_126(iLocal_98[0]))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 315, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 178, true);
							if (Local_161.f_5.f_10 != 0)
							{
								LAW::_0xF0B67BAD53C35BD9(iLocal_98[0], Global_35, Local_161.f_5.f_10, Global_36, joaat("CRIME_THREATEN"));
							}
							else
							{
								LAW::_0xF0B67BAD53C35BD9(iLocal_98[0], Global_35, iLocal_98[0], Global_36, joaat("CRIME_THREATEN"));
							}
						}
					}
					if (__LIB_2__::func_1(iLocal_98[1], 0, 1))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_98[1], Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
						PED::SET_PED_KEEP_TASK(iLocal_98[1], true);
					}
					Local_161.f_50 = 1;
					iLocal_965 = 14;
					Jump @2902; //curOff = 2434
					if (func_190())
					{
						iLocal_965 = 14;
					}
					Jump @2902; //curOff = 2449
					func_169();
					func_191();
					func_175();
					if (__LIB_0__::func_27(iLocal_35, 1))
					{
						func_174();
					}
					if (__LIB_0__::func_27(iLocal_34, 8192))
					{
						if (!__LIB_0__::func_27(iLocal_34, 1048576))
						{
							if (__LIB_2__::func_227(-3f, 1, iLocal_98[0], 0))
							{
								if (!__LIB_0__::func_27(iLocal_34, 32))
								{
									__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&iLocal_34, 32);
								}
								func_192(joaat("CRIME_VANDALISM"));
							}
						}
					}
					else
					{
						if (((__LIB_0__::func_94(Global_35, Local_161.f_51, 1) > 25f && !__LIB_1__::func_205(Global_35, iLocal_120, 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_121, 1, 0)) && func_193())
						{
							return true;
						}
						if (__LIB_0__::func_27(iLocal_34, 1))
						{
							if (!__LIB_0__::func_27(iLocal_34, 1048576))
							{
								if (__LIB_2__::func_227(-3f, 1, 0, 0))
								{
									if (!__LIB_0__::func_27(iLocal_34, 32))
									{
										__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
										__LIB_1__::func_683(&iLocal_34, 32);
									}
									func_192(joaat("CRIME_ASSAULT"));
								}
							}
						}
						else
						{
							if (__LIB_0__::func_27(iLocal_34, 65536))
							{
								if (!__LIB_0__::func_27(iLocal_34, 4))
								{
									if (__LIB_2__::func_227(0, 1, iLocal_98[0], 1))
									{
										if (Local_161.f_98[0] < 20f)
										{
											__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("BOREDNOW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
										}
										__LIB_1__::func_683(&iLocal_34, 4);
									}
								}
							}
							__LIB_3__::func_699(&(iLocal_98[0]), 0, Global_35, 1, 0, 0, 0, 1);
						}
					}
				}
				return false;
			}
			default:
				break;
	}
}

void func_53(bool bParam0)
{
	if (bParam0)
	{
		EVENT::_0xB6F4825153920582();
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
		PLAYER::_0x96722257E5381E00(PLAYER::PLAYER_ID());
		if (!__LIB_0__::func_27(iLocal_34, 64))
		{
			LAW::_0x710448D44A64C213(0);
			LAW::_0xC805EB785824F712(0);
			__LIB_1__::func_683(&iLocal_34, 64);
		}
	}
	else if (__LIB_0__::func_27(iLocal_34, 64))
	{
		LAW::_0x710448D44A64C213(1);
		LAW::_0xC805EB785824F712(1);
		__LIB_1__::func_681(&iLocal_34, 64);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_27(iLocal_34, 1073741824 /* Float: 2f */))
	{
		iVar1 = 6;
		iVar0 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar0, 0, 0, iVar1, 0, 0, 0, 0);
		__LIB_13__::func_882(33, 53, iVar0);
		__LIB_10__::func_702(9, joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), 1, 977356591, iVar1);
		__LIB_1__::func_683(&iLocal_34, 1073741824 /* Float: 2f */);
	}
}

void func_56()
{
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 0)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 0)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 0);
	}
}

void func_67()
{
	int iVar0;
	if (iLocal_944 == 0)
	{
		iLocal_16 = (9 - 2);
		Local_358[1 /*32*/].f_1 = joaat("RE_RATINFESTATION_MALES_01");
		StringCopy(&(Local_358[1 /*32*/].f_23), "0878_A_M_M_Civ_Poor_Asian_AVOID_02", 64);
		Local_358[1 /*32*/].f_3 = -754402027;
	}
	else
	{
		iLocal_16 = 14;
	}
	iVar0 = 2;
	while (iVar0 <= ((2 + iLocal_16) - 1))
	{
		Local_358[iVar0 /*32*/].f_1 = joaat("A_C_RAT_01");
		__LIB_3__::func_626(&(Local_358[iVar0 /*32*/].f_22));
		__LIB_4__::func_294(&(Local_358[iVar0 /*32*/].f_22));
		iVar0++;
	}
}

void func_69()
{
	Local_136[0 /*2*/] = "script_re@rat_infestation";
	Local_136[0 /*2*/].f_1 = "wait_idle_barman";
	__LIB_3__::func_318(Local_136[0 /*2*/], &uLocal_44);
	Local_136[1 /*2*/] = "creatures_mammal@rat@normal@idle";
	Local_136[1 /*2*/].f_1 = "idle";
	__LIB_3__::func_318(Local_136[1 /*2*/], &uLocal_44);
	Local_136[2 /*2*/] = "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
	Local_136[2 /*2*/].f_1 = "confused_punctuate_f_002";
	__LIB_3__::func_318(Local_136[2 /*2*/], &uLocal_44);
}

void func_70(var uParam0)
{
	StringCopy(&(uParam0->f_34), func_35("THANKS"), 64);
	StringCopy(&(uParam0->f_42), func_35("REWARD"), 64);
	if (__LIB_0__::func_181())
	{
		StringCopy(&(uParam0->f_54), func_35("WLCM_JHN"), 64);
	}
	else
	{
		StringCopy(&(uParam0->f_54), func_35("WLCM_ART"), 64);
	}
	uParam0->f_78 = 0;
	uParam0->f_79 = 1;
	uParam0->f_72 = __LIB_3__::func_687(Local_161.f_3);
}

void func_71()
{
	Local_145.f_4 = "script@beat@town@ratInfestation@saloon";
	Local_145.f_5 = "script@beat@town@ratInfestation@saloonWindow";
	Local_153.f_4 = "script@beat@town@ratInfestation@rat";
	Local_153.f_5 = "script@beat@town@ratInfestation@rat_2";
	Local_153.f_6 = "script@beat@town@ratInfestation@rat_3";
}

void func_72()
{
	Local_871[0 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
}

bool func_78()
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1271))
	{
		return INTERIOR::IS_INTERIOR_READY(iLocal_1271);
	}
	else
	{
		iLocal_1271 = INTERIOR::GET_INTERIOR_AT_COORDS(2798.769f, -1165.372f, 48.24032f);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1271);
	}
	return false;
}

int func_79(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_955(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_4__::func_106(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_257(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_93(var uParam0, int iParam1)
{
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0, 3, 2, iParam1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0, 4, 2, iParam1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0, 7, 2, iParam1);
}

void func_96()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_2__::func_1(iLocal_98[iVar0], 0, 1) && iVar0 >= 2)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar0], 301, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar0], 317, false);
			PLAYER::_0xCB0B9506BC91E441(iLocal_98[iVar0], 2);
			if (PED::GET_PED_CONFIG_FLAG(iLocal_98[iVar0], 317, true))
			{
			}
		}
		iVar0++;
	}
}

bool func_118(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_4__::func_23(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_4__::func_24(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_119()
{
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"), 2791.884f, -1173.433f, 48.86314f, 5.25f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_WINDOW_SMASHED"), 2791.884f, -1173.433f, 48.86314f, 5.25f))
	{
		return true;
	}
	return false;
}

bool func_126(int iParam0)
{
	if (__LIB_1__::func_205(iParam0, iLocal_120, 1, 0) || __LIB_1__::func_205(iParam0, iLocal_121, 1, 0))
	{
		return true;
	}
	return false;
}

void func_132()
{
	if (Local_161.f_46)
	{
		func_53(0);
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_120))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
		{
			if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_53(1);
			}
		}
		else
		{
			func_53(0);
		}
	}
}

void func_133()
{
	int iVar0;
	int iVar1;
	if (iLocal_965 > 0)
	{
		iVar0 = 2;
		while (iVar0 <= 15)
		{
			if (Local_358[iVar0 /*32*/].f_1 != 0)
			{
				if (!__LIB_2__::func_1(iLocal_98[iVar0], 0, 1))
				{
					iVar1++;
				}
				else if (!func_126(iLocal_98[iVar0]))
				{
					__LIB_1__::func_864(iLocal_98[iVar0], 0, 0);
					iVar1++;
				}
			}
			iVar0++;
		}
		iLocal_1220 = iVar1;
	}
}

void func_134()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(10)))
	{
		__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("IGNORE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(11)))
	{
		__LIB_2__::func_478(iLocal_98[0], iLocal_98[0], func_35("FRUSTRATED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(12)))
	{
		__LIB_2__::func_478(iLocal_98[0], iLocal_98[0], func_35("WORRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(13)))
	{
		__LIB_2__::func_478(iLocal_98[0], iLocal_98[0], func_35("ANGER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(14)))
	{
		func_163();
		if (iLocal_944 == 1 && !__LIB_0__::func_27(iLocal_34, 268435456))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LONG_ALT"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LONG"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(15)))
	{
		func_163();
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_SHORT"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
	}
	if (!__LIB_0__::func_27(iLocal_34, 67108864) && !__LIB_0__::func_27(iLocal_35, 16777216))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(16)) || (__LIB_0__::func_27(iLocal_34, 268435456) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "interact_01_barman", 1)))
		{
			if (!__LIB_0__::func_27(iLocal_34, 268435456))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("EXPLAIN"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			}
			else if (__LIB_2__::func_140(0))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("EXPLAIN_SICK"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("EXPLAIN_ALT"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			}
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
			func_163();
			__LIB_1__::func_683(&iLocal_35, 16777216);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(17)) && !__LIB_0__::func_27(iLocal_34, 67108864))
	{
		if (!__LIB_0__::func_27(iLocal_34, 268435456))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("NEED_HELP"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else if (__LIB_2__::func_140(0))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("NEED_HELP_SICK"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("NEED_HELP_ALT"), "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
		__LIB_1__::func_683(&iLocal_34, 67108864);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(20)) && __LIB_2__::func_227(-2f, 1, iLocal_98[0], 0))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("HASNT_STARTED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(21)))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(22)))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(23)))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DAMAGE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(24)))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DAMAGE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (iLocal_944 == 0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], -2034435946))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("THANKS_BEST"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
	}
	else if (iLocal_944 == 1 && !__LIB_2__::func_140(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 1422968249))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("THANKS_BEST"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 983934627))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("THANKS_BEST_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, func_362(25)))
	{
		if (iLocal_944 == 1)
		{
			__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("WELCOME_BEST"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
		else if (__LIB_0__::func_181())
		{
			__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("WELCOME_BEST_JHN"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("WELCOME_BEST_ART"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
	}
	if (iLocal_944 == 0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 1545820527))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("THANKS_OK"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
	}
	else if (iLocal_944 == 1 && !__LIB_2__::func_140(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 1328225310))
		{
			__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("THANKS_OK"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], -1504940390))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("THANKS_OK_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, func_362(26)))
	{
		if (__LIB_0__::func_181())
		{
			__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("WELCOME_OK_JHN"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
		else if (iLocal_944 == 0 || (iLocal_944 == 1 && !__LIB_2__::func_140(0)))
		{
			__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("WELCOME_OK_ART"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("WELCOME_OK_ART_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -553575591, 1, 0, 0);
		}
	}
}

void func_135()
{
	if (!__LIB_0__::func_30(iLocal_1208[0]))
	{
		iLocal_1208[0] = __LIB_0__::func_68(-1334037078, 0, 0);
	}
	if (!__LIB_0__::func_30(iLocal_1208[1]))
	{
		iLocal_1208[1] = __LIB_0__::func_68(-1641377529, 0, 0);
	}
	if (!__LIB_0__::func_30(iLocal_1211))
	{
		iLocal_1211 = __LIB_0__::func_68(-3907007, 0, 0);
	}
	if (!__LIB_0__::func_30(iLocal_1212))
	{
		iLocal_1212 = __LIB_0__::func_68(-74215266, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1211))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1211) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1211, 1);
		}
	}
	if (!Local_161.f_46)
	{
		if ((iLocal_965 <= 6 && !__LIB_0__::func_27(iLocal_34, 67108864)) || (iLocal_965 > 13 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_120, true, 0)))
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[0]))
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 1);
				}
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[1]))
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 1);
				}
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1212))
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1212) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1212, 1);
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_120, true, 0))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[0]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 0);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[1]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 0);
			}
		}
	}
}

void func_136()
{
	if (!__LIB_0__::func_27(iLocal_35, 262144))
	{
		if (iLocal_965 >= 6)
		{
			if (!__LIB_0__::func_27(iLocal_35, 131072))
			{
				func_366();
			}
			else if (func_367())
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_145.f_1, "barman", &Local_1182, true, "PBL_Window_Idle", 2) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_145.f_1, "plr", &vLocal_1194, true, "PBL_Reward_Good", 2))
				{
					__LIB_1__::func_683(&iLocal_35, 262144);
				}
				else
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Window_Idle"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145.f_1, "PBL_Window_Idle");
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Reward_Good"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145.f_1, "PBL_Reward_Good");
					}
				}
			}
		}
	}
}

void func_137()
{
	if (__LIB_0__::func_27(iLocal_1275, 256))
	{
		return;
	}
	if (Local_161.f_46)
	{
		__LIB_2__::func_593(&iLocal_1278, &Local_1299);
		__LIB_1__::func_683(&iLocal_1275, 256);
		return;
	}
	if (iLocal_1277 > 0)
	{
		if (__LIB_0__::func_27(iLocal_1275, 4))
		{
			if (((iLocal_965 == 6 && !__LIB_0__::func_27(iLocal_1275, 8)) && !__LIB_0__::func_27(iLocal_1275, 16)) && !__LIB_0__::func_27(iLocal_1275, 32))
			{
				iLocal_1276 = func_370(&(iLocal_98[0]), &iLocal_1278, 20f, &Local_1299, &(Local_161.f_192), 0f, 1, 0, "", __LIB_2__::func_340(2, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				iLocal_1276 = func_370(&(iLocal_98[0]), &iLocal_1278, 20f, &Local_1299, &(Local_161.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	switch (iLocal_1277)
	{
		case 0:
			__LIB_2__::func_602(&(Local_1299[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_1299[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
			__LIB_1__::func_683(&iLocal_1275, 4);
			iLocal_1277 = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_34, 8) || __LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
			{
				__LIB_2__::func_451(&iLocal_1278, 0);
				__LIB_2__::func_602(&(Local_1299[0 /*17*/]), __LIB_2__::func_460(4), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1299[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 1, 0);
				iLocal_1277 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_1275, 32))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
				{
					iLocal_1276 = 0;
				}
				switch (iLocal_1276)
				{
					case 0:
						__LIB_2__::func_504(iLocal_98[0], 500);
						__LIB_2__::func_451(&iLocal_1278, 0);
						__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
						if (__LIB_0__::func_181())
						{
							if ((__LIB_3__::func_993(Local_161.f_3, 0) == 1 && iLocal_944 == 1) && __LIB_0__::func_27(iLocal_34, 268435456))
							{
								__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("YES_JHN_AGAIN"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("YES_JHN"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
							}
						}
						else if (__LIB_3__::func_993(Local_161.f_3, 0) == 1 && iLocal_944 == 1)
						{
							__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("YES_ART_AGAIN"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("YES_ART"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
						}
						__LIB_1__::func_683(&iLocal_1275, 8);
						__LIB_1__::func_148(&uLocal_1256);
						iLocal_1277 = 3;
						break;
					case 1:
						__LIB_2__::func_451(&iLocal_1278, 0);
						__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
						if (__LIB_0__::func_181())
						{
							__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("NO_JHN"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("NO_ART"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
						}
						__LIB_1__::func_683(&iLocal_1275, 16);
						iLocal_1277 = 4;
						break;
				}
			}
			else
			{
				__LIB_2__::func_451(&iLocal_1278, 0);
				__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
				iLocal_1277 = 4;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_34, 16777216))
			{
				if (!__LIB_0__::func_27(iLocal_1275, 512))
				{
					if (!__LIB_0__::func_27(iLocal_1275, 4096))
					{
						func_375(1);
					}
					else if (__LIB_0__::func_265(&uLocal_1256) > 10f)
					{
						if ((!__LIB_1__::func_205(Global_35, iLocal_120, 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_121, 1, 0)) && !__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_98[0])))
						{
							__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 1, 0);
							__LIB_1__::func_683(&iLocal_1275, 512);
						}
					}
				}
				else
				{
					func_377();
					if (__LIB_0__::func_27(iLocal_34, 65536))
					{
						__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_1256);
						__LIB_1__::func_681(&iLocal_1275, 4096);
						iLocal_1277 = 4;
					}
					else
					{
						switch (iLocal_1276)
						{
							case 0:
								break;
							case 1:
								__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
								__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("CHANGE_MIND"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_1275, 16);
								__LIB_1__::func_683(&iLocal_1275, 1024);
								__LIB_1__::func_148(&uLocal_1256);
								__LIB_1__::func_681(&iLocal_1275, 4096);
								iLocal_1277 = 4;
								break;
						}
					}
				}
			}
			else
			{
				__LIB_2__::func_593(&iLocal_1278, &Local_1299);
				iLocal_1277 = 10;
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(iLocal_1275, 4096))
			{
				func_375(0);
			}
			else if (__LIB_0__::func_27(iLocal_35, 1048576) || __LIB_0__::func_27(iLocal_34, 4))
			{
				__LIB_1__::func_148(&uLocal_1256);
				iLocal_1277 = 5;
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iLocal_1275, 4096))
			{
				func_375(0);
			}
			else
			{
				__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 1, 0);
				iLocal_1277 = 6;
			}
			break;
		case 6:
			switch (iLocal_1276)
			{
				case 0:
					__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("POST_QUIT_PLY_POS"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
					__LIB_1__::func_148(&uLocal_1256);
					iLocal_1277 = 7;
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_98[0], func_35("POST_QUIT_PLY_NEG"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
					__LIB_1__::func_148(&uLocal_1256);
					iLocal_1277 = 8;
					break;
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_1256) > 3f && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (iLocal_944 == 0)
				{
					__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("GOODBYE_POS"), "", -1f, 0, 0, 0, 2, 0, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_98[0], Global_35, "GENERIC_YES", "", -1f, 2, 0, 0, 2, 0, 0, 291934926, 1, 0, 0);
				}
				iLocal_1277 = 9;
			}
			break;
		case 8:
			if (__LIB_0__::func_265(&uLocal_1256) > 3f && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("GOODBYE_NEG"), "", -1f, 0, 0, 0, 2, 0, 0, 1506116031, 1, 0, 0);
				iLocal_1277 = 9;
			}
			break;
		case 9:
			break;
	}
}

void func_138()
{
	int iVar0;
	if (iLocal_944 != 0)
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_34, 16))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], joaat("ENDSINWALK")))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_145))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_145, "man", iLocal_98[1]);
			}
			PED::FORCE_PED_MOTION_STATE(iLocal_98[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2790.094f, -1186.867f, 46.58545f, 1f, 20000, 5f, 524289, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2799.103f, -1192.156f, 46.13103f, 1f, 20000, 5f, 524289, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2801.462f, -1196.941f, 46.23405f, 1f, 20000, 5f, 524289, 40000f);
			TASK::TASK_SMART_FLEE_COORD(0, Local_161.f_51, 100f, -1, false, 1f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			__LIB_1__::func_474(iLocal_98[1], &iVar0, 0, 0, 1, 1);
			__LIB_1__::func_683(&iLocal_34, 16);
		}
	}
}

void func_139()
{
	if (__LIB_0__::func_27(iLocal_1275, 8))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
		{
			if (__LIB_5__::func_679(&(Local_161.f_5), 256))
			{
				__LIB_2__::func_104(&(Local_161.f_5), 0);
				__LIB_2__::func_507(&(Local_161.f_5), 6000);
			}
		}
		else if (!__LIB_5__::func_679(&(Local_161.f_5), 256))
		{
			__LIB_2__::func_104(&(Local_161.f_5), 1);
			__LIB_2__::func_507(&(Local_161.f_5), 2000);
		}
	}
}

void func_140()
{
	if (Local_161.f_46)
	{
		func_379(1);
	}
	else if (__LIB_0__::func_27(iLocal_1275, 8))
	{
		if (func_126(Global_35))
		{
			func_379(0);
		}
		else
		{
			func_379(1);
		}
	}
}

void func_142()
{
	if (!__LIB_0__::func_27(iLocal_34, 262144))
	{
		__LIB_4__::func_72(iLocal_98[0]);
		__LIB_4__::func_72(Global_35);
		__LIB_1__::func_683(&iLocal_34, 262144);
	}
}

void func_143()
{
	if (__LIB_0__::func_27(iLocal_35, 2097152))
	{
		return;
	}
	switch (iLocal_38)
	{
		case 0:
			Local_153 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_153.f_4, 0, "pbl_Rat", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_153, 2801.41f, -1168.59f, 48.19f, 0f, 0f, 0f, 2);
			if (__LIB_2__::func_1(iLocal_98[3], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "A_C_RAT_01", iLocal_98[3], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(Local_153);
			uLocal_1343 = ENTITY::_0x6F3068258A499E52(joaat("P_CANDLELAMP01X"), 2791.268f, -1168.866f, 48.06049f, 5);
			iLocal_38++;
			break;
		case 1:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1343))
			{
				iLocal_1334 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1343);
				if (iLocal_1334 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "candle", iLocal_1334, 0);
					uLocal_1344 = ENTITY::_0x6F3068258A499E52(joaat("P_GLASS01X"), 2791.383f, -1168.21f, 47.99231f, 5);
					iLocal_38++;
				}
			}
			break;
		case 2:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1344))
			{
				iLocal_1335 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1344);
				if (iLocal_1335 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "glass01", iLocal_1335, 0);
					uLocal_1345 = ENTITY::_0x6F3068258A499E52(joaat("P_GLASS01X"), 2791.398f, -1168.19f, 48.09696f, 5);
					iLocal_38++;
				}
			}
			break;
		case 3:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1345))
			{
				iLocal_1336 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1345);
				if (iLocal_1336 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "glass02", iLocal_1336, 0);
					uLocal_1346 = ENTITY::_0x6F3068258A499E52(joaat("P_GLASS01X"), 2791.398f, -1168.19f, 48.09696f, 5);
					iLocal_38++;
				}
			}
			break;
		case 4:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1346))
			{
				iLocal_1337 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1346);
				if (iLocal_1337 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "glass03", iLocal_1337, 0);
					uLocal_1347 = ENTITY::_0x6F3068258A499E52(joaat("P_GLASS01X"), 2791.269f, -1168.444f, 47.98463f, 5);
					iLocal_38++;
				}
			}
			break;
		case 5:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1347))
			{
				iLocal_1338 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1347);
				if (iLocal_1338 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "glass04", iLocal_1338, 0);
					uLocal_1348 = ENTITY::_0x6F3068258A499E52(joaat("P_GLASS01X"), 2791.204f, -1168.556f, 47.99098f, 5);
					iLocal_38++;
				}
			}
			break;
		case 6:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1348))
			{
				iLocal_1339 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1348);
				if (iLocal_1339 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153, "glass05", iLocal_1339, 0);
					iLocal_38++;
				}
			}
			break;
		case 7:
			break;
		case 8:
			__LIB_1__::func_683(&iLocal_35, 2097152);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_153.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_153, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_153);
		}
	}
}

void func_144()
{
	if (__LIB_0__::func_27(iLocal_35, 4194304))
	{
		return;
	}
	switch (iLocal_39)
	{
		case 0:
			Local_153.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_153.f_5, 0, "pblWindowAction1", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_153.f_1, 2801.41f, -1168.59f, 48.2f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop1", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop2", false, false);
			if (__LIB_2__::func_1(iLocal_98[5], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153.f_1, "RAT", iLocal_98[5], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(Local_153.f_1);
			iLocal_39++;
			break;
		case 1:
			iLocal_1340 = OBJECT::CREATE_OBJECT(joaat("P_WHISKEYGLASS01X"), 2794.263f, -1165.707f, 47.99822f, true, true, false, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153.f_1, "GLASS", iLocal_1340, 0);
			iLocal_39++;
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_35, 4194304);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_153.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_153.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_153.f_1);
		}
	}
}

void func_145()
{
	if (__LIB_0__::func_27(iLocal_35, 8388608))
	{
		return;
	}
	switch (iLocal_40)
	{
		case 0:
			Local_153.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_153.f_6, 0, "pblAll", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_153.f_2, 2801.41f, -1168.59f, 48.2f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_2, "breakoutLoop1", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_2, "breakoutLoop2", false, false);
			if (__LIB_2__::func_1(iLocal_98[4], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153.f_2, "RAT", iLocal_98[4], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(Local_153.f_2);
			iLocal_40++;
			break;
		case 1:
			iLocal_1341 = OBJECT::CREATE_OBJECT(joaat("P_GLASS01X"), 2796.597f, -1171.83f, 47.97153f, true, true, false, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_153.f_2, "GLASS", iLocal_1341, 0);
			iLocal_40++;
			break;
		case 2:
			uLocal_1349 = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR27X"), 2797.317f, -1170.767f, 47.97153f, 5);
			iLocal_40++;
			break;
		case 3:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1349))
			{
				iLocal_1342 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1349);
				if (iLocal_1342 != 0)
				{
					__LIB_1__::func_683(&iLocal_35, 8388608);
				}
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_153.f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_153.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_153.f_2);
		}
	}
}

bool func_146()
{
	switch (iLocal_944)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_145, true, false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_145, "PBL_Intro_Idle") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_145, "PBL_Intro_Action"))
				{
					return true;
				}
				else
				{
					func_382();
				}
			}
			break;
		case 1:
			return true;
	}
	return false;
}

void func_147()
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
	iVar0 = __LIB_0__::func_120(287);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		iVar4 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if ((iVar4 == 0 || __LIB_1__::func_205(iVar4, iLocal_120, 1, 0)) || ENTITY::IS_ENTITY_OCCLUDED(iVar4))
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar0);
			PED::SET_PED_CONFIG_FLAG(iVar4, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, true, false);
			PED::_0x39A2FC5AF55A52B1(iVar4, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar4);
		}
	}
	iVar1 = __LIB_0__::func_120(288);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		iVar5 = PERSCHAR::_0x31C70A716CAE1FEE(iVar1);
		if ((iVar5 == 0 || __LIB_1__::func_205(iVar5, iLocal_120, 1, 0)) || ENTITY::IS_ENTITY_OCCLUDED(iVar5))
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar5, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
			PED::_0x39A2FC5AF55A52B1(iVar5, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar5);
		}
	}
	iVar2 = __LIB_0__::func_120(286);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar2))
	{
		iVar6 = PERSCHAR::_0x31C70A716CAE1FEE(iVar2);
		iVar8 = __LIB_0__::func_57(PERSCHAR::_0xF8DE7154F7D1458F(iVar2));
		if (((iVar6 == 0 && iVar8 == 0) || (__LIB_1__::func_205(iVar6, iLocal_120, 1, 0) && (iVar8 == 0 || ENTITY::IS_ENTITY_OCCLUDED(iVar8)))) || (ENTITY::IS_ENTITY_OCCLUDED(iVar6) && (iVar8 == 0 || ENTITY::IS_ENTITY_OCCLUDED(iVar8))))
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar2);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar6, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
			PED::_0x39A2FC5AF55A52B1(iVar6, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar8, true, false);
				VEHICLE::_0xC399CC89FBA05DA0(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar8), 1);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar8);
			}
		}
	}
	iVar3 = __LIB_0__::func_120(298);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar3))
	{
		iVar7 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
		if ((iVar7 == 0 || __LIB_1__::func_205(iVar7, iLocal_120, 1, 0)) || ENTITY::IS_ENTITY_OCCLUDED(iVar7))
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar3);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar3);
			PED::SET_PED_CONFIG_FLAG(iVar7, 171, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, false);
			PED::_0x39A2FC5AF55A52B1(iVar7, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar7);
		}
	}
	bLocal_15 = true;
}

void func_148()
{
	if (iLocal_944 == 0)
	{
		iLocal_17[0] = 0;
		iLocal_17[1] = 0;
		iLocal_17[2] = 1;
		iLocal_17[3] = 1;
		iLocal_17[4] = 1;
		iLocal_17[5] = 1;
		iLocal_17[6] = 1;
		iLocal_17[7] = 1;
		iLocal_17[8] = 1;
		iLocal_17[9] = 1;
		iLocal_17[10] = 0;
		iLocal_17[11] = 0;
		iLocal_17[12] = 0;
		iLocal_17[13] = 0;
		iLocal_17[14] = 0;
		iLocal_17[15] = 0;
	}
	else
	{
		iLocal_17[0] = 0;
		iLocal_17[1] = 0;
		iLocal_17[2] = 1;
		iLocal_17[3] = 1;
		iLocal_17[4] = 1;
		iLocal_17[5] = 1;
		iLocal_17[6] = 1;
		iLocal_17[7] = 1;
		iLocal_17[8] = 1;
		iLocal_17[9] = 1;
		iLocal_17[10] = 1;
		iLocal_17[11] = 1;
		iLocal_17[12] = 1;
		iLocal_17[13] = 1;
		iLocal_17[14] = 1;
		iLocal_17[15] = 1;
	}
}

void func_149()
{
	Local_908.f_3 = Global_35;
	Local_908 = { 0f, 0f, 0f };
	Local_908.f_8 = 4;
	Local_908.f_4 = 21030;
	Local_908.f_20 = 4;
	Local_908.f_19 = 4;
	Local_908.f_22 = 4;
	Local_908.f_21 = 4;
	Local_908.f_17 = 4;
	Local_908.f_18 = 4;
	Local_908.f_7 = -1;
	Local_908.f_13 = 2;
}

void func_153()
{
	if ((iLocal_1219 >= 7 || iLocal_944 == 1) || !VOLUME::_DOES_VOLUME_EXIST(iLocal_135))
	{
		return;
	}
	if (__LIB_0__::func_393(Global_35, iLocal_135, 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_35, 1024))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(0)))
			{
				__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("DENY"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
				__LIB_1__::func_683(&iLocal_35, 1024);
				iLocal_1219++;
			}
		}
		if (!__LIB_0__::func_27(iLocal_35, 2048))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(1)))
			{
				__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("CLOSED"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
				iLocal_1219++;
				__LIB_1__::func_683(&iLocal_35, 2048);
			}
		}
		if (!__LIB_0__::func_27(iLocal_35, 4096))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(2)))
			{
				__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("NOT_SURE"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
				iLocal_1219++;
				__LIB_1__::func_683(&iLocal_35, 4096);
			}
		}
		if (!__LIB_0__::func_27(iLocal_35, 8192))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(3)))
			{
				__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("SORRY"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
				iLocal_1219++;
				__LIB_1__::func_683(&iLocal_35, 8192);
			}
		}
		if (!__LIB_0__::func_27(iLocal_35, 16384))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(4)))
			{
				__LIB_2__::func_478(iLocal_98[1], iLocal_98[0], func_35("CONFUSED"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[1], 1);
				iLocal_1219++;
				__LIB_1__::func_683(&iLocal_35, 16384);
			}
		}
		if (!__LIB_0__::func_27(iLocal_35, 32768))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(5)))
			{
				__LIB_2__::func_478(iLocal_98[1], iLocal_98[0], func_35("CLOSED_WHEN"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[1], 1);
				iLocal_1219++;
				__LIB_1__::func_683(&iLocal_35, 32768);
			}
		}
		if (!__LIB_0__::func_27(iLocal_35, 65536))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(6)))
			{
				__LIB_2__::func_478(iLocal_98[1], iLocal_98[0], func_35("ANGRY"), "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_98[1], 1);
				iLocal_1219++;
				__LIB_1__::func_683(&iLocal_35, 65536);
			}
		}
	}
}

bool func_154()
{
	float fVar0;
	if (iLocal_944 == 1)
	{
		return true;
	}
	func_388();
	func_138();
	fVar0 = __LIB_3__::func_891(Local_145);
	if ((fVar0 >= 0.99f || fVar0 == -1f) || (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], -816493370) && Local_161.f_98[0] < 5f))
	{
		return true;
	}
	return false;
}

void func_156()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], Local_136[0 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "IDLE_LINE_01_BARMAN", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	if (__LIB_1__::func_985())
	{
		TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], Local_136[0 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	}
	TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "IDLE_LINE_02_BARMAN", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	if (__LIB_1__::func_985())
	{
		TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], Local_136[0 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	}
	TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "IDLE_LINE_04_BARMAN", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], Local_136[0 /*2*/].f_1, 4f, -4f, -1, 1, 0f, false, 0, false, 0, false);
	__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
}

bool func_157()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1228))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], sLocal_1228, 1) || __LIB_3__::func_496(iLocal_98[0], "bCanBreakout", 1067030938 /* Float: 1.2f */))
		{
			return true;
		}
	}
	return false;
}

void func_158()
{
	__LIB_2__::func_73(iLocal_98[0], &(uLocal_80[0]), -89429847, 0, 0, "BLIP_BARTENDER");
}

bool func_160()
{
	if (__LIB_3__::func_993(107, 0) == 1 || __LIB_3__::func_993(107, 1) == 1)
	{
		if (__LIB_0__::func_181())
		{
			if (__LIB_4__::func_271(107, 0) == joaat("CS_JOHNMARSTON") || __LIB_4__::func_271(107, 1) == joaat("CS_JOHNMARSTON"))
			{
				return true;
			}
		}
		else if (__LIB_4__::func_271(107, 0) != joaat("CS_JOHNMARSTON") || __LIB_4__::func_271(107, 1) != joaat("CS_JOHNMARSTON"))
		{
			return true;
		}
	}
	return false;
}

void func_161()
{
	if (iLocal_944 == 0)
	{
		if (__LIB_0__::func_181())
		{
			__LIB_3__::func_666(Local_161.f_3, 9, 7, 0, joaat("CS_JOHNMARSTON"));
		}
		else
		{
			__LIB_3__::func_666(Local_161.f_3, 9, 7, 0, 0);
		}
	}
	else if (__LIB_3__::func_993(107, 0) == 1 || __LIB_3__::func_993(107, 1) == 1)
	{
		if (__LIB_0__::func_181())
		{
			if (__LIB_4__::func_271(Local_161.f_3, 9) == joaat("CS_JOHNMARSTON"))
			{
				__LIB_1__::func_683(&iLocal_34, 268435456);
			}
		}
		else
		{
			__LIB_1__::func_683(&iLocal_34, 268435456);
		}
	}
}

void func_162()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_145))
	{
		return;
	}
	if (iLocal_944 == 0)
	{
		if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(Local_145, "man"))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_145);
		}
	}
}

void func_163()
{
	if (!__LIB_0__::func_27(iLocal_34, 33554432))
	{
		__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
		__LIB_1__::func_683(&iLocal_34, 33554432);
	}
}

void func_164()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_136[0 /*2*/], "interact_01_barman", Global_35, -1, 4f, -4f, 67108864, 0f, false, false, -1f, 0, 65536, -1f);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108865, 0f, false, false, -1f, 0, 65536, -1f);
	__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
}

void func_165(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(false);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		iVar0 = ENTITY::_0x886171A12F400B89(iParam0, iVar3, 3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(MISC::_GET_ENTITY_FROM_ITEM(iVar2)))
			{
				if (ENTITY::GET_ENTITY_MODEL(MISC::_GET_ENTITY_FROM_ITEM(iVar2)) == iParam1)
				{
					OBJECT::SET_OBJECT_TARGETTABLE(MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2), bParam2);
				}
			}
			iVar1++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar3);
}

bool func_166()
{
	if (__LIB_0__::func_27(iLocal_34, 8) || (__LIB_0__::func_27(iLocal_34, 67108864) && __LIB_1__::func_205(Global_35, iLocal_120, 1, 0)))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "interact_01_barman", 1) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "interact_01_barman", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_98[0], Local_136[0 /*2*/], "interact_01_barman") > 0.7f))
	{
		__LIB_1__::func_683(&iLocal_34, 8);
		return true;
	}
	return false;
}

void func_168()
{
	float fVar0;
	if (__LIB_0__::func_27(iLocal_1275, 32))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_34, 524288))
	{
		__LIB_1__::func_148(&uLocal_1238);
		__LIB_1__::func_683(&iLocal_34, 524288);
	}
	else if (Local_161.f_98[0] < 15f)
	{
		if (__LIB_0__::func_33(&uLocal_1238))
		{
			__LIB_2__::func_112(&uLocal_1238);
		}
		else
		{
			fVar0 = __LIB_0__::func_265(&uLocal_1238);
			if (fVar0 > 20f)
			{
				__LIB_1__::func_683(&iLocal_1275, 32);
			}
			else if (fVar0 > 10f && !__LIB_0__::func_27(iLocal_1275, 8192))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, "TAKE_YOUR_TIME_WARY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_1275, 8192);
			}
		}
	}
	else if (!__LIB_0__::func_33(&uLocal_1238))
	{
		__LIB_2__::func_113(&uLocal_1238);
	}
}

void func_169()
{
	if (func_126(Global_35))
	{
		func_56();
	}
	else if (!Local_161.f_46)
	{
		func_171(0);
	}
}

void func_170()
{
	int iVar0;
	func_37();
	_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
	if (__LIB_0__::func_27(iLocal_1275, 1024))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CHANGE_MIND"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else if (__LIB_0__::func_27(iLocal_34, 65536))
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("ABANDON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("NO_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	uLocal_1233 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), 2789.377f, -1172.297f, 47.1749f, 161.6934f, 0, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!__LIB_0__::func_27(iLocal_34, 65536))
	{
		TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "INTERACT_03_BARMAN", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	else
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 4000, -1f, -1f, -1f);
	}
	TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_1233, "WORLD_HUMAN_SMOKE_MALE_A", -1, true, false, joaat("WORLD_HUMAN_SMOKE"), false, -1f, false);
	__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iLocal_98[0], true);
	__LIB_1__::func_683(&iLocal_35, 1048576);
}

void func_171(bool bParam0)
{
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 1);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 1);
	}
	if (bParam0)
	{
		func_55();
	}
}

void func_172()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_BROKEN"):
			case 2145012826:
				func_396(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_173()
{
	if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_121, true, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(2793.62f, -1174.031f, 46.92401f, 1.5f))
			{
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1208[0]) != 0f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1208[0], 0f, true);
				}
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1208[1]) != 0f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1208[1], 0f, true);
				}
			}
		}
	}
}

void func_174()
{
	int iVar0;
	float fVar1;
	func_397();
	func_398();
	switch (iLocal_945)
	{
		case 0:
			if (iLocal_965 == 8)
			{
				if (!__LIB_0__::func_27(iLocal_34, 2) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_98[0], &Local_908);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
					{
						TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "interact_02_barman", 4f, -4f, -1, 67108864, 0f, false, 0, false, 0, false);
					}
					if (!__LIB_1__::func_205(Global_35, iLocal_132, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1182, 1f, 20000, 0.25f, 0, Local_1182.f_3.f_2);
					}
					TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "window_idle_barman", 2f, -4f, -1, 0, 0f, false, 0, false, 0, false);
					__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
					__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("ENTER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_34, 2);
					func_56();
					iLocal_945 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_35, 16))
			{
				if (__LIB_0__::func_94(iLocal_98[0], Local_1182, 1) < 1f || __LIB_1__::func_205(Global_35, iLocal_132, 1, 0))
				{
					iLocal_945 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_35, 16))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_145.f_1, true, false))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], 713668775, true) != 1)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_98[0]))
							{
								TASK::CLEAR_PED_TASKS(iLocal_98[0], true, false);
								TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_98[0], Local_136[0 /*2*/], "window_idle_barman", Local_1182, 0f, 0f, Local_1182.f_3.f_2, 4f, -4f, -1, 1, 0f, 2, 0, 0);
								__LIB_1__::func_148(&uLocal_1235);
								__LIB_1__::func_683(&iLocal_35, 16);
								iLocal_945 = 3;
							}
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], -2017877118, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], -1162159953, true) != 1)
						{
							if (__LIB_0__::func_94(iLocal_98[0], Local_1182, 1) > 1.5f && !__LIB_1__::func_205(Global_35, iLocal_132, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], 713668775, true) != 1)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[0], Local_1182, 1f, 20000, 0.25f, 0, Local_1182.f_3.f_2);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], -875674219, true) != 1 && !PED::IS_PED_FACING_PED(iLocal_98[0], Global_35, 10f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_98[0], Global_35, -1, -1f, -1f, -1f);
							}
						}
						if (!__LIB_0__::func_27(iLocal_34, 32768))
						{
							if (iLocal_1220 == 0)
							{
								fVar1 = func_399();
								if (fVar1 > 20f)
								{
									if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0) || PED::IS_PED_FACING_PED(iLocal_98[0], Global_35, 5f))
									{
										__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("HASNT_STARTED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										__LIB_1__::func_683(&iLocal_34, 32768);
									}
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (iLocal_1220 == 0 && __LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
			{
				if (!__LIB_0__::func_27(iLocal_34, 32768))
				{
					fVar1 = func_399();
					if (fVar1 > 20f)
					{
						__LIB_1__::func_683(&iLocal_34, 32768);
						iLocal_945 = 4;
					}
				}
			}
			break;
		case 4:
			func_400(Local_136[0 /*2*/], "window_line_01_barman", 1, 0, 0);
			iLocal_945 = 3;
			break;
		case 5:
			func_400(Local_136[0 /*2*/], "window_line_02_barman", 1, 0, 0);
			iLocal_945 = 3;
			break;
		case 6:
			func_400(Local_136[0 /*2*/], "window_line_03_barman", 1, 0, 0);
			iLocal_945 = 3;
			break;
		case 7:
			if (__LIB_2__::func_227(0, 1, iLocal_98[0], 1))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 8:
			if (__LIB_2__::func_227(0, 1, iLocal_98[0], 1))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(0, 1, iLocal_98[0], 1))
			{
				func_400(Local_136[0 /*2*/], "window_line_04_barman", 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 10:
			if (__LIB_2__::func_227(0, 1, iLocal_98[0], 1))
			{
				func_400(Local_136[0 /*2*/], "window_line_05_barman", 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 11:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_145.f_1, "window_idle", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "window_idle_barman", 1))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_145.f_1, false))
				{
					__LIB_2__::func_504(iLocal_98[0], 250);
					ANIMSCENE::START_ANIM_SCENE(Local_145.f_1);
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_98[0], Local_145.f_1))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145.f_1, "barman", iLocal_98[0], 0);
					}
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_145.f_1, "PBL_GET_THE_LAW", true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_145.f_1, "BOOL_Window", true, false);
				__LIB_1__::func_683(&iLocal_35, 1);
				iLocal_945 = 12;
			}
			else
			{
				iLocal_945 = 13;
			}
			break;
		case 12:
			if ((ANIMSCENE::_0x005E6F28DD7ED58D(Local_145.f_1, "barman") || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], joaat("ENDSINWALK"))) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_98[0], Local_145.f_1))
			{
				TASK::_0x2E1D6D87346BB7D2(iLocal_98[0], Global_35, 0, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_98[0], Global_35, 500f, -1, 256, 2f, 0);
				iLocal_945 = 16;
			}
			else if (!__LIB_0__::func_27(iLocal_34, 32))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(27)))
				{
					__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("DESTROYED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_34, 32);
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(28)))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_34, 32);
			}
			break;
		case 14:
			__LIB_1__::func_681(&iLocal_35, 16);
			if (!__LIB_0__::func_27(iLocal_34, 536870912))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "window_line_06_barman", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("LEAVE_EARLY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_34, 536870912);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_98[0], Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_75(&uLocal_1259))
			{
				if (__LIB_0__::func_265(&uLocal_1259) > 10f)
				{
					__LIB_0__::func_268(&uLocal_1259, 10f);
				}
				__LIB_2__::func_113(&uLocal_1259);
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1259);
			}
			iLocal_945 = 15;
			break;
		case 15:
			if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
			{
				__LIB_1__::func_681(&iLocal_34, 2048);
				iLocal_945 = 2;
			}
			else if (__LIB_0__::func_33(&uLocal_1259))
			{
				__LIB_2__::func_112(&uLocal_1259);
			}
			else if (!__LIB_0__::func_75(&uLocal_1259))
			{
				__LIB_1__::func_148(&uLocal_1259);
			}
			else if (__LIB_0__::func_265(&uLocal_1259) > 20f && __LIB_2__::func_227(0, 1, iLocal_98[0], 1))
			{
				__LIB_1__::func_683(&iLocal_34, 65536);
			}
			break;
		case 16:
			break;
	}
}

void func_175()
{
	int iVar0;
	if (func_177())
	{
		return;
	}
	func_401();
	func_402();
	func_403();
	func_404();
	iLocal_1227 = func_405();
	if (iLocal_1227 == 0)
	{
		return;
	}
	iVar0 = iLocal_1227;
	if (__LIB_2__::func_1(iLocal_98[iLocal_1227], 0, 1))
	{
		switch (iVar0)
		{
			case 2:
				func_406(iLocal_98[2], &(uLocal_946[2]), 2);
				break;
			case 3:
				func_406(iLocal_98[3], &(uLocal_946[3]), 3);
				break;
			case 4:
				func_406(iLocal_98[4], &(uLocal_946[4]), 4);
				break;
			case 5:
				func_406(iLocal_98[5], &(uLocal_946[5]), 5);
				break;
			case 6:
				func_406(iLocal_98[6], &(uLocal_946[6]), 6);
				break;
			case 7:
				func_406(iLocal_98[7], &(uLocal_946[7]), 7);
				break;
			case 8:
				func_406(iLocal_98[8], &(uLocal_946[8]), 8);
				break;
			case 9:
				func_406(iLocal_98[9], &(uLocal_946[9]), 9);
				break;
			case 10:
				func_406(iLocal_98[10], &(uLocal_946[10]), 10);
				break;
			case 11:
				func_406(iLocal_98[11], &(uLocal_946[11]), 11);
				break;
			case 12:
				func_406(iLocal_98[12], &(uLocal_946[12]), 12);
				break;
			case 13:
				func_406(iLocal_98[13], &(uLocal_946[13]), 13);
				break;
			case 14:
				func_406(iLocal_98[14], &(uLocal_946[14]), 14);
				break;
			case 15:
				func_406(iLocal_98[15], &(uLocal_946[15]), 15);
				break;
		}
	}
	else
	{
		func_407(iLocal_1227);
	}
	iLocal_1227++;
	if (iLocal_944 == 0)
	{
		if (iLocal_1227 >= 10)
		{
			iLocal_1227 = 2;
		}
	}
	else if (iLocal_1227 >= 16)
	{
		iLocal_1227 = 2;
	}
}

void func_176()
{
	if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

bool func_177()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_34, 16777216))
	{
		return true;
	}
	iVar0 = 2;
	while (iVar0 <= 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_98[iVar0], iLocal_120, true, 0))
			{
				if (__LIB_2__::func_1(iLocal_98[iVar0], 0, 1))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	__LIB_1__::func_683(&iLocal_34, 16777216);
	return true;
}

void func_181()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_1229))
	{
		func_408(&iLocal_1229, iLocal_120, 1247852480);
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	if (__LIB_0__::func_27(iLocal_35, 524288))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		iVar6 = MISC::_GET_ENTITY_FROM_ITEM(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0xED00D72F81CF7278(iVar6, 0, 1);
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar1)), 0f) };
			__LIB_3__::func_409(&vVar2, 1f);
			ENTITY::SET_ENTITY_COORDS(iVar6, vVar2, false, true, true, true);
		}
		iVar1++;
	}
	__LIB_1__::func_683(&iLocal_35, 524288);
}

void func_185(var uParam0)
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
		func_415(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_3__::func_707(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		__LIB_1__::func_715(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_186()
{
	if (__LIB_0__::func_181())
	{
		__LIB_3__::func_666(Local_161.f_3, iLocal_944, 1, 0, joaat("CS_JOHNMARSTON"));
	}
	else
	{
		__LIB_3__::func_666(Local_161.f_3, iLocal_944, 1, 0, 0);
	}
}

int func_187(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	func_422(iVar0, uParam1, func_421(iVar1), 0, 10);
	return 1;
}

bool func_190()
{
	switch (iLocal_1222)
	{
		case 0:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_0__::func_172(iLocal_131);
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("STORE_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1234 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_TWNREC_SCRUB_BLOOD_FLOOR_BUCKET"), vLocal_1272, 355.7023f, 0, 0, 0);
				iLocal_1222++;
			}
			break;
		case 1:
			if (__LIB_0__::func_94(iLocal_98[0], vLocal_1272, 0) < 2f)
			{
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_98[0], uLocal_1234, 0, -1, true, false, 0, false, -1f, false);
				iLocal_1222++;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], 1435919172, true) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[0], vLocal_1272, 1f, 20000, 0.25f, 0, 40000f);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_2__::func_478(iLocal_98[0], Global_35, func_35("STORE_CLEAN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1222++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_191()
{
	float fVar0;
	if (Local_161.f_46 || !__LIB_0__::func_27(iLocal_1275, 16))
	{
		return;
	}
	if (Local_161.f_98[0] < 3f)
	{
		if (!__LIB_0__::func_75(&uLocal_936))
		{
			__LIB_1__::func_148(&uLocal_936);
			fLocal_942 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
		}
		else
		{
			fVar0 = __LIB_0__::func_265(&uLocal_936);
			if (fVar0 < fLocal_942)
			{
				__LIB_3__::func_699(&(iLocal_98[0]), 0, Global_35, 1, 0, 0, 0, 1);
			}
			else if (fVar0 >= (fLocal_942 * 2f))
			{
				fLocal_942 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
				__LIB_1__::func_148(&uLocal_936);
			}
		}
	}
}

void func_192(int iParam0)
{
	if (__LIB_0__::func_27(iLocal_34, 1048576))
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
	{
		__LIB_0__::func_267(1);
		LAW::_0x710448D44A64C213(1);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 148, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 315, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146, true);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0, 0, 0, 0, 0, 0);
		PED::_0xC6C4E15CF7D52FEA(iLocal_98[0], 1000f);
		LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), iParam0, iLocal_98[0]);
		LAW::_0xF0B67BAD53C35BD9(iLocal_98[0], Global_35, iLocal_98[0], Global_36, iParam0);
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
		__LIB_1__::func_683(&iLocal_34, 1048576);
	}
	else
	{
		__LIB_0__::func_267(1);
		LAW::_0x710448D44A64C213(1);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0, 0, 0, 0, 0, 0);
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
		__LIB_1__::func_683(&iLocal_34, 1048576);
	}
}

bool func_193()
{
	if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
	{
		if (Local_161.f_98[0] < 50f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_98[0]))
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

bool func_257(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (__LIB_3__::func_297(iParam0, *uParam2))
	{
		return false;
	}
	if (!__LIB_3__::func_298(iParam0, uParam2))
	{
		return false;
	}
	if (!func_483(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!__LIB_3__::func_254(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_362(int iParam0)
{
	switch (iLocal_944)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -835911159;
				case 1:
					return -239426822;
				case 2:
					return 2062284241;
				case 3:
					return 1391603815;
				case 4:
					return 1261664333;
				case 5:
					return 1340138956;
				case 6:
					return -2023012722;
				case 7:
					return 770895521;
				case 8:
					return 193948615;
				case 9:
					return -1637869902;
				case 10:
					return 607609997;
				case 11:
					return -1551970008;
				case 12:
					return 90170334;
				case 13:
					return 1923663917;
				case 14:
					return -2054049802;
				case 15:
					return -646838161;
				case 16:
					return -584496966;
				case 17:
					return 1303876790;
				case 18:
					return -849543827;
				case 19:
					return 558196059;
				case 20:
					return -1503521451;
				case 21:
					return 1766689619;
				case 22:
					return -836872973;
				case 23:
					return 2119991082;
				case 24:
					return 1823595477;
				case 25:
					if (__LIB_0__::func_181())
					{
						return 1710800346;
					}
					else
					{
						return -920878148;
					}
					break;
				case 26:
					if (__LIB_0__::func_181())
					{
						return 251419705;
					}
					else
					{
						return -932459019;
					}
					break;
				case 27:
					return 1437497331;
				case 28:
					return 1086036713;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -357535812;
				case 1:
					return -719497186;
				case 2:
					return -1383488703;
				case 3:
					return -700147833;
				case 4:
					return -1365423608;
				case 5:
					return 1197613306;
				case 6:
					return -888114428;
				case 7:
					return 526634380;
				case 8:
					return -1840420869;
				case 9:
					return 1877924238;
				case 10:
					return -1163092522;
				case 11:
					return 194852930;
				case 12:
					return -1725526833;
				case 13:
					return 1853146033;
				case 14:
					return 1762573504;
				case 15:
					return 1336977289;
				case 16:
					if (!__LIB_0__::func_27(iLocal_34, 268435456))
					{
						return -474238259;
					}
					else if (__LIB_2__::func_140(0))
					{
						return -474238259;
					}
					else
					{
						return 157403391;
					}
					break;
				case 17:
					return 101739314;
				case 18:
					return -854755896;
				case 19:
					return -563585625;
				case 20:
					return 1829891480;
				case 21:
					return -1049231860;
				case 22:
					return -1876092037;
				case 23:
					return -2069287102;
				case 24:
					return -1341225460;
				case 25:
					return 248935820;
				case 26:
					if (__LIB_0__::func_181())
					{
						return 1963982468;
					}
					else
					{
						return 1805689030;
					}
					break;
				case 27:
					return -1802744252;
				case 28:
					return 783207280;
			}
			break;
	}
	return -1;
}

void func_366()
{
	if (!__LIB_0__::func_27(iLocal_35, 131072))
	{
		Local_145.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_145.f_5, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_145.f_1, Local_161.f_51, 0f, 0f, -30f, 2);
		if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145.f_1, "barman", iLocal_98[0], 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145.f_1, "plr", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145.f_1, "MONEY", Local_871[0 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145.f_1, "R_Door", iLocal_1230[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_145.f_1, "L_Door", iLocal_1230[1], 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_145.f_5))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_145.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_145.f_1);
			}
		}
		__LIB_1__::func_683(&iLocal_35, 131072);
	}
}

bool func_367()
{
	switch (iLocal_944)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_145.f_1, true, false))
			{
				if (((ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Window_Idle") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Reward_Avg")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Reward_Good")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_GET_THE_LAW"))
				{
					return true;
				}
				else
				{
					func_589();
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_145.f_1, true, false))
			{
				if ((ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Window_Idle") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Reward_Avg")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_145.f_1, "PBL_Reward_Good"))
				{
					return true;
				}
				else
				{
					func_589();
				}
			}
			break;
	}
	return false;
}

int func_370(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_592(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
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

void func_375(bool bParam0)
{
	if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_98[0])))
	{
		__LIB_2__::func_593(&iLocal_1278, &Local_1299);
		__LIB_2__::func_602(&(Local_1299[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		if (bParam0)
		{
			__LIB_2__::func_602(&(Local_1299[1 /*17*/]), __LIB_2__::func_460(6), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
		else
		{
			__LIB_2__::func_602(&(Local_1299[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
		__LIB_2__::func_411(&(Local_1299[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
		__LIB_1__::func_683(&iLocal_1275, 4096);
	}
}

void func_377()
{
	if (func_126(Global_35))
	{
		if (__LIB_2__::func_466(&(Local_1299[1 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 0, 0);
		}
	}
	else if (!__LIB_2__::func_466(&(Local_1299[1 /*17*/]), 1, 0))
	{
		__LIB_2__::func_411(&(Local_1299[1 /*17*/]), 1, 0);
	}
}

void func_379(bool bParam0)
{
	if (bParam0)
	{
		if (!__LIB_0__::func_27(iLocal_34, -2147483648))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_98[0], true);
			__LIB_1__::func_683(&iLocal_34, -2147483648);
		}
	}
	else if (__LIB_0__::func_27(iLocal_34, -2147483648))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_98[0], false);
		__LIB_1__::func_681(&iLocal_34, -2147483648);
	}
}

void func_382()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145, "PBL_Intro_Idle");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145, "PBL_Intro_Action");
}

void func_388()
{
	if (!__LIB_0__::func_27(iLocal_34, 2097152))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(7)))
		{
			__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
			__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("NOT_OPEN"), "", 75f, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_34, 2097152);
		}
	}
	if (!__LIB_0__::func_27(iLocal_34, 4194304))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(8)))
		{
			__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
			__LIB_2__::func_478(iLocal_98[1], iLocal_98[0], func_35("PRE_LEAVE"), "", 75f, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_34, 4194304);
		}
	}
	if (!__LIB_0__::func_27(iLocal_34, 8388608))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(9)))
		{
			__LIB_2__::func_315(1891783641, iLocal_98[0], 1);
			__LIB_2__::func_478(iLocal_98[0], iLocal_98[1], func_35("CUSTOMER_LEAVE"), "", 75f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_34, 8388608);
		}
	}
}

void func_396(int iParam0)
{
	struct<7> Var0;
	vector3 vVar9;
	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		if (!__LIB_0__::func_27(iLocal_34, 131072))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_130, Var0.f_6))
			{
				__LIB_1__::func_683(&iLocal_34, 131072);
			}
		}
		if (ENTITY::GET_ENTITY_TYPE(Var0) == 1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_120) && __LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
			{
				if (!__LIB_1__::func_205(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0), iLocal_120, 1, 0) && !__LIB_1__::func_248(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0), &iLocal_98))
				{
					if (Var0.f_1 == __LIB_0__::func_57(Global_35))
					{
						bLocal_943 = true;
						vVar9 = { ENTITY::GET_ENTITY_COORDS(Var0, true, false) };
					}
				}
			}
			return;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(2791.55f, -1167.62f, 47.9797f, Var0.f_6, true) <= 0.3f || MISC::GET_DISTANCE_BETWEEN_COORDS(2790.95f, -1168.47f, 47.5391f, Var0.f_6, true) <= 0.3f)
		{
			return;
		}
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_120, Var0.f_6))
		{
			return;
		}
		if (Var0.f_1 != __LIB_0__::func_57(Global_35))
		{
			return;
		}
		if (ENTITY::GET_ENTITY_TYPE(Var0) == 0)
		{
			if (Var0.f_6.f_2 < 47.05f)
			{
				return;
			}
		}
		if (ENTITY::GET_ENTITY_TYPE(Var0) == 3)
		{
			if (Var0.f_6.f_2 < 47f)
			{
				return;
			}
		}
		iLocal_1221++;
	}
}

void func_397()
{
	if (func_613())
	{
		switch (iLocal_36)
		{
			case 0:
				if (iLocal_1220 > 3)
				{
					iLocal_36++;
				}
				else if (iLocal_1220 > 1 && iLocal_1220 <= 3)
				{
					if (PED::_0x285D36C5C72B0569(Global_35) < 2f || (func_614() && !__LIB_0__::func_27(iLocal_35, 32)))
					{
						__LIB_1__::func_683(&iLocal_35, 32);
						iLocal_945 = 5;
						iLocal_36++;
					}
				}
				break;
			case 1:
				if (iLocal_1220 > 5)
				{
					iLocal_36++;
				}
				else if (PED::_0x285D36C5C72B0569(Global_35) < 2f || (func_614() && !__LIB_0__::func_27(iLocal_35, 64)))
				{
					if (iLocal_1220 > 3 && iLocal_1220 <= 5)
					{
						__LIB_1__::func_683(&iLocal_35, 64);
						iLocal_945 = 6;
						iLocal_36++;
					}
				}
				break;
			case 2:
				if (iLocal_1220 > 7)
				{
					iLocal_36++;
				}
				else if (PED::_0x285D36C5C72B0569(Global_35) < 2f || (func_614() && !__LIB_0__::func_27(iLocal_35, 128)))
				{
					if (iLocal_1220 > 5 && iLocal_1220 <= 7)
					{
						__LIB_1__::func_683(&iLocal_35, 128);
						iLocal_945 = 7;
						iLocal_36++;
					}
				}
				break;
			case 3:
				if (PED::_0x285D36C5C72B0569(Global_35) < 2f || (func_614() && !__LIB_0__::func_27(iLocal_35, 256)))
				{
					if (iLocal_1220 > 7 && iLocal_1220 != iLocal_16)
					{
						__LIB_1__::func_683(&iLocal_35, 256);
						iLocal_945 = 8;
						iLocal_36++;
					}
				}
				break;
			case 4:
				break;
		}
		if (!__LIB_0__::func_27(iLocal_34, 256))
		{
			if (iLocal_1221 > 3)
			{
				__LIB_1__::func_683(&iLocal_34, 256);
				iLocal_945 = 9;
			}
		}
		else if (!__LIB_0__::func_27(iLocal_34, 512))
		{
			if (iLocal_1221 > 5)
			{
				__LIB_1__::func_683(&iLocal_34, 512);
				iLocal_945 = 10;
			}
		}
		else if (iLocal_1221 > 12)
		{
			__LIB_1__::func_683(&iLocal_34, 8192);
			__LIB_0__::func_769();
			iLocal_945 = 11;
		}
	}
}

void func_398()
{
	if (Local_161.f_46 == 1)
	{
		return;
	}
	func_615();
	if (!__LIB_0__::func_27(iLocal_34, 2048))
	{
		if (__LIB_0__::func_27(iLocal_34, 4096))
		{
			if (!__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
			{
				__LIB_1__::func_683(&iLocal_34, 2048);
				iLocal_945 = 14;
			}
		}
	}
}

float func_399()
{
	if (!__LIB_0__::func_75(&uLocal_1235))
	{
		__LIB_1__::func_148(&uLocal_1235);
	}
	return __LIB_0__::func_265(&uLocal_1235);
}

void func_400(char* sParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam3)
	{
		if (bParam4)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam0, sParam1, Global_35, -1, 4f, -4f, 67108865, 0f, false, false, -1f, 0, 65536, -1f);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, sParam0, sParam1, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(0, sParam0, sParam1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	if (bParam2)
	{
		TASK::TASK_PLAY_ANIM(0, Local_136[0 /*2*/], "window_idle_barman", 4f, -4f, -1, 1, 0f, false, 0, false, 0, false);
	}
	else
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], Local_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4f, -4f, 67108865, 0f, false, false, -1f, 0, 65536, -1f);
	}
	__LIB_1__::func_474(iLocal_98[0], &iVar0, 0, 0, 1, 1);
}

void func_401()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
		{
			if (uLocal_946[iVar0] == 10)
			{
				if (!__LIB_1__::func_205(iLocal_98[iVar0], iLocal_122[0], 1, 0))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_98[iVar0], 2.5f);
				}
			}
			else if (uLocal_946[iVar0] == 11)
			{
				if (!__LIB_1__::func_205(iLocal_98[iVar0], iLocal_122[1], 1, 0))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_98[iVar0], 2.5f);
				}
			}
			else if (uLocal_946[iVar0] == 12)
			{
				if (!__LIB_1__::func_205(iLocal_98[iVar0], iLocal_122[2], 1, 0))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_98[iVar0], 2.5f);
				}
			}
		}
		iVar0++;
	}
}

void func_402()
{
	if (!__LIB_0__::func_27(iLocal_34, 1024))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
		{
			func_22(0, -1, -1);
			__LIB_1__::func_683(&iLocal_34, 1024);
		}
	}
}

void func_403()
{
	if (!__LIB_0__::func_27(iLocal_35, 4))
	{
		if (__LIB_0__::func_27(iLocal_35, 2) && __LIB_0__::func_27(iLocal_35, 8))
		{
			if (iLocal_1220 > (iLocal_16 - 2))
			{
				__LIB_1__::func_683(&iLocal_35, 4);
			}
		}
	}
}

void func_404()
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_1253))
	{
		__LIB_1__::func_148(&uLocal_1253);
	}
	else if (__LIB_0__::func_265(&uLocal_1253) > fLocal_1216)
	{
		iVar0 = func_616(1084227584 /* Float: 5f */);
		if (iVar0 != 0)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "SQUEAK", false);
			__LIB_1__::func_148(&uLocal_1253);
			fLocal_1216 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 10f);
		}
	}
}

int func_405()
{
	int iVar0;
	iVar0 = -1;
	iVar0 = iLocal_1227;
	while (iVar0 <= 15)
	{
		if (iLocal_17[iVar0] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 2;
	iVar0 = 2;
	while (iVar0 <= 15)
	{
		if (iLocal_17[iVar0] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 2;
}

void func_406(int iParam0, var uParam1, int iParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	switch (*uParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 2:
					*uParam1 = 1;
					break;
				case 3:
					*uParam1 = 2;
					break;
				case 4:
					*uParam1 = 4;
					break;
				case 5:
					*uParam1 = 3;
					break;
				case 6:
				case 7:
				case 8:
					func_617(iParam0, iLocal_122[1], 0, 0, 0);
					*uParam1 = 7;
					break;
				case 9:
					func_617(iParam0, iLocal_122[2], 0, 0, 0);
					*uParam1 = 8;
					break;
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					*uParam1 = 9;
					break;
			}
			break;
		case 1:
			if (func_618(iParam0))
			{
				func_617(iParam0, iLocal_122[0], 0, 0, 0);
				*uParam1 = 6;
			}
			break;
		case 2:
			if (func_619(iParam0))
			{
				__LIB_4__::func_291(iParam0, iLocal_122[1], 0, 0);
				func_617(iParam0, iLocal_122[1], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
		case 3:
			if (func_621(iParam0))
			{
				__LIB_4__::func_291(iParam0, iLocal_122[1], 0, 0);
				func_617(iParam0, iLocal_122[1], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
		case 4:
			if (func_622(iParam0))
			{
				__LIB_4__::func_291(iParam0, iLocal_122[0], 0, 0);
				func_617(iParam0, iLocal_122[0], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
		case 5:
			if (func_623(iParam0))
			{
				if ((iParam2 % 4) == 0 || (iParam2 % 4) == 1)
				{
					__LIB_4__::func_291(iParam0, iLocal_122[0], 0, 0);
					func_617(iParam0, iLocal_122[0], 0f, 0f, 0);
					*uParam1 = 10;
				}
				else if ((iParam2 % 4) == 2)
				{
					__LIB_4__::func_291(iParam0, iLocal_122[1], 0, 0);
					func_617(iParam0, iLocal_122[1], 0f, 0f, 0);
					*uParam1 = 11;
				}
				else
				{
					__LIB_4__::func_291(iParam0, iLocal_122[2], 0, 0);
					func_617(iParam0, iLocal_122[2], 0f, 0f, 0);
					*uParam1 = 12;
				}
			}
			else
			{
				func_624(iParam0, iParam2);
			}
			break;
		case 6:
			if (func_625(iParam0, 1073741824 /* Float: 2f */))
			{
				*uParam1 = 10;
			}
			func_624(iParam0, iParam2);
			break;
		case 7:
			if (func_625(iParam0, 1073741824 /* Float: 2f */))
			{
				*uParam1 = 11;
			}
			func_624(iParam0, iParam2);
			break;
		case 8:
			if (func_625(iParam0, 1073741824 /* Float: 2f */))
			{
				*uParam1 = 12;
			}
			func_624(iParam0, iParam2);
			break;
		case 9:
			if (func_626())
			{
				if ((iParam2 % 3) == 0)
				{
					func_627(iParam0, iLocal_122[0]);
				}
				else if ((iParam2 % 3) == 1)
				{
					func_627(iParam0, iLocal_122[1]);
				}
				else
				{
					func_627(iParam0, iLocal_122[2]);
				}
				__LIB_1__::func_148(&uLocal_933);
				*uParam1 = 5;
			}
			break;
		case 10:
			if (__LIB_1__::func_205(iParam0, iLocal_122[0], 1, 0))
			{
				if (func_625(iParam0, 1073741824 /* Float: 2f */))
				{
					if (__LIB_1__::func_985())
					{
						__LIB_4__::func_291(iParam0, iLocal_122[1], 0, 0);
						func_617(iParam0, iLocal_122[1], 0, 0, 0);
						*uParam1 = 11;
					}
					else
					{
						__LIB_4__::func_291(iParam0, iLocal_122[2], 0, 0);
						func_617(iParam0, iLocal_122[2], 0, 0, 0);
						*uParam1 = 12;
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
				func_628(iParam0, iLocal_120, vLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
			func_624(iParam0, iParam2);
			break;
		case 11:
			if (__LIB_1__::func_205(iParam0, iLocal_122[1], 1, 0))
			{
				if (func_625(iParam0, 1073741824 /* Float: 2f */))
				{
					if (__LIB_1__::func_985())
					{
						__LIB_4__::func_291(iParam0, iLocal_122[0], 0, 0);
						func_617(iParam0, iLocal_122[0], 0, 0, 0);
						*uParam1 = 10;
					}
					else
					{
						__LIB_4__::func_291(iParam0, iLocal_122[2], 0, 0);
						func_617(iParam0, iLocal_122[2], 0, 0, 0);
						*uParam1 = 12;
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
				func_628(iParam0, iLocal_120, vLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
			func_624(iParam0, iParam2);
			break;
		case 12:
			if (__LIB_1__::func_205(iParam0, iLocal_122[2], 1, 0))
			{
				if (func_625(iParam0, 1073741824 /* Float: 2f */))
				{
					if (__LIB_1__::func_985())
					{
						__LIB_4__::func_291(iParam0, iLocal_122[0], 0, 0);
						func_617(iParam0, iLocal_122[0], 0, 0, 0);
						*uParam1 = 10;
					}
					else
					{
						__LIB_4__::func_291(iParam0, iLocal_122[1], 0, 0);
						func_617(iParam0, iLocal_122[1], 0, 0, 0);
						*uParam1 = 11;
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
				func_628(iParam0, iLocal_120, vLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
			func_624(iParam0, iParam2);
			break;
		case 13:
			func_624(iParam0, iParam2);
			break;
		case 14:
			break;
	}
}

void func_407(int iParam0)
{
	iLocal_17[iParam0] = 0;
}

void func_408(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	*iParam0 = MAP::_0xA6EF0C54A3443E70(iParam2, iParam1);
}

int func_415(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_415(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_415(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_415(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_415(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_415(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_415(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_415(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_415(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_415(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_415(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_415(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10074;
		case 2:
			return 10076;
		case 3:
			return 10077;
		case 6:
			return 10034;
		case 7:
			return 10040;
		case 8:
			return 10041;
		case 13:
			return 10042;
		case 14:
			return 10043;
		case 15:
			return 10043;
		case 17:
			return 10044;
		case 18:
			return 10050;
		case 19:
			return 10051;
		case 20:
			return 10052;
		case 21:
			return 10053;
		case 22:
			return 10000;
		case 23:
			return 10025;
		case 24:
			return 10026;
		case 25:
			return 10096;
		case 26:
			return 10098;
		case 27:
			return 10101;
		case 28:
			return 10102;
		case 29:
			return 10103;
		case 30:
			return 10104;
		case 31:
			return 10105;
		case 36:
			return 10005;
		case 37:
			return 10006;
		case 38:
			return 10008;
		case 39:
			return 10011;
		case 40:
			return 10012;
		case 41:
			return 10013;
		case 42:
			return 10014;
		case 43:
			return 10016;
		case 44:
			return 10017;
		case 45:
			return 10018;
		case 46:
			return 10020;
		case 47:
			return 10019;
			return 10116;
			return 10113;
			return 10114;
			return 10115;
			return 10028;
			return 10031;
			return 10031;
			return 10032;
			return 10058;
			return 10059;
			return 10061;
			return 10064;
			return 10065;
			return 10066;
			return 10067;
			return 10068;
			return 10069;
			return 10118;
			return 10088;
			return 10090;
			return 10090;
			return 10047;
			return 10047;
			return 10071;
			return 10036;
			return 10038;
			return 10007;
			return 10010;
			return 10097;
			return 10027;
			return 10060;
			return 10063;
			return 10085;
			return 10078;
			return 10079;
			return 10080;
			return 10081;
			return 10092;
			return 10093;
			return 10094;
			return 10095;
			return 10054;
			return 10055;
			return 10056;
			return 10057;
			return 10001;
			return 10002;
			return 10003;
			return 10004;
			return 10021;
			return 10022;
			return 10023;
			return 10024;
			return 10107;
			return 10108;
			return 10117;
			return 10119;
			return 10120;
			return 10111;
			return 0;
		}
void func_422(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	struct<15> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 14;
		Var0.f_8 = iParam3;
		Var0.f_11 = iParam4;
		Var0.f_13 = iParam2;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
}

bool func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	uVar0 = __LIB_4__::func_289(&uParam0);
	if (!__LIB_3__::func_371())
	{
		return false;
	}
	return true;
}

void func_589()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145.f_1, "PBL_Window_Idle");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145.f_1, "PBL_Reward_Avg");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145.f_1, "PBL_Reward_Good");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_145.f_1, "PBL_GET_THE_LAW");
}

int func_592(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_592(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_613()
{
	if (__LIB_2__::func_1(iLocal_98[0], 0, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], Local_136[0 /*2*/], "window_idle_barman", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_614()
{
	int iVar0;
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		iVar0 = PED::GET_MELEE_TARGET_FOR_PED(Global_35);
		if ((iVar0 != 0 && iVar0 != iLocal_98[0]) && iVar0 != iLocal_98[1])
		{
			if (__LIB_1__::func_248(iVar0, &iLocal_98))
			{
				return true;
			}
		}
	}
	return false;
}

int func_615()
{
	if (__LIB_0__::func_27(iLocal_34, 4096))
	{
		return 1;
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_120, 1, 0))
	{
		__LIB_1__::func_683(&iLocal_34, 4096);
		return 1;
	}
	return 0;
}

int func_616(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 >= 2)
		{
			if (__LIB_2__::func_1(iLocal_98[iVar0], 0, 1))
			{
				if (__LIB_0__::func_665(iLocal_98[iVar0], Global_35, 0, 1) <= fParam0)
				{
					return iLocal_98[iVar0];
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_617(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_2__::func_1(iParam0, 0, 1) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		TASK::TASK_WANDER_IN_VOLUME(iParam0, iParam1, iParam2, iParam3, iParam4);
	}
}

bool func_618(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_35, 8))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0) && (CAM::IS_SPHERE_VISIBLE(Local_358[2 /*32*/].f_6, 3f) || __LIB_0__::func_94(Global_35, Local_161.f_51, 1) >= 2f))
		{
			func_808(iParam0, 1, 2792.425f, -1167.989f, 46.91565f);
			__LIB_1__::func_683(&iLocal_35, 8);
			__LIB_2__::func_246(&uLocal_1262);
			__LIB_3__::func_164(&(Local_161.f_121));
		}
	}
	else if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if (__LIB_0__::func_94(iParam0, 2792.425f, -1167.989f, 46.91565f, 1) < 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_619(int iParam0)
{
	switch (iLocal_1223)
	{
		case 0:
			func_810(Local_153, "pbl_Rat");
			iLocal_1223++;
			break;
		case 1:
			if (func_811(Local_153, "pbl_Rat"))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_98[3], 2792.123f, -1166.463f, 47.97344f, true, false, true, true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_153, "pbl_Rat", true);
				ANIMSCENE::START_ANIM_SCENE(Local_153);
				iLocal_1223++;
			}
			break;
		case 2:
			if ((__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0) && __LIB_0__::func_27(iLocal_35, 8)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (!__LIB_0__::func_75(&uLocal_1241))
				{
					__LIB_1__::func_148(&uLocal_1241);
				}
				else if ((__LIB_0__::func_265(&uLocal_1241) > 1f || __LIB_0__::func_665(Global_35, iParam0, 1, 1) < 3f) || __LIB_2__::func_401(iParam0, 1, 1, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1241);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153, "bool_intro", true, false);
					iLocal_1223++;
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_153, "s_P3_Eat", 1))
				{
					if ((__LIB_0__::func_265(&uLocal_1241) > 10f || __LIB_0__::func_665(Global_35, iParam0, 1, 1) < 3f) || (__LIB_0__::func_265(&uLocal_1241) > 3f && __LIB_2__::func_401(iParam0, 1, 1, 1, 0, 0)))
					{
						__LIB_1__::func_148(&uLocal_1241);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153, "bool_middle", true, false);
						iLocal_1223++;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_153, "s_P5_Eat", 1))
			{
				__LIB_1__::func_683(&iLocal_35, 2);
				iLocal_1223++;
			}
			break;
		case 5:
			if (func_625(iParam0, 1073741824 /* Float: 2f */))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, Local_153))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_153, "A_C_RAT_01", iParam0);
				}
				iLocal_1223++;
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_621(int iParam0)
{
	switch (iLocal_1224)
	{
		case 0:
			func_810(Local_153.f_1, "pblWindowAction1");
			iLocal_1224++;
			break;
		case 1:
			if (func_811(Local_153.f_1, "pblWindowAction1"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_153.f_1, "pblWindowAction1", true);
				ANIMSCENE::START_ANIM_SCENE(Local_153.f_1);
				iLocal_1224++;
			}
			break;
		case 2:
			if ((__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0) && __LIB_0__::func_27(iLocal_35, 8)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (__LIB_0__::func_665(Global_35, iParam0, 1, 1) < 3f || __LIB_2__::func_401(iParam0, 1, 1, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1244);
					fLocal_1217 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop1", true, false);
					iLocal_1224++;
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_153.f_1, "loop2", 1))
				{
					if (func_625(iParam0, 0.5f))
					{
						__LIB_1__::func_148(&uLocal_1244);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop2", true, false);
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, Local_153))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_153, "A_C_RAT_01", iParam0);
						}
						iLocal_1224 = 5;
					}
					else if (__LIB_0__::func_265(&uLocal_1244) > fLocal_1217)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop1", false, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop2", true, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_153.f_1, "pblWindowAction2", true);
						__LIB_1__::func_148(&uLocal_1244);
						fLocal_1217 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_153.f_1, "pblWindowAction1");
						iLocal_1224++;
					}
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_153.f_1, "loop2", 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 1)
				{
					if (func_625(iParam0, 0.75f))
					{
						__LIB_1__::func_148(&uLocal_1244);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_1, "breakoutLoop1", true, false);
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, Local_153))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_153, "A_C_RAT_01", iParam0);
						}
						TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, 2795.772f, -1164.1f, 46.92804f, 2f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
						iLocal_1224 = 5;
					}
				}
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	switch (iLocal_1225)
	{
		case 0:
			func_810(Local_153.f_2, "pblAll");
			iLocal_1225++;
			break;
		case 1:
			if (func_811(Local_153.f_2, "pblAll"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_153.f_2, "pblAll", true);
				ANIMSCENE::START_ANIM_SCENE(Local_153.f_2);
				iLocal_1225++;
			}
			break;
		case 2:
			if ((__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0) && __LIB_0__::func_27(iLocal_35, 8)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (!__LIB_0__::func_75(&uLocal_1247))
				{
					__LIB_1__::func_148(&uLocal_1247);
				}
				else if ((__LIB_0__::func_265(&uLocal_1247) > 1f || __LIB_0__::func_665(Global_35, iParam0, 1, 1) < 3f) || __LIB_2__::func_401(iParam0, 1, 1, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1247);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_2, "breakoutLoop1", true, false);
					iLocal_1225++;
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_153.f_2, "ledgeLoop2", 1))
				{
					if (func_625(iParam0, 1073741824 /* Float: 2f */) || __LIB_2__::func_401(iParam0, 1, 1, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_1247);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_153.f_2, "breakoutLoop2", true, false);
						iLocal_1225++;
					}
				}
			}
			break;
		case 4:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, Local_153.f_2))
			{
				if (__LIB_2__::func_1(iParam0, 0, 1))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iLocal_1342, true);
				}
				if (__LIB_3__::func_332(2797.275f, -1169.042f, 46.92398f, 1) > 1.5f)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, 2797.275f, -1169.042f, 46.92398f, 2f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				}
				else
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, 2795.733f, -1166.928f, 46.924f, 2f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				}
				iLocal_1225++;
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_153.f_2) > 0.9f)
			{
				if (!__LIB_0__::func_27(iLocal_35, 512) && __LIB_2__::func_1(iParam0, 0, 1))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iLocal_1342, true);
				}
			}
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 1)
			{
				iLocal_1225++;
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_623(int iParam0)
{
	if (__LIB_1__::func_205(iParam0, iLocal_122[3], 1, 0) || !__LIB_1__::func_205(iParam0, iLocal_120, 1, 0))
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 1 || func_625(iParam0, 1073741824 /* Float: 2f */))
	{
		return true;
	}
	return true;
}

void func_624(int iParam0, int iParam1)
{
	if (__LIB_0__::func_75(&uLocal_933))
	{
		if (__LIB_0__::func_265(&uLocal_933) > 10f && !func_623(iParam0))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(2792.515f, -1167.56f, 46.9323f, 0.5f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam0, 2792.515f, -1167.56f, 46.9323f, true, false, true, true);
					__LIB_1__::func_148(&uLocal_933);
				}
				else if (!CAM::IS_SPHERE_VISIBLE(2803.389f, -1164.747f, 46.924f, 0.5f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam0, 2803.389f, -1164.747f, 46.924f, true, false, true, true);
					__LIB_1__::func_148(&uLocal_933);
				}
			}
		}
	}
}

bool func_625(int iParam0, float fParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_122[3]))
	{
		if (__LIB_1__::func_205(iParam0, iLocal_122[3], 1, 0))
		{
			return false;
		}
	}
	if ((__LIB_0__::func_665(Global_35, iParam0, 1, 1) < fParam1 || PED::_0xC8D523BF5BBD3808(iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY"))) || ((Global_1935630.f_25 && __LIB_2__::func_0(iParam0, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_626()
{
	if (__LIB_1__::func_205(Global_35, iLocal_122[0], 1, 0))
	{
		if (!__LIB_0__::func_75(&uLocal_1250))
		{
			__LIB_1__::func_148(&uLocal_1250);
		}
		if (__LIB_0__::func_265(&uLocal_1250) > fLocal_1215)
		{
			if (CAM::IS_SPHERE_VISIBLE(2797.967f, -1169.832f, 46.924f, 1f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_627(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, 2798.641f, -1170.245f, 46.92616f, 71.7293f, true, false, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(2798.06f, -1169.895f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2797.558f, -1169.464f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2796.951f, -1169.212f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2796.873f, -1169.089f, 46.924f);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
		if (iParam1 == iLocal_122[0])
		{
			if ((iVar1 % 3) == 0)
			{
				TASK::TASK_EXTEND_ROUTE(2792.583f, -1170.926f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2790.42f, -1170.1f, 46.924f);
			}
			else if ((iVar1 % 3) == 1)
			{
				TASK::TASK_EXTEND_ROUTE(2795.596f, -1167.322f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2793.38f, -1166.115f, 46.9323f);
			}
			else
			{
				TASK::TASK_EXTEND_ROUTE(2794.16f, -1169.192f, 46.924f);
			}
		}
		else if (iParam1 == iLocal_122[1])
		{
			if ((iVar1 % 3) == 0)
			{
				TASK::TASK_EXTEND_ROUTE(2797.11f, -1166.543f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.77f, -1165.347f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2794.929f, -1164.093f, 46.924f);
			}
			else if ((iVar1 % 3) == 1)
			{
				TASK::TASK_EXTEND_ROUTE(2797.11f, -1166.543f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.77f, -1165.347f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2795.646f, -1164.293f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.47f, -1162.026f, 46.924f);
			}
			else if ((iVar1 % 3) == 2)
			{
				TASK::TASK_EXTEND_ROUTE(2797.529f, -1166.869f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.875f, -1163.502f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.15f, -1162.565f, 46.924f);
			}
			else
			{
				TASK::TASK_EXTEND_ROUTE(2797.529f, -1166.869f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2798.356f, -1166.651f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.414f, -1167.265f, 46.924f);
			}
		}
		else if (iParam1 == iLocal_122[2])
		{
			TASK::TASK_EXTEND_ROUTE(2797.529f, -1166.869f, 46.924f);
			TASK::TASK_EXTEND_ROUTE(2798.356f, -1166.651f, 46.924f);
			TASK::TASK_EXTEND_ROUTE(2801.381f, -1167.246f, 46.924f);
			if (__LIB_1__::func_985())
			{
				TASK::TASK_EXTEND_ROUTE(2803.236f, -1164.672f, 46.924f);
			}
		}
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.5f, 0, 1f, 1f, 1193033728 /* Float: 40000f */);
		__LIB_4__::func_291(iParam0, iParam1, 0, 0);
	}
	else
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.5f, 0, 1f, 1f, 1193033728 /* Float: 40000f */);
		__LIB_4__::func_291(iParam0, iLocal_120, 0, 0);
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	if (iLocal_1226 < 2)
	{
		fLocal_1215 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.6f);
	}
	else
	{
		fLocal_1215 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
	}
	iLocal_1226++;
	__LIB_1__::func_148(&uLocal_1250);
}

void func_628(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_86(vParam2))
	{
		if (__LIB_1__::func_985())
		{
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 5f, -1, 0, 2.5f, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 5f, -1, 0, 1.75f, 0);
		}
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, 1f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f), 524288, 40000f);
	}
	TASK::TASK_WANDER_IN_VOLUME(0, iParam1, iParam5, iParam6, iParam7);
	__LIB_1__::func_474(iParam0, &iVar0, 0.1f, 5f, 1, 1);
}

void func_808(int iParam0, bool bParam1, vector3 vParam2)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(2794.944f, -1166.643f, 46.91581f);
	TASK::TASK_EXTEND_ROUTE(2793.532f, -1166.149f, 46.9157f);
	TASK::TASK_EXTEND_ROUTE(vParam2);
	if (bParam1)
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 2f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	}
	else
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 2f, 2, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_810(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
	}
}

bool func_811(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
			{
				return true;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
			}
		}
	}
	return false;
}

