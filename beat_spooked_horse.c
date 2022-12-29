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
	vector3 vLocal_30 = { 0f, 0f, 0f };
	vector3 vLocal_33 = { 0f, 0f, 0f };
	vector3 vLocal_36 = { 0f, 0f, 0f };
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	var uLocal_41 = 25;
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
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
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
	var uLocal_219 = 0;
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
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	struct<2> Local_242[25];
	struct<12> Local_293[5];
	int iLocal_354 = 0;
	struct<193> Local_355 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_548 = 0;
	struct<32> Local_549[5];
	struct<5> Local_710 = { 0, 0, 0, 0, 0 } ;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	char* sLocal_718[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_728 = NULL;
	int iLocal_729 = 0;
	bool bLocal_730 = false;
	int iLocal_731[5] = { 0, 0, 0, 0, 0 };
	var uLocal_737[5] = { 0, 0, 0, 0, 0 };
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	struct<6> Local_746[4];
	int iLocal_771 = 0;
	struct<13> Local_772[10];
	int iLocal_903 = 0;
	struct<23> Local_904[12];
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	bool bLocal_1187 = false;
	int iLocal_1188 = 0;
	var uLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	var uLocal_1194 = 0;
	int iLocal_1195 = 0;
	var uLocal_1196 = 0;
	bool bLocal_1197 = false;
	bool bLocal_1198 = false;
	bool bLocal_1199 = false;
	bool bLocal_1200 = false;
	bool bLocal_1201 = false;
	bool bLocal_1202 = false;
	bool bLocal_1203 = false;
	bool bLocal_1204 = false;
	bool bLocal_1205 = false;
	bool bLocal_1206 = false;
	bool bLocal_1207 = false;
	bool bLocal_1208 = false;
	var uLocal_1209 = 0;
	bool bLocal_1210 = false;
	bool bLocal_1211 = false;
	bool bLocal_1212 = false;
	bool bLocal_1213 = false;
	bool bLocal_1214 = false;
	bool bLocal_1215 = false;
	bool bLocal_1216 = false;
	bool bLocal_1217 = false;
	bool bLocal_1218 = false;
	bool bLocal_1219 = false;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	int iLocal_1231 = 0;
	int iLocal_1232 = 0;
	int iLocal_1233 = 0;
	int iLocal_1234 = 0;
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
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	int iLocal_1253 = 0;
	int iLocal_1254 = 0;
	int iLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	int iLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	struct<17> Local_1266[2];
	int iLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = 0;
	var uLocal_1304 = -1;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = -1;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 1073741824;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 1;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	float fLocal_1327 = 0f;
	bool bLocal_1328 = false;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	bool bLocal_1332 = false;
	bool bLocal_1333 = false;
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
	bLocal_1208 = true;
	iLocal_1322 = __LIB_2__::func_340(1, 0, 0);
	Local_355.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	Local_355.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	uLocal_1189 = uLocal_1189;
	__LIB_3__::func_420(&Local_355, 1);
	__LIB_2__::func_180(&(Local_355.f_5), 0);
	__LIB_2__::func_105(&(Local_355.f_5), 1);
	__LIB_2__::func_50(&(Local_355.f_5), 1);
	__LIB_3__::func_333(&(Local_355.f_5), 0);
	__LIB_2__::func_110(&(Local_355.f_5), 1);
	__LIB_2__::func_111(&(Local_355.f_5), 0);
	__LIB_2__::func_104(&(Local_355.f_5), 0);
	__LIB_3__::func_620(&(Local_355.f_5), 0);
	__LIB_2__::func_51(&(Local_355.f_5), 1);
	__LIB_2__::func_595(&(Local_355.f_5), 25f);
	__LIB_2__::func_507(&(Local_355.f_5), 2);
	__LIB_1__::func_975(&(Local_355.f_5), 1f);
	while (true)
	{
		switch (iLocal_1192)
		{
			case 0:
				if (func_18())
				{
					__LIB_3__::func_889(&Local_1266);
					iLocal_1192 = 1;
				}
				break;
			case 1:
				if (__LIB_3__::func_759(&Local_355, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_4__::func_219(&Local_355, &uLocal_1258, &uLocal_1257);
					func_22(&Local_355);
					func_23();
					func_24();
					func_25();
					uLocal_1256 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1900.857f, -661.8993f, 41.0368f, 3f, 3f, 3f, 107.2404f, false, 7);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), Local_355.f_51, true) > 40f)
					{
						__LIB_3__::func_618(Local_355.f_51, 35f, 1, 0, 0, 0, 0);
					}
					__LIB_3__::func_618(1962.45f, -654.99f, 41.35f, 10f, 1, 0, 0, 0, 0);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESH_Area", true, true);
					AUDIO::_0x3743CE6948194349("AZ_RESH_Area", Local_355.f_51, 0f);
					iLocal_1192 = 3;
				}
				else if (Local_355.f_160)
				{
					func_3();
				}
				break;
			case 3:
				func_27();
				iLocal_1192 = 4;
				break;
			case 4:
				func_28();
				if (!__LIB_3__::func_645(&Local_355, &iLocal_731, iLocal_354, 0, 0, 0, 1, 0))
				{
					func_3();
				}
				if (!Local_355.f_46)
				{
					if (func_30())
					{
						Local_355.f_46 = 1;
						iLocal_1191 = 7;
					}
				}
				if (bLocal_1208)
				{
					if (func_31())
					{
						func_3();
					}
				}
				if (((__LIB_3__::func_365(&Local_355, &iLocal_731, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0) || (bLocal_1328 && !ENTITY::DOES_ENTITY_EXIST(iLocal_731[0]))) || __LIB_0__::func_665(iLocal_731[0], Global_35, 1, 1) > 150f) || (iLocal_1191 < 3 && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_355.f_51, Global_36, true) > 150f))
				{
					func_3();
				}
				if (__LIB_1__::func_205(Global_35, iLocal_1229, 1, 0))
				{
					if (!bLocal_1204)
					{
						if (!PED::IS_PED_ON_MOUNT(Global_35))
						{
							bLocal_1208 = true;
						}
					}
				}
				if (PED::IS_PED_ON_MOUNT(Global_35) && iLocal_1191 > 1)
				{
					if (__LIB_0__::func_94(Global_35, Local_355.f_51, 1) > 150f)
					{
						func_3();
					}
				}
				if (__LIB_0__::func_797(1))
				{
					if (iLocal_1226 != 0)
					{
					}
					else if (__LIB_0__::func_797(0))
					{
						iLocal_1226 = __LIB_0__::func_398(0);
					}
					if (iLocal_1225 == 0)
					{
						iLocal_1225 = __LIB_0__::func_398(1);
					}
					if (__LIB_0__::func_665(iLocal_1225, Global_35, 1, 1) < 40f)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1226) || __LIB_0__::func_665(iLocal_1226, Global_35, 1, 1) < 40f)
						{
							__LIB_2__::func_115(59, 1, 0, 0, 3, 0, 0, 1);
							func_3();
						}
					}
				}
				if (iLocal_1191 != 2)
				{
				}
				else if (!__LIB_0__::func_394(Global_35, iLocal_1223, 0))
				{
					iLocal_1191 = 8;
				}
				break;
		}
		BUILTIN::WAIT(Local_355.f_158);
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	func_40(0);
	if (iLocal_1191 < 3)
	{
		Local_355.f_45 = 0;
	}
	LAW::_0x710448D44A64C213(1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, false);
	__LIB_2__::func_161(Local_355.f_51, 50f, 5);
	__LIB_2__::func_161(vLocal_18, 50f, 5);
	__LIB_2__::func_161(1859.24f, -649.96f, 40.99f, 50f, 5);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1256))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&uLocal_1256);
	}
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1188))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_1188);
	}
	__LIB_3__::func_606(&uLocal_1235);
	__LIB_3__::func_524(&iLocal_1182);
	if (__LIB_2__::func_1(iLocal_1223, 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_1223, 136, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1223, false);
	}
	if (__LIB_4__::func_377(16))
	{
		__LIB_1__::func_724(16);
	}
	__LIB_3__::func_823(&Local_355, &iLocal_731, &uLocal_737, iLocal_354, uLocal_1258, uLocal_1257, 0, 1, 0, 1);
	func_48();
	if (iLocal_771 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_771);
	}
	iVar1 = 0;
	while (iVar1 < Local_904)
	{
		if (Local_904[iVar1 /*23*/].f_1 != 0)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_904[iVar1 /*23*/].f_1);
		}
		iVar1++;
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_1228))
	{
		MAP::REMOVE_BLIP(&iLocal_1228);
	}
	if (bLocal_1197)
	{
		if (!bLocal_1203)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1223))
			{
				__LIB_1__::func_864(iLocal_1223, 0, 0);
			}
		}
	}
	func_40(0);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESH_Area", false, true);
	if (Local_355.f_44)
	{
		if (!__LIB_1__::func_187(56))
		{
			__LIB_4__::func_471(56, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_3__::func_475(Local_746[iVar0 /*6*/], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		iVar0++;
	}
	__LIB_3__::func_823(&Local_355, &iLocal_731, &uLocal_737, iLocal_354, uLocal_1258, uLocal_1257, 0, 1, 0, 1);
	func_48();
	func_53();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_18()
{
	int iVar0;
	switch (iLocal_1190)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_355))
			{
				func_59();
				__LIB_3__::func_445(&Local_549);
				func_61();
				func_62();
				__LIB_3__::func_314(&Local_293);
				func_64();
				STREAMING::REQUEST_MODEL(func_65(9), false);
				STREAMING::REQUEST_MODEL(func_65(3), false);
				STREAMING::REQUEST_MODEL(func_65(12), false);
				STREAMING::REQUEST_MODEL(func_65(13), false);
				TASK::REQUEST_WAYPOINT_RECORDING("RE_SPOOKED_HORSE_V1_A");
				TASK::REQUEST_WAYPOINT_RECORDING("RE_SPOOKED_HORSE_V2_A");
				TASK::REQUEST_WAYPOINT_RECORDING("RE_SPOOKED_HORSE_V3_A");
				TASK::REQUEST_WAYPOINT_RECORDING("RE_SPOOKED_HORSE_V3_b");
				STREAMING::REQUEST_ANIM_DICT("amb_creatures_bird@world_crow_eating_ground@idle0");
				if (AUDIO::_0xE368E8422C860BA7("creature_scream", "RESSH_sounds", -2))
				{
					iLocal_1190 = 1;
				}
			}
			break;
		case 1:
			if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("RE_SPOOKED_HORSE_V1_A") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("RE_SPOOKED_HORSE_V2_A")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("RE_SPOOKED_HORSE_V3_A")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("RE_SPOOKED_HORSE_V3_b"))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_41))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_293))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_65(9)))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_65(3)))
			{
				return false;
			}
			if (!AUDIO::_0xE368E8422C860BA7("creature_scream", "RESSH_sounds", -2))
			{
				return false;
			}
			if (!AUDIO::_0xE368E8422C860BA7("FOLIAGE_RUSTLE", "RESH_Sounds", -2))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("amb_creatures_bird@world_crow_eating_ground@idle0"))
			{
				return false;
			}
			if (!func_68())
			{
				return false;
			}
			if (!func_69())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Local_549[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_549[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			return true;
	}
	return false;
}

void func_22(var uParam0)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			iLocal_354 = 0;
			break;
		case 1:
			iLocal_354 = 1;
			break;
		case 2:
			iLocal_354 = 2;
			break;
	}
}

void func_23()
{
	switch (Local_355.f_51.f_4)
	{
		case 0:
			vLocal_15 = { 1970.409f, -679.4619f, 42.1166f };
			vLocal_18 = { 1865.19f, -603.62f, 42.62f };
			vLocal_21 = { 1973.79f, -674.76f, 43.41f };
			vLocal_24 = { 1971.79f, -675.15f, 42.4f };
			fLocal_40 = 157.1f;
			fLocal_39 = 157.1f;
			vLocal_27 = { 1974.15f, -671.97f, 42.53f };
			iLocal_14 = 20;
			vLocal_30 = { 1862.79f, -593.95f, 41.23f };
			vLocal_33 = { 1882.49f, -604.99f, 41.88f };
			vLocal_36 = { 1854.02f, -598.82f, 41.93f };
			break;
		case 1:
			vLocal_15 = { 2444.544f, -679.0738f, 41.9621f };
			vLocal_18 = { 2398.93f, -786.13f, 40.43f };
			vLocal_21 = { 2441.09f, -675.47f, 42.17f };
			vLocal_24 = { 2441.48f, -678.31f, 42.45f };
			fLocal_40 = 157.1f;
			fLocal_39 = 40.22f;
			vLocal_27 = { 2440.28f, -677.06f, 42.29f };
			iLocal_14 = 20;
			vLocal_30 = { 2386.61f, -775.67f, 39.35f };
			vLocal_33 = { 2380.67f, -765.14f, 41.17f };
			vLocal_36 = { 2409.39f, -748.93f, 40.52f };
			break;
		case 2:
			vLocal_15 = { 2103.64f, -352.66f, 40.98f };
			vLocal_18 = { 2108.67f, -469.88f, 40.84f };
			vLocal_24 = { 2097.84f, -359.4f, 40.66f };
			vLocal_21 = { 2098.09f, -357.7f, 42.57f };
			fLocal_40 = 157.1f;
			fLocal_39 = 157.1f;
			vLocal_27 = { 2095.92f, -358.92f, 40.66f };
			iLocal_14 = 20;
			vLocal_30 = { 2111.21f, -467.21f, 39.4f };
			vLocal_33 = { 2095.73f, -462.63f, 40.53f };
			vLocal_36 = { 2120.06f, -447.51f, 40.66f };
			break;
	}
}

void func_24()
{
	__LIB_2__::func_761(Local_355.f_51, 20f, 0, 0);
	__LIB_2__::func_165(Local_355.f_51, 50f, 0, 0, 4);
	__LIB_2__::func_165(vLocal_18, 50f, 0, 0, 5);
	switch (Local_355.f_51.f_4)
	{
		case 0:
			__LIB_2__::func_165(1859.24f, -649.96f, 40.99f, 50f, 0, 0, 4);
			break;
		case 1:
			break;
		case 2:
	}
	__LIB_1__::func_391(iLocal_1233, 0, 0, 0);
}

void func_25()
{
	switch (iLocal_354)
	{
		case 0:
			__LIB_3__::func_527(&iLocal_1229, 1972.094f, -682.4358f, 43.0215f, 0f, 0f, 0f, 40f, 40f, 6f, "AgitationVol");
			__LIB_3__::func_527(&iLocal_1230, 1972.094f, -674.9329f, 43.0215f, 0f, 0f, 0f, 11f, 11f, 6f, "SpookVol");
			__LIB_3__::func_527(&iLocal_1234, 1972.094f, -674.9329f, 43.0215f, 0f, 0f, 0f, 5f, 5f, 6f, "HardLimitVol");
			__LIB_3__::func_557(&iLocal_1232, 1898.227f, -663.4321f, 43.16024f, 0f, 0f, -33f, 10f, 11f, 5f, "HiddenAttackerVol");
			__LIB_3__::func_527(&iLocal_1231, 1897.375f, -671.7587f, 41.83339f, 0f, 0f, -33f, 15f, 24f, 5f, "AttackVol");
			__LIB_3__::func_527(&iLocal_1233, 1868.067f, -617.9218f, 50.21461f, 0f, 0f, 19.99999f, 35f, 35f, 16f, "vLookOutVol");
			__LIB_3__::func_557(&uLocal_1235, 1963.283f, -657.7684f, 40.7331f, 0f, 0f, 23f, 59f, 30f, 21f, "volRestrict");
			break;
		case 1:
			__LIB_3__::func_527(&iLocal_1229, 2441.659f, -678.1763f, 41.5079f, 0f, 0f, 0f, 40f, 40f, 6f, "AgitationVol");
			__LIB_3__::func_527(&iLocal_1230, 2441.659f, -678.1763f, 41.5079f, 0f, 0f, 0f, 13f, 13f, 6f, "SpookVol");
			__LIB_3__::func_527(&iLocal_1234, 2441.659f, -678.1763f, 41.5079f, 0f, 0f, 0f, 5f, 5f, 6f, "HardLimitVol");
			__LIB_3__::func_527(&iLocal_1231, 2404.019f, -725.3989f, 40.89165f, 0f, 0f, -13.00001f, 30f, 17f, 8f, "AttackVol");
			__LIB_3__::func_527(&iLocal_1233, 2396.872f, -782.5591f, 45.41074f, 0f, 0f, 0f, 30f, 30f, 8f, "vLookOutVol");
			__LIB_3__::func_557(&iLocal_1232, 2399.541f, -726.8954f, 41.89165f, 0f, 0f, -18.00001f, 25f, 17f, 8f, "HiddenAttackerVol");
			break;
		case 2:
			__LIB_3__::func_527(&iLocal_1229, 2098.07f, -358.5045f, 45.01683f, 0f, 0f, 0f, 40f, 40f, 7f, "AgitationVol");
			__LIB_3__::func_527(&iLocal_1230, 2098.07f, -358.5045f, 45.01683f, 0f, 0f, 0f, 13f, 13f, 7f, "SpookVol");
			__LIB_3__::func_527(&iLocal_1234, 2098.07f, -358.5045f, 45.01683f, 0f, 0f, 0f, 5f, 5f, 7f, "HardLimitVol");
			__LIB_3__::func_527(&iLocal_1231, 2103.032f, -459.1408f, 44.0177f, 0f, 0f, 0f, 15f, 15f, 6f, "AttackVol");
			__LIB_3__::func_527(&iLocal_1233, 2103.032f, -459.1408f, 44.0177f, 0f, 0f, 0f, 25f, 25f, 6f, "vLookOutVol");
			__LIB_3__::func_557(&iLocal_1232, 2090.721f, -401.177f, 43.77449f, 0f, 0f, -22f, 25f, 15f, 6f, "HiddenAttackerVol");
			break;
	}
}

void func_27()
{
	switch (Local_355.f_51.f_4)
	{
		case 0:
			STREAMING::_REQUEST_IMAP(841781567);
			break;
		case 1:
			STREAMING::_REQUEST_IMAP(1915768280);
			break;
		case 2:
			STREAMING::_REQUEST_IMAP(2075691867);
			break;
	}
}

void func_28()
{
	if (__LIB_1__::func_205(Global_35, iLocal_1233, 1, 0))
	{
		bLocal_1206 = true;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1232, 1, 0))
	{
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1231, 1, 0))
	{
		bLocal_1205 = true;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	if (!bLocal_1197)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1223))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
	}
}

bool func_30()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((func_91(iLocal_731[iVar0], 0, &(Local_355.f_5), &uLocal_1194, 0, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_746[iVar0 /*6*/], Global_35, 1, 1)) || PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), Local_746[iVar0 /*6*/], 10000))
		{
			bLocal_1216 = true;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_31()
{
	vector3 vVar0;
	if (iLocal_1191 != 8)
	{
		func_92();
		func_93();
		func_94();
		func_95();
		func_96();
	}
	switch (iLocal_1191)
	{
		case 0:
			if (PED::GET_MOUNT(Global_35) != 0)
			{
				__LIB_1__::func_148(&uLocal_1245);
				func_98();
				vVar0 = { func_99(&Local_355) };
				iLocal_1188 = __LIB_8__::func_772(joaat("WORLD_PLAYER_LOOKAT_POINT"), vVar0, 0f, 5f, 0, 0);
				fLocal_1327 = 2f;
				__LIB_1__::func_148(&uLocal_1324);
				iLocal_1191 = 1;
			}
			break;
		case 1:
			if (func_101())
			{
				if (__LIB_3__::func_452(&Local_355, 1f, 20f, 21f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
				{
					MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 10f, false);
					__LIB_3__::func_729(iLocal_1233, 0, 0);
					if (PED::GET_MOUNT(Global_35) != 0)
					{
						iLocal_731[0] = PED::GET_MOUNT(Global_35);
						iLocal_1223 = PED::GET_MOUNT(Global_35);
						bLocal_1328 = true;
					}
					LAW::_0x710448D44A64C213(0);
					iLocal_1191 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_205(Global_35, iLocal_1230, 1, 0) && PED::IS_PED_ON_MOUNT(Global_35))
			{
				iLocal_1191 = 3;
			}
			break;
		case 3:
			func_104();
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			func_105();
			break;
		case 7:
			func_105();
			break;
		case 8:
			if (__LIB_0__::func_665(Global_35, iLocal_731[0], 1, 1) > 150f)
			{
				iLocal_1191 = 9;
			}
			break;
		case 9:
			if (__LIB_0__::func_665(Global_35, iLocal_731[0], 1, 1) > 150f || PED::GET_MOUNT(Global_35) == iLocal_731[0])
			{
				if (__LIB_4__::func_377(16))
				{
					__LIB_1__::func_724(16);
				}
				return true;
			}
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_731[0]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_731[0], 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_731[0], 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	return false;
}

void func_40(bool bParam0)
{
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_1223, 33, 0, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_1223, 32, 0, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_1223, 31, 0, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_1223, 30, 0, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_1223, 27, 0, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_1223, 136, bParam0);
}

void func_48()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1253))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1253);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1254))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1254);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		PED::_0x39A2FC5AF55A52B1(Local_746[iVar0 /*6*/], -1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		PED::_0x39A2FC5AF55A52B1(Local_904[iVar0 /*23*/], -1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_772[iVar0 /*13*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_772[iVar0 /*13*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1252))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1252);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1224))
	{
		PED::_0x39A2FC5AF55A52B1(iLocal_1224, -1);
	}
}

void func_53()
{
	if (STREAMING::_IS_IMAP_ACTIVE(841781567))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(841781567, Local_355.f_51))
		{
			STREAMING::_REMOVE_IMAP(841781567);
		}
	}
	if (STREAMING::_IS_IMAP_ACTIVE(143994875))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(143994875, Local_355.f_51))
		{
			STREAMING::_REMOVE_IMAP(143994875);
		}
	}
	if (STREAMING::_IS_IMAP_ACTIVE(2075691867))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(2075691867, Local_355.f_51))
		{
			STREAMING::_REMOVE_IMAP(2075691867);
		}
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1915768280))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(1915768280, Local_355.f_51))
		{
			STREAMING::_REMOVE_IMAP(1915768280);
		}
	}
}

void func_59()
{
	int iVar0;
	Local_549[0 /*32*/].f_1 = 0;
	Local_549[1 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_549[1 /*32*/] = 4;
	Local_549[1 /*32*/].f_6 = { -0.5f, 1f, 0f };
	Local_549[1 /*32*/].f_3 = 312619017;
	Local_549[2 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_549[2 /*32*/] = 4;
	Local_549[2 /*32*/].f_6 = { 1f, 0.5f, 0f };
	Local_549[2 /*32*/].f_3 = 1232051623;
	Local_549[3 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_549[3 /*32*/] = 4;
	Local_549[3 /*32*/].f_6 = { 0.5f, -1f, 0f };
	Local_549[4 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_549[4 /*32*/] = 4;
	Local_549[4 /*32*/].f_6 = { -1f, -0.5f, 0f };
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		__LIB_3__::func_303(&(Local_549[iVar0 /*32*/].f_22));
		iVar0++;
	}
}

void func_61()
{
	Local_293[1 /*12*/].f_7 = joaat("P_TORCH01X");
	Local_293[2 /*12*/].f_7 = joaat("P_TORCH01X");
	Local_293[3 /*12*/].f_7 = joaat("P_TORCH01X");
	Local_293[4 /*12*/].f_7 = joaat("P_TORCH01X");
}

void func_62()
{
	Local_710.f_4 = "script@beat@wilderness@spookedhorse@petting";
	sLocal_718[0] = "PBL_BREAKOUT_BK";
	sLocal_718[1] = "PBL_BREAKOUT_FWD";
	sLocal_718[2] = "PBL_BREAKOUT_RT";
	sLocal_718[3] = "PBL_IDLE_A";
	sLocal_718[4] = "PBL_IDLE_B";
	sLocal_718[5] = "PBL_IDLE_C";
	sLocal_718[6] = "PBL_REACT_BK";
	sLocal_718[7] = "PBL_REACT_FWD";
	sLocal_718[8] = "PBL_REACT_RT";
	Local_710 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_710.f_4, 0, sLocal_718[3], false, true);
}

void func_64()
{
	Local_242[1 /*2*/] = "script_re@spooked_horse@emerge";
	Local_242[1 /*2*/].f_1 = "emerge_lt_fast";
	__LIB_3__::func_318(Local_242[1 /*2*/], &uLocal_41);
	Local_242[4 /*2*/] = "script_re@spooked_horse@emerge";
	Local_242[4 /*2*/].f_1 = "emerge_lt_slow";
	__LIB_3__::func_318(Local_242[4 /*2*/], &uLocal_41);
	Local_242[7 /*2*/] = "script_re@spooked_horse@emerge";
	Local_242[7 /*2*/].f_1 = "emerge_rt_fast";
	__LIB_3__::func_318(Local_242[7 /*2*/], &uLocal_41);
	Local_242[10 /*2*/] = "script_re@spooked_horse@emerge";
	Local_242[10 /*2*/].f_1 = "emerge_rt_slow";
	__LIB_3__::func_318(Local_242[10 /*2*/], &uLocal_41);
	Local_242[11 /*2*/] = "script_re@spooked_horse@emerge";
	Local_242[11 /*2*/].f_1 = "emerge_rt_slow_bow";
	__LIB_3__::func_318(Local_242[11 /*2*/], &uLocal_41);
	Local_242[12 /*2*/] = "script_re@spooked_horse@emerge";
	Local_242[12 /*2*/].f_1 = "emerge_rt_slow_machette";
	__LIB_3__::func_318(Local_242[12 /*2*/], &uLocal_41);
	Local_242[18 /*2*/] = "script_re@spooked_horse@petting";
	Local_242[18 /*2*/].f_1 = "breakout_bk";
	__LIB_3__::func_318(Local_242[18 /*2*/], &uLocal_41);
	Local_242[13 /*2*/] = "script_re@spooked_horse@petting";
	Local_242[13 /*2*/].f_1 = "react_fwd";
	__LIB_3__::func_318(Local_242[13 /*2*/], &uLocal_41);
	Local_242[14 /*2*/] = "script_re@spooked_horse@petting";
	Local_242[14 /*2*/].f_1 = "react_rt";
	__LIB_3__::func_318(Local_242[14 /*2*/], &uLocal_41);
	Local_242[0 /*2*/] = "mech_ladders@base";
	Local_242[0 /*2*/].f_1 = "climb_up";
	__LIB_3__::func_318(Local_242[0 /*2*/], &uLocal_41);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case 1:
			return joaat("U_M_M_VALBEARTRAP_01");
		case 2:
			return joaat("ROWBOATSWAMP");
		case 3:
			return joaat("G_M_M_UNISWAMP_01");
		case 4:
			return joaat("P_CARCASSHORSE02X");
		case 5:
			return joaat("A_C_ALLIGATOR_01");
		case 6:
			return joaat("CART02");
		case 7:
			return joaat("P_CORPSE05X");
		case 8:
			return joaat("P_CORPSE03X");
		case 9:
			return joaat("A_C_VULTURE_01");
		case 10:
			return joaat("P_LANTERN04X");
		case 12:
			return joaat("P_CARCASSHORSE01X");
		case 13:
			return joaat("P_CS_ARROW01X");
	}
	return 0;
}

bool func_68()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_710, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_710, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_710);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_69()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_710, sLocal_718[iVar0]))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_710, sLocal_718[iVar0]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_710, sLocal_718[iVar0]);
			}
			bLocal_730 = false;
		}
		iVar0++;
	}
	return !bLocal_730;
	return false;
}

bool func_91(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
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
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
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
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_4__::func_167(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
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
				if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_4__::func_167(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
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
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
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
				if (__LIB_2__::func_199(iParam0, iParam2))
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

void func_92()
{
	switch (iLocal_1193)
	{
		case 0:
			if (iLocal_1191 == 2)
			{
				iLocal_1193 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			TASK::TASK_HORSE_ACTION(iLocal_731[0], 1, 0, 0);
			break;
		case 3:
			TASK::TASK_HORSE_ACTION(iLocal_731[0], 1, 0, 0);
			break;
		case 4:
			iLocal_1193 = 5;
			break;
		case 5:
			break;
	}
}

void func_93()
{
	switch (iLocal_744)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_904[0 /*23*/]))
			{
				Local_904[0 /*23*/] = __LIB_1__::func_545(func_65(9), vLocal_21, fLocal_40, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				__LIB_3__::func_285(Local_904[0 /*23*/], &Local_355, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_904[1 /*23*/]))
			{
				Local_904[1 /*23*/] = __LIB_1__::func_545(func_65(9), vLocal_24, fLocal_39, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				__LIB_3__::func_285(Local_904[1 /*23*/], &Local_355, 0);
			}
			Local_293[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_293[1 /*12*/].f_7, vLocal_27, true, true, false, false, true);
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_293[1 /*12*/].f_8, 0);
			ENTITY::SET_ENTITY_ROTATION(Local_293[1 /*12*/].f_8, 90f, 90f, -174.2f, 2, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_904[0 /*23*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_904[1 /*23*/], true);
			__LIB_1__::func_148(&uLocal_1236);
			iLocal_744 = 1;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_904[0 /*23*/]) && ENTITY::DOES_ENTITY_EXIST(Local_904[1 /*23*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_904[0 /*23*/], "amb_creatures_bird@world_crow_eating_ground@idle0", "idle_a", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(Local_904[1 /*23*/], "amb_creatures_bird@world_crow_eating_ground@idle0", "idle_b", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				__LIB_1__::func_148(&uLocal_1236);
				iLocal_744 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_1(Local_904[1 /*23*/], 0, 1))
			{
				if ((__LIB_1__::func_205(Global_35, iLocal_1234, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1230, 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_1229, 1, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_904[1 /*23*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_2__::func_788(&(Local_904[1 /*23*/]), 1, 0, 1);
					PED::SET_PED_NAME_DEBUG(Local_904[1 /*23*/], "FLEEING 2");
				}
			}
			if (__LIB_1__::func_205(Global_35, iLocal_1234, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1223, 0f);
				TASK::TASK_HORSE_ACTION(iLocal_1223, 5, 0, 0);
				iLocal_1182 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), vLocal_15, -1f, -1f, -1f, -1f, -1f, -1, -1);
				AUDIO::_PLAY_SOUND_FROM_POSITION("creature_scream", vLocal_15, "RESSH_sounds", false, 0, true, 0);
				if (!__LIB_0__::func_75(&uLocal_1263))
				{
					__LIB_1__::func_148(&uLocal_1263);
				}
				__LIB_1__::func_148(&uLocal_1236);
				iLocal_744 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_1(Local_904[0 /*23*/], 0, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_904[0 /*23*/], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_904[0 /*23*/]));
				PED::SET_PED_NAME_DEBUG(Local_904[0 /*23*/], "FLEEING 0");
			}
			bLocal_1204 = true;
			__LIB_1__::func_148(&uLocal_1236);
			iLocal_744 = 4;
			break;
		case 4:
			break;
	}
}

void func_94()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	float fVar12;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_772[iLocal_903 /*13*/]))
			{
				STREAMING::REQUEST_MODEL(func_65(4), false);
				if (STREAMING::HAS_MODEL_LOADED(func_65(4)))
				{
					Local_772[iLocal_903 /*13*/].f_7 = { func_234(iLocal_354) };
					Local_772[iLocal_903 /*13*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_65(4), Local_772[iLocal_903 /*13*/].f_7, true, true, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_772[iLocal_903 /*13*/], func_235(iLocal_354));
					Local_772[iLocal_903 /*13*/].f_10 = 0.08f;
					Local_772[iLocal_903 /*13*/].f_12 = 0;
					iVar4 = 0;
					while (iVar4 < 5)
					{
						switch (iVar4)
						{
							case 0:
								vVar5 = { -0.6f, 0.3f, 0.5f };
								vVar8 = { -102f, -20f, 0f };
								break;
							case 1:
								vVar5 = { 0f, 0f, 0.6f };
								vVar8 = { -75f, 80f, 0f };
								break;
							case 2:
								vVar5 = { 0.3f, 0.3f, 0.55f };
								vVar8 = { -99f, -50f, 0f };
								break;
							case 3:
								vVar5 = { 0.5f, 0f, 0.6f };
								vVar8 = { -70f, 50f, 0f };
								break;
							case 4:
								vVar5 = { 1f, 0.2f, 0.5f };
								vVar8 = { -83f, 100f, 0f };
								break;
						}
						Local_772[iLocal_903 /*13*/].f_1[iVar4] = OBJECT::CREATE_OBJECT(joaat("P_CS_ARROW01X"), 0f, 1f, 2f, true, true, false, false, true);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_772[iLocal_903 /*13*/].f_1[iVar4], Local_772[iLocal_903 /*13*/], 0, vVar5, vVar8, false, false, false, false, 2, true, false, false);
						iVar4++;
					}
					iLocal_903++;
					if (iLocal_903 >= 10)
					{
						iLocal_903 = 0;
					}
				}
			}
		}
	}
	iVar11 = 0;
	while (iVar11 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_772[iVar11 /*13*/]))
		{
			fVar12 = 0.09f;
			Local_772[iVar11 /*13*/].f_10 = (Local_772[iVar11 /*13*/].f_10 + ((fVar12 * IntToFloat(Local_772[iVar11 /*13*/].f_11)) * BUILTIN::TIMESTEP()));
			if (Local_772[iVar11 /*13*/].f_10 >= 0.03f)
			{
				if (Local_772[iVar11 /*13*/].f_12)
				{
					Local_772[iVar11 /*13*/].f_10 = 0.03f;
				}
				else
				{
					Local_772[iVar11 /*13*/].f_10 = (Local_772[iVar11 /*13*/].f_10 - (0.1f * BUILTIN::TIMESTEP()));
				}
			}
			else if (Local_772[iVar11 /*13*/].f_10 <= -0.03f)
			{
				Local_772[iVar11 /*13*/].f_10 = -0.03f;
			}
			if (Local_772[iVar11 /*13*/].f_10 >= (40.2f - 0.1f))
			{
				Local_772[iVar11 /*13*/].f_12 = 1;
			}
			Local_772[iVar11 /*13*/].f_7.f_2 = (Local_772[iVar11 /*13*/].f_7.f_2 + (Local_772[iVar11 /*13*/].f_10 * BUILTIN::TIMESTEP()));
			if (Local_772[iVar11 /*13*/].f_7.f_2 >= (40.2f + 0.04f))
			{
				Local_772[iVar11 /*13*/].f_11 = -1;
			}
			else if (Local_772[iVar11 /*13*/].f_7.f_2 <= (40.2f - 0.04f))
			{
				Local_772[iVar11 /*13*/].f_11 = 1;
			}
			OBJECT::SLIDE_OBJECT(Local_772[iVar11 /*13*/], Local_772[iVar11 /*13*/].f_7, 1f, 1f, 1f, false);
		}
		iVar11++;
	}
}

void func_95()
{
	if (bLocal_1197 == 1)
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_1233, 1, 0))
		{
			func_236();
		}
		else
		{
			func_237();
		}
		func_238();
		func_239();
		func_240();
		if (__LIB_1__::func_205(Global_35, iLocal_1233, 1, 0) && !__LIB_2__::func_1(iLocal_1224, 0, 1))
		{
			__LIB_2__::func_105(&(Local_355.f_5), 1);
		}
	}
}

void func_96()
{
	if (iLocal_1191 > 2)
	{
		switch (iLocal_1259)
		{
			case 0:
				if (func_241())
				{
					__LIB_1__::func_148(&uLocal_1260);
					iLocal_1259++;
				}
				break;
			case 1:
				if (__LIB_0__::func_265(&uLocal_1260) > 2f)
				{
					__LIB_2__::func_478(Global_35, iLocal_1223, func_243(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1259++;
				}
				break;
			case 2:
				if (__LIB_0__::func_665(Global_35, iLocal_1223, 1, 1) < 4f)
				{
					func_40(0);
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
							__LIB_2__::func_478(Global_35, iLocal_1223, func_243(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							bLocal_1203 = true;
							__LIB_1__::func_148(&uLocal_1260);
							iLocal_1259++;
						}
					}
				}
				break;
			case 3:
				iLocal_1191 = 9;
				break;
		}
	}
}

void func_98()
{
	if (__LIB_0__::func_214(joaat("WEAPON_MELEE_MACHETE")))
	{
		iLocal_1255 = joaat("WEAPON_MELEE_MACHETE");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
	{
		iLocal_1255 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	}
	else
	{
		iLocal_1255 = joaat("WEAPON_MELEE_KNIFE");
	}
}

Vector3 func_99(var uParam0)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			return 1972.094f, -681.0854f, 43.0215f;
		case 1:
			return 2442.45f, -678.85f, 42.7f;
		case 2:
			return 2098.511f, -353.6877f, 40.8802f;
		case 3:
			return 2275.48f, -542.79f, 40.87f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_101()
{
	if (__LIB_1__::func_205(Global_35, iLocal_1229, 1, 0))
	{
		return true;
	}
	return false;
}

void func_104()
{
	float fVar0;
	if (!bLocal_1197)
	{
		if (bLocal_1333 || __LIB_1__::func_205(Global_35, iLocal_1234, 1, 0))
		{
			if (!bLocal_1333)
			{
				bLocal_1333 = true;
			}
			if (!bLocal_1332)
			{
				__LIB_2__::func_478(Global_35, Global_35, func_243(0), "", -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				bLocal_1332 = true;
			}
			if (__LIB_0__::func_265(&uLocal_1263) > 1f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1223, 0f);
				if (!bLocal_1219)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						bLocal_1219 = true;
					}
				}
				if (bLocal_1219)
				{
					if (!__LIB_0__::func_75(&uLocal_1329))
					{
						__LIB_1__::func_148(&uLocal_1329);
					}
					else if (__LIB_0__::func_265(&uLocal_1329) > 2f)
					{
					}
					if (__LIB_2__::func_710(Global_35, &uLocal_1196, 1, 1, 256, 0))
					{
						__LIB_0__::func_635(16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1223, true);
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_1223, false, 0f);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_1223, true);
						func_40(1);
						iLocal_1220 = MISC::GET_GAME_TIMER();
						if (!Local_355.f_44)
						{
							Local_355.f_44 = 1;
						}
						bLocal_1197 = true;
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1223, false, true);
					__LIB_0__::func_635(16);
					TASK::TASK_HORSE_ACTION(iLocal_1223, 2, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1223, true);
					TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_1223, false, 0f);
					TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_1223, true);
					func_40(1);
					iLocal_1220 = MISC::GET_GAME_TIMER();
					if (!Local_355.f_44)
					{
						Local_355.f_44 = 1;
					}
					bLocal_1197 = true;
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_729, 1) && MISC::GET_GAME_TIMER() >= iLocal_1220 + 6000)
		{
			__LIB_2__::func_478(Global_35, iLocal_1223, func_243(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_729, 1);
		}
		if (!bLocal_1198)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1220 + 2000 && !__LIB_0__::func_163(iLocal_1223, 1041577989))
			{
				func_253(iLocal_1223, iLocal_1251, iLocal_354, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_1223, 136, true);
				bLocal_1198 = true;
			}
		}
		else if (!bLocal_1199)
		{
			if (TASK::GET_SEQUENCE_PROGRESS(iLocal_1223) == 1 || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1223, 0))
			{
				fVar0 = func_254(iLocal_354, 0);
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1223, fVar0, fVar0, fVar0, false, true, 0) || bLocal_1201)
				{
					func_253(iLocal_1223, iLocal_1251, iLocal_354, 1);
					bLocal_1199 = true;
				}
			}
		}
		else if (!bLocal_1200)
		{
			if (TASK::GET_SEQUENCE_PROGRESS(iLocal_1223) == 1)
			{
				fVar0 = func_254(iLocal_354, 1);
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1223, fVar0, fVar0, fVar0, false, true, 0) || bLocal_1201)
				{
					func_253(iLocal_1223, iLocal_1251, iLocal_354, 2);
					bLocal_1200 = true;
				}
			}
		}
		else if (TASK::GET_SEQUENCE_PROGRESS(iLocal_1223) == 1)
		{
			fVar0 = func_254(iLocal_354, 2);
		}
	}
}

void func_105()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_1183, 1))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar0 != 0)
			{
				if (__LIB_2__::func_1(iLocal_731[iVar0], 0, 1))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_731[iVar0], Global_35, 1000f, -1, 1, 2f, 0);
					__LIB_2__::func_788(&(iLocal_731[iVar0]), 1, 0, 1);
				}
			}
			iVar0++;
		}
		__LIB_1__::func_683(&iLocal_1183, 1);
	}
}

Vector3 func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1920.23f, -687.03f, 41.1f;
		case 1:
			return 2405.83f, -692.47f, 40.52f;
		case 2:
			return 2115.4f, -420.91f, 40.18f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 106.94f;
		case 1:
			return 106.94f;
		case 2:
			return 106.94f;
		default:
			break;
	}
	return 0f;
}

void func_236()
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!Local_904[iVar0 /*23*/].f_5)
		{
			switch (Local_904[iVar0 /*23*/].f_2)
			{
				case 0:
					func_388(&(Local_904[iVar0 /*23*/]), iLocal_354, iVar0);
					Local_904[iVar0 /*23*/].f_1 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(Local_904[iVar0 /*23*/].f_1, Local_904[iVar0 /*23*/].f_10, 1f);
					Local_904[iVar0 /*23*/].f_2 = 1;
					break;
				case 1:
					if (__LIB_0__::func_94(Global_35, Local_904[iVar0 /*23*/].f_10, 1) < Local_904[iVar0 /*23*/].f_17 || (__LIB_0__::func_94(Global_35, Local_904[iVar0 /*23*/].f_10, 1) < (Local_904[iVar0 /*23*/].f_17 * 1.1f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 3f))
					{
						if (__LIB_0__::func_94(Global_35, Local_904[iVar0 /*23*/].f_10, 1) > Local_904[iVar0 /*23*/].f_18)
						{
							if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_904[iVar0 /*23*/].f_1))
							{
								if (CAM::IS_SPHERE_VISIBLE(Local_904[iVar0 /*23*/].f_19, Local_904[iVar0 /*23*/].f_22) || Local_904[iVar0 /*23*/].f_5)
								{
									if (!bVar1)
									{
										Local_904[iVar0 /*23*/] = __LIB_1__::func_545(func_65(3), Local_904[iVar0 /*23*/].f_10, Local_904[iVar0 /*23*/].f_13, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
										bVar1 = true;
										if (Local_904[iVar0 /*23*/].f_5)
										{
											ENTITY::FREEZE_ENTITY_POSITION(Local_904[iVar0 /*23*/], true);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_904[iVar0 /*23*/], true);
										PED::_SET_PED_CROUCH_MOVEMENT(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_6, 0, false);
										GRAPHICS::SET_TRACKED_POINT_INFO(Local_904[iVar0 /*23*/].f_1, Local_904[iVar0 /*23*/].f_10, 1f);
										__LIB_1__::func_991(Local_904[iVar0 /*23*/], 0);
										Local_904[iVar0 /*23*/].f_2 = 2;
									}
								}
							}
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_1(Local_904[iVar0 /*23*/], 0, 1))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(Local_904[iVar0 /*23*/]))
						{
							fVar2 = 3f;
							PED::_0x923583741DC87BCE(Local_904[iVar0 /*23*/], "Murfree");
							AUDIO::STOP_PED_SPEAKING(Local_904[iVar0 /*23*/], true);
							__LIB_2__::func_133(Local_904[iVar0 /*23*/], "SWAMP_GANG_4", 0);
							if (Local_904[iVar0 /*23*/].f_4)
							{
								if (!__LIB_0__::func_163(Local_904[iVar0 /*23*/], 713668775))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_14, fVar2, -1, 0.25f, 0, 40000f);
								}
							}
							else if (!__LIB_0__::func_163(Local_904[iVar0 /*23*/], 2106541073))
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_14, fVar2, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
							}
							__LIB_2__::func_478(Local_904[iVar0 /*23*/], Global_35, func_391(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							Local_904[iVar0 /*23*/].f_7 = { Local_904[iVar0 /*23*/].f_10 };
							Local_904[iVar0 /*23*/].f_2 = 3;
						}
					}
					break;
				case 3:
					if (__LIB_2__::func_1(Local_904[iVar0 /*23*/], 0, 1))
					{
						if (Local_904[iVar0 /*23*/].f_4)
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_904[iVar0 /*23*/], 713668775, true) == 8 || __LIB_0__::func_94(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_14, 1) < 2f) || ENTITY::IS_ENTITY_AT_COORD(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_14, 1f, 1f, 10f, false, false, 0))
							{
								GRAPHICS::SET_TRACKED_POINT_INFO(Local_904[iVar0 /*23*/].f_1, ENTITY::GET_ENTITY_COORDS(Local_904[iVar0 /*23*/], true, false), 1f);
								if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_904[iVar0 /*23*/].f_1))
								{
									if (!PED::_0x5102307CE88798EB(Local_904[iVar0 /*23*/]))
									{
										PED::REQUEST_PED_VISIBILITY_TRACKING(Local_904[iVar0 /*23*/]);
									}
									else if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_904[iVar0 /*23*/]) || !PED::_0x164CECC59E70DF86(Local_904[iVar0 /*23*/], 10f))
									{
										PED::DELETE_PED(&(Local_904[iVar0 /*23*/]));
										Local_904[iVar0 /*23*/].f_2 = 4;
									}
								}
								else
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(Local_904[iVar0 /*23*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
									__LIB_2__::func_788(&(Local_904[iVar0 /*23*/]), 1, 0, 1);
									Local_904[iVar0 /*23*/].f_2 = 4;
								}
							}
						}
						else if ((TASK::GET_SCRIPT_TASK_STATUS(Local_904[iVar0 /*23*/], 2106541073, true) == 8 || ENTITY::IS_ENTITY_AT_COORD(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_14, 1f, 1f, 10f, false, false, 0)) || __LIB_0__::func_94(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_14, 1) < 3f)
						{
							GRAPHICS::SET_TRACKED_POINT_INFO(Local_904[iVar0 /*23*/].f_1, ENTITY::GET_ENTITY_COORDS(Local_904[iVar0 /*23*/], true, false), 1f);
							if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_904[iVar0 /*23*/].f_1))
							{
								if (!PED::_0x5102307CE88798EB(Local_904[iVar0 /*23*/]))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(Local_904[iVar0 /*23*/]);
								}
								else if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_904[iVar0 /*23*/]) || !PED::_0x164CECC59E70DF86(Local_904[iVar0 /*23*/], 10f))
								{
									PED::DELETE_PED(&(Local_904[iVar0 /*23*/]));
									Local_904[iVar0 /*23*/].f_2 = 4;
								}
							}
							else
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(Local_904[iVar0 /*23*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_2__::func_788(&(Local_904[iVar0 /*23*/]), 1, 0, 1);
								Local_904[iVar0 /*23*/].f_2 = 4;
							}
						}
					}
					break;
				case 4:
					break;
				case 5:
					if (__LIB_2__::func_1(Local_904[iVar0 /*23*/], 0, 1))
					{
						GRAPHICS::SET_TRACKED_POINT_INFO(Local_904[iVar0 /*23*/].f_1, ENTITY::GET_ENTITY_COORDS(Local_904[iVar0 /*23*/], true, false), 1f);
						if (!PED::_0x5102307CE88798EB(Local_904[iVar0 /*23*/]))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(Local_904[iVar0 /*23*/]);
						}
						else if ((!ENTITY::IS_ENTITY_ON_SCREEN(Local_904[iVar0 /*23*/]) || !PED::_0x164CECC59E70DF86(Local_904[iVar0 /*23*/], 90f)) || PED::_0x7F9B9791D4CB71F6(Global_35, Local_904[iVar0 /*23*/], 1, 0) != 1)
						{
							PED::DELETE_PED(&(Local_904[iVar0 /*23*/]));
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_904[iVar0 /*23*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							__LIB_2__::func_788(&(Local_904[iVar0 /*23*/]), 1, 0, 1);
						}
						Local_904[iVar0 /*23*/].f_2 = 4;
						if (__LIB_0__::func_94(Local_904[iVar0 /*23*/], func_392(iLocal_354), 1) < 1f || __LIB_0__::func_665(Local_904[iVar0 /*23*/], Global_35, 1, 1) < 8f)
						{
							if (!__LIB_0__::func_491(Local_904[iVar0 /*23*/], 518218985))
							{
								PED::_SET_PED_CROUCH_MOVEMENT(Local_904[iVar0 /*23*/], Local_904[iVar0 /*23*/].f_6, 0, false);
								TASK::TASK_SMART_FLEE_PED(Local_904[iVar0 /*23*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
								__LIB_2__::func_788(&(Local_904[iVar0 /*23*/]), 1, 0, 1);
							}
						}
					}
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_904[iVar0 /*23*/]) && Local_904[iVar0 /*23*/].f_5)
			{
				if (__LIB_4__::func_172(Local_904[iVar0 /*23*/], 0, 0, 0, 1))
				{
					if (ENTITY::_IS_ENTITY_FROZEN(Local_904[iVar0 /*23*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_904[iVar0 /*23*/], false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_237()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_904[iVar0 /*23*/]))
		{
			if (!PED::_0x5102307CE88798EB(Local_904[iVar0 /*23*/]))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_904[iVar0 /*23*/]);
			}
			else if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_904[iVar0 /*23*/]) || !PED::_0x164CECC59E70DF86(Local_904[iVar0 /*23*/], 10f))
			{
				PED::DELETE_PED(&(Local_904[iVar0 /*23*/]));
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_904[iVar0 /*23*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_2__::func_788(&(Local_904[iVar0 /*23*/]), 1, 0, 1);
			}
			Local_904[iVar0 /*23*/].f_2 = 4;
		}
		iVar0++;
	}
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_394();
	if (__LIB_2__::func_1(Local_746[3 /*6*/], 0, 1))
	{
		iLocal_1195 = __LIB_3__::func_547(Local_746[3 /*6*/], Global_35, 0.707f);
	}
	switch (iLocal_1221)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_1183, 4))
			{
				func_396();
			}
			if (((__LIB_2__::func_1(Local_746[0 /*6*/], 0, 1) && __LIB_2__::func_1(Local_746[1 /*6*/], 0, 1)) && __LIB_2__::func_1(Local_746[2 /*6*/], 0, 1)) && __LIB_2__::func_1(Local_746[3 /*6*/], 0, 1))
			{
				iVar4 = 0;
				while (iVar4 < 4)
				{
					if (iVar4 != 2)
					{
						if (!MAP::_DOES_ENTITY_HAVE_BLIP(Local_746[iVar4 /*6*/]))
						{
							__LIB_2__::func_73(Local_746[iVar4 /*6*/], &(uLocal_737[iVar4]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							PED::SET_PED_CONFIG_FLAG(Local_746[iVar4 /*6*/], 317, true);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_746[iVar4 /*6*/], 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_746[iVar4 /*6*/], 52, false);
					PED::SET_PED_CONFIG_FLAG(Local_746[iVar4 /*6*/], 218, true);
					PED::SET_PED_CONFIG_FLAG(Local_746[iVar4 /*6*/], 6, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_731[iVar4], 516, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_746[iVar4 /*6*/], false);
					iVar4++;
				}
				if ((MAP::_DOES_ENTITY_HAVE_BLIP(Local_746[0 /*6*/]) && MAP::_DOES_ENTITY_HAVE_BLIP(Local_746[1 /*6*/])) && MAP::_DOES_ENTITY_HAVE_BLIP(Local_746[3 /*6*/]))
				{
					MAP::_BLIP_SET_MODIFIER(uLocal_737[0], -1034486097);
					MAP::_BLIP_SET_MODIFIER(uLocal_737[1], -1034486097);
					MAP::_BLIP_SET_MODIFIER(uLocal_737[3], -1034486097);
					bLocal_1202 = true;
					iLocal_1221++;
				}
			}
			break;
		case 1:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (Local_355.f_46)
				{
					if (Local_746[iVar3 /*6*/].f_2 < 5)
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_746[iVar3 /*6*/], true);
						if (iVar3 == 3)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							if (iLocal_1195 == 3 || iLocal_1195 == 0)
							{
								TASK::TASK_PLAY_ANIM(0, Local_242[13 /*2*/], Local_242[13 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
							}
							else if (iLocal_1195 == 1)
							{
								TASK::TASK_PLAY_ANIM(0, Local_242[18 /*2*/], Local_242[18 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
							}
							else if (iLocal_1195 == 2)
							{
								TASK::TASK_PLAY_ANIM(0, Local_242[14 /*2*/], Local_242[14 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
							}
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							__LIB_1__::func_474(Local_746[3 /*6*/], &iVar2, 0, 0, 1, 1);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_710, "male", Local_746[3 /*6*/]);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_710, "HORSE", iLocal_731[0]);
							TASK::TASK_STAND_STILL(iLocal_731[0], 10000);
						}
						Local_746[iVar3 /*6*/].f_2 = 5;
					}
				}
				if (__LIB_2__::func_1(Local_746[iVar3 /*6*/], 0, 1))
				{
					TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_746[iVar3 /*6*/], true);
					TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_746[iVar3 /*6*/], false, 0.1f);
				}
				switch (Local_746[iVar3 /*6*/].f_2)
				{
					case 0:
						__LIB_1__::func_991(Local_746[iVar3 /*6*/], 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_746[iVar3 /*6*/]) && PED::_0xA0BC8FAED8CFEB3C(Local_746[iVar3 /*6*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_746[iVar3 /*6*/], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_746[iVar3 /*6*/], true);
							if (iVar3 != 2)
							{
								PED::_SET_PED_CROUCH_MOVEMENT(Local_746[iVar3 /*6*/], false, 0, false);
							}
							else
							{
								PED::_SET_PED_CROUCH_MOVEMENT(Local_746[iVar3 /*6*/], true, 0, false);
							}
							func_399(Local_746[iVar3 /*6*/], "angry");
							PED::SET_PED_USING_ACTION_MODE(Local_746[iVar3 /*6*/], true, -1, 0);
							if (iVar3 == 0)
							{
								__LIB_2__::func_272(Local_746[iVar3 /*6*/], joaat("WEAPON_BOW"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								func_401(&(Local_746[iVar3 /*6*/]), 312619017);
							}
							if (iVar3 == 1)
							{
								__LIB_2__::func_272(Local_746[iVar3 /*6*/], joaat("WEAPON_BOW"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								func_401(&(Local_746[iVar3 /*6*/]), 1232051623);
							}
							if (iVar3 == 2)
							{
								func_401(&(Local_746[iVar3 /*6*/]), -1337267364);
								__LIB_2__::func_272(Local_746[iVar3 /*6*/], iLocal_1255, 1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_746[iVar3 /*6*/], false, 0f);
								ENTITY::SET_ENTITY_VISIBLE(Local_746[iVar3 /*6*/], true);
								PED::_SET_PED_CROUCH_MOVEMENT(Local_746[iVar3 /*6*/], true, 0, false);
							}
							if (iVar3 == 3)
							{
								func_401(&(Local_746[iVar3 /*6*/]), 1694127292);
								WEAPON::_GIVE_WEAPON_TO_PED_2(Local_746[iVar3 /*6*/], joaat("WEAPON_MELEE_TORCH_CROWD"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
								WEAPON::_GIVE_WEAPON_TO_PED_2(Local_746[iVar3 /*6*/], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 50, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							}
							__LIB_2__::func_133(Local_746[0 /*6*/], "SWAMP_GANG_4", 0);
							__LIB_2__::func_133(Local_746[1 /*6*/], "SWAMP_GANG_3", 0);
							__LIB_2__::func_133(Local_746[2 /*6*/], "SWAMP_GANG_4", 0);
							__LIB_2__::func_133(Local_746[3 /*6*/], "SWAMP_GANG_3", 0);
							__LIB_1__::func_148(&uLocal_1239);
							Local_746[iVar3 /*6*/].f_2 = 1;
						}
						break;
					case 1:
						if (__LIB_0__::func_94(iLocal_731[0], vLocal_30, 1) < 5f || __LIB_1__::func_205(Global_35, iLocal_1233, 1, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_746[iVar3 /*6*/], true);
							if (iVar3 == 3)
							{
								if (__LIB_2__::func_1(Local_746[iVar3 /*6*/], 0, 1))
								{
									if (__LIB_0__::func_265(&uLocal_1236) > 0f && bLocal_1200)
									{
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										func_404();
										ANIMSCENE::START_ANIM_SCENE(Local_710);
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										Local_746[3 /*6*/].f_2 = 2;
									}
								}
							}
							else
							{
								Local_746[iVar3 /*6*/].f_2 = 2;
							}
						}
						break;
					case 2:
						if ((__LIB_0__::func_94(Global_35, vLocal_30, 1) < IntToFloat(iLocal_14) || bLocal_1210) || func_30())
						{
							if (iVar3 == 3)
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar2);
								if (iLocal_1195 == 3 || iLocal_1195 == 0)
								{
									TASK::TASK_PLAY_ANIM(0, Local_242[13 /*2*/], Local_242[13 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
								}
								else if (iLocal_1195 == 1)
								{
									TASK::TASK_PLAY_ANIM(0, Local_242[18 /*2*/], Local_242[18 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
								}
								else if (iLocal_1195 == 2)
								{
									TASK::TASK_PLAY_ANIM(0, Local_242[14 /*2*/], Local_242[14 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
								}
								TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
								__LIB_1__::func_474(Local_746[3 /*6*/], &iVar2, 0, 0, 1, 1);
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_710, "male", Local_746[3 /*6*/]);
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_710, "HORSE", iLocal_731[0]);
								TASK::TASK_STAND_STILL(iLocal_731[0], 10000);
								Local_746[iVar3 /*6*/].f_2 = 5;
							}
							if (iVar3 == 2)
							{
								if (__LIB_2__::func_1(Local_746[iVar3 /*6*/], 0, 1))
								{
									if (__LIB_0__::func_265(&uLocal_1236) > 1f)
									{
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_PLAY_ANIM(0, Local_242[12 /*2*/], Local_242[12 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
										__LIB_1__::func_474(Local_746[iVar3 /*6*/], &iVar1, 0.5f, 0.5f, 1, 1);
										Local_746[iVar3 /*6*/].f_2 = 5;
									}
								}
							}
							if (iVar3 == 1)
							{
								if (__LIB_2__::func_1(Local_746[iVar3 /*6*/], 0, 1))
								{
									if (__LIB_0__::func_265(&uLocal_1236) > 1f)
									{
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_PLAY_ANIM(0, Local_242[1 /*2*/], Local_242[1 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
										__LIB_1__::func_474(Local_746[iVar3 /*6*/], &iVar1, 0.6f, 0.6f, 1, 1);
										Local_746[iVar3 /*6*/].f_2 = 5;
									}
								}
							}
							if (iVar3 == 0)
							{
								if (__LIB_0__::func_265(&uLocal_1236) > 1f)
								{
									__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_PLAY_ANIM(0, Local_242[11 /*2*/], Local_242[11 /*2*/].f_1, 8f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
									__LIB_1__::func_474(Local_746[iVar3 /*6*/], &iVar0, 1f, 0, 1, 1);
									__LIB_2__::func_478(Local_746[iVar3 /*6*/], Global_35, func_391(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									Local_746[iVar3 /*6*/].f_2 = 5;
								}
							}
						}
						break;
					case 5:
						if (iVar3 == 0)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_746[0 /*6*/], vLocal_33, 2f, 1, 0, 0);
						}
						if (iVar3 == 1)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_746[1 /*6*/], vLocal_36, 2f, 1, 0, 0);
						}
						if (!bLocal_1207)
						{
							if (bLocal_1206)
							{
								__LIB_1__::func_148(&uLocal_1242);
								bLocal_1207 = true;
							}
						}
						if ((bLocal_1205 || (bLocal_1206 && __LIB_0__::func_265(&uLocal_1242) > 8f)) || bLocal_1216)
						{
							if (iVar3 < 3)
							{
								if (iVar3 == 1)
								{
									if (!ENTITY::_0x0B7CB1300CBFE19C(Local_746[iVar3 /*6*/], 1))
									{
										TASK::TASK_COMBAT_PED(Local_746[iVar3 /*6*/], Global_35, 0, 0);
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										Local_746[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER();
										Local_746[1 /*6*/].f_2 = 6;
									}
								}
								else if (iVar3 == 0)
								{
									if (!ENTITY::_0x0B7CB1300CBFE19C(Local_746[iVar3 /*6*/], 1))
									{
										TASK::TASK_COMBAT_PED(Local_746[iVar3 /*6*/], Global_35, 0, 0);
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										Local_746[iVar3 /*6*/].f_2 = 6;
									}
								}
								else if (iVar3 == 2)
								{
									if (!ENTITY::_0x0B7CB1300CBFE19C(Local_746[iVar3 /*6*/], 1))
									{
										PED::_0xB8DE69D9473B7593(Local_746[iVar3 /*6*/], 12);
										TASK::TASK_COMBAT_PED(Local_746[iVar3 /*6*/], Global_35, 0, 0);
										__LIB_4__::func_72(Local_746[iVar3 /*6*/]);
										Local_746[iVar3 /*6*/].f_2 = 6;
									}
								}
							}
						}
						if (iVar3 == 3)
						{
							if (__LIB_2__::func_1(Local_746[iVar3 /*6*/], 0, 1))
							{
								if (!ENTITY::_0x0B7CB1300CBFE19C(Local_746[iVar3 /*6*/], 1))
								{
									TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_2__::func_478(Local_746[iVar3 /*6*/], Global_35, func_391(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									Local_746[iVar3 /*6*/].f_2 = 6;
								}
							}
						}
						break;
					case 6:
						if (iVar3 == 0)
						{
							if (!bLocal_1211)
							{
								if (!__LIB_2__::func_1(Local_746[0 /*6*/], 0, 1))
								{
									bLocal_1211 = true;
									iLocal_1222++;
								}
							}
						}
						if (iVar3 == 1)
						{
							if (!bLocal_1212)
							{
								if (!__LIB_2__::func_1(Local_746[1 /*6*/], 0, 1))
								{
									bLocal_1212 = true;
									iLocal_1222++;
								}
							}
						}
						if (iVar3 == 2)
						{
							if (!bLocal_1213)
							{
								if (!__LIB_2__::func_1(Local_746[2 /*6*/], 0, 1))
								{
									bLocal_1213 = true;
									iLocal_1222++;
								}
							}
						}
						if (iVar3 == 3)
						{
							if (!bLocal_1214)
							{
								if (!__LIB_2__::func_1(Local_746[3 /*6*/], 0, 1))
								{
									bLocal_1214 = true;
									iLocal_1222++;
								}
							}
						}
						if (iLocal_1222 >= 3)
						{
							if (__LIB_2__::func_1(Local_746[iVar3 /*6*/], 0, 1))
							{
								if (!bLocal_1215)
								{
									TASK::CLEAR_PED_TASKS(Local_746[iVar3 /*6*/], true, false);
									PED::_0x1854217C640B39EC(Local_746[iVar3 /*6*/], Global_35, 0f, 0f, 0f, 2f, 1, 0);
									PED::_0xB8DE69D9473B7593(Local_746[iVar3 /*6*/], 12);
									TASK::TASK_COMBAT_PED(Local_746[iVar3 /*6*/], Global_35, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_746[iVar3 /*6*/], 0, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_746[iVar3 /*6*/], 5, true);
									PED::SET_PED_COMBAT_MOVEMENT(Local_746[iVar3 /*6*/], 2);
									if (!MAP::_DOES_ENTITY_HAVE_BLIP(Local_746[iVar3 /*6*/]))
									{
										__LIB_2__::func_73(Local_746[iVar3 /*6*/], &(uLocal_737[iVar4]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
									}
									else
									{
										MAP::_BLIP_REMOVE_MODIFIER(uLocal_737[iVar3], -1034486097);
									}
									bLocal_1215 = true;
								}
							}
						}
						if (iVar3 == 0)
						{
							if (__LIB_0__::func_94(Local_746[0 /*6*/], vLocal_33, 1) < 3f)
							{
								if (!bLocal_1217)
								{
									if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(Local_746[0 /*6*/], false))
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_746[0 /*6*/], false);
										PED::SET_PED_COMBAT_MOVEMENT(Local_746[0 /*6*/], 2);
										bLocal_1217 = true;
									}
								}
							}
						}
						if (iVar3 == 1)
						{
							if (__LIB_0__::func_94(Local_746[1 /*6*/], vLocal_36, 1) < 3f)
							{
								if (!bLocal_1218)
								{
									if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(Local_746[1 /*6*/], false))
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_746[1 /*6*/], false);
										PED::SET_PED_COMBAT_MOVEMENT(Local_746[1 /*6*/], 2);
										bLocal_1218 = true;
									}
								}
							}
						}
						break;
				}
				iVar3++;
			}
			break;
	}
}

void func_239()
{
	switch (iLocal_745)
	{
		case 0:
			if (bLocal_1197)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1224))
				{
					iLocal_1224 = __LIB_1__::func_545(func_65(3), func_405(iLocal_354), func_406(iLocal_354), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					iLocal_771 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_771, func_405(iLocal_354), 1f);
					ENTITY::_0xA91E6CF94404E8C9(iLocal_1224);
					__LIB_1__::func_991(iLocal_1224, 0);
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1224, true, 0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1224, true);
					__LIB_4__::func_239(iLocal_1224);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_1224, "Mood_Angry_1", 0);
					__LIB_2__::func_133(iLocal_1224, "SWAMP_GANG_4", 0);
					__LIB_2__::func_272(iLocal_1224, iLocal_1255, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_1224, true);
					TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_1224, false, 0.1f);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1224, false);
					func_401(&iLocal_1224, 1999468834);
					iLocal_745 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_1(iLocal_1224, 0, 1))
			{
				GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_771, ENTITY::GET_ENTITY_COORDS(iLocal_1224, true, false), 1f);
				if ((__LIB_1__::func_205(Global_35, iLocal_1232, 1, 0) || __LIB_0__::func_665(Global_35, iLocal_1224, 1, 1) < 2f) || func_91(iLocal_1224, 0, &(Local_355.f_5), &uLocal_1194, 0, 0))
				{
					if ((((iLocal_354 == 0 && bLocal_1200) || (iLocal_354 != 0 && bLocal_1199)) || (__LIB_0__::func_665(Global_35, iLocal_1224, 1, 1) < 3f && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_771))) || func_91(iLocal_1224, 0, &(Local_355.f_5), &uLocal_1194, 0, 0))
					{
						if (PED::_0x7F9B9791D4CB71F6(Global_35, iLocal_1224, 1, 0) != 1)
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_1224, true);
							PED::_SET_PED_CROUCH_MOVEMENT(iLocal_1224, false, 0, false);
							PED::_0x789DABD18E9024DB(iLocal_1224, 32, 0);
							TASK::TASK_GRAPPLE(iLocal_1224, Global_35, 0, 1, 3f, 1, 101711872);
							AUDIO::_PLAY_SOUND_FROM_POSITION("FOLIAGE_RUSTLE", ENTITY::GET_ENTITY_COORDS(iLocal_1224, true, false), "RESH_Sounds", false, 0, true, 0);
							bLocal_1201 = true;
							iLocal_745 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_1(iLocal_1224, 0, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_1248))
				{
					__LIB_1__::func_148(&uLocal_1248);
				}
				else if (__LIB_0__::func_265(&uLocal_1248) > 10f)
				{
					if (!PED::IS_PED_IN_COMBAT(iLocal_1224, Global_35) && !__LIB_0__::func_491(iLocal_1224, 518218985))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1224, Global_35, 3, 16640, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_2__::func_788(&Global_35, 1, 0, 1);
					}
				}
				if (!__LIB_1__::func_205(Global_35, iLocal_1232, 1, 0))
				{
					if (__LIB_0__::func_665(iLocal_1224, Global_35, 1, 1) > 2f || __LIB_1__::func_205(Global_35, iLocal_1233, 1, 0))
					{
						if (!PED::IS_PED_IN_COMBAT(iLocal_1224, Global_35) && !__LIB_0__::func_491(iLocal_1224, 518218985))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1224, Global_35, 3, 16640, -1082130432 /* Float: -1f */, -1, 0);
							__LIB_2__::func_788(&Global_35, 1, 0, 1);
						}
					}
				}
				if (__LIB_0__::func_665(Global_35, iLocal_1224, 1, 1) < 3f && !__LIB_0__::func_27(iLocal_729, 4))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_1227))
					{
						__LIB_2__::func_73(iLocal_1224, &iLocal_743, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_1224, 2, -1f, -1f, -1f);
					__LIB_2__::func_478(iLocal_1224, Global_35, func_391(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1184);
					__LIB_1__::func_683(&iLocal_729, 4);
				}
				if (__LIB_0__::func_665(Global_35, iLocal_1224, 1, 1) < 2f)
				{
					if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 0.25f)
					{
						PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 0.25f);
					}
				}
				else if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1f)
				{
					PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
				}
			}
			else if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1f)
			{
				PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
			}
			if (__LIB_0__::func_27(iLocal_729, 4) && !bLocal_1187)
			{
				if (__LIB_0__::func_265(&uLocal_1184) > 2f)
				{
					__LIB_2__::func_478(Global_35, iLocal_1224, "RE_SH_BYN_V1_SHOCK_KNOWN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_1187 = true;
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1224))
			{
				if (__LIB_2__::func_1(iLocal_1224, 0, 1))
				{
					iLocal_745 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_240()
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_265(&uLocal_1324) >= fLocal_1327)
	{
		bVar1 = false;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (__LIB_2__::func_1(Local_746[iVar0 /*6*/], 0, 1))
			{
				if (!bVar1)
				{
					if (PED::IS_PED_IN_COMBAT(Local_746[iVar0 /*6*/], 0) || Local_746[iVar0 /*6*/].f_2 > 6)
					{
						if (iVar0 == 3)
						{
							__LIB_2__::func_478(Local_746[iVar0 /*6*/], Global_35, "SWAMP3_COMBAT_GRUNT", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iVar0 == 1)
						{
							__LIB_2__::func_478(Local_746[iVar0 /*6*/], Global_35, "SWAMP3_COMBAT_GRUNT", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(Local_746[iVar0 /*6*/], Global_35, "SWAMP4_COMBAT_GRUNT", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_148(&uLocal_1324);
						fLocal_1327 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
						bVar1 = true;
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_241()
{
	int iVar0;
	if (!bLocal_1202)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(Local_746[iVar0 /*6*/], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

char* func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_SH_BYN_V1_PLYR_BUCK";
		case 1:
			return "RE_SH_BYN_V1_PLYR_BUCKED_OFF";
		case 2:
			return "RE_SH_BYN_V1_PLYR_FOUND_HORSE";
		case 3:
			return "RE_SH_BYN_V1_ATTACK_INIT";
		case 4:
			return "RE_SH_BYN_V1_SHOCK_WHO";
		case 5:
			return "RE_SH_BYN_V1_SHOCK_KNOWN";
		case 6:
			return "RE_SH_BYN_V1_ATTACK_A";
		case 7:
			return "RE_SH_BYN_V1_ATTACK_B";
		case 8:
			return "RE_SH_BYN_V1_PLYFINAL_WHO";
		case 9:
			return "RE_SH_BYN_V1_PLYFINAL_KNOWN";
	}
	return "RERC_ODR_V1_END_A";
}

void func_253(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	switch (iParam2)
	{
		case 0:
			switch (iParam3)
			{
				case 0:
					bVar4 = true;
					sLocal_728 = "RE_SPOOKED_HORSE_V1_A";
					vVar0 = { 1922.13f, -680.47f, 40.1f };
					break;
				case 1:
					bVar5 = true;
					bVar3 = true;
					vVar0 = { 1892.614f, -662.7946f, 41.0858f };
					break;
				case 2:
					bVar5 = true;
					bVar3 = true;
					vVar0 = { 1862.79f, -593.95f, 42.3f };
					break;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
					bVar4 = true;
					sLocal_728 = "RE_SPOOKED_HORSE_V2_A";
					vVar0 = { 2399.706f, -710.4542f, 39.9595f };
					break;
				case 1:
					bVar5 = true;
					bVar3 = true;
					vVar0 = { 2398.02f, -725.83f, 40.89f };
					break;
				case 2:
					bVar5 = true;
					bVar3 = true;
					vVar0 = { 2385.7f, -776.98f, 40.54f };
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					bVar4 = true;
					sLocal_728 = "RE_SPOOKED_HORSE_V3_A";
					vVar0 = { 2087.936f, -397.6283f, 42.2126f };
					break;
				case 1:
					bVar5 = true;
					bVar3 = true;
					vVar0 = { 2087.315f, -421.5485f, 41.8252f };
					break;
				case 2:
					bVar3 = true;
					bVar5 = true;
					vVar0 = { 2111.21f, -467.21f, 40.56f };
					break;
			}
			break;
	}
	TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	TASK::OPEN_SEQUENCE_TASK(&iParam1);
	if (bVar3 && !bVar5)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, -1, 0.25f, 0, 40000f);
	}
	if (bVar4)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_728, 0, 201351168, -1, 0, 0, -1);
	}
	if (bVar5)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 3f, -1, 0.25f, 0, 40000f);
	}
	TASK::TASK_STAND_STILL(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iParam1);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iParam1);
	TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, "FEAR", false);
}

float func_254(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 2:
					return 15f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 2:
					return 28.5f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5f;
				case 1:
					return 5f;
				case 2:
					return 28.5f;
				default:
					break;
			}
			break;
	}
	return 10f;
}

void func_388(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 1;
					uParam0->f_10 = { 1909.89f, -690.11f, 42.68f };
					uParam0->f_13 = 6.49f;
					uParam0->f_14 = { 0f, 0f, 0f };
					uParam0->f_17 = 0f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 0f, 0f, 0f };
					uParam0->f_22 = 5f;
					break;
				case 1:
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					uParam0->f_6 = 1;
					uParam0->f_10 = { 1923.83f, -656.77f, 41.76f };
					uParam0->f_13 = -178.12f;
					uParam0->f_14 = { 1913.29f, -662.96f, 41.47f };
					uParam0->f_17 = 31.5f;
					uParam0->f_18 = 2f;
					uParam0->f_19 = { 1930.19f, -654.14f, 40.36f };
					uParam0->f_22 = 0.1f;
					break;
				case 2:
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					uParam0->f_6 = 0;
					uParam0->f_10 = { 1896.98f, -656.76f, 42.03f };
					uParam0->f_13 = -142.84f;
					uParam0->f_14 = { 1891.73f, -673.41f, 40.92f };
					uParam0->f_17 = 33f;
					uParam0->f_18 = 2f;
					uParam0->f_19 = { 1896.98f, -656.76f, 42.03f };
					uParam0->f_22 = 0.1f;
					break;
				case 3:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 0;
					uParam0->f_10 = { 1894.96f, -611.57f, 41.52f };
					uParam0->f_13 = 113.12f;
					uParam0->f_14 = { 1880.7f, -616.83f, 41.15f };
					uParam0->f_17 = 46.23f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 1894.96f, -611.57f, 41.52f };
					uParam0->f_22 = 1.1f;
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 0:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 0;
					uParam0->f_10 = { 2400.47f, -699.04f, 40.55f };
					uParam0->f_13 = 31.5896f;
					uParam0->f_14 = { 2389.052f, -677.1187f, 41.3468f };
					uParam0->f_17 = 36f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 2396.23f, -697.3793f, 40.52f };
					uParam0->f_22 = 0.5f;
					break;
				case 1:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 0;
					uParam0->f_10 = { 2414.268f, -722.0199f, 40.6502f };
					uParam0->f_13 = 95.9847f;
					uParam0->f_14 = { 2401.212f, -731.9557f, 40.6188f };
					uParam0->f_17 = 27.39f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 2414.268f, -722.0199f, 40.6502f };
					uParam0->f_22 = 0.5f;
					break;
				case 2:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 0;
					uParam0->f_10 = { 2392.17f, -688.69f, 41.54f };
					uParam0->f_13 = -142.13f;
					uParam0->f_14 = { 2395.63f, -697.43f, 40.52f };
					uParam0->f_17 = 23.93f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 2392.17f, -688.69f, 41.54f };
					uParam0->f_22 = 0.1f;
					break;
				case 3:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 0;
					uParam0->f_10 = { 2402.42f, -730.17f, 40.75f };
					uParam0->f_13 = 70.3735f;
					uParam0->f_14 = { 2391.08f, -732.88f, 40.6f };
					uParam0->f_17 = 19.37f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 2402.42f, -730.17f, 40.75f };
					uParam0->f_22 = 0.1f;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					uParam0->f_4 = 1;
					uParam0->f_5 = 0;
					uParam0->f_6 = 1;
					uParam0->f_10 = { 2100.24f, -402.04f, 41.91f };
					uParam0->f_13 = 35.0265f;
					uParam0->f_14 = { 2078.03f, -412.08f, 43.36f };
					uParam0->f_17 = 28f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 2100.24f, -402.04f, 41.91f };
					uParam0->f_22 = 0.1f;
					break;
				case 1:
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					uParam0->f_6 = 1;
					uParam0->f_10 = { 2080.402f, -423.1422f, 42.3956f };
					uParam0->f_13 = 235.5329f;
					uParam0->f_14 = { 2093.771f, -430.5916f, 40.9522f };
					uParam0->f_17 = 25.1f;
					uParam0->f_18 = 5f;
					uParam0->f_19 = { 2080.402f, -423.1422f, 42.3956f };
					uParam0->f_22 = 0.5f;
					break;
			}
			break;
	}
}

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SWAMP3_CALLOUT_CLICK";
		case 1:
			return "SWAMP4_CALLOUT_CLICK";
		case 2:
			return "SWAMP3_URGENT_CLICK";
		case 3:
			return "SWAMP4_URGENT_CLICK";
		case 4:
			return "GENERIC_SHOCKED_HIGH";
		case 5:
			return "";
		case 6:
			return "ATTACK_LUNGE_CRY";
		case 7:
			return "";
		case 8:
			return "";
	}
	return "RERC_ODR_V1_END_A";
}

Vector3 func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2341.745f, -625.3884f, 40.4907f;
		case 1:
			return 2341.745f, -625.3884f, 40.4907f;
		case 2:
			return 2341.745f, -625.3884f, 40.4907f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_394()
{
	if (__LIB_1__::func_205(Global_35, iLocal_1233, 1, 0))
	{
		iLocal_1323 = func_470(&(Local_746[3 /*6*/]), &iLocal_1301, 45f, &Local_1266, &(Local_355.f_192), 0f, 1, 0, "", iLocal_1322, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iLocal_1323 == 0)
		{
			if (__LIB_0__::func_181())
			{
				__LIB_2__::func_478(Global_35, Local_746[3 /*6*/], "CALL_OUT_TO_WITNESS_HIGH_FAR", "", -1082130432 /* Float: -1f */, 6, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(Global_35, Local_746[3 /*6*/], "CALL_OUT_TO_WITNESS_HIGH_FAR", "", -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			__LIB_2__::func_411(&(Local_1266[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1266[1 /*17*/]), 0, 0);
			bLocal_1210 = true;
		}
		else if (iLocal_1323 == 1)
		{
			if (__LIB_0__::func_181())
			{
				__LIB_2__::func_478(Global_35, Local_746[3 /*6*/], "GET_AWAY_FROM_ME_DRUNK", "", -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(Global_35, Local_746[3 /*6*/], "ANIMAL_STAY_BACK", "", -1082130432 /* Float: -1f */, 5, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			__LIB_2__::func_411(&(Local_1266[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1266[1 /*17*/]), 0, 0);
			bLocal_1210 = true;
		}
	}
}

void func_396()
{
	if (iLocal_1181 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_746[iLocal_1181 /*6*/]))
		{
			Local_746[iLocal_1181 /*6*/] = __LIB_1__::func_545(func_65(3), func_473(iLocal_354, iLocal_1181), func_474(iLocal_354, iLocal_1181), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		iLocal_1181++;
	}
	else if (iLocal_1181 >= 4)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_1233, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1232, 1, 0))
		{
			__LIB_1__::func_683(&iLocal_1183, 4);
			bLocal_1202 = true;
		}
	}
}

void func_399(int iParam0, char* sParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::_0x923583741DC87BCE(iParam0, "Default");
		PED::_0x89F5E7ADECCCB49C(iParam0, sParam1);
	}
}

void func_401(int iParam0, int iParam1)
{
	PED::_SET_PED_BODY_COMPONENT(*iParam0, iParam1);
	PED::_UPDATE_PED_VARIATION(*iParam0, false, true, true, true, false);
}

void func_404()
{
	func_478();
	switch (iLocal_354)
	{
		case 0:
		case 1:
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_710, "HORSE", iLocal_731[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_710, "male", Local_746[3 /*6*/], 0);
			break;
	}
}

Vector3 func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1898.362f, -657.2825f, 41.0309f;
		case 1:
			return 2402.65f, -723.98f, 40.81f;
		case 2:
			return 2085.528f, -394.7998f, 42.2653f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 153.0122f;
		case 1:
			return -140.79f;
		case 2:
			return 215.0289f;
		default:
			break;
	}
	return 0f;
}

int func_470(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_519(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

Vector3 func_473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1871.91f, -588.74f, 43.47f;
				case 1:
					return 1839.34f, -588.08f, 42.83f;
				case 2:
					return 1858.34f, -586.43f, 41.76f;
				case 3:
					return 1859.38f, -597.06f, 43.16f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2364.02f, -784.24f, 41.49f;
				case 1:
					return 2387.92f, -785.53f, 41.4f;
				case 2:
					return 2399.01f, -779.64f, 41.6f;
				case 3:
					return 2387.25f, -786.35f, 40.95f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2113.715f, -474.1132f, 40.6357f;
				case 1:
					return 2116.98f, -458.87f, 41.66f;
				case 2:
					return 2120.89f, -464.37f, 41.34f;
				case 3:
					return 2113.566f, -473.1534f, 40.6683f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_474(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -178.22f;
				case 1:
					return -159.78f;
				case 2:
					return -168.39f;
				case 3:
					return -151.29f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -40.14f;
				case 1:
					return -5.63f;
				case 2:
					return -19.52f;
				case 3:
					return 297.7202f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3.5255f;
				case 1:
					return 37.3271f;
				case 2:
					return 49.06f;
				case 3:
					return 18.1673f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_478()
{
	switch (iLocal_354)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_710, vLocal_30, 0f, 0f, 50f, 2);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_710, vLocal_30, 0f, 0f, 150f, 2);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_710, vLocal_30, 0f, 0f, 220f, 2);
			break;
	}
}

int func_519(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_519(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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

