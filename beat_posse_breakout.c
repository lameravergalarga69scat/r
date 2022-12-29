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
	struct<5> Local_14 = { 3, 0, 0, 0, 3 } ;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 3;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	bool bLocal_44 = false;
	char cLocal_45[64] = "";
	var uLocal_53 = 3;
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
	struct<2> Local_78[3];
	struct<193> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_278 = 0;
	struct<32> Local_279[8];
	int iLocal_536 = 0;
	var uLocal_537 = -89429847;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	struct<12> Local_549[2];
	struct<6> Local_574 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	int iLocal_582 = 0;
	struct<4> Local_583 = { 0, 0, 0, 0 } ;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	vector3 vLocal_595 = { 0f, 0f, 0f };
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	struct<23> Local_607 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	struct<21> Local_632[8];
	struct<17> Local_801[3];
	struct<17> Local_853[3];
	struct<17> Local_905[3];
	int iLocal_957 = 0;
	int iLocal_958[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_967[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	char* sLocal_991[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1000 = NULL;
	vector3 vLocal_1001 = { 0f, 0f, 0f };
	vector3 vLocal_1004 = { 0f, 0f, 0f };
	vector3 vLocal_1007 = { 0f, 0f, 0f };
	float fLocal_1010 = 0f;
	vector3 vLocal_1011 = { 0f, 0f, 0f };
	vector3 vLocal_1014 = { 0f, 0f, 0f };
	float fLocal_1017 = 0f;
	vector3 vLocal_1018 = { 0f, 0f, 0f };
	vector3 vLocal_1021 = { 0f, 0f, 0f };
	vector3 vLocal_1024 = { 0f, 0f, 0f };
	float fLocal_1027 = 0f;
	float fLocal_1028 = 0f;
	float fLocal_1029 = 0f;
	vector3 vLocal_1030 = { 0f, 0f, 0f };
	vector3 vLocal_1033 = { 0f, 0f, 0f };
	vector3 vLocal_1036 = { 0f, 0f, 0f };
	int iLocal_1039 = 0;
	int iLocal_1040 = 0;
	int iLocal_1041[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1050[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<24> Local_1059 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char[] cLocal_1117[8] = 0;
	int iLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 1176256512;
	bool bLocal_1126 = false;
	var uLocal_1127 = 0;
	int iLocal_1128[4] = { 0, 0, 0, 0 };
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	int iLocal_1137 = 0;
	int iLocal_1138 = 0;
	int iLocal_1139 = 0;
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	float fLocal_1142 = 0f;
	int iLocal_1143 = 0;
	float fLocal_1144 = 0f;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	float fLocal_1149 = 0f;
	vector3 vLocal_1150 = { 0f, 0f, 0f };
	vector3 vLocal_1153 = { 0f, 0f, 0f };
	vector3 vLocal_1156 = { 0f, 0f, 0f };
	vector3 vLocal_1159 = { 0f, 0f, 0f };
	vector3 vLocal_1162 = { 0f, 0f, 0f };
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
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
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	struct<10> Local_1223 = { 0, 1097859072, 0, 1120403456, 1, 0, 1, 0, 1073741824, 0 } ;
	var uLocal_1233 = 1113325568;
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
	var uLocal_1253 = 1;
	var uLocal_1254 = 1;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 1105014447;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	int iLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 1065353216;
	var uLocal_1274 = 1119092736;
	var uLocal_1275 = 1092616192;
	var uLocal_1276 = 1085276160;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
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
	iLocal_976 = joaat("PG_RE_POSSEBREAKOUT01X");
	iLocal_977 = joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA");
	iLocal_978 = joaat("WORLD_HUMAN_SIT_GROUND");
	sLocal_1000 = "";
	fLocal_1010 = 0f;
	cLocal_1117 = "PB";
	fLocal_1142 = 10f;
	fLocal_1144 = 5f;
	fLocal_1149 = 3f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1126 = true;
	}
	if (!bLocal_1126)
	{
		Local_85.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_85.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_4__::func_116(&Local_85, 1);
		func_4();
		__LIB_3__::func_393(&(Local_85.f_5), 1);
		__LIB_2__::func_634(&(Local_85.f_5), 1);
		__LIB_2__::func_662(&(Local_85.f_5), 0);
		__LIB_3__::func_333(&(Local_85.f_5), 1);
		iLocal_548 = 2;
		iLocal_547 = 3;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1126, 1401, 0);
		if (bLocal_1126)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1122)
			{
				case 0:
					if (func_11())
					{
						iLocal_1122 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_85, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_85, &uLocal_1284, &uLocal_1283);
						func_14();
						if (func_15(vLocal_1001, 30f) || __LIB_3__::func_332(vLocal_1001, 1) < 200f)
						{
							func_9();
						}
						else
						{
							__LIB_3__::func_618(vLocal_1001, 15f, 1, 0, 0, 0, 0);
							__LIB_4__::func_248(vLocal_1001, 30f);
							FIRE::STOP_FIRE_IN_RANGE(vLocal_1001, 15f);
							iLocal_1122 = 3;
						}
					}
					else if (Local_85.f_160)
					{
						func_9();
					}
					break;
				case 3:
					if ((func_19(&(iLocal_1041[4]), &(iLocal_1041[6])) && func_20(&(iLocal_1041[5]), &(iLocal_1041[7]))) && func_21())
					{
						if (func_22())
						{
							func_23();
							func_24();
							func_25();
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[7], iLocal_1222);
							func_26(&uLocal_1172, iLocal_1041[7], vLocal_1014, fLocal_1017, vLocal_1011);
							vLocal_1153 = { vLocal_1001 + Vector(-0.35f, -1.06f, 3.42f) };
							vLocal_1150 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -3.51f, 0.06f, 0.25f) };
							iLocal_1176 = TASK::ADD_COVER_POINT(vLocal_1150, (fLocal_1010 + 112.1678f), 1, 0, 0, false);
							__LIB_3__::func_558(&iLocal_1168, vLocal_1001, 0f, 0f, 0f, 15f, 15f, 15f, "m_volHerbRemove");
							__LIB_3__::func_241(iLocal_1168, 1);
							func_29();
							iLocal_1122 = 4;
						}
					}
					else
					{
						if (!__LIB_0__::func_75(&uLocal_1217))
						{
							__LIB_1__::func_148(&uLocal_1217);
						}
						else if (__LIB_0__::func_265(&uLocal_1217) > 15f)
						{
							func_9();
						}
						if (__LIB_3__::func_365(&Local_85, &iLocal_1041, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_9();
						}
					}
					break;
				case 4:
					if (!func_34(&Local_85, &iLocal_1041, 0, 0, 1, 0, 1, 0))
					{
						func_9();
					}
					__LIB_3__::func_972(&iLocal_536, &(iLocal_1050[5]), 0);
					if (!Local_85.f_46)
					{
						if ((func_36() || __LIB_0__::func_27(iLocal_979, 32)) || iLocal_28 == 10)
						{
							PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1041[4], false, 0, false);
							__LIB_0__::func_172(iLocal_1169);
							func_39();
							__LIB_2__::func_504(iLocal_1041[5], 0);
							__LIB_2__::func_504(iLocal_1041[0], 0);
							__LIB_2__::func_504(iLocal_1041[1], 0);
							__LIB_2__::func_504(iLocal_1041[2], 0);
							__LIB_2__::func_504(iLocal_1041[3], 0);
							func_41();
							if (iLocal_582 <= 4)
							{
								func_42();
							}
							__LIB_1__::func_683(&iLocal_979, 32);
							func_44();
							Local_85.f_46 = 1;
							if (iLocal_546 != 0)
							{
							}
							else
							{
								iLocal_546 = 262144;
							}
							__LIB_3__::func_237(&(Local_85.f_5), &iLocal_546);
							__LIB_3__::func_393(&(Local_85.f_5), 0);
							__LIB_2__::func_180(&(Local_85.f_5), 0);
							__LIB_2__::func_105(&(Local_85.f_5), 0);
							__LIB_3__::func_333(&(Local_85.f_5), 0);
							iLocal_582 = 9;
						}
					}
					if (func_48())
					{
						Local_85.f_50 = 1;
						func_9();
					}
					if ((__LIB_3__::func_365(&Local_85, &iLocal_1041, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0) || __LIB_0__::func_27(iLocal_985, 33554432)) || func_49())
					{
						if (__LIB_0__::func_27(iLocal_985, 1))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("REWPB_ABANDON");
						}
						if (__LIB_0__::func_27(iLocal_979, 16384))
						{
							if (!__LIB_0__::func_27(iLocal_979, 524288) && !__LIB_0__::func_27(iLocal_979, 262144))
							{
								__LIB_3__::func_465(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_1041[4], 0, 1065353216 /* Float: 1f */, 0);
							}
						}
						Local_85.f_50 = 1;
						func_9();
					}
					break;
			}
			BUILTIN::WAIT(Local_85.f_158);
		}
	}
}

void func_4()
{
	__LIB_3__::func_382(&(Local_85.f_5), 30);
	__LIB_3__::func_407(&(Local_85.f_5), 15f);
}

void func_9()
{
	if (!Local_1223.f_9)
	{
		Local_85.f_45 = 0;
		__LIB_3__::func_252(&Local_85);
	}
	func_58();
	if (__LIB_0__::func_27(iLocal_979, 128) || (__LIB_0__::func_27(iLocal_979, 16384) && !__LIB_0__::func_27(iLocal_979, 131072)))
	{
		__LIB_4__::func_253(joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"), 1017034651, 1120952528, -1, 1, 1, 0);
	}
	func_60();
	__LIB_3__::func_711(&uLocal_1277, 106);
	if (iLocal_582 > 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 118, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 252, true);
	}
	if (bLocal_1126)
	{
		if (__LIB_0__::func_27(iLocal_985, 1))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("REWPB_FAIL");
		}
	}
	if (iLocal_1122 >= 4 && !Local_85.f_46)
	{
		if (__LIB_2__::func_1(iLocal_1041[5], 0, 1))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[5], joaat("REL_COMPANION_GROUP"));
		}
		func_63();
	}
	if (iLocal_990 != 0)
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_990);
	}
	TASK::TASK_CLEAR_LOOK_AT(Global_35);
	if (__LIB_2__::func_1(iLocal_1041[4], 0, 1))
	{
		TASK::TASK_CLEAR_LOOK_AT(iLocal_1041[4]);
	}
	func_64();
	__LIB_3__::func_650(&iLocal_1165, &uLocal_1173);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1166))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1166);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1166);
		VOLUME::_DELETE_VOLUME(iLocal_1166);
		__LIB_1__::func_544(iLocal_1166);
	}
	if (__LIB_0__::func_27(iLocal_979, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	func_67(1);
	func_68();
	func_69(0, 1);
	func_70(0, 1);
	__LIB_0__::func_325(&iLocal_1174);
	AUDIO::CANCEL_MUSIC_EVENT("REWPB_START");
	AUDIO::CANCEL_MUSIC_EVENT("REWPB_HELP");
	AUDIO::CANCEL_MUSIC_EVENT("REWPB_ATTACKED");
	AUDIO::CANCEL_MUSIC_EVENT("REWPB_COMPLETE");
	if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
	{
		if (Local_85.f_46)
		{
			TASK::TASK_COMBAT_PED(iLocal_1041[1], Global_35, 0, 0);
			Local_85.f_50 = 1;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1000))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1000);
	}
	func_72(&Local_85, &iLocal_1041, &iLocal_1050, 0, uLocal_1284, uLocal_1283, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_11()
{
	switch (iLocal_1121)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_85))
			{
				func_75();
				func_76();
				func_77();
				__LIB_3__::func_314(&Local_549);
				func_79();
				__LIB_3__::func_445(&Local_279);
				func_81();
				func_82(&Local_1223);
				func_83();
				PROPSET::_REQUEST_PROPSET(iLocal_976);
				__LIB_2__::func_312(iLocal_977, 15, 0, 0);
				__LIB_2__::func_312(iLocal_978, 15, 0, 0);
				iLocal_1121 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_1120, cLocal_1117))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_549))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_976))
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REWPB_START"))
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REWPB_HELP"))
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REWPB_ABANDON"))
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REWPB_ATTACKED"))
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REWPB_COMPLETE"))
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REWPB_FAIL"))
			{
				return false;
			}
			if (!__LIB_2__::func_313(iLocal_977))
			{
				return false;
			}
			if (!__LIB_2__::func_313(iLocal_978))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_279))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 4;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 3;
			break;
		case 6:
			*uParam1 = 9;
			*uParam2 = 4;
			break;
	}
}

void func_14()
{
	switch (Local_85.f_51.f_4)
	{
		case 0:
			vLocal_1001 = { -2026.883f, 421.3658f, 123.207f };
			fLocal_1010 = 305f;
			vLocal_1014 = { -2030.066f, 431.884f, 122.437f };
			fLocal_1017 = 120.251f;
			vLocal_1011 = { -2031.295f, 431.8302f, 123.9255f };
			vLocal_1024 = { -2016.294f, 401.0307f, 125.3554f };
			fLocal_1027 = 13.2481f;
			sLocal_1000 = "re_pbr_bgv_1";
			vLocal_1007 = { -2009.975f, 398.1393f, 125.3468f };
			break;
		case 1:
			vLocal_1001 = { -919.809f, 45.468f, 45.024f };
			fLocal_1010 = -45f;
			vLocal_1014 = { -919.212f, 58.826f, 45.914f };
			fLocal_1017 = 75.935f;
			vLocal_1011 = { -920.3922f, 59.36298f, 47.19365f };
			vLocal_1024 = { -887.7031f, 54.1848f, 42.8712f };
			fLocal_1027 = 97.0801f;
			sLocal_1000 = "re_pbr_bgv_4";
			vLocal_1007 = { -875.7646f, 51.21357f, 42.6883f };
			break;
		case 2:
			vLocal_1001 = { -919.809f, 45.468f, 45.024f };
			fLocal_1010 = -45f;
			vLocal_1014 = { -919.212f, 58.826f, 45.914f };
			fLocal_1017 = 75.935f;
			vLocal_1011 = { -920.3922f, 59.36298f, 47.19365f };
			vLocal_1024 = { -887.7031f, 54.1848f, 42.8712f };
			fLocal_1027 = 97.0801f;
			sLocal_1000 = "re_pbr_hrt_0";
			vLocal_1007 = { -883.4989f, 50.6088f, 42.5513f };
			break;
		case 3:
			vLocal_1001 = { 106.2219f, 980.2459f, 213.2643f };
			fLocal_1010 = 15f;
			vLocal_1014 = { 94.743f, 984.496f, 212.058f };
			fLocal_1017 = 145.335f;
			vLocal_1011 = { 94.17893f, 982.674f, 213.5475f };
			vLocal_1024 = { 130.8159f, 966.5485f, 209.2715f };
			fLocal_1027 = 50.4781f;
			sLocal_1000 = "re_pbr_hrt_1";
			vLocal_1007 = { 133.6904f, 960.6448f, 207.7791f };
			break;
		case 4:
			vLocal_1001 = { 566.9871f, 68.99439f, 150.4439f };
			fLocal_1010 = 0f;
			vLocal_1014 = { 562.325f, 80.9154f, 151.2135f };
			fLocal_1017 = 120.8762f;
			vLocal_1011 = { 560.7023f, 81.10706f, 151.133f };
			vLocal_1024 = { 613.8922f, 90.8058f, 158.7688f };
			fLocal_1027 = 130.1807f;
			sLocal_1000 = "re_pbr_hrt_2";
			vLocal_1007 = { 627.9386f, 87.83723f, 160.289f };
			iLocal_1039 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x6E0D3C3F828DA773(iLocal_1039, VOLUME::_CREATE_VOLUME_BOX(-3.205f, 668.788f, 111.637f, 0f, 0f, 160.791f, 182.516f, 23.423f, 29.546f));
			VOLUME::_0x6E0D3C3F828DA773(iLocal_1039, VOLUME::_CREATE_VOLUME_BOX(60.347f, 642.281f, 111.637f, 0f, 0f, -27.767f, 182.516f, 23.423f, 29.546f));
			break;
		case 5:
			vLocal_1001 = { 716.867f, -644.9744f, 75.4281f };
			fLocal_1010 = -85f;
			vLocal_1014 = { 728.03f, -652.87f, 76.55f };
			fLocal_1017 = 24.44f;
			vLocal_1011 = { 726.788f, -650.1722f, 77.19786f };
			vLocal_1024 = { 738.6644f, -630.9717f, 74.78355f };
			fLocal_1027 = 122.1531f;
			sLocal_1000 = "re_pbr_hrt_3";
			vLocal_1007 = { 737.0294f, -624.0504f, 74.26634f };
			__LIB_3__::func_557(&iLocal_1039, 735.6431f, -561.735f, 76.09141f, 0f, 0f, 137.6948f, 46.59331f, 12.25233f, 19.54567f, "m_volTrainTracks");
			break;
		case 6:
			vLocal_1001 = { -919.809f, 45.468f, 45.024f };
			fLocal_1010 = -45f;
			vLocal_1014 = { -919.212f, 58.826f, 45.914f };
			fLocal_1017 = 75.935f;
			vLocal_1011 = { -920.3922f, 59.36298f, 47.19365f };
			vLocal_1024 = { -936.9882f, 36.9602f, 45.8897f };
			fLocal_1027 = 310.3037f;
			sLocal_1000 = "re_pbr_hrt_4";
			vLocal_1007 = { -961.9864f, 70.55093f, 53.12505f };
			break;
	}
}

bool func_15(vector3 vParam0, float fParam3)
{
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	return VOLUME::_0x397769175A7DBB30(vParam0, fParam3, 0, 16384, 0);
}

int func_19(var uParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return 1;
	}
	else
	{
		if (!__LIB_2__::func_1(*uParam0, 0, 1))
		{
			*uParam0 = func_98(iLocal_548, 1, 0, Local_85.f_51, Local_85.f_51.f_1, Local_85.f_51.f_2, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!__LIB_2__::func_1(*uParam1, 0, 1))
		{
			*uParam1 = func_99(iLocal_548, 1, 1, 0, 0, 1, 1, 1, 1, Local_85.f_51, Local_85.f_51.f_1, Local_85.f_51.f_2, 0, 1, 0, 0, 0);
		}
		return 0;
	}
	return 0;
}

int func_20(var uParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return 1;
	}
	else
	{
		if (!__LIB_2__::func_1(*uParam0, 0, 1))
		{
			*uParam0 = func_98(iLocal_547, 1, 0, vLocal_1001.x, vLocal_1001.y, vLocal_1001.z, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!__LIB_2__::func_1(*uParam1, 0, 1))
		{
			*uParam1 = func_99(iLocal_547, 1, 1, 0, 0, 1, 1, 1, 1, vLocal_1014.x, vLocal_1014.y, vLocal_1014.z, fLocal_1017, 1, 0, 0, 0);
			if (*uParam1 != 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
			}
		}
		return 0;
	}
	return 0;
}

int func_21()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1000))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1000))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1000);
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	switch (iLocal_1267)
	{
		case 0:
			__LIB_4__::func_2(&iLocal_990, iLocal_976, vLocal_1001, 1, fLocal_1010, 1150681088 /* Float: 1200f */, 0, 1);
			iLocal_1267 = 1;
			break;
		case 1:
			if (!func_101(0f, 0f, 0f, 0f, &Local_279, &iLocal_1041, 1, 0, 3, 1))
			{
				return false;
			}
			__LIB_3__::func_400(vLocal_1001, &Local_549, fLocal_1010, 0, 1, 1, 0);
			iLocal_1267 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_23()
{
	int iVar0;
	PED::ADD_RELATIONSHIP_GROUP("bountyPosseGroup", &iLocal_1220);
	PED::ADD_RELATIONSHIP_GROUP("relCompanionIgnore", &iLocal_1222);
	PED::_0xDC91F22F09BC6C2F(iLocal_1220, 0);
	PED::ADD_RELATIONSHIP_GROUP("relBountyHunterInCover", &iLocal_1221);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 4)
		{
			if (__LIB_2__::func_1(iLocal_1041[4], 0, 1))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1041[4], Local_85.f_51, true, false, true, true);
				if (PED::GET_MOUNT(iLocal_1041[4]) != iLocal_1041[6])
				{
					PED::_SET_PED_ON_MOUNT(iLocal_1041[4], iLocal_1041[6], -1, true);
				}
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_1041[4], false, joaat("PLAYER"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_1041[6], false, joaat("PLAYER"));
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1041[4], true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1041[4], 2, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[4], true);
				__LIB_3__::func_285(iLocal_1041[4], &Local_85, 0);
				__LIB_3__::func_285(iLocal_1041[6], &Local_85, 0);
				__LIB_2__::func_133(iLocal_1041[4], &(Local_279[4 /*32*/].f_23), 0);
			}
		}
		else if (iVar0 == 5)
		{
			if (__LIB_2__::func_1(iLocal_1041[5], 0, 1))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_1041[5], true, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_1041[5], false, joaat("REL_GANG_DUTCHS"));
				func_105(iLocal_1041[5], vLocal_1001 + Local_279[5 /*32*/].f_6, Local_279[iVar0 /*32*/].f_9, 2, 1073741824 /* Float: 2f */);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[5], true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1041[5], false, 0f);
				PED::SET_PED_CAN_RAGDOLL(iLocal_1041[5], false);
				PED::_0xAE6004120C18DF97(iLocal_1041[5], 0, 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_1041[5], false, joaat("PLAYER"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_1041[7], false, joaat("PLAYER"));
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1041[5], true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1041[5], 2, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[5], iLocal_1222);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_1041[5], false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[7], joaat("REL_COMPANION_GROUP"));
			}
		}
		else if (__LIB_2__::func_1(iLocal_1041[iVar0], 0, 1) && iVar0 != 6)
		{
			func_105(iLocal_1041[iVar0], vLocal_1001 + Local_279[iVar0 /*32*/].f_6, 0f, 2, 1073741824 /* Float: 2f */);
			if (iVar0 != 1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[iVar0], iLocal_1220);
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[iVar0], iLocal_1221);
			}
			__LIB_1__::func_991(iLocal_1041[iVar0], 0);
			if (iVar0 == 1)
			{
				__LIB_4__::func_239(iLocal_1041[iVar0]);
			}
			else if (iVar0 == 3)
			{
				__LIB_2__::func_272(iLocal_1041[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else
			{
				__LIB_2__::func_272(iLocal_1041[iVar0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_279[iVar0 /*32*/].f_23)))
		{
			__LIB_2__::func_133(iLocal_1041[iVar0], &(Local_279[iVar0 /*32*/].f_23), 0);
		}
		iVar0++;
	}
	func_109(1);
	__LIB_1__::func_683(&iLocal_979, 16);
	fLocal_1028 = PED::_0x92C8EACA29F6BED6(iLocal_1041[4]);
	PED::_0x73B6F907B913C860(iLocal_1041[4], 0.5f);
}

void func_24()
{
	Local_607 = { 0f, 0f, 0f };
	Local_607.f_3 = Global_35;
	Local_607.f_8 = 4;
	Local_607.f_4 = 21030;
	Local_607.f_21 = 4;
	Local_607.f_22 = 4;
	Local_607.f_19 = 4;
	Local_607.f_20 = 4;
	Local_607.f_17 = 4;
	Local_607.f_18 = 4;
	Local_607.f_7 = 1500;
}

void func_25()
{
	if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_1041[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[5]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1041[5], 1);
		}
	}
}

void func_26(var uParam0, int iParam1, vector3 vParam2, float fParam5, vector3 vParam6)
{
	*uParam0 = __LIB_2__::func_944(joaat("PROP_HITCHINGTREE"), vParam2, fParam5, 0, 0, 0);
	PHYSICS::_0x06AADE17334F7A40(iParam1, vParam6);
	TASK::_TASK_USE_SCENARIO_POINT(iParam1, *uParam0, 0, 0, false, true, 0, false, -1f, false);
}

void func_29()
{
	__LIB_3__::func_558(&iLocal_1040, vLocal_1001, 0f, 0f, 0f, 70f, 70f, 70f, "m_volHerbRemove");
}

bool func_34(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_120(uParam0, iParam2);
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
			if (!__LIB_3__::func_490(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
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

bool func_36()
{
	if (__LIB_0__::func_27(iLocal_957, 32))
	{
		if (!__LIB_0__::func_75(&uLocal_1202))
		{
			__LIB_1__::func_148(&uLocal_1202);
		}
		else if (__LIB_0__::func_265(&uLocal_1202) > 1.5f)
		{
			return true;
		}
	}
	if (func_130())
	{
		return true;
	}
	return false;
}

void func_39()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_1041[iVar0], 0, 1))
		{
			iLocal_1050[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_1041[iVar0]);
		}
		iVar0++;
	}
}

void func_41()
{
	if (__LIB_2__::func_1(iLocal_1041[0], 0, 1))
	{
		__LIB_2__::func_478(iLocal_1041[0], Global_35, "RE_PBR_UNI_V1_WARN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
	{
		__LIB_2__::func_478(iLocal_1041[1], Global_35, "RE_PBR_UNI_V1_WARN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_42()
{
	if (!__LIB_0__::func_27(iLocal_979, 16384))
	{
		__LIB_1__::func_683(&iLocal_979, 16384);
		func_132();
	}
}

void func_44()
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1222, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_1222);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1220, joaat("REL_GANG_DUTCHS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1220, joaat("REL_COMPANION_GROUP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1220, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), iLocal_1220);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_1220);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COMPANION_GROUP"), iLocal_1220);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1221, joaat("PLAYER"));
}

bool func_48()
{
	if (iLocal_582 < 13)
	{
		PED::SET_PED_RESET_FLAG(iLocal_1041[5], 25, true);
	}
	if (iLocal_582 > 4)
	{
		__LIB_4__::func_319(&uLocal_1277, vLocal_1001, 2, -1082130432 /* Float: -1f */);
	}
	func_137(&iLocal_1174, vLocal_1001);
	func_138();
	func_139();
	func_140();
	func_141();
	func_142();
	func_143();
	func_144();
	func_145(1071644672 /* Float: 1.75f */);
	func_146();
	func_147();
	func_148();
	func_149();
	if (iLocal_582 > 0)
	{
		func_150();
	}
	switch (iLocal_582)
	{
		case 0:
			if (__LIB_0__::func_31(iLocal_548))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1041[4], 1);
				PED::SET_PED_CONFIG_FLAG(Global_35, 118, true);
				if (!PED::IS_PED_ON_MOUNT(iLocal_1041[4]))
				{
					__LIB_18__::func_34(iLocal_548, 0);
				}
				ENTITY::SET_ENTITY_HEADING(iLocal_1041[4], __LIB_2__::func_916(ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false), Global_36));
				TASK::TASK_PLAY_ANIM(iLocal_1041[4], Local_78[1 /*2*/], Local_78[1 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				func_154();
				func_155(iLocal_1041[4], iLocal_548, 0);
				__LIB_3__::func_345(&Local_85, iLocal_1041[4]);
				__LIB_1__::func_683(&iLocal_979, 2097152);
			}
			if (__LIB_0__::func_31(iLocal_547))
			{
				func_155(iLocal_1041[5], iLocal_547, 0);
				__LIB_4__::func_705(iLocal_547, 1);
			}
			func_67(0);
			iLocal_1166 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_1001, 0f, 0f, 0f, 40f, 40f, 40f, "RE_PBR_CAMP");
			POPULATION::_0xB56D41A694E42E86(iLocal_1166, 4320, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_1166, 4320, 0, 0, -1, -1, 0);
			__LIB_2__::func_213(iLocal_1166, "RE_PBR_CAMP", 1, 0, 8, 0, -1082130432 /* Float: -1f */);
			PED::_0x9851DE7AEC10B4E1(vLocal_1001, 10f, 1, 0);
			iLocal_582 = 1;
			break;
		case 1:
			if (func_158())
			{
				return true;
			}
			if (!func_159())
			{
				if (func_160(&Local_85, &uLocal_1123, 0.5f, 1114636288 /* Float: 60f */, 70f, 1000, 1f, 1f, 1, 0, 1, 12f, 1, 1, 0))
				{
					func_161();
					bLocal_44 = true;
					iLocal_582 = 2;
				}
			}
			break;
		case 2:
			if (func_158())
			{
				return true;
			}
			__LIB_17__::func_896(iLocal_1041[4], &uLocal_1268, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			func_163(Global_35, iLocal_1041[4], 12f);
			if (!__LIB_0__::func_27(iLocal_979, 268435456))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_1041[4], 1, 1) < 40f)
				{
					func_60();
					Local_607.f_7 = 3000;
					__LIB_1__::func_683(&iLocal_979, 268435456);
				}
			}
			else
			{
				func_165(Global_35, iLocal_1041[4]);
				func_166(0);
				if (func_167(iLocal_1041[4], Global_35, &(iLocal_1050[4]), &uLocal_1266, &Local_1223, &Local_85, &uLocal_1127, &(Local_85.f_47), 4f, 14f, 0, 0))
				{
					func_166(1);
					__LIB_4__::func_243(iLocal_1041[4], &(Local_85.f_121));
					if (PED::GET_MOUNT(iLocal_1041[4]) != 0)
					{
						__LIB_4__::func_243(PED::GET_MOUNT(iLocal_1041[4]), &(Local_85.f_121));
					}
					__LIB_3__::func_164(&(Local_85.f_121));
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1041[0]);
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1041[1]);
					__LIB_3__::func_285(iLocal_1041[0], &Local_85, 0);
					__LIB_3__::func_285(iLocal_1041[1], &Local_85, 0);
					iLocal_582 = 4;
				}
			}
			break;
		case 4:
			func_163(Global_35, iLocal_1041[4], 12f);
			__LIB_17__::func_896(iLocal_1041[4], &uLocal_1268, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			func_165(Global_35, iLocal_1041[4]);
			if (__LIB_0__::func_27(iLocal_979, 4096) || __LIB_0__::func_27(iLocal_979, 134217728))
			{
				if (__LIB_0__::func_27(iLocal_979, 16384))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1041[4]);
					__LIB_1__::func_345();
					func_170(1);
					func_42();
					__LIB_1__::func_148(&uLocal_32);
					Local_85.f_44 = 1;
					iLocal_582 = 5;
				}
				else if ((__LIB_0__::func_27(iLocal_979, 128) || __LIB_0__::func_27(iLocal_985, 16384)) || __LIB_0__::func_27(iLocal_979, 134217728))
				{
					func_171(0);
					Local_85.f_44 = 1;
					iLocal_582 = 5;
				}
			}
			break;
		case 5:
			func_172(1);
			if ((__LIB_0__::func_27(iLocal_979, 16384) || __LIB_0__::func_27(iLocal_979, 256)) || __LIB_0__::func_27(iLocal_979, 134217728))
			{
				func_173(joaat("BLIP_STYLE_COMPANION"), 0);
				iLocal_582 = 6;
			}
			break;
		case 6:
			func_174();
			if (func_175(&Local_85, 2f, 60f, 45f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_574, "bAdvanceToDialogue", true, false);
				__LIB_1__::func_681(&iLocal_957, 2);
				func_60();
				iLocal_582 = 7;
			}
			break;
		case 7:
			break;
		case 9:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_574, sLocal_991[5]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574, sLocal_991[7]))
			{
				__LIB_1__::func_748(&(Local_85.f_162), 1, 1);
				__LIB_1__::func_748(&(Local_85.f_163), 1, 1);
				func_155(iLocal_1041[4], iLocal_548, 1);
				__LIB_0__::func_325(&(iLocal_1050[4]));
				__LIB_1__::func_551(iLocal_548, 0);
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_574, "dialogue", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_574, "idles", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574, sLocal_991[7], true);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574, sLocal_991[5], true);
				}
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_574, "bAdvanceToBreakout", true, false);
				__LIB_3__::func_652(ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false), &iLocal_1175, joaat("BLIP_STYLE_COMPANION"), 0, 0, 0);
				COMPANION::_0x1740E3DEE0AE4D27(iLocal_1041[4], iLocal_1137);
				__LIB_1__::func_681(&iLocal_979, 2097152);
				PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_1041[4], 35f);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_1041[4], vLocal_1001, 35f, 0, 16);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_1041[4]);
				__LIB_0__::func_37(&uLocal_1214);
				__LIB_0__::func_172(iLocal_1169);
				iLocal_582 = 10;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574, sLocal_991[5]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574, sLocal_991[7]);
			}
			break;
		case 10:
			if (MAP::_DOES_ENTITY_HAVE_BLIP(iLocal_1041[4]))
			{
				MAP::_0x01B928CA2E198B01(MAP::GET_BLIP_FROM_ENTITY(iLocal_1041[4]));
			}
			func_181();
			func_182();
			if (!__LIB_0__::func_27(iLocal_985, 8192))
			{
				if (__LIB_2__::func_227(-4f, 1, iLocal_1041[5], 1))
				{
					if (!__LIB_0__::func_75(&uLocal_1214))
					{
						__LIB_1__::func_148(&uLocal_1214);
					}
					else if (__LIB_0__::func_265(&uLocal_1214) > 1.5f)
					{
						func_184();
					}
				}
			}
			else
			{
				func_185();
				func_186();
			}
			if (func_187())
			{
				if (func_188(0))
				{
					if (__LIB_2__::func_1(iLocal_1041[5], 0, 1) && !__LIB_0__::func_27(iLocal_979, 524288))
					{
						func_189(0);
						iLocal_582 = 12;
					}
					else
					{
						return true;
					}
				}
			}
			else if (func_188(0))
			{
				if (func_190(1))
				{
					if (__LIB_0__::func_27(iLocal_979, 1048576))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[6]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1041[1], joaat("WEAPON_UNARMED"), false, 0, false, false);
							__LIB_2__::func_279(iLocal_1041[1], 1);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574.f_1, sLocal_991[6], true);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_574.f_1, "bAdvanceToBreakout", true, false);
							__LIB_1__::func_683(&iLocal_979, 262144);
							func_189(0);
							iLocal_582 = 12;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[6]);
						}
					}
				}
				else
				{
					func_192();
					if (!__LIB_0__::func_27(iLocal_979, 67108864) && iLocal_1128[1])
					{
						func_193();
					}
				}
			}
			break;
		case 12:
			if (!__LIB_2__::func_1(iLocal_1041[5], 0, 1))
			{
				return true;
			}
			if (!__LIB_0__::func_27(iLocal_979, 4))
			{
				func_194(Global_35);
			}
			if (__LIB_0__::func_27(iLocal_979, 262144))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_PUNCH_B")))
				{
					__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[5], "RE_PBR_UNI_V1_PUNCH_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
				{
					PED::SET_PED_RESET_FLAG(iLocal_1041[1], 36, true);
					PED::SET_PED_RESET_FLAG(iLocal_1041[1], 31, true);
				}
				if (((!__LIB_2__::func_1(iLocal_1041[1], 0, 1) || __LIB_0__::func_27(iLocal_979, 67108864)) || ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false) && ANIMSCENE::_0x1F0E401031E20146(Local_574.f_1, sLocal_991[0])) && ANIMSCENE::_0xB89FCFF19DAFFF28(Local_574.f_1, "pedBountyB"))) || ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false) && ANIMSCENE::_0x1F0E401031E20146(Local_574.f_1, sLocal_991[6])) && ANIMSCENE::_0xB89FCFF19DAFFF28(Local_574.f_1, "pedBountyB")))
				{
					if (!__LIB_0__::func_27(iLocal_979, 524288))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[0]))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_574.f_1, "bAdvanceToBreakout", false, false);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574.f_1, sLocal_991[0], true);
							__LIB_1__::func_681(&iLocal_979, 262144);
							iLocal_582 = 10;
							Jump @3521; //curOff = 2397
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[0]);
						}
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], -777194943))
					{
						__LIB_1__::func_683(&iLocal_979, 4194304);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_979, 524288))
				{
					Local_607.f_7 = 0;
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1041[1], &Local_607);
				}
			}
			if (!__LIB_0__::func_27(iLocal_979, 131072))
			{
				if (__LIB_0__::func_27(iLocal_979, 32768))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPTIBLE")))
					{
						PED::SET_PED_CONFIG_FLAG(Global_35, 252, true);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						__LIB_1__::func_681(&iLocal_979, 32768);
					}
				}
				if (__LIB_0__::func_27(iLocal_979, 524288))
				{
					if (__LIB_0__::func_27(iLocal_979, 4194304) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_574.f_1, "pedKidnapped", iLocal_1041[5]);
						}
						__LIB_1__::func_683(&iLocal_979, 131072);
					}
				}
				else
				{
					func_195();
				}
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_979, 32768))
				{
					__LIB_3__::func_465(12, 0, 0, 0, iLocal_1041[5], 0, 1065353216 /* Float: 1f */, 0);
					PED::SET_PED_CONFIG_FLAG(Global_35, 252, true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					__LIB_1__::func_681(&iLocal_979, 32768);
				}
				iLocal_582 = 13;
			}
			break;
		case 13:
			if (__LIB_0__::func_27(iLocal_979, 262144))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_PUNCH_B")))
				{
					__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[5], "RE_PBR_UNI_V1_PUNCH_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if (__LIB_0__::func_27(iLocal_979, 4194304) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false))
			{
				__LIB_0__::func_325(&iLocal_1175);
				if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false), 1f) > 0)
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_1041[5], vLocal_1001, 4.5f, -1, 28928, 2f);
					__LIB_1__::func_683(&iLocal_979, 1073741824 /* Float: 2f */);
				}
				Local_85.f_44 = 1;
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[5], joaat("REL_COMPANION_GROUP"));
				iLocal_582 = 14;
			}
			break;
		case 14:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1177);
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false), 1f) > 0)
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false), 3.5f, -1, 28928, 2f);
			}
			if (!__LIB_0__::func_27(iLocal_979, 4))
			{
				__LIB_2__::func_45(0, Global_35, 3000);
			}
			else
			{
				__LIB_2__::func_45(0, iLocal_1041[1], 3000);
			}
			if (PED::GET_MOUNT(iLocal_1041[5]) != iLocal_1041[7] && __LIB_2__::func_1(iLocal_1041[7], 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_1041[7], 20000, -1, 1f, 1, 0, 0);
			}
			__LIB_1__::func_474(iLocal_1041[5], &iLocal_1177, 0, 0, 1, 1);
			func_198();
			iLocal_582 = 15;
			break;
		case 15:
			if (__LIB_2__::func_227(0, 1, iLocal_1041[5], 1))
			{
				__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_CAMP_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_582 = 16;
			}
			break;
		case 16:
			if (__LIB_2__::func_227(0, 1, iLocal_1041[5], 1))
			{
				if (!__LIB_0__::func_27(iLocal_985, 2048))
				{
					if (__LIB_0__::func_27(iLocal_979, 16384))
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LEAVE_BOTH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LEAVE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iLocal_582 = 17;
			}
			break;
		case 17:
			func_199();
			if (!__LIB_2__::func_1(iLocal_1041[6], 0, 1) || func_200())
			{
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[4], false);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[5], false);
				func_69(0, 1);
				func_70(0, 1);
				func_58();
				iLocal_582 = 18;
			}
			break;
		case 18:
			func_199();
			if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_1041[4]) && __LIB_0__::func_665(Global_35, iLocal_1041[4], 1, 1) > 50f) && ENTITY::DOES_ENTITY_EXIST(iLocal_1041[5])) && __LIB_0__::func_665(Global_35, iLocal_1041[5], 1, 1) > 50f) || (__LIB_0__::func_27(iLocal_957, 256) && __LIB_0__::func_27(iLocal_957, 64)))
			{
				iLocal_1041[4] = 0;
				iLocal_1041[5] = 0;
				return true;
			}
			break;
	}
	return false;
}

bool func_49()
{
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (!Local_85.f_46)
		{
			if (__LIB_0__::func_94(Global_35, vLocal_1001, 1) > 100f)
			{
				if (Local_1223.f_9)
				{
					__LIB_2__::func_504(iLocal_1041[4], 0);
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "CHALLENGE_THREATEN_AGAIN", "", -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				return true;
			}
		}
		else if (__LIB_0__::func_27(iLocal_979, 524288))
		{
			if (__LIB_4__::func_14(vLocal_1001, 50f) && PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_58()
{
	if (__LIB_0__::func_27(iLocal_979, 64))
	{
		__LIB_0__::func_8(&Global_1935630, 4);
		__LIB_1__::func_681(&iLocal_979, 64);
	}
}

void func_60()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[4]))
	{
		Local_607.f_7 = 0;
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_1041[4], &Local_607);
	}
}

void func_63()
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1220, joaat("REL_GANG_DUTCHS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("REL_GANG_DUTCHS"), iLocal_1220);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1220, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_1220);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1220, iLocal_1222);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1222, iLocal_1220);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1221, joaat("REL_GANG_DUTCHS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("REL_GANG_DUTCHS"), iLocal_1221);
}

void func_64()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		__LIB_2__::func_353(&(uLocal_1092[iVar0]), 1);
		iVar0++;
	}
}

void func_67(bool bParam0)
{
	if (Local_85.f_51.f_4 == 0)
	{
		if (bParam0)
		{
			if (__LIB_0__::func_27(iLocal_979, 8))
			{
				__LIB_4__::func_193(880);
			}
		}
		else
		{
			__LIB_3__::func_229(880);
			__LIB_1__::func_683(&iLocal_979, 8);
		}
	}
}

void func_68()
{
	int iVar0;
	Local_14.f_12 = __LIB_1__::func_149(1);
	iVar0 = 0;
	while (iVar0 < Local_14.f_12)
	{
		if (__LIB_2__::func_1(Local_14.f_4[iVar0], 0, 1))
		{
			if (!PED::IS_PED_IN_GROUP(Local_14.f_4[iVar0]))
			{
				func_233(Local_14.f_4[iVar0], 0);
			}
		}
		iVar0++;
	}
}

void func_69(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[7]) && PED::_GET_RIDER_OF_MOUNT(iLocal_1041[7], false) == 0)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[7], false);
	}
	if (__LIB_2__::func_1(iLocal_1041[5], 0, 1))
	{
		__LIB_4__::func_705(iLocal_547, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[5], false);
		if (bParam1)
		{
			func_234(iLocal_1041[5], 8);
		}
	}
	func_155(iLocal_1041[5], iLocal_547, 1);
	__LIB_2__::func_593(&(Local_632[5 /*21*/]), &Local_905);
	__LIB_1__::func_683(&iLocal_957, 64);
	if (__LIB_5__::func_795(iLocal_547))
	{
		__LIB_1__::func_640(iLocal_547);
	}
	__LIB_1__::func_774(iLocal_547, 0, bParam0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
}

void func_70(bool bParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iLocal_1041[4], 0, 1))
	{
		if (__LIB_0__::func_27(iLocal_979, 2097152))
		{
			COMPANION::_0x1740E3DEE0AE4D27(iLocal_1041[4], iLocal_1137);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[4], false);
		if (bParam1)
		{
			func_234(iLocal_1041[4], 8);
		}
		if (__LIB_0__::func_27(iLocal_979, 16))
		{
			PED::_0x73B6F907B913C860(iLocal_1041[4], fLocal_1028);
		}
	}
	func_155(iLocal_1041[4], iLocal_548, 1);
	__LIB_2__::func_593(&(Local_632[4 /*21*/]), &Local_801);
	__LIB_1__::func_683(&iLocal_957, 256);
	if (__LIB_5__::func_795(iLocal_548))
	{
		__LIB_1__::func_640(iLocal_548);
	}
	__LIB_1__::func_774(iLocal_548, 0, bParam0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		__LIB_3__::func_604(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_120(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_248(uParam0->f_3, uParam0->f_185);
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
		func_249(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_75()
{
	Local_574.f_4 = "script@beat@wilderness@posseBreakout@intro";
	Local_574.f_5 = "script@beat@wilderness@posseBreakout@resolution";
}

void func_76()
{
	Local_279[5 /*32*/].f_6 = { -1.84f, 0.26f, -0.2f };
	Local_279[0 /*32*/].f_6 = { -0.81f, -1.58f, 1.39f };
	Local_279[1 /*32*/].f_6 = { 0.61f, 1.57f, 0.23f };
	Local_279[2 /*32*/].f_6 = { 0.57f, -2.53f, -0.1f };
	Local_279[2 /*32*/].f_9 = 90f;
	Local_279[3 /*32*/].f_6 = { 3.74f, -3.3f, -0.23f };
	Local_279[3 /*32*/].f_9 = 90f;
	Local_279[4 /*32*/].f_6 = { -5.17f, -3.58f, 0.11f };
}

void func_77()
{
	Local_549[0 /*12*/].f_7 = joaat("S_FOOTLOCKERMUD02X");
	Local_549[0 /*12*/] = { 3.58f, 1.54f, -0.22f };
	Local_549[0 /*12*/].f_3 = 305f;
	Local_549[0 /*12*/].f_11 = 4;
	Local_549[0 /*12*/].f_10 = 1;
	Local_549[1 /*12*/].f_7 = joaat("S_ROPEHOGTIEHANDSMEDIUM01X");
	Local_549[1 /*12*/] = { -0.25f, 0f, 0f };
	Local_549[1 /*12*/].f_3 = 0f;
	Local_549[1 /*12*/].f_11 = 2;
	Local_549[1 /*12*/].f_10 = 1;
}

void func_79()
{
	StringCopy(&(Local_279[4 /*32*/].f_23), "Javier", 64);
	StringCopy(&(Local_279[5 /*32*/].f_23), "Bill", 64);
	Local_279[0 /*32*/].f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	Local_279[0 /*32*/] = 4;
	StringCopy(&(Local_279[0 /*32*/].f_23), "0746_G_M_M_BountyHunters_01_WHITE_08", 64);
	Local_279[0 /*32*/].f_3 = 4613714;
	__LIB_3__::func_303(&(Local_279[0 /*32*/].f_22));
	Local_279[1 /*32*/].f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	Local_279[1 /*32*/] = 4;
	StringCopy(&(Local_279[1 /*32*/].f_23), "0745_G_M_M_BountyHunters_01_WHITE_07", 64);
	Local_279[1 /*32*/].f_3 = -831552859;
	__LIB_3__::func_303(&(Local_279[1 /*32*/].f_22));
	Local_279[2 /*32*/].f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	Local_279[2 /*32*/] = 4;
	Local_279[2 /*32*/].f_3 = 967399703;
	__LIB_3__::func_303(&(Local_279[2 /*32*/].f_22));
	Local_279[3 /*32*/].f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	Local_279[3 /*32*/] = 4;
	Local_279[3 /*32*/].f_3 = 1208251853;
	__LIB_3__::func_303(&(Local_279[3 /*32*/].f_22));
}

void func_81()
{
	Local_78[0 /*2*/] = "script_re@posse_breakout";
	Local_78[1 /*2*/] = "VEH_HORSEBACK@SEAT_SADDLE@CHARACTER@ARTHUR@FIDGET@NORMAL@IDLE";
	Local_78[1 /*2*/].f_1 = "look_around_04";
	__LIB_3__::func_318(Local_78[0 /*2*/], &uLocal_53);
	__LIB_3__::func_318(Local_78[1 /*2*/], &uLocal_53);
}

void func_82(var uParam0)
{
	StringCopy(&(uParam0->f_11), "RE_PBR_UNI_V1_SPOT", 64);
	uParam0->f_8 = 3f;
	uParam0->f_39 = 1;
	uParam0->f_36 = "script_re@posse_breakout";
	uParam0->f_37 = "line_01_jav";
	uParam0->f_30 = 1;
}

void func_83()
{
	sLocal_991[1] = "pblDialogue";
	sLocal_991[5] = "pblBreakout";
	sLocal_991[7] = "pblBreakoutEarly";
	sLocal_991[0] = "pblCutFreeIdle";
	sLocal_991[2] = "pblCutFreePlayerL02";
	sLocal_991[3] = "pblCutFreePlayerR";
	sLocal_991[4] = "pblCutFreePlayerF";
	sLocal_991[6] = "pblCutFreePunch";
}

int func_98(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
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
				func_105(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
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

int func_99(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_296(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, uParam9, uParam10, uParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_101(vector3 vParam0, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;
	if (*uParam4 != *uParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *uParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *uParam4)
	{
		iParam8 = (*uParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (__LIB_3__::func_354() || !__LIB_3__::func_434(uParam4[iVar0 /*32*/], uParam5[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_105(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_105(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_105(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_109(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		if (__LIB_0__::func_27(iLocal_985, 1))
		{
			return;
		}
	}
	else if (!__LIB_0__::func_27(iLocal_985, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1041[iVar0], bParam0);
		iVar0++;
	}
	if (__LIB_2__::func_1(iLocal_1041[5], 0, 1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1041[5], bParam0);
	}
	if (bParam0)
	{
		if (!__LIB_0__::func_27(iLocal_979, 1))
		{
			__LIB_1__::func_683(&iLocal_979, 1);
		}
	}
	else if (__LIB_0__::func_27(iLocal_979, 1))
	{
		__LIB_1__::func_681(&iLocal_979, 1);
	}
}

void func_120(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_248(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

bool func_130()
{
	if (func_345(&iLocal_1041, &(Local_85.f_5), &iLocal_546, &uLocal_1135, 0, 3, 1))
	{
		return true;
	}
	if (__LIB_4__::func_254(&iLocal_1041, &(Local_85.f_5), &iLocal_546, &uLocal_1136, 0, 3, 1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0) && __LIB_0__::func_27(iLocal_979, 16777216))
	{
		return true;
	}
	return false;
}

void func_132()
{
	if (!__LIB_0__::func_27(iLocal_979, 64))
	{
		__LIB_3__::func_152(49);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_1__::func_683(&iLocal_979, 64);
	}
}

void func_137(int* iParam0, vector3 vParam1)
{
	if (__LIB_0__::func_27(iLocal_979, 16777216))
	{
		if (!Local_85.f_46)
		{
			if (!MAP::DOES_BLIP_EXIST(*iParam0))
			{
				*iParam0 = MAP::_BLIP_ADD_FOR_COORD(408396114, vParam1);
			}
		}
		else
		{
			__LIB_0__::func_325(iParam0);
		}
	}
}

void func_138()
{
	int iVar0;
	int iVar1;
	func_358();
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_582 > 2)
			{
				iLocal_28 = 1;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, iLocal_1041[4], 1))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_1041[4], Local_78[0 /*2*/], "line_01_jav", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_APPROACH_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_1041[4], 1);
				__LIB_1__::func_148(&uLocal_1184);
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (__LIB_2__::func_227(-4f, 1, iLocal_1041[4], 1) && Local_85.f_98[4] < 30f)
			{
				__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_NEWS_REACT_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_1041[4], Local_78[0 /*2*/], "line_02_jav", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_EXPLAIN_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1184);
				iLocal_28 = 4;
			}
			break;
		case 4:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_1041[4], 1))
			{
				__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_PLAYER_REACT_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_28 = 5;
			}
			break;
		case 5:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_PLAYER_REACT_RESP", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_28 = 6;
			}
			break;
		case 6:
			if (__LIB_1__::func_313(&uLocal_1184, 0.5f) && !__LIB_0__::func_27(iLocal_979, 4096))
			{
				__LIB_1__::func_683(&iLocal_979, 4096);
			}
			if (__LIB_0__::func_27(iLocal_979, 16384))
			{
				__LIB_1__::func_148(&uLocal_1184);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_1041[4], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 3, 0);
				iLocal_28 = 7;
			}
			else if (func_361())
			{
				iLocal_28 = 9;
			}
			if (!__LIB_0__::func_27(iLocal_979, 16384))
			{
				if (func_362())
				{
					__LIB_1__::func_683(&iLocal_979, 256);
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_1184) > 1.5f || __LIB_0__::func_27(iLocal_985, 131072))
			{
				if (func_363(&uLocal_1119, iLocal_1041[4], iLocal_1041[6], Global_35, vLocal_1001, 20f, 30f, 2f, 65f, 1.75f, 55f, 1.5f, -1) || __LIB_0__::func_27(iLocal_979, 16777216))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1041[4], true, false);
					PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
					__LIB_1__::func_681(&iLocal_957, 2);
					func_364(iLocal_1041[4]);
					iLocal_28 = 8;
				}
				else if (func_361())
				{
					iLocal_28 = 9;
				}
			}
			break;
		case 8:
			if (!Local_85.f_46)
			{
				if (PED::GET_MOUNT(iLocal_1041[4]) == 0)
				{
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1169))
					{
						iLocal_1169 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLSPHERE"), ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false), 0f, 0f, 0f, 1f, 1f, 1f);
						PED::_0x7C00CFC48A782DC0(iLocal_1169, iLocal_1041[4], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					}
				}
			}
			else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1169))
			{
				__LIB_0__::func_172(iLocal_1169);
			}
			if (func_187())
			{
				__LIB_4__::func_719(iLocal_548, 1, 0, 1, 1, 1);
				iLocal_28 = 12;
			}
			else if (!__LIB_0__::func_27(iLocal_979, 33554432) && Local_85.f_46)
			{
				iVar1 = PED::_0xCD66FEA29400A0B5(Global_35);
				if ((iVar1 != 0 && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), joaat("REL_PLAYER_ENEMY"));
				}
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_1041[4], Global_36, 50f, 0, 16);
				__LIB_4__::func_719(iLocal_548, 1, 0, 1, 1, 0);
				__LIB_1__::func_683(&iLocal_979, 33554432);
			}
			else if (!Local_85.f_46)
			{
				if (__LIB_0__::func_27(iLocal_979, 16384))
				{
					func_366(Global_35);
				}
				else
				{
					func_366(0);
				}
			}
			else if (func_190(0))
			{
				if (PED::_0x7F9B9791D4CB71F6(iLocal_1041[4], iLocal_1041[1], false, 0) == 1)
				{
					if (__LIB_0__::func_665(iLocal_1041[4], iLocal_1041[1], 1, 1) < 6f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1073489615, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1073489615, true) != 0)
						{
							__LIB_4__::func_719(iLocal_548, 0, 0, 1, 1, 0);
							TASK::CLEAR_PED_TASKS(iLocal_1041[4], true, false);
							TASK::TASK_AIM_AT_ENTITY(iLocal_1041[4], iLocal_1041[1], -1, 0, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1207174364, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1207174364, true) != 0)
					{
						__LIB_4__::func_719(iLocal_548, 0, 0, 1, 1, 0);
						TASK::CLEAR_PED_TASKS(iLocal_1041[4], true, false);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1041[4], iLocal_1041[1], iLocal_1041[1], 1f, 0, 5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					}
				}
			}
			break;
		case 9:
			if (func_363(&uLocal_1119, iLocal_1041[4], iLocal_1041[6], 0, vLocal_1001, 20f, 30f, 2.001f, 65f, 1.501f, 55f, 1.5f, -1))
			{
				TASK::CLEAR_PED_TASKS(iLocal_1041[4], true, false);
				func_364(iLocal_1041[4]);
				iLocal_28 = 8;
			}
			else
			{
				func_366(0);
			}
			func_367();
			break;
		case 10:
			if (Local_85.f_46)
			{
				if (!func_187())
				{
					if (!__LIB_0__::func_27(iLocal_979, 262144))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], 1120685857, true) != 1)
						{
							PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_1041[4], 35f);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_1041[4], vLocal_1001, 35f, 0, 16);
						}
					}
					else
					{
						func_368(iLocal_1041[4], iLocal_1041[1]);
						iLocal_28 = 11;
					}
				}
				else
				{
					iLocal_28 = 12;
				}
			}
			break;
		case 11:
			if (!__LIB_2__::func_1(iLocal_1041[1], 0, 1))
			{
				iLocal_28 = 13;
			}
			else if (PED::_0x7F9B9791D4CB71F6(iLocal_1041[4], iLocal_1041[1], false, 0) == 1 && __LIB_0__::func_665(iLocal_1041[4], iLocal_1041[1], 1, 1) < 6f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1073489615, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1073489615, true) != 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_1041[4], true, false);
					TASK::TASK_AIM_AT_ENTITY(iLocal_1041[4], iLocal_1041[1], -1, 0, 0);
				}
			}
			break;
		case 12:
			if (func_187())
			{
				if (!__LIB_0__::func_27(iLocal_979, 32768) && !__LIB_0__::func_27(iLocal_979, 524288))
				{
					if (!__LIB_0__::func_75(&uLocal_1190))
					{
						__LIB_1__::func_148(&uLocal_1190);
					}
					else if (__LIB_0__::func_265(&uLocal_1190) > 15f || func_369())
					{
						if (!__LIB_0__::func_86(vLocal_1030))
						{
							if ((((__LIB_0__::func_94(Global_35, vLocal_1030, 1) > __LIB_0__::func_94(iLocal_1041[4], vLocal_1030, 1) && __LIB_2__::func_227(0, 1, iLocal_1041[5], 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[5], joaat("SCRIPT_TASK_LOOT_ENTITY"), true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[5], joaat("SCRIPT_TASK_LOOT_NEAREST_ENTITY"), true) != 1) && __LIB_0__::func_94(iLocal_1041[4], vLocal_1030, 1) < 15f)
							{
								__LIB_4__::func_719(iLocal_548, 0, 1, 1, 1, 0);
								func_370();
								__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_SAVE_POSSE", __LIB_1__::func_464(iLocal_548, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_28 = 13;
							}
							else
							{
								func_372();
							}
						}
					}
				}
				else
				{
					__LIB_4__::func_719(iLocal_548, 0, 1, 1, 1, 0);
					func_373();
					iLocal_28 = 15;
				}
			}
			break;
		case 13:
			if (!__LIB_0__::func_27(iLocal_979, 32768))
			{
				if (func_374(&Local_1059, 106))
				{
					func_375();
					__LIB_1__::func_683(&iLocal_979, 65536);
					if (__LIB_2__::func_227(0, 1, iLocal_1041[5], 1))
					{
						if (!__LIB_0__::func_27(iLocal_979, 16384))
						{
							__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_SOLO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					iLocal_28 = 14;
				}
			}
			else
			{
				iLocal_28 = 12;
			}
			break;
		case 14:
			if (!__LIB_0__::func_27(iLocal_979, 524288) && !__LIB_0__::func_27(iLocal_979, 32768))
			{
				func_194(iLocal_1041[4]);
			}
			else
			{
				__LIB_4__::func_719(iLocal_548, 0, 1, 1, 1, 0);
				func_373();
				iLocal_28 = 15;
			}
			break;
		case 15:
			if ((__LIB_2__::func_1(iLocal_1041[4], 0, 1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)) && (ANIMSCENE::_0x005E6F28DD7ED58D(Local_574.f_1, "pedPlayer") || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1041[4], -1)))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_1041[4], 252, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[4], true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
				if (__LIB_2__::func_1(iLocal_1041[6], 0, 1))
				{
					TASK::TASK_GO_TO_ENTITY(0, iLocal_1041[6], 40000, 2f, 1.5f, 2f, 0);
					TASK::TASK_MOUNT_ANIMAL(0, iLocal_1041[6], 20000, -1, 1.5f, 1, 0, 0);
				}
				__LIB_1__::func_474(iLocal_1041[4], &iVar0, 0, 0, 1, 1);
				PED::_0x931B241409216C1F(iLocal_1041[4], iLocal_1041[6], 0);
				if (__LIB_2__::func_1(iLocal_1041[6], 0, 1) && PED::_GET_RIDER_OF_MOUNT(iLocal_1041[6], false) == 0)
				{
					func_189(0);
				}
				iLocal_28 = 16;
			}
			break;
		case 16:
			if ((__LIB_2__::func_1(iLocal_1041[6], 0, 1) && PED::GET_MOUNT(iLocal_1041[4]) == iLocal_1041[6]) || !__LIB_2__::func_1(iLocal_1041[6], 0, 1))
			{
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[4], false);
				func_70(0, 1);
				iLocal_28 = 17;
			}
			else if (__LIB_2__::func_1(iLocal_1041[6], 0, 1))
			{
				if (__LIB_0__::func_665(iLocal_1041[4], iLocal_1041[6], 1, 1) < 15f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[6], 1435919172, true) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_1041[6], true, false);
					}
				}
			}
			break;
		case 17:
			break;
	}
}

void func_139()
{
	if (func_376())
	{
		func_377();
		func_378();
	}
}

void func_140()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_379(iVar0);
		iVar0++;
	}
	if (__LIB_2__::func_1(iLocal_1041[5], 0, 1))
	{
		switch (iLocal_981)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_THREAT_B")))
				{
					__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[1], "RE_PBR_UNI_V1_THREAT_B", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_3__::func_277(1533346259, vLocal_1001, 1);
					iLocal_981++;
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_HELL_B")))
				{
					__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[1], "RE_PBR_UNI_V1_HELL_B", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_981++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_GRUNT_SMACK_B")))
				{
					__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[1], "RE_PBR_UNI_V1_GRUNT_SMACK_B", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_981++;
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}
	if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
	{
		switch (iLocal_983)
		{
			case 0:
				if (Local_85.f_46)
				{
					iLocal_983++;
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], joaat("RE_PBR_UNI_V1_MOCK")))
					{
						__LIB_2__::func_478(iLocal_1041[1], iLocal_1041[5], "RE_PBR_UNI_V1_MOCK", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], joaat("RE_PBR_UNI_V1_SHERIFF")))
					{
						__LIB_2__::func_478(iLocal_1041[1], iLocal_1041[5], "RE_PBR_UNI_V1_SHERIFF", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], joaat("RE_PBR_UNI_V1_SURRENDER_PUNCH")))
				{
					__LIB_2__::func_478(iLocal_1041[1], iLocal_1041[5], "RE_PBR_UNI_V1_SURRENDER_PUNCH", "", (70f / 2f), 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_983++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], joaat("RE_PBR_UNI_V1_CUTFREE_PUNCH")))
				{
					__LIB_2__::func_478(iLocal_1041[1], iLocal_1041[5], "RE_PBR_UNI_V1_CUTFREE_PUNCH", "", (70f / 2f), 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_983++;
				}
				break;
			case 3:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], joaat("RE_PBR_UNI_V1_APOLOGIZE_PUNCH")))
				{
					__LIB_2__::func_478(iLocal_1041[1], iLocal_1041[5], "RE_PBR_UNI_V1_APOLOGIZE_PUNCH", "", (70f / 2f), 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_983++;
				}
				break;
			case 4:
				break;
		}
	}
	if (__LIB_2__::func_1(iLocal_1041[0], 0, 1))
	{
		switch (iLocal_982)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[0], joaat("RE_PBR_UNI_V1_LAUGH")))
				{
					__LIB_2__::func_478(iLocal_1041[0], iLocal_1041[5], "RE_PBR_UNI_V1_LAUGH", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_982++;
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[0], joaat("RE_PBR_UNI_V1_IMPATIENT")))
				{
					__LIB_2__::func_478(iLocal_1041[0], iLocal_1041[5], "RE_PBR_UNI_V1_IMPATIENT", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_982++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[0], joaat("RE_PBR_UNI_V1_SHERIFF")))
				{
					__LIB_2__::func_478(iLocal_1041[0], iLocal_1041[5], "RE_PBR_UNI_V1_SHERIFF", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_982++;
				}
				break;
			case 3:
				if (!Local_85.f_46)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[0], joaat("RE_PBR_UNI_V1_SHERIFF")))
					{
						__LIB_2__::func_478(iLocal_1041[0], iLocal_1041[5], "RE_PBR_UNI_V1_LAUGHEND", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_982++;
					}
				}
				break;
			case 4:
				break;
		}
	}
}

void func_141()
{
	vector3 vVar0;
	vector3 vVar3;
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(vLocal_1001, 10f);
	if (!Local_85.f_46)
	{
		if (__LIB_2__::func_1(iLocal_1041[2], 0, 1))
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1171))
			{
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, Local_279[2 /*32*/].f_6) };
				__LIB_3__::func_409(&vVar0, 2f);
				iLocal_1171 = __LIB_2__::func_944(iLocal_978, vVar0, (fLocal_1010 + Local_279[2 /*32*/].f_9), 0, 0, 1);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[2], -76381094, true) != 1)
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_1041[2], iLocal_1171, 0, -1, false, true, 0, false, -1f, false);
				}
			}
		}
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1170))
		{
			vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, Local_279[3 /*32*/].f_6) };
			__LIB_3__::func_409(&vVar3, 2f);
			iLocal_1170 = __LIB_2__::func_944(iLocal_977, vVar3, (fLocal_1010 + Local_279[3 /*32*/].f_9), 0, 0, 1);
			if (__LIB_2__::func_1(iLocal_1041[3], 0, 1))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_1041[3], iLocal_1170, 0, -1, false, true, 0, false, -1f, false);
			}
		}
	}
}

void func_142()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_979, 67108864))
	{
		if (__LIB_0__::func_27(iLocal_979, 262144))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], 1793185209))
			{
				iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_1041[1], 0);
				ENTITY::DETACH_ENTITY(iVar0, true, true);
			}
			if (__LIB_2__::func_1(iLocal_1041[1], 0, 1) && PED::_IS_PED_LASSOED(iLocal_1041[1]))
			{
				func_382();
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(iLocal_1050[1]))
	{
		if (!__LIB_2__::func_1(iLocal_1041[1], 0, 1))
		{
			__LIB_0__::func_325(&(iLocal_1050[1]));
		}
		else if (Local_85.f_98[1] > 100f)
		{
			if (!__LIB_4__::func_117(iLocal_1041[1], 100f, 0))
			{
				__LIB_3__::func_608(iLocal_1041[1]);
				__LIB_1__::func_864(iLocal_1041[1], 0, 0);
			}
		}
	}
}

void func_143()
{
	if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[1], -474540600))
		{
			__LIB_1__::func_864(iLocal_1041[1], 1, 0);
		}
	}
}

void func_144()
{
	if (iLocal_582 <= 0 || __LIB_0__::func_27(iLocal_957, 64))
	{
		return;
	}
	if (iLocal_958[5] > 0)
	{
		iLocal_967[5] = func_387(&(iLocal_1041[5]), &(Local_632[5 /*21*/]), 20f, &Local_905, &(Local_85.f_192), 0, 1, 0, "", __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_958[5])
	{
		case 0:
			__LIB_2__::func_602(&(Local_905[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_905[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_905[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_905[1 /*17*/]), 0, 0);
			iLocal_958[5] = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_979, 131072) && iLocal_582 > 15)
			{
				__LIB_2__::func_602(&(Local_905[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_905[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_905[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_905[1 /*17*/]), 0, 0);
				iLocal_958[5] = 6;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			break;
		case 7:
			if (__LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_ILO_BILL_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_958[5] = 8;
			}
			break;
		case 8:
			if (__LIB_2__::func_227(-2f, 1, iLocal_1041[5], 0))
			{
				__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_ILO_BILL_END_LEAVE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_958[5] = 9;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(-2f, 1, iLocal_1041[5], 0))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[5], "RE_PBR_UNI_V1_ILO_BILL_END_LEAVE_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_958[5] = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_145(float fParam0)
{
	vector3 vVar0;
	if (Local_85.f_46 && iLocal_582 < 17)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false) };
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar0, fParam0) > 0)
		{
			FIRE::STOP_FIRE_IN_RANGE(vVar0, fParam0);
		}
	}
}

void func_146()
{
	if (__LIB_2__::func_1(iLocal_1041[5], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_979, 524288))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], -8421132))
			{
				if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1041[1]);
				}
				func_189(0);
				__LIB_1__::func_748(&(Local_85.f_162), 1, 1);
				__LIB_1__::func_683(&iLocal_979, 524288);
			}
		}
	}
}

void func_147()
{
	if (!__LIB_0__::func_27(iLocal_985, 1))
	{
		if (Local_1223.f_9 == 1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("REWPB_START");
			__LIB_1__::func_683(&iLocal_985, 1);
		}
	}
	if (!__LIB_0__::func_27(iLocal_985, 2))
	{
		if (__LIB_0__::func_27(iLocal_979, 16384))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("REWPB_HELP");
			__LIB_1__::func_683(&iLocal_985, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_985, 4))
	{
		if (__LIB_0__::func_27(iLocal_979, 128))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("REWPB_ABANDON");
			__LIB_1__::func_683(&iLocal_985, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_985, 8))
	{
		if (Local_85.f_46)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("REWPB_ATTACKED");
			__LIB_1__::func_683(&iLocal_985, 8);
		}
	}
	if (!__LIB_0__::func_27(iLocal_985, 16))
	{
		if (func_187())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("REWPB_COMPLETE");
			__LIB_1__::func_683(&iLocal_985, 16);
		}
	}
}

void func_148()
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_27(iLocal_979, 1024))
	{
		return;
	}
	if (__LIB_0__::func_86(vLocal_1001))
	{
		return;
	}
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_1001, joaat("PROP_HITCHINGPOST"), 10f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true) };
		iLocal_1165 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar1, 0f, 0f, 0f, 12f, 12f, 12f, "RE_PBR_HITCH");
		uLocal_1173 = PED::_0x4C39C95AE5DB1329(iLocal_1165, false, 15);
		__LIB_1__::func_391(iLocal_1165, 0, 0, 10208);
		__LIB_1__::func_683(&iLocal_979, 1024);
	}
}

void func_149()
{
	if (__LIB_0__::func_27(iLocal_979, 131072) || __LIB_0__::func_27(iLocal_979, 32768))
	{
		return;
	}
	if (__LIB_0__::func_86(vLocal_1156))
	{
		vLocal_1156 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -0.970239f, 0.348818f, 1f) };
		__LIB_3__::func_409(&vLocal_1156, 1088421888 /* Float: 7f */);
	}
	else if (__LIB_0__::func_86(vLocal_1159))
	{
		vLocal_1159 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -2.139175f, -0.437571f, 1f) };
		__LIB_3__::func_409(&vLocal_1159, 1088421888 /* Float: 7f */);
	}
	else if (__LIB_0__::func_86(vLocal_1162))
	{
		vLocal_1162 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -2.089894f, 1.097671f, 1f) };
		__LIB_3__::func_409(&vLocal_1162, 1088421888 /* Float: 7f */);
	}
	if ((!__LIB_0__::func_86(vLocal_1156) && !__LIB_0__::func_86(vLocal_1159)) && !__LIB_0__::func_86(vLocal_1162))
	{
		vLocal_1030 = { vLocal_1162 };
	}
}

void func_150()
{
	vector3 vVar0;
	if (iLocal_987 >= 24)
	{
		return;
	}
	switch (iLocal_987)
	{
		case 0:
			__LIB_3__::func_585(&(uLocal_1092[0]), vLocal_1001, 1.5f);
			iLocal_987++;
			break;
		case 1:
			__LIB_3__::func_337(&(uLocal_1092[1]), vLocal_1001, 2.3f);
			iLocal_987++;
			break;
		case 2:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -1.7f, 2.92f, 0.14f) };
			__LIB_2__::func_659(&(uLocal_1092[2]), vVar0, 1f, 0, 1);
			iLocal_987++;
			break;
		case 3:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 0.53f, -4.35f, 0.15f) };
			__LIB_2__::func_659(&(uLocal_1092[3]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 4:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -2.26f, -4.12f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[4]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 5:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 4.09f, 0.23f, -0.01f) };
			__LIB_2__::func_659(&(uLocal_1092[5]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 6:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 5.64f, -3.85f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[6]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 7:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 5.08f, -6.02f, 0.09f) };
			__LIB_2__::func_659(&(uLocal_1092[7]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 8:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 6.13f, -0.23f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[8]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 9:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 1.93f, 3.81f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[9]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 10:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -4.37f, 0.46f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[10]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 11:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -0.04f, 4.48f, 0.04f) };
			__LIB_2__::func_659(&(uLocal_1092[11]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 12:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 3.52f, 3.58f, 0.11f) };
			__LIB_2__::func_659(&(uLocal_1092[12]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 13:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 2.12f, 2.46f, 0.08f) };
			__LIB_2__::func_659(&(uLocal_1092[13]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 14:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 3.34f, 1.41f, 0.04f) };
			__LIB_2__::func_659(&(uLocal_1092[14]), vVar0, 1f, 0, 1);
			iLocal_987++;
			break;
		case 15:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -1.59f, -2.2f, -0.05f) };
			__LIB_2__::func_659(&(uLocal_1092[15]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 16:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 4.39f, -7.61f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[16]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 17:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -0.1f, 1.04f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[17]), vVar0, 1f, 0, 1);
			iLocal_987++;
			break;
		case 18:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 0.52f, -2.89f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[18]), vVar0, 1.06f, 0, 1);
			iLocal_987++;
			break;
		case 19:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 1.55f, -4.03f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[19]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 20:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 0.88f, 5.58f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[20]), vVar0, 1.5f, 0, 1);
			iLocal_987++;
			break;
		case 21:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -0.36f, 2.4f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[21]), vVar0, 1.5f, 0, 0);
			iLocal_987++;
			break;
		case 22:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, 2.45f, -1.26f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[22]), vVar0, 1.5f, 0, 0);
			iLocal_987++;
			break;
		case 23:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -0.44f, -4.1f, 0f) };
			__LIB_2__::func_659(&(uLocal_1092[23]), vVar0, 1.5f, 0, 0);
			iLocal_987++;
			break;
	}
}

void func_154()
{
	__LIB_3__::func_558(&iLocal_1167, Local_85.f_51, 0f, 0f, 0f, 45f, 45f, 45f, "m_volPredator");
	POPULATION::_0xB56D41A694E42E86(iLocal_1167, 4096, 0, 0, -1, -1, 0);
	PED::_0x7C00CFC48A782DC0(iLocal_1167, iLocal_1041[4], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	__LIB_0__::func_707(iParam1, bParam2, 1, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 448, !bParam2);
	AUDIO::STOP_PED_SPEAKING(iParam0, !bParam2);
}

bool func_158()
{
	if (((__LIB_0__::func_94(Global_35, vLocal_1001, 1) < 200f || __LIB_0__::func_94(iLocal_1041[4], Local_85.f_51, 1) > 150f) || (!__LIB_0__::func_86(vLocal_1033) && __LIB_0__::func_94(Global_35, vLocal_1033, 1) > 100f)) || func_400())
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1041[4]))
		{
			if (Local_1223.f_9)
			{
				func_401();
			}
			if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_279[0 /*32*/].f_1, ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false), true))
			{
				func_70(0, 1);
			}
			else
			{
				func_70(1, 1);
			}
			if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_279[0 /*32*/].f_1, ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false), true))
			{
				func_69(0, 1);
			}
			else
			{
				func_69(1, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_159()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1039))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1039, true, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_160(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_398(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_193(uParam1, iParam5))
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
	if (func_175(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_161()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 3f, 2f, 2f, 0);
	__LIB_1__::func_474(iLocal_1041[4], &iVar0, 0, 0, 1, 1);
}

void func_163(int iParam0, int iParam1, float fParam2)
{
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= fParam2)
	{
		__LIB_4__::func_279(&iParam0, 0, iParam1, 1, 0, 0, 0, 1);
	}
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar0 = PED::GET_MOUNT(iParam0);
	fVar1 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
	if (fVar1 < 30f)
	{
		if (fVar1 > 10f)
		{
			if (iVar0 == 0)
			{
				iVar3 = Global_35;
				fVar2 = 1.5f;
			}
			else
			{
				iVar3 = iVar0;
				fVar2 = 1.25f;
			}
		}
		else if (iVar0 == 0)
		{
			iVar3 = Global_35;
			fVar2 = 1f;
		}
		else
		{
			iVar3 = iVar0;
			fVar2 = 1f;
		}
		if (__LIB_2__::func_1(iVar3, 0, 1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, fVar2);
		}
	}
}

void func_166(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_985, 64))
	{
		if (Local_1223.f_9 || iParam0)
		{
			vLocal_1033 = { Global_36 };
			__LIB_2__::func_315(1891783641, iLocal_1041[4], 1);
			func_173(-89429847, joaat("BLIP_SCM_JAVIER"));
			__LIB_1__::func_683(&iLocal_985, 64);
		}
	}
}

bool func_167(int iParam0, int iParam1, int* iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, float fParam8, float fParam9, bool bParam10, float fParam11)
{
	float fVar0;
	int iVar1;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam1, 0, 1))
	{
		return true;
	}
	if (fParam8 > (fParam9 - 7f))
	{
	}
	if (__LIB_4__::func_252(iParam0, iParam1, uParam4, fParam11))
	{
		uParam4->f_9 = 1;
		__LIB_2__::func_478(iParam0, iParam1, &(uParam4->f_11), &(uParam4->f_20), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (MAP::DOES_BLIP_EXIST(*iParam2))
		{
			__LIB_0__::func_325(iParam2);
		}
		if (bParam10)
		{
			if (uParam4->f_42)
			{
				__LIB_3__::func_719(uParam5, iParam0, 1515458263, 0, 1123024896 /* Float: 120f */, 0, -1, 1);
			}
			else
			{
				*iParam2 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iParam0);
			}
		}
		if (uParam4->f_39)
		{
			if (uParam4->f_40)
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (uParam4->f_40)
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, uParam4->f_36, uParam4->f_37, Global_35, uParam4->f_41, 8f, -4f, 0, 0f, false, true, -1f, 0, 0, -1f);
			}
			else
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, uParam4->f_36, uParam4->f_37, Global_35, uParam4->f_41, 8f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
			}
			if (uParam4->f_7)
			{
				TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, uParam4->f_8, (fParam8 + 2f), 0);
			}
			else
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iParam1, 0f, fParam8, 0.5f, uParam4->f_8, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!uParam5->f_48)
		{
			__LIB_3__::func_426(uParam5, &(uParam5->f_48), uParam5->f_3, &(uParam5->f_51.f_6));
		}
	}
	switch (*uParam3)
	{
		case 0:
			if (!uParam4->f_2 || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < uParam4->f_3)
			{
				__LIB_0__::func_19(uParam3, 1);
			}
			break;
		case 1:
			uParam4->f_29 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
			TASK::_0x42CFD8FD8CC8DC69(iParam0, 1);
			PED::_0xF1C03A5352243A30(iParam0);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 5000, 0, 51, 0);
			if (uParam4->f_28)
			{
				PED::_0x89F5E7ADECCCB49C(iParam0, "INJURED_RIGHT_LEG");
			}
			else if (uParam4->f_38)
			{
				PED::_0x89F5E7ADECCCB49C(iParam0, uParam4->f_35);
			}
			if (uParam4->f_30)
			{
				if (uParam4->f_33)
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, Global_36, fParam8, 3f, 16, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, 3f, 2f, 0);
				}
				__LIB_0__::func_19(uParam3, 2);
			}
			else
			{
				TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, uParam4->f_8, 2f, 0);
				if (uParam4->f_31)
				{
					__LIB_0__::func_19(uParam3, 3);
				}
				else
				{
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_472(iParam0, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < 60f)
			{
				if (uParam4->f_28)
				{
					PED::_0x89F5E7ADECCCB49C(iParam0, "INJURED_RIGHT_LEG");
				}
				else if (uParam4->f_38)
				{
					PED::_0x89F5E7ADECCCB49C(iParam0, uParam4->f_35);
				}
				if (uParam4->f_33)
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, Global_36, fParam8, 3f, 16, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, uParam4->f_8, 2f, 0);
				}
				if (uParam4->f_31)
				{
					__LIB_0__::func_19(uParam3, 3);
				}
				else
				{
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 3:
			if (uParam4->f_9)
			{
				if (uParam4->f_39)
				{
					__LIB_0__::func_19(uParam3, 4);
				}
				else if (__LIB_1__::func_472(iParam0, (fParam9 * 2f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < (fParam9 + 7f))
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, (fParam8 * 0.25f), uParam4->f_8, 2f, 0);
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, uParam4->f_36, uParam4->f_37, 1))
			{
				if (__LIB_1__::func_472(iParam0, (fParam9 * 2f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < (fParam9 + 7f))
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, (fParam8 * 0.5f), uParam4->f_8, 2f, 0);
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 5:
			if (PED::IS_PED_ON_MOUNT(iParam1))
			{
				fVar0 = (fParam9 + ENTITY::GET_ENTITY_SPEED(iParam1));
			}
			else
			{
				fVar0 = ((fParam9 - 7f) + ENTITY::GET_ENTITY_SPEED(iParam1));
			}
			if (uParam4->f_5)
			{
				if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) < uParam4->f_10)
				{
					__LIB_0__::func_19(uParam3, 6);
					*uParam6 = 1;
					return true;
				}
			}
			else if (__LIB_1__::func_472(iParam0, (fVar0 + 1.5f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_2__::func_215(iParam0, iParam1, 0, 4.5f, 0))
			{
				if (uParam4->f_4)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 8000, 0, 51, 0);
					__LIB_2__::func_45(iParam0, iParam1, -1);
				}
				*uParam7 = 1;
				*uParam6 = 1;
				TASK::_0x42CFD8FD8CC8DC69(iParam0, 0);
				__LIB_0__::func_19(uParam3, 6);
				return true;
			}
			break;
		case 6:
			return true;
	}
	if (*uParam3 > 1 && *uParam3 < 6)
	{
		if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) > (uParam4->f_29 + uParam4->f_1))
		{
			TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			TASK::_0x42CFD8FD8CC8DC69(iParam0, 0);
			return true;
		}
	}
	return false;
}

void func_170(bool bParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_979, 134217728))
	{
		return;
	}
	if (PED::IS_PED_FACING_PED(Global_35, iLocal_1041[4], 45f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		if (PED::GET_MOUNT(Global_35) == 0)
		{
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, Local_78[0 /*2*/], "line_01_horse_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, Local_78[0 /*2*/], "line_02_horse_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
			}
		}
		else if (bParam0)
		{
			TASK::TASK_PLAY_ANIM(0, Local_78[0 /*2*/], "line_01_stand_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, Local_78[0 /*2*/], "line_02_stand_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
		__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
	}
	if (bParam0)
	{
		__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_GREET_P_MOUNTED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_GREET_N", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_171(bool bParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(Global_35);
	TASK::TASK_CLEAR_LOOK_AT(iLocal_1041[4]);
	vLocal_1018 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false) };
	if (__LIB_0__::func_27(iLocal_979, 256))
	{
	}
	else
	{
		func_170(0);
	}
	__LIB_1__::func_345();
	__LIB_1__::func_683(&iLocal_979, 128);
	if (bParam0)
	{
		__LIB_3__::func_465(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_1041[4], 0, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_3__::func_465(1, 0, 0, 0, iLocal_1041[4], 0, 1065353216 /* Float: 1f */, 0);
	}
	__LIB_1__::func_148(&uLocal_32);
}

void func_172(bool bParam0)
{
	int iVar0;
	Local_14.f_12 = __LIB_1__::func_149(1);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_12)
		{
			if (__LIB_2__::func_1(Local_14.f_4[iVar0], 0, 1))
			{
				if (!PED::IS_PED_IN_GROUP(Local_14.f_4[iVar0]))
				{
					func_415(Local_14[iVar0], 0);
					func_233(Local_14.f_4[iVar0], 1);
				}
			}
			iVar0++;
		}
	}
}

void func_173(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_1050[4]))
	{
		__LIB_0__::func_325(&(iLocal_1050[4]));
	}
	__LIB_2__::func_73(iLocal_1041[4], &(iLocal_1050[4]), iParam0, 1679075994, iParam1, 0);
}

void func_174()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_549[0 /*12*/].f_8))
	{
		return;
	}
	if (__LIB_3__::func_332(vLocal_1001, 1) < 100f)
	{
		__LIB_3__::func_400(vLocal_1001, &Local_549, fLocal_1010, 0, 0, 0, 0);
		func_417(Local_549[0 /*12*/].f_7, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, Local_549[0 /*12*/]), &(Local_549[0 /*12*/].f_8), 0, 0, joaat("P_DRESSINGLCMHAY01X"));
		__LIB_4__::func_246(Local_549[0 /*12*/].f_7, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, Local_549[0 /*12*/]), &(Local_549[0 /*12*/].f_8), 0, 0, 0);
	}
}

bool func_175(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
				STATS::_0xB2A38826E5886E83(func_248(uParam0->f_3, uParam0->f_185), 0);
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
					STATS::_0xB2A38826E5886E83(func_248(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_181()
{
	if (!__LIB_0__::func_27(iLocal_979, 1048576))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_574) > 0.99f)
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_574);
			func_429();
			__LIB_1__::func_683(&iLocal_979, 1048576);
		}
	}
}

void func_182()
{
	var uVar0[4];
	if (((iLocal_1128[0] && iLocal_1128[1]) && iLocal_1128[2]) && iLocal_1128[3])
	{
		return;
	}
	if (!iLocal_1128[0])
	{
		if (!TASK::GET_IS_TASK_ACTIVE(iLocal_1041[0], 3))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1041[0], Local_574))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1041[0], vLocal_1153, 5f, 0, 0, 0);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_574, "pedBountyA", iLocal_1041[0]);
				TASK::OPEN_SEQUENCE_TASK(&(uVar0[0]));
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vLocal_1001, 100f, 0, 16);
				__LIB_1__::func_474(iLocal_1041[0], &(uVar0[0]), 0, 0, 1, 1);
				iLocal_1128[0] = 1;
				PED::SET_PED_KEEP_TASK(iLocal_1041[0], true);
			}
		}
	}
	if (!iLocal_1128[1])
	{
		if (!TASK::GET_IS_TASK_ACTIVE(iLocal_1041[1], 3))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1041[1], Local_574))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1041[1], vLocal_1150, 1.5f, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1041[1], 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1041[1], 119, true);
				PED::_0x8B1E8E35A6E814EA(iLocal_1041[1], joaat("CLOSECOVERALLOWUNPROTECTED"), -1082130432 /* Float: -1f */);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_574, "pedBountyB", iLocal_1041[1]);
				TASK::OPEN_SEQUENCE_TASK(&(uVar0[1]));
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vLocal_1150, 3000, 0, 0f, 0, 0, iLocal_1176, 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vLocal_1001, 100f, 0, 16);
				__LIB_1__::func_474(iLocal_1041[1], &(uVar0[1]), 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_1041[1], true);
				iLocal_1128[1] = 1;
			}
		}
	}
	if (!iLocal_1128[2])
	{
		if (PED::_0x802092B07E3B1EEA(iLocal_1041[2], Global_36, 3))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1041[2], vLocal_1153, 6.5f, 0, 0, 0);
			PED::_0x2208438012482A1A(iLocal_1041[2], false, false);
			TASK::OPEN_SEQUENCE_TASK(&(uVar0[2]));
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vLocal_1001, 100f, 0, 16);
			__LIB_1__::func_474(iLocal_1041[2], &(uVar0[2]), 0f, 1f, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_1041[2], true);
			iLocal_1128[2] = 1;
		}
	}
	if (!iLocal_1128[3])
	{
		if (PED::_0x802092B07E3B1EEA(iLocal_1041[3], Global_36, 3))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1041[3], vLocal_1153, 6.5f, 0, 0, 0);
			PED::_0x2208438012482A1A(iLocal_1041[3], false, false);
			TASK::OPEN_SEQUENCE_TASK(&(uVar0[3]));
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vLocal_1001, 100f, 0, 16);
			__LIB_1__::func_474(iLocal_1041[3], &(uVar0[3]), 0f, 1f, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_1041[3], true);
			iLocal_1128[3] = 1;
		}
	}
}

void func_184()
{
	if (!__LIB_0__::func_27(iLocal_985, 8192))
	{
		__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_AGGRO_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_683(&iLocal_985, 8192);
	}
}

void func_185()
{
	if (!__LIB_0__::func_75(&uLocal_1205))
	{
		__LIB_1__::func_148(&uLocal_1205);
	}
	else if (func_432(4, &iLocal_1141, fLocal_1142))
	{
	}
	else
	{
		func_432(5, &iLocal_1143, fLocal_1144);
	}
}

void func_186()
{
	int iVar0;
	if (func_187())
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_1208))
	{
		__LIB_1__::func_148(&uLocal_1208);
	}
	else if (__LIB_0__::func_265(&uLocal_1208) > fLocal_1149)
	{
		iVar0 = (BUILTIN::TIMERA() % 4);
		switch (iVar0)
		{
			case 0:
				func_433(0, &uLocal_1145);
				break;
			case 1:
				func_433(1, &uLocal_1146);
				break;
			case 2:
				func_433(2, &uLocal_1147);
				break;
			case 3:
				func_433(3, &uLocal_1148);
				break;
		}
	}
}

bool func_187()
{
	if (((__LIB_2__::func_1(iLocal_1041[0], 0, 1) || (__LIB_2__::func_1(iLocal_1041[1], 0, 1) && !__LIB_0__::func_27(iLocal_979, 67108864))) || __LIB_2__::func_1(iLocal_1041[2], 0, 1)) || __LIB_2__::func_1(iLocal_1041[3], 0, 1))
	{
		return false;
	}
	return true;
}

bool func_188(bool bParam0)
{
	if (bParam0)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574.f_1, true, false))
		{
			if (((ANIMSCENE::_0x23E33CB9F4A3F547(Local_574, sLocal_991[1]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574, sLocal_991[5])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574, sLocal_991[7])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[0]))
			{
				return true;
			}
			else
			{
				func_434(bParam0);
			}
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574.f_1, true, false))
	{
		if ((((ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[0]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[2])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[3])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[4])) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, sLocal_991[6]))
		{
			return true;
		}
		else
		{
			func_434(bParam0);
		}
	}
	return false;
}

void func_189(bool bParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_27(iLocal_979, 8388608))
	{
		if (__LIB_2__::func_1(iLocal_1041[6], 0, 1))
		{
			if (bParam0)
			{
				TASK::TASK_GO_TO_ENTITY(iLocal_1041[6], iLocal_1041[4], 20000, 12f, 1.75f, 20f, 0);
			}
			else
			{
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -7.39f, -3.07f, -0.22f) };
				__LIB_3__::func_409(&vVar0, 1f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1041[6], vVar0, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			__LIB_1__::func_683(&iLocal_979, 8388608);
		}
	}
}

bool func_190(bool bParam0)
{
	if ((__LIB_0__::func_27(iLocal_979, 67108864) || !__LIB_2__::func_1(iLocal_1041[1], 0, 1)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false))
	{
		return false;
	}
	else if ((!__LIB_2__::func_1(iLocal_1041[0], 0, 1) && !__LIB_2__::func_1(iLocal_1041[2], 0, 1)) && !__LIB_2__::func_1(iLocal_1041[3], 0, 1))
	{
		if ((bParam0 && PED::IS_PED_IN_COVER(iLocal_1041[1], false, false)) || !bParam0)
		{
			if (__LIB_0__::func_27(iLocal_979, 536870912))
			{
				__LIB_1__::func_681(&iLocal_979, 536870912);
			}
			return true;
		}
		else
		{
			if (!PED::IS_PED_IN_COVER(iLocal_1041[1], false, false))
			{
			}
			__LIB_1__::func_683(&iLocal_979, 536870912);
		}
	}
	return false;
}

void func_192()
{
	if (!__LIB_0__::func_27(iLocal_979, 67108864))
	{
		if (PED::IS_PED_IN_COVER(iLocal_1041[1], false, false) && func_435(iLocal_1041[1], 0, &(Local_85.f_5), &iLocal_546, 0, 0))
		{
			func_382();
		}
		else if (__LIB_0__::func_27(iLocal_979, 536870912))
		{
			func_382();
		}
	}
}

void func_193()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[1], 1435919172, true) != 1 && iLocal_1128[1])
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vLocal_1150, 3000, 0, 0f, 0, 0, iLocal_1176, 0, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vLocal_1001, 100f, 0, 16);
			__LIB_1__::func_474(iLocal_1041[1], &iVar0, 0, 0, 1, 1);
		}
	}
}

void func_194(int iParam0)
{
	float fVar0;
	if (!func_187())
	{
		return;
	}
	switch (iLocal_1118)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_574.f_1))
			{
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false))
			{
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_574.f_1, "pedKidnapped", &vLocal_595, true, "pblCutFreePlayerL02", 2))
			{
				iLocal_1118 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_574.f_1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_574.f_1, false))
				{
					if (iParam0 == Global_35)
					{
						if (!__LIB_0__::func_27(iLocal_979, 524288) && !__LIB_0__::func_27(iLocal_979, 65536))
						{
							if (__LIB_3__::func_273(&(Local_85.f_162), "RE_PBR_CUT_FREE", vLocal_595, 0, joaat("INPUT_CUT_FREE"), 2.5f, 0, 1, 3, 0, 0, 0, 0, 0, 1, 1, joaat("SHORT_TIMED_EVENT"), 0))
							{
								func_437(iParam0);
								__LIB_3__::func_465(12, 0, 0, 0, iLocal_1041[5], 0, 1065353216 /* Float: 1f */, 0);
								if (iParam0 == Global_35)
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
									PED::SET_PED_CONFIG_FLAG(Global_35, 252, false);
									__LIB_1__::func_683(&iLocal_979, 32768);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iParam0, true, false);
								}
								if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_574.f_1, "pedPlayer", &Local_583, true, &cLocal_45, 2))
								{
									vLocal_1030 = { Local_583 };
									__LIB_3__::func_409(&vLocal_1030, 1f);
									fVar0 = Local_583.f_3.f_2;
								}
								else
								{
									fVar0 = __LIB_3__::func_731(vLocal_1030, ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false));
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
								if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != 0)
								{
									PED::_0xED00D72F81CF7278(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 0, 0);
								}
								func_439(iParam0, vLocal_1030, fVar0);
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_574.f_1, "pedBountyB", iLocal_1041[1]);
								__LIB_1__::func_148(&uLocal_1187);
								iLocal_1118 = 2;
							}
						}
					}
					else if (!__LIB_0__::func_27(iLocal_979, 32768))
					{
						if (func_374(&Local_1059, 106))
						{
							__LIB_1__::func_748(&(Local_85.f_162), 1, 1);
							__LIB_1__::func_148(&uLocal_1187);
							iLocal_1118 = 2;
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775, true) != 1)
						{
							func_437(iParam0);
							PED::SET_PED_CONFIG_FLAG(iParam0, 252, false);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_574.f_1, "pedBountyB", iLocal_1041[1]);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vLocal_1030, 1f, -1, 0.25f, 0, 40000f);
							PED::SET_PED_KEEP_TASK(iParam0, true);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iParam0, true, false);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_979, 524288))
				{
					func_429();
				}
			}
			break;
		case 2:
			if (func_374(&Local_1059, 106) || (__LIB_0__::func_264(&uLocal_1187) > 10f && __LIB_0__::func_27(iLocal_979, 32768)))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_45))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, &cLocal_45))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574.f_1, &cLocal_45, true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_574.f_1, "bAdvanceToBreakout", true, false);
						func_189(0);
						iLocal_1118 = 3;
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, &cLocal_45);
					}
				}
				else
				{
					func_437(iParam0);
				}
			}
			break;
		case 3:
			func_441();
			break;
	}
}

int func_195()
{
	if (__LIB_0__::func_27(iLocal_979, 32768) || __LIB_0__::func_27(iLocal_979, 65536))
	{
		return 0;
	}
	if (func_187())
	{
		switch (iLocal_1133)
		{
			case 0:
				__LIB_1__::func_148(&uLocal_1181);
				iLocal_1133++;
				break;
			case 1:
				if (__LIB_0__::func_265(&uLocal_1181) > 2f && __LIB_2__::func_227(0, 1, iLocal_1041[5], 0))
				{
					__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_SAVE_OK_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1181);
					iLocal_1133++;
				}
				break;
			case 2:
				if (__LIB_0__::func_265(&uLocal_1181) > 4f)
				{
					__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_SAVE_01_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1181);
					iLocal_1133++;
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&uLocal_1181) > 9f && __LIB_2__::func_227(-3f, 1, 0, 0))
				{
					__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_SAVE_02_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1181);
					iLocal_1133++;
				}
				break;
			case 4:
				if (__LIB_0__::func_265(&uLocal_1181) > 11f && __LIB_2__::func_227(BUILTIN::TO_FLOAT(iLocal_1133), 1, 0, 0))
				{
					__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_STRUGGLE_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1181);
					iLocal_1133++;
				}
				break;
			case 5:
				if (__LIB_0__::func_265(&uLocal_1181) > 10f && __LIB_2__::func_227(BUILTIN::TO_FLOAT(iLocal_1133), 1, 0, 0))
				{
					__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_STRUGGLE_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1181);
					iLocal_1133++;
				}
				break;
			case 6:
				if (__LIB_0__::func_265(&uLocal_1181) > 8f && __LIB_2__::func_227(BUILTIN::TO_FLOAT(iLocal_1133), 1, 0, 0))
				{
					__LIB_2__::func_478(iLocal_1041[5], Global_35, "RE_PBR_UNI_V1_STRUGGLE_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1181);
					iLocal_1133++;
				}
				break;
			case 7:
				return 1;
		}
	}
	return 0;
}

void func_198()
{
	if (!__LIB_0__::func_27(iLocal_985, 32768))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1041[4], -1))
		{
			__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[4], func_442(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_1041[5], Global_35, func_442(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_985, 32768);
	}
}

void func_199()
{
	if (!__LIB_0__::func_27(iLocal_985, 8388608))
	{
		if ((__LIB_2__::func_227(0, 1, Global_35, 1) && !__LIB_2__::func_136(iLocal_1041[4], 1)) && !__LIB_2__::func_136(iLocal_1041[5], 1))
		{
			if (((__LIB_2__::func_1(iLocal_1041[5], 0, 1) && Local_85.f_98[5] < 25f) || (__LIB_2__::func_1(iLocal_1041[4], 0, 1) && Local_85.f_98[4] < 25f)) || __LIB_0__::func_94(Global_35, vLocal_1001, 1) < 20f)
			{
				if (!__LIB_0__::func_75(&uLocal_35))
				{
					__LIB_1__::func_148(&uLocal_35);
				}
				else if (__LIB_0__::func_265(&uLocal_35) > 1.5f)
				{
					if (__LIB_0__::func_27(iLocal_979, 16384))
					{
						if (__LIB_0__::func_871())
						{
							__LIB_2__::func_478(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_HELP_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_HELP_LOW", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (__LIB_0__::func_871())
					{
						__LIB_2__::func_478(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_NOHELP_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_NOHELP_LOW", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_985, 8388608);
				}
			}
			else
			{
				__LIB_1__::func_683(&iLocal_985, 8388608);
			}
		}
	}
}

bool func_200()
{
	if (__LIB_2__::func_1(iLocal_1041[7], 0, 1))
	{
		if (PED::GET_MOUNT(iLocal_1041[5]) == iLocal_1041[7])
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

void func_233(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 53, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 83, !bParam1);
}

void func_234(var uParam0, int iParam1)
{
	struct<15> Var0;
	if (iParam1 != 0)
	{
		Var0.f_14 = uParam0;
		Var0 = Global_35;
		Var0.f_7 = __LIB_0__::func_12();
		Var0.f_8 = 0;
		Var0.f_11 = 100;
		Var0.f_12 = iParam1;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
	PED::_0xE737D5F14304A2EC(uParam0, PLAYER::GET_PLAYER_INDEX(), 120000);
}

int func_248(int iParam0, int iParam1)
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
				Jump @3268; //curOff = 2591
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
				Jump @3268; //curOff = 2652
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
				Jump @3268; //curOff = 2699
				return -2018341642;
				Jump @3268; //curOff = 2710
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3268; //curOff = 2743
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3268; //curOff = 2776
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
				Jump @3268; //curOff = 2823
				return -1618254924;
				Jump @3268; //curOff = 2834
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
				Jump @3268; //curOff = 2881
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
				Jump @3268; //curOff = 2928
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3268; //curOff = 2961
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
				Jump @3268; //curOff = 3008
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
				Jump @3268; //curOff = 3055
				return -2137572125;
				Jump @3268; //curOff = 3066
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
				Jump @3268; //curOff = 3113
				return -774894224;
				Jump @3268; //curOff = 3124
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
				Jump @3268; //curOff = 3171
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
				Jump @3268; //curOff = 3232
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
void func_249(int iParam0, int iParam1, int iParam2)
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

int func_296(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_548(iParam1, bParam3, bParam8, uParam9, uParam10, uParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

bool func_345(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_435((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_358()
{
	if (__LIB_0__::func_27(iLocal_957, 256))
	{
		return;
	}
	if (iLocal_958[4] > 0)
	{
		if (__LIB_0__::func_27(iLocal_957, 512))
		{
			iLocal_967[4] = func_387(&(iLocal_1041[4]), &(Local_632[4 /*21*/]), 20f, &Local_801, &(Local_85.f_192), 0, 1, 0, "", __LIB_2__::func_340(2, 0, 0) | 16777216, 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iLocal_967[4] = func_387(&(iLocal_1041[4]), &(Local_632[4 /*21*/]), 20f, &Local_801, &(Local_85.f_192), 0, 1, 0, "", __LIB_2__::func_340(3, 0, 0) | 16777216, 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (iLocal_958[4])
	{
		case 0:
			__LIB_2__::func_593(&(Local_632[4 /*21*/]), &Local_801);
			__LIB_2__::func_602(&(Local_801[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_801[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
			iLocal_958[4] = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_979, 4096))
			{
				__LIB_2__::func_451(&(Local_632[4 /*21*/]), 0);
				__LIB_2__::func_602(&(Local_801[0 /*17*/]), __LIB_2__::func_460(4), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_801[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_801[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_801[1 /*17*/]), 1, 0);
				__LIB_1__::func_683(&iLocal_957, 512);
				iLocal_958[4] = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_979, 256) && !__LIB_0__::func_27(iLocal_979, 134217728))
			{
				switch (iLocal_967[4])
				{
					case 0:
						func_42();
						__LIB_2__::func_451(&(Local_632[4 /*21*/]), 0);
						__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
						__LIB_1__::func_683(&iLocal_957, 2);
						__LIB_1__::func_681(&iLocal_957, 512);
						iLocal_958[4] = 3;
						break;
					case 1:
						__LIB_1__::func_683(&iLocal_979, 128);
						__LIB_2__::func_451(&(Local_632[4 /*21*/]), 0);
						__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
						__LIB_1__::func_681(&iLocal_957, 512);
						iLocal_958[4] = 3;
						break;
				}
			}
			else
			{
				__LIB_2__::func_451(&(Local_632[4 /*21*/]), 0);
				__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
				__LIB_1__::func_681(&iLocal_957, 512);
				iLocal_958[4] = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_75(&uLocal_29))
			{
				__LIB_1__::func_148(&uLocal_29);
			}
			else if (__LIB_0__::func_265(&uLocal_29) > 3f)
			{
				if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_1041[4])))
				{
					__LIB_2__::func_593(&(Local_632[4 /*21*/]), &Local_801);
					__LIB_2__::func_602(&(Local_801[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					if (__LIB_0__::func_27(iLocal_979, 16384))
					{
						__LIB_2__::func_602(&(Local_801[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 1, 0);
					}
					else
					{
						__LIB_2__::func_602(&(Local_801[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
					}
					__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
					iLocal_958[4] = 4;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iLocal_979, 131072) && iLocal_582 > 15)
			{
				__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
				iLocal_958[4] = 5;
			}
			else if (__LIB_0__::func_27(iLocal_957, 2))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (__LIB_2__::func_466(&(Local_801[1 /*17*/]), 1, 0))
					{
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
					}
				}
				else if (!__LIB_2__::func_466(&(Local_801[1 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_801[1 /*17*/]), 1, 0);
				}
				switch (iLocal_967[4])
				{
					case 0:
						break;
					case 1:
						__LIB_1__::func_681(&iLocal_979, 16384);
						__LIB_1__::func_683(&iLocal_979, 128);
						__LIB_1__::func_683(&iLocal_957, 1024);
						func_171(1);
						__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
						__LIB_1__::func_681(&iLocal_957, 2);
						break;
				}
			}
			else
			{
				if (__LIB_2__::func_466(&(Local_801[1 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
				}
				if (!__LIB_0__::func_27(iLocal_957, 2048))
				{
					if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_1041[4])))
					{
						__LIB_2__::func_593(&(Local_632[4 /*21*/]), &Local_801);
						__LIB_2__::func_602(&(Local_801[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_801[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
						__LIB_1__::func_683(&iLocal_957, 2048);
					}
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_75(&uLocal_29))
			{
				__LIB_1__::func_148(&uLocal_29);
			}
			else if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_1041[4])))
			{
				if (__LIB_0__::func_265(&uLocal_29) > 3f)
				{
					__LIB_2__::func_593(&(Local_632[4 /*21*/]), &Local_801);
					__LIB_2__::func_602(&(Local_801[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_801[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					__LIB_2__::func_411(&(Local_801[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_801[1 /*17*/]), 0, 0);
					iLocal_958[4] = 6;
				}
			}
			break;
		case 6:
			break;
		case 7:
			if (__LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_ILO_JAV_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_958[4] = 10;
			}
			break;
		case 10:
			break;
	}
}

bool func_361()
{
	if (__LIB_0__::func_27(iLocal_979, 16384))
	{
		return false;
	}
	if ((__LIB_0__::func_27(iLocal_979, 128) || __LIB_0__::func_27(iLocal_979, 256)) || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (!__LIB_0__::func_75(&uLocal_32))
		{
			__LIB_1__::func_148(&uLocal_32);
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				__LIB_2__::func_462(&uLocal_32, 3f, 1);
				vLocal_1018 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false) };
				__LIB_1__::func_683(&iLocal_979, 134217728);
			}
		}
		else if ((__LIB_0__::func_265(&uLocal_32) > 3f && __LIB_2__::func_227(0, 1, Global_35, 1)) || (__LIB_0__::func_27(iLocal_979, 134217728) && __LIB_0__::func_265(&uLocal_32) > 1f))
		{
			func_618();
			func_25();
			return true;
		}
	}
	return false;
}

bool func_362()
{
	if (__LIB_0__::func_27(iLocal_979, 128))
	{
		return false;
	}
	switch (iLocal_1134)
	{
		case 0:
			if (__LIB_0__::func_75(&uLocal_1178))
			{
				if (__LIB_0__::func_265(&uLocal_1178) > 11f)
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_WAIT", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_1041[4], Local_78[0 /*2*/], "line_03_jav", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
					__LIB_1__::func_148(&uLocal_1178);
					iLocal_1134++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1178);
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_1178) > 10f)
			{
				func_401();
				TASK::TASK_PLAY_ANIM(iLocal_1041[4], Local_78[0 /*2*/], "line_04_jav", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
				__LIB_1__::func_683(&iLocal_979, 256);
				__LIB_1__::func_683(&iLocal_985, 16384);
				__LIB_1__::func_148(&uLocal_1178);
				iLocal_1134++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_1178) > 4f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_363(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (iParam3 != 0 && iParam1 != 0)
	{
		fVar0 = __LIB_0__::func_665(iParam1, iParam3, 1, 1);
		fVar1 = __LIB_0__::func_94(iParam3, vParam4, 0);
	}
	fVar2 = __LIB_0__::func_94(iParam1, vParam4, 0);
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (*uParam0 != 2)
		{
			*uParam0 = 2;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_619())
			{
				if (((iParam3 != 0 && fVar0 <= fParam7) || fVar1 < fVar2) || iParam3 == 0)
				{
					if (__LIB_2__::func_1(iParam2, 0, 1) && PED::GET_MOUNT(iParam1) != iParam2)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 1868526510, true) != 1)
						{
							TASK::TASK_MOUNT_ANIMAL(iParam1, iParam2, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						}
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1000))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sLocal_1000, 0, 1052, -1, 0, 0, -1);
						*uParam0 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, vLocal_1001, fParam11, iParam14, 0.25f, 4, 40000f);
						*uParam0 = 1;
					}
					func_25();
				}
			}
			break;
		case 1:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1039) && func_619())
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				__LIB_2__::func_45(iParam1, iParam3, -1);
				__LIB_2__::func_478(iParam1, Global_35, "RE_PBR_UNI_V1_LOUD_WAIT_FOR_TRAIN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				*uParam0 = 0;
			}
			else
			{
				func_620();
				if (__LIB_2__::func_1(iParam2, 0, 1) && PED::GET_MOUNT(iParam1) != iParam2)
				{
					*uParam0 = 0;
				}
				else if (((fVar0 > (fParam7 + 10f) && fVar1 > fVar2) && __LIB_0__::func_27(iLocal_979, 16384)) && fVar2 > fParam8)
				{
					if (__LIB_2__::func_227(0, 1, iLocal_1041[4], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
					{
						TASK::CLEAR_PED_TASKS(iParam1, true, false);
						__LIB_2__::func_45(iParam1, iParam3, -1);
						func_621();
						*uParam0 = 0;
					}
				}
				else if (fVar2 < fParam8 || (!__LIB_0__::func_86(vLocal_1007) && __LIB_0__::func_94(iParam1, vLocal_1007, 1) < 3f))
				{
					*uParam0 = 3;
				}
				else
				{
					if (__LIB_0__::func_27(iLocal_979, 16384))
					{
						func_622();
					}
					if (fVar2 <= fParam12 || (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)))
					{
						fVar3 = fParam13;
					}
					else if (fVar1 > fParam10 && fVar0 < (fParam7 - 5f))
					{
						fVar3 = fParam9;
					}
					else
					{
						fVar3 = fParam11;
					}
					if (__LIB_2__::func_1(iParam1, 0, 1))
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1000))
						{
							if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam1) != fVar3)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iParam1, fVar3);
							}
						}
						else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1, 0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, fVar3, 0, -1082130432 /* Float: -1f */, 0);
						}
					}
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -2117564886, true) != 1)
				{
					if (iParam1 != Global_35)
					{
						TASK::CLEAR_PED_TASKS(iParam1, true, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(iParam1, 30f);
						TASK::TASK_COMBAT_HATED_TARGETS(iParam1, -1f);
					}
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				*uParam0 = 0;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_364(int iParam0)
{
	int iVar0;
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false), false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 1000);
	TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1024, 1f, -1, 0.25f, 0, fLocal_1027);
	TASK::TASK_AIM_AT_COORD(0, vLocal_1001, -1, 1, 0);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iParam0, true);
}

void func_366(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_979, 2048))
	{
		if (__LIB_0__::func_27(iLocal_979, 16777216))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1041[4]))
			{
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_ON_FOOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_979, 2048);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_985, 4096))
	{
		if (__LIB_2__::func_1(iLocal_1041[4], 0, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], 242628503, true) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_1041[4]) == 5)
				{
					func_624();
					if (__LIB_2__::func_1(iParam0, 0, 1))
					{
						if ((__LIB_2__::func_227(-1f, 1, iLocal_1041[4], 0) && __LIB_1__::func_348(iLocal_1041[4], iParam0) < 15f) || __LIB_0__::func_27(iLocal_985, 512))
						{
							__LIB_1__::func_683(&iLocal_985, 4096);
						}
					}
					else
					{
						__LIB_1__::func_683(&iLocal_985, 4096);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_985, 1024) && __LIB_0__::func_27(iLocal_979, 16384))
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1041[4]) && __LIB_0__::func_665(iLocal_1041[4], iLocal_1041[6], 1, 1) > 5f)
					{
						__LIB_2__::func_478(iLocal_1041[4], iParam0, "RE_PBR_UNI_V1_STAKE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_985, 1024);
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_75(&uLocal_1196))
	{
		__LIB_1__::func_148(&uLocal_1196);
	}
	else if (!__LIB_0__::func_27(iLocal_979, -2147483648))
	{
		if (__LIB_0__::func_265(&uLocal_1196) > 30f || iParam0 == 0)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], 167901368, true) != 1)
			{
				__LIB_1__::func_683(&iLocal_979, -2147483648);
				if (__LIB_0__::func_27(iLocal_985, 512))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_1041[4], iLocal_1041[0], iLocal_1041[0], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				}
				else
				{
					TASK::TASK_SHOOT_AT_ENTITY(iLocal_1041[4], iLocal_1041[0], -1, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
				}
				__LIB_1__::func_148(&uLocal_1196);
			}
		}
		else
		{
			func_626(iParam0);
		}
	}
	else if (__LIB_0__::func_265(&uLocal_1196) > 1.5f)
	{
		iLocal_28 = 10;
	}
}

void func_367()
{
	float fVar0;
	if (!__LIB_0__::func_27(iLocal_985, 65536))
	{
		if (__LIB_0__::func_27(iLocal_957, 1024))
		{
			fVar0 = 45f;
		}
		else
		{
			fVar0 = 10f;
		}
		if (((__LIB_0__::func_665(Global_35, iLocal_1041[4], 1, 1) < 15f && __LIB_0__::func_94(iLocal_1041[4], vLocal_1018, 1) > fVar0) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1041[4])) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			if (!__LIB_0__::func_75(&uLocal_1199))
			{
				__LIB_1__::func_148(&uLocal_1199);
			}
			else if (__LIB_0__::func_265(&uLocal_1199) > 3f || __LIB_0__::func_94(iLocal_1041[4], vLocal_1001, 1) < 40f)
			{
				__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_CHANGE_MIND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_985, 65536);
				__LIB_1__::func_148(&uLocal_1199);
			}
		}
		else if (__LIB_0__::func_75(&uLocal_1199))
		{
			__LIB_0__::func_37(&uLocal_1199);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_985, 131072))
	{
		if (__LIB_0__::func_265(&uLocal_1199) > 2.5f)
		{
			__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_CHANGE_HEART", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_148(&uLocal_1199);
			__LIB_1__::func_683(&iLocal_985, 131072);
		}
	}
	else if (__LIB_1__::func_313(&uLocal_1199, 1.75f))
	{
		func_42();
		__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_CHANGE_HEART_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_681(&iLocal_979, 128);
		__LIB_1__::func_681(&iLocal_979, 256);
		__LIB_1__::func_681(&iLocal_957, 1024);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_1041[4], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 3, 0);
		iLocal_28 = 7;
	}
}

void func_368(int iParam0, int iParam1)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iParam1, iParam1, 1f, 0, 1f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
	__LIB_3__::func_534(0, iParam1, -1, 0, 0, 1);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_369()
{
	if (Local_85.f_98[5] > 12f || ((Local_85.f_98[5] > 8f && __LIB_0__::func_94(iLocal_1041[4], vLocal_1030, 1) < 4f) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1041[4])))
	{
		return true;
	}
	return false;
}

void func_370()
{
	float fVar0;
	if (func_187())
	{
		if (!__LIB_0__::func_27(iLocal_979, 32768))
		{
			func_437(iLocal_1041[4]);
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_574.f_1, "pedPlayer", &Local_583, true, &cLocal_45, 2))
			{
				vLocal_1030 = { Local_583 };
				__LIB_3__::func_409(&vLocal_1030, 1f);
				fVar0 = Local_583.f_3.f_2;
			}
			else
			{
				fVar0 = __LIB_3__::func_731(vLocal_1030, ENTITY::GET_ENTITY_COORDS(iLocal_1041[5], true, false));
			}
			func_439(iLocal_1041[4], vLocal_1030, fVar0);
		}
	}
}

void func_372()
{
	if (!__LIB_0__::func_86(vLocal_1030))
	{
		if ((((__LIB_0__::func_94(iLocal_1041[4], vLocal_1030, 1) > 3f && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], 713668775, true) != 1) && __LIB_0__::func_94(Global_35, vLocal_1030, 1) > 1f) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], joaat("SCRIPT_TASK_LOOT_ENTITY"), true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], joaat("SCRIPT_TASK_LOOT_NEAREST_ENTITY"), true) != 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1041[4], vLocal_1030, 1f, -1, 3f, 0, 40000f);
		}
	}
}

void func_373()
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_0__::func_27(iLocal_979, 65536))
	{
		vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1001, fLocal_1010, -2.54f, -2.64f, -0.02f) };
		__LIB_3__::func_409(&vVar1, 1f);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_1041[5], -1, -1f, -1f, -1f);
		__LIB_1__::func_474(iLocal_1041[4], &iVar0, 0, 0, 1, 1);
	}
}

bool func_374(int iParam0, int iParam1)
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
					__LIB_3__::func_671();
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
					TASK::TASK_ENTER_ANIM_SCENE(iParam0->f_1, iParam0->f_25, &(iParam0->f_30), &(iParam0->f_26), iParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
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

void func_375()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574.f_1, "pedPlayer", iLocal_1041[4], 0);
}

bool func_376()
{
	if (__LIB_0__::func_27(iLocal_979, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_86(vLocal_1001))
	{
		if (ENTITY::_0x6BFBDC46139C45AB(vLocal_1001))
		{
			__LIB_1__::func_683(&iLocal_979, 2);
			return true;
		}
	}
	return false;
}

int func_377()
{
	switch (iLocal_986)
	{
		case 0:
			Local_574 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_574.f_4, 64, 0, false, true);
			Local_574.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_574.f_5, 64, "pblCutFreePlayerL02", false, true);
			__LIB_2__::func_272(iLocal_1041[1], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_574, vLocal_1001, 0f, 0f, fLocal_1010, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574, "pedBountyA", iLocal_1041[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574, "pedBountyB", iLocal_1041[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574, "pedKidnapped", iLocal_1041[5], 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_549[1 /*12*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574, "rope", Local_549[1 /*12*/].f_8, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_574.f_1, vLocal_1001, 0f, 0f, fLocal_1010, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574.f_1, "pedBountyB", iLocal_1041[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574.f_1, "pedKidnapped", iLocal_1041[5], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574.f_1, "pedPlayer", Global_35, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_549[1 /*12*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_574.f_1, "rope", Local_549[1 /*12*/].f_8, 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(Local_574);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_574.f_1);
			iLocal_986++;
			break;
		case 1:
			if (func_188(1))
			{
				func_643();
				iLocal_986++;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_378()
{
	if (__LIB_0__::func_27(iLocal_979, 2))
	{
		func_109(0);
	}
}

void func_379(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_957, 8))
	{
		return;
	}
	if (Local_85.f_46)
	{
		if (!__LIB_0__::func_27(iLocal_957, 8))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				__LIB_2__::func_593(&(Local_632[iVar0 /*21*/]), &Local_853);
				iVar0++;
			}
			__LIB_1__::func_683(&iLocal_957, 8);
			return;
		}
		return;
	}
	if (iLocal_958[iParam0] > 0)
	{
		iLocal_967[iParam0] = func_387(&(iLocal_1041[iParam0]), &(Local_632[iParam0 /*21*/]), 35f, &Local_853, &(Local_85.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_958[iParam0])
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_957, 16))
			{
				__LIB_2__::func_602(&(Local_853[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_853[1 /*17*/]), __LIB_2__::func_460(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_853[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_853[1 /*17*/]), 0, 0);
				__LIB_1__::func_683(&iLocal_957, 16);
			}
			iLocal_958[iParam0] = 1;
			break;
		case 1:
			if (Local_85.f_98[5] < 50f)
			{
				if (!__LIB_2__::func_466(&(Local_853[1 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_853[1 /*17*/]), 1, 0);
				}
				iLocal_958[iParam0] = 2;
			}
			break;
		case 2:
			if (!Local_85.f_46)
			{
				if (!__LIB_0__::func_27(iLocal_957, 32))
				{
					switch (iLocal_967[iParam0])
					{
						case 0:
							break;
						case 1:
							__LIB_2__::func_478(Global_35, iLocal_1041[iParam0], "RE_PBR_UNI_V1_ILO_BOUNTY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							if (__LIB_2__::func_466(&(Local_853[1 /*17*/]), 1, 0))
							{
								__LIB_2__::func_411(&(Local_853[1 /*17*/]), 0, 0);
							}
							__LIB_1__::func_683(&iLocal_957, 32);
							iLocal_958[iParam0] = 10;
							break;
					}
				}
				else
				{
					if (__LIB_2__::func_466(&(Local_853[1 /*17*/]), 1, 0))
					{
						__LIB_2__::func_411(&(Local_853[1 /*17*/]), 0, 0);
					}
					iLocal_958[iParam0] = 10;
				}
			}
			else
			{
				__LIB_2__::func_593(&(Local_632[iParam0 /*21*/]), &Local_853);
				iLocal_958[iParam0] = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_382()
{
	if (!__LIB_0__::func_27(iLocal_979, 67108864))
	{
		if (__LIB_2__::func_1(iLocal_1041[1], 0, 1))
		{
			if (((!__LIB_2__::func_1(iLocal_1041[0], 0, 1) && !__LIB_2__::func_1(iLocal_1041[2], 0, 1)) && !__LIB_2__::func_1(iLocal_1041[3], 0, 1)) && __LIB_2__::func_227(0, 1, iLocal_1041[1], 1))
			{
				__LIB_2__::func_478(iLocal_1041[1], Global_35, "RE_PBR_UNI_V1_BOUNTY_FLEE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_1041[1], true);
				PED::_0x735662994E60A710(iLocal_1041[1], 1);
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_574.f_1, "pedBountyB", iLocal_1041[1]);
			TASK::CLEAR_PED_TASKS(iLocal_1041[1], true, false);
			TASK::REMOVE_COVER_POINT(iLocal_1176);
			TASK::TASK_SMART_FLEE_PED(iLocal_1041[1], Global_35, 1000f, -1, 12288, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(iLocal_1041[1], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1041[1], iLocal_1220);
		}
		__LIB_1__::func_683(&iLocal_979, 67108864);
	}
}

int func_387(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_645(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_400()
{
	float fVar0;
	float fVar1;
	if (bLocal_44)
	{
		if (!__LIB_0__::func_75(&uLocal_38))
		{
			__LIB_1__::func_148(&uLocal_38);
			fLocal_1029 = __LIB_0__::func_665(Global_35, iLocal_1041[4], 1, 1);
		}
		else if (!Local_1223.f_9)
		{
			fVar0 = __LIB_0__::func_665(Global_35, iLocal_1041[4], 1, 1);
			fVar1 = __LIB_0__::func_265(&uLocal_38);
			switch (iLocal_988)
			{
				case 0:
					if (fVar1 > 3f)
					{
						if (fVar0 > (fLocal_1029 * 0.9f))
						{
							return true;
						}
						else
						{
							iLocal_988++;
						}
					}
					break;
				case 1:
					if (fVar1 > 6f)
					{
						if (fVar0 > (fLocal_1029 * 0.5f))
						{
							return true;
						}
						else
						{
							iLocal_988++;
						}
					}
					break;
				case 2:
					if (fVar1 > 10f)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

void func_401()
{
	if (!__LIB_0__::func_27(iLocal_985, 16384))
	{
		if (__LIB_0__::func_27(iLocal_979, 256))
		{
			__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_NO_HELP", "", 35f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_NO_HELP", "", 35f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		vLocal_1018 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false) };
		__LIB_1__::func_683(&iLocal_985, 16384);
	}
}

void func_415(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_699(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_167(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam1);
	__LIB_1__::func_551(iParam0, 0);
	__LIB_18__::func_610(iParam0, 1, 0, 0, 0);
}

void func_417(int iParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam5, uParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		DECORATOR::DECOR_SET_INT(*iParam4, "lootable_interior", iParam7);
	}
}

void func_429()
{
	if (!__LIB_0__::func_27(iLocal_979, 1048576))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_574.f_1);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574.f_1, sLocal_991[0], true);
	}
}

bool func_432(int iParam0, int iParam1, float fParam2)
{
	if ((((iParam0 == 4 && *iParam1 >= 9) || (iParam0 == 5 && *iParam1 >= 6)) || Local_85.f_98[iParam0] > 30f) || __LIB_0__::func_265(&uLocal_1205) < fParam2)
	{
		return false;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1041[iParam0]))
	{
		if (iParam0 == 4)
		{
			__LIB_2__::func_478(iLocal_1041[iParam0], Global_35, func_679(iLocal_1141), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iParam0 == 5)
		{
			__LIB_2__::func_478(iLocal_1041[iParam0], Global_35, func_680(iLocal_1143), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		fLocal_1144 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 5f);
		fLocal_1142 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 5f);
		*iParam1++;
		__LIB_1__::func_148(&uLocal_1205);
		return true;
	}
	return false;
}

int func_433(int iParam0, var uParam1)
{
	char* sVar0;
	if ((!__LIB_2__::func_1(iLocal_1041[iParam0], 0, 1) || *uParam1 > 4) || Local_85.f_98[iParam0] > 25f)
	{
		return 0;
	}
	switch (*uParam1)
	{
		case 0:
			sVar0 = "OPENS_FIRE";
			break;
		case 1:
			sVar0 = "GENERIC_INSULT_HIGH_MALE";
			break;
		case 2:
			sVar0 = "OPENS_FIRE";
			break;
		case 3:
			sVar0 = "GENERIC_INSULT_HIGH_NEUTRAL";
			break;
		case 4:
			sVar0 = "OPENS_FIRE";
			break;
		case 5:
			break;
	}
	__LIB_2__::func_478(iLocal_1041[iParam0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
	fLocal_1149 = 4f;
	__LIB_1__::func_148(&uLocal_1208);
	*uParam1++;
	return 1;
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574, sLocal_991[1]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574, sLocal_991[5]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574, sLocal_991[7]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[0]);
	}
	else
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[0]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[2]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[4]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[3]);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, sLocal_991[6]);
	}
}

bool func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
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
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_4__::func_23(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_437(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_0__::func_94(iParam0, vLocal_1156, 1);
	fVar1 = __LIB_0__::func_94(iParam0, vLocal_1159, 1);
	fVar2 = __LIB_0__::func_94(iParam0, vLocal_1162, 1);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		StringCopy(&cLocal_45, "pblCutFreePlayerF", 64);
		vLocal_1030 = { vLocal_1156 };
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		StringCopy(&cLocal_45, "pblCutFreePlayerR", 64);
		vLocal_1030 = { vLocal_1159 };
	}
	else
	{
		StringCopy(&cLocal_45, "pblCutFreePlayerL02", 64);
		vLocal_1030 = { vLocal_1162 };
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_574.f_1, &cLocal_45))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574.f_1, &cLocal_45);
	}
}

void func_439(int iParam0, vector3 vParam1, float fParam4)
{
	Local_1059 = 0;
	Local_1059.f_8 = { vParam1 };
	Local_1059.f_19 = fParam4;
	Local_1059.f_1 = iParam0;
	Local_1059.f_14 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Local_1059.f_23 = 1025;
	Local_1059.f_18 = 0f;
}

void func_441()
{
	if (!__LIB_0__::func_27(iLocal_979, 131072))
	{
		func_720();
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PLAYERLINE")))
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
			{
				__LIB_1__::func_683(&iLocal_985, 2097152);
			}
			__LIB_2__::func_478(Global_35, iLocal_1041[5], "RE_PBR_UNI_V1_WRAP_UP_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_985, 4194304);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_574.f_1) >= 0.99f)
		{
			if (__LIB_0__::func_27(iLocal_985, 2097152))
			{
				if (!__LIB_0__::func_27(iLocal_985, 4194304))
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[5], "RE_PBR_UNI_V1_WRAP_UP_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_985, 4194304);
				}
			}
			__LIB_1__::func_683(&iLocal_979, 131072);
		}
	}
}

char* func_442(bool bParam0)
{
	if (bParam0)
	{
		return "RE_PBR_UNI_V1_THANK_BOTH_B";
	}
	return "RE_PBR_UNI_V1_THANK_B";
}

int func_548(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { uParam3, uParam4, uParam5 };
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
				if (!__LIB_4__::func_390(iParam0, vVar0, iParam6, iParam10))
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
				func_105(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_618()
{
	int iVar0;
	func_401();
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!__LIB_0__::func_27(iLocal_979, 256))
	{
		if (__LIB_0__::func_27(iLocal_957, 1024))
		{
			TASK::CLEAR_PED_TASKS(iLocal_1041[4], true, false);
			__LIB_2__::func_45(0, Global_35, 2000);
		}
		else if (!__LIB_0__::func_27(iLocal_979, 134217728))
		{
			TASK::TASK_PLAY_ANIM(0, Local_78[0 /*2*/], "line_04_jav", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1000))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_1000, 0, 1052, -1, 0, 0, -1);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1001, 2f, -1, 0.25f, 4, 40000f);
	}
	__LIB_1__::func_474(iLocal_1041[4], &iVar0, 0, 0, 1, 1);
}

bool func_619()
{
	float fVar0;
	int iVar1;
	if (!__LIB_0__::func_75(&uLocal_1193))
	{
		__LIB_1__::func_148(&uLocal_1193);
	}
	else if (__LIB_0__::func_265(&uLocal_1193) > 1f)
	{
		if (!__LIB_0__::func_86(vLocal_1036))
		{
			fVar0 = __LIB_0__::func_94(iLocal_1041[4], vLocal_1036, 0);
			if (fVar0 < 20f)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1039))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_1041[4], iLocal_1039, true, 0))
					{
						return false;
					}
				}
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1039))
				{
					if (ENTITY::_0x886171A12F400B89(iLocal_1039, iVar1, 2) > 0)
					{
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return true;
					}
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
		}
		__LIB_1__::func_148(&uLocal_1193);
	}
	return false;
}

void func_620()
{
	if (!__LIB_0__::func_27(iLocal_985, 16777216))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_1174) && !__LIB_0__::func_27(iLocal_979, 16777216))
		{
			if (func_834(&uLocal_41))
			{
				if (__LIB_0__::func_94(Global_35, vLocal_1001, 1) < (300f - 20f))
				{
					__LIB_0__::func_325(&iLocal_1174);
					iLocal_1174 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_1001);
					__LIB_1__::func_683(&iLocal_985, 16777216);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_ESCAPE_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_985, 33554432);
				}
			}
		}
	}
}

void func_621()
{
	char* sVar0;
	if (Local_85.f_98[4] > 10f)
	{
		switch (iLocal_1140)
		{
			case 0:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE";
				break;
			case 1:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE_REPEAT";
				break;
			case 2:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE_AGAIN";
				break;
			case 3:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE_LAST";
				break;
			default:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE";
				break;
		}
	}
	else
	{
		switch (iLocal_1140)
		{
			case 0:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE";
				break;
			case 1:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE_REPEAT";
				break;
			case 2:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE_AGAIN";
				break;
			case 3:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE_LAST";
				break;
			default:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE";
				break;
		}
	}
	__LIB_2__::func_478(iLocal_1041[4], Global_35, sVar0, "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
	__LIB_1__::func_683(&iLocal_985, 262144);
	iLocal_1140++;
}

void func_622()
{
	if (Local_85.f_46)
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_979, 16384))
	{
		if (func_835() && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1041[4]))
		{
			__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_SPOT_CAMP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_985, 128);
			__LIB_1__::func_683(&iLocal_979, 16777216);
			return;
		}
	}
	switch (iLocal_1139)
	{
		case 0:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 2f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_SHOUT_INTRO", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_INTRO", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					iLocal_1139++;
				}
			}
			break;
		case 1:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				__LIB_0__::func_37(&uLocal_1214);
				if (Local_85.f_98[4] > 12f)
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_A", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_A", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				iLocal_1139++;
			}
			break;
		case 2:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 2f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					__LIB_0__::func_37(&uLocal_1214);
					iLocal_1139++;
				}
			}
			break;
		case 3:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 1f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_B2", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_B2", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					__LIB_0__::func_37(&uLocal_1214);
					iLocal_1139++;
				}
			}
			break;
		case 4:
			func_836(0);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (Local_85.f_98[4] > 12f)
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_C", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_EXPLAIN_C", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				iLocal_1139++;
			}
			break;
		case 5:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (Local_85.f_98[4] > 12f)
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_D", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_D", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				iLocal_1139++;
			}
			break;
		case 6:
			func_836(0);
			if (func_837(1101004800 /* Float: 20f */))
			{
				__LIB_0__::func_37(&uLocal_1214);
				if (Local_85.f_98[4] > 12f)
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_E", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_EXPLAIN_E", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				iLocal_1139++;
			}
			break;
		case 7:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 3f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_F", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_F", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					iLocal_1139++;
				}
			}
			break;
		case 8:
			func_836(0);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (Local_85.f_98[4] > 12f)
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_G", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_EXPLAIN_G", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				__LIB_0__::func_37(&uLocal_1214);
				iLocal_1139++;
			}
			break;
		case 9:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 0.75f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_H", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_H", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					__LIB_0__::func_37(&uLocal_1214);
					iLocal_1139++;
				}
			}
			break;
		case 10:
			func_836(0);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 1f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_I", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_EXPLAIN_I", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					iLocal_1139++;
				}
			}
			break;
		case 11:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (Local_85.f_98[4] > 12f)
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_J", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_J", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				__LIB_0__::func_37(&uLocal_1214);
				iLocal_1139++;
			}
			break;
		case 12:
			func_836(1);
			if (func_837(1101004800 /* Float: 20f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1214))
				{
					__LIB_1__::func_148(&uLocal_1214);
				}
				else if (__LIB_0__::func_265(&uLocal_1214) > 1f)
				{
					if (Local_85.f_98[4] > 12f)
					{
						__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_SHOUT_END", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_RIDE_END", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					iLocal_1139++;
				}
			}
			break;
		case 13:
			if (__LIB_2__::func_227(-2f, 1, iLocal_1041[4], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (Local_85.f_98[4] < 15f && !__LIB_1__::func_472(iLocal_1041[5], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					if (Local_85.f_51.f_4 == 6)
					{
						if (Global_36.f_2 <= 55f)
						{
							if (__LIB_0__::func_94(Global_35, vLocal_1001, 1) > 50f && __LIB_0__::func_94(Global_35, vLocal_1001, 1) < 150f)
							{
								iLocal_1139++;
							}
						}
					}
					else if (__LIB_0__::func_94(Global_35, vLocal_1001, 1) > 50f && __LIB_0__::func_94(Global_35, vLocal_1001, 1) < 140f)
					{
						iLocal_1139++;
					}
				}
			}
			break;
		case 14:
			__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LISTEN", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			iLocal_1139++;
			break;
		case 15:
			break;
	}
}

void func_624()
{
	if (!__LIB_0__::func_27(iLocal_985, 512))
	{
		if (Local_85.f_98[4] < 5f)
		{
			if (__LIB_3__::func_112(iLocal_1041[4], Global_35, 1060437492 /* Float: 0.707f */) == 0)
			{
				__LIB_1__::func_683(&iLocal_985, 512);
			}
		}
	}
	else if (Local_85.f_98[4] > 5f || __LIB_3__::func_112(iLocal_1041[4], Global_35, 1060437492 /* Float: 0.707f */) == 0)
	{
		__LIB_1__::func_681(&iLocal_985, 512);
	}
}

void func_626(int iParam0)
{
	func_624();
	if (!__LIB_0__::func_27(iLocal_985, 512))
	{
		if (iParam0 != 0)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1041[4], -1073489615, true) != 1)
			{
				TASK::TASK_AIM_AT_ENTITY(iLocal_1041[4], iLocal_1041[1], -1, 0, 0);
			}
			switch (iLocal_980)
			{
				case 0:
					if (__LIB_2__::func_227(0, 1, iLocal_1041[4], 1))
					{
						__LIB_2__::func_478(iLocal_1041[4], iParam0, "RE_PBR_UNI_V1_AIM_JAV", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_980++;
					}
					break;
				case 1:
					if (__LIB_0__::func_265(&uLocal_1196) > 15f)
					{
						if (__LIB_2__::func_227(-1f, 1, 0, 0) && __LIB_1__::func_348(iLocal_1041[4], iParam0) < 15f)
						{
							__LIB_2__::func_478(iLocal_1041[4], iParam0, "RE_PBR_UNI_V1_AIM_JAV_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_980++;
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_265(&uLocal_1196) > 25f)
					{
						if (__LIB_2__::func_227(-1f, 1, 0, 0) && __LIB_1__::func_348(iLocal_1041[4], iParam0) < 15f)
						{
							__LIB_2__::func_478(iLocal_1041[4], iParam0, "RE_PBR_UNI_V1_ADVANCE_JAV", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_980++;
						}
					}
					break;
				case 3:
					break;
			}
		}
	}
	else
	{
		func_839(iLocal_1041[4]);
	}
}

void func_643()
{
	if (!__LIB_0__::func_27(iLocal_979, 512))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574.f_1, true, false))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_574, sLocal_991[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_549[1 /*12*/].f_8, false);
				ANIMSCENE::START_ANIM_SCENE(Local_574);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_574, sLocal_991[1], true);
				__LIB_1__::func_683(&iLocal_979, 512);
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_574, sLocal_991[1]);
			}
		}
		else
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_574);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_574.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_574.f_1);
			}
		}
	}
}

int func_645(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_645(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

char* func_679(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			return "RE_PBR_UNI_V1_COMBAT_J";
		case 1:
			if (func_885())
			{
				if (__LIB_1__::func_985())
				{
					return "RE_PBR_UNI_V1_COMBAT_KILL_J";
				}
				else
				{
					return "ALLY_COMMENT_PLAYER_KILL";
				}
			}
			else if (func_887())
			{
				return "ALLY_COMMENT_PLAYER_WOUND_ENEMY";
			}
			else
			{
				return func_888();
			}
			break;
		case 2:
			return "RE_PBR_UNI_V1_AGGRO_J";
		case 3:
			iVar0 = func_889();
			if (iVar0 != 0)
			{
				if (__LIB_0__::func_94(iVar0, vLocal_1004, 1) < 5f)
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_J";
				}
				else
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_GEN_J";
				}
			}
			break;
		case 4:
			return func_888();
		case 5:
			return "RE_PBR_UNI_V1_COMBAT_J";
		case 6:
			return func_888();
		case 7:
			return "RE_PBR_UNI_V1_COMBAT_J";
		case 8:
			return func_888();
	}
	return "";
}

char* func_680(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if (func_885())
			{
				return "RE_PBR_UNI_V1_COMBAT_KILL_B";
			}
			else
			{
				return "RE_PBR_UNI_V1_COMBAT_B";
			}
			break;
		case 1:
			return func_890(iLocal_1041[5]);
		case 2:
			return "RE_PBR_UNI_V1_COMBAT_B";
		case 3:
			iVar0 = func_889();
			if (iVar0 != 0)
			{
				if (__LIB_0__::func_94(iVar0, vLocal_1004, 1) < 5f)
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_B";
				}
				else
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_GEN_B";
				}
			}
			break;
		case 4:
			return "RE_PBR_UNI_V1_COMBAT_B";
		case 5:
			return func_890(iLocal_1041[5]);
	}
	return "";
}

void func_720()
{
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1041[4], -1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_THANK_BOTH_B")))
		{
			__LIB_2__::func_478(iLocal_1041[5], iLocal_1041[4], func_442(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_985, 32768);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1041[5], joaat("RE_PBR_UNI_V1_THANK_B")))
	{
		__LIB_2__::func_478(iLocal_1041[5], Global_35, func_442(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_683(&iLocal_985, 32768);
	}
}

bool func_834(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
		vLocal_1021 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false) };
	}
	else
	{
		if (__LIB_0__::func_33(uParam0))
		{
			__LIB_2__::func_112(uParam0);
		}
		if (__LIB_0__::func_265(uParam0) > 1f)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[4], true, false) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vLocal_1021, true) > 5f)
			{
				vLocal_1021 = { vVar0 };
				iLocal_989 = 0;
			}
			else
			{
				iLocal_989++;
			}
			__LIB_1__::func_148(uParam0);
		}
	}
	if (iLocal_989 > 60)
	{
		return true;
	}
	return false;
}

bool func_835()
{
	if (__LIB_1__::func_205(iLocal_1041[4], iLocal_1040, 1, 0))
	{
		return true;
	}
	return false;
}

void func_836(bool bParam0)
{
	if (func_985())
	{
		if (__LIB_2__::func_227(0, 1, iLocal_1041[4], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
		{
			if (!__LIB_0__::func_27(iLocal_985, 1048576))
			{
				if (Local_85.f_98[4] > 10f)
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_LOUD_WAIT_OKAY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_WAIT_OKAY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_985, 1048576);
			}
			else if (bParam0)
			{
				if (!__LIB_0__::func_27(iLocal_985, 524288))
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_SEGUE_TO_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_985, 524288);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_SEGUE_TO_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_985, 524288))
			{
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_SEGUE_TO_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				__LIB_1__::func_681(&iLocal_985, 524288);
			}
			else
			{
				__LIB_2__::func_478(Global_35, iLocal_1041[4], "RE_PBR_UNI_V1_SEGUE_TO_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
			}
			iLocal_1138++;
			__LIB_1__::func_681(&iLocal_985, 262144);
		}
	}
}

bool func_837(float fParam0)
{
	if ((__LIB_2__::func_227(-2f, 1, iLocal_1041[4], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && Local_85.f_98[4] < fParam0)
	{
		return true;
	}
	return false;
}

void func_839(int iParam0)
{
	if (iParam0 != 0)
	{
		switch (iLocal_984)
		{
			case 0:
				__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_AIM_OBSTRUCTED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1211);
				iLocal_984++;
				break;
			case 1:
				if (__LIB_0__::func_265(&uLocal_1211) > 8f)
				{
					__LIB_2__::func_478(iLocal_1041[4], Global_35, "RE_PBR_UNI_V1_AIM_OBSTRUCTED_TWICE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_984++;
				}
				break;
			case 2:
				break;
		}
	}
}

bool func_885()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_2__::func_1(iLocal_1041[iVar0], 0, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_887()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_1041[iVar0], 0, 1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1041[iVar0], Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_888()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_1041[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		sVar2 = "GUNFIGHT_MULTIPLE_ENEMIES_SHOUT";
	}
	else
	{
		sVar2 = "GUNFIGHT_SINGLE_ENEMY";
	}
	return sVar2;
}

int func_889()
{
	var uVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (PED::IS_PED_IN_COVER(iLocal_1041[iVar1], false, false))
		{
			return uVar0;
		}
		iVar1++;
	}
	return uVar0;
}

char* func_890(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_1041[iVar0], 0, 1))
		{
			if (PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, false, 0) == 1)
			{
				if (PED::_0x7F9B9791D4CB71F6(iParam0, iLocal_1041[iVar0], false, 0) == 1 && Local_85.f_98[iVar0] < 20f)
				{
					iVar1 = __LIB_3__::func_112(iLocal_1041[iVar0], Global_35, 1060437492 /* Float: 0.707f */);
					if (iVar1 == 0)
					{
					}
					else
					{
						switch (iVar1)
						{
							case 1:
								sVar2 = "ENEMY_BEHIND_YOU";
								break;
							case 2:
								sVar2 = "ENEMY_SPOTTED_RIGHT";
								break;
							case 3:
								sVar2 = "ENEMY_SPOTTED_LEFT";
								break;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return sVar2;
}

bool func_985()
{
	if ((__LIB_0__::func_27(iLocal_985, 262144) && iLocal_1138 < 5) && __LIB_0__::func_94(Global_35, vLocal_1001, 1) > 100f)
	{
		return true;
	}
	return false;
}

