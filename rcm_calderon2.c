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
	struct<61> Local_18[1];
	struct<17> Local_80[1];
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	struct<61> Local_100[1];
	struct<17> Local_162[1];
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<61> Local_185[1];
	struct<17> Local_247[2];
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	float fLocal_288 = 0f;
	int iLocal_289[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = false;
	bool bLocal_299 = false;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	vector3 vLocal_326 = { 0f, 0f, 0f };
	vector3 vLocal_329 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	vector3 vLocal_335 = { 0f, 0f, 0f };
	vector3 vLocal_338 = { 0f, 0f, 0f };
	vector3 vLocal_341 = { 0f, 0f, 0f };
	vector3 vLocal_344 = { 0f, 0f, 0f };
	vector3 vLocal_347 = { 0f, 0f, 0f };
	vector3 vLocal_350 = { 0f, 0f, 0f };
	bool bLocal_353 = false;
	float fLocal_354 = 0f;
	float fLocal_355 = 0f;
	float fLocal_356 = 0f;
	float fLocal_357 = 0f;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
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
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	bool bLocal_380 = false;
	bool bLocal_381 = false;
	bool bLocal_382 = false;
	bool bLocal_383 = false;
	vector3 vLocal_384 = { 0f, 0f, 0f };
	vector3 vLocal_387 = { 0f, 0f, 0f };
	vector3 vLocal_390 = { 0f, 0f, 0f };
	vector3 vLocal_393 = { 0f, 0f, 0f };
	vector3 vLocal_396 = { 0f, 0f, 0f };
	vector3 vLocal_399 = { 0f, 0f, 0f };
	vector3 vLocal_402 = { 0f, 0f, 0f };
	vector3 vLocal_405 = { 0f, 0f, 0f };
	vector3 vLocal_408 = { 0f, 0f, 0f };
	vector3 vLocal_411 = { 0f, 0f, 0f };
	vector3 vLocal_414 = { 0f, 0f, 0f };
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	bool bLocal_422 = false;
	bool bLocal_423 = false;
	bool bLocal_424 = false;
	bool bLocal_425 = false;
	bool bLocal_426 = false;
	bool bLocal_427 = false;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
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
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	bool bLocal_458 = false;
	bool bLocal_459 = false;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	vector3 vLocal_475 = { 0f, 0f, 0f };
	vector3 vLocal_478 = { 0f, 0f, 0f };
	vector3 vLocal_481 = { 0f, 0f, 0f };
	vector3 vLocal_484 = { 0f, 0f, 0f };
	vector3 vLocal_487 = { 0f, 0f, 0f };
	vector3 vLocal_490 = { 0f, 0f, 0f };
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	struct<6> Local_495 = { 0, 0, 0, 0, 0, 1065353216 } ;
	var uLocal_501 = 1119092736;
	var uLocal_502 = 1092616192;
	var uLocal_503 = 1085276160;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = -1;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 1097859072;
	var uLocal_522 = 1000;
	var uLocal_523 = 1067450368;
	var uLocal_524 = 5000;
	var uLocal_525 = 42;
	var uLocal_526 = 1103626240;
	var uLocal_527 = 1077936128;
	var uLocal_528 = 1106247680;
	var uLocal_529 = 1103101952;
	var uLocal_530 = 1097859072;
	var uLocal_531 = 1103626240;
	int iLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = -1;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 1097859072;
	var uLocal_551 = 1000;
	var uLocal_552 = 1067450368;
	var uLocal_553 = 5000;
	var uLocal_554 = 42;
	var uLocal_555 = 1103626240;
	var uLocal_556 = 1077936128;
	var uLocal_557 = 1106247680;
	var uLocal_558 = 1103101952;
	var uLocal_559 = 1097859072;
	var uLocal_560 = 1103626240;
	var uLocal_561 = 0;
	bool bLocal_562 = false;
	int iLocal_563 = 0;
	bool bLocal_564 = false;
	int iLocal_565 = 0;
	bool bLocal_566 = false;
	float fLocal_567 = 0f;
	struct<23> Local_568 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	struct<23> Local_593 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	struct<25> Local_618 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0 } ;
	struct<9> Local_643 = { 0, 0, 0, 0, -1, 0, 0, 0, 2 } ;
	var uLocal_652 = 1;
	var uLocal_653 = 1;
	var uLocal_654 = 1;
	var uLocal_655 = 0;
	var uLocal_656 = 1;
	var uLocal_657 = 2;
	var uLocal_658 = 2;
	var uLocal_659 = 3;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 3;
	var uLocal_663 = 1;
	var uLocal_664 = 3;
	var uLocal_665 = 3;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	struct<8> Local_668 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_676 = 2;
	var uLocal_677 = 1;
	var uLocal_678 = 1;
	var uLocal_679 = 1;
	var uLocal_680 = 0;
	var uLocal_681 = 1;
	var uLocal_682 = 2;
	var uLocal_683 = 2;
	var uLocal_684 = 3;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 3;
	var uLocal_688 = 1;
	var uLocal_689 = 3;
	var uLocal_690 = 3;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	struct<8> Local_693 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_701 = 2;
	var uLocal_702 = 1;
	var uLocal_703 = 1;
	var uLocal_704 = 1;
	var uLocal_705 = 0;
	var uLocal_706 = 1;
	var uLocal_707 = 2;
	var uLocal_708 = 2;
	var uLocal_709 = 3;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 3;
	var uLocal_713 = 1;
	var uLocal_714 = 3;
	var uLocal_715 = 3;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_99 = 1;
	iLocal_283 = -1;
	fLocal_288 = 0f;
	iLocal_311 = joaat("CS_SDPRIEST");
	iLocal_312 = joaat("RCSP_CALDERONSTAGE2_MALES_01");
	iLocal_313 = joaat("RCSP_CALDERONSTAGE2_MALES_01");
	iLocal_314 = joaat("P_SQUASHACORN01X");
	iLocal_315 = joaat("P_ONIONWHITE_01X");
	iLocal_316 = joaat("P_PUMPKIN_02X");
	vLocal_317 = { 2734.367f, -1262.994f, 48.7489f };
	vLocal_320 = { 2729.86f, -1256.04f, 48.81f };
	vLocal_323 = { 2733.377f, -1263.678f, 48.7362f };
	vLocal_326 = { 2861.18f, -1236.47f, 45.33f };
	vLocal_329 = { 2862.89f, -1236.75f, 45.34f };
	vLocal_332 = { 2861.15f, -1177.1f, 45.1f };
	vLocal_335 = { 2862.45f, -1177.12f, 45.36f };
	vLocal_338 = { 2860.64f, -1177.3f, 45.4f };
	vLocal_341 = { 2870.4f, -1244.37f, 45.24f };
	vLocal_344 = { 2834.78f, -1175.07f, 45.76f };
	vLocal_347 = { 2860.65f, -1236.04f, 45.34f };
	vLocal_350 = { 2868.25f, -1228.19f, 46.31f };
	fLocal_354 = 60.6333f;
	fLocal_355 = 275.4187f;
	fLocal_356 = 248.64f;
	fLocal_357 = 42.1661f;
	vLocal_384 = { 2861.93f, -1236.7f, 45.35f };
	vLocal_387 = { 2856.632f, -1248.84f, 45.3588f };
	vLocal_390 = { 2735.136f, -1260.452f, 47.5725f };
	vLocal_393 = { 2867.16f, -1215.61f, 45.45f };
	vLocal_396 = { 2867.31f, -1218.95f, 45.3f };
	vLocal_399 = { 2863.77f, -1219.69f, 45.64f };
	vLocal_402 = { 2863.71f, -1220.66f, 45.64f };
	vLocal_405 = { 2866.28f, -1220.89f, 45.29f };
	vLocal_408 = { 2864.05f, -1220.18f, 45.44f };
	vLocal_411 = { 2864.02f, -1222.47f, 45.31f };
	vLocal_414 = { 2866.88f, -1223.04f, 45.3f };
	iLocal_421 = -1;
	vLocal_475 = { 2852.135f, -1174.437f, 46.53377f };
	vLocal_478 = { 0f, 0f, 6.006701f };
	vLocal_481 = { 41.898f, 19.4991f, 23.66883f };
	vLocal_484 = { 2868.587f, -1210.847f, 46.53377f };
	vLocal_487 = { 0f, 0f, -90.36575f };
	vLocal_490 = { 55.60478f, 17.1582f, 23.66883f };
	iLocal_493 = VOLUME::_CREATE_VOLUME_BOX(2820.272f, -1177.621f, 44.3112f, 0f, 0f, -58.00488f, 11f, 5.5f, 3f);
	fLocal_567 = 0f;
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
	func_40(&(uParam0->f_178));
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
	func_75(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_10__::func_532(uParam0));
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
		__LIB_13__::func_351(0);
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
	__LIB_12__::func_658(uParam0, 5);
	__LIB_12__::func_659(uParam0, 10);
	Local_495.f_5 = 2f;
	__LIB_13__::func_221(uParam0, 8f);
	__LIB_0__::func_7(&(uParam0->f_172), 268435456);
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
}

void func_40(var uParam0)
{
	__LIB_4__::func_228(uParam0);
	__LIB_6__::func_905(uParam0);
	__LIB_1__::func_404(uParam0, 1);
	__LIB_1__::func_405(uParam0, 1);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("CS_BROTHERDORKINS"), 3);
	__LIB_12__::func_867(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), 3);
	__LIB_12__::func_867(uParam0, joaat("CS_EDITHDOWN"), 2);
	__LIB_12__::func_867(uParam0, joaat("S_M_M_DISPATCHPOLICE_01"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CRUCIFIX02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BOOK03X"), 3);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BOOK04X"), 3);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BIBLE01X"), 3);
	__LIB_12__::func_867(uParam0, joaat("P_PENCIL01X"), 3);
	__LIB_12__::func_867(uParam0, iLocal_312, 2);
	__LIB_12__::func_867(uParam0, iLocal_313, 2);
	__LIB_12__::func_867(uParam0, iLocal_314, 2);
	__LIB_12__::func_867(uParam0, iLocal_315, 2);
	__LIB_12__::func_867(uParam0, iLocal_316, 2);
	func_196();
	func_197();
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
		Var1 = { 2809.393f, -1118.319f, 45.1722f };
		Var1.f_3 = 193.8745f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 2865.111f, -1232.983f, 45.264f };
		Var1.f_3 = 130.2226f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { vLocal_384 };
		Var1.f_3 = 31.4115f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 2851.537f, -1244.535f, 46.6568f };
		Var1.f_3 = 51.429f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 2772.714f, -1171.608f, 47.4429f };
		Var1.f_3 = 148.5841f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { 2732.654f, -1261.858f, 48.7499f };
		Var1.f_3 = 235.871f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_207(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_13__::func_203(uParam0, iLocal_302))
	{
		StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
		return true;
	}
	if (bLocal_431)
	{
		StringCopy(&(uParam0->f_2578), "CALDERON4_F7", 24);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		if (__LIB_13__::func_203(uParam0, iLocal_303))
		{
			StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
			return true;
		}
		else if (__LIB_0__::func_665(Global_35, iLocal_303, 1, 1) > 160f)
		{
			if (iLocal_15 <= 3)
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F7", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F14", 24);
			}
			return true;
		}
	}
	if (__LIB_13__::func_203(uParam0, iLocal_304))
	{
		StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
		return true;
	}
	if (iLocal_15 <= 5)
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_308))
		{
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_308, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_308, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
				return true;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_309))
	{
		if (PED::_IS_PED_HOGTIED(iLocal_309) || PED::_IS_PED_LASSOED(iLocal_309))
		{
			StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
			bLocal_299 = true;
			return true;
		}
	}
	if (iLocal_15 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_300))
		{
			if (!__LIB_0__::func_272(iLocal_300, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F1", 24);
				return true;
			}
			else if (((PED::IS_PED_FLEEING(iLocal_300) || PED::IS_PED_IN_COMBAT(iLocal_300, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_300, Global_35, 1, 1)) || __LIB_13__::func_230(iLocal_300, 0, &(uParam0->f_178), &uLocal_561, 0, 0))
			{
				__LIB_13__::func_226(&iLocal_300, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 0, 1, 0, 1, 0, 0);
				StringCopy(&(uParam0->f_2578), "CALDERON4_F12", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
		{
			if (!__LIB_0__::func_272(iLocal_301, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F3", 24);
				return true;
			}
			else if (((PED::IS_PED_FLEEING(iLocal_301) || PED::IS_PED_IN_COMBAT(iLocal_301, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_301, Global_35, 1, 1)) || __LIB_13__::func_230(iLocal_301, 0, &(uParam0->f_178), &uLocal_561, 0, 0))
			{
				__LIB_13__::func_226(&iLocal_301, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 0, 1, 0, 1, 0, 0);
				StringCopy(&(uParam0->f_2578), "CALDERON4_F4", 24);
				return true;
			}
		}
		if (iLocal_15 == 1 || iLocal_15 == 2)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_309) && iLocal_180 != 2)
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
				return true;
			}
			else if (__LIB_13__::func_230(iLocal_309, 0, &uLocal_504, &iLocal_532, 0, 0))
			{
				if (iLocal_532 != 8 || __LIB_0__::func_264(&uLocal_447) > 4f)
				{
					StringCopy(&(uParam0->f_2578), "CALDERON4_F13", 24);
					bLocal_299 = true;
					return true;
				}
				else if (!__LIB_0__::func_75(&uLocal_447))
				{
					__LIB_1__::func_148(&uLocal_447);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_447))
			{
				__LIB_0__::func_37(&uLocal_447);
			}
		}
	}
	else if (iLocal_15 == 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_362))
		{
			if (__LIB_0__::func_94(iLocal_362, Global_36, 1) > 150f)
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F8", 24);
				return true;
			}
		}
	}
	else if (iLocal_15 == 7 || iLocal_15 == 8)
	{
		if (func_218())
		{
			StringCopy(&(uParam0->f_2578), "CALDERON4_F12", 24);
			return true;
		}
	}
	else if (iLocal_15 == 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_300))
		{
			if (!__LIB_0__::func_272(iLocal_300, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F1", 24);
				return true;
			}
			else if ((PED::IS_PED_FLEEING(iLocal_300) || PED::IS_PED_IN_COMBAT(iLocal_300, 0)) || __LIB_13__::func_230(iLocal_307, 0, &(uParam0->f_178), &uLocal_561, 0, 0))
			{
				__LIB_13__::func_226(&iLocal_300, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 0, 1, 0, 1, 0, 0);
				StringCopy(&(uParam0->f_2578), "CALDERON4_F12", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
		{
			if (!__LIB_0__::func_272(iLocal_307, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON4_F9", 24);
				return true;
			}
			else if ((PED::IS_PED_FLEEING(iLocal_307) || PED::IS_PED_IN_COMBAT(iLocal_307, 0)) || __LIB_13__::func_230(iLocal_307, 0, &(uParam0->f_178), &uLocal_561, 0, 0))
			{
				if (PED::IS_PED_FLEEING(iLocal_307))
				{
				}
				else if (PED::IS_PED_IN_COMBAT(iLocal_307, 0))
				{
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_307, Global_35, 1, 1))
				{
				}
				__LIB_13__::func_226(&iLocal_307, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 0, 1, 0, 1, 0, 0);
				StringCopy(&(uParam0->f_2578), "CALDERON4_F10", 24);
				return true;
			}
		}
		if (__LIB_0__::func_94(Global_35, vLocal_317, 1) >= (fLocal_567 + 150f))
		{
			StringCopy(&(uParam0->f_2578), "CALDERON4_F11", 24);
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
	if (func_221(uParam0->f_174))
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
	if (func_230(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_235(uParam0);
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
	__LIB_12__::func_966(uParam0, 0);
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
			func_249(uParam0);
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

void func_75(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = func_256(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_12__::func_986(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_273(uParam0))
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	iLocal_16 = 0;
	func_292(uParam0, 0);
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
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		if (func_296(uParam0))
		{
			if (__LIB_12__::func_936(uParam0))
			{
				return 5;
			}
			else
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
				return 7;
			}
		}
		return 2;
	}
	else if (iVar0 == 1)
	{
		if (func_298(uParam0))
		{
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 1);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 2)
	{
		if (func_299(uParam0))
		{
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 1);
			return 5;
		}
		return 2;
	}
	else if (iVar0 == 3)
	{
		if (func_300(uParam0))
		{
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 1);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 4)
	{
		if (func_301(uParam0))
		{
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 1);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 5)
	{
		if (func_302(uParam0))
		{
			__LIB_12__::func_997(uParam0, func_61(5), func_61(5), 4, 5, 1);
			return 5;
		}
		return 2;
	}
	return 7;
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
	return func_315(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
	{
		VOLUME::_DELETE_VOLUME(iLocal_463);
	}
	switch (iLocal_16)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
			{
				iLocal_303 = __LIB_12__::func_885(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), 2812.167f, -1129.569f, 45.3259f, 191.9557f, 1, 1, 1, 1, 1, 0, 1, 1);
			}
			func_320();
			__LIB_9__::func_438(1);
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_303);
				iLocal_373 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
				MAP::_BLIP_SET_MODIFIER(iLocal_373, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				PED::_SET_PED_BODY_COMPONENT(iLocal_303, 1418999136);
				PED::_UPDATE_PED_VARIATION(iLocal_303, false, true, true, true, false);
			}
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			iLocal_15 = 0;
			bLocal_380 = __LIB_12__::func_876(uParam0, "C4_STARTCHASE", 0);
			break;
		case 1:
			__LIB_2__::func_426(&iLocal_301);
			__LIB_2__::func_426(&iLocal_302);
			__LIB_2__::func_426(&iLocal_304);
			__LIB_1__::func_951(&iLocal_358);
			__LIB_1__::func_951(&iLocal_359);
			__LIB_1__::func_951(&iLocal_360);
			__LIB_1__::func_951(&iLocal_361);
			__LIB_1__::func_951(&iLocal_364);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				TASK::TASK_POLICE(iLocal_306, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_305))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_305, Global_35, 400f, -1, 0, 3f, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_13__::func_89(uParam0, "CALDERON4_OBJ2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_325();
			break;
		case 2:
		case 3:
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, joaat("PLAYER"));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_307))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_307, joaat("PLAYER"));
			}
			func_326();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_362))
			{
				OBJECT::DELETE_OBJECT(&iLocal_362);
			}
			__LIB_0__::func_405();
			iLocal_15 = 10;
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
		if (func_328(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = false;
	bVar1 = true;
	bVar2 = false;
	if (!bLocal_383)
	{
		__LIB_0__::func_123(938, 32);
		if (__LIB_5__::func_194(938, 1))
		{
			bLocal_383 = true;
		}
	}
	LAW::_0x15ABD5004CAD2D99(-1);
	switch (iLocal_15)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_337(), "CLD_FINDKID") && !bLocal_425)
			{
				__LIB_13__::func_89(uParam0, "CLD_FINDKID", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_12__::func_883(uParam0, "CLD_FINDKID", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			if (func_333(uParam0))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_373))
				{
					iLocal_373 = MAP::_0xA6EF0C54A3443E70(408396114, iLocal_471);
					MAP::_BLIP_SET_MODIFIER(iLocal_373, 231194138);
				}
				if (!bLocal_425)
				{
					__LIB_13__::func_89(uParam0, "CLD_FINDCLUES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_148(&uLocal_377);
					bLocal_425 = true;
				}
				else if (!bLocal_426)
				{
					if (__LIB_1__::func_205(Global_35, iLocal_471, 1, 0))
					{
						__LIB_12__::func_883(uParam0, "CLD_FINDCLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						bLocal_426 = true;
						__LIB_0__::func_37(&uLocal_377);
					}
					if (__LIB_5__::func_352("CLD_FINDCLUES"))
					{
						__LIB_0__::func_37(&uLocal_377);
						bLocal_426 = true;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_471) && !__LIB_1__::func_205(Global_35, iLocal_471, 1, 0))
					{
						if (!__LIB_0__::func_270() && __LIB_0__::func_264(&uLocal_377) >= 20f)
						{
							__LIB_12__::func_883(uParam0, "CLD_FINDCLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_0__::func_37(&uLocal_377);
							bLocal_426 = true;
						}
					}
				}
			}
			if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_303) && func_337()) && func_338()) && func_339()) && func_340(uParam0)) && func_341())
			{
				func_342();
				SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
				iLocal_15 = 1;
			}
			break;
		case 1:
			func_343(uParam0);
			func_337();
			func_338();
			func_342();
			func_344();
			if (!__LIB_0__::func_75(&uLocal_435))
			{
				__LIB_1__::func_148(&uLocal_435);
			}
			else if (__LIB_0__::func_264(&uLocal_435) > 90f)
			{
				bLocal_431 = true;
			}
			if (func_333(uParam0))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_373))
				{
					iLocal_373 = MAP::_0xA6EF0C54A3443E70(408396114, iLocal_471);
					MAP::_BLIP_SET_MODIFIER(iLocal_373, 231194138);
				}
				if (!bLocal_425)
				{
					__LIB_13__::func_89(uParam0, "CLD_FINDCLUES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_148(&uLocal_377);
					bLocal_425 = true;
				}
				else if (!bLocal_426)
				{
					if (__LIB_1__::func_205(Global_35, iLocal_471, 1, 0))
					{
						__LIB_12__::func_883(uParam0, "CLD_FINDCLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						bLocal_426 = true;
						__LIB_0__::func_37(&uLocal_377);
					}
					if (__LIB_5__::func_352("CLD_FINDCLUES"))
					{
						__LIB_0__::func_37(&uLocal_377);
						bLocal_426 = true;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_471) && !__LIB_1__::func_205(Global_35, iLocal_471, 1, 0))
					{
						if (!__LIB_0__::func_270() && __LIB_0__::func_264(&uLocal_377) >= 20f)
						{
							__LIB_12__::func_883(uParam0, "CLD_FINDCLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_0__::func_37(&uLocal_377);
							bLocal_426 = true;
						}
					}
				}
			}
			if (!bLocal_380)
			{
				bLocal_380 = __LIB_12__::func_876(uParam0, "C4_STARTCHASE", 0);
			}
			if (func_345(uParam0))
			{
				__LIB_1__::func_148(&uLocal_435);
				iLocal_15 = 2;
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(iLocal_308))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_308, true, false), 3f, true))
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 3, 0, -1f, -1, 0);
					TASK::TASK_COWER(iLocal_303, -1, Global_35, 0);
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(0, 0);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
					iLocal_16 = 1;
					func_292(uParam0, 0);
					__LIB_0__::func_37(&uLocal_377);
					iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
					iLocal_15 = 4;
					iLocal_282 = 6;
				}
				if (func_348())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_374))
					{
						iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_374))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
						iLocal_16 = 1;
						func_292(uParam0, 0);
						__LIB_0__::func_37(&uLocal_377);
						__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
						iLocal_15 = 4;
					}
				}
			}
			break;
		case 2:
			func_344();
			if (!__LIB_0__::func_75(&uLocal_435))
			{
				__LIB_1__::func_148(&uLocal_435);
			}
			else if (__LIB_0__::func_264(&uLocal_435) > 90f)
			{
				bLocal_431 = true;
			}
			if (!bLocal_426 && __LIB_5__::func_352("CLD_FINDCLUES"))
			{
				__LIB_0__::func_37(&uLocal_377);
				bLocal_426 = true;
			}
			if (func_349(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_373))
				{
					MAP::REMOVE_BLIP(&iLocal_373);
				}
				iLocal_373 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_472);
				__LIB_1__::func_148(&uLocal_377);
				__LIB_1__::func_148(&uLocal_435);
				bLocal_425 = false;
				bLocal_426 = true;
				iLocal_15 = 3;
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(iLocal_308))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_308, true, false), 3f, true))
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 3, 0, -1f, -1, 0);
					TASK::TASK_COWER(iLocal_303, -1, Global_35, 0);
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(0, 0);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
					iLocal_16 = 1;
					func_292(uParam0, 0);
					__LIB_0__::func_37(&uLocal_377);
					iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
					MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					iLocal_15 = 4;
					iLocal_282 = 6;
				}
				if (func_348())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_374))
					{
						iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_374))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
						iLocal_16 = 1;
						func_292(uParam0, 0);
						__LIB_0__::func_37(&uLocal_377);
						__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
						iLocal_15 = 4;
					}
				}
			}
			break;
		case 3:
			func_343(uParam0);
			func_337();
			func_338();
			func_333(uParam0);
			func_349(uParam0);
			func_344();
			if (!__LIB_0__::func_75(&uLocal_435))
			{
				__LIB_1__::func_148(&uLocal_435);
			}
			else if (__LIB_0__::func_264(&uLocal_435) > 90f)
			{
				bLocal_431 = true;
			}
			if (AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG4_AR"))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_309, 1, 1) > 7.5f)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("RCLDN_S2_IG4_AR", true, false);
				}
			}
			if (!bLocal_425)
			{
				__LIB_13__::func_89(uParam0, "CLD_FINDCLUES", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_377);
				bLocal_425 = true;
			}
			else if (!bLocal_426)
			{
				if (__LIB_1__::func_205(Global_35, iLocal_472, 1, 0))
				{
					__LIB_12__::func_883(uParam0, "CLD_FINDCLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				if (__LIB_5__::func_352("CLD_FINDCLUES"))
				{
					__LIB_0__::func_37(&uLocal_377);
					bLocal_426 = true;
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_472) && !__LIB_1__::func_205(Global_35, iLocal_472, 1, 0))
				{
					if (!__LIB_0__::func_270() && __LIB_0__::func_264(&uLocal_377) >= 10f)
					{
						__LIB_12__::func_883(uParam0, "CLD_FINDCLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_0__::func_37(&uLocal_377);
						bLocal_426 = true;
					}
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(iLocal_308))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_308, true, false), 3f, true))
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 3, 0, -1f, -1, 0);
					TASK::TASK_COWER(iLocal_303, -1, Global_35, 0);
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(0, 0);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
					iLocal_16 = 1;
					func_292(uParam0, 0);
					__LIB_0__::func_37(&uLocal_377);
					iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
					MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					iLocal_15 = 4;
					iLocal_282 = 6;
				}
				if (func_348())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_374))
					{
						iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_374))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
						iLocal_16 = 1;
						func_292(uParam0, 0);
						__LIB_0__::func_37(&uLocal_377);
						__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
						iLocal_15 = 4;
					}
				}
			}
			break;
		case 4:
			func_344();
			if (!bLocal_427)
			{
				__LIB_13__::func_89(uParam0, "CLD_HELPKID", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_427 = true;
			}
			else if (!bLocal_428)
			{
				if (__LIB_5__::func_352("CLD_HELPKID"))
				{
					__LIB_0__::func_37(&uLocal_377);
					bLocal_428 = true;
				}
				if (__LIB_8__::func_684("C4_THREATEN") && !__LIB_0__::func_75(&uLocal_377))
				{
					__LIB_1__::func_148(&uLocal_377);
				}
				if (!__LIB_0__::func_270() && (!__LIB_8__::func_684("C4_THREATEN") || (__LIB_8__::func_684("C4_THREATEN") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("C4_THREATEN") > 1)))
				{
					if (__LIB_0__::func_264(&uLocal_377) >= 0f || !__LIB_0__::func_75(&uLocal_377))
					{
						__LIB_12__::func_883(uParam0, "CLD_HELPKID", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_0__::func_37(&uLocal_377);
						bLocal_428 = true;
					}
				}
			}
			if (func_351(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_374))
				{
					MAP::REMOVE_BLIP(&iLocal_374);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_303, 130, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_303, 277, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_303, 315, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_303, 301, false);
				__LIB_13__::func_227(iLocal_303);
				__LIB_0__::func_37(&uLocal_377);
				iLocal_15 = 5;
			}
			break;
		case 5:
			func_344();
			if ((__LIB_0__::func_272(iLocal_303, 0) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_303, -1)) && !__LIB_0__::func_163(iLocal_303, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2872.01f, -1237.98f, 45.21f, 1.5f, 20000, 0.25f, 0, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_362))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_362, false, false), 1, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 20f, 5f, 1, 1, 1, 0);
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_362, 1, 1) < 5f)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
				}
				func_355();
				if (!bLocal_429)
				{
					__LIB_13__::func_89(uParam0, "CLD4_PICKUPGODTXT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_429 = true;
					__LIB_1__::func_148(&uLocal_377);
				}
				else if (!bLocal_430)
				{
					if (__LIB_5__::func_352("CLD4_PICKUPGODTXT"))
					{
						__LIB_0__::func_37(&uLocal_377);
						bLocal_430 = true;
					}
					if (!__LIB_6__::func_904() && !__LIB_0__::func_270())
					{
						if (__LIB_0__::func_264(&uLocal_377) >= 0f)
						{
							__LIB_12__::func_883(uParam0, "CLD4_PICKUPGODTXT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_0__::func_37(&uLocal_377);
							bLocal_430 = true;
						}
					}
				}
				if (!__LIB_0__::func_139(iLocal_420))
				{
					iLocal_420 = __LIB_2__::func_403("PICKUP_GENERIC", joaat("INPUT_CONTEXT_X"), iLocal_362, 2, 1, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_2__::func_450(iLocal_420, 2f, 1);
				}
				else
				{
					iLocal_421 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_362, 2f, 2, 1, 0, "CLD4_CRUC", 0);
					HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_420), iLocal_421, 0);
					if (__LIB_0__::func_567(iLocal_420, 1))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
						__LIB_1__::func_281(&iLocal_420, 1, 1);
						__LIB_0__::func_37(&uLocal_377);
						iLocal_15 = 6;
					}
				}
			}
			else
			{
				iLocal_362 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_384 + Vector(0.5f, 0f, 0f), true, true, false, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_362, 3, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, false, false, false, true);
				PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_362, 0);
				PLAYER::_0x6ECFC621A168424C(iLocal_362, iLocal_362, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_362, "p_crucifix02x", 0, 0, 0);
			}
			break;
		case 6:
			if (MAP::DOES_BLIP_EXIST(iLocal_375))
			{
				MAP::REMOVE_BLIP(&iLocal_375);
			}
			if ((__LIB_0__::func_272(iLocal_303, 0) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_303, -1)) && !__LIB_0__::func_163(iLocal_303, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2872.01f, -1237.98f, 45.21f, 1.5f, 20000, 0.25f, 0, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
			}
			__LIB_3__::func_319(iLocal_289[4]);
			__LIB_3__::func_319(iLocal_289[3]);
			__LIB_3__::func_319(iLocal_289[5]);
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_362) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_362))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_362);
			}
			iLocal_15 = 7;
			return 5;
		case 7:
			func_344();
			PED::SET_PED_RESET_FLAG(Global_35, 205, true);
			if (!__LIB_1__::func_707(joaat("PROVISION_CALDERON_CROSS"), 1, 0))
			{
				func_365(joaat("PROVISION_CALDERON_CROSS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && func_366())
			{
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_13__::func_89(uParam0, "CALDERON4_OBJ2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_12__::func_883(uParam0, "CALDERON4_OBJ2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, joaat("REL_NO_RELATIONSHIP"));
				}
				__LIB_0__::func_395(1);
				iLocal_16 = 2;
				func_292(uParam0, 0);
				__LIB_9__::func_438(7);
				iLocal_15 = 8;
			}
			break;
		case 8:
			func_344();
			PED::SET_PED_RESET_FLAG(Global_35, 205, true);
			if (((ENTITY::DOES_ENTITY_EXIST(iLocal_306) && !PED::_0x331550B212014B92(iLocal_306, Global_35)) && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), bVar0, bVar1, bVar2)) && !bLocal_382)
			{
				EVENT::_0x7C511E91738A0828(iLocal_306, Global_35, 40, 0);
				bLocal_382 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_303, 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_303, 0f);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_303);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (__LIB_0__::func_665(iLocal_306, Global_35, 1, 1) >= 100f && PED::_0x7F9B9791D4CB71F6(iLocal_306, Global_35, 0, 0) == 0)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_306);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				iLocal_363 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_390, true, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
			}
			if (func_368() && ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
				iLocal_376 = __LIB_8__::func_778(408396114, iLocal_300, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_376, "CLD4_CLDLBL");
				__LIB_9__::func_438(8);
				__LIB_0__::func_395(0);
				fLocal_567 = __LIB_0__::func_94(Global_35, vLocal_317, 1);
				bLocal_566 = true;
				iLocal_15 = 9;
			}
			else if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
				if (bLocal_381)
				{
					iLocal_376 = __LIB_8__::func_778(408396114, iLocal_300, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_376, "CLD4_CLDLBL");
				}
				else
				{
					iLocal_376 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vLocal_320, 20f);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, joaat("PLAYER"));
				}
				LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				__LIB_13__::func_89(uParam0, "CALDERON4_OBJ3", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_12__::func_883(uParam0, "CALDERON4_OBJ3", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_438(8);
				__LIB_0__::func_395(0);
				fLocal_567 = __LIB_0__::func_94(Global_35, vLocal_317, 1);
				bLocal_566 = true;
				iLocal_15 = 9;
			}
			break;
		case 9:
			func_344();
			PED::SET_PED_RESET_FLAG(Global_35, 205, true);
			if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_376))
				{
					MAP::REMOVE_BLIP(&iLocal_376);
				}
				iLocal_15 = 8;
				__LIB_13__::func_89(uParam0, "CALDERON4_OBJ2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_12__::func_883(uParam0, "CALDERON4_OBJ2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else if (!__LIB_1__::func_588("CALDERON4_OBJ3", 0, 0, -1, -1, 0))
			{
				__LIB_13__::func_89(uParam0, "CALDERON4_OBJ3", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && func_366())
			{
				if (!bLocal_566)
				{
					__LIB_12__::func_883(uParam0, "CALDERON4_OBJ3", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_566 = true;
				}
				func_371();
				if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 30f && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_67(uParam0->f_2581)))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 15f && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_67(uParam0->f_2581)))
					{
						func_328(&(uParam0->f_753), uParam0->f_2581, 0, 0);
					}
					if (!__LIB_12__::func_670(&(uParam0->f_753)))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[1], false))
						{
							if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_289[1], "pbl_Conversation"))
							{
								if (((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[1], "pbl_Conversation") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[1], "pbl_Conversation")) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[1], "pbl_leadin_dialogue")) && __LIB_0__::func_665(Global_35, iLocal_300, 1, 1) > 10f)
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[1], "pbl_Conversation", true);
								}
							}
							else if (!__LIB_0__::func_75(&uLocal_453))
							{
								__LIB_1__::func_148(&uLocal_453);
							}
							else if (__LIB_0__::func_264(&uLocal_453) > 75f)
							{
								if ((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[1], "pbl_leadin_dialogue") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[1], "pbl_leadin_dialogue")) && __LIB_0__::func_665(Global_35, iLocal_300, 1, 1) > 10f)
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[1], "pbl_leadin_dialogue", true);
								}
							}
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_363) && ENTITY::_IS_ENTITY_FROZEN(iLocal_363))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, false);
						}
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_289[1], "pbl_Conversation"))
						{
							if ((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[1], "pbl_base") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[1], "pbl_base")) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[1], "pbl_base"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[1], "pbl_base", true);
							}
						}
					}
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) > 25f)
				{
					func_373();
				}
				if (__LIB_12__::func_670(&(uParam0->f_753)))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_376))
					{
						MAP::REMOVE_BLIP(&iLocal_376);
					}
					__LIB_3__::func_319(iLocal_289[1]);
					__LIB_0__::func_7(&(uParam0->f_172), 262144);
					return 5;
				}
			}
			break;
		case 10:
			return 8;
	}
	return 7;
}

void func_122(var uParam0)
{
	if (__LIB_1__::func_707(joaat("PROVISION_CALDERON_CROSS"), 1, 0))
	{
		func_395(joaat("PROVISION_CALDERON_CROSS"), 1, 0, -1387038764, 0);
	}
	__LIB_10__::func_525(14, 0, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
				__LIB_12__::func_65(iParam0);
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
		func_410(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_411(Global_1347702[iParam0 /*49*/].f_15, bParam6);
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
	vVar2 = { func_414(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_138(var uParam0)
{
	func_420();
	if (bLocal_299)
	{
		if (MISC::IS_BULLET_IN_AREA(vLocal_335, 1f, true))
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01"))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01", true);
				}
			}
		}
		else if (MISC::IS_BULLET_IN_AREA(vLocal_338, 1f, true))
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01"))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01", true);
				}
			}
		}
	}
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 11)
	{
		if (iLocal_284 == 0)
		{
			if (func_439())
			{
				iLocal_284 = 1;
			}
		}
		else if (iLocal_284 == 1)
		{
			if (__LIB_0__::func_94(Global_35, Global_1347702[23 /*49*/].f_24, 1) > 75f)
			{
				return true;
			}
		}
	}
	else if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!bLocal_562)
		{
			func_440(uParam0);
			if (!bLocal_562)
			{
				func_326();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_307))
			{
				if (__LIB_0__::func_665(iLocal_300, Global_35, 1, 1) <= 5f)
				{
					Local_668.f_3 = Global_35;
					Local_668.f_7 = 5000;
					Local_693.f_3 = Global_35;
					Local_693.f_7 = 5000;
					if ((__LIB_0__::func_265(&uLocal_441) > 9f && !__LIB_0__::func_270()) && iLocal_563 < 3)
					{
						if (__LIB_12__::func_876(uParam0, "RCLDN_HANG", 0))
						{
							Local_668.f_3 = Global_35;
							Local_668.f_7 = 5000;
							Local_693.f_3 = Global_35;
							Local_693.f_7 = 5000;
							_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_300, &Local_668);
							_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_307, &Local_693);
							iLocal_563++;
							__LIB_1__::func_148(&uLocal_441);
						}
					}
				}
				if (!__LIB_0__::func_266(iLocal_300, Global_36, 75f, 0, 1))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_300))
					{
						return true;
					}
				}
			}
			else
			{
				return true;
			}
		}
		else
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

void func_159(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_300))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_300);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_301);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_302))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_302);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_303, 0f);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_303);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_304))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_304);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_305))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_305);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_306);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_307);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_375))
	{
		MAP::REMOVE_BLIP(&iLocal_375);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_373))
	{
		MAP::REMOVE_BLIP(&iLocal_373);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_376))
	{
		MAP::REMOVE_BLIP(&iLocal_376);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_362))
	{
		OBJECT::DELETE_OBJECT(&iLocal_362);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		OBJECT::DELETE_OBJECT(&iLocal_363);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_358))
	{
		OBJECT::DELETE_OBJECT(&iLocal_358);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_359))
	{
		OBJECT::DELETE_OBJECT(&iLocal_359);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
		OBJECT::DELETE_OBJECT(&iLocal_360);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_361))
	{
		OBJECT::DELETE_OBJECT(&iLocal_361);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_364))
	{
		OBJECT::DELETE_OBJECT(&iLocal_364);
	}
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (bLocal_383)
	{
		__LIB_0__::func_121(938, 32);
		if (__LIB_5__::func_458(938))
		{
		}
	}
	func_445();
	func_446();
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	__LIB_0__::func_405();
	ENTITY::REMOVE_MODEL_HIDE(vLocal_347, 2f, joaat("P_DEBRISBOARD17X"), 1);
	ENTITY::REMOVE_MODEL_HIDE(vLocal_350, 5f, joaat("P_MARKETCART01X"), 1);
	ENTITY::REMOVE_MODEL_HIDE(vLocal_350, 5f, joaat("P_STATIC_BARREL_09A"), 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_467))
	{
		PATHFIND::_0xD17672447692478E(iLocal_467, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_468))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_468);
		POPULATION::_0x74C2B3DC0B294102(iLocal_468);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_474))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_474);
		POPULATION::_0x74C2B3DC0B294102(iLocal_474);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_460))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_460, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_461))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_461, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_462))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_462, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_471))
	{
		__LIB_2__::func_161(VOLUME::_GET_VOLUME_COORDS(iLocal_471), 100f, 5);
		__LIB_17__::func_507(VOLUME::_GET_VOLUME_COORDS(iLocal_471), 100f, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_472))
	{
		__LIB_2__::func_161(VOLUME::_GET_VOLUME_COORDS(iLocal_472), 100f, 5);
		__LIB_17__::func_507(VOLUME::_GET_VOLUME_COORDS(iLocal_472), 100f, 0);
	}
	__LIB_0__::func_172(iLocal_468);
	__LIB_0__::func_172(iLocal_471);
	__LIB_0__::func_172(iLocal_472);
	__LIB_0__::func_172(iLocal_469);
	__LIB_0__::func_172(iLocal_470);
	__LIB_0__::func_172(iLocal_467);
	__LIB_0__::func_172(iLocal_463);
	__LIB_0__::func_172(iLocal_464);
	__LIB_0__::func_172(iLocal_465);
	__LIB_0__::func_172(iLocal_466);
	__LIB_0__::func_172(iLocal_473);
	__LIB_0__::func_172(iLocal_474);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_310))
	{
		__LIB_2__::func_145(iLocal_310, 0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCLD_PRE");
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCLD_ACTIVE");
	__LIB_0__::func_395(0);
}

void func_196()
{
	__LIB_2__::func_602(&(Local_162[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(Local_100[0 /*61*/]), 17);
}

void func_197()
{
	__LIB_2__::func_602(&(Local_247[0 /*17*/]), "INTERACT_CONFRONT", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_247[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(Local_185[0 /*61*/]), 7);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_308, 8, 0, 1);
}

int func_207(vector3 vParam0, var uParam3)
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
		iVar0 = func_507(0, 0);
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

bool func_218()
{
	int iVar0;
	iVar0 = PED::_0x5407B7288D0478B7(Global_35, 1);
	switch (iLocal_181)
	{
		case 0:
			if (iVar0 > 0 && __LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 35f)
			{
				__LIB_1__::func_148(&uLocal_182);
				iLocal_181 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_182) > 2.5f)
			{
				iLocal_181 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_221(int iParam0)
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

int func_230(var uParam0)
{
	int iVar0;
	if (!bLocal_298)
	{
		iVar0 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_300))
		{
			if (!func_568(&iLocal_300, &(uParam0->f_178), &iVar0, 1, 0, 0))
			{
				func_439();
				bLocal_298 = true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
		{
			if (!func_568(&iLocal_301, &(uParam0->f_178), &iVar0, 1, 0, 0))
			{
				func_439();
				bLocal_298 = true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_302))
		{
			if (!func_568(&iLocal_302, &(uParam0->f_178), &iVar0, 1, 0, 0))
			{
				func_439();
				bLocal_298 = true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
		{
			if (!func_568(&iLocal_303, &(uParam0->f_178), &iVar0, 1, 0, 0))
			{
				func_439();
				bLocal_298 = true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_304))
		{
			if (!func_568(&iLocal_304, &(uParam0->f_178), &iVar0, 1, 0, 0))
			{
				func_439();
				bLocal_298 = true;
			}
		}
	}
	else if (func_439())
	{
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_235(var uParam0)
{
	__LIB_1__::func_148(&uLocal_441);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_13__::func_222(uParam0, 3);
	}
	__LIB_0__::func_405();
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCLD_ACTIVE");
	func_571();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_310))
	{
		__LIB_2__::func_145(iLocal_310, 0);
	}
}

void func_249(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_256(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_594(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_273(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	if (func_622(0, 2, "pl_Base"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
		{
			iLocal_300 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
		}
		vVar0 = { 2816.371f, -1107.629f, 45.3318f };
		vVar3 = { 2815.303f, -1108.697f, 45.3318f };
		vVar6 = { 2816.954f, -1110.551f, 45.3319f };
		vVar9 = { 2817.879f, -1112.29f, 45.3319f };
		fVar12 = 114.9016f;
		fVar13 = 298.512f;
		fVar14 = 270.4209f;
		fVar15 = 333.0352f;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301))
		{
			iLocal_301 = __LIB_12__::func_885(uParam0, joaat("CS_BROTHERDORKINS"), vVar0, fVar12, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_302))
		{
			iLocal_302 = __LIB_12__::func_885(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), vVar3, fVar13, 1, 1, 1, 1, 1, 0, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
		{
			iLocal_303 = __LIB_12__::func_885(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), vVar6, fVar14, 1, 1, 1, 1, 1, 0, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_304))
		{
			iLocal_304 = __LIB_12__::func_885(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), vVar9, fVar15, 1, 1, 1, 1, 1, 0, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_300, 105.4616f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_362))
		{
			iLocal_362 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), 2818.929f, -1111.351f, 46.2291f, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_362, -91.02f, -0.77f, -96.94f, 0, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358))
		{
			iLocal_358 = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK03X"), 2818.69f, -1112.11f, 45.47f, true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_359))
		{
			iLocal_359 = OBJECT::CREATE_OBJECT(joaat("P_CS_BIBLE01X"), 2818.69f, -1112.11f, 45.47f, true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_360))
		{
			iLocal_360 = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK04X"), 2818.69f, -1112.11f, 45.47f, true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_361))
		{
			iLocal_361 = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK04X"), 2818.69f, -1112.11f, 45.47f, true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_364))
		{
			iLocal_364 = OBJECT::CREATE_OBJECT(joaat("P_PENCIL01X"), 2819.44f, -1111.29f, 46.2f, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_364, -90f, 0f, 0f, 2, true);
		}
		if (__LIB_0__::func_272(iLocal_300, 1))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_300))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_300, true, true);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_300, Global_1347702[uParam0->f_174 /*49*/].f_24, true, false, true, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_300, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, joaat("PLAYER"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_300, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_302))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_302, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_302, joaat("PLAYER"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_302, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_302, true);
			PED::_SET_PED_BODY_COMPONENT(iLocal_302, 1125487203);
			PED::_UPDATE_PED_VARIATION(iLocal_302, false, true, true, true, false);
		}
		else
		{
			return 0;
		}
		if (__LIB_0__::func_272(iLocal_303, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_303, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_303, joaat("PLAYER"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_303, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_303, true);
			PED::_SET_PED_BODY_COMPONENT(iLocal_303, 1418999136);
			PED::_UPDATE_PED_VARIATION(iLocal_303, false, true, true, true, false);
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_304))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_304, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_304, joaat("PLAYER"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_304, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_304, true);
			PED::_SET_PED_BODY_COMPONENT(iLocal_304, 637524020);
			PED::_UPDATE_PED_VARIATION(iLocal_304, false, true, true, true, false);
		}
		else
		{
			return 0;
		}
		if (__LIB_0__::func_272(iLocal_301, 1))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_301))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_301, true, true);
			}
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_301, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_301, joaat("PLAYER"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_301, false);
		}
		else
		{
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_467))
		{
			iLocal_467 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2835.699f, -1140.269f, 50.09362f, 0f, 0f, 15.75362f, 59.8495f, 133.3598f, 15.42935f, "Cldn 1.2 road deactivation");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_468))
		{
			iLocal_468 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_326, 0f, 0f, -23.33537f, 4.336703f, 6.743969f, 2.728027f, "Cldn 1.2 cross drop ped blocker");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_469))
		{
			iLocal_469 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2867.707f, -1228.07f, 47.15649f, 0f, 0f, -12.97481f, 4.507099f, 5.449239f, 4.678353f, "Cldn 1.2 big wagon blocker");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_470))
		{
			iLocal_470 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2868.966f, -1216.636f, 46.53066f, 0f, 0f, -0.329324f, 2.220358f, 3.046501f, 3.158224f, "Cldn 1.2 small wagon blocker");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_464))
		{
			iLocal_464 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2815.109f, -1111.724f, 46.61324f, 0f, 0f, 13.13405f, 4.600927f, 2.325102f, 2.909041f, "Cldn 1.2 ILO vol");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_465))
		{
			iLocal_465 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2818.045f, -1111.186f, 45.7595f, 0f, 0f, 13.50041f, 1.55335f, 2.860662f, 2.039934f, "Cldn 1.2 ILO auto-notice vol");
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_466))
		{
			iLocal_466 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2819.938f, -1110.389f, 46.37319f, 0f, 0f, 15.88415f, 4.144603f, 6.198715f, 2.318691f, "Cldn 1.2 ILO auto-notice vol 2");
			return 0;
		}
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_467, 0, 1, 1);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_468, 8192, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_468, 8192, 0, 0, -1, -1, 0);
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		__LIB_12__::func_875(uParam0, iLocal_303, "RCLD1_C3KID", 1);
		__LIB_12__::func_875(uParam0, iLocal_300, "RCLD_CALDERON", 1);
		__LIB_12__::func_875(uParam0, iLocal_301, "RCLD1_DORKINS", 1);
		__LIB_13__::func_223(&iLocal_300);
		__LIB_13__::func_223(&iLocal_301);
		__LIB_13__::func_223(&iLocal_302);
		__LIB_13__::func_223(&iLocal_303);
		__LIB_13__::func_223(&iLocal_304);
		PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
		func_40(&uLocal_533);
		return 1;
	}
	return 0;
}

void func_292(var uParam0, bool bParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
	{
		VOLUME::_DELETE_VOLUME(iLocal_463);
	}
	switch (iLocal_16)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), func_648(uParam0), 24);
			__LIB_13__::func_16(uParam0, 113309);
			__LIB_12__::func_981(uParam0, 113362);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_300, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_301, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_302, "A_M_Y_NBXStreetKids_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_304, "A_M_Y_NBXStreetKids_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_303, "A_M_Y_NBXStreetKids_01^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_358, "p_cs_book03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_359, "p_cs_bible01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_360, "p_cs_book04x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_361, "p_cs_book04x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_362, "p_crucifix02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_364, "p_pencil01x", 0, 0, 0);
			iLocal_463 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2811.794f, -1120.382f, 47.4517f, 0f, 0f, 15.50057f, 24.15897f, 38.52339f, 5.948906f, "CS1 restriction vol");
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
			{
				__LIB_13__::func_261(uParam0, &iLocal_463, 0, 0, 0, 0);
				__LIB_1__::func_414(&(uParam0->f_206), 0, 0, 2, 0);
			}
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_0__::func_8(&(uParam0->f_172), 262144);
			__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_943(&(uParam0->f_206), 2803.886f, -1112.84f, 45.4546f, 210.5075f, 0);
			__LIB_0__::func_88(&(uParam0->f_206), -2147483648);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), func_648(uParam0), 24);
			__LIB_12__::func_981(uParam0, 113748);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_305, "EdithDown", 0, joaat("CS_EDITHDOWN"), 0);
			__LIB_12__::func_957(uParam0, iLocal_306, "S_M_M_AmbientSDPolice_01", 0, joaat("S_M_M_DISPATCHPOLICE_01"), 0);
			__LIB_12__::func_957(uParam0, iLocal_362, "p_crucifix02x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, vLocal_387);
			iLocal_463 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.944f, -1248.722f, 45.4422f, 0f, 0f, -41.01513f, 21.98158f, 28.9656f, 12.36643f, "CS2 restriction vol");
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
			{
				__LIB_13__::func_261(uParam0, &iLocal_463, 0, 0, 2, 0);
			}
			if (bParam1)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			__LIB_0__::func_267(1);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), func_648(uParam0), 24);
			__LIB_12__::func_981(uParam0, 114044);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_363) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_363))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
			}
			__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 0);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_300, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_307, "CS_SDPRIEST", 0);
			iLocal_463 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2732.144f, -1260.854f, 50.45858f, 0f, 0f, -33.00134f, 16.50895f, 12.80054f, 5.683042f, "Outro restriction vol");
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
			{
				__LIB_13__::func_261(uParam0, &iLocal_463, 0, 0, 2, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_363, "p_crucifix02x", 0);
				__LIB_12__::func_957(uParam0, iLocal_363, "p_crucifix02x", 0, 0, 0);
			}
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_300, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_307, "CS_SDPRIEST", 0, 0, 0);
			__LIB_12__::func_779(uParam0, vLocal_317);
			if (bParam1)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
				__LIB_13__::func_725(&(uParam0->f_206), 40f);
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), func_648(uParam0), 24);
			__LIB_12__::func_981(uParam0, 114044);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, false);
			}
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_300, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_307, "CS_SDPRIEST", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_363, "p_crucifix02x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, vLocal_317);
			iLocal_463 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2732.144f, -1260.854f, 50.45858f, 0f, 0f, -33.00134f, 16.50895f, 12.80054f, 5.683042f, "Outro restriction vol");
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
			{
				__LIB_13__::func_261(uParam0, &iLocal_463, 0, 0, 2, 0);
			}
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_0__::func_8(&(uParam0->f_172), 262144);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
	}
}

bool func_293(var uParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_310))
	{
		iLocal_310 = __LIB_0__::func_398(7);
	}
	else if (!__LIB_0__::func_394(Global_35, iLocal_310, 1))
	{
		if (__LIB_0__::func_665(iLocal_310, iLocal_300, 1, 1) <= 5f && !__LIB_0__::func_163(iLocal_310, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_310, 2803.886f, -1112.84f, 45.4546f, 1f, 20000, 0.25f, 0, 40000f);
		}
	}
	if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 5f && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_13__::func_224(uParam0, &bVar0, &iVar1, &uVar2, &uVar3, &fVar4);
			if (func_663(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), uVar3, uVar2, iVar1, bVar0, fVar4, 1, 0, 1, 1, 1))
			{
			}
		}
	}
	switch (iLocal_17)
	{
		case 0:
			if (func_622(0, 2, "pl_Base"))
			{
				if (func_664())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_364))
					{
						PHYSICS::ACTIVATE_PHYSICS(iLocal_364);
					}
					iLocal_17 = 1;
				}
			}
			break;
		case 1:
			func_665();
			if (!bLocal_422)
			{
				if (func_666())
				{
					bLocal_422 = true;
				}
			}
			else if (func_668(&iLocal_300, &(Local_18[0 /*61*/]), 8f, &Local_80, 0.25f, 3, 0, "", __LIB_2__::func_340(5, 0, 0), iLocal_464, 0, 2, -1082130432 /* Float: -1f */) > -1)
			{
				iLocal_17 = 2;
			}
			else if (__LIB_0__::func_393(Global_35, iLocal_465, 0, 1) || __LIB_0__::func_393(Global_35, iLocal_466, 0, 1))
			{
				__LIB_3__::func_515(&(Local_80[0 /*17*/]), 0, 0);
				MISC::SET_BIT(&(Local_18[0 /*61*/].f_21), 3);
				iLocal_17 = 2;
			}
			break;
		case 2:
			func_671(&iLocal_300, &(Local_18[0 /*61*/]), &Local_80, 8f, -1082130432 /* Float: -1f */, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			__LIB_1__::func_538(0);
			if (!__LIB_0__::func_75(&uLocal_432))
			{
				if (__LIB_1__::func_265(Global_35, "GREET_GENERAL", joaat("SPEECH_PARAMS_STANDARD"), iLocal_301, 1, 0, 0, 1))
				{
					__LIB_1__::func_148(&uLocal_432);
				}
			}
			else if (__LIB_3__::func_135(&uLocal_432) > 750)
			{
				iLocal_17 = 3;
			}
			break;
		case 3:
			func_671(&iLocal_300, &(Local_18[0 /*61*/]), &Local_80, 8f, -1082130432 /* Float: -1f */, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			__LIB_1__::func_538(0);
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[0], false)) && ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], "pl_leadin")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], "pl_leadin"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], "pl_leadin", true);
				iLocal_17 = 4;
			}
			break;
		case 4:
			func_671(&iLocal_300, &(Local_18[0 /*61*/]), &Local_80, 8f, -1082130432 /* Float: -1f */, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			__LIB_1__::func_538(0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!__LIB_0__::func_163(Global_35, 716706914))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_289[0]) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_289[0]) > 0.95f)
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCLD_ACTIVE");
				__LIB_5__::func_20(0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_296(var uParam0)
{
	if (__LIB_12__::func_936(uParam0))
	{
		func_420();
		if (!__LIB_0__::func_1(uParam0->f_172, 16))
		{
			__LIB_13__::func_33(uParam0, 0);
			func_292(uParam0, 1);
		}
		if ((((!PED::_0xA0BC8FAED8CFEB3C(iLocal_300) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_302)) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_303)) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_304)) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_301))
		{
			return false;
		}
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
		return true;
	}
	else
	{
		func_420();
		__LIB_1__::func_951(&iLocal_362);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
		{
			iLocal_303 = __LIB_12__::func_885(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), 2854.873f, -1126.158f, 42.9858f, 10.3204f, 1, 1, 1, 1, 1, 0, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
		{
			if ((func_337() && func_339()) && func_340(uParam0))
			{
				if (!__LIB_0__::func_75(&uLocal_441))
				{
					func_103(uParam0);
					func_40(&uLocal_533);
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_303);
					__LIB_9__::func_438(1);
					__LIB_1__::func_148(&uLocal_441);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					PED::_SET_PED_BODY_COMPONENT(iLocal_303, 1418999136);
					PED::_UPDATE_PED_VARIATION(iLocal_303, false, true, true, true, false);
					func_320();
				}
				else if (__LIB_1__::func_871(&uLocal_441) >= 850)
				{
					if (func_338())
					{
						TASK::TASK_CLEAR_LOOK_AT(Global_35);
						__LIB_0__::func_37(&uLocal_441);
						__LIB_13__::func_105(1, 1);
						return true;
					}
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
	}
	return false;
}

bool func_298(var uParam0)
{
	func_420();
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		iLocal_303 = __LIB_12__::func_885(uParam0, joaat("RCSP_CALDERONSTAGE2_TEENS_01"), 2854.873f, -1126.158f, 42.9858f, 10.3204f, 1, 1, 1, 1, 1, 0, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		if ((func_337() && func_338()) && func_333(uParam0))
		{
			if ((PED::_0xA0BC8FAED8CFEB3C(iLocal_308) && PED::_0xA0BC8FAED8CFEB3C(iLocal_303)) && __LIB_5__::func_194(938, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_441))
				{
					__LIB_0__::func_123(938, 32);
					bLocal_383 = true;
					__LIB_1__::func_148(&uLocal_441);
					func_40(&uLocal_533);
					__LIB_9__::func_438(4);
					iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
					MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
					iLocal_16 = 1;
					func_292(uParam0, 0);
					iLocal_15 = 4;
					__LIB_13__::func_89(uParam0, "CLD_HELPKID", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_303);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_303, "RCLDRN2_street_kid_chase_group", 0f);
					PED::_SET_PED_BODY_COMPONENT(iLocal_303, 1418999136);
					PED::_UPDATE_PED_VARIATION(iLocal_303, false, true, true, true, false);
					__LIB_0__::func_568(ENTITY::GET_ENTITY_COORDS(iLocal_308, true, false), 7f, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				else if (__LIB_1__::func_871(&uLocal_441) >= 850)
				{
					__LIB_0__::func_37(&uLocal_441);
					__LIB_13__::func_105(1, 1);
					return true;
				}
			}
			else if (!__LIB_5__::func_194(938, 1))
			{
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
	return false;
}

bool func_299(var uParam0)
{
	__LIB_1__::func_283(&uLocal_441, 1);
	func_40(&uLocal_533);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_362))
	{
		iLocal_362 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_384 + Vector(0.5f, 0f, 0f), true, true, false, false, true);
	}
	else
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 16))
		{
			__LIB_9__::func_438(6);
			iLocal_15 = 7;
			iLocal_16 = 1;
			func_292(uParam0, 1);
		}
		else if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_3__::func_730(iLocal_463, 0, 0, 0, 0, 0);
		return true;
	}
	return false;
}

bool func_300(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		iLocal_306 = __LIB_12__::func_885(uParam0, joaat("S_M_M_DISPATCHPOLICE_01"), vLocal_341, 326.0574f, 1, 1, 0, 1, 1, 1, 1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_306, joaat("REL_COP"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_306, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_306, 188, true);
		PED::SET_PED_ID_RANGE(iLocal_306, 100f);
		PED::_0xBD75500141E4725C(iLocal_306, joaat("LAW"));
		TASK::TASK_POLICE(iLocal_306, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		__LIB_0__::func_267(1);
		iLocal_16 = 2;
		iLocal_15 = 7;
		CAM::DO_SCREEN_FADE_IN(500);
		func_325();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_2__::func_426(&iLocal_301);
		__LIB_2__::func_426(&iLocal_302);
		__LIB_2__::func_426(&iLocal_304);
		return true;
	}
	return false;
}

bool func_301(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		iLocal_363 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_390, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
	}
	if (func_366() && ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 16))
		{
			func_40(&uLocal_533);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
			{
				PED::DELETE_PED(&iLocal_303);
			}
			iLocal_15 = 9;
			iLocal_376 = MAP::_BLIP_ADD_FOR_RADIUS(1247852480, vLocal_320, 20f);
			iLocal_16 = 2;
			fLocal_567 = __LIB_0__::func_94(Global_35, vLocal_317, 1);
			func_292(uParam0, 0);
		}
		else
		{
			__LIB_2__::func_426(&iLocal_301);
			__LIB_2__::func_426(&iLocal_302);
			__LIB_2__::func_426(&iLocal_304);
			__LIB_13__::func_105(1, 1);
			__LIB_13__::func_89(uParam0, "CALDERON4_OBJ3", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			return true;
		}
	}
	return false;
}

bool func_302(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		iLocal_363 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_390, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
	}
	__LIB_3__::func_319(iLocal_289[0]);
	if (func_366() && ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 16))
		{
			__LIB_3__::func_319(iLocal_289[1]);
			if (__LIB_0__::func_272(iLocal_300, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_300, vLocal_317, true, false, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
			{
				PED::DELETE_PED(&iLocal_303);
			}
			func_40(&uLocal_533);
			iLocal_15 = 9;
			iLocal_16 = 3;
			func_292(uParam0, 1);
		}
		else if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_315(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_705(uParam4);
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

void func_320()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		if (!__LIB_0__::func_163(iLocal_303, 713668775))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_303, 2822.15f, -1167.587f, 46.3983f, 189.8748f, true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_362))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_362, iLocal_303, 34606, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_303, vLocal_344, 3f, 20000, 0.25f, 0, 40000f);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_303, "RCLDRN2_street_kid_chase_group", 0f);
	}
}

void func_325()
{
	vector3 vVar0[24];
	struct<12> Var3;
	LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 500, iLocal_305, true);
	StringCopy(&cVar0, "LAW_UI_DEAD_OR_ALIVE", 24);
	__LIB_11__::func_309(cVar0);
	Var3.f_9 = -1082130432;
	Var3.f_10 = -1082130432;
	Var3.f_11 = -1082130432;
	Var3.f_6 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false) };
	LAW::_0xC687A23E166DCF68(&Var3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_306, 39, true);
}

int func_326()
{
	if (func_722() && func_622(6, 0, "pl_leadout"))
	{
		if (func_723())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				iLocal_363 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_390, true, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				if (func_724())
				{
					return 1;
				}
			}
			else
			{
				iLocal_300 = func_725(joaat("CS_SISTERCALDERON"), vLocal_317, fLocal_354, 1, 1, 0, 1);
			}
		}
	}
	return 0;
}

bool func_328(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_12__::func_889(uParam0);
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
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
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
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
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
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
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
			if (__LIB_12__::func_851(uParam0, iParam5))
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

bool func_333(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_308))
	{
		iLocal_308 = __LIB_12__::func_885(uParam0, iLocal_312, vLocal_329, 73.8336f, 0, 0, 1, 1, 1, 1, 1, 0);
		__LIB_12__::func_875(uParam0, iLocal_308, "RCLDN_MAN", 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 174, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 72, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 124, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 225, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 317, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 277, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_308, 315, true);
		PED::_0xAE6004120C18DF97(iLocal_308, 0, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_308, 2, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_308, 0, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_308, 7, 0);
		__LIB_0__::func_568(vLocal_329, 2f, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_308, true);
		PED::_SET_PED_BODY_COMPONENT(iLocal_308, 421581998);
		Local_618.f_3 = Global_35;
		Local_618.f_4 = 21030;
		Local_618.f_7 = 10000;
		Local_618 = { 0f, 0f, 0f };
		Local_618.f_8 = 4;
		Local_618 = { Local_618 };
	}
	else if (__LIB_0__::func_272(iLocal_303, 0))
	{
		if ((!ENTITY::IS_ENTITY_AT_COORD(iLocal_303, vLocal_326, 1f, 1f, 3f, false, true, 0) && (!__LIB_0__::func_163(iLocal_303, 713668775) || ENTITY::IS_ENTITY_AT_COORD(iLocal_303, vLocal_344, 1.5f, 1.5f, 3f, false, true, 0))) && !bLocal_564)
		{
			__LIB_0__::func_568(vLocal_326, 2f, 0);
			if (MAP::DOES_BLIP_EXIST(iLocal_373))
			{
				MAP::REMOVE_BLIP(&iLocal_373);
			}
			func_763(iLocal_303, vLocal_326, fLocal_356, 2, 1073741824 /* Float: 2f */);
			AUDIO::STOP_PED_SPEAKING(iLocal_303, true);
			__LIB_9__::func_438(2);
		}
		else if ((!__LIB_0__::func_163(iLocal_303, 713668775) || ENTITY::IS_ENTITY_AT_COORD(iLocal_303, vLocal_344, 1.5f, 1.5f, 3f, false, true, 0)) && !bLocal_564)
		{
			if (func_622(5, 0, "pl_Intro"))
			{
				if (func_764())
				{
					Local_643.f_3 = Global_35;
					Local_643.f_4 = 21030;
					Local_643.f_7 = 20000;
					Local_643 = { 0f, 0f, 0f };
					Local_643.f_8 = 4;
					PED::SET_PED_CONFIG_FLAG(iLocal_303, 130, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_303, 277, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_303, 315, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_303, 301, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_303, 297, false);
					MISC::_0xE98D55C5983F2509(iLocal_303);
					bLocal_564 = true;
					TASK::_0xEB2ED1DC3AEC0654(iLocal_469, 1, 1, 1, 1);
					TASK::_0xEB2ED1DC3AEC0654(iLocal_470, 1, 1, 1, 1);
					ENTITY::CREATE_MODEL_HIDE(vLocal_347, 2f, joaat("P_DEBRISBOARD11X"), true);
					ENTITY::CREATE_MODEL_HIDE(vLocal_347, 2f, joaat("P_DEBRISBOARD17X"), true);
					ENTITY::CREATE_MODEL_HIDE(vLocal_350, 5f, joaat("P_MARKETCART01X"), true);
					ENTITY::CREATE_MODEL_HIDE(vLocal_350, 5f, joaat("P_STATIC_BARREL_09A"), true);
					__LIB_1__::func_206(ENTITY::GET_ENTITY_COORDS(iLocal_303, false, false), 2f, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_373))
					{
						MAP::REMOVE_BLIP(&iLocal_373);
					}
				}
			}
		}
		else if (bLocal_564)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_473))
			{
				iLocal_473 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2860.627f, -1236.858f, 46.13429f, 0f, 0f, -17.7016f, 1.38203f, 1.449945f, 1f);
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_337()
{
	if (func_622(3, 0, "pl_Base"))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[3]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[3], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[3], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_301) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[3], "cs_brotherdorkins", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "cs_brotherdorkins", iLocal_301, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_302) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[3], "A_M_Y_NBXStreetKids_01", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "A_M_Y_NBXStreetKids_01", iLocal_302, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_304) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[3], "A_M_Y_NBXStreetKids_01^1", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "A_M_Y_NBXStreetKids_01^1", iLocal_304, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_358) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_book03x", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "p_cs_book03x", iLocal_358, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_359))
			{
				iLocal_359 = OBJECT::CREATE_OBJECT(joaat("P_CS_BIBLE01X"), 2818.69f, -1112.11f, 45.47f, true, true, false, false, true);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_bible01x", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "p_cs_bible01x", iLocal_359, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_360) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_book04x", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "p_cs_book04x", iLocal_360, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_361) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_book04x^1", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[3], "p_cs_book04x^1", iLocal_361, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_364))
			{
				iLocal_364 = OBJECT::CREATE_OBJECT(joaat("P_PENCIL01X"), 2819.44f, -1111.29f, 46.2f, true, true, false, false, true);
			}
			if (((((((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[3], "cs_brotherdorkins", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[3], "A_M_Y_NBXStreetKids_01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[3], "A_M_Y_NBXStreetKids_01^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_book03x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_book04x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_book04x^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[3], "p_cs_bible01x", false))) && ENTITY::DOES_ENTITY_EXIST(iLocal_364))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_289[3]);
				return true;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[3], false))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_338()
{
	if (func_622(4, 0, "pl_base"))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[4], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[4], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[4], "cs_SisterCalderon", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[4], "cs_SisterCalderon", iLocal_300, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[4], "ARTHUR", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[4], "ARTHUR", Global_35, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[4], "cs_SisterCalderon", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[4], "ARTHUR", false)))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_289[4]);
				return true;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[4], false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[4], "pl_base"))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) >= 50f || (VOLUME::_DOES_VOLUME_EXIST(iLocal_471) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_471, true, 0)))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[4], "pl_base") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[4], "pl_base"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[4], "pl_base", true);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[4], "pl_dialogue"))
			{
				if (((__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 30f && bLocal_380) && !__LIB_6__::func_903("C4_STARTCHASE")) && !__LIB_8__::func_684("C4_STARTCHASE"))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[4], "pl_dialogue") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[4], "pl_dialogue"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[4], "pl_dialogue", true);
					}
				}
			}
			return true;
		}
		return false;
	}
	return false;
}

bool func_339()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_471))
	{
		iLocal_471 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_475, vLocal_478, vLocal_481, "Cld 1.2 1st search area");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_472))
	{
		iLocal_472 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_484, vLocal_487, vLocal_490, "Cld 1.2 2nd search area");
	}
	else
	{
		return true;
	}
	return false;
}

bool func_340(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_309))
	{
		iLocal_309 = __LIB_12__::func_885(uParam0, iLocal_313, vLocal_332, fLocal_357, 0, 0, 1, 1, 1, 1, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_309, 124, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_309, 315, true);
		PED::_0x89F5E7ADECCCB49C(iLocal_309, "INJURED_RIGHT_LEG");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_309, joaat("REL_PLAYER_LIKE"));
		__LIB_0__::func_566(iLocal_471, 0);
		__LIB_3__::func_729(iLocal_471, 0, 0);
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_460))
		{
			uLocal_460 = __LIB_1__::func_391(iLocal_471, 0, 0, 8192);
		}
		if (PED::_0x91A5F9CBEBB9D936(uLocal_460))
		{
		}
		__LIB_12__::func_875(uParam0, iLocal_309, "RCLDN_INJURED_MAN", 0);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_309, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_309, iLocal_309, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_309, true);
		__LIB_1__::func_473(iLocal_309, joaat("WORLD_HUMAN_SIT_BACK_EXHAUSTED"), 0, 0, 0, -1082130432 /* Float: -1f */);
		PED::_SET_PED_BODY_COMPONENT(iLocal_309, -1381778755);
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_309);
		Local_568.f_3 = Global_35;
		Local_568.f_7 = 10000;
		Local_568.f_4 = 21030;
		Local_568 = { 0f, 0f, 0f };
		Local_568.f_8 = 4;
		Local_568.f_17 = 4;
		Local_568.f_18 = 4;
		Local_568.f_19 = 4;
		Local_568.f_20 = 4;
		Local_568.f_21 = 4;
		Local_568.f_22 = 4;
		__LIB_4__::func_228(&uLocal_504);
		__LIB_1__::func_392(&uLocal_504, 0);
		__LIB_10__::func_590(&uLocal_504, 1);
		__LIB_1__::func_393(&uLocal_504, 1);
	}
	else if (func_622(7, 0, "pl_IG4_ManInjured_Idle01"))
	{
		if (func_775())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_313);
			return true;
		}
	}
	return false;
}

bool func_341()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_365))
	{
		iLocal_365 = OBJECT::CREATE_OBJECT(iLocal_314, vLocal_405, false, false, true, false, true);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_365, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_365, iLocal_365, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_365, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_366))
	{
		iLocal_366 = OBJECT::CREATE_OBJECT(iLocal_314, vLocal_408, false, false, true, false, true);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_366, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_366, iLocal_366, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_366, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_367))
	{
		iLocal_367 = OBJECT::CREATE_OBJECT(iLocal_314, vLocal_411, false, false, true, false, true);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_367, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_367, iLocal_367, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_367, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_368))
	{
		iLocal_368 = OBJECT::CREATE_OBJECT(iLocal_314, vLocal_414, false, false, true, false, true);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_368, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_368, iLocal_368, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_368, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_369))
	{
		iLocal_369 = OBJECT::CREATE_OBJECT(iLocal_315, vLocal_396, false, false, true, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_369, 99.21f);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_369, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_369, iLocal_369, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_369, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_370))
	{
		iLocal_370 = OBJECT::CREATE_OBJECT(iLocal_315, vLocal_399, false, false, true, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_370, 63.03f);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_370, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_370, iLocal_370, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_370, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_371))
	{
		iLocal_371 = OBJECT::CREATE_OBJECT(iLocal_315, vLocal_402, false, false, true, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_371, 142.03f);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_371, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_371, iLocal_371, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_371, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_372))
	{
		iLocal_372 = OBJECT::CREATE_OBJECT(iLocal_316, vLocal_393, false, false, true, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_372, 25.5f, 90f, 0f, 2, true);
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_372, 0);
		PLAYER::_0x6ECFC621A168424C(iLocal_372, iLocal_372, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_372, 1);
	}
	if (((((((ENTITY::DOES_ENTITY_EXIST(iLocal_365) && ENTITY::DOES_ENTITY_EXIST(iLocal_366)) && ENTITY::DOES_ENTITY_EXIST(iLocal_367)) && ENTITY::DOES_ENTITY_EXIST(iLocal_368)) && ENTITY::DOES_ENTITY_EXIST(iLocal_369)) && ENTITY::DOES_ENTITY_EXIST(iLocal_370)) && ENTITY::DOES_ENTITY_EXIST(iLocal_371)) && ENTITY::DOES_ENTITY_EXIST(iLocal_372))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_365);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_366);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_367);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_368);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_369);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_370);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_371);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_372);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_314);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_316);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_315);
		return true;
	}
	return false;
}

int func_342()
{
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_460))
	{
		uLocal_460 = __LIB_1__::func_391(iLocal_471, 0, 0, 8192);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_471, 0, 0, 0);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_471, 0, 1);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_471))
		{
			__LIB_0__::func_566(iLocal_471, 0);
		}
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_461))
	{
		uLocal_461 = __LIB_1__::func_391(iLocal_472, 0, 0, 8192);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_472, 0, 0, 0);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_471, 0, 1);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_472))
		{
			__LIB_0__::func_566(iLocal_472, 0);
		}
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_462))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_469))
		{
			__LIB_3__::func_730(iLocal_469, 0, 0, 1, 1, 0);
			__LIB_4__::func_220(iLocal_469, 2);
		}
		uLocal_462 = __LIB_1__::func_391(iLocal_469, 0, 0, 10208);
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_343(var uParam0)
{
	vector3 vVar0[24];
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && !ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		if (__LIB_0__::func_94(iLocal_301, Global_36, 1) <= 15f || __LIB_0__::func_94(iLocal_300, Global_36, 1) <= 15f)
		{
			if ((__LIB_0__::func_94(iLocal_303, Global_36, 1) >= 25f && bLocal_380) && !__LIB_5__::func_463())
			{
				if (!__LIB_0__::func_75(&uLocal_441))
				{
					__LIB_1__::func_148(&uLocal_441);
				}
				else if ((__LIB_0__::func_265(&uLocal_441) > 10f && iLocal_456 < 3) && !__LIB_0__::func_270())
				{
					if (AUDIO::_0xA2CAC9DEF0195E6F(1) || AUDIO::_0xFE5C6177064BD390(1))
					{
						__LIB_0__::func_268(&uLocal_441, 5f);
					}
					else
					{
						StringCopy(&cVar0, "C4_DRKCHASE", 24);
						if (__LIB_12__::func_876(uParam0, &cVar0, 0))
						{
							iLocal_456++;
							__LIB_1__::func_148(&uLocal_441);
						}
					}
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[4]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[4], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_289[4], "pl_dialogue"))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[4], "s_base", 1) && iLocal_457 < 2)
					{
						if (!__LIB_0__::func_75(&uLocal_444))
						{
							__LIB_1__::func_148(&uLocal_444);
						}
						else if (__LIB_0__::func_264(&uLocal_444) > 10f)
						{
							if (AUDIO::_0xA2CAC9DEF0195E6F(1) || AUDIO::_0xFE5C6177064BD390(1))
							{
								__LIB_0__::func_268(&uLocal_444, 7f);
							}
							else if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_289[4], "Loop"))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[4], "Loop", true, false);
								iLocal_457++;
								__LIB_0__::func_37(&uLocal_444);
							}
						}
					}
					else if (!ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[4], "s_base", 1))
					{
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_289[4], "Loop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[4], "Loop", false, false);
						}
					}
				}
			}
		}
	}
}

void func_344()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_308))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_308))
		{
			if (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_308, Global_35, 1, 1))
			{
				if (!bLocal_459)
				{
					__LIB_10__::func_525(2, 0, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					bLocal_459 = true;
				}
			}
		}
	}
}

bool func_345(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_309, 0))
	{
		func_668(&iLocal_309, &(Local_100[0 /*61*/]), 7.5f, &Local_162, 0f, 1, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (!bLocal_458)
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_ YouAlright");
			if (MISC::IS_BULLET_IN_AREA(vLocal_335, 1f, true))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[7], "pl_IG4_ManInjured_FlinchRT01", true);
					}
				}
			}
			else if (MISC::IS_BULLET_IN_AREA(vLocal_338, 1f, true))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[7], "pl_IG4_ManInjured_FlinchLT01", true);
					}
				}
			}
			if (__LIB_9__::func_754(&(Local_100[0 /*61*/])))
			{
				__LIB_3__::func_515(&(Local_162[0 /*17*/]), 0, 0);
				bLocal_458 = true;
			}
			else if (!__LIB_0__::func_75(&uLocal_450))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_309, 1, 1) < 10f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[7], "s_IG4_ManInjured_Idle01", 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[7], "b_breakout", true, false);
						}
						else
						{
							__LIB_1__::func_148(&uLocal_450);
						}
					}
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[7], "s_IG4_ManInjured_LittleBastards", 1))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_289[7], "b_breakout"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[7], "b_breakout", false, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[7], "s_IG4_ManInjured_Idle02", 1))
				{
					if (__LIB_0__::func_264(&uLocal_450) > 10f)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[7], "b_breakout", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[7], "s_IG4_ManInjured_NotEvenASorry", 1))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_289[7], "b_breakout"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[7], "b_breakout", false, false);
					}
				}
			}
		}
		else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_289[7], "pl_IG4_ManInjured_ YouAlright"))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[7], "pl_IG4_ManInjured_ YouAlright") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[7], "pl_IG4_ManInjured_ YouAlright"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[7], "pl_IG4_ManInjured_ YouAlright", true);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				Local_593.f_3 = iLocal_309;
				Local_593.f_4 = 21030;
				Local_593.f_7 = 15000;
				Local_593.f_17 = 4;
				Local_593.f_18 = 4;
				Local_593.f_19 = 4;
				Local_593.f_20 = 4;
				Local_593.f_21 = 4;
				Local_593.f_22 = 4;
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_593);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_309, &Local_568);
				__LIB_10__::func_385(iLocal_309);
				return true;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_309))
	{
		func_779();
		__LIB_2__::func_788(&iLocal_309, 1, 0, 1);
	}
	return false;
}

bool func_348()
{
	if (__LIB_0__::func_272(iLocal_303, 0) && bLocal_564)
	{
		if (PED::_0x7F9B9791D4CB71F6(Global_35, iLocal_303, 0, 0) == 1 || __LIB_0__::func_665(Global_35, iLocal_372, 1, 1) < 3f)
		{
			if (((__LIB_0__::func_665(Global_35, iLocal_303, 1, 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_303)) || __LIB_0__::func_665(Global_35, iLocal_303, 1, 1) < 5f) || __LIB_0__::func_665(Global_35, iLocal_372, 1, 1) < 6f)
			{
				__LIB_9__::func_438(4);
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
				return true;
			}
		}
	}
	return false;
}

bool func_349(var uParam0)
{
	switch (iLocal_180)
	{
		case 0:
			if (AUDIO::_0xD89504D9D7D5057D("RCLDN_S2_IG4_AR") && AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG4_AR"))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RCLDN_S2_IG4_AR") >= 5)
				{
					iLocal_180 = 1;
					return true;
				}
			}
			else
			{
				iLocal_180 = 1;
				return true;
			}
			break;
		case 1:
			func_668(&iLocal_309, &(Local_100[0 /*61*/]), 7.5f, &Local_162, 0f, 1, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_289[7], "pl_IG4_ManInjured_ YouAlright"))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[7], "s_IG4_ManInjured_Exit", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_289[7]) >= 0.98f)
					{
						func_445();
						iLocal_180 = 2;
					}
					return true;
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_289[7], false))
			{
				func_445();
				iLocal_180 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_351(var uParam0)
{
	int iVar0;
	char* sVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	switch (iLocal_282)
	{
		case 0:
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				__LIB_11__::func_853(iLocal_308, &Local_495, 0f, 0f, 0f, 0, 30f, 30f, 3000, 500, 1000, 5f, 0, 1);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[5], "b_breakout", true, false);
				AUDIO::STOP_PED_SPEAKING(Global_35, true);
				iLocal_282 = 1;
			}
			break;
		case 1:
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				__LIB_11__::func_853(iLocal_308, &Local_495, 0f, 0f, 0f, 0, 30f, 30f, 3000, 500, 1000, 5f, 0, 1);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[5], "s_IG5_KIDHOLDUP_GetOffMe", 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_289[5], "b_breakout"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[5], "b_breakout", false, false);
				}
			}
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_282 = 2;
			}
			break;
		case 2:
			if (!AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_P1"))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[5], "s_IG5_KIDHOLDUP_Help", 1))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_289[5], "b_breakout"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[5], "b_breakout", false, false);
					}
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_308, false, false), 1, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 20f, 10f, 1, 1, 1, 0);
			}
			if (__LIB_0__::func_272(iLocal_308, 0) && __LIB_0__::func_272(iLocal_303, 0))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_308, 1, 1) <= 7.55f)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					func_784(&(Local_185[0 /*61*/]), &Local_247, &iLocal_308, 0, "CLD_GENT", -1082130432 /* Float: -1f */);
					__LIB_6__::func_749(&(Local_185[0 /*61*/]));
					__LIB_3__::func_113(&(Local_185[0 /*61*/]));
				}
				else
				{
					__LIB_3__::func_110(&(Local_185[0 /*61*/]));
				}
				iLocal_283 = func_668(&iLocal_308, &(Local_185[0 /*61*/]), 7.5f, &Local_247, 0f, 1, 0, "CLD_GENT", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iLocal_283 > -1)
				{
					iLocal_282 = 3;
				}
				else
				{
					if (!bLocal_424)
					{
						if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_289[5], "s_IG5_KIDHOLDUP_Idle01", 1)) && (!ANIMSCENE::_0x1F0E401031E20146(iLocal_289[5], "pl_warn_off_left") || !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[5], "pl_warn_off_right")))
						{
							if (__LIB_0__::func_665(iLocal_308, Global_35, 1, 1) < 5f)
							{
								iVar0 = __LIB_3__::func_547(iLocal_308, Global_35, 1f);
								if (iVar0 == 3)
								{
									sVar1 = "pl_warn_off_left";
								}
								else
								{
									sVar1 = "pl_warn_off_right";
								}
								if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[5], sVar1) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[5], sVar1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[5], sVar1, true);
									bLocal_424 = true;
								}
							}
						}
					}
					if (__LIB_2__::func_401(iLocal_308, 1, 0, 0, 0, 0))
					{
						iLocal_283 = 1;
						iLocal_282 = 3;
					}
				}
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_308, true, false), 3f, true))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[5], "pl_Warning_Shot") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[5], "pl_Warning_Shot"))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 3, 0, -1f, -1, 0);
							if (__LIB_5__::func_463())
							{
								__LIB_5__::func_20(0, 0);
							}
							if (MAP::DOES_BLIP_EXIST(iLocal_374))
							{
								MAP::REMOVE_BLIP(&iLocal_374);
								iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
								MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
							}
							__LIB_9__::func_438(5);
							iLocal_282 = 6;
						}
					}
				}
				if ((PED::IS_PED_IN_MELEE_COMBAT(Global_35) && PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_308, 32768, 0)) || __LIB_3__::func_528(iLocal_308, Global_35))
				{
					iVar0 = __LIB_3__::func_547(iLocal_308, Global_35, 1f);
					if (iVar0 == 3)
					{
						sVar1 = "pl_punched_left";
					}
					else
					{
						sVar1 = "pl_punched_right";
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[5], sVar1) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[5], sVar1))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 3, 0, -1f, -1, 0);
							if (__LIB_5__::func_463())
							{
								__LIB_5__::func_20(0, 0);
							}
							if (MAP::DOES_BLIP_EXIST(iLocal_374))
							{
								MAP::REMOVE_BLIP(&iLocal_374);
								iLocal_374 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_303);
								MAP::_BLIP_SET_MODIFIER(iLocal_374, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_374, "CLD_KID");
							}
							__LIB_9__::func_438(5);
							iLocal_282 = 6;
						}
					}
				}
			}
			break;
		case 3:
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			if (iLocal_283 == 0)
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				iVar0 = __LIB_3__::func_547(iLocal_308, Global_35, 1f);
				if (iVar0 == 3)
				{
					sVar1 = "pl_positive_left";
					bLocal_353 = false;
				}
				else
				{
					sVar1 = "pl_positive_right";
					bLocal_353 = true;
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[5], sVar1))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[5], sVar1) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[5], sVar1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[5], sVar1, true);
					}
				}
				else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_289[5], sVar1))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_308, 7500, 0, 51, 0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_303, &Local_643);
					func_791();
					__LIB_9__::func_438(5);
					iLocal_282 = 4;
				}
			}
			else if (iLocal_283 == 1 || __LIB_2__::func_401(iLocal_308, 1, 0, 0, 0, 0))
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				iVar0 = __LIB_3__::func_547(iLocal_308, Global_35, 1f);
				if (iVar0 == 3)
				{
					sVar1 = "pl_negative_left";
					bLocal_353 = false;
				}
				else
				{
					sVar1 = "pl_negative_right";
					bLocal_353 = true;
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_289[5], sVar1))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[5], sVar1) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[5], sVar1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[5], sVar1, true);
					}
				}
				else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_289[5], sVar1))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_308, 7500, 0, 51, 0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_303, &Local_643);
					func_791();
					__LIB_9__::func_438(5);
					iLocal_282 = 5;
				}
			}
			break;
		case 4:
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			if ((__LIB_0__::func_272(iLocal_308, 0) && !PED::IS_PED_FLEEING(iLocal_308)) && func_792())
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_308, 26, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 1, 256, -1f, -1, 0);
			}
			if ((__LIB_0__::func_272(iLocal_303, 0) && func_793()) && !__LIB_0__::func_163(iLocal_303, 242628503))
			{
				if (bLocal_353)
				{
					vVar2 = { 2868.11f, -1245.74f, 45.36f };
				}
				else
				{
					vVar2 = { 2872.01f, -1237.98f, 45.21f };
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1.5f, 20000, 0.25f, 4194305, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
				AUDIO::STOP_PED_SPEAKING(iLocal_303, false);
				__LIB_3__::func_923(iLocal_303, 1088421888 /* Float: 7f */, 1, 1);
			}
			if (!AUDIO::_0xD89504D9D7D5057D("RCLDN_S2_IG5_GR") && !AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_GR"))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_374))
				{
					MAP::REMOVE_BLIP(&iLocal_374);
				}
				if (!__LIB_0__::func_75(&uLocal_438))
				{
					__LIB_1__::func_148(&uLocal_438);
				}
				else if (__LIB_0__::func_265(&uLocal_438) > 1.5f)
				{
					__LIB_9__::func_438(6);
					iLocal_282 = 7;
				}
			}
			break;
		case 5:
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			if ((__LIB_0__::func_272(iLocal_308, 0) && !PED::IS_PED_FLEEING(iLocal_308)) && func_792())
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_308, 26, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 1, 256, -1f, -1, 0);
			}
			if ((__LIB_0__::func_272(iLocal_303, 0) && func_793()) && !__LIB_0__::func_163(iLocal_303, 242628503))
			{
				if (bLocal_353)
				{
					vVar5 = { 2868.11f, -1245.74f, 45.36f };
				}
				else
				{
					vVar5 = { 2872.01f, -1237.98f, 45.21f };
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 1.5f, 20000, 0.25f, 4194305, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
				AUDIO::STOP_PED_SPEAKING(iLocal_303, false);
				__LIB_3__::func_923(iLocal_303, 1088421888 /* Float: 7f */, 1, 1);
			}
			if (!AUDIO::_0xD89504D9D7D5057D("RCLDN_S2_IG5_AG") && !AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_AG"))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_374))
				{
					MAP::REMOVE_BLIP(&iLocal_374);
				}
				if (!__LIB_0__::func_75(&uLocal_438))
				{
					__LIB_1__::func_148(&uLocal_438);
				}
				else if (__LIB_0__::func_265(&uLocal_438) > 1.5f)
				{
					__LIB_9__::func_438(6);
					iLocal_282 = 7;
				}
			}
			break;
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			if (!(PED::IS_PED_IN_MELEE_COMBAT(Global_35) && PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_308, 32768, 0)))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_303, 1, 1) < 5f)
				{
					__LIB_9__::func_438(6);
					iLocal_282 = 7;
				}
			}
			break;
		case 7:
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			if ((__LIB_0__::func_272(iLocal_308, 0) && !PED::IS_PED_FLEEING(iLocal_308)) && func_792())
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_308, 26, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 1, 256, -1f, -1, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_308, joaat("MOTIONSTATE_WALK"), false, 0, false);
			}
			if ((__LIB_0__::func_272(iLocal_303, 0) && func_793()) && !__LIB_0__::func_163(iLocal_303, 242628503))
			{
				if (bLocal_353)
				{
					vVar8 = { 2868.11f, -1245.74f, 45.36f };
				}
				else
				{
					vVar8 = { 2872.01f, -1237.98f, 45.21f };
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 1.5f, 20000, 0.25f, 4194305, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
				AUDIO::STOP_PED_SPEAKING(iLocal_303, false);
				__LIB_3__::func_923(iLocal_303, 1088421888 /* Float: 7f */, 1, 1);
			}
			if (((AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_AG") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RCLDN_S2_IG5_AG") >= 5) || !AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_AG")) && ((AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_GR") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RCLDN_S2_IG5_GR") >= 5) || !AUDIO::_0x1ECC76792F661CF5("RCLDN_S2_IG5_GR")))
			{
				iLocal_282 = 8;
			}
			break;
		case 8:
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			if ((__LIB_0__::func_272(iLocal_308, 0) && !PED::IS_PED_FLEEING(iLocal_308)) && func_792())
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_308, 26, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 1, 256, -1f, -1, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_308, joaat("MOTIONSTATE_WALK"), false, 0, false);
			}
			if (__LIB_0__::func_272(iLocal_303, 0))
			{
				if ((__LIB_0__::func_272(iLocal_303, 0) && func_793()) && !__LIB_0__::func_163(iLocal_303, 242628503))
				{
					if (bLocal_353)
					{
						vVar11 = { 2868.11f, -1245.74f, 45.36f };
					}
					else
					{
						vVar11 = { 2872.01f, -1237.98f, 45.21f };
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 1.5f, 20000, 0.25f, 4194305, 40000f);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
					AUDIO::STOP_PED_SPEAKING(iLocal_303, false);
					__LIB_3__::func_923(iLocal_303, 1088421888 /* Float: 7f */, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_362))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_362))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_362, 0, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, false, false, false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_303, 0, -2f, 0f, 0f, false, true, true, false);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_375))
					{
						iLocal_375 = __LIB_8__::func_778(408396114, iLocal_362, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_375, "CLD4_CRUC");
						TASK::TASK_LOOK_AT_ENTITY(iLocal_303, Global_35, 3000, 48, 41, 0);
					}
					func_355();
					if (bLocal_423)
					{
						AUDIO::STOP_PED_SPEAKING(Global_35, false);
						iLocal_282 = 9;
					}
				}
				else
				{
					iLocal_362 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_384 + Vector(0.5f, 0f, 0f), true, true, false, false, true);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_362, 0, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, false, false, false, true);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_362, 0, -1f, 0f, 0f, false, true, true, false);
					PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_362, 0);
					PLAYER::_0x6ECFC621A168424C(iLocal_362, iLocal_362, 0, 0);
					__LIB_12__::func_957(uParam0, iLocal_362, "p_crucifix02x", 0, 0, 0);
				}
			}
			break;
		case 9:
			if ((__LIB_0__::func_272(iLocal_308, 0) && !PED::IS_PED_FLEEING(iLocal_308)) && func_792())
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_308, 26, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_308, Global_35, 1, 256, -1f, -1, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_308, joaat("MOTIONSTATE_WALK"), false, 0, false);
			}
			if ((__LIB_0__::func_272(iLocal_303, 0) && func_793()) && !__LIB_0__::func_163(iLocal_303, 242628503))
			{
				if (bLocal_353)
				{
					vVar14 = { 2868.11f, -1245.74f, 45.36f };
				}
				else
				{
					vVar14 = { 2872.01f, -1237.98f, 45.21f };
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_494);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar14, 1.5f, 20000, 0.25f, 4194305, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_308, 2, 256, 300f, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_494);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_303, iLocal_494);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_494);
				AUDIO::STOP_PED_SPEAKING(iLocal_303, false);
				__LIB_3__::func_923(iLocal_303, 1088421888 /* Float: 7f */, 1, 1);
			}
			else if (__LIB_0__::func_272(iLocal_303, 0) && (__LIB_0__::func_163(iLocal_303, 242628503) || PED::IS_PED_FLEEING(iLocal_303)))
			{
				__LIB_0__::func_172(iLocal_473);
				return true;
			}
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
			break;
	}
	return false;
}

void func_355()
{
	if (!ENTITY::_IS_ENTITY_FROZEN(iLocal_362))
	{
		if (!__LIB_0__::func_75(&uLocal_417))
		{
			__LIB_1__::func_283(&uLocal_417, 0);
		}
		else if (__LIB_0__::func_264(&uLocal_417) > 2f)
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_362, true);
			__LIB_0__::func_37(&uLocal_417);
		}
	}
	if (bLocal_423 == 0)
	{
		if (AUDIO::_0xE368E8422C860BA7("Crucifix_Hit_Ground", "RCLDN3_Sounds", -2))
		{
			AUDIO::_PLAY_SOUND_FROM_POSITION("Crucifix_Hit_Ground", ENTITY::GET_ENTITY_COORDS(iLocal_362, true, false), "RCLDN3_Sounds", false, 0, true, 0);
			bLocal_423 = true;
		}
	}
}

bool func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_365(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
						func_365(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_365(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_365(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_365(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_365(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_365(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_365(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_365(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_365(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_365(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

bool func_366()
{
	if (func_722() && func_622(1, 0, "pbl_Base"))
	{
		if (func_723())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				iLocal_363 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_390, true, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && ENTITY::DOES_ENTITY_EXIST(iLocal_363))
			{
				if (func_373())
				{
					return true;
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
			{
				iLocal_300 = func_725(joaat("CS_SISTERCALDERON"), vLocal_317, fLocal_354, 1, 1, 0, 1);
			}
		}
	}
	return false;
}

bool func_368()
{
	int iVar0;
	iVar0 = PED::_0x5407B7288D0478B7(Global_35, 1);
	if ((iVar0 <= 0 && __LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 10f) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_371()
{
	if (!bLocal_381)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 10f)
		{
			__LIB_0__::func_325(&iLocal_376);
			iLocal_376 = __LIB_8__::func_778(408396114, iLocal_300, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_376, "CLD4_CLDLBL");
			bLocal_381 = true;
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(iLocal_376))
	{
		iLocal_376 = __LIB_8__::func_778(408396114, iLocal_300, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_376, "CLD4_CLDLBL");
		bLocal_381 = true;
	}
}

bool func_373()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[1]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[1], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[1], false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_289[1], false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_289[1]);
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[1], "SisterCalderon", false)))
		{
			TASK::CLEAR_PED_TASKS(iLocal_300, true, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_300, vLocal_317, true, false, true, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[1], "SisterCalderon", iLocal_300, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[1], "U_M_M_NBXPRIEST_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[1], "U_M_M_NBXPRIEST_01", iLocal_307, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[1], "SisterCalderon", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[1], "U_M_M_NBXPRIEST_01", false)))
		{
			__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(iLocal_300, false, false), 10f, 1, 0, 0, 0, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_289[1]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[1], false))
	{
		return true;
	}
	return false;
}

int func_395(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_395(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

void func_410(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = func_918(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_919(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
						func_365(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_365(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_365(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_365(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_365(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_365(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_365(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_365(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_365(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_365(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_365(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_365(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_365(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_928();
						func_929(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						Jump @4029; //curOff = 2449
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						Jump @4029; //curOff = 2469
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						Jump @4029; //curOff = 2489
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						Jump @4029; //curOff = 2512
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						Jump @4029; //curOff = 2529
						func_365(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						Jump @4029; //curOff = 2586
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						Jump @4029; //curOff = 2620
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						Jump @4029; //curOff = 2674
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_410(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						Jump @4029; //curOff = 2763
						__LIB_0__::func_875();
						Jump @4029; //curOff = 2770
						__LIB_0__::func_876();
						Jump @4029; //curOff = 2777
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						Jump @4029; //curOff = 2817
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						Jump @4029; //curOff = 2871
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
						Jump @4029; //curOff = 2952
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						Jump @4029; //curOff = 2971
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						Jump @4029; //curOff = 2991
						__LIB_0__::func_879();
						Jump @4029; //curOff = 2998
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
						Jump @4029; //curOff = 3041
						__LIB_0__::func_881();
						Jump @4029; //curOff = 3048
						__LIB_0__::func_882();
						Jump @4029; //curOff = 3055
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_410(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_410(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						Jump @4029; //curOff = 3208
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						Jump @4029; //curOff = 3228
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						Jump @4029; //curOff = 3248
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						Jump @4029; //curOff = 3268
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						Jump @4029; //curOff = 3305
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						Jump @4029; //curOff = 3325
						Jump @4029; //curOff = 3328
						__LIB_0__::func_883();
						Jump @4029; //curOff = 3335
						__LIB_0__::func_884();
						Jump @4029; //curOff = 3342
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						Jump @4029; //curOff = 3362
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						Jump @4029; //curOff = 3403
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						Jump @4029; //curOff = 3423
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						Jump @4029; //curOff = 3460
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
						func_365(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_365(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @4029; //curOff = 3663
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						Jump @4029; //curOff = 3705
						__LIB_0__::func_887();
						Jump @4029; //curOff = 3712
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
						Jump @4029; //curOff = 3964
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						Jump @4029; //curOff = 3992
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						Jump @4029; //curOff = 4016
						__LIB_1__::func_146(-5500);
						Jump @5143; //curOff = 4029
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
						Jump @5143; //curOff = 5081
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
						func_963();
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
											func_365(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
void func_411(int iParam0, bool bParam1)
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

Vector3 func_414(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_970(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_970(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_420()
{
	if (__LIB_1__::func_707(joaat("PROVISION_CALDERON_CROSS"), 1, 0))
	{
		func_395(joaat("PROVISION_CALDERON_CROSS"), 1, 1, -142743235, 0);
	}
}

bool func_439()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[0], false))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_289[0], func_1001(11)))
		{
			if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(11)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(11)))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(11), true);
				}
			}
		}
		else
		{
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !PED::IS_PED_FLEEING(iLocal_301)) && (func_1002(&iLocal_301, "CS_BrotherDorkins", iLocal_289[0]) || __LIB_3__::func_642(iLocal_289[0], 100)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_301, Global_35, 3, 0, 300f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_301, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_301);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !PED::IS_PED_FLEEING(iLocal_300)) && (func_1002(&iLocal_300, "CS_SisterCalderon", iLocal_289[0]) || __LIB_3__::func_642(iLocal_289[0], 100)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_300, Global_35, 3, 0, 300f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_300, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_300);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_302) && !PED::IS_PED_FLEEING(iLocal_302)) && (func_1002(&iLocal_302, "A_M_Y_NBXStreetKids_01", iLocal_289[0]) || __LIB_3__::func_642(iLocal_289[0], 100)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_302, Global_35, 3, 0, 300f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_302, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_302);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !PED::IS_PED_FLEEING(iLocal_303)) && (func_1002(&iLocal_303, "A_M_Y_NBXStreetKids_01^2", iLocal_289[0]) || __LIB_3__::func_642(iLocal_289[0], 100)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_303, Global_35, 3, 0, 300f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_303, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_303);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_304) && !PED::IS_PED_FLEEING(iLocal_304)) && (func_1002(&iLocal_304, "A_M_Y_NBXStreetKids_01^1", iLocal_289[0]) || __LIB_3__::func_642(iLocal_289[0], 100)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_304, Global_35, 3, 0, 300f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_304, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_304);
			}
			if (((((ENTITY::IS_ENTITY_DEAD(iLocal_301) || PED::IS_PED_FLEEING(iLocal_301)) && (ENTITY::IS_ENTITY_DEAD(iLocal_300) || PED::IS_PED_FLEEING(iLocal_300))) && (ENTITY::IS_ENTITY_DEAD(iLocal_302) || PED::IS_PED_FLEEING(iLocal_302))) && (ENTITY::IS_ENTITY_DEAD(iLocal_303) || PED::IS_PED_FLEEING(iLocal_303))) && (ENTITY::IS_ENTITY_DEAD(iLocal_304) || PED::IS_PED_FLEEING(iLocal_304)))
			{
				return true;
			}
		}
	}
	else if (__LIB_3__::func_642(iLocal_289[0], 100))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !PED::IS_PED_FLEEING(iLocal_301))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_301, Global_35, 3, 0, 300f, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_301, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_301);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !PED::IS_PED_FLEEING(iLocal_300))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_300, Global_35, 3, 0, 300f, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_300, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_300);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_302) && !PED::IS_PED_FLEEING(iLocal_302))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_302, Global_35, 3, 0, 300f, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_302, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_302);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !PED::IS_PED_FLEEING(iLocal_303))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_303, Global_35, 3, 0, 300f, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_303, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_303);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_304) && !PED::IS_PED_FLEEING(iLocal_304))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_304, Global_35, 3, 0, 300f, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_304, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_304);
		}
		if (((((ENTITY::IS_ENTITY_DEAD(iLocal_301) || PED::IS_PED_FLEEING(iLocal_301)) && (ENTITY::IS_ENTITY_DEAD(iLocal_300) || PED::IS_PED_FLEEING(iLocal_300))) && (ENTITY::IS_ENTITY_DEAD(iLocal_302) || PED::IS_PED_FLEEING(iLocal_302))) && (ENTITY::IS_ENTITY_DEAD(iLocal_303) || PED::IS_PED_FLEEING(iLocal_303))) && (ENTITY::IS_ENTITY_DEAD(iLocal_304) || PED::IS_PED_FLEEING(iLocal_304)))
		{
			return true;
		}
	}
	return false;
}

void func_440(var uParam0)
{
	if (((__LIB_13__::func_230(iLocal_300, 0, &(uParam0->f_178), &uLocal_561, 1, 0) || __LIB_13__::func_230(iLocal_307, 0, &(uParam0->f_178), &uLocal_561, 1, 0)) || ENTITY::IS_ENTITY_DEAD(iLocal_307)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_307, Global_35, 1, 1))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[6]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[6], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_289[6], "Loop_Idle", true, false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
		{
			TASK::CLEAR_PED_TASKS(iLocal_300, true, false);
			TASK::TASK_SMART_FLEE_PED(iLocal_300, Global_35, 300f, -1, 0, 3f, 0);
			PED::SET_PED_KEEP_TASK(iLocal_300, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_300);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_307))
		{
			TASK::CLEAR_PED_TASKS(iLocal_307, true, false);
			TASK::TASK_SMART_FLEE_PED(iLocal_307, Global_35, 300f, -1, 0, 3f, 0);
			PED::SET_PED_KEEP_TASK(iLocal_307, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_307);
		}
		bLocal_562 = true;
	}
}

void func_445()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_309))
	{
		func_779();
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_309))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_309);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_309, Global_35, 6, 0, 300f, -1, 0);
		__LIB_2__::func_788(&iLocal_309, 1, 1, 1);
	}
}

void func_446()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_365))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_365))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_365);
		}
		__LIB_4__::func_866(&iLocal_365, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_366))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_366))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_366);
		}
		__LIB_4__::func_866(&iLocal_366, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_367))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_367))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_367);
		}
		__LIB_4__::func_866(&iLocal_367, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_368))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_368))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_368);
		}
		__LIB_4__::func_866(&iLocal_368, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_369))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_369))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_369);
		}
		__LIB_4__::func_866(&iLocal_369, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_370))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_370))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_370);
		}
		__LIB_4__::func_866(&iLocal_370, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_371))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_371))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_371);
		}
		__LIB_4__::func_866(&iLocal_371, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_372))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_372))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_372);
		}
		__LIB_4__::func_866(&iLocal_372, 1, 1);
	}
}

int func_507(int iParam0, int iParam1)
{
	var uVar0;
	return func_1067(&uVar0, iParam0, iParam1);
}

bool func_568(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	else if (__LIB_13__::func_230(*iParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_226(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_571()
{
	__LIB_1__::func_480(&iLocal_301);
	__LIB_1__::func_480(&iLocal_300);
	__LIB_6__::func_815(&(Local_18[0 /*61*/]), iLocal_300);
}

bool func_594(var uParam0)
{
	if (iLocal_16 == 2 || iLocal_16 == 3)
	{
		return true;
	}
	return false;
}

bool func_622(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_289[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1155(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_289[iParam0]);
		}
	}
	return false;
}

char* func_648(var uParam0)
{
	switch (iLocal_16)
	{
		case 0:
			return "RCLDN_RSC4";
		case 1:
			return "RCLDN_RSC_5";
		case 2:
		case 3:
			return "RCLDN_RSC6";
	}
	return "";
}

void func_649(var uParam0)
{
	func_571();
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_289[0]);
	}
}

void func_651(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_289[0]);
	}
	if (__LIB_13__::func_193(uParam0, iLocal_303, "A_M_Y_NBXStreetKids_01^2", 0, 1, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_303, 2822.15f, -1167.587f, 46.3983f, 189.8748f, true, false, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_303, vLocal_344, 3f, 20000, 0.25f, 0, 40000f);
		PED::FORCE_PED_MOTION_STATE(iLocal_303, joaat("MOTIONSTATE_SPRINT"), false, 1, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_362, 2822.15f, -1167.587f, 46.3983f, true, false, true, true);
	}
	if (__LIB_13__::func_193(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_RUN"), 2000, 0, 1, 1, 0, 0, 0);
	}
}

void func_656(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_225(uParam0, "S_M_M_AmbientSDPolice_01", 1)))
		{
			iLocal_306 = __LIB_13__::func_225(uParam0, "S_M_M_AmbientSDPolice_01", 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_306, joaat("REL_COP"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_306, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_306, 188, true);
				PED::SET_PED_ID_RANGE(iLocal_306, 100f);
				PED::_0xBD75500141E4725C(iLocal_306, joaat("LAW"));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		PED::DELETE_PED(&iLocal_303);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_308))
	{
		PED::DELETE_PED(&iLocal_308);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_305))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_225(uParam0, "EdithDown", 1)))
		{
			iLocal_305 = __LIB_13__::func_225(uParam0, "EdithDown", 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_305))
			{
				func_1183();
			}
		}
	}
	if (__LIB_13__::func_193(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
	if (func_366())
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		iLocal_363 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_390, true, true, false, false, true);
	}
	iLocal_565 = 0;
}

void func_657(var uParam0)
{
	if (__LIB_13__::func_193(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
}

bool func_663(int iParam0, vector3 vParam1, var uParam4, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, fParam7, bParam8, fParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_75(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_283(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_0__::func_37(uParam4);
	}
	if (__LIB_0__::func_75(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_0__::func_265(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

bool func_664()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[0], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[0], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "ARTHUR", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "ARTHUR", Global_35, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "ARTHUR", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "CS_SisterCalderon", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "CS_SisterCalderon", iLocal_300, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "CS_SisterCalderon", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_301) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "CS_BrotherDorkins", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "CS_BrotherDorkins", iLocal_301, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "CS_BrotherDorkins", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_302) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "A_M_Y_NBXStreetKids_01", iLocal_302, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_303) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01^2", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "A_M_Y_NBXStreetKids_01^2", iLocal_303, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01^2", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_304) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01^1", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "A_M_Y_NBXStreetKids_01^1", iLocal_304, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01^1", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_358) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book03x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "p_cs_book03x", iLocal_358, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book03x", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_359) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "P_CS_BIBLE01X", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "P_CS_BIBLE01X", iLocal_359, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "P_CS_BIBLE01X", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_360) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book04x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "p_cs_book04x", iLocal_360, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book04x", false)))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_361) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book04x^1", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[0], "p_cs_book04x^1", iLocal_361, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book04x^1", false)))
		{
		}
		if ((((((((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "CS_SisterCalderon", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "CS_BrotherDorkins", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01^2", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[0], "A_M_Y_NBXStreetKids_01^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book03x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "P_CS_BIBLE01X", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book04x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[0], "p_cs_book04x^1", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_289[0]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[0], false))
	{
		return true;
	}
	return false;
}

void func_665()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[0], false))
	{
		if (iLocal_98 != 11)
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(11));
			if (bLocal_298)
			{
				iLocal_98 = 11;
			}
			switch (iLocal_98)
			{
				case 0:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_0__::func_665(Global_35, iLocal_300, 1, 1) <= 20f)
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = 1;
								iLocal_99 = 2;
							}
						}
					}
					break;
				case 1:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_289[0]) >= 0.98f && !AUDIO::_0x1ECC76792F661CF5("RCLDN_RSC4_LI_A"))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 3;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 2:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_289[0]) >= 0.98f)
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 4;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 3:
					if (__LIB_0__::func_264(&uLocal_285) >= fLocal_288 && iLocal_98 != iLocal_99)
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
						{
							if (__LIB_3__::func_642(iLocal_289[0], 100))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
									iLocal_98 = iLocal_99;
									iLocal_99 = 3;
									__LIB_0__::func_37(&uLocal_285);
								}
							}
						}
					}
					else if (!__LIB_0__::func_75(&uLocal_285))
					{
						__LIB_1__::func_148(&uLocal_285);
					}
					break;
				case 4:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 5;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 5:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 6;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 6:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 7;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 7:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 8;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 8:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 9;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 9:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 10;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
				case 10:
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289[0], func_1001(iLocal_99)))
					{
						if (__LIB_3__::func_642(iLocal_289[0], 100))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289[0], func_1001(iLocal_99)))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289[0], func_1001(iLocal_99), true);
								iLocal_98 = iLocal_99;
								iLocal_99 = 3;
								fLocal_288 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 7f);
								__LIB_1__::func_148(&uLocal_285);
							}
						}
					}
					break;
			}
		}
	}
}

bool func_666()
{
	if (MAP::DOES_BLIP_EXIST(Global_1347702[23 /*49*/].f_37))
	{
		__LIB_6__::func_736(&(Local_18[0 /*61*/]), &Local_80, 0, Global_1347702[23 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_80[0 /*17*/]), __LIB_2__::func_460(7), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		return true;
	}
	return false;
}

int func_668(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_671(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
			__LIB_1__::func_148(&(iParam1->f_13));
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
					if (func_1194(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_668(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_6__::func_742(iParam1, uParam3);
					if (func_1201(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_217(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_10__::func_933(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1201(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_11__::func_617(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					__LIB_1__::func_491(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
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
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_6__::func_789(iParam1, iParam0)))
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
								__LIB_4__::func_101(uParam3, 0, 0);
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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
					func_1201(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_13__::func_219(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_671(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_5__::func_439(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_13__::func_229(iParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_784(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

void func_705(var uParam0)
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
		func_1255(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1257(uParam0);
		func_1258(uParam0);
		__LIB_12__::func_943(uParam0, 0f, 0f, 0f, 0, 0);
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

bool func_722()
{
	STREAMING::REQUEST_MODEL(iLocal_311, false);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_311))
	{
		return true;
	}
	return false;
}

bool func_723()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
	{
		return true;
	}
	else
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_311))
		{
			return false;
		}
		iLocal_307 = func_725(iLocal_311, vLocal_323, fLocal_355, 1, 1, 0, 1);
	}
	return false;
}

bool func_724()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[6]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[6], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[6], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[6], "SisterCalderon", false)))
		{
			TASK::CLEAR_PED_TASKS(iLocal_300, true, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_300, vLocal_317, true, false, true, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[6], "SisterCalderon", iLocal_300, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[6], "U_M_M_NBXPRIEST_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[6], "U_M_M_NBXPRIEST_01", iLocal_307, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_363) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[6], "p_crucifix02x", false)))
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iLocal_363))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, false);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[6], "p_crucifix02x", iLocal_363, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[6], "SisterCalderon", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[6], "U_M_M_NBXPRIEST_01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[6], "p_crucifix02x", false)))
		{
			__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(iLocal_300, false, false), 2f, 1, 0, 0, 0, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_289[6]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[6], false))
	{
		return true;
	}
	return false;
}

int func_725(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	if (iLocal_565 == 1 && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = __LIB_8__::func_931(iParam0, vParam1, fParam4, iParam5, fParam6, bParam7, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !CAM::IS_SCREEN_FADED_OUT())
	{
		iLocal_565 = 1;
	}
	return iVar0;
}

void func_763(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_763(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_763(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_764()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[5], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01", iLocal_303, 0);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_303))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_308) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[5], "A_M_M_NBXTOWNFOLK_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[5], "A_M_M_NBXTOWNFOLK_01", iLocal_308, 0);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_308))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[5], "player_zero", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[5], "player_zero", Global_35, 0);
		}
		else if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_362) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[5], "p_crucifix02x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[5], "p_crucifix02x", iLocal_362, 0);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_362))
		{
			iLocal_362 = OBJECT::CREATE_OBJECT(joaat("P_CRUCIFIX02X"), vLocal_384 + Vector(0.5f, 0f, 0f), true, true, false, false, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_362))
			{
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[5], "A_M_M_NBXTOWNFOLK_01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[5], "player_zero", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_289[5], "p_crucifix02x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_289[5]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
	{
		return true;
	}
	return false;
}

bool func_775()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[7]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289[7], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_309) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[7], "A_M_M_NbxSlums_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[7], "A_M_M_NbxSlums_01", iLocal_309, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[7], "ARTHUR", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289[7], "ARTHUR", Global_35, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[7], "A_M_M_NbxSlums_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_289[7], "ARTHUR", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_289[7]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[7], false))
	{
		return true;
	}
	return false;
}

void func_779()
{
	__LIB_1__::func_480(&iLocal_309);
	__LIB_2__::func_624(&Local_162, 0, 0, 1, 0);
}

void func_784(int* iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, float fParam5)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		return;
	}
	fVar0 = __LIB_5__::func_439(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!__LIB_0__::func_163(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *iParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		__LIB_6__::func_740(iParam0, uParam1, iParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *iParam2, "ForcedILO", 0f, 0f, 0f, *iParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

void func_791()
{
	__LIB_1__::func_480(&iLocal_308);
	__LIB_3__::func_110(&(Local_185[0 /*61*/]));
	__LIB_2__::func_624(&Local_247, 0, 0, 1, 0);
}

bool func_792()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_289[5], "A_M_M_NBXTOWNFOLK_01") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_289[5], "A_M_M_NBXTOWNFOLK_01"))
		{
			return true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_289[5], false)))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_308) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_308, -1))
	{
		return true;
	}
	return false;
}

bool func_793()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01"))
		{
			return true;
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_289[5], "A_M_Y_NBXSTREETKIDS_01"))
		{
			return true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289[5]) && (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289[5], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_289[5], false)))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_303, -1))
	{
		return true;
	}
	return false;
}

int func_918(int iParam0, var uParam1, int iParam2)
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
			Jump @2055; //curOff = 1304
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
			Jump @2055; //curOff = 1907
			iVar3 = __LIB_0__::func_76(iParam0);
			switch (iVar3)
			{
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
				case joaat("HAI_HOME_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_HR01_POST");
				case joaat("HAI_COACH_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_CR02_POST");
				case joaat("HAI_COACH_ROBBERY_02"):
					return joaat("CSTAG_FLOW_CA_CR03_POST");
				case joaat("HAI_FISHING_02"):
					return joaat("CSTAG_FLOW_CA_FS02_POST");
				case joaat("HAI_HUNTING_06"):
					return joaat("CSTAG_FLOW_CA_HT06_POST");
				case joaat("HAI_BANK_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_BR01_POST");
				case joaat("HAI_COACH_ROBBERY_03"):
					return joaat("CSTAG_FLOW_CA_CR01_POST");
				case joaat("HAI_COACH_ROBBERY_04"):
					return joaat("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			return 176656832;
		}
int func_919(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			__LIB_1__::func_28(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_928()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1503();
	func_1504();
	func_1505();
	func_1506();
	func_1507();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_929(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_395(iParam0, 1, 1, -142743235, 1);
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

void func_963()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1536(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_970(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1549();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1550(Global_1310720.f_21))
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
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_12__::func_995(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

char* func_1001(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_base";
		case 3:
			return "pl_base";
		case 1:
			return "pl_leadin_dialogue";
		case 2:
			return "pl_ig1_IHateThis";
		case 4:
			return "pl_ig2_dontworry";
		case 5:
			return "pl_ig2_IKnowItsDifficult";
		case 6:
			return "pl_ig2_DontSnicker";
		case 7:
			return "pl_ig2_JustRelax";
		case 8:
			return "pl_ig2_ReadOnAlittle";
		case 9:
			return "pl_ig2_TheresNoRush";
		case 10:
			return "pl_ig2_AreYouReady";
		case 11:
			return "pl_ig1_quick_exit";
		default:
			break;
	}
	return "!!Unknown Playlist!!";
}

bool func_1002(int iParam0, char* sParam1, int iParam2)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam2, false)) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam2, sParam1) || ANIMSCENE::_0xB89FCFF19DAFFF28(iParam2, sParam1))
		{
			return true;
		}
	}
	return false;
}

int func_1067(var uParam0, int iParam1, int iParam2)
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
		return func_1067(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

char* func_1155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@cldn@ig@rsc4_ig1_learningtoread@learningtoread";
		case 1:
			return "script@rcm@CLDN@IG@RSC6_IG1_ConversationWithPriest@Conversation";
		case 2:
			return "";
		case 3:
			return "script@rcm@cldn@ig@rsc4_ig3_sisterworries@rsc4_ig3_priestkids_idle";
		case 4:
			return "script@rcm@cldn@ig@rsc4_ig3_sisterworries@rsc4_ig3_sisterworries";
		case 5:
			return "script@rcm@cldn@ig@s2_ig5_kidholdup@s2_ig5_kidholdup";
		case 6:
			return "script@rcm@cldn@leadout@rsc6@leadout";
		case 7:
			return "script@rcm@cldn@ig@s2_ig4_maninjured@s2_ig4_maninjured_1";
	}
	return "";
}

void func_1183()
{
	if (__LIB_0__::func_272(iLocal_305, 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_305, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_305, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_305, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_305, false);
		PED::_SET_PED_BODY_COMPONENT(iLocal_305, 1245083301);
		PED::_UPDATE_PED_VARIATION(iLocal_305, true, true, true, true, false);
	}
}

bool func_1194(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_11__::func_845(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_900(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
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
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
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
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
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
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_1201(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bVar10 = PED::IS_PED_INJURED(*iParam0);
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
		__LIB_10__::func_902(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_11__::func_845(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_11__::func_421(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_784(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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
							__LIB_4__::func_101(uParam4, 0, 0);
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

void func_1255(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1714();
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

void func_1257(var uParam0)
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
			func_763(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_763(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1258(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_763(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1503()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1921(0);
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
	func_1921(1);
}

void func_1504()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_365(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1505()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1924(0);
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
	func_1924(1);
}

void func_1506()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1924(0);
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
	func_1924(1);
}

void func_1507()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_365(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_365(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_395(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_395(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1536(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1949(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_365(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1549()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1957(8);
		}
	}
	return 0;
}

bool func_1550(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1958(iParam0));
}

void func_1714()
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
	iVar0 = func_2028(6291456, 0);
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

void func_1921(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_365(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2103(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_929(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_395(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2109(Var0);
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

void func_1924(bool bParam0)
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
		func_365(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_365(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_395(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_395(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_395(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1949(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1949(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1949(iVar63, -915411861, 1, 0, 0));
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

int func_1957(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9446; //curOff = 6716
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9446; //curOff = 7288
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9446; //curOff = 7860
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9446; //curOff = 8875
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1958(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_2028(int iParam0, int iParam1)
{
	var uVar0;
	return func_2156(&uVar0, iParam0, iParam1);
}

void func_2103(int iParam0)
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
	func_395(iParam0, 1, 1, -142743235, 1);
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
		func_395(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2109(struct<6> Param0)
{
	if (!func_2216(Param0.f_4, 1))
	{
	}
	if (!func_2216(Param0, 1))
	{
	}
	if (!func_2216(Param0.f_2, 1))
	{
	}
	if (!func_2216(Param0.f_5, 1))
	{
	}
	if (!func_2216(Param0.f_3, 1))
	{
	}
	if (!func_2216(Param0.f_1, 1))
	{
	}
}

int func_2156(var uParam0, int iParam1, int iParam2)
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
		return func_2156(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2216(int iParam0, int iParam1)
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
				if (func_2216(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2216(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2216(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2216(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

