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
	struct<7> Local_16 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	struct<62> Local_33 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1065353216, 0, 0, 0, 0, 0, -1082130432, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_105 = -1;
	var uLocal_106 = -1;
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
	struct<84> Local_127 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1082130432, -1082130432, -1082130432, 1, 1050253722 } ;
	var uLocal_211 = 3000;
	var uLocal_212 = 6000;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	bool bLocal_222 = false;
	bool bLocal_223 = false;
	bool bLocal_224 = false;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	bool bLocal_235 = false;
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	vector3 vLocal_260[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	struct<6> Local_279[3];
	struct<22> Local_298 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_320 = 3;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	struct<5> Local_323[3];
	struct<5> Local_339[3];
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 2;
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
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 1097859072;
	var uLocal_391 = 1000;
	var uLocal_392 = 1067450368;
	var uLocal_393 = 5000;
	var uLocal_394 = 42;
	var uLocal_395 = 1103626240;
	var uLocal_396 = 1077936128;
	var uLocal_397 = 1106247680;
	var uLocal_398 = 1103101952;
	var uLocal_399 = 1097859072;
	var uLocal_400 = 1103626240;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	float fLocal_405 = 0f;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427[3] = { 0, 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	bool bLocal_440 = false;
	int iLocal_441 = 0;
	bool bLocal_442 = false;
	int iLocal_443 = 0;
	bool bLocal_444 = false;
	bool bLocal_445 = false;
	bool bLocal_446 = false;
	int iLocal_447 = 0;
	bool bLocal_448 = false;
	bool bLocal_449 = false;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	bool bLocal_452 = false;
	bool bLocal_453 = false;
	bool bLocal_454 = false;
	bool bLocal_455 = false;
	bool bLocal_456 = false;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	bool bLocal_460 = false;
	int iLocal_461 = 0;
	bool bLocal_462 = false;
	bool bLocal_463 = false;
	bool bLocal_464 = false;
	bool bLocal_465 = false;
	bool bLocal_466 = false;
	bool bLocal_467 = false;
	bool bLocal_468 = false;
	int iLocal_469 = 0;
	bool bLocal_470 = false;
	bool bLocal_471 = false;
	bool bLocal_472 = false;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	char* sLocal_476 = NULL;
	char* sLocal_477 = NULL;
	char* sLocal_478 = NULL;
	char* sLocal_479 = NULL;
	char* sLocal_480 = NULL;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	float fLocal_499 = 0f;
	vector3 vLocal_500 = { 0f, 0f, 0f };
	int iLocal_503 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1299456376;
	iLocal_15 = -1950027621;
	iLocal_24 = joaat("A_C_PIG_01");
	iLocal_25 = joaat("A_C_CHICKEN_01");
	iLocal_26 = joaat("A_C_ROOSTER_01");
	iLocal_27 = joaat("W_THROW_DYNAMITE01");
	iLocal_256 = 1;
	iLocal_418 = 1705957630;
	iLocal_419 = 2002353235;
	iLocal_420 = 1111495201;
	iLocal_421 = -354071784;
	sLocal_477 = "pbl_Convo_04";
	fLocal_499 = 10f;
	vLocal_500 = { -63f, -404.08f, 69.929f };
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
				__LIB_13__::func_52(uParam0);
			}
			__LIB_13__::func_170(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
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
			__LIB_0__::func_11(uParam0);
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
	func_91(uParam0);
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
		__LIB_18__::func_647(uParam0);
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_5__::func_774(uParam0))
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
	__LIB_12__::func_658(uParam0, 10);
	__LIB_12__::func_659(uParam0, 10);
	func_187();
	__LIB_13__::func_672(&uLocal_427);
	func_189();
	func_190(uParam0);
	__LIB_12__::func_656(uParam0, 70f);
	__LIB_12__::func_657(uParam0, 70f);
	__LIB_2__::func_165(-97.5262f, -456.8561f, 63.8994f, 5f, 0, 0, 5);
	__LIB_12__::func_937(uParam0, -1);
	func_195();
	Local_323[0 /*5*/].f_1 = { -59.061f, -410.1978f, 69.6401f };
	Local_323[1 /*5*/].f_1 = { -59.5505f, -407.6921f, 69.6965f };
	Local_323[2 /*5*/].f_1 = { -60.4817f, -405.6286f, 69.8259f };
	Global_1899848 = 0;
}

void func_42(var uParam0)
{
	__LIB_10__::func_382();
	__LIB_12__::func_867(uParam0, iLocal_24, 7);
	__LIB_12__::func_867(uParam0, iLocal_25, 7);
	__LIB_12__::func_867(uParam0, iLocal_26, 7);
	__LIB_12__::func_867(uParam0, joaat("CS_FAMOUSGUNSLINGER_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_STRONGBOX_RUSTED_01X"), 7);
	__LIB_12__::func_867(uParam0, iLocal_27, 7);
	__LIB_12__::func_867(uParam0, joaat("P_NETFISH01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_WHEELBARROW02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_PITCHFORK01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("S_HORSEPOOP02X"), 7);
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
		Var1 = { -63.18081f, -403.8706f, 69.97847f };
		Var1.f_3 = 191.4435f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { -68.4591f, -390.6321f, 70.927f };
		Var1.f_3 = 142.3046f;
	}
	else
	{
		Var1 = { -72.0461f, -399.0923f, 70.3978f };
		Var1.f_3 = 305.285f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_210(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		if (!__LIB_0__::func_266(iLocal_229, Global_36, 50f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "GUN1_LEAVE1", 24);
			return true;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_229))
	{
		if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_229, false, false), 50f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "GUN1_LEAVE2", 24);
			return true;
		}
	}
	if (iLocal_274 == 0)
	{
		if (__LIB_0__::func_272(iLocal_229, 0))
		{
			if (!__LIB_0__::func_266(iLocal_229, Global_36, 18f, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "GUN1_LEAVE1", 24);
				return true;
			}
			else if (!__LIB_0__::func_266(iLocal_229, Global_36, 12f, 1, 1))
			{
				if (iLocal_469 == 0)
				{
					__LIB_12__::func_883(uParam0, "GUN1_RETUR1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_469 = 1;
				}
			}
		}
	}
	if (iLocal_274 == 1 && iLocal_461 == 1)
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_DYNAMITE")) == 0)
		{
			if (!__LIB_0__::func_899(&uLocal_490))
			{
				__LIB_2__::func_259(&uLocal_490);
			}
			if (__LIB_1__::func_583(&uLocal_490) > 6f && !bLocal_444)
			{
				if (!MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-74.7543f, -397.7335f, 70.6161f, joaat("WEAPON_THROWN_DYNAMITE"), 3f, false))
				{
					StringCopy(&(uParam0->f_2578), "GUN1_NOAMMO", 24);
					return true;
				}
			}
		}
	}
	if (iLocal_254 < 1)
	{
		if (func_215())
		{
			StringCopy(&(uParam0->f_2578), "GUN1_AGGRO2", 24);
			return true;
		}
		if (!__LIB_0__::func_272(iLocal_229, 0))
		{
			StringCopy(&(uParam0->f_2578), "GUN1_AGGRO3", 24);
			return true;
		}
	}
	if (iLocal_254 == 4)
	{
		if (!bLocal_470)
		{
			if (!__LIB_0__::func_266(iLocal_229, Global_36, 20f, 1, 1))
			{
				__LIB_12__::func_883(uParam0, "GUN1_RETUR2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_470 = true;
			}
		}
	}
	return false;
}

void func_68(var uParam0)
{
	if (!bLocal_446)
	{
		if (bLocal_445 == 1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("GUN1_STOP");
			__LIB_12__::func_937(uParam0, 2);
			bLocal_446 = true;
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
	if (func_218(uParam0->f_174))
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
	if (func_227(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_232(uParam0);
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
	__LIB_12__::func_975(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_1__::func_561(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_271(uParam0))
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

void func_91(var uParam0)
{
	func_290(uParam0);
	func_291(&Local_339, &Local_323, uLocal_427[1], uLocal_427[0]);
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
		if (uParam0->f_171 != 0 || func_292(uParam0))
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
	TASK::SET_PED_PATH_AVOID_FIRE(iLocal_229, true);
	__LIB_3__::func_459(iLocal_229, 0);
	PED::_0x6569F31A01B4C097(iLocal_229, 4, 0);
	__LIB_1__::func_991(iLocal_229, 0);
	iLocal_447 = 1;
	__LIB_0__::func_325(&iLocal_403);
	__LIB_0__::func_267(0);
	return 7;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	func_298(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_30))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_30, false);
	}
	if (iVar0 < 4)
	{
		__LIB_0__::func_267(0);
	}
	if (iVar0 == 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("GUN1_RESTART_1");
		iLocal_469 = 1;
		Global_1899848.f_14 = 1;
		iLocal_447 = 1;
		bLocal_442 = true;
		if (iLocal_422 != iLocal_418)
		{
			__LIB_0__::func_400(iLocal_419);
			__LIB_0__::func_400(iLocal_420);
			__LIB_0__::func_401(iLocal_418);
			iLocal_422 = iLocal_418;
		}
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
		__LIB_13__::func_105(1, 1);
		__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 0);
		func_303(uParam0);
		ENTITY::SET_ENTITY_HEADING(iLocal_229, 191.2516f);
		TASK::TASK_STAND_STILL(iLocal_229, -1);
		func_304(uParam0, 0);
		return 7;
	}
	else if (iVar0 == 1)
	{
		if (__LIB_4__::func_511())
		{
			__LIB_1__::func_211(5, 8);
			func_304(uParam0, 0);
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			iLocal_416 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"));
			__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 1);
			return 5;
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("GUN1_RESTART_2");
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_31, -74.431f, -396.794f, 70.622f, 177.22f, true, false, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_31, true);
			__LIB_1__::func_211(5, 8);
			if (__LIB_0__::func_272(iLocal_229, 0))
			{
				func_307();
				OBJECT::DELETE_OBJECT(&iLocal_28);
				OBJECT::DELETE_OBJECT(&iLocal_29);
			}
			if (iLocal_422 != iLocal_419)
			{
				__LIB_0__::func_400(iLocal_420);
				__LIB_0__::func_401(iLocal_419);
				iLocal_422 = iLocal_419;
			}
			iLocal_416 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"));
			func_304(uParam0, 1);
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 1);
			__LIB_13__::func_105(1, 1);
			return 7;
		}
	}
	else if (iVar0 == 2)
	{
		if (__LIB_4__::func_511())
		{
			func_304(uParam0, 1);
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), false, 0, true, false);
			func_308();
			func_309(0);
			__LIB_3__::func_618(vLocal_242, 10f, 1, 0, 0, 0, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			if (__LIB_0__::func_272(iLocal_229, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_229, vLocal_242, __LIB_0__::func_152(vLocal_242, vLocal_245, 1), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_245, __LIB_0__::func_152(vLocal_245, vLocal_242, 1), true, false, true);
				__LIB_9__::func_233(iLocal_229, Global_35);
				__LIB_9__::func_233(Global_35, iLocal_229);
				if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_229))
				{
					return 2;
				}
				__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 2);
				return 5;
			}
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), false, 0, true, false);
			func_308();
			func_309(0);
			__LIB_3__::func_618(vLocal_242, 10f, 1, 0, 0, 0, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			if (__LIB_0__::func_272(iLocal_229, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_229, vLocal_242, __LIB_0__::func_152(vLocal_242, vLocal_245, 1), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_245, __LIB_0__::func_152(vLocal_245, vLocal_242, 1), true, false, true);
				__LIB_9__::func_233(iLocal_229, Global_35);
				__LIB_9__::func_233(Global_35, iLocal_229);
				if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_229))
				{
					return 2;
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 0))
				{
					__LIB_1__::func_864(Local_323[0 /*5*/], 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_323[0 /*5*/]))
					{
						return 2;
					}
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 1))
				{
					__LIB_1__::func_864(Local_323[1 /*5*/], 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_323[1 /*5*/]))
					{
						return 2;
					}
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 2))
				{
					__LIB_1__::func_864(Local_323[2 /*5*/], 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_323[2 /*5*/]))
					{
						return 2;
					}
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 4))
				{
					__LIB_1__::func_864(Local_339[0 /*5*/], 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_339[0 /*5*/]))
					{
						return 2;
					}
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 5))
				{
					__LIB_1__::func_864(Local_339[1 /*5*/], 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_339[1 /*5*/]))
					{
						return 2;
					}
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 6))
				{
					__LIB_1__::func_864(Local_339[2 /*5*/], 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_339[2 /*5*/]))
					{
						return 2;
					}
				}
				if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 3))
				{
					__LIB_1__::func_864(iLocal_355, 1, 0);
					if (PED::IS_PED_RAGDOLL(iLocal_355))
					{
						return 2;
					}
				}
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 2);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
		}
	}
	else if (iVar0 == 3)
	{
		__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 2);
		bLocal_466 = true;
		if (iLocal_422 != iLocal_420)
		{
			__LIB_0__::func_400(iLocal_422);
			__LIB_0__::func_401(iLocal_420);
			iLocal_422 = iLocal_420;
		}
		if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")))
		{
			__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_PIG"));
		}
		if (!func_317())
		{
			return 2;
		}
		if (__LIB_0__::func_272(iLocal_229, 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_229, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_229, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_229, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_229, vLocal_242, true, false, true, true);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			__LIB_1__::func_864(iLocal_229, 1, 0);
			func_318("GUN1_BLIP");
			__LIB_1__::func_281(&(Local_279[0 /*6*/].f_4), 1, 1);
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && PED::IS_PED_RAGDOLL(iLocal_229))
			{
				return 2;
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 0))
			{
				__LIB_1__::func_864(Local_323[0 /*5*/], 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_323[0 /*5*/]))
				{
					return 2;
				}
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 1))
			{
				__LIB_1__::func_864(Local_323[1 /*5*/], 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_323[1 /*5*/]))
				{
					return 2;
				}
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 2))
			{
				__LIB_1__::func_864(Local_323[2 /*5*/], 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_323[2 /*5*/]))
				{
					return 2;
				}
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 4))
			{
				__LIB_1__::func_864(Local_339[0 /*5*/], 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_339[0 /*5*/]))
				{
					return 2;
				}
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 5))
			{
				__LIB_1__::func_864(Local_339[1 /*5*/], 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_339[1 /*5*/]))
				{
					return 2;
				}
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 6))
			{
				__LIB_1__::func_864(Local_339[2 /*5*/], 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_339[2 /*5*/]))
				{
					return 2;
				}
			}
			if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1347702[85 /*49*/].f_15), 3))
			{
				__LIB_1__::func_864(iLocal_355, 1, 0);
				if (PED::IS_PED_RAGDOLL(iLocal_355))
				{
					return 2;
				}
			}
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		}
	}
	else if (iVar0 == 4)
	{
		if (__LIB_0__::func_272(iLocal_229, 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_229, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_229, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_229, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_229, vLocal_242, true, false, true, true);
			__LIB_1__::func_864(iLocal_229, 1, 0);
			iLocal_254 = 6;
			__LIB_13__::func_704();
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && PED::IS_PED_RAGDOLL(iLocal_229))
			{
				return 2;
			}
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			__LIB_13__::func_105(1, 1);
			return 8;
		}
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
						__LIB_0__::func_11(uParam0);
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
		if (!__LIB_13__::func_358(uParam0))
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
	return func_333(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	int iVar0;
	switch (iLocal_275)
	{
		case 0:
			if (__LIB_0__::func_272(iLocal_229, 0))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				TASK::CLEAR_PED_TASKS(iLocal_229, true, false);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				func_307();
				OBJECT::DELETE_OBJECT(&iLocal_28);
				OBJECT::DELETE_OBJECT(&iLocal_29);
				bLocal_439 = false;
				func_304(uParam0, 1);
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_323[iVar0 /*5*/]))
					{
						TASK::TASK_WANDER_IN_VOLUME(Local_323[iVar0 /*5*/], uLocal_427[0], 2000f, 3000f, 1);
					}
					iVar0++;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_272(iLocal_229, 0) && __LIB_0__::func_272(Global_35, 0))
			{
				__LIB_9__::func_233(iLocal_229, Global_35);
				__LIB_9__::func_233(Global_35, iLocal_229);
			}
			if (iLocal_422 != iLocal_420)
			{
				__LIB_0__::func_400(iLocal_422);
				__LIB_0__::func_401(iLocal_420);
				iLocal_422 = iLocal_420;
			}
			FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 0f);
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
		if (func_337(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	switch (iLocal_278)
	{
		case 0:
			if (iLocal_274 == 0)
			{
				__LIB_12__::func_937(uParam0, 0);
				iLocal_278 = 1;
			}
			else if (iLocal_274 > 0)
			{
				iLocal_278 = 1;
			}
			break;
		case 1:
			if (iLocal_274 == 1)
			{
				__LIB_12__::func_937(uParam0, 1);
				iLocal_278 = 2;
			}
			else if (iLocal_274 > 1)
			{
				iLocal_278 = 2;
			}
			break;
		case 2:
			if (((iLocal_274 == 2 && iLocal_254 > 1) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[3 /*3*/], false)) && !PED::IS_PED_RAGDOLL(iLocal_229))
			{
				__LIB_12__::func_937(uParam0, 3);
				iLocal_278 = 3;
			}
			break;
	}
	func_290(uParam0);
	func_339();
	iLocal_435 = __LIB_0__::func_398(0);
	iLocal_436 = __LIB_0__::func_398(1);
	switch (iLocal_274)
	{
		case 0:
			__LIB_1__::func_723(1);
			func_340(&Local_323, uLocal_427[0]);
			func_190(uParam0);
			func_341();
			if (__LIB_1__::func_205(iLocal_435, iLocal_431, 1, 0))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!__LIB_0__::func_491(iLocal_435, 713668775))
					{
						TASK::CLEAR_PED_TASKS(iLocal_435, true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_435, -75.6544f, -416.9478f, 69.4178f, 1f, -1, 0.25f, 0, 40000f);
					}
				}
			}
			if (__LIB_1__::func_205(iLocal_436, iLocal_431, 1, 0))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!__LIB_0__::func_491(iLocal_436, 713668775))
					{
						TASK::CLEAR_PED_TASKS(iLocal_436, true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_436, -73.88995f, -423.488f, 69.12372f, 1f, -1, 0.25f, 0, 40000f);
					}
				}
			}
			if (func_344(uParam0))
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				__LIB_1__::func_723(0);
				return 6;
			}
			break;
		case 1:
			func_345();
			if (__LIB_1__::func_205(iLocal_435, iLocal_432, 1, 0))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!__LIB_0__::func_491(iLocal_435, 713668775))
					{
						TASK::CLEAR_PED_TASKS(iLocal_435, true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_435, -75.6544f, -416.9478f, 69.4178f, 1f, -1, 0.25f, 0, 40000f);
					}
				}
			}
			if (__LIB_1__::func_205(iLocal_436, iLocal_432, 1, 0))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!__LIB_0__::func_491(iLocal_436, 713668775))
					{
						TASK::CLEAR_PED_TASKS(iLocal_436, true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_436, -73.88995f, -423.488f, 69.12372f, 1f, -1, 0.25f, 0, 40000f);
					}
				}
			}
			if (func_346(uParam0))
			{
				__LIB_1__::func_281(&iLocal_423, 1, 1);
				if (iLocal_276 != 11)
				{
					return 6;
				}
			}
			break;
		case 2:
			if (func_347(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_404))
				{
					MAP::REMOVE_BLIP(&iLocal_404);
				}
				__LIB_13__::func_704();
				return 8;
			}
			break;
		case 3:
			func_348(uParam0);
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
		func_384(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_138(var uParam0)
{
	__LIB_13__::func_705();
	func_395();
	__LIB_6__::func_726(&(Local_33.f_61), 0);
	__LIB_11__::func_548(&Local_127, &Local_33);
	if (__LIB_1__::func_243(4))
	{
		__LIB_1__::func_211(5, 8);
	}
}

bool func_150(var uParam0)
{
	int iVar0;
	int iVar1;
	func_417(uParam0);
	iVar0 = __LIB_12__::func_644(uParam0);
	func_291(&Local_339, &Local_323, uLocal_427[1], uLocal_427[0]);
	func_339();
	if (!__LIB_12__::func_610(iLocal_229, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 1, -1082130432 /* Float: -1f */) && __LIB_0__::func_266(Global_35, vLocal_500, 50f, 1, 1))
	{
		func_290(uParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		else
		{
			if (!bLocal_455)
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				__LIB_12__::func_876(uParam0, "GUN1_AGGRO2", 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_229, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_229, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
				bLocal_455 = true;
				return false;
			}
			if (PED::_IS_PED_HOGTIED(iLocal_229))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
				iVar1 = __LIB_3__::func_458(iLocal_229);
				if (!__LIB_0__::func_899(&uLocal_484))
				{
					if (iVar1 == 3 || iVar1 == 5)
					{
						fLocal_405 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
						__LIB_4__::func_89(&uLocal_484, 0);
					}
				}
				else if (__LIB_4__::func_118(&uLocal_484) > fLocal_405)
				{
					if (((iVar1 == 4 || iVar1 == 6) || iVar1 == 0) || iVar1 == 1)
					{
						__LIB_1__::func_561(&uLocal_484);
					}
					else
					{
						if (iVar1 == 3)
						{
							TASK::_0x79559BAD83CCD038(iLocal_229, 8, joaat("NMBS_FAST_GETUPS"), 0, 0, 1090519040 /* Float: 8f */);
							__LIB_1__::func_561(&uLocal_484);
						}
						if (iVar1 == 5)
						{
							TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_229, 0f, 0f, 0f, 2f, 17);
							__LIB_1__::func_561(&uLocal_484);
						}
					}
				}
			}
			else if (!PED::IS_PED_FLEEING(iLocal_229))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_229, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
			return false;
		}
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	func_417(uParam0);
	if (MAP::DOES_BLIP_EXIST(iLocal_403))
	{
		MAP::REMOVE_BLIP(&iLocal_403);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_404))
	{
		MAP::REMOVE_BLIP(&iLocal_404);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_230))
	{
		MAP::REMOVE_BLIP(&iLocal_230);
	}
	func_424();
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (__LIB_0__::func_139(Local_279[iVar0 /*6*/].f_4))
		{
			__LIB_1__::func_281(&(Local_279[iVar0 /*6*/].f_4), 1, 1);
		}
		iVar0++;
	}
	__LIB_1__::func_281(&uLocal_424, 1, 1);
	__LIB_2__::func_788(&iLocal_229, 1, 0, 1);
	func_426(0);
	__LIB_4__::func_193(751);
	__LIB_4__::func_193(754);
	__LIB_4__::func_193(752);
	__LIB_4__::func_193(753);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_3__::func_229(751);
	}
	__LIB_1__::func_211(5, 8);
	__LIB_11__::func_992(85, 1.5f);
	__LIB_18__::func_631(1);
	__LIB_13__::func_662();
	__LIB_7__::func_889();
}

void func_187()
{
	vLocal_260[0 /*3*/].f_1 = "script@rcm@gun1@ig@stage_01@ig1_watching@ig1_watching";
	vLocal_260[1 /*3*/].f_1 = "script@rcm@gun1@ig@stage_02@ig2_reaction@ig2_reaction";
	vLocal_260[2 /*3*/].f_1 = "script@rcm@gun1@ig@stage_02@ig3_plantdynamite@ig3_plantdynamite";
	vLocal_260[3 /*3*/].f_1 = "script@rcm@gun1@ig@stage_02@ig4_duel@ig4_duel_gunslinger";
}

void func_189()
{
	__LIB_3__::func_557(&(uLocal_427[2]), -66.319f, -389.603f, 71.975f, 0f, 0f, 28f, 3f, 2.5f, 3f, "MV_OUTHOUSE_HINT");
	__LIB_3__::func_557(&iLocal_425, -74.28f, -398.484f, 71.975f, 0f, 0f, 91f, 1.6f, 1.75f, 3f, "MV_MANURE_SABOTAGE");
	__LIB_3__::func_557(&uLocal_426, -76.23f, -397.795f, 69.683f, 0f, 0f, 90f, 3.4f, 2.8f, 6f, "MV_EXPLOSION_RANGE");
	__LIB_3__::func_557(&iLocal_431, -71.58f, -398.702f, 71.842f, 0f, 0f, 0f, 16f, 19f, 5f, "MV_SHOVEL_CUTSCENE");
	__LIB_3__::func_557(&iLocal_432, -71.092f, -397.179f, 71.842f, 0f, 0f, -174.308f, 19f, 10f, 3f, "MV_DUEL_CUTSCENE");
	__LIB_3__::func_557(&iLocal_433, -59.963f, -408.272f, 70.718f, 0f, 0f, 104f, 5.61f, 5.328f, 5f, "MV_PIG_PEN_CS");
	__LIB_3__::func_557(&iLocal_434, -64.459f, -406.889f, 69.912f, 0f, 0f, 84f, 7f, 1.8f, 5f, "MV_CUTSCENE_PATH");
}

void func_190(var uParam0)
{
	switch (iLocal_255)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_260[0 /*3*/]))
			{
				vLocal_260[0 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_260[0 /*3*/].f_1, 0, "pbl_Convo_01_ALT", false, true);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[0 /*3*/], "CS_FamousGunslinger_01", iLocal_229, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_260[0 /*3*/]);
				iLocal_255 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_260[0 /*3*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_229))
				{
					sLocal_476 = "pbl_Convo_01_ALT";
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[0 /*3*/], sLocal_476, true);
					iLocal_255 = 2;
				}
			}
			break;
		case 2:
			if (bLocal_442)
			{
				if (!__LIB_5__::func_463())
				{
					if (iLocal_447 == 1 && !__LIB_18__::func_632("GUN1_ACCEPT_", 0))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[0 /*3*/], false))
						{
							ANIMSCENE::START_ANIM_SCENE(vLocal_260[0 /*3*/]);
							iLocal_447 = 0;
							iLocal_255 = 5;
						}
					}
				}
			}
			else if (iLocal_441 == 1)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_13__::func_123(uParam0, "GUN1_ACCEPT_", 0, 0);
					bLocal_442 = true;
				}
			}
			break;
		case 3:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_01_ALT"))
			{
				sLocal_476 = "pbl_Convo_02";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_02"))
			{
				sLocal_476 = "pbl_Convo_03";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_03"))
			{
				sLocal_476 = "pbl_DLG_You_aint_done";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_DLG_You_aint_done"))
			{
				sLocal_476 = "pbl_DLG_You_work_shy";
			}
			iLocal_255 = 4;
			break;
		case 4:
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[0 /*3*/], sLocal_476);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[0 /*3*/], sLocal_476))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[0 /*3*/], "s_Idle_Base", 1))
				{
					if (!__LIB_0__::func_899(&uLocal_496))
					{
						__LIB_2__::func_259(&uLocal_496);
					}
					else if (__LIB_4__::func_118(&uLocal_496) > fLocal_499)
					{
						if (Global_1899848.f_11 < 4)
						{
							if (!MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_DLG_You_work_shy") && !MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_DLG_You_aint_done"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[0 /*3*/], sLocal_476, true);
								__LIB_1__::func_561(&uLocal_496);
								fLocal_499 = 10f;
								iLocal_255 = 5;
							}
							else if (Global_1899848.f_11 > 2)
							{
								if (!__LIB_0__::func_48(Global_35, Global_1899848.f_201.f_12, 3f, 1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[0 /*3*/], sLocal_476, true);
									__LIB_1__::func_561(&uLocal_496);
									fLocal_499 = 10f;
									iLocal_255 = 5;
								}
							}
							else
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[0 /*3*/], sLocal_476, true);
								__LIB_1__::func_561(&uLocal_496);
								fLocal_499 = 10f;
								iLocal_255 = 5;
							}
						}
					}
				}
			}
			break;
		case 5:
			if (!bLocal_464)
			{
				if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_01_ALT"))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(vLocal_260[0 /*3*/], "pbl_Convo_01_ALT"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_260[0 /*3*/]) > 24f)
						{
							if (__LIB_0__::func_181())
							{
								__LIB_12__::func_876(uParam0, "GUN1_REPLY_JHN1", 0);
							}
							else
							{
								__LIB_12__::func_876(uParam0, "GUN1_REPLY_ART1", 0);
							}
							bLocal_449 = false;
							bLocal_448 = false;
							iLocal_255 = 3;
						}
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_02"))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(vLocal_260[0 /*3*/], "pbl_Convo_02"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_260[0 /*3*/]) > 8.2f)
						{
							if (__LIB_0__::func_181())
							{
								__LIB_12__::func_876(uParam0, "GUN1_REPLY_JHN2", 0);
								fLocal_499 = 2.2f;
							}
							else
							{
								__LIB_12__::func_876(uParam0, "GUN1_REPLY_ART2", 0);
								fLocal_499 = 1.5f;
							}
							bLocal_449 = false;
							bLocal_448 = false;
							iLocal_255 = 3;
						}
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_03"))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[0 /*3*/], "s_Idle_Base", 1))
					{
						if (__LIB_0__::func_181())
						{
							__LIB_12__::func_876(uParam0, "GUN1_REPLY_JHN3", 0);
						}
						else
						{
							__LIB_12__::func_876(uParam0, "GUN1_REPLY_ART3", 0);
						}
						bLocal_449 = false;
						bLocal_448 = false;
						bLocal_464 = true;
						iLocal_255 = 3;
					}
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_DLG_You_work_shy"))
			{
				bLocal_449 = false;
				bLocal_448 = false;
				fLocal_499 = 10f;
				iLocal_255 = 6;
			}
			else
			{
				bLocal_449 = false;
				bLocal_448 = false;
				fLocal_499 = 10f;
				iLocal_255 = 3;
			}
			break;
	}
}

void func_195()
{
	func_464();
	func_465();
	func_466();
	func_467();
}

int func_210(vector3 vParam0, var uParam3)
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
		iVar0 = func_493(0, 0);
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

bool func_215()
{
	if (iLocal_276 == 8 || iLocal_276 == 11)
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0)
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

int func_227(var uParam0)
{
	int iVar0;
	if (uParam0->f_177 == 4)
	{
		if (func_524(iLocal_229, 0, &uLocal_373, &iLocal_401, 0, 0))
		{
			if ((iLocal_401 != 8 && iLocal_401 != 16) && iLocal_401 != 4)
			{
				return 1;
			}
		}
		else if (!__LIB_0__::func_272(iLocal_229, 0))
		{
			return 1;
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -65.6324f, -397.6547f, 70.49f, 30f))
		{
			return 1;
		}
		else if (func_525(iLocal_229))
		{
			return 1;
		}
		else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(Global_1347702[uParam0->f_174 /*49*/].f_24, joaat("WEAPON_THROWN_DYNAMITE"), 20f, false) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(Global_1347702[uParam0->f_174 /*49*/].f_24, joaat("WEAPON_THROWN_MOLOTOV"), 20f, false))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!__LIB_0__::func_272(Local_323[iVar0 /*5*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_323[iVar0 /*5*/], Global_35, 1, 1))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_232(var uParam0)
{
	func_417(uParam0);
	__LIB_13__::func_222(uParam0, 9);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (__LIB_0__::func_272(iLocal_229, 0))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_229, 186, true);
		}
	}
	__LIB_7__::func_876(0);
	__LIB_18__::func_633(5);
	__LIB_0__::func_325(&iLocal_404);
	__LIB_0__::func_325(&iLocal_230);
	__LIB_0__::func_325(&iLocal_403);
}

int func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_12__::func_767(uParam0);
	if (iVar0 < 3)
	{
		bLocal_32 = true;
	}
	if (__LIB_12__::func_871(uParam0))
	{
		if (iVar0 == 0)
		{
			iVar2 = func_581(uParam0, 1);
		}
		else
		{
			iVar2 = func_581(uParam0, 0);
		}
	}
	else
	{
		iVar2 = func_581(uParam0, 1);
	}
	iVar1 = func_582(uParam0, &iLocal_229);
	__LIB_0__::func_401(iLocal_421);
	__LIB_0__::func_401(iLocal_418);
	iLocal_422 = iLocal_418;
	if (iVar1 && iVar2)
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_229, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_229, true, true);
		}
		func_426(1);
		if (!__LIB_0__::func_266(iLocal_229, -65.02528f, -404.4728f, 70.32632f, 1f, 1, 1) && !PED::IS_PED_RAGDOLL(iLocal_229))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_229, -65.02528f, -404.4728f, 70.32632f, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_229, 232f);
		}
		func_583();
		func_190(uParam0);
		func_341();
		func_584();
		func_585();
		__LIB_3__::func_229(751);
		__LIB_3__::func_229(754);
		__LIB_3__::func_229(752);
		__LIB_3__::func_229(753);
		__LIB_13__::func_91(uParam0, 1);
		__LIB_12__::func_875(uParam0, iLocal_229, "RGUN1_Slinger", 1);
		func_588(uParam0);
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
		func_589();
		__LIB_7__::func_876(1);
		func_590();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_30))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_30, false);
		}
		else
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_28))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_28, false);
		}
		else
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_29, false);
		}
		else
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_31, false);
		}
		else
		{
			return 0;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_260[1 /*3*/], true, false))
		{
			return 0;
		}
		if (iLocal_259 < 3)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_290(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		if (!PED::IS_PED_FLEEING(iLocal_229))
		{
			switch (iLocal_276)
			{
				case 0:
					func_612(uParam0);
					break;
				case 2:
					func_613(uParam0);
					break;
				case 3:
					func_614(uParam0);
					break;
				case 4:
					break;
				case 5:
					func_615(uParam0);
					break;
				case 6:
					func_616(uParam0);
					break;
				case 7:
					__LIB_0__::func_11();
					break;
				case 8:
					func_618();
					break;
				case 9:
					func_619();
					break;
			}
		}
	}
	else
	{
		iLocal_276 = 11;
	}
}

void func_291(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*5*/], 0))
		{
			if (!__LIB_0__::func_163((*uParam0)[iVar0 /*5*/], 1833500181) && !PED::IS_PED_FLEEING((*uParam0)[iVar0 /*5*/]))
			{
				TASK::TASK_WANDER_IN_VOLUME((*uParam0)[iVar0 /*5*/], iParam2, 2000f, 3000f, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272((*uParam1)[iVar0 /*5*/], 0))
		{
			if (!__LIB_0__::func_163((*uParam1)[iVar0 /*5*/], 1833500181) && !PED::IS_PED_FLEEING((*uParam1)[iVar0 /*5*/]))
			{
				TASK::TASK_WANDER_IN_VOLUME((*uParam1)[iVar0 /*5*/], iParam3, 2000f, 3000f, 1);
			}
		}
		iVar0++;
	}
}

bool func_292(var uParam0)
{
	func_339();
	if (__LIB_1__::func_205(Global_35, uLocal_427[0], 1, 0))
	{
		if (!__LIB_13__::func_666(iLocal_414, 1024))
		{
			if (!__LIB_5__::func_463())
			{
				__LIB_12__::func_876(uParam0, "GUN1_FORK_STY", 0);
				__LIB_2__::func_259(&uLocal_487);
				__LIB_6__::func_313(&iLocal_414, 1024);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_500, true) < 21f)
	{
		bLocal_438 = true;
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_9__::func_204(Global_35, vLocal_500, &uLocal_481, 20f, 17f, 12f, 8f, 1f, 0, 0, 1, 1, 1);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			__LIB_9__::func_204(Global_35, vLocal_500, &uLocal_481, 25f, 22f, 17f, 13f, 1f, 0, 0, 1, 1, 1);
		}
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			__LIB_9__::func_204(Global_35, vLocal_500, &uLocal_481, 20f, 17f, 3.5f, 1f, 1f, 1, 0, 1, 1, 1);
		}
	}
	if (__LIB_7__::func_875())
	{
		__LIB_7__::func_873(&(Global_1899848.f_15.f_10));
		__LIB_10__::func_944(&(Global_1899848.f_15.f_10), 1, 0);
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		__LIB_6__::func_900("GUN_LAUNCH_S2", 1, 0);
		__LIB_6__::func_900("GUN1_ACC_FORK", 1, 0);
		__LIB_1__::func_561(&uLocal_487);
		if (!__LIB_5__::func_463())
		{
			__LIB_13__::func_123(uParam0, "GUN1_ACCEPT_", 0, 0);
			bLocal_442 = true;
		}
		else
		{
			bLocal_442 = false;
		}
		__LIB_13__::func_89(uParam0, "MGCLS_OBJ_POOP", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		return true;
	}
	return false;
}

void func_298(var uParam0)
{
	switch (iLocal_277)
	{
		case 0:
			if (__LIB_13__::func_666(iLocal_413, 2))
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-ifDynamiteLit");
				__LIB_12__::func_839(&(uParam0->f_206), "1-ifDynamiteLit");
				if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_260[2 /*3*/]) > 2.23f || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(vLocal_260[2 /*3*/], false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(vLocal_260[2 /*3*/]))
				{
					__LIB_6__::func_313(&iLocal_413, 4);
					func_635(1);
				}
				else
				{
					__LIB_0__::func_325(&iLocal_403);
				}
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-76.31723f, -397.7586f, 72.02573f, joaat("WEAPON_THROWN_DYNAMITE"), 3f, false))
			{
				FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 7f);
				if (!__LIB_0__::func_899(&uLocal_493))
				{
					if (MISC::_GET_PROJECTILE_NEAR_PED(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 100f, &vLocal_245, &uLocal_437, 0, 1))
					{
						WEAPON::_0x74C9080FDD1BB48E(uLocal_437, 2.5f);
						__LIB_2__::func_259(&uLocal_493);
					}
				}
				if (__LIB_1__::func_583(&uLocal_493) > 1f)
				{
					iLocal_406 += 100;
					__LIB_12__::func_676(&(uParam0->f_206), "2-ifDynamiteThrown");
					__LIB_12__::func_839(&(uParam0->f_206), "2-ifDynamiteThrown");
					func_635(1);
				}
			}
			else if (iLocal_406 < 100)
			{
				FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 0f);
				__LIB_1__::func_561(&uLocal_493);
			}
			break;
	}
}

void func_303(var uParam0)
{
	func_636(2);
}

void func_304(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		StringCopy(&(uParam0->f_2575), func_637(uParam0), 24);
		__LIB_13__::func_325(uParam0, &iLocal_431, 0, 0, 0, 0);
		__LIB_12__::func_901(&(uParam0->f_206), -75.6544f, -416.9478f, 69.4178f, 0f, 0);
		__LIB_13__::func_465(uParam0, 0, 0, 0);
		__LIB_13__::func_59(uParam0, iLocal_229, "CS_FAMOUSGUNSLINGER_01", 0, 0, 0);
		__LIB_12__::func_957(uParam0, iLocal_30, "p_pitchfork01x", 0, 0, 0);
		__LIB_12__::func_957(uParam0, iLocal_28, "w_throw_dynamite01", 0, 0, 0);
		__LIB_12__::func_957(uParam0, iLocal_29, "w_throw_dynamite01^1", 0, 0, 0);
		if (__LIB_4__::func_511())
		{
			__LIB_12__::func_957(uParam0, iLocal_31, "p_wheelbarrow02x", 0, 0, 0);
		}
		else
		{
			__LIB_12__::func_957(uParam0, Global_1899848.f_201.f_12, "p_wheelbarrow02x", 0, 0, 0);
		}
		__LIB_12__::func_676(&(uParam0->f_206), "Multistart");
		__LIB_12__::func_981(uParam0, 92696);
		func_645(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24, 0);
		__LIB_0__::func_7(&(uParam0->f_172), 16);
	}
	if (iParam1 == 1)
	{
		StringCopy(&(uParam0->f_2575), func_637(uParam0), 24);
		__LIB_13__::func_325(uParam0, &iLocal_432, 0, 0, 0, 0);
		__LIB_12__::func_901(&(uParam0->f_206), -75.6544f, -416.9478f, 69.4178f, 0f, 0);
		__LIB_13__::func_465(uParam0, 0, 0, 0);
		__LIB_13__::func_59(uParam0, iLocal_229, "CS_FAMOUSGUNSLINGER_01", 0, 0, 0);
		__LIB_12__::func_676(&(uParam0->f_206), "2-ifDynamiteThrown");
		__LIB_13__::func_17(&(uParam0->f_206), "1-ifDynamiteLit", 0);
		__LIB_13__::func_17(&(uParam0->f_206), "3-ifProvoked", 0);
		__LIB_12__::func_981(uParam0, 92696);
		func_645(uParam0, -73.1788f, -397.6629f, 70.5329f, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 16);
	}
}

void func_307()
{
	iLocal_450 = 1;
	iLocal_257 = 2;
	func_584();
	func_636(5);
}

void func_308()
{
	func_636(7);
}

void func_309(bool bParam0)
{
	Local_127 = Global_35;
	Local_127.f_1 = iLocal_229;
	func_648(&Local_127, uLocal_218);
	__LIB_3__::func_830(&Local_33, &Local_127);
	func_650(&Local_127, &Local_33);
	PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, true);
	if (PED::IS_PED_MODEL(iLocal_229, joaat("CS_FAMOUSGUNSLINGER_01")))
	{
		__LIB_3__::func_459(iLocal_229, 1);
	}
	else
	{
		__LIB_3__::func_459(iLocal_229, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_16))
	{
		__LIB_3__::func_353(&Local_16, 0);
	}
	if (bParam0)
	{
		iLocal_254 = 1;
	}
}

bool func_317()
{
	int iVar0;
	MISC::SET_BIT(&iVar0, 16);
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_402))
	{
		if (bLocal_472)
		{
			iLocal_402 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REVOLVER_CATTLEMAN_PIG"), ENTITY::GET_ENTITY_COORDS(iLocal_229, true, false), 0f, 0f, 0f, iVar0, 1, 2, true, 0, 0, 0f, 0);
		}
		else
		{
			iLocal_402 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REVOLVER_CATTLEMAN_PIG"), -68.42108f, -397.4204f, 70.53758f, 0f, 0f, 0f, iVar0, 1, 2, true, 0, 0, 0f, 0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_318(char* sParam0)
{
	func_654(sParam0, 1);
	iLocal_254 = 4;
}

int func_333(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_681(uParam4);
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

bool func_337(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					func_697(uParam0);
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
				__LIB_12__::func_983(uParam0);
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
		__LIB_13__::func_573(uParam0, iParam5);
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

void func_339()
{
	if (__LIB_2__::func_986(iLocal_15))
	{
		if (__LIB_4__::func_195(iLocal_15) >= 0.6f)
		{
			__LIB_1__::func_948(iLocal_15, 1, 0.6f, 0, 1, 0, 0, 0);
		}
		__LIB_1__::func_948(iLocal_15, 0, 0f, 0, 1, 0, 0, 0);
	}
	if (__LIB_2__::func_986(iLocal_14))
	{
		if (__LIB_4__::func_195(iLocal_14) >= 0.9f)
		{
			__LIB_1__::func_948(iLocal_14, 1, 1f, 1, 1, 0, 0, 0);
		}
	}
}

void func_340(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*5*/], 0))
		{
			if (__LIB_0__::func_48(Global_35, (*uParam0)[iVar0 /*5*/], 3f, 1))
			{
				if (__LIB_1__::func_205(Global_35, iParam1, 1, 0))
				{
					if (!__LIB_0__::func_163((*uParam0)[iVar0 /*5*/], -391815063))
					{
						TASK::TASK_WALK_AWAY((*uParam0)[iVar0 /*5*/], Global_35);
					}
				}
			}
			else if (!__LIB_0__::func_163((*uParam0)[iVar0 /*5*/], 1833500181))
			{
				TASK::TASK_WANDER_IN_VOLUME((*uParam0)[iVar0 /*5*/], iParam1, 2000f, 3000f, 1);
			}
		}
		iVar0++;
	}
}

void func_341()
{
	switch (iLocal_256)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_477, "pbl_Convo_04"))
			{
				sLocal_477 = "pbl_DLG_thats_sloppy_one";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_477, "pbl_DLG_thats_sloppy_one"))
			{
				sLocal_477 = "pbl_DLG_Its_only_pig_shit";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_477, "pbl_DLG_Its_only_pig_shit"))
			{
				sLocal_477 = "pbl_DLG_Gotta_work_for_a_living";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_477, "pbl_DLG_Gotta_work_for_a_living"))
			{
				sLocal_477 = "pbl_DLG_Backs_gonna_hurt_when_done";
			}
			iLocal_256 = 1;
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(vLocal_260[0 /*3*/], false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[0 /*3*/], sLocal_477);
				if (bLocal_448 && !bLocal_449)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[0 /*3*/], sLocal_477))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[0 /*3*/], "s_Idle_Base", 1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[0 /*3*/], sLocal_477, true);
							bLocal_448 = false;
							if (bLocal_464)
							{
								fLocal_499 = 10f;
								bLocal_449 = false;
							}
							else
							{
								fLocal_499 = 1f;
								bLocal_449 = true;
							}
							if (MISC::ARE_STRINGS_EQUAL(sLocal_477, "pbl_DLG_Backs_gonna_hurt_when_done"))
							{
								iLocal_256 = 2;
							}
							else
							{
								iLocal_256 = 0;
							}
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_344(var uParam0)
{
	func_290(uParam0);
	switch (iLocal_273)
	{
		case 0:
			if (iLocal_422 != iLocal_418)
			{
				__LIB_0__::func_400(iLocal_422);
				__LIB_0__::func_401(iLocal_418);
				iLocal_422 = iLocal_418;
			}
			func_304(uParam0, 0);
			iLocal_416 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"));
			iLocal_411 = Global_1899848.f_11;
			func_303(uParam0);
			if (__LIB_18__::func_638(4, __LIB_0__::func_12(), vLocal_500, 0f, 0, 1, 0, 0, 0, 0))
			{
				__LIB_13__::func_667(&iLocal_273, 3);
			}
			break;
		case 1:
			if (!__LIB_13__::func_666(iLocal_414, 128) && Global_1899848.f_11 > 0)
			{
				__LIB_6__::func_313(&iLocal_414, 128);
			}
			if (__LIB_0__::func_266(iLocal_229, Global_36, 12f, 1, 1))
			{
				if (iLocal_469 == 1)
				{
					__LIB_12__::func_883(uParam0, "MGCLS_OBJ_POOP", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_469 = 0;
				}
			}
			if (!__LIB_1__::func_243(4))
			{
				__LIB_13__::func_687(4, 1);
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
				PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_229, "RC_GUN1SHOVELEND", 0f, 0f, 0f, 0, "RGUN1");
				__LIB_13__::func_667(&iLocal_273, 3);
			}
			if ((Global_1899848.f_13 == 1 && Global_1899848.f_11 == 3) && Global_1899848.f_10 == 4)
			{
				bLocal_456 = true;
			}
			if (bLocal_456)
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			break;
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_229, "RC_GUN1SHOVELEND", 0f, 0f, 0f, 0, "RGUN1");
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[0 /*3*/], "s_Idle_Base", 1) && !__LIB_5__::func_463())
			{
				__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 1);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RGUN1");
				__LIB_3__::func_319(vLocal_260[0 /*3*/]);
				__LIB_18__::func_631(1);
				return true;
			}
			break;
	}
	return false;
}

void func_345()
{
	switch (iLocal_258)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_260[2 /*3*/]))
			{
				vLocal_260[2 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_260[2 /*3*/].f_1, 0, "pl_MainAction_PlantDynamite", false, true);
			}
			else
			{
				if (__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_260[2 /*3*/], "b_PlayerArthur", false, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[2 /*3*/], "JOHN", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_260[2 /*3*/], "b_PlayerArthur", true, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[2 /*3*/], "ARTHUR", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_260[2 /*3*/]);
				iLocal_258 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_260[2 /*3*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_229))
				{
					iLocal_258 = 2;
				}
			}
			break;
		case 2:
			if (bLocal_465)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[2 /*3*/], false))
				{
					iLocal_258 = 3;
				}
			}
			break;
	}
}

bool func_346(var uParam0)
{
	int iVar0;
	func_290(uParam0);
	__LIB_0__::func_11();
	iVar0 = 0;
	switch (iLocal_273)
	{
		case 0:
			if (iLocal_422 != iLocal_419)
			{
				__LIB_0__::func_400(iLocal_422);
				__LIB_0__::func_401(iLocal_419);
				iLocal_422 = iLocal_419;
			}
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"));
			iLocal_417 = ((iVar0 - iLocal_416) - 2);
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_679(uParam0, "GUN1_OBJ_PROVOKE", Global_1347702[uParam0->f_174 /*49*/].f_24);
			if (iVar0 <= 0)
			{
				WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, joaat("AMMO_DYNAMITE"), 2, 752097756);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), false, 0, false, false);
				iLocal_461 = 1;
			}
			else
			{
				if (iLocal_417 > 0)
				{
					WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, joaat("AMMO_DYNAMITE"), iLocal_417, 562618531);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), false, 0, false, false);
				}
				iLocal_461 = 1;
			}
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
			func_733();
			__LIB_1__::func_948(iLocal_14, 1, 0, 0, 1, 0, 0, 0);
			__LIB_13__::func_667(&iLocal_273, 3);
			break;
		case 1:
			if (!__LIB_13__::func_666(iLocal_414, 2))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_403))
				{
					iLocal_403 = __LIB_4__::func_983(408396114, -74.7543f, -398.7335f, 70.6161f, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_403, "GUN1_BLIP_PROVOKE");
				}
				if (__LIB_0__::func_266(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 15f, 1, 1))
				{
					__LIB_6__::func_313(&iLocal_414, 2);
				}
			}
			__LIB_13__::func_685(uParam0, "GUN1_OBJ_PROVOKE", iLocal_406 > 99, 1, -1f);
			func_736(uParam0);
			func_298(uParam0);
			func_737();
			if ((iLocal_406 > 6 && iLocal_406 < 100) && !__LIB_5__::func_463())
			{
				__LIB_12__::func_676(&(uParam0->f_206), "3-ifProvoked");
				__LIB_12__::func_839(&(uParam0->f_206), "3-ifProvoked");
				iLocal_406 += 100;
			}
			if (iLocal_406 >= 100)
			{
				__LIB_13__::func_667(&iLocal_273, 3);
			}
			else if (iLocal_276 == 11)
			{
				__LIB_13__::func_667(&iLocal_273, 3);
			}
			if (func_215())
			{
				func_738();
				__LIB_0__::func_325(&iLocal_403);
				__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 3);
			}
			break;
		case 2:
			__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, -1);
			__LIB_0__::func_325(&iLocal_403);
			func_738();
			FIRE::_0x68F6A75FDF5A70D6(-74.7543f, -397.7335f, 70.6161f, 0f);
			__LIB_3__::func_319(vLocal_260[1 /*3*/]);
			if (iLocal_276 == 11)
			{
				func_654("GUN1_BLIP", 1);
				iLocal_254 = 4;
			}
			return true;
	}
	return false;
}

bool func_347(var uParam0)
{
	if (ANIMSCENE::_0x1F0E401031E20146(vLocal_260[3 /*3*/], "pbl_Death") && !__LIB_0__::func_163(iLocal_229, joaat("SCRIPT_TASK_MELEE")))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_229, 1, false);
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_260[3 /*3*/]) > 1.6f)
		{
			__LIB_1__::func_864(iLocal_229, 1, 0);
		}
	}
	if (!bLocal_466)
	{
		if (!__LIB_0__::func_163(Global_35, -717627678))
		{
			__LIB_12__::func_773(0, 0, 1, 1);
		}
		else
		{
			bLocal_466 = true;
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	switch (iLocal_254)
	{
		case 0:
			if (__LIB_0__::func_399(iLocal_229, 1, 0, 0) != joaat("WEAPON_MELEE_KNIFE"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_229, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_229, 249, true);
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_229, 1);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_229, true);
			func_739();
			if (iLocal_422 != iLocal_420)
			{
				__LIB_0__::func_400(iLocal_422);
				__LIB_0__::func_401(iLocal_420);
				iLocal_422 = iLocal_420;
			}
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			__LIB_0__::func_769();
			if (iLocal_276 != 11)
			{
				if (bLocal_463)
				{
					if (__LIB_0__::func_27(Global_40.f_9145, 1))
					{
						__LIB_12__::func_883(uParam0, "GUN1_OBJ_GUN3", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				else if (__LIB_0__::func_27(Global_40.f_9145, 1))
				{
					__LIB_13__::func_89(uParam0, "GUN1_OBJ_GUN3", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				func_741();
				func_309(1);
			}
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_PIG"));
			}
			break;
		case 1:
			if (!func_742("GUN1_BLIP"))
			{
				if (__LIB_13__::func_680(&Local_127, &Local_33, 0))
				{
					if (!bLocal_462)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[3 /*3*/], false))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[3 /*3*/], "pl_OverHand_Dissarm", true);
						}
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						bLocal_462 = true;
					}
				}
				else if (!bLocal_462)
				{
					if (__LIB_13__::func_270(&Local_127, &Local_33, 0) || __LIB_13__::func_271(&Local_127, &Local_33, 0) >= 1)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[3 /*3*/], false))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[3 /*3*/], "pbl_Death", true);
						}
						bLocal_462 = true;
					}
				}
			}
			else if (iLocal_254 == 2 || iLocal_254 == 3)
			{
				__LIB_13__::func_89(uParam0, "GUN1_OBJ_GUN2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 3);
				return false;
			}
			break;
		case 3:
			func_746("GUN1_BLIP");
			break;
		case 2:
			if ((!__LIB_0__::func_272(iLocal_229, 0) && !PED::IS_PED_RAGDOLL(iLocal_229)) && !__LIB_0__::func_270())
			{
				if (func_748("GUN1_BLIP"))
				{
					return true;
				}
			}
			break;
		case 4:
			if (!bLocal_471)
			{
				if (__LIB_13__::func_690(iLocal_229, -1461871483, joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_229, true, true);
					bLocal_472 = true;
				}
				else if (!bLocal_472)
				{
					bLocal_471 = true;
				}
				else if (func_317())
				{
					bLocal_471 = true;
				}
			}
			PED::_0xAE6004120C18DF97(iLocal_229, 0, 0);
			if (__LIB_0__::func_255(iLocal_229, 0))
			{
				if (!bLocal_467)
				{
					if (!__LIB_0__::func_899(&uLocal_473))
					{
						__LIB_2__::func_259(&uLocal_473);
						__LIB_12__::func_883(uParam0, "GUN1_OBJ_GUN1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else if (__LIB_4__::func_118(&uLocal_473) >= 3f)
					{
						bLocal_467 = true;
					}
					if (__LIB_0__::func_48(Global_35, iLocal_229, 1.5f, 1))
					{
						bLocal_467 = true;
					}
				}
				else if (!bLocal_470)
				{
					func_751();
					if (bLocal_223)
					{
						if (!bLocal_468)
						{
							__LIB_13__::func_89(uParam0, "GUN1_OBJ_GUN1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							bLocal_468 = true;
						}
					}
					if (!__LIB_13__::func_691())
					{
						if (bLocal_223)
						{
							bLocal_223 = false;
						}
						if (bLocal_468)
						{
							bLocal_468 = false;
						}
					}
				}
				else
				{
					func_753();
					if (__LIB_0__::func_266(iLocal_229, Global_36, 20f, 1, 1))
					{
						bLocal_470 = false;
					}
				}
			}
			__LIB_3__::func_459(iLocal_229, 1);
			if (__LIB_3__::func_996(Global_35))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_229, 1f, 1))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_229, true);
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[3 /*3*/], false))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_229))
				{
					PED::_0x8CB2553C559102C1(iLocal_229, 1, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_229, 160);
				}
			}
			if (func_755(uParam0, "GUN1_BLIP", 1084227584 /* Float: 5f */))
			{
				func_756();
				return true;
			}
			break;
	}
	return false;
}

void func_348(var uParam0)
{
	func_290(uParam0);
	switch (iLocal_273)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_230))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_230, 942020339);
			}
			else if (__LIB_0__::func_272(iLocal_229, 0))
			{
				__LIB_13__::func_692(&iLocal_230, iLocal_229, joaat("BLIP_STYLE_ENEMY"), "GUN1_BLIP");
			}
			func_758();
			__LIB_13__::func_667(&iLocal_273, 3);
			break;
		case 1:
			if (!__LIB_0__::func_272(iLocal_229, 0))
			{
				__LIB_1__::func_281(&(Local_279[0 /*6*/].f_4), 1, 1);
				__LIB_7__::func_876(0);
				__LIB_13__::func_667(&iLocal_273, 3);
			}
			else if (!bLocal_440)
			{
				if (!__LIB_0__::func_270())
				{
					bLocal_440 = __LIB_12__::func_876(uParam0, "GUN1_ATTACK", 0);
				}
			}
			break;
		case 2:
			func_654("GUN1_BLIP", 0);
			iLocal_254 = 4;
			__LIB_13__::func_665(&iLocal_274, 4, &iLocal_273, 2);
			break;
	}
}

void func_384(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_796(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_796(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_796(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_796(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_796(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_796(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_796(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_796(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_796(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_796(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_796(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_796(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_796(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_798();
						func_799(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_796(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_384(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_384(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_384(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_796(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_834();
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
							func_796(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_395()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (CAM::DOES_CAM_EXIST(Local_33.f_20[iVar0]))
		{
			CAM::STOP_CAM_POINTING(Local_33.f_20[iVar0]);
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
		iVar0++;
	}
}

void func_417(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	__LIB_2__::func_161(-97.5262f, -456.8561f, 63.8994f, 5f, 5);
	__LIB_1__::func_723(0);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RGUN1");
	__LIB_1__::func_539();
	__LIB_6__::func_726(&(Local_33.f_61), 0);
	__LIB_0__::func_267(1);
	func_753();
	func_895(0);
}

void func_424()
{
	func_900();
	__LIB_2__::func_788(&iLocal_355, 1, 0, 1);
	func_901();
}

void func_426(bool bParam0)
{
	__LIB_1__::func_948(iLocal_14, bParam0, 0, 0, 0, 0, 0, 0);
}

void func_464()
{
	Local_127.f_83 = 0.2f;
	StringCopy(&(Local_127.f_36), "GUN1_OBJ_GUN3", 24);
	Local_127.f_81 = 0f;
}

void func_465()
{
	struct<2> Var0;
	vLocal_242 = { -67.8427f, -396.1989f, 70.6081f };
	vLocal_245 = { -73.6079f, -400.7267f, 70.3487f };
	iLocal_219 = joaat("WEAPON_MELEE_KNIFE");
	Var0 = { __LIB_0__::func_38(joaat("KILLED"), joaat("AT_PIG")) };
	STATS::STAT_ID_GET_INT(&Var0, &iLocal_407);
	Var0 = { __LIB_0__::func_38(joaat("KILLED"), joaat("AT_CHICKEN")) };
	STATS::STAT_ID_GET_INT(&Var0, &iLocal_408);
	__LIB_4__::func_228(&uLocal_373);
	__LIB_1__::func_398(&uLocal_373, 0);
	__LIB_1__::func_405(&uLocal_373, 0);
	__LIB_2__::func_830(&uLocal_373, 0);
	__LIB_1__::func_406(&uLocal_373, 0);
}

void func_466()
{
	__LIB_13__::func_673(&Local_323);
	__LIB_13__::func_674(&Local_339);
	__LIB_13__::func_675(&iLocal_355);
	func_590();
}

void func_467()
{
	Local_298.f_3 = Global_35;
	Local_298.f_4 = 21030;
	Local_298.f_7 = 300;
	Local_298.f_8 = 4;
	Local_298.f_13 = 1;
	Local_298.f_17 = 3;
	Local_298.f_18 = 3;
	Local_298.f_19 = 3;
	Local_298.f_21 = 3;
}

int func_493(int iParam0, int iParam1)
{
	var uVar0;
	return func_966(&uVar0, iParam0, iParam1);
}

bool func_524(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_525(int iParam0)
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if ((Global_1935630.f_44 == joaat("WEAPON_LASSO") && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar0, iParam0, true)) && __LIB_2__::func_215(iParam0, Global_35, 0, 30f, 0))
	{
		return true;
	}
	if ((__LIB_2__::func_138(iParam0, 1, 1, 0, 0, 1) && __LIB_0__::func_48(iParam0, Global_35, 30f, 1)) && __LIB_2__::func_215(iParam0, Global_35, 0, 30f, 0))
	{
		return true;
	}
	return false;
}

int func_581(var uParam0, bool bParam1)
{
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		func_1048(&Local_323, &Local_339, &iLocal_355);
	}
	if (func_1049(uParam0, &Local_339, &iLocal_355, &Local_323, &uLocal_360, uLocal_427[1], uLocal_427[0], bParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_582(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 50f, 1, 0);
		*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, true, true);
		if (bLocal_32)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_PIG"), 60, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam1, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*iParam1, false);
		TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, -1, 0, 51, 0);
		PED::SET_PED_CONFIG_FLAG(*iParam1, 186, false);
		PED::SET_PED_CONFIG_FLAG(*iParam1, 169, true);
		PED::SET_PED_CONFIG_FLAG(*iParam1, 305, true);
		PED::SET_PED_CONFIG_FLAG(*iParam1, 388, true);
		ENTITY::_0x18FF3110CF47115D(*iParam1, 7, 0);
		if (__LIB_12__::func_639(uParam0, 64))
		{
			ENTITY::_0x18FF3110CF47115D(*iParam1, 7, 0);
			TASK::SET_PED_PATH_AVOID_FIRE(*iParam1, true);
			PED::_0x6569F31A01B4C097(*iParam1, 4, 0);
			__LIB_1__::func_991(*iParam1, 0);
		}
		__LIB_3__::func_459(*iParam1, 0);
		if (ENTITY::IS_ENTITY_OCCLUDED(*iParam1))
		{
			ENTITY::SET_ENTITY_HEADING(*iParam1, 205.3181f);
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam1, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, true);
		}
		PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 43, true);
		PED::_0xAE6004120C18DF97(*iParam1, 1, 0);
		return 1;
	}
	return 0;
}

void func_583()
{
	__LIB_1__::func_948(iLocal_14, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(iLocal_15, 0, 0, 0, 1, 0, 1, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(iLocal_15, 0);
}

void func_584()
{
	switch (iLocal_257)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_260[1 /*3*/]))
			{
				vLocal_260[1 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_260[1 /*3*/].f_1, 0, "pbl_DLG_Thats_my_stick", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_260[1 /*3*/]);
				iLocal_257 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_260[1 /*3*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_229))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[1 /*3*/], "CS_FamousGunslinger_01", iLocal_229, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[1 /*3*/], "PLAYER_THREE", Global_35, 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], "pbl_DLG_Thats_my_stick", true);
					if (__LIB_0__::func_181())
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_260[1 /*3*/], "b_PlayerArthur", false, false);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_260[1 /*3*/], "b_PlayerArthur", true, false);
					}
					iLocal_257 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_450 == 1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[1 /*3*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(vLocal_260[1 /*3*/]);
					sLocal_478 = "pbl_React_01";
					sLocal_479 = "pbl_Reaction_Gunshot_01";
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "PBL_BASE");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_DLG_Walk_away_right_now");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_DLG_Dont_do_it");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_React_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_React_02");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_React_03");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_React_04");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_React_05");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_WalkNTalk_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_WalkNTalk_02");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_WalkNTalk_03");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_02");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_03");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_04");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_05");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_06");
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], "pbl_Reaction_Gunshot_07");
					iLocal_257 = 5;
				}
			}
			break;
	}
}

void func_585()
{
	switch (iLocal_259)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_260[3 /*3*/]))
			{
				vLocal_260[3 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_260[3 /*3*/].f_1, 0, "pbl_OverHand_Throw", false, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_229))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[3 /*3*/], "CS_FAMOUSGUNSLINGER_01", iLocal_229, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_260[3 /*3*/]);
				iLocal_259 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_260[3 /*3*/], true, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[3 /*3*/], "pbl_Death");
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[3 /*3*/], "pl_OverHand_Dissarm");
				iLocal_259 = 2;
			}
			break;
		case 2:
			func_1050();
			func_1051(vLocal_260[3 /*3*/], "pbl_OverHand_Throw", 0);
			iLocal_259 = 3;
			break;
	}
}

void func_588(var uParam0)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_229, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_229, false);
	func_636(0);
}

void func_589()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_279[iVar0 /*6*/].f_3))
		{
			if (!__LIB_0__::func_139(Local_279[iVar0 /*6*/].f_4))
			{
				Local_279[iVar0 /*6*/].f_4 = __LIB_1__::func_282(Local_279[iVar0 /*6*/].f_3, joaat("INPUT_CONTEXT_Y"), Local_279[iVar0 /*6*/], 1070386381 /* Float: 1.6f */, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_2__::func_450(Local_279[iVar0 /*6*/].f_4, 2f, 1);
			}
		}
		iVar0++;
	}
}

void func_590()
{
	STREAMING::REQUEST_MODEL(iLocal_27, false);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_27))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
		{
			iLocal_28 = OBJECT::CREATE_OBJECT(iLocal_27, -67.1184f, -390.8441f, 71.675f, false, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29))
		{
			iLocal_29 = OBJECT::CREATE_OBJECT(iLocal_27, -67.1184f, -390.9441f, 71.675f, false, true, false, false, true);
		}
	}
	STREAMING::REQUEST_MODEL(joaat("P_PITCHFORK01X"), false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("P_PITCHFORK01X")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_30))
		{
			iLocal_30 = OBJECT::CREATE_OBJECT(joaat("P_PITCHFORK01X"), -62.49189f, -414.6504f, 69.6096f, false, true, false, false, true);
		}
	}
	STREAMING::REQUEST_MODEL(joaat("P_WHEELBARROW02X"), false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("P_WHEELBARROW02X")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			iLocal_31 = OBJECT::CREATE_OBJECT(joaat("P_WHEELBARROW02X"), -64.49189f, -418.6504f, 69.6096f, false, true, false, false, true);
		}
	}
}

void func_612(var uParam0)
{
	if (ENTITY::GET_ENTITY_HEADING(iLocal_229) != 191.2516f)
	{
		if (!__LIB_0__::func_163(iLocal_229, 1464580341))
		{
			PED::SET_PED_DESIRED_HEADING(iLocal_229, 191.2516f);
		}
	}
	else if (!__LIB_0__::func_163(iLocal_229, -982327190))
	{
		TASK::TASK_STAND_STILL(iLocal_229, -1);
	}
	if (!__LIB_7__::func_875())
	{
		if (!__LIB_5__::func_463())
		{
			if (!__LIB_0__::func_899(&uLocal_487))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_229, 5f, 1))
				{
					if (__LIB_14__::func_55(85) != 1.5f)
					{
						if (__LIB_12__::func_876(uParam0, "GUN1_FORK", 0))
						{
							iLocal_441 = 1;
							__LIB_2__::func_259(&uLocal_487);
						}
					}
					else
					{
						iLocal_441 = 1;
						__LIB_2__::func_259(&uLocal_487);
					}
				}
			}
			else if (__LIB_1__::func_583(&uLocal_487) > 20f && __LIB_0__::func_48(Global_35, iLocal_229, 5f, 1))
			{
				if (__LIB_14__::func_55(85) == 1.5f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "GUN1_ACC_FORK", 0))
						{
							__LIB_2__::func_259(&uLocal_487);
						}
					}
				}
				else if (!__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "GUN_LAUNCH_S2", 0))
					{
						__LIB_2__::func_259(&uLocal_487);
					}
				}
			}
		}
	}
	if (bLocal_438)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_229, 21f, 1))
		{
			if (!__LIB_13__::func_666(iLocal_414, 2048))
			{
				if (__LIB_12__::func_876(uParam0, "GUN_DECLINE", 0))
				{
					__LIB_6__::func_313(&iLocal_414, 2048);
				}
			}
			if (!__LIB_13__::func_666(iLocal_414, 4096))
			{
				if (!__LIB_13__::func_997("GUN_DECLINE"))
				{
					__LIB_13__::func_123(uParam0, "GUN1_DECLINE_", 0, 0);
					__LIB_6__::func_313(&iLocal_414, 4096);
				}
			}
		}
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		if (__LIB_14__::func_55(85) == 1.5f)
		{
			if (!__LIB_13__::func_666(iLocal_414, 32))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_229, 20f, 1))
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "GUN_PLY_RETURN", 0))
						{
							__LIB_6__::func_313(&iLocal_414, 32);
						}
					}
				}
			}
			if (!__LIB_13__::func_666(iLocal_414, 64) && __LIB_13__::func_666(iLocal_414, 32))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_229, 20f, 1))
				{
					if (!__LIB_13__::func_997("GUN_PLY_RETURN"))
					{
						if (__LIB_12__::func_876(uParam0, "GUN1_PLY_SHIT", 0))
						{
							__LIB_6__::func_313(&iLocal_414, 64);
						}
					}
				}
			}
		}
	}
}

void func_613(var uParam0)
{
	if (iLocal_411 < Global_1899848.f_10 || iLocal_412 < Global_1899848.f_11)
	{
		if (Global_1899848.f_11 < 4)
		{
			func_1079();
			iLocal_411 = Global_1899848.f_10;
			iLocal_412 = Global_1899848.f_11;
		}
	}
}

void func_614(var uParam0)
{
	_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_229, &Local_298);
	if (!__LIB_6__::func_903("GUN_STEPED_POO") && !__LIB_6__::func_903("GUN_SCOOPED_POO"))
	{
		func_303(uParam0);
	}
}

void func_615(var uParam0)
{
	if (func_1081(uParam0))
	{
		return;
	}
	func_1082(uParam0);
	if (iLocal_451 == 0)
	{
		if (__LIB_0__::func_266(Global_35, -74.7543f, -397.7335f, 70.6161f, 3f, 1, 1))
		{
			if ((ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], "pbl_DLG_Walk_away_right_now") && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1)) && !__LIB_5__::func_463())
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], "pbl_DLG_Walk_away_right_now"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], "pbl_DLG_Walk_away_right_now", true);
					iLocal_451 = 1;
				}
			}
		}
	}
	if (!bLocal_454)
	{
		if (!__LIB_5__::func_463() && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
		{
			if (iLocal_406 > 1 && iLocal_406 < 4)
			{
				if (!__LIB_13__::func_666(iLocal_414, 8192))
				{
					__LIB_12__::func_876(uParam0, "GUN1_ANGRY", 0);
					__LIB_6__::func_313(&iLocal_414, 8192);
				}
			}
			else if (iLocal_406 >= 4 && iLocal_406 < 100)
			{
				if (!__LIB_13__::func_666(iLocal_414, 16384))
				{
					__LIB_12__::func_876(uParam0, "GUN1_ANGRY_2", 0);
					__LIB_6__::func_313(&iLocal_414, 16384);
				}
			}
		}
	}
}

void func_616(var uParam0)
{
	if (func_1081(uParam0))
	{
		return;
	}
	func_1082(uParam0);
	if (!bLocal_454)
	{
		if (!__LIB_5__::func_463())
		{
			func_636(5);
		}
	}
}

void func_618()
{
	int iVar0;
	if (PED::_IS_PED_HOGTIED(iLocal_229))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
		iVar0 = __LIB_3__::func_458(iLocal_229);
		if (!__LIB_0__::func_899(&uLocal_484))
		{
			if (iVar0 == 3 || iVar0 == 5)
			{
				fLocal_405 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
				__LIB_4__::func_89(&uLocal_484, 0);
			}
		}
		else if (__LIB_4__::func_118(&uLocal_484) > fLocal_405)
		{
			if (((iVar0 == 4 || iVar0 == 6) || iVar0 == 0) || iVar0 == 1)
			{
				__LIB_1__::func_561(&uLocal_484);
				return;
			}
			else
			{
				if (iVar0 == 3)
				{
					TASK::_0x79559BAD83CCD038(iLocal_229, 8, joaat("NMBS_FAST_GETUPS"), 0, 0, 1090519040 /* Float: 8f */);
					__LIB_1__::func_561(&uLocal_484);
				}
				if (iVar0 == 5)
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_229, 0f, 0f, 0f, 2f, 17);
					__LIB_1__::func_561(&uLocal_484);
				}
			}
		}
	}
	else if (!__LIB_0__::func_163(iLocal_229, joaat("SCRIPT_TASK_MELEE")))
	{
		TASK::TASK_MELEE(iLocal_229, Global_35, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
	}
}

void func_619()
{
	int iVar0;
	if (__LIB_0__::func_399(iLocal_229, 1, 0, 0) != joaat("WEAPON_MELEE_KNIFE"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_229, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_229, 249, true);
	}
	if (PED::_IS_PED_HOGTIED(iLocal_229))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
		iVar0 = __LIB_3__::func_458(iLocal_229);
		if (!__LIB_0__::func_899(&uLocal_484))
		{
			if (iVar0 == 3 || iVar0 == 5)
			{
				fLocal_405 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
				__LIB_4__::func_89(&uLocal_484, 0);
			}
		}
		else if (__LIB_4__::func_118(&uLocal_484) > fLocal_405)
		{
			if (((iVar0 == 4 || iVar0 == 6) || iVar0 == 0) || iVar0 == 1)
			{
				__LIB_1__::func_561(&uLocal_484);
				return;
			}
			else
			{
				if (iVar0 == 3)
				{
					TASK::_0x79559BAD83CCD038(iLocal_229, 8, joaat("NMBS_FAST_GETUPS"), 0, 0, 1090519040 /* Float: 8f */);
					__LIB_1__::func_561(&uLocal_484);
				}
				if (iVar0 == 5)
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_229, 0f, 0f, 0f, 2f, 17);
					__LIB_1__::func_561(&uLocal_484);
				}
			}
		}
	}
	else if (!__LIB_0__::func_163(iLocal_229, joaat("SCRIPT_TASK_MELEE")))
	{
		TASK::TASK_MELEE(iLocal_229, Global_35, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
	}
}

void func_635(int iParam0)
{
	iLocal_277 = iParam0;
}

void func_636(int iParam0)
{
	iLocal_276 = iParam0;
}

char* func_637(var uParam0)
{
	if (iLocal_275 == 0)
	{
		return "RGUN1_S2_MCS1";
	}
	else if (iLocal_275 == 1)
	{
		return "RGUN1_S2_MCS2";
	}
	return "TEMP";
}

void func_643(var uParam0)
{
	int iVar0;
	if (__LIB_13__::func_23(uParam0, "RGUN1_S2_MCS1"))
	{
		if (!bLocal_439)
		{
			PERSISTENCE::_0x9D16896F0DBE78A2(vLocal_500, 70f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_30))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_30, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_28))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_28, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_29, true);
			}
			if (__LIB_4__::func_511())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_31, true);
				}
			}
			func_733();
			bLocal_439 = true;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("GUN1_CS");
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 14f)
		{
			if (iLocal_422 != iLocal_419)
			{
				__LIB_0__::func_400(iLocal_422);
				__LIB_0__::func_401(iLocal_419);
				iLocal_422 = iLocal_419;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iLocal_443 == 0)
		{
			if (!__LIB_0__::func_393(Local_323[iVar0 /*5*/], iLocal_433, 0, 0))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_323[iVar0 /*5*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_323[iVar0 /*5*/], iLocal_434, true, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_323[iVar0 /*5*/], Local_323[iVar0 /*5*/].f_1, true, false, true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_323[iVar0 /*5*/]);
						PED::SET_PED_TO_RAGDOLL(Local_323[iVar0 /*5*/], 10000, 15000, 1, false, true, false);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(Local_323[iVar0 /*5*/], Local_323[iVar0 /*5*/].f_1, false, false, true, true);
				}
			}
			if (iVar0 == 2)
			{
				iLocal_443 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_323[iVar0 /*5*/]))
		{
			if (!__LIB_0__::func_163(Local_323[iVar0 /*5*/], 1833500181))
			{
				TASK::TASK_WANDER_IN_VOLUME(Local_323[iVar0 /*5*/], iLocal_433, 2000f, 3000f, 1);
			}
		}
		iVar0++;
	}
	if (__LIB_13__::func_23(uParam0, "RGUN1_S2_MCS2"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), false, 0, true, false);
		func_739();
		func_308();
		func_309(0);
		if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		if (!bLocal_439)
		{
			PERSISTENCE::_0x9D16896F0DBE78A2(vLocal_500, 70f);
			bLocal_439 = true;
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			ENTITY::SET_ENTITY_COORDS(PED::GET_MOUNT(Global_35), -75.6544f, -416.9478f, 69.4178f, true, false, true, true);
		}
		if (!bLocal_445)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 6.5f)
			{
				bLocal_445 = true;
			}
		}
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, "1-ifDynamiteLit"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 10f)
			{
				if (iLocal_422 != iLocal_420)
				{
					__LIB_0__::func_400(iLocal_422);
					__LIB_0__::func_401(iLocal_420);
					iLocal_422 = iLocal_420;
				}
				FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 0f);
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-76.31723f, -397.7586f, 72.02573f, joaat("WEAPON_THROWN_DYNAMITE"), 3f, false))
			{
				FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 7f);
			}
		}
		else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, "2-ifDynamiteThrown"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 6f)
			{
				if (iLocal_422 != iLocal_420)
				{
					__LIB_0__::func_400(iLocal_422);
					__LIB_0__::func_401(iLocal_420);
					iLocal_422 = iLocal_420;
				}
				FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 0f);
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-76.31723f, -397.7586f, 72.02573f, joaat("WEAPON_THROWN_DYNAMITE"), 3f, false))
			{
				FIRE::_0x68F6A75FDF5A70D6(-76.31723f, -397.7586f, 72.02573f, 7f);
			}
		}
		if (!__LIB_0__::func_163(Global_35, -717627678))
		{
			__LIB_12__::func_773(0, 0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
		}
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			bLocal_463 = true;
		}
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			func_1097(&Local_127, &Local_33);
		}
	}
}

void func_645(var uParam0, vector3 vParam1, int iParam4)
{
	iLocal_275 = iParam4;
	StringCopy(&(uParam0->f_2575), func_637(uParam0), 24);
	__LIB_12__::func_779(uParam0, vParam1);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_648(var uParam0, var uParam1)
{
	uParam0->f_89 = uParam1;
}

void func_650(var uParam0, var uParam1)
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
			uParam0->f_48 = func_493(268435584, 0);
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

void func_654(char* sParam0, bool bParam1)
{
	__LIB_3__::func_608(iLocal_229);
	__LIB_13__::func_692(&iLocal_230, iLocal_229, 408396114, sParam0);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_230, sParam0);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_16.f_2)))
		{
			__LIB_3__::func_353(&(Local_16.f_2), 0);
		}
	}
}

void func_681(var uParam0)
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
		func_1131(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1133(uParam0);
		func_1134(uParam0);
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

void func_697(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_4__::func_118(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_5__::func_579(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_733()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_1__::func_266(&iVar0, Global_1899848.f_201, 0f, 0f, 0f, 20f, 20f, 20f);
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar0, iVar2, 3);
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_HORSEPOOP02X"))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
			}
			__LIB_1__::func_951(&iVar1);
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	__LIB_0__::func_172(iVar0);
}

void func_736(var uParam0)
{
	func_1218(uParam0);
	func_1219(uParam0);
	func_1220(uParam0);
	func_1221(uParam0);
	func_1222(uParam0);
}

void func_737()
{
	if (iLocal_276 == 4)
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_229, 300, 0, 51, 0);
	}
}

void func_738()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (__LIB_0__::func_139(Local_279[iVar0 /*6*/].f_4))
		{
			__LIB_1__::func_281(&(Local_279[iVar0 /*6*/].f_4), 1, 1);
		}
		iVar0++;
	}
}

int func_739()
{
	if ((!ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[3 /*3*/], "pbl_Death") || !ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[3 /*3*/], "pl_OverHand_Dissarm")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[3 /*3*/], "pbl_OverHand_Throw"))
	{
		return 0;
	}
	if ((!ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[3 /*3*/], "pbl_Death") || !ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[3 /*3*/], "pl_OverHand_Dissarm")) || !ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[3 /*3*/], "pbl_OverHand_Throw"))
	{
		return 0;
	}
	return 1;
}

void func_741()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(Local_339[iVar0 /*5*/], 0))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_339[iVar0 /*5*/], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(Local_323[iVar0 /*5*/], 0))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_323[iVar0 /*5*/], false);
		}
		iVar0++;
	}
}

bool func_742(char* sParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar1 = func_1097(&Local_127, &Local_33);
		if (Local_33.f_56 == 3 && !__LIB_0__::func_899(&uLocal_231))
		{
			__LIB_4__::func_89(&uLocal_231, 0);
		}
		else if (Local_33.f_56 == 4)
		{
			__LIB_1__::func_561(&uLocal_231);
		}
	}
	bVar2 = false;
	if (bVar1)
	{
		iVar0 = __LIB_3__::func_774(&Local_33);
		if (bVar2)
		{
			iVar0 = 4;
		}
		if (iVar0 == 1)
		{
			func_318(sParam0);
			return true;
		}
		else if (iVar0 == 2)
		{
			func_1224(sParam0);
			return true;
		}
		else if (iVar0 == 4)
		{
			func_1225(sParam0);
			if (bVar2)
			{
				__LIB_6__::func_726(&(Local_33.f_61), 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				__LIB_3__::func_811(&Local_127, &Local_33);
				__LIB_11__::func_548(&Local_127, &Local_33);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		else if (iVar0 == 3)
		{
			if (bVar2 || __LIB_0__::func_272(Global_35, 0))
			{
				func_1225(sParam0);
				__LIB_6__::func_726(&(Local_33.f_61), 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				__LIB_3__::func_811(&Local_127, &Local_33);
				__LIB_11__::func_548(&Local_127, &Local_33);
				if (__LIB_0__::func_272(Global_35, 0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				return true;
			}
		}
	}
	return false;
}

void func_746(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_229))
	{
		__LIB_0__::func_325(&iLocal_230);
		func_654(sParam0, 1);
		iLocal_254 = 4;
	}
}

bool func_748(char* sParam0)
{
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_229, true, false), 1f) && __LIB_5__::func_621())
		{
			iLocal_254 = 6;
			return true;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_229))
	{
		func_654(sParam0, 0);
		iLocal_254 = 4;
	}
	return false;
}

void func_751()
{
	if ((!__LIB_1__::func_25(Global_1347702[85 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1347702[86 /*49*/].f_15, 1)) && !__LIB_1__::func_25(Global_1347702[87 /*49*/].f_15, 1))
	{
		func_1231();
	}
	else if (!bLocal_223)
	{
		__LIB_0__::func_45("CAMERA_HELP", 10000, 0, 0, 0, 1);
		bLocal_223 = true;
	}
}

void func_753()
{
	func_1232();
	__LIB_13__::func_695(&uLocal_225);
	__LIB_13__::func_695(&uLocal_226);
	__LIB_13__::func_695(&uLocal_227);
	__LIB_13__::func_695(&uLocal_228);
}

bool func_755(var uParam0, char* sParam1, float fParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::DOES_ENTITY_EXIST(iLocal_229))
	{
		__LIB_13__::func_692(&iLocal_230, iLocal_229, 408396114, sParam1);
		MAP::_BLIP_SET_MODIFIER(iLocal_230, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_230, sParam1);
		if (!__LIB_0__::func_899(&uLocal_248))
		{
			if (__LIB_5__::func_621() || bLocal_235)
			{
				if (__LIB_0__::func_48(Global_35, iLocal_229, 2.5f, 1))
				{
					bLocal_235 = true;
					iVar0 = func_1234(iLocal_229, &uLocal_234);
					if (iVar0 == 2)
					{
						bLocal_235 = false;
						if (func_1235(uParam0, fParam2))
						{
							__LIB_4__::func_89(&uLocal_248, 0);
						}
					}
					else if (iVar0 == 3)
					{
						__LIB_13__::func_693(uParam0, 0, 0, 1);
						__LIB_1__::func_561(&uLocal_251);
						bLocal_235 = false;
					}
					else if (iVar0 == 0)
					{
						if (!__LIB_0__::func_899(&uLocal_251))
						{
							__LIB_4__::func_89(&uLocal_251, 0);
						}
						else if (__LIB_1__::func_583(&uLocal_251) > 3f)
						{
							__LIB_13__::func_693(uParam0, 0, 0, 1);
							__LIB_1__::func_561(&uLocal_251);
							bLocal_235 = false;
						}
					}
				}
				else
				{
					__LIB_13__::func_693(uParam0, 0, 1, 0);
					bLocal_235 = false;
				}
			}
		}
		else if ((__LIB_1__::func_583(&uLocal_248) > 1.5f && !_NAMESPACE77::_0xC5C395C60B542A3C(2)) || __LIB_1__::func_583(&uLocal_248) > 8f)
		{
			__LIB_1__::func_26(0);
			return true;
		}
	}
	return false;
}

void func_756()
{
	MAP::REMOVE_BLIP(&iLocal_230);
}

void func_758()
{
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_229, 0, false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_229, 1);
		if (__LIB_0__::func_399(iLocal_229, 1, 0, 0) != joaat("WEAPON_MELEE_KNIFE"))
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_229, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_229, joaat("REL_PLAYER_ENEMY"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_229, true);
		if (!__LIB_0__::func_163(iLocal_229, joaat("SCRIPT_TASK_MELEE")))
		{
			TASK::TASK_MELEE(iLocal_229, Global_35, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
		}
		func_636(9);
	}
}

bool func_796(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_796(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_796(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_796(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_796(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_796(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_796(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_796(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_796(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_796(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_796(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_796(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_798()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1346();
	func_1347();
	func_1348();
	func_1349();
	func_1350();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_799(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1353(iParam0, 1, 1, -142743235, 1);
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

void func_834()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1387(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_895(int iParam0)
{
	struct<2> Var0;
	if (iParam0 == 1)
	{
		if (!bLocal_224)
		{
			bLocal_224 = true;
			Var0 = 1;
			Var0.f_1 = joaat("WEAPON_KIT_CAMERA");
			HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
		}
	}
	else if (bLocal_224)
	{
		bLocal_224 = false;
		HUD::_0x160825DADF1B04B3();
	}
}

void func_900()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		__LIB_2__::func_788(&(Local_339[iVar0 /*5*/]), 1, 0, 1);
		iVar0++;
	}
}

void func_901()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		__LIB_2__::func_788(&(Local_323[iVar0 /*5*/]), 1, 0, 1);
		iVar0++;
	}
}

int func_966(var uParam0, int iParam1, int iParam2)
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
		return func_966(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1048(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar4;
	var uVar8[1];
	uVar0 = 3;
	uVar4 = 3;
	if (func_1552(&uVar0, 1, (uParam0[0 /*5*/])->f_1, 20f, iLocal_24))
	{
		func_1553(uParam0, &uVar0);
	}
	if (func_1552(&uVar4, 1, (uParam1[0 /*5*/])->f_1, 20f, iLocal_25))
	{
		func_1553(uParam1, &uVar4);
	}
	if (func_1552(&uVar8, 1, (uParam1[0 /*5*/])->f_1, 20f, iLocal_26))
	{
		func_1554(iParam2, uVar8[0]);
	}
}

bool func_1049(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_13__::func_661();
	iVar0 = func_1556(uParam0, uParam1, uParam5);
	iVar1 = func_1557(uParam0, iParam2, uParam5);
	iVar2 = func_1558(uParam0, uParam3, uParam6);
	iVar3 = func_1559(uParam4);
	if (bParam7)
	{
		iVar4 = __LIB_18__::func_634(0, 0, iParam8);
	}
	else
	{
		iVar4 = 1;
	}
	if ((((iVar0 && iVar1) && iVar2) && iVar3) && iVar4)
	{
		return true;
	}
	return false;
}

void func_1050()
{
	__LIB_3__::func_775(&Local_127, 83951616);
	func_1562(2, -74.6754f, -402.6142f, 71.1082f, 5.5366f, 0.2897f, -41.8533f, 30.0181f, 0);
}

void func_1051(var uParam0, char* sParam1, int iParam2)
{
	Local_127 = Global_35;
	Local_127.f_1 = iLocal_229;
	Local_127.f_42 = { 0f, 0f, 0f };
	Local_127.f_45 = { 0f, 0f, 0f };
	Local_127.f_49 = iLocal_219;
	Local_127.f_39 = uParam0;
	Local_127.f_39.f_1 = sParam1;
	Local_127.f_39.f_2 = iParam2;
	__LIB_3__::func_775(&Local_127, 524544);
	__LIB_3__::func_775(&Local_127, 2);
}

void func_1079()
{
	if (!MISC::ARE_STRINGS_EQUAL(sLocal_476, "pbl_Convo_03"))
	{
		bLocal_448 = true;
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_229, &Local_298);
		func_636(3);
	}
}

bool func_1081(var uParam0)
{
	if (func_524(iLocal_229, 0, &uLocal_373, &iLocal_401, 0, 0))
	{
		if ((iLocal_401 != 8 && iLocal_401 != 16) && iLocal_401 != 4)
		{
			func_1588();
			return true;
		}
		else
		{
			if (!__LIB_13__::func_666(iLocal_414, 1))
			{
				__LIB_6__::func_313(&iLocal_414, 1);
				__LIB_6__::func_313(&iLocal_413, 1);
			}
			if (iLocal_401 == 16 || iLocal_401 == 4)
			{
				bLocal_460 = true;
				if (iLocal_406 < 4)
				{
					func_1589(uParam0, "GUN1_AGGRO");
				}
				else if (iLocal_406 >= 4 && iLocal_406 < 100)
				{
					func_1589(uParam0, "GUN1_AGGRO2");
				}
			}
		}
	}
	return false;
}

void func_1082(var uParam0)
{
	if (bLocal_454)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1) && !__LIB_5__::func_463())
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], sLocal_478))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], sLocal_478))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], sLocal_478, true);
						__LIB_12__::func_876(uParam0, sLocal_480, 0);
						if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_01"))
						{
							sLocal_478 = "pbl_React_02";
						}
						else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_02"))
						{
							sLocal_478 = "pbl_React_03";
						}
						else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_03"))
						{
							sLocal_478 = "pbl_React_04";
						}
						else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_04"))
						{
							sLocal_478 = "pbl_React_05";
						}
						else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_05"))
						{
							sLocal_478 = "pbl_React_01";
						}
						bLocal_454 = false;
						bLocal_452 = false;
						bLocal_453 = false;
						func_636(6);
					}
				}
			}
		}
	}
}

int func_1097(var uParam0, var uParam1)
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
				__LIB_11__::func_548(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (__LIB_0__::func_272(*uParam0, 0) && func_1611(uParam0, uParam1))
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
			if (__LIB_3__::func_767(uParam0, uParam1) && func_1613(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 0);
				Global_19 = 0;
				__LIB_13__::func_701(uParam0, uParam1);
				__LIB_18__::func_635(uParam0, uParam1);
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
			__LIB_13__::func_701(uParam0, uParam1);
			bVar0 = __LIB_13__::func_280(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				__LIB_11__::func_548(uParam0, uParam1);
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
			__LIB_13__::func_701(uParam0, uParam1);
			if (func_1621(uParam0, uParam1))
			{
				__LIB_11__::func_548(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				return 1;
			}
			break;
		case 8:
			__LIB_13__::func_701(uParam0, uParam1);
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
				__LIB_11__::func_548(uParam0, uParam1);
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
			__LIB_11__::func_548(uParam0, uParam1);
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

void func_1131(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1634();
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

void func_1133(var uParam0)
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
			func_1642(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1642(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1134(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1642(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1218(var uParam0)
{
	if (__LIB_13__::func_666(iLocal_413, 1))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1) && !__LIB_5__::func_463())
		{
			func_1589(uParam0, "GUN1_AGGRO2");
			__LIB_13__::func_676(&iLocal_413, 1);
			iLocal_406++;
		}
	}
}

void func_1219(var uParam0)
{
	switch (iLocal_503)
	{
		case 0:
			if (__LIB_1__::func_200(85))
			{
				if (bLocal_444 == 0)
				{
					if (__LIB_13__::func_690(Global_35, -1672929718, joaat("WEAPON_THROWN_DYNAMITE")))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_425, true, 0))
						{
							iLocal_423 = __LIB_1__::func_282("CX_PLANT", joaat("INPUT_CONTEXT_RT"), -74.28f, -398.484f, 71.975f, 7f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
							if (!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_567(iLocal_423, 1))
							{
								bLocal_444 = true;
							}
						}
						else if (__LIB_0__::func_572(iLocal_423, 0))
						{
							__LIB_1__::func_281(&iLocal_423, 1, 1);
						}
					}
				}
				else if (__LIB_13__::func_669(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 1, 0))
				{
					__LIB_1__::func_281(&iLocal_423, 1, 1);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_260[2 /*3*/], "w_stick_dynamite01", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0), 0);
					if (__LIB_0__::func_181())
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, vLocal_260[2 /*3*/], "JOHN", "pl_MainAction_PlantDynamite", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, vLocal_260[2 /*3*/], "ARTHUR", "pl_MainAction_PlantDynamite", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					TASK::TASK_LOOK_AT_COORD(Global_35, -74.5281f, -398.5977f, 70.5477f, -1, 0, 51, 0);
					iLocal_503 = 1;
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), false, 0, false, false);
				}
			}
			break;
		case 1:
			if (!__LIB_13__::func_666(iLocal_413, 2))
			{
				if (!__LIB_13__::func_666(iLocal_413, 4))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_260[2 /*3*/], false))
					{
						__LIB_3__::func_10(Global_35);
						bLocal_465 = true;
						WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, joaat("AMMO_DYNAMITE"), 1, 562618531);
						__LIB_6__::func_313(&iLocal_413, 2);
					}
				}
			}
			if (__LIB_13__::func_666(iLocal_413, 4))
			{
				iLocal_406 += 100;
				__LIB_13__::func_676(&iLocal_413, 4);
			}
			if (__LIB_13__::func_666(iLocal_413, 2))
			{
				if (__LIB_0__::func_272(iLocal_229, 0))
				{
					if (!__LIB_5__::func_463())
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], "pbl_DLG_Dont_do_it"))
						{
							if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], "pbl_DLG_Dont_do_it"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], "pbl_DLG_Dont_do_it", true);
								iLocal_451 = 1;
							}
						}
					}
				}
			}
			break;
	}
}

void func_1220(var uParam0)
{
	func_1724(uParam0);
	func_1725(uParam0);
	func_1726(uParam0);
}

void func_1221(var uParam0)
{
	func_1727(uParam0);
	func_1728(uParam0);
}

void func_1222(var uParam0)
{
	if (!OBJECT::IS_DOOR_CLOSED(iLocal_14))
	{
		if (!Local_279[1 /*6*/].f_5)
		{
			bLocal_453 = true;
			func_1589(uParam0, "GUN1_ENTER_HUT");
			Local_279[1 /*6*/].f_5 = 1;
		}
	}
	if (!Local_279[2 /*6*/].f_5)
	{
		if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
		{
			func_1589(uParam0, "GUN1_LOOT");
			Local_279[2 /*6*/].f_5 = 1;
		}
	}
}

void func_1224(char* sParam0)
{
	func_1729(sParam0);
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		if ((!__LIB_1__::func_200(85) && !__LIB_1__::func_200(86)) && !__LIB_1__::func_200(87))
		{
			TASK::CLEAR_PED_TASKS(iLocal_229, true, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_229, true);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	iLocal_254 = 2;
}

void func_1225(char* sParam0)
{
	iLocal_254 = 3;
	__LIB_13__::func_692(&iLocal_230, iLocal_229, 408396114, sParam0);
	MAP::_BLIP_SET_MODIFIER(iLocal_230, 942020339);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		if (!__LIB_1__::func_200(86) && !__LIB_1__::func_200(85))
		{
			TASK::TASK_COMBAT_PED(iLocal_229, Global_35, 33554432, 16);
		}
	}
}

void func_1231()
{
	if (__LIB_13__::func_691())
	{
		iLocal_221 = 0;
		func_753();
		func_895(0);
		if (!bLocal_223)
		{
			bLocal_223 = true;
		}
	}
	else if (__LIB_8__::func_954() && Global_1935496.f_30 == joaat("WEAPON_KIT_CAMERA"))
	{
		iLocal_221 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB3", &uLocal_228);
		func_1732(3);
		func_895(1);
	}
	else if (__LIB_8__::func_954() && Global_1935496.f_30 != joaat("WEAPON_KIT_CAMERA"))
	{
		iLocal_221 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB2", &uLocal_227);
		func_1732(2);
		func_895(1);
	}
	else if (__LIB_4__::func_365())
	{
		iLocal_221 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB1", &uLocal_226);
		func_1732(1);
		func_895(0);
	}
	else if (iLocal_221 != joaat("WEAPON_KIT_CAMERA"))
	{
		__LIB_13__::func_696("CAMERA_BCRUMB0", &uLocal_225);
		func_1732(0);
		func_895(0);
	}
	else
	{
		func_753();
		func_895(0);
	}
}

void func_1232()
{
	if (bLocal_222)
	{
		__LIB_3__::func_760();
		iLocal_220 = -1;
		bLocal_222 = false;
	}
}

int func_1234(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar5;
	var uVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	if (*uParam1 == 0)
	{
		vLocal_236 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0.1f, 0f) };
		vLocal_239 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.057f, 0.1f, 0f) };
		*uParam1 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vLocal_239, vLocal_236, 0.01f, 90, Global_35, 4);
		return 0;
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam1, &iVar1, &vVar5, &uVar2, &uVar8);
		if (iVar0 == 2)
		{
			if (iVar1 > 0)
			{
				vVar9 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.057f, 0.1f, 0f) };
				vVar12.x = (vVar9.x - vLocal_239.x);
				vVar12.f_1 = (vVar9.y - vLocal_239.y);
				vVar12.f_2 = (vVar9.z - vLocal_239.z);
				fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0f, 0f), vVar5 + vVar12, true);
				if (fVar15 <= 0.2f)
				{
					if (CAM::IS_SPHERE_VISIBLE(PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0.15f, 0f), 0.01f))
					{
						*uParam1 = 0;
						return 2;
					}
					else
					{
						*uParam1 = 0;
						return 3;
					}
				}
				else
				{
					*uParam1 = 0;
					return 3;
				}
			}
			*uParam1 = 0;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1235(var uParam0, float fParam1)
{
	if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_229, true, false), 1f))
	{
		__LIB_13__::func_693(uParam0, 1, 0, 0);
		return false;
	}
	if (!__LIB_0__::func_48(Global_35, iLocal_229, fParam1, 1))
	{
		__LIB_13__::func_693(uParam0, 0, 1, 0);
		return false;
	}
	if (!CAM::IS_SPHERE_VISIBLE(PED::GET_PED_BONE_COORDS(iLocal_229, 21030, 0f, 0f, 0.125f), 0.125f))
	{
		__LIB_13__::func_693(uParam0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_1346()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1836(0);
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
	func_1836(1);
}

void func_1347()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_796(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1348()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1839(0);
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
	func_1839(1);
}

void func_1349()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1839(0);
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
	func_1839(1);
}

void func_1350()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_796(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_796(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1353(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1353(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1353(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1353(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1387(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1878(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_796(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1552(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	if (!func_1960(iParam1))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!func_1961(&iVar0, &iVar1, iParam1, vParam2, fParam5))
	{
		return false;
	}
	func_1962(uParam0, iVar0, iVar1, iParam6);
	if (func_1963(uParam0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return true;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return false;
}

void func_1553(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1554(uParam0[iVar0 /*5*/], (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_1554(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(iParam1, 0) && !ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = iParam1;
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	}
}

int func_1556(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (__LIB_13__::func_686(uParam0, uParam1[iVar1 /*5*/], iLocal_25))
		{
			iVar0++;
			if (!__LIB_0__::func_163((*uParam1)[iVar1 /*5*/], 1833500181))
			{
				TASK::TASK_WANDER_IN_VOLUME((*uParam1)[iVar1 /*5*/], iParam2, 2000f, 3000f, 1);
			}
		}
		iVar1++;
	}
	if (iVar0 == 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_25);
		return 1;
	}
	return 0;
}

int func_1557(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_13__::func_686(uParam0, iParam1, iLocal_26))
	{
		if (!__LIB_0__::func_163(*iParam1, 1833500181))
		{
			TASK::TASK_WANDER_IN_VOLUME(*iParam1, iParam2, 2000f, 3000f, 1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_26);
		return 1;
	}
	return 0;
}

int func_1558(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (__LIB_13__::func_686(uParam0, uParam1[iVar1 /*5*/], iLocal_24))
		{
			iVar0++;
			if (!__LIB_0__::func_163((*uParam1)[iVar1 /*5*/], 1833500181))
			{
				TASK::TASK_WANDER_IN_VOLUME((*uParam1)[iVar1 /*5*/], iParam2, 1000f, 5000f, 1);
			}
		}
		iVar1++;
	}
	if (iVar0 == 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_24);
		return 1;
	}
	return 0;
}

int func_1559(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (__LIB_13__::func_670(uParam0[iVar1 /*6*/], 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_NETFISH01X"));
		return 1;
	}
	return 0;
}

void func_1562(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
	Local_127.f_51[iParam0 /*3*/] = { vParam1 };
	Local_127.f_61[iParam0 /*3*/] = { vParam4 };
	Local_127.f_71[iParam0] = fParam7;
	Local_127.f_75[iParam0] = iParam8;
}

void func_1588()
{
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_229, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_229, joaat("REL_PLAYER_ENEMY"));
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_229, true);
	TASK::TASK_MELEE(iLocal_229, Global_35, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_229, true, 100f);
	__LIB_7__::func_876(0);
	__LIB_1__::func_281(&iLocal_423, 1, 1);
	func_636(8);
}

void func_1589(var uParam0, char* sParam1)
{
	if (__LIB_0__::func_272(iLocal_229, 0))
	{
		if (!bLocal_454)
		{
			if (!bLocal_460)
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
				{
					if (bLocal_452 && !bLocal_453)
					{
						if (!__LIB_6__::func_904())
						{
							if (iLocal_457 == 0)
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], "pbl_WalkNTalk_01"))
								{
									if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], "pbl_WalkNTalk_01"))
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], "pbl_WalkNTalk_01", true);
										iLocal_457 = 1;
									}
								}
							}
							else if (iLocal_458 == 0)
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], "pbl_WalkNTalk_02"))
								{
									if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], "pbl_WalkNTalk_02"))
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], "pbl_WalkNTalk_02", true);
										iLocal_458 = 1;
									}
								}
							}
							else if (iLocal_459 == 0)
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], "pbl_WalkNTalk_03"))
								{
									if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], "pbl_WalkNTalk_03"))
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], "pbl_WalkNTalk_03", true);
										iLocal_459 = 1;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_12__::func_876(uParam0, sParam1, 0);
					}
					if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], sLocal_479))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], sLocal_479))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], sLocal_479, true);
							iLocal_406++;
							if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_01"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_02";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_02"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_03";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_03"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_04";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_04"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_05";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_05"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_06";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_06"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_07";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_479, "pbl_Reaction_Gunshot_07"))
							{
								sLocal_479 = "pbl_Reaction_Gunshot_01";
							}
							ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_260[1 /*3*/], sLocal_479);
						}
					}
				}
				bLocal_460 = false;
			}
			if ((iLocal_459 == 1 || bLocal_452 == 0) || bLocal_453 == 1)
			{
				if (bLocal_453)
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
					{
						__LIB_5__::func_20(0, 0);
						__LIB_12__::func_876(uParam0, sParam1, 0);
						bLocal_453 = false;
					}
					else
					{
						sLocal_480 = sParam1;
						bLocal_453 = false;
						bLocal_454 = true;
					}
				}
				else if (!__LIB_5__::func_463() && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
				{
					__LIB_12__::func_876(uParam0, sParam1, 0);
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_260[1 /*3*/], sLocal_478))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_260[1 /*3*/], sLocal_478))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_260[1 /*3*/], "s_base", 1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_260[1 /*3*/], sLocal_478, true);
							if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_01"))
							{
								sLocal_478 = "pbl_React_02";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_02"))
							{
								sLocal_478 = "pbl_React_03";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_03"))
							{
								sLocal_478 = "pbl_React_04";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_04"))
							{
								sLocal_478 = "pbl_React_05";
							}
							else if (MISC::ARE_STRINGS_EQUAL(sLocal_478, "pbl_React_05"))
							{
								sLocal_478 = "pbl_React_01";
							}
						}
					}
				}
			}
			bLocal_452 = false;
			func_636(6);
		}
		else if (bLocal_453)
		{
			sParam1 = sLocal_480;
			bLocal_453 = false;
		}
	}
}

bool func_1611(var uParam0, var uParam1)
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
	func_650(uParam0, uParam1);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	if ((iVar1 == joaat("WEAPON_UNARMED") || iVar1 != uParam0->f_48) && !__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_8__::func_790();
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

int func_1613(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_13__::func_701(uParam0, uParam1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (__LIB_3__::func_761(uParam0, 2))
	{
		return 1;
	}
	fVar0 = __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
	}
	if (!__LIB_3__::func_761(uParam0, 8388608) && !__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(uParam0->f_1, 242628503))
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
	}
	if (!__LIB_2__::func_123(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!__LIB_2__::func_123(uParam0->f_1, *uParam0, 0.99f))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) != 1)
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (__LIB_3__::func_764(uParam1))
		{
			iVar2 = __LIB_11__::func_543(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
		return 1;
	}
	if (!__LIB_0__::func_239(uParam1, 16384))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (PED::_IS_PED_CARRYING(*uParam0))
		{
			iVar4 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(*uParam0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar4, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1f, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_42, 1f, -1, 0f, 512, fVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_1, 0, -1f, -1f, -1f);
		__LIB_1__::func_474(*uParam0, &iVar3, 0, 0, 1, 1);
		__LIB_0__::func_240(uParam1, 16384);
	}
	if (!__LIB_0__::func_239(uParam1, 32768))
	{
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam0, 0, -1f, -1f, -1f);
			__LIB_1__::func_474(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		__LIB_0__::func_7(&(uParam1->f_44.f_3), 2);
		__LIB_11__::func_545(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584 /* Float: 5f */);
		__LIB_0__::func_240(uParam1, 32768);
	}
	return 0;
}

bool func_1621(var uParam0, var uParam1)
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
						if (__LIB_1__::func_120(uParam1->f_62))
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
								__LIB_1__::func_715(13, 0, 0, 0, uParam0->f_1, 0, 1065353216 /* Float: 1f */, 0);
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
			if (__LIB_1__::func_120(uParam1->f_62))
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
			if (__LIB_13__::func_684(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!__LIB_1__::func_120(uParam1->f_62) || __LIB_13__::func_677(uParam1->f_62)))
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

void func_1634()
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
	iVar0 = func_2044(6291456, 0);
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

void func_1642(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1642(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1642(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1724(var uParam0)
{
	int iVar0;
	if (!__LIB_13__::func_666(iLocal_413, 16))
	{
		iVar0 = func_2079();
		if (iVar0 > iLocal_407 || func_2079() == 3)
		{
			iLocal_410++;
			if (iLocal_410 >= 3 || func_2079() == 3)
			{
				bLocal_453 = true;
				MISC::SET_BIT(&iLocal_415, 0);
				MISC::SET_BIT(&iLocal_415, 1);
				MISC::SET_BIT(&iLocal_415, 2);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
				if (__LIB_0__::func_181())
				{
					func_1589(uParam0, "GUN1_ALL_HOG_J");
					iLocal_406 += 2;
					if (iLocal_406 < 5)
					{
						iLocal_406 = 5;
					}
					__LIB_6__::func_313(&iLocal_413, 16);
					return;
				}
				else
				{
					func_1589(uParam0, "GUN1_ALL_HOG_A");
					iLocal_406 += 2;
					if (iLocal_406 < 5)
					{
						iLocal_406 = 5;
					}
					__LIB_6__::func_313(&iLocal_413, 16);
					return;
				}
			}
			if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 2000))
			{
				if (iLocal_410 <= 1)
				{
					bLocal_452 = true;
				}
				func_1589(uParam0, "GUN1_KILL_HOG");
			}
			iLocal_406++;
			if (iVar0 == 1)
			{
				MISC::SET_BIT(&iLocal_415, 0);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			}
			else if (iVar0 == 2)
			{
				MISC::SET_BIT(&iLocal_415, 1);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			}
			else if (iVar0 == 3)
			{
				MISC::SET_BIT(&iLocal_415, 2);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			}
		}
		iLocal_407 = iVar0;
	}
}

void func_1725(var uParam0)
{
	int iVar0;
	if (!__LIB_13__::func_666(iLocal_413, 32))
	{
		iVar0 = func_2081();
		if (iVar0 > iLocal_408 || (func_2081() == 3 && !__LIB_0__::func_272(iLocal_355, 0)))
		{
			iLocal_409++;
			if (iLocal_409 >= 3 || (func_2081() == 3 && !__LIB_0__::func_272(iLocal_355, 0)))
			{
				__LIB_6__::func_313(&iLocal_413, 128);
			}
			else
			{
				if (iLocal_409 <= 1)
				{
					bLocal_452 = true;
				}
				func_1589(uParam0, "GUN1_KILL_CHICK");
				iLocal_406++;
			}
			if (__LIB_13__::func_666(iLocal_413, 128) && __LIB_13__::func_666(iLocal_413, 64))
			{
				bLocal_453 = true;
				MISC::SET_BIT(&iLocal_415, 4);
				MISC::SET_BIT(&iLocal_415, 5);
				MISC::SET_BIT(&iLocal_415, 6);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
				if (__LIB_0__::func_181())
				{
					func_1589(uParam0, "GUN1_ALL_CHICKJ");
					iLocal_406 += 2;
					if (iLocal_406 < 5)
					{
						iLocal_406 = 5;
					}
					__LIB_6__::func_313(&iLocal_413, 32);
					return;
				}
				else
				{
					func_1589(uParam0, "GUN1_ALL_CHICK");
					iLocal_406 += 2;
					if (iLocal_406 < 5)
					{
						iLocal_406 = 5;
					}
					__LIB_6__::func_313(&iLocal_413, 32);
					return;
				}
			}
			if (iVar0 == 1)
			{
				MISC::SET_BIT(&iLocal_415, 4);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			}
			else if (iVar0 == 2)
			{
				MISC::SET_BIT(&iLocal_415, 5);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			}
			else if (iVar0 == 3)
			{
				MISC::SET_BIT(&iLocal_415, 6);
				__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			}
		}
		iLocal_408 = iVar0;
	}
}

void func_1726(var uParam0)
{
	if (!__LIB_13__::func_666(iLocal_413, 64))
	{
		if (!__LIB_0__::func_272(iLocal_355, 0))
		{
			MISC::SET_BIT(&iLocal_415, 3);
			__LIB_1__::func_532(Global_1347702[85 /*49*/].f_15, iLocal_415);
			func_1589(uParam0, "GUN1_KILL_CHICK");
			__LIB_6__::func_313(&iLocal_413, 64);
		}
	}
}

void func_1727(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_2082(uParam0, &(Local_339[iVar0 /*5*/]), "GUN1_HURT_CHICK");
		iVar0++;
	}
}

void func_1728(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_2082(uParam0, &(Local_323[iVar0 /*5*/]), "GUN1_HURT_HOG");
		iVar0++;
	}
}

void func_1729(char* sParam0)
{
	__LIB_3__::func_608(iLocal_229);
	iLocal_230 = __LIB_8__::func_778(408396114, iLocal_229, 1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_230, sParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_16.f_2)))
	{
		__LIB_3__::func_353(&(Local_16.f_2), 0);
	}
}

void func_1732(int iParam0)
{
	if (!bLocal_222)
	{
		__LIB_3__::func_834(4);
		bLocal_222 = true;
	}
	if (iLocal_220 != iParam0)
	{
		if (iLocal_220 > iParam0)
		{
			__LIB_13__::func_671();
		}
		iLocal_220 = iParam0;
		__LIB_3__::func_787(iLocal_220);
	}
}

void func_1836(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_796(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2164(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_799(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1353(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2170(Var0);
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

void func_1839(bool bParam0)
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
		func_796(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1353(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1353(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1878(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1878(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1878(iVar63, -915411861, 1, 0, 0));
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

bool func_1960(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 == 4)
	{
		return false;
	}
	return true;
}

bool func_1961(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	*iParam1 = ENTITY::_0x59B57C4B06531E1E(vParam3, fParam6, *iParam0, iParam2);
	if (*iParam1 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(*iParam0);
		return false;
	}
	return true;
}

void func_1962(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam1));
		if (!__LIB_3__::func_796(iVar2))
		{
		}
		else if (func_2226(iVar2, iParam3))
		{
			if (iVar1 < *uParam0)
			{
				(*uParam0)[iVar1] = iVar2;
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_1963(var uParam0)
{
	if (*uParam0 > 0)
	{
		return true;
	}
	return false;
}

int func_2044(int iParam0, int iParam1)
{
	var uVar0;
	return func_2267(&uVar0, iParam0, iParam1);
}

int func_2079()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_323[iVar0 /*5*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_323[iVar0 /*5*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2081()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_339[iVar0 /*5*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_2082(var uParam0, var uParam1, char* sParam2)
{
	if (__LIB_0__::func_272(*uParam1, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam1, Global_35, 1, 1))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) < 1)
		{
			bLocal_452 = true;
		}
		func_1589(uParam0, sParam2);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam1);
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1, 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, Global_35) || __LIB_0__::func_48(*uParam1, Global_35, 1.5f, 1))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) < 1)
			{
				bLocal_452 = true;
			}
			func_1589(uParam0, sParam2);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam1);
		}
	}
}

void func_2164(int iParam0)
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
	func_1353(iParam0, 1, 1, -142743235, 1);
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
		func_1353(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2170(struct<6> Param0)
{
	if (!func_2339(Param0.f_4, 1))
	{
	}
	if (!func_2339(Param0, 1))
	{
	}
	if (!func_2339(Param0.f_2, 1))
	{
	}
	if (!func_2339(Param0.f_5, 1))
	{
	}
	if (!func_2339(Param0.f_3, 1))
	{
	}
	if (!func_2339(Param0.f_1, 1))
	{
	}
}

bool func_2226(int iParam0, int iParam1)
{
	if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == iParam1)
	{
		return true;
	}
	return false;
}

int func_2267(var uParam0, int iParam1, int iParam2)
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
		return func_2267(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2339(int iParam0, int iParam1)
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
				if (func_2339(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2339(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2339(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2339(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

