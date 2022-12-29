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
	var uLocal_17[2] = { 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	struct<9> Local_29[3];
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	vector3 vLocal_103 = { 0f, 0f, 0f };
	float fLocal_106 = 0f;
	vector3 vLocal_107 = { 0f, 0f, 0f };
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	float fLocal_114 = 0f;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	float fLocal_118 = 0f;
	struct<16> Local_119[3];
	struct<17> Local_168[2];
	vector3 vLocal_203 = { 0f, NaNf, 0f };
	var uLocal_206 = -1;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 1073741824;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 1;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	bool bLocal_290 = false;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	vector3 vLocal_296[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_315 = 0;
	struct<6> Local_316 = { 3, 0, 0, 0, 0, 96 } ;
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
	struct<4> Local_421[2];
	struct<6> Local_430 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_436 = -1082130432;
	var uLocal_437 = 0;
	vector3 vLocal_438[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<6> Local_448[14];
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_61 = -1;
	fLocal_72 = 0.5f;
	fLocal_73 = 0f;
	fLocal_74 = 10000f;
	iLocal_76 = 1;
	sLocal_92 = "rcm_rwarv3_ride_1";
	sLocal_93 = "rcm_rwarv3_ride_2";
	sLocal_94 = "rcm_rwarv3_wolf_initial";
	sLocal_95 = "rcm_rwarv3_walk";
	sLocal_96 = "rcm_rwarv3_wolf";
	sLocal_97 = "rcm_rwarv3_wolf_prints";
	sLocal_98 = "amb_creature_mammal@world_wolf_howling@idle";
	sLocal_99 = "CREATURES_MAMMAL@WOLF@MELEE@ATTACKS@STREAMED_CORE";
	sLocal_100 = "jump_attack_0";
	sLocal_101 = "amb_creature_mammal@world_dog_bark_growl@idle";
	sLocal_102 = "idle_a";
	vLocal_103 = { 1351.128f, 1757.988f, 220.6812f };
	fLocal_106 = 20.6565f;
	vLocal_107 = { 1347.922f, 1758.81f, 220.715f };
	fLocal_110 = 200.8085f;
	vLocal_111 = { 1359.18f, 1754.236f, 220.2737f };
	fLocal_114 = 40.6988f;
	vLocal_115 = { 1348.042f, 1752.749f, 220.6634f };
	fLocal_118 = 220.3269f;
	iLocal_224 = -1;
	iLocal_226 = joaat("CS_WARVET");
	iLocal_227 = joaat("A_C_HORSE_BUELL_WARVETS");
	iLocal_228 = joaat("A_C_WOLF");
	iLocal_229 = joaat("A_C_WOLF_MEDIUM");
	iLocal_230 = joaat("P_CARCASSBONESXL01X");
	iLocal_231 = joaat("P_CARCASSBONESLG01X");
	iLocal_232 = joaat("A_C_DEER_01");
	iLocal_291 = 10;
	iLocal_292 = 3;
	iLocal_293 = 12;
	iLocal_295 = 20;
	iLocal_315 = joaat("REL_NO_RELATIONSHIP");
	iLocal_534 = 7;
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
				func_73(uParam0);
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
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_14__::func_179(uParam0);
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
		func_115(uParam0->f_174, 1);
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
		__LIB_13__::func_580(uParam0);
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
	func_115(uParam0->f_174, 0);
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
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
		func_115(uParam0->f_174, 0);
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
	__LIB_12__::func_659(uParam0, 14);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 3.5f);
	func_189();
	func_190();
	func_191();
	func_192();
	__LIB_1__::func_948(joaat("DOOR_VET_HOUSE_INT_1"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("DOOR_VET_HOUSE_INT_2"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_408(689930684, 1, 0);
	__LIB_1__::func_408(-1957523409, 0, 0);
	__LIB_14__::func_180(uParam0);
	__LIB_13__::func_488(uParam0, 32632);
	__LIB_13__::func_264(uParam0, 32714);
	__LIB_13__::func_487(uParam0, 32800);
	Local_119[0 /*16*/] = { __LIB_10__::func_449("script@rcm@warv@ig@stage_03@ig1_vetinspectspot@ig1_vetinspectspot", func_202(13)) };
	Local_119[1 /*16*/] = { __LIB_10__::func_449("script@rcm@warv@ig@stage_03@ig2_wolfattack@ig2_wolfattack", func_202(0)) };
	Local_119[2 /*16*/] = { __LIB_10__::func_449("script@rcm@warv@ig@stage_03@ig5_deadwolf@ig5_deadwolf", func_202(3)) };
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_226, 7);
	__LIB_12__::func_867(uParam0, iLocal_227, 7);
	__LIB_12__::func_867(uParam0, iLocal_228, 7);
	__LIB_12__::func_867(uParam0, iLocal_229, 7);
	__LIB_12__::func_867(uParam0, iLocal_230, 7);
	__LIB_12__::func_867(uParam0, iLocal_231, 7);
	__LIB_12__::func_867(uParam0, iLocal_232, 7);
	__LIB_12__::func_867(uParam0, Local_29[2 /*9*/].f_7, 7);
	__LIB_12__::func_867(uParam0, Local_29[0 /*9*/].f_7, 7);
	__LIB_12__::func_867(uParam0, Local_29[1 /*9*/].f_7, 7);
	__LIB_13__::func_55(uParam0, sLocal_98, 7);
	__LIB_13__::func_55(uParam0, sLocal_99, 7);
	__LIB_13__::func_55(uParam0, sLocal_101, 7);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_92);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_93);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_94);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_95);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_96);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_97);
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
			Var1 = { func_218(29) };
			Var1.f_3 = func_219(29);
			break;
		case 1:
			Var1 = { func_218(30) };
			Var1.f_3 = func_219(30);
			break;
		case 2:
			Var1 = { func_218(31) };
			Var1.f_3 = func_219(31);
			break;
		case 3:
			Var1 = { func_218(32) };
			Var1.f_3 = func_219(32);
			break;
		case 4:
			Var1 = { func_218(33) };
			Var1.f_3 = func_219(33);
			break;
		case 5:
			Var1 = { func_218(34) };
			Var1.f_3 = func_219(34);
			break;
		case 6:
			Var1 = { func_218(35) };
			Var1.f_3 = func_219(35);
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
	if (func_221(&iLocal_14))
	{
		StringCopy(&(uParam0->f_2578), "RWARV_F_VET", 24);
		return true;
	}
	if (__LIB_0__::func_255(iLocal_15, 0))
	{
		StringCopy(&(uParam0->f_2578), "WARV_F_HORSE", 24);
		return true;
	}
	if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_14, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_14, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true))
	{
		StringCopy(&(uParam0->f_2578), "WARV_F_VETAT", 24);
		return true;
	}
	if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true))
	{
		StringCopy(&(uParam0->f_2578), "WARV_F_HSEAT", 24);
		return true;
	}
	if ((((iLocal_295 == 15 || iLocal_295 == 16) || iLocal_295 == 14) || iLocal_295 == 13) || iLocal_295 == 12)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_14, 30f, 1))
		{
			if (((((((__LIB_0__::func_48(Global_35, vLocal_296[5 /*3*/], 8f, 0) || __LIB_0__::func_48(Global_35, vLocal_296[2 /*3*/], 8f, 0)) || __LIB_0__::func_48(Global_35, vLocal_296[3 /*3*/], 8f, 0)) || __LIB_0__::func_48(Global_35, vLocal_296[4 /*3*/], 8f, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(vLocal_296[5 /*3*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(vLocal_296[2 /*3*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(vLocal_296[3 /*3*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(vLocal_296[4 /*3*/]))
			{
				StringCopy(&(uParam0->f_2578), "RWARV_F_VET", 24);
				return true;
			}
		}
	}
	if (func_224())
	{
		StringCopy(&(uParam0->f_2578), "RWARV_F_DIST", 24);
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	__LIB_14__::func_192(20, 1, 1);
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
		if (__LIB_0__::func_6(iVar0) && func_227(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_12__::func_643(uParam0, 12);
			return true;
		}
	}
	if (func_228(uParam0->f_174))
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
	if (func_237(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_242(uParam0);
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
		func_246(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		func_115(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
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

void func_73(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = __LIB_11__::func_131(uParam0->f_174);
			if ((Global_1347702[uParam0->f_174 /*49*/].f_36 != joaat("BLIP_RC") || __LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_252(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		__LIB_12__::func_664(uParam0->f_174, fVar3);
		func_254(uParam0->f_174, vVar0, fVar3);
		__LIB_12__::func_621(uParam0->f_174);
		__LIB_12__::func_622(uParam0->f_174);
	}
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
			func_257(uParam0);
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
	return iLocal_293;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_282(uParam0))
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
		func_115(uParam0->f_174, 0);
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_301(uParam0, 0);
}

void func_91(var uParam0)
{
	__LIB_0__::func_11(uParam0, &iLocal_14);
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
		if (uParam0->f_171 != 0 || func_303(uParam0))
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
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = true;
	iVar1 = iParam1;
	vVar2 = { func_61(iParam1) };
	func_307();
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iVar1 == 4)
	{
		__LIB_1__::func_683(&iLocal_63, 33554432);
	}
	if (!bLocal_78)
	{
		PED::_0x9851DE7AEC10B4E1(vVar2, 50f, 1, 0);
		bLocal_78 = true;
	}
	if (!func_309(uParam0))
	{
		bVar0 = false;
	}
	if (iVar1 == 0)
	{
		if (__LIB_12__::func_936(uParam0))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 16))
			{
				__LIB_13__::func_33(uParam0, 0);
				func_87(uParam0);
			}
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			return 5;
		}
		else if (((func_312(uParam0) && func_313(uParam0)) && func_314(uParam0, 0, 1)) && func_315(uParam0, 0))
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		if (iVar1 == 1 || iVar1 == 2)
		{
			if (!func_312(uParam0))
			{
				bVar0 = false;
			}
		}
		if ((func_316(uParam0) && func_314(uParam0, 0, 1)) && func_315(uParam0, 0))
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	if ((!PED::_0xA0BC8FAED8CFEB3C(iLocal_14) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_15)) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_16))
	{
		bVar0 = false;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_14, joaat("WEAPON_REPEATER_CARBINE"), 0, false))
	{
		__LIB_1__::func_766(iLocal_14, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_899(&uLocal_260))
	{
		switch (iVar1)
		{
			case 0:
				if (func_318(1f))
				{
					return 7;
				}
				else
				{
					return 2;
				}
				break;
			case 1:
				if (func_318(1f))
				{
					return 7;
				}
				else
				{
					return 2;
				}
				break;
			case 2:
				if (func_318(1f))
				{
					return 7;
				}
				else
				{
					return 2;
				}
				break;
			case 3:
				if (func_318(1f))
				{
					return 7;
				}
				else
				{
					return 2;
				}
				break;
			case 4:
				if (func_318(1f))
				{
					return 7;
				}
				else
				{
					return 2;
				}
				break;
			case 5:
				if (__LIB_0__::func_1(uParam0->f_172, 1))
				{
					if (func_318(1f))
					{
						return 5;
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
				break;
			case 6:
				if (__LIB_0__::func_1(uParam0->f_172, 1))
				{
					if (func_318(1f))
					{
						return 5;
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
				break;
		}
	}
	switch (iVar1)
	{
		case 0:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(7), func_219(7), true, false, true);
			TASK::TASK_STAND_STILL(iLocal_15, -1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(4), func_219(4), true, false, true);
			TASK::TASK_STAND_STILL(iLocal_16, -1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, func_218(7), func_219(7), true, false, true);
			__LIB_1__::func_571(iLocal_14, iLocal_15, 0, -1, 1);
			__LIB_1__::func_571(Global_35, iLocal_16, 0, -1, 1);
			func_320(uParam0, 0, 1);
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_2__::func_259(&uLocal_260);
			return 2;
		case 1:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, 1462.618f, 1614.618f, 193.4522f, 292.0233f, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(30), func_219(30), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, 1462.618f, 1614.618f, 193.4522f, 292.0233f, true, false, true);
			__LIB_1__::func_571(iLocal_14, iLocal_15, 0, -1, 1);
			__LIB_1__::func_571(Global_35, iLocal_16, 0, -1, 1);
			func_320(uParam0, 0, 1);
			func_321(2, 0);
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_2__::func_259(&uLocal_260);
			return 2;
		case 2:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(8), func_219(8), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, func_218(8), func_219(8), true, false, true);
			__LIB_1__::func_571(iLocal_14, iLocal_15, 0, -1, 1);
			if (!__LIB_0__::func_255(iLocal_16, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(5), func_219(5), true, false, true);
				PED::_SET_PED_ON_MOUNT(Global_35, iLocal_16, -1, true);
			}
			func_320(uParam0, 0, 1);
			func_320(uParam0, 1, 1);
			func_320(uParam0, 4, 1);
			func_321(12, 1);
			__LIB_13__::func_638(&Local_316, 11);
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[1 /*3*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[1 /*3*/], 1378.857f, 1689.706f, 209.6382f, 127.108f, true, false, true);
				func_323(5);
			}
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_2__::func_259(&uLocal_260);
			return 2;
		case 3:
			if (!bVar0)
			{
				return 2;
			}
			iLocal_533 = iLocal_534;
			func_320(uParam0, 0, 1);
			func_320(uParam0, 1, 1);
			func_320(uParam0, 4, 1);
			func_320(uParam0, 5, 1);
			func_320(uParam0, 6, 1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, 1299.067f, 1717.11f, 234.0886f, 17.53f, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_218(32), func_219(32), true, false, true);
			if (!__LIB_0__::func_255(iLocal_15, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, 1296.971f, 1711.508f, 235.4553f, 183.6041f, true, false, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_15, func_218(10), 1.75f, -1, 10f, 0, 40000f);
			}
			if (!__LIB_0__::func_255(iLocal_16, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_16, true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, 1300.393f, 1708.799f, 234.3693f, 184.1953f, true, false, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_16, func_218(10), 1.75f, -1, 10f, 0, 40000f);
				AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 1);
				__LIB_0__::func_798(7);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_14, WEAPON::GET_BEST_PED_WEAPON(iLocal_14, false, false), true, 0, false, false);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, func_325(0, 0), true, 0, false, false);
			__LIB_1__::func_683(&iLocal_63, 16777216);
			func_321(14, 1);
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_2__::func_259(&uLocal_260);
			return 2;
		case 4:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, 1345.183f, 1762.666f, 220.7554f, 248.0037f, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(10), func_219(10), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(10), func_219(10), true, false, true);
			func_320(uParam0, 7, 1);
			func_321(17, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_14, WEAPON::GET_BEST_PED_WEAPON(iLocal_14, false, false), true, 0, false, false);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, func_325(0, 0), true, 0, false, false);
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_2__::func_259(&uLocal_260);
			return 2;
		case 5:
			if (!bVar0)
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, func_218(37), func_219(37), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(10), func_219(10), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(10), func_219(10), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[2 /*3*/], vLocal_103, fLocal_106, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[3 /*3*/], vLocal_107, fLocal_110, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[4 /*3*/], vLocal_111, fLocal_114, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[5 /*3*/], vLocal_115, fLocal_118, false, false, true);
			func_326(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_14, WEAPON::GET_BEST_PED_WEAPON(iLocal_14, false, false), true, 0, false, false);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, func_325(0, 0), true, 0, false, false);
			__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			func_301(uParam0, 1);
			__LIB_2__::func_259(&uLocal_260);
			return 2;
		case 6:
			if (!bVar0)
			{
				return 2;
			}
			if (!func_327(2, 0, func_202(3)))
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, func_218(37), func_219(37), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(10), func_219(10), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(10), func_219(10), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[2 /*3*/], vLocal_103, fLocal_106, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[3 /*3*/], vLocal_107, fLocal_110, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[4 /*3*/], vLocal_111, fLocal_114, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[5 /*3*/], vLocal_115, fLocal_118, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[0 /*3*/], 1352.481f, 1748.261f, 220.6728f, 96.0595f, false, false, true);
			func_326(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				WEAPON::_0x94A3C1B804D291EC(iLocal_14, 0, 0, 1, 1);
			}
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			func_301(uParam0, 2);
			__LIB_2__::func_259(&uLocal_260);
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
		if (!__LIB_13__::func_448(uParam0))
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
	return func_340(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_292)
	{
		case 0:
			PED::_0x2EB75FB86C41F026(iLocal_15, 3, 1);
			__LIB_4__::func_89(&uLocal_263, 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_14, joaat("WEAPON_REPEATER_CARBINE"), 0, false))
			{
				__LIB_1__::func_766(iLocal_14, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			__LIB_2__::func_426(&iLocal_21);
			if (__LIB_0__::func_27(iLocal_63, 1))
			{
				__LIB_2__::func_426(&(vLocal_296[2 /*3*/]));
				__LIB_2__::func_426(&(vLocal_296[3 /*3*/]));
				__LIB_2__::func_426(&(vLocal_296[4 /*3*/]));
				__LIB_2__::func_426(&(vLocal_296[5 /*3*/]));
				__LIB_2__::func_426(&(vLocal_296[0 /*3*/]));
				__LIB_2__::func_426(&(vLocal_296[1 /*3*/]));
				__LIB_1__::func_681(&iLocal_63, 1);
				__LIB_1__::func_681(&(vLocal_296[2 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[3 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[4 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[5 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[0 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[1 /*3*/].f_2), 1);
			}
			func_320(uParam0, 0, 1);
			return 7;
		case 1:
			func_320(uParam0, 11, 0);
			func_301(uParam0, 2);
			return 7;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				WEAPON::_0x94A3C1B804D291EC(iLocal_14, 0, 0, 1, 1);
			}
			__LIB_2__::func_426(&iLocal_15);
			__LIB_1__::func_864(vLocal_296[0 /*3*/], 1, 0);
			if (!__LIB_0__::func_27(iLocal_65, 1))
			{
				if (func_327(2, 0, func_202(3)))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_119[2 /*16*/]);
					__LIB_1__::func_683(&iLocal_65, 1);
				}
			}
			func_320(uParam0, 12, 0);
			return 8;
		case 3:
			break;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_448(uParam0))
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
		if (func_347(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[5 /*3*/]))
	{
		PED::SET_PED_RESET_FLAG(vLocal_296[5 /*3*/], 170, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[1 /*3*/]))
	{
		PED::SET_PED_RESET_FLAG(vLocal_296[1 /*3*/], 170, true);
	}
	func_309(uParam0);
	if (iLocal_293 == 0)
	{
		if ((func_312(uParam0) && func_313(uParam0)) && func_314(uParam0, 0, 0))
		{
		}
		else
		{
			return 7;
		}
	}
	else if (func_316(uParam0) && func_314(uParam0, 0, 0))
	{
	}
	else
	{
		return 7;
	}
	if (iLocal_293 < 5)
	{
		if (!__LIB_0__::func_27(iLocal_63, 536870912))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
			{
				if (__LIB_14__::func_193(iLocal_58, sLocal_94, 1, 0.762f, 0.2f, 0, 0, 1))
				{
					__LIB_1__::func_683(&iLocal_63, 536870912);
				}
			}
		}
	}
	func_350(uParam0);
	func_351();
	if (iLocal_293 >= 4)
	{
		func_352();
		if (!__LIB_0__::func_27(iLocal_63, 268435456))
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[5 /*3*/]))
			{
				if (__LIB_14__::func_193(vLocal_296[5 /*3*/], sLocal_97, 1, 0.762f, 0.2f, 0, 0, 1))
				{
					__LIB_1__::func_683(&iLocal_63, 268435456);
				}
			}
		}
	}
	func_307();
	if (iLocal_293 != 0 && iLocal_293 != 4)
	{
		__LIB_1__::func_538(0);
	}
	switch (iLocal_293)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_63, 128))
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_1__::func_683(&iLocal_63, 128);
				PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, false);
			}
			func_354(uParam0);
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_63, 128))
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_1__::func_683(&iLocal_63, 128);
			}
			func_355(uParam0);
			break;
		case 2:
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			func_320(uParam0, 3, 0);
			break;
		case 3:
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			__LIB_12__::func_773(0, 0, 1, 1);
			if (__LIB_9__::func_178(&uLocal_239) <= 2f)
			{
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, vLocal_296[1 /*3*/], 0, -1f, -1f, -1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				}
			}
			if (__LIB_9__::func_178(&uLocal_239) >= 6f)
			{
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				func_320(uParam0, 4, 0);
			}
			else if (__LIB_9__::func_178(&uLocal_239) >= 3f)
			{
				if (!bLocal_81)
				{
					func_321(10, 0);
					bLocal_81 = true;
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(iLocal_63, 128))
			{
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_1__::func_683(&iLocal_63, 128);
			}
			func_358(uParam0);
			func_359(uParam0, 1);
			if (iLocal_295 == 14 || iLocal_295 == 13)
			{
				if (__LIB_0__::func_266(Global_35, func_218(36), 20f, 1, 1))
				{
					func_320(uParam0, 5, 0);
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iLocal_63, 128))
			{
				__LIB_5__::func_511(1);
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_1__::func_683(&iLocal_63, 128);
			}
			if (!__LIB_0__::func_27(iLocal_63, 16384))
			{
				__LIB_1__::func_448(Global_35, func_218(36), 0, 15f, 10f, 9f, 8f, 1, 1, 1, 0);
				if (__LIB_0__::func_71(Global_35))
				{
					if (!__LIB_0__::func_899(&uLocal_251))
					{
						if (__LIB_0__::func_163(iLocal_14, 501393341) || !__LIB_0__::func_71(iLocal_14))
						{
							__LIB_2__::func_259(&uLocal_251);
						}
					}
					else if (__LIB_9__::func_178(&uLocal_251) > 1f)
					{
						if (!__LIB_0__::func_163(Global_35, 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
							PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
						}
					}
				}
				else
				{
					__LIB_1__::func_683(&iLocal_63, 16384);
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
					__LIB_1__::func_561(&uLocal_251);
				}
			}
			else
			{
				func_320(uParam0, 6, 0);
			}
			break;
		case 6:
			func_365();
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			if (__LIB_0__::func_27(iLocal_66, 8))
			{
				if (__LIB_0__::func_27(iLocal_66, 2))
				{
					func_359(uParam0, 2);
				}
				else if (__LIB_0__::func_27(iLocal_66, 4))
				{
					func_359(uParam0, 1);
				}
				else
				{
					func_359(uParam0, 4);
				}
			}
			else
			{
				func_359(uParam0, 1);
			}
			if (!__LIB_0__::func_27(iLocal_63, 16777216))
			{
				if (func_366(uParam0, &Local_316, vLocal_438[2 /*3*/].f_2, &iLocal_14, 0, 25f, 0) == 3)
				{
					if (__LIB_0__::func_48(Global_35, iLocal_16, 10f, 0))
					{
						if (PED::IS_PED_MALE(PED::_GET_LAST_MOUNT(Global_35)))
						{
							func_366(uParam0, &Local_316, 24, &Global_35, 0, 1097859072 /* Float: 15f */, 0);
						}
						else
						{
							func_366(uParam0, &Local_316, 25, &Global_35, 0, 1097859072 /* Float: 15f */, 0);
						}
					}
				}
			}
			if (__LIB_0__::func_48(Global_35, vLocal_296[5 /*3*/], 15f, 0) || iLocal_295 == 17)
			{
				if (func_367())
				{
					func_320(uParam0, 7, 0);
				}
				else
				{
					Jump @1400; //curOff = 1309
					if ((ENTITY::IS_ENTITY_DEAD(vLocal_296[5 /*3*/]) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(vLocal_296[5 /*3*/], true, false), 30f, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(vLocal_296[5 /*3*/]))
					{
						__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
						func_320(uParam0, 8, 0);
					}
					else
					{
						Jump @1628; //curOff = 1400
						if (!__LIB_0__::func_27(iLocal_63, 128))
						{
							__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
							__LIB_1__::func_683(&iLocal_63, 128);
						}
						func_368(uParam0);
						if (__LIB_0__::func_48(Global_35, iLocal_14, 20f, 1))
						{
							func_359(uParam0, 64);
						}
						Jump @1628; //curOff = 1475
						func_369(uParam0);
						Jump @1628; //curOff = 1484
						func_370(uParam0);
						Jump @1628; //curOff = 1493
						if (!__LIB_0__::func_27(iLocal_63, 128))
						{
							__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
							__LIB_1__::func_683(&iLocal_63, 128);
						}
						if (!__LIB_0__::func_899(&uLocal_257))
						{
							__LIB_2__::func_259(&uLocal_257);
						}
						else if (__LIB_9__::func_178(&uLocal_257) > 2f && !__LIB_6__::func_904())
						{
							__LIB_1__::func_561(&uLocal_257);
							return 5;
						}
						Jump @1628; //curOff = 1589
						if (func_372(uParam0))
						{
							__LIB_1__::func_864(vLocal_296[0 /*3*/], 1, 0);
							return 5;
						}
						Jump @1628; //curOff = 1617
						return 8;
					}
				}
				return 7;
			}
			default:
				break;
	}
}

void func_115(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		__LIB_4__::func_181(&(Global_1347702[iParam0 /*49*/].f_14));
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		__LIB_5__::func_250(iParam0);
		if ((!__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			__LIB_0__::func_325(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			__LIB_4__::func_838(iParam0, 16384);
			func_381(iParam0, 1, __LIB_1__::func_440(iParam0));
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
	func_401(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		func_402(Global_1347702[iParam0 /*49*/].f_35);
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
		func_405();
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
		func_408(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_409(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (__LIB_0__::func_266(Global_35, vLocal_115, 100f, 0, 1))
	{
		bVar0 = false;
	}
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		if (__LIB_0__::func_266(Global_35, func_218(9), 150f, 0, 1))
		{
			bVar0 = false;
		}
	}
	if (__LIB_6__::func_904())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (func_436(uParam0, &Local_316, 28, &iLocal_14, &uLocal_75))
		{
			return false;
		}
	}
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			func_437();
			if (!__LIB_0__::func_27(iLocal_65, 1))
			{
				if (func_327(2, 0, func_202(3)))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_119[2 /*16*/]);
					__LIB_1__::func_683(&iLocal_65, 1);
				}
			}
			else if (__LIB_9__::func_178(&uLocal_266) > IntToFloat(iLocal_71) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_14))
			{
				if (!__LIB_0__::func_27(iLocal_65, 2))
				{
					if (func_438(2, func_202(4)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 2);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_65, 4))
				{
					if (func_438(2, func_202(5)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 4);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_65, 8))
				{
					if (func_438(2, func_202(6)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 8);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_65, 16))
				{
					if (func_438(2, func_202(7)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 16);
						__LIB_1__::func_681(&iLocal_65, 128);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_65, 32))
				{
					if (func_438(2, func_202(8)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 32);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_65, 64))
				{
					if (func_438(2, func_202(9)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 64);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_65, 128))
				{
					if (func_438(2, func_202(10)))
					{
						__LIB_2__::func_259(&uLocal_266);
						iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(20, 30);
						__LIB_1__::func_683(&iLocal_65, 128);
						__LIB_1__::func_681(&iLocal_65, 16);
						__LIB_1__::func_681(&iLocal_65, 32);
						__LIB_1__::func_681(&iLocal_65, 64);
					}
				}
			}
			break;
		case 1:
			break;
		case 11:
			break;
		case 3:
			break;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
	}
	func_439(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_119[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_119[iVar0 /*16*/]);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_57);
	}
	__LIB_2__::func_788(&iLocal_16, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_15, 1, 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_315);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_226);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_227);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_228);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_229);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_230);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_231);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_232);
	STREAMING::REMOVE_ANIM_DICT(sLocal_98);
	STREAMING::REMOVE_ANIM_DICT(sLocal_99);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_92);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_94);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_93);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_95);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_96);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_97);
	__LIB_2__::func_426(&iLocal_21);
	if (bLocal_89)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
		{
			__LIB_3__::func_241(iLocal_28, 0);
		}
	}
	__LIB_0__::func_172(iLocal_28);
	__LIB_2__::func_353(&uLocal_26, 1);
	__LIB_2__::func_353(&uLocal_27, 1);
}

void func_189()
{
	__LIB_13__::func_634(&Local_316);
	__LIB_13__::func_635(&Local_316, 7, "WAR3_RIDE1");
	__LIB_13__::func_635(&Local_316, 0, "WAR3_RIDE0");
	__LIB_13__::func_635(&Local_316, 4, "RWARV_3_UP");
	__LIB_13__::func_635(&Local_316, 5, "WAR3_RIDE3");
	__LIB_13__::func_635(&Local_316, 6, "RWARV_3_TOP");
	if (!__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&Local_316, 1, "RWARV_3_ARBANT");
		__LIB_13__::func_635(&Local_316, 2, "WAR3_RIDE2");
		__LIB_13__::func_635(&Local_316, 3, "RWARV_3_AHUNT");
		__LIB_13__::func_635(&Local_316, 9, "WAR3_CARCASS");
		__LIB_13__::func_635(&Local_316, 8, "WAR3_LANDSCAPE");
	}
	else
	{
		__LIB_13__::func_635(&Local_316, 1, "RWARV_3_JRBANT");
		__LIB_13__::func_635(&Local_316, 2, "WAR3_JRIDE2");
		__LIB_13__::func_635(&Local_316, 3, "RWARV_3_JHUNT");
		__LIB_13__::func_635(&Local_316, 9, "WAR3_JCARCASS");
		__LIB_13__::func_635(&Local_316, 8, "WAR3_JLANDSCAPE");
	}
	__LIB_13__::func_635(&Local_316, 10, "WAR1_GOTSHY");
	if (__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&Local_316, 11, "WAR1_CHASEW_J");
	}
	else
	{
		__LIB_13__::func_635(&Local_316, 11, "WAR1_CHASEW_A");
	}
	__LIB_13__::func_635(&Local_316, 12, "WAR3_AMBUSH");
	__LIB_13__::func_635(&Local_316, 13, "WAR3_FIGHT0");
	__LIB_13__::func_635(&Local_316, 14, "WAR3_FIGHT1");
	__LIB_13__::func_635(&Local_316, 15, "WAR3_DIR0");
	__LIB_13__::func_635(&Local_316, 16, "WAR3_DIR1");
	__LIB_13__::func_635(&Local_316, 17, "WAR3_DIR1B");
	__LIB_13__::func_635(&Local_316, 18, "WAR3_DIR2");
	__LIB_13__::func_635(&Local_316, 19, "WAR3_DIR3");
	if (!__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&Local_316, 24, "WAR3_SHOO_HRSEM");
		__LIB_13__::func_635(&Local_316, 25, "WAR3_SHOO_HRSEF");
	}
	else
	{
		__LIB_13__::func_635(&Local_316, 24, "WAR3_SHOOHRSEMJ");
		__LIB_13__::func_635(&Local_316, 25, "WAR3_SHOOHRSEFJ");
	}
	__LIB_13__::func_635(&Local_316, 26, "WAR3_KEEPUP");
	__LIB_13__::func_635(&Local_316, 27, "WAR3_OFFTRACK");
	__LIB_13__::func_635(&Local_316, 20, "WAR3_POST0");
	__LIB_13__::func_635(&Local_316, 21, "WAR3_POST1");
	__LIB_13__::func_635(&Local_316, 22, "WAR3_POST2");
	__LIB_13__::func_635(&Local_316, 23, "WAR3_POST3");
	__LIB_13__::func_635(&Local_316, 29, "WAR3_HOWL_08");
	__LIB_13__::func_635(&Local_316, 30, "WAR3_WALK_1");
	__LIB_13__::func_635(&Local_316, 31, "WAR3_WALK_2");
	__LIB_13__::func_635(&Local_316, 32, "WAR3_WALK_3");
	__LIB_13__::func_635(&Local_316, 33, "WAR3_WALK_4");
	__LIB_13__::func_635(&Local_316, 34, "WAR3_WALK_5");
	__LIB_13__::func_635(&Local_316, 35, "WAR3_WALK_6");
	__LIB_13__::func_635(&Local_316, 41, "WAR3_QUESTION");
	__LIB_13__::func_635(&Local_316, 42, "WAR3_QUESTIONH");
	if (!__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&Local_316, 43, "WAR3_CHOICELEAD");
		__LIB_13__::func_635(&Local_316, 44, "WAR3_CHOICEFLLW");
		__LIB_13__::func_635(&Local_316, 36, "WAR3_LEAD_A1");
		__LIB_13__::func_635(&Local_316, 37, "WAR3_LEAD_AJ2");
		__LIB_13__::func_635(&Local_316, 38, "WAR3_LEAD_A3");
		__LIB_13__::func_635(&Local_316, 39, "WAR3_LEAD_AJ4");
		__LIB_13__::func_635(&Local_316, 40, "WAR3_CHAT1_A");
		__LIB_13__::func_635(&Local_316, 49, "WAR3_FIGHTA");
		__LIB_13__::func_635(&Local_316, 50, "WAR3_FIGHT1");
	}
	else
	{
		__LIB_13__::func_635(&Local_316, 43, "WAR3_CHOICELEAJ");
		__LIB_13__::func_635(&Local_316, 44, "WAR3_CHOICEFLWJ");
		__LIB_13__::func_635(&Local_316, 36, "WAR3_LEAD_J1");
		__LIB_13__::func_635(&Local_316, 37, "WAR3_LEAD_AJ2");
		__LIB_13__::func_635(&Local_316, 38, "WAR3_LEAD_J3");
		__LIB_13__::func_635(&Local_316, 39, "WAR3_LEAD_AJ4");
		__LIB_13__::func_635(&Local_316, 40, "WAR3_CHAT1_J");
		__LIB_13__::func_635(&Local_316, 49, "WAR3_FIGHTJ");
		__LIB_13__::func_635(&Local_316, 50, "WAR3_FIGHT1J");
	}
	__LIB_13__::func_635(&Local_316, 45, "WAR3_SPOT");
	__LIB_13__::func_635(&Local_316, 46, "WAR3_GETCLOSE");
	__LIB_13__::func_635(&Local_316, 47, "WAR3_MOREWOLVES");
	__LIB_13__::func_635(&Local_316, 48, "WAR3_FIGHT0");
	__LIB_13__::func_635(&Local_316, 51, "WAR3_FIGHT2");
	if (__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&Local_316, 52, "WAR1_MONST_JHN");
	}
	else
	{
		__LIB_13__::func_635(&Local_316, 52, "WAR1_MONST_ART");
	}
}

void func_190()
{
	vLocal_438[0 /*3*/] = 6;
	vLocal_438[0 /*3*/].f_2 = 15;
	vLocal_438[1 /*3*/] = 15;
	vLocal_438[1 /*3*/].f_2 = 18;
	vLocal_438[2 /*3*/] = 20;
	vLocal_438[2 /*3*/].f_2 = 19;
}

void func_191()
{
	Local_448[0 /*6*/].f_1 = { 1201.652f, 1888.043f, 323.3954f };
	Local_448[0 /*6*/].f_5 = 14;
	Local_448[1 /*6*/].f_1 = { 1163.227f, 1947.196f, 326.7307f };
	Local_448[1 /*6*/].f_5 = 19;
	Local_448[2 /*6*/].f_1 = { 1124.723f, 1953.933f, 337.7287f };
	Local_448[2 /*6*/].f_5 = 23;
	Local_448[3 /*6*/].f_1 = { 1117.736f, 1964.696f, 341.6608f };
	Local_448[3 /*6*/].f_5 = 29;
	Local_448[4 /*6*/].f_1 = { 1122.963f, 1993.685f, 344.6786f };
	Local_448[4 /*6*/].f_5 = 35;
	Local_448[5 /*6*/].f_1 = { 1098.162f, 2002.885f, 344.118f };
	Local_448[5 /*6*/].f_5 = 42;
	Local_448[6 /*6*/].f_1 = { 1110.751f, 2017.078f, 341.8436f };
	Local_448[6 /*6*/].f_5 = 44;
	Local_448[7 /*6*/].f_1 = { 1283.101f, 1740.672f, 241.0938f };
	Local_448[7 /*6*/].f_5 = 2;
	Local_448[8 /*6*/].f_1 = { 1283.451f, 1761.755f, 242.0435f };
	Local_448[8 /*6*/].f_5 = 9;
	Local_448[9 /*6*/].f_1 = { 1294.946f, 1766.449f, 235.3101f };
	Local_448[9 /*6*/].f_5 = 20;
	Local_448[10 /*6*/].f_1 = { 1303.095f, 1787.414f, 237.8604f };
	Local_448[10 /*6*/].f_5 = 32;
	Local_448[11 /*6*/].f_1 = { 1333.048f, 1754.554f, 222.3045f };
	Local_448[11 /*6*/].f_5 = 45;
	Local_448[12 /*6*/].f_1 = { 1345.774f, 1759.579f, 221.747f };
	Local_448[12 /*6*/].f_5 = 57;
	Local_448[13 /*6*/].f_1 = { 1355.906f, 1757.382f, 221.526f };
	Local_448[13 /*6*/].f_5 = 71;
}

void func_192()
{
	Local_29[0 /*9*/].f_1 = { 1697.346f, 1512.239f, 147.3227f };
	Local_29[0 /*9*/].f_4 = { -0.42f, 0.5f, -51.56f };
	Local_29[0 /*9*/].f_7 = joaat("P_CHAIR17X");
	Local_29[1 /*9*/].f_1 = { 1697.78f, 1510.45f, 146.86f };
	Local_29[1 /*9*/].f_4 = { -1.27f, -1.09f, 176.24f };
	Local_29[1 /*9*/].f_7 = joaat("P_CHAIR17X");
	Local_29[2 /*9*/].f_1 = { 1697.46f, 1508.24f, 146.88f };
	Local_29[2 /*9*/].f_4 = { 0f, 0f, 100f };
	Local_29[2 /*9*/].f_7 = joaat("P_DOOR41X");
}

int func_196(var uParam0)
{
	if (iLocal_292 == 0)
	{
		func_485(&(uParam0->f_206));
	}
	else if (iLocal_292 == 1)
	{
		func_486(&(uParam0->f_206));
	}
	else if (iLocal_292 == 2)
	{
		func_487(&(uParam0->f_206));
	}
	return 1;
}

int func_198(var uParam0)
{
	if (iLocal_292 == 0)
	{
		func_488(uParam0, &(uParam0->f_206));
	}
	else if (iLocal_292 == 1)
	{
		func_489(&(uParam0->f_206));
	}
	else if (iLocal_292 == 2)
	{
		func_490(&(uParam0->f_206));
	}
	return 1;
}

int func_200(var uParam0)
{
	if (iLocal_292 == 0)
	{
		if (func_491(uParam0, &(uParam0->f_206)))
		{
			return 1;
		}
	}
	else if (iLocal_292 == 1)
	{
		if (func_492(&(uParam0->f_206)))
		{
			return 1;
		}
	}
	else if (iLocal_292 == 2)
	{
		if (func_493(&(uParam0->f_206)))
		{
			return 1;
		}
	}
	return 0;
}

char* func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_AttackLoop";
		case 1:
			return "pl_Stab_to_Deadeye";
		case 2:
			return "pl_WarVeteran_Loop";
		case 3:
			return "pl_Base";
		case 4:
			return "pl_DLG_01";
		case 5:
			return "pl_DLG_02";
		case 6:
			return "pl_DLG_03";
		case 7:
			return "pl_Idle_01";
		case 8:
			return "pl_Idle_02";
		case 9:
			return "pl_Idle_03";
		case 10:
			return "pl_Idle_04";
		case 11:
			return "pl_Quick_Exit";
		case 12:
			return "pl_DeerIdle";
		case 13:
			return "pl_Evidence_of_Wolf_p1";
	}
	return "";
}

Vector3 func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1471.469f, 1616.094f, 195.2507f;
		case 1:
			return 1463.882f, 1614.727f, 193.7395f;
		case 3:
			return 1692.04f, 1516.468f, 145.7588f;
		case 4:
			return 1692.04f, 1516.468f, 145.7588f;
		case 5:
			return 1462.983f, 1616.581f, 193.4902f;
		case 6:
			return 1692.347f, 1510.775f, 145.7258f;
		case 7:
			return 1696.185f, 1516.81f, 145.8749f;
		case 8:
			return 1467.207f, 1620.484f, 193.9911f;
		case 9:
			return 1698.747f, 1511.004f, 146.8703f;
		case 10:
			return 1377.869f, 1648.931f, 198.4878f;
		case 11:
			return 354.1978f, 2570.505f, 441.5386f;
		case 12:
			return 119.28f, 2446.014f, 349.3629f;
		case 13:
			return 1468.934f, 1576.923f, 175.8362f;
		case 14:
			return 1407.722f, 1657.2f, 191.4279f;
		case 15:
			return 1225.959f, 1886.581f, 314.3686f;
		case 16:
			return 1216.736f, 1894.983f, 309.6481f;
		case 17:
			return 1223.243f, 1884.064f, 314.5644f;
		case 18:
			return 1214.091f, 1895.398f, 310.1805f;
		case 19:
			return 1186.398f, 1895.209f, 318.5148f;
		case 20:
			return 1157.784f, 1931.248f, 333.6292f;
		case 21:
			return 1128.269f, 1948.578f, 334.9919f;
		case 22:
			return 1128.269f, 1948.578f, 334.9919f;
		case 23:
			return 1128.269f, 1948.578f, 334.9919f;
		case 24:
			return 1128.269f, 1948.578f, 334.9919f;
		case 25:
			return 1477.72f, 1620.09f, 195.66f;
		case 26:
			return 1478.21f, 1617.99f, 196.18f;
		case 27:
			return 1472.6f, 1609.26f, 195.98f;
		case 42:
			return 352.3065f, 2559.3f, 439.8306f;
		case 43:
			return 356.7071f, 2573.244f, 442.0881f;
		case 44:
			return 352.3065f, 2559.3f, 439.8306f;
		case 45:
			return 288.8525f, 2271.458f, 310.1747f;
		case 46:
			return 268.6854f, 2253.402f, 299.2381f;
		case 47:
			return 178.7832f, 2333.85f, 325.9737f;
		case 48:
			return 169.1442f, 2379.304f, 318.6913f;
		case 49:
			return 118.8025f, 2446.696f, 349.1444f;
		case 50:
			return 127.3861f, 2444.968f, 349.8318f;
		case 36:
			return 1299.193f, 1714.412f, 234.1976f;
		case 37:
			return 1348.81f, 1752.686f, 220.654f;
		case 38:
			return 1351.202f, 1753.52f, 220.6404f;
		case 39:
			return 1346.758f, 1763.056f, 220.7347f;
		case 40:
			return 1356.538f, 1753.886f, 220.5402f;
		case 41:
			return 1351.058f, 1753.867f, 220.6449f;
		case 28:
			return 324.08f, 2308.46f, 300.31f;
		case 29:
			return 1695.06f, 1515.061f, 145.876f;
		case 30:
			return 1455.694f, 1617.707f, 191.8907f;
		case 31:
			return 1458.196f, 1616.259f, 192.4844f;
		case 32:
			return 1299.37f, 1714.444f, 234.1185f;
		case 33:
			return 1342.509f, 1761.698f, 220.803f;
		case 34:
			return 1351.202f, 1753.52f, 220.6404f;
		case 35:
			return 1347.349f, 1746.637f, 220.6316f;
	}
	return 0f, 0f, 0f;
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 3:
			return -15.08f;
		case 4:
			return -15.08f;
		case 5:
			return 62.0394f;
		case 6:
			return 286.054f;
		case 7:
			return 12.48f;
		case 8:
			return 92.3404f;
		case 9:
			return 74.1913f;
		case 10:
			return 0f;
		case 11:
			return 323.5652f;
		case 12:
			return 37.6987f;
		case 13:
			return 268.2127f;
		case 14:
			return 312.9099f;
		case 15:
			return 222.6678f;
		case 16:
			return 77.3109f;
		case 17:
			return 226.4543f;
		case 18:
			return 51.8741f;
		case 19:
			return 49.485f;
		case 20:
			return 353.4727f;
		case 21:
			return 236.5447f;
		case 22:
			return 236.5447f;
		case 23:
			return 236.5447f;
		case 24:
			return 236.5447f;
		case 25:
			return -160.0377f;
		case 26:
			return 154.8811f;
		case 27:
			return 20f;
		case 42:
			return 0f;
		case 43:
			return 296.7467f;
		case 44:
			return 0f;
		case 45:
			return 320.7751f;
		case 46:
			return 0f;
		case 47:
			return 186.951f;
		case 48:
			return 0f;
		case 49:
			return 76.1692f;
		case 50:
			return 0f;
		case 37:
			return 306.9346f;
		case 38:
			return 98.3599f;
		case 39:
			return 212.9804f;
		case 40:
			return 99.0952f;
		case 41:
			return 291.2716f;
		case 28:
			return 0f;
		case 29:
			return 312.777f;
		case 30:
			return 246.34f;
		case 31:
			return 62.0394f;
		case 32:
			return 14.2224f;
		case 33:
			return 261.6961f;
		case 34:
			return 98.3599f;
		case 35:
			return 187.1013f;
	}
	return 0f;
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
		iVar0 = func_521(0, 0);
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

bool func_221(int iParam0)
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
	if (FIRE::IS_ENTITY_ON_FIRE(*iParam0))
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
	if (__LIB_10__::func_373(*iParam0, 0, &Var0, &uVar28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_224()
{
	switch (iLocal_293)
	{
		case 0:
			if (!bLocal_85)
			{
				if (!__LIB_0__::func_48(iLocal_14, Global_35, 70f, 0))
				{
					__LIB_1__::func_681(&iLocal_62, 1);
					__LIB_1__::func_681(&iLocal_62, 2);
					__LIB_1__::func_681(&iLocal_62, 4);
					__LIB_1__::func_681(&iLocal_62, 8);
					__LIB_1__::func_681(&iLocal_62, 64);
					__LIB_1__::func_681(&iLocal_62, 128);
					bLocal_85 = true;
				}
			}
			else if (__LIB_0__::func_48(iLocal_14, Global_35, 30f, 0))
			{
				bLocal_85 = false;
			}
			if (!__LIB_0__::func_48(iLocal_14, Global_35, 100f, 0))
			{
				return true;
			}
			break;
		case 4:
			if (!bLocal_85)
			{
				if (!__LIB_0__::func_48(iLocal_14, Global_35, 70f, 0))
				{
					__LIB_1__::func_681(&iLocal_62, 1);
					__LIB_1__::func_681(&iLocal_62, 2);
					__LIB_1__::func_681(&iLocal_62, 4);
					__LIB_1__::func_681(&iLocal_62, 8);
					__LIB_1__::func_681(&iLocal_62, 64);
					__LIB_1__::func_681(&iLocal_62, 128);
					bLocal_85 = true;
				}
			}
			else if (__LIB_0__::func_48(iLocal_14, Global_35, 30f, 0))
			{
				bLocal_85 = false;
			}
			if (!__LIB_0__::func_48(iLocal_14, Global_35, 100f, 0))
			{
				return true;
			}
			break;
		case 11:
		case 12:
			return false;
		case 6:
			if (!bLocal_85)
			{
				if (!__LIB_0__::func_48(iLocal_14, Global_35, 20f, 0))
				{
					__LIB_1__::func_681(&iLocal_62, 1);
					__LIB_1__::func_681(&iLocal_62, 2);
					__LIB_1__::func_681(&iLocal_62, 4);
					__LIB_1__::func_681(&iLocal_62, 8);
					__LIB_1__::func_681(&iLocal_62, 64);
					__LIB_1__::func_681(&iLocal_62, 128);
					if (__LIB_0__::func_27(iLocal_66, 2))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_22))
						{
							MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
						}
					}
					bLocal_85 = true;
				}
			}
			else if (__LIB_0__::func_48(iLocal_14, Global_35, 10f, 0))
			{
				if (__LIB_0__::func_27(iLocal_66, 2))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_22))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_22, -546708623);
					}
				}
				bLocal_85 = false;
			}
			if (!__LIB_0__::func_48(iLocal_14, Global_35, 100f, 0))
			{
				return true;
			}
			break;
		default:
			if (!bLocal_85)
			{
				if (!__LIB_0__::func_48(iLocal_14, Global_35, 70f, 0))
				{
					__LIB_1__::func_681(&iLocal_62, 1);
					__LIB_1__::func_681(&iLocal_62, 2);
					__LIB_1__::func_681(&iLocal_62, 4);
					__LIB_1__::func_681(&iLocal_62, 8);
					__LIB_1__::func_681(&iLocal_62, 64);
					__LIB_1__::func_681(&iLocal_62, 128);
					bLocal_85 = true;
				}
			}
			else if (__LIB_0__::func_48(iLocal_14, Global_35, 30f, 0))
			{
				bLocal_85 = false;
			}
			if (!__LIB_0__::func_48(iLocal_14, Global_35, 100f, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_227(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_64(0);
	if (iVar0 == 11)
	{
		iVar1 = func_533(__LIB_0__::func_872(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == joaat("HAI_FIVE_FINGER_FILLET_01") || iVar1 == joaat("HAI_FIVE_FINGER_FILLET_02")) || iVar1 == joaat("HAI_DOMINOES_01"))
			{
				iVar2 = func_534(Global_40.f_4283);
				if (__LIB_0__::func_20(iVar2) && iVar2 == Global_1347702[uParam0->f_174 /*49*/].f_27)
				{
					return true;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = __LIB_1__::func_785(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (__LIB_0__::func_20(Global_1894899.f_2) && Global_1894899.f_2 == func_534(Global_40.f_4283))
				{
					return true;
				}
			}
		}
	}
	if (__LIB_0__::func_58(uParam0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_228(int iParam0)
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

int func_237(var uParam0)
{
	if ((((((func_556(&iLocal_14, 1) || func_556(&iLocal_15, 1)) || MISC::IS_BULLET_IN_AREA(1700.859f, 1508.873f, 148.4672f, 10f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(1700.859f, 1508.873f, 148.4672f, joaat("WEAPON_THROWN_MOLOTOV"), 10f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(1700.859f, 1508.873f, 148.4672f, joaat("WEAPON_THROWN_DYNAMITE"), 10f, true)) || (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(1700.859f, 1508.873f, 148.4672f, joaat("WEAPON_BOW"), 10f, true) && __LIB_14__::func_195())) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, 1700.859f, 1508.873f, 148.4672f, 12f))
	{
		if (__LIB_12__::func_876(uParam0, "WAR_AMB_SHOOTS", 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_242(var uParam0)
{
	__LIB_13__::func_222(uParam0, 2);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
		{
			WEAPON::_0x94A3C1B804D291EC(iLocal_14, 0, 0, 1, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(20, 3, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_14, 448, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_14, 119, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[0 /*3*/]))
		{
			ENTITY::SET_ENTITY_PROOFS(vLocal_296[0 /*3*/], 119, true);
		}
		__LIB_10__::func_385(iLocal_14);
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[0 /*3*/]))
		{
			PED::SET_PED_CONFIG_FLAG(vLocal_296[0 /*3*/], 301, true);
		}
		__LIB_2__::func_259(&uLocal_266);
		iLocal_71 = 8;
	}
	func_439(uParam0);
}

void func_246(int iParam0)
{
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 16);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			func_252(iParam0, __LIB_1__::func_440(iParam0), 1, 0);
		}
		else
		{
			__LIB_5__::func_241(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_252(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && __LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = __LIB_4__::func_824(iParam0);
	if (!bParam5 && __LIB_4__::func_826(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, __LIB_4__::func_816(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_COORD(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		__LIB_0__::func_326(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	__LIB_5__::func_241(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_825(iParam0);
		iVar0 = func_534(Global_40.f_4283);
		if (__LIB_0__::func_20(iVar0) && __LIB_1__::func_59(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = __LIB_5__::func_246(iVar0);
		}
		if (__LIB_4__::func_827(iParam0, bVar1, iVar0))
		{
			__LIB_8__::func_715(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_IS_RADAR_HIDDEN_2() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!__LIB_4__::func_826(iParam0) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 512)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 2048))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 580546400);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		}
		else
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (__LIB_4__::func_828(iParam0))
		{
			if (iParam0 == 97)
			{
				__LIB_1__::func_240(185, 0);
			}
			else
			{
				__LIB_1__::func_240(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = __LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		__LIB_3__::func_727(iParam0, 2);
	}
}

void func_254(int iParam0, vector3 vParam1, float fParam4)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 == 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 2048 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 < 0f)
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	if (__LIB_12__::func_749(iParam0, fParam4))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 2048);
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		func_115(iParam0, 0);
		func_252(iParam0, vParam1, 1, 0);
	}
}

void func_257(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_282(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
	{
		iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1353.874f, 1755.754f, 221.2201f, 0f, 0f, 0f, 6.75f, 16.5f, 4.75f, "m_volAmbushArea");
		bVar0 = false;
	}
	if (!__LIB_14__::func_183(&iLocal_315))
	{
		bVar0 = false;
	}
	if (!func_616(uParam0))
	{
		bVar0 = false;
	}
	if (func_617(uParam0) && func_315(uParam0, 1))
	{
	}
	else
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_93))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_95))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		__LIB_3__::func_414(&uLocal_26, 1349.537f, 1748.85f, 220.6455f, 5f, 1, 16, 0);
		__LIB_3__::func_414(&uLocal_27, 1359.114f, 1751.331f, 220.3288f, 1f, 1, 4, 0);
		if (!bLocal_89)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
			{
				__LIB_3__::func_241(iLocal_28, 1);
				bLocal_89 = true;
			}
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, iLocal_315);
		if (__LIB_0__::func_181())
		{
			__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
		}
		else
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		}
		return 1;
	}
	return 0;
}

void func_301(var uParam0, int iParam1)
{
	char cVar0[64];
	if (iLocal_292 == iParam1)
	{
		return;
	}
	iLocal_292 = iParam1;
	switch (iLocal_292)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RWARV_S3_INT", 24);
			__LIB_12__::func_957(uParam0, iLocal_14, "WarVet", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_29[0 /*9*/], "p_chair02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_29[1 /*9*/], "p_chair17x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_29[2 /*9*/], "p_door41x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, func_218(9));
			if (!__LIB_0__::func_181())
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1A-NormalVersion-Arthur-Multi");
				StringCopy(&cVar0, "1A-NormalVersion-Arthur-Multi", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			else if (__LIB_3__::func_736(148, 1))
			{
				__LIB_12__::func_676(&(uParam0->f_206), "2-IntroducingJohn");
				StringCopy(&cVar0, "2-IntroducingJohn", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1B-NormalVersion-John-Multi");
				StringCopy(&cVar0, "1B-NormalVersion-John-Multi", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RWARV_S3_MCS1", 24);
			__LIB_12__::func_779(uParam0, func_218(33));
			__LIB_12__::func_957(uParam0, iLocal_14, "WarVet", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, vLocal_296[0 /*3*/], "A_C_WOLF", 0, 0, 0);
			__LIB_12__::func_676(&(uParam0->f_206), "RWARV_S3_MCS1");
			StringCopy(&cVar0, "RWARV_S3_MCS1", 64);
			__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "RWARV_S3_EXT", 24);
			__LIB_12__::func_779(uParam0, func_218(33));
			__LIB_12__::func_957(uParam0, iLocal_14, "WarVet", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, vLocal_296[0 /*3*/], "A_C_WOLF", 0, 0, 0);
			__LIB_12__::func_676(&(uParam0->f_206), "RWARV_S3_EXT");
			StringCopy(&cVar0, "RWARV_S3_EXT", 64);
			__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

bool func_303(var uParam0)
{
	float fVar0;
	if (OBJECT::_0xACD4F9831DFAD7F5(joaat("DOOR_VET_HOUSE_INT_1")) != 32)
	{
		__LIB_4__::func_389(joaat("DOOR_VET_HOUSE_INT_1"), 1, 0);
		OBJECT::_0x7F458B543006C8FE(joaat("DOOR_VET_HOUSE_INT_1"), 32);
	}
	if (PED::_IS_PED_CARRYING(Global_35) && __LIB_0__::func_94(Global_35, 1697.328f, 1508.81f, 147.771f, 1) < 0.75f)
	{
		__LIB_5__::func_20(0, 0);
		__LIB_1__::func_561(&uLocal_269);
		OBJECT::_0x0C0A373D181BF900(joaat("DOOR_VET_HOUSE_INT_1"));
		return true;
	}
	if (!bLocal_79)
	{
		if (__LIB_0__::func_94(Global_35, 1697.328f, 1508.81f, 147.771f, 1) < 3f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (PED::_0xB91AB3BE7F655D49(Global_35))
			{
				__LIB_12__::func_773(1, 0, 1, 1);
				HUD::_HIDE_HUD_COMPONENT(724769646);
				__LIB_2__::func_259(&uLocal_269);
				bLocal_79 = true;
			}
		}
	}
	else
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_4__::func_516(1, 0);
		fVar0 = __LIB_9__::func_178(&uLocal_269);
		__LIB_12__::func_773(1, 0, 1, 1);
		if (!bLocal_80)
		{
			if (fVar0 > 2f)
			{
				if (__LIB_12__::func_876(uParam0, "WAR3_KNOCK", 0))
				{
					bLocal_80 = true;
				}
			}
		}
		if (!PED::_0xB91AB3BE7F655D49(Global_35) || fVar0 > 5.5f)
		{
			__LIB_5__::func_20(0, 0);
			__LIB_1__::func_561(&uLocal_269);
			OBJECT::_0x0C0A373D181BF900(joaat("DOOR_VET_HOUSE_INT_1"));
			return true;
		}
	}
	return false;
}

void func_307()
{
	if (!__LIB_0__::func_27(iLocal_63, 1073741824 /* Float: 2f */))
	{
		VEHICLE::_0x4C05B42A8D937796();
		__LIB_1__::func_600(0);
		__LIB_0__::func_568(func_218(29), 500f, 0);
		__LIB_1__::func_572(func_218(29), 500f, 0, 0, 1, 1, 0);
		__LIB_1__::func_683(&iLocal_63, 1073741824 /* Float: 2f */);
	}
}

bool func_309(var uParam0)
{
	if ((__LIB_0__::func_27(iLocal_63, 2) && __LIB_0__::func_27(iLocal_63, 4)) && __LIB_0__::func_27(iLocal_63, 8))
	{
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_63, 2))
	{
		Local_421[0 /*4*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_230, func_218(25), true, true, false, true);
		if (ENTITY::DOES_ENTITY_EXIST(Local_421[0 /*4*/]))
		{
			ENTITY::SET_ENTITY_ROTATION(Local_421[0 /*4*/], -12.18f, -9.78f, 2.1f, 2, true);
			__LIB_3__::func_414(&(Local_421[0 /*4*/].f_3), ENTITY::GET_ENTITY_COORDS(Local_421[0 /*4*/], false, false), 2.25f, 1, -1, 0);
			__LIB_1__::func_683(&iLocal_63, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_63, 4))
	{
		Local_421[1 /*4*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_231, func_218(26), true, true, false, true);
		if (ENTITY::DOES_ENTITY_EXIST(Local_421[1 /*4*/]))
		{
			ENTITY::SET_ENTITY_ROTATION(Local_421[1 /*4*/], 18f, 0f, -127.2f, 2, true);
			__LIB_3__::func_414(&(Local_421[1 /*4*/].f_3), ENTITY::GET_ENTITY_COORDS(Local_421[1 /*4*/], false, false), 2.25f, 1, -1, 0);
			__LIB_1__::func_683(&iLocal_63, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_63, 8))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_20))
		{
			iLocal_20 = __LIB_12__::func_885(uParam0, iLocal_232, func_218(27), 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else if (func_327(0, 4, func_202(12)))
		{
			ENTITY::_0x18FF3110CF47115D(iLocal_20, 7, 0);
			__LIB_3__::func_459(iLocal_20, 0);
			ENTITY::_0x18FF3110CF47115D(iLocal_20, 10, 0);
			PED::_0x6569F31A01B4C097(iLocal_20, 4, 0);
			__LIB_3__::func_414(&uLocal_25, func_218(27), 2.25f, 1, -1, 0);
			if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_20))
			{
				PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_20, 0);
				PLAYER::_0x6ECFC621A168424C(iLocal_20, iLocal_20, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_63, 8);
		}
	}
	if ((__LIB_0__::func_27(iLocal_63, 2) && __LIB_0__::func_27(iLocal_63, 4)) && __LIB_0__::func_27(iLocal_63, 8))
	{
		return true;
	}
	return false;
}

bool func_312(var uParam0)
{
	if (!bLocal_59)
	{
		if (func_651(uParam0, &iLocal_58, iLocal_228, 1471.236f, 1827.278f, 175.9379f, 0f, 1, 0, 1065353216 /* Float: 1f */, 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_58, true);
			ENTITY::_0x18FF3110CF47115D(iLocal_58, 7, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false);
			if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_58))
			{
				PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_58, 0);
			}
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iLocal_58, -1466684705 /* GXTEntry: "Wolf" */);
			bLocal_59 = true;
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_313(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { func_218(13) };
	fVar3 = func_219(13);
	if (__LIB_0__::func_27(vLocal_296[1 /*3*/].f_2, 1))
	{
		return true;
	}
	if (func_651(uParam0, &(vLocal_296[1 /*3*/]), iLocal_228, vVar0, fVar3, 1, 0, 1065353216 /* Float: 1f */, 0))
	{
		PED::_0x9851DE7AEC10B4E1(vVar0, 5f, 1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_296[1 /*3*/], joaat("REL_WILD_ANIMAL_PREDATOR"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_296[1 /*3*/], true);
		TASK::TASK_STAND_STILL(vLocal_296[1 /*3*/], -1);
		AUDIO::SET_ANIMAL_MOOD(vLocal_296[1 /*3*/], 0);
		PED::_0xCA95C156C14B2054(vLocal_296[1 /*3*/], "mood_angry");
		PED::REQUEST_PED_VISIBILITY_TRACKING(vLocal_296[1 /*3*/]);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(vLocal_296[1 /*3*/], 1);
		ENTITY::SET_ENTITY_INVINCIBLE(vLocal_296[1 /*3*/], true);
		ENTITY::_0x18FF3110CF47115D(vLocal_296[1 /*3*/], 7, 0);
		func_323(0);
		__LIB_1__::func_683(&(vLocal_296[1 /*3*/].f_2), 1);
		return true;
	}
	return false;
}

bool func_314(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_63, 2048))
	{
		if (__LIB_0__::func_255(iLocal_16, 0))
		{
			__LIB_1__::func_681(&iLocal_63, 2048);
		}
		else
		{
			return true;
		}
	}
	vVar0 = { func_218(3) };
	fVar3 = func_219(3);
	if (bParam2)
	{
		vVar0 = { Global_36 };
		vVar0 = { vVar0 + Vector(20f, 0f, 5f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	}
	if (!__LIB_13__::func_543(uParam0, &iLocal_16, vVar0, fVar3, 1, 1, 1, 1, 1))
	{
	}
	else if (!__LIB_0__::func_255(iLocal_16, 0) && func_653(&iLocal_16, vVar0, fVar3, iParam1))
	{
		__LIB_1__::func_683(&iLocal_63, 2048);
	}
	return false;
}

bool func_315(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_63, 8192))
	{
		return true;
	}
	vVar0 = { func_218(6) };
	fVar3 = func_219(6);
	if (func_651(uParam0, &iLocal_15, iLocal_227, vVar0, fVar3, 0, 0, 1065353216 /* Float: 1f */, 1))
	{
		__LIB_0__::func_862(iLocal_15, joaat("META_HORSE_SADDLE_ONLY"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, iLocal_315);
		AITRANSPORT::_0xBA8818212633500A(iLocal_15, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_15, 324, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_15, 419, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_15, 367, true);
		ENTITY::_0x18FF3110CF47115D(iLocal_15, 9, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_15, 33, 0, 1);
		__LIB_5__::func_437(iLocal_15, "HORSE_NAME_BUELL_WARVETS", 1);
		__LIB_7__::func_345(iLocal_15, 1);
		PED::_0xAE6004120C18DF97(iLocal_15, 0, 0);
		PED::_0xAE6004120C18DF97(iLocal_15, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_15, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_15, 300, true);
		if (func_653(&iLocal_15, vVar0, fVar3, iParam1))
		{
			__LIB_1__::func_683(&iLocal_63, 8192);
		}
	}
	return false;
}

bool func_316(var uParam0)
{
	vector3 vVar0[6];
	float fVar19[6];
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	if (__LIB_0__::func_27(iLocal_63, 1))
	{
		if (__LIB_0__::func_27(iLocal_63, 33554432))
		{
			if (!__LIB_0__::func_27(iLocal_63, 67108864))
			{
				__LIB_2__::func_426(&(vLocal_296[1 /*3*/]));
				func_657();
				__LIB_1__::func_683(&iLocal_63, 67108864);
			}
		}
		return true;
	}
	vVar0[0 /*3*/] = { func_218(11) };
	vVar0[1 /*3*/] = { func_218(14) };
	vVar0[2 /*3*/] = { func_218(21) };
	vVar0[3 /*3*/] = { func_218(22) };
	vVar0[4 /*3*/] = { func_218(23) };
	vVar0[5 /*3*/] = { func_218(24) };
	fVar19[0] = func_219(11);
	fVar19[1] = func_219(14);
	fVar19[2] = func_219(21);
	fVar19[3] = func_219(22);
	fVar19[4] = func_219(23);
	fVar19[5] = func_219(24);
	iVar26 = 0;
	iVar26 = 0;
	while (iVar26 < 6)
	{
		if (__LIB_0__::func_27(vLocal_296[iVar26 /*3*/].f_2, 1))
		{
			iVar27++;
		}
		else
		{
			PED::_0x9851DE7AEC10B4E1(vVar0[iVar26 /*3*/], 5f, 1, 0);
			iVar29 = 1;
			if (iVar26 == 0)
			{
				iVar28 = 0;
				bVar30 = 1f;
				iVar31 = iLocal_228;
				iVar29 = 0;
			}
			else if (iVar26 == 1 || iVar26 == 5)
			{
				iVar28 = 0;
				bVar30 = 1f;
				iVar31 = iLocal_228;
			}
			else
			{
				iVar28 = 0;
				bVar30 = 1f;
				iVar31 = iLocal_229;
			}
			if (func_651(uParam0, &(vLocal_296[iVar26 /*3*/]), iVar31, vVar0[iVar26 /*3*/], fVar19[iVar26], iVar29, iVar28, bVar30, 0))
			{
				if (iVar26 == 0)
				{
					if (PED::_0xA0BC8FAED8CFEB3C(vLocal_296[iVar26 /*3*/]))
					{
						__LIB_0__::func_862(vLocal_296[iVar26 /*3*/], joaat("META_OUTFIT_ANIMAL_LEGENDARY_WOLF"));
					}
				else
				{
					}
					else
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_296[iVar26 /*3*/], joaat("REL_WILD_ANIMAL_PREDATOR"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_296[iVar26 /*3*/], true);
						TASK::TASK_STAND_STILL(vLocal_296[iVar26 /*3*/], -1);
						AUDIO::SET_ANIMAL_MOOD(vLocal_296[iVar26 /*3*/], 0);
						PED::_0xCA95C156C14B2054(vLocal_296[iVar26 /*3*/], "mood_angry");
						PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(vLocal_296[iVar26 /*3*/], -1466684705 /* GXTEntry: "Wolf" */);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 12, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 9, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 11, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 17, true);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 10, false);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 13, false);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 14, false);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 15, false);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_296[iVar26 /*3*/], 16, false);
						FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(vLocal_296[iVar26 /*3*/], 7, 15f);
						FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(vLocal_296[iVar26 /*3*/], 8, 10f);
						PED::REQUEST_PED_VISIBILITY_TRACKING(vLocal_296[iVar26 /*3*/]);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(vLocal_296[iVar26 /*3*/], 1);
						PED::SET_PED_CONFIG_FLAG(vLocal_296[iVar26 /*3*/], 388, true);
						__LIB_1__::func_683(&(vLocal_296[iVar26 /*3*/].f_2), 1);
						iVar27++;
						Jump @740; //curOff = 728
						iVar26++;
					}
					if (iVar27 >= 6)
					{
						__LIB_1__::func_683(&iLocal_63, 1);
						__LIB_3__::func_459(vLocal_296[0 /*3*/], 0);
						if (!__LIB_0__::func_255(vLocal_296[0 /*3*/], 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(vLocal_296[0 /*3*/], true);
							ENTITY::_0x18FF3110CF47115D(vLocal_296[0 /*3*/], 7, 0);
						}
						if (!__LIB_0__::func_255(vLocal_296[1 /*3*/], 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(vLocal_296[1 /*3*/], true);
							if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), vLocal_296[1 /*3*/]))
							{
								PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), vLocal_296[1 /*3*/], 0);
							}
						}
						if (!__LIB_0__::func_255(vLocal_296[5 /*3*/], 0))
						{
							if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), vLocal_296[5 /*3*/]))
							{
								PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), vLocal_296[5 /*3*/], 0);
							}
						}
					}
					return false;
				}
			}
		}
	}
}

bool func_318(float fParam0)
{
	if (__LIB_9__::func_178(&uLocal_260) > fParam0)
	{
		__LIB_1__::func_561(&uLocal_260);
		__LIB_13__::func_105(1, 1);
		return true;
	}
	return false;
}

void func_320(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (iLocal_293 == iParam1 && !bParam2)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_22))
	{
		iLocal_22 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_14);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_22, "WARV4_BLP_VET");
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_1__::func_681(&iLocal_63, 128);
	switch (iLocal_293)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_23);
			break;
		case 1:
			__LIB_0__::func_325(&iLocal_23);
			iVar1 = 0;
			while (iVar1 < 2)
			{
				__LIB_6__::func_916(&(Local_421[iVar1 /*4*/].f_2));
				iVar1++;
			}
			break;
		case 2:
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_22, -546708623);
			break;
		case 3:
			__LIB_1__::func_561(&uLocal_239);
			__LIB_1__::func_681(&iLocal_63, 16384);
			CAM::STOP_GAMEPLAY_HINT(false);
			break;
		case 4:
			if (PED::DOES_GROUP_EXIST(iLocal_24))
			{
				if (!__LIB_0__::func_255(iLocal_14, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_14);
				}
				PED::REMOVE_GROUP(iLocal_24);
				PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
			}
			__LIB_1__::func_681(&iLocal_63, 16384);
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_22, -546708623);
			break;
		case 11:
			break;
		case 12:
			break;
	}
	iLocal_293 = iParam1;
	switch (iLocal_293)
	{
		case 0:
			iLocal_24 = PED::CREATE_GROUP(2);
			PED::SET_GROUP_FORMATION(iLocal_24, 10);
			PED::SET_PED_CONFIG_FLAG(iLocal_14, 279, true);
			PED::SET_PED_AS_GROUP_LEADER(iLocal_14, iLocal_24, false);
			PED::_0x0E9E95FDEDCC9D35(PLAYER::PLAYER_PED_ID(), 0, 0);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_14, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			func_321(0, 0);
			break;
		case 1:
			__LIB_1__::func_681(&(vLocal_296[1 /*3*/].f_2), 1);
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			break;
		case 2:
			__LIB_2__::func_259(&uLocal_248);
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			break;
		case 3:
			__LIB_2__::func_259(&uLocal_248);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(Global_35, func_218(14), 0);
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, vLocal_296[1 /*3*/], 0, -1f, -1f, -1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			}
			else
			{
				CAM::SET_GAMEPLAY_PED_HINT(vLocal_296[1 /*3*/], 0f, 0f, 0f, true, 4000, 2000, 2000);
			}
			__LIB_2__::func_259(&uLocal_239);
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			break;
		case 4:
			__LIB_2__::func_259(&uLocal_248);
			__LIB_1__::func_681(&iLocal_62, 1);
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			if (!PED::DOES_GROUP_EXIST(iLocal_24))
			{
				iLocal_24 = PED::CREATE_GROUP(2);
				PED::SET_GROUP_FORMATION(iLocal_24, 10);
				PED::SET_PED_CONFIG_FLAG(iLocal_14, 279, true);
				PED::SET_PED_AS_GROUP_LEADER(iLocal_14, iLocal_24, false);
			}
			PED::_0x0E9E95FDEDCC9D35(PLAYER::PLAYER_PED_ID(), 0, 0);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_14, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[2 /*3*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[2 /*3*/], func_218(15), func_219(15), true, false, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[3 /*3*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[3 /*3*/], func_218(17), func_219(17), true, false, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[4 /*3*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[4 /*3*/], func_218(19), func_219(19), true, false, true);
			}
			break;
		case 5:
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			break;
		case 6:
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			if (__LIB_0__::func_27(iLocal_63, 1))
			{
				__LIB_1__::func_683(&iLocal_63, 33554432);
				__LIB_1__::func_681(&iLocal_63, 1);
				__LIB_1__::func_681(&(vLocal_296[2 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[3 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[4 /*3*/].f_2), 1);
				__LIB_1__::func_681(&(vLocal_296[5 /*3*/].f_2), 1);
			}
			if (!__LIB_0__::func_27(iLocal_63, 16777216))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PAUSE(0, 3000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_218(10), 1.75f, -1, 10f, 0, 40000f);
				TASK::TASK_STAND_STILL(0, -1);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(iLocal_16, true, false);
				AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_16, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_0__::func_798(7);
			}
			break;
		case 7:
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			__LIB_6__::func_900("WAR3_CHAT1_A", 0, 0);
			__LIB_6__::func_900("WAR3_CHAT1_J", 0, 0);
			break;
		case 8:
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			func_321(18, 0);
			break;
		case 9:
			__LIB_6__::func_900("WAR3_CHAT1_A", 0, 0);
			__LIB_6__::func_900("WAR3_CHAT1_J", 0, 0);
			func_664();
			__LIB_2__::func_259(&uLocal_245);
			func_301(uParam0, 1);
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
}

void func_321(int iParam0, bool bParam1)
{
	int iVar0;
	if (iParam0 == iLocal_295 && !bParam1)
	{
		return;
	}
	iLocal_295 = iParam0;
	__LIB_1__::func_561(&uLocal_233);
	switch (iLocal_295)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			__LIB_1__::func_562(iLocal_14, iLocal_15, 0, 1.5f, 20000);
			break;
		case 1:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_92, 0, 18446, -1, 0, 0, -1);
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(iLocal_14))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1464.423f, 1611.054f, 193.7952f, 1f, -1, 0.25f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1465.109f, 1610.523f, 193.9421f, 1f, -1, 0.25f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1466.577f, 1610.146f, 194.3327f, 1f, -1, 0.25f, 1, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 3:
			__LIB_2__::func_259(&uLocal_233);
			func_438(0, func_202(13));
			if (PED::_IS_MOUNT_SEAT_FREE(iLocal_15, -1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_15, func_218(8), 1f, -1, 0.25f, 0, func_219(8));
			}
			break;
		case 4:
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_14, false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(iLocal_14))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1476.488f, 1620.23f, 195.441f, 1f, -1, 0.25f, 0, 297.6496f);
			TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_218(25), 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 5:
			__LIB_2__::func_259(&uLocal_233);
			TASK::TASK_STAND_STILL(iLocal_14, -1);
			break;
		case 6:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 1472.582f, 1620.813f, 194.7278f, 1f, -1, 0.25f, 0, 53.098f);
			break;
		case 7:
			if (__LIB_0__::func_899(&uLocal_233))
			{
				__LIB_1__::func_561(&uLocal_233);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_218(14), 10000);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 1347.214f, 1641.053f, 210.2912f, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 8:
			__LIB_2__::func_259(&uLocal_233);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_218(14), 1000);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[1 /*3*/]))
			{
				if (!MAP::DOES_BLIP_EXIST(vLocal_296[1 /*3*/].f_1))
				{
					vLocal_296[1 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[1 /*3*/]);
				}
			}
			break;
		case 10:
			if (PED::IS_PED_ON_MOUNT(iLocal_14))
			{
				func_321(12, 0);
			}
			else
			{
				if (!__LIB_0__::func_48(iLocal_15, iLocal_14, 50f, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					__LIB_1__::func_326(0, 869278708, joaat("UNSPECIFIED"));
					TASK::TASK_GO_TO_ENTITY(0, iLocal_15, -1, 50f, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					func_667(iLocal_15, iLocal_14);
				}
				Jump @1551; //curOff = 913
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::TASK_MOUNT_ANIMAL(iLocal_14, iLocal_15, -1, -1, 1.5f, 1, 0, 0);
				Jump @1551; //curOff = 942
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_93, 0, 18446, -1, 0, 0, -1);
				Jump @1551; //curOff = 969
				TASK::TASK_HORSE_ACTION(iLocal_15, 1, 0, 0);
				Jump @1551; //curOff = 981
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_14, WEAPON::GET_BEST_PED_WEAPON(iLocal_14, false, false), true, 0, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_218(10), 1.75f, -1, 10f, 0, 40000f);
				TASK::TASK_HORSE_ACTION(0, 4, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_15, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, 1298.998f, 1717.351f, 234.1038f, 1f, -1, 0.25f, 0, 40000f);
				__LIB_2__::func_259(&uLocal_233);
				Jump @1551; //curOff = 1120
				if (MAP::DOES_BLIP_EXIST(iLocal_22))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
				}
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_14, "Cautious", 1f, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_95, 0, 4194830, -1, 0, 0, -1);
				__LIB_2__::func_259(&uLocal_233);
				__LIB_1__::func_585(&uLocal_236, 10f);
				Jump @1551; //curOff = 1203
				if (MAP::DOES_BLIP_EXIST(iLocal_22))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_22, -546708623);
				}
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_14, "Cautious", 1f, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, sLocal_95, 0, 4194830, -1, 0, 0, -1);
				__LIB_2__::func_259(&uLocal_233);
				__LIB_1__::func_585(&uLocal_236, 10f);
				Jump @1551; //curOff = 1286
				__LIB_2__::func_259(&uLocal_233);
				PED::_0x411189E51B8020BA(iLocal_14, "Cautious");
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1345.183f, 1762.666f, 220.7554f, vLocal_296[5 /*3*/], 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, vLocal_296[5 /*3*/], -1, false, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_14, vLocal_296[5 /*3*/], -1, 0, 51, 0);
				Jump @1551; //curOff = 1422
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::TASK_STAND_STILL(iLocal_14, -1);
				Jump @1551; //curOff = 1440
				TASK::TASK_CLEAR_LOOK_AT(iLocal_14);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_14, WEAPON::GET_BEST_PED_WEAPON(iLocal_14, false, false), true, 0, false, false);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_14, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1355.206f, 1759.907f, 220.5938f, 1f);
				TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			default:
				break;
	}
}

void func_323(int iParam0)
{
	vector3 vVar0;
	if (__LIB_0__::func_255(vLocal_296[1 /*3*/], 0))
	{
		return;
	}
	if (iLocal_291 == iParam0)
	{
		return;
	}
	iLocal_291 = iParam0;
	switch (iLocal_291)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[1 /*3*/], func_218(13), func_219(13), true, false, true);
			TASK::TASK_STAND_STILL(vLocal_296[1 /*3*/], -1);
			break;
		case 1:
			if (MAP::DOES_BLIP_EXIST(vLocal_296[1 /*3*/].f_1))
			{
				MAP::_BLIP_SET_MODIFIER(vLocal_296[1 /*3*/].f_1, -1269631044);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(vLocal_296[1 /*3*/], sLocal_94, 0, 4194348, -1, 0, 0, -1);
			break;
		case 2:
			PED::SET_PED_LOD_MULTIPLIER(vLocal_296[1 /*3*/], 3f);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[1 /*3*/], func_218(14), func_219(14), true, false, true);
			TASK::TASK_STAND_STILL(vLocal_296[1 /*3*/], -1);
			break;
		case 3:
			__LIB_2__::func_259(&uLocal_254);
			TASK::CLEAR_PED_TASKS(vLocal_296[1 /*3*/], true, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(vLocal_296[1 /*3*/], sLocal_96, 0, 4194346, -1, 0, 0, -1);
			break;
		case 4:
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_96, 4, &vVar0);
			TASK::TASK_TURN_PED_TO_FACE_COORD(vLocal_296[1 /*3*/], vVar0, 0);
			break;
		case 5:
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], 0))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(vLocal_296[1 /*3*/], sLocal_96, 0, 4194346, -1, 0, 0, -1);
			}
			if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), vLocal_296[1 /*3*/]))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), vLocal_296[1 /*3*/]);
			}
			if (!__LIB_0__::func_27(iLocal_63, 8388608))
			{
				if (!MAP::DOES_BLIP_EXIST(vLocal_296[1 /*3*/].f_1))
				{
					vLocal_296[1 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[1 /*3*/]);
				}
			}
			break;
		case 6:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_96))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(vLocal_296[1 /*3*/]))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(vLocal_296[1 /*3*/], 0, 0, 0);
				}
			}
			break;
		case 7:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_96))
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(vLocal_296[1 /*3*/]))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(vLocal_296[1 /*3*/], false, -1, 0);
				}
			}
			break;
		case 8:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_96))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(vLocal_296[1 /*3*/]))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(vLocal_296[1 /*3*/], 0, 0, 0);
				}
			}
			break;
		case 9:
			PED::SET_PED_LOD_MULTIPLIER(vLocal_296[1 /*3*/], 1f);
			TASK::CLEAR_PED_TASKS(vLocal_296[1 /*3*/], true, false);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[1 /*3*/], 960.5265f, 1763.917f, 321.4344f, 248.0446f, true, false, true);
			break;
	}
}

int func_325(int iParam0, int iParam1)
{
	var uVar0;
	return func_669(&uVar0, iParam0, iParam1);
}

void func_326(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!bParam0)
		{
			if (iVar0 == 0)
			{
			}
			else if (__LIB_0__::func_255(vLocal_296[iVar0 /*3*/], 0))
			{
			}
			else
			{
				__LIB_1__::func_864(vLocal_296[iVar0 /*3*/], 1, 0);
			}
			iVar0++;
		}
	}
}

bool func_327(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_119[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_119[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_119[iParam0 /*16*/], true, false))
			{
				Local_119[iParam0 /*16*/].f_14 = 1;
				return Local_119[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_119[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_119[iParam0 /*16*/].f_1, iParam1, Local_119[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_119[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_119[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_119[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_119[iParam0 /*16*/]);
				func_670(iParam0);
			}
		}
	}
	return Local_119[iParam0 /*16*/].f_14;
}

int func_340(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
				if (__LIB_12__::func_986(uParam4, &uParam0, 1, 1))
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
			func_695(uParam4);
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

bool func_347(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
			__LIB_13__::func_917(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_41(uParam0);
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
				__LIB_13__::func_532(uParam0);
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
		__LIB_13__::func_468(uParam0, iParam5);
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
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_178(&(uParam0->f_1768)) >= 15f)
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

void func_350(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar5 = 6;
	switch (iLocal_295)
	{
		case 0:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, 500, 0, 51, 0);
			if (__LIB_0__::func_71(iLocal_14) && __LIB_0__::func_71(Global_35))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_321(1, 0);
			}
			if (iLocal_68 < 1)
			{
				if (__LIB_0__::func_48(Global_35, iLocal_14, 30f, 1))
				{
					if (__LIB_12__::func_876(uParam0, Local_316.f_5[0], 0))
					{
						iLocal_68 = 1;
					}
				}
			}
			break;
		case 1:
			MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_92, Global_36, &iVar3))
			{
				if (iVar3 > 35)
				{
					if (!__LIB_0__::func_27(iLocal_63, 524288))
					{
						if (__LIB_0__::func_48(Global_35, iLocal_14, 40f, 1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[1 /*3*/]))
							{
								if (!__LIB_0__::func_181())
								{
									sVar4 = "WAR3_RIDEHINT";
								}
								else
								{
									sVar4 = "WAR3_JRIDEHINT";
								}
								__LIB_5__::func_20(0, 0);
								if (__LIB_12__::func_876(uParam0, sVar4, 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_14, vLocal_296[1 /*3*/], 6000, 0, 51, 0);
									TASK::TASK_LOOK_AT_ENTITY(Global_35, vLocal_296[1 /*3*/], 6000, 0, 51, 0);
									CAM::SET_GAMEPLAY_ENTITY_HINT(vLocal_296[1 /*3*/], 0f, 0f, 0f, true, 3000, 2000, 2000, 1726668277);
									AUDIO::PLAY_ANIMAL_VOCALIZATION(vLocal_296[1 /*3*/], "HOWL_SHORT", false);
									MAP::TRIGGER_SONAR_BLIP(-111342534, ENTITY::GET_ENTITY_COORDS(vLocal_296[1 /*3*/], false, false));
									if (!MAP::DOES_BLIP_EXIST(vLocal_296[1 /*3*/].f_1))
									{
										vLocal_296[1 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[1 /*3*/]);
									}
									__LIB_1__::func_683(&iLocal_63, 524288);
								}
							}
						}
						else
						{
							__LIB_1__::func_683(&iLocal_63, 524288);
						}
					}
					else if (!__LIB_0__::func_27(iLocal_66, 128))
					{
						if (!__LIB_0__::func_899(&uLocal_272))
						{
							__LIB_2__::func_259(&uLocal_272);
						}
						else if (__LIB_9__::func_178(&uLocal_272) > 3f)
						{
							__LIB_1__::func_561(&uLocal_272);
							func_323(1);
							__LIB_1__::func_683(&iLocal_66, 128);
						}
					}
				}
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0) && !__LIB_0__::func_266(iLocal_14, func_218(1), 8f, 1, 1))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_92, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &iVar3))
				{
					if (iLocal_68 == 5)
					{
						if (__LIB_0__::func_48(Global_35, iLocal_14, 30f, 1) && !__LIB_6__::func_904())
						{
							__LIB_5__::func_20(0, 0);
							if (__LIB_12__::func_876(uParam0, Local_316.f_5[6], 0))
							{
								__LIB_2__::func_259(&uLocal_278);
								iLocal_68 = 6;
							}
						}
					}
					else if (iLocal_68 == 6)
					{
						if (__LIB_9__::func_178(&uLocal_278) > 3f)
						{
							__LIB_6__::func_900(Local_316.f_5[6], 1, 0);
							iLocal_68 = 7;
						}
					}
					if (iVar3 > 79)
					{
						if (PED::DOES_GROUP_EXIST(iLocal_24))
						{
							if (!__LIB_0__::func_255(iLocal_14, 0))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_14);
							}
							PED::REMOVE_GROUP(iLocal_24);
							PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
						}
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.25f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (iVar3 > 78)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (iVar3 > 64)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (iVar3 > 63)
					{
						if (iLocal_68 < 5)
						{
							if (__LIB_0__::func_48(Global_35, iLocal_14, 50f, 1) && !__LIB_6__::func_904())
							{
								if (__LIB_12__::func_876(uParam0, Local_316.f_5[5], 0))
								{
									iLocal_68 = 5;
								}
							}
						}
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 2.001f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (iVar3 > 27)
					{
						if (iLocal_68 < 4 && __LIB_0__::func_27(iLocal_63, 524288))
						{
							if (!__LIB_6__::func_904() && __LIB_0__::func_48(Global_35, iLocal_14, 30f, 1))
							{
								__LIB_5__::func_20(0, 0);
								if (!__LIB_0__::func_899(&uLocal_278))
								{
									__LIB_2__::func_259(&uLocal_278);
								}
								else if (__LIB_9__::func_178(&uLocal_278) > 2f)
								{
									if (__LIB_12__::func_876(uParam0, Local_316.f_5[3], 0))
									{
										__LIB_1__::func_561(&uLocal_278);
										iLocal_68 = 4;
									}
								}
							}
						}
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 2.001f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (iVar3 > 26)
					{
						if (iLocal_68 < 3)
						{
							if (!__LIB_0__::func_899(&uLocal_278))
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(vLocal_296[1 /*3*/], "HOWL_LONG", false);
								MAP::TRIGGER_SONAR_BLIP(-111342534, ENTITY::GET_ENTITY_COORDS(vLocal_296[1 /*3*/], false, false));
								if (!MAP::DOES_BLIP_EXIST(vLocal_296[1 /*3*/].f_1))
								{
									vLocal_296[1 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[1 /*3*/]);
									MAP::_BLIP_SET_MODIFIER(vLocal_296[1 /*3*/].f_1, -1269631044);
								}
								__LIB_2__::func_259(&uLocal_278);
							}
							else if (__LIB_9__::func_178(&uLocal_278) > 1f)
							{
								if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_14))
								{
									__LIB_6__::func_900(Local_316.f_5[1], 0, 0);
								}
								else
								{
									__LIB_6__::func_900(Local_316.f_5[1], 1, 0);
								}
								if (__LIB_12__::func_876(uParam0, Local_316.f_5[2], 0))
								{
									__LIB_1__::func_561(&uLocal_278);
									iLocal_68 = 3;
								}
							}
						}
						if (!__LIB_0__::func_48(Global_35, iLocal_14, 15f, 1))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.75f, 1, -1082130432 /* Float: -1f */, 0);
						}
					}
					else if (iVar3 < 15)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.25f, 1, -1082130432 /* Float: -1f */, 0);
						if (iLocal_68 < 1)
						{
							if (__LIB_0__::func_48(Global_35, iLocal_14, 30f, 1))
							{
								__LIB_5__::func_20(0, 0);
								if (__LIB_12__::func_876(uParam0, Local_316.f_5[0], 0))
								{
									iLocal_68 = 1;
								}
							}
						}
					}
					else if (iVar3 < 18)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (!__LIB_0__::func_48(Global_35, iLocal_14, 15f, 1))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
					}
					if (iVar3 > 11 && iLocal_68 < 2)
					{
						if (__LIB_0__::func_48(Global_35, iLocal_14, 10f, 1) && !__LIB_6__::func_904())
						{
							__LIB_5__::func_20(0, 0);
							if (__LIB_12__::func_876(uParam0, Local_316.f_5[1], 0))
							{
								iLocal_68 = 2;
							}
						}
					}
					if (iLocal_68 < 2)
					{
						if (!__LIB_0__::func_899(&uLocal_281))
						{
							if (!__LIB_6__::func_904())
							{
								__LIB_2__::func_259(&uLocal_281);
							}
						}
						else if (iLocal_60 == 0)
						{
							if (__LIB_9__::func_178(&uLocal_281) > 3f)
							{
								if (__LIB_12__::func_876(uParam0, Local_316.f_5[7], 0))
								{
									__LIB_1__::func_561(&uLocal_281);
									iLocal_60++;
								}
							}
						}
						else if (__LIB_9__::func_178(&uLocal_281) > 8f)
						{
							if (__LIB_12__::func_876(uParam0, Local_316.f_5[7], 0))
							{
								__LIB_1__::func_561(&uLocal_281);
								iLocal_60++;
							}
						}
					}
					else if (__LIB_0__::func_899(&uLocal_281))
					{
						__LIB_1__::func_561(&uLocal_281);
					}
				}
			}
			else
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_15, 1f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_15, 0f);
				}
				if (!__LIB_6__::func_903("RWARV_3_TOP") || __LIB_10__::func_578("RWARV_3_TOP"))
				{
					if (__LIB_6__::func_904())
					{
						__LIB_5__::func_20(0, 0);
					}
					if (!__LIB_0__::func_899(&uLocal_287))
					{
						__LIB_2__::func_259(&uLocal_287);
					}
					else if (__LIB_9__::func_178(&uLocal_287) > 1f)
					{
						if (__LIB_0__::func_266(iLocal_14, func_218(1), 8f, 1, 1) && __LIB_0__::func_48(Global_35, iLocal_14, 15f, 1))
						{
							__LIB_1__::func_561(&uLocal_287);
							func_321(2, 0);
						}
					}
				}
			}
			break;
		case 2:
			func_323(2);
			func_742(0, func_202(13));
			func_366(uParam0, &Local_316, 9, &iLocal_14, 1, 30f, 0);
			if (!__LIB_0__::func_163(iLocal_14, 242628503))
			{
				func_321(2, 1);
				return;
			}
			if (__LIB_0__::func_266(iLocal_14, 1466.577f, 1610.146f, 194.7327f, 1.2f, 1, 1))
			{
				func_321(3, 0);
				return;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_63, 32768))
			{
				__LIB_1__::func_683(&iLocal_63, 32768);
			}
			else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_119[0 /*16*/]) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_119[0 /*16*/], "WarVet")) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_119[0 /*16*/]))
			{
				func_321(6, 0);
				Jump @4840; //curOff = 2096
			}
			else if (__LIB_9__::func_178(&uLocal_233) > 6f)
			{
				if (!__LIB_0__::func_27(iLocal_63, 134217728))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_16) && PED::_IS_MOUNT_SEAT_FREE(iLocal_16, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_218(5), 1f, -1, 0.25f, 0, func_219(5));
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_16, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					}
					__LIB_1__::func_683(&iLocal_63, 134217728);
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(iLocal_14, 242628503))
			{
				func_321(5, 0);
			}
			break;
		case 5:
			if (__LIB_9__::func_178(&uLocal_233) > 15f)
			{
				func_321(6, 0);
			}
			else
			{
				Jump @4840; //curOff = 2267
				if (!__LIB_0__::func_163(iLocal_14, 713668775))
				{
					func_321(7, 0);
				}
				Jump @4840; //curOff = 2291
				if (!__LIB_0__::func_27(iLocal_63, 65536))
				{
					if (__LIB_0__::func_48(Global_35, iLocal_14, 5f, 1))
					{
						__LIB_1__::func_683(&iLocal_63, 65536);
					}
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					iVar5 = func_366(uParam0, &Local_316, 8, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0);
					if (iVar5 == 3)
					{
						if (!__LIB_0__::func_899(&uLocal_233))
						{
							func_323(3);
							__LIB_2__::func_259(&uLocal_233);
						}
					}
				}
				if (__LIB_9__::func_178(&uLocal_233) > 3f)
				{
					func_321(8, 0);
				}
				Jump @4840; //curOff = 2410
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				if (!__LIB_0__::func_899(&uLocal_233))
				{
					__LIB_2__::func_259(&uLocal_233);
				}
				iVar5 = func_366(uParam0, &Local_316, 10, &iLocal_14, 1, 50f, 0);
				if (iVar5 == 1)
				{
					func_321(9, 0);
					func_320(uParam0, 2, 0);
				}
				else
				{
					Jump @4840; //curOff = 2483
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					Jump @4840; //curOff = 2494
					if (__LIB_0__::func_48(iLocal_14, iLocal_15, 50f, 1))
					{
						func_321(11, 0);
					}
					Jump @4840; //curOff = 2521
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_14, true))
					{
						func_321(12, 0);
					}
					else if (!TASK::_0x9FF5F9B24E870748(iLocal_14))
					{
						func_321(11, 1);
					}
					Jump @4840; //curOff = 2561
					if (!TASK::_0x9FF5F9B24E870748(iLocal_14))
					{
						func_321(13, 0);
					}
					else
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
						{
							if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_93, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &iVar3))
							{
								if (iVar3 > 2)
								{
									if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[2 /*3*/]))
									{
										__LIB_2__::func_426(&(vLocal_296[2 /*3*/]));
									}
									if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[3 /*3*/]))
									{
										__LIB_2__::func_426(&(vLocal_296[3 /*3*/]));
									}
									if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[4 /*3*/]))
									{
										__LIB_2__::func_426(&(vLocal_296[4 /*3*/]));
									}
								}
								if (iVar3 > 20)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.25f, 1, -1082130432 /* Float: -1f */, 0);
								}
								else if (iVar3 > 18)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
								}
								else if (iVar3 < 1)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.501f, 1, -1082130432 /* Float: -1f */, 0);
								}
								else if (iVar3 < 5)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.75f, 1, -1082130432 /* Float: -1f */, 0);
								}
								else if (!__LIB_0__::func_48(Global_35, iLocal_14, 20f, 1))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.75f, 1, -1082130432 /* Float: -1f */, 0);
								}
								else
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 2.001f, 1, -1082130432 /* Float: -1f */, 0);
								}
							}
						}
						else
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_14, 1.25f);
							if (__LIB_0__::func_266(iLocal_14, func_218(36), 15f, 1, 1))
							{
								func_321(13, 0);
							}
						}
						Jump @4840; //curOff = 2902
						if (!PED::IS_PED_ON_MOUNT(iLocal_14))
						{
							func_321(14, 0);
						}
						else
						{
							if (!__LIB_0__::func_163(iLocal_15, 1041577989))
							{
								if (!__LIB_0__::func_163(iLocal_14, 501393341) && __LIB_0__::func_48(Global_35, iLocal_14, 15f, 1))
								{
									if (func_366(uParam0, &Local_316, vLocal_438[2 /*3*/].f_2, &iLocal_14, 0, 25f, 0) == 3 || func_366(uParam0, &Local_316, vLocal_438[2 /*3*/].f_2, &iLocal_14, 0, 25f, 0) == 1)
									{
										TASK::TASK_DISMOUNT_ANIMAL(iLocal_14, 0, 0, 0, 0, 0);
									}
								}
							}
							Jump @4840; //curOff = 3051
							if (!__LIB_0__::func_27(iLocal_66, 4) && !__LIB_0__::func_27(iLocal_66, 2))
							{
								if (__LIB_0__::func_27(iLocal_66, 1))
								{
									iLocal_224 = func_743(&iLocal_14, &vLocal_203, 8f, &Local_168, 0.25f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
									if (__LIB_9__::func_178(&uLocal_233) > 25f)
									{
										if (__LIB_12__::func_876(uParam0, "WAR3_QUESTIONH2", 0))
										{
											func_321(15, 0);
											__LIB_2__::func_624(&Local_168, 1, 1, 1, 0);
											vLocal_203.f_2 = 0;
											__LIB_1__::func_480(&iLocal_14);
											__LIB_1__::func_683(&iLocal_66, 4);
										}
										if (!__LIB_0__::func_27(iLocal_62, 2048))
										{
											if (__LIB_14__::func_197(1))
											{
												__LIB_0__::func_45(func_747(2048), 10000, 0, 0, 0, 1);
												__LIB_1__::func_683(&iLocal_62, 2048);
											}
										}
										return;
									}
									else if (__LIB_9__::func_178(&uLocal_233) > 15f)
									{
										if (!__LIB_0__::func_27(iLocal_66, 16))
										{
											if (__LIB_0__::func_48(iLocal_14, Global_35, 15f, 1))
											{
												if (__LIB_12__::func_876(uParam0, __LIB_13__::func_637(&Local_316, 42), 0))
												{
													__LIB_1__::func_683(&iLocal_66, 16);
												}
											}
										}
									}
									if (__LIB_0__::func_266(Global_35, 1297.159f, 1733.14f, 233.8634f, 10f, 1, 1))
									{
										__LIB_2__::func_624(&Local_168, 1, 1, 1, 0);
										vLocal_203.f_2 = 0;
										__LIB_1__::func_480(&iLocal_14);
										__LIB_1__::func_683(&iLocal_66, 2);
									}
									if (iLocal_224 == 0)
									{
										__LIB_2__::func_624(&Local_168, 1, 1, 1, 0);
										vLocal_203.f_2 = 0;
										__LIB_1__::func_480(&iLocal_14);
										__LIB_1__::func_683(&iLocal_66, 2);
										return;
									}
									else if (iLocal_224 == 1)
									{
										__LIB_2__::func_624(&Local_168, 1, 1, 1, 0);
										vLocal_203.f_2 = 0;
										__LIB_1__::func_480(&iLocal_14);
										__LIB_1__::func_683(&iLocal_66, 4);
										return;
									}
								}
								else if (__LIB_0__::func_266(iLocal_14, 1298.998f, 1717.351f, 234.1038f, 2.5f, 1, 1))
								{
									iVar5 = func_366(uParam0, &Local_316, 41, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0);
									if (iVar5 == 2)
									{
										if (!__LIB_0__::func_27(iLocal_66, 8))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
											__LIB_1__::func_683(&iLocal_66, 8);
										}
									}
									else if (iVar5 == 3)
									{
										if (!__LIB_0__::func_27(iLocal_66, 1))
										{
											func_749();
											__LIB_1__::func_683(&iLocal_66, 1);
										}
									}
								}
							}
							else
							{
								if (!__LIB_0__::func_27(iLocal_62, 2048))
								{
									if (__LIB_14__::func_197(1))
									{
										__LIB_0__::func_45(func_747(2048), 10000, 0, 0, 0, 1);
										__LIB_1__::func_683(&iLocal_62, 2048);
									}
								}
								if (__LIB_0__::func_27(iLocal_66, 4))
								{
									iVar5 = func_366(uParam0, &Local_316, 44, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0);
									if (iVar5 == 3)
									{
										__LIB_10__::func_385(iLocal_14);
										func_321(15, 0);
									}
								}
								else if (__LIB_0__::func_27(iLocal_66, 2))
								{
									iVar5 = func_366(uParam0, &Local_316, 43, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0);
									if (iVar5 == 2)
									{
										if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(__LIB_13__::func_637(&Local_316, 43)) > 0)
										{
											__LIB_10__::func_385(iLocal_14);
											func_321(16, 0);
										}
									}
								}
							}
							Jump @4840; //curOff = 3762
							if (__LIB_0__::func_266(iLocal_14, 1341.899f, 1761.381f, 220.8286f, 8f, 1, 1))
							{
								func_321(17, 0);
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
							{
							}
							else
							{
								if (!__LIB_6__::func_912(Global_35, iLocal_14, sLocal_95, 1112014848 /* Float: 50f */))
								{
									if (!__LIB_0__::func_48(iLocal_14, Global_35, 12f, 1))
									{
										if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_14))
										{
											TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_14, 1, 0, 0);
										}
										if (__LIB_9__::func_178(&uLocal_236) > 12f)
										{
											if (iLocal_70 < 4)
											{
												if (!__LIB_6__::func_904())
												{
													if (__LIB_12__::func_876(uParam0, Local_316.f_5[26], 0))
													{
														iLocal_70++;
														__LIB_2__::func_259(&uLocal_236);
													}
												}
											}
										}
									}
									else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_14))
									{
										if (__LIB_0__::func_48(iLocal_14, Global_35, 3f, 1))
										{
											TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_14, true, -1, 0);
										}
									}
									else
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1f, 0, -1082130432 /* Float: -1f */, 0);
									}
								}
								else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_14))
								{
									TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_14, true, -1, 0);
								}
								else if (!__LIB_0__::func_48(iLocal_14, Global_35, 8f, 1))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 2f, 0, -1082130432 /* Float: -1f */, 0);
								}
								else if (!__LIB_0__::func_48(iLocal_14, Global_35, 5f, 1))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
								}
								if (iLocal_534 < 14)
								{
									TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_95, Local_448[iLocal_534 /*6*/].f_5, &vVar0);
									if (__LIB_0__::func_266(iLocal_14, vVar0, 2f, 1, 1))
									{
										Local_448[iLocal_534 /*6*/] = 1;
										func_751(uParam0);
										iVar7 = iLocal_534 + 1;
										if (iVar7 < 14)
										{
											iLocal_534 = iVar7;
										}
										else
										{
											iLocal_534 = 14;
										}
										else
										{
											Jump @4840; //curOff = 4171
											if (__LIB_0__::func_266(iLocal_14, 1341.899f, 1761.381f, 220.8286f, 8f, 1, 1))
											{
												func_321(17, 0);
											}
											else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
											{
											}
											else
											{
												if (!__LIB_6__::func_912(Global_35, iLocal_14, sLocal_95, 1112014848 /* Float: 50f */) || __LIB_0__::func_48(iLocal_14, Global_35, 2f, 1))
												{
													if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_14))
													{
														TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_14, 1, 0, 0);
													}
													if (!__LIB_0__::func_48(iLocal_14, Global_35, 12f, 1))
													{
														if (__LIB_9__::func_178(&uLocal_236) > 12f)
														{
															if (iLocal_70 < 4)
															{
																if (!__LIB_6__::func_904())
																{
																	if (__LIB_12__::func_876(uParam0, Local_316.f_5[27], 0))
																	{
																		iLocal_70++;
																		__LIB_2__::func_259(&uLocal_236);
																	}
																}
															}
														}
													}
												}
												else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_14))
												{
													if (!__LIB_0__::func_48(iLocal_14, Global_35, 2f, 1))
													{
														TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_14, true, -1, 0);
													}
												}
												else if (!__LIB_0__::func_48(iLocal_14, Global_35, 8f, 1))
												{
													TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 2f, 0, -1082130432 /* Float: -1f */, 0);
												}
												else if (!__LIB_0__::func_48(iLocal_14, Global_35, 5f, 1))
												{
													TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_14, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
												}
												if (iLocal_534 < 14)
												{
													TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_95, Local_448[iLocal_534 /*6*/].f_5, &vVar0);
													if (__LIB_0__::func_266(iLocal_14, vVar0, 2f, 1, 1))
													{
														Local_448[iLocal_534 /*6*/] = 1;
														func_751(uParam0);
														iVar8 = iLocal_534 + 1;
														if (iVar8 < 14)
														{
															iLocal_534 = iVar8;
														}
														else
														{
															iLocal_534 = 14;
														}
														else
														{
															Jump @4840; //curOff = 4560
															if (iLocal_293 == 7)
															{
																if (!__LIB_0__::func_27(iLocal_66, 32))
																{
																	if (__LIB_0__::func_48(iLocal_14, Global_35, 15f, 1))
																	{
																		__LIB_6__::func_900("WAR3_CHAT1_A", 0, 0);
																		__LIB_6__::func_900("WAR3_CHAT1_J", 0, 0);
																		if (__LIB_12__::func_876(uParam0, Local_316.f_5[45], 0))
																		{
																			__LIB_2__::func_259(&uLocal_233);
																			__LIB_1__::func_683(&iLocal_66, 32);
																		}
																	}
																}
															}
															Jump @4840; //curOff = 4653
															if (!PED::IS_PED_ON_MOUNT(iLocal_14) && !TASK::IS_PED_GETTING_UP(iLocal_14))
															{
																func_321(19, 0);
															}
															Jump @4840; //curOff = 4685
															PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_14, 1.5f);
															if (iLocal_293 != 11)
															{
																if (!__LIB_0__::func_27(iLocal_66, 64))
																{
																	if (__LIB_12__::func_876(uParam0, Local_316.f_5[47], 0))
																	{
																		__LIB_1__::func_683(&iLocal_66, 64);
																		__LIB_2__::func_259(&uLocal_284);
																	}
																}
																else if (__LIB_9__::func_178(&uLocal_284) > 6f)
																{
																	if (bLocal_290)
																	{
																		if (__LIB_12__::func_876(uParam0, Local_316.f_5[48], 0))
																		{
																			__LIB_2__::func_259(&uLocal_284);
																			bLocal_290 = false;
																		}
																	}
																	else if (__LIB_12__::func_876(uParam0, Local_316.f_5[49], 0))
																	{
																		__LIB_2__::func_259(&uLocal_284);
																		bLocal_290 = true;
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
						}
					}
				}
			}
			default:
				break;
	}
}

void func_351()
{
	if (__LIB_0__::func_255(vLocal_296[1 /*3*/], 0))
	{
		return;
	}
	switch (iLocal_291)
	{
		case 0:
			break;
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_94))
			{
				if (__LIB_0__::func_266(vLocal_296[1 /*3*/], 1460.58f, 1580.262f, 175.0453f, 3f, 1, 1))
				{
					__LIB_2__::func_426(&(vLocal_296[1 /*3*/]));
				}
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else if (__LIB_0__::func_266(vLocal_296[1 /*3*/], 1460.58f, 1580.262f, 175.0453f, 3f, 1, 1))
			{
				__LIB_2__::func_426(&(vLocal_296[1 /*3*/]));
			}
			break;
		case 2:
			ENTITY::_0x80FDEB3A9E9AA578(vLocal_296[1 /*3*/], 0);
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_96))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_296[1 /*3*/]) < 4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 1f, 1, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 1.5f, 1, -1082130432 /* Float: -1f */, 0);
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_296[1 /*3*/]) > 5)
				{
					func_323(5);
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(vLocal_296[1 /*3*/], 1464580341))
			{
				func_323(5);
			}
			break;
		case 5:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_96))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_296[1 /*3*/]) > 34)
				{
					if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[1 /*3*/]) && ENTITY::IS_ENTITY_OCCLUDED(vLocal_296[1 /*3*/]))
					{
						func_323(9);
						return;
					}
				}
				else if (!__LIB_0__::func_27(iLocal_63, 8388608))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_296[1 /*3*/]) > 28)
					{
						if (MAP::DOES_BLIP_EXIST(vLocal_296[1 /*3*/].f_1))
						{
							MAP::_BLIP_SET_MODIFIER(vLocal_296[1 /*3*/].f_1, -1269631044);
							__LIB_1__::func_683(&iLocal_63, 8388608);
						}
					}
				}
				if (!__LIB_0__::func_27(iLocal_63, 262144))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_296[1 /*3*/], Global_35, 1, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(vLocal_296[1 /*3*/], true, false), 30f, true))
					{
						__LIB_1__::func_683(&iLocal_63, 262144);
						return;
					}
					if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_296[1 /*3*/]) > 20)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 2f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else if (__LIB_0__::func_48(iLocal_14, vLocal_296[1 /*3*/], 60f, 1))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 2f, 1, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 2f, 1, -1082130432 /* Float: -1f */, 0);
					}
				}
				else
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_296[1 /*3*/], 2f, 1, -1082130432 /* Float: -1f */, 0);
				}
			}
			break;
		case 6:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, sLocal_93))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_14) > 38)
				{
					func_323(7);
				}
			}
			break;
		case 7:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_296[1 /*3*/], sLocal_96))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_296[1 /*3*/]) > 62)
				{
					func_323(8);
				}
			}
			break;
		case 8:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, sLocal_93))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_14) > 67)
				{
					func_323(9);
				}
			}
			break;
		case 9:
			break;
	}
}

void func_352()
{
	int iVar0;
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	func_752();
	if (iLocal_293 == 8)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (iVar0 == 0)
			{
			}
			else if (__LIB_0__::func_255(vLocal_296[iVar0 /*3*/], 0))
			{
			}
			else if (__LIB_0__::func_27(vLocal_296[iVar0 /*3*/].f_2, 2))
			{
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(vLocal_296[iVar0 /*3*/], sLocal_98, "idle_b", 1))
			{
				MAP::_TRIGGER_SONAR_BLIP_2(1434382007, vLocal_296[iVar0 /*3*/]);
				if (!MAP::DOES_BLIP_EXIST(vLocal_296[iVar0 /*3*/].f_1))
				{
					vLocal_296[iVar0 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[iVar0 /*3*/]);
					MAP::_BLIP_SET_MODIFIER(vLocal_296[iVar0 /*3*/].f_1, -1269631044);
				}
				__LIB_1__::func_683(&(vLocal_296[iVar0 /*3*/].f_2), 2);
			}
			iVar0++;
		}
		return;
	}
	if (iLocal_533 >= 14)
	{
		return;
	}
	if (Local_448[iLocal_533 /*6*/])
	{
		iLocal_533++;
	}
}

void func_354(var uParam0)
{
	if (iLocal_295 == 0)
	{
		if (!__LIB_0__::func_899(&uLocal_281))
		{
			if (!__LIB_6__::func_904())
			{
				__LIB_2__::func_259(&uLocal_281);
			}
		}
		else if (__LIB_9__::func_178(&uLocal_281) > 9f)
		{
			if (__LIB_12__::func_876(uParam0, Local_316.f_5[7], 0))
			{
				iLocal_60++;
				__LIB_1__::func_561(&uLocal_281);
			}
		}
		func_359(uParam0, 128);
	}
	else
	{
		func_359(uParam0, 1);
	}
	if (!__LIB_0__::func_27(iLocal_63, 16384))
	{
		if (__LIB_8__::func_727(Global_35, func_218(1), &uLocal_251, 50f, 20f, 13f, 10f, 1f, 0, 0, 1, 1, 1))
		{
			__LIB_1__::func_561(&uLocal_251);
			__LIB_1__::func_683(&iLocal_63, 16384);
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	}
	if (__LIB_0__::func_899(&uLocal_263))
	{
		if (__LIB_9__::func_178(&uLocal_263) < 8f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_16, 1f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
		else
		{
			__LIB_1__::func_561(&uLocal_263);
		}
	}
	if (__LIB_0__::func_266(Global_35, func_218(0), 20f, 1, 1))
	{
		func_320(uParam0, 1, 0);
	}
}

void func_355(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_63, 16384))
	{
		if (__LIB_8__::func_727(Global_35, func_218(1), &uLocal_251, 50f, 20f, 13f, 10f, 1f, 0, 0, 1, 1, 1) || !__LIB_0__::func_71(Global_35))
		{
			__LIB_1__::func_561(&uLocal_251);
			__LIB_1__::func_683(&iLocal_63, 16384);
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	}
	func_359(uParam0, 1);
}

void func_358(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	__LIB_1__::func_448(Global_35, func_218(36), 0, 15f, 10f, 9f, 8f, 1, 1, 1, 0);
	iVar0 = func_366(uParam0, &Local_316, 11, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0);
	if (iVar0 != 3 && iVar0 != 7)
	{
		return;
	}
	func_359(uParam0, 1);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_93, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &iVar4);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 3)
	{
		if (!vLocal_438[iVar5 /*3*/].f_1)
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_93, vLocal_438[iVar5 /*3*/], &vVar1);
			if (__LIB_0__::func_266(iLocal_14, vVar1, 2f, 1, 1) || iVar4 > vLocal_438[iVar5 /*3*/])
			{
				vLocal_438[iVar5 /*3*/].f_1 = 1;
			}
		}
		iVar5++;
	}
	if (iLocal_67 < 3)
	{
		if (vLocal_438[iLocal_67 /*3*/].f_1 == 1)
		{
			if (iLocal_67 != 1)
			{
				iVar0 = func_366(uParam0, &Local_316, vLocal_438[iLocal_67 /*3*/].f_2, &iLocal_14, 0, 25f, 1);
			}
			else
			{
				iVar0 = func_366(uParam0, &Local_316, vLocal_438[iLocal_67 /*3*/].f_2, &iLocal_14, 0, 25f, 0);
			}
			if (iVar0 == 3 || iVar0 == 7)
			{
				iLocal_67++;
			}
		}
	}
}

bool func_359(var uParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	sVar0 = func_747(iParam1);
	if (__LIB_0__::func_27(iLocal_62, iParam1))
	{
		if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
		{
			__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		return true;
	}
	if (__LIB_0__::func_270())
	{
		return false;
	}
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_1__::func_561(&uLocal_248);
		__LIB_1__::func_683(&iLocal_62, iParam1);
		return false;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_2__::func_259(&uLocal_248);
		fLocal_74 = 10000f;
		iLocal_77 = 0;
		return false;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 128:
			__LIB_1__::func_718(7);
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_22, -546708623);
			}
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 1:
			__LIB_1__::func_721(7);
			if (MAP::DOES_BLIP_EXIST(iLocal_22))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_22, -546708623);
			}
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 2:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 8:
			if (func_761(&uLocal_248, &iLocal_77))
			{
				__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 4:
			if (!__LIB_0__::func_48(Global_35, iLocal_14, 15f, 0))
			{
				__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 16:
			if (func_761(&uLocal_248, &iLocal_77))
			{
				__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 64:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 32:
			if (func_762(&uLocal_248, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &fLocal_74, -1082130432 /* Float: -1f */))
			{
				__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 256:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 512:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 1024:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
	}
	if (iVar1 == 1)
	{
		__LIB_1__::func_561(&uLocal_248);
		__LIB_1__::func_683(&iLocal_62, iParam1);
	}
	return false;
}

void func_365()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_255(vLocal_296[iVar0 /*3*/], 0))
		{
		}
		else if (!bLocal_90)
		{
			if (ENTITY::IS_ENTITY_VISIBLE(vLocal_296[iVar0 /*3*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(vLocal_296[iVar0 /*3*/], false);
			}
		}
		else if (!ENTITY::IS_ENTITY_VISIBLE(vLocal_296[iVar0 /*3*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(vLocal_296[iVar0 /*3*/], true);
		}
		iVar0++;
	}
	if (!bLocal_90)
	{
		if (__LIB_0__::func_266(iLocal_14, 1283.354f, 1748.338f, 240.3526f, 5f, 1, 1))
		{
			bLocal_90 = true;
		}
	}
}

int func_366(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	return __LIB_14__::func_196(uParam0, uParam1, iParam2, iParam3, bParam4, fParam5, bParam6);
}

bool func_367()
{
	if (((!ENTITY::IS_ENTITY_DEAD(vLocal_296[5 /*3*/]) && !ENTITY::IS_ENTITY_OCCLUDED(vLocal_296[5 /*3*/])) && ENTITY::IS_ENTITY_ON_SCREEN(vLocal_296[5 /*3*/])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, vLocal_296[5 /*3*/], 17))
	{
		return true;
	}
	return false;
}

void func_368(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(vLocal_296[5 /*3*/].f_1))
	{
		vLocal_296[5 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[5 /*3*/]);
		if (MAP::DOES_BLIP_EXIST(iLocal_22))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_22, -546708623);
		}
	}
	if (((((__LIB_0__::func_48(Global_35, vLocal_296[5 /*3*/], 10f, 0) || __LIB_0__::func_48(Global_35, vLocal_296[2 /*3*/], 10f, 0)) || __LIB_0__::func_48(Global_35, vLocal_296[3 /*3*/], 10f, 0)) || __LIB_0__::func_48(Global_35, vLocal_296[4 /*3*/], 10f, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(vLocal_296[5 /*3*/], true, false), 30f, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(vLocal_296[5 /*3*/]))
	{
		func_320(uParam0, 9, 0);
	}
}

void func_369(var uParam0)
{
	int iVar0;
	int iVar1;
	func_366(uParam0, &Local_316, 12, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0);
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (iVar1 == 0)
		{
		}
		else
		{
			if (__LIB_0__::func_255(vLocal_296[iVar1 /*3*/], 0))
			{
				func_320(uParam0, 9, 0);
				return;
			}
			iVar0++;
			if (__LIB_0__::func_48(vLocal_296[iVar1 /*3*/], Global_35, 10f, 1) || __LIB_0__::func_48(vLocal_296[iVar1 /*3*/], iLocal_14, 10f, 1))
			{
				func_320(uParam0, 9, 0);
				return;
			}
			if (func_221(&(vLocal_296[iVar1 /*3*/])))
			{
				func_320(uParam0, 9, 0);
				return;
			}
		}
		iVar1++;
	}
	if (iVar0 <= 0)
	{
		func_320(uParam0, 10, 0);
		return;
	}
}

void func_370(var uParam0)
{
	int iVar0;
	int iVar1;
	if (func_359(uParam0, 8))
	{
		func_366(uParam0, &Local_316, 13, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0);
	}
	if (__LIB_9__::func_178(&uLocal_245) > 2f)
	{
		func_321(19, 0);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (iVar1 == 0)
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(vLocal_296[iVar1 /*3*/]))
		{
		}
		else
		{
			iVar0++;
			if (__LIB_0__::func_48(vLocal_296[iVar1 /*3*/], Global_35, 20f, 1) || __LIB_0__::func_48(vLocal_296[iVar1 /*3*/], iLocal_14, 20f, 1))
			{
				if (!MAP::DOES_BLIP_EXIST(vLocal_296[iVar1 /*3*/].f_1) && ENTITY::IS_ENTITY_VISIBLE(vLocal_296[iVar1 /*3*/]))
				{
					vLocal_296[iVar1 /*3*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_296[iVar1 /*3*/]);
				}
			}
		}
		iVar1++;
	}
	if (!bLocal_86)
	{
		if (iVar0 == 1 && !ENTITY::IS_ENTITY_DEAD(vLocal_296[4 /*3*/]))
		{
			__LIB_3__::func_10(vLocal_296[4 /*3*/]);
			TASK::CLEAR_PED_TASKS(vLocal_296[4 /*3*/], true, false);
			PED::REGISTER_TARGET(vLocal_296[4 /*3*/], Global_35, 1);
			TASK::TASK_COMBAT_PED(vLocal_296[4 /*3*/], Global_35, 0, 0);
			bLocal_86 = true;
		}
	}
	if (iVar0 <= 0)
	{
		func_320(uParam0, 10, 0);
		return;
	}
}

bool func_372(var uParam0)
{
	if (iLocal_294 < 5)
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	}
	switch (iLocal_294)
	{
		case 0:
			func_770();
			iLocal_294 = 1;
			break;
		case 1:
			if (func_771(uParam0))
			{
				iLocal_294 = 2;
			}
			break;
		case 2:
			func_772();
			iLocal_294 = 3;
			break;
		case 3:
			if (func_773(uParam0))
			{
				iLocal_294 = 4;
			}
			break;
		case 4:
			CAM::_0x0FF7125F07DEB84F(vLocal_296[0 /*3*/], 0);
			func_774();
			iLocal_294 = 5;
			break;
		case 5:
			CAM::_0x0FF7125F07DEB84F(vLocal_296[0 /*3*/], 0);
			if (func_775())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_381(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	__LIB_5__::func_250(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_252(iParam0, __LIB_4__::func_816(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_252(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_252(iParam0, vParam2, 0, 0);
	}
	MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

void func_401(int iParam0, int iParam1, int iParam2)
{
	func_784(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			__LIB_1__::func_559(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

void func_402(int iParam0)
{
	func_405();
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

void func_405()
{
	int iVar0;
	int iVar1;
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (__LIB_5__::func_240(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					func_115(iVar1, 0);
					func_252(iVar1, __LIB_1__::func_440(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_408(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		func_799(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		func_800(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
						func_811(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_811(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_811(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_811(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_811(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_811(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_811(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_811(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_811(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_811(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_811(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_811(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_811(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_813();
						func_814(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_811(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_408(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_408(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_408(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_811(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_0__::func_894(iParam0);
				func_849();
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
									func_811(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
void func_409(int iParam0, bool bParam1)
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

bool func_436(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	struct<28> Var0;
	var uVar28;
	int iVar29;
	if (FIRE::IS_ENTITY_ON_FIRE(*iParam3))
	{
		if (ENTITY::GET_ENTITY_HEALTH(*iParam3) > 10)
		{
			ENTITY::_SET_ENTITY_HEALTH(*iParam3, 10, 0);
		}
	}
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		return false;
	}
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
	__LIB_4__::func_228(&Var0);
	__LIB_1__::func_402(&Var0, 0);
	if (PED::IS_PED_FLEEING(*iParam3) || *uParam4)
	{
		return true;
	}
	if (__LIB_10__::func_373(*iParam3, 0, &Var0, &uVar28, 0, 0) || __LIB_12__::func_644(uParam0) == 11)
	{
		iVar29 = func_366(uParam0, uParam1, iParam2, iParam3, 1, 1097859072 /* Float: 15f */, 1);
		if (iVar29 == 1 || iVar29 == 7)
		{
			func_886(iParam3, uParam4);
		}
		return true;
	}
	return false;
}

void func_437()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bLocal_84)
	{
		return;
	}
	iVar0 = 464103564;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		return;
	}
	if (ENTITY::_0x5744562E973E33CD(iVar0, &iVar1, &iVar2, &iVar3, 0))
	{
		if ((!TXD::_HAS_STREAMED_TXD_LOADED(iVar1) || !TXD::_HAS_STREAMED_TXD_LOADED(iVar2)) || !TXD::_HAS_STREAMED_TXD_LOADED(iVar3))
		{
			TXD::_REQUEST_STREAMED_TXD(iVar1, false);
			TXD::_REQUEST_STREAMED_TXD(iVar2, false);
			TXD::_REQUEST_STREAMED_TXD(iVar3, false);
		}
		else
		{
			ENTITY::_0xDD03FC2089AD093C(iLocal_57, joaat("PROVISION_WOLF_FUR"), iVar0, 0);
			bLocal_84 = true;
		}
	}
}

bool func_438(int iParam0, char* sParam1)
{
	if (func_742(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_119[iParam0 /*16*/], sParam1, true);
		Local_119[iParam0 /*16*/].f_15 = sParam1;
		return true;
	}
	return false;
}

void func_439(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (PED::DOES_GROUP_EXIST(iLocal_24))
		{
			if (!__LIB_0__::func_255(iLocal_14, 0))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_14);
			}
			PED::REMOVE_GROUP(iLocal_24);
			PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Global_35))
		{
			ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
		}
		if (ENTITY::_IS_ENTITY_FROZEN(Global_35))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
		}
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
		}
		PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
		__LIB_1__::func_721(7);
		MISC::CLEAR_OVERRIDE_WEATHER();
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (vLocal_418.z)
	{
		__LIB_14__::func_189(&vLocal_418, &(vLocal_418.f_1), 0);
		__LIB_0__::func_172(vLocal_418.x);
		vLocal_418.f_2 = 0;
	}
	func_888();
	__LIB_0__::func_325(&iLocal_22);
	__LIB_0__::func_325(&iLocal_23);
	__LIB_1__::func_281(&iLocal_225, 1, 1);
	__LIB_2__::func_624(&Local_168, 1, 1, 1, 0);
	vLocal_203.f_2 = 0;
	__LIB_1__::func_480(&iLocal_14);
	__LIB_14__::func_194(&iLocal_14);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!__LIB_0__::func_255(vLocal_296[iVar0 /*3*/], 0))
		{
			if (iVar0 != 0)
			{
				__LIB_1__::func_864(vLocal_296[iVar0 /*3*/], 1, 0);
			}
			if (ENTITY::GET_ENTITY_COLLISION_DISABLED(vLocal_296[iVar0 /*3*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(vLocal_296[iVar0 /*3*/], true, false);
			}
			if (ENTITY::_IS_ENTITY_FROZEN(vLocal_296[iVar0 /*3*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(vLocal_296[iVar0 /*3*/], false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[iVar0 /*3*/]))
		{
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(vLocal_296[iVar0 /*3*/], 0);
			PED::_0x3088634CF8C819CF(vLocal_296[iVar0 /*3*/]);
		}
		__LIB_2__::func_788(&(vLocal_296[iVar0 /*3*/]), 0, 1, 1);
		__LIB_0__::func_325(&(vLocal_296[iVar0 /*3*/].f_1));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iLocal_58, 0);
	}
	__LIB_2__::func_426(&iLocal_58);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_20))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_20);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_20))
		{
			__LIB_1__::func_864(iLocal_20, 1, 0);
		}
		__LIB_2__::func_788(&iLocal_20, 1, 0, 1);
	}
	__LIB_2__::func_353(&uLocal_25, 1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		__LIB_6__::func_916(&(Local_421[iVar1 /*4*/].f_2));
		__LIB_1__::func_951(&(Local_421[iVar1 /*4*/]));
		__LIB_2__::func_353(&(Local_421[iVar1 /*4*/].f_3), 1);
		iVar1++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (ENTITY::_0x1FF441D7954F8709(Local_29[iVar2 /*9*/].f_8))
		{
			ENTITY::_0xD2B9C78537ED5759(Local_29[iVar2 /*9*/].f_8);
		}
		iVar2++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_24))
	{
		if (!__LIB_0__::func_255(iLocal_14, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_14);
		}
		PED::REMOVE_GROUP(iLocal_24);
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	__LIB_14__::func_187(uParam0);
	__LIB_13__::func_927(&Local_430);
	__LIB_6__::func_916(&(Local_430.f_5));
	__LIB_1__::func_681(&iLocal_63, 32);
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	__LIB_2__::func_788(&(uLocal_17[0]), 1, 0, 1);
	__LIB_2__::func_788(&(uLocal_17[1]), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 0);
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	OBJECT::_0x0C0A373D181BF900(joaat("DOOR_VET_HOUSE_INT_1"));
}

void func_485(var uParam0)
{
	func_307();
	PED::_0x2EB75FB86C41F026(iLocal_15, 3, 0);
}

void func_486(var uParam0)
{
	func_931();
}

void func_487(var uParam0)
{
	if (PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	}
}

void func_488(var uParam0, var uParam1)
{
	int iVar0;
	func_314(uParam0, 0, 0);
	if (!__LIB_0__::func_27(iLocal_64, 8))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
		{
			iLocal_21 = __LIB_13__::func_225(uParam1, "A_C_Wolf", 1);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_14, joaat("WOLF")))
		{
			TASK::CLEAR_PED_TASKS(iLocal_21, true, false);
			ENTITY::_0x9587913B9E772D29(iLocal_21, 0);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_21, 5f);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PAUSE(0, 2500);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, 1673.559f, 1617.769f, 156.3659f, 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_21, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			__LIB_1__::func_683(&iLocal_64, 8);
		}
	}
	if (!__LIB_0__::func_27(iLocal_64, 2))
	{
		PHYSICS::_0x0348469DAA17576C(iLocal_15);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(7), func_219(7), true, false, true);
		TASK::TASK_STAND_STILL(iLocal_15, -1);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(4), func_219(4), true, false, true);
		TASK::TASK_STAND_STILL(iLocal_16, -1);
		__LIB_1__::func_683(&iLocal_64, 2);
	}
	if (!__LIB_0__::func_27(iLocal_64, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_1__::func_683(&iLocal_64, 4);
		}
	}
	if (__LIB_13__::func_193(uParam1, Global_35, 0, 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
	}
	if (__LIB_13__::func_193(uParam1, iLocal_14, "WarVet", 0, 1, 1))
	{
		PED::FORCE_PED_MOTION_STATE(iLocal_14, joaat("MOTIONSTATE_WALK"), false, 1, false);
		func_321(0, 1);
	}
}

void func_489(var uParam0)
{
	func_327(1, 0, func_202(0));
	if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (func_327(1, 0, func_202(0)))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_119[1 /*16*/]);
		}
	}
}

void func_490(var uParam0)
{
	if (!bLocal_91)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_16))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, 1364.144f, 1751.116f, 219.6404f, 77.1959f, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_16, 0);
		}
		bLocal_91 = true;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		if (!__LIB_0__::func_163(iLocal_16, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_16, -1);
		}
	}
	func_327(2, 0, func_202(3));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		iLocal_57 = __LIB_13__::func_478(uParam0, "p_cs_pelt_large", 1);
	}
	else
	{
		TASK::_0xFF745B0346E19E2C(joaat("CARRIABLE_ANIMAL_SKIN_L"));
	}
	if (__LIB_13__::func_193(uParam0, iLocal_14, "WarVet", 0, 1, 1))
	{
		if (!__LIB_0__::func_27(iLocal_65, 1))
		{
			if (func_327(2, 0, func_202(3)))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_119[2 /*16*/]);
				__LIB_1__::func_683(&iLocal_65, 1);
			}
		}
	}
	if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!TASK::_0x0CCFE72B43C9CF96(iLocal_57))
			{
				TASK::TASK_CARRIABLE(iLocal_57, joaat("CARRIABLE_ANIMAL_SKIN_L"), Global_35, 0, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_65, 1))
		{
			if (func_327(2, 0, func_202(3)))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_119[2 /*16*/]);
				__LIB_1__::func_683(&iLocal_65, 1);
			}
		}
	}
}

bool func_491(var uParam0, var uParam1)
{
	if (func_314(uParam0, 0, 0))
	{
		if (!__LIB_0__::func_27(iLocal_64, 2))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_218(7), func_219(7), true, false, true);
			TASK::TASK_STAND_STILL(iLocal_15, -1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_218(4), func_219(4), true, false, true);
			TASK::TASK_STAND_STILL(iLocal_16, -1);
			__LIB_1__::func_683(&iLocal_64, 2);
		}
		if (!__LIB_0__::func_27(iLocal_64, 4))
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(20, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_1__::func_683(&iLocal_64, 4);
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, 1695.322f, 1514.946f, 145.8805f, 359.6105f, true, false, true);
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_14, joaat("WEAPON_REPEATER_CARBINE"), 0, false))
		{
			__LIB_1__::func_766(iLocal_14, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		return true;
	}
	return false;
}

bool func_492(var uParam0)
{
	if (func_327(1, 0, func_202(0)))
	{
		return true;
	}
	return false;
}

bool func_493(var uParam0)
{
	if (func_327(2, 0, func_202(3)))
	{
		return true;
	}
	return false;
}

int func_521(int iParam0, int iParam1)
{
	var uVar0;
	return func_953(&uVar0, iParam0, iParam1);
}

int func_533(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -589165916;
		case 1:
			return joaat("HAI_HUNTING_02");
		case 2:
			return joaat("HAI_FISHING_01");
		case 3:
			return joaat("HAI_FISHING_02");
		case 4:
			return joaat("HAI_FIVE_FINGER_FILLET_01");
		case 5:
			return joaat("HAI_HUNTING_06");
		case 6:
			return joaat("HAI_DOMINOES_01");
		case 7:
			return joaat("HAI_COACH_ROBBERY_01");
		case 8:
			return joaat("HAI_COACH_ROBBERY_02");
		case 9:
			return joaat("HAI_FIVE_FINGER_FILLET_02");
		case 10:
			return joaat("HAI_BANK_ROBBERY_01");
		case 11:
			return joaat("HAI_COACH_ROBBERY_03");
			return joaat("HAI_COACH_ROBBERY_04");
			return joaat("HAI_RUSTLING_02");
			return joaat("HAI_HOME_ROBBERY_01");
			return 2061320468;
			return -709866131;
			return -1348173149;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
int func_534(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_556(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return 1;
	}
	if (func_221(iParam0))
	{
		bVar0 = true;
	}
	if (((PED::IS_PED_FLEEING(*iParam0) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1)) || FIRE::IS_ENTITY_ON_FIRE(*iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam1)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
		return 1;
	}
	return 0;
}

bool func_616(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_64, 1))
	{
		return true;
	}
	if (!__LIB_12__::func_871(uParam0) || __LIB_12__::func_936(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_29[0 /*9*/]))
		{
			STREAMING::REQUEST_MODEL(Local_29[0 /*9*/].f_7, false);
			if (STREAMING::HAS_MODEL_LOADED(Local_29[0 /*9*/].f_7))
			{
				if (Local_29[0 /*9*/].f_8 == 0)
				{
					Local_29[0 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_29[0 /*9*/].f_7, Local_29[0 /*9*/].f_1, 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_29[0 /*9*/].f_8))
				{
					Local_29[0 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_29[0 /*9*/].f_8));
				}
			}
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_29[1 /*9*/]))
		{
			STREAMING::REQUEST_MODEL(Local_29[1 /*9*/].f_7, false);
			if (STREAMING::HAS_MODEL_LOADED(Local_29[1 /*9*/].f_7))
			{
				if (Local_29[1 /*9*/].f_8 == 0)
				{
					Local_29[1 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_29[1 /*9*/].f_7, Local_29[1 /*9*/].f_1, 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_29[1 /*9*/].f_8))
				{
					Local_29[1 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_29[1 /*9*/].f_8));
				}
			}
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_29[2 /*9*/]))
		{
			STREAMING::REQUEST_MODEL(Local_29[2 /*9*/].f_7, false);
			if (STREAMING::HAS_MODEL_LOADED(Local_29[2 /*9*/].f_7))
			{
				if (Local_29[2 /*9*/].f_8 == 0)
				{
					Local_29[2 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_29[2 /*9*/].f_7, Local_29[2 /*9*/].f_1, 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_29[2 /*9*/].f_8))
				{
					Local_29[2 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_29[2 /*9*/].f_8));
				}
			}
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_29[iVar0 /*9*/].f_7);
		iVar0++;
	}
	__LIB_1__::func_683(&iLocal_64, 1);
	return true;
}

bool func_617(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_63, 4096))
	{
		return true;
	}
	vVar0 = { func_218(9) };
	fVar3 = func_219(9);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (func_651(uParam0, &iLocal_14, iLocal_226, vVar0, fVar3, 0, 0, 1065353216 /* Float: 1f */, 0))
	{
		__LIB_0__::func_862(iLocal_14, joaat("META_OUTFIT_COOL_WEATHER"));
		PED::_0x923583741DC87BCE(iLocal_14, "war_veteran");
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_14, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_PLAYER_ALLY"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_14, false);
		__LIB_10__::func_385(iLocal_14);
		if (!__LIB_12__::func_871(uParam0))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_14, 1700.148f, 1508.068f, 147.3328f, 0.5f, -1, false, false, true, false);
		}
		__LIB_12__::func_875(uParam0, iLocal_14, "RWARV_VETERAN", 1);
		__LIB_1__::func_683(&iLocal_63, 4096);
	}
	return false;
}

bool func_651(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		__LIB_13__::func_630(iParam1, vParam3, iParam6);
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam2))
	{
		return false;
	}
	*iParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, iParam10, 1, 1, bParam7, 1, 0);
	if (bParam8)
	{
		PED::_SET_PED_SCALE(*iParam1, bParam9);
	}
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
		__LIB_13__::func_630(iParam1, vParam3, iParam6);
		return true;
	}
	return false;
}

bool func_653(int* iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*iParam0))
	{
		PED::REVIVE_INJURED_PED(*iParam0);
	}
	if (__LIB_0__::func_255(*iParam0, 0))
	{
		__LIB_2__::func_788(iParam0, 1, 0, 1);
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, vParam1, fParam4, true, false, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::_0x18FF3110CF47115D(*iParam0, 15, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 172, true);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, true);
	if (!bParam5)
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
		return true;
	}
	else
	{
		PHYSICS::_0x06AADE17334F7A40(*iParam0, 1694.373f, 1511.175f, 146.7236f);
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
	return true;
}

void func_657()
{
	vector3 vVar0[6];
	float fVar19[6];
	int iVar26;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_315, joaat("REL_WILD_ANIMAL_PREDATOR"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_WILD_ANIMAL_PREDATOR"), iLocal_315);
	vVar0[0 /*3*/] = { 99.5487f, 2451.843f, 327.7672f };
	vVar0[2 /*3*/] = { 1364.172f, 1743.144f, 218.3322f };
	fVar19[2] = 2.9f;
	vVar0[3 /*3*/] = { 1336.015f, 1743.809f, 220.8418f };
	fVar19[3] = 323.203f;
	vVar0[4 /*3*/] = { 1359.118f, 1776.541f, 222.3515f };
	fVar19[4] = 156.4609f;
	vVar0[5 /*3*/] = { 1355.856f, 1757.627f, 220.5223f };
	fVar19[5] = 248.4999f;
	iVar26 = 0;
	iVar26 = 0;
	while (iVar26 < 6)
	{
		if (iVar26 == 0)
		{
		}
		else if (__LIB_0__::func_255(vLocal_296[iVar26 /*3*/], 0))
		{
		}
		else
		{
			if (iVar26 != 5)
			{
				PED::SET_PED_CONFIG_FLAG(vLocal_296[iVar26 /*3*/], 277, true);
				PED::SET_PED_CONFIG_FLAG(vLocal_296[iVar26 /*3*/], 273, true);
			}
			else
			{
				__LIB_1__::func_473(vLocal_296[iVar26 /*3*/], joaat("WORLD_ANIMAL_WOLF_SNIFFING_GROUND"), -1, 0, 0, -1082130432 /* Float: -1f */);
				PED::_0xF1C03A5352243A30(vLocal_296[iVar26 /*3*/]);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[iVar26 /*3*/], vVar0[iVar26 /*3*/], fVar19[iVar26], true, true, true);
			TASK::CLEAR_PED_TASKS(vLocal_296[iVar26 /*3*/], true, false);
		}
		iVar26++;
	}
}

void func_664()
{
	int iVar0;
	int iVar1;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_315, joaat("REL_WILD_ANIMAL_PREDATOR"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_WILD_ANIMAL_PREDATOR"), iLocal_315);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (iVar1 == 0)
		{
		}
		else if (__LIB_0__::func_255(vLocal_296[iVar1 /*3*/], 0))
		{
		}
		else
		{
			if (iVar1 != 5)
			{
				PED::SET_PED_CONFIG_FLAG(vLocal_296[iVar1 /*3*/], 277, false);
				PED::SET_PED_CONFIG_FLAG(vLocal_296[iVar1 /*3*/], 273, false);
			}
			TASK::CLEAR_PED_TASKS(vLocal_296[iVar1 /*3*/], true, false);
			PED::_0x73B6F907B913C860(vLocal_296[iVar1 /*3*/], 0f);
			if (iVar1 != 4)
			{
				TASK::TASK_COMBAT_PED(vLocal_296[iVar1 /*3*/], Global_35, 0, 0);
			}
			else
			{
				AUDIO::SET_ANIMAL_MOOD(vLocal_296[0 /*3*/], 0);
				PED::_0xCA95C156C14B2054(vLocal_296[0 /*3*/], "mood_angry");
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_14, -1, 1072, 51, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1357.825f, 1758.511f, 220.3292f, 2f, -1, 0.25f, 0, 67.1697f);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, 1355.206f, 1759.907f, 220.5938f, 500);
				TASK::TASK_PLAY_ANIM(0, sLocal_101, sLocal_102, 8f, -8f, -1, 16405, 0f, false, 0, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(vLocal_296[iVar1 /*3*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
		iVar1++;
	}
}

void func_667(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_255(iParam0, 0))
	{
		return;
	}
	if (PED::_GET_RIDER_OF_MOUNT(iParam0, true) != 0)
	{
		return;
	}
	iVar0 = 240000;
	if (!__LIB_0__::func_48(iParam0, iParam1, 50f, 1))
	{
		if (!__LIB_0__::func_163(iParam0, 713668775))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 2.5f, iVar0, (50f * 0.5f), 4, 40000f);
		}
	}
	else if (!__LIB_0__::func_163(iParam0, -982327190) && !__LIB_0__::func_163(iParam0, 713668775))
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, true);
	}
}

int func_669(var uParam0, int iParam1, int iParam2)
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
		return func_669(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1092(iParam0);
			break;
		case 1:
			func_1093(iParam0);
			break;
		case 2:
			func_1094(iParam0);
			break;
	}
}

void func_695(var uParam0)
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
		func_1120(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1122(uParam0);
		func_1123(uParam0);
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

bool func_742(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_119[iParam0 /*16*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_119[iParam0 /*16*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_119[iParam0 /*16*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_119[iParam0 /*16*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_119[iParam0 /*16*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_119[iParam0 /*16*/], sParam1))
		{
			func_670(iParam0);
		}
	}
	return false;
}

int func_743(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
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
					if (__LIB_17__::func_559(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_743(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (__LIB_17__::func_560(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_10__::func_927(*iParam0, iParam1, uParam3))
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
					__LIB_17__::func_560(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			__LIB_10__::func_928(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char* func_747(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!bLocal_85)
			{
				return "WARV3_O_FOLLOW";
			}
			else
			{
				return "WARV3_O_VETER";
			}
			break;
		case 2:
			if (!bLocal_85)
			{
				return "WARV3_O_TRACKS";
			}
			else
			{
				return "WARV3_O_VETER";
			}
			break;
		case 4:
			if (!bLocal_85)
			{
				return "WARV3_O_CHOICE";
			}
			else
			{
				return "WARV3_O_VETER";
			}
			break;
		case 8:
			return "WARV3_O_FIGHT";
		case 16:
			return "WARV3_O_ALPHA";
		case 32:
			return "WARV3_O_VETER";
		case 64:
			return "WARV3_O_CLOSER";
		case 128:
			return "WARV3_O_MOUNT";
		case 256:
			return "RWARV_RC3_IG1";
		case 512:
			return "RWARV_RC3_IG2";
		case 1024:
			return "RWARV_RC3_IG3";
		case 2048:
			return "RWARV_HLP_TRACK";
	}
	return "";
}

void func_749()
{
	__LIB_2__::func_602(&(Local_168[0 /*17*/]), "WAR3_C_LEAD", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_168[1 /*17*/]), "WAR3_C_FOLLOW", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_751(var uParam0)
{
	int iVar0;
	iVar0 = 53;
	switch (iLocal_534)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 14:
			iVar0 = 53;
			break;
		case 7:
			iVar0 = 29;
			break;
		case 8:
			if (!__LIB_0__::func_27(iLocal_66, 2))
			{
				iVar0 = 30;
			}
			else
			{
				iVar0 = 36;
			}
			break;
		case 9:
			if (!__LIB_0__::func_27(iLocal_66, 2))
			{
				iVar0 = 31;
			}
			else
			{
				iVar0 = 37;
			}
			break;
		case 10:
			if (!__LIB_0__::func_27(iLocal_66, 2))
			{
				iVar0 = 32;
			}
			else
			{
				iVar0 = 38;
			}
			break;
		case 11:
			if (!__LIB_0__::func_27(iLocal_66, 2))
			{
				iVar0 = 33;
			}
			else
			{
				iVar0 = 39;
			}
			break;
		case 12:
			if (!__LIB_0__::func_27(iLocal_66, 2))
			{
				iVar0 = 34;
			}
			else
			{
				iVar0 = 40;
			}
			break;
		case 13:
			iVar0 = 35;
			break;
	}
	if (iVar0 != 53)
	{
		if (__LIB_0__::func_27(iLocal_66, 2))
		{
			if (iVar0 != 29 && iVar0 != 35)
			{
				func_366(uParam0, &Local_316, iVar0, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0);
			}
		}
		else
		{
			func_366(uParam0, &Local_316, iVar0, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0);
		}
	}
}

void func_752()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	if (iLocal_293 != 4)
	{
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_93, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &iVar3);
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 14)
	{
		if (Local_448[iVar4 /*6*/])
		{
		}
		else if (Local_448[iVar4 /*6*/].f_5 < 0)
		{
		}
		else if (iVar4 >= 7)
		{
		}
		else if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_93, Local_448[iVar4 /*6*/].f_5, &vVar0))
		{
			if (__LIB_0__::func_266(iLocal_14, vVar0, 2f, 1, 1) || iVar3 > Local_448[iVar4 /*6*/].f_5)
			{
				Local_448[iVar4 /*6*/] = 1;
			}
		}
		iVar4++;
	}
}

bool func_761(float fParam0, int iParam1)
{
	if (*iParam1)
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
		*iParam1 = 1;
		return false;
	}
	if (func_1213(fParam0))
	{
		__LIB_1__::func_561(fParam0);
		return true;
	}
	return false;
}

bool func_762(float fParam0, vector3 vParam1, var uParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam1, true);
	if (fVar0 < *uParam4)
	{
		*uParam4 = fVar0;
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			fVar1 = MISC::ABSF((fVar0 - *uParam4));
			if (fVar1 <= fParam5)
			{
				if (__LIB_0__::func_899(fParam0))
				{
					__LIB_1__::func_561(fParam0);
				}
				return false;
			}
		}
		if (!__LIB_0__::func_899(fParam0))
		{
			__LIB_2__::func_259(fParam0);
		}
		if (func_1213(fParam0))
		{
			__LIB_1__::func_561(fParam0);
			return true;
		}
	}
	return false;
}

void func_770()
{
	__LIB_4__::func_791(0);
	__LIB_4__::func_791(1);
	if (func_327(1, 0, func_202(0)))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_119[1 /*16*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_119[1 /*16*/]);
		}
	}
}

bool func_771(var uParam0)
{
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
	func_366(uParam0, &Local_316, 52, &Global_35, 0, 1097859072 /* Float: 15f */, 0);
	func_742(1, func_202(1));
	if (!bLocal_82)
	{
		if (!__LIB_0__::func_139(iLocal_225))
		{
			iLocal_225 = __LIB_1__::func_877("GRAPPLED_STRUGGLE_PROMPT", joaat("INPUT_MELEE_ATTACK"), 9, 570, 4000, 10, 2f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
	}
	if (!bLocal_83)
	{
		if (__LIB_0__::func_139(iLocal_225) && __LIB_1__::func_264(iLocal_225, 1))
		{
			if (!__LIB_0__::func_899(&uLocal_242))
			{
				__LIB_2__::func_259(&uLocal_242);
				bLocal_83 = true;
			}
		}
	}
	if (!bLocal_87)
	{
		if (__LIB_9__::func_178(&uLocal_242) > 0.1f)
		{
			if (__LIB_12__::func_876(uParam0, Local_316.f_5[50], 0))
			{
				bLocal_87 = true;
			}
		}
	}
	if (__LIB_0__::func_139(iLocal_225))
	{
		iLocal_61 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(vLocal_296[0 /*3*/], 5f, 2, 1, 0, 0, 0);
		HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_225), iLocal_61, 0);
		if (!bLocal_82)
		{
			bLocal_82 = true;
		}
		if (__LIB_0__::func_567(iLocal_225, 1))
		{
			__LIB_1__::func_281(&iLocal_225, 1, 1);
			if (func_438(1, func_202(1)))
			{
				return true;
			}
		}
		else if (__LIB_9__::func_178(&uLocal_242) > 5f)
		{
			__LIB_1__::func_281(&iLocal_225, 1, 1);
			__LIB_1__::func_864(Global_35, 0, 0);
		}
	}
	return false;
}

void func_772()
{
	int iVar0;
	int iVar1;
	return;
	if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Global_35))
	{
		ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	}
	if (ENTITY::_IS_ENTITY_FROZEN(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_218(41), func_219(41), true, false, true);
	TASK::TASK_LOOK_AT_ENTITY(Global_35, vLocal_296[0 /*3*/], 10000, 0, 51, 0);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
	iVar0 = func_1221(1048576);
	if (iVar0 == 0)
	{
		iVar0 = __LIB_0__::func_399(Global_35, 1, 9, 0);
	}
	if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		iVar0 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	}
	if (iVar0 == 0)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 6, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	else
	{
		iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
	func_811(iVar1, 6, 1, 0, 0, 752097756, 0, 0, 0, 0);
	WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar0, -1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(vLocal_296[0 /*3*/], false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_296[0 /*3*/], func_218(40), func_219(40), true, false, true);
	ENTITY::SET_ENTITY_COLLISION(vLocal_296[0 /*3*/], true, false);
	ENTITY::FREEZE_ENTITY_POSITION(vLocal_296[0 /*3*/], false);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(vLocal_296[0 /*3*/], Global_35, -1, -1f, -1f, -1f);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
}

bool func_773(var uParam0)
{
	func_742(1, func_202(2));
	WEAPON::_0xD53846B9C931C181(vLocal_296[0 /*3*/], -1, 10f);
	if (!PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_119[1 /*16*/]))
	{
		if (!bLocal_88)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_119[1 /*16*/]) >= 0.4f)
			{
				if (__LIB_12__::func_876(uParam0, Local_316.f_5[51], 0))
				{
					bLocal_88 = true;
				}
			}
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_119[1 /*16*/]) >= 0.6f)
		{
			CAM::_0x0FF7125F07DEB84F(vLocal_296[0 /*3*/], 0);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_119[1 /*16*/]) >= 0.95f)
		{
			if (func_438(1, func_202(2)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_774()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(vLocal_296[0 /*3*/]))
	{
		PED::REGISTER_TARGET(vLocal_296[0 /*3*/], Global_35, 1);
		TASK::TASK_MELEE(vLocal_296[0 /*3*/], Global_35, joaat("AR_WOLF_EXECUTION_ENTER_FROM_FRONT"), 1, 1, 1.5f, 0, -1082130432 /* Float: -1f */);
		PED::_0x2208438012482A1A(vLocal_296[0 /*3*/], false, false);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(vLocal_296[0 /*3*/], false);
	__LIB_2__::func_279(vLocal_296[0 /*3*/], 1);
	__LIB_9__::func_410(Global_35, 0, 1);
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	WEAPON::_0x183CE355115B6E75(Global_35, iVar0);
	WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar0, -1);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, vLocal_296[0 /*3*/], -1, false);
	__LIB_0__::func_188(1);
	__LIB_2__::func_259(&uLocal_275);
}

bool func_775()
{
	if (__LIB_0__::func_27(iLocal_63, 1024))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 159, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	if (!__LIB_0__::func_27(iLocal_63, 1024))
	{
		if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
		{
			if (__LIB_9__::func_178(&uLocal_275) > 0.4f)
			{
				PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0.45f);
				PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
				PED::SET_PED_RESET_FLAG(Global_35, 159, true);
				__LIB_1__::func_683(&iLocal_63, 1024);
			}
		}
		else
		{
			__LIB_1__::func_683(&iLocal_63, 1024);
		}
	}
	if (!__LIB_0__::func_899(&uLocal_257))
	{
		if (ENTITY::IS_ENTITY_DEAD(vLocal_296[0 /*3*/]))
		{
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, vLocal_296[0 /*3*/], -1, false);
			__LIB_1__::func_683(&iLocal_63, 1024);
			if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
				PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
			}
			__LIB_2__::func_259(&uLocal_257);
		}
	}
	else if (__LIB_9__::func_178(&uLocal_257) > 2f)
	{
		return true;
	}
	return false;
}

void func_784(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			func_1226(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (__LIB_0__::func_5(Global_40.f_450[iVar1]))
				{
					Global_40.f_450[iVar0] = Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

void func_799(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			__LIB_1__::func_465(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 16:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (__LIB_0__::func_343(146))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			__LIB_1__::func_199(1);
			break;
		case 76:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 15:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			Jump @2197; //curOff = 868
			__LIB_1__::func_465(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			Jump @2197; //curOff = 882
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			Jump @2197; //curOff = 896
			__LIB_1__::func_465(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			Jump @2197; //curOff = 921
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			Jump @2197; //curOff = 935
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			Jump @2197; //curOff = 982
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			Jump @2197; //curOff = 1007
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			Jump @2197; //curOff = 1073
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			Jump @2197; //curOff = 1120
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_2"), iParam1);
			Jump @2197; //curOff = 1178
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_3"), iParam1);
			Jump @2197; //curOff = 1214
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			Jump @2197; //curOff = 1261
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			__LIB_1__::func_199(0);
			Jump @2197; //curOff = 1313
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			Jump @2197; //curOff = 1390
			__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			Jump @2197; //curOff = 1404
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			Jump @2197; //curOff = 1470
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (__LIB_1__::func_151(51))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			Jump @2197; //curOff = 1537
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			Jump @2197; //curOff = 1614
			__LIB_1__::func_465(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			Jump @2197; //curOff = 1628
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			Jump @2197; //curOff = 1642
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			Jump @2197; //curOff = 1720
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			Jump @2197; //curOff = 1734
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			Jump @2197; //curOff = 1748
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			Jump @2197; //curOff = 1791
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			Jump @2197; //curOff = 1838
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			Jump @2197; //curOff = 1874
			__LIB_1__::func_465(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			Jump @2197; //curOff = 1888
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			Jump @2197; //curOff = 1935
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			Jump @2197; //curOff = 1971
			__LIB_1__::func_465(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			Jump @2197; //curOff = 1985
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			Jump @2197; //curOff = 1999
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			Jump @2197; //curOff = 2024
			__LIB_1__::func_465(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			Jump @2197; //curOff = 2038
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			Jump @2197; //curOff = 2063
			__LIB_1__::func_465(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			Jump @2197; //curOff = 2077
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			Jump @2197; //curOff = 2124
			__LIB_1__::func_199(1);
			Jump @2197; //curOff = 2132
			if (__LIB_0__::func_26())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					__LIB_1__::func_465(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
		}
void func_800(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(26))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			__LIB_1__::func_465(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(54))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(39))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (__LIB_0__::func_895(Global_1835011[33 /*74*/].f_1) == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (__LIB_0__::func_343(43))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (__LIB_0__::func_343(41))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(49))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			__LIB_1__::func_465(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (__LIB_1__::func_25(Global_1347702[23 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 70:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(78))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(79))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(101))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(103))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(104))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(109))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (__LIB_0__::func_343(110))
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(117))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(118))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(121))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(122))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(136))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(147))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(148))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(149))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_811(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_811(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_72(28);
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
						func_811(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_811(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_811(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_811(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_811(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_811(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_811(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_72(24);
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
					func_811(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_811(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_116(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_157(iParam0);
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
				func_811(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_813()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1332();
	func_1333();
	func_1334();
	func_1335();
	func_1336();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1339(iParam0, 1, 1, -142743235, 1);
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

void func_849()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1367(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_886(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(*iParam0, true, false);
	if (!bVar0)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		bVar0 = true;
	}
	*uParam1 = 1;
}

void func_888()
{
	if (__LIB_0__::func_27(iLocal_63, 1073741824 /* Float: 2f */))
	{
		__LIB_1__::func_600(1);
		VEHICLE::_0xB961DD799A837BD7();
		__LIB_1__::func_681(&iLocal_63, 1073741824 /* Float: 2f */);
	}
}

void func_931()
{
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[2 /*3*/]))
	{
		if (__LIB_1__::func_205(vLocal_296[2 /*3*/], iLocal_28, 0, 0))
		{
			ENTITY::SET_ENTITY_COORDS(vLocal_296[2 /*3*/], vLocal_103, false, true, true, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[3 /*3*/]))
	{
		if (__LIB_1__::func_205(vLocal_296[3 /*3*/], iLocal_28, 0, 0))
		{
			ENTITY::SET_ENTITY_COORDS(vLocal_296[3 /*3*/], vLocal_107, false, true, true, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[4 /*3*/]))
	{
		if (__LIB_1__::func_205(vLocal_296[4 /*3*/], iLocal_28, 0, 0))
		{
			ENTITY::SET_ENTITY_COORDS(vLocal_296[4 /*3*/], vLocal_111, false, true, true, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_296[5 /*3*/]))
	{
		if (__LIB_1__::func_205(vLocal_296[5 /*3*/], iLocal_28, 0, 0))
		{
			ENTITY::SET_ENTITY_COORDS(vLocal_296[5 /*3*/], vLocal_115, false, true, true, false);
		}
	}
}

int func_953(var uParam0, int iParam1, int iParam2)
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
		return func_953(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1092(int iParam0)
{
	if (!__LIB_0__::func_181())
	{
		func_1550(iParam0, "ARTHUR", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_119[iParam0 /*16*/], "b_PlayerArthur", true, false);
	}
	else
	{
		func_1550(iParam0, "JOHN", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_119[iParam0 /*16*/], "b_PlayerArthur", false, false);
	}
	func_1550(iParam0, "DEER", iLocal_20);
	func_1550(iParam0, "WARVET", iLocal_14);
}

void func_1093(int iParam0)
{
	if (!__LIB_0__::func_181())
	{
		func_1550(iParam0, "ARTHUR", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_119[iParam0 /*16*/], "b_PlayerArthur", true, false);
	}
	else
	{
		func_1550(iParam0, "JOHN", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_119[iParam0 /*16*/], "b_PlayerArthur", false, false);
	}
	func_1550(iParam0, "A_C_Wolf", vLocal_296[0 /*3*/]);
	func_1550(iParam0, "CS_WarVet", iLocal_14);
}

void func_1094(int iParam0)
{
	func_1550(iParam0, "A_C_Wolf", vLocal_296[0 /*3*/]);
	func_1550(iParam0, "CS_WarVet", iLocal_14);
}

void func_1120(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1560();
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

void func_1122(var uParam0)
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
			func_1568(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1568(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1123(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1568(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1213(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		__LIB_2__::func_259(fParam0);
	}
	if (__LIB_9__::func_178(fParam0) > 10f)
	{
		return true;
	}
	return false;
}

int func_1221(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_953(&uVar0, iParam0, 0);
	iVar9 = func_669(&uVar4, iParam0, 0);
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

void func_1226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		__LIB_9__::func_239(iParam0);
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_115(iParam0, 0);
	}
	__LIB_8__::func_993(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, iParam4);
		}
		else
		{
			Global_1347702[iParam0 /*49*/].f_43 = 0;
		}
	}
}

void func_1332()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1774(0);
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
	func_1774(1);
}

void func_1333()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_811(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1334()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1777(0);
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
	func_1777(1);
}

void func_1335()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1777(0);
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
	func_1777(1);
}

void func_1336()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_811(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_811(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1339(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1339(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1339(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1339(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1367(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1803(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_811(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1550(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_119[iParam0 /*16*/], sParam1, iParam2, 0);
	}
}

void func_1560()
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
	iVar0 = func_325(6291456, 0);
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

void func_1568(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1568(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1568(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1774(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_811(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2039(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_814(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1339(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2044(Var0);
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

void func_1777(bool bParam0)
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
		func_811(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_811(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1339(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1339(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1339(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1803(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1803(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1803(iVar63, -915411861, 1, 0, 0));
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

void func_2039(int iParam0)
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
	func_1339(iParam0, 1, 1, -142743235, 1);
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
		func_1339(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2044(struct<6> Param0)
{
	if (!func_2190(Param0.f_4, 1))
	{
	}
	if (!func_2190(Param0, 1))
	{
	}
	if (!func_2190(Param0.f_2, 1))
	{
	}
	if (!func_2190(Param0.f_5, 1))
	{
	}
	if (!func_2190(Param0.f_3, 1))
	{
	}
	if (!func_2190(Param0.f_1, 1))
	{
	}
}

bool func_2190(int iParam0, int iParam1)
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
				if (func_2190(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2190(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2190(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2190(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

