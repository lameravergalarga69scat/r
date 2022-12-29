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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	var uLocal_28 = 0;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	bool bLocal_52 = false;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<22> Local_69 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_91 = 3;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	char* sLocal_152[3] = { NULL, NULL, NULL };
	char* sLocal_156 = NULL;
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
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	vector3 vLocal_188 = { 0f, 0f, 0f };
	vector3 vLocal_191 = { 0f, 0f, 0f };
	float fLocal_194 = 0f;
	vector3 vLocal_195 = { 0f, 0f, 0f };
	vector3 vLocal_198 = { 0f, 0f, 0f };
	float fLocal_201 = 0f;
	vector3 vLocal_202 = { 0f, 0f, 0f };
	float fLocal_205 = 0f;
	vector3 vLocal_206 = { 0f, 0f, 0f };
	float fLocal_209 = 0f;
	vector3 vLocal_210 = { 0f, 0f, 0f };
	float fLocal_213 = 0f;
	vector3 vLocal_214 = { 0f, 0f, 0f };
	vector3 vLocal_217 = { 0f, 0f, 0f };
	vector3 vLocal_220 = { 0f, 0f, 0f };
	vector3 vLocal_223 = { 0f, 0f, 0f };
	vector3 vLocal_226 = { 0f, 0f, 0f };
	vector3 vLocal_229 = { 0f, 0f, 0f };
	vector3 vLocal_232[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_248[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_254[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_270[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_276 = { 0f, 0f, 0f };
	vector3 vLocal_279 = { 0f, 0f, 0f };
	vector3 vLocal_282 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_294 = { 0f, 0f, 0f };
	vector3 vLocal_297 = { 0f, 0f, 0f };
	vector3 vLocal_300 = { 0f, 0f, 0f };
	vector3 vLocal_303 = { 0f, 0f, 0f };
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_309 = { 0f, 0f, 0f };
	vector3 vLocal_312 = { 0f, 0f, 0f };
	vector3 vLocal_315 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	vector3 vLocal_321 = { 0f, 0f, 0f };
	vector3 vLocal_324 = { 0f, 0f, 0f };
	vector3 vLocal_327 = { 0f, 0f, 0f };
	vector3 vLocal_330 = { 0f, 0f, 0f };
	vector3 vLocal_333 = { 0f, 0f, 0f };
	vector3 vLocal_336 = { 0f, 0f, 0f };
	vector3 vLocal_339 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	vector3 vLocal_345 = { 0f, 0f, 0f };
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_351 = { 0f, 0f, 0f };
	vector3 vLocal_354 = { 0f, 0f, 0f };
	vector3 vLocal_357 = { 0f, 0f, 0f };
	float fLocal_360 = 0f;
	vector3 vLocal_361 = { 0f, 0f, 0f };
	float fLocal_364 = 0f;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	struct<9> Local_396[11];
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	bool bLocal_498 = false;
	bool bLocal_499 = false;
	bool bLocal_500 = false;
	vector3 vLocal_501 = { 0f, 0f, 0f };
	float fLocal_504 = 0f;
	bool bLocal_505 = false;
	bool bLocal_506 = false;
	bool bLocal_507 = false;
	int iLocal_508 = 0;
	bool bLocal_509 = false;
	int iLocal_510 = 0;
	bool bLocal_511 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_55 = joaat("KNOCKEDOUT_HOGTIED_CARRIABLE_HUMAN");
	iLocal_56 = 1988748538;
	iLocal_57 = 395506985;
	fLocal_61 = 999f;
	fLocal_62 = 0f;
	iLocal_67 = -1;
	iLocal_102 = joaat("CS_EDMUNDLOWRY");
	iLocal_103 = joaat("P_KNIFE03X");
	iLocal_104 = joaat("P_KNIFE02X");
	iLocal_105 = joaat("S_INTERACT_LANTERN01X");
	iLocal_106 = joaat("P_LIGHTER01X");
	iLocal_107 = joaat("S_HEADSEVERED01X");
	iLocal_108 = joaat("P_CS_LUC_BASEDR");
	iLocal_109 = joaat("P_CS_LUC_BASEDR_1");
	iLocal_110 = joaat("P_DININGCHAIRS01X");
	iLocal_111 = joaat("P_DESKORGANIZER01X");
	iLocal_112 = joaat("P_DOOR_VAL_JAIL_CELL01X");
	iLocal_113 = joaat("S_ROPEHOGTIEHANDS01X");
	iLocal_114 = joaat("S_ROPEHOGTIELEGS01X");
	iLocal_115 = joaat("P_FOLDEDBILLS01X");
	iLocal_116 = joaat("P_WINDSORCHAIR03X");
	iLocal_117 = joaat("P_SAWBUCKTABLE01X");
	iLocal_118 = joaat("P_PEN01X");
	iLocal_119 = joaat("P_CS_NEWSPAPER_03X");
	iLocal_120 = joaat("P_PAPERSTACK01X");
	iLocal_121 = joaat("P_CS_BOOK03X");
	iLocal_122 = joaat("P_JOURNAL_OPEN01X");
	sLocal_151 = "pl_Exit_Knife_Throw_Head";
	vLocal_188 = { -614.8339f, 531.6182f, 94.9649f };
	vLocal_191 = { -600.6268f, 523.6281f, 96.281f };
	fLocal_194 = 233.4649f;
	vLocal_195 = { -275.8659f, 804.9799f, 118.38f };
	vLocal_198 = { -615.7342f, 532.1246f, 93.6386f };
	fLocal_201 = 159.2644f;
	vLocal_202 = { -613.0818f, 527.9872f, 93.6155f };
	fLocal_205 = 102.0519f;
	vLocal_206 = { -615.0019f, 526.4056f, 93.8796f };
	fLocal_209 = 2.772f;
	vLocal_210 = { -608.1656f, 518.4044f, 95.4801f };
	fLocal_213 = 227.1566f;
	vLocal_214 = { -278.0811f, 804.5123f, 118.38f };
	vLocal_217 = { -276.921f, 804.802f, 119.19f };
	vLocal_220 = { 2.44f, 0.05f, -53.7f };
	vLocal_223 = { -276.691f, 804.842f, 119.19f };
	vLocal_226 = { 94.96f, 87.89f, -55.8f };
	vLocal_229 = { -276.1192f, 805.3428f, 118.3801f };
	vLocal_276 = { -615.907f, 531.879f, 94.728f };
	vLocal_279 = { 0f, 0f, -140.167f };
	vLocal_282 = { 3f, 4f, 2.5f };
	vLocal_285 = { -609.772f, 522.11f, 96.17f };
	vLocal_288 = { 9.999998f, 0f, 42.12f };
	vLocal_291 = { -609.772f, 522.11f, 96.17f };
	vLocal_294 = { 9.999998f, 0f, 42.12f };
	vLocal_297 = { -608.173f, 520.256f, 95.1998f };
	vLocal_300 = { 0f, 0f, 41f };
	vLocal_303 = { 2.5f, 1.5f, 5f };
	vLocal_306 = { -614.172f, 528.273f, 95.086f };
	vLocal_309 = { 0f, 0f, -139.5f };
	vLocal_312 = { 5.1f, 11.5f, 3f };
	vLocal_315 = { -275.8659f, 804.9799f, 118.38f };
	vLocal_318 = { 0f, 0f, 0f };
	vLocal_321 = { 0.2f, 0.2f, 0.2f };
	vLocal_324 = { -276.74f, 805.847f, 119.656f };
	vLocal_327 = { 0f, 0f, 10f };
	vLocal_330 = { 4f, 5f, 3f };
	vLocal_333 = { -276.74f, 805.847f, 119.323f };
	vLocal_336 = { 0f, 0f, 0f };
	vLocal_339 = { 2.5f, 2.5f, 2.5f };
	vLocal_342 = { -615.8583f, 531.0711f, 93.6205f };
	vLocal_345 = { -278.0811f, 804.5123f, 118.38f };
	vLocal_348 = { -277.1705f, 808.3348f, 118.3752f };
	vLocal_351 = { -277.0516f, 807.5224f, 118.3752f };
	vLocal_354 = { -277.1969f, 807.3624f, 119.2013f };
	vLocal_357 = { -276.7831f, 813.0247f, 118.3358f };
	fLocal_360 = 187.4111f;
	vLocal_361 = { -278.3121f, 812.4127f, 118.3428f };
	fLocal_364 = 97.9669f;
	iLocal_374 = 1;
	vLocal_501 = { -275.1896f, 802.0158f, 118.4115f };
	fLocal_504 = 10f;
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
			__LIB_0__::func_11(uParam0);
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
				__LIB_14__::func_151(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_12__::func_996(uParam0);
			}
			__LIB_13__::func_170(uParam0);
		}
	}
	__LIB_13__::func_318(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
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
		if (!__LIB_0__::func_75(&(uParam0->f_2597)))
		{
			__LIB_1__::func_283(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				__LIB_14__::func_151(uParam0);
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
			__LIB_0__::func_11(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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
		iVar0 = __LIB_12__::func_492(uParam0);
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
		__LIB_1__::func_164(0);
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
			__LIB_13__::func_29(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_13__::func_29(uParam0, 0);
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
		__LIB_18__::func_769(uParam0, __LIB_0__::func_58(uParam0));
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
			func_131();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_1__::func_837(1, 1);
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
	__LIB_14__::func_151(uParam0);
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
			if (!__LIB_0__::func_75(&(uParam0->f_2597)))
			{
				__LIB_1__::func_283(&(uParam0->f_2597), 0);
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
			else if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500)
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
		__LIB_14__::func_151(uParam0);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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
	__LIB_12__::func_739(uParam0);
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
		__LIB_12__::func_784(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
		__LIB_9__::func_239(uParam0->f_174);
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_8__::func_993(uParam0->f_174);
	}
	if (__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		__LIB_1__::func_559(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
	}
	__LIB_13__::func_29(uParam0, 0);
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
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 4);
	__LIB_12__::func_657(uParam0, 50f);
	__LIB_12__::func_656(uParam0, 50f);
	__LIB_12__::func_781(uParam0, 4103, 18432, 0, -1, -1, 2);
	__LIB_12__::func_782(uParam0, 4103, 18432, 0, -1, -1, 0);
	func_189();
	vLocal_232[0 /*3*/] = { -608.2979f, 520.525f, 95.5446f };
	fLocal_248[0] = 36.9723f;
	vLocal_254[0 /*3*/] = { vLocal_198 };
	fLocal_270[0] = fLocal_201;
	vLocal_232[1 /*3*/] = { -615.9941f, 531.0787f, 93.6206f };
	fLocal_248[1] = 119.7172f;
	vLocal_254[1 /*3*/] = { vLocal_202 };
	fLocal_270[1] = fLocal_205;
	vLocal_232[2 /*3*/] = { -601.1768f, 491.6494f, 96.4836f };
	fLocal_248[2] = 311.9164f;
	vLocal_254[2 /*3*/] = { -601.1768f, 491.6494f, 96.4836f };
	fLocal_270[2] = 311.9164f;
	vLocal_232[3 /*3*/] = { -273.9409f, 790.3513f, 117.5812f };
	fLocal_248[3] = 10.7672f;
	vLocal_254[3 /*3*/] = { -272.9409f, 791.3513f, 117.5812f };
	fLocal_270[3] = 10.7672f;
	vLocal_232[4 /*3*/] = { -275.4271f, 799.4703f, 118.3652f };
	fLocal_248[4] = 185.3757f;
	vLocal_254[4 /*3*/] = { -271.9167f, 807.3281f, 118.3688f };
	fLocal_270[4] = 99.1085f;
	if (__LIB_0__::func_181() || bLocal_33)
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 0);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	}
	sLocal_152[0] = "RSK_GETOUT1";
	sLocal_152[1] = "RSK_GETOUT2";
	sLocal_152[2] = "RSK_GETOUT3";
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, iLocal_102, 7);
	__LIB_12__::func_867(uParam0, iLocal_103, 7);
	__LIB_12__::func_867(uParam0, iLocal_105, 7);
	__LIB_12__::func_867(uParam0, iLocal_107, 7);
	__LIB_12__::func_867(uParam0, iLocal_106, 7);
	__LIB_12__::func_867(uParam0, iLocal_110, 2);
	__LIB_12__::func_867(uParam0, iLocal_108, 7);
	__LIB_12__::func_867(uParam0, iLocal_109, 7);
	__LIB_12__::func_867(uParam0, iLocal_117, 2);
	__LIB_12__::func_867(uParam0, iLocal_116, 2);
	__LIB_12__::func_867(uParam0, iLocal_118, 6);
	__LIB_12__::func_867(uParam0, iLocal_119, 6);
	__LIB_12__::func_867(uParam0, iLocal_111, 2);
	__LIB_12__::func_867(uParam0, iLocal_120, 2);
	__LIB_12__::func_867(uParam0, iLocal_122, 6);
	__LIB_12__::func_867(uParam0, iLocal_121, 6);
	__LIB_12__::func_867(uParam0, iLocal_110, 2);
	__LIB_12__::func_867(uParam0, iLocal_112, 6);
	__LIB_12__::func_867(uParam0, iLocal_113, 6);
	__LIB_12__::func_867(uParam0, iLocal_114, 6);
	__LIB_12__::func_867(uParam0, iLocal_115, 6);
	__LIB_12__::func_908(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(iLocal_55);
	GRAPHICS::_0x5199405EABFBD7F0("PlayerWakeUpKnockout");
	GRAPHICS::_0x5199405EABFBD7F0("PlayerKnockout_SerialKiller");
	AUDIO::PREPARE_MUSIC_EVENT("SKLR1_RIDE");
	AUDIO::PREPARE_MUSIC_EVENT("SKLR1_DELIVER");
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
	func_205();
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_232[0 /*3*/] };
			Var1.f_3 = fLocal_248[0];
			break;
		case 1:
			Var1 = { vLocal_232[1 /*3*/] };
			Var1.f_3 = fLocal_248[2];
			break;
		case 2:
			Var1 = { vLocal_232[2 /*3*/] };
			Var1.f_3 = fLocal_248[2];
			break;
		case 3:
			Var1 = { vLocal_232[3 /*3*/] };
			Var1.f_3 = fLocal_248[3];
			break;
		case 4:
			Var1 = { vLocal_232[4 /*3*/] };
			Var1.f_3 = fLocal_248[4];
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_206(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_374 == 3)
	{
		func_207(vLocal_306, "KLR1_EXPLORE", 100f);
		if (iLocal_376 == 3)
		{
			StringCopy(&(uParam0->f_2578), "KLR1_ABANCELL", 24);
			return true;
		}
	}
	if (iLocal_374 > 3 && iLocal_374 < 11)
	{
		if (__LIB_1__::func_588(Local_396[5 /*9*/].f_2, 0, 0, -1, -1, 0))
		{
			func_207(ENTITY::GET_ENTITY_COORDS(iLocal_140, false, false), "KLR1_PICKUP", 150f);
		}
		else if (__LIB_1__::func_588(Local_396[4 /*9*/].f_2, 0, 0, -1, -1, 0))
		{
			func_207(ENTITY::GET_ENTITY_COORDS(iLocal_140, false, false), "KLR1_HOGTIE", 150f);
		}
		if (iLocal_376 == 3)
		{
			__LIB_1__::func_532(Global_1347702[135 /*49*/].f_15, 1);
			StringCopy(&(uParam0->f_2578), "KRLR1_ABANDON", 24);
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
		{
			if (!func_210())
			{
				StringCopy(&(uParam0->f_2578), "KRLR1_FAIL1", 24);
				return true;
			}
		}
	}
	if (iLocal_374 == 11)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			StringCopy(&(uParam0->f_2578), "KRLR1_SHOTSHERIFF", 24);
			return true;
		}
	}
	if (iLocal_374 != 11)
	{
		if (func_211())
		{
			StringCopy(&(uParam0->f_2578), "KRLR1_WANTED", 24);
			return true;
		}
	}
	if (iLocal_390 == 11)
	{
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		StringCopy(&(uParam0->f_2578), "KRLR1_WANTED", 24);
		return true;
	}
	return false;
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
	if (func_215(uParam0->f_174))
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
	if (__LIB_1__::func_976(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_269(uParam0))
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
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
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
		__LIB_18__::func_769(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_288(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
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
	func_291();
	switch (iVar0)
	{
		case 0:
			switch (iLocal_378)
			{
				case 0:
					func_292();
					func_293();
					func_294();
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("SKLR1_RESTART_1");
					__LIB_14__::func_143();
					func_296(uParam0, 0, 3);
					iLocal_378 = 0;
					return 7;
			}
			break;
		case 1:
			func_297();
			switch (iLocal_378)
			{
				case 0:
					if (func_298(uParam0, vLocal_254[1 /*3*/], fLocal_270[1], 1, 1))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_140) && PED::_0xA0BC8FAED8CFEB3C(iLocal_140))
						{
							func_299();
							ENTITY::SET_ENTITY_COORDS(iLocal_140, vLocal_254[1 /*3*/], true, false, true, true);
							iLocal_378 = 1;
						}
					}
					break;
				case 1:
					func_300(uParam0, 1);
					func_301(1);
					if (bLocal_498 && bLocal_499)
					{
						__LIB_14__::func_144(0);
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_381[2], false) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_381[3], false))
						{
							__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
							func_296(uParam0, 0, 6);
							return 7;
						}
					}
					break;
			}
			break;
		case 2:
			func_294();
			switch (iLocal_378)
			{
				case 0:
					if (!bLocal_26)
					{
						func_303(uParam0);
					}
					else if (func_298(uParam0, vLocal_254[2 /*3*/], fLocal_270[2], 0, 1))
					{
						iLocal_378 = 1;
					}
					break;
				case 1:
					if (ENTITY::_0x61914209C36EFDDB(iLocal_140) != 3)
					{
						TASK::TASK_CARRIABLE(iLocal_140, iLocal_55, Global_35, 0, 0);
					}
					if (func_304(&iLocal_140, 1) && func_305())
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_140) && PED::_0xA0BC8FAED8CFEB3C(iLocal_140))
						{
							ENTITY::_0x18FF3110CF47115D(iLocal_140, 1, 0);
							iLocal_378 = 2;
						}
					}
					break;
				case 2:
					__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
					func_306();
					__LIB_13__::func_89(uParam0, Local_396[6 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("SKLR1_RESTART_2");
					__LIB_14__::func_143();
					iLocal_378 = 0;
					func_296(uParam0, 0, 10);
					return 7;
			}
			break;
		case 3:
			func_308(uParam0);
			switch (iLocal_378)
			{
				case 0:
					if (func_309(uParam0) && func_298(uParam0, vLocal_254[3 /*3*/], fLocal_270[3], 0, 1))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_140) && PED::_0xA0BC8FAED8CFEB3C(iLocal_140))
						{
							iLocal_378 = 1;
						}
					}
					break;
				case 1:
					TASK::_0x816A3ACD265E2297(iLocal_55, 1);
					if (ENTITY::_0x61914209C36EFDDB(iLocal_140) != 3)
					{
						TASK::TASK_CARRIABLE(iLocal_140, iLocal_55, Global_35, 0, 0);
					}
					if (func_304(&iLocal_140, 1) && func_305())
					{
						ENTITY::_0x18FF3110CF47115D(iLocal_140, 1, 0);
						iLocal_378 = 2;
					}
					break;
				case 2:
					if (iLocal_392 == 3)
					{
						__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
						func_306();
						__LIB_13__::func_89(uParam0, Local_396[6 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_948(iLocal_56, 0, 0f, 0, 1, 0f, 1, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("SKLR1_RESTART_3");
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						__LIB_14__::func_143();
						func_296(uParam0, 0, 10);
						return 7;
					}
					break;
			}
			break;
		case 4:
			if (func_210())
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_140, vLocal_254[3 /*3*/], fLocal_270[3], false, false, true);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			return 8;
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
		if (!__LIB_12__::func_925(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_18__::func_769(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_6(uParam0))
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
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_323(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	iLocal_378 = 0;
	switch (iLocal_377)
	{
		case 0:
			bLocal_51 = true;
			func_327();
			if (func_210() && !ENTITY::IS_ENTITY_DEAD(iLocal_143))
			{
				TASK::_0x9EBD34958AB6F824(iLocal_140);
				TASK::UNCUFF_PED(iLocal_140);
				PED::_0x7E8F9949B7AABBF0(iLocal_140, 1, 1);
				func_328(0, 0);
			}
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_143, false);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDMUND"));
			__LIB_1__::func_951(&iLocal_130);
			__LIB_13__::func_89(uParam0, Local_396[8 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_330(1);
			func_296(uParam0, iLocal_374, 11);
			return 7;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	func_333(uParam0);
	if (!bLocal_26)
	{
		if (iLocal_374 > 3 && iLocal_374 <= 10)
		{
			func_303(uParam0);
		}
	}
	switch (iLocal_374)
	{
		case 1:
			func_334();
			func_335();
			if (iLocal_389 == 9)
			{
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				func_296(uParam0, iLocal_374, 2);
			}
			break;
		case 2:
			func_292();
			__LIB_13__::func_89(uParam0, Local_396[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_296(uParam0, iLocal_374, 3);
			break;
		case 3:
			func_336();
			func_300(uParam0, 0);
			func_301(0);
			func_335();
			if (iLocal_375 < 1)
			{
				func_337(&(Local_396[1 /*9*/]), 0, 0);
			}
			if (func_298(uParam0, vLocal_206, fLocal_209, 0, 0))
			{
				func_338(uParam0);
				func_339(uParam0);
				if (iLocal_395 == 4)
				{
					__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
					__LIB_3__::func_319(iLocal_381[0]);
					func_340();
					__LIB_0__::func_325(&iLocal_53);
					func_342(2);
					func_296(uParam0, iLocal_374, 6);
				}
			}
			break;
		case 6:
			func_340();
			func_300(uParam0, 0);
			func_301(0);
			__LIB_12__::func_773(0, 0, 1, 1);
			func_297();
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
			if (iLocal_390 == 12)
			{
				func_328(0, 1);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_145, joaat("PLAYER"));
				TASK::TASK_COMBAT_PED(iLocal_140, Global_35, 1048576, 0);
				__LIB_13__::func_89(uParam0, Local_396[3 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_14__::func_125();
				func_296(uParam0, iLocal_374, 7);
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			__LIB_1__::func_538(0);
			if (!__LIB_0__::func_75(&uLocal_166))
			{
				if (PED::GET_PED_CONFIG_FLAG(iLocal_140, 11, true))
				{
					func_342(3);
					func_294();
					func_293();
					__LIB_0__::func_325(&iLocal_53);
					if (!PED::IS_PED_INJURED(iLocal_140))
					{
						TASK::CLEAR_PED_TASKS(iLocal_140, true, false);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_140, 16, false);
					PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					__LIB_1__::func_148(&uLocal_166);
				}
			}
			else if (__LIB_0__::func_265(&uLocal_166) > 1.7f)
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_53))
				{
					func_328(1, 1);
				}
				else
				{
					__LIB_13__::func_89(uParam0, Local_396[4 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_37(&uLocal_166);
					func_296(uParam0, iLocal_374, 8);
				}
			}
			break;
		case 8:
			func_294();
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_366, true, 0))
			{
				__LIB_1__::func_538(0);
			}
			func_337(&(Local_396[4 /*9*/]), 0, 0);
			if (func_304(&iLocal_140, 1))
			{
				func_342(4);
				__LIB_0__::func_325(&iLocal_53);
				func_306();
				func_342(5);
				__LIB_13__::func_89(uParam0, Local_396[6 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_296(uParam0, iLocal_374, 10);
			}
			if (!bLocal_40)
			{
				if (PED::_IS_PED_HOGTIED(iLocal_140) || ENTITY::_0x61914209C36EFDDB(iLocal_140) == 2)
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_140, 1, 0);
					func_342(4);
					bLocal_40 = true;
				}
			}
			else if (ENTITY::_0x61914209C36EFDDB(iLocal_140) == 3)
			{
				__LIB_13__::func_89(uParam0, Local_396[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_296(uParam0, iLocal_374, 9);
			}
			break;
		case 9:
			func_294();
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_366) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_366, true, 0))
			{
				__LIB_1__::func_538(0);
			}
			if (func_304(&iLocal_140, 1))
			{
				__LIB_0__::func_325(&iLocal_53);
				func_306();
				func_342(5);
				__LIB_13__::func_89(uParam0, Local_396[6 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_296(uParam0, iLocal_374, 10);
			}
			else
			{
				func_337(&(Local_396[5 /*9*/]), 0, 0);
			}
			break;
		case 10:
			if (__LIB_1__::func_205(Global_35, iLocal_366, 1, 0))
			{
				__LIB_1__::func_538(0);
			}
			func_348();
			func_349();
			func_350();
			func_351();
			PED::SET_PED_RESET_FLAG(Global_35, 224, true);
			func_352(uParam0);
			func_308(uParam0);
			if (!bLocal_32)
			{
				if (func_353())
				{
					if (!PED::IS_PED_ON_MOUNT(Global_35) && func_304(&iLocal_140, 0))
					{
						func_342(6);
						__LIB_13__::func_89(uParam0, Local_396[7 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						bLocal_32 = true;
					}
				}
				else
				{
					__LIB_1__::func_948(iLocal_56, 0, 0, 0, 1, 0, 0, 0);
					if (func_304(&iLocal_140, 1))
					{
						func_337(&(Local_396[6 /*9*/]), 0, 0);
					}
					else
					{
						__LIB_0__::func_325(&iLocal_53);
						func_328(1, 1);
						func_342(6);
						__LIB_13__::func_89(uParam0, Local_396[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_296(uParam0, iLocal_374, 9);
					}
				}
			}
			else if (func_353())
			{
				if (iLocal_392 == 5)
				{
					if (func_354())
					{
						if (__LIB_1__::func_588(Local_396[7 /*9*/].f_2, 0, 0, -1, -1, 0))
						{
							__LIB_0__::func_325(&iLocal_53);
							__LIB_5__::func_20(1, 0);
							func_342(7);
						}
						if (!__LIB_6__::func_904())
						{
							return 6;
						}
					}
					else
					{
						func_337(&(Local_396[7 /*9*/]), 0, 0);
						if ((!__LIB_6__::func_903("RSK_GREETDEAD") && !__LIB_6__::func_903("RSK_PUTDOWN")) && ENTITY::_0x61914209C36EFDDB(iLocal_140) == 5)
						{
							if (!__LIB_0__::func_75(&uLocal_178))
							{
								__LIB_1__::func_148(&uLocal_178);
							}
							else if (__LIB_0__::func_265(&uLocal_178) > 4f)
							{
								if (__LIB_12__::func_876(uParam0, "RSK_PUTDOWN", 0))
								{
									__LIB_0__::func_37(&uLocal_178);
								}
							}
						}
						else if (__LIB_0__::func_75(&uLocal_178))
						{
							__LIB_0__::func_37(&uLocal_178);
						}
					}
				}
			}
			else
			{
				bLocal_32 = false;
			}
			break;
		case 11:
			func_359();
			if (bLocal_36)
			{
				func_360(uParam0);
			}
			else
			{
				func_361(uParam0);
			}
			if (__LIB_12__::func_645(uParam0) != 12)
			{
				if (iLocal_393 == 8 || bLocal_36)
				{
					__LIB_12__::func_937(uParam0, 12);
				}
			}
			if (bLocal_36)
			{
				if (!func_210())
				{
					Global_1357515 = 0;
					func_330(0);
					return 8;
				}
			}
			else if (bLocal_43)
			{
				func_330(0);
				__LIB_13__::func_89(uParam0, Local_396[10 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_510 = __LIB_0__::func_492(1);
				func_296(uParam0, iLocal_374, 13);
			}
			break;
		case 13:
			func_359();
			func_365();
			func_361(uParam0);
			if (func_366())
			{
				LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
				Global_1357515 = -1;
				__LIB_0__::func_325(&iLocal_53);
				func_342(10);
				return 8;
			}
			else
			{
				func_337(&(Local_396[10 /*9*/]), 0, 0);
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(-1344767066))
	{
		MAP::_0xD8C7162AB2E2AF45(-1344767066);
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
	__LIB_12__::func_969(iParam0, 0, iParam3);
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
		func_401(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_402(Global_1347702[iParam0 /*49*/].f_15, bParam6);
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
	vVar2 = { func_405(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_150(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			func_365();
			func_359();
			func_294();
			__LIB_1__::func_948(iLocal_56, 0, 0, 0, 1, 0, 0, 0);
			if (func_429())
			{
				__LIB_5__::func_20(0, 0);
				__LIB_6__::func_765(32, 1);
				func_431();
				return true;
			}
			else if (!bLocal_36)
			{
				func_361(uParam0);
			}
			else
			{
				func_360(uParam0);
			}
			return false;
	}
	return true;
}

void func_159(var uParam0)
{
	func_330(0);
	func_340();
	__LIB_14__::func_125();
	__LIB_0__::func_325(&iLocal_53);
	GRAPHICS::_0x37D7BDBA89F13959("PlayerWakeUpKnockout");
	GRAPHICS::_0x37D7BDBA89F13959("PlayerKnockout_SerialKiller");
	TASK::_0x816A3ACD265E2297(iLocal_55, 1);
	func_432(0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 170, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_433();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		if (PED::GET_PED_CONFIG_FLAG(iLocal_143, 448, true))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_143, 448, false);
		}
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_serial_killer_hideout_area", false, true);
	func_434(0);
	__LIB_2__::func_788(&iLocal_140, 1, 0, 1);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_68))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_68);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_105);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_107);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_106);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_110);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_115);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_116);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_117);
	__LIB_0__::func_325(&iLocal_53);
	__LIB_6__::func_916(&iLocal_184);
	__LIB_0__::func_172(iLocal_366);
	__LIB_0__::func_172(iLocal_365);
	__LIB_0__::func_172(iLocal_368);
	__LIB_0__::func_172(iLocal_369);
	__LIB_0__::func_172(iLocal_370);
	__LIB_0__::func_172(iLocal_371);
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(4)) && !PERSCHAR::_0x4AFC7288C77238B3(__LIB_0__::func_120(4)))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(4));
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(13)) && !PERSCHAR::_0x4AFC7288C77238B3(__LIB_0__::func_120(13)))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(13));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_133))
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_100))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_100);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_133))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_133, true);
		}
		__LIB_4__::func_866(&iLocal_133, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_101))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_101);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_134))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_134, true);
		}
		__LIB_4__::func_866(&iLocal_134, 1, 1);
	}
}

void func_189()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Local_396[iVar0 /*9*/] = 0;
		Local_396[iVar0 /*9*/].f_1 = 0;
		iVar0++;
	}
	Local_396[0 /*9*/].f_2 = "KLR1_OPDOOROBJ";
	Local_396[1 /*9*/].f_2 = "KLR1_EXPLORE";
	Local_396[2 /*9*/].f_2 = "KLR1_LOOKKNIFE";
	Local_396[9 /*9*/].f_2 = "KLR1_DISTRACT";
	Local_396[3 /*9*/].f_2 = "KLR1_SUBDUE";
	Local_396[4 /*9*/].f_2 = "KLR1_HOGTIE";
	Local_396[8 /*9*/].f_2 = "KLR1_SHOOT";
	Local_396[5 /*9*/].f_2 = "KLR1_PICKUP";
	Local_396[6 /*9*/].f_2 = "KLR1_TURNIN";
	Local_396[7 /*9*/].f_2 = "KLR1_DROP";
	Local_396[10 /*9*/].f_2 = "KLR1_REWARD";
}

void func_205()
{
	vLocal_232[0 /*3*/] = { -608.2979f, 520.525f, 95.5446f };
	fLocal_248[0] = 36.9723f;
	vLocal_198 = { -615.7342f, 532.1246f, 93.6386f };
	fLocal_201 = 159.2644f;
	vLocal_232[1 /*3*/] = { -612.3727f, 528.0353f, 93.6256f };
	fLocal_248[1] = 211.0397f;
	vLocal_254[1 /*3*/] = { -613.0818f, 527.9872f, 93.6155f };
	fLocal_270[1] = 102.0519f;
	vLocal_232[2 /*3*/] = { -605.721f, 520.4651f, 95.7008f };
	fLocal_248[2] = 245.5977f;
	vLocal_254[2 /*3*/] = { -601.1768f, 491.6494f, 96.4836f };
	fLocal_270[2] = 311.9164f;
	vLocal_232[3 /*3*/] = { -273.9409f, 790.3513f, 117.5812f };
	fLocal_248[3] = 10.7672f;
	vLocal_254[3 /*3*/] = { -272.9409f, 791.3513f, 117.5812f };
	fLocal_270[3] = 10.7672f;
	vLocal_232[4 /*3*/] = { -275.4271f, 799.4703f, 118.3652f };
	fLocal_248[4] = 185.3757f;
	vLocal_254[4 /*3*/] = { -271.9167f, 807.3281f, 118.3688f };
	fLocal_270[4] = 99.1085f;
}

int func_206(vector3 vParam0, var uParam3)
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
		iVar0 = func_489(0, 0);
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

void func_207(vector3 vParam0, char* sParam3, float fParam4)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vParam0, 0);
	switch (iLocal_376)
	{
		case 0:
			fLocal_61 = fVar0;
			fLocal_62 = (fVar0 + fParam4);
			__LIB_1__::func_148(&uLocal_169);
			iLocal_376 = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_169) > 6f)
			{
				if (fVar0 < fLocal_61)
				{
					__LIB_0__::func_37(&uLocal_169);
					iLocal_376 = 0;
				}
				else if (fVar0 > fLocal_62)
				{
					__LIB_1__::func_422(sParam3, 7500, 0, 1, 0, 0, -1, -1, 0);
					fLocal_63 = fVar0;
					iLocal_376 = 2;
				}
				else
				{
					__LIB_1__::func_148(&uLocal_169);
				}
			}
			break;
		case 2:
			if (!__LIB_4__::func_68(sParam3, 1))
			{
				if (fVar0 > fLocal_63)
				{
					iLocal_376 = 3;
				}
				else
				{
					fLocal_62 = fVar0;
					__LIB_1__::func_148(&uLocal_169);
					iLocal_376 = 1;
				}
			}
			break;
		case 3:
			break;
	}
}

bool func_210()
{
	if (__LIB_0__::func_272(iLocal_140, 0))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iLocal_140, 11, false))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
	{
		return false;
	}
	return false;
}

bool func_211()
{
	if (!func_353())
	{
		if (MISC::IS_BULLET_IN_AREA(vLocal_214, 20f, true))
		{
			return true;
		}
		if (BUILTIN::VDIST(vLocal_214, Global_36) < 20f && PED::IS_PED_SHOOTING(Global_35))
		{
			return true;
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_DEATH"), vLocal_214, 50f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), vLocal_214, 50f))
		{
			return true;
		}
	}
	return false;
}

bool func_215(int iParam0)
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

int func_269(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vVar0 = { -613.6192f, 529.1643f, 93.6205f };
	vVar3 = { -613.704f, 529.515f, 93.6205f };
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_370))
	{
		iLocal_370 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_315, vLocal_318, vLocal_321, "OUTRO_RESTRICT");
		return 0;
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		func_335();
		if (!func_578())
		{
			return 0;
		}
	}
	iVar6 = __LIB_12__::func_767(uParam0);
	if (iVar6 < 2)
	{
		if (!bLocal_34)
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_149))
			{
				iLocal_149 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), vVar0, 316.9812f, 0, 0, 0);
				return 0;
			}
			else if (!func_579(joaat("UI_LETTER_LUCKY_EDITOR"), vVar0, joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), joaat("DOCUMENT_LETTER_LUCKY_EDITOR")))
			{
				return 0;
			}
			else
			{
				bLocal_34 = true;
			}
		}
		if (!bLocal_35)
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_150))
			{
				iLocal_150 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), vVar3, 0f, 0, 0, 0);
				return 0;
			}
			else if (!func_579(joaat("UI_LETTER_LUCKYS_MUM"), vVar3, joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), joaat("DOCUMENT_LETTER_LUCKYS_MUM")))
			{
				return 0;
			}
			else
			{
				bLocal_35 = true;
			}
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_366))
		{
			iLocal_366 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_306, vLocal_309, vLocal_312, "ENTIRE_CELLAR");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_365))
		{
			iLocal_365 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_276, vLocal_279, vLocal_282, "KILLER_TRIGGER");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_371))
		{
			iLocal_371 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-613.6878f, 527.6924f, 94.935f, 0f, 0f, -140.167f, 5f, 4.889156f, 3f, "mNoControlVol");
			return 0;
		}
		PED::ADD_RELATIONSHIP_GROUP("relgrouplaw", &iLocal_146);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_serial_killer_hideout_area", true, true);
		return 1;
	}
	else
	{
		func_294();
		PED::ADD_RELATIONSHIP_GROUP("relgrouplaw", &iLocal_146);
		return 1;
	}
	return 0;
}

bool func_288(var uParam0)
{
	func_335();
	func_334();
	if (bLocal_37)
	{
		return true;
	}
	return false;
}

void func_291()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) >= 5 && __LIB_0__::func_41(iVar0) < 20)
	{
		__LIB_0__::func_467(&iVar0, 23);
		__LIB_0__::func_468(&iVar0, 0);
		__LIB_0__::func_469(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
	}
}

void func_292()
{
	__LIB_0__::func_325(&iLocal_53);
	__LIB_0__::func_325(&iLocal_54);
	iLocal_53 = __LIB_8__::func_775(1259054292, iLocal_366, 1);
	if (MAP::DOES_BLIP_EXIST(iLocal_53))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "KLR1_LBLCELLAR");
	}
}

void func_293()
{
	func_614(iLocal_381[0], &iLocal_127, "luc_basedr_L_door");
	func_614(iLocal_381[0], &iLocal_128, "luc_basedr_R_door");
}

void func_294()
{
	__LIB_0__::func_400(73781828);
	__LIB_0__::func_401(-391567710);
}

void func_296(var uParam0, int iParam1, int iParam2)
{
	__LIB_12__::func_937(uParam0, iParam2);
	iLocal_374 = iParam2;
}

void func_297()
{
	__LIB_0__::func_400(-391567710);
	__LIB_0__::func_401(73781828);
}

bool func_298(var uParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	if (bLocal_27)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_140))
	{
		iLocal_140 = __LIB_12__::func_885(uParam0, iLocal_102, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 1, 0);
		return false;
	}
	if (func_210())
	{
		if (!bParam6)
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_140, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_140, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_140, Global_35, false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_140, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_140, 253, true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_140, 8, false);
			TASK::TASK_STAND_STILL(iLocal_140, -1);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, joaat("REL_CRIMINALS"));
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_140, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_140, 2, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_140, 4, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 17, false);
		AUDIO::STOP_PED_SPEAKING(iLocal_140, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 466, true);
		if (bParam5)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_140, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
		PED::ADD_RELATIONSHIP_GROUP("relgroupcrim", &iLocal_145);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, iLocal_145);
		ENTITY::_0x18FF3110CF47115D(iLocal_140, 0, 1);
		ENTITY::_0x18FF3110CF47115D(iLocal_140, 16, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 314, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 339, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 340, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 6, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 21, true);
		__LIB_3__::func_459(iLocal_140, 0);
		PED::_0x6569F31A01B4C097(iLocal_140, 4, 0);
		func_618();
		__LIB_1__::func_991(iLocal_140, 0);
		if (PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_EDMUND")))
		{
			PLAYER::_0xCDDD4B74660E2335(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_EDMUND"));
		}
		PED::_0xD67B6F3BCF81BA47(iLocal_140, 4);
		iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_140);
		PED::_0x5BCF0B79D4F5DBA3(iLocal_140, BUILTIN::TO_FLOAT((iVar0 / 2)));
		PED::_0x2E5B5D1F1453E08E(iLocal_140, 1);
		__LIB_12__::func_875(uParam0, iLocal_140, "SERIAL_KILLER", 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
		bLocal_27 = true;
		return true;
	}
	return false;
}

void func_299()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) >= 4 && __LIB_0__::func_41(iVar0) < 20)
	{
		__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
		__LIB_0__::func_467(&iVar0, 23);
		__LIB_0__::func_468(&iVar0, 0);
		__LIB_0__::func_469(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
	}
}

void func_300(var uParam0, bool bParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_381[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_381[2], false))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_140, &Local_69);
	}
	switch (iLocal_390)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
			{
				if (func_621(2, 0, 0))
				{
					func_622(iLocal_390, 2);
				}
			}
			break;
		case 2:
			if (func_623())
			{
				func_622(iLocal_390, 1);
			}
			break;
		case 1:
			if (func_624())
			{
				if (iLocal_395 == 4 || bParam1)
				{
					if (!__LIB_0__::func_491(iLocal_140, -982327190))
					{
						func_626();
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140, false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_140, -617.4f, 529.5954f, 93.6205f, 293.7896f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_140, -1);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[2], "s_interact_lantern01x", iLocal_126, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[2], "p_lighter01x", iLocal_125, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[2], "edmund", iLocal_140, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[2], "ARTHUR", Global_35, 0);
						func_622(iLocal_390, 4);
					}
				}
			}
			break;
		case 4:
			if (!bLocal_498)
			{
				bLocal_498 = true;
			}
			if (bLocal_499)
			{
				MISC::_0x2FCD528A397E5C88(iLocal_366, 65536);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
				func_626();
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[2], "pl_fail", true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_381[2]);
				__LIB_0__::func_37(&uLocal_181);
				func_622(iLocal_390, 9);
			}
			break;
		case 9:
			fLocal_60 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_381[2]);
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[2], "pl_Exit_Knife_Throw_Head");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[2], "pl_Exit_Knife_Throw_Head_Alt");
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_381[2], "b_loop"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[2], "b_loop", false, false);
			}
			if (!bLocal_47)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_140, -1989225503))
				{
					sLocal_151 = "pl_Exit_Knife_Throw_Head_Alt";
					bLocal_47 = true;
				}
			}
			if (!bLocal_31)
			{
				if (!bLocal_39)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_126, -259642429))
					{
						OBJECT::_0xF49574E2332A8F06(iLocal_126, 0.7f);
						bLocal_39 = true;
					}
				}
				if (fLocal_60 > 53.2f)
				{
					__LIB_13__::func_89(uParam0, Local_396[9 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_31 = true;
				}
			}
			else
			{
				func_337(&(Local_396[9 /*9*/]), 0, 0);
				if (fLocal_60 > 108f)
				{
					if (fLocal_60 < 124f)
					{
						__LIB_1__::func_281(&iLocal_185, 1, 1);
						func_342(9);
					}
					else
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_123, Global_35, false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_123, false);
						__LIB_1__::func_864(Global_35, 0, 1);
						__LIB_14__::func_145(iLocal_381[3]);
						func_622(iLocal_390, 11);
					}
				}
				else if (bLocal_38)
				{
					func_342(9);
					func_630();
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[2], "b_loop", true, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[2], sLocal_151, true);
					func_622(iLocal_390, 10);
				}
			}
			break;
		case 10:
			if (ANIMSCENE::_0x1F0E401031E20146(iLocal_381[2], sLocal_151))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_381[2]) > 0.5f)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_140, joaat("WEAPON_MELEE_KNIFE"), 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					__LIB_1__::func_951(&iLocal_124);
					__LIB_1__::func_951(&iLocal_123);
					PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
					__LIB_3__::func_319(iLocal_381[2]);
					func_622(iLocal_390, 12);
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_381[2]) > 0.2f)
				{
					__LIB_5__::func_20(0, 0);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_301(bool bParam0)
{
	switch (iLocal_391)
	{
		case 0:
			if (func_621(3, 0, 0))
			{
				func_631(iLocal_391, 1);
			}
			break;
		case 1:
			if (func_632())
			{
				func_631(iLocal_391, 2);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
			{
				iLocal_124 = OBJECT::CREATE_OBJECT(iLocal_107, vLocal_342, false, true, false, false, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[3], "s_headsevered01x", iLocal_124, 0);
				if (__LIB_0__::func_181() || bLocal_33)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[3], "JOHN", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[3], "b_playerArthur", false, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[3], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[3], "b_playerArthur", true, false);
				}
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_381[3], "b_loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[3], "b_loop", false, false);
				}
				func_631(iLocal_391, 3);
			}
			break;
		case 3:
			if (iLocal_395 == 4 || bParam0)
			{
				if (!bLocal_499)
				{
					bLocal_499 = true;
				}
				if (bLocal_498)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[3], "pl_Enter_Wake_Up", true);
					ANIMSCENE::START_ANIM_SCENE(iLocal_381[3]);
					func_631(iLocal_391, 4);
				}
			}
			break;
		case 4:
			if (func_633())
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_381[3], "b_loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[3], "b_loop", true, false);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[3], "pl_Enter_Throw_Head_Reach", true);
				func_631(iLocal_391, 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(iLocal_381[3], "pl_Enter_Throw_Head_Reach"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_381[3]) > 0.75f)
				{
					if (bLocal_47)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[3], "pl_Exit_Knife_Throw_Head_Alt", true);
						sLocal_156 = "pl_Exit_Knife_Throw_Head_Alt";
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[3], "pl_Exit_Knife_Throw_Head", true);
						sLocal_156 = "pl_Exit_Knife_Throw_Head";
					}
					func_631(iLocal_391, 7);
				}
			}
			break;
		case 7:
			if (!bLocal_38)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_381[3], sLocal_156))
				{
					bLocal_38 = true;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_381[3], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_381[3], false))
			{
				__LIB_14__::func_145(iLocal_381[3]);
				func_631(iLocal_391, 8);
			}
			break;
	}
}

void func_303(var uParam0)
{
	if (!bLocal_26)
	{
		if (__LIB_13__::func_543(uParam0, &iLocal_142, vLocal_191, fLocal_194, 1, 1, 1, 1, 1))
		{
			TASK::TASK_STAND_STILL(iLocal_142, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_142, 48, true);
			bLocal_26 = true;
		}
	}
}

bool func_304(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (ENTITY::_0x61914209C36EFDDB(*iParam0) == 7)
		{
			return true;
		}
	}
	if (((ENTITY::_0x61914209C36EFDDB(*iParam0) == 5 || ENTITY::_0x61914209C36EFDDB(*iParam0) == 8) || ENTITY::_0x61914209C36EFDDB(*iParam0) == 6) || ENTITY::_0x61914209C36EFDDB(*iParam0) == 9)
	{
		return true;
	}
	return false;
}

bool func_305()
{
	int iVar0;
	iVar0 = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	if (!__LIB_0__::func_75(&uLocal_160))
	{
		__LIB_1__::func_283(&uLocal_160, 0);
	}
	if (__LIB_0__::func_264(&uLocal_160) < 15f)
	{
		if (iVar0 > 0)
		{
			return false;
		}
		else
		{
			__LIB_0__::func_37(&uLocal_160);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_160);
		return true;
	}
	return false;
}

void func_306()
{
	__LIB_0__::func_325(&iLocal_53);
	__LIB_0__::func_325(&iLocal_54);
	iLocal_54 = __LIB_4__::func_983(408396114, vLocal_229, 1);
	if (MAP::DOES_BLIP_EXIST(iLocal_53))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "KLR1_OFFICE");
	}
}

void func_308(var uParam0)
{
	switch (iLocal_392)
	{
		case 0:
			if (func_309(uParam0))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_372))
				{
					iLocal_372 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_324, vLocal_327, vLocal_330, "SHERIFF_OFFICE");
				}
				else
				{
					func_636(uParam0, 0);
					func_637(iLocal_392, 1);
				}
			}
			break;
		case 1:
			if (func_621(4, 0, "pl_leadin_return"))
			{
				func_637(iLocal_392, 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[4], true, false) && iLocal_380 == 5)
			{
				if (__LIB_0__::func_181() || bLocal_33)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[4], "JOHN", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[4], "b_playerArthur", false, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[4], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[4], "b_playerArthur", true, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_130))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[4], "p_cs_book03x", iLocal_130, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[4], "U_M_M_ValSheriff_01", iLocal_143, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[4], "p_diningchairs01x", iLocal_131, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[4], "serialkiller", iLocal_140, 0);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_381[4]);
				__LIB_1__::func_948(iLocal_56, 0, 0, 0, 1, 0, 0, 0);
				func_637(iLocal_392, 3);
			}
			break;
		case 3:
			if (bLocal_32)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[4], "Loop_Idle_Read", true, false);
				func_637(iLocal_392, 5);
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_381[4], "s_idle_wait", 1))
			{
				func_637(iLocal_392, 5);
			}
			break;
		case 5:
			break;
	}
}

bool func_309(var uParam0)
{
	int iVar0;
	if (bLocal_30)
	{
		return true;
	}
	iVar0 = 1;
	if (!func_352(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_638())
	{
		iVar0 = 0;
	}
	if (!func_639())
	{
		iVar0 = 0;
	}
	if (!func_640())
	{
		iVar0 = 0;
	}
	if (!func_641())
	{
		iVar0 = 0;
	}
	if (!func_642())
	{
		iVar0 = 0;
	}
	if (!func_643())
	{
		iVar0 = 0;
	}
	if (!func_644())
	{
		iVar0 = 0;
	}
	if (!func_645())
	{
		iVar0 = 0;
	}
	if (!func_646())
	{
		iVar0 = 0;
	}
	if (!func_432(1))
	{
		iVar0 = 0;
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_143)) && !ENTITY::IS_ENTITY_DEAD(iLocal_129)) && !ENTITY::IS_ENTITY_DEAD(iLocal_130)) && !ENTITY::IS_ENTITY_DEAD(iLocal_135))
	{
		bLocal_30 = true;
	}
	return iVar0;
}

int func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					__LIB_1__::func_747(uParam4, 4);
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
				__LIB_1__::func_747(uParam4, 3);
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
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (__LIB_13__::func_191(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_679(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_12__::func_849(uParam4, 1))
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
				func_686(uParam4);
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
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
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
					__LIB_18__::func_744(&(uParam4->f_405), 0);
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
				func_686(uParam4);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
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

void func_327()
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		iVar1 = func_692(128, 0);
		if (iVar1 != 0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, false, 0, false, false);
		}
		else
		{
			iVar1 = func_693(128);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, false, 0, false, false);
		}
	}
}

void func_328(bool bParam0, bool bParam1)
{
	__LIB_3__::func_608(iLocal_140);
	__LIB_0__::func_325(&iLocal_53);
	__LIB_0__::func_325(&iLocal_54);
	if (bParam0)
	{
		iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_140);
	}
	else
	{
		iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_140);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_53))
	{
		if (bParam1)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_53, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "KLR1_LBLSTRANGE");
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "KLR1_LBLEDMUND");
		}
	}
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		if (!bLocal_507)
		{
			iLocal_508 = LAW::_0xE9EB79CBF9C0F58A(PLAYER::PLAYER_ID());
			LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
			LAW::_0xE4D6E45F491A66CB(PLAYER::PLAYER_ID(), 0);
			bLocal_507 = true;
		}
	}
	else if (bLocal_507)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		LAW::_0xE4D6E45F491A66CB(PLAYER::PLAYER_ID(), iLocal_508);
		LAW::_0x390710D2DAFA6BFF(PLAYER::PLAYER_ID(), 0);
		bLocal_507 = true;
	}
}

void func_333(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_767(uParam0);
	switch (iVar0)
	{
		case 1:
			if (func_304(&iLocal_140, 1))
			{
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			}
			break;
		case 2:
			if (func_304(&iLocal_140, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_232[3 /*3*/], false) < 10f)
			{
				__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			}
			break;
	}
}

void func_334()
{
	int iVar0;
	int iVar1;
	switch (iLocal_389)
	{
		case 0:
			if (bLocal_33)
			{
				if (__LIB_14__::func_148(joaat("PLAYER_THREE")))
				{
					func_727(iLocal_389, 1);
				}
			}
			else
			{
				func_727(iLocal_389, 1);
			}
			break;
		case 1:
			if (func_621(0, 0, "pl_Enter_Closed_Door"))
			{
				func_335();
				func_727(iLocal_389, 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[0], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[0], "luc_basedr_L_door", iLocal_127, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_128))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[0], "luc_basedr_R_door", iLocal_128, 0);
				}
				if (__LIB_0__::func_181() || bLocal_33)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[0], "JOHN", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[0], "b_PlayerArthur", false, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[0], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[0], "b_PlayerArthur", true, false);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[0], "pl_Enter_Closed_Door", true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_381[0]);
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_381[0], true);
				func_727(iLocal_389, 3);
			}
			break;
		case 3:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_369))
			{
				iLocal_369 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_297, vLocal_300, vLocal_303, "DOOR_CONTROL");
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_369))
			{
				func_727(iLocal_389, 4);
			}
			break;
		case 4:
			if (func_728())
			{
				if (BUILTIN::VDIST(Global_36, vLocal_14) < 7f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_369, true, 1) && PED::IS_PED_ON_FOOT(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if ((!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vLocal_14, 4f) && !MISC::IS_PROJECTILE_IN_AREA((vLocal_297.x - 3f), (vLocal_297.y - 3f), (vLocal_297.z - 2f), (vLocal_297.x + 3f), (vLocal_297.y + 3f), (vLocal_297.z + 2f), false)) && !PED::_IS_PED_CARRYING(Global_35))
					{
						if (!__LIB_0__::func_139(iLocal_184))
						{
							iLocal_184 = __LIB_2__::func_403("KLR1_CTXOPEN", joaat("INPUT_CONTEXT_Y"), iLocal_127, 1, 1, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
							__LIB_2__::func_450(iLocal_184, 4f, 1);
						}
						else if (__LIB_0__::func_567(iLocal_184, 1))
						{
							iVar0 = PED::_GET_LAST_MOUNT(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(iVar0))
							{
								if (__LIB_0__::func_94(iVar0, vLocal_297, 0) < 5f)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vLocal_191, 0.101f, -1, 0.25f, 0, fLocal_194);
								}
							}
							bLocal_37 = true;
							__LIB_1__::func_281(&iLocal_184, 1, 1);
							__LIB_14__::func_144(1);
							func_727(iLocal_389, 5);
						}
						else
						{
							iLocal_67 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_127, 4f, 2, 1, 0, "KLR1_LBLBASEDOOR", 0);
							HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_184), iLocal_67, 0);
						}
					}
					else if (__LIB_0__::func_139(iLocal_184))
					{
						__LIB_1__::func_281(&iLocal_184, 1, 1);
					}
				}
				else if (__LIB_0__::func_139(iLocal_184))
				{
					__LIB_1__::func_281(&iLocal_184, 1, 1);
				}
			}
			break;
		case 5:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[0], "pl_open_door");
			if (!__LIB_0__::func_491(Global_35, 1369124074))
			{
				iVar1 = __LIB_0__::func_399(Global_35, 1, 0, 0);
				if (iVar1 != joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				else
				{
					__LIB_2__::func_70(vLocal_297, 10f, 0);
					if (__LIB_0__::func_181())
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_381[0], "JOHN", "pl_open_door", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_381[0], "ARTHUR", "pl_open_door", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
				}
			}
			else
			{
				func_727(iLocal_389, 7);
			}
			break;
		case 7:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[0], "pl_open_door");
			if (!__LIB_0__::func_491(Global_35, 1369124074) || func_735())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[0], "pl_open_door"))
				{
					func_340();
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_381[0], false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[0], "pl_open_door", true);
					func_727(iLocal_389, 8);
				}
			}
			break;
		case 8:
			if (__LIB_11__::func_21(iLocal_381[0]))
			{
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[0], "pl_Exit_Open_Door");
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_381[0]) > 0.95f && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[0], "pl_Exit_Open_Door"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[0], "pl_Exit_Open_Door", true);
				__LIB_14__::func_125();
				func_727(iLocal_389, 9);
			}
			break;
		case 9:
			break;
	}
}

void func_335()
{
	__LIB_0__::func_400(-391567710);
	__LIB_0__::func_400(73781828);
}

void func_336()
{
	float fVar0;
	if (!bLocal_46)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_366))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_366, 1, 0))
			{
				fVar0 = PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "cautious");
				if (fVar0 < 1f)
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "cautious", (fVar0 + 0.01f), -1);
				}
				else
				{
					bLocal_46 = true;
				}
			}
		}
	}
}

void func_337(var uParam0, float fParam1, float fParam2)
{
	if (*uParam0 != 2)
	{
		if (!uParam0->f_1)
		{
			if (__LIB_5__::func_352(uParam0->f_2))
			{
				if (__LIB_0__::func_75(&(uParam0->f_3)))
				{
					__LIB_0__::func_37(&(uParam0->f_3));
				}
				uParam0->f_1 = 1;
				*uParam0 = 2;
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_0__::func_769();
			__LIB_1__::func_148(&(uParam0->f_3));
			uParam0->f_6 = { Global_36 };
			*uParam0 = 1;
			break;
		case 1:
			if (__LIB_0__::func_265(&(uParam0->f_3)) > fParam2)
			{
				if (fParam1 > 0f)
				{
					if (BUILTIN::VDIST(uParam0->f_6, Global_36) < fParam1)
					{
						__LIB_1__::func_422(uParam0->f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
					}
				}
				else
				{
					__LIB_1__::func_422(uParam0->f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				uParam0->f_1 = 1;
				*uParam0 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_338(var uParam0)
{
	switch (iLocal_375)
	{
		case 0:
			if (func_737())
			{
				iLocal_375 = 1;
			}
			break;
		case 1:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_365))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_365, 1, 0))
				{
					func_738();
					func_342(1);
					__LIB_13__::func_89(uParam0, Local_396[2 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_139))
					{
						PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_139, 0);
						PLAYER::_0x6ECFC621A168424C(iLocal_139, iLocal_139, 0, 0);
					}
					iLocal_375 = 2;
				}
			}
			break;
		case 2:
			func_337(&(Local_396[2 /*9*/]), 0, 0);
			if (__LIB_0__::func_272(Global_35, 0))
			{
				if ((((!PED::IS_PED_IN_COVER(Global_35, false, true) && !MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_123, true, false), joaat("WEAPON_THROWN_DYNAMITE"), (4f + 15f), false)) && !MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_123, true, false), joaat("WEAPON_THROWN_MOLOTOV"), (4f + 15f), false)) && !__LIB_11__::func_154()) && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (!__LIB_0__::func_139(iLocal_186))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_139) && !bLocal_42)
						{
							iLocal_186 = __LIB_2__::func_403("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), iLocal_139, 1, 0, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
							__LIB_2__::func_450(iLocal_186, 4f, 1);
						}
					}
					else if (!bLocal_42)
					{
						iLocal_67 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_123, 1f, 2, 1, 0, "KLR1_CLUE", 0);
						HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_186), iLocal_67, 0);
						if (__LIB_0__::func_567(iLocal_186, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
							{
								if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_139))
								{
									PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_139);
								}
							}
							__LIB_1__::func_382(iLocal_186, 0, 1);
							__LIB_1__::func_281(&iLocal_186, 1, 1);
							bLocal_42 = true;
						}
					}
					else
					{
						iLocal_375 = 3;
					}
				}
				else if (__LIB_0__::func_139(iLocal_186))
				{
					if (__LIB_11__::func_154())
					{
					}
					__LIB_1__::func_281(&iLocal_186, 1, 1);
				}
			}
			break;
		case 3:
			break;
	}
}

void func_339(var uParam0)
{
	switch (iLocal_395)
	{
		case 0:
			if (func_621(1, 0, "pbl_griefing_ko_back_noleadin"))
			{
				func_741(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_381[1]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[1], true, false))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[1], "pbl_griefing_ko_back_noleadin");
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[1], "pbl_griefing_ko_back_noleadin"))
					{
						func_741(2);
					}
				}
			}
			break;
		case 2:
			if (bLocal_42)
			{
				if (__LIB_12__::func_645(uParam0) != 4)
				{
					__LIB_12__::func_937(uParam0, 4);
				}
				func_342(2);
				func_742();
				ANIMSCENE::START_ANIM_SCENE(iLocal_381[1]);
				func_741(3);
			}
			break;
		case 3:
			func_626();
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			}
			if (!bLocal_505)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_381[1]) > 0.8f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerKnockout_SerialKiller");
					bLocal_505 = true;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_381[1]) > 0.82f)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_381[1], false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
				__LIB_14__::func_145(iLocal_381[1]);
				func_299();
				func_741(4);
			}
			break;
	}
}

void func_340()
{
	__LIB_0__::func_105(1);
	UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	HUD::CLEAR_ALL_HELP_MESSAGES();
}

void func_342(int iParam0)
{
	__LIB_0__::func_769();
	__LIB_10__::func_597(Local_396[iParam0 /*9*/].f_2);
}

void func_348()
{
	if (!bLocal_511)
	{
		if (func_748() && func_749())
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_54))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_142, true, false), MAP::GET_BLIP_COORDS(iLocal_54)) > 20f)
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_54, -1878373110);
					bLocal_511 = true;
				}
			}
		}
	}
	else if (!func_748() || !func_749())
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_54))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_54, -1878373110);
			bLocal_511 = false;
		}
	}
}

void func_349()
{
	if (!bLocal_44)
	{
		if (func_749() && func_748())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("SKLR1_RIDE");
			bLocal_44 = true;
		}
	}
}

void func_350()
{
	if (!bLocal_45)
	{
		if (BUILTIN::VDIST(Global_36, vLocal_229) < 10f)
		{
			if (func_749() && func_748())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SKLR1_DELIVER");
				bLocal_45 = true;
			}
			if (ENTITY::_0x61914209C36EFDDB(iLocal_140) == 5)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SKLR1_DELIVER");
				bLocal_45 = true;
			}
		}
	}
}

void func_351()
{
	if (func_353())
	{
		if (!bLocal_43)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		}
	}
}

bool func_352(var uParam0)
{
	switch (iLocal_380)
	{
		case 0:
			if (__LIB_3__::func_229(4) && __LIB_3__::func_229(13))
			{
				func_751(iLocal_380, 1);
			}
			break;
		case 1:
			if (BUILTIN::VDIST(Global_36, vLocal_214) < 100f)
			{
				iLocal_68 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_214);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_68))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_68);
					func_751(iLocal_380, 2);
				}
			}
			break;
		case 2:
			if (INTERIOR::IS_INTERIOR_READY(iLocal_68))
			{
				func_751(iLocal_380, 3);
			}
			break;
		case 3:
			if (func_752())
			{
				WEAPON::_0x899A04AFCC725D04(iLocal_143, joaat("LO_LAWSHOTGUN"));
				func_751(iLocal_380, 6);
			}
			break;
		case 6:
			if (!PED::_0x095C2277FED731DB(iLocal_143))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("WEAPON_UNARMED"), true, 1, false, false);
				__LIB_0__::func_11();
				AUDIO::STOP_PED_SPEAKING(iLocal_143, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_143, 448, true);
				__LIB_12__::func_875(uParam0, iLocal_143, "VAL_Sheriff", 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, iLocal_146);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_146);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_146, joaat("PLAYER"));
				func_751(iLocal_380, 5);
				return true;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_353()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_372))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_372, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_354()
{
	if (bLocal_41)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_14__::func_146();
		return true;
	}
	if (!__LIB_0__::func_75(&uLocal_163))
	{
		if (ENTITY::_0x61914209C36EFDDB(iLocal_140) == 6 || ENTITY::_0x61914209C36EFDDB(iLocal_140) != 5)
		{
			__LIB_1__::func_148(&uLocal_163);
		}
	}
	else if (__LIB_0__::func_264(&uLocal_163) > 3f || ENTITY::_0x61914209C36EFDDB(iLocal_140) == 3)
	{
		__LIB_0__::func_37(&uLocal_163);
		bLocal_41 = true;
	}
	else
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	return false;
}

void func_359()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (func_759(5))
		{
			ENTITY::DELETE_ENTITY(&iLocal_58);
		}
	}
	switch (iLocal_393)
	{
		case 0:
			if (func_621(5, 0, "pl_loop_sheriff_killer_struggle"))
			{
				func_760(iLocal_393, 2);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				iLocal_138 = OBJECT::CREATE_OBJECT(iLocal_115, vLocal_345, false, true, false, false, true);
			}
			if ((((((((func_646() && func_761()) && func_639()) && func_641()) && func_642()) && func_640()) && func_644()) && func_645()) && ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				OBJECT::_0xDFA1237F5228263F(iLocal_138, Global_35);
				func_760(iLocal_393, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[5], true, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_143))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "U_M_M_ValSheriff_01", iLocal_143, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "p_windsorchair03x", iLocal_136, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "p_cs_newspaper_03x", iLocal_132, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "p_sawbucktable01x", iLocal_137, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "p_foldedbills01x", iLocal_138, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "p_pen01x", iLocal_58, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "p_diningchairs01x", iLocal_131, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[5], "EdmundLowry", iLocal_140, 0);
				if (__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[5], "b_PlayerArthur", false, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[5], "b_PlayerArthur", true, false);
				}
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[5], "b_loop", false, false);
				func_760(iLocal_393, 3);
			}
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[5], "pl_loop_sheriff_killer_struggle");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[5], "pl_loop_sheriff_killer_struggle"))
			{
				func_760(iLocal_393, 4);
			}
			break;
		case 4:
			if (bLocal_51)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[5], "pl_loop_sheriff_killer_struggle", true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_381[5]);
				__LIB_1__::func_148(&uLocal_157);
				func_760(iLocal_393, 5);
			}
			break;
		case 5:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[5], "pl_Fail_Sheriff_Kills_Killer");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[5], "pl_Success_Player_Kills_Killer");
			if (func_210() && !MISC::_0x7A76104CC2CC69E8(iLocal_140, 0, 1))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[5], "pl_Fail_Sheriff_Kills_Killer") && __LIB_0__::func_264(&uLocal_157) > 7f)
				{
					bLocal_36 = true;
					__LIB_0__::func_37(&uLocal_157);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[5], "b_loop", true, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[5], "pl_Fail_Sheriff_Kills_Killer", true);
					func_760(iLocal_393, 9);
				}
			}
			else
			{
				func_342(8);
				__LIB_0__::func_325(&iLocal_53);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[5], "pl_Success_Player_Kills_Killer"))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, joaat("PLAYER"));
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[5], "b_loop", true, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_381[5], "pl_Success_Player_Kills_Killer", true);
					func_760(iLocal_393, 8);
				}
			}
			break;
		case 9:
			func_762();
			if (bLocal_36)
			{
				if (func_210() && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_381[5], "s_sheriff_kills_killer", 1))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_381[5]) > 7.28f)
					{
						__LIB_0__::func_325(&iLocal_53);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140, false, true);
						PED::SET_PED_TO_RAGDOLL(iLocal_140, 10, 20, 0, false, true, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_140, 128, true);
						TASK::_0x9EBD34958AB6F824(iLocal_140);
						__LIB_1__::func_948(iLocal_56, 0, 0, 0, 1, 0, 0, 0);
						__LIB_1__::func_864(iLocal_140, 1, 0);
					}
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iLocal_381[5], "pl_Fail_Sheriff_Kills_Killer"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_381[5], "s_Ig4_SittingToWriting_Fail", 1))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_381[5], "b_loop"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_381[5], "b_loop", false, false);
					}
					func_763(0);
					func_760(iLocal_393, 7);
				}
			}
			break;
		case 8:
			func_762();
			if (func_210())
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_381[5]) > 35f)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140, false, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_140, 128, true);
					__LIB_1__::func_864(iLocal_140, 1, 0);
				}
			}
			if (!bLocal_43)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_381[5]) > 33.5f && func_432(0))
				{
					__LIB_1__::func_948(iLocal_56, 0, 0, 0, 1, 0, 0, 0);
					func_763(0);
					TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", true);
					func_764();
					bLocal_43 = true;
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_381[5], "s_IG4_SittingToWriting", 1))
			{
				if (ANIMSCENE::_0x73616E64696C616E(iLocal_381[5], "U_M_M_ValSheriff_01", 1, 0) || ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_381[5]) > 50f)
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_148))
					{
						func_765();
						TASK::_TASK_USE_SCENARIO_POINT(iLocal_143, iLocal_148, "SCRIPT_COMMON_SHERIFF_SIT_WRITING", -1, false, true, 0, false, -1f, false);
						func_763(5);
						func_760(iLocal_393, 10);
					}
				}
			}
			break;
		case 7:
			func_762();
			if (ANIMSCENE::_0x73616E64696C616E(iLocal_381[5], "U_M_M_ValSheriff_01", 1, 0))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_148))
				{
					func_765();
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_143, iLocal_148, "SCRIPT_COMMON_SHERIFF_SIT_WRITING", -1, false, true, 0, false, -1f, false);
					func_763(5);
					func_760(iLocal_393, 10);
				}
			}
			break;
	}
}

void func_360(var uParam0)
{
	func_766(uParam0);
	if (func_759(0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_68)
	{
		if (!__LIB_6__::func_904())
		{
			if (!__LIB_0__::func_75(&uLocal_175))
			{
				__LIB_1__::func_148(&uLocal_175);
			}
			else if (__LIB_0__::func_264(&uLocal_175) > 5f)
			{
				if (__LIB_12__::func_876(uParam0, sLocal_152[iLocal_64], 0))
				{
					if (iLocal_64 >= 2)
					{
						iLocal_64 = 1;
					}
					else
					{
						iLocal_64++;
					}
					__LIB_0__::func_37(&uLocal_175);
				}
			}
		}
		else if (__LIB_0__::func_75(&uLocal_175))
		{
			__LIB_0__::func_37(&uLocal_175);
		}
	}
}

void func_361(var uParam0)
{
	func_766(uParam0);
	if (func_759(0))
	{
		if (!__LIB_6__::func_904())
		{
			if (!__LIB_0__::func_75(&uLocal_172))
			{
				__LIB_1__::func_148(&uLocal_172);
			}
			else if (__LIB_0__::func_264(&uLocal_172) > 4f)
			{
				if (__LIB_12__::func_876(uParam0, "RSK_GETOUT_KILL", 0))
				{
					if (!func_759(6))
					{
						iLocal_66++;
						if (iLocal_66 > 1)
						{
							func_763(6);
						}
					}
					__LIB_0__::func_37(&uLocal_172);
				}
			}
		}
		else if (__LIB_0__::func_75(&uLocal_172))
		{
			__LIB_0__::func_37(&uLocal_172);
		}
	}
}

void func_365()
{
	switch (iLocal_394)
	{
		case 0:
			if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(4)) && !PERSCHAR::_0x4AFC7288C77238B3(__LIB_0__::func_120(4)))
			{
				PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(4));
			}
			iLocal_394 = 1;
			break;
		case 1:
			if (func_767())
			{
				iLocal_394 = 2;
			}
			break;
		case 2:
			if (func_759(6))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_144, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_144, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_144, Global_35, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_144, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_144, 8, false);
				__LIB_1__::func_948(iLocal_57, 0, 0, 0, 1, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144, ENTITY::GET_ENTITY_COORDS(iLocal_140, false, false), 1f, -1, 0.25f, 0, 40000f);
				iLocal_394 = 4;
			}
			break;
		case 4:
			if (!func_759(3))
			{
				if (__LIB_14__::func_147(iLocal_144, "room_val_jail_main"))
				{
					func_763(3);
				}
			}
			if (__LIB_0__::func_94(iLocal_144, ENTITY::GET_ENTITY_COORDS(iLocal_140, false, false), 0) < 2f)
			{
				ENTITY::_0x18FF3110CF47115D(iLocal_140, 7, 1);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(iLocal_144, iLocal_140);
				iLocal_394 = 5;
			}
			break;
		case 5:
			if (!__LIB_0__::func_491(iLocal_144, 1245594896))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144, vLocal_361, 1f, -1, 0.25f, 0, fLocal_364);
				func_763(4);
				iLocal_394 = 6;
			}
			break;
		case 6:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_144) != iLocal_68 && __LIB_0__::func_94(iLocal_144, vLocal_361, 0) < 1f)
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iLocal_144, iLocal_140, vLocal_361, 1f, 1);
				iLocal_394 = 8;
			}
			break;
		case 8:
			if (!__LIB_0__::func_491(iLocal_144, -208384378))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_144);
				iLocal_394 = 9;
			}
			break;
	}
}

bool func_366()
{
	int iVar0;
	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (!bLocal_509)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			bLocal_509 = true;
		}
	}
	else if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && __LIB_0__::func_492(1) > iLocal_510)
	{
		return true;
	}
	return false;
}

void func_401(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_804(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_804(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_804(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_804(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_804(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_804(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_804(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_804(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_804(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_804(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_804(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_804(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_804(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806();
						func_807(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_804(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_401(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						__LIB_18__::func_745(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_401(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_401(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_804(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_804(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_841();
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
							func_804(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						Jump @6178; //curOff = 5960
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
void func_402(int iParam0, bool bParam1)
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

Vector3 func_405(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_848(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_848(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

bool func_429()
{
	if (__LIB_0__::func_94(Global_35, vLocal_214, 1) > 20f)
	{
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		return true;
	}
	if (__LIB_0__::func_94(Global_35, vLocal_214, 1) < 20f && PED::IS_PED_SHOOTING(Global_35))
	{
		return true;
	}
	return false;
}

void func_431()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143) && __LIB_0__::func_117(3, 1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_143, true))
		{
			__LIB_2__::func_753(3, 0, 0, 1, 0);
		}
	}
}

bool func_432(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	if (bParam0)
	{
		if (func_759(7))
		{
			return true;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_373))
		{
			iLocal_373 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_333, vLocal_336, vLocal_339, "RANSACK_BLOCK");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_373))
		{
			if (iLocal_496 == 0)
			{
				iLocal_496 = PED::_0x4C39C95AE5DB1329(iLocal_373, 0, 16);
			}
			if (iLocal_496 != 0)
			{
				func_763(7);
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (!func_759(7))
		{
			return true;
		}
		__LIB_0__::func_172(iLocal_373);
		if (iLocal_496 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_496, false);
		}
		func_883(7);
	}
	return iVar0;
}

void func_433()
{
	if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "cautious") > 0f)
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "cautious", 0f, -1);
	}
}

void func_434(bool bParam0)
{
	struct<4> Var0;
	if (bParam0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_367))
		{
			iLocal_367 = VOLUME::_CREATE_VOLUME_BOX(2475.5f, -1112.1f, 46.2f, 0f, 0f, 9.999998f, 11f, 3.5f, 4f);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_367))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_367, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_367, 0, 0, 0, -1, -1, 0);
			if (iLocal_147 == 0)
			{
				iLocal_147 = PED::_0x4C39C95AE5DB1329(iLocal_367, 0, 15);
			}
			if (__LIB_10__::func_229(iLocal_367, &Var0))
			{
				PATHFIND::SET_ROADS_IN_AREA(Var0, Var0.f_3, 0, 1, 0);
			}
			__LIB_0__::func_566(iLocal_367, 0);
		}
	}
	else
	{
		if (iLocal_147 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_147, false);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_367))
		{
			POPULATION::_0xA1CFB35069D23C23(iLocal_367);
			POPULATION::_0x74C2B3DC0B294102(iLocal_367);
			if (__LIB_10__::func_229(iLocal_367, &Var0))
			{
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 1, 1);
			}
			VOLUME::_DELETE_VOLUME(iLocal_367);
		}
	}
}

int func_489(int iParam0, int iParam1)
{
	var uVar0;
	return func_937(&uVar0, iParam0, iParam1);
}

bool func_578()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		iLocal_127 = OBJECT::CREATE_OBJECT(iLocal_108, vLocal_285, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		iLocal_128 = OBJECT::CREATE_OBJECT(iLocal_109, vLocal_291, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_128) && !ENTITY::IS_ENTITY_DEAD(iLocal_128))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_127, vLocal_285, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_127, vLocal_288, 2, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_128, vLocal_291, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_128, vLocal_294, 2, true);
		return true;
	}
	return false;
}

bool func_579(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (TXD::_DOES_STREAMED_TXD_EXIST(iParam0))
	{
		TXD::_REQUEST_STREAMED_TXD(iParam0, false);
		if (TXD::_HAS_STREAMED_TXD_LOADED(iParam0))
		{
			iLocal_59 = func_988(vParam1, iParam4);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_59))
			{
				return false;
			}
			OBJECT::_SET_APPLY_OBJECT_TXD(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_59), iParam0, 0, 0);
			if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_59))
			{
				PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_59, 0);
				PLAYER::_0x6ECFC621A168424C(iLocal_59, iLocal_59, 0, 0);
			}
			if (iParam5 != -1)
			{
				__LIB_14__::func_154(iLocal_59, "letter_item", iParam5);
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_614(int iParam0, int* iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
		{
			*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0, sParam2, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		__LIB_1__::func_951(iParam1);
	}
}

void func_618()
{
	Local_69 = { 0f, 0f, 0f };
	Local_69.f_3 = Global_35;
	Local_69.f_4 = 21030;
	Local_69.f_8 = 4;
	Local_69.f_19 = 4;
	Local_69.f_21 = 4;
	Local_69.f_17 = 4;
	Local_69.f_18 = 4;
	Local_69.f_7 = 0;
}

bool func_621(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_381[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_381[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1023(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_381[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_381[iParam0]);
		}
	}
	return false;
}

void func_622(int iParam0, int iParam1)
{
	iLocal_390 = iParam1;
}

bool func_623()
{
	if (bLocal_29)
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[2], true, false))
	{
		if ((!ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[2], "pl_Fail") || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[2], "pl_Exit_Knife_Throw_Head")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[2], "pl_Exit_Knife_Throw_Head_Alt"))
		{
			return false;
		}
		if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[2], "pl_Fail") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[2], "pl_Exit_Knife_Throw_Head")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[2], "pl_Exit_Knife_Throw_Head_Alt"))
		{
			bLocal_29 = true;
			return true;
		}
	}
	return false;
}

bool func_624()
{
	vector3 vVar0;
	if (bLocal_49)
	{
		return true;
	}
	vVar0 = { -617.7776f, 530.4051f, 93.6205f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		iLocal_125 = OBJECT::CREATE_OBJECT(iLocal_106, vLocal_342, false, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		iLocal_126 = OBJECT::CREATE_OBJECT(iLocal_105, vVar0, false, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		iLocal_123 = OBJECT::CREATE_OBJECT(iLocal_103, vLocal_342, false, true, false, false, true);
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_125) || !ENTITY::DOES_ENTITY_EXIST(iLocal_126)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		return false;
	}
	bLocal_49 = true;
	ENTITY::SET_ENTITY_PROOFS(iLocal_126, 8, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_126, true);
	OBJECT::_0x7FCD49388BC9B775(iLocal_126, 0);
	OBJECT::_0xF49574E2332A8F06(iLocal_126, 0f);
	return true;
}

void func_626()
{
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_140))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_140, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_140, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_140, Global_35, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_140, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 253, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_140, 0, false);
	}
}

void func_630()
{
	vector3 vVar0;
	vector3 vVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(iLocal_381[2], "s_interact_lantern01x"))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_381[2], "s_interact_lantern01x", iLocal_126);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[2], "s_interact_lantern01x", iLocal_126, 0);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_126, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_126, 2) };
		OBJECT::DELETE_OBJECT(&iLocal_126);
		iLocal_497 = OBJECT::CREATE_OBJECT(iLocal_105, vVar0, false, true, false, false, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_497))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_497, vVar0, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_497, vVar3, 2, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_497, 8, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_497, true);
			ENTITY::_0xEBDC12861D079ABA(iLocal_126, 1);
			OBJECT::_0xF49574E2332A8F06(iLocal_497, 0.7f);
			OBJECT::_0x7FCD49388BC9B775(iLocal_497, 0);
		}
	}
}

void func_631(int iParam0, int iParam1)
{
	iLocal_391 = iParam1;
}

bool func_632()
{
	if (bLocal_50)
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_381[3], true, false))
	{
		if ((((!ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[3], "pl_Enter_Wake_Up") || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[3], "pl_Enter_Throw_Head_Reach")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[3], "pl_Exit_Knife_Throw_Head")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[3], "pl_Exit_Knife_Throw_Head_Alt")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[3], "pl_Fail"))
		{
			return false;
		}
		if ((((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[3], "pl_Enter_Wake_Up") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[3], "pl_Enter_Throw_Head_Reach")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[3], "pl_Exit_Knife_Throw_Head")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[3], "pl_Exit_Knife_Throw_Head_Alt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[3], "pl_Fail"))
		{
			bLocal_50 = true;
			return true;
		}
	}
	return false;
}

bool func_633()
{
	switch (iLocal_379)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_368))
			{
				iLocal_368 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, "CONTEXT_VOL");
			}
			else
			{
				func_1026(iLocal_379, 1);
			}
			break;
		case 1:
			if (bLocal_31)
			{
				if (!__LIB_0__::func_139(iLocal_185))
				{
					if (func_210())
					{
						iLocal_185 = __LIB_2__::func_403("KLR1_CTXTHROW", joaat("INPUT_MELEE_ATTACK"), iLocal_140, 3, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
				}
				else
				{
					__LIB_0__::func_186(iLocal_185, 128);
					func_1026(iLocal_379, 2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_139(iLocal_185))
			{
				if (__LIB_1__::func_732(iLocal_185, 1))
				{
					__LIB_10__::func_597(Local_396[9 /*9*/].f_2);
					__LIB_0__::func_172(iLocal_368);
					__LIB_1__::func_281(&iLocal_185, 1, 1);
					func_1026(iLocal_379, 4);
					return true;
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_636(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			__LIB_12__::func_779(uParam0, vLocal_195);
			iLocal_377 = 0;
			StringCopy(&(uParam0->f_2575), "RSKLR_S1_EXT", 24);
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_140, "EdmundLowry", 0, 0, 1);
			__LIB_13__::func_59(uParam0, iLocal_143, "U_M_M_ValSheriff_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_130, "p_cs_book03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_131, "p_diningchair01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_135, "p_door_val_jail_cell01x", 0, 0, 0);
			uParam0->f_206.f_404 = 16;
			__LIB_0__::func_7(&(uParam0->f_206.f_404), 8192);
			__LIB_12__::func_981(uParam0, 150614);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_129, false);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
	}
}

void func_637(int iParam0, int iParam1)
{
	iLocal_392 = iParam1;
}

bool func_638()
{
	vector3 vVar0;
	vVar0 = { -277.4854f, 804.1317f, 118.3814f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_131))
	{
		if (iLocal_97 == 0)
		{
			iLocal_97 = ENTITY::_0x6F3068258A499E52(iLocal_110, vVar0, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_97))
		{
			iLocal_131 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_97));
		}
		return false;
	}
	return true;
}

bool func_639()
{
	vector3 vVar0;
	vVar0 = { -275.567f, 808.6144f, 118.3753f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
	{
		if (iLocal_94 == 0)
		{
			iLocal_94 = ENTITY::_0x6F3068258A499E52(iLocal_112, vVar0, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_94))
		{
			iLocal_135 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_94));
		}
		return false;
	}
	return true;
}

bool func_640()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_132))
	{
		if (iLocal_99 == 0)
		{
			iLocal_99 = ENTITY::_0x6F3068258A499E52(iLocal_119, vLocal_354, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_99))
		{
			iLocal_132 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_99));
		}
		else
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_641()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		iLocal_58 = OBJECT::CREATE_OBJECT(iLocal_118, vLocal_223, false, true, true, true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_58, vLocal_223, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_58, vLocal_226, 2, true);
		return true;
	}
	return false;
}

bool func_642()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_129))
	{
		iLocal_129 = OBJECT::CREATE_OBJECT(iLocal_122, vLocal_217, false, true, true, true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_129))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_129, vLocal_217, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_129, vLocal_220, 2, true);
		return true;
	}
	return false;
}

bool func_643()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_130))
	{
		iLocal_130 = OBJECT::CREATE_OBJECT(iLocal_121, vLocal_217, false, true, true, true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_130))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_130, vLocal_217, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_130, vLocal_220, 2, true);
		return true;
	}
	return false;
}

bool func_644()
{
	vector3 vVar0;
	vVar0 = { -277.402f, 805.2881f, 119.1647f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_133))
	{
		if (iLocal_100 == 0)
		{
			iLocal_100 = ENTITY::_0x6F3068258A499E52(iLocal_111, vVar0, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_100))
		{
			iLocal_133 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_100));
		}
		else
		{
			return true;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_VISIBLE(iLocal_133))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_133, false);
	}
	return true;
}

bool func_645()
{
	vector3 vVar0;
	vVar0 = { -276.8335f, 804.7417f, 119.1736f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_134))
	{
		if (iLocal_101 == 0)
		{
			iLocal_101 = ENTITY::_0x6F3068258A499E52(iLocal_120, vVar0, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_101))
		{
			iLocal_134 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_101));
		}
		else
		{
			return true;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_VISIBLE(iLocal_134))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_134, false);
	}
	return true;
}

bool func_646()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_136))
	{
		if (iLocal_95 == 0)
		{
			iLocal_95 = ENTITY::_0x6F3068258A499E52(iLocal_116, vLocal_348, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_95))
		{
			iLocal_136 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_95));
		}
		return false;
	}
	return true;
}

void func_679(var uParam0)
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
			__LIB_18__::func_746(&(uParam0->f_416));
		}
		func_1061(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1063(uParam0);
		func_1064(uParam0);
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

void func_686(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_18__::func_744(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_1__::func_625();
	}
}

int func_692(int iParam0, int iParam1)
{
	var uVar0;
	return func_1083(&uVar0, iParam0, iParam1);
}

int func_693(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_937(&uVar0, iParam0, 0);
	iVar9 = func_1083(&uVar4, iParam0, 0);
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

void func_727(int iParam0, int iParam1)
{
	iLocal_389 = iParam1;
}

bool func_728()
{
	if (bLocal_48)
	{
		return true;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_381[0], "pl_open_door");
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_381[0], "pl_open_door"))
	{
		if (__LIB_0__::func_181() || bLocal_33)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_381[0], "John", &vLocal_14, true, "pl_open_door", 2))
			{
				bLocal_48 = true;
				return true;
			}
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_381[0], "Arthur", &vLocal_14, true, "pl_open_door", 2))
		{
			bLocal_48 = true;
			return true;
		}
	}
	return false;
}

bool func_735()
{
	if (__LIB_0__::func_181())
	{
		if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_381[0], "JOHN"))
		{
			return true;
		}
	}
	else if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_381[0], "ARTHUR"))
	{
		return true;
	}
	return false;
}

bool func_737()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		if (iLocal_98 == 0)
		{
			iLocal_98 = ENTITY::_0x6F3068258A499E52(iLocal_104, vLocal_188, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_98))
		{
			iLocal_139 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_98));
		}
		return false;
	}
	return true;
}

void func_738()
{
	__LIB_0__::func_325(&iLocal_53);
	__LIB_0__::func_325(&iLocal_54);
	iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iLocal_139);
	if (MAP::DOES_BLIP_EXIST(iLocal_53))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "KLR1_CLUE");
	}
}

void func_741(int iParam0)
{
	iLocal_395 = iParam0;
}

void func_742()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { -615.7816f, 530.7779f, 93.6205f };
	vVar0.f_2 = (vVar0.z + 1.5f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	vVar3 = { 0f, 0f, 0f };
	vVar6 = { -615.7816f, 530.7779f, 93.6205f };
	vVar6.x = (vVar6.x + 1.2f);
	vVar6.f_1 = (vVar6.y + 1.2f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6, &(vVar6.f_2), false);
	ENTITY::SET_ENTITY_COORDS(iLocal_140, vVar6, true, false, true, true);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		vVar3.f_2 = 305.504f;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_381[1], vVar0, vVar3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[1], "player_one", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_381[1], "CS_GENSTORYMALE", iLocal_140, 0);
}

bool func_748()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_2__::func_825(Global_35) == iLocal_142)
		{
			return true;
		}
	}
	return false;
}

bool func_749()
{
	if (ENTITY::_0x61914209C36EFDDB(iLocal_140) == 7)
	{
		if (PED::_GET_CARRIER_AS_MOUNT(iLocal_140) == iLocal_142)
		{
			return true;
		}
	}
	return false;
}

void func_751(int iParam0, int iParam1)
{
	iLocal_380 = iParam1;
}

bool func_752()
{
	if (!__LIB_0__::func_272(iLocal_143, 0))
	{
		if (__LIB_3__::func_397(3, 0))
		{
			iLocal_143 = __LIB_2__::func_965(3, 1, 0, 0, 1, 1);
		}
		return false;
	}
	else if (!__LIB_0__::func_122(3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143, true, true);
		__LIB_0__::func_124(3);
		return false;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_143) != iLocal_68)
	{
		__LIB_1__::func_948(iLocal_56, 0, 0, 0, 1, 0, 0, 0);
		if (!bLocal_500)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_143, vLocal_501, fLocal_504, true, false, true);
			bLocal_500 = true;
		}
		if (!__LIB_0__::func_491(iLocal_143, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_143, vLocal_229, 1.5f, -1, 0.25f, 0, 40000f);
		}
		return false;
	}
	return true;
}

bool func_759(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_65, iParam0))
	{
		return true;
	}
	return false;
}

void func_760(int iParam0, int iParam1)
{
	iLocal_393 = iParam1;
}

bool func_761()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
	{
		if (iLocal_96 == 0)
		{
			iLocal_96 = ENTITY::_0x6F3068258A499E52(iLocal_117, vLocal_351, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_96))
		{
			iLocal_137 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_95));
		}
		return false;
	}
	return true;
}

void func_762()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_148))
	{
		if (STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0))
		{
			iLocal_148 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_131, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_148, 0);
		}
	}
}

void func_763(int iParam0)
{
	if (!func_759(iParam0))
	{
		MISC::SET_BIT(&iLocal_65, iParam0);
	}
}

void func_764()
{
	__LIB_0__::func_325(&iLocal_53);
	__LIB_0__::func_325(&iLocal_54);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
	{
		iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iLocal_138);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_53))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "KLR1_LBLREWARD");
	}
}

void func_765()
{
	if (!bLocal_52)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_130))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_130, false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_129))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_129, true);
		}
		bLocal_52 = true;
	}
}

void func_766(var uParam0)
{
	if (!func_759(2))
	{
		if (func_759(0) && func_759(4))
		{
			if (!func_759(1))
			{
				__LIB_5__::func_20(0, 0);
				if (__LIB_12__::func_876(uParam0, "RSK_BODY_DEPUTY", 0))
				{
					func_763(1);
				}
			}
			else if (!__LIB_6__::func_903("RSK_BODY_DEPUTY"))
			{
				func_763(2);
			}
		}
	}
}

bool func_767()
{
	if (!__LIB_0__::func_272(iLocal_144, 0))
	{
		if (__LIB_3__::func_397(4, 0))
		{
			iLocal_144 = __LIB_2__::func_965(4, 1, 0, 0, 1, 1);
		}
		return false;
	}
	else if (!__LIB_0__::func_122(4))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_144, true, true);
		__LIB_0__::func_124(4);
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144, vLocal_357, fLocal_360, true, false, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_144, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_144, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_144, Global_35, false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_144, false);
	ENTITY::SET_ENTITY_PROOFS(iLocal_144, 8, false);
	TASK::TASK_STAND_STILL(iLocal_144, -1);
	return true;
}

bool func_804(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_804(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1195(28);
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
			__LIB_18__::func_742(iParam0);
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
						func_804(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_804(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_804(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_804(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_804(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_804(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_804(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1195(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_14__::func_150(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_14__::func_150(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_804(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_804(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1243(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1244(iParam0);
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
				func_804(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_806()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1257();
	func_1258();
	func_1259();
	func_1260();
	func_1261();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_807(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1264(iParam0, 1, 1, -142743235, 1);
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
	__LIB_14__::func_0(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_14__::func_0(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
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

void func_841()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1291(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_848(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
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
			bVar11 = func_1308(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && func_1309(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

void func_883(int iParam0)
{
	if (func_759(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_65, iParam0);
	}
}

int func_937(var uParam0, int iParam1, int iParam2)
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
		return func_937(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_988(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam0, iParam3, 0.5f, 0, false);
	iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(iVar0, "PrimaryItem");
	return iVar1;
}

char* func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@SKLR@IG@ig_1_opendoor@ig_1_opendoor";
		case 1:
			return "script@common@cnv_camp@grief@knockout@knockout";
		case 2:
			return "script@rcm@SKLR@IG@ig2_killer_speech@ig2_killer_speech";
		case 3:
			return "script@rcm@SKLR@IG@ig2_killer_speech@ig2_killer_speech_player";
		case 4:
			return "script@rcm@sklr@leadin@s1@ext@leadin";
		case 5:
			return "script@rcm@sklr@ig@ig4_sheriff_struggle@ig4_sheriff_struggle";
		case 6:
			return "script@proc@bountyhunting@sheriff_rewards@valentine@sitrelax";
		default:
			break;
	}
	return "";
}

void func_1026(int iParam0, int iParam1)
{
	iLocal_379 = iParam1;
}

void func_1034(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RSKLR_S1_EXT"))
	{
		func_359();
		if (!bLocal_506)
		{
			func_1425();
			bLocal_506 = true;
		}
		if (!bLocal_51)
		{
			if (__LIB_13__::func_218(uParam0, iLocal_140, 0, 0, 1, 1))
			{
				bLocal_51 = true;
			}
		}
	}
}

void func_1061(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1436();
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
						__LIB_9__::func_23(__LIB_0__::func_23());
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

void func_1063(var uParam0)
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
			func_1443(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1443(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1064(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1443(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1083(var uParam0, int iParam1, int iParam2)
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
		return func_1083(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1195(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1568(iParam0);
}

void func_1243(int iParam0)
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
			__LIB_14__::func_150(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1195(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1244(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1617(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1617(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1617(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1617(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1617(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1617(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1617(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1617(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1617(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1617(-1, iParam0);
	}
}

void func_1257()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1629(0);
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
	func_1629(1);
}

void func_1258()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_804(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1259()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1632(0);
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
	func_1632(1);
}

void func_1260()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1632(0);
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
	func_1632(1);
}

void func_1261()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_804(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_804(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1264(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1264(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1264(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1264(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1291(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1664(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_804(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1308(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	if (LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720.f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720.f_23 >= 3)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_560(Global_1310720.f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1676(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1309(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_1677(iParam0);
	if (__LIB_0__::func_898(373691918) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

void func_1425()
{
	func_1760();
	TASK::UNCUFF_PED(iLocal_140);
	PED::_0x7E8F9949B7AABBF0(iLocal_140, 1, 1);
	ENTITY::_0x18FF3110CF47115D(iLocal_140, 7, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_140, 6, true);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_140);
	ENTITY::SET_ENTITY_PROOFS(iLocal_140, 1, false);
	if (!PED::GET_PED_CONFIG_FLAG(iLocal_140, 26, true))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 26, true);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iLocal_140, 339, true))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 339, true);
	}
}

void func_1436()
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
	iVar0 = func_692(6291456, 0);
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

void func_1443(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1443(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1443(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1568(int iParam0)
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
					__LIB_14__::func_150(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
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
			__LIB_1__::func_881();
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

void func_1617(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_1876(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_1876(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_1629(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_804(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1882(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_807(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1264(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1887(Var0);
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

void func_1632(bool bParam0)
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
		func_804(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_804(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1264(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1264(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1264(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1664(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1664(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1664(iVar63, -915411861, 1, 0, 0));
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

int func_1676(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
			return joaat("SHOP_SDN_MARKET");
			return joaat("SHOP_SDN_FRENCH_MARKET01");
			return -1673339528;
			return joaat("SHOP_SDN_BARTENDER_SLUM");
			return joaat("SHOP_SDN_PHOTO_STUDIO");
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_SDN_COACH");
			return joaat("SHOP_SDN_BARTENDER");
			return joaat("SHOP_RGG_POST_OFFICE");
			return joaat("SHOP_RGG_TRAIN_STATION");
			return joaat("SHOP_RHO_GENERAL_STORE");
			return joaat("SHOP_RHO_FENCE");
			return joaat("SHOP_RHO_GUNSMITH");
			return joaat("SHOP_RHO_POST_OFFICE");
			return joaat("SHOP_RHO_BUTCHER");
			return joaat("SHOP_RHO_TRAIN_STATION");
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_RHO_BANK");
			return joaat("SHOP_RHO_BARTENDER");
			return joaat("SHOP_STR_BUTCHER");
			return joaat("SHOP_STR_GENERAL_STORE");
			return joaat("SHOP_STR_WELCOME_CENTER");
			return joaat("SHOP_STR_HORSE_SHOP");
			return joaat("SHOP_STR_POST_OFFICE");
			return joaat("SHOP_STR_HORSE_FENCE_MP");
			return joaat("SHOP_STR_NEWSPAPER_BOY");
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_STR_BARTENDER");
			return joaat("SHOP_VAL_DOCTOR");
			return joaat("SHOP_VAL_GENERAL_STORE");
			return joaat("SHOP_VAL_GUNSMITH");
			return joaat("SHOP_VAL_BARBER");
			return joaat("SHOP_VAL_POST_OFFICE");
			return joaat("SHOP_VAL_HORSE_SHOP");
			return joaat("SHOP_VAL_BUTCHER");
			return joaat("SHOP_VAL_TRAIN_STATION");
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
			return joaat("SHOP_VAL_BARTENDER_KEANE");
			return joaat("SHOP_VAL_BARTENDER_SLUM");
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
			return joaat("SHOP_VAL_HOTEL");
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_VAL_COACH");
			return joaat("SHOP_VAL_BANK");
			return joaat("SHOP_VAL_BARTENDER");
			return joaat("SHOP_SCM_HORSE_SHOP");
			return joaat("SHOP_VAN_POST_OFFICE");
			return joaat("SHOP_VAN_TRAIN_STATION");
			return joaat("SHOP_VAN_FENCE");
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
			return joaat("SHOP_VAN_HORSE_SHOP");
			return joaat("SHOP_VAN_BARTENDER");
			return joaat("SHOP_VAN_COACH");
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_ASB_GUNSMITH");
			return joaat("SHOP_ASB_POST_OFFICE");
			return joaat("SHOP_ASB_TRAIN_STATION");
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
			return joaat("SHOP_WAL_POST_OFFICE");
			return joaat("SHOP_WAL_GENERAL_STORE");
			return joaat("SHOP_WAL_TRAIN_STATION");
			return joaat("SHOP_DYNAMIC");
			return joaat("SHOP_WILDERNESS_SUPPLIES");
			return joaat("SHOP_ANYWHERE_HANDHELD");
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
			return joaat("SHOP_WEAPON_MOD_STORE");
			return joaat("SHOP_CLOTHING");
			return joaat("SHOP_CAMP_SHAVING");
			return joaat("SHOP_WARDROBE");
			return joaat("SHOP_BVH_DOCTOR");
			return joaat("SHOP_BVH_GENERAL_STORE");
			return joaat("SHOP_BVH_GUNSMITH");
			return joaat("SHOP_BVH_HORSE_TRAINER");
			return 1529797091;
			return joaat("SHOP_CLM_DOCTOR");
			return joaat("SHOP_CLM_GENERAL_STORE");
			return joaat("SHOP_CLM_GUNSMITH");
			return joaat("SHOP_CLM_HORSE_TRAINER");
			return 1388932648;
			return joaat("SHOP_HSO_DOCTOR");
			return joaat("SHOP_HSO_GENERAL_STORE");
			return joaat("SHOP_HSO_GUNSMITH");
			return joaat("SHOP_HSO_HORSE_TRAINER");
			return 878376253;
			return joaat("SHOP_LAK_DOCTOR");
			return joaat("SHOP_LAK_GENERAL_STORE");
			return joaat("SHOP_LAK_GUNSMITH");
			return joaat("SHOP_LAK_HORSE_TRAINER");
			return joaat("SHOP_SHB_DOCTOR");
			return joaat("SHOP_SHB_GENERAL_STORE");
			return joaat("SHOP_SHB_GUNSMITH");
			return joaat("SHOP_SHB_HORSE_TRAINER");
			return -2076086367;
			return joaat("SHOP_CLM_HORSE_FENCE");
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
			return joaat("SHOP_AMD_GENERAL_STORE");
			return joaat("SHOP_AMD_BARTENDER");
			return joaat("SHOP_AMD_POST_OFFICE");
			return joaat("SHOP_TBL_GENERAL_STORE");
			return joaat("SHOP_TBL_BARTENDER");
			return joaat("SHOP_TBL_GUNSMITH");
			return joaat("SHOP_TBL_BUTCHER");
			return joaat("SHOP_TBL_HORSE_SHOP");
			return joaat("SHOP_RYC_FENCE");
			return joaat("SHOP_THL_FENCE");
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
			return joaat("SHOP_BEN_POST_OFFICE");
			return joaat("SHOP_BEN_TRAIN_STATION");
			return 548657065;
			return 243086140;
			return -305029900;
			return 1008537949;
			return 0;
		}
int func_1677(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_720(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		iVar6 = __LIB_0__::func_621(iVar5);
		return iVar6;
	}
	return -1;
}

void func_1760()
{
	if (!func_210())
	{
		PED::RESURRECT_PED(iLocal_140);
	}
	ENTITY::_SET_ENTITY_HEALTH(iLocal_140, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_140, false), 0);
	PED::_0x5BCF0B79D4F5DBA3(iLocal_140, 75f);
	PED::_0x2E5B5D1F1453E08E(iLocal_140, 1);
	if (PED::GET_PED_CONFIG_FLAG(iLocal_140, 11, true))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 11, false);
	}
}

void func_1876(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1195(50);
			}
			else
			{
				func_1195(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1195(51);
			}
			else
			{
				func_1195(49);
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
			func_1195(24);
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

void func_1882(int iParam0)
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
	func_1264(iParam0, 1, 1, -142743235, 1);
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
		func_1264(uVar18[iVar36], 1, 1, -142743235, 1);
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
	__LIB_14__::func_0(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
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
					__LIB_14__::func_0(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
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
					__LIB_14__::func_0(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
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
					__LIB_18__::func_747(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	__LIB_14__::func_0(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_14__::func_0(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_1887(struct<6> Param0)
{
	if (!func_2038(Param0.f_4, 1))
	{
	}
	if (!func_2038(Param0, 1))
	{
	}
	if (!func_2038(Param0.f_2, 1))
	{
	}
	if (!func_2038(Param0.f_5, 1))
	{
	}
	if (!func_2038(Param0.f_3, 1))
	{
	}
	if (!func_2038(Param0.f_1, 1))
	{
	}
}

bool func_2038(int iParam0, int iParam1)
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
				if (func_2038(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2038(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2038(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2038(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

