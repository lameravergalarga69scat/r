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
	int iLocal_16[2] = { 0, 0 };
	int iLocal_19[3] = { 0, 0, 0 };
	int iLocal_23[3] = { 0, 0, 0 };
	int iLocal_27[3] = { 0, 0, 0 };
	int iLocal_31[3] = { 0, 0, 0 };
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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[3] = { 0, 0, 0 };
	int iLocal_53[3] = { 0, 0, 0 };
	int iLocal_57[3] = { 0, 0, 0 };
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83[3] = { 0, 0, 0 };
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89[3] = { 0, 0, 0 };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[3] = { 0, 0, 0 };
	int iLocal_101[6] = { 0, 0, 0, 0, 0, 0 };
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
	vector3 vLocal_164[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	int iLocal_176[3] = { 0, 0, 0 };
	int iLocal_180 = 0;
	vector3 vLocal_181[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_191[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_201[3] = { 0f, 0f, 0f };
	int iLocal_205[4] = { 0, 0, 0, 0 };
	bool bLocal_210 = false;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	bool bLocal_213 = false;
	bool bLocal_214 = false;
	bool bLocal_215 = false;
	int iLocal_216 = 0;
	bool bLocal_217 = false;
	bool bLocal_218 = false;
	bool bLocal_219 = false;
	vector3 vLocal_220 = { 0f, 0f, 0f };
	float fLocal_223 = 0f;
	vector3 vLocal_224 = { 0f, 0f, 0f };
	float fLocal_227 = 0f;
	float fLocal_228 = 0f;
	int iLocal_229 = 0;
	int iLocal_230[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_241 = 0;
	int iLocal_242[4] = { 0, 0, 0, 0 };
	int iLocal_247 = 0;
	int iLocal_248[4] = { 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	bool bLocal_255 = false;
	bool bLocal_256 = false;
	vector3 vLocal_257 = { 0f, 0f, 0f };
	bool bLocal_260 = false;
	int iLocal_261[4] = { 0, 0, 0, 0 };
	int iLocal_266 = 0;
	bool bLocal_267 = false;
	bool bLocal_268 = false;
	bool bLocal_269 = false;
	vector3 vLocal_270 = { 0f, 0f, 0f };
	vector3 vLocal_273 = { 0f, 0f, 0f };
	vector3 vLocal_276 = { 0f, 0f, 0f };
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	float fLocal_281 = 0f;
	bool bLocal_282 = false;
	char* sLocal_283 = NULL;
	vector3 vLocal_284 = { 0f, 0f, 0f };
	float fLocal_287 = 0f;
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	char* sLocal_294 = NULL;
	char* sLocal_295 = NULL;
	char* sLocal_296 = NULL;
	char* sLocal_297 = NULL;
	char* sLocal_298 = NULL;
	float fLocal_299 = 0f;
	vector3 vLocal_300 = { 0f, 0f, 0f };
	vector3 vLocal_303[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_316 = { 0f, 0f, 0f };
	vector3 vLocal_319 = { 0f, 0f, 0f };
	bool bLocal_322 = false;
	bool bLocal_323 = false;
	bool bLocal_324 = false;
	vector3 vLocal_325 = { 0f, 0f, 0f };
	float fLocal_328 = 0f;
	int iLocal_329 = 0;
	vector3 vLocal_330 = { 0f, 0f, 0f };
	float fLocal_333 = 0f;
	int iLocal_334 = 0;
	bool bLocal_335 = false;
	int iLocal_336 = 0;
	float fLocal_337 = 0f;
	bool bLocal_338 = false;
	bool bLocal_339 = false;
	int iLocal_340 = 0;
	bool bLocal_341 = false;
	bool bLocal_342 = false;
	char* sLocal_343[3] = { NULL, NULL, NULL };
	char* sLocal_347 = NULL;
	char* sLocal_348[3] = { NULL, NULL, NULL };
	int iLocal_352[3] = { 0, 0, 0 };
	int iLocal_356[3] = { 0, 0, 0 };
	int iLocal_360[3] = { 0, 0, 0 };
	int iLocal_364 = 0;
	bool bLocal_365 = false;
	vector3 vLocal_366[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_376[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_386 = 0;
	bool bLocal_387 = false;
	bool bLocal_388 = false;
	bool bLocal_389 = false;
	int iLocal_390 = 0;
	char* sLocal_391 = NULL;
	char* sLocal_392 = NULL;
	bool bLocal_393 = false;
	int iLocal_394 = 0;
	char* sLocal_395 = NULL;
	int iLocal_396 = 0;
	char* sLocal_397 = NULL;
	bool bLocal_398 = false;
	bool bLocal_399 = false;
	int iLocal_400 = 0;
	char* sLocal_401 = NULL;
	bool bLocal_402 = false;
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	char* sLocal_409 = NULL;
	char* sLocal_410 = NULL;
	char* sLocal_411 = NULL;
	char* sLocal_412 = NULL;
	bool bLocal_413 = false;
	vector3 vLocal_414 = { 0f, 0f, 0f };
	float fLocal_417 = 0f;
	int iLocal_418 = 0;
	bool bLocal_419 = false;
	char* sLocal_420 = NULL;
	int iLocal_421 = 0;
	bool bLocal_422 = false;
	char* sLocal_423 = NULL;
	bool bLocal_424 = false;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	bool bLocal_427 = false;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
	bool bLocal_432 = false;
	int iLocal_433 = 0;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	int iLocal_436 = 0;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_425 = -1;
	iLocal_436 = -1;
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
				__LIB_13__::func_52(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
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
		__LIB_18__::func_620(uParam0, __LIB_0__::func_58(uParam0));
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
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
	int iVar0;
	iLocal_77 = joaat("W_ELECTRICFIELDDETECTOR01");
	iLocal_78 = joaat("P_ELECTRICFIELDDETECTOR01X");
	fLocal_175 = 0.1f;
	vLocal_181[0 /*3*/] = { 2453.658f, 2340.147f, 196.424f };
	vLocal_181[1 /*3*/] = { 2382.352f, 2426.578f, 251.4852f };
	vLocal_181[2 /*3*/] = { 2459.265f, 2398.581f, 253.1783f };
	vLocal_191[0 /*3*/] = { 2453.544f, 2335.115f, 195.5424f };
	vLocal_191[1 /*3*/] = { 2388.487f, 2410.763f, 246.1558f };
	vLocal_191[2 /*3*/] = { 2456.173f, 2408.946f, 255.5194f };
	fLocal_201[0] = 40f;
	fLocal_201[1] = 46f;
	fLocal_201[2] = 30f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		vLocal_181[iVar0 /*3*/].f_2 = (vLocal_181[iVar0 /*3*/].f_2 + 0.5f);
		iVar0++;
	}
	vLocal_220 = { 2515.64f, 2285.43f, 176.1f };
	fLocal_223 = 166.2186f;
	vLocal_224 = { 2523.41f, 2286.079f, 176.3515f };
	fLocal_227 = 355.4446f;
	vLocal_257 = { 2529.959f, 2468.233f, 254.7756f };
	iLocal_79 = joaat("P_CONDUCTRODTELE01X");
	iLocal_82 = joaat("P_CS_TREESTANDING01X");
	vLocal_273 = { 2523.18f, 2302.4f, 192.73f };
	vLocal_276 = { 2521.238f, 2302.156f, 176.9596f };
	sLocal_283 = "ai_react@shellshock@unarmed";
	iLocal_80 = joaat("P_DOV_LAB_GENERATOR01");
	iLocal_81 = joaat("P_DOV_LAB_GENERATOR02");
	vLocal_288 = { 2512.7f, 2285.02f, 178.26f };
	vLocal_291 = { 2513.86f, 2289.64f, 177.86f };
	sLocal_294 = "s_set_pieces";
	sLocal_295 = "p_dov_lab_generator01";
	sLocal_296 = "p_dov_lab_generator02";
	sLocal_297 = "s_lev_des_mission";
	sLocal_298 = "p_electricfielddetector01x";
	sLocal_391 = "script@rcm@ckpt@ig@ig_1_placeconductor@ig_1_placeconductor";
	sLocal_395 = "script@rcm@ckpt@leadin@s2@mcs1@leadin_idle";
	sLocal_409 = "script@rcm@ckpt@ig@ig_4_switches@ig_4_switches";
	sLocal_397 = "script@rcm@ckpt@leadout@s2@ext@leadout";
	sLocal_401 = "script@rcm@ckpt@ig@ig_robot_loop@ig_robot_loop";
	sLocal_420 = "script@rcm@ckpt@ig@ig_5_lightning@ig_5_lighting";
	sLocal_423 = "script@rcm@ckpt@ig@ig_5_towerreact@ig_5_towerreact";
	vLocal_300 = { 2516.09f, 2289.97f, 176.35f };
	vLocal_303[0 /*3*/] = { 2522.87f, 2301.27f, 197.03f };
	vLocal_303[1 /*3*/] = { 2521.33f, 2300.77f, 197.43f };
	vLocal_303[2 /*3*/] = { 2520.35f, 2302.43f, 197.33f };
	vLocal_303[3 /*3*/] = { 2522.7f, 2303.44f, 196.79f };
	vLocal_316 = { 2515.85f, 2285.24f, 190.5f };
	vLocal_325 = { 2457.604f, 2393.232f, 252.0136f };
	fLocal_328 = 100f;
	vLocal_330 = { 2517.456f, 2292.232f, 175.5539f };
	fLocal_333 = 51.7301f;
	vLocal_270 = { 2467.49f, 2400.69f, 253.2f };
	vLocal_414 = { 2523.045f, 2303.086f, 192.7356f };
	fLocal_417 = 80.3732f;
	iLocal_334 = AUDIO::GET_SOUND_ID();
	iLocal_433 = AUDIO::GET_SOUND_ID();
	__LIB_12__::func_658(uParam0, 5);
	__LIB_12__::func_659(uParam0, 5);
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CRACKPOT_A");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CRACKPOT_B");
	iLocal_229 = AUDIO::GET_SOUND_ID();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_230[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_242[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_248[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	iLocal_72 = VOLUME::_CREATE_VOLUME_BOX(2515.784f, 2285.247f, 178.5215f, 0f, 0f, 162.7959f, 17.67798f, 8.769043f, 4.339996f);
	__LIB_12__::func_656(uParam0, 18f);
	__LIB_12__::func_657(uParam0, 22f);
	if (!__LIB_1__::func_565(&uLocal_162))
	{
		__LIB_3__::func_414(&uLocal_162, vLocal_181[0 /*3*/], 10f, 1, 37, 0);
	}
	if (!__LIB_1__::func_565(&uLocal_163))
	{
		__LIB_3__::func_414(&uLocal_163, vLocal_181[1 /*3*/], 10f, 1, 37, 0);
	}
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, joaat("CS_CRACKPOTROBOT"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_WOLF"), 7);
	__LIB_12__::func_867(uParam0, joaat("S_MEATBIT_RIB_LARGE01X"), 7);
	__LIB_12__::func_867(uParam0, iLocal_79, 7);
	__LIB_12__::func_867(uParam0, iLocal_77, 7);
	__LIB_12__::func_867(uParam0, iLocal_78, 7);
	__LIB_12__::func_867(uParam0, iLocal_80, 7);
	__LIB_12__::func_867(uParam0, iLocal_81, 7);
	__LIB_12__::func_867(uParam0, joaat("P_DOOR_DOV_LAB_R_01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_DOOR_DOV_LAB_L_01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_DOOR11X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_INVENTORCAGE_DOOR01X"), 7);
	__LIB_12__::func_867(uParam0, iLocal_82, 7);
	__LIB_12__::func_867(uParam0, joaat("P_CRACKPOTMICROPHONE01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("S_CS_CLOTHFORROBOT01X"), 7);
	__LIB_13__::func_55(uParam0, sLocal_283, 7);
	__LIB_13__::func_55(uParam0, sLocal_294, 7);
	__LIB_13__::func_55(uParam0, sLocal_297, 7);
	__LIB_12__::func_908(uParam0, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_KIT_DETECTOR"), -1, 0);
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
			Var1 = { 2519.316f, 2285.651f, 176.3515f };
			Var1.f_3 = 30f;
			break;
		case 1:
			Var1 = { 2452.801f, 2354.411f, 200.6364f };
			Var1.f_3 = 229.1791f;
			break;
		case 2:
			Var1 = { 2522.684f, 2304.058f, 192.7357f };
			Var1.f_3 = 232.2967f;
			break;
		case 3:
			Var1 = { 2519.316f, 2285.651f, 176.3515f };
			Var1.f_3 = 30f;
			break;
		case 4:
			Var1 = { 2519.316f, 2285.651f, 176.3515f };
			Var1.f_3 = 30f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_205(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	int iVar0;
	if (iLocal_439 < 7)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_14))
		{
			StringCopy(&(uParam0->f_2578), "CKPT_5_FAIL03", 24);
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_19[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_19[iVar0], Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "CKPT_5_FAIL01", 24);
				return true;
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		if ((FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_15, true, false), 3f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_15, true, false), 3f, true)) || ENTITY::IS_ENTITY_DEAD(iLocal_15))
		{
			StringCopy(&(uParam0->f_2578), "CKPT_5_FAIL02", 24);
			return true;
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), Global_1347702[uParam0->f_174 /*49*/].f_24) > 300f)
	{
		if (!bLocal_437)
		{
			__LIB_12__::func_883(uParam0, "CKPT_5_DISTWARN", 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_437 = true;
		}
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), Global_1347702[uParam0->f_174 /*49*/].f_24) > 350f)
		{
			StringCopy(&(uParam0->f_2578), "CKPT_5_FAIL04", 24);
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
	if (func_208(uParam0->f_174))
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
	if (func_217(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_222(uParam0);
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
			func_237(uParam0);
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
	return iLocal_440;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_262(uParam0))
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
	__LIB_13__::func_33(uParam0, 0);
	StringCopy(&(uParam0->f_2575), "RCKPT_S2_INT", 24);
	if (__LIB_0__::func_181() && __LIB_3__::func_736(53, 1))
	{
		__LIB_12__::func_676(&(uParam0->f_206), "2-JohnIntro");
		StringCopy(&(uParam0->f_206.f_358), "2-JohnIntro", 64);
	}
	else
	{
		__LIB_12__::func_676(&(uParam0->f_206), "1-Standard");
		StringCopy(&(uParam0->f_206.f_358), "1-Standard", 64);
	}
	__LIB_12__::func_981(uParam0, 40828);
	__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
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
		__LIB_18__::func_620(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_287(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	func_289(uParam0);
	return 5;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	func_291();
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				func_87(uParam0);
				func_289(uParam0);
				return 5;
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_330, fLocal_333, true, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
				func_293(uParam0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!__LIB_1__::func_707(joaat("WEAPON_KIT_DETECTOR"), 1, 0))
			{
				func_296(joaat("WEAPON_KIT_DETECTOR"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			bLocal_260 = true;
			bLocal_424 = true;
			iLocal_451 = 4;
			func_297();
			iLocal_176[0] = 1;
			iLocal_176[1] = 1;
			iLocal_176[2] = 1;
			iLocal_439 = 2;
			iLocal_440 = 2;
			func_293(uParam0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(2.8222f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-22.9818f, 1f);
			__LIB_13__::func_105(0, 1);
			return 7;
		case 2:
			iLocal_451 = 4;
			__LIB_13__::func_89(uParam0, "CKPT_5_OBJ6B", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_65))
			{
				iLocal_65 = __LIB_4__::func_983(408396114, vLocal_273, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_65, "CKPT_BL_SA");
				bLocal_429 = true;
			}
			func_297();
			iLocal_176[0] = 1;
			iLocal_176[1] = 1;
			iLocal_176[2] = 1;
			iLocal_439 = 6;
			iLocal_440 = 11;
			func_300(uParam0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 3:
			bLocal_260 = true;
			func_297();
			iLocal_176[0] = 1;
			iLocal_176[1] = 1;
			iLocal_176[2] = 1;
			iLocal_439 = 7;
			iLocal_440 = 14;
			if (!__LIB_0__::func_724(-334843445))
			{
				__LIB_0__::func_68(-334843445, 0, 0);
			}
			func_300(uParam0);
			func_303(uParam0);
			__LIB_13__::func_105(0, 0);
			return 5;
		case 4:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_330, fLocal_333, true, false, true);
			bLocal_260 = true;
			iLocal_176[0] = 1;
			iLocal_176[1] = 1;
			iLocal_176[2] = 1;
			__LIB_13__::func_105(1, 1);
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
						func_87(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_18__::func_620(uParam0, 0);
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
	return func_316(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_330, fLocal_333, true, false, true);
			PED::_0x2208438012482A1A(Global_35, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_12__::func_718(&(uParam0->f_206), func_321(joaat("P_DOOR_DOV_LAB_R_01X")));
			__LIB_12__::func_718(&(uParam0->f_206), func_321(joaat("P_DOOR_DOV_LAB_L_01X")));
			__LIB_12__::func_718(&(uParam0->f_206), func_321(joaat("P_DOOR11X")));
			func_293(uParam0);
			func_323(1);
			func_324();
			return 7;
		case 1:
			func_300(uParam0);
			func_323(1);
			func_324();
			return 7;
		case 2:
			__LIB_12__::func_718(&(uParam0->f_206), iLocal_43);
			__LIB_12__::func_718(&(uParam0->f_206), iLocal_42);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_43);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_42);
			__LIB_1__::func_206(vLocal_300, 3f, 0);
			__LIB_13__::func_33(uParam0, -1);
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			func_326();
			func_327();
			return 8;
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
	char* sVar0;
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	func_330();
	func_331();
	func_332();
	func_333();
	func_334(0);
	func_335();
	func_336();
	__LIB_9__::func_827(4, 0, 0, 0);
	func_338();
	func_339(uParam0);
	func_340();
	func_341(uParam0);
	func_342();
	func_343();
	func_344();
	func_324();
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_76))
	{
		iLocal_76 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2513.361f, 2299.092f, 175.557f, 0f, 0f, 0f, 300f, 300f, 200f, "volHerbSuppress");
		__LIB_3__::func_241(iLocal_76, 1);
	}
	switch (iLocal_439)
	{
		case 0:
			func_291();
			if (!__LIB_1__::func_707(joaat("WEAPON_KIT_DETECTOR"), 1, 0))
			{
				func_296(joaat("WEAPON_KIT_DETECTOR"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_DETECTOR"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_DETECTOR"), true, 0, false, false);
			}
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_DETECTOR"))
			{
				func_347();
			}
			__LIB_0__::func_105(1);
			__LIB_0__::func_568(Global_36, 200f, 0);
			func_350();
			iLocal_66 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_72);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_66, "CKPT_BL_L");
			MAP::_BLIP_SET_MODIFIER(iLocal_66, -1186550032);
			iLocal_67 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_325, fLocal_328);
			MAP::SET_BLIP_SPRITE(iLocal_67, joaat("BLIP_RADIUS_SEARCH"), true);
			MAP::_BLIP_SET_MODIFIER(iLocal_67, -1186550032);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_43);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_42);
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			iLocal_439 = 1;
			iLocal_440 = 1;
			break;
		case 1:
			func_296(joaat("PROVISION_LIGHTNING_CONDUCTOR"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
			iLocal_329 = 3;
			iLocal_180 = 3;
			func_351(uParam0);
			__LIB_13__::func_89(uParam0, "CKPT_5_OBJ1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_439 = 2;
			iLocal_440 = 2;
			break;
		case 2:
			func_352();
			if (!bLocal_260)
			{
				if (__LIB_12__::func_876(uParam0, "CKPT5_1", 0))
				{
					bLocal_260 = true;
				}
			}
			else if ((((((iLocal_340 == 0 && !MAP::DOES_BLIP_EXIST(iLocal_57[iLocal_340])) && !MAP::DOES_BLIP_EXIST(iLocal_53[iLocal_340])) && !bLocal_424) && !bLocal_432) && !bLocal_431) && !__LIB_6__::func_904())
			{
				__LIB_12__::func_883(uParam0, "CKPT_5_OBJZ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_432 = true;
			}
			func_351(uParam0);
			if (func_355())
			{
				__LIB_0__::func_325(&iLocal_67);
				func_357();
				func_358();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_64))
					{
						iLocal_64 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_14);
						MAP::_BLIP_SET_MODIFIER(iLocal_64, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "CKPT1_BL_I");
						if (!bLocal_219)
						{
							__LIB_1__::func_281(&uLocal_87, 1, 1);
							bLocal_219 = true;
						}
					}
				}
				if (!bLocal_211)
				{
					if ((PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_RAGDOLL(Global_35)) && !TASK::IS_PED_GETTING_UP(Global_35))
					{
						iLocal_451 = 4;
						bLocal_413 = false;
						__LIB_13__::func_89(uParam0, "CKPT_5_OBJ2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
						bLocal_211 = true;
					}
				}
				else if (!__LIB_6__::func_903("CKPT2_CON3") && !__LIB_8__::func_684("CKPT2_CON3"))
				{
					if (!bLocal_212)
					{
						__LIB_12__::func_883(uParam0, "CKPT_5_OBJ2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						bLocal_212 = true;
					}
				}
				if (!bLocal_430)
				{
					if (BUILTIN::VDIST(vLocal_300, Global_36) < 4f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_DETECTOR"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
						bLocal_430 = true;
					}
				}
				if (((func_362(Global_36) || func_363()) && !__LIB_0__::func_71(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					func_365();
					__LIB_0__::func_325(&iLocal_64);
					__LIB_1__::func_281(&uLocal_87, 1, 1);
					__LIB_1__::func_281(&uLocal_88, 1, 1);
					iLocal_439 = 5;
					iLocal_440 = 10;
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_394))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_394);
					}
					bLocal_393 = false;
					bLocal_413 = false;
					func_366();
					func_367(uParam0);
					__LIB_1__::func_281(&iLocal_96, 1, 1);
					return 5;
				}
				if (!iLocal_205[3])
				{
					if (BUILTIN::VDIST(vLocal_300, Global_36) < 100f)
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "CKPT2_CWAY4", 0))
							{
								iLocal_205[3] = 1;
							}
						}
					}
				}
			}
			else
			{
				if (!bLocal_428)
				{
					if (!__LIB_0__::func_104())
					{
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_DETECTOR"))
						{
							__LIB_0__::func_45("CKPT_DET_HLP", 10000, 0, 0, 0, 1);
							bLocal_428 = true;
						}
						else
						{
							bLocal_428 = false;
						}
					}
				}
				if (func_362(Global_36))
				{
					if (fLocal_175 >= (3f / 2f))
					{
						if (!bLocal_269)
						{
							if (__LIB_12__::func_876(uParam0, "CKPT2_RET1", 0))
							{
								bLocal_269 = true;
							}
						}
					}
					else if (fLocal_175 >= (3f / 3f))
					{
						if (!bLocal_268)
						{
							if (__LIB_12__::func_876(uParam0, "CKPT2_RET2", 0))
							{
								bLocal_268 = true;
							}
						}
					}
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_64))
				{
					MAP::REMOVE_BLIP(&iLocal_64);
				}
				if (!bLocal_210)
				{
					if (!__LIB_0__::func_75(&uLocal_126))
					{
						if (!__LIB_6__::func_904())
						{
							__LIB_1__::func_148(&uLocal_126);
						}
					}
					else if (BUILTIN::VDIST(Global_36, vLocal_325) < fLocal_328 || __LIB_5__::func_352("CKPT_5_OBJ1"))
					{
						bLocal_210 = true;
					}
					else if (__LIB_0__::func_265(&uLocal_126) > 30f)
					{
						bLocal_210 = true;
					}
				}
				if (!__LIB_6__::func_904() || (__LIB_6__::func_903("CKPT5_1") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("CKPT5_1") > 1))
				{
					if (!bLocal_215)
					{
						if (!__LIB_0__::func_75(&uLocal_111))
						{
							__LIB_1__::func_148(&uLocal_111);
						}
						else if (__LIB_0__::func_265(&uLocal_111) > 0f)
						{
							if (!bLocal_214)
							{
								__LIB_0__::func_45("CKPT_5_HELP1", 10000, 0, 0, 0, 1);
								bLocal_214 = true;
							}
							else if (!__LIB_0__::func_104() && __LIB_0__::func_265(&uLocal_111) > 4f)
							{
								__LIB_0__::func_45("CKPT_5_HELP2", 10000, 0, 0, 0, 1);
								bLocal_215 = true;
								__LIB_0__::func_37(&uLocal_111);
							}
						}
					}
				}
			}
			break;
		case 5:
			func_352();
			if (!bLocal_324)
			{
				if (!__LIB_0__::func_75(&uLocal_129))
				{
					if (!__LIB_6__::func_904())
					{
						__LIB_13__::func_89(uParam0, "CKPT_5_OBJ6", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_148(&uLocal_129);
					}
				}
				else if ((func_372(Global_35) || func_373(Global_35)) || __LIB_5__::func_352("CKPT_5_OBJ6"))
				{
					bLocal_324 = true;
				}
				else if (__LIB_0__::func_265(&uLocal_129) > 0f)
				{
					__LIB_12__::func_883(uParam0, "CKPT_5_OBJ6", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_324 = true;
				}
			}
			if (func_372(Global_35) || (BUILTIN::VDIST(Global_36, vLocal_276) < 3f && PED::_IS_PED_CLIMBING_LADDER(Global_35)))
			{
				if (!bLocal_429)
				{
					__LIB_0__::func_325(&iLocal_65);
					iLocal_65 = __LIB_4__::func_983(408396114, vLocal_273, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_65, "CKPT_BL_SA");
					__LIB_13__::func_89(uParam0, "CKPT_5_OBJ6B", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_429 = true;
				}
				if (__LIB_0__::func_181())
				{
					sVar0 = "CKPT2_CLMB_J";
				}
				else
				{
					sVar0 = "CKPT2_CLMB_A";
				}
				__LIB_12__::func_876(uParam0, sVar0, 0);
				iLocal_439 = 6;
				iLocal_440 = 11;
			}
			else if (!MAP::DOES_BLIP_EXIST(iLocal_65))
			{
				iLocal_65 = __LIB_4__::func_983(408396114, vLocal_276, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_65, "CKPT_BL_T");
			}
			break;
		case 6:
			func_352();
			if (!bLocal_322)
			{
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				bLocal_322 = true;
			}
			if (iLocal_442 == 15)
			{
				__LIB_0__::func_325(&iLocal_65);
				if (!MAP::DOES_BLIP_EXIST(iLocal_64))
				{
					iLocal_64 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_14);
					MAP::_BLIP_SET_MODIFIER(iLocal_64, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "CKPT1_BL_I");
				}
				if (__LIB_12__::func_876(uParam0, "CKPT2_CON4", 0))
				{
					__LIB_13__::func_89(uParam0, "CKPT_5_OBJ2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_439 = 7;
					iLocal_440 = 14;
				}
			}
			else if (!__LIB_0__::func_270())
			{
				if (!bLocal_365)
				{
					if (func_373(Global_35))
					{
						if (__LIB_0__::func_181())
						{
							sVar0 = "CKPT2_TOW2_J";
						}
						else
						{
							sVar0 = "CKPT2_TOW2";
						}
						if (__LIB_12__::func_876(uParam0, sVar0, 0))
						{
							bLocal_365 = true;
						}
					}
				}
			}
			break;
		case 7:
			func_375();
			func_352();
			func_376();
			if (!__LIB_6__::func_903("CKPT2_CON4") && !__LIB_8__::func_684("CKPT2_CON4"))
			{
				if (!bLocal_213)
				{
					__LIB_12__::func_883(uParam0, "CKPT_5_OBJ2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_213 = true;
				}
			}
			if ((((func_362(Global_36) || func_363()) && !PED::IS_PED_RAGDOLL(Global_35)) && !__LIB_0__::func_71(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				__LIB_0__::func_325(&iLocal_66);
				__LIB_1__::func_281(&uLocal_87, 1, 1);
				__LIB_1__::func_281(&uLocal_88, 1, 1);
				iLocal_439 = 8;
				iLocal_440 = 15;
				__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
				if (__LIB_6__::func_904())
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_394))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_394);
				}
				bLocal_393 = false;
				bLocal_413 = false;
				func_366();
				if (__LIB_1__::func_707(joaat("WEAPON_KIT_DETECTOR"), 1, 0))
				{
					func_377(joaat("WEAPON_KIT_DETECTOR"), 1, 0, -142743235, 0);
				}
				func_303(uParam0);
				return 5;
			}
			break;
		case 8:
			return 8;
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
	__LIB_12__::func_935(iParam0, 0, iParam3);
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
		func_411(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	func_331();
	func_333();
	if (__LIB_13__::func_109(iLocal_14, -1082130432 /* Float: -1f */, 100f))
	{
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_439();
		func_440(uParam0);
		func_441(iLocal_14, 6f);
	}
	func_326();
	return false;
}

void func_159(var uParam0)
{
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_73))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_73, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_76))
	{
		__LIB_3__::func_142(iLocal_76);
		VOLUME::_DELETE_VOLUME(iLocal_76);
	}
	if (bLocal_255)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_229);
	}
	if (bLocal_256)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_254);
	}
	if (__LIB_1__::func_707(joaat("WEAPON_KIT_DETECTOR"), 1, 0))
	{
		func_377(joaat("WEAPON_KIT_DETECTOR"), 1, 0, -142743235, 0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_443();
	}
	__LIB_1__::func_281(&iLocal_96, 1, 1);
	__LIB_2__::func_426(&iLocal_15);
	__LIB_1__::func_951(&iLocal_47);
	__LIB_1__::func_951(&iLocal_37);
	func_365();
	__LIB_0__::func_325(&iLocal_66);
	__LIB_0__::func_325(&iLocal_67);
	func_357();
	func_358();
	func_445();
	__LIB_2__::func_353(&uLocal_162, 1);
	__LIB_2__::func_353(&uLocal_163, 1);
}

int func_205(vector3 vParam0, var uParam3)
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
		iVar0 = func_497(0, 0);
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

int func_217(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		if (func_527(iLocal_14, 30f, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, false);
			TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
			return 1;
		}
	}
	return 0;
}

void func_222(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_443();
	}
	if (iLocal_180 != 0)
	{
		func_377(joaat("PROVISION_LIGHTNING_CONDUCTOR"), iLocal_180, 1, -142743235, 0);
		iLocal_329 = 0;
	}
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, true);
	}
	__LIB_0__::func_325(&iLocal_66);
	__LIB_0__::func_325(&iLocal_67);
	func_357();
	func_358();
	__LIB_0__::func_325(&iLocal_64);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_1__::func_281(&(iLocal_83[iVar0]), 1, 1);
		__LIB_0__::func_325(&(iLocal_53[iVar0]));
		iVar0++;
	}
	__LIB_1__::func_281(&uLocal_88, 1, 1);
	__LIB_1__::func_281(&uLocal_87, 1, 1);
}

void func_237(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_262(var uParam0)
{
	bool bVar0;
	var uVar1;
	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
		BUILTIN::SETTIMERA(0);
		return 0;
	}
	if (BUILTIN::TIMERA() < 2000)
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(iLocal_14, 806280085);
	PED::_UPDATE_PED_VARIATION(iLocal_14, false, true, true, true, false);
	if (!bVar0)
	{
		MISC::_SET_WEATHER_TYPE(joaat("THUNDERSTORM"), false, true, true, 30f, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iLocal_14, true);
		if (__LIB_12__::func_871(uParam0))
		{
			func_323(1);
		}
		else
		{
			func_323(0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_PLAYER_ALLY"));
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_14, 1);
		PED::_0x6569F31A01B4C097(iLocal_14, 1, 0);
		PED::_0x6569F31A01B4C097(iLocal_14, 0, 0);
		PED::_0x6569F31A01B4C097(iLocal_14, 4, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		iLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_82, vLocal_270, true, true, false, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_37, 200);
	}
	if (__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	__LIB_12__::func_875(uParam0, iLocal_14, "CRACKPOT", 1);
	__LIB_13__::func_223(&iLocal_14);
	PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iLocal_14, &uVar1));
	return 1;
}

void func_284(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RCKPT_S2_INT"))
	{
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			if (!__LIB_1__::func_707(joaat("WEAPON_KIT_DETECTOR"), 1, 0))
			{
				func_296(joaat("WEAPON_KIT_DETECTOR"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_DETECTOR"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_DETECTOR"), true, 0, false, false);
			}
		}
		if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_DETECTOR"))
		{
			func_347();
		}
	}
	else if (__LIB_13__::func_23(uParam0, "RCKPT_S2_EXT"))
	{
		if (__LIB_12__::func_685(uParam0) < 1000)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		if (__LIB_12__::func_685(uParam0) > 22090 && __LIB_12__::func_685(uParam0) < 30030)
		{
			func_610();
		}
		else
		{
			if (__LIB_12__::func_685(uParam0) >= 30030)
			{
				if (!bLocal_338)
				{
					bLocal_338 = true;
				}
			}
			func_327();
		}
		if (!bLocal_339)
		{
			if (__LIB_12__::func_685(uParam0) > 38130)
			{
				func_611(vLocal_316, 1, 0, 1, 0, 0, 0);
				bLocal_339 = true;
			}
		}
		func_342();
	}
	else if (__LIB_13__::func_23(uParam0, "RCKPT_S2_MCS1"))
	{
		if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_DETECTOR"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		if (__LIB_1__::func_707(joaat("WEAPON_KIT_DETECTOR"), 1, 0))
		{
			func_377(joaat("WEAPON_KIT_DETECTOR"), 1, 0, -142743235, 0);
		}
	}
}

bool func_287(var uParam0)
{
	if (BUILTIN::VDIST(Global_36, vLocal_220) < 100f)
	{
		func_613();
		func_330();
		func_333();
		func_336();
		func_342();
		func_324();
	}
	if ((func_362(Global_36) || func_363()) && !PED::IS_PED_RAGDOLL(Global_35))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_14, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_14, false);
		func_366();
		return true;
	}
	return false;
}

void func_289(var uParam0)
{
	__LIB_12__::func_957(uParam0, iLocal_14, "cs_crackpotinventor", 0, 0, 0);
	__LIB_13__::func_465(uParam0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR_DOV_LAB_R_01X")), "p_door_dov_lab_r_01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR_DOV_LAB_L_01X")), "p_door_dov_lab_l_01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR11X")), "p_door11x", 0, 0, 0);
}

void func_291()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		return;
	}
	iLocal_47 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CRACKPOTMICROPHONE01X"), 2524.55f, 2286.75f, 177.23f, true, true, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_47, 40f, -30f, 0f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, true);
}

void func_293(var uParam0)
{
	__LIB_13__::func_33(uParam0, 1);
	StringCopy(&(uParam0->f_2575), "RCKPT_S2_MCS1", 24);
	__LIB_12__::func_909(&(uParam0->f_206));
	__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
	__LIB_12__::func_981(uParam0, 40828);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_296(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_296(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_296(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_296(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_296(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_296(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_296(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_296(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_296(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_296(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_296(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_296(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_297()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_19[iVar0]))
		{
			vVar1 = { vLocal_181[iVar0 /*3*/] };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), false);
			vVar1.f_2 = (vVar1.z + 0.4f);
			iLocal_19[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_79, vVar1, true, true, false, true);
			vLocal_164[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_19[iVar0], true, false) };
		}
		iVar0++;
	}
	iLocal_180 = 0;
}

void func_300(var uParam0)
{
	__LIB_13__::func_33(uParam0, 2);
	StringCopy(&(uParam0->f_2575), "RCKPT_S2_EXT", 24);
	__LIB_12__::func_909(&(uParam0->f_206));
	__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
	__LIB_12__::func_981(uParam0, 40828);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_303(var uParam0)
{
	__LIB_12__::func_957(uParam0, iLocal_14, "cs_crackpotinventor", 0, 0, 0);
	__LIB_13__::func_465(uParam0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR_DOV_LAB_R_01X")), "p_door_dov_lab_r_01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR_DOV_LAB_L_01X")), "p_door_dov_lab_l_01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_INVENTORCAGE_DOOR01X")), "p_inventorcage_door01x", 0, 0, 0);
}

int func_316(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_13__::func_457(uParam4);
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
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
			func_726(uParam4);
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
				__LIB_13__::func_457(uParam4);
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
				__LIB_13__::func_60(uParam4);
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
				__LIB_13__::func_60(uParam4);
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

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_DOOR_DOV_LAB_R_01X"):
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_43))
			{
				if (!__LIB_0__::func_724(1731133409))
				{
					__LIB_0__::func_68(1731133409, 0, 0);
				}
				else
				{
					iLocal_43 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(1731133409, 0));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_43))
			{
				return iLocal_43;
			}
			break;
		case joaat("P_DOOR_DOV_LAB_L_01X"):
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42))
			{
				if (!__LIB_0__::func_724(1416977006))
				{
					__LIB_0__::func_68(1416977006, 0, 0);
				}
				else
				{
					iLocal_42 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(1416977006, 0));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
			{
				return iLocal_42;
			}
			break;
		case joaat("P_DOOR11X"):
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_44))
			{
				if (!__LIB_0__::func_724(-1060717739))
				{
					__LIB_0__::func_68(-1060717739, 0, 0);
				}
				else
				{
					iLocal_44 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(-1060717739, 0));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_44))
			{
				return iLocal_44;
			}
			break;
		case joaat("P_INVENTORCAGE_DOOR01X"):
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_45))
			{
				if (!__LIB_0__::func_724(-334843445))
				{
					__LIB_0__::func_68(-334843445, 0, 0);
				}
				else
				{
					iLocal_45 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(-334843445, 0));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
			{
				return iLocal_45;
			}
			break;
	}
	return 0;
}

void func_323(bool bParam0)
{
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, vLocal_224, fLocal_227, true, false, true);
	if (bParam0)
	{
		__LIB_1__::func_473(iLocal_14, MISC::GET_HASH_KEY("WORLD_HUMAN_SHOP_BROWSE"), 0, 1, 0, -1082130432 /* Float: -1f */);
	}
}

void func_324()
{
	vector3 vVar0;
	vVar0 = { 2516.959f, 2285f, 177.3515f };
	if (!bLocal_402)
	{
		if (func_740())
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_400, "pl_robot_loop"))
			{
				func_741();
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
				{
					iLocal_48 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("S_CS_CLOTHFORROBOT01X"), vVar0, true, true, false, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_48, false, false);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_400, "cs_crackpotrobot", iLocal_15, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_400, "S_CS_CLOTHFORROBOT01X", iLocal_48, 0);
				func_742(iLocal_400, "pl_robot_loop");
				bLocal_402 = true;
			}
		}
	}
}

void func_326()
{
	iLocal_101[4] = 1416977006;
	iLocal_101[5] = 1731133409;
	if (!__LIB_0__::func_724(iLocal_101[4]))
	{
		__LIB_0__::func_68(iLocal_101[4], 0, 0);
	}
	else if (!__LIB_2__::func_769(iLocal_101[4]))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_101[4], 0f, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_101[4], 1);
		OBJECT::_0xC07B91B996C1DE89(iLocal_101[4], 0);
	}
	if (!__LIB_0__::func_724(iLocal_101[5]))
	{
		__LIB_0__::func_68(iLocal_101[5], 0, 0);
	}
	else if (!__LIB_2__::func_769(iLocal_101[5]))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_101[5], 0f, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_101[5], 1);
		OBJECT::_0xC07B91B996C1DE89(iLocal_101[5], 0);
	}
}

void func_327()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_73))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_73, false);
	}
}

void func_330()
{
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_74))
	{
		iLocal_74 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_220);
	}
	else
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_74, "Normal_Cage_Door") && !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_74, "Normal_Cage_Door"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_74, "Normal_Cage_Door", 0);
		}
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_74, "Damaged_Cage_Door") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_74, "Damaged_Cage_Door"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_74, "Damaged_Cage_Door", true);
		}
	}
}

void func_331()
{
	if (!__LIB_0__::func_724(-1060717739))
	{
		__LIB_0__::func_68(-1060717739, 0, 0);
	}
	if (!__LIB_0__::func_724(-334843445))
	{
		__LIB_0__::func_68(-334843445, 0, 0);
	}
}

void func_332()
{
	if (bLocal_341)
	{
		return;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_74))
	{
		iLocal_74 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_220);
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iLocal_74))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_74);
	}
	else
	{
		bLocal_341 = true;
	}
}

void func_333()
{
	int iVar0;
	if (iLocal_279 >= 4)
	{
		return;
	}
	iLocal_101[0] = -227771192;
	iLocal_101[1] = -522528347;
	iLocal_101[2] = 1446885586;
	iLocal_101[3] = 1208032345;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_0__::func_724(iLocal_101[iVar0]))
		{
			__LIB_0__::func_68(iLocal_101[iVar0], 0, 0);
		}
		else if (!__LIB_13__::func_469(iLocal_101[iVar0]))
		{
			__LIB_1__::func_948(iLocal_101[iVar0], 1, 0f, 0, 0, 0, 0, 0);
		}
		else
		{
			iLocal_279++;
		}
		iVar0++;
	}
}

void func_334(bool bParam0)
{
	iLocal_101[4] = 1416977006;
	iLocal_101[5] = 1731133409;
	if (!__LIB_0__::func_724(iLocal_101[4]))
	{
		__LIB_0__::func_68(iLocal_101[4], 0, 0);
	}
	else if (!__LIB_2__::func_986(iLocal_101[4]))
	{
		if (bParam0)
		{
			__LIB_1__::func_948(iLocal_101[4], 0, -1f, 1, 1, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(iLocal_101[4], 0, 0, 0, 1, 0, 0, 0);
		}
	}
	if (!__LIB_0__::func_724(iLocal_101[5]))
	{
		__LIB_0__::func_68(iLocal_101[5], 0, 0);
	}
	else if (!__LIB_2__::func_986(iLocal_101[5]))
	{
		if (bParam0)
		{
			__LIB_1__::func_948(iLocal_101[5], 0, 1f, 1, 1, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(iLocal_101[5], 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

void func_335()
{
	if (!__LIB_0__::func_724(-334843445))
	{
		__LIB_0__::func_68(-334843445, 0, 0);
	}
	else if (!__LIB_2__::func_986(-334843445))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-334843445, 0f, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-334843445, 1);
		OBJECT::_0xC07B91B996C1DE89(-334843445, 0);
	}
}

void func_336()
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	if (BUILTIN::VDIST(Global_36, vLocal_300) < 5f && (fVar0 > 80.1142f && fVar0 < 251.1419f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
}

void func_338()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (iLocal_441 == 6)
	{
		return;
	}
	vVar4 = { 2510.252f, 2439.163f, 255.5175f };
	if (iLocal_441 >= 2)
	{
		if (func_362(Global_36))
		{
			func_788(Global_36);
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
		{
			if (__LIB_0__::func_94(iLocal_16[iVar0], Global_36, 1) < 50f)
			{
				func_611(vVar4, 1, 1, 1, 0, 0, 0);
				func_788(vVar4);
				return;
			}
		}
		iVar0++;
	}
	switch (iLocal_441)
	{
		case 0:
			if (func_789() < 3)
			{
				if (func_790())
				{
					iLocal_441 = 1;
				}
			}
			break;
		case 1:
			if (func_791())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_16[iVar0], false);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 14, true);
						TASK::TASK_COMBAT_PED(iLocal_16[iVar0], Global_35, 16777216, 0);
					}
					iVar0++;
				}
				iLocal_441 = 2;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
					{
						if (iVar0 == 0)
						{
							vVar1 = { __LIB_1__::func_367(ENTITY::GET_ENTITY_COORDS(iLocal_16[0], true, false), Global_36, 0.6f) };
							if (AUDIO::_0x84848E1C0FC67DBB(iLocal_334))
							{
								if (!__LIB_0__::func_75(&uLocal_138) || __LIB_0__::func_265(&uLocal_138) > 30f)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 200) == 0)
									{
										AUDIO::_0xDCF5BA95BBF0FABA(iLocal_334, "WOLF_HOWL", vVar1, "RCKPT2_Sounds", 0, 0, 1);
										__LIB_1__::func_148(&uLocal_138);
									}
								}
							}
							else
							{
								AUDIO::_0x0286617C8FC50A53(iLocal_334, vVar1);
							}
						}
						else if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(iLocal_16[iVar0]))
						{
							AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_16[iVar0], "HOWL_LONG", false);
						}
					}
					iVar0++;
				}
			}
			break;
		case 2:
			if (func_793(30f))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_16[iVar0], false);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 14, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 15, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 17, true);
						__LIB_1__::func_148(&uLocal_132);
						iLocal_440 = 5;
						iLocal_441 = 3;
					}
					iVar0++;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_132) > 10f)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
					{
						iLocal_440 = 5;
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 11, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 13, true);
						__LIB_1__::func_148(&uLocal_132);
						iLocal_441 = 4;
					}
					iVar0++;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_132) > 10f)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
					{
						iLocal_440 = 5;
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 9, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 10, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 12, true);
						__LIB_1__::func_148(&uLocal_132);
						iLocal_441 = 5;
					}
					iVar0++;
				}
			}
			break;
		case 5:
			if (func_794() == 0)
			{
				iLocal_440 = 6;
				iLocal_441 = 6;
			}
			break;
	}
}

void func_339(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3[5];
	char* sVar19;
	vVar0 = { 2467.38f, 2400.92f, 263.63f };
	vVar3[0 /*3*/] = { 2468.01f, 2400.75f, 262.05f };
	vVar3[1 /*3*/] = { 2467f, 2400.52f, 260.67f };
	vVar3[2 /*3*/] = { 2467.73f, 2400.23f, 259.63f };
	vVar3[3 /*3*/] = { 2467.13f, 2400.32f, 257.37f };
	vVar3[4 /*3*/] = { 2467.94f, 2399.96f, 253.88f };
	switch (iLocal_446)
	{
		case 0:
			if (__LIB_0__::func_665(iLocal_37, Global_35, 1, 1) < 24f)
			{
				func_611(vVar0, 1, 1, 1, 0, 0, 0);
				if (func_796())
				{
					TASK::TASK_PLAY_ANIM(Global_35, sLocal_283, "front_short", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
					__LIB_1__::func_148(&uLocal_156);
					bLocal_427 = true;
					TASK::TASK_LOOK_AT_COORD(Global_35, vVar0, 3000, 0, 51, 0);
				}
				__LIB_1__::func_148(&uLocal_144);
				iLocal_446 = 1;
			}
			break;
		case 1:
			FIRE::ADD_EXPLOSION(vVar3[iLocal_336 /*3*/], 2, 0.2f, false, false, 1f);
			FIRE::START_SCRIPT_FIRE(vVar3[iLocal_336 /*3*/], 10, 0f, false, 0, -1f, 0);
			iLocal_336++;
			if (iLocal_336 >= 5)
			{
				iLocal_446 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_144) > 1f)
			{
				if (__LIB_6__::func_904())
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
				}
				if (__LIB_0__::func_181())
				{
					sVar19 = "CKPT2_TREE_J";
				}
				else
				{
					sVar19 = "CKPT2_TREE_A";
				}
				if (__LIB_12__::func_876(uParam0, sVar19, 0))
				{
					iLocal_446 = 5;
				}
			}
			break;
	}
}

void func_340()
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	if (__LIB_0__::func_75(&uLocal_117) && __LIB_0__::func_265(&uLocal_117) < fLocal_281)
	{
		return;
	}
	switch (iLocal_443)
	{
		case 0:
			vVar0 = { func_797() };
			if (!__LIB_0__::func_86(vVar0) && !func_798(vVar0))
			{
				vLocal_284 = { vVar0 };
				iLocal_443 = 2;
			}
			else
			{
				vLocal_284 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, MISC::GET_RANDOM_FLOAT_IN_RANGE(-50f, 50f), MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 70f), 0f) };
				vLocal_284.f_2 = (vLocal_284.z + 50f);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_284, &(vLocal_284.f_2), false))
				{
					fLocal_287 = 10f;
					__LIB_1__::func_148(&uLocal_120);
					iLocal_443 = 1;
				}
			}
			break;
		case 1:
			func_799(vLocal_284);
			if (__LIB_0__::func_265(&uLocal_120) > 1f)
			{
				vLocal_284.f_2 = (vLocal_284.z + 50f);
				if (MISC::_0xBBE5B63EFFB08E68(vLocal_284, 3423, &uVar3, &uVar4, &uVar5))
				{
					vLocal_284.f_2 = uVar3;
				}
				iLocal_443 = 2;
			}
			break;
		case 2:
			if (BUILTIN::VDIST(Global_36, vLocal_284) > 8f && !func_362(vLocal_284))
			{
				func_611(vLocal_284, 1, 1, 1, 0, 0, 0);
				__LIB_1__::func_148(&uLocal_117);
				fLocal_281 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 15f);
				vLocal_319 = { vLocal_284 };
			}
			iLocal_443 = 0;
			break;
	}
}

void func_341(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5[3];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vVar0 = { 2523.385f, 2302.434f, 192.7356f };
	fVar3 = 109.42f;
	iVar5[0] = joaat("S_SWITCHPUZZLE01X");
	iVar5[1] = joaat("S_SWITCHPUZZLE01X_LEVER_2");
	iVar5[2] = joaat("S_SWITCHPUZZLE01X_LEVER_3");
	sLocal_347 = "s_lev_des_mission";
	sLocal_348[0] = "s_switchpuzzle01x";
	sLocal_348[1] = "s_switchpuzzle01x_lever_2";
	sLocal_348[2] = "s_switchpuzzle01x_lever_3";
	sLocal_343[0] = "CKPT_S_GEN";
	sLocal_343[1] = "CKPT_S_GEN";
	sLocal_343[2] = "CKPT_S_GEN";
	iLocal_97[0] = joaat("INPUT_CONTEXT_Y");
	iLocal_97[1] = joaat("INPUT_CONTEXT_Y");
	iLocal_97[2] = joaat("INPUT_CONTEXT_Y");
	vLocal_366[0 /*3*/] = { 2522.64f, 2302.16f, 192.73f };
	vLocal_366[1 /*3*/] = { 2522.64f, 2302.16f, 192.73f };
	vLocal_366[2 /*3*/] = { 2522.64f, 2302.16f, 192.73f };
	vLocal_376[0 /*3*/] = { 2522.81f, 2301.82f, 194.53f };
	vLocal_376[1 /*3*/] = { 2522.68f, 2302.16f, 194.53f };
	vLocal_376[2 /*3*/] = { 2522.56f, 2302.49f, 194.53f };
	iVar11 = 0;
	iVar12 = 0;
	iVar13 = 0;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iLocal_352[iVar10])
		{
			GRAPHICS::DRAW_LIGHT_WITH_RANGE(vLocal_376[iVar10 /*3*/], 255, 160, 122, 0.09f, 5f);
		}
		iVar10++;
	}
	if (BUILTIN::VDIST(Global_36, vVar0) < 2f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	}
	switch (iLocal_442)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iVar5[0], false);
			STREAMING::REQUEST_MODEL(iVar5[1], false);
			STREAMING::REQUEST_MODEL(iVar5[2], false);
			__LIB_3__::func_618(vLocal_366[1 /*3*/], 10f, 1, 0, 0, 0, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_347);
			iLocal_352[0] = 1;
			iLocal_352[1] = 0;
			iLocal_352[2] = 1;
			TASK::ADD_COVER_BLOCKING_AREA(vVar0 - Vector(3f, 4f, 4f), vVar0 + Vector(3f, 4f, 4f), true, false, true, true);
			iLocal_442 = 1;
			break;
		case 1:
			if (BUILTIN::VDIST(vLocal_366[1 /*3*/], Global_36) < 30f)
			{
				if (((STREAMING::HAS_MODEL_LOADED(iVar5[0]) && STREAMING::HAS_MODEL_LOADED(iVar5[1])) && STREAMING::HAS_MODEL_LOADED(iVar5[2])) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_347))
				{
					iVar10 = 0;
					while (iVar10 < 3)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27[iVar10]))
						{
							iLocal_27[iVar10] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar5[iVar10], 2523.385f, 2302.434f, 172.7356f, true, true, false, true);
							ENTITY::SET_ENTITY_COLLISION(iLocal_27[iVar10], false, false);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_27[iVar10], false);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_27[iVar10], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_23[iVar10]))
						{
							if (iLocal_31[iVar10] == 0)
							{
								iLocal_31[iVar10] = ENTITY::_0x6F3068258A499E52(iVar5[iVar10], vLocal_366[iVar10 /*3*/], 11);
							}
							else if (ENTITY::_0x1FF441D7954F8709(iLocal_31[iVar10]))
							{
								iLocal_23[iVar10] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_31[iVar10]));
							}
						}
						else
						{
							iVar13++;
						}
						iVar10++;
					}
					if (iVar13 >= 3)
					{
						if (func_800())
						{
							iVar10 = 0;
							while (iVar10 < 3)
							{
								func_801(iVar10);
								iVar10++;
							}
							iLocal_442 = 2;
						}
					}
				}
				else
				{
					if (!STREAMING::HAS_MODEL_LOADED(iVar5[0]))
					{
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar5[1]))
					{
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar5[2]))
					{
					}
					if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_347))
					{
					}
				}
			}
			break;
		case 2:
			if ((iLocal_439 == 6 && func_373(Global_35)) && !PED::IS_PED_CLIMBING(Global_35))
			{
				if (!__LIB_0__::func_139(iLocal_93))
				{
					iLocal_93 = __LIB_1__::func_282("CKPT_S_START", joaat("INPUT_CONTEXT_Y"), vVar0, 1.5f, 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					iLocal_436 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_23[0], 1f, 2, 1, 0, "CKPT_BL_SA", 0);
					HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_93), iLocal_436, 0);
					if (func_805())
					{
						__LIB_1__::func_221(iLocal_93, 1, 1);
						__LIB_1__::func_382(iLocal_93, 1, 1);
					}
					else
					{
						__LIB_1__::func_221(iLocal_93, 0, 1);
						__LIB_1__::func_382(iLocal_93, 0, 1);
					}
					if (__LIB_0__::func_567(iLocal_93, 1))
					{
						__LIB_1__::func_281(&iLocal_93, 1, 1);
						if (!CAM::_0xA24C1D341C6E0D53(0, 0, 1))
						{
							func_809(2523.324f, 2303.362f, 194.5768f, -18.1992f, -0.0546f, 149.4001f, 45f, 3000);
						}
						TASK::TASK_LOOK_AT_COORD(Global_35, 2892.75f, 2593.08f, 185.33f, -1, 0, 51, 0);
						__LIB_1__::func_148(&uLocal_108);
						iLocal_442 = 3;
					}
				}
			}
			iVar10 = 0;
			while (iVar10 < 3)
			{
				func_801(iVar10);
				iVar10++;
			}
			break;
		case 3:
			if (func_810(vVar0, fVar3))
			{
				if (__LIB_0__::func_265(&uLocal_108) >= 3f)
				{
					CAM::DESTROY_CAM(iLocal_70, false);
					CAM::DESTROY_CAM(iLocal_71, false);
					iLocal_68 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2523.324f, 2303.362f, 194.5768f, -18.1992f, -0.0546f, 149.4001f, 45f, false, 2);
					iLocal_69 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2523.324f, 2303.362f, 194.5768f, -18.1992f, -0.0546f, 149.4001f, 44.5f, false, 2);
					CAM::SET_CAM_ACTIVE(iLocal_68, true);
					CAM::SET_CAM_ACTIVE(iLocal_69, true);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_69, iLocal_68, 30000, 3, 1);
					CAM::SHAKE_CAM(iLocal_68, "HAND_SHAKE", 0.2f);
					CAM::SHAKE_CAM(iLocal_69, "HAND_SHAKE", 0.2f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					__LIB_0__::func_37(&uLocal_108);
					__LIB_12__::func_883(uParam0, "CKPT_5_OBJ7", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_442 = 4;
				}
			}
			iVar10 = 0;
			while (iVar10 < 3)
			{
				func_801(iVar10);
				iVar10++;
			}
			break;
		case 4:
			if (func_811())
			{
				iVar10 = 0;
				while (iVar10 < 3)
				{
					if (!__LIB_0__::func_139(iLocal_89[iVar10]))
					{
						if (iVar10 == iLocal_364)
						{
							iLocal_89[iVar10] = __LIB_1__::func_746(sLocal_343[iVar10], iLocal_97[iVar10], 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						}
					}
					iVar10++;
				}
				if (!__LIB_0__::func_139(iLocal_94))
				{
					if (iLocal_364 == 0)
					{
						iVar9 = joaat("INPUT_MOVE_RIGHT_ONLY");
					}
					else if (iLocal_364 == 1)
					{
						iVar9 = joaat("INPUT_MOVE_LR");
					}
					else if (iLocal_364 == 2)
					{
						iVar9 = joaat("INPUT_MOVE_LEFT_ONLY");
					}
					iLocal_94 = __LIB_1__::func_746("CKPT_S_SLCT", iVar9, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_862(iLocal_94, joaat("INPUT_MOVE_RIGHT_ONLY"));
					__LIB_4__::func_862(iLocal_94, joaat("INPUT_MOVE_LR"));
					__LIB_4__::func_862(iLocal_94, joaat("INPUT_MOVE_LEFT_ONLY"));
					__LIB_8__::func_754(iLocal_94, 1);
				}
				iLocal_442 = 5;
			}
			break;
		case 5:
			if (func_811())
			{
				__LIB_1__::func_538(0);
				if (!__LIB_0__::func_139(iLocal_95))
				{
					iLocal_95 = __LIB_1__::func_746("CKPT_S_LEAVE", joaat("INPUT_MINIGAME_QUIT"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else if (__LIB_0__::func_567(iLocal_95, 1))
				{
					func_815();
					__LIB_13__::func_89(uParam0, "CKPT_5_OBJ6B", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_442 = 2;
					return;
				}
				iVar10 = 0;
				while (iVar10 < 3)
				{
					if (__LIB_1__::func_732(iLocal_89[iVar10], 1))
					{
						__LIB_1__::func_281(&(iLocal_89[0]), 1, 1);
						__LIB_1__::func_281(&(iLocal_89[1]), 1, 1);
						__LIB_1__::func_281(&(iLocal_89[2]), 1, 1);
						__LIB_1__::func_281(&iLocal_95, 1, 1);
						__LIB_1__::func_281(&iLocal_94, 1, 1);
						iLocal_386 = iVar10;
						func_817();
						iLocal_442 = 6;
					}
					iVar10++;
				}
			}
			break;
		case 6:
			func_817();
			if (iLocal_450 < 2)
			{
				return;
			}
			switch (iLocal_386)
			{
				case 0:
					if (iLocal_352[iLocal_386])
					{
						fVar4 = 0.1f;
					}
					else
					{
						fVar4 = 0.058853f;
					}
					break;
				case 1:
					if (iLocal_352[iLocal_386])
					{
						fVar4 = 0.174752f;
					}
					else
					{
						fVar4 = 0.070648f;
					}
					break;
				case 2:
					if (iLocal_352[iLocal_386])
					{
						fVar4 = 0.081727f;
					}
					else
					{
						fVar4 = 0.046989f;
					}
					break;
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_406, false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_406, sLocal_412)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_406) < fVar4)
			{
				return;
			}
			__LIB_1__::func_538(0);
			switch (iLocal_386)
			{
				case 0:
					iLocal_360[0] = 1;
					iLocal_360[1] = 1;
					iLocal_360[2] = 0;
					break;
				case 1:
					iLocal_360[0] = 1;
					iLocal_360[1] = 1;
					iLocal_360[2] = 1;
					break;
				case 2:
					iLocal_360[0] = 0;
					iLocal_360[1] = 1;
					iLocal_360[2] = 1;
					break;
			}
			iVar10 = 0;
			while (iVar10 < 3)
			{
				if (iLocal_360[iVar10])
				{
					ENTITY::STOP_ENTITY_ANIM(iLocal_23[iVar10], sLocal_348[iVar10], sLocal_347, -2f);
				}
				iVar10++;
			}
			__LIB_1__::func_148(&uLocal_108);
			iLocal_442 = 7;
			break;
		case 7:
			__LIB_1__::func_538(0);
			func_817();
			iVar10 = 0;
			while (iVar10 < 3)
			{
				func_818(iVar10);
				if (iLocal_360[iVar10])
				{
					iVar12++;
				}
				if (iLocal_352[iVar10])
				{
					iVar11++;
				}
				iVar10++;
			}
			if (iVar12 == 0 && (iLocal_450 == 7 || iVar11 == 3))
			{
				iLocal_442 = 8;
			}
			break;
		case 8:
			__LIB_1__::func_538(0);
			iVar10 = 0;
			while (iVar10 < 3)
			{
				if (iLocal_352[iVar10])
				{
					iVar11++;
					if (iVar11 == 3)
					{
						CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						__LIB_0__::func_37(&uLocal_108);
						iLocal_442 = 13;
						iLocal_440 = 12;
						return;
					}
				}
				iVar10++;
			}
			__LIB_0__::func_37(&uLocal_108);
			iLocal_450 = 0;
			iLocal_442 = 4;
			break;
		case 13:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (func_819())
			{
				iLocal_442 = 9;
			}
			break;
		case 9:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_820(1);
			if (func_821() && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_421, "PL_long_Reaction"))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_406))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_406);
				}
				func_742(iLocal_418, "");
				func_742(iLocal_421, "PL_long_Reaction");
				__LIB_1__::func_148(&uLocal_108);
				iLocal_442 = 10;
			}
			break;
		case 10:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_820(1);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_418, false))
			{
				func_376();
				CAM::DESTROY_CAM(iLocal_68, false);
				CAM::DESTROY_CAM(iLocal_69, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				__LIB_1__::func_148(&uLocal_117);
				__LIB_1__::func_148(&uLocal_108);
				iLocal_442 = 11;
			}
			break;
		case 11:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_820(0);
			func_376();
			__LIB_1__::func_148(&uLocal_117);
			func_822();
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_418, false))
			{
				__LIB_0__::func_37(&uLocal_108);
				func_815();
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_414, fLocal_417, true, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12.7493f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-11.6825f, 1f);
				__LIB_0__::func_325(&iLocal_65);
				func_327();
				iLocal_442 = 15;
			}
			break;
		case 14:
			__LIB_0__::func_37(&uLocal_108);
			func_815();
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_414, fLocal_417, true, false, true);
			PED::_0x2208438012482A1A(Global_35, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12.7493f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-11.6825f, 1f);
			__LIB_0__::func_325(&iLocal_65);
			func_327();
			iLocal_442 = 15;
			break;
	}
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_23[iVar10]))
		{
			func_823(iVar10);
		}
		iVar10++;
	}
}

void func_342()
{
	int iVar0;
	int iVar1;
	if (BUILTIN::VDIST(vLocal_288, Global_36) > 50f)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (iLocal_40 == 0)
		{
			iLocal_40 = ENTITY::_0x6F3068258A499E52(iLocal_80, vLocal_288, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_40))
		{
			iLocal_38 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_40));
		}
		return;
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_38, sLocal_294, sLocal_295, 1))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_38, sLocal_295, sLocal_294, 1000f, true, true, false, 0f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		if (iLocal_41 == 0)
		{
			iLocal_41 = ENTITY::_0x6F3068258A499E52(iLocal_81, vLocal_291, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_41))
		{
			iLocal_39 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_41));
		}
		return;
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_39, sLocal_294, sLocal_296, 1))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_39, sLocal_296, sLocal_294, 1000f, true, true, false, 0f, 0);
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iLocal_176[iVar1])
		{
			iVar0++;
		}
		iVar1++;
	}
	if (bLocal_338)
	{
		if (!iLocal_261[3])
		{
			AUDIO::_0x3E93DDDCBB6111E4("Game.Mission.Crackpot2.Speed", 0f);
			iLocal_261[3] = 1;
		}
		fLocal_337 = (fLocal_337 - 0.01f);
		if (fLocal_337 < 0f)
		{
			fLocal_337 = 0f;
		}
		TASK::SET_ANIM_RATE(iLocal_38, fLocal_337, 0, false);
		TASK::SET_ANIM_RATE(iLocal_39, fLocal_337, 0, false);
	}
	else if (iLocal_442 == 15)
	{
		if (!iLocal_261[2])
		{
			AUDIO::_0x3E93DDDCBB6111E4("Game.Mission.Crackpot2.Speed", 3f);
			iLocal_261[2] = 1;
		}
		TASK::SET_ANIM_RATE(iLocal_38, 1f, 0, false);
		TASK::SET_ANIM_RATE(iLocal_39, 1f, 0, false);
		fLocal_337 = 1f;
	}
	else if (iVar0 >= 3)
	{
		if (!iLocal_261[1])
		{
			AUDIO::_0x3E93DDDCBB6111E4("Game.Mission.Crackpot2.Speed", 2f);
			iLocal_261[1] = 1;
		}
		TASK::SET_ANIM_RATE(iLocal_38, 0.75f, 0, false);
		TASK::SET_ANIM_RATE(iLocal_39, 0.75f, 0, false);
	}
	else
	{
		if (!iLocal_261[0])
		{
			AUDIO::_0x3E93DDDCBB6111E4("Game.Mission.Crackpot2.Speed", 1f);
			iLocal_261[0] = 1;
		}
		TASK::SET_ANIM_RATE(iLocal_38, 0.5f, 0, false);
		TASK::SET_ANIM_RATE(iLocal_39, 0.5f, 0, false);
	}
}

void func_343()
{
	vector3 vVar0;
	vVar0 = { 2523.425f, 2285.723f, 176.3515f };
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), vVar0) < 2f)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75))
		{
			iLocal_75 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vVar0, 0f, 0f, 0f, 2f, 2f, 3f);
		}
	}
	else
	{
		__LIB_0__::func_172(iLocal_75);
	}
}

void func_344()
{
	bool bVar0;
	if (!bLocal_427)
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sLocal_283, "front_long", 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, sLocal_283, "front_long") >= 0.922f)
		{
			bVar0 = true;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sLocal_283, "front_short", 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, sLocal_283, "front_short") >= 0.934f)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		bLocal_427 = false;
	}
}

void func_347()
{
	int iVar0;
	if ((__LIB_2__::func_470() || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM"))) || PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		if (__LIB_0__::func_75(&uLocal_153))
		{
			__LIB_0__::func_37(&uLocal_153);
		}
		if (!__LIB_0__::func_75(&uLocal_150))
		{
			__LIB_1__::func_148(&uLocal_150);
		}
		else if (__LIB_0__::func_265(&uLocal_150) > 0.3f)
		{
			bLocal_335 = true;
			if (!bLocal_431)
			{
				bLocal_431 = true;
			}
		}
	}
	else
	{
		if (__LIB_0__::func_75(&uLocal_150))
		{
			__LIB_0__::func_37(&uLocal_150);
		}
		if (!__LIB_0__::func_75(&uLocal_153))
		{
			__LIB_1__::func_148(&uLocal_153);
		}
		else if (__LIB_0__::func_265(&uLocal_153) > 0.3f)
		{
			bLocal_335 = false;
		}
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
		if (iVar0 == joaat("WEAPON_KIT_DETECTOR"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				iLocal_35 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			if (bLocal_255)
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_229);
				bLocal_255 = false;
			}
			if (bLocal_256)
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_254);
				bLocal_256 = false;
			}
			bLocal_342 = false;
			bLocal_335 = false;
			iLocal_35 = 0;
		}
	}
	if (!bLocal_335)
	{
		if (bLocal_255)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_229);
			bLocal_255 = false;
		}
		if (bLocal_256)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_254);
			bLocal_256 = false;
		}
		OBJECT::_SET_OBJECT_BURN_OPACITY(iLocal_35, 0f);
		bLocal_342 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35) && !bLocal_218)
	{
		if (!__LIB_0__::func_139(iLocal_96))
		{
			iLocal_96 = __LIB_1__::func_746("CKPT_AIM", joaat("INPUT_AIM"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_862(iLocal_96, joaat("INPUT_AIM"));
		}
	}
	else
	{
		__LIB_1__::func_281(&iLocal_96, 1, 1);
	}
}

void func_350()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_3__::func_618(vLocal_181[iVar0 /*3*/], 40f, 1, 0, 0, 0, 0);
		iVar0++;
	}
}

void func_351(var uParam0)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	bool bVar20;
	bool bVar21;
	float fVar22;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	vector3 vVar32;
	vector3 vVar35;
	float fVar38;
	float fVar39;
	float fVar40;
	bVar0 = true;
	fVar6 = 220f;
	fVar7 = 7.5f;
	iVar9 = 1000;
	func_828(uParam0);
	fVar10 = 360f;
	fLocal_228 = 360f;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vLocal_181[iVar1 /*3*/], fVar7, iLocal_79, false) || iLocal_176[iVar1])
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_53[iVar1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_53[iVar1]));
			}
			else
			{
				fVar2 = (fVar2 + (3f / 3f));
			}
			__LIB_1__::func_281(&(iLocal_83[iVar1]), 1, 1);
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35) && iVar1 == iLocal_340)
			{
				fVar5 = BUILTIN::VDIST(vLocal_181[iVar1 /*3*/], Global_36);
				if (fVar5 < fVar6)
				{
					bVar21 = true;
					vVar23 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_35, 20f, 2f, 2f) };
					if (bVar0)
					{
						vVar26 = { vVar23 };
						vVar29 = { ENTITY::GET_ENTITY_COORDS(iLocal_35, true, false) };
						vVar32 = { vLocal_181[iVar1 /*3*/] };
						vVar35 = { Global_36 };
						vVar26.f_2 = 0f;
						vVar29.f_2 = 0f;
						vVar32.f_2 = 0f;
						vVar35.f_2 = 0f;
						vVar11 = { __LIB_0__::func_173(vVar26 - vVar29) };
						vVar14 = { __LIB_0__::func_173(vVar32 - vVar35) };
					}
					else
					{
						vVar11 = { __LIB_0__::func_173(vVar23 - ENTITY::GET_ENTITY_COORDS(iLocal_35, true, false)) };
						vVar14 = { __LIB_0__::func_173(vLocal_181[iVar1 /*3*/] - Global_36) };
					}
					fVar10 = MISC::ACOS(__LIB_1__::func_95(vVar11, vVar14));
					fLocal_228 = fVar10;
					if (fVar5 < fVar6)
					{
						fVar3 = (fVar5 - fVar6);
						fVar3 = (fVar3 * -1f);
						fVar4 = fVar3;
					}
					iVar8 = BUILTIN::FLOOR((fVar10 / 3f));
					if (fVar5 < fVar7)
					{
						iVar8 = 0;
						bVar20 = true;
						if (!MAP::DOES_BLIP_EXIST(iLocal_64))
						{
							if (!bLocal_218 && func_831())
							{
								if (!__LIB_0__::func_139(iLocal_83[iVar1]))
								{
									iLocal_83[iVar1] = __LIB_1__::func_282("CKPT_UCPL", joaat("INPUT_CONTEXT_Y"), vLocal_181[iVar1 /*3*/], fVar7, 1, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
									__LIB_0__::func_186(iLocal_83[iVar1], 128);
								}
							}
							else
							{
								__LIB_1__::func_281(&(iLocal_83[iVar1]), 1, 1);
							}
						}
						if (!bLocal_217)
						{
							bLocal_217 = true;
						}
						if (!MAP::DOES_BLIP_EXIST(iLocal_64))
						{
							if (!MAP::DOES_BLIP_EXIST(iLocal_53[iVar1]))
							{
								__LIB_0__::func_325(&(iLocal_57[iVar1]));
								iLocal_53[iVar1] = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_181[iVar1 /*3*/], fVar7);
								MAP::_BLIP_SET_MODIFIER(iLocal_53[iVar1], 825788762);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53[iVar1], "CKPT_BL_E");
								if (!__LIB_6__::func_904())
								{
									__LIB_12__::func_876(uParam0, "CKPT2_SPOT", 0);
								}
								__LIB_13__::func_89(uParam0, "CKPT_5_OBJ4", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							}
							else if (iVar1 == 0)
							{
								if (!bLocal_434)
								{
									if (!__LIB_6__::func_904())
									{
										__LIB_12__::func_883(uParam0, "CKPT_5_OBJ4", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
										bLocal_434 = true;
									}
								}
							}
						}
					}
					else if (iVar8 < 3)
					{
						iVar8 = 3;
					}
					iVar9 = iVar8;
					vVar17 = { vLocal_181[iVar1 /*3*/] };
				}
			}
			if (__LIB_0__::func_139(iLocal_83[iVar1]))
			{
				if (func_831())
				{
					if (__LIB_1__::func_732(iLocal_83[iVar1], 1))
					{
						__LIB_1__::func_281(&(iLocal_83[iVar1]), 1, 1);
						func_377(joaat("PROVISION_LIGHTNING_CONDUCTOR"), 1, 0, -142743235, 0);
						iLocal_329 = (iLocal_329 - 1);
						iLocal_176[iVar1] = 1;
						bLocal_282 = true;
					}
				}
				else
				{
					__LIB_1__::func_281(&(iLocal_83[iVar1]), 1, 1);
				}
				if (__LIB_1__::func_264(iLocal_83[iVar1], 1))
				{
					bVar20 = true;
				}
			}
		}
		iVar1++;
	}
	fLocal_175 = fVar2;
	if (fLocal_175 < 0.1f)
	{
		fLocal_175 = 0.1f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_19[iLocal_174]))
	{
		iLocal_174++;
		if (iLocal_174 == 3)
		{
			iLocal_174 = 0;
		}
	}
	else if (iLocal_329 < iLocal_180 || bLocal_282)
	{
		bVar20 = true;
		if (func_834())
		{
			vLocal_164[iLocal_174 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_46, true, false) };
			iLocal_19[iLocal_174] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_79, vLocal_164[iLocal_174 /*3*/], true, true, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_19[iLocal_174], ENTITY::GET_ENTITY_ROTATION(iLocal_46, 2), 2, true);
			OBJECT::DELETE_OBJECT(&iLocal_46);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_19[iLocal_174], true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_19[iLocal_174], true);
			iLocal_49[iLocal_174] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PICKUP"), iLocal_19[iLocal_174]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_49[iLocal_174], "CKPT_BL_C");
			MAP::_BLIP_SET_MODIFIER(iLocal_49[iLocal_174], -1186550032);
			iLocal_180 = (iLocal_180 - 1);
			iLocal_340++;
			bLocal_438 = true;
			if (iLocal_180 == 0)
			{
				bLocal_424 = true;
				iLocal_440 = 7;
			}
			else if (iLocal_180 == 1)
			{
				iLocal_440 = 4;
			}
			else if (iLocal_180 == 2)
			{
				iLocal_440 = 3;
			}
			if (iLocal_180 > 0)
			{
				__LIB_13__::func_89(uParam0, "CKPT_5_OBJ1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			if (bLocal_424)
			{
				__LIB_0__::func_202(Global_35, 1);
			}
			bLocal_282 = false;
		}
	}
	func_347();
	fVar38 = ((fVar6 - BUILTIN::VDIST(vVar17, Global_36)) / fVar6);
	if (fVar38 > 1f || bVar20)
	{
		fVar38 = 1f;
	}
	if (fVar38 < 0f)
	{
		fVar38 = 0f;
	}
	if (bLocal_218)
	{
		fVar4 = 0f;
		bVar20 = false;
	}
	if ((fVar4 > 0f && fVar38 > 0f) || bVar20)
	{
		if (iLocal_216 >= iVar9 || bVar20)
		{
			iLocal_216 = 0;
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_35) && !ENTITY::IS_ENTITY_DEAD(iLocal_35)) && bLocal_335)
			{
				if (!bLocal_342)
				{
					if (AUDIO::_0x4AD019591E94C064("DETECTOR_BLINK", iLocal_35, "RCKPT2_Sounds", iLocal_230[iLocal_241]))
					{
						AUDIO::_0xF1C5310FEAA36B48(iLocal_230[iLocal_241], "DETECTOR_BLINK", iLocal_35, "RCKPT2_Sounds", 0, 0);
					}
					iLocal_241++;
					if (iLocal_241 >= 10)
					{
						iLocal_241 = 0;
					}
				}
				PAD::SET_PAD_SHAKE(0, 1, BUILTIN::FLOOR((fVar38 * 100f)));
				fVar22 = (fVar38 * fVar38);
				if (fVar22 < 0.1f)
				{
					fVar22 = 0.1f;
				}
				OBJECT::_SET_OBJECT_BURN_OPACITY(iLocal_35, (fVar22 / 100f));
				bLocal_342 = true;
			}
		}
		else
		{
			iLocal_216++;
			OBJECT::_SET_OBJECT_BURN_OPACITY(iLocal_35, 0f);
			bLocal_342 = false;
		}
	}
	else
	{
		OBJECT::_SET_OBJECT_BURN_OPACITY(iLocal_35, 0f);
		bLocal_342 = false;
	}
	if (bVar20)
	{
		if (!bLocal_256)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_35) && !ENTITY::IS_ENTITY_DEAD(iLocal_35)) && bLocal_335)
			{
				if (AUDIO::_0x4AD019591E94C064("DETECTOR_SOLID", iLocal_35, "RCKPT2_Sounds", iLocal_254))
				{
					AUDIO::_0xF1C5310FEAA36B48(iLocal_254, "DETECTOR_SOLID", iLocal_35, "RCKPT2_Sounds", 0, 0);
					bLocal_256 = true;
				}
			}
		}
	}
	else if (bLocal_256)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_254);
		bLocal_256 = false;
	}
	if (bVar21)
	{
		fVar39 = fLocal_228;
		fVar40 = BUILTIN::VDIST(vVar17, Global_36);
		if (fVar39 < 0f)
		{
			fVar39 = 0f;
		}
		if (fVar39 > 100f)
		{
			fVar39 = 100f;
		}
		if (fVar40 < 0f)
		{
			fVar40 = 0f;
		}
		if (fVar40 > 100f)
		{
			fVar40 = 100f;
		}
		if (!bLocal_255)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_35) && !ENTITY::IS_ENTITY_DEAD(iLocal_35)) && bLocal_335)
			{
				if (AUDIO::_0x4AD019591E94C064("DEVICE", iLocal_35, "RCKPT2_Sounds", iLocal_229))
				{
					AUDIO::_0xF1C5310FEAA36B48(iLocal_229, "DEVICE", iLocal_35, "RCKPT2_Sounds", 0, 0);
					bLocal_255 = true;
				}
			}
		}
		else
		{
			AUDIO::_0x503703EC1781B7D6(iLocal_229, "DISTANCE", fVar40);
			AUDIO::_0x503703EC1781B7D6(iLocal_229, "ORIENTATION", fVar39);
		}
	}
	else
	{
		if (bLocal_255)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_229);
			bLocal_255 = false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			if (fLocal_175 < 3f)
			{
				if (!bLocal_267)
				{
					if (bLocal_215)
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						{
							bLocal_267 = true;
						}
					}
				}
			}
		}
	}
	if (iLocal_340 < 3)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_57[iLocal_340]) && !MAP::DOES_BLIP_EXIST(iLocal_53[iLocal_340]))
		{
			if (iVar9 <= 3 && bLocal_335)
			{
				iLocal_57[iLocal_340] = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_191[iLocal_340 /*3*/], fLocal_201[iLocal_340]);
				MAP::_BLIP_SET_MODIFIER(iLocal_57[iLocal_340], 825788762);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_57[iLocal_340], "CKPT_BL_SE");
				if (iLocal_340 == 0)
				{
					__LIB_12__::func_883(uParam0, "CKPT_OBJSEARCH", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else
				{
					__LIB_13__::func_89(uParam0, "CKPT_OBJSEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
		}
	}
	switch (iLocal_340)
	{
		case 0:
			if (!iLocal_205[iLocal_340])
			{
				if (BUILTIN::VDIST(vLocal_181[iLocal_340 /*3*/], Global_36) < 100f)
				{
					if (!__LIB_6__::func_904())
					{
						iLocal_205[iLocal_340] = 1;
					}
				}
			}
			break;
		case 1:
			if (!iLocal_205[iLocal_340])
			{
				if (BUILTIN::VDIST(vLocal_181[iLocal_340 /*3*/], Global_36) < 120f)
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "CKPT2_CWAY2", 0))
						{
							iLocal_205[iLocal_340] = 1;
						}
					}
				}
			}
			break;
		case 2:
			if (!iLocal_205[iLocal_340])
			{
				if (BUILTIN::VDIST(vLocal_181[iLocal_340 /*3*/], Global_36) < 70f)
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "CKPT2_CWAY3", 0))
						{
							iLocal_205[iLocal_340] = 1;
						}
					}
				}
			}
			break;
	}
	func_836(fVar38);
}

void func_352()
{
	switch (iLocal_451)
	{
		case 0:
			if (!__LIB_0__::func_163(iLocal_14, -1098463898))
			{
				__LIB_2__::func_915(iLocal_14, joaat("WORLD_HUMAN_LEAN_RAILING_NO_PROPS"), 2523.86f, 2286.039f, 176.3515f, 285.5828f, 0, 0, 1, "WORLD_HUMAN_LEAN_RAILING_MALE_D", -1082130432 /* Float: -1f */);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_14, iLocal_47, -1, 0, 51, 0);
			}
			if (bLocal_260 && !__LIB_6__::func_904())
			{
				iLocal_451 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75(&uLocal_135) || __LIB_0__::func_265(&uLocal_135) > 30f)
			{
				__LIB_2__::func_915(iLocal_14, joaat("WORLD_HUMAN_INSPECT"), 2517.941f, 2281.224f, 176.3516f, 177.6198f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&uLocal_135);
				iLocal_451 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_135) > 30f)
			{
				__LIB_2__::func_915(iLocal_14, joaat("WORLD_HUMAN_INSPECT"), 2510.387f, 2286.244f, 176.3515f, 163.0341f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&uLocal_135);
				iLocal_451 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_135) > 30f)
			{
				__LIB_2__::func_915(iLocal_14, joaat("WORLD_HUMAN_INSPECT"), 2519.675f, 2287.257f, 176.3515f, 339.5902f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&uLocal_135);
				iLocal_451 = 1;
			}
			break;
		case 4:
			if (!bLocal_413)
			{
				if (func_839())
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_394, "pl_idle"))
					{
						func_742(iLocal_394, "pl_idle");
						bLocal_413 = true;
					}
				}
			}
			break;
	}
}

bool func_355()
{
	return bLocal_424;
}

void func_357()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_325(&(iLocal_49[iVar0]));
		iVar0++;
	}
}

void func_358()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_325(&(iLocal_53[iVar0]));
		iVar0++;
	}
}

bool func_362(vector3 vParam0)
{
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_72, vParam0);
}

bool func_363()
{
	if (BUILTIN::VDIST(Global_36, vLocal_300) < 2f)
	{
		return true;
	}
	return false;
}

void func_365()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_16[iVar0]))
			{
				__LIB_2__::func_426(&(iLocal_16[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_366()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_400))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_400);
	}
	__LIB_2__::func_426(&iLocal_15);
	__LIB_1__::func_951(&iLocal_48);
	bLocal_402 = false;
	bLocal_403 = false;
}

void func_367(var uParam0)
{
	__LIB_12__::func_957(uParam0, iLocal_14, "cs_crackpotinventor", 0, 0, 0);
	__LIB_13__::func_465(uParam0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR_DOV_LAB_R_01X")), "p_door_dov_lab_r_01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, func_321(joaat("P_DOOR_DOV_LAB_L_01X")), "p_door_dov_lab_l_01x", 0, 0, 0);
}

bool func_372(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 2520.659f, 2303.003f, 178.8547f, 2521.952f, 2302.657f, 192.8528f, 2f, false, true, 0);
}

bool func_373(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 2524.792f, 2303.394f, 192.5477f, 2517.161f, 2299.642f, 197.5625f, 9f, false, true, 0);
}

void func_375()
{
	vector3 vVar0[3];
	float fVar10[3];
	vector3 vVar14;
	int iVar17;
	vVar0[0 /*3*/] = { 2521.15f, 2301.46f, 178.54f };
	vVar0[1 /*3*/] = { 2520.89f, 2301.23f, 178.57f };
	vVar0[2 /*3*/] = { 2520.67f, 2301.44f, 178.59f };
	vVar14 = { 2521.29f, 2299.77f, 197.08f };
	fVar10[0] = 90f;
	fVar10[1] = 0f;
	fVar10[2] = -90f;
	iVar17 = __LIB_5__::func_663(&vVar0, Global_36, 0, 1, 0, -1, -1);
	switch (iLocal_452)
	{
		case 0:
			if (BUILTIN::VDIST(Global_36, vVar0[iVar17 /*3*/]) < 0.8f && PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vVar0[iVar17 /*3*/], 30f))
			{
				MISC::FORCE_LIGHTNING_FLASH();
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening", vVar14, 0f, 0f, 0f, 1f, false, false, false);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening_exp", vVar0[iVar17 /*3*/], 90f, 0f, fVar10[iVar17], 1f, false, false, false);
				AUDIO::_0xDCF5BA95BBF0FABA(iLocal_433, "LIGHTNING_EXP", vVar0[iVar17 /*3*/], "RCKPT2_Sounds", 0, 0, 1);
				PED::SET_PED_TO_RAGDOLL(Global_35, 1200, 1500, 0, false, false, false);
				ENTITY::APPLY_FORCE_TO_ENTITY(Global_35, 3, 0f, -6f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
				PED::APPLY_DAMAGE_TO_PED(Global_35, 50, 1, -1, 0);
				PAD::SET_PAD_SHAKE(0, 100, 200);
				GRAPHICS::ANIMPOSTFX_PLAY("PlayerHealthCrackpot");
				__LIB_9__::func_273(1f);
				__LIB_1__::func_148(&uLocal_159);
				iLocal_452 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_159) > 0.5f)
			{
				MISC::FORCE_LIGHTNING_FLASH();
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening", vVar14, 0f, 0f, 0f, 1f, false, false, false);
				if (!__LIB_6__::func_904() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_1__::func_265(Global_35, "GENERIC_CURSE_HIGH", 1506116031, 0, 1, 0, 0, 1);
				}
				iLocal_452 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_159) > 5f)
			{
				iLocal_452 = 0;
			}
			break;
	}
}

void func_376()
{
	GRAPHICS::DRAW_LIGHT_WITH_RANGE(2520.95f, 2301.65f, 190.92f, 255, 0, 0, 10f, (fLocal_175 / 2f));
}

int func_377(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_377(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_411(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_296(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_296(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_296(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_296(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_296(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_296(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_296(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_296(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_296(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_296(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_296(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_296(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_296(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_892();
						func_893(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_296(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_411(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_411(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_411(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_296(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_296(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calder??n" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hern??ndez" */);
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
		func_927();
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
							func_296(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_439()
{
	if (!bLocal_399)
	{
		if (func_964())
		{
			func_741();
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_396, "crackpotrobot", iLocal_15, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_396, "crackpotinventor", iLocal_14, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_396, "p_inventorcage_door01x", func_321(joaat("P_INVENTORCAGE_DOOR01X")), 0);
			func_742(iLocal_396, "pl_leadout");
			bLocal_399 = true;
		}
	}
}

void func_440(var uParam0)
{
	if (iLocal_426 >= 4)
	{
		return;
	}
	if (__LIB_6__::func_904())
	{
		return;
	}
	if (__LIB_0__::func_94(iLocal_14, Global_36, 1) > 30f)
	{
		return;
	}
	if (!PED::_0x5C6C7C70CA302801(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_147) || __LIB_0__::func_265(&uLocal_147) > 10f)
	{
		if (__LIB_12__::func_876(uParam0, "CKPT2_GOAWAY", 0))
		{
			__LIB_1__::func_148(&uLocal_147);
			iLocal_426++;
		}
	}
}

void func_441(int iParam0, float fParam1)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (func_965(vVar0, fParam1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
}

void func_443()
{
	if (bLocal_435)
	{
		return;
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	bLocal_435 = true;
}

void func_445()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_1__::func_941(iLocal_101[iVar0]);
		iVar0++;
	}
	__LIB_1__::func_941(-334843445);
	__LIB_1__::func_941(-1060717739);
}

int func_497(int iParam0, int iParam1)
{
	var uVar0;
	return func_1016(&uVar0, iParam0, iParam1);
}

bool func_527(int iParam0, float fParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::_IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iParam0, false))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) < fParam1)
				{
					return true;
				}
			}
		}
	}
	if (bParam2)
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 5f, true))
		{
			return true;
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return true;
	}
	return false;
}

void func_610()
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_73))
	{
		iLocal_73 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_crackpot_tesla_coil", 2515.84f, 2285.24f, 179.46f, 0f, 0f, 0f, 1f, false, false, false, false);
	}
}

void func_611(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, float fParam6, float fParam7, float fParam8)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_FINAL_RENDERED_CAM_COORD(), vParam0, true);
	fVar0 = (fVar0 / 100f);
	if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	MISC::FORCE_LIGHTNING_FLASH();
	GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening", vParam0, fParam6, fParam7, fParam8, fVar0, false, false, false);
	if (bParam5)
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iLocal_242[iLocal_247], "LIGHTNING_BOLT", vParam0, "RCKPT2_Sounds", 0, 0, 1);
		iLocal_247++;
		if (iLocal_247 >= 4)
		{
			iLocal_247 = 0;
		}
	}
	if (bParam3)
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening_exp", vParam0, 0f, 0f, 0f, 1f, false, false, false);
		if (BUILTIN::VDIST(Global_36, vParam0) < 30f)
		{
			if (bParam5)
			{
				AUDIO::_0xDCF5BA95BBF0FABA(iLocal_248[iLocal_253], "LIGHTNING_EXP", vParam0, "RCKPT2_Sounds", 0, 0, 1);
				iLocal_253++;
				if (iLocal_253 >= 4)
				{
					iLocal_253 = 0;
				}
			}
		}
	}
	func_1090(vParam0, 1112014848 /* Float: 50f */);
	if (((bParam4 && !func_373(Global_35)) && !PED::IS_PED_CLIMBING(Global_35)) && !func_362(Global_36))
	{
		func_1091(vParam0);
	}
}

void func_613()
{
	if (!PED::_GET_PED_CROUCH_MOVEMENT(iLocal_14))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iLocal_14, true, 0, true);
	}
}

void func_726(var uParam0)
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
		func_1236(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1238(uParam0);
		func_1239(uParam0);
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

bool func_740()
{
	if (!bLocal_403)
	{
		iLocal_400 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_401, 1, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_400))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_400);
			bLocal_403 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_400))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_400, true, false))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_400, "pl_robot_loop"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_400, "pl_robot_loop");
			}
			return true;
		}
	}
	return false;
}

void func_741()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		iLocal_15 = __LIB_8__::func_931(joaat("CS_CRACKPOTROBOT"), vLocal_220, fLocal_223, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_15, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_15, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_15, true);
		PED::_0x6569F31A01B4C097(iLocal_15, 1, 0);
		PED::_0x6569F31A01B4C097(iLocal_15, 0, 0);
		PED::_0x6569F31A01B4C097(iLocal_15, 4, 0);
	}
}

void func_742(int iParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		ANIMSCENE::START_ANIM_SCENE(iParam0);
	}
}

void func_788(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_16[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(iLocal_16[iVar0], 288, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 9, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 10, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 11, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 12, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 13, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 14, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 15, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 16, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iVar0], 17, false);
			PED::_0xEEED8FAFEC331A70(iLocal_16[iVar0], vParam0, 3);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_16[iVar0], vParam0, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_16[iVar0], true);
			__LIB_0__::func_325(&(uLocal_61[iVar0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_16[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_440 == 5)
	{
		iLocal_440 = 6;
	}
	iLocal_441 = 6;
}

int func_789()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iLocal_176[iVar1])
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_790()
{
	vector3 vVar0[2];
	float fVar7[2];
	char* sVar10[2];
	if (iLocal_266 == 2)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		iLocal_36 = OBJECT::CREATE_OBJECT(joaat("S_MEATBIT_RIB_LARGE01X"), vLocal_257, true, true, false, false, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_36, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, true);
	}
	vVar0[0 /*3*/] = { 2511.361f, 2440.884f, 255.6646f };
	vVar0[1 /*3*/] = { 2510.17f, 2440.99f, 255.3497f };
	fVar7[0] = 172.7723f;
	fVar7[1] = 193.7976f;
	sVar10[0] = "WORLD_ANIMAL_WOLF_HOWLING";
	sVar10[1] = "WORLD_ANIMAL_WOLF_HOWLING";
	iLocal_16[iLocal_266] = __LIB_8__::func_931(joaat("A_C_WOLF"), vVar0[iLocal_266 /*3*/], 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_16[iLocal_266], fVar7[iLocal_266]);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_16[iLocal_266], 1);
	ENTITY::_SET_ENTITY_SOMETHING(iLocal_16[iLocal_266], true);
	__LIB_1__::func_473(iLocal_16[iLocal_266], MISC::GET_HASH_KEY(sVar10[iLocal_266]), 0, 0, 0, -1082130432 /* Float: -1f */);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_16[iLocal_266], true);
	PED::_0x89F5E7ADECCCB49C(iLocal_16[iLocal_266], "action");
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_16[iLocal_266], 300);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 9, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 10, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 11, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 12, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 13, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 14, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 15, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 16, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_16[iLocal_266], 17, false);
	iLocal_266++;
	return false;
}

bool func_791()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_16[iVar0], Global_35, 1, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_16[iVar0], true, false), 10f, true))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_793(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(iLocal_16[iVar0], 0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_16[iVar0], true, false), Global_36) < fParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_794()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (__LIB_0__::func_272(iLocal_16[iVar1], 0) && !PED::IS_PED_FLEEING(iLocal_16[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_796()
{
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_CLIMBING(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_JUMPING(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return false;
	}
	else if (func_373(Global_35))
	{
		return false;
	}
	else if (func_362(Global_36))
	{
		return false;
	}
	else if (bLocal_218)
	{
		return false;
	}
	else if (__LIB_0__::func_75(&uLocal_156) && __LIB_0__::func_265(&uLocal_156) < 5f)
	{
		return false;
	}
	return true;
}

Vector3 func_797()
{
	vector3 vVar0[20];
	int iVar61;
	int iVar62;
	if (!func_373(Global_35))
	{
		if (CAM::IS_SPHERE_VISIBLE(vLocal_316, 1f))
		{
			vVar0[iVar61 /*3*/] = { vLocal_316 };
			iVar61++;
		}
		iVar62 = 0;
		while (iVar62 < 4)
		{
			if (CAM::IS_SPHERE_VISIBLE(vLocal_303[iVar62 /*3*/], 1f))
			{
				vVar0[iVar61 /*3*/] = { vLocal_303[iVar62 /*3*/] };
				iVar61++;
			}
			iVar62++;
		}
	}
	iVar62 = 0;
	while (iVar62 < (3 - iLocal_180))
	{
		if (CAM::IS_SPHERE_VISIBLE(vLocal_164[iVar62 /*3*/], 1f) && BUILTIN::VDIST(vLocal_164[iVar62 /*3*/], Global_36) > 10f)
		{
			vVar0[iVar61 /*3*/] = { vLocal_164[iVar62 /*3*/] };
			vVar0[iVar61 /*3*/].f_2 = (vVar0[iVar61 /*3*/].f_2 + 0.5f);
			iVar61++;
		}
		iVar62++;
	}
	iVar62 = 0;
	while (iVar62 < 2)
	{
		if (CAM::IS_SPHERE_VISIBLE(vLocal_181[iVar62 /*3*/], 1f) && BUILTIN::VDIST(vLocal_181[iVar62 /*3*/], Global_36) > 10f)
		{
			vVar0[iVar61 /*3*/] = { vLocal_181[iVar62 /*3*/] };
			iVar61++;
		}
		iVar62++;
	}
	if (iVar61 > 0)
	{
		return vVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar61) /*3*/];
	}
	return 0f, 0f, 0f;
}

bool func_798(vector3 vParam0)
{
	if (__LIB_0__::func_175(vParam0, vLocal_319, 1056964608 /* Float: 0.5f */, 1))
	{
		return true;
	}
	return false;
}

void func_799(vector3 vParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	vParam0.x = (vParam0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fLocal_287, fLocal_287));
	vParam0.f_1 = (vParam0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fLocal_287, fLocal_287));
	vParam0.f_2 = (vParam0.z + 60f);
	MISC::_0xBBE5B63EFFB08E68(vParam0, 3423, &uVar0, &uVar1, &uVar2);
	vParam0.f_2 = uVar0;
	if (vParam0.z > vLocal_284.z)
	{
		vLocal_284 = { vParam0 };
	}
	if (fLocal_287 < 1f)
	{
		fLocal_287 = 1f;
	}
	else
	{
		fLocal_287 = (fLocal_287 - 0.2f);
	}
}

bool func_800()
{
	switch (iLocal_453)
	{
		case 0:
			iLocal_408 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_409, 0, "pl_enter", false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_408))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_408, "s_switchpuzzle01x", iLocal_23[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_408, "s_switchpuzzle01x_lever_2", iLocal_23[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_408, "s_switchpuzzle01x_lever_3", iLocal_23[2], 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_408);
				iLocal_453 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_408))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_408, true, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_408);
					iLocal_453 = 2;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_408, false))
			{
				iLocal_453 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_408))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_408);
			}
			return true;
	}
	return false;
}

void func_801(int iParam0)
{
	float fVar0;
	if (iLocal_352[iParam0])
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 1f;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0], 1))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_23[iParam0], sLocal_348[iParam0], sLocal_347, 1000f, false, true, false, fVar0, 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0], 0f);
	}
}

bool func_805()
{
	if (PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2522.725f, 2302.186f, 192.4875f, 2524.205f, 2302.759f, 194.989f, 3f, false, true, 0))
	{
		return false;
	}
	return true;
}

void func_809(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (!CAM::DOES_CAM_EXIST(iLocal_70))
	{
		iLocal_70 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_71))
	{
		iLocal_71 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		vVar0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar6 = CAM::GET_GAMEPLAY_CAM_FOV();
	}
	else
	{
		vVar0 = { CAM::GET_CAM_COORD(iLocal_71) };
		vVar3 = { CAM::GET_CAM_ROT(iLocal_71, 2) };
		fVar6 = CAM::GET_CAM_FOV(iLocal_71);
	}
	CAM::SET_CAM_PARAMS(iLocal_70, vVar0, vVar3, fVar6, 0, 1, 1, 2, 1, 0);
	CAM::SET_CAM_ACTIVE(iLocal_70, true);
	CAM::SET_CAM_PARAMS(iLocal_71, vParam0, vParam3, fParam6, 0, 1, 1, 2, 1, 0);
	CAM::SET_CAM_ACTIVE(iLocal_71, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_71, iLocal_70, iParam7, 1, 1);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

bool func_810(var uParam0, float fParam1, var uParam2, float fParam3)
{
	switch (iLocal_448)
	{
		case 0:
			if (func_1326())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_406, "pl_enter"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_406, "ARTHUR", "pl_enter", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, "pl_face_center_loop");
					iLocal_448 = 1;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_406, "pl_face_center_loop"))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_406, false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_406) > 0.2f)
					{
						func_742(iLocal_406, "pl_face_center_loop");
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_406, "pl_face_center_loop");
						iLocal_364 = 1;
						iLocal_449 = 0;
						iLocal_448 = 7;
					}
				}
			}
			break;
		case 7:
			return true;
	}
	return false;
}

bool func_811()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	func_1327(&iVar0, &iVar1, &uVar2, &uVar3, joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	switch (iLocal_449)
	{
		case 0:
			if (iVar1 > 70 || iVar1 < -70)
			{
				return false;
			}
			if (iLocal_364 == 1)
			{
				if (iVar0 < -5)
				{
					sLocal_410 = "pl_middle_to_left";
					sLocal_411 = "pl_face_left_loop";
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_410);
					iLocal_449 = 1;
					iLocal_364 = 0;
				}
				else if (iVar0 > 5)
				{
					sLocal_410 = "pl_middle_to_right";
					sLocal_411 = "pl_face_right_loop";
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_410);
					iLocal_449 = 1;
					iLocal_364 = 2;
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_364 == 0)
			{
				if (iVar0 < -5)
				{
				}
				else if (iVar0 > 5)
				{
					sLocal_410 = "pl_left_to_middle";
					sLocal_411 = "pl_face_center_loop";
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_410);
					iLocal_449 = 1;
					iLocal_364 = 1;
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_364 == 2)
			{
				if (iVar0 < -5)
				{
					sLocal_410 = "pl_right_to_middle";
					sLocal_411 = "pl_face_center_loop";
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_410);
					iLocal_449 = 1;
					iLocal_364 = 1;
				}
				else if (iVar0 > 5)
				{
				}
				else
				{
					return true;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_406, sLocal_410))
			{
				__LIB_1__::func_281(&(iLocal_89[0]), 1, 1);
				__LIB_1__::func_281(&(iLocal_89[1]), 1, 1);
				__LIB_1__::func_281(&(iLocal_89[2]), 1, 1);
				__LIB_1__::func_281(&iLocal_95, 1, 1);
				__LIB_1__::func_281(&iLocal_94, 1, 1);
				iLocal_442 = 4;
				func_742(iLocal_406, sLocal_410);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_406, sLocal_410);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_411);
				iLocal_449 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_406, sLocal_411))
			{
				if (iLocal_364 == 0)
				{
					fVar4 = 0.122598f;
				}
				else if (iLocal_364 == 1)
				{
					fVar4 = 0.2f;
				}
				else if (iLocal_364 == 2)
				{
					fVar4 = 0.148692f;
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_406) > fVar4)
				{
					func_742(iLocal_406, sLocal_411);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_406, sLocal_411);
					iLocal_449 = 0;
				}
			}
			break;
	}
	return false;
}

void func_815()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_406))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_406);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_407))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_407);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_408))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_408);
	}
	iLocal_448 = 0;
	bLocal_404 = false;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_1__::func_281(&(iLocal_89[0]), 1, 1);
	__LIB_1__::func_281(&(iLocal_89[1]), 1, 1);
	__LIB_1__::func_281(&(iLocal_89[2]), 1, 1);
	__LIB_1__::func_281(&iLocal_95, 1, 1);
	__LIB_1__::func_281(&iLocal_94, 1, 1);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (CAM::IS_CAM_ACTIVE(iLocal_68) || CAM::IS_CAM_ACTIVE(iLocal_69))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::DOES_CAM_EXIST(iLocal_68))
		{
			CAM::DESTROY_CAM(iLocal_68, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_69))
		{
			CAM::DESTROY_CAM(iLocal_69, false);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.2037f, 1f);
	}
	if (AUDIO::IS_STREAM_PLAYING(iLocal_425))
	{
		AUDIO::STOP_STREAM(iLocal_425);
	}
}

int func_817()
{
	float fVar0;
	float fVar1;
	switch (iLocal_450)
	{
		case 0:
			if (func_1328())
			{
				if (iLocal_364 == 1)
				{
					if (iLocal_352[1])
					{
						sLocal_412 = "pl_pull_middle_up";
						sLocal_411 = "pl_face_center_loop";
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_412);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_407, sLocal_412);
						iLocal_356[iLocal_364] = 1;
						iLocal_450 = 1;
					}
					else
					{
						sLocal_412 = "pl_pull_middle_down";
						sLocal_411 = "pl_face_center_loop";
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_412);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_407, sLocal_412);
						iLocal_356[iLocal_364] = 0;
						iLocal_450 = 1;
					}
				}
				else if (iLocal_364 == 0)
				{
					if (iLocal_352[0])
					{
						sLocal_412 = "pl_pull_left_up";
						sLocal_411 = "pl_face_left_loop";
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_412);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_407, sLocal_412);
						iLocal_356[iLocal_364] = 1;
						iLocal_450 = 1;
					}
					else
					{
						sLocal_412 = "pl_pull_left_down";
						sLocal_411 = "pl_face_left_loop";
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_412);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_407, sLocal_412);
						iLocal_356[iLocal_364] = 0;
						iLocal_450 = 1;
					}
				}
				else if (iLocal_364 == 2)
				{
					if (iLocal_352[2])
					{
						sLocal_412 = "pl_pull_right_up";
						sLocal_411 = "pl_face_right_loop";
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_412);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_407, sLocal_412);
						iLocal_356[iLocal_364] = 1;
						iLocal_450 = 1;
					}
					else
					{
						sLocal_412 = "pl_pull_right_down";
						sLocal_411 = "pl_face_right_loop";
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_412);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_407, sLocal_412);
						iLocal_356[iLocal_364] = 0;
						iLocal_450 = 1;
					}
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_406, sLocal_412) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_407, sLocal_412))
			{
				func_742(iLocal_406, sLocal_412);
				func_742(iLocal_407, sLocal_412);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_406, sLocal_412);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, sLocal_411);
				iLocal_450 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_406, sLocal_411))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_407))
				{
					if (iLocal_364 == 0)
					{
						if (iLocal_356[iLocal_364])
						{
							fVar1 = 0.16461f;
						}
						else
						{
							fVar1 = 0.151277f;
						}
					}
					else if (iLocal_364 == 1)
					{
						if (iLocal_356[iLocal_364])
						{
							fVar1 = 0.276009f;
						}
						else
						{
							fVar1 = 0.176915f;
						}
					}
					else if (iLocal_364 == 2)
					{
						if (iLocal_356[iLocal_364])
						{
							fVar1 = 0.141444f;
						}
						else
						{
							fVar1 = 0.122995f;
						}
					}
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_406) > fVar1)
					{
						func_1329();
					}
				}
				if (iLocal_364 == 0)
				{
					if (iLocal_356[iLocal_364])
					{
						fVar0 = 0.28801f;
					}
					else
					{
						fVar0 = 0.235079f;
					}
				}
				else if (iLocal_364 == 1)
				{
					if (iLocal_356[iLocal_364])
					{
						fVar0 = 0.451048f;
					}
					else
					{
						fVar0 = 0.359268f;
					}
				}
				else if (iLocal_364 == 2)
				{
					if (iLocal_356[iLocal_364])
					{
						fVar0 = 0.257722f;
					}
					else
					{
						fVar0 = 0.234048f;
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_406) > fVar0)
				{
					func_1329();
					func_742(iLocal_406, sLocal_411);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_406, sLocal_411);
					iLocal_450 = 7;
				}
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_818(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!iLocal_360[iParam0])
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_23[iParam0], iLocal_407))
	{
		return;
	}
	if (iLocal_352[iParam0])
	{
		if (iLocal_386 == iParam0)
		{
			fVar0 = 1f;
			fVar1 = 1f;
		}
		else
		{
			fVar0 = 0.5f;
			fVar1 = 1f;
		}
	}
	else if (iLocal_386 == iParam0)
	{
		fVar0 = 0.5f;
		fVar1 = 0.5f;
	}
	else
	{
		fVar0 = 0f;
		fVar1 = 0.5f;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0], 1))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_23[iParam0], sLocal_348[iParam0], sLocal_347, 2f, false, true, false, fVar0, 0);
	}
	else
	{
		if (iLocal_386 == iParam0)
		{
			fVar2 = 0.75f;
		}
		else if (__LIB_0__::func_265(&uLocal_108) < 1f)
		{
			fVar2 = 0f;
		}
		else
		{
			fVar2 = 1.5f;
		}
		ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0], fVar2);
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0]) >= fVar1)
		{
			if (iLocal_352[iParam0])
			{
				iLocal_352[iParam0] = 0;
			}
			else
			{
				iLocal_352[iParam0] = 1;
			}
			iLocal_360[iParam0] = 0;
		}
	}
}

bool func_819()
{
	if (!bLocal_422)
	{
		iLocal_421 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_423, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_421))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_421);
			bLocal_422 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_421))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_421, true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_421, "ARTHUR", Global_35, 0);
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_421, "PL_long_Reaction");
			return true;
		}
	}
	return false;
}

void func_820(bool bParam0)
{
	char* sVar0;
	if (iLocal_425 != -1)
	{
		if (AUDIO::IS_STREAM_PLAYING(iLocal_425))
		{
		}
	}
	if (bLocal_323)
	{
		return;
	}
	sVar0 = "LIGHTNING_TOWER_STRIKE";
	if (!AUDIO::LOAD_STREAM(sVar0, "RCKPT2_Sounds"))
	{
		return;
	}
	if (bParam0)
	{
		return;
	}
	iLocal_425 = AUDIO::_0x0556C784FA056628(sVar0, "RCKPT2_Sounds");
	AUDIO::PLAY_STREAM_FRONTEND(iLocal_425);
	bLocal_323 = true;
}

bool func_821()
{
	if (!bLocal_419)
	{
		iLocal_418 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_420, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_418))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_418);
			bLocal_419 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_418))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_418, true, false))
		{
			return true;
		}
	}
	return false;
}

void func_822()
{
	bool bVar0;
	bVar0 = false;
	switch (iLocal_444)
	{
		case 0:
			func_611(2521.12f, 2302.99f, 193.24f, 1, 0, bVar0, 0, 0, 0);
			iLocal_444 = 1;
			break;
		case 1:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 2.57f)
			{
				func_611(2389.52f, 2291.71f, 242.51f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 4.05f)
			{
				func_611(2381.77f, 2397.26f, 251.36f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 5.21f)
			{
				func_611(2394.05f, 2302.79f, 243.02f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 6.28f)
			{
				func_611(2372.04f, 2382.25f, 262.96f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 5;
			}
			break;
		case 5:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 7.06f)
			{
				func_611(2341.92f, 2341.52f, 263.26f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 6;
			}
			break;
		case 6:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 7.71f)
			{
				func_611(2412.97f, 2344.84f, 240.92f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 7;
			}
			break;
		case 7:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 8.12f)
			{
				func_611(2521.55f, 2301.41f, 197.35f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 8;
			}
			break;
		case 8:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 8.67f)
			{
				TASK::TASK_PLAY_ANIM(Global_35, sLocal_283, "front_long", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				iLocal_444 = 9;
			}
			break;
		case 9:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 9.59f)
			{
				func_611(2518.76f, 2298.03f, 195.23f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 10;
			}
			break;
		case 10:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 10.12f)
			{
				func_611(vLocal_303[0 /*3*/], 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 11;
			}
			break;
		case 11:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 10.61f)
			{
				func_611(2517.07f, 2302.53f, 195.3f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 12;
			}
			break;
		case 12:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 11f)
			{
				func_611(vLocal_303[1 /*3*/], 1, 0, bVar0, 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_elec_flow", 2520.91f, 2301.47f, 196.82f, 0f, 0f, 0f, 1f, false, false, false);
				iLocal_444 = 13;
			}
			break;
		case 13:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 11.34f)
			{
				func_611(2520.89f, 2301.48f, 197.35f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 14;
			}
			break;
		case 14:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 11.64f)
			{
				func_611(2520.89f, 2301.48f, 197.35f, 1, 0, bVar0, 0, 0, 0);
				iLocal_444 = 15;
			}
			break;
		case 15:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_418) > 12.13f)
			{
				iLocal_444 = 16;
			}
			break;
	}
}

void func_823(int iParam0)
{
	if (iLocal_360[iParam0])
	{
		return;
	}
	if (iLocal_352[iParam0])
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0], 1))
		{
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0]) >= 0.5f)
			{
				ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_23[iParam0], sLocal_347, sLocal_348[iParam0], 0f);
			}
		}
	}
}

void func_828(var uParam0)
{
	char* sVar0[3];
	if (!bLocal_438)
	{
		return;
	}
	if (__LIB_6__::func_904())
	{
		return;
	}
	if (iLocal_340 < 1 || iLocal_340 > 3)
	{
		return;
	}
	sVar0[0] = "CKPT2_CON1";
	sVar0[1] = "CKPT2_CON2";
	sVar0[2] = "CKPT2_CON3";
	__LIB_12__::func_876(uParam0, sVar0[(iLocal_340 - 1)], 0);
	bLocal_438 = false;
}

bool func_831()
{
	if (((((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) || PED::IS_PED_RAGDOLL(Global_35)) || PED::IS_PED_FALLING(Global_35)) || PED::IS_PED_JUMPING(Global_35)) || PED::IS_PED_CLIMBING(Global_35)) || PED::_0xC48A9EB0D499B3E5(Global_35)) || ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Global_35) > 1.2f) || __LIB_3__::func_690(Global_35))
	{
		return false;
	}
	return true;
}

bool func_834()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	CAM::_0x632BE8D84846FA56();
	switch (iLocal_447)
	{
		case 0:
			if (!bLocal_218)
			{
				bLocal_218 = true;
			}
			if (func_1333())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				TASK::TASK_STAND_STILL(Global_35, -1);
				sLocal_392 = "pl_idle_action";
				__LIB_1__::func_148(&uLocal_141);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_390, sLocal_392);
				iLocal_447 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_141) > 1f || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.1f)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_390, sLocal_392))
				{
					vVar0 = { Global_36 };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
					fVar9 = (ENTITY::GET_ENTITY_HEADING(Global_35) - 180f);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_390, vVar0, 0f, 0f, fVar9, 2);
					iLocal_46 = OBJECT::CREATE_OBJECT(iLocal_79, Global_36 + Vector(-15f, 0f, 0f), true, true, false, false, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_390, "p_conductrodtele01x", iLocal_46, 0);
					func_742(iLocal_390, sLocal_392);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_390, sLocal_392);
					bLocal_218 = true;
					iLocal_447 = 2;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_390) >= 0.685994f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_390);
				iLocal_447 = 0;
				bLocal_387 = false;
				bLocal_218 = false;
				bLocal_388 = false;
				bLocal_389 = false;
				return true;
			}
			else
			{
				if (!bLocal_388)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_390) >= 0.59f)
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_46, true, false) };
						vVar6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_46, 2) };
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_390, "p_conductrodtele01x", iLocal_46);
						OBJECT::DELETE_OBJECT(&iLocal_46);
						iLocal_46 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_79, vVar3, true, true, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_46, vVar6, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_46, true);
						bLocal_388 = true;
					}
				}
				if (!bLocal_389)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_390) >= 0.25f)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_46, true);
						bLocal_389 = true;
					}
				}
			}
			break;
	}
	return false;
}

void func_836(float fParam0)
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		return;
	}
	fVar0 = __LIB_0__::func_667(0f, 0.3f, fParam0);
	if (fLocal_299 != fVar0)
	{
		fLocal_299 = fVar0;
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_35, sLocal_297, sLocal_298, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_35, sLocal_298, sLocal_297, -1000f);
		}
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_35, sLocal_297, sLocal_298, 1))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_35, sLocal_298, sLocal_297, 1000f, true, false, false, fLocal_299, 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_35, sLocal_297, sLocal_298, 0f);
	}
}

bool func_839()
{
	if (!bLocal_393)
	{
		iLocal_394 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_395, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_394))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_394, "crackpotinventor", iLocal_14, 0);
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_394, "JOHN", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_394, "ARTHUR", Global_35, 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_394);
			bLocal_393 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_394))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_394, true, false))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_394, "pl_idle"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_394, "pl_idle");
			}
			return true;
		}
	}
	return false;
}

void func_892()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1375();
	func_1376();
	func_1377();
	func_1378();
	func_1379();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_893(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_377(iParam0, 1, 1, -142743235, 1);
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

void func_927()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1401(&uVar4, &iVar1, &iVar2, &iVar3)))
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

bool func_964()
{
	if (!bLocal_398)
	{
		iLocal_396 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_397, 1, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_396))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_396);
			bLocal_398 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_396))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_396, true, false))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_396, "pl_leadout"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_396, "pl_leadout");
			}
			return true;
		}
	}
	return false;
}

bool func_965(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (__LIB_6__::func_803())
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
		{
			vVar0 = { __LIB_1__::func_384(0) };
			vVar3 = { vVar0 * Vector(300f, 300f, 300f) + Global_36 };
			if (__LIB_3__::func_874(Global_36, vVar3, vParam0, fParam3))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1016(var uParam0, int iParam1, int iParam2)
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
		return func_1016(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1090(vector3 vParam0, float fParam3)
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	PED::GET_PED_NEARBY_PEDS(Global_35, &iVar0, -1, -1);
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar21]))
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar21]))
			{
				iVar22 = PED::GET_PED_TYPE(iVar0[iVar21]);
				if (((iVar22 == 28 && BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar0[iVar21], true, false)) < fParam3) && !PED::IS_PED_FLEEING(iVar0[iVar21])) && !func_1513(iVar0[iVar21]))
				{
					if (__LIB_8__::func_649(iVar0[iVar21]))
					{
						TASK::TASK_SMART_FLEE_COORD(iVar0[iVar21], vParam0, 200f, -1, false, 1077936128);
						PED::SET_PED_KEEP_TASK(iVar0[iVar21], true);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0[iVar21])))
					{
						PED::_0xBAE08F00021BFFB2(iVar0[iVar21], 0);
						PED::_0x06D26A96CA1BCA75(iVar0[iVar21], 3, 1f, 0);
					}
				}
			}
		}
		iVar21++;
	}
}

void func_1091(vector3 vParam0)
{
	if (BUILTIN::VDIST(Global_36, vParam0) < 50f)
	{
		if (!bLocal_335)
		{
			TASK::TASK_LOOK_AT_COORD(Global_35, vParam0, 3000, 0, 51, 0);
		}
	}
	if (func_796() && vParam0.z < (Global_36.f_2 + 7f))
	{
		if (BUILTIN::VDIST(Global_36, vParam0) < 10f)
		{
			TASK::TASK_PLAY_ANIM(Global_35, sLocal_283, "front_long", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		}
		else if (BUILTIN::VDIST(Global_36, vParam0) < 20f)
		{
			TASK::TASK_PLAY_ANIM(Global_35, sLocal_283, "front_short", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		}
		__LIB_1__::func_148(&uLocal_156);
		bLocal_427 = true;
	}
}

void func_1236(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1632();
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

void func_1238(var uParam0)
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
			func_1640(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1640(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1239(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1640(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1326()
{
	if (!bLocal_404)
	{
		iLocal_406 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_409, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_406))
		{
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_406, "JOHN", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_406, "ARTHUR", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_406, "s_switchpuzzle01x", iLocal_27[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_406, "s_switchpuzzle01x_lever_2", iLocal_27[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_406, "s_switchpuzzle01x_lever_3", iLocal_27[2], 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_406);
			bLocal_404 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_406))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_406, true, false))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_406, "pl_enter"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_406, "pl_enter");
			}
			return true;
		}
	}
	return false;
}

void func_1327(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*iParam0 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*iParam1 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

bool func_1328()
{
	if (!bLocal_405)
	{
		iLocal_407 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_409, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_407))
		{
			if (iLocal_364 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x", iLocal_23[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x_lever_2", iLocal_27[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x_lever_3", iLocal_27[2], 0);
			}
			else if (iLocal_364 == 1)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x", iLocal_27[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x_lever_2", iLocal_23[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x_lever_3", iLocal_27[2], 0);
			}
			else if (iLocal_364 == 2)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x", iLocal_27[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x_lever_2", iLocal_27[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_407, "s_switchpuzzle01x_lever_3", iLocal_23[2], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_407);
			bLocal_405 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_407))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_407, true, false))
		{
			return true;
		}
	}
	return false;
}

void func_1329()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_407))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_407);
	}
	iLocal_407 = -1;
	bLocal_405 = false;
}

bool func_1333()
{
	if (!bLocal_387)
	{
		iLocal_390 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_391, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_390))
		{
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_390, "JOHN", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_390, "ARTHUR", Global_35, 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_390);
			bLocal_387 = true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_390))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_390, true, false))
		{
			return true;
		}
	}
	return false;
}

void func_1375()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1727(0);
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
	func_1727(1);
}

void func_1376()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_296(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1377()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1730(0);
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
	func_1730(1);
}

void func_1378()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1730(0);
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
	func_1730(1);
}

void func_1379()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_296(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_296(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_377(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_377(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1401(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1748(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_296(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1513(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 == iLocal_16[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1632()
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
	iVar0 = func_1849(6291456, 0);
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

void func_1640(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1640(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1640(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1727(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_296(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1885(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_893(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_377(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1891(Var0);
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

void func_1730(bool bParam0)
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
		func_296(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_296(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_377(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_377(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_377(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1748(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1748(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1748(iVar63, -915411861, 1, 0, 0));
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

int func_1849(int iParam0, int iParam1)
{
	var uVar0;
	return func_1964(&uVar0, iParam0, iParam1);
}

void func_1885(int iParam0)
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
	func_377(iParam0, 1, 1, -142743235, 1);
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
		func_377(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1891(struct<6> Param0)
{
	if (!func_1999(Param0.f_4, 1))
	{
	}
	if (!func_1999(Param0, 1))
	{
	}
	if (!func_1999(Param0.f_2, 1))
	{
	}
	if (!func_1999(Param0.f_5, 1))
	{
	}
	if (!func_1999(Param0.f_3, 1))
	{
	}
	if (!func_1999(Param0.f_1, 1))
	{
	}
}

int func_1964(var uParam0, int iParam1, int iParam2)
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
		return func_1964(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1999(int iParam0, int iParam1)
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
				if (func_1999(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1999(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1999(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1999(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

