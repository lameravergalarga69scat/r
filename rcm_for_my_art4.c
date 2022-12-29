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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	char* sLocal_89 = NULL;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	float fLocal_95 = 0f;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	int iLocal_98[3] = { 0, 0, 0 };
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	bool bLocal_109 = false;
	int iLocal_110[2] = { 0, 0 };
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	int iLocal_115 = 0;
	bool bLocal_116 = false;
	bool bLocal_117 = false;
	struct<7> Local_118 = { 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = -1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 1097859072;
	var uLocal_144 = 1000;
	var uLocal_145 = 1067450368;
	var uLocal_146 = 5000;
	var uLocal_147 = 42;
	var uLocal_148 = 1103626240;
	var uLocal_149 = 1077936128;
	var uLocal_150 = 1106247680;
	var uLocal_151 = 1103101952;
	var uLocal_152 = 1097859072;
	var uLocal_153 = 1103626240;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 1097859072;
	var uLocal_172 = 1000;
	var uLocal_173 = 1067450368;
	var uLocal_174 = 5000;
	var uLocal_175 = 42;
	var uLocal_176 = 1103626240;
	var uLocal_177 = 1077936128;
	var uLocal_178 = 1106247680;
	var uLocal_179 = 1103101952;
	var uLocal_180 = 1097859072;
	var uLocal_181 = 1103626240;
	var uLocal_182 = 0;
	struct<22> Local_183 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_205 = 3;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	struct<6> Local_225[15];
	var uLocal_316 = 3;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 96;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	vector3 vLocal_418 = { 0f, 0f, 0f };
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_89 = "rcm_for_my_art_4_escape";
	fLocal_90 = 1.25f;
	fLocal_95 = 1000f;
	iLocal_209 = joaat("CS_FRENCHARTIST");
	iLocal_210 = joaat("A_M_M_NBXUPPERCLASS_01");
	iLocal_211 = joaat("A_M_M_MIDDLESDTOWNFOLK_01");
	iLocal_212 = joaat("A_F_M_NBXUPPERCLASS_01");
	iLocal_213 = 2;
	iLocal_214 = 3;
	iLocal_215 = 23;
	iLocal_217 = 5;
	iLocal_218 = 4;
	iLocal_219 = 3;
	iLocal_220 = 3;
	iLocal_221 = 3;
	iLocal_222 = 8;
	iLocal_224 = 4;
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
	__LIB_13__::func_160(uParam0);
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
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_11__::func_454(uParam0);
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
		__LIB_13__::func_178(uParam0, __LIB_0__::func_58(uParam0));
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
			__LIB_6__::func_833();
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
	__LIB_12__::func_658(uParam0, 1);
	__LIB_12__::func_659(uParam0, 18);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 3.5f);
	func_189();
	func_190();
	TASK::SET_SCENARIO_GROUP_ENABLED("SDN_RCM_FMA_4_PROPS", false);
	TASK::SET_SCENARIO_GROUP_ENABLED("SaintDenis_TrainStationVehicles", false);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_209, 1);
	__LIB_12__::func_867(uParam0, iLocal_210, 2);
	__LIB_12__::func_867(uParam0, iLocal_211, 2);
	__LIB_12__::func_867(uParam0, iLocal_212, 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_PORTFOLIO01X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_CS_FAN01X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_HAT02X"), 1);
	__LIB_13__::func_15(uParam0, sLocal_89, 2, -1, 7);
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
			Var1 = { func_205(26) };
			Var1.f_3 = func_206(26);
			break;
		case 1:
			Var1 = { func_205(28) };
			Var1.f_3 = func_206(28);
			break;
		case 2:
			Var1 = { func_205(32) };
			Var1.f_3 = func_206(32);
			break;
		case 3:
			Var1 = { func_205(30) };
			Var1.f_3 = func_206(30);
			break;
		case 4:
			Var1 = { func_205(36) };
			Var1.f_3 = func_206(36);
			break;
		case 5:
			Var1 = { func_205(34) };
			Var1.f_3 = func_206(34);
			break;
		case 6:
			Var1 = { func_205(38) };
			Var1.f_3 = func_206(38);
			break;
		case 7:
			Var1 = { func_205(40) };
			Var1.f_3 = func_206(40);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_207(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (func_208(&iLocal_14))
	{
		StringCopy(&(uParam0->f_2578), "FMA4_F_ART", 24);
		return true;
	}
	if (func_209(uParam0))
	{
		StringCopy(&(uParam0->f_2578), "FMA4_F_DIST", 24);
		return true;
	}
	if (func_210())
	{
		if (iLocal_110[0])
		{
			StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
			return true;
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "FMA4_F_ALERT", 24);
			return true;
		}
	}
	if (func_211())
	{
		if (iLocal_110[1])
		{
			StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
			return true;
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "FMA4_F_ALERT", 24);
			return true;
		}
	}
	if (func_212())
	{
		StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
		return true;
	}
	if (iLocal_222 == 5 || iLocal_222 == 4)
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_33, 1, 0))
		{
			StringCopy(&(uParam0->f_2578), "FMA4_F_DIST", 24);
			return true;
		}
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
	if (func_216(uParam0->f_174))
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
	if (func_225(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_1__::func_752();
	func_230(uParam0);
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
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
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
			func_245(uParam0);
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
	return iLocal_223;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_270(uParam0))
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

void func_87(var uParam0)
{
	func_289(uParam0, 0, 0);
}

void func_91(var uParam0)
{
	int iVar0;
	__LIB_0__::func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_753.f_1418[iVar0 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, true, false))
		{
			if (__LIB_0__::func_181())
			{
				if (__LIB_3__::func_736(79, 1))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, "b_haveMet") == 1)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, "b_haveMet", false, false);
					}
				}
				else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, "b_haveMet") == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, "b_haveMet", true, false);
				}
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, "b_haveMet") == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[iVar0 /*10*/].f_8, "b_haveMet", true, false);
			}
		}
		iVar0++;
	}
	func_292(uParam0);
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
		__LIB_13__::func_178(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_293(uParam0))
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
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = iParam1;
	if (!func_296())
	{
		bVar0 = false;
	}
	if (!func_297(uParam0))
	{
		bVar0 = false;
	}
	if (!bLocal_105)
	{
		if (__LIB_0__::func_272(__LIB_1__::func_334(141), 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_1__::func_334(141), true);
			bLocal_105 = true;
		}
	}
	__LIB_3__::func_229(165);
	__LIB_3__::func_229(166);
	PED::_0x9851DE7AEC10B4E1(func_205(28), 50f, 1, 0);
	PED::_0x9851DE7AEC10B4E1(func_205(30), 50f, 1, 0);
	PED::_0x9851DE7AEC10B4E1(func_205(38), 50f, 1, 0);
	__LIB_13__::func_646(&iLocal_21, &uLocal_45, 1, 0);
	__LIB_13__::func_646(&iLocal_30, &uLocal_46, 1, 0);
	__LIB_13__::func_646(&iLocal_31, &uLocal_47, 1, 0);
	__LIB_13__::func_646(&iLocal_32, &uLocal_48, 1, 0);
	__LIB_13__::func_646(&iLocal_34, &uLocal_49, 1, 0);
	__LIB_13__::func_646(&iLocal_29, &uLocal_50, 1, 0);
	__LIB_13__::func_646(&iLocal_41, &uLocal_51, 1, 0);
	__LIB_13__::func_646(&iLocal_40, &uLocal_52, 1, 0);
	__LIB_13__::func_646(&iLocal_20, &uLocal_53, 1, 0);
	__LIB_13__::func_646(&iLocal_35, &uLocal_54, 1, 0);
	__LIB_13__::func_646(&iLocal_42, &uLocal_55, 1, 0);
	__LIB_13__::func_646(&iLocal_43, &uLocal_56, 1, 1);
	TASK::SET_SCENARIO_GROUP_ENABLED("SDN_RCM_FMA_4_PROPS", false);
	TASK::SET_SCENARIO_GROUP_ENABLED("SaintDenis_TrainStationVehicles", false);
	switch (iVar1)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_289(uParam0, 0, 1);
				}
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (!bVar0)
				{
					return 2;
				}
				if (__LIB_1__::func_901(joaat("RAIN")))
				{
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 120f, false);
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(27), func_206(27), false, true);
				ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
				func_304();
				VEHICLE::_0x4C05B42A8D937796();
				__LIB_1__::func_600(0);
				__LIB_1__::func_572(2762.466f, -1345.316f, 48.353f, 100f, 0, 0, 0, 0, 0);
				__LIB_2__::func_165(2762.466f, -1345.316f, 48.353f, 50f, 0, 0, 5);
				__LIB_12__::func_718(&(uParam0->f_206), iLocal_57);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				func_309(0, 1);
				func_310();
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(29), func_206(29), false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			func_309(0, 1);
			func_310();
			__LIB_13__::func_62(uParam0, func_61(1), func_61(3), 1, 3, 0);
			__LIB_1__::func_572(2762.466f, -1345.316f, 48.353f, 100f, 0, 0, 0, 0, 0);
			__LIB_2__::func_165(2762.466f, -1345.316f, 48.353f, 50f, 0, 0, 5);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 2:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(33), func_206(33), false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			func_309(0, 1);
			func_312(10, 1);
			func_310();
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			__LIB_1__::func_572(2762.466f, -1345.316f, 48.353f, 100f, 0, 0, 0, 0, 0);
			__LIB_2__::func_165(2762.466f, -1345.316f, 48.353f, 50f, 0, 0, 5);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 3:
			if (!bVar0)
			{
				return 2;
			}
			bLocal_117 = true;
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(31), func_206(31), false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			__LIB_1__::func_948(286519629, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(556568958, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1437137494, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1898189633, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1546618759, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1683822530, 0, 0, 0, 1, 0, 0, 0);
			func_309(0, 1);
			func_310();
			__LIB_13__::func_62(uParam0, func_61(3), func_61(6), 3, 6, 0);
			__LIB_1__::func_572(2762.466f, -1345.316f, 48.353f, 100f, 0, 0, 0, 0, 0);
			__LIB_2__::func_165(2762.466f, -1345.316f, 48.353f, 50f, 0, 0, 5);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 4:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(37), func_206(37), false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			func_309(0, 1);
			func_310();
			__LIB_13__::func_62(uParam0, func_61(4), func_61(6), 4, 6, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 5:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(35), func_206(35), false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			func_309(0, 1);
			func_310();
			__LIB_13__::func_62(uParam0, func_61(5), func_61(6), 5, 6, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 6:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_205(39), func_206(39), false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			func_309(0, 1);
			func_310();
			__LIB_13__::func_62(uParam0, func_61(6), func_61(7), 6, 7, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 7:
			if (__LIB_4__::func_511())
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_289(uParam0, 1, 0);
				}
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				return 5;
			}
			else
			{
				if (!bVar0)
				{
					return 2;
				}
				__LIB_13__::func_105(1, 1);
				return 8;
			}
			break;
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
		if (!__LIB_12__::func_925(uParam0))
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
		__LIB_13__::func_178(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
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
	return func_327(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_213)
	{
		case 0:
			func_309(0, 0);
			__LIB_12__::func_718(&(uParam0->f_206), iLocal_58);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				iLocal_58 = OBJECT::CREATE_OBJECT(joaat("P_CS_FAN01X"), 2738.22f, -1316.67f, 46.59f, true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_58, 90f, 0f, 0f, 2, true);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_58, 2738.22f, -1316.67f, 46.59f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_58, 90f, 0f, 0f, 2, true);
			}
			__LIB_12__::func_718(&(uParam0->f_206), iLocal_57);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, iLocal_14, PED::GET_PED_BONE_INDEX(iLocal_14, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			func_312(1, 1);
			func_310();
			VEHICLE::_0x4C05B42A8D937796();
			__LIB_1__::func_600(0);
			__LIB_1__::func_572(2762.466f, -1345.316f, 48.353f, 100f, 0, 0, 0, 0, 0);
			__LIB_2__::func_165(2762.466f, -1345.316f, 48.353f, 50f, 0, 0, 5);
			if (__LIB_1__::func_901(joaat("RAIN")))
			{
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 10f, false);
			}
			return 7;
		case 1:
			__LIB_1__::func_951(&iLocal_57);
			return 8;
		case 2:
			break;
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
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	__LIB_13__::func_642(-1, 0, 0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	func_335(uParam0);
	func_336(uParam0);
	if (!func_297(uParam0))
	{
		return 7;
	}
	if (!__LIB_1__::func_565(&uLocal_208))
	{
		uLocal_208 = GRAPHICS::_0xFA50F79257745E74(2708.579f, -1404.303f, 45.622f, 2f, 1, -1, 0);
	}
	func_338(uParam0);
	func_339(uParam0);
	func_340(uParam0);
	func_341(uParam0);
	func_342(uParam0);
	func_343();
	func_344(uParam0);
	if (iLocal_215 == 16)
	{
		if (!bLocal_105)
		{
			if (__LIB_0__::func_272(__LIB_1__::func_334(141), 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_1__::func_334(141), true);
				bLocal_105 = true;
			}
		}
	}
	switch (iLocal_214)
	{
		case 0:
			if (((((iLocal_222 == 2 && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[0], "S_RunToCover", 1)) || iLocal_222 == 3) || iLocal_222 == 4) || iLocal_222 == 5) || iLocal_222 == 6)
			{
				if (!__LIB_6__::func_904())
				{
					if (!MAP::DOES_BLIP_EXIST(Local_225[12 /*6*/].f_1))
					{
						Local_225[12 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_225[12 /*6*/]);
					}
					if (!MAP::DOES_BLIP_EXIST(Local_225[13 /*6*/].f_1))
					{
						Local_225[13 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_225[13 /*6*/]);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_17))
					{
						__LIB_0__::func_325(&iLocal_17);
					}
					func_347(uParam0, 8);
				}
			}
			else if (iLocal_215 != 5 && iLocal_215 != 7)
			{
				func_347(uParam0, 1);
				if (bLocal_109)
				{
					if (!bLocal_113)
					{
						__LIB_0__::func_565("FMA5_O_DOCK", 7500, 0, 0, 0, 1);
						bLocal_113 = true;
					}
				}
			}
			if (iLocal_222 == 7)
			{
				func_289(uParam0, 1, 0);
				if (iLocal_223 != 7)
				{
					iLocal_223 = 7;
				}
				if (iLocal_215 == 21)
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[3], false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_61[3]) > 3.2f)
				{
					return 5;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_61[2], false))
			{
				func_309(0, 0);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_61[9], false))
			{
				func_309(0, 0);
			}
			else if (iLocal_222 != 4 || iLocal_222 != 5)
			{
				func_347(uParam0, 1);
			}
			break;
		case 3:
			break;
	}
	return 7;
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
		func_383(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!bLocal_114)
		{
			__LIB_0__::func_267(1);
			LAW::_0x15ABD5004CAD2D99(-1);
			LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_UNARMED_ASSAULT"), 0, 0, true);
			__LIB_0__::func_105(1);
			__LIB_0__::func_45("FMA5_HLP_LAW", 10000, 0, 0, 0, 1);
			bLocal_114 = true;
		}
	}
	return true;
}

void func_159(var uParam0)
{
	func_412(uParam0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_448);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_449);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_210);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_211);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_212);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_PORTFOLIO01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_FAN01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_HAT02X"));
}

void func_189()
{
	__LIB_13__::func_634(&uLocal_316);
	__LIB_13__::func_635(&uLocal_316, 0, "RFMA_4_JWORK");
	__LIB_13__::func_635(&uLocal_316, 1, "RFMA_4_WNT1_");
	__LIB_13__::func_635(&uLocal_316, 2, "RFMA_4_WNT2_");
	__LIB_13__::func_635(&uLocal_316, 3, "RFMA_4_CMON");
	__LIB_13__::func_635(&uLocal_316, 4, "FMA_4_WALK_2");
	__LIB_13__::func_635(&uLocal_316, 5, "RFMA_4_WNT3_");
	__LIB_13__::func_635(&uLocal_316, 6, "RFMA_4_THERE");
	__LIB_13__::func_635(&uLocal_316, 7, "RFMA_4_WNT4_");
	__LIB_13__::func_635(&uLocal_316, 8, "FMA_4_DOCK");
	__LIB_13__::func_635(&uLocal_316, 9, "RFMA_4_WNT5_");
	__LIB_13__::func_635(&uLocal_316, 10, "RFMA_4_HUSH");
	__LIB_13__::func_635(&uLocal_316, 11, "RFMA_4_WNT6_");
	__LIB_13__::func_635(&uLocal_316, 12, "RFMA_4_LOOKOUT");
	__LIB_13__::func_635(&uLocal_316, 13, "RFMA_4_DOWN");
	__LIB_13__::func_635(&uLocal_316, 14, "FMA_4_WATAHOS1");
	__LIB_13__::func_635(&uLocal_316, 15, "FMA_4_WATAHOS2");
	__LIB_13__::func_635(&uLocal_316, 16, "FMA_4_WAT_A_1");
	__LIB_13__::func_635(&uLocal_316, 17, "FMA_4_WAT_A_2");
	__LIB_13__::func_635(&uLocal_316, 18, "RFMA_4_SHIP_");
	__LIB_13__::func_635(&uLocal_316, 19, "RFMA_4_UPHERE");
	__LIB_13__::func_635(&uLocal_316, 20, "FMA_RC6_IG10_B1");
	if (__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&uLocal_316, 21, "RFMA_4_GOONSJ");
		__LIB_13__::func_635(&uLocal_316, 22, "RFMA_4_FEND_J");
	}
	else
	{
		__LIB_13__::func_635(&uLocal_316, 21, "RFMA_4_GOONSA");
		__LIB_13__::func_635(&uLocal_316, 22, "RFMA_4_FEND_A");
	}
	__LIB_13__::func_635(&uLocal_316, 23, "RFMA_4_BEATEN");
	__LIB_13__::func_635(&uLocal_316, 24, "RFMA_4_KILLED");
}

void func_190()
{
	PED::ADD_RELATIONSHIP_GROUP("RelGroupCrowd", &iLocal_448);
	PED::ADD_RELATIONSHIP_GROUP("RelGroupArtist", &iLocal_449);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_449);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_449, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("PLAYER"), iLocal_448);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_448, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_449, iLocal_448);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_448, iLocal_449);
}

Vector3 func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2670.528f, -1543.554f, 45.0013f;
		case 1:
			return 2739.74f, -1315.64f, 47.63f;
		case 2:
			return 2788.23f, -1344.06f, 46.35f;
		case 3:
			return 2787.08f, -1343.97f, 46.34f;
		case 4:
			return 2788.24f, -1342.85f, 46.34f;
		case 5:
			return 2706.811f, -1407.942f, 46.987f;
		case 6:
			return 2707.492f, -1405.843f, 46.587f;
		case 7:
			return 2705.984f, -1406.703f, 46.987f;
		case 8:
			return 2745.788f, -1462.543f, 45.4033f;
		case 9:
			return 2745.24f, -1463.379f, 45.4084f;
		case 10:
			return 2747.337f, -1426.19f, 46.2454f;
		case 11:
			return 2741.1f, -1399.45f, 46.19f;
		case 12:
			return 2662.325f, -1508.114f, 44.9831f;
		case 13:
			return 2693.251f, -1510.609f, 45.5431f;
		case 14:
			return 2692.322f, -1510.638f, 45.5555f;
		case 15:
			return 2655.403f, -1547.193f, 46.2661f;
		case 16:
			return 2652.054f, -1540.042f, 46.2681f;
		case 17:
			return 2651.262f, -1538.987f, 46.2594f;
		case 18:
			return 2741.615f, -1313.9f, 46.6478f;
		case 19:
			return 2742.994f, -1315.064f, 46.6614f;
		case 20:
			return 2663.382f, -1544.175f, 45.0013f;
		case 21:
			return 2731.936f, -1406.437f, 45.201f;
		case 22:
			return 2673.5f, -1539.162f, 45.001f;
		case 23:
			return 2656.449f, -1544.767f, 45.2196f;
		case 24:
			return 2648.22f, -1477.13f, 45.02f;
		case 25:
			return 2815.7f, -1279.08f, 45.94f;
		case 26:
			return 2742.782f, -1314.41f, 46.6482f;
		case 27:
			return 2744.596f, -1316.198f, 46.644f;
		case 28:
			return 2768.049f, -1371.913f, 45.4332f;
		case 29:
			return 2767.245f, -1372.926f, 45.4332f;
		case 30:
			return 2738.182f, -1400.022f, 45.1821f;
		case 31:
			return 2736.548f, -1403.143f, 45.1831f;
		case 32:
			return 2734.297f, -1392.41f, 45.2321f;
		case 33:
			return 2736.2f, -1391.65f, 45.23f;
		case 34:
			return 2716.649f, -1495.496f, 45.2507f;
		case 35:
			return 2713.247f, -1497.135f, 45.2491f;
		case 36:
			return 2747.528f, -1447.257f, 44.7031f;
		case 37:
			return 2747.266f, -1448.343f, 44.6694f;
		case 38:
			return 2669.979f, -1506.822f, 44.9691f;
		case 39:
			return 2669.999f, -1508.039f, 44.9794f;
		case 40:
			return 2664.246f, -1543.556f, 44.9697f;
	}
	return 0f, 0f, 0f;
}

float func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -5.84f;
		case 2:
			return 49.83f;
		case 3:
			return -94.76f;
		case 4:
			return 172.96f;
		case 5:
			return 346.3109f;
		case 6:
			return 175.7204f;
		case 7:
			return 308.0736f;
		case 8:
			return 167.35f;
		case 9:
			return -31.53f;
		case 10:
			return -49.04f;
		case 11:
			return -84.4f;
		case 12:
			return 297.0009f;
		case 13:
			return 10.91f;
		case 14:
			return -1.76f;
		case 15:
			return 123.91f;
		case 16:
			return 30.19f;
		case 17:
			return 146.52f;
		case 18:
			return 169.2608f;
		case 19:
			return 226.913f;
		case 20:
			return 126.515f;
		case 21:
			return 138.5141f;
		case 22:
			return 36.3528f;
		case 23:
			return 249.5649f;
		case 26:
			return 234.8828f;
		case 27:
			return 229.1063f;
		case 28:
			return 141.5815f;
		case 29:
			return 120.2005f;
		case 30:
			return 200.0236f;
		case 31:
			return 201.5508f;
		case 32:
			return 203.2168f;
		case 33:
			return 116.3063f;
		case 34:
			return 116.6612f;
		case 35:
			return 120.2322f;
		case 36:
			return 218.2981f;
		case 37:
			return 217.3695f;
		case 38:
			return 181.1638f;
		case 39:
			return 188.8609f;
		case 40:
			return 316.2284f;
	}
	return 0f;
}

int func_207(vector3 vParam0, var uParam3)
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
		iVar0 = func_466(0, 0);
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

bool func_208(int iParam0)
{
	struct<28> Var0;
	var uVar28;
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	__LIB_2__::func_828(&Var0, 1);
	__LIB_1__::func_413(&Var0, 0);
	__LIB_2__::func_829(&Var0, 1);
	__LIB_1__::func_402(&Var0, 0);
	__LIB_1__::func_401(&Var0, 0);
	__LIB_2__::func_830(&Var0, 0);
	__LIB_1__::func_399(&Var0, 0);
	__LIB_1__::func_404(&Var0, 0);
	__LIB_1__::func_398(&Var0, 0);
	__LIB_1__::func_403(&Var0, 0);
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
	{
		return true;
	}
	if (__LIB_2__::func_901(*iParam0, Global_35))
	{
		return true;
	}
	if (__LIB_9__::func_578(*iParam0, 0, &Var0, &uVar28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_209(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iLocal_14, Global_36, 1);
	if (__LIB_13__::func_23(&(uParam0->f_206), "RFMA_RC6"))
	{
		return false;
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	else if (!bLocal_96)
	{
		if (fVar0 > 30f)
		{
			if (iLocal_222 == 5 || iLocal_222 == 4)
			{
				__LIB_12__::func_883(uParam0, "FMA5_O_FIGHT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_96 = true;
			}
			else if (iLocal_216 != 4)
			{
				__LIB_12__::func_883(uParam0, "FMA5_O_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_96 = true;
			}
		}
	}
	else if (bLocal_96)
	{
		if (fVar0 < 15f)
		{
			bLocal_96 = false;
		}
	}
	return false;
}

bool func_210()
{
	if (iLocal_216 == 3)
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[0 /*6*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[1 /*6*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[2 /*6*/], Global_35, 1, 1))
		{
			iLocal_110[0] = 1;
			return true;
		}
	}
	else if (((iLocal_216 != 4 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[0 /*6*/], Global_35, 1, 1)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[1 /*6*/], Global_35, 1, 1)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[2 /*6*/], Global_35, 1, 1))
	{
		iLocal_110[0] = 1;
		return true;
	}
	else if (__LIB_0__::func_264(&uLocal_421) > 8f)
	{
		__LIB_0__::func_37(&uLocal_421);
		iLocal_110[0] = 0;
		return true;
	}
	return false;
}

bool func_211()
{
	if (iLocal_217 == 3)
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[3 /*6*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[4 /*6*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[5 /*6*/], Global_35, 1, 1))
		{
			iLocal_110[1] = 1;
			return true;
		}
		if (iLocal_215 == 9 && __LIB_1__::func_205(iLocal_14, iLocal_35, 1, 0))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) > 20f)
			{
				__LIB_0__::func_37(&uLocal_424);
				iLocal_110[1] = 0;
				return true;
			}
		}
	}
	else if (iLocal_217 != 4)
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[3 /*6*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[4 /*6*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_225[5 /*6*/], Global_35, 1, 1))
		{
			iLocal_110[1] = 1;
			return true;
		}
		if (iLocal_217 == 2)
		{
			if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) > 20f)
			{
				__LIB_0__::func_37(&uLocal_424);
				iLocal_110[1] = 0;
				return true;
			}
		}
	}
	else if (__LIB_0__::func_264(&uLocal_424) > 8f)
	{
		__LIB_0__::func_37(&uLocal_424);
		iLocal_110[1] = 0;
		return true;
	}
	return false;
}

bool func_212()
{
	int iVar0;
	var uVar1[5];
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		return true;
	}
	PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 1000, &uVar1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar1[iVar0]) && PED::IS_PED_HUMAN(uVar1[iVar0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar1[iVar0], Global_35, 1, 1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_216(int iParam0)
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

int func_225(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		if (!func_504(&iLocal_14, &uLocal_154, &uLocal_182, 1, 0, 0))
		{
			bLocal_102 = true;
			return 1;
		}
	}
	return 0;
}

void func_230(var uParam0)
{
	int iVar0;
	func_412(uParam0);
	if (!bLocal_102)
	{
		__LIB_13__::func_222(uParam0, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_2__::func_426(&iLocal_14);
		if (!__LIB_14__::func_939(joaat("TP_FOR_MY_ART_LETTER")))
		{
			iVar0 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar0, 0, 0, 0, 2, 0, 0, 0);
			__LIB_1__::func_612(joaat("TP_FOR_MY_ART_LETTER"), iVar0, 1);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		LAW::_0x710448D44A64C213(true);
	}
}

void func_245(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_270(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_12__::func_767(uParam0);
	bVar1 = true;
	if (!func_562())
	{
		bVar1 = false;
	}
	if (!__LIB_4__::func_434(1365127661))
	{
		bVar1 = false;
	}
	if (!__LIB_4__::func_434(-1083616881))
	{
		bVar1 = false;
	}
	if (!func_564(uParam0))
	{
		bVar1 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_89))
	{
		bVar1 = false;
	}
	if ((((((((((!func_565(0) || !func_565(1)) || !func_565(2)) || !func_565(3)) || !func_565(4)) || !func_565(5)) || !func_565(6)) || !func_565(7)) || !func_565(8)) || !func_565(9)) || !func_565(10))
	{
		bVar1 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		iLocal_57 = OBJECT::CREATE_OBJECT(joaat("P_CS_PORTFOLIO01X"), ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), true, true, false, false, true);
	}
	if (iVar0 < 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			iLocal_58 = OBJECT::CREATE_OBJECT(joaat("P_CS_FAN01X"), ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), true, true, false, false, true);
		}
		if (!func_566())
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_59))
		{
			iLocal_59 = OBJECT::CREATE_OBJECT(joaat("P_HAT02X"), 2746.79f, -1463.2f, 44.39f, true, true, false, false, true);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_19))
		{
			iLocal_19 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2670.499f, -1532.378f, 47.366f, 0f, 0f, 0f, 10f, 5f, 5.435151f, "Fight A");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_25))
		{
			iLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2742.417f, -1423.613f, 46.343f, 0f, 0f, -65.729f, 3.382f, 5.444f, 3.894f, "Funny A");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_26))
		{
			iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2746.967f, -1429.463f, 46.343f, 0f, 0f, -43.99915f, 2.382126f, 4.444f, 3.894384f, "Funny A Dialogue");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_27))
		{
			iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2745.281f, -1432.974f, 46.127f, 0f, 0f, -43.99915f, 5f, 8f, 3f, "Funny A Wait");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
		{
			iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2701.491f, -1498.026f, 46.732f, 0f, 0f, 0f, 7.205f, 5.237879f, 3.792608f, "Funny D Trigger");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_29))
		{
			iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2693.325f, -1497.436f, 46.732f, 0f, 0f, 0f, 39f, 7f, 3.792608f, "m_volumeFunnyDBlock");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_20))
		{
			iLocal_20 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2743.558f, -1411.294f, 46.279f, 0f, 0f, 24.20432f, 17f, 15f, 5f, "Train Trigger");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_21))
		{
			iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volumeInitialWalk");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_21))
		{
			VOLUME::_0x39816F6F94F385AD(iLocal_21, 2757.708f, -1325.84f, 48.16676f, 0f, 0f, -34.99641f, 48.87098f, 3.756219f, 8.996176f);
			VOLUME::_0x39816F6F94F385AD(iLocal_21, 2735.838f, -1320.095f, 48.362f, 0f, 0f, -34.99641f, 5f, 20f, 5f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_22))
		{
			iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2786.062f, -1340.532f, 48.167f, 0f, 0f, -38.8815f, 10.3161f, 16.38561f, 8.996176f, "Tram hide");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_23))
		{
			iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.311f, -1327.378f, 48.167f, 0f, 0f, -38.8815f, 10.3161f, 20.38561f, 8.996176f, "m_volumeTramSlowdown");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_24))
		{
			iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2772.353f, -1374.307f, 47.13351f, 0f, 0f, 0f, 19.23549f, 11.5516f, 6.740415f, "Watch A Break");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_30))
		{
			iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2793.922f, -1326.734f, 48.91198f, 0f, 0f, -40.99868f, 10.85562f, 100.127f, 11.07461f, "Tram Line");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
		{
			iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volumeWatchCBlock");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
		{
			VOLUME::_0x39816F6F94F385AD(iLocal_31, 2746.891f, -1464.154f, 44.404f, 0f, 0f, -40.567f, 8f, 17f, 5f);
			VOLUME::_0x39816F6F94F385AD(iLocal_31, 2750.55f, -1446.876f, 46.162f, 0f, 0f, 50.973f, 20f, 10f, 5f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_32))
		{
			iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2751.011f, -1453.714f, 46.162f, 0f, 0f, 50.973f, 5.171f, 10.679f, 4.618765f, "Watch C Trigger");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_33))
		{
			iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2661.664f, -1534.41f, 47.801f, 0f, 0f, 0f, 52.721f, 90.40816f, 20.43f, "Fight Area");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_34))
		{
			iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2663.087f, -1556.24f, 47.315f, 0f, 0f, 0f, 37f, 79f, 18f, "m_volumeFightAreaBlock");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_36))
		{
			iLocal_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2659.862f, -1544.152f, 45.54f, 0f, 0f, 0f, 4f, 4f, 5f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
		{
			iLocal_37 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2746.535f, -1430.236f, 46.343f, 0f, 0f, 0f, 0.65f, 0.65f, 2f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_38))
		{
			iLocal_38 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2745.856f, -1429.234f, 46.527f, 0f, 0f, 45.99f, 1f, 1f, 3f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_39))
		{
			iLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2745.929f, -1387.446f, 46.818f, 0f, 0f, 26.337f, 6f, 5f, 5f, "m_volumeWatchB");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_40))
		{
			iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2740.525f, -1390.121f, 46.818f, 0f, 0f, 26.337f, 30f, 7f, 5f, "m_volumeWatchBBlock");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2749.934f, -1426.301f, 46.477f, 0f, 0f, 50.453f, 17f, 6f, 5f, "m_volumeFunnyABlock");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
		{
			iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2660.48f, -1503.27f, 44.97f, 0f, 0f, 0f, 5f, 5f, 5f, "m_volumeBlockPolice");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
		{
			iLocal_43 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2707.59f, -1411.19f, 47.033f, 0f, 0f, 0f, 50f, 38f, 5f, "m_volumeBlockStatue");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_44))
		{
			iLocal_44 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2668.597f, -1545.278f, 47.158f, 0f, 0f, 0f, 25f, 20f, 5f, "m_volumeFightCloseToBoat");
		}
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_60))
		{
			iLocal_60 = __LIB_3__::func_408(joaat("PROP_HUMAN_SEAT_CHAIR"), 2740.514f, -1399.435f, 45.641f, -102.804f, 0, 0, 1);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_35))
		{
			iLocal_35 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Ticket Station");
			VOLUME::_0x39816F6F94F385AD(iLocal_35, 2739.585f, -1399.089f, 46.89f, 0f, 0f, 25.537f, 11.105f, 9.254f, 3.534f);
			VOLUME::_0x39816F6F94F385AD(iLocal_35, 2739.509f, -1398.751f, 46.89f, 0f, 0f, 25.537f, 4.334f, 10.254f, 3.534f);
		}
		__LIB_13__::func_647(uParam0, 8f);
		if (__LIB_0__::func_181())
		{
			__LIB_12__::func_875(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_PORTFOLIO01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_FAN01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_HAT02X"));
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_35, 1);
		Local_183.f_3 = iLocal_14;
		Local_183.f_4 = 21030;
		Local_183.f_7 = 0;
		Local_183.f_8 = 4;
		Local_183.f_13 = 1;
		Local_183.f_17 = 3;
		Local_183.f_18 = 2;
		Local_183.f_19 = 3;
		Local_183.f_21 = 3;
		Local_183.f_16 = 3;
		Local_183.f_11 = 0;
		Local_183.f_12 = 0;
		return 1;
	}
	return 0;
}

void func_289(var uParam0, int iParam1, bool bParam2)
{
	if (iLocal_213 == iParam1)
	{
		return;
	}
	iLocal_213 = iParam1;
	__LIB_1__::func_681(&iLocal_91, 1024);
	switch (iLocal_213)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RFMA_RC6", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_14, "cs_frenchartist", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_57, "p_cs_portfolio01x", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 95113);
			__LIB_12__::func_981(uParam0, 95300);
			__LIB_12__::func_982(uParam0, 95639);
			if (bParam2)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
				__LIB_12__::func_956(&(uParam0->f_753), Global_35, "Arthur", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_14, "cs_frenchartist", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_57, "p_cs_portfolio01x", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_58, "p_cs_Fan01x", 0);
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RFMA_RC7", 24);
			__LIB_12__::func_779(uParam0, func_205(0));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_14, "cs_frenchartist", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_57, "p_cs_portfolio01x", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 95113);
			__LIB_12__::func_981(uParam0, 95300);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

void func_292(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		iVar3 = __LIB_2__::func_431(iLocal_14, vVar0, 1060437492 /* Float: 0.707f */);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[6], false))
	{
		func_607(iVar3, uParam0);
	}
}

bool func_293(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	fVar0 = uParam0->f_745;
	bVar1 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_13__::func_224(uParam0, &bVar2, &uVar3, &uVar4, &uVar5, &fVar6);
			if (__LIB_10__::func_606(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), uVar5, uVar4, uVar3, bVar2, fVar6, 0, 0, 1, 1, 1))
			{
				bVar1 = true;
			}
		}
	}
	if (uParam0->f_743 <= fVar0 || bVar1)
	{
		return true;
	}
	return false;
}

bool func_296()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		if (__LIB_4__::func_434(1365127661))
		{
			__LIB_1__::func_572(VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(func_205(24)), 20f, 0, 0, 0, 0, 0);
			iLocal_15 = VEHICLE::_CREATE_MISSION_TRAIN(1365127661, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(func_205(24)), false, true, true, true);
			return false;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_15))
		{
			return false;
		}
		if (!bLocal_107)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_15, 0f);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_15, 0f);
				VEHICLE::_0x3660BCAB3A6BB734(iLocal_15);
				__LIB_13__::func_644(1365127661);
				bLocal_107 = true;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		if (__LIB_4__::func_434(-1083616881))
		{
			__LIB_1__::func_572(VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(func_205(25)), 20f, 0, 0, 0, 0, 0);
			iLocal_16 = VEHICLE::_CREATE_MISSION_TRAIN(-1083616881, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(func_205(25)), true, true, true, true);
			return false;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_16))
		{
			return false;
		}
		if (!bLocal_108)
		{
			VEHICLE::_0xE6C5E2125EB210C1(joaat("NB_TROLLEY_TRACK_CONFIG"), 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_16, 0f);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_16, 0f);
				__LIB_13__::func_644(-1083616881);
				bLocal_108 = true;
			}
		}
	}
	return true;
}

bool func_297(var uParam0)
{
	vector3 vVar0[15];
	float fVar46[15];
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	if (__LIB_0__::func_27(iLocal_91, 2048))
	{
		return true;
	}
	vVar0[0 /*3*/] = { func_205(2) };
	vVar0[1 /*3*/] = { func_205(3) };
	vVar0[2 /*3*/] = { func_205(4) };
	vVar0[3 /*3*/] = { func_205(5) };
	vVar0[4 /*3*/] = { func_205(6) };
	vVar0[5 /*3*/] = { func_205(7) };
	vVar0[6 /*3*/] = { func_205(8) };
	vVar0[7 /*3*/] = { func_205(9) };
	vVar0[8 /*3*/] = { func_205(10) };
	vVar0[9 /*3*/] = { func_205(11) };
	vVar0[10 /*3*/] = { func_205(13) };
	vVar0[11 /*3*/] = { func_205(14) };
	vVar0[12 /*3*/] = { func_205(15) };
	vVar0[13 /*3*/] = { func_205(16) };
	vVar0[14 /*3*/] = { func_205(17) };
	fVar46[0] = func_206(2);
	fVar46[1] = func_206(3);
	fVar46[2] = func_206(4);
	fVar46[3] = func_206(5);
	fVar46[4] = func_206(6);
	fVar46[5] = func_206(7);
	fVar46[6] = func_206(8);
	fVar46[7] = func_206(9);
	fVar46[8] = func_206(10);
	fVar46[9] = func_206(11);
	fVar46[10] = func_206(13);
	fVar46[11] = func_206(14);
	fVar46[12] = func_206(15);
	fVar46[13] = func_206(16);
	fVar46[14] = func_206(17);
	Local_225[0 /*6*/].f_3 = "PED2";
	Local_225[1 /*6*/].f_3 = "";
	Local_225[2 /*6*/].f_3 = "";
	Local_225[3 /*6*/].f_3 = "RFMA_GANG_MEMBER_1";
	Local_225[4 /*6*/].f_3 = "RFMA_GANG_MEMBER_2";
	Local_225[5 /*6*/].f_3 = "";
	Local_225[6 /*6*/].f_3 = "RFMA_M1";
	Local_225[7 /*6*/].f_3 = "RFMA_W1";
	Local_225[8 /*6*/].f_3 = "RFMA_FUNNY_A1";
	Local_225[9 /*6*/].f_3 = "RFMA_FUNNY_B1";
	Local_225[10 /*6*/].f_3 = "RFMA_CHASER_A1";
	Local_225[11 /*6*/].f_3 = "";
	Local_225[12 /*6*/].f_3 = "RFMA_FIGHTER_A1";
	Local_225[13 /*6*/].f_3 = "";
	Local_225[14 /*6*/].f_3 = "RFMA_FIGHTER_A3";
	Local_225[0 /*6*/].f_5 = 25;
	Local_225[1 /*6*/].f_5 = 25;
	Local_225[2 /*6*/].f_5 = 25;
	Local_225[3 /*6*/].f_5 = 25;
	Local_225[4 /*6*/].f_5 = 25;
	Local_225[5 /*6*/].f_5 = 25;
	Local_225[6 /*6*/].f_5 = 25;
	Local_225[7 /*6*/].f_5 = 25;
	Local_225[8 /*6*/].f_5 = 25;
	Local_225[9 /*6*/].f_5 = 25;
	Local_225[10 /*6*/].f_5 = 25;
	Local_225[11 /*6*/].f_5 = 25;
	Local_225[12 /*6*/].f_5 = 25;
	Local_225[13 /*6*/].f_5 = 25;
	Local_225[14 /*6*/].f_5 = 25;
	__LIB_1__::func_683(&(Local_225[0 /*6*/].f_2), 2);
	__LIB_1__::func_683(&(Local_225[1 /*6*/].f_2), 2);
	__LIB_1__::func_683(&(Local_225[2 /*6*/].f_2), 2);
	__LIB_1__::func_683(&(Local_225[3 /*6*/].f_2), 4);
	__LIB_1__::func_683(&(Local_225[4 /*6*/].f_2), 4);
	__LIB_1__::func_683(&(Local_225[5 /*6*/].f_2), 4);
	__LIB_1__::func_683(&(Local_225[6 /*6*/].f_2), 8);
	__LIB_1__::func_683(&(Local_225[7 /*6*/].f_2), 8);
	__LIB_1__::func_683(&(Local_225[8 /*6*/].f_2), 16);
	__LIB_1__::func_683(&(Local_225[9 /*6*/].f_2), 16);
	__LIB_1__::func_683(&(Local_225[10 /*6*/].f_2), 16);
	__LIB_1__::func_683(&(Local_225[11 /*6*/].f_2), 16);
	__LIB_1__::func_683(&(Local_225[12 /*6*/].f_2), 32);
	__LIB_1__::func_683(&(Local_225[13 /*6*/].f_2), 32);
	__LIB_1__::func_683(&(Local_225[14 /*6*/].f_2), 32);
	iVar62 = iLocal_210;
	iVar63 = 0;
	iVar64 = 0;
	iVar64 = 0;
	while (iVar64 < 15)
	{
		if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 1))
		{
			iVar63++;
		}
		else
		{
			if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 16))
			{
				iVar62 = iLocal_210;
			}
			else if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 32))
			{
				iVar62 = iLocal_210;
			}
			else if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 2))
			{
				iVar62 = iLocal_210;
			}
			else if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 4))
			{
				iVar62 = iLocal_211;
			}
			else if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 8))
			{
				if (iVar64 == 7)
				{
					iVar62 = iLocal_212;
				}
				else
				{
					iVar62 = iLocal_210;
				}
			}
			if (__LIB_13__::func_643(uParam0, &(Local_225[iVar64 /*6*/]), iVar62, vVar0[iVar64 /*3*/], fVar46[iVar64], 0, 1))
			{
				__LIB_8__::func_776(Local_225[iVar64 /*6*/], 60);
				ENTITY::_0x9587913B9E772D29(Local_225[iVar64 /*6*/], 0);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_225[iVar64 /*6*/], false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_225[iVar64 /*6*/], 46, true);
				PED::SET_COMBAT_FLOAT(Local_225[iVar64 /*6*/], 7, 0.1f);
				PED::SET_PED_COMBAT_ABILITY(Local_225[iVar64 /*6*/], 0);
				PED::SET_PED_CONFIG_FLAG(Local_225[iVar64 /*6*/], 186, false);
				if (__LIB_0__::func_27(Local_225[iVar64 /*6*/].f_2, 32))
				{
					PED::SET_PED_CONFIG_FLAG(Local_225[iVar64 /*6*/], 6, true);
					PED::SET_PED_CONFIG_FLAG(Local_225[iVar64 /*6*/], 266, true);
					__LIB_1__::func_991(Local_225[iVar64 /*6*/], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_225[iVar64 /*6*/], joaat("REL_PLAYER_ENEMY"));
				}
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_225[iVar64 /*6*/], true, true);
				TASK::CLEAR_PED_TASKS(Local_225[iVar64 /*6*/], true, false);
				TASK::TASK_STAND_STILL(Local_225[iVar64 /*6*/], -1);
				func_617(&uLocal_126);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_225[iVar64 /*6*/].f_3))
				{
					__LIB_12__::func_875(uParam0, Local_225[iVar64 /*6*/], Local_225[iVar64 /*6*/].f_3, 1);
				}
				__LIB_1__::func_683(&(Local_225[iVar64 /*6*/].f_2), 1);
			}
		}
		iVar64++;
	}
	iVar65 = 15;
	if (iVar63 >= iVar65)
	{
		__LIB_1__::func_683(&iLocal_91, 2048);
		return true;
	}
	return false;
}

void func_304()
{
	struct<27> Var0;
	struct<27> Var38;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	Var38.f_4 = 1065353216;
	Var38.f_5 = 1065353216;
	Var38.f_9 = 1065353216;
	Var38.f_10 = 1065353216;
	Var38.f_14 = 1065353216;
	Var38.f_15 = 1065353216;
	Var38.f_17 = 1040187392;
	Var38.f_18 = 1040187392;
	Var38.f_19 = -1;
	Var38.f_26 = -1082130432;
	__LIB_3__::func_895(&Var0);
	__LIB_3__::func_895(&Var38);
	Local_118 = 0;
	Local_118.f_3 = 1;
	Local_118.f_6 = 1f;
	Local_118.f_5 = -1f;
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		__LIB_9__::func_175(iLocal_14, Global_35, &Var38, 0f, 0f, 0f, sLocal_89, 9224, 1, 6f, 2.5f, 1073069561, fLocal_90, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
		__LIB_13__::func_566(Global_35, iLocal_14, &Local_118, -1, 1, "FMA_WNT");
		__LIB_1__::func_731(&uLocal_73);
	}
}

void func_309(int iParam0, bool bParam1)
{
	if (iLocal_214 == iParam0 && !bParam1)
	{
		return;
	}
	switch (iLocal_214)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_18);
			PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), iLocal_14);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	iLocal_214 = iParam0;
	switch (iLocal_214)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_17))
			{
				iLocal_17 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_14);
				MAP::_BLIP_SET_MODIFIER(iLocal_17, -546708623);
				MAP::_BLIP_SET_MODIFIER(iLocal_17, 231194138);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_17, "FMA3_BLIP_C");
			}
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, true);
			if (iLocal_222 != 7 && iLocal_215 != 15)
			{
				func_312(1, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_310()
{
	if (iLocal_93 == 0)
	{
		iLocal_93 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_STRANGE_OUTFIT"), iLocal_14, 0f, 8f, 8f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_312(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_272(iLocal_14, 1))
	{
		return;
	}
	if (iLocal_215 == iParam0 && !bParam1)
	{
		return;
	}
	iLocal_215 = iParam0;
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_14, false, 0, false);
	switch (iLocal_215)
	{
		case 0:
			break;
		case 1:
			if (bLocal_117)
			{
				func_633();
			}
			else
			{
				func_304();
			}
			break;
		case 2:
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 5, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 17, true);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_14);
			break;
		case 3:
			func_634();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2735.239f, -1392.871f, 46.2274f, 1.3f, -1, 0.25f, 4194368, 40000f);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			func_634();
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_89, 0, 40, -1, 0, 0, -1);
			break;
		case 7:
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			__LIB_1__::func_148(&uLocal_433);
			PED::FORCE_PED_MOTION_STATE(iLocal_14, -1415276238, false, 0, false);
			PED::_0x2208438012482A1A(iLocal_14, false, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_89, 0, 40, -1, 0, 0, -1);
			break;
		case 8:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Local_225[0 /*6*/], 0, -1f, -1f, -1f);
			break;
		case 9:
			break;
		case 10:
			__LIB_1__::func_948(286519629, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(556568958, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1437137494, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1898189633, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1546618759, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1683822530, 0, 0, 0, 1, 0, 0, 0);
			func_634();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2737.261f, -1393.868f, 46.1994f, 1.5f, -1, 0.25f, 4194304, 40000f);
			break;
		case 13:
			func_635();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2743.081f, -1425.536f, 46.23f, 1.3f, -1, 0.25f, 4194304, -153.65f);
			break;
		case 14:
			break;
		case 11:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_89, 0, 40, -1, 0, 0, -1);
			break;
		case 12:
			break;
		case 15:
			func_635();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2669.142f, -1535.724f, 45.98f, 1.3f, -1, 0.25f, 4194304, 40000f);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_225[12 /*6*/], 7000, 0, 51, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			break;
		case 19:
			break;
		case 20:
			if (!MAP::DOES_BLIP_EXIST(iLocal_17))
			{
				iLocal_17 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_14);
				MAP::_BLIP_SET_MODIFIER(iLocal_17, -546708623);
				MAP::_BLIP_SET_MODIFIER(iLocal_17, 231194138);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_17, "FMA3_BLIP_C");
			}
			break;
		case 22:
			func_635();
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
			break;
		case 23:
			break;
	}
}

int func_327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
				if (__LIB_12__::func_986(uParam4, &uParam0, 1, 1))
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
			func_668(uParam4);
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
				__LIB_13__::func_9(uParam4);
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
				__LIB_13__::func_9(uParam4);
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

void func_335(var uParam0)
{
	int iVar0;
	switch (iLocal_215)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
			{
				func_312(22, 0);
			}
			if (iLocal_221 != 2 && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_28, true, 0))
			{
				func_312(18, 0);
				Jump @2662; //curOff = 191
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_25, true, 0) && iLocal_115 == 0)
			{
				func_312(13, 0);
				iLocal_115 = 1;
				Jump @2662; //curOff = 229
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_39, true, 0))
			{
				func_312(3, 0);
			}
			else
			{
				if (func_714(123, sLocal_89))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(Local_225[6 /*6*/], &Local_183);
				}
				__LIB_2__::func_966(iLocal_14, Global_35, 1, 1, 1, 1, 1, 1, 0, 0, 1);
				if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
				{
					__LIB_2__::func_966(Global_35, iLocal_14, 1, 1, 1, 1, 1, 1, 0, 0, 0);
				}
				else
				{
					__LIB_2__::func_966(Global_35, iLocal_14, 1, 1, 1, 1, 1, 1, 0, 0, 1);
				}
				__LIB_8__::func_602(&uLocal_73, iLocal_14);
				if (__LIB_0__::func_181() && __LIB_3__::func_736(79, 1))
				{
					func_718(uParam0, 0, 0, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 0, 0);
					func_718(uParam0, 1, 7, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 0);
				}
				else
				{
					func_718(uParam0, 1, 0, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 0);
				}
				func_718(uParam0, 2, 43, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 0);
				func_718(uParam0, 7, 93, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 1);
				func_718(uParam0, 8, 117, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 0, 0);
				func_718(uParam0, 10, 133, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 0, 0);
				func_718(uParam0, 9, 142, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 0);
				func_718(uParam0, 11, 168, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 0);
				func_718(uParam0, 12, 154, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 0, 0);
				func_718(uParam0, 13, 173, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 0, 0);
				func_718(uParam0, 18, 203, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 1, 0);
				func_718(uParam0, 19, 205, 1073741824 /* Float: 2f */, 1097859072 /* Float: 15f */, 0, 0);
				Jump @2662; //curOff = 646
				if (iLocal_222 == 7)
				{
					__LIB_13__::func_179(iLocal_61[0], "PL_CoverQuickExit");
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[0], false))
					{
						if (__LIB_13__::func_180(iLocal_61[0], "PL_CoverQuickExit"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", true, false);
							if (__LIB_13__::func_181(iLocal_61[0], "PL_CoverQuickExit"))
							{
								func_312(20, 0);
							}
						}
					}
					else
					{
						func_312(20, 0);
					}
				}
				else
				{
					func_722(uParam0);
					func_723();
				}
				Jump @2662; //curOff = 758
				if (__LIB_0__::func_266(iLocal_14, 2735.239f, -1392.871f, 46.2274f, 0.7f, 1, 1))
				{
					if (func_724())
					{
						func_312(4, 0);
					}
				}
				else if (!__LIB_0__::func_163(iLocal_14, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2735.239f, -1392.871f, 46.2274f, 1f, 20000, 0.25f, 0, 40000f);
				}
				Jump @2662; //curOff = 859
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[8], "FrenchArtist"))
				{
					__LIB_18__::func_627(uParam0, &uLocal_316, 5, &Global_35, 1, 10f, 0, 1, 0);
					func_312(10, 0);
				}
				else
				{
					Jump @2662; //curOff = 912
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_16) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_16, iLocal_22, true, 0))
					{
						if (iLocal_223 != 2)
						{
							iLocal_223 = 2;
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_61[10], "FrenchArtist"))
						{
							func_312(7, 0);
						}
					}
					Jump @2662; //curOff = 972
					if (__LIB_0__::func_266(iLocal_14, 2772.041f, -1334.406f, 46.3296f, 0.8f, 1, 1))
					{
						PED::FORCE_PED_MOTION_STATE(iLocal_14, -1415276238, false, 0, false);
						__LIB_5__::func_20(0, 0);
						if (func_728())
						{
							func_312(5, 0);
						}
					}
					else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
					}
					Jump @2662; //curOff = 1071
					if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 5f)
					{
						func_718(uParam0, 16, 27, 7f, 1097859072 /* Float: 15f */, 0, 0);
						func_718(uParam0, 3, 31, 7f, 1097859072 /* Float: 15f */, 0, 0);
					}
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_24, true, 0))
					{
						func_312(8, 0);
						Jump @2662; //curOff = 1144
					}
					else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.6f, 0, -1082130432 /* Float: -1f */, 0);
					}
					Jump @2662; //curOff = 1178
					if (!TASK::_0x9FF5F9B24E870748(iLocal_14))
					{
						__LIB_18__::func_627(uParam0, &uLocal_316, 17, &iLocal_14, 1, 15f, 0, 0, 0);
						func_312(1, 0);
					}
					else
					{
						Jump @2662; //curOff = 1223
						if (__LIB_1__::func_205(iLocal_14, iLocal_35, 1, 0))
						{
							__LIB_13__::func_179(iLocal_61[2], "pl_Kiss");
							if (__LIB_0__::func_266(Global_35, 2736.711f, -1393.124f, 45.191f, 2f, 1, 1) || __LIB_1__::func_205(Global_35, iLocal_35, 1, 0))
							{
								func_312(16, 0);
							}
							else
							{
								Jump @2662; //curOff = 1307
								if (__LIB_0__::func_266(iLocal_14, 2737.261f, -1393.868f, 46.1994f, 0.7f, 1, 1))
								{
									if (func_729())
									{
										func_312(9, 0);
									}
								}
								else
								{
									__LIB_18__::func_627(uParam0, &uLocal_316, 6, &iLocal_14, 1, 10f, 0, 0, 0);
									if (!__LIB_0__::func_163(iLocal_14, 713668775))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2737.261f, -1393.868f, 46.1994f, 1.5f, -1, 0.25f, 0, 40000f);
									}
								}
								Jump @2662; //curOff = 1433
								if (__LIB_0__::func_266(iLocal_14, 2743.081f, -1425.536f, 46.23f, 0.5f, 1, 1))
								{
									if (func_730())
									{
										func_312(14, 0);
									}
								}
								else if (!__LIB_0__::func_163(iLocal_14, 713668775))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2743.081f, -1425.536f, 46.23f, 1.3f, -1, 0.25f, 0, -153.65f);
								}
								Jump @2662; //curOff = 1537
								if (func_714(119, sLocal_89))
								{
									if (__LIB_1__::func_205(Global_35, iLocal_27, 1, 0))
									{
										func_312(1, 0);
									}
									else
									{
										func_312(12, 0);
									}
								}
								Jump @2662; //curOff = 1581
								__LIB_18__::func_627(uParam0, &uLocal_316, 4, &iLocal_14, 1, 10f, 0, 0, 0);
								if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[4], "FrenchArtist"))
								{
									func_312(12, 0);
								}
								else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_61[4], false))
								{
									func_312(11, 0);
								}
								Jump @2662; //curOff = 1652
								if (!__LIB_0__::func_163(iLocal_14, -875674219))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
								}
								if (__LIB_1__::func_205(Global_35, iLocal_27, 1, 0))
								{
									func_312(1, 0);
								}
								Jump @2662; //curOff = 1715
								if (!__LIB_0__::func_272(Local_225[9 /*6*/], 0) || __LIB_1__::func_205(Global_35, iLocal_35, 1, 0))
								{
									func_312(1, 0);
									func_309(0, 0);
								}
								else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[2], false))
								{
									if (__LIB_13__::func_180(iLocal_61[2], "pl_Kiss"))
									{
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
										if (__LIB_13__::func_181(iLocal_61[2], "pl_Kiss"))
										{
											if (iLocal_223 != 4)
											{
												iLocal_223 = 4;
											}
											func_312(17, 0);
											func_731(1);
											func_309(1, 0);
										}
										else
										{
											Jump @2662; //curOff = 1849
											if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[2], "FrenchArtist"))
											{
												TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_89, 0, 8, -1, 0, 0, -1);
												bLocal_117 = true;
												func_312(1, 0);
											}
											else
											{
												Jump @2662; //curOff = 1895
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_14, 2698.718f, -1498.745f, 45.98f, 0.6f, 0.6f, 2f, false, true, 0))
												{
													if (func_732())
													{
														__LIB_5__::func_20(0, 1);
														func_634();
														func_312(19, 0);
													}
												}
												else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_28, true, 0) && !__LIB_0__::func_163(iLocal_14, 658540077))
												{
													TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_89, 0, 40, -1, 0, 0, -1);
												}
												Jump @2662; //curOff = 2008
												if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[9], "FrenchArtist"))
												{
													func_312(1, 0);
												}
												Jump @2662; //curOff = 2034
												Jump @2662; //curOff = 2037
												if (__LIB_18__::func_627(uParam0, &uLocal_316, 22, &iLocal_14, 1, 10f, 0, 0, 0) == 3)
												{
													if (((((ENTITY::IS_ENTITY_DEAD(Local_225[12 /*6*/]) && PED::GET_PED_CONFIG_FLAG(Local_225[12 /*6*/], 11, false) == 0) && ENTITY::IS_ENTITY_DEAD(Local_225[13 /*6*/])) && PED::GET_PED_CONFIG_FLAG(Local_225[13 /*6*/], 11, false) == 0) && ENTITY::IS_ENTITY_DEAD(Local_225[14 /*6*/])) && PED::GET_PED_CONFIG_FLAG(Local_225[14 /*6*/], 11, false) == 0)
													{
														__LIB_18__::func_627(uParam0, &uLocal_316, 24, &iLocal_14, 1, 10f, 0, 0, 0);
													}
													else if ((!__LIB_0__::func_272(Local_225[12 /*6*/], 43) && !__LIB_0__::func_272(Local_225[13 /*6*/], 43)) && !__LIB_0__::func_272(Local_225[14 /*6*/], 43))
													{
														__LIB_18__::func_627(uParam0, &uLocal_316, 23, &iLocal_14, 1, 10f, 0, 0, 0);
													}
													else
													{
														__LIB_18__::func_627(uParam0, &uLocal_316, 23, &iLocal_14, 1, 10f, 0, 0, 0);
													}
												}
												if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 8f)
												{
													if (!ENTITY::IS_ENTITY_IN_WATER(Global_35) && !PED::IS_PED_CLIMBING(Global_35))
													{
														if (__LIB_0__::func_94(iLocal_14, 2661.09f, -1543.963f, 45.1263f, 1) < 1f || __LIB_0__::func_163(iLocal_14, -875674219))
														{
															if (!__LIB_13__::func_158("RFMA_4_BEATEN") && !__LIB_13__::func_158("RFMA_4_KILLED"))
															{
																if (func_734())
																{
																	func_312(21, 0);
																}
															}
														}
													}
												}
												if (__LIB_1__::func_205(Global_35, iLocal_33, 1, 0))
												{
													if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[0], "FrenchArtist") || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[0], false))
													{
														if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_14, 2661.09f, -1543.963f, 45.1263f, 1f, 1f, 1f, false, true, 0))
														{
															if (!__LIB_0__::func_163(iLocal_14, 713668775))
															{
																TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2661.09f, -1543.963f, 45.1263f, 1.3f, -1, 0.25f, 0, 40000f);
															}
														}
														else if (!__LIB_0__::func_163(iLocal_14, -875674219))
														{
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
														}
													}
												}
												Jump @2662; //curOff = 2598
												CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
												if (PED::_IS_PED_CARRYING(Global_35))
												{
													iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
													PED::_0xED00D72F81CF7278(iVar0, 0, 1);
												}
												Jump @2662; //curOff = 2639
												if (!ENTITY::IS_ENTITY_IN_WATER(Global_35))
												{
													func_312(1, 0);
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
			default:
				break;
	}
}

void func_336(var uParam0)
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_16) && !ENTITY::IS_ENTITY_DEAD(iLocal_16))
	{
		if (!__LIB_0__::func_27(iLocal_91, 8192))
		{
			if (__LIB_0__::func_266(iLocal_14, 2772.041f, -1334.406f, 46.3296f, 10f, 1, 1))
			{
				VEHICLE::_0x4182C037AA1F0091(iLocal_16, 0);
				VEHICLE::_0x787E43477746876F(iLocal_16);
				VEHICLE::_0xDD100CE1EBBF37E3(iLocal_16, 0);
				VEHICLE::SET_TRAIN_SPEED(iLocal_16, 7f);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_16, 7f);
				__LIB_1__::func_683(&iLocal_91, 8192);
				func_312(6, 0);
			}
		}
		else if (iLocal_215 == 5 || iLocal_215 == 7)
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_16, iLocal_23, true, 0))
			{
				if (!__LIB_0__::func_27(iLocal_91, 131072))
				{
					VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_16, 3f);
					__LIB_1__::func_683(&iLocal_91, 131072);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_15) && !ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		if (!__LIB_0__::func_27(iLocal_91, 16384))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_20, true, 0))
			{
				if (iLocal_223 != 5)
				{
					iLocal_223 = 5;
				}
				VEHICLE::_0x787E43477746876F(iLocal_15);
				VEHICLE::_0x4182C037AA1F0091(iLocal_15, 0);
				VEHICLE::_0xDD100CE1EBBF37E3(iLocal_15, 0);
				VEHICLE::SET_TRAIN_SPEED(iLocal_15, 12f);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_15, 12f);
				__LIB_13__::func_62(uParam0, func_61(3), func_61(6), 3, 6, 0);
				if (bLocal_105 && __LIB_0__::func_272(__LIB_1__::func_334(141), 0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_1__::func_334(141), false);
				}
				__LIB_1__::func_683(&iLocal_91, 16384);
			}
		}
	}
}

void func_338(var uParam0)
{
	int iVar0;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	iVar0 = 6;
	switch (iLocal_216)
	{
		case 0:
			if (__LIB_0__::func_266(iLocal_14, 2772.041f, -1334.406f, 46.3296f, 2f, 1, 1))
			{
				if (iLocal_223 != 1)
				{
					iLocal_223 = 1;
				}
				func_735(1);
			}
			if ((((((((__LIB_0__::func_48(Global_35, Local_225[0 /*6*/], 6f, 0) || __LIB_0__::func_48(Global_35, Local_225[1 /*6*/], 6f, 0)) || __LIB_0__::func_48(Global_35, Local_225[2 /*6*/], 6f, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[0 /*6*/], true, false), 10f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[1 /*6*/], true, false), 10f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[2 /*6*/], true, false), 10f, true)) || __LIB_9__::func_578(Local_225[0 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[1 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[2 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0))
			{
				iVar0 = __LIB_18__::func_627(uParam0, &uLocal_316, 14, &(Local_225[0 /*6*/]), 1, 12f, 1, 0, 0);
				if (iVar0 == 2)
				{
					__LIB_1__::func_283(&uLocal_421, 0);
					func_735(4);
				}
				else
				{
					Jump @845; //curOff = 345
					if (iLocal_215 == 8)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), true) < 16f)
						{
							__LIB_13__::func_62(uParam0, func_61(1), func_61(3), 1, 3, 0);
							__LIB_0__::func_37(&uLocal_433);
							func_735(2);
						}
						else
						{
							if (iLocal_215 == 7 || iLocal_215 == 8)
							{
								if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) > 16f)
								{
									if (__LIB_0__::func_264(&uLocal_433) > 5f)
									{
										iVar0 = __LIB_18__::func_627(uParam0, &uLocal_316, 15, &(Local_225[0 /*6*/]), 1, 20f, 1, 0, 0);
										if ((iVar0 == 2 || iVar0 == 5) || iVar0 == 7)
										{
											UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
											__LIB_0__::func_37(&uLocal_433);
											__LIB_1__::func_283(&uLocal_421, 0);
											func_735(4);
										}
										else
										{
											Jump @560; //curOff = 550
											__LIB_1__::func_148(&uLocal_433);
											if ((((((((__LIB_0__::func_48(Global_35, Local_225[0 /*6*/], 6f, 0) || __LIB_0__::func_48(Global_35, Local_225[1 /*6*/], 6f, 0)) || __LIB_0__::func_48(Global_35, Local_225[2 /*6*/], 6f, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[0 /*6*/], true, false), 10f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[1 /*6*/], true, false), 10f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[2 /*6*/], true, false), 10f, true)) || __LIB_9__::func_578(Local_225[0 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[1 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[2 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0))
											{
												iVar0 = __LIB_18__::func_627(uParam0, &uLocal_316, 14, &(Local_225[0 /*6*/]), 1, 12f, 1, 0, 0);
												__LIB_1__::func_283(&uLocal_421, 0);
												func_735(4);
											}
											else
											{
												Jump @845; //curOff = 807
												if (!__LIB_0__::func_163(Local_225[0 /*6*/], 242628503))
												{
													func_735(3);
												}
												else
												{
													Jump @845; //curOff = 836
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
			default:
				break;
	}
}

void func_339(var uParam0)
{
	switch (iLocal_217)
	{
		case 0:
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[8], false))
			{
				__LIB_13__::func_179(iLocal_61[7], "pl_Breakout");
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_61[8]) > 6.3f)
				{
					if (iLocal_223 != 3)
					{
						iLocal_223 = 3;
					}
					func_737(2);
				}
			}
			if (((((__LIB_0__::func_48(Global_35, Local_225[3 /*6*/], 10f, 0) || __LIB_0__::func_48(Global_35, Local_225[4 /*6*/], 10f, 0)) || __LIB_0__::func_48(Global_35, Local_225[5 /*6*/], 10f, 0)) || __LIB_9__::func_578(Local_225[3 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[4 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[5 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0))
			{
				func_737(4);
				__LIB_1__::func_283(&uLocal_424, 0);
			}
			break;
		case 2:
			if (__LIB_1__::func_205(iLocal_14, iLocal_35, 1, 0))
			{
				func_737(3);
			}
			if (((((__LIB_0__::func_48(Global_35, Local_225[3 /*6*/], 10f, 0) || __LIB_0__::func_48(Global_35, Local_225[4 /*6*/], 10f, 0)) || __LIB_0__::func_48(Global_35, Local_225[5 /*6*/], 10f, 0)) || __LIB_9__::func_578(Local_225[3 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[4 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0)) || __LIB_9__::func_578(Local_225[5 /*6*/], 0, &uLocal_126, &uLocal_125, 0, 0))
			{
				func_737(4);
				__LIB_1__::func_283(&uLocal_424, 0);
			}
			break;
		case 5:
			func_737(0);
			break;
	}
}

void func_340(var uParam0)
{
	switch (iLocal_218)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_32, true, 0) && __LIB_0__::func_665(iLocal_14, Global_35, 1, 1) < 3f)
			{
				func_738(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[1], false))
			{
				func_738(2);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_14, 2746.467f, -1467.846f, 44.3941f, 0.8f, 0.8f, 1f, false, true, 0) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[1], "WOMAN"))
			{
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[1], "man"))
			{
				if (!__LIB_0__::func_163(Local_225[6 /*6*/], 713668775))
				{
					PED::FORCE_PED_MOTION_STATE(Local_225[6 /*6*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[6 /*6*/], 2748.86f, -1445.835f, 44.9741f, 1f, 20000, 0.25f, 0, 40000f);
					__LIB_1__::func_951(&iLocal_59);
				}
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[1], "WOMAN"))
			{
				if (!__LIB_0__::func_163(Local_225[7 /*6*/], 713668775))
				{
					PED::FORCE_PED_MOTION_STATE(Local_225[7 /*6*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[7 /*6*/], 2749.74f, -1445.862f, 44.8768f, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[1], "man") && ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[1], "WOMAN"))
			{
				__LIB_2__::func_788(&(Local_225[6 /*6*/]), 1, 0, 1);
				__LIB_2__::func_788(&(Local_225[7 /*6*/]), 1, 0, 1);
				func_738(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (__LIB_0__::func_272(Local_225[6 /*6*/], 0))
			{
				__LIB_0__::func_169(Local_225[6 /*6*/], 0, 1);
			}
			func_738(0);
			break;
	}
}

void func_341(var uParam0)
{
	if (!__LIB_0__::func_272(Local_225[8 /*6*/], 0) || PED::GET_PED_CONFIG_FLAG(Local_225[12 /*6*/], 11, false) == 1)
	{
		__LIB_3__::func_319(iLocal_61[4]);
		__LIB_3__::func_319(iLocal_61[5]);
		__LIB_0__::func_172(iLocal_37);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		if (iLocal_215 == 13)
		{
			if (__LIB_1__::func_205(Global_35, iLocal_27, 1, 0))
			{
				func_312(1, 0);
			}
			else
			{
				func_312(12, 0);
			}
		}
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[4], false))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 2, true);
	}
	switch (iLocal_219)
	{
		case 0:
			if (__LIB_0__::func_665(iLocal_14, Global_35, 1, 1) < 10f)
			{
				__LIB_13__::func_179(iLocal_61[4], "pl_Climb_Thru_Fence_Artist");
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[4], false))
				{
					if ((!PED::_IS_PED_HOGTIED(Local_225[8 /*6*/]) && !PED::_IS_PED_HOGTYING(Global_35)) && !PED::_IS_PED_LASSOED(Local_225[8 /*6*/]))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[4], "s_Look_Idle_01", 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[4], "internal_loop", true, false);
							func_741(1);
						}
					}
					else if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_61[4], "pl_Climb_Thru_Fence_Artist"))
					{
						if (__LIB_13__::func_180(iLocal_61[4], "pl_Climb_Thru_Fence_Artist"))
						{
							if (__LIB_13__::func_181(iLocal_61[4], "pl_Climb_Thru_Fence_Artist"))
							{
								func_741(1);
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!bLocal_97)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[4], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[4], "s_getting_Hit_On", 1) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_61[4]) > 15f)
					{
						if (!__LIB_1__::func_205(Global_35, iLocal_26, 1, 0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2745.328f, -1428.708f, 46.23f, 0.7f, 0.7f, 1f, false, true, 0))
							{
								if (func_742())
								{
									__LIB_0__::func_172(iLocal_38);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
									bLocal_97 = true;
								}
							}
							else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP")) && __LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 4f)
							{
								if (!__LIB_0__::func_163(Global_35, -1824940423))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
									TASK::TASK_GO_TO_COORD_ANY_MEANS(Global_35, 2745.328f, -1428.708f, 46.23f, 1f, 0, false, 524419, -1f);
								}
							}
						}
					}
				}
			}
			if (((ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[4], "NBXUpperClass") || PED::_IS_PED_HOGTIED(Local_225[8 /*6*/])) || PED::_IS_PED_LASSOED(Local_225[8 /*6*/])) || PED::IS_PED_IN_COMBAT(Local_225[12 /*6*/], 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_61[4]);
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_61[5]);
				__LIB_0__::func_172(iLocal_37);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_741(2);
			}
			break;
		case 2:
			break;
		case 3:
			func_741(0);
			break;
	}
}

void func_342(var uParam0)
{
	switch (iLocal_220)
	{
		case 0:
			break;
		case 1:
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[2], "NBXUpperClass"))
			{
				func_731(2);
			}
			else
			{
				Jump @78; //curOff = 64
				Jump @78; //curOff = 67
				func_731(0);
			}
			default:
				break;
	}
}

void func_343()
{
	switch (iLocal_221)
	{
		case 0:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_61[9]) > 2.17f)
			{
				if (!__LIB_6__::func_904())
				{
					func_743(1);
				}
			}
			break;
		case 1:
			if (iLocal_214 != 2)
			{
				func_743(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[9], "Sailor_01"))
			{
				if (!__LIB_0__::func_163(Local_225[10 /*6*/], 993674639))
				{
					__LIB_1__::func_473(Local_225[10 /*6*/], joaat("WORLD_HUMAN_LEAN_RAILING"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_MALE_B"), -1082130432 /* Float: -1f */);
				}
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[9], "Sailor_02"))
			{
				if (!__LIB_0__::func_163(Local_225[11 /*6*/], 993674639))
				{
					__LIB_1__::func_473(Local_225[11 /*6*/], joaat("WORLD_HUMAN_LEAN_RAILING"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_SMOKING_MALE_A"), -1082130432 /* Float: -1f */);
				}
			}
			break;
		case 3:
			func_743(0);
			break;
	}
}

void func_344(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iLocal_222 != 7)
	{
		if (bLocal_106)
		{
			if (iLocal_222 != 6)
			{
				iLocal_222 = 6;
			}
		}
		iVar1 = 0;
		bVar2 = true;
		iVar1 = 12;
		while (iVar1 <= 14)
		{
			if (func_745(&(Local_225[iVar1 /*6*/])))
			{
				__LIB_0__::func_325(&(Local_225[iVar1 /*6*/].f_1));
			}
			else if (!__LIB_1__::func_205(Local_225[iVar1 /*6*/], iLocal_33, 1, 0))
			{
				__LIB_1__::func_864(Local_225[iVar1 /*6*/], 0, 0);
			}
			else
			{
				if (!bLocal_106)
				{
					if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[12 /*6*/], true, false), 1f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[13 /*6*/], true, false), 1f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_225[14 /*6*/], true, false), 1f, true))
					{
						bLocal_106 = true;
					}
				}
				bVar2 = false;
			}
			iVar1++;
		}
		if (bVar2)
		{
			__LIB_1__::func_681(&iLocal_92, 1);
			func_747(7);
		}
	}
	switch (iLocal_222)
	{
		case 0:
			if (__LIB_1__::func_205(iLocal_14, iLocal_19, 1, 0))
			{
				LAW::_0x710448D44A64C213(false);
				__LIB_13__::func_62(uParam0, func_61(6), func_61(7), 6, 7, 0);
				func_747(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_94(iLocal_14, 2669.142f, -1535.724f, 45.98f, 1) < 1.5f)
			{
				if (func_748())
				{
					func_749(1);
					func_749(0);
					func_747(2);
				}
			}
			else if (!__LIB_0__::func_163(iLocal_14, 242628503) && !__LIB_0__::func_163(iLocal_14, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 2669.142f, -1535.724f, 45.98f, 1.3f, -1, 0.25f, 4194304, 40000f);
			}
			break;
		case 2:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_225[12 /*6*/], &Local_183);
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_225[13 /*6*/], &Local_183);
			iVar0 = __LIB_18__::func_627(uParam0, &uLocal_316, 20, &(Local_225[14 /*6*/]), 1, 25f, 0, 0, 0);
			if (!bLocal_116 && iVar0 == 1)
			{
				if (!__LIB_0__::func_75(&uLocal_445))
				{
					__LIB_1__::func_148(&uLocal_445);
				}
				else if (__LIB_0__::func_265(&uLocal_445) > 2f)
				{
					__LIB_0__::func_37(&uLocal_445);
					bLocal_116 = true;
				}
			}
			if ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[0], "S_CoverIdle", 1) || bLocal_116) || iVar0 == 3)
			{
				if (iLocal_223 != 6)
				{
					iLocal_223 = 6;
				}
				func_312(2, PED::IS_PED_IN_COMBAT(iLocal_14, 0));
				func_747(3);
			}
			break;
		case 3:
			iVar0 = __LIB_18__::func_627(uParam0, &uLocal_316, 21, &(Local_225[12 /*6*/]), 1, 25f, 0, 0, 0);
			func_750(0);
			if (__LIB_0__::func_264(&uLocal_442) > 1f)
			{
				func_750(1);
			}
			if ((__LIB_0__::func_163(Local_225[12 /*6*/], 780511057) && __LIB_0__::func_163(Local_225[13 /*6*/], 780511057)) || (!__LIB_0__::func_272(Local_225[12 /*6*/], 0) && !__LIB_0__::func_272(Local_225[13 /*6*/], 0)))
			{
				if ((iVar0 == 2 || iVar0 == 7) || iVar0 == 3)
				{
					func_747(4);
				}
			}
			break;
		case 4:
			if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_225[14 /*6*/], 17) || func_745(&(Local_225[12 /*6*/]))) || func_745(&(Local_225[13 /*6*/])))
			{
				__LIB_0__::func_37(&uLocal_436);
				if (!MAP::DOES_BLIP_EXIST(Local_225[14 /*6*/].f_1))
				{
					Local_225[14 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_225[14 /*6*/]);
				}
				func_747(5);
			}
			func_751();
			break;
		case 5:
			if ((!PED::IS_PED_PERFORMING_MELEE_ACTION(Local_225[14 /*6*/], 1, 0) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0)) && !PED::IS_PED_SHOOTING(Global_35))
			{
				if (!__LIB_0__::func_75(&uLocal_436))
				{
					__LIB_1__::func_148(&uLocal_436);
				}
				else if (__LIB_0__::func_265(&uLocal_436) > 15f)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_225[14 /*6*/], iLocal_14, 2f, 2f, 2f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_225[14 /*6*/], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[14 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 3f, 20000, 0.25f, 0, 40000f);
						}
					}
					else
					{
						__LIB_1__::func_864(iLocal_14, 0, 0);
						__LIB_0__::func_37(&uLocal_436);
					}
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_436);
			}
			func_751();
			bLocal_106 = true;
			break;
		case 6:
			if (!__LIB_0__::func_75(&uLocal_436) || __LIB_0__::func_264(&uLocal_436) < 15f)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_44, true, 0))
				{
					func_752();
				}
			}
			if (((((!PED::IS_PED_PERFORMING_MELEE_ACTION(Local_225[12 /*6*/], 1, 0) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Local_225[13 /*6*/], 1, 0)) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Local_225[14 /*6*/], 1, 0)) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0)) && !PED::IS_PED_SHOOTING(Global_35)) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_44, true, 0))
			{
				if (!__LIB_0__::func_75(&uLocal_436))
				{
					__LIB_1__::func_148(&uLocal_436);
				}
				else if (__LIB_0__::func_265(&uLocal_436) > 15f || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_44, true, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_225[12 /*6*/], iLocal_14, 2f, 2f, 2f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_225[12 /*6*/], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[12 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 3f, 20000, 0.25f, 0, 40000f);
						}
					}
					else
					{
						__LIB_1__::func_864(iLocal_14, 0, 0);
						__LIB_0__::func_37(&uLocal_436);
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_225[13 /*6*/], iLocal_14, 2f, 2f, 2f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_225[13 /*6*/], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[13 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 3f, 20000, 0.25f, 0, 40000f);
						}
					}
					else
					{
						__LIB_1__::func_864(iLocal_14, 0, 0);
						__LIB_0__::func_37(&uLocal_436);
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_225[14 /*6*/], iLocal_14, 2f, 2f, 2f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_225[14 /*6*/], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[14 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 3f, 20000, 0.25f, 0, 40000f);
						}
					}
					else
					{
						__LIB_1__::func_864(iLocal_14, 0, 0);
						__LIB_0__::func_37(&uLocal_436);
					}
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_436);
			}
			break;
		case 7:
			break;
		case 8:
			func_747(0);
			break;
	}
}

int func_347(var uParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_27(iLocal_92, iParam1))
	{
		return 1;
	}
	if (__LIB_0__::func_270())
	{
		return 0;
	}
	sVar0 = func_755(iParam1);
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_0__::func_37(&uLocal_427);
		__LIB_1__::func_683(&iLocal_92, iParam1);
		return 0;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_148(&uLocal_427);
		fLocal_95 = __LIB_0__::func_665(Global_35, iLocal_14, 1, 1);
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 1:
			if (__LIB_13__::func_649(&uLocal_427, &iLocal_14, &fLocal_95, 15f))
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 8:
			__LIB_12__::func_883(uParam0, "FMA5_O_FIGHT", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_37(&uLocal_427);
		__LIB_1__::func_683(&iLocal_92, iParam1);
	}
	return 0;
}

void func_383(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_793(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_793(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_793(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_793(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_793(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_793(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_793(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_793(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_793(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_793(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_793(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_793(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_793(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795();
						func_796(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_793(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_383(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_383(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_383(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_793(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_793(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_829();
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
							func_793(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_412(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	if (vLocal_418.z)
	{
		__LIB_13__::func_646(&vLocal_418, &(vLocal_418.f_1), 0, 1);
		__LIB_0__::func_172(vLocal_418.x);
		vLocal_418.f_2 = 0;
	}
	__LIB_13__::func_645(iLocal_14, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
	func_635();
	__LIB_0__::func_325(&iLocal_18);
	__LIB_0__::func_325(&iLocal_17);
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
	}
	__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_0__::func_325(&(Local_225[iVar0 /*6*/].f_1));
		__LIB_2__::func_788(&(Local_225[iVar0 /*6*/]), 1, 0, 1);
		iVar0++;
	}
	__LIB_13__::func_646(&iLocal_21, &uLocal_45, 0, 0);
	__LIB_13__::func_646(&iLocal_30, &uLocal_46, 0, 0);
	__LIB_13__::func_646(&iLocal_31, &uLocal_47, 0, 0);
	__LIB_13__::func_646(&iLocal_32, &uLocal_47, 0, 0);
	__LIB_13__::func_646(&iLocal_34, &uLocal_49, 0, 0);
	__LIB_13__::func_646(&iLocal_29, &uLocal_50, 0, 0);
	__LIB_13__::func_646(&iLocal_41, &uLocal_51, 0, 0);
	__LIB_13__::func_646(&iLocal_40, &uLocal_52, 0, 0);
	__LIB_13__::func_646(&iLocal_20, &uLocal_53, 0, 0);
	__LIB_13__::func_646(&iLocal_35, &uLocal_54, 0, 0);
	__LIB_13__::func_646(&iLocal_42, &uLocal_55, 0, 0);
	__LIB_13__::func_646(&iLocal_43, &uLocal_56, 0, 0);
	__LIB_0__::func_172(iLocal_19);
	__LIB_0__::func_172(iLocal_25);
	__LIB_0__::func_172(iLocal_26);
	__LIB_0__::func_172(iLocal_27);
	__LIB_0__::func_172(iLocal_28);
	__LIB_0__::func_172(iLocal_29);
	__LIB_0__::func_172(iLocal_20);
	__LIB_0__::func_172(iLocal_21);
	__LIB_0__::func_172(iLocal_22);
	__LIB_0__::func_172(iLocal_24);
	__LIB_0__::func_172(iLocal_30);
	__LIB_0__::func_172(iLocal_31);
	__LIB_0__::func_172(iLocal_32);
	__LIB_0__::func_172(iLocal_33);
	__LIB_0__::func_172(iLocal_34);
	__LIB_0__::func_172(iLocal_35);
	__LIB_0__::func_172(iLocal_36);
	__LIB_0__::func_172(iLocal_37);
	__LIB_0__::func_172(iLocal_38);
	__LIB_0__::func_172(iLocal_39);
	__LIB_0__::func_172(iLocal_23);
	__LIB_0__::func_172(iLocal_42);
	__LIB_0__::func_172(iLocal_43);
	__LIB_0__::func_172(iLocal_44);
	__LIB_1__::func_951(&iLocal_57);
	__LIB_1__::func_951(&iLocal_58);
	__LIB_1__::func_951(&iLocal_59);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_89);
	if (__LIB_0__::func_75(&uLocal_424))
	{
		__LIB_0__::func_37(&uLocal_424);
	}
	__LIB_13__::func_636(uParam0);
	__LIB_2__::func_161(2762.466f, -1345.316f, 48.353f, 50f, 5);
	__LIB_1__::func_600(1);
	VEHICLE::_0xB961DD799A837BD7();
	__LIB_2__::func_353(&uLocal_208, 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (iLocal_223 != 7)
	{
		iLocal_223 = 7;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_15);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_16);
	}
	if (bLocal_105 && __LIB_0__::func_272(__LIB_1__::func_334(141), 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_1__::func_334(141), false);
	}
	TASK::_DELETE_SCENARIO_POINT(iLocal_60);
	TASK::SET_SCENARIO_GROUP_ENABLED("SDN_RCM_FMA_4_PROPS", true);
	TASK::SET_SCENARIO_GROUP_ENABLED("SaintDenis_TrainStationVehicles", true);
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(165));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(166));
}

int func_466(int iParam0, int iParam1)
{
	var uVar0;
	return func_922(&uVar0, iParam0, iParam1);
}

bool func_504(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_9__::func_578(*iParam0, 0, uParam1, uParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_472(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

bool func_562()
{
	if (PED::_0x854BC9B1A1CCD034(joaat("IN_A_DRESS"), iLocal_14) && PED::_0x854BC9B1A1CCD034(-993779406, iLocal_14))
	{
		return true;
	}
	else
	{
		PED::_0xF7EA250B9A919E03(joaat("IN_A_DRESS"), iLocal_14);
		PED::_0xF7EA250B9A919E03(-993779406, iLocal_14);
		return false;
	}
	return false;
}

bool func_564(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_91, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	vVar0 = { func_205(1) };
	fVar3 = func_206(1);
	if (__LIB_13__::func_643(uParam0, &iLocal_14, iLocal_209, vVar0, fVar3, 1, 1))
	{
		__LIB_13__::func_260(uParam0, iLocal_14);
		__LIB_13__::func_630(&iLocal_14, vVar0, fVar3);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_14, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, iLocal_449);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 138, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_14, 16896, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 93, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 4, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 10, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 81, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 331, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 330, true);
		ENTITY::_0x18FF3110CF47115D(iLocal_14, 7, 0);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_14, 2);
		PED::SET_PED_COMBAT_ABILITY(iLocal_14, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 24, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 14, true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_14, false);
		__LIB_0__::func_862(iLocal_14, 37289196);
		PED::_0x89F5E7ADECCCB49C(iLocal_14, "in_a_dress");
		PED::_SET_PED_BLACKBOARD_BOOL(iLocal_14, "in_a_dress", true, -1);
		PED::CLEAR_PED_WETNESS(iLocal_14);
		func_312(0, 1);
		__LIB_12__::func_875(uParam0, iLocal_14, "RFMA_ARTIST", 0);
		__LIB_1__::func_683(&iLocal_91, 1);
		return true;
	}
	return false;
}

bool func_565(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		if (iParam0 == 0)
		{
			iLocal_61[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(0), 0, "pbl_action", false, true);
		}
		else if (iParam0 == 1)
		{
			iLocal_61[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(1), 0, "pbl_Check_Out_Prostitute", false, true);
		}
		else if (iParam0 == 2)
		{
			iLocal_61[2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(2), 0, "pl_Enter", false, true);
		}
		else if (iParam0 == 3)
		{
			iLocal_61[3] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(3), 0, "pbl_RFMA_RC7_LEADIN", false, true);
		}
		else if (iParam0 == 4)
		{
			iLocal_61[4] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(4), 0, "pl_Enter", false, true);
		}
		else if (iParam0 == 5)
		{
			iLocal_61[5] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(5), 0, "pl_Climb_Thru_Fence_Player", false, true);
		}
		else if (iParam0 == 6)
		{
			iLocal_61[6] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(6), 0, "PL_IDLE_B", false, true);
		}
		else if (iParam0 == 7)
		{
			iLocal_61[7] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(7), 0, "pl_Conversation", false, true);
		}
		else if (iParam0 == 8)
		{
			iLocal_61[8] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(8), 0, "pl_Action", false, true);
		}
		else if (iParam0 == 9)
		{
			iLocal_61[9] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(9), 0, "pl_Action", false, true);
		}
		else if (iParam0 == 10)
		{
			iLocal_61[10] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(10), 0, "pl_Action", false, true);
		}
		else
		{
			iLocal_61[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1021(iParam0), 0, 0, false, true);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_61[iParam0]);
		}
	}
	return false;
}

bool func_566()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[6]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[6], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[6], "CS_FrenchArtist", iLocal_14, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[6], "p_cs_Fan01x", iLocal_58, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[6], "p_cs_portfolio01x", iLocal_57, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[6]);
			return true;
		}
	}
	return false;
}

void func_597(var uParam0)
{
	switch (iLocal_213)
	{
		case 0:
			__LIB_13__::func_646(&iLocal_21, &uLocal_45, 1, 0);
			__LIB_13__::func_646(&iLocal_30, &uLocal_46, 1, 0);
			__LIB_13__::func_646(&iLocal_31, &uLocal_47, 1, 0);
			__LIB_13__::func_646(&iLocal_32, &uLocal_48, 1, 0);
			__LIB_13__::func_646(&iLocal_34, &uLocal_49, 1, 0);
			__LIB_13__::func_646(&iLocal_29, &uLocal_50, 1, 0);
			__LIB_13__::func_646(&iLocal_41, &uLocal_51, 1, 0);
			__LIB_13__::func_646(&iLocal_40, &uLocal_52, 1, 0);
			__LIB_13__::func_646(&iLocal_20, &uLocal_53, 1, 0);
			__LIB_13__::func_646(&iLocal_35, &uLocal_54, 1, 0);
			__LIB_13__::func_646(&iLocal_42, &uLocal_55, 1, 0);
			__LIB_13__::func_646(&iLocal_43, &uLocal_56, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				__LIB_1__::func_951(&iLocal_58);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_61[6]);
			break;
	}
}

void func_599(var uParam0)
{
	float fVar0;
	__LIB_13__::func_642(-1, 0, 0);
	switch (iLocal_213)
	{
		case 0:
			PED::_0xF7EA250B9A919E03(joaat("IN_A_DRESS"), iLocal_14);
			PED::_0xF7EA250B9A919E03(-993779406, iLocal_14);
			func_296();
			__LIB_3__::func_229(165);
			__LIB_3__::func_229(166);
			if (!__LIB_0__::func_27(iLocal_91, 1024))
			{
				__LIB_1__::func_572(2762.466f, -1345.316f, 48.353f, 100f, 0, 0, 1, 1, 0);
				__LIB_1__::func_683(&iLocal_91, 1024);
			}
			if (__LIB_13__::func_193(uParam0, iLocal_14, "cs_frenchartist", 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_14, joaat("MOTIONSTATE_WALK"), false, 1, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_89, 0, 40, -1, 0, 0, -1);
			}
			if (__LIB_0__::func_181())
			{
				if (__LIB_13__::func_193(uParam0, Global_35, "JOHN", 0, 1, 1))
				{
					__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 3000, 0, 1, 1, 0, 0, 0);
				}
			}
			else if (__LIB_13__::func_193(uParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 3000, 0, 1, 1, 0, 0, 0);
			}
			break;
		case 1:
			fVar0 = __LIB_14__::func_200(uParam0);
			if (!__LIB_0__::func_27(iLocal_91, 1024))
			{
				__LIB_1__::func_683(&iLocal_91, 1024);
			}
			if (fVar0 < 1.6f && fVar0 > 0f)
			{
				__LIB_2__::func_426(&iLocal_14);
			}
			break;
	}
}

int func_601(var uParam0)
{
	bLocal_109 = true;
	return 1;
}

void func_607(int iParam0, var uParam1)
{
	char* sVar0;
	if (!__LIB_0__::func_272(iLocal_14, 1))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[6], false))
	{
		return;
	}
	if (!bLocal_104)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_14, 10f, 1) && !bLocal_103)
		{
			if (iLocal_224 != 3 && !__LIB_0__::func_75(&uLocal_430))
			{
				__LIB_1__::func_148(&uLocal_430);
				iLocal_224 = 3;
			}
		}
		else if (!bLocal_103)
		{
			iLocal_224 = 0;
			bLocal_103 = true;
		}
		else if (iLocal_224 != 0 && !__LIB_0__::func_75(&uLocal_430))
		{
			__LIB_1__::func_148(&uLocal_430);
		}
	}
	switch (iLocal_224)
	{
		case 3:
			if (iLocal_94 == 0)
			{
				sVar0 = "PL_IDLE_A";
			}
			else if (iLocal_94 == 1)
			{
				sVar0 = "PL_IDLE_C";
			}
			else if (iLocal_94 == 2)
			{
				sVar0 = "PL_IDLE_D";
			}
			else if (iLocal_94 == 3)
			{
				sVar0 = "PL_IDLE_B";
			}
			if (__LIB_0__::func_264(&uLocal_430) > 12f)
			{
				__LIB_13__::func_179(iLocal_61[6], sVar0);
				if (__LIB_13__::func_180(iLocal_61[6], sVar0))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[6], "base", 1) && __LIB_13__::func_181(iLocal_61[6], sVar0))
					{
						__LIB_1__::func_148(&uLocal_430);
						iLocal_94++;
					}
				}
			}
			else
			{
				func_1064(uParam1);
			}
			if (iLocal_94 > 3)
			{
				iLocal_94 = 0;
				__LIB_1__::func_148(&uLocal_430);
			}
			break;
		case 0:
			if (iParam0 == 0)
			{
				sVar0 = "PL_FRONT_PSST";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "PL_RIGHT_PSST";
			}
			else if (iParam0 == 3)
			{
				sVar0 = "PL_LEFT_PSST";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "PL_BACK_PSST";
			}
			__LIB_13__::func_179(iLocal_61[6], sVar0);
			if (__LIB_13__::func_180(iLocal_61[6], sVar0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[6], "base", 1) && __LIB_13__::func_181(iLocal_61[6], sVar0))
				{
					__LIB_1__::func_148(&uLocal_430);
					iLocal_224 = 1;
				}
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				sVar0 = "PL_FRONT_GESTURE";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "PL_RIGHT_GESTURE";
			}
			else if (iParam0 == 3)
			{
				sVar0 = "PL_LEFT_GESTURE";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "PL_BACK_GESTURE";
			}
			if (__LIB_0__::func_264(&uLocal_430) > 12f)
			{
				__LIB_13__::func_179(iLocal_61[6], sVar0);
				if (__LIB_13__::func_180(iLocal_61[6], sVar0))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[6], "base", 1) && __LIB_13__::func_181(iLocal_61[6], sVar0))
					{
						__LIB_1__::func_148(&uLocal_430);
						iLocal_224 = 2;
					}
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[6], "base", 1))
			{
				func_1064(uParam1);
			}
			break;
		case 2:
			if (iParam0 == 0)
			{
				sVar0 = "PL_FRONT_HEY";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "PL_RIGHT_HEY";
			}
			else if (iParam0 == 3)
			{
				sVar0 = "PL_LEFT_HEY";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "PL_BACK_HEY";
			}
			if (__LIB_0__::func_264(&uLocal_430) > 12f)
			{
				__LIB_13__::func_179(iLocal_61[6], sVar0);
				if (__LIB_13__::func_180(iLocal_61[6], sVar0))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[6], "base", 1) && __LIB_13__::func_181(iLocal_61[6], sVar0))
					{
						__LIB_1__::func_148(&uLocal_430);
						bLocal_104 = true;
						iLocal_224 = 3;
					}
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_61[6], "base", 1))
			{
				func_1064(uParam1);
			}
			break;
		case 4:
			break;
	}
}

void func_617(var uParam0)
{
	__LIB_4__::func_228(uParam0);
	__LIB_1__::func_401(uParam0, 1);
	__LIB_2__::func_828(uParam0, 1);
	__LIB_2__::func_829(uParam0, 1);
	__LIB_1__::func_398(uParam0, 0);
	__LIB_1__::func_413(uParam0, 0);
	__LIB_1__::func_402(uParam0, 0);
	__LIB_2__::func_830(uParam0, 1);
	__LIB_1__::func_406(uParam0, 0);
}

void func_633()
{
	struct<27> Var0;
	struct<27> Var38;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	Var38.f_4 = 1065353216;
	Var38.f_5 = 1065353216;
	Var38.f_9 = 1065353216;
	Var38.f_10 = 1065353216;
	Var38.f_14 = 1065353216;
	Var38.f_15 = 1065353216;
	Var38.f_17 = 1040187392;
	Var38.f_18 = 1040187392;
	Var38.f_19 = -1;
	Var38.f_26 = -1082130432;
	__LIB_3__::func_895(&Var0);
	__LIB_3__::func_895(&Var38);
	Local_118 = 0;
	Local_118.f_3 = 0;
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		__LIB_9__::func_175(iLocal_14, Global_35, &Var38, 0f, 0f, 0f, sLocal_89, 9224, 1, 3f, 1.5f, 1073069561, fLocal_90, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
		__LIB_13__::func_566(Global_35, iLocal_14, &Local_118, -1, 0, 0);
		__LIB_1__::func_731(&uLocal_73);
	}
	bLocal_117 = false;
}

void func_634()
{
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		__LIB_1__::func_726(iLocal_14, 1);
	}
	Local_118 = 0;
	Local_118.f_3 = 1;
	Local_118.f_6 = 1f;
	Local_118.f_5 = 2f;
	__LIB_13__::func_566(Global_35, iLocal_14, &Local_118, -1, 1, "FMA_WNT");
}

void func_635()
{
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		__LIB_1__::func_726(iLocal_14, 1);
	}
	__LIB_1__::func_727(Global_35, 1);
	__LIB_5__::func_438(&uLocal_73);
}

void func_668(var uParam0)
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
		func_1103(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1105(uParam0);
		func_1106(uParam0);
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

bool func_714(int iParam0, char* sParam1)
{
	int iVar0;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &iVar0);
		if (iVar0 > iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_718(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bVar0 = false;
	if (!__LIB_11__::func_764(&uLocal_316, iParam1))
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_89, iParam2, &vVar1);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_89, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &iVar4);
		if (__LIB_0__::func_266(iLocal_14, vVar1, fParam3, 1, 1))
		{
			bVar0 = true;
		}
		if (iVar4 >= iParam2 && iVar4 < iParam2 + 10)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			__LIB_18__::func_627(uParam0, &uLocal_316, iParam1, &iLocal_14, 0, fParam4, 1, bParam5, bParam6);
		}
	}
}

void func_722(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_14, Global_35) < 15f)
	{
		if (__LIB_0__::func_75(&uLocal_439) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_439) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "RFMA_4_CFIGHT", 0))
					{
						__LIB_1__::func_148(&uLocal_439);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_439);
		}
	}
}

void func_723()
{
	__LIB_13__::func_179(iLocal_61[0], "PL_CoverFReact_01");
	__LIB_13__::func_179(iLocal_61[0], "PL_CoverFReact_02");
	__LIB_13__::func_179(iLocal_61[0], "PL_CoverLook_01");
	if (!iLocal_98[0] && func_745(&(Local_225[12 /*6*/])))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[0], false))
		{
			if (__LIB_13__::func_180(iLocal_61[0], "PL_CoverFReact_01"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", true, false);
				if (__LIB_13__::func_181(iLocal_61[0], "PL_CoverFReact_01"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", false, false);
					iLocal_98[0] = 1;
				}
			}
		}
	}
	else if (!iLocal_98[1] && func_745(&(Local_225[13 /*6*/])))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[0], false))
		{
			if (__LIB_13__::func_180(iLocal_61[0], "PL_CoverFReact_02"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", true, false);
				if (__LIB_13__::func_181(iLocal_61[0], "PL_CoverFReact_02"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", false, false);
					iLocal_98[1] = 1;
				}
			}
		}
	}
	else if (!iLocal_98[2] && func_745(&(Local_225[14 /*6*/])))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[0], false))
		{
			if (__LIB_13__::func_180(iLocal_61[0], "PL_CoverLook_01"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", true, false);
				if (__LIB_13__::func_181(iLocal_61[0], "PL_CoverLook_01"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[0], "Internal_Loop", false, false);
					iLocal_98[2] = 1;
				}
			}
		}
	}
}

bool func_724()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[8]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[8], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[8], "FrenchArtist", iLocal_14, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[8]);
			return true;
		}
	}
	return false;
}

bool func_728()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[10]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[10], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[10], "FrenchArtist", iLocal_14, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[10]);
			return true;
		}
	}
	return false;
}

bool func_729()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[2]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[2], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[2], "FrenchArtist", iLocal_14, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[2], "NBXUpperClass", Local_225[9 /*6*/], 0);
			if (!__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[2], "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[2], "PlayerZero", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[2], "b_PlayerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[2], "JOHN", Global_35, 0);
			}
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[2]);
			return true;
		}
	}
	return false;
}

bool func_730()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[4]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[4], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[4], "FrenchArtist", iLocal_14, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[4], "PlayerZero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[4], "NBXUpperClass", Local_225[8 /*6*/], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[4]);
			return true;
		}
	}
	return false;
}

void func_731(int iParam0)
{
	int iVar0;
	if (iLocal_220 == iParam0)
	{
		return;
	}
	iLocal_220 = iParam0;
	if (!__LIB_0__::func_272(Local_225[9 /*6*/], 0))
	{
		return;
	}
	switch (iLocal_220)
	{
		case 0:
			TASK::_TASK_USE_SCENARIO_POINT(Local_225[9 /*6*/], iLocal_60, 0, 0, false, false, 0, false, -1f, false);
			break;
		case 1:
			break;
		case 2:
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_61[2], "NBXUpperClass"))
			{
				TASK::CLEAR_PED_TASKS(Local_225[9 /*6*/], true, false);
				PED::FORCE_PED_MOTION_STATE(Local_225[9 /*6*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2747.046f, -1394.771f, 45.1831f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 206.7857f, 0);
				TASK::TASK_STAND_STILL(0, 20000);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 2747.046f, -1394.771f, 45.1831f, 15f, -1, false, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[9 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 3:
			break;
	}
}

bool func_732()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[9]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[9], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[9], "FrenchArtist", iLocal_14, 0);
			if (!__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[9], "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[9], "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[9], "b_PlayerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[9], "JOHN", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[9], "Sailor_01", Local_225[10 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[9], "Sailor_02", Local_225[11 /*6*/], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[9]);
			return true;
		}
	}
	return false;
}

bool func_734()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[3]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[3], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[3], "CS_FrenchArtist", iLocal_14, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[3], "p_cs_portfolio01x", iLocal_57, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[3]);
			return true;
		}
	}
	return false;
}

void func_735(int iParam0)
{
	int iVar0;
	if (iLocal_216 == iParam0)
	{
		return;
	}
	iLocal_216 = iParam0;
	switch (iLocal_216)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_272(Local_225[0 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_14, -1, 0, 51, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2785.99f, -1342.14f, 45.24f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_14, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[0 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[0 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[1 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[1 /*6*/], true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_225[1 /*6*/], Local_225[0 /*6*/], -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_272(Local_225[2 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[2 /*6*/], true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_225[2 /*6*/], Local_225[0 /*6*/], -1, -1f, -1f, -1f);
			}
			break;
		case 2:
			if (__LIB_0__::func_272(Local_225[0 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2785.62f, -1341.71f, 45.26f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_14, 0, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[0 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[0 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[1 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2785.84f, -1342.85f, 45.21f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_225[0 /*6*/], -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[1 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[1 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[2 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 700);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2786.91f, -1341.64f, 45.21f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_225[0 /*6*/], -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[2 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[2 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 3:
			if (__LIB_0__::func_272(Local_225[0 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2823.95f, -1304.163f, 45.782f, 1f, -1, 0.25f, 0, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 2823.95f, -1304.163f, 45.782f, 2f, -1, false, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[0 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[0 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[1 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2823.95f, -1304.163f, 45.782f, 1f, -1, 5f, 0, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 2831.265f, -1305.628f, 45.7091f, 10f, -1, false, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[1 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[1 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[2 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 700);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2823.95f, -1304.163f, 45.782f, 1f, -1, 5f, 0, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 2831.265f, -1305.628f, 45.7091f, 10f, -1, false, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[2 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[2 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 4:
			if (__LIB_0__::func_272(Local_225[0 /*6*/], 0) && !__LIB_0__::func_163(Local_225[0 /*6*/], 780511057))
			{
				TASK::TASK_COMBAT_PED(Local_225[0 /*6*/], Global_35, 0, 16);
			}
			if (__LIB_0__::func_272(Local_225[1 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_14, -1, 5f, 3f, 0.5f, 0);
				TASK::TASK_COMBAT_PED(0, iLocal_14, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[1 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[2 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_14, -1, 5f, 3f, 0.5f, 0);
				TASK::TASK_COMBAT_PED(0, iLocal_14, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[2 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
	}
}

void func_737(int iParam0)
{
	int iVar0;
	if (iLocal_217 == iParam0)
	{
		return;
	}
	iLocal_217 = iParam0;
	switch (iLocal_217)
	{
		case 0:
			if (func_1182())
			{
				func_737(1);
			}
			break;
		case 1:
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_61[7], false))
			{
				__LIB_13__::func_179(iLocal_61[7], "pl_Breakout");
				if (__LIB_13__::func_180(iLocal_61[7], "pl_Breakout"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_61[7], "Internal_Loop", true, false);
					if (__LIB_13__::func_181(iLocal_61[7], "pl_Breakout"))
					{
					}
				}
			}
			break;
		case 3:
			__LIB_3__::func_319(iLocal_61[7]);
			if (__LIB_0__::func_272(Local_225[3 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 256, 1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[3 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[4 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 256, 1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[4 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[5 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 256, 1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[5 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 4:
			__LIB_3__::func_319(iLocal_61[7]);
			if (__LIB_0__::func_272(Local_225[3 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[3 /*6*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[3 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[4 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[4 /*6*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_14, -1, 5f, 3f, 0.5f, 0);
				TASK::TASK_COMBAT_PED(0, iLocal_14, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[4 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[5 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[5 /*6*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_14, -1, 5f, 3f, 0.5f, 0);
				TASK::TASK_COMBAT_PED(0, iLocal_14, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[5 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
	}
}

void func_738(int iParam0)
{
	int iVar0;
	if (iLocal_218 == iParam0)
	{
		return;
	}
	iLocal_218 = iParam0;
	switch (iLocal_218)
	{
		case 0:
			if (__LIB_0__::func_272(Local_225[6 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, Local_225[7 /*6*/], -1, 0, 51, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_225[7 /*6*/], 0, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[6 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[6 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_0__::func_272(Local_225[7 /*6*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, Local_225[6 /*6*/], -1, 0, 51, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_225[6 /*6*/], 0, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(Local_225[7 /*6*/], true, false);
				TASK::TASK_PERFORM_SEQUENCE(Local_225[7 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 1:
			if (func_1183())
			{
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_741(int iParam0)
{
	if (iLocal_219 == iParam0)
	{
		return;
	}
	iLocal_219 = iParam0;
	if (!__LIB_0__::func_272(Local_225[8 /*6*/], 0))
	{
		return;
	}
	switch (iLocal_219)
	{
		case 0:
			__LIB_1__::func_473(Local_225[8 /*6*/], joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
			break;
		case 1:
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(Local_225[8 /*6*/], true, false);
			TASK::TASK_SMART_FLEE_PED(Local_225[8 /*6*/], iLocal_14, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			break;
		case 3:
			break;
	}
}

bool func_742()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[5]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[5], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[5], "PlayerZero", Global_35, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[5]);
			return true;
		}
	}
	return false;
}

void func_743(int iParam0)
{
	if (iLocal_221 == iParam0)
	{
		return;
	}
	iLocal_221 = iParam0;
	switch (iLocal_221)
	{
		case 0:
			if (__LIB_0__::func_272(Local_225[10 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[10 /*6*/], true, false);
				__LIB_1__::func_473(Local_225[10 /*6*/], joaat("WORLD_HUMAN_LEAN_RAILING"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_MALE_B"), -1082130432 /* Float: -1f */);
			}
			if (__LIB_0__::func_272(Local_225[11 /*6*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_225[11 /*6*/], true, false);
				__LIB_1__::func_473(Local_225[11 /*6*/], joaat("WORLD_HUMAN_LEAN_RAILING"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_SMOKING_MALE_A"), -1082130432 /* Float: -1f */);
			}
			break;
		case 1:
			if (__LIB_0__::func_272(Local_225[10 /*6*/], 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_225[10 /*6*/], iLocal_14, 10000, 0, 51, 0);
			}
			if (__LIB_0__::func_272(Local_225[11 /*6*/], 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_225[11 /*6*/], iLocal_14, 10000, 0, 51, 0);
			}
			func_309(2, 0);
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_745(var uParam0)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return true;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(*uParam0))
	{
		return true;
	}
	return false;
}

void func_747(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (iLocal_222 == iParam0)
	{
		return;
	}
	iLocal_222 = iParam0;
	switch (iLocal_222)
	{
		case 0:
			iVar0 = 12;
			while (iVar0 <= 14)
			{
				if (!__LIB_0__::func_272(Local_225[iVar0 /*6*/], 0))
				{
				}
				else
				{
					if (iVar0 == 14)
					{
						__LIB_1__::func_766(Local_225[iVar0 /*6*/], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					}
					TASK::CLEAR_PED_TASKS(Local_225[iVar0 /*6*/], true, false);
					__LIB_1__::func_473(Local_225[iVar0 /*6*/], joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
				}
				iVar0++;
			}
			break;
		case 1:
			func_312(15, 0);
			break;
		case 4:
			__LIB_0__::func_325(&iLocal_18);
			__LIB_0__::func_325(&iLocal_17);
			break;
		case 5:
			iVar0 = 14;
			if (func_745(&(Local_225[iVar0 /*6*/])))
			{
				func_747(7);
			}
			else
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_225[iVar0 /*6*/], 5, true);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_225[iVar0 /*6*/], 512, true);
				PED::SET_PED_COMBAT_ABILITY(Local_225[iVar0 /*6*/], 2);
				PED::SET_PED_COMBAT_RANGE(Local_225[iVar0 /*6*/], 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_225[iVar0 /*6*/], true, 0f);
				PED::FORCE_PED_MOTION_STATE(Local_225[iVar0 /*6*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
				TASK::TASK_COMBAT_PED(Local_225[iVar0 /*6*/], Global_35, 16777216, 0);
				Jump @422; //curOff = 339
				if (iLocal_223 != 6)
				{
					iLocal_223 = 6;
				}
				func_312(2, PED::IS_PED_IN_COMBAT(iLocal_14, 0));
				Jump @422; //curOff = 363
				iVar0 = 12;
				while (iVar0 <= 14)
				{
					__LIB_0__::func_325(&(Local_225[iVar0 /*6*/].f_1));
					iVar0++;
				}
				func_312(2, PED::IS_PED_IN_COMBAT(iLocal_14, 0));
				func_309(0, 0);
			}
			default:
				break;
	}
}

bool func_748()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[0], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[0], "FrenchArtist", iLocal_14, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[0]);
			return true;
		}
	}
	return false;
}

void func_749(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (bParam0)
	{
		iVar0 = 12;
	}
	else
	{
		iVar0 = 13;
	}
	if (!__LIB_0__::func_163(Local_225[iVar0 /*6*/], 242628503))
	{
		if (!__LIB_0__::func_272(Local_225[iVar0 /*6*/], 0))
		{
			return;
		}
		if (bParam0)
		{
			PED::_0xA3A9299C4F2ADB98(Local_225[iVar0 /*6*/]);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2658.005f, -1546.25f, 45.2661f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_14, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(Local_225[12 /*6*/], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		else
		{
			PED::_0xA3A9299C4F2ADB98(Local_225[iVar0 /*6*/]);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2657.099f, -1541.462f, 45.2806f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_14, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(Local_225[13 /*6*/], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

void func_750(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 12;
	}
	else
	{
		iVar0 = 13;
	}
	if (!__LIB_0__::func_163(Local_225[iVar0 /*6*/], 780511057))
	{
		if (!__LIB_0__::func_272(Local_225[iVar0 /*6*/], 0))
		{
			return;
		}
		if (!MAP::DOES_BLIP_EXIST(Local_225[iVar0 /*6*/].f_1))
		{
			Local_225[iVar0 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_225[iVar0 /*6*/]);
			MAP::_BLIP_SET_MODIFIER(Local_225[iVar0 /*6*/].f_1, 231194138);
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_225[iVar0 /*6*/], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_225[iVar0 /*6*/], 4, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_225[iVar0 /*6*/], 10, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_225[iVar0 /*6*/], 512, true);
		PED::SET_PED_COMBAT_ABILITY(Local_225[iVar0 /*6*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_225[iVar0 /*6*/], 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_225[iVar0 /*6*/], true, 0f);
		PED::FORCE_PED_MOTION_STATE(Local_225[iVar0 /*6*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
		TASK::TASK_COMBAT_PED(Local_225[iVar0 /*6*/], Global_35, 16777216, 0);
		if (!__LIB_0__::func_75(&uLocal_442))
		{
			__LIB_1__::func_148(&uLocal_442);
		}
	}
}

void func_751()
{
	if (!func_745(&(Local_225[12 /*6*/])) && !func_745(&(Local_225[13 /*6*/])))
	{
		if (((!PED::IS_PED_PERFORMING_MELEE_ACTION(Local_225[12 /*6*/], 1, 0) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Local_225[13 /*6*/], 1, 0)) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0)) && !PED::IS_PED_SHOOTING(Global_35))
		{
			if (!__LIB_0__::func_75(&uLocal_436))
			{
				__LIB_1__::func_148(&uLocal_436);
			}
			else if (__LIB_0__::func_265(&uLocal_436) > 15f)
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_225[12 /*6*/], iLocal_14, 2f, 2f, 2f, false, true, 0))
				{
					if (!__LIB_0__::func_163(Local_225[12 /*6*/], 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[12 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 3f, 20000, 0.25f, 0, 40000f);
					}
				}
				else
				{
					__LIB_1__::func_864(iLocal_14, 0, 0);
					__LIB_0__::func_37(&uLocal_436);
				}
				if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_225[13 /*6*/], iLocal_14, 2f, 2f, 2f, false, true, 0))
				{
					if (!__LIB_0__::func_163(Local_225[13 /*6*/], 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_225[13 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 3f, 20000, 0.25f, 0, 40000f);
					}
				}
				else
				{
					__LIB_1__::func_864(iLocal_14, 0, 0);
					__LIB_0__::func_37(&uLocal_436);
				}
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_436);
		}
	}
}

void func_752()
{
	int iVar0;
	iVar0 = 12;
	while (iVar0 <= 14)
	{
		if (!__LIB_0__::func_272(Local_225[iVar0 /*6*/], 0))
		{
			return;
		}
		if (!MAP::DOES_BLIP_EXIST(Local_225[iVar0 /*6*/].f_1))
		{
			Local_225[iVar0 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_225[iVar0 /*6*/]);
		}
		if (!__LIB_0__::func_163(Local_225[iVar0 /*6*/], 780511057))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_225[iVar0 /*6*/], 5, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_225[iVar0 /*6*/], 512, true);
			PED::SET_PED_COMBAT_ABILITY(Local_225[iVar0 /*6*/], 2);
			PED::SET_PED_COMBAT_RANGE(Local_225[iVar0 /*6*/], 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_225[iVar0 /*6*/], true, 0f);
			TASK::TASK_COMBAT_PED(Local_225[iVar0 /*6*/], Global_35, 16777216, 0);
		}
		iVar0++;
	}
}

char* func_755(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FMA5_O_DOCK";
		case 8:
			return "FMA5_O_FIGHT";
	}
	return "";
}

bool func_793(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_793(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						func_1226(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						func_1227(2);
					}
					else
					{
						func_1226(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						func_1227(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					func_1226(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					func_1227(2);
				}
				else
				{
					func_1226(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					func_1227(1);
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
		__LIB_13__::func_10(28);
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
			func_1250(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			func_1251(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			func_1252(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_1253(iParam0);
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
			func_1255(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1257(iParam0, 0, 0, 0);
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
						func_793(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_793(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_793(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_793(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_793(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_793(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_793(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_10(24);
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
					func_793(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_793(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_135(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_164(iParam0);
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
				func_793(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_795()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1295();
	func_1296();
	func_1297();
	func_1298();
	func_1299();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_796(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1302(iParam0, 1, 1, -142743235, 1);
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

void func_829()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1324(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_922(var uParam0, int iParam1, int iParam2)
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
		return func_922(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

char* func_1021(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@fma@ig@rc6_ig10_gang_search_for_artist@ig10_gang_search_for_artist";
		case 1:
			return "script@rcm@fma@ig@rc6_ig7_check_out_prostitute@ig7_check_out_prostitute";
		case 2:
			return "script@rcm@fma@ig@rc6_ig5@rc6_ig5";
		case 3:
			return "script@rcm@fma@leadin@rc7@leadin";
		case 4:
			return "script@rcm@fma@ig@rc6_ig6@rc6_ig6";
		case 5:
			return "script@rcm@fma@ig@rc6_ig6@rc6_ig6";
		case 6:
			return "script@rcm@fma@leadin@rc6@callover";
		case 7:
			return "script@rcm@fma@ig@rc6_ig3@rc6_ig3";
		case 8:
			return "script@rcm@fma@ig@rc6_ig4@rc6_ig4";
		case 9:
			return "script@rcm@fma@ig@rc6_ig8@rc6_ig8";
		case 10:
			return "script@rcm@fma@ig@rc6_ig2@rc6_ig2";
	}
	return "";
}

void func_1064(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_14, Global_35) < 8f)
	{
		if (__LIB_0__::func_75(&uLocal_439) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_439) > MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 8f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "RFMA_4_MUTTER", 0))
					{
						__LIB_1__::func_148(&uLocal_439);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_439);
		}
	}
}

void func_1103(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1519();
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

void func_1105(var uParam0)
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
			func_1527(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1527(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1106(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1527(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1182()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[7]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[7], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[7], "UNINewBordeaux", Local_225[3 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[7], "UNINewBordeaux^1", Local_225[4 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[7], "UNINewBordeaux^2", Local_225[5 /*6*/], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[7]);
			return true;
		}
	}
	return false;
}

bool func_1183()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_61[1]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_61[1], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[1], "man", Local_225[6 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[1], "WOMAN", Local_225[7 /*6*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_61[1], "hat", iLocal_59, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_61[1]);
			return true;
		}
	}
	return false;
}

void func_1226(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			Jump @913; //curOff = 344
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
			Jump @913; //curOff = 560
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
			Jump @913; //curOff = 676
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
			Jump @913; //curOff = 827
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
			sVar2 = __LIB_1__::func_801(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
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
			if (__LIB_1__::func_802(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
			{
			}
			if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
			{
			}
			if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
			{
			}
		}
void func_1227(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_1226(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_1226(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_1226(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_1226(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_1226(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_1226(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_1226(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_1226(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_1251(int iParam0)
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
	func_1226(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_10__::func_706(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_1252(int iParam0)
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
	func_1226(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_10__::func_706(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_1253(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_1226(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1255(int iParam0, int iParam1)
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1257(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1687(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1688(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1295()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1715(0);
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
	func_1715(1);
}

void func_1296()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_793(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1297()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1718(0);
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
	func_1718(1);
}

void func_1298()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1718(0);
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
	func_1718(1);
}

void func_1299()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_793(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_793(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1302(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1302(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1302(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1302(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1726(iParam0, iParam1);
	return 1;
}

int func_1324(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1750(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_793(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1519()
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
	iVar0 = func_1842(6291456, 0);
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

void func_1527(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1527(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1527(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1687(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_1__::func_804(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_1226(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1688(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_1__::func_804(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_1226(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_1226(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_1715(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_793(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1956(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_796(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1302(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1962(Var0);
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
				iVar10 = func_1971(iVar8);
				func_1972(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1718(bool bParam0)
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
		func_793(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_793(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1302(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1302(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1302(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
				iVar4 = func_1971(iVar2);
				func_1972(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_1726(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_1978(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1257(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1750(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1750(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1750(iVar63, -915411861, 1, 0, 0));
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

int func_1842(int iParam0, int iParam1)
{
	var uVar0;
	return func_2009(&uVar0, iParam0, iParam1);
}

void func_1956(int iParam0)
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
	func_1302(iParam0, 1, 1, -142743235, 1);
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
		func_1302(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1962(struct<6> Param0)
{
	if (!func_2082(Param0.f_4, 1))
	{
	}
	if (!func_2082(Param0, 1))
	{
	}
	if (!func_2082(Param0.f_2, 1))
	{
	}
	if (!func_2082(Param0.f_5, 1))
	{
	}
	if (!func_2082(Param0.f_3, 1))
	{
	}
	if (!func_2082(Param0.f_1, 1))
	{
	}
}

int func_1971(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("HORSE_BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
			return joaat("HORSE_DONKEY");
			return joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
			return joaat("HORSE_BREED_ARABIAN_GREY");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
			return joaat("HORSE_BREED_MUSTANG_GOLDENDUN");
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
			return -41062704;
			return 887669186;
			return 2102774612;
			return -2011111190;
			return -535752499;
			return 0;
		}
int func_1972(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!__LIB_1__::func_792(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_1978(int iParam0, int iParam1)
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_1226(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_2009(var uParam0, int iParam1, int iParam2)
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
		return func_2009(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2082(int iParam0, int iParam1)
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
				if (func_2082(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2082(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2082(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2082(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

