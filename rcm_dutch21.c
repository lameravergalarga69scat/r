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
	struct<64> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<7> Local_81[16];
	struct<7> Local_194[5];
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	vector3 vLocal_235 = { 0f, 0f, 0f };
	char* sLocal_238 = NULL;
	int iLocal_239 = 0;
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
	int iLocal_261 = 0;
	struct<79> Local_262 = { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1123024896, 0, 0, 0 } ;
	var uLocal_337 = 1123024896;
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
	var uLocal_352 = 7;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	vector3 vLocal_357 = { 0f, 0f, 0f };
	vector3 vLocal_360 = { 0f, 0f, 0f };
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	char* sLocal_436 = NULL;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	bool bLocal_440 = false;
	bool bLocal_441 = false;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	int iLocal_477 = 0;
	var uLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	struct<5> Local_485[46];
	vector3 vLocal_716[83] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_966[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	float fLocal_1029 = 0f;
	int iLocal_1030 = 0;
	int iLocal_1031[3] = { 0, 0, 0 };
	var uLocal_1035 = 0;
	bool bLocal_1036 = false;
	bool bLocal_1037 = false;
	int iLocal_1038[2] = { 0, 0 };
	bool bLocal_1041 = false;
	bool bLocal_1042 = false;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	int iLocal_1047 = 0;
	struct<2> Local_1048 = { 0, 0 } ;
	var uLocal_1050 = 0;
	int iLocal_1051 = 0;
	int iLocal_1052 = 0;
	int iLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	int iLocal_1057 = 0;
	bool bLocal_1058 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_357 = { 1908.67f, -1819.74f, 40.91f };
	vLocal_360 = { 1907.2f, -1817.963f, 40.9318f };
	iLocal_1052 = -1;
	iLocal_1053 = -1;
	iLocal_1057 = -1;
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
				__LIB_12__::func_996(uParam0);
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
		if (!__LIB_2__::func_618(&(uParam0->f_2597)))
		{
			__LIB_8__::func_901(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_5__::func_28(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_5__::func_28(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
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
			if (!__LIB_2__::func_618(&(uParam0->f_2597)))
			{
				__LIB_8__::func_901(&(uParam0->f_2597), 0);
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
			else if (__LIB_5__::func_28(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_5__::func_28(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
		if (__LIB_0__::func_0(uParam0))
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
	__LIB_13__::func_284(uParam0);
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
		__LIB_18__::func_611(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	if (__LIB_0__::func_592() == 2)
	{
		__LIB_11__::func_381(1);
		__LIB_18__::func_614(1, 0);
		__LIB_6__::func_261();
	}
	__LIB_12__::func_658(uParam0, 28);
	__LIB_12__::func_659(uParam0, 12);
	__LIB_5__::func_467(10);
	Local_262.f_27 = joaat("CS_JOHNMARSTON");
	Local_262.f_27.f_1 = 1;
	Local_262.f_27.f_2 = "JOHN_MARSTON";
	Local_262.f_27.f_4 = { 674.2256f, -1248.898f, 42.6627f };
	Local_262.f_34 = joaat("CS_JAVIERESCUELLA");
	Local_262.f_34.f_1 = 2;
	Local_262.f_34.f_2 = "JAVIER_ESCUELLA";
	Local_262.f_34.f_4 = { 674.2256f, -1248.898f, 42.6627f };
	Local_262.f_41 = joaat("CS_HOSEAMATTHEWS");
	Local_262.f_41.f_1 = 5;
	Local_262.f_41.f_2 = "HOSEA MATTHEWS";
	Local_262.f_41.f_4 = { 674.2256f, -1248.898f, 42.6627f };
	Local_262.f_58 = { 674.1183f, -1253.636f, 43.0419f };
	vLocal_235 = { 1859.2f, -1833.2f, 41.9f };
	Local_262 = { 2282.372f, -1370.567f, 44.52383f };
	PED::SET_PED_CONFIG_FLAG(Global_35, 433, true);
	__LIB_0__::func_401(joaat("BRA_VFX_POST_SMOLDER"));
	CLOCK::ADVANCE_CLOCK_TIME_TO(9, 0, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("BRT3_SCORE_OVERFLOW_STOPPER");
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	__LIB_11__::func_10(1, 1, 0);
	func_194();
	func_195();
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_GANG_DUTCHS"), joaat("REL_ALLIGATOR"));
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, joaat("CS_EDGARROSS"), 7);
	__LIB_12__::func_867(uParam0, joaat("CS_DUTCH"), 7);
	__LIB_12__::func_867(uParam0, joaat("CS_MILTONANDREWS"), 7);
	__LIB_12__::func_867(uParam0, joaat("COACH2"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_LUMBER16X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_LUMBER08X"), 7);
	__LIB_12__::func_867(uParam0, joaat("G_M_Y_UNIEXCONFEDS_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("G_M_O_UNIEXCONFEDS_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_ALLIGATOR_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BULLET_R45"), 7);
	__LIB_12__::func_867(uParam0, WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_RIFLE_BOLTACTION")), 7);
	__LIB_12__::func_867(uParam0, WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_REVOLVER_CATTLEMAN")), 7);
	__LIB_12__::func_867(uParam0, joaat("S_CHAIR04X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_TABLE39X"), 7);
	__LIB_13__::func_55(uParam0, "mech_pickup@object", 7);
	__LIB_13__::func_55(uParam0, "script_rc@dtc2@leadin@rsc_4", 7);
	__LIB_13__::func_55(uParam0, "script_rc@rdtc2@ig@rsc1_ig0_guardinbalcony", 7);
	__LIB_13__::func_55(uParam0, "AI_DAMAGE@DEAD@BASE", 7);
	__LIB_12__::func_908(uParam0, 0);
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_john_searches");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_dutch_bridge");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_player_bridge");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_Shadybelle");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_saintdennis");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_bodyWalk");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_wagon_shadybelle");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_wagon_shadybelleB");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_wagon_shadybelleC");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_dutch_shadybelle");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch2_mansion_stairs");
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
			Var1 = { 680.6158f, -1236.35f, 43.2234f };
			Var1.f_3 = 348.9626f;
			break;
		case 1:
			Var1 = { 1858.034f, -1834.449f, 41.7662f };
			Var1.f_3 = 227.8033f;
			break;
		case 2:
			Var1 = { 1895.737f, -1860.786f, 42.1704f };
			Var1.f_3 = 31.0651f;
			break;
		case 3:
			Var1 = { 1837.347f, -1822.711f, 43.9653f };
			Var1.f_3 = 62.8499f;
			break;
		case 4:
			Var1 = { 2237.227f, -1356.661f, 44.2797f };
			Var1.f_3 = 242f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_210(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
	{
		if (!__LIB_0__::func_272(Local_81[3 /*7*/], 1))
		{
			StringCopy(&(uParam0->f_2578), "DUTCH21_FA02", 24);
			return true;
		}
		if (FIRE::IS_ENTITY_ON_FIRE(Local_81[3 /*7*/]))
		{
			if (!__LIB_2__::func_618(&uLocal_240))
			{
				__LIB_8__::func_901(&uLocal_240, 1);
			}
			else if (__LIB_5__::func_51(&uLocal_240) > 2f)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_81[3 /*7*/]) > 0)
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_81[3 /*7*/], 0, 0);
				}
				StringCopy(&(uParam0->f_2578), "DUTCH21_FA03", 24);
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]))
	{
		if (!__LIB_0__::func_272(Local_81[7 /*7*/], 1))
		{
			StringCopy(&(uParam0->f_2578), "DUTCH21_FA04", 24);
			return true;
		}
		if (FIRE::IS_ENTITY_ON_FIRE(Local_81[7 /*7*/]))
		{
			if (!__LIB_2__::func_618(&uLocal_240))
			{
				__LIB_8__::func_901(&uLocal_240, 1);
			}
			else if (__LIB_5__::func_51(&uLocal_240) > 2f)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_81[7 /*7*/]) > 0)
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_81[7 /*7*/], 0, 0);
				}
				StringCopy(&(uParam0->f_2578), "DUTCH21_FA04", 24);
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_262.f_3) || PED::IS_PED_FATALLY_INJURED(Local_262.f_3))
		{
			StringCopy(&(uParam0->f_2578), "ALLY_DEAD_HORSE_PLAYER", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/].f_1))
	{
		if (!__LIB_0__::func_272(Local_81[7 /*7*/].f_1, 1))
		{
			StringCopy(&(uParam0->f_2578), "DUTCH21_FA05", 24);
			return true;
		}
		if (FIRE::IS_ENTITY_ON_FIRE(Local_81[7 /*7*/].f_1))
		{
			if (!__LIB_2__::func_618(&uLocal_240))
			{
				__LIB_8__::func_901(&uLocal_240, 1);
			}
			else if (__LIB_5__::func_51(&uLocal_240) > 2f)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_81[7 /*7*/].f_1) > 0)
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_81[7 /*7*/].f_1, 0, 0);
				}
				StringCopy(&(uParam0->f_2578), "DUTCH21_FA05", 24);
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
	{
		if (!__LIB_0__::func_272(Local_81[3 /*7*/].f_1, 1))
		{
			StringCopy(&(uParam0->f_2578), "DUTCH21_FA06", 24);
			return true;
		}
		if (FIRE::IS_ENTITY_ON_FIRE(Local_81[3 /*7*/].f_1))
		{
			if (!__LIB_2__::func_618(&uLocal_240))
			{
				__LIB_8__::func_901(&uLocal_240, 1);
			}
			else if (__LIB_5__::func_51(&uLocal_240) > 2f)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_81[3 /*7*/].f_1) > 0)
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_81[3 /*7*/].f_1, 0, 0);
				}
				StringCopy(&(uParam0->f_2578), "DUTCH21_FA06", 24);
				return true;
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
	{
		StringCopy(&(uParam0->f_2578), "DUTCH21_FA10", 24);
		return true;
	}
	if (iLocal_1051 == 2)
	{
		StringCopy(&(uParam0->f_2578), Local_1048.f_1, 24);
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	if (bLocal_1037)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_444) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_444, false))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
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
	if (func_224(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_13__::func_370();
	__LIB_0__::func_11(uParam0);
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
	__LIB_13__::func_284(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_2__::func_608(&(uParam0->f_2585));
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
			func_244(uParam0);
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
	return iLocal_78;
	switch (iLocal_78)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
	}
	return 0;
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
		func_278(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
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
	int iVar0;
	StringCopy(&(uParam0->f_2575), "RDTC2_RSC1", 24);
	__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
	iVar0 = 0;
	while (iVar0 < Local_81)
	{
		if (!__LIB_0__::func_255(Local_81[iVar0 /*7*/], 0))
		{
			if (iVar0 == 11)
			{
				__LIB_12__::func_957(uParam0, Local_81[iVar0 /*7*/], "MILTONANDREWS", 1, 0, 0);
			}
			else if (iVar0 == 4)
			{
				__LIB_12__::func_957(uParam0, Local_81[iVar0 /*7*/], "EdgarRoss", 1, 0, 0);
			}
			else
			{
				__LIB_12__::func_957(uParam0, Local_81[iVar0 /*7*/], 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
	__LIB_12__::func_909(&(uParam0->f_206));
	__LIB_12__::func_981(uParam0, 50102);
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
		if (uParam0->f_171 != 0 || __LIB_0__::func_0(uParam0))
		{
			if (__LIB_13__::func_371(uParam0))
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
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
	if (__LIB_4__::func_511())
	{
	}
	if (func_297(iVar0, uParam0))
	{
		if (__LIB_4__::func_511())
		{
			__LIB_13__::func_62(uParam0, func_61(iVar0), func_61(iVar0 + 1), iVar0, iVar0 + 1, 0);
			if (iVar0 == 3 || iVar0 == 4)
			{
				__LIB_13__::func_105(0, 0);
				return 5;
			}
			else
			{
				__LIB_13__::func_105(1, 1);
				return 7;
			}
		}
		else
		{
			if (iVar0 != 4)
			{
				__LIB_13__::func_62(uParam0, func_61(iVar0), func_61(iVar0 + 1), iVar0, iVar0 + 1, 0);
			}
			if (__LIB_12__::func_936(uParam0))
			{
				__LIB_13__::func_105(0, 0);
				return 5;
			}
			__LIB_13__::func_105(1, 1);
			if (iVar0 == 4)
			{
				return 8;
			}
			else
			{
				return 7;
			}
		}
	}
	else
	{
		return 2;
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
		if (!__LIB_14__::func_172(uParam0))
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
		if (!func_306(uParam0))
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
	return func_312(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(Local_81[11 /*7*/]))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_81[11 /*7*/], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_81[11 /*7*/], true, true);
				}
				PED::DELETE_PED(&(Local_81[11 /*7*/]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_81[11 /*7*/].f_1))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_81[11 /*7*/].f_1, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_81[11 /*7*/].f_1, true, true);
				}
				PED::DELETE_PED(&(Local_81[11 /*7*/].f_1));
			}
			if (__LIB_1__::func_22(9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_167(9)))
				{
					TASK::CLEAR_PED_TASKS(__LIB_0__::func_167(9), true, false);
				}
				__LIB_13__::func_558(9, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			if (__LIB_1__::func_22(5))
			{
				__LIB_13__::func_558(5, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			if (__LIB_1__::func_22(2))
			{
				__LIB_13__::func_558(2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			__LIB_0__::func_489(0f, -7f);
			__LIB_13__::func_33(uParam0, 1);
			return 7;
		case 1:
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_81[3 /*7*/]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_81[3 /*7*/], joaat("REL_GANG_DUTCHS"));
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_81[3 /*7*/], false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[3 /*7*/], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_81[3 /*7*/]))
			{
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_81[3 /*7*/], 0f, 3f, 4, 2, 1);
			}
			__LIB_13__::func_89(uParam0, "DUTCH22_OBJ", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			Local_262.f_71 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_81[3 /*7*/]);
			__LIB_13__::func_33(uParam0, 4);
			return 7;
		case 4:
			__LIB_13__::func_33(uParam0, -1);
			__LIB_13__::func_544(14);
			return 7;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_14__::func_172(uParam0))
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
		if (func_324(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	vector3 vVar0;
	int iVar3;
	func_326(uParam0);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	POPULATION::_0x8EC7CD701F872F87(0f, 4096, 0, 0, -1, -1);
	if (STREAMING::_IS_IMAP_ACTIVE(809554858))
	{
		STREAMING::_REMOVE_IMAP(809554858);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1810083187))
	{
		STREAMING::_REMOVE_IMAP(1810083187);
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 17)
	{
		CLOCK::SET_CLOCK_TIME(17, 0, 0);
	}
	switch (iLocal_78)
	{
		case 0:
			Local_262.f_27.f_3 = __LIB_0__::func_167(Local_262.f_27.f_1);
			Local_262.f_34.f_3 = __LIB_0__::func_167(Local_262.f_34.f_1);
			Local_262.f_41.f_3 = __LIB_0__::func_167(Local_262.f_41.f_1);
			Local_262.f_72 = func_327(1, 1, 0, 1, 0);
			__LIB_1__::func_684(1, 1);
			__LIB_13__::func_545(0);
			func_330(&(uParam0->f_206));
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(__LIB_0__::func_398(7), 48, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(__LIB_0__::func_398(7), 46, true);
			__LIB_13__::func_544(2);
			__LIB_9__::func_469(0f);
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/].f_1))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/].f_1))
				{
				}
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_81[7 /*7*/].f_1, false, false) };
			}
			__LIB_12__::func_652(uParam0);
			__LIB_12__::func_653(uParam0);
			if (__LIB_1__::func_198(joaat("CSTAG_FLOW_BRT3_ACTIVE"), 1))
			{
				__LIB_1__::func_449(joaat("CSTAG_FLOW_BRT3_ACTIVE"), 1, 0);
			}
			if (__LIB_1__::func_198(joaat("CSTAG_FLOW_BRT3_PRE"), 1))
			{
				__LIB_1__::func_449(joaat("CSTAG_FLOW_BRT3_PRE"), 1, 0);
			}
			return 7;
		case 1:
			__LIB_13__::func_544(2);
			break;
		case 2:
		case 3:
			func_334(15);
			func_334(16);
			func_334(18);
			func_334(23);
			func_334(24);
			func_334(25);
			func_334(17);
			func_334(11);
			func_334(14);
			func_334(9);
			func_334(10);
			func_334(12);
			func_334(4);
			func_334(5);
			func_334(13);
			func_335(8);
			func_335(2);
			func_335(3);
			func_336(45, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(22, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(0, uParam0, 15, 1, 0, 0, 0, 0, 0);
			func_336(1, uParam0, 23, 1, 0, 0, 0, 0, 0);
			func_336(27, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(2, uParam0, 1, 4, 0, 0, 0, 0, 0);
			func_336(5, uParam0, 23, 4, 0, 0, 12, 3.5f, 0);
			func_336(6, uParam0, 29, 4, 0, 0, 0, 0, 0);
			func_336(7, uParam0, 26, 4, 0, 0, 0, 0, 0);
			func_336(8, uParam0, 15, 1, 0, 0, 0, 0, 0);
			func_336(9, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(10, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(21, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(20, uParam0, 1, 5, 0, 0, 0, 0, 0);
			func_336(12, uParam0, 8, 1, 0, 0, 0, 0, 0);
			func_336(13, uParam0, 3, 5, 0, 0, 0, 0, 0);
			func_336(23, uParam0, 4, 1, 0, 0, 0, 0, 0);
			func_336(24, uParam0, 5, 1, 0, 0, 0, 0, 0);
			func_336(25, uParam0, 6, 1, 0, 0, 0, 0, 0);
			func_336(26, uParam0, 7, 1, 0, 0, 0, 0, 0);
			func_336(11, uParam0, 3, 1, 0, 0, 0, 0, 0);
			func_336(14, uParam0, 9, 5, 0, 0, 0, 0, 0);
			func_336(15, uParam0, 10, 5, 0, 0, 15, 1f, 0);
			func_336(16, uParam0, 11, 1, 0, 0, 0, 0, 0);
			func_336(17, uParam0, 12, 5, 0, 0, 0, 0, 0);
			func_336(18, uParam0, 13, 5, 0, 0, 0, 0, 0);
			func_336(19, uParam0, 1, 1, 18, 0, 0, 0, 0);
			if (!func_337(11) || func_338(16))
			{
				__LIB_8__::func_875(Local_81[7 /*7*/], "DCH2_SBRIDE1", 1, 1);
				__LIB_8__::func_875(Local_81[7 /*7*/], "DCH2_SBRIDE2", 1, 1);
			}
			if ((func_337(14) && func_338(18)) || func_337(23))
			{
				AUDIO::STOP_PED_SPEAKING(Local_81[7 /*7*/], true);
				__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_0__::func_267(0);
				LAW::_0x710448D44A64C213(false);
				__LIB_13__::func_544(4);
			}
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_12, true, 0))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			}
			func_334(15);
			func_334(26);
			func_334(18);
			func_334(19);
			func_334(22);
			func_334(23);
			func_334(24);
			func_334(25);
			func_334(29);
			func_334(30);
			func_334(43);
			func_334(42);
			func_334(49);
			func_334(50);
			func_334(41);
			func_334(51);
			func_334(52);
			func_334(45);
			func_334(46);
			func_334(48);
			func_334(47);
			func_334(20);
			func_334(21);
			func_334(81);
			func_335(28);
			func_335(27);
			func_335(39);
			func_335(40);
			func_335(31);
			func_335(32);
			func_335(80);
			func_335(44);
			func_335(33);
			func_335(34);
			func_335(35);
			func_335(38);
			func_335(36);
			func_335(37);
			func_335(82);
			func_335(2);
			func_336(45, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(9, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(11, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(3, uParam0, 1, 4, 0, 0, 0, 0, 0);
			func_336(4, uParam0, 18, 4, 0, 0, 0, 0, 0);
			func_336(5, uParam0, 23, 4, 0, 0, 12, 1.5f, 0);
			func_336(6, uParam0, 29, 4, 0, 0, 0, 0, 0);
			func_336(7, uParam0, 26, 4, 0, 0, 3, 3f, 0);
			func_336(117, uParam0, 22, 4, 0, 0, 0, 0, 0);
			func_336(8, uParam0, 15, 1, 0, 0, 0, 0, 0);
			func_336(1, uParam0, 23, 1, 0, 0, 0, 0, 0);
			func_336(114, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(112, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(113, uParam0, 51, 1, 0, 0, 0, 0, 0);
			func_336(102, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(0, uParam0, 15, 1, 0, 0, 0, 0, 0);
			func_336(115, uParam0, 41, 1, 0, 0, 0, 0, 0);
			func_336(116, uParam0, 30, 1, 0, 0, 0, 0, 0);
			func_336(10, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(135, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(140, uParam0, 20, 1, 0, 0, 0, 0, 0);
			func_336(144, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(118, uParam0, 1, 5, 23, 0, 0, 0, 0);
			func_336(119, uParam0, 48, 5, 39, 0, 12, 1.5f, 0);
			func_336(120, uParam0, 47, 5, 0, 0, 0, 0, 0);
			func_336(121, uParam0, 27, 5, 0, 0, 0, 0, 0);
			func_336(122, uParam0, 28, 5, 0, 0, 0, 0, 0);
			func_336(123, uParam0, 44, 1, 0, 0, 0, 0, 0);
			func_336(136, uParam0, 31, 1, 0, 0, 0, 0, 0);
			func_336(137, uParam0, 36, 1, 0, 0, 0, 0, 0);
			func_336(138, uParam0, 37, 1, 0, 0, 0, 0, 0);
			func_336(134, uParam0, 45, 1, 0, 0, 0, 0, 0);
			func_336(139, uParam0, 46, 1, 0, 0, 12, 1f, 0);
			func_336(124, uParam0, 41, 5, 0, 0, 6, 3f, 0);
			func_336(125, uParam0, 38, 1, 0, 0, 0, 0, 0);
			func_336(126, uParam0, 33, 1, 0, 0, 0, 0, 0);
			func_336(127, uParam0, 34, 1, 0, 0, 0, 0, 0);
			func_336(128, uParam0, 35, 1, 0, 0, 0, 0, 0);
			func_336(141, uParam0, 80, 1, 0, 0, 0, 0, 0);
			func_336(142, uParam0, 81, 1, 0, 0, 0, 0, 0);
			func_336(129, uParam0, 19, 1, 0, 0, 0, 0, 0);
			func_336(130, uParam0, 30, 1, 0, 0, 0, 0, 0);
			func_336(131, uParam0, 31, 1, 0, 0, 0, 0, 0);
			func_336(132, uParam0, 32, 1, 0, 0, 0, 0, 0);
			func_336(133, uParam0, 41, 1, 0, 0, 8, 5f, 0);
			func_336(143, uParam0, 80, 1, 0, 0, 0, 0f, 5);
			if (func_337(52))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				iVar3 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (iVar3 != 0)
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar3, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2f, 0);
				}
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_13__::func_544(9);
			}
			break;
		case 9:
			func_334(54);
			func_334(55);
			func_334(60);
			func_334(64);
			func_334(61);
			func_334(65);
			func_334(57);
			func_335(56);
			func_335(58);
			func_335(66);
			func_335(67);
			func_335(68);
			func_335(70);
			func_335(69);
			func_335(53);
			func_335(72);
			func_335(2);
			func_336(45, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(200, uParam0, 65, 1, 0, 0, 0, 0, 0);
			func_336(201, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(202, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(203, uParam0, 57, 1, 0, 0, 0, 0, 0);
			func_336(215, uParam0, 53, 1, 0, 53, 0, 0, 0);
			func_336(11, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(204, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(205, uParam0, 68, 3, 0, 0, 0, 0, 0);
			func_336(206, uParam0, 57, 3, 0, 0, 0, 0, 0);
			func_336(207, uParam0, 54, 1, 0, 0, 0, 0, 0);
			func_336(208, uParam0, 55, 1, 0, 0, 0, 0, 0);
			func_336(209, uParam0, 70, 1, 0, 0, 0, 0, 0);
			func_336(210, uParam0, 69, 1, 0, 0, 0, 0, 0);
			func_336(211, uParam0, 56, 1, 60, 0, 0, 0, 0);
			func_336(212, uParam0, 57, 1, 58, 0, 0, 0, 0);
			func_336(213, uParam0, 58, 1, 60, 0, 0, 0, 0);
			func_336(214, uParam0, 1, 1, 0, 0, 0, 0, 0);
			if (func_337(60))
			{
				ENTITY::_0x18FF3110CF47115D(Local_262.f_4[1], 7, 0);
				if (MAP::DOES_BLIP_EXIST(iLocal_432))
				{
					MAP::REMOVE_BLIP(&iLocal_432);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_74));
				}
				__LIB_0__::func_769();
				UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_13__::func_544(10);
			}
			break;
		case 10:
		case 11:
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			func_334(60);
			func_334(64);
			func_334(61);
			func_334(62);
			func_334(63);
			func_335(59);
			func_334(71);
			func_334(79);
			func_335(66);
			func_335(67);
			func_335(72);
			func_335(2);
			func_336(45, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(301, uParam0, 79, 1, 0, 0, 0, 0, 0);
			func_336(200, uParam0, 65, 1, 0, 0, 0, 0, 0);
			func_336(203, uParam0, 1, 4, 0, 0, 0, 0, 0);
			func_336(304, uParam0, 62, 4, 0, 0, 14, 4f, 0);
			func_336(313, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(202, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(312, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(307, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(311, uParam0, 1, 6, 0, 0, 0, 0, 0);
			func_336(308, uParam0, 60, 1, 0, 0, 0, 0, 0);
			func_336(309, uParam0, 71, 1, 0, 0, 0, 0, 0);
			func_336(310, uParam0, 63, 1, 79, 0, 0, 0, 0);
			func_336(214, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(216, uParam0, 59, 1, 79, 0, 0, 0, 0);
			if (func_337(79) && iLocal_78 != 11)
			{
				__LIB_13__::func_544(11);
			}
			if (func_338(311))
			{
				__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_13__::func_544(12);
				if (MAP::DOES_BLIP_EXIST(iLocal_432))
				{
					MAP::REMOVE_BLIP(&iLocal_432);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_74));
				}
				if (__LIB_1__::func_198(joaat("CSTAG_FLOW_RDTC2_ACTIVE"), 1))
				{
					__LIB_1__::func_449(joaat("CSTAG_FLOW_RDTC2_ACTIVE"), 1, 0);
				}
				__LIB_5__::func_548(1);
				return 5;
			}
			break;
		case 12:
			func_334(76);
			func_334(77);
			func_334(78);
			func_335(2);
			func_335(75);
			func_335(3);
			func_336(45, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(11, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(400, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(401, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(307, uParam0, 1, 1, 2, 0, 0, 0, 0);
			func_336(403, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(408, uParam0, 77, 1, 0, 0, 0, 0, 0);
			func_336(410, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(411, uParam0, 78, 1, 0, 0, 0, 0, 0);
			func_336(27, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(28, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(406, uParam0, 3, 1, 0, 0, 13, 3f, 0);
			func_336(405, uParam0, 1, 1, 0, 0, 0, 0, 0);
			func_336(409, uParam0, 75, 1, 0, 0, 0, 0, 5);
			if (PED::IS_PED_IN_COMBAT(Local_81[3 /*7*/], 0) && !AUDIO::_0xD0730C1FA40348D9("DCH2_DUARTALK"))
			{
				__LIB_8__::func_875(Local_81[3 /*7*/], "DCH2_DUARTALK", 1, 1);
			}
			if (func_337(76))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_0__::func_745(0);
					__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
					__LIB_13__::func_544(14);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					TASK::CLEAR_PED_TASKS(Local_81[3 /*7*/], true, false);
					VEHICLE::SET_RANDOM_TRAINS(false);
					__LIB_1__::func_600(0);
					__LIB_0__::func_267(0);
					LAW::_0x710448D44A64C213(false);
					STATS::_0x025E98E317652CDD(2);
					return 5;
				}
			}
			break;
		case 14:
			if (!bLocal_1036)
			{
				HUD::_0xC9CAEAEEC1256E54(724769646);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_444) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_444, false))
				{
					CAM::DO_SCREEN_FADE_IN(3000);
					MISC::SET_BIT(&(Global_1956580.f_1), 5);
				}
			}
			if ((GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh04", 2, false, &uLocal_1035) || GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh04", 1, false, &uLocal_1035)) || __LIB_0__::func_84(&(uParam0->f_206), 512))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_444))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_444);
				}
				GRAPHICS::_0xA201A3D0AC087C37("ChapterTitle_IntroCh04");
				AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
				bLocal_1036 = true;
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_444) && (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_444, 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_444))) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_444))
			{
				TASK::CLEAR_PED_TASKS(Local_81[3 /*7*/], true, false);
				PED::SET_PED_KEEP_TASK(Local_81[3 /*7*/], true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 1861.904f, -1834.319f, 41.6936f, 1073741824 /* Float: 2f */, 1.25f, 0, 0);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
				TASK::TASK_PERFORM_SEQUENCE(Local_81[3 /*7*/], iLocal_234);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				STATS::_0x025E98E317652CDD(0);
				return 8;
			}
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
		func_380(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_381(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_159(var uParam0)
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (MAP::DOES_BLIP_EXIST(Local_262.f_48))
	{
		MAP::REMOVE_BLIP(&(Local_262.f_48));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_262.f_26))
	{
		VOLUME::_DELETE_VOLUME(Local_262.f_26);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1023))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1023);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_1024))
	{
		OBJECT::REMOVE_PICKUP(iLocal_1024);
	}
	if (PATHFIND::_0xDE0EA444735C1368(Local_14.f_18))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_14.f_18);
	}
	__LIB_5__::func_440("sha_cover_dutch2");
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	AUDIO::_0x87E6302FC61208CC("BLOCKED_CONTEXTS_SCREAMS");
	MISC::_0x243CEDE8F916B994();
	if (Local_262.f_63 != 0)
	{
		TASK::REMOVE_COVER_POINT(Local_262.f_63);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_355))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_355);
	}
	if (iLocal_1021 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_1021))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_1021);
		}
	}
	if (iLocal_1022 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_1022))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_1022);
		}
	}
	if (bLocal_441)
	{
		if (__LIB_13__::func_546(&uLocal_1043, &iLocal_1018))
		{
			__LIB_11__::func_582(&uLocal_1043);
		}
	}
	VOLUME::_DELETE_VOLUME(iLocal_1019);
	__LIB_6__::func_357();
	STREAMING::_REMOVE_IMAP(-646014955);
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_bosb", true);
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_05", true);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	__LIB_8__::func_863(&(Local_262.f_76), 0, 1, 1);
	__LIB_8__::func_863(&(Local_262.f_77), 1, 0, 0);
	__LIB_8__::func_863(&(Local_262.f_78), 1, 0, 0);
	POPULATION::_0x74C2B3DC0B294102(Local_14.f_28);
	POPULATION::_0xA1CFB35069D23C23(Local_14.f_28);
	func_413();
	func_414();
	func_415();
	__LIB_11__::func_10(1, 0, 0);
	func_416();
	__LIB_0__::func_745(1);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_417(1, 0, 0);
	}
	else
	{
		func_417(1, 0, 0);
	}
	__LIB_1__::func_948(-659381875, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-356563546, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1163459288, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-907240961, 0, 0, 0, 1, 0, 0, 0);
	__LIB_0__::func_267(1);
	LAW::_0x710448D44A64C213(true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 433, false);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_GANG_DUTCHS"), joaat("REL_ALLIGATOR"));
	__LIB_0__::func_400(joaat("BRA_VFX_POST_SMOLDER"));
	__LIB_0__::func_698(4096);
	__LIB_5__::func_547(1);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_421(9, 0, 0);
		iVar0 = __LIB_0__::func_398(1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, 1849.024f, -1834.996f, 42.4205f, 315.6325f, true, false, true);
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iVar0, 1849.024f, -1834.996f, 42.4205f, 3f, 0, false, false, false, false);
		}
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	}
}

void func_194()
{
	Local_14 = VOLUME::_CREATE_VOLUME_BOX(1895.963f, -1858.076f, 42.57988f, 0f, 0f, -40.25f, 6f, 10.5f, 6f);
	Local_14.f_1 = VOLUME::_CREATE_VOLUME_BOX(1889.478f, -1857.206f, 43.07251f, 0f, 0f, -40.25f, 5.147226f, 7.665957f, 3.50654f);
	Local_14.f_2 = VOLUME::_CREATE_VOLUME_BOX(1895.963f, -1858.076f, 43.63156f, 0f, 0f, -40.25f, 6f, 8.804358f, 3.00289f);
	Local_14.f_3 = VOLUME::_CREATE_VOLUME_BOX(1900.083f, -1864.951f, 43.28974f, 0f, 0f, -40.25f, 7.801404f, 4.501109f, 2.42159f);
	Local_14.f_4 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_4, 1882.208f, -1850.94f, 43.86123f, 0f, 0f, 49.88393f, 44.07364f, 24.32283f, 7.472499f);
	Local_14.f_5 = VOLUME::_CREATE_VOLUME_BOX(1889.724f, -1856.75f, 43.10406f, 0f, 0f, 51.04477f, 5.812264f, 3.862164f, 2.431534f);
	Local_14.f_6 = VOLUME::_CREATE_VOLUME_BOX(1892.554f, -1864.791f, 43.74436f, -0.539192f, -0.099985f, -63.82755f, 5.501079f, 2.859357f, 3.308653f);
	Local_14.f_7 = VOLUME::_CREATE_VOLUME_BOX(1899.839f, -1865.396f, 43.36713f, 0f, 0f, -39.00101f, 3.62956f, 4.977057f, 2.546614f);
	Local_14.f_8 = VOLUME::_CREATE_VOLUME_BOX(1900.245f, -1861.025f, 46.43441f, 0f, 0f, -40.20882f, 3.560109f, 1.994466f, 2.298297f);
	Local_14.f_9 = VOLUME::_CREATE_VOLUME_BOX(1891.434f, -1864.887f, 47.65306f, 0f, 0f, -36.1139f, 3.818465f, 6.464411f, 2.672252f);
	Local_14.f_10 = VOLUME::_CREATE_VOLUME_BOX(1897.101f, -1870.142f, 43.71278f, 0f, 0f, 50.77117f, 6.052469f, 7.676482f, 3.21854f);
	Local_14.f_11 = VOLUME::_CREATE_VOLUME_BOX(1897.995f, -1870.151f, 47.61454f, 0f, 0f, -38.53726f, 5.50396f, 6.926498f, 2.5323f);
	Local_14.f_12 = VOLUME::_CREATE_VOLUME_BOX(1895.734f, -1858.433f, 47.81406f, 0f, 0f, 50.89296f, 9.626401f, 6.325427f, 3.028578f);
	Local_14.f_13 = VOLUME::_CREATE_VOLUME_CYLINDER(1897.922f, -1874.589f, 38.84212f, 0f, 0f, -39.98229f, 92.18803f, 81.29646f, 47.36895f);
	Local_14.f_14 = VOLUME::_CREATE_VOLUME_BOX(1896.262f, -1870.391f, 47.40612f, 0f, 0f, -41.99743f, 3.542105f, 3.817815f, 2.324144f);
	Local_14.f_15 = VOLUME::_CREATE_VOLUME_BOX(1894.426f, -1859.327f, 43.47912f, 0f, 0f, -40.62664f, 5.458255f, 6.194384f, 2.686162f);
	Local_14.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(1909.21f, -1816.404f, 41.61643f, 0f, 0f, -30.59174f, 6.866716f, 7.15719f, 2.878772f);
	Local_14.f_17 = VOLUME::_CREATE_VOLUME_BOX(1895.626f, -1866.127f, 48.19628f, 0f, 0f, -40.0062f, 2.699749f, 3.104872f, 3.788376f);
	Local_14.f_18 = VOLUME::_CREATE_VOLUME_BOX(1898.949f, -1873.462f, 43.43076f, 0f, 0f, 52.4908f, 2.028341f, 0.739618f, 2.863584f);
	Local_14.f_19 = VOLUME::_CREATE_VOLUME_BOX(1900.311f, -1864.228f, 47.04135f, 0f, 0f, -43.2249f, 7.487925f, 6.7765f, 4.195164f);
	Local_14.f_20 = VOLUME::_CREATE_VOLUME_BOX(1898.612f, -1870.577f, 48.01748f, 0f, 0f, -3.204092f, 6.936261f, 1.54865f, 3.465853f);
	Local_14.f_21 = VOLUME::_CREATE_VOLUME_CYLINDER(684.2129f, -1251.563f, 53.66187f, 0f, 0f, 0f, 54.79135f, 59.79131f, 21.59484f);
	Local_14.f_22 = VOLUME::_CREATE_VOLUME_CYLINDER(1612.265f, -1762.846f, 54.3638f, 0f, 0f, 45.89391f, 80.34942f, 66.59442f, 13.92842f);
	Local_14.f_23 = VOLUME::_CREATE_VOLUME_CYLINDER(1793.506f, -1795.223f, 49.51194f, 0f, 0f, -35.07692f, 46.29719f, 25.02998f, 8.737231f);
	Local_14.f_24 = VOLUME::_CREATE_VOLUME_CYLINDER(1888.693f, -1855.53f, 46.68238f, 0f, 0f, -35.07692f, 8.429372f, 8.260187f, 9.542006f);
	Local_14.f_25 = VOLUME::_CREATE_VOLUME_CYLINDER(1876.925f, -1838.286f, 42.63541f, 0f, 0f, -39.54911f, 4.551045f, 8.179144f, 4.946535f);
	Local_14.f_26 = VOLUME::_CREATE_VOLUME_BOX(1897.388f, -1863.598f, 43.78498f, 0f, 0f, -40.25f, 15.38372f, 16.51894f, 3.490475f);
	Local_14.f_27 = VOLUME::_CREATE_VOLUME_BOX(1897.388f, -1863.598f, 45.82473f, 0f, 0f, -40.25f, 15.38372f, 16.51894f, 7.849028f);
	Local_14.f_28 = VOLUME::_CREATE_VOLUME_CYLINDER(1907.251f, -1819.717f, 41.61643f, 0f, 0f, 0f, 24f, 24f, 4f);
	Local_14.f_29 = VOLUME::_CREATE_VOLUME_CYLINDER(2219.574f, -1350.582f, 44.78685f, 0f, 0f, -18.93797f, 110.5624f, 44.65203f, 11.65987f);
	Local_14.f_30 = VOLUME::_CREATE_VOLUME_BOX(2282.446f, -1371.981f, 45.55932f, 0f, 0f, -19.22789f, 7.526766f, 11.76648f, 6.710258f);
	Local_14.f_31 = VOLUME::_CREATE_VOLUME_CYLINDER(1885.514f, -1864.184f, 38.84213f, 0f, 0f, 0f, 241.3811f, 213.4693f, 47.36895f);
	Local_14.f_32 = VOLUME::_CREATE_VOLUME_BOX(1897.293f, -1863.268f, 47.81406f, 0f, 0f, 50.89296f, 5.50547f, 3.282155f, 3.028578f);
	Local_14.f_33 = VOLUME::_CREATE_VOLUME_BOX(1890.813f, -1863.857f, 47.81406f, 0f, 0f, 50.89296f, 5.50547f, 3.521795f, 3.028578f);
	Local_14.f_34 = VOLUME::_CREATE_VOLUME_BOX(2295.37f, -1376.489f, 46.42982f, 0f, 0f, -19.22789f, 23.48728f, 34.58265f, 4.854957f);
	Local_14.f_35 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_35, 1905.124f, -1819.214f, 41.40382f, 0f, 0f, -28.99857f, 1.543205f, 5.066083f, 2.285177f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_35, 1908.214f, -1820.927f, 41.40382f, 0f, 0f, -28.99857f, 1.543205f, 5.066083f, 2.285177f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_35, 1907.783f, -1818.536f, 41.40382f, 0f, 0f, 60.6326f, 1.543205f, 4.36151f, 2.285177f);
	Local_14.f_36 = VOLUME::_CREATE_VOLUME_CYLINDER(1904.915f, -1830.315f, 72.68926f, 0f, 0f, 0f, 907.3843f, 671.1806f, 62.67375f);
	Local_14.f_37 = VOLUME::_CREATE_VOLUME_CYLINDER(2275.142f, -1369.648f, 44.78685f, 0f, 0f, -18.93796f, 59.15725f, 44.65203f, 11.65987f);
	Local_14.f_38 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_38, 1900.689f, -1865.102f, 48.06702f, 0f, 0f, -40.21922f, 8.837761f, 3.755543f, 3.200316f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_38, 1905.035f, -1864.338f, 48.06702f, 0f, 0f, -40.21922f, 2.98664f, 3.142801f, 3.200316f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_38, 1900.602f, -1861.385f, 47.35277f, 0f, 0f, -40.21922f, 3.911011f, 1.979986f, 4.610837f);
	Local_14.f_39 = VOLUME::_CREATE_VOLUME_BOX(1898.688f, -1867.496f, 43.12134f, 0f, 0f, 50.77119f, 0.836687f, 2.051646f, 2.253683f);
	Local_14.f_40 = VOLUME::_CREATE_VOLUME_BOX(1897.194f, -1863.837f, 46.82713f, 0f, 0f, -39.84834f, 23.79719f, 26.54582f, 18.4397f);
	Local_14.f_41 = VOLUME::_CREATE_VOLUME_BOX(1905.085f, -1861.258f, 47.81406f, 0f, 0f, 50.89296f, 3.64531f, 6.769071f, 2.749326f);
	Local_14.f_42 = VOLUME::_CREATE_VOLUME_CYLINDER(1899.728f, -1860.092f, 41.61642f, 0f, 0f, 36.61592f, 39.28314f, 36.48134f, 9.199814f);
	Local_14.f_43 = VOLUME::_CREATE_VOLUME_BOX(1923.169f, -1885.453f, 43.86123f, 0f, 0f, 49.88393f, 142.7092f, 83.08948f, 7.472499f);
	Local_14.f_44 = VOLUME::_CREATE_VOLUME_BOX(1828.468f, -1814.555f, 47.86221f, 0f, 0f, -36.86489f, 100.7165f, 51.06811f, 22.03859f);
	Local_14.f_45 = VOLUME::_CREATE_VOLUME_CYLINDER(1882.038f, -1850.694f, 42.63541f, 0f, 0f, -39.54911f, 17.45473f, 18.02223f, 12.51308f);
	Local_14.f_46 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_46, 1898.031f, -1873.72f, 43.14868f, 0f, 0f, 50.77119f, 1.898664f, 1.925183f, 2.094316f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_46, 1900.75f, -1869.823f, 43.15284f, 0f, 0f, 50.77119f, 1.087348f, 1.410104f, 2.094316f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_46, 1897.451f, -1869.635f, 43.14868f, 0f, 0f, 34.63044f, 2.168107f, 1.411068f, 2.094316f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_46, 1892.915f, -1869.757f, 43.14868f, 0f, 0f, 50.77117f, 1.45942f, 1.101883f, 2.094316f);
	Local_14.f_47 = VOLUME::_CREATE_VOLUME_BOX(1902.29f, -1868.075f, 43.28974f, 0f, 0f, -40.25f, 2.302559f, 2.919024f, 2.42159f);
	Local_14.f_48 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_48, 1900.31f, -1871.699f, 47.59793f, 0f, 0f, -39.54925f, 0.951811f, 1.386354f, 2.5323f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_48, 1896.487f, -1871.965f, 47.59793f, 0f, 0f, -39.54924f, 6.431064f, 2.546132f, 2.5323f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_48, 1897.944f, -1867.049f, 47.59793f, 0f, 0f, -39.54925f, 1.946666f, 2.542288f, 2.5323f);
	Local_14.f_49 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0xBCE668AAF83608BE(Local_14.f_49, 1890.802f, -1864.642f, 46.88465f, 0f, 0f, 0f, 0.644146f, 0.671851f, 0.561221f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_49, 1889.519f, -1861.758f, 47.26485f, 0f, 0f, -41.39587f, 1.131731f, 3.102833f, 1.973795f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_49, 1891.221f, -1867.97f, 47.26485f, 0f, 0f, -24.50075f, 0.630956f, 1.353868f, 1.973795f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_49, 1886.924f, -1864.557f, 47.26485f, 0f, 0f, -41.39587f, 0.878338f, 1.353868f, 1.973795f);
	Local_14.f_50 = VOLUME::_CREATE_VOLUME_BOX(1897.118f, -1859.364f, 47.12807f, 0f, 0f, 55.43143f, 2.745908f, 3.726431f, 1.729847f);
	Local_14.f_51 = VOLUME::_CREATE_VOLUME_BOX(1892.022f, -1843.156f, 43.86568f, 0f, 0f, -39.19445f, 17.36503f, 19.01342f, 5.652782f);
	Local_14.f_52 = VOLUME::_CREATE_VOLUME_BOX(1902.552f, -1866.677f, 48.06702f, 0f, 0f, -40.21922f, 3.9369f, 3.755543f, 3.200316f);
	Local_14.f_53 = VOLUME::_CREATE_VOLUME_BOX(1897.388f, -1863.598f, 47.99895f, 0f, 0f, -40.25f, 21.56387f, 17.61249f, 3.490475f);
	Local_14.f_54 = VOLUME::_CREATE_VOLUME_CYLINDER(2219.574f, -1350.582f, 44.78685f, 0f, 0f, -18.93797f, 193.9029f, 132.3664f, 39.73823f);
	Local_14.f_55 = VOLUME::_CREATE_VOLUME_BOX(1893.913f, -1860.652f, 47.81406f, 0f, 0f, 50.89296f, 16.26498f, 6.325427f, 3.028578f);
	Local_14.f_56 = VOLUME::_CREATE_VOLUME_BOX(1903.438f, -1826.142f, 42.44374f, 0f, 0f, -30.19747f, 6.533811f, 20.09308f, 5.575353f);
	Local_14.f_57 = VOLUME::_CREATE_VOLUME_BOX(1903.151f, -1863.434f, 44.92687f, 0f, 0f, -41.112f, 7.297467f, 3.655416f, 10.81089f);
	Local_14.f_58 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_58, 1897.82f, -1867.733f, 43.34298f, 0f, 0f, 48.50073f, 1.747615f, 2.050326f, 2.523691f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_58, 1895.474f, -1871.034f, 43.34298f, 0f, 0f, 48.50073f, 2.474154f, 2.050326f, 2.523691f);
	Local_14.f_59 = VOLUME::_CREATE_VOLUME_CYLINDER(1897.922f, -1874.589f, 38.84212f, 0f, 0f, -39.98229f, 70.03247f, 68.01653f, 47.36895f);
	Local_14.f_60 = VOLUME::_CREATE_VOLUME_BOX(1899.742f, -1867.958f, 47.61454f, 0f, 0f, -38.53726f, 6.067029f, 12.69559f, 2.5323f);
	Local_14.f_61 = VOLUME::_CREATE_VOLUME_CYLINDER(684.2129f, -1251.563f, 53.66187f, 0f, 0f, 0f, 272.4281f, 248.2484f, 21.59484f);
	Local_14.f_62 = VOLUME::_CREATE_VOLUME_BOX(1892.136f, -1858.581f, 43.63156f, 0f, 0f, -40.25f, 3.99086f, 4.332445f, 3.00289f);
	Local_14.f_63 = VOLUME::_CREATE_VOLUME_BOX(1593.084f, -1741.584f, 55.80816f, 0f, 0f, -34.15892f, 77.8959f, 28.80509f, 22.28098f);
}

void func_195()
{
	POPULATION::_0xB56D41A694E42E86(Local_14.f_13, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_13, 0, 0, 0, -1, -1, 0);
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
		iVar0 = func_503(0, 0);
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

int func_224(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
	{
		if (!__LIB_0__::func_272(Local_81[3 /*7*/], 1))
		{
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(Local_81[3 /*7*/]) || PED::IS_PED_IN_COMBAT(Local_81[3 /*7*/], 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_81[3 /*7*/], Global_35, 1, 1))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Local_81[3 /*7*/]);
			TASK::TASK_SMART_FLEE_PED(Local_81[3 /*7*/], Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(Local_81[3 /*7*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[3 /*7*/], false);
			return 1;
		}
	}
	return 0;
}

void func_244(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_269(var uParam0)
{
	if (__LIB_12__::func_767(uParam0) == 4)
	{
		VEHICLE::SET_RANDOM_TRAINS(false);
		__LIB_1__::func_600(0);
		return 1;
	}
	if (!bLocal_1058)
	{
		Local_81[7 /*7*/] = func_586(1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_936(uParam0))
		{
			if (!__LIB_1__::func_22(3))
			{
				Local_81[1 /*7*/] = func_586(3, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(0))
			{
				Local_81[3 /*7*/] = func_586(0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(5))
			{
				Local_81[5 /*7*/] = func_586(5, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(2))
			{
				Local_81[6 /*7*/] = func_586(2, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1114682645, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(7))
			{
				Local_81[2 /*7*/] = func_586(7, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(10))
			{
				Local_81[8 /*7*/] = func_586(10, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -922193456, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(9))
			{
				Local_81[9 /*7*/] = func_586(9, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1114682645, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(18))
			{
				Local_81[14 /*7*/] = func_586(18, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -922193456, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(6))
			{
				Local_81[10 /*7*/] = func_586(6, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(16))
			{
				Local_81[12 /*7*/] = func_586(16, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -922193456, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(17))
			{
				Local_81[13 /*7*/] = func_586(17, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -426171916, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(11))
			{
				Local_81[0 /*7*/] = func_586(11, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -426171916, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
			if (!__LIB_1__::func_22(19))
			{
				Local_81[15 /*7*/] = func_586(19, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
			}
		}
		if (__LIB_1__::func_22(1))
		{
			if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_936(uParam0))
			{
				if ((((((((((((((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(3)) || __LIB_12__::func_767(uParam0) > 0) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(0)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(5)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(2)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(7)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(10)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(9)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(18)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(6)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(16)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(17)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(11)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(19)) || __LIB_12__::func_767(uParam0) > 0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 315, true);
					bLocal_1058 = true;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				bLocal_1058 = true;
			}
		}
		else
		{
			return 0;
		}
	}
	__LIB_4__::func_524(2);
	AUDIO::_0x6378A235374B852F("BLOCKED_CONTEXTS_SCREAMS", 3);
	if (__LIB_12__::func_767(uParam0) < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/].f_1))
		{
			Local_81[7 /*7*/].f_1 = func_587(1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/].f_1))
			{
				__LIB_1__::func_411(1, Local_81[7 /*7*/].f_1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_81[7 /*7*/].f_1, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[7 /*7*/].f_1, true);
				TASK::TASK_STAND_STILL(Local_81[7 /*7*/].f_1, -1);
				PED::_0x2EB75FB86C41F026(Local_81[7 /*7*/].f_1, 3, 0);
				PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/].f_1, 284, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_81[7 /*7*/].f_1, 48, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_81[7 /*7*/].f_1, 46, true);
				POPULATION::_0xF74E134F40192884(Local_81[7 /*7*/].f_1, 2);
				if (__LIB_12__::func_767(uParam0) == -1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/].f_1, 682.0151f, -1232.625f, 43.3473f, 339.8611f, true, false, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/].f_1, 682.0151f, -1232.625f, 43.3473f, 339.8611f, true, false, true);
				}
				ENTITY::SET_ENTITY_PROOFS(Local_81[7 /*7*/].f_1, 8, false);
			}
			else
			{
				return 0;
			}
		}
	}
	if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_936(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_81[11 /*7*/]))
		{
			Local_81[11 /*7*/] = __LIB_8__::func_931(joaat("CS_MILTONANDREWS"), 667f, -1240f, 44f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_81[4 /*7*/]))
		{
			Local_81[4 /*7*/] = __LIB_8__::func_931(joaat("CS_EDGARROSS"), 667f, -1240f, 44f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		if (!__LIB_1__::func_22(3))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(11))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(7))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(0))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(5))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(2))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(9))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(6))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(16))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(17))
		{
			return 0;
		}
		if (!__LIB_1__::func_22(19))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_81[11 /*7*/]) || ENTITY::IS_ENTITY_DEAD(Local_81[11 /*7*/]))
		{
		}
		if (!func_590(uParam0, 679.7123f, -1228.673f, 43.5953f, 321.2392f))
		{
			return 0;
		}
	}
	if (__LIB_12__::func_767(uParam0) > 1)
	{
		__LIB_5__::func_548(1);
	}
	if (__LIB_12__::func_767(uParam0) < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/]))
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
			__LIB_12__::func_875(uParam0, Local_81[7 /*7*/], "JOHN", 1);
			__LIB_12__::func_875(uParam0, Local_81[0 /*7*/], "SADIE_ADLER", 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_81[7 /*7*/], joaat("REL_GANG_DUTCHS"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_81[7 /*7*/], false);
			ENTITY::SET_ENTITY_PROOFS(Local_81[7 /*7*/], 8, false);
			if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_767(uParam0) == 0)
			{
				AUDIO::STOP_PED_SPEAKING(Local_81[7 /*7*/], false);
				if (__LIB_1__::func_25(Global_1835011[26 /*74*/].f_1, 1))
				{
					ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_1__::func_440(67), true, false, true, true);
				}
			}
			else
			{
				AUDIO::STOP_PED_SPEAKING(Local_81[7 /*7*/], true);
			}
			PED::CLEAR_PED_ENV_DIRT(Global_35);
			return 1;
		}
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_767(uParam0) == 0)
		{
			if (__LIB_1__::func_25(Global_1835011[26 /*74*/].f_1, 1))
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_1__::func_440(67), true, false, true, true);
			}
		}
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		return 1;
	}
	return 0;
}

void func_278(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				__LIB_1__::func_781(__LIB_0__::func_76(iParam0));
			}
			if (__LIB_0__::func_2() != 0)
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	__LIB_1__::func_232(iParam0);
	if (!__LIB_0__::func_6(__LIB_0__::func_298(0)))
	{
		__LIB_1__::func_242(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			__LIB_1__::func_142(1);
		}
		__LIB_1__::func_318(iParam0, -1);
		if (bParam1 && !__LIB_0__::func_13(2))
		{
			__LIB_0__::func_47(&Global_0, 1024);
		}
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_8(&(Global_1347343.f_11), 536870912);
			__LIB_1__::func_84(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_601(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				__LIB_1__::func_299(0);
			}
		}
		if (__LIB_0__::func_2() == -1)
		{
			iVar1 = __LIB_1__::func_24(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = __LIB_1__::func_194();
				switch (iVar1)
				{
					case 0:
						__LIB_1__::func_233(0);
						break;
					case 1:
						__LIB_1__::func_233(1);
						break;
					case 2:
						__LIB_1__::func_233(2);
						break;
					case 3:
						__LIB_1__::func_233(3);
						break;
					case 4:
						__LIB_1__::func_233(4);
						break;
					case 5:
						__LIB_1__::func_233(5);
						break;
					case 6:
						__LIB_1__::func_233(5);
						break;
					case 7:
						__LIB_1__::func_233(7);
						break;
					case 8:
						__LIB_1__::func_233(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 7:
					case 8:
					case 36:
						__LIB_1__::func_233(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						__LIB_1__::func_233(11);
						break;
					default:
						iVar1 = __LIB_1__::func_194();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									__LIB_1__::func_234(0);
									break;
								case 1:
									__LIB_1__::func_234(1);
									break;
								case 2:
									__LIB_1__::func_234(2);
									break;
								case 3:
									__LIB_1__::func_234(3);
									break;
								case 4:
									__LIB_1__::func_234(4);
									break;
								case 5:
									__LIB_1__::func_234(5);
									break;
								case 6:
									__LIB_1__::func_234(5);
									break;
								case 7:
									__LIB_1__::func_234(7);
									break;
								case 8:
									__LIB_1__::func_234(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		__LIB_0__::func_301(1);
	}
	else
	{
		__LIB_1__::func_318(iParam0, -1);
		__LIB_1__::func_242(iParam0, 4);
	}
	__LIB_1__::func_144(iParam0, 0);
}

void func_291(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_13__::func_23(uParam0, "RDTC2_RSC1"))
	{
		iVar0 = 0;
		while (iVar0 < Local_81)
		{
			if (iVar0 != 4 && iVar0 != 11)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_81[iVar0 /*7*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_81[iVar0 /*7*/]))
					{
						if (__LIB_13__::func_521(uParam0, Local_81[iVar0 /*7*/], 0, 0, 1, 1))
						{
							PED::SET_PED_CONFIG_FLAG(Local_81[iVar0 /*7*/], 413, true);
							iVar1 = -1;
							switch (iVar0)
							{
								case 0:
									iVar1 = 11;
									break;
								case 8:
									iVar1 = 10;
									break;
								case 1:
									iVar1 = 3;
									break;
								case 2:
									iVar1 = 7;
									break;
								case 3:
									iVar1 = 0;
									break;
								case 5:
									iVar1 = 5;
									break;
								case 6:
									iVar1 = 2;
									break;
								case 9:
									iVar1 = 9;
									break;
								case 10:
									iVar1 = 6;
									break;
								case 12:
									iVar1 = 16;
									break;
								case 13:
									iVar1 = 17;
									break;
								case 14:
									iVar1 = 18;
									break;
								case 15:
									iVar1 = 19;
									break;
								case 4:
								case 11:
									break;
								case 7:
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/], 674.123f, -1234.8f, 43.0791f, 291.1225f, true, false, true);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[iVar0 /*7*/], 679.1118f, -1233.147f, 43.4174f, 1f, 20000, 0.25f, 0, 40000f);
									PED::FORCE_PED_MOTION_STATE(Local_81[iVar0 /*7*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
									break;
							}
							if (iVar1 != -1)
							{
								__LIB_13__::func_558(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
								__LIB_0__::func_288(iVar1, 64, 1);
								if (iVar1 == 16)
								{
									PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_MOLLY")));
								}
								if (iVar1 == 18)
								{
									PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_STRAUSS")));
								}
								if (iVar1 == 11)
								{
									PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_SADIE")));
								}
								if (iVar1 == 10)
								{
									PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_KIERAN")));
								}
								if (iVar1 == 7)
								{
									PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_CHARLES")));
								}
								if (iVar1 == 2)
								{
									PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_JAVIER")));
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		__LIB_0__::func_99(uParam0, 0);
		if (__LIB_13__::func_521(uParam0, Global_35, 0, 0, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 672.4695f, -1234.07f, 43.0642f, 297.295f, true, false, true);
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
	}
}

bool func_297(int iParam0, var uParam1)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam1))
			{
				func_87(uParam1);
			}
			else
			{
				if (!__LIB_1__::func_22(1))
				{
					Local_81[7 /*7*/] = func_586(1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 315, true);
				}
				Local_81[7 /*7*/].f_1 = func_587(1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]))
				{
					return false;
				}
				if (!func_590(uParam1, 679.7123f, -1228.673f, 43.5953f, 321.2392f))
				{
					return false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]))
				{
					__LIB_1__::func_684(1, 1);
					__LIB_12__::func_875(uParam1, Local_81[7 /*7*/], "JOHN", 1);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/], 674.123f, -1234.8f, 43.0791f, 291.1225f, true, false, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[7 /*7*/], 679.1118f, -1233.147f, 43.4174f, 1f, 20000, 0.25f, 0, 40000f);
					PED::FORCE_PED_MOTION_STATE(Local_81[7 /*7*/], joaat("MOTIONSTATE_WALK"), false, 1, false);
				}
				else
				{
					return false;
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/].f_1, 682.0151f, -1232.625f, 43.3473f, 339.8611f, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 672.4695f, -1234.07f, 43.0642f, 297.295f, true, false, true);
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				__LIB_13__::func_544(1);
				__LIB_13__::func_545(0);
				AUDIO::TRIGGER_MUSIC_EVENT("RDTC2_START_STA");
				__LIB_12__::func_86(2);
				__LIB_13__::func_33(uParam1, 0);
			}
			break;
		case 1:
			__LIB_0__::func_568(1855.59f, -1833.493f, 42.1399f, 100f, 0);
			if (!func_590(uParam1, 1849.909f, -1827.939f, 42.8827f, 223.4612f))
			{
				return false;
			}
			if (!__LIB_1__::func_22(1))
			{
				Local_81[7 /*7*/] = func_586(1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 315, true);
			}
			else
			{
				Local_81[7 /*7*/] = __LIB_0__::func_167(1);
			}
			if (!func_338(8) || !func_338(0))
			{
				func_336(8, uParam1, 1, 1, 0, 0, 0, 0, 0);
				func_336(0, uParam1, 1, 1, 0, 0, 0, 0, 0);
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]))
			{
				if (__LIB_0__::func_866(1, 0))
				{
					__LIB_1__::func_640(1);
				}
				__LIB_1__::func_290(Local_262.f_27.f_1, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[7 /*7*/], true);
				__LIB_1__::func_684(1, 1);
				__LIB_12__::func_875(uParam1, Local_81[7 /*7*/], "JOHN", 1);
				AUDIO::STOP_PED_SPEAKING(Local_81[7 /*7*/], true);
				if (!PED::IS_PED_INJURED(Local_81[7 /*7*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_81[7 /*7*/], false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/], 1858.302f, -1831.482f, 41.7719f, 228.5506f, true, false, true);
				}
			}
			else
			{
				return false;
			}
			func_628(20);
			func_628(13);
			func_628(12);
			func_628(14);
			func_628(15);
			func_628(16);
			func_628(17);
			func_628(18);
			func_628(3);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/].f_1, 1850.287f, -1825.344f, 42.8798f, 223.1026f, true, false, true);
			PED::_SET_PED_ON_MOUNT(Local_81[7 /*7*/], Local_81[7 /*7*/].f_1, -1, true);
			PED::_SET_PED_ON_MOUNT(Global_35, Local_262.f_3, -1, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[7 /*7*/], 1858.516f, -1831.952f, 42.1378f, 1f, 20000, 0.25f, 0, 40000f);
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC2_RESTART_2");
			__LIB_13__::func_33(uParam1, 1);
			__LIB_12__::func_86(2);
			__LIB_13__::func_544(4);
			break;
		case 2:
			TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC2_RESTART_3");
			__LIB_13__::func_544(9);
			if (!func_338(0))
			{
				func_336(0, uParam1, 1, 1, 0, 0, 0, 0, 0);
				return false;
			}
			if (!func_590(uParam1, 1867.167f, -1843.367f, 41.5706f, 146.3323f))
			{
				return false;
			}
			if (!__LIB_1__::func_22(1))
			{
				Local_81[7 /*7*/] = func_586(1, 1, 0, 1892.82f, -1858.757f, 42.1507f, 206.4326f, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 315, true);
			}
			else
			{
				Local_81[7 /*7*/] = __LIB_0__::func_167(1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]))
			{
				return false;
			}
			if (!TASK::_0xB8F52A3F84A7CC59(joaat("DEAD_CARRIABLE_HUMAN")))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[0]))
			{
				Local_262.f_4[0] = __LIB_8__::func_931(joaat("G_M_Y_UNIEXCONFEDS_01"), 1893.582f, -1858.011f, 42.8f, 142.0373f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_262.f_4[0], 443515196);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[1]))
			{
				Local_262.f_4[1] = __LIB_8__::func_931(joaat("G_M_Y_UNIEXCONFEDS_01"), 1896.67f, -1857.97f, 42.17f, 356.6624f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_262.f_4[1], -954246503);
			}
			if (!PED::IS_PED_INJURED(Local_81[7 /*7*/]) && __LIB_1__::func_22(1))
			{
				if (PED::_0xA0BC8FAED8CFEB3C(Local_262.f_4[0]) && PED::_0xA0BC8FAED8CFEB3C(Local_262.f_4[1]))
				{
					if (!__LIB_2__::func_618(&uLocal_258))
					{
						PED::_SET_PED_OUTFIT_PRESET(Local_262.f_4[0], 0, false);
						__LIB_0__::func_169(Local_262.f_4[0], 0, 1);
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[0], 7, 1);
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[0], 12, 1);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_262.f_4[0], false, true);
						PED::_0x58D32261AE0F0843(Local_262.f_4[0], 14412, 0.093842f, 0.108583f, 0.249498f, 0.328231f, 0.694936f, -0.639788f, "PD_BloodSoak_large");
						PED::_0x58D32261AE0F0843(Local_262.f_4[0], 14414, -0.111247f, 0.119827f, 0.389265f, -0.260997f, 0.869708f, -0.418913f, "PD_BloodSoak_large");
						PED::_0x58D32261AE0F0843(Local_262.f_4[0], 14412, -0.075407f, 0.1369f, 0.371104f, -0.177852f, 0.924616f, 0.336828f, "PD_BulletCriticalRifle_Enemy");
						PED::_0x58D32261AE0F0843(Local_262.f_4[0], 14412, 0.082424f, 0.125009f, 0.265936f, 0.236135f, 0.828483f, -0.507795f, "PD_BulletCriticalRifle_Enemy");
						__LIB_8__::func_901(&(Local_262.f_49), 1);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_262.f_4[0], true);
						ENTITY::_SET_ENTITY_HEALTH(Local_262.f_4[0], 0, 0);
						PED::_0x5D4CD22A8C82A81A(Local_262.f_4[0], 0);
						if (!PED::IS_PED_INJURED(Local_81[7 /*7*/]))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/], 1893.64f, -1857.724f, 42.1726f, 219.573f, true, false, true);
						}
						__LIB_8__::func_901(&uLocal_258, 0);
						PED::_SET_PED_OUTFIT_PRESET(Local_262.f_4[1], 1, false);
						__LIB_0__::func_169(Local_262.f_4[1], 0, 1);
						PED::_0x5D4CD22A8C82A81A(Local_262.f_4[1], 0);
						__LIB_3__::func_459(Local_262.f_4[1], 0);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_262.f_4[1], false, true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_262.f_4[1], true);
						PED::_0x58D32261AE0F0843(Local_262.f_4[1], 14412, -0.025071f, -0.096122f, 0.289241f, -4E-06f, -0.947178f, -0.320708f, "PD_BulletFatalShotgun_Enemy");
						PED::_0x58D32261AE0F0843(Local_262.f_4[1], 14412, -0.070563f, 0.145142f, 0.326053f, -0.139824f, 0.989859f, -0.025074f, "PD_BulletFatalShotgun_Enemy");
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[1], 7, 1);
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[1], 14, 0);
						TASK::TASK_PLAY_ANIM(Local_262.f_4[1], "AI_DAMAGE@DEAD@BASE", "dead_a", 1000f, -8f, -1, 131073, 0f, false, 0, false, 0, false);
						PED::_0x2208438012482A1A(Local_262.f_4[1], true, false);
					}
					else
					{
						TASK::TASK_CARRIABLE(Local_262.f_4[0], joaat("DEAD_CARRIABLE_HUMAN"), Local_81[7 /*7*/], 0, 0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_194[3 /*7*/]))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/], 1892.82f, -1858.757f, 42.1507f, 206.4326f, true, false, true);
						__LIB_1__::func_290(Local_262.f_27.f_1, 0, 0);
						__LIB_12__::func_875(uParam1, Local_81[7 /*7*/], "JOHN", 1);
						if (__LIB_0__::func_866(1, 0))
						{
							__LIB_1__::func_640(1);
						}
						__LIB_1__::func_684(1, 1);
						if (!PED::IS_PED_INJURED(Local_81[7 /*7*/]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_81[7 /*7*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
							WEAPON::_0x94A3C1B804D291EC(Local_81[7 /*7*/], 0, 0, 0, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_81[7 /*7*/], true, true);
						}
						func_631(3, 1897.638f, -1871.039f, 46.32f, 114.0203f, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 1, 0);
						func_631(0, 1892.49f, -1859.386f, 46.3335f, 46.7222f, joaat("WEAPON_RIFLE_BOLTACTION"), 1, 0, 1, 1);
						func_631(4, 1897.183f, -1859.796f, 47.2193f, -121f, joaat("WEAPON_UNARMED"), 0, 0, 1, 0);
						Local_194[2 /*7*/] = Local_262.f_4[0];
						Local_194[1 /*7*/] = Local_262.f_4[1];
						TASK::TASK_PLAY_ANIM(Local_194[4 /*7*/], "AI_DAMAGE@DEAD@BASE", "dead_a", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						PED::_0x2208438012482A1A(Local_194[4 /*7*/], true, false);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[3 /*7*/], true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[0 /*7*/], true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[4 /*7*/], true);
						ENTITY::_SET_ENTITY_HEALTH(Local_194[3 /*7*/], 0, 0);
						ENTITY::_SET_ENTITY_HEALTH(Local_194[0 /*7*/], 0, 0);
						ENTITY::_SET_ENTITY_HEALTH(Local_194[4 /*7*/], 0, 0);
						__LIB_13__::func_33(uParam1, 1);
						ENTITY::_SET_ENTITY_HEALTH(Local_262.f_4[1], 0, 0);
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			if (!__LIB_2__::func_618(&uLocal_258) || __LIB_5__::func_51(&uLocal_258) < 2f)
			{
				return false;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[7 /*7*/].f_1, 1861.731f, -1829.771f, 42.0623f, 102.1073f, true, false, true);
			__LIB_12__::func_86(2);
			break;
		case 3:
			if (__LIB_4__::func_511())
			{
				if (!func_590(uParam1, 1858.133f, -1833.379f, 42.0006f, 70.7022f))
				{
					return false;
				}
				if (!func_338(301))
				{
					__LIB_13__::func_544(11);
					func_336(301, uParam1, 1, 1, 0, 0, 0, 0, 0);
					return false;
				}
				else if (!func_338(307))
				{
					func_336(307, uParam1, 1, 1, 0, 0, 0, 0, 0);
				}
				else
				{
					StringCopy(&(uParam1->f_2575), "RDTC2_RSC3A", 24);
					__LIB_13__::func_4(&(uParam1->f_206), &(uParam1->f_2575), 0, 1);
					__LIB_0__::func_7(&(uParam1->f_172), 16);
					__LIB_13__::func_544(12);
					return true;
				}
			}
			else
			{
				func_414();
				__LIB_13__::func_544(12);
				CLOCK::SET_CLOCK_TIME(12, 0, 0);
				if (!func_590(uParam1, 1858.133f, -1833.379f, 42.0006f, 70.7022f))
				{
					return false;
				}
				if (!func_338(0))
				{
					func_336(0, uParam1, 1, 1, 0, 0, 0, 0, 0);
					return false;
				}
				if (!func_338(301))
				{
					func_336(301, uParam1, 1, 1, 0, 0, 0, 0, 0);
					return false;
				}
				if (!__LIB_1__::func_22(0))
				{
					Local_81[3 /*7*/] = func_586(0, 1, 0, 1855.205f, -1829.618f, 42.5624f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
				{
					Local_81[3 /*7*/].f_1 = func_587(0, 1, 1, 0, 0, 1, 1, 1, 1, 1855.205f, -1829.618f, 42.5624f, 67f, 0, 0, 0, 0);
					return false;
				}
				__LIB_12__::func_875(uParam1, Local_81[3 /*7*/], "DUTCH", 1);
				if (__LIB_0__::func_866(0, 0))
				{
					__LIB_1__::func_640(0);
				}
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_81[3 /*7*/], true, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_81[3 /*7*/], false, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_81[3 /*7*/], joaat("REL_GANG_DUTCHS"));
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_81[3 /*7*/], false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[3 /*7*/], true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[3 /*7*/], 1893.108f, -1857.835f, 42.1741f, 208.1836f, true, false, true);
				PED::SET_PED_CONFIG_FLAG(Local_81[3 /*7*/], 167, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_81[3 /*7*/].f_1, 1855.205f, -1829.618f, 42.5624f, 67.12f, true, false, true);
				PED::_SET_PED_ON_MOUNT(Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, -1, true);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_81[3 /*7*/], 0f, 3f, 4, 2, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				if (!PED::IS_PED_INJURED(Local_262.f_3))
				{
					vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_262.f_3, true, false) };
					PED::_SET_PED_ON_MOUNT(Global_35, Local_262.f_3, -1, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_3, 1858.133f, -1833.379f, 42.0006f, 70.7022f, true, false, true);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_262.f_3, 48, true);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_262.f_3, 46, true);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("RDTC2_RESTART_4");
				__LIB_13__::func_33(uParam1, 4);
				__LIB_12__::func_86(3);
				__LIB_0__::func_326(4096);
				__LIB_11__::func_381(0);
				__LIB_4__::func_845(1, 0);
				if (__LIB_1__::func_198(joaat("CSTAG_FLOW_RDTC2_ACTIVE"), 1))
				{
					__LIB_1__::func_449(joaat("CSTAG_FLOW_RDTC2_ACTIVE"), 1, 0);
				}
				__LIB_13__::func_558(19, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(17, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(10, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(16, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(3, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(7, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(2, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
				__LIB_13__::func_558(18, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
			}
			__LIB_13__::func_544(12);
			break;
		case 4:
			if (!func_590(uParam1, 2280.6f, -1371.507f, 44.4519f, 252.6252f))
			{
				return false;
			}
			PED::_SET_PED_ON_MOUNT(Global_35, Local_262.f_3, -1, true);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
			{
				Local_81[3 /*7*/].f_1 = func_587(0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
				{
					ENTITY::SET_ENTITY_COORDS(Local_81[3 /*7*/].f_1, 2280.424f, -1368.961f, 44.3976f, true, false, true, true);
				}
				return false;
			}
			if (!__LIB_1__::func_22(0))
			{
				Local_81[3 /*7*/] = func_586(0, 1, 0, 2280.424f, -1368.961f, 44.3976f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				PED::_SET_PED_ON_MOUNT(Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, -1, true);
				__LIB_12__::func_875(uParam1, Local_81[3 /*7*/], "DUTCH", 1);
				return false;
			}
			if (!func_338(307))
			{
				__LIB_13__::func_544(12);
				func_336(307, uParam1, 1, 1, 0, 0, 0, 0, 0);
				return false;
			}
			else
			{
				__LIB_13__::func_544(14);
				return true;
			}
			break;
	}
	if (((((PED::_0xA0BC8FAED8CFEB3C(Global_35) && (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_3) || (ENTITY::DOES_ENTITY_EXIST(Local_262.f_3) && PED::_0xA0BC8FAED8CFEB3C(Local_262.f_3)))) && (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]) || (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]) && PED::_0xA0BC8FAED8CFEB3C(Local_81[3 /*7*/])))) && (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1) || (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1) && PED::_0xA0BC8FAED8CFEB3C(Local_81[3 /*7*/].f_1)))) && (!ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]) || (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]) && PED::_0xA0BC8FAED8CFEB3C(Local_81[7 /*7*/])))) && (!ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/].f_1) || (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/].f_1) && PED::_0xA0BC8FAED8CFEB3C(Local_81[7 /*7*/].f_1))))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
		{
			ENTITY::_0x9587913B9E772D29(Local_262.f_3, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
		{
			ENTITY::_0x9587913B9E772D29(Local_81[3 /*7*/].f_1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/].f_1))
		{
			ENTITY::_0x9587913B9E772D29(Local_81[7 /*7*/].f_1, 0);
		}
		return true;
	}
	return false;
}

bool func_306(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_634(uParam0))
		{
			return false;
		}
	}
	return true;
}

int func_312(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_8__::func_898(uParam4, 4);
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
				__LIB_8__::func_898(uParam4, 3);
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
				__LIB_5__::func_107(&(uParam4->f_1));
				__LIB_8__::func_898(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_2__::func_618(&(uParam4->f_1)))
				{
					__LIB_8__::func_901(&(uParam4->f_1), 0);
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_898(uParam4, 4);
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
						__LIB_8__::func_898(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_8__::func_898(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_898(uParam4, 4);
			}
			break;
		case 3:
			func_658(uParam4);
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
					__LIB_5__::func_107(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_898(uParam4, 4);
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
				__LIB_13__::func_512(uParam4);
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
						__LIB_5__::func_107(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_898(uParam4, 4);
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
				__LIB_13__::func_512(uParam4);
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
						__LIB_8__::func_898(uParam4, 3);
					}
					else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_898(uParam4, 3);
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
			__LIB_8__::func_898(uParam4, 4);
			break;
	}
	return 0;
}

bool func_324(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_14__::func_99(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
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
				__LIB_12__::func_914(uParam0);
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
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_18__::func_757(uParam0, iParam5);
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
			__LIB_13__::func_374(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_5__::func_107(&(uParam0->f_1768));
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
			if (uParam0->f_1581 >= 0 || __LIB_5__::func_53(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_13__::func_363(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_5__::func_107(&(uParam0->f_1768));
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
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_13__::func_363(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_326(var uParam0)
{
	int iVar0;
	switch (iLocal_78)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (!MISC::IS_BIT_SET(iLocal_1030, 0))
			{
				iVar0 = 0;
				while (iVar0 < Local_194)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_194[iVar0 /*7*/]) && ENTITY::IS_ENTITY_DEAD(Local_194[iVar0 /*7*/]))
					{
						if (!MISC::IS_BIT_SET(iLocal_232, iVar0))
						{
							if (__LIB_2__::func_901(Local_194[iVar0 /*7*/], Global_35))
							{
								iLocal_233++;
								iLocal_230 = iVar0;
							}
							else
							{
								iLocal_231 = iVar0;
							}
							MISC::SET_BIT(&iLocal_232, iVar0);
						}
					}
					iVar0++;
				}
				if (iLocal_233 == 5)
				{
					__LIB_12__::func_967(uParam0, joaat("RDTC2_KILLALLSBELLE"));
					MISC::SET_BIT(&iLocal_1030, 0);
				}
			}
			break;
		case 9:
		case 10:
		case 11:
			if (!bLocal_1041)
			{
				if (!bLocal_1042)
				{
					SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
					bLocal_1042 = true;
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_442))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_442, false))
					{
						SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
						bLocal_1041 = true;
					}
				}
			}
			break;
	}
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (MAP::DOES_BLIP_EXIST(__LIB_4__::func_244(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = __LIB_4__::func_244(iParam0);
		func_721(iParam0, &iVar1);
		return iVar1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iVar0)))
		{
		}
		iVar1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iVar0);
		Global_1360165[iParam0 /*1157*/].f_2 = iVar1;
		func_721(iParam0, &iVar1);
	}
	return iVar1;
}

void func_330(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	iVar12 = 0;
	while (iVar12 < 27)
	{
		uParam0->f_13[iVar12 /*12*/] = { Var0 };
		iVar12++;
	}
}

void func_334(int iParam0)
{
	if (!vLocal_716[iParam0 /*3*/] && !vLocal_716[iParam0 /*3*/].f_1)
	{
		switch (iParam0)
		{
			case 9:
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_21, true, 0) && __LIB_0__::func_665(Global_35, Local_81[7 /*7*/], 1, 1) < 10f)
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 10:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_36, true, 0) && __LIB_0__::func_665(Global_35, Local_81[7 /*7*/], 1, 1) < 20f)
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 11:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_22, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 12:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_23, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_13, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 13:
				if (func_338(17))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 14:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_59, true, 0) && func_338(17))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				if (!PED::IS_PED_ON_MOUNT(Global_35) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_59, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 15:
				if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), 1898.05f, -1852.52f, 44.1366f, 1) < 150f)
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 16:
				if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 17:
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 20:
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_262.f_3))
					{
						if (__LIB_0__::func_665(Global_35, Local_262.f_3, 1, 1) < 2f)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 21:
				if (func_337(41))
				{
					if (iLocal_231 == 4 && iLocal_230 != 4)
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 18:
				if (func_338(3) && !func_337(23))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 19:
				if (!PED::IS_PED_ON_MOUNT(Global_35) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_59, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				if (func_337(23))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				if (func_338(118))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				else if (func_727(118))
				{
					if (AUDIO::_0xD89504D9D7D5057D("DCH2ARRIVE") && AUDIO::_0x1ECC76792F661CF5("DCH2ARRIVE"))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DCH2ARRIVE") == 2)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 22:
				if (func_337(40))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 23:
				if (func_337(24) || func_337(25))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 24:
				if (ENTITY::DOES_ENTITY_EXIST(Local_194[0 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(Local_194[1 /*7*/]))
				{
					if (((((PED::IS_PED_IN_COMBAT(Local_194[0 /*7*/], 0) || PED::IS_PED_IN_COMBAT(Local_194[1 /*7*/], 0)) || PED::IS_PED_INJURED(Local_194[0 /*7*/])) || PED::IS_PED_INJURED(Local_194[1 /*7*/])) || (PED::IS_PED_SHOOTING(Global_35) && __LIB_0__::func_665(Global_35, Local_194[0 /*7*/], 1, 1) < 50f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_194[0 /*7*/], false, false), 10f, true))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 25:
				if ((((func_728(6f, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_13, true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_43, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_4, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_4, true, 0))
				{
					if (!func_337(24))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 26:
				if (ENTITY::DOES_ENTITY_EXIST(Local_194[0 /*7*/]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[0 /*7*/]) != 0 && !ENTITY::IS_ENTITY_IN_VOLUME(Local_194[0 /*7*/], Local_14.f_62, true, 0)))
					{
						if (ENTITY::IS_ENTITY_DEAD(Local_194[1 /*7*/]))
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 29:
				if (!func_337(26))
				{
					if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_24, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_4, true, 0)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 30:
				if (((func_729(120) == 5 && (AUDIO::_0xD89504D9D7D5057D("DCH2ARRIVE") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DCH2_AFTKILL") == 1)) || func_338(120)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 42:
				if (func_730(116, 1, 2, 3, -1))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 43:
				if (func_730(116, 5, 6, 7, -1))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 45:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1018))
				{
					if (func_731(joaat("P_SIDETABLE02X"), 1899.39f, -1858.81f, 46.34f, &iLocal_1018, 0, 0, 0, 0))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 46:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_12, true, 0))
				{
					if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_479, false) && ENTITY::IS_ENTITY_DEAD(Local_194[4 /*7*/])) && !__LIB_2__::func_901(Local_194[4 /*7*/], Global_35))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 49:
				if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_19, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_38, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_8, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 50:
				if (func_338(0))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_52, true, 0))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 51:
				if ((ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_17, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_9, true, 0)) || (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_12, true, 0) && (__LIB_2__::func_986(58833085) || __LIB_2__::func_986(-629053815))))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 41:
				if (func_337(42) && func_337(43))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 52:
				if (func_338(124) && ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 54:
				if (func_337(72))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_51, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_51, true, 0))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 55:
				if ((func_337(72) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_16, true, 0)) && __LIB_0__::func_665(Global_35, Local_81[7 /*7*/], 1, 1) < 10f)
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 60:
				if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[1]))
				{
					if (ENTITY::_0x61914209C36EFDDB(Local_262.f_4[1]) == 0 || ENTITY::_0x61914209C36EFDDB(Local_262.f_4[1]) == 3)
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_262.f_4[1], Local_14.f_16, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(Local_262.f_4[1]))
							{
								if (ENTITY::GET_ENTITY_HEIGHT(Local_262.f_4[1], ENTITY::GET_ENTITY_COORDS(Local_262.f_4[1], false, false), true, true) < 40.9f)
								{
									vLocal_716[iParam0 /*3*/] = 1;
								}
							}
						}
					}
				}
				break;
			case 64:
				if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[0]))
				{
					if (ENTITY::_0x61914209C36EFDDB(Local_262.f_4[0]) == 0)
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_262.f_4[0], Local_14.f_16, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(Local_262.f_4[0]))
							{
								ENTITY::_0x18FF3110CF47115D(Local_262.f_4[0], 7, 0);
								vLocal_716[iParam0 /*3*/] = 1;
							}
						}
					}
				}
				break;
			case 61:
				if (func_337(60) || func_337(64))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 62:
				if (func_337(60) && func_337(64))
				{
					if (!__LIB_6__::func_904())
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 63:
				if (func_337(72))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 65:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_28, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_28, true, 0))
				{
					if (func_337(72))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 71:
				if (__LIB_8__::func_684("DCH2_JOHNGOES"))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DCH2_JOHNGOES") == 1)
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 73:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_15, true, 0) && func_337(72))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 74:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1891.902f, -1858.61f, 42.179f, 1.5f, 1.5f, 2f, false, true, 0) && func_337(72))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 76:
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_81[3 /*7*/], Local_262, 3f, 3f, 2f, false, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_30, true, 0)) && func_337(3))
				{
					if (!__LIB_2__::func_618(&uLocal_249))
					{
						__LIB_8__::func_901(&uLocal_249, 0);
					}
					else if (((ENTITY::GET_ENTITY_SPEED(Local_81[3 /*7*/].f_1) < 1f && ENTITY::GET_ENTITY_SPEED(Local_262.f_3) < 2f) && __LIB_5__::func_51(&uLocal_249) > 1f) || __LIB_5__::func_51(&uLocal_249) > 3f)
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 77:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_54, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 78:
				if (func_735() == 11 || func_735() == 12)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 79:
				if (iLocal_1025 != 0 && iLocal_1025 != Local_262.f_4[1])
				{
					if (ENTITY::_0x61914209C36EFDDB(iLocal_1025) == 0 || ENTITY::_0x61914209C36EFDDB(iLocal_1025) == 3)
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_1025, Local_14.f_16, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(iLocal_1025))
							{
								if (ENTITY::GET_ENTITY_HEIGHT(iLocal_1025, ENTITY::GET_ENTITY_COORDS(iLocal_1025, false, false), true, true) < 40.9f)
								{
									vLocal_716[iParam0 /*3*/] = 1;
								}
							}
						}
					}
				}
				break;
			case 47:
				if (!func_337(80))
				{
					if (!func_338(117))
					{
						if (!__LIB_6__::func_904())
						{
							if (func_337(26) && func_728(4f, 1))
							{
								if (!func_337(39) && !func_337(40))
								{
									if (func_338(119))
									{
										vLocal_716[iParam0 /*3*/] = 1;
									}
								}
							}
						}
					}
				}
				break;
			case 48:
				if (!MISC::IS_BIT_SET(vLocal_716[iParam0 /*3*/].f_2, 0))
				{
					if (((AUDIO::_0x1ECC76792F661CF5("DCH2_RSC1_IG0") || __LIB_0__::func_255(Local_194[0 /*7*/], 0)) || __LIB_0__::func_255(Local_194[1 /*7*/], 0)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[0 /*7*/]) != 0)
					{
						MISC::SET_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
					}
				}
				else if ((func_337(23) && func_728(4f, 1)) && !AUDIO::_0x1ECC76792F661CF5("DCH2_RSC1_IG0"))
				{
					if (!func_337(39) && !func_337(40))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 57:
				if (func_337(72))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 4:
				if (func_338(20) && !__LIB_6__::func_904())
				{
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(9)))
					{
						if (__LIB_0__::func_665(Global_35, __LIB_0__::func_167(9), 1, 1) < 6f)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 5:
				if (func_338(20) && !__LIB_6__::func_904())
				{
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(11)))
					{
						if (__LIB_0__::func_665(Global_35, __LIB_0__::func_167(11), 1, 1) < 6f)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 6:
				if (func_338(20) && !__LIB_6__::func_904())
				{
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(2)))
					{
						if (__LIB_0__::func_665(Global_35, __LIB_0__::func_167(2), 1, 1) < 6f)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 7:
				if (func_338(20) && !__LIB_6__::func_904())
				{
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(0)))
					{
						if (__LIB_0__::func_665(Global_35, __LIB_0__::func_167(0), 1, 1) < 6f)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
			case 81:
				if (!func_337(40) && !func_337(39))
				{
					if (__LIB_0__::func_255(Local_194[2 /*7*/], 0))
					{
						if (!__LIB_2__::func_901(Local_194[2 /*7*/], Global_35))
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
				}
				break;
		}
	}
}

void func_335(int iParam0)
{
	if (!vLocal_716[iParam0 /*3*/].f_1)
	{
		switch (iParam0)
		{
			case 2:
				if (iLocal_78 != iLocal_79)
				{
					iLocal_79 = iLocal_78;
					vLocal_716[iParam0 /*3*/] = 1;
				}
				else
				{
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 82:
				if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, Local_14.f_27))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				else
				{
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 3:
				if (func_736())
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				else
				{
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 44:
				vLocal_716[iParam0 /*3*/] = 0;
				if (!__LIB_0__::func_255(Local_194[2 /*7*/], 0) && !PED::IS_PED_RAGDOLL(Local_194[2 /*7*/]))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_445))
					{
						if (!MISC::IS_BIT_SET(vLocal_716[iParam0 /*3*/].f_2, 0))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_445, false))
							{
								MISC::SET_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
							}
						}
						else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_445, false))
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_3, true, 0))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 8:
				vLocal_716[iParam0 /*3*/] = 0;
				if (func_337(16) && !func_337(17))
				{
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						func_737(1, 12, 8, 1086324736 /* Float: 6f */, 1086324736 /* Float: 6f */);
					}
					else
					{
						func_738(1);
					}
				}
				break;
			case 27:
				vLocal_716[iParam0 /*3*/] = 0;
				if (!MISC::IS_BIT_SET(vLocal_716[28 /*3*/].f_2, 0))
				{
					if (func_338(120))
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
						{
							func_737(4, 121, iParam0, 15f, 15f);
						}
						else
						{
							func_738(4);
						}
					}
				}
				break;
			case 28:
				vLocal_716[iParam0 /*3*/] = 0;
				if (!MISC::IS_BIT_SET(vLocal_716[iParam0 /*3*/].f_2, 0))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
					{
						MISC::SET_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
					}
				}
				else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
				{
					func_737(5, 122, iParam0, 1086324736 /* Float: 6f */, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_738(5);
				}
				break;
			case 39:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_26, true, 0))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
					else
					{
						vLocal_716[iParam0 /*3*/] = 0;
					}
				}
				else
				{
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 40:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_26, true, 0))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
					else
					{
						vLocal_716[iParam0 /*3*/] = 0;
					}
				}
				else
				{
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 80:
				if (!__LIB_1__::func_205(Global_35, Local_14.f_42, 1, 0))
				{
					if (fLocal_1029 == 0f)
					{
						fLocal_1029 = __LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_14.f_42), 1);
						func_738(7);
						vLocal_716[iParam0 /*3*/] = 0;
					}
					else if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_14.f_42), 1) > (fLocal_1029 + 15f))
					{
						func_737(7, 141, iParam0, 1f, 10f);
					}
					else if (vLocal_716[iParam0 /*3*/])
					{
						fLocal_1029 = 0f;
						vLocal_716[iParam0 /*3*/] = 0;
						func_738(7);
					}
				}
				else
				{
					func_738(7);
					vLocal_716[iParam0 /*3*/] = 0;
					fLocal_1029 = 0f;
				}
				break;
			case 56:
				vLocal_716[iParam0 /*3*/] = 0;
				if (func_729(204) == 5 || func_338(204))
				{
					if (!PED::_IS_PED_CARRYING(Global_35))
					{
						if (!__LIB_2__::func_618(&uLocal_482))
						{
							__LIB_8__::func_901(&uLocal_482, 1);
						}
						else if (__LIB_5__::func_51(&uLocal_482) > 1.5f)
						{
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
					else
					{
						__LIB_2__::func_608(&uLocal_482);
					}
				}
				break;
			case 59:
				vLocal_716[iParam0 /*3*/] = 0;
				if ((func_337(63) && !func_337(72)) && !func_337(79))
				{
					if (!__LIB_2__::func_618(&uLocal_482))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_1025, 0))
						{
							__LIB_8__::func_901(&uLocal_482, 1);
						}
					}
					else if (__LIB_5__::func_51(&uLocal_482) > 1.5f)
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				else
				{
					__LIB_2__::func_608(&uLocal_482);
				}
				break;
			case 58:
				vLocal_716[iParam0 /*3*/] = 0;
				if (func_338(207))
				{
					if (func_337(72))
					{
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
			case 31:
				vLocal_716[iParam0 /*3*/] = 0;
				if ((func_337(39) && func_337(42)) && !func_337(43))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 32:
				vLocal_716[iParam0 /*3*/] = 0;
				if ((func_337(40) && func_337(43)) && !func_337(42))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 33:
				if (func_338(120))
				{
					if (((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_26, true, 0)) && func_729(123) != 5) && !func_338(123))
					{
						if (!__LIB_2__::func_618(&uLocal_252) && !__LIB_5__::func_463())
						{
							Local_485[func_740(126) /*5*/].f_2 = 0;
							__LIB_5__::func_107(&uLocal_252);
							iLocal_261 = MISC::GET_RANDOM_INT_IN_RANGE(8, 12);
						}
						if (__LIB_0__::func_272(Local_194[2 /*7*/], 0) && ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_445) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_445, false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_445, "pbl_idle_loop")))
						{
							if (!__LIB_5__::func_463() && __LIB_5__::func_53(&uLocal_252) > IntToFloat(iLocal_261))
							{
								__LIB_2__::func_608(&uLocal_252);
								vLocal_716[iParam0 /*3*/] = 1;
							}
							else
							{
								vLocal_716[iParam0 /*3*/] = 0;
							}
						}
						else
						{
							vLocal_716[iParam0 /*3*/] = 0;
						}
					}
					else
					{
						vLocal_716[iParam0 /*3*/] = 0;
					}
				}
				break;
			case 34:
				if (func_338(136))
				{
					if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_26, true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_57, true, 0))
					{
						if (((((__LIB_0__::func_272(Local_194[3 /*7*/], 0) && func_338(123)) && func_338(114)) && Local_194[3 /*7*/].f_6 <= 12) || __LIB_0__::func_255(Local_194[2 /*7*/], 0)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[2 /*7*/]) == 0)
						{
							if (!__LIB_2__::func_618(&uLocal_252) && !__LIB_6__::func_904())
							{
								func_741(127);
								__LIB_5__::func_107(&uLocal_252);
								iLocal_261 = MISC::GET_RANDOM_INT_IN_RANGE(8, 12);
							}
							if (!__LIB_6__::func_904())
							{
								if (__LIB_5__::func_53(&uLocal_252) > IntToFloat(iLocal_261))
								{
									__LIB_2__::func_608(&uLocal_252);
									vLocal_716[iParam0 /*3*/] = 1;
								}
							}
							else
							{
								__LIB_2__::func_608(&uLocal_252);
								vLocal_716[iParam0 /*3*/] = 0;
							}
						}
						else
						{
							vLocal_716[iParam0 /*3*/] = 0;
						}
					}
					else
					{
						vLocal_716[iParam0 /*3*/] = 0;
					}
				}
				break;
			case 35:
				if (func_338(136))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_26, true, 0))
					{
						if ((__LIB_0__::func_272(Local_194[0 /*7*/], 0) && func_338(123)) && (!__LIB_0__::func_272(Local_194[3 /*7*/], 0) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_38, true, 0)))
						{
							if (!__LIB_2__::func_618(&uLocal_252) && !__LIB_6__::func_904())
							{
								Local_485[func_740(128) /*5*/].f_2 = 0;
								__LIB_5__::func_107(&uLocal_252);
								iLocal_261 = MISC::GET_RANDOM_INT_IN_RANGE(8, 12);
							}
							if (!__LIB_6__::func_904())
							{
								if (__LIB_5__::func_53(&uLocal_252) > IntToFloat(iLocal_261))
								{
									__LIB_2__::func_608(&uLocal_252);
									vLocal_716[iParam0 /*3*/] = 1;
								}
							}
							else
							{
								__LIB_2__::func_608(&uLocal_252);
								vLocal_716[iParam0 /*3*/] = 0;
							}
						}
						else
						{
							vLocal_716[iParam0 /*3*/] = 0;
						}
					}
					else
					{
						vLocal_716[iParam0 /*3*/] = 0;
					}
				}
				break;
			case 36:
				if (!func_337(41))
				{
					if (!vLocal_716[iParam0 /*3*/])
					{
						if (!MISC::IS_BIT_SET(vLocal_716[iParam0 /*3*/].f_2, 0))
						{
							if ((__LIB_8__::func_684("DCH2ENEMYA") || __LIB_8__::func_684("DCH2ENEMYB")) || __LIB_8__::func_684("DCH2ENEMYC"))
							{
								MISC::SET_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
							}
						}
						else if (!__LIB_6__::func_904())
						{
							Local_485[func_740(137) /*5*/].f_2 = 0;
							vLocal_716[iParam0 /*3*/] = 1;
						}
					}
					else if (__LIB_8__::func_684("DCH2_ARESP"))
					{
						MISC::CLEAR_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
						vLocal_716[iParam0 /*3*/] = 0;
					}
				}
				break;
			case 37:
				if (!vLocal_716[iParam0 /*3*/])
				{
					if (!MISC::IS_BIT_SET(vLocal_716[iParam0 /*3*/].f_2, 0))
					{
						if (((((__LIB_8__::func_684("DCH2_RSC1_IG2A") || __LIB_8__::func_684("DCH2_RSC1_IG2B")) || __LIB_8__::func_684("DCH2_RSC1_IG2C")) || __LIB_8__::func_684("DCH2_RSC1_IG2D")) || __LIB_8__::func_684("DCH2_RSC1_IG2E")) || __LIB_8__::func_684("DCH2_RCS1_IG2H"))
						{
							MISC::SET_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
						}
					}
					else if (((((!__LIB_8__::func_684("DCH2_RSC1_IG2A") && !__LIB_8__::func_684("DCH2_RSC1_IG2B")) && !__LIB_8__::func_684("DCH2_RSC1_IG2C")) && !__LIB_8__::func_684("DCH2_RSC1_IG2D")) && !__LIB_8__::func_684("DCH2_RSC1_IG2E")) && !__LIB_8__::func_684("DCH2_RCS1_IG2H"))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(Local_194[3 /*7*/]) && __LIB_0__::func_94(Global_35, 1900.576f, -1866.005f, 46.35418f, 0) > 3.5f) && !func_337(50))
						{
							Local_485[func_740(138) /*5*/].f_2 = 0;
							vLocal_716[iParam0 /*3*/] = 1;
						}
						else
						{
							MISC::CLEAR_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
						}
					}
				}
				else if (__LIB_8__::func_684("DCH2_KNIFE"))
				{
					MISC::CLEAR_BIT(&(vLocal_716[iParam0 /*3*/].f_2), 0);
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 38:
				vLocal_716[iParam0 /*3*/] = 0;
				if (func_337(41) && func_337(40))
				{
					func_737(6, 125, iParam0, 5f, 8f);
				}
				else
				{
					func_738(6);
				}
				break;
			case 75:
				vLocal_716[iParam0 /*3*/] = 0;
				if (PED::GET_MOUNT(Global_35) != __LIB_0__::func_398(7))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 66:
				vLocal_716[iParam0 /*3*/] = 0;
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_16, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 67:
				vLocal_716[iParam0 /*3*/] = 0;
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_35, true, 0))
				{
					vLocal_716[iParam0 /*3*/] = 1;
				}
				break;
			case 68:
				vLocal_716[iParam0 /*3*/] = 0;
				if (func_337(56) && !__LIB_6__::func_904())
				{
					func_737(10, 205, iParam0, 1086324736 /* Float: 6f */, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_738(10);
				}
				break;
			case 70:
				vLocal_716[iParam0 /*3*/] = 0;
				if ((!func_337(56) && !__LIB_2__::func_365(Global_35)) && Local_81[7 /*7*/].f_6 == 2)
				{
					func_737(9, 209, iParam0, 1086324736 /* Float: 6f */, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_738(9);
				}
				break;
			case 69:
				vLocal_716[iParam0 /*3*/] = 0;
				if (func_337(64))
				{
					func_737(11, 210, iParam0, 1086324736 /* Float: 6f */, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_738(11);
				}
				break;
			case 53:
				if (MISC::_0x7A76104CC2CC69E8(Local_262.f_4[0], 1, 1))
				{
					vLocal_716[iParam0 /*3*/] = 1;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_262.f_4[0]);
				}
				else
				{
					vLocal_716[iParam0 /*3*/] = 0;
				}
				break;
			case 72:
				vLocal_716[iParam0 /*3*/] = 0;
				if (PED::_IS_PED_CARRYING(Global_35))
				{
					if (__LIB_3__::func_649(Global_35, Local_194[0 /*7*/]))
					{
						iLocal_1025 = Local_194[0 /*7*/];
						vLocal_716[iParam0 /*3*/] = 1;
					}
					if (__LIB_3__::func_649(Global_35, Local_194[1 /*7*/]))
					{
						iLocal_1025 = Local_194[1 /*7*/];
						vLocal_716[iParam0 /*3*/] = 1;
					}
					if (__LIB_3__::func_649(Global_35, Local_194[2 /*7*/]))
					{
						iLocal_1025 = Local_194[2 /*7*/];
						vLocal_716[iParam0 /*3*/] = 1;
					}
					if (__LIB_3__::func_649(Global_35, Local_194[3 /*7*/]))
					{
						iLocal_1025 = Local_194[3 /*7*/];
						vLocal_716[iParam0 /*3*/] = 1;
					}
					if (__LIB_3__::func_649(Global_35, Local_194[4 /*7*/]))
					{
						iLocal_1025 = Local_194[4 /*7*/];
						vLocal_716[iParam0 /*3*/] = 1;
					}
				}
				break;
		}
	}
}

void func_336(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	iVar0 = func_744(iParam0, iParam2, iParam3, iParam4, iParam5, iParam6, fParam7, iParam8);
	if (iVar0 != 3)
	{
		switch (iParam0)
		{
			case 0:
				func_746(iParam0, func_745(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 22:
				func_746(iParam0, func_747(iVar0));
				break;
			case 8:
				func_746(iParam0, func_748(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2), uParam1));
				break;
			case 1:
				func_746(iParam0, func_749(iVar0, uParam1));
				break;
			case 27:
				func_746(iParam0, func_750());
				break;
			case 28:
				func_746(iParam0, func_751());
				break;
			case 21:
				func_746(iParam0, func_752(iVar0));
				break;
			case 201:
				func_746(iParam0, func_753(iVar0));
				break;
			case 202:
				func_746(iParam0, func_754(iVar0));
				break;
			case 313:
				func_746(iParam0, func_755(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 2:
				func_746(iParam0, func_756(iVar0));
				break;
			case 3:
				func_746(iParam0, func_757(iVar0));
				break;
			case 4:
				func_746(iParam0, func_758(iVar0));
				break;
			case 5:
				func_746(iParam0, func_759(iVar0));
				break;
			case 6:
				func_746(iParam0, func_760(iVar0));
				break;
			case 7:
				func_746(iParam0, func_761(iVar0));
				break;
			case 11:
				func_746(iParam0, func_762(iVar0));
				break;
			case 117:
				func_746(iParam0, func_763(iVar0));
				break;
			case 203:
				func_746(iParam0, func_764(iVar0));
				break;
			case 215:
				func_746(iParam0, func_765(iVar0, &(Local_485[func_740(iParam0) /*5*/])));
				break;
			case 304:
				func_746(iParam0, func_766(iVar0));
				break;
			case 9:
				func_746(iParam0, func_767(iVar0));
				break;
			case 116:
				func_746(iParam0, func_768(iVar0, &(Local_485[func_740(iParam0) /*5*/])));
				break;
			case 135:
				func_746(iParam0, func_769());
				break;
			case 140:
				func_746(iParam0, func_770(iVar0));
				break;
			case 144:
				func_746(iParam0, func_771(iVar0));
				break;
			case 114:
				func_746(iParam0, func_772(iVar0, uParam1));
				break;
			case 112:
				func_746(iParam0, func_773(iVar0, uParam1));
				break;
			case 102:
				func_746(iParam0, func_774(iVar0, uParam1));
				break;
			case 113:
				func_746(iParam0, func_775(iVar0));
				break;
			case 115:
				func_746(iParam0, func_776(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 200:
				func_746(iParam0, func_777(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 305:
				func_746(iParam0, func_778(iVar0));
				break;
			case 301:
				func_746(iParam0, func_779(iVar0, uParam1));
				break;
			case 307:
				func_746(iParam0, func_780(iVar0, iParam0, uParam1));
				break;
			case 403:
				func_746(iParam0, func_781(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 408:
				func_746(iParam0, func_782(iVar0));
				break;
			case 410:
				func_746(iParam0, func_783(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 411:
				func_746(iParam0, func_784(iVar0));
				break;
			case 10:
				func_746(iParam0, func_785(iVar0));
				break;
			case 311:
				func_746(iParam0, func_786(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 400:
				func_746(iParam0, func_787(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2)));
				break;
			case 402:
				func_746(iParam0, func_788(iVar0, &(Local_485[func_740(iParam0) /*5*/].f_2), uParam1));
				break;
			case 401:
				func_746(iParam0, func_789(iVar0));
				break;
			case 312:
				func_746(iParam0, func_790(iVar0));
				break;
			case 45:
				func_746(iParam0, func_791(iVar0));
				break;
			case 12:
			case 13:
			case 14:
			case 15:
			case 18:
			case 20:
			case 23:
			case 24:
			case 118:
			case 121:
			case 122:
			case 123:
			case 124:
			case 125:
			case 126:
			case 127:
			case 128:
			case 134:
			case 136:
			case 137:
			case 138:
			case 139:
			case 141:
			case 142:
			case 204:
			case 205:
			case 206:
			case 207:
			case 208:
			case 209:
			case 210:
			case 308:
			case 406:
				func_746(iParam0, func_792(iVar0, iParam0, &(Local_485[func_740(iParam0) /*5*/].f_2), uParam1, 0, 0, 0));
				break;
			case 119:
			case 120:
				func_746(iParam0, func_792(iVar0, iParam0, &(Local_485[func_740(iParam0) /*5*/].f_2), uParam1, 1, 1, 0));
				break;
			case 17:
				func_746(iParam0, func_792(iVar0, iParam0, &(Local_485[func_740(iParam0) /*5*/].f_2), uParam1, 1, 1, 0));
				break;
			case 16:
			case 404:
				func_746(iParam0, func_792(iVar0, iParam0, &(Local_485[func_740(iParam0) /*5*/].f_2), uParam1, 0, 1, 1));
				break;
			case 19:
				if (PED::GET_MOUNT(Global_35) != __LIB_0__::func_398(7))
				{
					if (!MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 6))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_434))
						{
							MAP::REMOVE_BLIP(&iLocal_434);
						}
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_13__::func_89(uParam1, "DUTCH21_MNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_718(7);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 6);
						MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
					}
					else
					{
						Local_1048.f_1 = "DUTCH21_FA01";
						Local_1048 = "DUTCH21_REHR";
						iLocal_1051 = func_794(uParam1, &Local_1048, 0f, 0f, 0f, __LIB_0__::func_398(7), 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
						if (iLocal_1051 == 1)
						{
							if (func_337(14) || func_337(23))
							{
								iLocal_1051 = 2;
							}
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
						}
						else if (iLocal_1051 == 0)
						{
							if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 8))
							{
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_13__::func_89(uParam1, "DUTCH21_MNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
							}
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 7))
				{
					__LIB_1__::func_721(7);
					__LIB_0__::func_769();
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_13__::func_89(uParam1, "DUTCH21_DES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_12__::func_883(uParam1, "DUTCH21_DES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_434 = __LIB_8__::func_777(408396114, vLocal_235, 12f, 1);
					MAP::_BLIP_SET_MODIFIER(iLocal_434, -1878373110);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_434, "DUTCH22_BLIP_SBEL");
					MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 6);
				}
				else
				{
					Local_1048.f_1 = "DUTCH21_FA01";
					Local_1048 = "DUTCH21_RE";
					iLocal_1051 = func_794(uParam1, &Local_1048, 0f, 0f, 0f, Local_81[7 /*7*/], 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
					if (iLocal_1051 == 1)
					{
						if (!MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 8))
						{
							__LIB_0__::func_900(1);
							if (MAP::DOES_BLIP_EXIST(iLocal_434))
							{
								MAP::REMOVE_BLIP(&iLocal_434);
							}
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
						}
					}
					else if (iLocal_1051 == 0)
					{
						if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 8))
						{
							iLocal_434 = __LIB_8__::func_777(408396114, vLocal_235, 12f, 1);
							MAP::_BLIP_SET_MODIFIER(iLocal_434, -1878373110);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_434, "DUTCH22_BLIP_SBEL");
							__LIB_0__::func_769();
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_13__::func_89(uParam1, "DUTCH21_DES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_0__::func_745(1);
							MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
						}
					}
				}
				break;
			case 129:
				__LIB_13__::func_89(uParam1, "DUTCH21_ENT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_434, -1878373110);
				if (MAP::DOES_BLIP_EXIST(iLocal_434))
				{
					MAP::REMOVE_BLIP(&iLocal_434);
				}
				__LIB_1__::func_721(7);
				iLocal_435 = __LIB_4__::func_983(408396114, 1891.2f, -1857.9f, 42.5f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_435, "DUTCH22_BLIP_HOUSE");
				MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
				break;
			case 130:
				__LIB_12__::func_883(uParam1, "DUTCH21_PC04", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				MAP::REMOVE_BLIP(&iLocal_435);
				MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
				break;
			case 131:
				func_746(iParam0, func_798(uParam1, iVar0, iParam0));
				break;
			case 132:
				__LIB_12__::func_883(uParam1, "DUTCH21_PC05b", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
				break;
			case 133:
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_12__::func_883(uParam1, "DUTCH21_PC01", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_900(1);
				MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
				break;
			case 143:
				if (func_337(80))
				{
					if (!MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 9))
					{
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 9);
						if (!MAP::DOES_BLIP_EXIST(iLocal_435))
						{
							iLocal_435 = __LIB_4__::func_983(408396114, 1891.2f, -1857.9f, 42.5f, 1);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_435, "DUTCH22_BLIP_HOUSE");
						}
						else
						{
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 6);
						}
						if (MAP::DOES_BLIP_EXIST(Local_262.f_64[0]))
						{
							MAP::_BLIP_SET_MODIFIER(Local_262.f_64[0], -1186550032);
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
						}
						if (MAP::DOES_BLIP_EXIST(Local_262.f_64[1]))
						{
							MAP::_BLIP_SET_MODIFIER(Local_262.f_64[1], -1186550032);
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
						}
						if (MAP::DOES_BLIP_EXIST(Local_262.f_64[2]))
						{
							MAP::_BLIP_SET_MODIFIER(Local_262.f_64[2], -1186550032);
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
						}
						if (MAP::DOES_BLIP_EXIST(Local_262.f_64[3]))
						{
							MAP::_BLIP_SET_MODIFIER(Local_262.f_64[3], -1186550032);
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
						}
						if (MAP::DOES_BLIP_EXIST(Local_262.f_64[4]))
						{
							MAP::_BLIP_SET_MODIFIER(Local_262.f_64[4], -1186550032);
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
						}
						if (MAP::DOES_BLIP_EXIST(Local_262.f_64[5]))
						{
							MAP::_BLIP_SET_MODIFIER(Local_262.f_64[5], -1186550032);
							MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
						}
						__LIB_0__::func_769();
						__LIB_12__::func_883(uParam1, "DUTCH21_REHO", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_13__::func_89(uParam1, "DUTCH21_REHO", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				else
				{
					if (MAP::DOES_BLIP_EXIST(Local_262.f_64[0]))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_64[0], -1186550032);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
					}
					if (MAP::DOES_BLIP_EXIST(Local_262.f_64[1]))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_64[1], -1186550032);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
					}
					if (MAP::DOES_BLIP_EXIST(Local_262.f_64[2]))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_64[2], -1186550032);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
					}
					if (MAP::DOES_BLIP_EXIST(Local_262.f_64[3]))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_64[3], -1186550032);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
					}
					if (MAP::DOES_BLIP_EXIST(Local_262.f_64[4]))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_64[4], -1186550032);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
					}
					if (MAP::DOES_BLIP_EXIST(Local_262.f_64[5]))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_64[5], -1186550032);
						MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
					}
					if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 7) || MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 8))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_435))
						{
							MAP::REMOVE_BLIP(&iLocal_435);
						}
					}
					__LIB_0__::func_769();
					if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 6))
					{
						__LIB_13__::func_89(uParam1, "DUTCH21_ENT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 7))
					{
						__LIB_13__::func_89(uParam1, "DUTCH21_PC04", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 8))
					{
						__LIB_13__::func_89(uParam1, "DUTCH21_PC05", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 6);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 7);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 8);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 9);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 1);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 4);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
					MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 5);
				}
				break;
			case 211:
				func_746(iParam0, func_799(uParam1, iVar0, iParam0));
				break;
			case 212:
				func_746(iParam0, func_800(uParam1, iVar0, iParam0));
				break;
			case 213:
				func_746(iParam0, func_801(uParam1, iVar0, iParam0));
				break;
			case 309:
				func_746(iParam0, func_802(uParam1, iVar0));
				break;
			case 310:
				func_746(iParam0, func_803(uParam1, iVar0));
				break;
			case 214:
				func_746(iParam0, func_804(uParam1, iVar0, iParam0));
				break;
			case 216:
				func_746(iParam0, func_805(uParam1, iVar0, iParam0));
				break;
			case 405:
				func_746(iParam0, func_806(iVar0, uParam1, iParam0));
				break;
			case 409:
				func_746(iParam0, func_807(iVar0, uParam1, iParam0));
				break;
			default:
				break;
		}
	}
}

bool func_337(int iParam0)
{
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			return true;
		}
		if (vLocal_716[iParam0 /*3*/])
		{
			return true;
		}
	}
	return false;
}

bool func_338(int iParam0)
{
	if (Local_485[func_740(iParam0) /*5*/].f_3 == iParam0)
	{
		if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 2))
		{
			return true;
		}
	}
	return false;
}

void func_380(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_11__::func_422();
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
		iVar9 = func_837(iParam0, &iVar7, &iVar8);
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
				iVar10 = func_838(__LIB_0__::func_76(iParam0), &iVar11);
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
						func_846(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_846(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_846(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_846(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_846(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_846(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_846(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_846(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_846(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_846(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_846(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_846(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_846(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_848();
						func_849(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_846(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_380(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_380(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_380(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_846(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_846(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_884();
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
							func_846(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						Jump @6492; //curOff = 6470
						iVar20 = 0;
						Jump @6492; //curOff = 6476
						iVar20 = 12;
						Jump @6492; //curOff = 6483
						iVar20 = 0;
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
void func_381(int iParam0, bool bParam1)
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

void func_413()
{
	VOLUME::_DELETE_VOLUME(Local_14);
	VOLUME::_DELETE_VOLUME(Local_14.f_1);
	VOLUME::_DELETE_VOLUME(Local_14.f_2);
	VOLUME::_DELETE_VOLUME(Local_14.f_3);
	VOLUME::_DELETE_VOLUME(Local_14.f_4);
	VOLUME::_DELETE_VOLUME(Local_14.f_5);
	VOLUME::_DELETE_VOLUME(Local_14.f_6);
	VOLUME::_DELETE_VOLUME(Local_14.f_7);
	VOLUME::_DELETE_VOLUME(Local_14.f_8);
	VOLUME::_DELETE_VOLUME(Local_14.f_9);
	VOLUME::_DELETE_VOLUME(Local_14.f_10);
	VOLUME::_DELETE_VOLUME(Local_14.f_11);
	VOLUME::_DELETE_VOLUME(Local_14.f_12);
	VOLUME::_DELETE_VOLUME(Local_14.f_13);
	VOLUME::_DELETE_VOLUME(Local_14.f_14);
	VOLUME::_DELETE_VOLUME(Local_14.f_15);
	VOLUME::_DELETE_VOLUME(Local_14.f_16);
	VOLUME::_DELETE_VOLUME(Local_14.f_17);
	VOLUME::_DELETE_VOLUME(Local_14.f_18);
	VOLUME::_DELETE_VOLUME(Local_14.f_19);
	VOLUME::_DELETE_VOLUME(Local_14.f_20);
	VOLUME::_DELETE_VOLUME(Local_14.f_21);
	VOLUME::_DELETE_VOLUME(Local_14.f_22);
	VOLUME::_DELETE_VOLUME(Local_14.f_23);
	VOLUME::_DELETE_VOLUME(Local_14.f_24);
	VOLUME::_DELETE_VOLUME(Local_14.f_25);
	VOLUME::_DELETE_VOLUME(Local_14.f_26);
	VOLUME::_DELETE_VOLUME(Local_14.f_27);
	VOLUME::_DELETE_VOLUME(Local_14.f_28);
	VOLUME::_DELETE_VOLUME(Local_14.f_29);
	VOLUME::_DELETE_VOLUME(Local_14.f_30);
	VOLUME::_DELETE_VOLUME(Local_14.f_31);
	VOLUME::_DELETE_VOLUME(Local_14.f_32);
	VOLUME::_DELETE_VOLUME(Local_14.f_33);
	VOLUME::_DELETE_VOLUME(Local_14.f_34);
	VOLUME::_DELETE_VOLUME(Local_14.f_35);
	VOLUME::_DELETE_VOLUME(Local_14.f_36);
	VOLUME::_DELETE_VOLUME(Local_14.f_37);
	VOLUME::_DELETE_VOLUME(Local_14.f_38);
	VOLUME::_DELETE_VOLUME(Local_14.f_39);
	VOLUME::_DELETE_VOLUME(Local_14.f_40);
	VOLUME::_DELETE_VOLUME(Local_14.f_41);
	VOLUME::_DELETE_VOLUME(Local_14.f_42);
	VOLUME::_DELETE_VOLUME(Local_14.f_43);
	VOLUME::_DELETE_VOLUME(Local_14.f_44);
	VOLUME::_DELETE_VOLUME(Local_14.f_45);
	VOLUME::_DELETE_VOLUME(Local_14.f_46);
	VOLUME::_DELETE_VOLUME(Local_14.f_47);
	VOLUME::_DELETE_VOLUME(Local_14.f_48);
	VOLUME::_DELETE_VOLUME(Local_14.f_49);
	VOLUME::_DELETE_VOLUME(Local_14.f_50);
	VOLUME::_DELETE_VOLUME(Local_14.f_51);
	VOLUME::_DELETE_VOLUME(Local_14.f_52);
	VOLUME::_DELETE_VOLUME(Local_14.f_53);
	VOLUME::_DELETE_VOLUME(Local_14.f_54);
	VOLUME::_DELETE_VOLUME(Local_14.f_55);
	VOLUME::_DELETE_VOLUME(Local_14.f_56);
	VOLUME::_DELETE_VOLUME(Local_14.f_57);
	VOLUME::_DELETE_VOLUME(Local_14.f_58);
	VOLUME::_DELETE_VOLUME(Local_14.f_59);
	VOLUME::_DELETE_VOLUME(Local_14.f_60);
	VOLUME::_DELETE_VOLUME(Local_14.f_61);
	VOLUME::_DELETE_VOLUME(Local_14.f_62);
	VOLUME::_DELETE_VOLUME(Local_14.f_63);
}

void func_414()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_13))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_13);
		POPULATION::_0xA1CFB35069D23C23(Local_14.f_13);
	}
}

void func_415()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_365)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_365[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_365[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_TABLE39X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_COUCH08X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATEBRAND01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BOOKCASE05X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIRCOMFY02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIRCOMFY11X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BARREL05B"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_NEWSPAPERSTACK01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATETNT03X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_SHUTTER01WOOD"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_SIDETABLE02X"));
}

void func_416()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_7) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_7, true))
	{
		PED::DELETE_PED(&(Local_262.f_7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_8) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_8, true))
	{
		PED::DELETE_PED(&(Local_262.f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_9) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_9, true))
	{
		PED::DELETE_PED(&(Local_262.f_9));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_10) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_10, true))
	{
		PED::DELETE_PED(&(Local_262.f_10));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_17) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_17, true))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_262.f_17));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_18) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_18, true))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_262.f_18));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_19) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_262.f_19, true))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_262.f_19));
	}
}

void func_417(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_22(iVar0))
		{
			__LIB_13__::func_558(iVar0, bParam1, bParam2, bParam0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_421(int iParam0, bool bParam1, bool bParam2)
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
	func_380(iVar0, 1, bParam1, 0, 1);
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
			__LIB_9__::func_645(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

int func_503(int iParam0, int iParam1)
{
	var uVar0;
	return func_1005(&uVar0, iParam0, iParam1);
}

int func_586(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
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
						__LIB_13__::func_558(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_1059(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

int func_587(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1068(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_590(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
	{
		if (func_1073(uParam0, &(Local_262.f_3), vParam1, fParam4, 1, 1, 1, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_262.f_3))
			{
				PED::SET_PED_CONFIG_FLAG(Local_262.f_3, 284, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_262.f_3, 48, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_262.f_3, 46, true);
				TASK::TASK_STAND_STILL(Local_262.f_3, -1);
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (__LIB_0__::func_94(Local_262.f_3, vParam1, 1) > 10f)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_3, vParam1, fParam4, true, false, true);
		}
		if (PED::_0x33FA048675821DA7(Local_262.f_3, 3))
		{
			PED::_0x06D26A96CA1BCA75(Local_262.f_3, 3, 0f, 0);
		}
		return true;
	}
	return true;
}

void func_601(bool bParam0)
{
	__LIB_1__::func_272(bParam0);
	__LIB_1__::func_273(bParam0);
	__LIB_1__::func_274(bParam0);
	__LIB_1__::func_275(bParam0);
	__LIB_1__::func_276(bParam0);
	__LIB_1__::func_277(bParam0);
	__LIB_1__::func_278(bParam0);
	func_1086(bParam0);
}

void func_628(int iParam0)
{
	if (Local_485[func_740(iParam0) /*5*/].f_3 != iParam0)
	{
		Local_485[func_740(iParam0) /*5*/].f_3 = iParam0;
		func_741(iParam0);
	}
	MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
	MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
}

int func_631(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iLocal_363 != MISC::GET_FRAME_COUNT() || bParam8)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_194[iParam0 /*7*/]))
		{
			if (iParam0 == 4)
			{
				Local_194[iParam0 /*7*/] = __LIB_8__::func_931(joaat("G_M_O_UNIEXCONFEDS_01"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_194[iParam0 /*7*/], 1803220758);
				iParam5 = joaat("WEAPON_UNARMED");
				__LIB_2__::func_279(Local_194[iParam0 /*7*/], 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_194[iParam0 /*7*/], true, true);
				__LIB_0__::func_169(Local_194[iParam0 /*7*/], 0, 1);
			}
			else
			{
				Local_194[iParam0 /*7*/] = __LIB_8__::func_931(joaat("G_M_Y_UNIEXCONFEDS_01"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (iParam0 == 2)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_194[iParam0 /*7*/], 443515196);
				}
				if (iParam0 == 0)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_194[iParam0 /*7*/], 1293313673);
				}
				if (iParam0 == 1)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_194[iParam0 /*7*/], -954246503);
				}
				if (iParam0 == 3)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_194[iParam0 /*7*/], -118014388);
				}
				if (iParam0 == 2)
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_194[iParam0 /*7*/], true, true);
					__LIB_4__::func_7(Local_194[iParam0 /*7*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else if (iParam0 == 1)
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_194[iParam0 /*7*/], true, true);
				}
			}
			if (bParam7)
			{
				MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[iParam0 /*7*/]);
				__LIB_3__::func_356(Local_194[iParam0 /*7*/], -1034486097, 1);
			}
			if (iParam5 != joaat("WEAPON_UNARMED"))
			{
				if (bParam9)
				{
					__LIB_4__::func_7(Local_194[iParam0 /*7*/], iParam5, 0, 16, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_194[iParam0 /*7*/], iParam5, true, 0, true, false);
				}
				else
				{
					__LIB_4__::func_7(Local_194[iParam0 /*7*/], iParam5, 0, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				WEAPON::SET_PED_INFINITE_AMMO(Local_194[iParam0 /*7*/], true, 0);
			}
			if (iParam0 != 4)
			{
				__LIB_3__::func_459(Local_194[iParam0 /*7*/], 0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_194[iParam0 /*7*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_HEARING_RANGE(Local_194[iParam0 /*7*/], 200f);
			PED::SET_PED_SEEING_RANGE(Local_194[iParam0 /*7*/], 200f);
			PED::SET_PED_ID_RANGE(Local_194[iParam0 /*7*/], 200f);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_194[iParam0 /*7*/], 200f);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_194[iParam0 /*7*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_194[iParam0 /*7*/], 2);
			PED::_0xAE6004120C18DF97(Local_194[iParam0 /*7*/], 0, 0);
			PED::_0xAE6004120C18DF97(Local_194[iParam0 /*7*/], 1, 0);
			ENTITY::_0x18FF3110CF47115D(Local_194[iParam0 /*7*/], 7, 0);
			if (bParam6)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(Local_194[iParam0 /*7*/], -1f);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_194[iParam0 /*7*/], true, 0f);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_194[iParam0 /*7*/], true);
			}
			iLocal_363 = MISC::GET_FRAME_COUNT();
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_634(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(uParam0->f_206.f_5, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		__LIB_2__::func_608(&(uParam0->f_2588));
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_2__::func_618(&(uParam0->f_2588)))
		{
			__LIB_8__::func_901(&(uParam0->f_2588), 1);
		}
		else if (__LIB_5__::func_53(&(uParam0->f_2588)) > 5f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, uParam0->f_206.f_5, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_658(var uParam0)
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
		func_1169(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1171(uParam0);
		func_1172(uParam0);
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

void func_721(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 == 0 || __LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			__LIB_5__::func_305(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = __LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 512);
	if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 256))
	{
		iVar1 = __LIB_0__::func_761(-1739349092);
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam1))
	{
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), __LIB_0__::func_271(iParam0));
	}
	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		if (iVar0 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*iParam1, iVar0);
			if (iVar0 == -546708623)
			{
				MAP::_BLIP_SET_MODIFIER(*iParam1, 231194138);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(*iParam1, iVar0);
		}
		if (bVar2 && !__LIB_0__::func_296(0, 0, 1))
		{
			MAP::_BLIP_SET_STYLE(*iParam1, -1944754404);
			if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 1024))
			{
				MAP::_BLIP_SET_MODIFIER(*iParam1, -46775694);
			}
			if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 2048))
			{
				MAP::_BLIP_SET_MODIFIER(*iParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iVar1, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_14)) && __LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, &(Global_1360165[iParam0 /*1157*/].f_14));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, __LIB_1__::func_464(iParam0, 0));
		}
	}
}

bool func_727(int iParam0)
{
	if (Local_485[func_740(iParam0) /*5*/].f_3 == iParam0)
	{
		if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 0))
		{
			return true;
		}
	}
	return false;
}

bool func_728(float fParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_13, true, 0))
	{
		if (bParam1)
		{
			if ((__LIB_0__::func_94(Global_35, 1891.38f, -1858.223f, 42.1765f, 1) / ENTITY::GET_ENTITY_SPEED(Global_35)) > fParam0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if ((__LIB_0__::func_94(Global_35, 1891.38f, -1858.223f, 42.1765f, 1) / ENTITY::GET_ENTITY_SPEED(Global_35)) < fParam0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_729(int iParam0)
{
	return Local_485[func_740(iParam0) /*5*/].f_2;
}

bool func_730(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (((MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/].f_4, iParam1) && (iParam2 == -1 || (iParam2 != -1 && MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/].f_4, iParam2)))) && (iParam3 == -1 || (iParam3 != -1 && MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/].f_4, iParam3)))) && (iParam4 == -1 || (iParam4 != -1 && MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/].f_4, iParam4))))
	{
		return true;
	}
	return false;
}

bool func_731(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam5, iParam6);
	}
	iVar1 = 1;
	iVar0 = 1;
	if (bParam7)
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iParam8))
		{
			iVar1 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		iVar0 = func_1260(uParam4, 1);
	}
	return (iVar1 && iVar0);
}

int func_735()
{
	return iLocal_80;
}

bool func_736()
{
	if (PED::IS_PED_ON_MOUNT(Global_35) && PED::GET_MOUNT(Global_35) == Local_262.f_3)
	{
		return true;
	}
	return false;
}

void func_737(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!__LIB_2__::func_618(&(vLocal_966[iParam0 /*3*/])))
	{
		__LIB_8__::func_901(&(vLocal_966[iParam0 /*3*/]), 1);
		iLocal_1015 = 0;
	}
	else
	{
		if (__LIB_2__::func_611(&(vLocal_966[iParam0 /*3*/])))
		{
			__LIB_13__::func_551(&(vLocal_966[iParam0 /*3*/]));
			__LIB_5__::func_107(&(vLocal_966[iParam0 /*3*/]));
		}
		if (__LIB_5__::func_51(&(vLocal_966[iParam0 /*3*/])) > (fParam3 + (IntToFloat(iLocal_1015) * fParam4)))
		{
			iLocal_1015++;
			__LIB_2__::func_620(&(vLocal_966[iParam0 /*3*/]), 0f);
			vLocal_716[iParam2 /*3*/] = 1;
			func_741(iParam1);
		}
	}
}

void func_738(int iParam0)
{
	if (__LIB_2__::func_618(&(vLocal_966[iParam0 /*3*/])) && !__LIB_2__::func_611(&(vLocal_966[iParam0 /*3*/])))
	{
		__LIB_13__::func_552(&(vLocal_966[iParam0 /*3*/]));
	}
}

int func_740(int iParam0)
{
	return (iParam0 % 100);
}

void func_741(int iParam0)
{
	if (Local_485[func_740(iParam0) /*5*/].f_3 == iParam0)
	{
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 3);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 4);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
		Local_485[func_740(iParam0) /*5*/] = 0;
		Local_485[func_740(iParam0) /*5*/].f_2 = 0;
	}
}

int func_744(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam0 != Local_485[func_740(iParam0) /*5*/].f_3)
	{
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 3);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 1);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 4);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 5);
		Local_485[func_740(iParam0) /*5*/].f_1 = iParam2;
		Local_485[func_740(iParam0) /*5*/].f_2 = 0;
		Local_485[func_740(iParam0) /*5*/].f_3 = iParam0;
		Local_485[func_740(iParam0) /*5*/].f_4 = 0;
	}
	MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 4);
	MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 5);
	if (iParam4 != 0 && func_337(iParam4))
	{
		if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 3) || MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 2))
		{
			Local_485[func_740(iParam0) /*5*/].f_2 = 0;
			MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
			MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
			MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 3);
			MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 1);
			MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 4);
			MISC::CLEAR_BIT(&(Local_485[func_740(iParam0) /*5*/]), 5);
		}
	}
	if (func_337(iParam3) || MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 3))
	{
		if (!MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 3))
		{
			MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
			MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 3);
			MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
		}
		return 2;
	}
	else
	{
		if (!MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 0) && !MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 2))
		{
			if (func_337(iParam1))
			{
				if (iParam5 != 0 && fParam6 > 0f)
				{
					if (!__LIB_2__::func_618(&(vLocal_966[iParam5 /*3*/])))
					{
						__LIB_8__::func_901(&(vLocal_966[iParam5 /*3*/]), 1);
					}
				}
				if (__LIB_2__::func_618(&(vLocal_966[iParam5 /*3*/])))
				{
				}
				if (iParam5 == 0 || (iParam5 != 0 && __LIB_5__::func_51(&(vLocal_966[iParam5 /*3*/])) > fParam6))
				{
					func_1266(iParam2, iParam0);
					MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 0);
					return 0;
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 0) && !MISC::IS_BIT_SET(Local_485[func_740(iParam0) /*5*/], 2))
		{
			if (func_337(iParam1))
			{
				MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 4);
				return 1;
			}
			else if (iParam7 == 5)
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 5);
				return 3;
			}
		}
	}
	MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 5);
	return 3;
}

bool func_745(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("P_TABLE39X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CHAIR04X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_SIDETABLE02X"), false);
		STREAMING::_REQUEST_IMAP(-646014955);
	}
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				if (!INTERIOR::IS_VALID_INTERIOR(iLocal_1020))
				{
					iLocal_1020 = INTERIOR::GET_INTERIOR_AT_COORDS(1892.971f, -1864.631f, 42.92566f);
				}
				else
				{
					if (!INTERIOR::IS_INTERIOR_READY(iLocal_1020))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1020);
					}
					__LIB_4__::func_524(1);
					if (INTERIOR::IS_INTERIOR_READY(iLocal_1020))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_00", true);
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_01", true);
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_02", true);
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_03", true);
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_04", true);
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_05", 0);
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_bosb", 0);
						__LIB_5__::func_440("shb_nav_camp_01");
						__LIB_5__::func_441("sha_cover_dutch2");
						__LIB_0__::func_400(809554858);
						__LIB_0__::func_400(1810083187);
						__LIB_1__::func_948(233638913, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(-659381875, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(-356563546, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(560870147, 0, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(867489680, 0, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(1163459288, 1, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(931206119, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(1783003505, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(1544281340, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(-17095972, 1, 0f, 0, 0, 0, 0, 0);
						__LIB_1__::func_948(58833085, 0, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(-629053815, 0, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(553939906, 1, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(357129292, 1, 0f, 0, 1, 0, 0, 0);
						__LIB_1__::func_948(-907240961, 1, 0f, 0, 0, 0, 0, 0);
						POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_13, 10208, 0, 0, -1, -1, 0);
						POPULATION::_0xB56D41A694E42E86(Local_14.f_13, 10208, 0, 0, -1, -1, 0);
						__LIB_11__::func_591(joaat("P_SIDETABLE02X"), 1899.39f, -1858.81f, 46.34f, &uLocal_1043);
						bLocal_441 = true;
						*uParam1 = 1;
					}
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_TABLE39X")) && STREAMING::HAS_MODEL_LOADED(joaat("P_SIDETABLE02X")))
				{
					if (__LIB_13__::func_546(&uLocal_1043, &iLocal_1018))
					{
						func_1270(joaat("P_TABLE39X"), 1890.8f, -1864.66f, 46.34f, 0f, 0f, 0f, 2);
						__LIB_9__::func_721(joaat("P_SIDETABLE02X"), 1899.39f, -1858.81f, 46.34f, &iLocal_1018, joaat("PROVISION_GOLD_NUGGET"), 1, 0, 0, 0);
						TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("rcm_dutch2_mansion_stairs", 1, 0.7f, 0.8f, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

void func_746(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_485[func_740(iParam0) /*5*/]), 2);
	}
}

bool func_747(int iParam0)
{
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_61, true, 0))
		{
			__LIB_11__::func_381(2);
			__LIB_18__::func_614(1, 0);
			__LIB_6__::func_261();
			return true;
		}
	}
	return false;
}

bool func_748(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar3;
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				if ((((func_631(4, 1897.849f, -1857.646f, 46.3335f, 145.9618f, joaat("WEAPON_UNARMED"), 0, 0, 0, 0) && func_631(3, 1897.378f, -1873.44f, 46.5165f, 12.929f, joaat("WEAPON_UNARMED"), 0, 0, 0, 0)) && func_631(2, 1897.46f, -1870.65f, 43.13f, -83.2f, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 0, 0)) && func_631(0, 1891.292f, -1856.118f, 42.4265f, 46.7222f, joaat("WEAPON_RIFLE_BOLTACTION"), 0, 0, 0, 0)) && func_631(1, 1890.714f, -1857.428f, 42.6786f, -55.7222f, joaat("WEAPON_RIFLE_BOLTACTION"), 0, 0, 0, 1))
				{
					__LIB_12__::func_875(uParam2, Local_194[2 /*7*/], "EXC_OPED3", 1);
					__LIB_12__::func_875(uParam2, Local_194[3 /*7*/], "EXC_YPED3", 1);
					__LIB_12__::func_875(uParam2, Local_194[4 /*7*/], "EXC_LEADER", 1);
					__LIB_12__::func_875(uParam2, Local_194[0 /*7*/], "DCH_LEMRAIDER1", 1);
					TASK::TASK_DUCK(Local_194[4 /*7*/], -1);
					PED::_0xFC3DB99C8144CD81(Local_194[2 /*7*/], Local_14.f_10, 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(Local_194[3 /*7*/], 168, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_194[3 /*7*/], true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_194[3 /*7*/], 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_194[3 /*7*/], 93, true);
					PED::_0xB8DE69D9473B7593(Local_194[3 /*7*/], 30);
					PED::_0x57F35552E771BE9D(Local_194[3 /*7*/], 12);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_194[3 /*7*/], true, true);
					__LIB_4__::func_7(Local_194[3 /*7*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_7(Local_194[3 /*7*/], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_194[3 /*7*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_194[3 /*7*/], 1);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_194[0 /*7*/], true, true);
					PED::_0xFC3DB99C8144CD81(Local_194[1 /*7*/], Local_14.f_5, 0, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_194[0 /*7*/], false);
					PED::SET_PED_CAN_BE_TARGETTED(Local_194[1 /*7*/], false);
					iLocal_355 = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 1889.21f, -1859.4f, 42.59f, 56.4694f, 0f, 0f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_194[1 /*7*/], iLocal_355, 0, 0, false, true, 0, false, -1f, false);
					__LIB_3__::func_459(Local_194[1 /*7*/], 1);
					__LIB_2__::func_279(Local_194[1 /*7*/], 1);
					*uParam1 = 1;
				}
				break;
			case 1:
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
				iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS(1895.976f, -1859.968f, 44.1736f);
				if (INTERIOR::IS_INTERIOR_READY(iVar3))
				{
					if (iLocal_1022 == 0)
					{
						iLocal_1022 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR_SHA_MAN02X"), 1892.2f, -1857.3f, 42.14f, 7);
					}
					else if (ENTITY::_0x1FF441D7954F8709(iLocal_1022))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR04X")))
						{
							iLocal_239 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@rdtc2@ig@rsc1_ig0_guardinbalcony@rsc1_ig0_guardinbalcony", 0, 0, false, true);
							iLocal_1021 = ENTITY::_0x6F3068258A499E52(joaat("S_CHAIR04X"), 1892.03f, -1856.643f, 42.6066f, 11);
							if (iLocal_1021 != 0)
							{
								if (ENTITY::_0x1FF441D7954F8709(iLocal_1021))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_78) && ENTITY::DOES_ENTITY_EXIST(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1021)))
									{
										Local_262.f_78 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1021));
									}
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_78))
							{
								Local_262.f_78 = OBJECT::CREATE_OBJECT(joaat("P_CHAIR04X"), 1892.11f, -1856.62f, 42.13f, true, true, false, false, true);
							}
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_239, "p_chair04x", Local_262.f_78, 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_239, "G_M_O_UniExConfeds_01", Local_194[0 /*7*/], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_239, "p_door_sha_man02x", ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1022)), 0);
							ANIMSCENE::LOAD_ANIM_SCENE(iLocal_239);
							*uParam1 = 2;
						}
					}
				}
				break;
			case 2:
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_239, true, false))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_239, "pbl_sit_loop");
					*uParam1 = 3;
				}
				break;
			case 3:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_239, "pbl_sit_loop"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_239, "pbl_sit_loop", true);
					ANIMSCENE::START_ANIM_SCENE(iLocal_239);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_239, "pbl_action");
					return true;
				}
				break;
			case 4:
				break;
		}
	}
	else if (iParam0 == 2)
	{
	}
	return false;
}

bool func_749(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		Local_194[0 /*7*/].f_6 = 0;
		Local_194[1 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
		if (__LIB_6__::func_904())
		{
		}
		if (Local_194[0 /*7*/].f_6 != 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_239, false) && ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_239, "G_M_O_UniExConfeds_01")))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_239, false))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_239, 0);
					Local_194[0 /*7*/].f_6 = 2;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]))
		{
			switch (Local_194[0 /*7*/].f_6)
			{
				case 0:
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_239, "pbl_action"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_239, "pbl_action", true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_194[0 /*7*/], true);
						PED::SET_PED_CAN_BE_TARGETTED(Local_194[0 /*7*/], true);
						Local_194[0 /*7*/].f_6 = 1;
					}
					break;
				case 1:
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_239) > 3.5f)
					{
						Local_194[0 /*7*/].f_6 = 2;
					}
					break;
				case 2:
					if ((((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_239, false) || ANIMSCENE::_0x34A0671BE613D3D0(iLocal_239)) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_239, "G_M_O_UniExConfeds_01")) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_239, "G_M_O_UniExConfeds_01")) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_239, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_239) > 6.5f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]))
						{
							MAP::REMOVE_BLIP(&(Local_194[0 /*7*/].f_2));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_194[0 /*7*/], true);
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_239, false))
							{
								ANIMSCENE::ABORT_ANIM_SCENE(iLocal_239, true);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_194[0 /*7*/], false, true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1889.8f, -1864f, 46.3428f, 2f, 20000, 0.25f, 4194305, 258.1693f);
							TASK::TASK_ACHIEVE_HEADING(0, 234f, 0);
							TASK::TASK_DUCK(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
							TASK::TASK_PERFORM_SEQUENCE(Local_194[0 /*7*/], iLocal_234);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
							__LIB_3__::func_608(Local_194[0 /*7*/]);
							__LIB_4__::func_7(Local_194[0 /*7*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_194[0 /*7*/], joaat("WEAPON_REPEATER_CARBINE"), false, 0, false, false);
							__LIB_1__::func_948(867489680, 0, 0f, 0, 1, 0, 0, 0);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_194[0 /*7*/], 2f);
							PED::FORCE_PED_MOTION_STATE(Local_194[0 /*7*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
							__LIB_5__::func_107(&(Local_194[0 /*7*/].f_3));
							__LIB_12__::func_875(uParam1, Local_194[0 /*7*/], "EXC_YPED4", 1);
						}
						Local_194[0 /*7*/].f_6 = 3;
					}
					break;
				case 3:
					if (__LIB_5__::func_51(&(Local_194[0 /*7*/].f_3)) < 1f)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_194[0 /*7*/], 2f);
					}
					else
					{
						Local_194[0 /*7*/].f_6 = 4;
					}
					break;
			}
		}
		else
		{
			Local_194[0 /*7*/].f_6 = 19;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[1 /*7*/]))
		{
			switch (Local_194[1 /*7*/].f_6)
			{
				case 0:
					__LIB_8__::func_901(&(Local_194[1 /*7*/].f_3), 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_194[1 /*7*/], true);
					Local_194[0 /*7*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[0 /*7*/]);
					MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[1 /*7*/]);
					PED::_0x463803429297117C(Local_194[1 /*7*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_194[1 /*7*/], true);
					PED::SET_PED_PANIC_EXIT_SCENARIO(Local_194[1 /*7*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
					PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_194[1 /*7*/], 80f);
					Local_194[1 /*7*/].f_6 = 1;
					break;
				case 1:
					if (!PED::IS_PED_USING_ANY_SCENARIO(Local_194[1 /*7*/]) && !TASK::_0x0C3CB2E600C8977D(Local_194[1 /*7*/], 1))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_194[1 /*7*/]))
						{
						}
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_194[1 /*7*/], joaat("WEAPON_RIFLE_BOLTACTION"), 0, false))
						{
							__LIB_4__::func_7(Local_194[1 /*7*/], joaat("WEAPON_RIFLE_BOLTACTION"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						}
						TASK::TASK_COMBAT_HATED_TARGETS(Local_194[1 /*7*/], -1f);
						Local_194[1 /*7*/].f_6 = 2;
					}
					break;
			}
		}
		else
		{
			Local_194[1 /*7*/].f_6 = 19;
		}
	}
	if (Local_194[0 /*7*/].f_6 == 19 && Local_194[1 /*7*/].f_6 == 19)
	{
		return true;
	}
	return false;
}

bool func_750()
{
	if (!bLocal_440)
	{
		if (!func_337(3))
		{
			if (__LIB_0__::func_163(__LIB_0__::func_398(7), 2043986356))
			{
				TASK::CLEAR_PED_TASKS(__LIB_0__::func_398(7), true, false);
			}
			bLocal_440 = true;
		}
	}
	else
	{
		__LIB_1__::func_538(1);
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), __LIB_0__::func_398(7));
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
		if (func_337(3))
		{
			bLocal_440 = false;
		}
	}
	return false;
}

bool func_751()
{
	if (!__LIB_2__::func_618(&uLocal_1044))
	{
		__LIB_8__::func_901(&uLocal_1044, 0);
	}
	else if (__LIB_5__::func_51(&uLocal_1044) > 2.5f)
	{
		return true;
	}
	if (!__LIB_0__::func_255(Local_262.f_3, 0))
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_262.f_3, 1f);
	}
	return false;
}

bool func_752(int iParam0)
{
	if (func_1267(iParam0))
	{
		MISC::_0x2916B30DC6C41179(joaat("MISTY"));
		MISC::_0x2916B30DC6C41179(joaat("FOG"));
		MISC::CLEAR_OVERRIDE_WEATHER();
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		if (__LIB_2__::func_954() == joaat("MISTY") || __LIB_2__::func_954() == joaat("FOG"))
		{
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, false, true, 60f, false);
		}
		return true;
	}
	return false;
}

bool func_753(int iParam0)
{
	if (func_1267(iParam0))
	{
		__LIB_1__::func_948(560870147, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(867489680, 0, 0, 0, 1, 0, 0, 0);
		return true;
	}
	return false;
}

bool func_754(int iParam0)
{
	if (func_1267(iParam0))
	{
		if (func_337(66))
		{
			if (func_337(67))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 203, true);
			}
		}
		else if (func_337(72))
		{
			__LIB_13__::func_547();
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 152, false);
		}
	}
	return false;
}

bool func_755(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				iVar0 = 0;
				while (iVar0 < Local_194)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_194[iVar0 /*7*/]))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_194[iVar0 /*7*/], Local_14.f_46, true, 0))
						{
							AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[iVar0 /*7*/], true);
							PED::RESURRECT_PED(Local_194[iVar0 /*7*/]);
							ENTITY::SET_ENTITY_COORDS(Local_194[iVar0 /*7*/], 1899.001f, -1871.294f, 42.1314f, false, false, true, true);
							ENTITY::SET_ENTITY_ROTATION(Local_194[iVar0 /*7*/], 90f, 0f, 0f, 2, false);
							MISC::SET_BIT(&iLocal_1047, iVar0);
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_194[iVar0 /*7*/], Local_14.f_47, true, 0))
						{
							AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[iVar0 /*7*/], true);
							PED::RESURRECT_PED(Local_194[iVar0 /*7*/]);
							ENTITY::SET_ENTITY_COORDS(Local_194[iVar0 /*7*/], 1900.31f, -1866.218f, 42.1487f, false, false, true, true);
							ENTITY::SET_ENTITY_ROTATION(Local_194[iVar0 /*7*/], 90f, 0f, 0f, 2, false);
							MISC::SET_BIT(&iLocal_1047, iVar0);
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_194[iVar0 /*7*/], Local_14.f_48, true, 0))
						{
							AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[iVar0 /*7*/], true);
							PED::RESURRECT_PED(Local_194[iVar0 /*7*/]);
							ENTITY::SET_ENTITY_COORDS(Local_194[iVar0 /*7*/], 1898.675f, -1870.342f, 46.3756f, false, false, true, true);
							ENTITY::SET_ENTITY_ROTATION(Local_194[iVar0 /*7*/], 90f, 0f, 0f, 2, false);
							MISC::SET_BIT(&iLocal_1047, iVar0);
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_194[iVar0 /*7*/], Local_14.f_49, true, 0))
						{
							AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[iVar0 /*7*/], true);
							PED::RESURRECT_PED(Local_194[iVar0 /*7*/]);
							ENTITY::SET_ENTITY_COORDS(Local_194[iVar0 /*7*/], 1888.909f, -1865.576f, 46.3347f, false, false, true, true);
							ENTITY::SET_ENTITY_ROTATION(Local_194[iVar0 /*7*/], 90f, 0f, 0f, 2, false);
							MISC::SET_BIT(&iLocal_1047, iVar0);
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_194[iVar0 /*7*/], Local_14.f_50, true, 0))
						{
							AUDIO::DISABLE_PED_PAIN_AUDIO(Local_194[iVar0 /*7*/], true);
							AUDIO::STOP_PED_SPEAKING(Local_194[iVar0 /*7*/], true);
							PED::RESURRECT_PED(Local_194[iVar0 /*7*/]);
							ENTITY::SET_ENTITY_COORDS(Local_194[iVar0 /*7*/], 1895.39f, -1860.74f, 47.33f, false, false, true, true);
							ENTITY::SET_ENTITY_ROTATION(Local_194[iVar0 /*7*/], 45f, 0f, 0f, 2, false);
							MISC::SET_BIT(&iLocal_1047, iVar0);
						}
					}
					iVar0++;
				}
				*uParam1 = 1;
				break;
			case 1:
				iVar0 = 0;
				while (iVar0 < Local_194)
				{
					if (MISC::IS_BIT_SET(iLocal_1047, iVar0))
					{
						iVar1++;
						if (!__LIB_0__::func_255(Local_194[iVar0 /*7*/], 0))
						{
							TASK::TASK_PLAY_ANIM(Local_194[iVar0 /*7*/], "AI_DAMAGE@DEAD@BASE", "dead_a", 1000f, -8f, -1, 131073, 0f, false, 0, false, 0, false);
							PED::SET_PED_TO_RAGDOLL(Local_194[iVar0 /*7*/], 0, 2000, 0, false, true, false);
							ENTITY::_SET_ENTITY_HEALTH(Local_194[iVar0 /*7*/], 0, 0);
							MISC::CLEAR_BIT(&iLocal_1047, iVar0);
						}
					}
					iVar0++;
				}
				if (iVar1 == 0)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_756(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
	}
	if (func_1267(iParam0))
	{
		switch (Local_81[7 /*7*/].f_6)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/].f_1))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_81[7 /*7*/], Local_81[7 /*7*/].f_1, -1, -1, 1f, 1, 0, 0);
					Local_81[7 /*7*/].f_6 = 1;
				}
				break;
			case 1:
			case 2:
				if (Local_81[7 /*7*/].f_6 == 1)
				{
					if (!PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_81[7 /*7*/].f_1) > 1f)
						{
							TASK::TASK_MOUNT_ANIMAL(Local_81[7 /*7*/], Local_81[7 /*7*/].f_1, -1, -1, 2f, 1, 0, 0);
							Local_81[7 /*7*/].f_6 = 2;
						}
					}
				}
				if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
				{
					if (func_736())
					{
						PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 167, true);
						TASK::CLEAR_PED_TASKS(Local_81[7 /*7*/], true, false);
						iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
						PED::SET_GROUP_FORMATION(iVar0, 9);
						TASK::CLEAR_PED_TASKS(Local_81[7 /*7*/], true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[7 /*7*/], false);
						__LIB_1__::func_551(1, 0);
						Local_81[7 /*7*/].f_6 = 4;
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_3))
					{
						if (__LIB_0__::func_665(Local_262.f_3, Local_81[7 /*7*/], 1, 1) > 10f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 1227113341, true) == 8)
							{
								TASK::TASK_GO_TO_ENTITY(Local_81[7 /*7*/], Local_262.f_3, -1, 6f, 2f, 2f, 0);
							}
						}
					}
				}
				break;
			case 3:
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					Local_81[7 /*7*/].f_6 = 4;
				}
				break;
			case 4:
				func_1275(Local_81[7 /*7*/], &uLocal_471);
				__LIB_11__::func_525(Local_81[7 /*7*/], Local_262.f_3, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
				if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
				{
					Local_81[7 /*7*/].f_6 = 2;
				}
				break;
		}
	}
	return false;
}

bool func_757(int iParam0)
{
	vector3 vVar0;
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
	}
	if (func_1267(iParam0))
	{
		switch (Local_81[7 /*7*/].f_6)
		{
			case 0:
				vVar0 = { func_1277(Local_81[7 /*7*/], 1854.401f, -1828.929f, 43.4328f, 1908.272f, -1850.109f, 41.0061f, 1920.484f, -1873.611f, 40.6853f, 1883.67f, -1878.057f, 41.8093f) };
				if (__LIB_0__::func_94(Local_81[7 /*7*/], vVar0, 1) < 5f)
				{
					return true;
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.501f, -1, 0.25f, 0, 40000f);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
				TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_81[7 /*7*/], WEAPON::GET_BEST_PED_WEAPON(Local_81[7 /*7*/], false, false), false, 0, false, false);
				Local_81[7 /*7*/].f_6 = 1;
				break;
			case 1:
				if ((TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 242628503, true) == 8 && ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_13, true, 0)) && PED::IS_PED_STOPPED(Local_81[7 /*7*/].f_1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_758(int iParam0)
{
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		switch (Local_81[7 /*7*/].f_6)
		{
			case 0:
				if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Local_81[7 /*7*/], 0, 0, 0, 0, 0);
				}
				PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 167, false);
				Local_81[7 /*7*/].f_6 = 1;
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_81[7 /*7*/], WEAPON::GET_BEST_PED_WEAPON(Local_81[7 /*7*/], false, false), true, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Local_81[7 /*7*/], 1, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[7 /*7*/], 1877.579f, -1845.559f, 41.5469f, 1f, -1, 0.25f, 0, 40000f);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_759(int iParam0)
{
	if (func_1267(iParam0))
	{
		__LIB_0__::func_705(Local_262.f_27.f_1, 0);
		__LIB_1__::func_640(1);
		__LIB_1__::func_684(1, 1);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_81[7 /*7*/], 200f);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_81[7 /*7*/], 1);
		if (ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_44, true, 0))
		{
			PED::_0xFC3DB99C8144CD81(Local_81[7 /*7*/], Local_14.f_25, 0, 0, 0);
		}
		else
		{
			PED::_0xFC3DB99C8144CD81(Local_81[7 /*7*/], Local_14.f_45, 0, 0, 0);
		}
		PED::SET_PED_ACCURACY(Local_81[7 /*7*/], 100);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_81[7 /*7*/], joaat("REL_GANG_DUTCHS"));
		TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		if (ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_44, true, 0) && __LIB_0__::func_94(Local_81[7 /*7*/], 1867.767f, -1838.145f, 41.7496f, 1) > 20f)
		{
			if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_235, 2.5f, -1, 0.25f, 0, 40000f);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_235, 2f, -1, 0.25f, 0, 40000f);
			}
		}
		if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_194[1 /*7*/], 1500, false, 1);
		TASK::TASK_COMBAT_PED(0, Local_194[1 /*7*/], 0, 0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
		TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
		PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 167, false);
		PED::_0xFD6943B6DF77E449(Local_194[0 /*7*/], false);
		return true;
	}
	return false;
}

bool func_760(int iParam0)
{
	vector3 vVar0;
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		switch (Local_81[7 /*7*/].f_6)
		{
			case 0:
				PED::SET_PED_ACCURACY(Local_81[7 /*7*/], 100);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_81[7 /*7*/], WEAPON::GET_BEST_PED_WEAPON(Local_81[7 /*7*/], false, false), false, 0, false, false);
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_81[7 /*7*/], true, false) + ENTITY::GET_ENTITY_COORDS(Local_194[1 /*7*/], false, false) - ENTITY::GET_ENTITY_COORDS(Local_81[7 /*7*/], true, false) / Vector(2f, 2f, 2f) };
				TASK::TASK_SHOOT_AT_COORD(Local_81[7 /*7*/], vVar0, 15000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
				__LIB_8__::func_901(&(Local_81[7 /*7*/].f_3), 1);
				Local_81[7 /*7*/].f_6 = 1;
				break;
			case 1:
				if (PED::IS_PED_SHOOTING(Local_81[7 /*7*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_194[1 /*7*/]))
					{
						ENTITY::_SET_ENTITY_HEALTH(Local_194[1 /*7*/], 0, 0);
					}
					PED::SET_PED_CONFIG_FLAG(Local_81[7 /*7*/], 167, false);
					TASK::CLEAR_PED_TASKS(Local_81[7 /*7*/], true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
					{
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					}
					TASK::TASK_AIM_AT_COORD(0, 1888.743f, -1856.51f, 43.7546f, 2000, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_761(int iParam0)
{
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[2 /*7*/]) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) || ((ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_194[0 /*7*/], Local_14.f_1, false, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_194[0 /*7*/], Local_14.f_2, false, 0)))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_194[2 /*7*/], 1867.463f, -1873.994f, 41.841f, 2f, -1, 0.25f, 0, 40000f);
					Local_81[7 /*7*/].f_6 = 16;
				}
			}
		}
		switch (Local_81[7 /*7*/].f_6)
		{
			case 0:
				Local_262.f_63 = TASK::ADD_COVER_POINT(1889.871f, -1854.595f, 41.5335f, 224.4822f, 2, 0, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[7 /*7*/], true);
				TASK::CLEAR_PED_TASKS(Local_81[7 /*7*/], true, false);
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_81[7 /*7*/], false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_81[7 /*7*/], WEAPON::GET_BEST_PED_WEAPON(Local_81[7 /*7*/], false, false), true, 0, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
				if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_235, 1.501f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
				TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
				Local_81[7 /*7*/].f_6 = 1;
				break;
			case 1:
				if (func_338(120) || func_337(39))
				{
					iLocal_1031[0] = TASK::ADD_COVER_POINT(1896.189f, -1851.373f, 41.4088f, 239f, 1, 2, 5, false);
					iLocal_1031[1] = TASK::ADD_COVER_POINT(1906.477f, -1855.962f, 41.0725f, 239f, 1, 2, 5, false);
					iLocal_1031[2] = TASK::ADD_COVER_POINT(1885.198f, -1864.307f, 41.8096f, 239f, 0, 2, 4, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_1031[0], 1908.284f, -1855.086f, 42.9646f, 10000, 0, 0, 0);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_1031[1], 1914.894f, -1858.982f, 43.0331f, 10000, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1913.216f, -1861.336f, 40.9831f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_AIM_GUN_AT_COORD(0, 1921.241f, -1886.925f, 42.208f, 4000, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					Local_81[7 /*7*/].f_6 = 2;
				}
				break;
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 242628503, true) == 8)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1900.293f, -1877.637f, 41.1965f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_AIM_GUN_AT_COORD(0, 1883.524f, -1877.605f, 42.5735f, 5000, false, false);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_1031[2], 1889.081f, -1878.946f, 43.7688f, -1, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					Local_81[7 /*7*/].f_6 = 3;
				}
				if (func_337(39) || func_337(40))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_1031[2], 1889.081f, -1878.946f, 43.7688f, -1, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					Local_81[7 /*7*/].f_6 = 4;
				}
				break;
			case 3:
				if (func_337(39) || func_337(40))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_1031[2], 1889.081f, -1878.946f, 43.7688f, -1, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					Local_81[7 /*7*/].f_6 = 4;
				}
				break;
			case 16:
				if (!ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
				{
					PED::SET_PED_ACCURACY(Local_81[7 /*7*/], 100);
					WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_81[7 /*7*/], true);
					__LIB_2__::func_279(Local_194[2 /*7*/], 1);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_SHOOT_AT_ENTITY(0, Local_194[2 /*7*/], 7000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
					TASK::TASK_COMBAT_PED(0, Local_194[2 /*7*/], 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					Local_81[7 /*7*/].f_6 = 17;
				}
				else
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_81[7 /*7*/], iLocal_1031[2], 1889.081f, -1878.946f, 43.7688f, -1, 0, 0, 0);
					Local_81[7 /*7*/].f_6 = 4;
				}
				break;
			case 17:
				if (__LIB_0__::func_255(Local_194[2 /*7*/], 0))
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_81[7 /*7*/], iLocal_1031[2], 1889.081f, -1878.946f, 43.7688f, -1, 0, 0, 0);
					Local_81[7 /*7*/].f_6 = 4;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 242628503, true) == 8)
				{
					Local_81[7 /*7*/].f_6 = 16;
				}
				break;
		}
	}
	return false;
}

bool func_762(int iParam0)
{
	if (iParam0 == 0)
	{
		if (MISC::IS_BIT_SET(Local_485[func_740(11) /*5*/].f_4, 0))
		{
			MISC::CLEAR_BIT(&(Local_485[func_740(11) /*5*/].f_4), 0);
		}
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		switch (iLocal_78)
		{
			case 2:
			case 3:
			case 4:
			case 5:
				if (!MISC::IS_BIT_SET(Local_485[func_740(11) /*5*/].f_4, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_35))
					{
						PED::_0x1E017404784AA6A3(Global_35, joaat("RDTC2_RIDE1"));
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/]))
					{
						PED::_0x1E017404784AA6A3(Local_81[7 /*7*/], joaat("RDTC2_RIDE1"));
					}
					AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
					MISC::SET_BIT(&(Local_485[func_740(11) /*5*/].f_4), 0);
				}
				if (((func_337(23) || func_337(18)) || ENTITY::IS_ENTITY_IN_VOLUME(Local_81[7 /*7*/], Local_14.f_59, true, 0)) || func_337(14))
				{
					PED::_0x2B4CE170DE09F346(Local_81[7 /*7*/], joaat("RDTC2_RIDE1"));
					PED::_0x2B4CE170DE09F346(Global_35, joaat("RDTC2_RIDE1"));
					AUDIO::_0x660A8F876DF1D4F8(7);
					AUDIO::_0x660A8F876DF1D4F8(25);
					AUDIO::_0x660A8F876DF1D4F8(21);
					AUDIO::_0x660A8F876DF1D4F8(14);
					if (func_337(23))
					{
						__LIB_5__::func_20(0, 0);
					}
					else
					{
						__LIB_5__::func_20(1, 0);
					}
					return true;
				}
				break;
			case 6:
			case 7:
			case 8:
				break;
			case 9:
				AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
				AUDIO::STOP_PED_SPEAKING(Local_81[7 /*7*/], false);
				return true;
			case 12:
				if (!MISC::IS_BIT_SET(Local_485[func_740(11) /*5*/].f_4, 1))
				{
					AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
					MISC::SET_BIT(&(Local_485[func_740(11) /*5*/].f_4), 1);
				}
				break;
		}
	}
	return false;
}

bool func_763(int iParam0)
{
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/]))
		{
			switch (Local_81[7 /*7*/].f_6)
			{
				case 0:
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_194[1 /*7*/], 1895.297f, -1860.299f, 43.6064f, false, true, true);
					PED::SET_PED_TO_RAGDOLL(Local_194[1 /*7*/], 1000, 1000, 0, false, true, false);
					PED::_0x5D4CD22A8C82A81A(Local_194[1 /*7*/], 0);
					__LIB_0__::func_169(Local_194[1 /*7*/], 0, 1);
					Local_262.f_4[1] = Local_194[1 /*7*/];
					ENTITY::_0x18FF3110CF47115D(Local_262.f_4[1], 7, 1);
					ENTITY::_0x18FF3110CF47115D(Local_262.f_4[1], 14, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) || ((ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_194[0 /*7*/], Local_14.f_1, false, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_194[0 /*7*/], Local_14.f_2, false, 0)))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
						{
							PED::SET_PED_ACCURACY(Local_81[7 /*7*/], 100);
							WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_81[7 /*7*/], true);
							__LIB_2__::func_279(Local_194[2 /*7*/], 1);
							PED::SET_PED_COMBAT_MOVEMENT(Local_81[7 /*7*/], 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_81[7 /*7*/], 0, false);
							TASK::CLEAR_PED_TASKS(Local_194[2 /*7*/], true, false);
							TASK::TASK_COMBAT_PED(Local_81[7 /*7*/], Local_194[2 /*7*/], 0, 0);
							Local_81[7 /*7*/].f_6 = 1;
						}
						else
						{
							Local_81[7 /*7*/].f_6 = 1;
						}
					}
					else
					{
						Local_81[7 /*7*/].f_6 = 2;
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
					{
						Local_262.f_4[0] = Local_194[2 /*7*/];
						TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
						TASK::TASK_GO_TO_ENTITY(0, Local_194[2 /*7*/], -1, 0.5f, 2f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
						TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
						Local_81[7 /*7*/].f_6 = 3;
					}
					break;
				case 2:
					Local_262.f_4[0] = Local_194[0 /*7*/];
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_GO_TO_ENTITY(0, Local_262.f_4[0], -1, 0.5f, 2f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					Local_81[7 /*7*/].f_6 = 3;
					break;
				case 3:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 242628503, true) == 8)
					{
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[0], 7, 1);
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[0], 12, 1);
						if (PED::_0x7F9B9791D4CB71F6(Global_35, Local_81[7 /*7*/], 0, 0) == 0)
						{
							TASK::TASK_CARRIABLE(Local_262.f_4[0], joaat("DEAD_CARRIABLE_HUMAN"), Local_81[7 /*7*/], 0, 0);
						}
						else
						{
							TASK::TASK_PICKUP_CARRIABLE_ENTITY(Local_81[7 /*7*/], Local_262.f_4[0]);
						}
						Local_81[7 /*7*/].f_6 = 4;
					}
					break;
				case 4:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 1245594896, true) == 8)
					{
						if (PED::_GET_CARRIER_AS_HUMAN(Local_262.f_4[0]) == Local_81[7 /*7*/])
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1892.739f, -1859.206f, 42.1507f, 1.5f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
							TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
							return true;
						}
						else
						{
							Local_81[7 /*7*/].f_6 = 3;
						}
					}
					break;
			}
		}
	}
	return false;
}

bool func_764(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/]))
		{
			switch (Local_81[7 /*7*/].f_6)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), Local_14.f_56, true, 0))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 1891.297f, -1835.154f, 41.4195f, 139.7974f, false, false, true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(PED::_GET_LAST_MOUNT(Global_35), Local_14.f_56, true, 0))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PED::_GET_LAST_MOUNT(Global_35), 1899.093f, -1840.003f, 41.6114f, 184.032f, false, false, true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_262.f_3, Local_14.f_56, true, 0))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_3, 1859.744f, -1826.543f, 42.6376f, 102.7853f, false, false, true);
						}
					}
					MISC::_0x2FCD528A397E5C88(Local_14.f_56, 2442122);
					fVar0 = __LIB_0__::func_94(Local_81[7 /*7*/], vLocal_357, 1);
					fVar1 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_357, 1);
					fVar2 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_360, 1);
					if (fVar1 > fVar2 || fVar1 > 1.5f)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_81[7 /*7*/], "rcm_dutch2_bodyWalk", 0, 1032, -1, 0, 0, -1);
						Local_81[7 /*7*/].f_6 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[7 /*7*/], vLocal_360, 1f, 20000, 0.25f, 544, 5f);
						Local_81[7 /*7*/].f_6 = 3;
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[7 /*7*/], true);
					break;
				case 1:
				case 3:
					fVar0 = __LIB_0__::func_94(Local_81[7 /*7*/], vLocal_357, 1);
					fVar1 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_357, 1);
					fVar2 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_360, 1);
					if (fVar0 < 5f)
					{
						if (Local_81[7 /*7*/].f_6 == 1)
						{
							if (fVar1 < 1.5f && fVar2 > fVar1)
							{
								Local_81[7 /*7*/].f_6 = 0;
							}
						}
						else if (fVar2 < 1.5f && fVar1 > fVar2)
						{
							Local_81[7 /*7*/].f_6 = 0;
						}
					}
					if ((fVar1 - 7f) > fVar0 && !func_337(60))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_81[7 /*7*/], PLAYER::PLAYER_PED_ID(), -1, -1f, -1f, -1f);
						Local_81[7 /*7*/].f_6 = 2;
					}
					if (!PED::_IS_PED_CARRYING(Local_81[7 /*7*/]))
					{
						Local_81[7 /*7*/].f_6 = 5;
					}
					if (Local_81[7 /*7*/].f_6 == 1 || Local_81[7 /*7*/].f_6 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 658540077, true) == 8 && TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 713668775, true) == 8)
						{
							if (Local_81[7 /*7*/].f_6 == 1 && ENTITY::IS_ENTITY_AT_COORD(Local_81[7 /*7*/], vLocal_357, 1f, 1f, 3f, false, true, 0))
							{
								Local_81[7 /*7*/].f_6 = 4;
							}
							else if (Local_81[7 /*7*/].f_6 == 3 && ENTITY::IS_ENTITY_AT_COORD(Local_81[7 /*7*/], vLocal_360, 1f, 1f, 3f, false, true, 0))
							{
								Local_81[7 /*7*/].f_6 = 8;
							}
							else
							{
								Local_81[7 /*7*/].f_6 = 0;
							}
						}
					}
					break;
				case 2:
					fVar0 = __LIB_0__::func_94(Local_81[7 /*7*/], vLocal_357, 1);
					fVar1 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_357, 1);
					if ((fVar1 - 6f) < fVar0)
					{
						Local_81[7 /*7*/].f_6 = 0;
					}
					break;
				case 4:
				case 8:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					if (Local_81[7 /*7*/].f_6 == 4)
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_262.f_4[0], 1910.563f, -1821.02f, 40.5749f, 1f, 5);
					}
					else
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_262.f_4[0], 1909.089f, -1815.881f, 40.5815f, 1f, 5);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_81[7 /*7*/], iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					__LIB_8__::func_901(&(Local_81[7 /*7*/].f_3), 1);
					Local_81[7 /*7*/].f_6 = 7;
					break;
				case 5:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 1245594896, true) == 8)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[0]))
						{
							if (PED::_GET_CARRIER_AS_HUMAN(Local_262.f_4[0]) == 0)
							{
								TASK::TASK_PICKUP_CARRIABLE_ENTITY(Local_81[7 /*7*/], Local_262.f_4[0]);
								Local_81[7 /*7*/].f_6 = 6;
							}
							else
							{
								Local_81[7 /*7*/].f_6 = 4;
							}
						}
					}
					break;
				case 6:
					if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 1245594896, true) == 8)
						{
							if (PED::_GET_CARRIER_AS_HUMAN(Local_262.f_4[0]) == Local_81[7 /*7*/])
							{
								Local_81[7 /*7*/].f_6 = 0;
							}
							else
							{
								Local_81[7 /*7*/].f_6 = 5;
							}
						}
					}
					break;
				case 7:
					if (func_337(64))
					{
						ENTITY::_0x18FF3110CF47115D(Local_262.f_4[0], 7, 0);
						return true;
					}
					else if (__LIB_5__::func_51(&(Local_81[7 /*7*/].f_3)) > 4f)
					{
						Local_81[7 /*7*/].f_6 = 5;
					}
					break;
			}
		}
	}
	return false;
}

bool func_765(int iParam0, int* iParam1)
{
	if (func_1267(iParam0))
	{
		if (!MISC::IS_BIT_SET(*iParam1, 6))
		{
			if (__LIB_1__::func_265(Local_81[7 /*7*/], "STOP_THAT", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 2, 1))
			{
				MISC::SET_BIT(iParam1, 6);
				return true;
			}
		}
		else if (!MISC::IS_BIT_SET(*iParam1, 7))
		{
			if (__LIB_1__::func_265(Local_81[7 /*7*/], "CUT_THAT_OUT", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 2, 1))
			{
				MISC::SET_BIT(iParam1, 7);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_766(int iParam0)
{
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
		func_1280();
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/]))
		{
			switch (Local_81[7 /*7*/].f_6)
			{
				case 0:
					__LIB_0__::func_745(1);
					if (__LIB_0__::func_866(1, 0))
					{
						__LIB_1__::func_640(1);
					}
					__LIB_10__::func_984(1, 1);
					if (!ENTITY::IS_ENTITY_DEAD(Local_81[7 /*7*/].f_1) && __LIB_0__::func_665(Local_81[7 /*7*/].f_1, Local_81[7 /*7*/], 1, 1) < 100f)
					{
						TASK::TASK_MOUNT_ANIMAL(Local_81[7 /*7*/], Local_81[7 /*7*/].f_1, -1, -1, 1f, 1, 0, 0);
						Local_81[7 /*7*/].f_6 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[7 /*7*/], 1865.571f, -1835.032f, 41.4525f, 1.5f, -1, 0.25f, 1, 40000f);
						Local_81[7 /*7*/].f_6 = 2;
					}
					break;
				case 1:
					if (PED::IS_PED_ON_MOUNT(Local_81[7 /*7*/]) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && PED::_IS_PED_CARRYING(Global_35)))
					{
						Local_81[7 /*7*/].f_6 = 3;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 1868526510, true) == 8)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81[7 /*7*/], 1865.571f, -1835.032f, 41.4525f, 1.5f, -1, 0.25f, 1, 40000f);
						Local_81[7 /*7*/].f_6 = 2;
					}
					break;
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[7 /*7*/], 713668775, true) == 8)
					{
						Local_81[7 /*7*/].f_6 = 3;
					}
					break;
				case 3:
					if (func_1282(1, 1350.407f, -1591.641f, 67.3498f, 2, 1, 1101004800 /* Float: 20f */) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && PED::_IS_PED_CARRYING(Global_35)))
					{
						__LIB_13__::func_558(1, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						return true;
					}
					break;
			}
		}
	}
	return false;
}

bool func_767(int iParam0)
{
	if (func_1267(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_14__::func_98(PLAYER::PLAYER_PED_ID(), vLocal_235, &(Local_262.f_52), 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
		}
	}
	return false;
}

bool func_768(int iParam0, var uParam1)
{
	if (func_1267(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_194[3 /*7*/]))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_4, 12) && !MISC::IS_BIT_SET(uParam1->f_4, 13))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
				{
					MISC::SET_BIT(&(uParam1->f_4), 12);
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_4), 13);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_194[4 /*7*/]))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_4, 14) && !MISC::IS_BIT_SET(uParam1->f_4, 15))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
				{
					MISC::SET_BIT(&(uParam1->f_4), 14);
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_4), 15);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_4, 16) && !MISC::IS_BIT_SET(uParam1->f_4, 17))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
				{
					MISC::SET_BIT(&(uParam1->f_4), 16);
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_4), 17);
				}
			}
		}
		switch (uParam1->f_2)
		{
			case 0:
				__LIB_0__::func_745(1);
				if (MAP::DOES_BLIP_EXIST(iLocal_434))
				{
					MAP::REMOVE_BLIP(&iLocal_434);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_435))
				{
					MAP::REMOVE_BLIP(&iLocal_435);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[3]))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_64[3]));
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[4]))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_64[4]));
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[5]))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_64[5]));
				}
				if (!MISC::IS_BIT_SET(uParam1->f_4, 0) || (MISC::IS_BIT_SET(uParam1->f_4, 0) && !MISC::IS_BIT_SET(uParam1->f_4, 1)))
				{
					Local_262.f_64[0] = MAP::_0xA6EF0C54A3443E70(-1589197975, Local_14.f_2);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_64[0], "DUTCH22_BLIP_ROOM");
				}
				if (!MISC::IS_BIT_SET(uParam1->f_4, 0) || (MISC::IS_BIT_SET(uParam1->f_4, 0) && !MISC::IS_BIT_SET(uParam1->f_4, 2)))
				{
					Local_262.f_64[1] = MAP::_0xA6EF0C54A3443E70(-1589197975, Local_14.f_10);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_64[1], "DUTCH22_BLIP_ROOM");
				}
				if (!MISC::IS_BIT_SET(uParam1->f_4, 0) || (MISC::IS_BIT_SET(uParam1->f_4, 0) && !MISC::IS_BIT_SET(uParam1->f_4, 3)))
				{
					Local_262.f_64[2] = MAP::_0xA6EF0C54A3443E70(-1589197975, Local_14.f_3);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_64[2], "DUTCH22_BLIP_ROOM");
				}
				MISC::SET_BIT(&(uParam1->f_4), 0);
				uParam1->f_2 = 1;
				break;
			case 1:
				if (func_337(40) || func_337(42))
				{
					if (!func_337(43))
					{
						uParam1->f_2 = 2;
					}
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[0]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_2, true, 0))
					{
						MAP::REMOVE_BLIP(&(Local_262.f_64[0]));
						MISC::SET_BIT(&(uParam1->f_4), 1);
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
				{
					if (!MISC::IS_BIT_SET(uParam1->f_4, 10) && !MISC::IS_BIT_SET(uParam1->f_4, 11))
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
						{
							MISC::SET_BIT(&(uParam1->f_4), 10);
						}
						else
						{
							MISC::SET_BIT(&(uParam1->f_4), 11);
						}
					}
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[1]))
				{
					if ((ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]) && ((MISC::IS_BIT_SET(uParam1->f_4, 10) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_10, true, 0)) || MISC::IS_BIT_SET(uParam1->f_4, 11))) || (!ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_194[2 /*7*/], Local_14.f_10, true, 0)))
					{
						MAP::REMOVE_BLIP(&(Local_262.f_64[1]));
						MISC::SET_BIT(&(uParam1->f_4), 2);
					}
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[2]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_3, true, 0))
					{
						MAP::REMOVE_BLIP(&(Local_262.f_64[2]));
						MISC::SET_BIT(&(uParam1->f_4), 3);
					}
				}
				if (func_337(43) && func_337(42))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_1__::func_390("DUTCH21_PC05", 1);
					UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
					return true;
				}
				break;
			case 2:
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[0]))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_64[0]));
					MISC::SET_BIT(&(uParam1->f_4), 1);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[1]))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_64[1]));
					MISC::SET_BIT(&(uParam1->f_4), 2);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[2]))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_64[2]));
					MISC::SET_BIT(&(uParam1->f_4), 3);
				}
				if (!MISC::IS_BIT_SET(uParam1->f_4, 4) || (MISC::IS_BIT_SET(uParam1->f_4, 4) && !MISC::IS_BIT_SET(uParam1->f_4, 5)))
				{
					Local_262.f_64[3] = MAP::_0xA6EF0C54A3443E70(-1589197975, Local_14.f_11);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_64[3], "DUTCH22_BLIP_ROOM");
				}
				if (!MISC::IS_BIT_SET(uParam1->f_4, 4) || (MISC::IS_BIT_SET(uParam1->f_4, 4) && !MISC::IS_BIT_SET(uParam1->f_4, 6)))
				{
					Local_262.f_64[4] = MAP::_0xA6EF0C54A3443E70(-1589197975, Local_14.f_12);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_64[4], "DUTCH22_BLIP_ROOM");
				}
				if (!MISC::IS_BIT_SET(uParam1->f_4, 4) || (MISC::IS_BIT_SET(uParam1->f_4, 4) && !MISC::IS_BIT_SET(uParam1->f_4, 7)))
				{
					Local_262.f_64[5] = MAP::_0xA6EF0C54A3443E70(-1589197975, Local_14.f_9);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_64[5], "DUTCH22_BLIP_ROOM");
				}
				MISC::SET_BIT(&(uParam1->f_4), 4);
				uParam1->f_2 = 3;
				break;
			case 3:
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[3]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_194[3 /*7*/]))
					{
						if ((MISC::IS_BIT_SET(uParam1->f_4, 12) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_11, true, 0)) || MISC::IS_BIT_SET(uParam1->f_4, 13))
						{
							MAP::REMOVE_BLIP(&(Local_262.f_64[3]));
							MISC::SET_BIT(&(uParam1->f_4), 5);
						}
					}
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[4]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_194[4 /*7*/]))
					{
						if ((MISC::IS_BIT_SET(uParam1->f_4, 14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_12, true, 0)) || (MISC::IS_BIT_SET(uParam1->f_4, 15) && (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_12, true, 0) || __LIB_2__::func_901(Local_194[4 /*7*/], Global_35))))
						{
							MAP::REMOVE_BLIP(&(Local_262.f_64[4]));
							MISC::SET_BIT(&(uParam1->f_4), 6);
						}
					}
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_64[5]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]))
					{
						if ((MISC::IS_BIT_SET(uParam1->f_4, 16) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_9, true, 0)) || MISC::IS_BIT_SET(uParam1->f_4, 17))
						{
							MAP::REMOVE_BLIP(&(Local_262.f_64[5]));
							MISC::SET_BIT(&(uParam1->f_4), 7);
						}
					}
				}
				if (func_337(43) && func_337(42))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_1__::func_390("DUTCH21_PC05", 1);
					UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
					return true;
				}
				if (func_337(39) || func_337(43))
				{
					if (!func_337(42))
					{
						uParam1->f_2 = 0;
					}
				}
				break;
		}
	}
	return false;
}

bool func_769()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_40, true, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
	}
	return false;
}

bool func_770(int iParam0)
{
	if (func_1267(iParam0))
	{
		__LIB_5__::func_511(1);
		return true;
	}
	return false;
}

bool func_771(int iParam0)
{
	if (func_1267(iParam0))
	{
		if (!MISC::IS_BIT_SET(Local_485[func_740(144) /*5*/], 6))
		{
			if (!__LIB_2__::func_618(&uLocal_243))
			{
				if (func_337(82))
				{
					__LIB_8__::func_901(&uLocal_243, 0);
				}
			}
			else if (__LIB_5__::func_51(&uLocal_243) > 1.5f)
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Local_194[2 /*7*/], true))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						__LIB_1__::func_265(Local_194[2 /*7*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					else
					{
						__LIB_1__::func_265(Local_194[2 /*7*/], "GENERIC_CURSE_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					MISC::SET_BIT(&(Local_485[func_740(144) /*5*/]), 6);
				}
				else if (!PED::IS_PED_DEAD_OR_DYING(Local_194[3 /*7*/], true))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						__LIB_1__::func_265(Local_194[3 /*7*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					else
					{
						__LIB_1__::func_265(Local_194[3 /*7*/], "GENERIC_CURSE_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					MISC::SET_BIT(&(Local_485[func_740(144) /*5*/]), 6);
				}
				else if (!PED::IS_PED_DEAD_OR_DYING(Local_194[1 /*7*/], true))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						__LIB_1__::func_265(Local_194[1 /*7*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					else
					{
						__LIB_1__::func_265(Local_194[1 /*7*/], "GENERIC_CURSE_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					MISC::SET_BIT(&(Local_485[func_740(144) /*5*/]), 6);
				}
				else if (!PED::IS_PED_DEAD_OR_DYING(Local_194[0 /*7*/], true))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						__LIB_1__::func_265(Local_194[0 /*7*/], "GENERIC_SHOCKED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					else
					{
						__LIB_1__::func_265(Local_194[0 /*7*/], "GENERIC_CURSE_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
					}
					MISC::SET_BIT(&(Local_485[func_740(144) /*5*/]), 6);
				}
				__LIB_2__::func_608(&uLocal_243);
			}
		}
		else if (!func_337(82))
		{
			MISC::CLEAR_BIT(&(Local_485[func_740(144) /*5*/]), 6);
		}
	}
	return false;
}

bool func_772(int iParam0, var uParam1)
{
	int iVar0;
	if (iParam0 == 0)
	{
		Local_194[2 /*7*/].f_6 = 0;
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
		{
			switch (Local_194[2 /*7*/].f_6)
			{
				case 0:
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_445))
					{
						iLocal_445 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@rdtc2@ig@rsc1_ig1_enemygunjammed@rsc1_ig1_enemygunjammed", 32, "pbl_idle_loop", false, true);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_445, "G_M_O_UniExConfeds_01", Local_194[2 /*7*/], 0);
						iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_194[2 /*7*/], 2);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_445, "w_revolver_cattleman01", iVar0, 0);
						}
						PED::SET_PED_CONFIG_FLAG(Local_194[2 /*7*/], 96, true);
						PED::SET_PED_CONFIG_FLAG(Local_194[2 /*7*/], 250, true);
						ANIMSCENE::LOAD_ANIM_SCENE(iLocal_445);
						Local_194[2 /*7*/].f_6 = 1;
					}
					else
					{
						Local_194[2 /*7*/].f_6 = 1;
					}
					break;
				case 1:
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_445, true, false))
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_445);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_445, "pbl_Attack_Front");
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_445, "pbl_Attack_Right");
						Local_194[2 /*7*/].f_6 = 2;
					}
					break;
				case 2:
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_445, "pbl_Attack_Front") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_445, "pbl_Attack_Right"))
					{
						if (__LIB_9__::func_578(Local_194[2 /*7*/], 0, &(uParam1->f_178), &(uParam1->f_178.f_16), 0, 0))
						{
							__LIB_10__::func_238(&(uParam1->f_178), &(uParam1->f_178.f_16));
							PED::_0xFC3DB99C8144CD81(Local_194[2 /*7*/], Local_14.f_10, 0, 0, 0);
							TASK::TASK_COMBAT_PED(Local_194[2 /*7*/], Global_35, 0, 0);
							Local_194[2 /*7*/].f_6 = 7;
						}
						else
						{
							if ((VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_6, CAM::GET_GAMEPLAY_CAM_COORD()) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_194[2 /*7*/], true, false), 0.5f)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
							{
								if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_6, true, 0) || __LIB_2__::func_138(Local_194[2 /*7*/], 1, 0, 0, 0, 0))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_445, "pbl_Attack_Front", true);
									MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[2 /*7*/]);
									__LIB_3__::func_356(Local_194[2 /*7*/], -1034486097, 1);
									Local_194[2 /*7*/].f_6 = 3;
								}
							}
							if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_7, true, 0))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_445, "pbl_Attack_Right", true);
								MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[2 /*7*/]);
								__LIB_3__::func_356(Local_194[2 /*7*/], -1034486097, 1);
								Local_194[2 /*7*/].f_6 = 3;
							}
						}
					}
					break;
				case 3:
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_445, "G_M_O_UniExConfeds_01") && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_445, false))
					{
						TASK::TASK_HANDS_UP(Local_194[2 /*7*/], -1, Global_35, 500, true);
						Local_194[2 /*7*/].f_6 = 4;
					}
					else
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_445))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_194[2 /*7*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
								TASK::TASK_DUCK(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
								TASK::TASK_PERFORM_SEQUENCE(Local_194[2 /*7*/], iLocal_234);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
								Local_194[2 /*7*/].f_6 = 4;
							}
						}
						if (FIRE::IS_ENTITY_ON_FIRE(Local_194[2 /*7*/]))
						{
							ANIMSCENE::ABORT_ANIM_SCENE(iLocal_445, false);
							Local_194[2 /*7*/].f_6 = 4;
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_58, true, 0))
						{
							if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_445, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_445) > 1.5f) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_445) < 2.77f)
							{
								TASK::TASK_HANDS_UP(Local_194[2 /*7*/], -1, Global_35, 500, true);
								Local_194[2 /*7*/].f_6 = 4;
							}
						}
					}
					break;
				case 4:
					if (func_337(44))
					{
						if (!__LIB_2__::func_618(&uLocal_246))
						{
							__LIB_8__::func_901(&uLocal_246, 1);
						}
						else if (__LIB_5__::func_51(&uLocal_246) > 1f)
						{
							PATHFIND::_0x19C7567D2F2287D6(Local_14.f_39, 4);
							Local_194[2 /*7*/].f_6 = 5;
						}
					}
					break;
				case 5:
					TASK::_TASK_FLEE_FROM_PED(Local_194[2 /*7*/], Global_35, 1863.829f, -1835.755f, 41.5321f, 200f, -1, 1024, 1077936128 /* Float: 3f */, 0);
					Local_194[2 /*7*/].f_6 = 6;
					break;
				case 6:
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[2 /*7*/]) == 0)
					{
						return true;
					}
					break;
				case 7:
					if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_2, true, 0))
					{
						func_1059(Local_194[2 /*7*/], 1897.51f, -1870.52f, 42.14f, 267.2207f, 2, 1073741824 /* Float: 2f */);
						TASK::TASK_DUCK(Local_194[2 /*7*/], -1);
						Local_194[2 /*7*/].f_6 = 0;
					}
					break;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_773(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		func_1289(0);
		iParam0 = 1;
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[3 /*7*/]))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_194[3 /*7*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1016, false))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(iLocal_1016, false);
				}
			}
			switch (Local_194[3 /*7*/].f_6)
			{
				case 0:
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1016))
					{
						iLocal_1016 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@rdtc2@ig@rsc1_ig2_raiderbehindwall@rsc1_ig2_raiderbehindwall", 32, "pbl_Cover_idle_loop", false, true);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1016, "G_M_O_UniExConfeds_01", Local_194[3 /*7*/], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1016, "Arthur", Global_35, 0);
						ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1016);
						PED::_0xB8DE69D9473B7593(Local_194[3 /*7*/], 30);
						PED::_0x57F35552E771BE9D(Local_194[3 /*7*/], 12);
						AUDIO::STOP_PED_SPEAKING(Local_194[3 /*7*/], true);
						func_1289(11);
					}
					break;
				case 11:
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1016, true, false))
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_1016);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1016, "pbl_where_You_creeps");
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1016, "pbl_thats_it_lady");
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1016, "pbl_Moves_away_from_wall");
						__LIB_1__::func_401(&(uParam1->f_178), 1);
						__LIB_2__::func_828(&(uParam1->f_178), 1);
						__LIB_2__::func_830(&(uParam1->f_178), 1);
						__LIB_1__::func_398(&(uParam1->f_178), 0);
						__LIB_2__::func_830(&(uParam1->f_178), 0);
						func_1289(12);
					}
					break;
				case 12:
					if (func_337(50))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1016, "s_cover_idle_loop", 1))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1016, "pbl_Moves_away_from_wall"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1016, "pbl_Moves_away_from_wall", true);
								__LIB_4__::func_228(&(uParam1->f_178));
								__LIB_1__::func_401(&(uParam1->f_178), 1);
								__LIB_2__::func_828(&(uParam1->f_178), 1);
								__LIB_2__::func_830(&(uParam1->f_178), 1);
								__LIB_1__::func_398(&(uParam1->f_178), 0);
								__LIB_2__::func_830(&(uParam1->f_178), 1);
								__LIB_1__::func_413(&(uParam1->f_178), 1);
								__LIB_1__::func_406(&(uParam1->f_178), 1);
								__LIB_1__::func_393(&(uParam1->f_178), 0);
								__LIB_1__::func_402(&(uParam1->f_178), 0);
								func_1289(15);
							}
						}
					}
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1016, "G_M_O_UniExConfeds_01") || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_1016, 0))
					{
						func_1289(14);
					}
					if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_53, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_55, true, 0)) && __LIB_9__::func_578(Local_194[3 /*7*/], 0, &(uParam1->f_178), &(uParam1->f_178.f_16), 0, 0)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_11, true, 0) && !func_337(50))) || FIRE::_IS_EXPLOSION_IN_VOLUME(-1, Local_14.f_11))
					{
						func_1289(13);
					}
					if (Local_194[3 /*7*/].f_6 == 12 && !func_337(50))
					{
						if (!__LIB_0__::func_27(iLocal_1017, 1))
						{
							if (func_337(49))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1016, "pbl_where_You_creeps"))
								{
									__LIB_12__::func_875(uParam1, Local_194[3 /*7*/], "EXC_YPED2", 1);
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1016, "pbl_where_You_creeps", true);
									__LIB_1__::func_683(&iLocal_1017, 1);
								}
							}
						}
						if (!__LIB_0__::func_27(iLocal_1017, 4) && __LIB_0__::func_27(iLocal_1017, 1))
						{
							if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_38, true, 0))
							{
								if (__LIB_2__::func_138(Local_194[3 /*7*/], 1, 0, 0, 0, 0))
								{
									if (func_1290(0f, 8, 0f, 16, 0f, 32, 1f, 64, 0f, 256, 2f, 128, 0))
									{
										func_1289(14);
									}
								}
								else if (func_1290(3f, 1024, 5f, 8, 7f, 2048, 5f, 16, 7f, 4096, 5f, 32, 0))
								{
									func_1290(6f, 8192, 6f, 512, 9f, 16384, 5f, 256, 9f, 1024, 6f, 4096, 1);
								}
							}
						}
					}
					break;
				case 15:
					__LIB_4__::func_228(&(uParam1->f_178));
					if (((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_11, true, 0) && __LIB_0__::func_665(Global_35, Local_194[3 /*7*/], 1, 1) < 2f) || (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1016, "G_M_O_UniExConfeds_01") && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1016, false))) || __LIB_9__::func_578(Local_194[3 /*7*/], 0, &(uParam1->f_178), &(uParam1->f_178.f_16), 0, 0))
					{
						func_1289(13);
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1016, false))
					{
						func_1289(14);
					}
					break;
				case 13:
					__LIB_12__::func_875(uParam1, Local_194[3 /*7*/], "DCH_LEMRAIDER3", 1);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1016))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1016, false))
						{
							ANIMSCENE::ABORT_ANIM_SCENE(iLocal_1016, false);
						}
						ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1016);
					}
					if (!PED::IS_PED_RAGDOLL(Local_194[3 /*7*/]))
					{
						if (__LIB_12__::func_876(uParam1, "DCH2_RCS1_IG2I", 0))
						{
							func_1289(14);
						}
					}
					else
					{
						func_1289(14);
					}
					break;
				case 14:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_194[3 /*7*/], false);
					PED::_0xFC3DB99C8144CD81(Local_194[3 /*7*/], Local_14.f_60, 0, 0, 0);
					MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[3 /*7*/]);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_194[3 /*7*/], joaat("WEAPON_MELEE_KNIFE"), 0, false))
					{
						__LIB_1__::func_766(Local_194[3 /*7*/], joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_194[3 /*7*/], 30, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_194[3 /*7*/], 57, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_194[3 /*7*/], 14, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_194[3 /*7*/], 28, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_194[3 /*7*/], 42, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_194[3 /*7*/], 1);
					TASK::TASK_COMBAT_PED(Local_194[3 /*7*/], PLAYER::PLAYER_PED_ID(), 0, 4112);
					func_1289(18);
					break;
				case 18:
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_11, true, 0))
					{
						PED::_0xFC3DB99C8144CD81(Local_194[3 /*7*/], Local_14.f_60, 0, 0, 0);
						__LIB_1__::func_948(1163459288, 0, 0f, 0, 1, 0, 0, 0);
						return true;
					}
					break;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_774(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	if (func_1267(iParam0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_479))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_194[4 /*7*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_479, false))
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_194[4 /*7*/], iLocal_479))
					{
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_479, false))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_194[4 /*7*/], 1325486911))
				{
					MISC::SET_BIT(&(Local_485[func_740(102) /*5*/]), 6);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_479, "cattleman", iLocal_1023, 1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[4 /*7*/]))
		{
			switch (Local_194[4 /*7*/].f_6)
			{
				case 0:
					iLocal_479 = ANIMSCENE::_CREATE_ANIM_SCENE("script@hideout@shadybelle@leaderSuicide", 32, 0, false, true);
					HUD::_TEXT_DATABASE_REQUEST("HSHBAUD");
					iLocal_480 = OBJECT::CREATE_OBJECT(joaat("P_CS_BULLET_R45"), 1893.32f, -1863.807f, 46.3346f, true, true, false, false, true);
					iLocal_481 = OBJECT::CREATE_OBJECT(joaat("P_CS_BULLET_R45"), 1894.854f, -1866.536f, 46.3348f, true, true, false, false, true);
					__LIB_5__::func_509(Local_194[4 /*7*/], 0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_194[4 /*7*/], 297, true);
					Local_194[4 /*7*/].f_6 = 1;
					break;
				case 1:
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_479, true, false))
					{
						Local_194[4 /*7*/].f_6 = 2;
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_479))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_479, true))
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_194[4 /*7*/], true, true);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_479, "player_zero", Global_35, 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_479, "pedLeader", Local_194[4 /*7*/], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_479, "objBullet01", iLocal_480, 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_479, "objBullet02", iLocal_481, 0);
							ANIMSCENE::LOAD_ANIM_SCENE(iLocal_479);
						}
					}
					break;
				case 2:
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_479))
					{
						Local_194[4 /*7*/].f_6 = 0;
					}
					else if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_479, "pblAction"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_479, "pblAction");
					}
					else
					{
						iLocal_1019 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1896.977f, -1860.122f, 46.9664f, 0f, 0f, 0f, 1.6f, 1.6f, 1.2f);
						VOLUME::_0x5B23DFF8E0948BB2(iLocal_1019, 1);
						ANIMSCENE::START_ANIM_SCENE(iLocal_479);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_479, "pblAction", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_479, "bBreakIdleLoop", false, false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_194[4 /*7*/], 16);
						iLocal_1023 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_479, "cattleman", true);
						Local_194[4 /*7*/].f_6 = 3;
					}
					break;
				case 3:
					if (func_337(40))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_194[4 /*7*/]) && (ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) || (!ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]) && !func_337(51))))
						{
							if ((((__LIB_2__::func_986(553939906) || __LIB_2__::func_986(357129292)) && ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_32, true, 0)) || ((__LIB_2__::func_986(58833085) || __LIB_2__::func_986(-629053815)) && ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_33, true, 0))) || ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_12, true, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_194[4 /*7*/]))
								{
									MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[4 /*7*/]);
									__LIB_3__::func_356(Local_194[4 /*7*/], -1034486097, 1);
								}
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_479, "bBreakIdleLoop", true, false);
								Local_194[4 /*7*/].f_6 = 4;
							}
						}
					}
					break;
				case 4:
					if (!HUD::_DOES_TEXT_DATABASE_EXIST("HSHBAUD"))
					{
						HUD::_TEXT_DATABASE_REQUEST("HSHBAUD");
					}
					else if (__LIB_12__::func_876(uParam1, "GL_SPEECH", 0))
					{
						Local_194[4 /*7*/].f_6 = 5;
					}
					break;
			}
		}
		else
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1019))
			{
				VOLUME::_DELETE_VOLUME(iLocal_1019);
			}
			if (func_337(46))
			{
				GRAPHICS::_ADD_BLOOD_POOL(1897.61f, -1860.31f, 46.91f, false);
			}
			if (!MISC::IS_BIT_SET(Local_485[func_740(102) /*5*/], 6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1023) && !OBJECT::DOES_PICKUP_EXIST(iLocal_1024))
				{
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1023, true, false) };
					vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1023, 2) };
					iLocal_1024 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REVOLVER_CATTLEMAN"), vVar0, vVar3, 2, -1, 2, true, 0, 0, 0f, 0);
					return false;
				}
			}
			if (!MISC::IS_BIT_SET(Local_485[func_740(102) /*5*/], 6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1023))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1023);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_775(int iParam0)
{
	if (iParam0 == 0)
	{
		Local_81[7 /*7*/].f_6 = 0;
	}
	if (func_1267(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_194[0 /*7*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_194[0 /*7*/], false);
			PED::_0xFC3DB99C8144CD81(Local_194[0 /*7*/], Local_14.f_55, 0, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS(Local_194[0 /*7*/], -1f);
			MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_194[0 /*7*/]);
			__LIB_3__::func_356(Local_194[0 /*7*/], -1034486097, 1);
		}
	}
	return true;
}

bool func_776(int iParam0, var uParam1)
{
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
				return true;
		}
	}
	return false;
}

bool func_777(int iParam0, var uParam1)
{
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				Local_262.f_61[0] = __LIB_8__::func_931(joaat("A_C_ALLIGATOR_01"), 1908.383f, -1799.175f, 41f, -162.5874f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_262.f_61[0], true);
				TASK::_0x9DE63896B176EA94(Local_262.f_61[0], 1);
				TASK::_0xC6170856E54557B2(Local_262.f_61[0], 1, 1065353216 /* Float: 1f */);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_61[0], true);
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_262.f_61[0], 1925.745f, -1826.988f, 41.1531f, 1f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
				*uParam1 = 1;
				break;
			case 1:
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_262.f_61[0], Global_35, 1, 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_262.f_61[0], 2106541073, true) == 8)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_61[0], false);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_778(int iParam0)
{
	if (func_1267(iParam0))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1891.902f, -1858.61f, 42.179f, 1f, 20000, 0.25f, 0, 40000f);
		return true;
	}
	return false;
}

bool func_779(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	if (iParam0 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("COACH2"), false);
		STREAMING::REQUEST_MODEL(joaat("WAGON04X"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_SUSANGRIMSHAW"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_MOLLYOSHEA"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_MRPEARSON"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_BILLWILLIAMSON"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_CHARLESSMITH"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_JAVIERESCUELLA"), false);
		STREAMING::REQUEST_MODEL(joaat("CS_LEOSTRAUSS"), false);
	}
	if (func_1267(iParam0))
	{
		if (((((((((STREAMING::HAS_MODEL_LOADED(joaat("CS_SUSANGRIMSHAW")) && STREAMING::HAS_MODEL_LOADED(joaat("CS_MOLLYOSHEA"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_MRPEARSON"))) && ENTITY::DOES_ENTITY_EXIST(Local_262.f_3)) && STREAMING::HAS_MODEL_LOADED(joaat("COACH2"))) && STREAMING::HAS_MODEL_LOADED(joaat("WAGON04X"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_BILLWILLIAMSON"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_CHARLESSMITH"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_JAVIERESCUELLA"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_LEOSTRAUSS")))
		{
			if (iLocal_78 == 11)
			{
				vVar0 = { 1828.406f, -1813.938f, 45.4323f };
				fVar9 = 237.6725f;
				vVar3 = { 1816.851f, -1807.93f, 47.3524f };
				fVar10 = 237.9825f;
				vVar6 = { 1797.018f, -1793.918f, 48.2186f };
				fVar11 = 237.5011f;
			}
			else
			{
				vVar0 = { 1875.89f, -1847.51f, 42.58f };
				fVar9 = 197f;
				vVar3 = { 1867.58f, -1880.71f, 42.75f };
				fVar10 = 211.9825f;
				vVar6 = { 1861.41f, -1876.43f, 42.76f };
				fVar11 = 186.5011f;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
			{
				if (iLocal_78 == 11)
				{
					Local_81[3 /*7*/] = func_586(0, 1, 0, 1839.362f, -1820.022f, 43.267f, 255.053f, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				}
				else
				{
					Local_81[3 /*7*/] = func_586(0, 1, 0, 1855.205f, -1829.618f, 42.5624f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				}
				__LIB_12__::func_875(uParam1, Local_81[3 /*7*/], "DUTCH", 1);
			}
			if (iLocal_78 == 11 || iLocal_78 == 12)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
				{
					Local_81[3 /*7*/].f_1 = func_1068(&uVar12, 0, 1, 1, 0, 0, 1, 1, 1, 1839.362f, -1820.022f, 43.267f, 255f, 0, 0, 0, 1, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_81[3 /*7*/].f_1))
					{
						PED::_SET_PED_ON_MOUNT(Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, -1, true);
					}
					return false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_10))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_10 = func_586(19, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(19) && __LIB_1__::func_22(19))
					{
						__LIB_1__::func_290(19, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_10, true);
						PED::SET_PED_INTO_VEHICLE(Local_262.f_10, Local_262.f_17, 0);
					}
				}
				else
				{
					Local_262.f_10 = func_586(19, 1, 0, 1878.767f, -1849.65f, 41.5799f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(19) && __LIB_1__::func_22(19))
					{
						__LIB_1__::func_290(19, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_9))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_9 = func_586(17, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -426171916, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(17) && __LIB_1__::func_22(17))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_9, Local_262.f_17, -1);
						__LIB_1__::func_290(17, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_9, true);
					}
				}
				else
				{
					Local_262.f_9 = func_586(17, 1, 0, 1879.64f, -1847.211f, 41.6082f, 0, 1, 1, 0, 0, 0, 0, -426171916, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(17) && __LIB_1__::func_22(17))
					{
						__LIB_1__::func_290(17, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_8))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_8 = func_586(10, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -922193456, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(10) && __LIB_1__::func_22(10))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_8, Local_262.f_18, 2);
						__LIB_1__::func_290(10, 0, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_8, true);
				}
				else
				{
					Local_262.f_8 = func_586(10, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -922193456, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(10) && __LIB_1__::func_22(10))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_8, Local_262.f_18, 2);
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_8, 0, 0);
						__LIB_1__::func_290(10, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_7))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_7 = func_586(16, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -922193456, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(16) && __LIB_1__::func_22(16))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_7, Local_262.f_17, 2);
						__LIB_1__::func_290(16, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_7, true);
					}
				}
				else
				{
					Local_262.f_7 = func_586(16, 1, 0, 1880.663f, -1855.319f, 41.7896f, 0, 1, 1, 0, 0, 0, 0, -922193456, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(16) && __LIB_1__::func_22(16))
					{
						__LIB_1__::func_290(16, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_11))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_11 = func_586(3, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(3) && __LIB_1__::func_22(3))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_11, Local_262.f_18, -1);
						__LIB_1__::func_290(3, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_7, true);
					}
				}
				else
				{
					Local_262.f_11 = func_586(3, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(3) && __LIB_1__::func_22(3))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_11, Local_262.f_18, -1);
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_11, 0, 0);
						__LIB_1__::func_290(3, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_12))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_12 = func_586(7, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(7) && __LIB_1__::func_22(7))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_12, Local_262.f_18, 0);
						__LIB_1__::func_290(7, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_12, true);
					}
				}
				else
				{
					Local_262.f_12 = func_586(7, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -2040275819, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(7) && __LIB_1__::func_22(7))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_12, Local_262.f_18, 0);
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_12, 0, 0);
						__LIB_1__::func_290(7, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_13))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_13 = func_586(2, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -1114682645, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(2) && __LIB_1__::func_22(2))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_13, Local_262.f_19, -1);
						__LIB_1__::func_290(2, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_13, true);
					}
				}
				else
				{
					Local_262.f_13 = func_586(2, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -1114682645, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(2) && __LIB_1__::func_22(2))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_13, Local_262.f_19, -1);
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_13, 0, 0);
						__LIB_1__::func_290(2, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_14))
			{
				if (iLocal_78 == 11)
				{
					Local_262.f_14 = func_586(18, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -426171916, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(18) && __LIB_1__::func_22(18))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_14, Local_262.f_19, 0);
						__LIB_1__::func_290(18, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_14, true);
					}
				}
				else
				{
					Local_262.f_14 = func_586(18, 1, 0, 1826.051f, -1819.218f, 45.6117f, 0, 1, 1, 0, 0, 0, 0, -426171916, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					if (!__LIB_13__::func_553(18) && __LIB_1__::func_22(18))
					{
						PED::SET_PED_INTO_VEHICLE(Local_262.f_14, Local_262.f_19, 0);
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_14, 0, 0);
						__LIB_1__::func_290(18, 1, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_14))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_13))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_12))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_11))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_7))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_8))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_9))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_10))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
			{
			}
			if (((((((((!ENTITY::DOES_ENTITY_EXIST(Local_262.f_14) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_13)) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_12)) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_11)) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_7)) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_8)) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_9)) || !ENTITY::DOES_ENTITY_EXIST(Local_262.f_10)) || !ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1)) || !ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_17))
			{
				Local_262.f_17 = VEHICLE::CREATE_VEHICLE(joaat("COACH2"), vVar0, fVar9, true, true, false, false);
				VEHICLE::_SET_VEHICLE_TINT(Local_262.f_17, 3);
				VEHICLE::_0x8DECD262602548B9(Local_262.f_17, 1);
				return false;
			}
			else if (((!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 0)) || !ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 1))) || !ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 2))) || !ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 3)))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_18))
			{
				Local_262.f_18 = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), vVar3, fVar10, true, true, false, false);
				VEHICLE::_SET_VEHICLE_TINT(Local_262.f_18, 9);
				if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_262.f_18))
				{
					PROPSET::_0xD80FAF919A2E56EA(Local_262.f_18, joaat("PG_MISSION_MUD1_WAGON01X"));
				}
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_19))
			{
				Local_262.f_19 = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), vVar6, fVar11, true, true, false, false);
				VEHICLE::_SET_VEHICLE_TINT(Local_262.f_19, 11);
				VEHICLE::_0x8DECD262602548B9(Local_262.f_19, 1);
				if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_262.f_19))
				{
					PROPSET::_0xD80FAF919A2E56EA(Local_262.f_19, joaat("PG_MISSION_MUD1_WAGON02X"));
				}
				return false;
			}
			PED::SET_PED_INTO_VEHICLE(Local_262.f_14, Local_262.f_19, 0);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_13, Local_262.f_19, -1);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_12, Local_262.f_18, 0);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_11, Local_262.f_18, -1);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_7, Local_262.f_17, 2);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_8, Local_262.f_18, 2);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_9, Local_262.f_17, -1);
			PED::SET_PED_INTO_VEHICLE(Local_262.f_10, Local_262.f_17, 0);
			if (iLocal_78 == 11)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_3, 1860.056f, -1839.158f, 41.6123f, 1.5391f, true, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_15))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_16))
			{
			}
			return true;
		}
	}
	return false;
}

bool func_780(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_1267(iParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_356))
		{
			VOLUME::_DELETE_VOLUME(iLocal_356);
		}
		if (iLocal_78 == 10 || iLocal_78 == 11)
		{
			if (func_1294(0, 8, Local_262.f_7, Local_262.f_8, Local_262.f_9, Local_262.f_10, Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, Local_262.f_3, Local_262.f_17))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, iVar0)))
					{
						iVar1++;
					}
					iVar0++;
				}
				if (iVar1 >= 4)
				{
					func_330(&(uParam2->f_206));
					__LIB_12__::func_957(uParam2, Local_262.f_7, "MollyOshea", 0, joaat("CS_MOLLYOSHEA"), 0);
					__LIB_12__::func_957(uParam2, Local_262.f_8, "KIERAN", 0, joaat("CS_KIERAN"), 0);
					__LIB_12__::func_957(uParam2, Local_262.f_9, "MrPearson", 0, joaat("CS_MRPEARSON"), 0);
					__LIB_12__::func_957(uParam2, Local_262.f_10, "susanGrimshaw", 0, joaat("CS_SUSANGRIMSHAW"), 0);
					__LIB_12__::func_957(uParam2, Local_81[3 /*7*/], "DUTCH", 0, joaat("CS_DUTCH"), 0);
					__LIB_12__::func_957(uParam2, Local_81[3 /*7*/].f_1, "Horse_01", 0, ENTITY::GET_ENTITY_MODEL(Local_81[3 /*7*/].f_1), 0);
					__LIB_0__::func_7(&(uParam2->f_206.f_404), 16);
					__LIB_12__::func_981(uParam2, 247633);
					__LIB_12__::func_982(uParam2, 249011);
					StringCopy(&(uParam2->f_2575), "RDTC2_RSC3A", 24);
					__LIB_12__::func_779(uParam2, 1888.119f, -1855.63f, 41.5486f);
					__LIB_12__::func_909(&(uParam2->f_206));
					__LIB_12__::func_957(uParam2, Global_35, "ARTHUR", 0, 0, 0);
					__LIB_5__::func_521(0f);
					iVar2 = 0;
					while (iVar2 < Local_194)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_194[iVar2 /*7*/]))
						{
							if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_194[iVar2 /*7*/], Local_14.f_16, true, 0))
							{
								PED::DELETE_PED(&(Local_194[iVar2 /*7*/]));
							}
						}
						iVar2++;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(PLAYER::PLAYER_PED_ID())))
						{
							Local_262.f_3 = PED::_GET_LAST_MOUNT(PLAYER::PLAYER_PED_ID());
						}
					}
					else if (__LIB_0__::func_665(Global_35, Local_262.f_3, 1, 1) > 200f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && __LIB_0__::func_665(Global_35, PED::_GET_LAST_MOUNT(Global_35), 1, 1) < 200f)
						{
							Local_262.f_3 = PED::_GET_LAST_MOUNT(Global_35);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
					{
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_17))
					{
					}
					__LIB_12__::func_957(uParam2, Local_262.f_3, "Horse_01^1", 0, 0, 0);
					__LIB_12__::func_957(uParam2, Local_262.f_17, "coach2", 0, joaat("COACH2"), 0);
					__LIB_12__::func_957(uParam2, VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 0), "Horse_01^2", 0, 0, 0);
					__LIB_12__::func_957(uParam2, VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 1), "Horse_01^3", 0, 0, 0);
					__LIB_12__::func_957(uParam2, VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 2), "Horse_01^4", 0, 0, 0);
					__LIB_12__::func_957(uParam2, VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_262.f_17, 3), "Horse_01^5", 0, 0, 0);
					__LIB_0__::func_7(&(uParam2->f_172), 16);
					return true;
				}
			}
		}
		else if (iLocal_78 == 12)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_3))
			{
			}
			if (func_1294(0, 3, Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, Local_262.f_3, 0, 0, 0, 0, 0))
			{
				__LIB_12__::func_981(uParam2, 249178);
				StringCopy(&(uParam2->f_2575), "RDTC2_RSC4", 24);
				__LIB_12__::func_779(uParam2, 2275.263f, -1371.481f, 47.1897f);
				func_330(&(uParam2->f_206));
				__LIB_13__::func_59(uParam2, Global_35, "ARTHUR", 0, 0, 0);
				__LIB_13__::func_59(uParam2, Local_81[3 /*7*/], "DUTCH", 0, joaat("CS_DUTCH"), 0);
				__LIB_13__::func_59(uParam2, Local_81[3 /*7*/].f_1, "Horse_01", 0, 0, 0);
				__LIB_13__::func_59(uParam2, Local_262.f_3, "Horse_01^1", 0, 0, 0);
				__LIB_12__::func_909(&(uParam2->f_206));
				__LIB_0__::func_7(&(uParam2->f_172), 16);
				return true;
			}
		}
	}
	else if (iParam0 == 2)
	{
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam1) /*5*/]), 0);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam1) /*5*/]), 2);
		MISC::CLEAR_BIT(&(Local_485[func_740(iParam1) /*5*/]), 3);
	}
	return false;
}

bool func_781(int iParam0, var uParam1)
{
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_17))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_262.f_17, 3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_18))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_262.f_18, 3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_19))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_262.f_19, 3);
				}
				if (__LIB_1__::func_22(19) && !__LIB_13__::func_553(19))
				{
					__LIB_13__::func_558(19, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(17) && !__LIB_13__::func_553(17))
				{
					__LIB_13__::func_558(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(10) && !__LIB_13__::func_553(10))
				{
					__LIB_13__::func_558(10, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(16) && !__LIB_13__::func_553(16))
				{
					__LIB_13__::func_558(16, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(1) && !__LIB_13__::func_553(1))
				{
					__LIB_13__::func_558(1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(2) && !__LIB_13__::func_553(2))
				{
					__LIB_13__::func_558(2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(18) && !__LIB_13__::func_553(18))
				{
					__LIB_13__::func_558(18, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(3) && !__LIB_13__::func_553(3))
				{
					__LIB_13__::func_558(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				func_414();
				__LIB_12__::func_86(3);
				__LIB_0__::func_326(4096);
				__LIB_11__::func_381(0);
				__LIB_4__::func_845(1, 0);
				*uParam1 = 1;
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_18) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_18, 0))
				{
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_19) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_19, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_13, 0, 0);
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_262.f_14, 0, 0);
					PED::SET_PED_KEEP_TASK(Local_262.f_13, true);
					PED::SET_PED_KEEP_TASK(Local_262.f_14, true);
					__LIB_1__::func_290(2, 1, 0);
					__LIB_1__::func_290(18, 1, 0);
					__LIB_13__::func_558(2, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(18, 0, 0, 1, 0f, 1, 1, 0, 0, 0, 0);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_782(int iParam0)
{
	if (func_1267(iParam0))
	{
		MISC::CLEAR_AREA(Local_262, 10f, 65536);
	}
	return false;
}

bool func_783(int iParam0, var uParam1)
{
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				STREAMING::REMOVE_ANIM_DICT("script_rc@rdtc2@ig@rsc1_ig0_guardinbalcony");
				STREAMING::REMOVE_ANIM_DICT("script_rc@dtc2@leadin@rsc_4");
				STREAMING::REMOVE_ANIM_DICT("AI_DAMAGE@DEAD@BASE");
				STREAMING::REMOVE_ANIM_DICT("mech_pickup@object");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_RIFLE_BOLTACTION")));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_REVOLVER_CATTLEMAN")));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_EDGARROSS"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_MILTONANDREWS"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_ALLIGATOR_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BULLET_R45"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_UNIEXCONFEDS_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_O_UNIEXCONFEDS_01"));
				OBJECT::DELETE_OBJECT(&(Local_262.f_78));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_CHAIR04X"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_SIDETABLE02X"));
				func_415();
				*uParam1 = 1;
				break;
			case 1:
				if (func_337(77))
				{
					__LIB_13__::func_558(2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(18, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(16, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(10, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(19, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_13__::func_558(1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_17))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_262.f_17));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_18))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_262.f_18));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_19))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_262.f_19));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("COACH2"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("WAGON04X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_SUSANGRIMSHAW"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_MOLLYOSHEA"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_MRPEARSON"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_BILLWILLIAMSON"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_CHARLESSMITH"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_JAVIERESCUELLA"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_LEOSTRAUSS"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_LUMBER16X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_LUMBER08X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_TABLE39X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_COUCH08X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATEBRAND01X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE01X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BOOKCASE05X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIRCOMFY02"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIRCOMFY11X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BARREL05B"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_NEWSPAPERSTACK01X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATETNT03X"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_SHUTTER01WOOD"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_SIDETABLE02X"));
					if (iLocal_1021 != 0)
					{
						if (ENTITY::_0x1FF441D7954F8709(iLocal_1021))
						{
							ENTITY::_0xD2B9C78537ED5759(iLocal_1021);
						}
					}
					if (iLocal_1022 != 0)
					{
						if (ENTITY::_0x1FF441D7954F8709(iLocal_1022))
						{
							ENTITY::_0xD2B9C78537ED5759(iLocal_1022);
						}
					}
					STREAMING::_REMOVE_IMAP(-646014955);
					func_416();
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_bosb", true);
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1020, "shb_p_mansion_05", true);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_784(int iParam0)
{
	if (func_1267(iParam0))
	{
		if (__LIB_6__::func_903("DCH2_DUARTALK"))
		{
			__LIB_6__::func_900("DCH2_DUARTALK", 1, 0);
			return true;
		}
	}
	return false;
}

bool func_785(int iParam0)
{
	if (func_1267(iParam0))
	{
		switch (iLocal_78)
		{
			case 2:
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					iLocal_78 = 3;
				}
				break;
			case 4:
				if (func_337(23))
				{
					iLocal_78 = 5;
				}
				break;
			case 5:
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
				{
					iLocal_78 = 6;
				}
				break;
			case 6:
				if ((func_337(50) || __LIB_2__::func_986(553939906)) || __LIB_2__::func_986(357129292))
				{
					iLocal_78 = 7;
				}
				break;
			case 7:
				if (func_337(50) && (__LIB_2__::func_986(553939906) || __LIB_2__::func_986(357129292)))
				{
					iLocal_78 = 8;
				}
				break;
		}
	}
	return false;
}

bool func_786(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (iParam0 == 0)
	{
		iLocal_442 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@rdtc2_deadBody", 0, 0, false, true);
		iLocal_443 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@rdtc2_timelapse", 0, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_442);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_443);
	}
	if (func_1267(iParam0))
	{
		switch (*uParam1)
		{
			case 0:
				if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_442, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_443, true, false)) && func_337(79))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1025))
					{
						bLocal_1037 = true;
						MAP::DISPLAY_RADAR(false);
						vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1025, false, false) };
						fVar6 = __LIB_3__::func_978(Global_35, iLocal_1025, 1);
						vVar3 = { 0f, 0f, fVar6 };
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_442, vVar0, vVar3, 2);
						ANIMSCENE::START_ANIM_SCENE(iLocal_442);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 1902.205f, -1827.684f, 41.0703f, 1f, 20000, 0.25f, 0, 40000f);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
						if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
						{
							CAM::_0x90DA5BA5C2635416();
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_81[7 /*7*/]))
						{
							__LIB_13__::func_558(1, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						}
						*uParam1 = 1;
					}
				}
				break;
			case 1:
			case 2:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_442, false) && *uParam1 == 1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_3, 1861.724f, -1827.377f, 42.2435f, 84.5823f, true, false, true);
					*uParam1 = 2;
				}
				MAP::DISPLAY_RADAR(false);
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_442))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_443);
					*uParam1 = 3;
				}
				break;
			case 3:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_443, false))
				{
					if (func_338(301))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_443) > 5f)
						{
							if (!PED::IS_PED_ON_MOUNT(Local_81[3 /*7*/]))
							{
								PED::_SET_PED_ON_MOUNT(Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, -1, true);
							}
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_81[3 /*7*/], "rcm_dutch2_dutch_shadybelle", 0, 34, -1, 0, 0, -1);
							if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_9))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_9, Local_262.f_17, "rcm_dutch2_wagon_shadybelle", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_11))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_11, Local_262.f_18, "rcm_dutch2_wagon_shadybelleB", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_13))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_13, Local_262.f_19, "rcm_dutch2_wagon_shadybelleC", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_11, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_13, true);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_17, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_18, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_19, 5f);
							PED::FORCE_PED_MOTION_STATE(Local_81[3 /*7*/].f_1, -1415276238, false, 0, false);
							ENTITY::SET_ENTITY_COORDS(Global_35, 1894.396f, -1857.315f, 42.1507f, true, false, true, true);
							*uParam1 = 4;
						}
					}
					else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_443) > 5f)
					{
					}
				}
				break;
			case 4:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_81[3 /*7*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_81[3 /*7*/], 1.501f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_262.f_9, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_9, 5f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_17, 0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_17, 5f);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_18, 0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_18, 5f);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_19, 0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_19, 5f);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_18, 3.5f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_19, 3.5f);
				if ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_443) > 0.95f || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_443)) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_443, 0))
				{
					MAP::DISPLAY_RADAR(true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_787(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		func_1280();
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81[3 /*7*/], false);
	}
	if (func_1267(iParam0))
	{
		func_1275(Local_81[3 /*7*/], &uLocal_474);
		switch (*uParam1)
		{
			case 0:
				*uParam1 = 1;
				break;
			case 1:
				if (__LIB_0__::func_94(Local_81[3 /*7*/], 1884.254f, -1719.211f, 41.6073f, 1) < 40f)
				{
					func_1303(1, 1, -1061158912 /* Float: -6f */);
					*uParam1 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_94(Local_81[3 /*7*/], 1922.635f, -1728.487f, 41.6355f, 1) < 10f)
				{
					func_1303(1, 0, -1061158912 /* Float: -6f */);
					*uParam1 = 3;
				}
				break;
		}
		if (func_1282(0, Local_262, 1, 0, 12f))
		{
			return true;
		}
	}
	return false;
}

bool func_788(int iParam0, var uParam1, var uParam2)
{
	if (func_1267(iParam0))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		switch (*uParam1)
		{
			case 0:
				if (__LIB_12__::func_876(uParam2, "DCH2_RSC4_LI", 0))
				{
					*uParam1 = 1;
					__LIB_8__::func_901(&uLocal_255, 0);
				}
				break;
			case 1:
				if (__LIB_5__::func_51(&uLocal_255) > 1f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_PLAY_ANIM(0, "script_rc@dtc2@leadin@rsc_4", "leadin_player", 8f, -8f, -1, 18, 0f, false, 0, false, 0, false);
					TASK::TASK_ACHIEVE_HEADING(0, -107f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_PLAY_ANIM(Local_81[3 /*7*/], "script_rc@dtc2@leadin@rsc_4", "leadin_dutch", 8f, -4f, -1, 2, 0f, false, 0, false, 0, false);
					if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_3, true);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_81[3 /*7*/], -2017877118, true) == 1 && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_81[3 /*7*/], "script_rc@dtc2@leadin@rsc_4", "leadin_dutch") >= 0.95f)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_789(int iParam0)
{
	if (func_1267(iParam0))
	{
		PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_29, 0, 0, 0);
		__LIB_6__::func_357();
		return true;
	}
	return false;
}

bool func_790(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = -1f;
	iVar3 = -1;
	if (func_1267(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < Local_194)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_194[iVar0 /*7*/]))
			{
				fVar1 = __LIB_0__::func_665(Global_35, Local_194[iVar0 /*7*/], 1, 1);
				if (fVar1 < 3f)
				{
					if (fVar1 < fVar2 || fVar2 == -1f)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
			iVar0++;
		}
		if (iVar3 != -1)
		{
			if (iLocal_1057 != -1)
			{
				if (iLocal_1057 != iVar3)
				{
					HUD::_UIPROMPT_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION();
				}
			}
			iLocal_1057 = iVar3;
			HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(Local_194[iVar3 /*7*/]);
		}
		if (iVar3 == -1)
		{
			HUD::_UIPROMPT_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION();
		}
	}
	return false;
}

bool func_791(int iParam0)
{
	if (func_1267(iParam0))
	{
		switch (iLocal_78)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				__LIB_0__::func_267(1);
				LAW::_0x710448D44A64C213(true);
				break;
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				__LIB_0__::func_267(0);
				LAW::_0x710448D44A64C213(false);
				break;
			case 12:
				__LIB_0__::func_267(1);
				LAW::_0x710448D44A64C213(true);
				break;
			case 13:
				__LIB_0__::func_267(0);
				LAW::_0x710448D44A64C213(false);
				break;
		}
		return true;
	}
	else if (iParam0 == 2)
	{
		func_741(45);
	}
	return false;
}

bool func_792(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (func_1267(iParam0))
	{
		if (*uParam2 == 0)
		{
			if (bParam4)
			{
				if (__LIB_5__::func_463() || __LIB_6__::func_904())
				{
					__LIB_5__::func_20(iParam5, 0);
				}
			}
			if (bParam6)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_436))
				{
					if (AUDIO::_0xD89504D9D7D5057D(sLocal_436))
					{
						AUDIO::PAUSE_SCRIPTED_CONVERSATION(sLocal_436, true, false, true, true);
						__LIB_2__::func_608(&uLocal_437);
					}
				}
			}
			*uParam2 = 1;
		}
		if (*uParam2 == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_436))
			{
				if (AUDIO::_0xD89504D9D7D5057D(sLocal_436))
				{
				}
			}
			if (!__LIB_6__::func_904() || (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_436) && (bParam6 && !AUDIO::_0x1ECC76792F661CF5(sLocal_436))))
			{
				if (bParam6)
				{
					if (!__LIB_2__::func_618(&uLocal_437))
					{
						__LIB_8__::func_901(&uLocal_437, 1);
					}
					else if (__LIB_5__::func_51(&uLocal_437) > 0.2f)
					{
						if (__LIB_12__::func_876(uParam3, func_1304(iParam1), 0))
						{
							__LIB_2__::func_608(&uLocal_437);
							*uParam2 = 5;
						}
					}
				}
				else
				{
					sLocal_436 = func_1304(iParam1);
					if (__LIB_12__::func_876(uParam3, func_1304(iParam1), 0))
					{
						*uParam2 = 5;
					}
				}
			}
		}
		else if (*uParam2 == 5)
		{
			if (__LIB_6__::func_903(func_1304(iParam1)))
			{
				if (__LIB_10__::func_578(func_1304(iParam1)))
				{
				}
			}
			if (!__LIB_8__::func_684(func_1304(iParam1)) && !(__LIB_6__::func_903(func_1304(iParam1)) && __LIB_10__::func_578(func_1304(iParam1))))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_436))
				{
					if (__LIB_6__::func_903(sLocal_436) && __LIB_10__::func_578(sLocal_436))
					{
						AUDIO::RESTART_SCRIPTED_CONVERSATION(sLocal_436);
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_794(var uParam0, char* sParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam5))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam5, 1, 1);
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Global_35, vParam2, 1);
	}
	if (fVar0 >= fParam9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (!bParam6 || ENTITY::IS_ENTITY_OCCLUDED(iParam5))
			{
				StringCopy(&(uParam0->f_2578), sParam1->f_1, 24);
				return 2;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam1->f_1, 24);
			return 2;
		}
	}
	else if (fVar0 > fParam8)
	{
		if (!sParam1->f_2)
		{
			__LIB_1__::func_422(*sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
			sParam1->f_2 = 1;
		}
		return 1;
	}
	else
	{
		if (fVar0 < fParam7)
		{
			__LIB_10__::func_597(*sParam1);
			if (sParam1->f_2)
			{
			}
			sParam1->f_2 = 0;
		}
		return 0;
	}
	return 0;
}

bool func_798(var uParam0, int iParam1, int iParam2)
{
	if (func_1267(iParam1))
	{
		if (Local_485[func_740(iParam2) /*5*/].f_2 == 0)
		{
			__LIB_12__::func_883(uParam0, "DUTCH21_PC05", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			Local_485[func_740(iParam2) /*5*/].f_2 = 1;
			return true;
		}
	}
	return false;
}

bool func_799(var uParam0, int iParam1, int iParam2)
{
	if (func_1267(iParam1))
	{
		if (!MAP::DOES_BLIP_EXIST(Local_262.f_74))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_4[1]))
			{
				PED::_0x6569F31A01B4C097(Local_262.f_4[1], 4, 0);
				if (MAP::DOES_BLIP_EXIST(iLocal_432))
				{
					MAP::REMOVE_BLIP(&iLocal_432);
				}
				Local_262.f_74 = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, Local_262.f_4[1]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_74, "DUTCH22_BLIP_BODY");
				MAP::_BLIP_SET_MODIFIER(Local_262.f_74, -401963276);
				__LIB_0__::func_745(1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_12__::func_883(uParam0, "DUTCH21_PC02", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
	}
	else if (iParam1 == 2)
	{
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 0);
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 2);
		return true;
	}
	return false;
}

bool func_800(var uParam0, int iParam1, int iParam2)
{
	if (func_1267(iParam1))
	{
		if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
		{
			if (!func_337(56))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_12__::func_883(uParam0, "DUTCH21_PC03", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_900(1);
				if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_74));
				}
			}
		}
	}
	else if (iParam1 == 2)
	{
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 0);
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 2);
		return true;
	}
	return false;
}

bool func_801(var uParam0, int iParam1, int iParam2)
{
	if (func_1267(iParam1))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_433))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_432))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_12__::func_883(uParam0, "DUTCH21_PC03b", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_745(1);
				if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
				{
					MAP::REMOVE_BLIP(&(Local_262.f_74));
				}
				iLocal_432 = __LIB_5__::func_554(408396114, Local_14.f_16, 1);
			}
		}
	}
	else if (iParam1 == 2)
	{
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 0);
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 2);
		return true;
	}
	return false;
}

bool func_802(var uParam0, int iParam1)
{
	int iVar0;
	if (func_1267(iParam1))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_432))
		{
			MAP::REMOVE_BLIP(&iLocal_432);
		}
		if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
		{
			MAP::REMOVE_BLIP(&(Local_262.f_74));
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[2 /*7*/]) != 0)
		{
			if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_194[2 /*7*/]))
			{
				iVar0 = MAP::GET_BLIP_FROM_ENTITY(Local_194[2 /*7*/]);
				MAP::REMOVE_BLIP(&iVar0);
			}
			PED::_0x6569F31A01B4C097(Local_194[2 /*7*/], 4, 0);
			Local_194[2 /*7*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, Local_194[2 /*7*/]);
			MAP::_BLIP_SET_MODIFIER(Local_194[2 /*7*/].f_2, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_194[2 /*7*/].f_2, "DUTCH22_BLIP_BODY");
			ENTITY::_0x18FF3110CF47115D(Local_194[2 /*7*/], 7, 1);
			ENTITY::_0x18FF3110CF47115D(Local_194[2 /*7*/], 14, 0);
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[3 /*7*/]) != 0)
		{
			if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_194[3 /*7*/]))
			{
				iVar0 = MAP::GET_BLIP_FROM_ENTITY(Local_194[3 /*7*/]);
				MAP::REMOVE_BLIP(&iVar0);
			}
			PED::_0x6569F31A01B4C097(Local_194[3 /*7*/], 4, 0);
			Local_194[3 /*7*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, Local_194[3 /*7*/]);
			MAP::_BLIP_SET_MODIFIER(Local_194[3 /*7*/].f_2, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_194[3 /*7*/].f_2, "DUTCH22_BLIP_BODY");
			ENTITY::_0x18FF3110CF47115D(Local_194[3 /*7*/], 7, 1);
			ENTITY::_0x18FF3110CF47115D(Local_194[3 /*7*/], 14, 0);
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[0 /*7*/]) != 0)
		{
			if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_194[0 /*7*/]))
			{
				iVar0 = MAP::GET_BLIP_FROM_ENTITY(Local_194[0 /*7*/]);
				MAP::REMOVE_BLIP(&iVar0);
			}
			PED::_0x6569F31A01B4C097(Local_194[0 /*7*/], 4, 0);
			Local_194[0 /*7*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, Local_194[0 /*7*/]);
			MAP::_BLIP_SET_MODIFIER(Local_194[0 /*7*/].f_2, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_194[0 /*7*/].f_2, "DUTCH22_BLIP_BODY");
			ENTITY::_0x18FF3110CF47115D(Local_194[0 /*7*/], 7, 1);
			ENTITY::_0x18FF3110CF47115D(Local_194[0 /*7*/], 14, 0);
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_194[4 /*7*/]) != 0)
		{
			if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_194[4 /*7*/]))
			{
				iVar0 = MAP::GET_BLIP_FROM_ENTITY(Local_194[4 /*7*/]);
				MAP::REMOVE_BLIP(&iVar0);
			}
			PED::_0x6569F31A01B4C097(Local_194[4 /*7*/], 4, 0);
			Local_194[4 /*7*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, Local_194[4 /*7*/]);
			MAP::_BLIP_SET_MODIFIER(Local_194[4 /*7*/].f_2, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_194[4 /*7*/].f_2, "DUTCH22_BLIP_BODY");
			ENTITY::_0x18FF3110CF47115D(Local_194[4 /*7*/], 7, 1);
			ENTITY::_0x18FF3110CF47115D(Local_194[4 /*7*/], 14, 0);
		}
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_12__::func_883(uParam0, "DUTCH21_PC06", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		return true;
	}
	return false;
}

bool func_803(var uParam0, int iParam1)
{
	if (func_1267(iParam1))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_432) && !func_337(59))
		{
			if (MAP::DOES_BLIP_EXIST(Local_194[3 /*7*/].f_2))
			{
				MAP::REMOVE_BLIP(&(Local_194[3 /*7*/].f_2));
				PED::_0x6569F31A01B4C097(Local_194[3 /*7*/], 4, 1);
			}
			if (MAP::DOES_BLIP_EXIST(Local_194[0 /*7*/].f_2))
			{
				MAP::REMOVE_BLIP(&(Local_194[0 /*7*/].f_2));
				PED::_0x6569F31A01B4C097(Local_194[0 /*7*/], 4, 1);
			}
			if (MAP::DOES_BLIP_EXIST(Local_194[4 /*7*/].f_2))
			{
				MAP::REMOVE_BLIP(&(Local_194[4 /*7*/].f_2));
				PED::_0x6569F31A01B4C097(Local_194[4 /*7*/], 4, 1);
			}
			if (MAP::DOES_BLIP_EXIST(Local_194[2 /*7*/].f_2))
			{
				MAP::REMOVE_BLIP(&(Local_194[2 /*7*/].f_2));
				PED::_0x6569F31A01B4C097(Local_194[2 /*7*/], 4, 1);
			}
			if (MAP::DOES_BLIP_EXIST(Local_194[2 /*7*/].f_2))
			{
				MAP::REMOVE_BLIP(&(Local_194[0 /*7*/].f_2));
				PED::_0x6569F31A01B4C097(Local_194[0 /*7*/], 4, 1);
			}
			if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
			{
				MAP::REMOVE_BLIP(&(Local_262.f_74));
			}
			iLocal_432 = __LIB_5__::func_554(408396114, Local_14.f_16, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_432, "DUTCH22_BLIP_SWAMP");
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_12__::func_883(uParam0, "DUTCH21_PC03b", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
	}
	else if (iParam1 == 2)
	{
		MISC::SET_BIT(&(Local_485[func_740(310) /*5*/]), 0);
		MISC::SET_BIT(&(Local_485[func_740(310) /*5*/]), 2);
		return true;
	}
	return false;
}

bool func_804(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (func_1267(iParam1))
	{
		Local_1048.f_1 = "DUTCH21_FA07";
		Local_1048 = "DUTCH21_RESB";
		iLocal_1051 = func_794(uParam0, &Local_1048, 1887.177f, -1855.274f, 41.5454f, 0, 0, 60f, 90f, 150f);
		if (iLocal_1051 == 1)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_433))
			{
				iLocal_433 = __LIB_4__::func_983(408396114, 1887.177f, -1855.274f, 41.5454f, 1);
				iVar0 = 0;
				while (iVar0 < Local_194)
				{
					if (MAP::DOES_BLIP_EXIST(Local_194[iVar0 /*7*/].f_2))
					{
						MAP::_BLIP_SET_MODIFIER(Local_194[iVar0 /*7*/].f_2, -1186550032);
					}
					iVar0++;
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_432))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_432, -1186550032);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
				{
					MAP::_BLIP_SET_MODIFIER(Local_262.f_74, -1186550032);
				}
				if (__LIB_1__::func_685(1))
				{
					__LIB_0__::func_745(1);
					MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 6);
				}
			}
		}
		else if (iLocal_1051 == 0)
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_433))
			{
				__LIB_0__::func_769();
				iVar0 = 0;
				while (iVar0 < Local_194)
				{
					if (MAP::DOES_BLIP_EXIST(Local_194[iVar0 /*7*/].f_2))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_194[iVar0 /*7*/].f_2, -1186550032);
						__LIB_13__::func_89(uParam0, "DUTCH21_PC06", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					iVar0++;
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_432))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_432, -1186550032);
					__LIB_13__::func_89(uParam0, "DUTCH21_PC03b", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				if (MAP::DOES_BLIP_EXIST(Local_262.f_74))
				{
					__LIB_13__::func_89(uParam0, "DUTCH21_PC02", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					MAP::_BLIP_REMOVE_MODIFIER(Local_262.f_74, -1186550032);
				}
				if (MISC::IS_BIT_SET(Local_485[func_740(iParam2) /*5*/], 6))
				{
					__LIB_0__::func_900(1);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam2) /*5*/]), 6);
					__LIB_13__::func_89(uParam0, "DUTCH21_PC03", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				MAP::REMOVE_BLIP(&iLocal_433);
			}
		}
	}
	return false;
}

bool func_805(var uParam0, int iParam1, int iParam2)
{
	if (func_1267(iParam1))
	{
		if (!MAP::DOES_BLIP_EXIST(Local_262.f_74))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1025))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_432))
				{
					MAP::REMOVE_BLIP(&iLocal_432);
				}
				Local_262.f_74 = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, iLocal_1025);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_74, "DUTCH22_BLIP_BODY");
				if (iLocal_1025 != Local_194[0 /*7*/])
				{
					ENTITY::_0x18FF3110CF47115D(Local_194[0 /*7*/], 7, 0);
				}
				if (iLocal_1025 != Local_194[1 /*7*/])
				{
					ENTITY::_0x18FF3110CF47115D(Local_194[1 /*7*/], 7, 0);
				}
				if (iLocal_1025 != Local_194[2 /*7*/])
				{
					ENTITY::_0x18FF3110CF47115D(Local_194[2 /*7*/], 7, 0);
				}
				if (iLocal_1025 != Local_194[3 /*7*/])
				{
					ENTITY::_0x18FF3110CF47115D(Local_194[3 /*7*/], 7, 0);
				}
				if (iLocal_1025 != Local_194[4 /*7*/])
				{
					ENTITY::_0x18FF3110CF47115D(Local_194[4 /*7*/], 7, 0);
				}
				MAP::_BLIP_SET_MODIFIER(Local_262.f_74, -401963276);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_12__::func_883(uParam0, "DUTCH21_PC02", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
	}
	else if (iParam1 == 2)
	{
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 0);
		MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 2);
		return true;
	}
	return false;
}

bool func_806(int iParam0, var uParam1, int iParam2)
{
	if (func_1267(iParam0))
	{
		if (!MISC::IS_BIT_SET(Local_485[func_740(iParam2) /*5*/], 6))
		{
			__LIB_13__::func_89(uParam1, "DUTCH22_OBJ", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_900(0);
			func_741(409);
			MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 6);
		}
		else
		{
			Local_1048.f_1 = "DUTCH21_FA08";
			Local_1048 = "DUTCH21_REDU";
			iLocal_1051 = func_794(uParam1, &Local_1048, 0f, 0f, 0f, Local_81[3 /*7*/], 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
			if (iLocal_1051 == 1)
			{
				MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 8);
			}
			else if (iLocal_1051 == 0)
			{
				if (MISC::IS_BIT_SET(Local_485[func_740(iParam2) /*5*/], 8))
				{
					__LIB_13__::func_89(uParam1, "DUTCH22_OBJ", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam2) /*5*/]), 8);
				}
			}
		}
	}
	return false;
}

bool func_807(int iParam0, var uParam1, int iParam2)
{
	if (func_1267(iParam0))
	{
		if (!MISC::IS_BIT_SET(Local_485[func_740(iParam2) /*5*/], 6))
		{
			__LIB_1__::func_718(7);
			__LIB_0__::func_745(0);
			__LIB_13__::func_89(uParam1, "DUTCH21_MNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_628(405);
			MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 6);
		}
		else
		{
			Local_1048.f_1 = "DUTCH21_FA08";
			Local_1048 = "DUTCH21_REHR";
			iLocal_1051 = func_794(uParam1, &Local_1048, 0f, 0f, 0f, __LIB_0__::func_398(7), 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
			if (iLocal_1051 == 1)
			{
				MISC::SET_BIT(&(Local_485[func_740(iParam2) /*5*/]), 8);
			}
			else if (iLocal_1051 == 0)
			{
				if (MISC::IS_BIT_SET(Local_485[func_740(iParam2) /*5*/], 8))
				{
					__LIB_13__::func_89(uParam1, "DUTCH21_MNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					MISC::CLEAR_BIT(&(Local_485[func_740(iParam2) /*5*/]), 8);
				}
			}
			if (PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
			{
				__LIB_1__::func_721(7);
				__LIB_0__::func_900(0);
				__LIB_13__::func_89(uParam1, "DUTCH22_OBJ", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_741(405);
				return true;
			}
		}
	}
	return false;
}

int func_837(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = __LIB_0__::func_700(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = __LIB_0__::func_909(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			break;
		case 8:
			iVar2 = __LIB_0__::func_76(iParam0);
			switch (iVar2)
			{
				case 120:
					return joaat("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return joaat("CSTAG_FLOW_RABI1_POST");
				case 63:
					return joaat("CSTAG_FLOW_RDST2_POST");
				case 97:
					return joaat("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return joaat("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return joaat("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return joaat("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return joaat("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return joaat("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return joaat("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return joaat("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return joaat("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return joaat("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return joaat("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return joaat("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return joaat("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return joaat("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return joaat("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return joaat("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return joaat("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return joaat("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return joaat("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return joaat("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return joaat("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return joaat("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return joaat("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return joaat("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return joaat("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return joaat("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return joaat("CSTAG_FLOW_RDST61_POST");
				case 65:
					return joaat("CSTAG_FLOW_RDST62_POST");
				case 108:
					return joaat("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return joaat("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return joaat("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return joaat("CSTAG_FLOW_RABI3_POST");
				case 96:
					return joaat("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return joaat("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			break;
		case 11:
			iVar3 = __LIB_0__::func_76(iParam0);
			switch (iVar3)
			{
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
					return joaat("CSTAG_FLOW_CA_HR01_POST");
					return joaat("CSTAG_FLOW_CA_CR02_POST");
					return joaat("CSTAG_FLOW_CA_CR03_POST");
					return joaat("CSTAG_FLOW_CA_FS02_POST");
					return joaat("CSTAG_FLOW_CA_HT06_POST");
					return joaat("CSTAG_FLOW_CA_BR01_POST");
					return joaat("CSTAG_FLOW_CA_CR01_POST");
					return joaat("CSTAG_FLOW_CA_CR04_POST");
					return 176656832;
				}
int func_838(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

bool func_846(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_846(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_846(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_846(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_846(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_846(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_846(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_846(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_846(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_846(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_846(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_846(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_848()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1413();
	func_1414();
	func_1415();
	func_1416();
	func_1417();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_849(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1420(iParam0, 1, 1, -142743235, 1);
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

void func_884()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1453(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_1005(var uParam0, int iParam1, int iParam2)
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
		return func_1005(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1059(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1059(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1059(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1068(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1585(iParam1, bParam3, bParam8, fParam9, fParam10, fParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

bool func_1073(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_379(uParam0, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*uParam1 = uParam0->f_2572;
		return true;
	}
	return false;
}

void func_1086(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		__LIB_1__::func_68(iVar0, -1);
		__LIB_1__::func_69(iVar0, 0);
		__LIB_1__::func_70(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
		}
		iVar0 = (iVar0 + 1);
	}
}

void func_1169(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1651();
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

void func_1171(var uParam0)
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
			func_1059(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1059(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1172(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1059(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1260(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x640A602946A8C972(*uParam0);
	iVar1 = TASK::_0x849791EBBDBA0362(*uParam0);
	iVar2 = TASK::_0x01AF8A3729231A43(*uParam0);
	if (iVar2 <= 0)
	{
		if (bParam1)
		{
			if (iVar1 >= iVar0)
			{
				return 1;
			}
		}
		else if (iVar1 >= 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_1266(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 != 1)
	{
		iVar0 = 0;
		while (iVar0 < Local_485)
		{
			if (Local_485[iVar0 /*5*/].f_1 == iParam0)
			{
				if (iVar0 < func_740(iParam1))
				{
					MISC::SET_BIT(&(Local_485[iVar0 /*5*/]), 2);
				}
			}
			iVar0++;
		}
	}
}

bool func_1267(int iParam0)
{
	if (iParam0 == 1 || iParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_1270(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	iLocal_365[iLocal_431] = OBJECT::CREATE_OBJECT(iParam0, vParam1, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_365[iLocal_431], vParam4, iParam7, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_365[iLocal_431], false);
	ENTITY::SET_ENTITY_DYNAMIC(iLocal_365[iLocal_431], false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_365[iLocal_431], true);
	iLocal_431++;
}

void func_1275(int iParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
	if ((iVar0 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_491(iParam0, 716706914)) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 716706914, true) != 6)
	{
		if ((PED::IS_PED_SHOOTING(iParam0) || PED::IS_PED_IN_COMBAT(iParam0, 0)) || PED::IS_PED_SHOOTING(Global_35))
		{
			if (__LIB_2__::func_618(uParam1))
			{
				__LIB_2__::func_608(uParam1);
			}
		}
		else if (!__LIB_2__::func_618(uParam1))
		{
			__LIB_5__::func_107(uParam1);
		}
		else if (__LIB_5__::func_51(uParam1) >= 1.5f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 1, 0, 0);
			__LIB_5__::func_107(uParam1);
		}
	}
}

Vector3 func_1277(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4[4];
	fVar1 = 999999f;
	vVar4[0 /*3*/] = { vParam1 };
	vVar4[1 /*3*/] = { vParam4 };
	vVar4[2 /*3*/] = { vParam7 };
	vVar4[3 /*3*/] = { vParam10 };
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		fVar2 = __LIB_0__::func_94(iParam0, vVar4[iVar0 /*3*/], 1);
		if (fVar2 < fVar1)
		{
			fVar1 = fVar2;
			iVar3 = iVar0;
		}
		iVar0++;
	}
	return vVar4[iVar3 /*3*/];
}

void func_1280()
{
	__LIB_13__::func_545(0);
}

bool func_1282(int iParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<11> Var4;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	vector3 vVar22;
	iVar0 = __LIB_0__::func_167(iParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_735() != 12)
		{
			if (func_735() != 11)
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (__LIB_0__::func_94(iVar0, vParam1, 1) < fParam6)
					{
						if (iParam4 == 1)
						{
							__LIB_13__::func_545(11);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar0, "rcm_dutch2_dutch_bridge", 0, 8, -1, 0, 1, -1);
						}
					}
				}
			}
			if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				iVar1 = 0;
			}
			if (PED::IS_PED_ON_MOUNT(__LIB_0__::func_167(iParam0)))
			{
				iVar2 = PED::GET_MOUNT(__LIB_0__::func_167(iParam0));
			}
			else
			{
				iVar2 = 0;
			}
			if ((iVar2 == 0 && func_735() >= 8) && iLocal_461 == 0)
			{
				__LIB_13__::func_545(0);
			}
			switch (func_735())
			{
				case 0:
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 713668775, true) == 8)
					{
						if (!FIRE::IS_ENTITY_ON_FIRE(iVar0))
						{
							if (iVar2 == 0)
							{
								if ((((!PED::IS_PED_ON_MOUNT(__LIB_0__::func_167(iParam0)) && !PED::IS_PED_INJURED(__LIB_0__::func_177(iParam0))) && PED::_0x2D64376CF437363E(__LIB_0__::func_177(iParam0))) && __LIB_0__::func_177(iParam0) != iVar1) && __LIB_0__::func_665(__LIB_0__::func_177(iParam0), __LIB_0__::func_167(iParam0), 1, 1) < 25f)
								{
									__LIB_13__::func_545(5);
								}
								else
								{
									__LIB_18__::func_612(iParam0);
									if (__LIB_0__::func_177(iParam0) == iVar1)
									{
										__LIB_13__::func_545(2);
									}
									else
									{
										__LIB_13__::func_545(1);
									}
								}
							}
							else
							{
								__LIB_13__::func_545(6);
							}
						}
					}
					break;
				case 1:
					if (func_1756(iParam0) || ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_177(iParam0)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_177(iParam0)))
						{
							if (__LIB_0__::func_255(__LIB_0__::func_177(iParam0), 0))
							{
								iLocal_461 = 1;
								__LIB_13__::func_545(6);
							}
							else
							{
								__LIB_13__::func_545(5);
							}
						}
						else
						{
							iLocal_461 = 1;
							__LIB_13__::func_545(6);
						}
					}
					else if (__LIB_2__::func_618(&uLocal_462))
					{
						if (__LIB_5__::func_51(&uLocal_462) > 5f)
						{
							__LIB_18__::func_612(iParam0);
							__LIB_2__::func_608(&uLocal_462);
							__LIB_8__::func_901(&uLocal_462, 1);
						}
					}
					else
					{
						__LIB_8__::func_901(&uLocal_462, 1);
					}
					break;
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)) && __LIB_0__::func_665(iVar0, __LIB_0__::func_398(7), 1, 1) < 80f)
					{
						if (__LIB_0__::func_398(7) == __LIB_0__::func_177(iParam0))
						{
							if (!PED::IS_PED_INJURED(Local_262.f_3))
							{
								iLocal_477 = Local_262.f_3;
							}
						}
						else
						{
							iLocal_477 = __LIB_0__::func_398(7);
						}
						PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
						TASK::CLEAR_PED_TASKS(iLocal_477, true, false);
						TASK::TASK_GO_TO_WHISTLE(iLocal_477, iVar0, 0);
						__LIB_13__::func_545(3);
					}
					else
					{
						Var4.f_10 = 7;
						Var4 = 1;
						vVar15 = { __LIB_13__::func_548(7) };
						if (func_1758(&uLocal_446, Global_36, vVar15, 0, 1065353216 /* Float: 1f */))
						{
							Var4.f_6 = { __LIB_12__::func_210(&uLocal_446) };
							Var4.f_2 = 1;
							Var4.f_1 = 1;
							iLocal_477 = __LIB_4__::func_720(&iVar3, &Var4);
							if (iVar3 == 2)
							{
								PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
								TASK::CLEAR_PED_TASKS(iLocal_477, true, false);
								TASK::TASK_GO_TO_WHISTLE(iLocal_477, iVar0, 0);
								if (__LIB_2__::func_618(&uLocal_465))
								{
									__LIB_2__::func_608(&uLocal_465);
								}
								__LIB_13__::func_545(3);
							}
							else if (iVar3 == 1)
							{
								if (!__LIB_2__::func_618(&uLocal_465))
								{
									__LIB_8__::func_901(&uLocal_465, 1);
								}
								else if (__LIB_5__::func_51(&uLocal_465) > 5f)
								{
									iLocal_461 = 1;
									__LIB_13__::func_545(6);
									__LIB_2__::func_608(&uLocal_465);
								}
							}
						}
					}
					break;
				case 3:
					if (!PED::IS_PED_INJURED(iLocal_477))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_477, 2043986356, true) == 8)
						{
							if (__LIB_0__::func_665(__LIB_0__::func_167(iParam0), iLocal_477, 1, 1) < 10f)
							{
								if (iVar1 == iLocal_477)
								{
									__LIB_13__::func_545(0);
								}
								else
								{
									__LIB_13__::func_545(4);
								}
							}
							else
							{
								__LIB_13__::func_545(0);
							}
						}
					}
					break;
				case 4:
					if (iVar1 == iLocal_477)
					{
						__LIB_13__::func_545(0);
					}
					else if (!PED::IS_PED_ON_MOUNT(__LIB_0__::func_167(iParam0)))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_0__::func_167(iParam0), 1868526510, true) == 8)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_477))
							{
								if (!__LIB_0__::func_255(iLocal_477, 0))
								{
									if (PED::_0x2D64376CF437363E(iLocal_477))
									{
										TASK::TASK_MOUNT_ANIMAL(iVar0, iLocal_477, -1, -1, 1f, 1, 0, 0);
									}
								}
								else
								{
									__LIB_13__::func_545(0);
								}
							}
							else
							{
								__LIB_13__::func_545(0);
							}
						}
					}
					else
					{
						__LIB_13__::func_545(6);
					}
					break;
				case 5:
					if (iVar1 == __LIB_0__::func_177(iParam0))
					{
						__LIB_13__::func_545(0);
					}
					else if (!PED::IS_PED_ON_MOUNT(__LIB_0__::func_167(iParam0)))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_0__::func_167(iParam0), 1868526510, true) == 8)
						{
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_177(iParam0)))
							{
								if (!__LIB_0__::func_255(__LIB_0__::func_177(iParam0), 0))
								{
									if (PED::_0x2D64376CF437363E(__LIB_0__::func_177(iParam0)))
									{
										TASK::TASK_MOUNT_ANIMAL(iVar0, __LIB_0__::func_177(iParam0), -1, -1, 1f, 1, 0, 0);
									}
								}
								else
								{
									__LIB_13__::func_545(0);
								}
							}
							else
							{
								__LIB_13__::func_545(0);
							}
						}
					}
					else
					{
						__LIB_13__::func_545(6);
					}
					break;
				case 6:
					__LIB_8__::func_901(&uLocal_468, 1);
					if (iParam4 == 2)
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(iVar0, vParam1, 1073741824 /* Float: 2f */, 1.75f, 0, 0);
						__LIB_13__::func_545(8);
					}
					else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						if (iParam4 == 0)
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(__LIB_0__::func_167(iParam0), "rcm_dutch2_Shadybelle", 0, 9228, -1, 0, 1, -1);
						}
						else
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(__LIB_0__::func_167(iParam0), "rcm_dutch2_saintdennis", 0, 9228, -1, 0, 1, -1);
						}
						__LIB_1__::func_462(iParam0);
						__LIB_1__::func_290(iParam0, 0, 0);
						func_1303(1, 0, -1061158912 /* Float: -6f */);
						__LIB_13__::func_545(8);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -875674219, true) == 8)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, -1, -1f, -1f, -1f);
					}
					break;
				case 7:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar0, 0))
					{
						__LIB_13__::func_545(8);
					}
					if (__LIB_2__::func_618(&uLocal_468))
					{
						if (__LIB_5__::func_51(&uLocal_468) > 1f)
						{
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar0, 0))
							{
								__LIB_13__::func_545(0);
							}
						}
					}
					break;
				case 8:
					if (iParam4 == 1)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar0, 0))
						{
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								func_1761(__LIB_0__::func_167(iParam0), 0f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
							else if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) > 90)
							{
								func_1761(__LIB_0__::func_167(iParam0), 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
							else
							{
								func_1761(__LIB_0__::func_167(iParam0), 1.501f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
						}
					}
					else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar0, 0))
					{
						if (iParam4 == 0)
						{
							if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) < 40)
							{
								func_1761(__LIB_0__::func_167(iParam0), 1.25f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
							else if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) < 105)
							{
								func_1761(__LIB_0__::func_167(iParam0), 1.501f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
							else
							{
								TASK::WAYPOINT_RECORDING_GET_COORD("rcm_dutch2_Shadybelle", 0, &vVar18);
								if (__LIB_0__::func_94(iVar0, vParam1, 1) < fParam6 || __LIB_0__::func_94(iVar0, vVar18, 1) < 10f)
								{
									func_1761(__LIB_0__::func_167(iParam0), 1.25f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
								}
								else if (TASK::GET_PED_WAYPOINT_PROGRESS(iVar0) > 736)
								{
									func_1761(__LIB_0__::func_167(iParam0), 1.5f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
								}
								else
								{
									func_1761(__LIB_0__::func_167(iParam0), 1.75f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
								}
							}
						}
						if (iParam4 == 1)
						{
							TASK::WAYPOINT_RECORDING_GET_COORD("rcm_dutch2_saintdennis", 0, &vVar18);
							if (__LIB_0__::func_94(iVar0, vParam1, 1) < fParam6 || __LIB_0__::func_94(iVar0, vVar18, 1) < 10f)
							{
								func_1761(__LIB_0__::func_167(iParam0), 1.25f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
							else
							{
								func_1761(__LIB_0__::func_167(iParam0), 1.75f, 0, 0.2f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
							}
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 658540077, true) == 8 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1665583462, true) == 8)
					{
						if (iParam4 == 1)
						{
							TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("rcm_dutch2_saintdennis", &iVar21);
							TASK::WAYPOINT_RECORDING_GET_COORD("rcm_dutch2_saintdennis", (iVar21 - 1), &vVar18);
						}
						else if (iParam4 == 0)
						{
							TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("rcm_dutch2_Shadybelle", &iVar21);
							TASK::WAYPOINT_RECORDING_GET_COORD("rcm_dutch2_Shadybelle", (iVar21 - 1), &vVar18);
						}
						if (__LIB_0__::func_94(iVar0, vVar18, 1) < 20f)
						{
							__LIB_13__::func_545(12);
						}
						else
						{
							__LIB_13__::func_545(0);
						}
					}
					break;
				case 9:
					if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iVar0, 1, 1) > 60f && !bParam5)
					{
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
						__LIB_13__::func_545(10);
					}
					if ((__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iVar0, 1, 1) < 20f && __LIB_5__::func_51(&uLocal_468) > 3f) || bParam5)
					{
						__LIB_13__::func_545(8);
					}
					break;
				case 10:
					if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iVar0, 1, 1) < 35f && !bParam5)
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(iVar0, vParam1, 1073741824 /* Float: 2f */, 2.5f, 0, 0);
						__LIB_13__::func_545(9);
					}
					break;
				case 11:
					vVar22 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
					if (iVar0 == Local_81[3 /*7*/])
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar0, 0))
						{
							if (__LIB_0__::func_94(iVar0, vParam1, 1) < 10f)
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar0, 1f, 0, -1082130432 /* Float: -1f */, 0);
							}
							else if (__LIB_0__::func_94(iVar0, vParam1, 1) > fParam6)
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar0, 1.501f, 0, -1082130432 /* Float: -1f */, 0);
							}
							else
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar0, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
							}
						}
						if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam1, 1) < 8f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 658540077, true) == 8 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775, true) == 8)
							{
								if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), Local_262, 1) > 3f)
								{
									if (PED::IS_PED_ON_MOUNT(Global_35))
									{
										if (iParam4 == 1)
										{
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
											if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_34, true, 0))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_262, 1.5f, -1, 0.25f, 0, -107f);
											}
											else
											{
												TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "rcm_dutch2_player_bridge", 0, 8, -1, 0, 0, -1);
											}
											__LIB_0__::func_267(0);
											LAW::_0x710448D44A64C213(false);
											bLocal_1037 = true;
										}
									}
								}
								else if (PED::IS_PED_ON_MOUNT(Global_35))
								{
									if (__LIB_0__::func_396(Global_35))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
										__LIB_0__::func_267(0);
										LAW::_0x710448D44A64C213(false);
										bLocal_1037 = true;
									}
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 658540077, true) == 1)
						{
							if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), Local_262, 1) < 4f)
							{
							}
							else if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam1, 1) < (__LIB_0__::func_94(iVar0, vParam1, 1) + 4f))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PLAYER::PLAYER_PED_ID(), 1f, 0, -1082130432 /* Float: -1f */, 0);
							}
							else
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PLAYER::PLAYER_PED_ID(), 1.25f, 0, -1082130432 /* Float: -1f */, 0);
							}
						}
						else if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iVar0, 1, 1) > 15f || vVar22.z < 42.3f)
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_262.f_3, 2.5f);
						}
						else if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), Local_262, 1) > 10f)
						{
							if (!PED::IS_PED_INJURED(Local_262.f_3))
							{
								if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam1, 1) < (__LIB_0__::func_94(iVar0, vParam1, 1) + 4f))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_262.f_3, 1f);
								}
								else
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_262.f_3, 1.25f);
								}
							}
						}
						if (__LIB_0__::func_94(iVar0, vParam1, 1) < 5f && __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), Local_262, 1) < 5f)
						{
							if (bLocal_1037)
							{
								__LIB_13__::func_545(12);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1665583462, true) == 8 || __LIB_0__::func_94(iVar0, vParam1, 1) < 5f)
					{
						if (bLocal_1037)
						{
							__LIB_13__::func_545(12);
						}
					}
					break;
			}
		}
		else
		{
			PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
			return true;
		}
	}
	return false;
}

void func_1289(int iParam0)
{
	Local_194[3 /*7*/].f_6 = iParam0;
}

bool func_1290(float fParam0, int iParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8, int iParam9, float fParam10, int iParam11, int iParam12)
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	if (!__LIB_0__::func_27(iLocal_1017, iParam1))
	{
		iVar0 = iParam1;
		fVar1 = fParam0;
	}
	else if (!__LIB_0__::func_27(iLocal_1017, iParam3))
	{
		iVar0 = iParam3;
		fVar1 = fParam2;
	}
	else if (!__LIB_0__::func_27(iLocal_1017, iParam5))
	{
		iVar0 = iParam5;
		fVar1 = fParam4;
	}
	else if (!__LIB_0__::func_27(iLocal_1017, iParam7))
	{
		iVar0 = iParam7;
		fVar1 = fParam6;
	}
	else if (!__LIB_0__::func_27(iLocal_1017, iParam9))
	{
		iVar0 = iParam9;
		fVar1 = fParam8;
	}
	else if (!__LIB_0__::func_27(iLocal_1017, iParam11))
	{
		iVar0 = iParam11;
		fVar1 = fParam10;
	}
	if (iVar0 == 0)
	{
		if (iParam12 == 0)
		{
			return true;
		}
		else
		{
			__LIB_1__::func_681(&iLocal_1017, iParam1);
			__LIB_1__::func_681(&iLocal_1017, iParam3);
			__LIB_1__::func_681(&iLocal_1017, iParam5);
			__LIB_1__::func_681(&iLocal_1017, iParam7);
			__LIB_1__::func_681(&iLocal_1017, iParam9);
			__LIB_1__::func_681(&iLocal_1017, iParam11);
		}
	}
	if (!__LIB_2__::func_618(&uLocal_1054))
	{
		__LIB_8__::func_901(&uLocal_1054, 0);
	}
	if (__LIB_5__::func_51(&uLocal_1054) >= fVar1)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1016, "s_cover_idle_loop", 1))
		{
			if (func_1797(iLocal_1016, func_1796(iVar0)))
			{
				__LIB_1__::func_683(&iLocal_1017, iVar0);
				__LIB_5__::func_107(&uLocal_1054);
			}
		}
	}
	return false;
}

bool func_1294(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1[8];
	iVar1[0] = uParam2;
	iVar1[1] = uParam3;
	iVar1[2] = uParam4;
	iVar1[3] = iParam5;
	iVar1[4] = iParam6;
	iVar1[5] = iParam7;
	iVar1[6] = iParam8;
	iVar1[7] = iParam9;
	if (!bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= (iParam1 - 1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]))
			{
				return false;
			}
			iVar0++;
		}
		return true;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iParam1 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]))
			{
				return true;
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

void func_1295(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (bLocal_1037)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false))
		{
			bLocal_1037 = false;
		}
	}
	if (!__LIB_2__::func_618(&uLocal_1026))
	{
		__LIB_8__::func_901(&uLocal_1026, 0);
	}
	else if (__LIB_5__::func_51(&uLocal_1026) > 0.2f && __LIB_5__::func_51(&uLocal_1026) < 10f)
	{
		__LIB_2__::func_620(&uLocal_1026, 100f);
		if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_18))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_18, 1845.04f, -1824.09f, 42.94f, 235.1632f, true, false, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_19))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_19, 1831.78f, -1816.08f, 44.53f, 238.4285f, true, false, true);
		}
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_11, Local_262.f_18, "rcm_dutch2_wagon_shadybelleB", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_13, Local_262.f_19, "rcm_dutch2_wagon_shadybelleC", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_18, 5f);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_19, 4f);
	}
	if (!iLocal_1038[0])
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_18) && !ENTITY::IS_ENTITY_DEAD(Local_262.f_19))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 3.9f)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_18, 1871.12f, -1842.84f, 41.53f, -174.1632f, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_19, 1857.17f, -1832.23f, 42.19f, -123.4285f, true, false, true);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_11, Local_262.f_18, "rcm_dutch2_wagon_shadybelleB", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_13, Local_262.f_19, "rcm_dutch2_wagon_shadybelleC", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_18, 5f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_19, 4f);
				iLocal_1038[0] = 1;
			}
		}
	}
	if (!iLocal_1038[1])
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_19))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 10.5f)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_19, 1871.12f, -1842.84f, 41.53f, -174.1632f, true, false, true);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_262.f_13, Local_262.f_19, "rcm_dutch2_wagon_shadybelleC", 0, 0, 4194344, -1, 4f, 0, 1073741824 /* Float: 2f */, 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_262.f_19, 4f);
				iLocal_1038[1] = 1;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_262.f_18, false, false))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_18, 0))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_18, 2f);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_262.f_19, false, false))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_262.f_19, 0))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_19, 1.6f);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/]))
	{
		func_1798(uParam0, "DUTCH", &(Local_81[3 /*7*/]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_81[3 /*7*/].f_1))
	{
		func_1798(uParam0, "DUTCH", &(Local_81[3 /*7*/].f_1));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_7))
	{
		func_1798(uParam0, "MollyOshea", &(Local_262.f_7));
	}
	if (__LIB_13__::func_521(uParam0, Local_81[3 /*7*/], "DUTCH", 0, 1, 1))
	{
		if (!PED::IS_PED_ON_MOUNT(Local_81[3 /*7*/]))
		{
			PED::_SET_PED_ON_MOUNT(Local_81[3 /*7*/], Local_81[3 /*7*/].f_1, -1, true);
		}
		PED::FORCE_PED_MOTION_STATE(Local_81[3 /*7*/].f_1, joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (__LIB_13__::func_521(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PED::_SET_PED_ON_MOUNT(Global_35, Local_262.f_3, -1, true);
			PED::_0x06D26A96CA1BCA75(Local_262.f_3, 3, 0f, 0);
		}
		PED::FORCE_PED_MOTION_STATE(Local_262.f_3, joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_7))
	{
		func_1798(uParam0, "MollyOshea", &(Local_262.f_7));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_8))
	{
		func_1798(uParam0, "KIERAN", &(Local_262.f_8));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_9))
	{
		func_1798(uParam0, "MrPearson", &(Local_262.f_9));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_10))
	{
		func_1798(uParam0, "susanGrimshaw", &(Local_262.f_10));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_17))
	{
		func_1799(uParam0, "coach2", &(Local_262.f_17));
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "p_bedrollclosed01x^1"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_20[0]))
		{
			func_1800(uParam0, "p_bedrollclosed01x^1", &(Local_262.f_20[0]));
			OBJECT::DELETE_OBJECT(&(Local_262.f_20[0]));
		}
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "p_cs_camerabag01x"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_20[1]))
		{
			func_1800(uParam0, "p_cs_camerabag01x", &(Local_262.f_20[1]));
			OBJECT::DELETE_OBJECT(&(Local_262.f_20[1]));
		}
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "p_hatbox04x"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_20[2]))
		{
			func_1800(uParam0, "p_hatbox04x", &(Local_262.f_20[2]));
			OBJECT::DELETE_OBJECT(&(Local_262.f_20[2]));
		}
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "p_cs_suitcase01x"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_20[3]))
		{
			func_1800(uParam0, "p_cs_suitcase01x", &(Local_262.f_20[3]));
			OBJECT::DELETE_OBJECT(&(Local_262.f_20[3]));
		}
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "p_bedrollclosed01x"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_262.f_20[4]))
		{
			func_1800(uParam0, "p_bedrollclosed01x", &(Local_262.f_20[4]));
			OBJECT::DELETE_OBJECT(&(Local_262.f_20[4]));
		}
	}
}

int func_1296(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_262.f_18, false, false))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_18, 1867.58f, -1880.71f, 42.75f, 211.9825f, true, false, true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_262.f_19, false, false))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262.f_19, 1861.41f, -1876.43f, 42.76f, 186.5011f, true, false, true);
	}
	iLocal_1038[0] = 1;
	iLocal_1038[1] = 1;
	return 1;
}

void func_1299(var uParam0)
{
	bLocal_1037 = false;
	HUD::_0xC9CAEAEEC1256E54(724769646);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_444))
	{
		iLocal_444 = ANIMSCENE::_CREATE_ANIM_SCENE("script@titles@title_ch4_saintdenis", 0, "PBL_1", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_444, "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_444, "HORSE", Local_262.f_3, 0);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_444);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("VISIBLETOSCRIPT")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 508284207))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("ChapterTitle_IntroCh04");
		GRAPHICS::_0xB958D97A0DFAA0C2("ChapterTitle_IntroCh04");
		AUDIO::_0x6339C1EA3979B5F7("Chapter_04", "Chapter_Screen_Scenes");
	}
}

int func_1303(bool bParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_81[3 /*7*/]))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!PED::DOES_GROUP_EXIST(iLocal_364))
		{
			iLocal_364 = PED::CREATE_GROUP(2);
			PED::SET_PED_CONFIG_FLAG(Local_81[3 /*7*/], 279, true);
			PED::SET_PED_AS_GROUP_LEADER(Local_81[3 /*7*/], iLocal_364, false);
			PED::SET_GROUP_FORMATION(iLocal_364, 10);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), Local_81[3 /*7*/], -1f, -1f, 4, 2, 0);
			PED::_0x0E9E95FDEDCC9D35(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (bParam1)
		{
			PED::SET_GROUP_FORMATION(iLocal_364, 5);
			PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_364, 0f, iParam2, 0f, 0);
			PED::_0x9BBEAF8B0C007F1E(Local_81[3 /*7*/], 0);
		}
		else
		{
			PED::SET_GROUP_FORMATION(iLocal_364, 10);
			PED::_0x9BBEAF8B0C007F1E(Local_81[3 /*7*/], 1);
		}
	}
	else if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 210, true);
	}
	return 1;
}

char* func_1304(int iParam0)
{
	switch (iParam0)
	{
		case 20:
			return "DCH2GO";
		case 12:
			return "DCH2_MNTUP";
		case 13:
			return "DCH2_SETOFF";
		case 23:
			return "DCH2_LNOTLEAVE";
		case 24:
			return "DCH_SNOTLEAVE";
		case 25:
			return "DCH2_JVNOTLEAVE";
		case 26:
			return "DCH2_DNOTLEAVE";
		case 14:
			return "DCH2_SBRIDE1";
		case 15:
			return "DCH2_SBRIDE2";
		case 17:
			return "DCH2_SEEHOUSE";
		case 18:
			return "DCH2_WINDOW";
		case 118:
			return "DCH2ARRIVE";
		case 119:
			return "DCH2JNREACT";
		case 120:
			return "DCH2_AFTKILL";
		case 121:
			return "DCH2_PLRIDLE";
		case 122:
			return "DCH2_PLRLEAVE";
		case 123:
			return "DCH2ENEMY1c";
		case 139:
			return "DCH2_JESUS";
		case 125:
			return "DCH2_JDWNWAIT";
		case 126:
			return "DCH2ENEMYA";
		case 127:
			return "DCH2ENEMYB";
		case 128:
			return "DCH2ENEMYC";
		case 141:
			return "DCH2_EARLYLEAVE";
		case 142:
			return "DCH2_LRESCAPE";
		case 134:
			return "DCH2_GLD";
		case 136:
			return "DCH2_AGOUP";
		case 137:
			return "DCH2_ARESP";
		case 138:
			return "DCH2_KNIFE";
		case 204:
			return "DCH2GETBODY";
		case 205:
			return "DCH2GETBODY2";
		case 206:
			return "DCH2JFOLLOW";
		case 207:
			return "DCH2_DUMP";
		case 208:
			return "DCH2_CROC";
		case 209:
			return "DCH2_SWPRIDLE";
		case 210:
			return "DCH2_BODS";
		case 308:
			return "DCH2_JOHNGOES";
		case 406:
			return "DCH2_DUARTALK";
		case 404:
			return "DCH2_ONH";
		case 124:
			if (func_337(21))
			{
				return "DCH2DOWNSTAIRB";
			}
			else
			{
				return "DCH2DOWNSTAIR";
			}
			break;
		case 16:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_238))
			{
				if (AUDIO::_0xD89504D9D7D5057D("DCH2_TRACK"))
				{
					sLocal_238 = "DCH2_TRACK";
				}
				else if (AUDIO::_0xD89504D9D7D5057D("DCH2_TRACKB"))
				{
					sLocal_238 = "DCH2_TRACKB";
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_63, true, 0))
				{
					return "DCH2_TRACK";
				}
				else
				{
					return "DCH2_TRACKB";
				}
			}
			else
			{
				return sLocal_238;
			}
			break;
	}
	return "";
}

void func_1413()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1902(0);
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
	func_1902(1);
}

void func_1414()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_846(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1415()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1905(0);
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
	func_1905(1);
}

void func_1416()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1905(0);
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
	func_1905(1);
}

void func_1417()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_846(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_846(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1420(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1420(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1420(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1420(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1453(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1944(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_846(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1585(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { fParam3, fParam4, fParam5 };
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
				func_1059(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1651()
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
	iVar0 = func_2050(6291456, 0);
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

bool func_1756(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_858(iParam0, 128))
	{
		__LIB_18__::func_613(iParam0);
		__LIB_0__::func_213(iParam0, 128, 0);
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_13)
	{
		case 2:
			if (__LIB_0__::func_287(iParam0, 42, 1))
			{
				__LIB_0__::func_290(iParam0, 42, 1);
				bVar1 = false;
				bVar2 = func_2095(iParam0);
				if (__LIB_0__::func_272(iVar0, 0))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!bVar2)
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
						vVar6 = { ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false) };
						fVar9 = BUILTIN::VDIST2(vVar3, vVar6);
						if (fVar9 < (8f * 8f))
						{
							return true;
						}
						else if (fVar9 > 2500f)
						{
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
						}
						else
						{
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
						}
					}
					else if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_35)
					{
						if (!__LIB_1__::func_16(iVar0))
						{
							Global_1360165[iParam0 /*1157*/].f_123 = iVar0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
						{
							func_2097(iParam0, __LIB_0__::func_398(7), 0, 0);
						}
						else
						{
							__LIB_13__::func_554(iParam0);
							__LIB_0__::func_288(iParam0, 40, 1);
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
						}
					}
					else
					{
						__LIB_0__::func_288(iParam0, 40, 1);
						Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
					}
				}
				else
				{
					__LIB_0__::func_288(iParam0, 40, 1);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_272(iVar0, 0))
			{
				__LIB_0__::func_213(iParam0, 64, 1);
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
			}
			else
			{
				iVar0 = func_587(iParam0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_14.f_12 = 1;
				if (func_1758(&(Global_1360165[iParam0 /*1157*/].f_70.f_14), Global_36, Global_1900383[0 /*45*/].f_38, 0, 1065353216 /* Float: 1f */))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, Global_1360165[iParam0 /*1157*/].f_70.f_14.f_3.f_3, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
				}
				else if (Global_1360165[iParam0 /*1157*/].f_70.f_14.f_1)
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				if (!__LIB_13__::func_555(iParam0, 1120403456 /* Float: 100f */))
				{
					TASK::TASK_GO_TO_WHISTLE(iVar0, Global_1360165[iParam0 /*1157*/], 0);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 8;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (__LIB_13__::func_555(iParam0, 1120403456 /* Float: 100f */))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
					return true;
				}
				else if (!__LIB_0__::func_163(iVar0, 2043986356))
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
	}
	return false;
}

bool func_1758(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	int iVar12;
	iVar6 = 12;
	if (__LIB_0__::func_86(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = __LIB_0__::func_152(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * __LIB_0__::func_514((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			__LIB_12__::func_220(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (__LIB_12__::func_228(vVar3, vParam1, 0, 0))
				{
					__LIB_12__::func_220(uParam0, vVar3);
					if (uParam0->f_12)
					{
						__LIB_0__::func_19(uParam0, 3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(uParam0, 2);
				}
			}
			else
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (__LIB_12__::func_233(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (__LIB_12__::func_228(__LIB_12__::func_210(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						__LIB_0__::func_19(uParam0, 3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(iParam7, __LIB_12__::func_210(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						__LIB_0__::func_19(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						__LIB_0__::func_19(uParam0, 5);
						break;
					case 1:
						iVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (__LIB_0__::func_27(iVar12, 2) && iVar6 != 13)
						{
							__LIB_0__::func_19(uParam0, 5);
						}
						else
						{
							__LIB_0__::func_19(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			__LIB_0__::func_634(&(uParam0->f_3.f_3), 1, 1, 0);
			__LIB_0__::func_19(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			__LIB_0__::func_19(uParam0, 0);
			break;
	}
	return false;
}

void func_1761(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, fParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, iParam5, iParam6, iParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

char* func_1796(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pbl_where_You_creeps";
		case 2:
			return "pbl_thats_it_lady";
		case 8:
			return "pbl_you_Think_you";
		case 16:
			return "pbl_come_on_you";
		case 32:
			return "pbl_lady_get_in";
		case 64:
			return "pbl_peeking_through_wall_01";
		case 256:
			return "pbl_Peeking_come_on_big";
		case 128:
			return "pbl_peeking_through_wall_02";
		case 512:
			return "pbl_Peeking_come_on_subtle";
		case 1024:
			return "pbl_peeking_through_wall_01";
		case 2048:
			return "pbl_peeking_through_wall_02";
		case 4096:
			return "pbl_Peeking_through_wall_GUN";
		case 8192:
			return "pbl_peeking_through_wall_02";
		case 16384:
			return "pbl_peeking_through_wall_01";
	}
	return "pbl_cover_idle_loop";
}

bool func_1797(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		return true;
	}
	return false;
}

void func_1798(var uParam0, char* sParam1, var uParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_225(uParam0, sParam1, 1)))
		{
			*uParam2 = __LIB_13__::func_225(uParam0, sParam1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam2, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam2, true, true);
				}
			}
		}
	}
}

void func_1799(var uParam0, char* sParam1, var uParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_550(uParam0, sParam1, 1)))
		{
			*uParam2 = __LIB_13__::func_550(uParam0, sParam1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam2, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam2, true, true);
				}
			}
		}
	}
}

void func_1800(var uParam0, char* sParam1, var uParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_478(uParam0, sParam1, 1)))
		{
			*uParam2 = __LIB_13__::func_478(uParam0, sParam1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam2, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam2, true, true);
				}
			}
		}
	}
}

void func_1902(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_846(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2237(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_849(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1420(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2242(Var0);
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

void func_1905(bool bParam0)
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
		func_846(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_846(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1420(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1420(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1420(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1944(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1944(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1944(iVar63, -915411861, 1, 0, 0));
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

int func_2050(int iParam0, int iParam1)
{
	var uVar0;
	return func_2287(&uVar0, iParam0, iParam1);
}

int func_2095(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(__LIB_0__::func_177(iParam0), false);
		if (iVar0 != 0 && iVar0 != Global_1360165[iParam0 /*1157*/])
		{
			return 1;
		}
	}
	return 0;
}

int func_2097(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_288(iParam0, 43, 1);
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iParam1) && PED::_0xF103823FFE72BB49(iVar0) == __LIB_0__::func_271(iParam0))
	{
		PED::_0xBCC76708E5677E1D(iVar0, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != __LIB_0__::func_271(iParam0))
	{
		return 0;
	}
	iVar2 = PED::_0xF103823FFE72BB49(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar3 = __LIB_4__::func_656(iVar2);
		if (__LIB_0__::func_31(iVar3))
		{
			if (iVar3 != iParam0)
			{
				return 0;
			}
		}
		else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
		{
			return 0;
		}
		else if (PED::_IS_MOUNT_SEAT_FREE(iParam1, -1))
		{
			PED::_0xBCC76708E5677E1D(iParam1, 0);
		}
		else
		{
			return 0;
		}
	}
	bVar4 = __LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0);
	if (bParam3 || bVar4)
	{
		if (bVar4)
		{
			PED::_0x931B241409216C1F(__LIB_0__::func_271(iParam0), iParam1, 0);
			PED::_0xED1C764997A86D5A(__LIB_0__::func_271(iParam0), iParam1);
		}
	}
	else
	{
		__LIB_0__::func_288(iParam0, 38, 1);
	}
	__LIB_12__::func_620(iParam1, iParam0);
	Global_1360165[iParam0 /*1157*/].f_70 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_124 = 0;
	return 1;
}

void func_2237(int iParam0)
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
	func_1420(iParam0, 1, 1, -142743235, 1);
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
		func_1420(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2242(struct<6> Param0)
{
	if (!func_2404(Param0.f_4, 1))
	{
	}
	if (!func_2404(Param0, 1))
	{
	}
	if (!func_2404(Param0.f_2, 1))
	{
	}
	if (!func_2404(Param0.f_5, 1))
	{
	}
	if (!func_2404(Param0.f_3, 1))
	{
	}
	if (!func_2404(Param0.f_1, 1))
	{
	}
}

int func_2287(var uParam0, int iParam1, int iParam2)
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
		return func_2287(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2404(int iParam0, int iParam1)
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
				if (func_2404(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2404(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2404(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2404(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

