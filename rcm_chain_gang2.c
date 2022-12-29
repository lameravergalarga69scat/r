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
	int iLocal_15[2] = { 0, 0 };
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
	var uLocal_35 = 0;
	int iLocal_36[3] = { 0, 0, 0 };
	int iLocal_40 = 0;
	vector3 vLocal_41[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_48[2] = { 0f, 0f };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<15> Local_53[5];
	bool bLocal_129 = false;
	int iLocal_130 = 0;
	int iLocal_131[2] = { 0, 0 };
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = false;
	int iLocal_143 = 0;
	int iLocal_144[2] = { 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	struct<21> Local_162[1];
	struct<17> Local_184[2];
	struct<21> Local_219[1];
	struct<17> Local_241[2];
	struct<21> Local_276[1];
	struct<17> Local_298[1];
	struct<21> Local_316[1];
	struct<17> Local_338[1];
	struct<21> Local_356[1];
	struct<17> Local_378[1];
	bool bLocal_396 = false;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	struct<6> Local_418 = { 0, 0, 0, 0, 0, 1065353216 } ;
	var uLocal_424 = 1119092736;
	var uLocal_425 = 1092616192;
	var uLocal_426 = 1085276160;
	bool bLocal_427 = false;
	bool bLocal_428 = false;
	vector3 vLocal_429 = { 0f, 0f, 0f };
	vector3 vLocal_432 = { 0f, 0f, 0f };
	vector3 vLocal_435 = { 0f, 0f, 0f };
	vector3 vLocal_438 = { 0f, 0f, 0f };
	float fLocal_441 = 0f;
	vector3 vLocal_442 = { 0f, 0f, 0f };
	vector3 vLocal_445 = { 0f, 0f, 0f };
	int iLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	bool bLocal_455 = false;
	int iLocal_456 = 0;
	bool bLocal_457 = false;
	int iLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	bool bLocal_465 = false;
	int iLocal_466 = 0;
	bool bLocal_467 = false;
	int iLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = -1;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 1097859072;
	var uLocal_487 = 1000;
	var uLocal_488 = 1067450368;
	var uLocal_489 = 5000;
	var uLocal_490 = 42;
	var uLocal_491 = 1103626240;
	var uLocal_492 = 1077936128;
	var uLocal_493 = 1106247680;
	var uLocal_494 = 1103101952;
	var uLocal_495 = 1097859072;
	var uLocal_496 = 1103626240;
	int iLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = -1;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 1097859072;
	var uLocal_516 = 1000;
	var uLocal_517 = 1067450368;
	var uLocal_518 = 5000;
	var uLocal_519 = 42;
	var uLocal_520 = 1103626240;
	var uLocal_521 = 1077936128;
	var uLocal_522 = 1106247680;
	var uLocal_523 = 1103101952;
	var uLocal_524 = 1097859072;
	var uLocal_525 = 1103626240;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = -1;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 1097859072;
	var uLocal_544 = 1000;
	var uLocal_545 = 1067450368;
	var uLocal_546 = 5000;
	var uLocal_547 = 42;
	var uLocal_548 = 1103626240;
	var uLocal_549 = 1077936128;
	var uLocal_550 = 1106247680;
	var uLocal_551 = 1103101952;
	var uLocal_552 = 1097859072;
	var uLocal_553 = 1103626240;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = -1;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 1097859072;
	var uLocal_572 = 1000;
	var uLocal_573 = 1067450368;
	var uLocal_574 = 5000;
	var uLocal_575 = 42;
	var uLocal_576 = 1103626240;
	var uLocal_577 = 1077936128;
	var uLocal_578 = 1106247680;
	var uLocal_579 = 1103101952;
	var uLocal_580 = 1097859072;
	var uLocal_581 = 1103626240;
	int iLocal_582 = 0;
	struct<8> Local_583 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_591 = 2;
	var uLocal_592 = 1;
	var uLocal_593 = 1;
	var uLocal_594 = 1;
	var uLocal_595 = 0;
	var uLocal_596 = 1;
	var uLocal_597 = 2;
	var uLocal_598 = 2;
	var uLocal_599 = 3;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 3;
	var uLocal_603 = 1;
	var uLocal_604 = 3;
	var uLocal_605 = 3;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	struct<8> Local_608 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_616 = 2;
	var uLocal_617 = 1;
	var uLocal_618 = 1;
	var uLocal_619 = 1;
	var uLocal_620 = 0;
	var uLocal_621 = 1;
	var uLocal_622 = 2;
	var uLocal_623 = 2;
	var uLocal_624 = 3;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 3;
	var uLocal_628 = 1;
	var uLocal_629 = 3;
	var uLocal_630 = 3;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	struct<23> Local_633 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	struct<21> Local_658 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1 } ;
	var uLocal_679 = 3;
	var uLocal_680 = 3;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_18 = joaat("A_M_M_RHDTOWNFOLK_02");
	iLocal_19 = joaat("A_M_M_RHDTOWNFOLK_02");
	iLocal_20 = joaat("A_M_M_RHDTOWNFOLK_02");
	iLocal_21 = joaat("A_F_M_RHDTOWNFOLK_01");
	iLocal_22 = joaat("A_M_M_UNIGUNSLINGER_01");
	iLocal_23 = joaat("P_CS_NEWSPAPER_03X");
	iLocal_24 = joaat("P_CHAIR15X");
	iLocal_25 = 1;
	vLocal_429 = { 1232.02f, -1292.84f, 75.9f };
	vLocal_432 = { 1347.01f, -1304.87f, 76.44f };
	vLocal_435 = { 1348.07f, -1303.96f, 76.42f };
	vLocal_438 = { 1317.22f, -1311.5f, 75.59f };
	fLocal_441 = 338.8341f;
	vLocal_442 = { 1366.047f, -1363.316f, 77.4147f };
	vLocal_445 = { 1359.52f, -1375.11f, 78.53f };
	iLocal_448 = joaat("P_CS_CHAIN_GANG01X");
	iLocal_458 = -1;
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
					__LIB_13__::func_349(&Var0);
					break;
				case 3:
					func_10(&Var0);
					break;
				case 4:
					func_11(&Var0);
					break;
				case 2:
					__LIB_13__::func_2(&Var0);
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
					func_19(&Var0);
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
	func_19(uParam0);
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
	func_34(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	__LIB_13__::func_208(uParam0);
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
	if (func_51(uParam0))
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
			if (__LIB_13__::func_1(uParam0))
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
			if (func_64(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_19(uParam0);
					return;
				}
				func_66(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_13__::func_52(uParam0);
			}
			__LIB_13__::func_98(uParam0);
		}
	}
	__LIB_13__::func_318(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, func_70(uParam0));
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
				func_66(uParam0);
			}
			func_19(uParam0);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > func_82(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = func_83(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				__LIB_13__::func_258(uParam0);
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
	if (func_86(uParam0))
	{
		__LIB_13__::func_258(uParam0);
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

void func_13(var uParam0)
{
	if (func_92(uParam0))
	{
		func_14(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	__LIB_13__::func_3(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_95(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = __LIB_10__::func_568(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = __LIB_10__::func_568(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	if (__LIB_13__::func_347(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_19__::func_269(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = __LIB_12__::func_492(uParam0);
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
		func_116(uParam0);
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
			func_122(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
	func_66(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_19(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	int iVar0;
	struct<7> Var1;
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
	if (!__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			iVar0 = __LIB_12__::func_767(uParam0);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			Var1 = __LIB_0__::func_299(__LIB_12__::func_609(uParam0->f_174));
			Var1.f_1 = 0;
			Var1.f_2 = iVar0;
			Var1.f_3 = __LIB_12__::func_644(uParam0);
			Var1.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			Var1.f_5 = Global_40.f_7729;
			Var1.f_6 = __LIB_0__::func_398(0);
			TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1347702[uParam0->f_174 /*49*/].f_3), &Var1);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_66(uParam0);
	}
	if (bParam1)
	{
		func_19(uParam0);
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
			func_19(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_19(uParam0);
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		if (func_143(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_144(uParam0);
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

void func_34(var uParam0)
{
	__LIB_12__::func_658(uParam0, 8);
	__LIB_12__::func_659(uParam0, 8);
	__LIB_12__::func_656(uParam0, 0f);
	iLocal_15[0] = joaat("CS_CHAINPRISONER_01");
	iLocal_15[1] = joaat("CS_CHAINPRISONER_02");
	vLocal_41[0 /*3*/] = { 1214.93f, -1426.61f, 70.43f };
	vLocal_41[1 /*3*/] = { 1216.84f, -1424.35f, 70.53f };
	fLocal_48[0] = 298.9266f;
	fLocal_48[1] = 182.2866f;
	if (__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	func_178();
	__LIB_1__::func_398(&uLocal_469, 0);
	__LIB_1__::func_404(&uLocal_469, 0);
	__LIB_1__::func_403(&uLocal_469, 0);
	Local_418.f_5 = 2f;
	iLocal_405 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1319.592f, -1350.728f, 78.78626f, 0f, 0f, -39.15835f, 181.0174f, 153.4174f, 40.00144f, "CG2 mission area");
	__LIB_1__::func_408(-748969569, 0, 0);
}

bool func_51(var uParam0)
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

bool func_64(var uParam0)
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
		if (__LIB_0__::func_6(iVar0) && func_198(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_12__::func_643(uParam0, 12);
			return true;
		}
	}
	if (func_199(uParam0->f_174))
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
	if (func_208(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 1024);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	if (!__LIB_0__::func_0(uParam0) && __LIB_10__::func_270(uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 8192);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	return false;
}

void func_66(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	func_213(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
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
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

int func_70(var uParam0)
{
	return iLocal_690;
}

float func_82(var uParam0)
{
	if (iLocal_25 > 0)
	{
		return 0f;
	}
	return 1000f;
}

int func_83(var uParam0)
{
	int iVar0;
	func_270(uParam0);
	if (iLocal_25 == 3)
	{
		func_271(uParam0);
	}
	if (func_272(uParam0))
	{
		func_273(uParam0);
		return 9;
	}
	switch (iLocal_25)
	{
		case 0:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_405))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_405, 1, 0) || __LIB_0__::func_94(Global_35, __LIB_13__::func_295(), 1) <= 150f)
				{
					func_277(uParam0);
					__LIB_13__::func_296(2);
				}
			}
			break;
		case 1:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_405))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_405, 1, 0) || __LIB_0__::func_94(Global_35, __LIB_13__::func_295(), 1) <= 150f)
				{
					func_277(uParam0);
					__LIB_13__::func_296(2);
				}
				else
				{
					__LIB_13__::func_296(0);
				}
			}
			break;
		case 2:
			if (func_279(&Local_53) && func_280(uParam0))
			{
				func_281(&Local_53);
				if (func_282())
				{
					bLocal_129 = false;
				}
				__LIB_13__::func_296(3);
			}
			else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_405))
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_405, 1, 0) && __LIB_0__::func_94(Global_35, __LIB_13__::func_295(), 1) > 150f)
				{
					func_283(uParam0);
					func_284();
					func_285();
					__LIB_13__::func_296(0);
				}
			}
			break;
		case 3:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934266.f_58, false))
			{
				func_286(&Local_53);
				func_281(&Local_53);
				if (func_287(uParam0))
				{
					func_288(uParam0);
				}
				if (func_289(uParam0))
				{
					func_290();
					func_291();
				}
				if (func_292(uParam0))
				{
					func_293(uParam0);
				}
				if (func_294(uParam0) || (bLocal_428 == 1 && !func_295(2)))
				{
					func_296(uParam0);
					func_297(uParam0);
					func_298(uParam0);
				}
				if (func_299(uParam0))
				{
					func_300(uParam0);
				}
				if ((((func_289(uParam0) && func_287(uParam0)) && func_294(uParam0)) && func_299(uParam0)) && func_301(uParam0))
				{
					func_302();
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_405))
				{
					if (((!__LIB_1__::func_205(Global_35, iLocal_405, 1, 0) && __LIB_0__::func_94(Global_35, __LIB_13__::func_295(), 1) > 150f) && iLocal_30 != 5) && func_303())
					{
						func_283(uParam0);
						func_284();
						func_285();
						__LIB_13__::func_296(0);
					}
				}
				if (!bLocal_129 && !__LIB_0__::func_270())
				{
					if (__LIB_0__::func_45("CHAINGANG1_HELP", 10000, 0, 0, 0, 1) != 0)
					{
						bLocal_129 = true;
						iLocal_130 = __LIB_0__::func_23();
					}
				}
				if (func_307())
				{
					if (!func_308())
					{
						__LIB_12__::func_883(uParam0, "CHAINGANG2_OBJ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else
					{
						__LIB_13__::func_323(1, 31, -1);
					}
					__LIB_13__::func_296(8);
				}
				iVar0 = 0;
				while (iVar0 < 5)
				{
					func_310(&(Local_53[iVar0 /*15*/]), iVar0);
					if (!func_295(func_311(iVar0)))
					{
						if (iVar0 == 1)
						{
							if (func_312(&(Local_53[iVar0 /*15*/])))
							{
								if (((ENTITY::IS_ENTITY_DEAD(iLocal_155) || iLocal_30 == 3) || iLocal_27 == 1) || iLocal_27 == 2)
								{
									if (func_313(&(Local_53[iVar0 /*15*/]), iVar0))
									{
										iLocal_51 = iVar0;
										iLocal_52 = __LIB_1__::func_614(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 0, 0);
										__LIB_13__::func_296(4);
									}
								}
							}
						}
						else if (func_313(&(Local_53[iVar0 /*15*/]), iVar0))
						{
							iLocal_51 = iVar0;
							iLocal_52 = __LIB_1__::func_614(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 0, 0);
							__LIB_13__::func_296(4);
						}
					}
					iVar0++;
				}
				func_315(uParam0);
			}
			break;
		case 4:
			func_296(uParam0);
			func_288(uParam0);
			func_298(uParam0);
			func_300(uParam0);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[iLocal_51 /*15*/]))
			{
				if (!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, Local_53[iLocal_51 /*15*/]))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_9__::func_749(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG")))
					{
						if (func_317())
						{
							TASK::_DELETE_SCENARIO_POINT(Local_53[iLocal_51 /*15*/]);
							func_318(func_311(iLocal_51));
							func_319();
							__LIB_13__::func_296(Local_53[iLocal_51 /*15*/].f_3);
							iLocal_51 = -1;
						}
						else
						{
							if (iLocal_51 == 0)
							{
								iLocal_26 = 0;
							}
							__LIB_1__::func_951(&(Local_53[iLocal_51 /*15*/].f_1));
							TASK::_0x4161648394262FDF(Local_53[iLocal_51 /*15*/].f_4, 0.75f);
							__LIB_13__::func_296(3);
							iLocal_51 = -1;
						}
					}
				}
			}
			else
			{
				__LIB_13__::func_296(3);
			}
			break;
		case 6:
			func_315(uParam0);
			break;
		case 8:
			if (!__LIB_4__::func_68("CHAINGANG2_OBJ", 1) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				return 8;
			}
			break;
	}
	return 3;
}

bool func_86(var uParam0)
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
		__LIB_19__::func_269(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_322(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_92(var uParam0)
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
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || __LIB_13__::func_322(uParam0))
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
		__LIB_19__::func_269(uParam0, 0);
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

int func_95(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_337(Var0, &(uParam0->f_206), uParam0);
}

void func_116(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	__LIB_0__::func_7(&(Global_1347702[32 /*49*/].f_12), 1024);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_363();
		StringCopy(&cVar1, "BWCG_PRISONER", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		__LIB_13__::func_309(iLocal_131[iVar0], &cVar1, 9);
		__LIB_2__::func_788(&(iLocal_131[iVar0]), 1, 0, 1);
		iVar0++;
	}
	__LIB_12__::func_654(uParam0->f_174, 0);
}

void func_122(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		func_379(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_143(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_187(uParam0->f_174))
	{
		iVar0 = 1;
		func_296(uParam0);
		func_315(uParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
		{
			if (__LIB_0__::func_665(iLocal_155, Global_35, 1, 1) < 75f)
			{
				iVar0 = 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_134))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_134, 1, 1) < 30f || ENTITY::_0xC8CCDB712FBCBA92(iLocal_134))
			{
				iVar0 = 0;
			}
		}
		if (INTERIOR::IS_VALID_INTERIOR(Local_53[0 /*15*/].f_9))
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35)))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == Local_53[0 /*15*/].f_9)
				{
					iVar0 = 0;
				}
			}
		}
		return iVar0;
	}
	return true;
}

void func_144(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	if (__LIB_2__::func_763(70, 1))
	{
		if (__LIB_0__::func_272(iLocal_161, 1))
		{
			__LIB_2__::func_753(70, 0, 1, 0, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_161);
		}
	}
	func_284();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MAP::DOES_BLIP_EXIST(Local_53[iVar0 /*15*/].f_2))
		{
			MAP::REMOVE_BLIP(&(Local_53[iVar0 /*15*/].f_2));
		}
		if (INTERIOR::IS_VALID_INTERIOR(Local_53[iVar0 /*15*/].f_9))
		{
			INTERIOR::UNPIN_INTERIOR(Local_53[iVar0 /*15*/].f_9);
		}
		iVar0++;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_143))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_143);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_406))
	{
		MAP::REMOVE_BLIP(&iLocal_406);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_398))
	{
		MAP::REMOVE_BLIP(&iLocal_398);
	}
	if (iLocal_138 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_138, false);
	}
	if (iLocal_139 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_139, false);
	}
	if (iLocal_150 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_150, false);
	}
	if (iLocal_152 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_152, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_154))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_154);
	}
	__LIB_2__::func_788(&iLocal_134, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_397, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_156, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_155, 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_144[0]), 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_144[1]), 1, 0, 1);
	__LIB_4__::func_866(&iLocal_136, 1, 1);
	__LIB_1__::func_951(&iLocal_137);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_363();
		StringCopy(&cVar1, "BWCG_PRISONER", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		__LIB_13__::func_309(iLocal_131[iVar0], &cVar1, 8);
		__LIB_2__::func_788(&(iLocal_131[iVar0]), 1, 0, 1);
		iVar0++;
	}
	__LIB_13__::func_310(&iLocal_399);
	__LIB_2__::func_353(&uLocal_400, 1);
	__LIB_0__::func_172(iLocal_404);
	__LIB_0__::func_172(iLocal_401);
	__LIB_0__::func_172(iLocal_402);
	__LIB_0__::func_172(iLocal_403);
	__LIB_0__::func_172(iLocal_140);
	__LIB_0__::func_172(iLocal_141);
	__LIB_0__::func_172(iLocal_151);
	__LIB_0__::func_172(iLocal_153);
	__LIB_0__::func_172(iLocal_154);
	if (__LIB_1__::func_707(joaat("DOCUMENT_TAXIDERMY_ORDER_1"), 1, 0) || __LIB_11__::func_877() >= 1)
	{
		__LIB_1__::func_408(-748969569, 0, 0);
	}
	else
	{
		__LIB_1__::func_408(-748969569, 1, 0);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[32 /*49*/].f_42, false))
	{
		__LIB_13__::func_314();
		__LIB_5__::func_440("rbwcg_rhodes_campsite");
	}
	func_283(uParam0);
}

void func_178()
{
	Local_53[0 /*15*/].f_3 = 3;
	Local_53[0 /*15*/].f_4 = { 1233.39f, -1293.22f, 75.9f };
	Local_53[0 /*15*/].f_7 = -42.777f;
	Local_53[0 /*15*/].f_8 = 1;
	Local_53[0 /*15*/].f_10 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1233.383f, -1293.269f, 76.8807f, 0f, 0f, -43.86235f, 1f, 1.260508f, 2.003635f, "Train poster grab vol");
	Local_53[0 /*15*/].f_11 = { 1231.912f, -1306.532f, 75.883f };
	Local_53[1 /*15*/].f_3 = 3;
	Local_53[1 /*15*/].f_4 = { 1364.702f, -1363.254f, 77.629f };
	Local_53[1 /*15*/].f_7 = -170.538f;
	Local_53[1 /*15*/].f_11 = { 1367.491f, -1355.449f, 76.8652f };
	Local_53[3 /*15*/].f_3 = 3;
	Local_53[3 /*15*/].f_4 = { 1317.345f, -1311.339f, 75.5915f };
	Local_53[3 /*15*/].f_7 = 156.736f;
	Local_53[3 /*15*/].f_11 = { 1318.552f, -1306.761f, 75.4512f };
	Local_53[2 /*15*/].f_3 = 3;
	Local_53[2 /*15*/].f_4 = { 1353.371f, -1304.259f, 75.87041f };
	Local_53[2 /*15*/].f_7 = -22.156f;
	Local_53[2 /*15*/].f_11 = { 1351.325f, -1310.325f, 75.7495f };
	Local_53[4 /*15*/].f_3 = 3;
	Local_53[4 /*15*/].f_4 = { 1364.9f, -1326.16f, 76.48f };
	Local_53[4 /*15*/].f_7 = 131.0854f;
	Local_53[4 /*15*/].f_11 = { 1369.896f, -1320.643f, 76.3429f };
}

bool func_198(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_64(0);
	if (iVar0 == 11)
	{
		iVar1 = __LIB_12__::func_601(__LIB_0__::func_872(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == joaat("HAI_FIVE_FINGER_FILLET_01") || iVar1 == joaat("HAI_FIVE_FINGER_FILLET_02")) || iVar1 == joaat("HAI_DOMINOES_01"))
			{
				iVar2 = __LIB_1__::func_953(Global_40.f_4283);
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
				if (__LIB_0__::func_20(Global_1894899.f_2) && Global_1894899.f_2 == __LIB_1__::func_953(Global_40.f_4283))
				{
					return true;
				}
			}
		}
	}
	if (func_479(uParam0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_199(int iParam0)
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
				func_122(113, 1, 0, 1, 1, 1, 0);
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

int func_208(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!func_498(&(Global_1347702[uParam0->f_174 /*49*/].f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_213(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_134))
	{
		ENTITY::_0x3F08C6163A4AB1D6(iLocal_134);
	}
}

void func_270(var uParam0)
{
	switch (iLocal_34)
	{
		case 0:
			if (iLocal_25 != 0)
			{
				if (func_570(uParam0, 0) && func_570(uParam0, 1))
				{
					if (!func_571(&iLocal_131, &uLocal_498, &iLocal_497, &uLocal_460, 0, 1, 1))
					{
						func_572(uParam0);
					}
					else
					{
						func_573();
						func_574();
						__LIB_6__::func_900("CG1_RET_W_JOHN", 0, 0);
						__LIB_6__::func_900("CG1_RET_B_JOHN", 0, 0);
						__LIB_6__::func_900("CG1_RET_W_ARTH", 0, 0);
						__LIB_6__::func_900("CG1_RET_B_ARTH", 0, 0);
						__LIB_6__::func_900("CG1ASKB_BLCK", 0, 0);
						__LIB_6__::func_900("CG1ASKB", 0, 0);
						__LIB_6__::func_900("CG1ASKA", 0, 0);
						iLocal_34 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_576(0))
			{
				iLocal_468 = 0;
				iLocal_34 = 2;
			}
			break;
		case 2:
			if ((__LIB_12__::func_610(iLocal_131[0], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 0, -1082130432 /* Float: -1f */) && __LIB_12__::func_610(iLocal_131[1], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 0, -1082130432 /* Float: -1f */)) && __LIB_0__::func_94(Global_35, __LIB_13__::func_295(), 1) >= 100f)
			{
				__LIB_2__::func_426(&(iLocal_131[0]));
				__LIB_2__::func_426(&(iLocal_131[1]));
				iLocal_34 = 0;
			}
			break;
	}
}

void func_271(var uParam0)
{
	vector3 vVar0;
	switch (iLocal_32)
	{
		case 0:
			if (__LIB_13__::func_311(32))
			{
				iLocal_32 = 7;
			}
			else if (__LIB_2__::func_763(70, 0))
			{
				iLocal_32 = 7;
			}
			else
			{
				iLocal_32 = 1;
			}
			break;
		case 1:
			if (func_578(uParam0))
			{
				iLocal_32 = 2;
			}
			break;
		case 2:
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, 1))
			{
				if (__LIB_0__::func_272(iLocal_161, 1))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_2__::func_215(iLocal_161, Global_35, 1, 1114636288 /* Float: 60f */, 0) && __LIB_0__::func_665(Global_35, iLocal_161, 1, 1) < 10f)
						{
							if (__LIB_12__::func_876(uParam0, "RBWCG_SRF_BNTY", 0))
							{
								__LIB_13__::func_345(32);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_161, Global_35, -1, 0, 51, 0);
								iLocal_32 = 3;
							}
						}
						else
						{
							vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_161, false, false) };
						}
					}
				}
			}
			break;
		case 3:
			if (!__LIB_6__::func_904())
			{
				if (__LIB_0__::func_272(iLocal_161, 1))
				{
					if (__LIB_2__::func_763(70, 1))
					{
						__LIB_2__::func_753(70, 0, 1, 0, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_161);
					iLocal_32 = 7;
				}
			}
			break;
		case 7:
			if (!__LIB_13__::func_311(64))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161))
				{
					iLocal_161 = __LIB_2__::func_963(70);
				}
				else if (!bLocal_396)
				{
					func_584();
					__LIB_12__::func_875(uParam0, iLocal_161, "RHD_SHERIFF", 1);
					bLocal_396 = true;
				}
				else if (func_585(&iLocal_161, &(Local_356[0 /*21*/]), 15f, &Local_378, 0f, 1, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) > -1)
				{
					iLocal_32 = 5;
				}
			}
			break;
		case 5:
			if (__LIB_1__::func_265(Global_35, "GREET_LAW", joaat("SPEECH_PARAMS_STANDARD"), iLocal_161, 1, 0, 0, 1))
			{
				iLocal_32 = 6;
			}
			break;
		case 6:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (__LIB_12__::func_876(uParam0, "RBWCG_SRF_MNG", 0))
				{
					__LIB_13__::func_345(64);
					func_587();
					iLocal_32 = 7;
				}
			}
			break;
	}
}

bool func_272(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iLocal_25 > 2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		LAW::_0x0C392DB374655176(vLocal_41[0 /*3*/], 40f, iVar0);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
		{
			StringCopy(&(uParam0->f_2578), "RBWCG1_LAWFOUND", 24);
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar0)));
			func_576(iVar1);
			func_273(uParam0);
			ITEMSET::_CLEAR_ITEMSET(iVar0);
			return true;
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	return false;
}

void func_273(var uParam0)
{
	if (__LIB_0__::func_5(Global_1347702[uParam0->f_174 /*49*/].f_35))
	{
		if (__LIB_0__::func_627(Global_1347702[uParam0->f_174 /*49*/].f_35, 0))
		{
			__LIB_12__::func_935(Global_1347702[uParam0->f_174 /*49*/].f_35, 1, 1);
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[Global_1347702[uParam0->f_174 /*49*/].f_35 /*49*/].f_42, false))
		{
			SCRIPTS::TERMINATE_THREAD(Global_1347702[Global_1347702[uParam0->f_174 /*49*/].f_35 /*49*/].f_42);
		}
	}
	__LIB_13__::func_323(1, uParam0->f_174, -1);
}

void func_277(var uParam0)
{
	struct<2> Var0;
	STREAMING::REQUEST_MODEL(iLocal_448, false);
	STREAMING::REQUEST_MODEL(iLocal_18, false);
	STREAMING::REQUEST_MODEL(iLocal_19, false);
	STREAMING::REQUEST_MODEL(iLocal_21, false);
	STREAMING::REQUEST_MODEL(iLocal_22, false);
	STREAMING::REQUEST_MODEL(iLocal_23, false);
	STREAMING::REQUEST_MODEL(iLocal_24, false);
	STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), false);
	func_588();
	func_589();
	Var0 = { __LIB_12__::func_671(uParam0->f_174) };
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&Var0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&Var0);
	}
	Var0 = { __LIB_12__::func_842(uParam0->f_174) };
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&Var0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&Var0);
	}
}

int func_279(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!func_590(uParam0[iVar1 /*15*/], func_311(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_280(var uParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	Var0 = { __LIB_12__::func_671(uParam0->f_174) };
	Var2 = { __LIB_12__::func_842(uParam0->f_174) };
	if (((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_448) || !STREAMING::HAS_MODEL_LOADED(iLocal_18)) || !STREAMING::HAS_MODEL_LOADED(iLocal_19)) || !STREAMING::HAS_MODEL_LOADED(iLocal_21)) || !STREAMING::HAS_MODEL_LOADED(iLocal_22)) || !STREAMING::HAS_MODEL_LOADED(iLocal_23)) || !STREAMING::HAS_MODEL_LOADED(iLocal_24)) || !STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"))) || !HUD::_TEXT_DATABASE_HAS_LOADED(&Var0)) || !HUD::_TEXT_DATABASE_HAS_LOADED(&Var2))
	{
		return 0;
	}
	return 1;
}

void func_281(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = true;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		bVar1 = false;
		if (iVar2 == 1)
		{
			if (bLocal_428 == 1)
			{
			}
			else
			{
				if ((!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar2 /*15*/])->f_1) && TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar2 /*15*/])) && !func_295(func_311(iVar2)))
				{
					if (TASK::_0xEA31F199A73801D3((*uParam0)[iVar2 /*15*/]) && ENTITY::DOES_ENTITY_EXIST(TASK::_GET_SCENARIO_POINT_ENTITY((*uParam0)[iVar2 /*15*/], "PrimaryItem")))
					{
						(uParam0[iVar2 /*15*/])->f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_GET_SCENARIO_POINT_ENTITY((*uParam0)[iVar2 /*15*/], "PrimaryItem"));
						if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar2 /*15*/])->f_1))
						{
							DECORATOR::DECOR_SET_INT((uParam0[iVar2 /*15*/])->f_1, "letter_item", joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"));
							bVar1 = true;
						}
					}
					else if (TASK::_0xEA31F199A73801D3((*uParam0)[iVar2 /*15*/]) && !ENTITY::DOES_ENTITY_EXIST(TASK::_GET_SCENARIO_POINT_ENTITY((*uParam0)[iVar2 /*15*/], "PrimaryItem")))
					{
						if ((iVar2 == 1 && !bLocal_428) || iVar2 != 1)
						{
						}
					}
				}
				else if ((!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar2 /*15*/])->f_1) && !TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar2 /*15*/])) && !func_295(func_311(iVar2)))
				{
				}
				if (bVar0 && !bVar1)
				{
					bVar0 = false;
				}
			}
			iVar2++;
		}
	}
}

bool func_282()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_923(iLocal_130))
	{
		return true;
	}
	__LIB_13__::func_316(iLocal_130, __LIB_0__::func_23(), &uVar0, &uVar1, &uVar2, &iVar3, &iVar4, &iVar5);
	if ((iVar5 > 0 || iVar4 > 0) || iVar3 >= 1)
	{
		return true;
	}
	return false;
}

void func_283(var uParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_448);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_19);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_22);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_23);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_15[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_15[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	func_593();
	iLocal_468 = 0;
	func_363();
	func_594();
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_143))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_143);
	}
	Var0 = { __LIB_12__::func_671(uParam0->f_174) };
	Var2 = { __LIB_12__::func_842(uParam0->f_174) };
	HUD::_TEXT_DATABASE_DELETE(&Var0);
	HUD::_TEXT_DATABASE_DELETE(&Var2);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[iVar4]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_36[iVar4]);
		}
		iVar4++;
	}
}

void func_284()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[iVar0 /*15*/]))
		{
			TASK::_DELETE_SCENARIO_POINT(Local_53[iVar0 /*15*/]);
		}
		if (__LIB_1__::func_565(&(Local_53[iVar0 /*15*/].f_14)))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(Local_53[iVar0 /*15*/].f_14), 1);
		}
		iVar0++;
	}
}

void func_285()
{
	__LIB_2__::func_426(&iLocal_134);
	__LIB_2__::func_788(&iLocal_155, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_156, 1, 0, 1);
	__LIB_2__::func_426(&(iLocal_144[0]));
	__LIB_2__::func_426(&(iLocal_144[1]));
	__LIB_2__::func_426(&iLocal_397);
	__LIB_2__::func_426(&(iLocal_131[0]));
	__LIB_2__::func_426(&(iLocal_131[1]));
	__LIB_1__::func_951(&iLocal_137);
	iLocal_26 = 0;
	iLocal_27 = 0;
	iLocal_28 = 0;
	iLocal_29 = 0;
	iLocal_30 = 0;
	iLocal_31 = 0;
	bLocal_457 = false;
	bLocal_455 = false;
}

void func_286(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_295(func_311(iVar0)) && !TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0 /*15*/]))
		{
			if (iVar0 == 1)
			{
				if (bLocal_428 == 1)
				{
				}
				else if (func_590(uParam0[iVar0 /*15*/], func_311(iVar0)))
				{
				}
				iVar0++;
			}
		}
	}
}

bool func_287(var uParam0)
{
	if (func_295(4))
	{
		return true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_151))
	{
		iLocal_151 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1352.454f, -1303.891f, 75.9723f, 0f, 0f, 0f, 1f, 1f, 1f, "Tiny Block 3");
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_151) && iLocal_150 == 0)
	{
		iLocal_150 = PED::_0x4C39C95AE5DB1329(iLocal_151, 0, 15);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_153))
	{
		iLocal_153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1346.266f, -1304.418f, 76.55686f, 0f, 0f, -20.73763f, 5.179343f, 1.433856f, 1.175918f, "Tiny Block 4");
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_153) && iLocal_152 == 0)
	{
		iLocal_152 = PED::_0x4C39C95AE5DB1329(iLocal_153, 0, 15);
	}
	if ((__LIB_13__::func_311(1) && iLocal_150 != 0) && iLocal_152 != 0)
	{
		return true;
	}
	if (iLocal_28 == 2)
	{
		return true;
	}
	if (((func_596(uParam0) && func_597(uParam0)) && iLocal_150 != 0) && iLocal_152 != 0)
	{
		__LIB_4__::func_228(&uLocal_526);
		__LIB_1__::func_393(&uLocal_526, 1);
		if (func_599(1, 0, "pl_chillin"))
		{
			if (func_600())
			{
				return true;
			}
		}
	}
	return false;
}

void func_288(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	if (!bLocal_457)
	{
		bVar4 = false;
		if (func_571(&iLocal_144, &uLocal_526, &iLocal_497, &uLocal_459, 0, 1, 1))
		{
			bVar4 = true;
		}
		if (iLocal_28 != 2)
		{
			iVar0 = 0;
			while (iVar0 < iLocal_144)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0]))
				{
					if ((bVar4 || func_601(&(iLocal_144[iVar0]), &vVar1)) || PED::IS_PED_RAGDOLL(iLocal_144[iVar0]))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[1], false))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_36[1], "b_breakout", true, false);
						}
						iVar5 = 0;
						while (iVar5 < iLocal_144)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar5]))
							{
								if (__LIB_0__::func_86(vVar1))
								{
									vVar1 = { Global_36 };
								}
								PED::_0xEEED8FAFEC331A70(iLocal_144[iVar5], vVar1, 1);
								TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_144[iVar5], vVar1, 3, 1, 300f, -1, 0);
							}
							__LIB_2__::func_788(&(iLocal_144[iVar5]), 1, 1, 1);
							iVar5++;
						}
						if (AUDIO::_0x1ECC76792F661CF5("RBWCG_RC1_IG3"))
						{
							AUDIO::STOP_SCRIPTED_CONVERSATION("RBWCG_RC1_IG3", false, false);
						}
						bLocal_457 = true;
						iLocal_28 = 2;
					}
				}
				else
				{
					__LIB_2__::func_788(&(iLocal_144[iVar0]), 0, 1, 1);
					bLocal_457 = true;
					if (AUDIO::_0x1ECC76792F661CF5("RBWCG_RC1_IG3"))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION("RBWCG_RC1_IG3", false, false);
					}
					iLocal_28 = 2;
				}
				iVar0++;
			}
		}
		switch (iLocal_28)
		{
			case 0:
				if (!func_308())
				{
					if (__LIB_0__::func_94(Global_35, vLocal_432, 1) <= 12f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[1], false))
						{
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_36[1], "pl_gossip_exit") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_36[1], "pl_gossip_exit"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_36[1], "pl_gossip_exit", true);
								__LIB_13__::func_345(1);
								iLocal_28 = 1;
							}
						}
					}
				}
				break;
			case 1:
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_BENCH"), 15, 0, 0);
				func_602();
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_36[1], false) || __LIB_3__::func_642(iLocal_36[1], 100))
					{
						if (__LIB_6__::func_904())
						{
							__LIB_5__::func_20(0, 0);
						}
						iVar0 = 0;
						while (iVar0 < iLocal_144)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0]))
							{
								if (iVar0 == 0)
								{
									if (!__LIB_0__::func_163(iLocal_144[iVar0], 923520851))
									{
										TASK::TASK_WANDER_IN_AREA(iLocal_144[iVar0], vLocal_432, 70f, 5f, 30f, 1);
										PED::FORCE_PED_MOTION_STATE(iLocal_144[iVar0], joaat("MOTIONSTATE_WALK"), false, 0, false);
									}
								}
								else if (!__LIB_0__::func_163(iLocal_144[iVar0], -76381094))
								{
									TASK::_TASK_USE_SCENARIO_POINT(iLocal_144[iVar0], iLocal_149, "PROP_HUMAN_SEAT_BENCH_FEMALE_A", 0, false, true, 0, false, -1f, false);
								}
							}
							__LIB_2__::func_788(&(iLocal_144[iVar0]), 1, 1, 1);
							iVar0++;
						}
						iLocal_28 = 2;
					}
					if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01"))
					{
						if (!__LIB_0__::func_163(iLocal_144[0], 923520851))
						{
							TASK::TASK_WANDER_IN_AREA(iLocal_144[0], vLocal_432, 70f, 5f, 30f, 1);
							PED::FORCE_PED_MOTION_STATE(iLocal_144[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
						}
					}
					if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01"))
					{
						if (!__LIB_0__::func_163(iLocal_144[1], -76381094))
						{
							TASK::_TASK_USE_SCENARIO_POINT(iLocal_144[1], iLocal_149, "PROP_HUMAN_SEAT_BENCH_FEMALE_A", 0, false, true, 0, false, -1f, false);
						}
					}
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]) && (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01")))
				{
					if (!__LIB_0__::func_163(iLocal_144[0], 923520851) && !PED::IS_PED_FLEEING(iLocal_144[0]))
					{
						TASK::TASK_WANDER_IN_AREA(iLocal_144[0], vLocal_432, 70f, 5f, 30f, 1);
						PED::FORCE_PED_MOTION_STATE(iLocal_144[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
						__LIB_2__::func_788(&(iLocal_144[0]), 1, 0, 1);
					}
					else
					{
						__LIB_2__::func_788(&(iLocal_144[0]), 1, 0, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) && (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01")))
				{
					if (!__LIB_0__::func_163(iLocal_144[1], -76381094) && !PED::IS_PED_FLEEING(iLocal_144[1]))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iLocal_144[1], iLocal_149, "PROP_HUMAN_SEAT_BENCH_FEMALE_A", 0, false, true, 0, false, -1f, false);
						__LIB_2__::func_788(&(iLocal_144[1]), 1, 0, 1);
					}
					else
					{
						__LIB_2__::func_788(&(iLocal_144[1]), 1, 0, 1);
					}
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_144[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_36[1]);
				}
				break;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_144)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0]) && !PED::IS_PED_FLEEING(iLocal_144[iVar0]))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_144[iVar0], Global_35, 3, 257, -1f, -1, 0);
			}
			iVar0++;
		}
	}
}

bool func_289(var uParam0)
{
	if (func_295(1))
	{
		return true;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_143))
	{
		iLocal_143 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_429);
		return false;
	}
	else if (INTERIOR::IS_VALID_INTERIOR(iLocal_143) && !INTERIOR::IS_INTERIOR_READY(iLocal_143))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_143);
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_134) && !__LIB_13__::func_311(256))
	{
		iLocal_134 = __LIB_12__::func_885(uParam0, iLocal_18, vLocal_429, 0, 1, 1, 1, 1, 1, 1, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_134) && PED::_0xA0BC8FAED8CFEB3C(iLocal_134))
	{
		__LIB_0__::func_568(vLocal_429, 2f, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_134, false);
		PED::_0xFFA1594703ED27CA(iLocal_134, 9);
		AUDIO::STOP_PED_SPEAKING(iLocal_134, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_134, 234, true);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_140))
	{
		iLocal_140 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1232.936f, -1293.577f, 76.16165f, 0f, 0f, 25.65928f, 0.38708f, 1f, 1f, "Tiny Block 1");
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_140) && iLocal_138 == 0)
	{
		iLocal_138 = PED::_0x4C39C95AE5DB1329(iLocal_140, 0, 15);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_141))
	{
		iLocal_141 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1233.798f, -1293.974f, 76.16165f, 0f, 0f, -43.86253f, 0.813139f, 0.626131f, 1f, "Tiny Block 2");
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_141) && iLocal_139 == 0)
	{
		iLocal_139 = PED::_0x4C39C95AE5DB1329(iLocal_141, 0, 15);
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_134) || __LIB_13__::func_311(256)) && iLocal_138 != 0) && iLocal_139 != 0)
	{
		if (__LIB_13__::func_311(256))
		{
			return true;
		}
		else if (func_599(0, 0, "pl_reading_newspaper"))
		{
			if (func_607())
			{
				__LIB_2__::func_56(iLocal_134, 1, 1);
				__LIB_3__::func_923(iLocal_134, 1088421888 /* Float: 7f */, 1, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_134, 4, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_134, 7, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_134, 8, 0, 1);
				func_610(&iLocal_134);
				__LIB_12__::func_875(uParam0, iLocal_134, "CG2_Stranger", 1);
				return true;
			}
		}
	}
	return false;
}

void func_290()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_134))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_36[0]);
			}
		}
		else if (!bLocal_142)
		{
			if (func_611(iLocal_134, 0, &uLocal_554, &iLocal_497, 1, 0))
			{
				__LIB_13__::func_345(256);
				bLocal_142 = true;
			}
		}
		else if ((ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_134, iLocal_36[0]) && !PED::IS_PED_RAGDOLL(iLocal_134)) && !TASK::_0xF330A5C062B29BED(iLocal_134))
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_36[0], "pl_exit"))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_36[0], "pl_exit") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_36[0], "pl_exit"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_36[0], "pl_exit", true);
				}
			}
			else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_36[0], "pl_exit"))
			{
				if (__LIB_3__::func_642(iLocal_36[0], 100))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_134, Global_35, 3, 257, -1f, -1, 0);
					__LIB_2__::func_788(&iLocal_134, 1, 0, 1);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_36[0]);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_137);
				}
			}
		}
		else if (!PED::IS_PED_FLEEING(iLocal_134))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_36[0]);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_134, Global_35, 3, 257, -1f, -1, 0);
			__LIB_2__::func_788(&iLocal_134, 1, 0, 1);
		}
	}
}

void func_291()
{
	if (func_295(2))
	{
		return;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[1 /*15*/]))
	{
		if (iLocal_27 >= 1 && !bLocal_428)
		{
			if (TASK::_IS_SCENARIO_POINT_FLAG_SET(Local_53[1 /*15*/], 8))
			{
				TASK::_SET_SCENARIO_POINT_FLAG(Local_53[1 /*15*/], 8, false);
			}
		}
		else if (!TASK::_IS_SCENARIO_POINT_FLAG_SET(Local_53[1 /*15*/], 8))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(Local_53[1 /*15*/], 8, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[1 /*15*/].f_1) && !bLocal_428)
	{
		__LIB_3__::func_319(iLocal_36[2]);
		TASK::CLEAR_PED_TASKS(iLocal_155, true, false);
	}
	else if (!bLocal_428)
	{
		if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && __LIB_0__::func_272(iLocal_155, 0)) && iLocal_27 == 0)
		{
			if (func_599(2, 1, "pl_checking_horse"))
			{
			}
		}
		else if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false) && __LIB_0__::func_272(iLocal_155, 0)) && iLocal_27 == 0)
		{
			if (func_612())
			{
			}
		}
	}
}

bool func_292(var uParam0)
{
	if (__LIB_13__::func_311(16))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_157))
	{
		iLocal_157 = __LIB_2__::func_963(72);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_157))
		{
			__LIB_12__::func_875(uParam0, iLocal_157, "RHO_STATWRK", 1);
			func_614(__LIB_2__::func_460(24), 72);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_293(var uParam0)
{
	vector3 vVar0[24];
	if (__LIB_13__::func_311(16))
	{
		return;
	}
	switch (iLocal_33)
	{
		case 0:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_157) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				if (!__LIB_0__::func_75(&uLocal_158))
				{
					if (!__LIB_0__::func_139(iLocal_40))
					{
						iLocal_40 = __LIB_2__::func_403(__LIB_2__::func_460(24), joaat("INPUT_OPEN_EMOTE_WHEEL"), iLocal_157, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_40) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iLocal_157), 0);
						__LIB_6__::func_697(iLocal_40, 0, 1);
						ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(iLocal_157, true);
					}
					else
					{
						iLocal_33 = 1;
					}
				}
				else if (__LIB_1__::func_871(&uLocal_158) > 750)
				{
					__LIB_0__::func_37(&uLocal_158);
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_158);
			}
			break;
		case 1:
			if (__LIB_0__::func_139(iLocal_40))
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_157) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (!__LIB_0__::func_75(&uLocal_158))
					{
						if (!__LIB_0__::func_572(iLocal_40, 0))
						{
							__LIB_1__::func_221(iLocal_40, 1, 1);
						}
						else if (__LIB_5__::func_777(iLocal_40, 1))
						{
							__LIB_1__::func_281(&iLocal_40, 1, 1);
							iLocal_33 = 2;
						}
					}
					else if (__LIB_1__::func_871(&uLocal_158) > 500)
					{
						__LIB_0__::func_37(&uLocal_158);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_158);
					if (__LIB_0__::func_572(iLocal_40, 0))
					{
						__LIB_1__::func_221(iLocal_40, 0, 1);
					}
				}
			}
			else
			{
				iLocal_33 = 0;
			}
			break;
		case 2:
			if (__LIB_0__::func_181())
			{
				if (__LIB_6__::func_843(65536))
				{
					StringCopy(&cVar0, "RBWCG_ALD_METJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBWCG_ALD_NOTJ", 24);
				}
			}
			else if (__LIB_1__::func_187(37))
			{
				StringCopy(&cVar0, "RBWCG_ALD_META", 24);
			}
			else
			{
				StringCopy(&cVar0, "RBWCG_ALD_NOTA", 24);
			}
			if (__LIB_12__::func_876(uParam0, &cVar0, 0))
			{
				Local_583.f_3 = iLocal_157;
				Local_583.f_4 = 21030;
				Local_583.f_7 = 12000;
				Local_608.f_3 = Global_35;
				Local_608.f_4 = 21030;
				Local_608.f_7 = 11000;
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_583);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_157, &Local_608);
				iLocal_33 = 3;
				__LIB_13__::func_345(16);
			}
			break;
	}
}

bool func_294(var uParam0)
{
	if (func_295(2))
	{
		return true;
	}
	if (iLocal_30 >= 5)
	{
		return true;
	}
	if (func_624(uParam0) && func_625(uParam0))
	{
		if (iLocal_27 == 0)
		{
			if (func_599(2, 1, "pl_checking_horse"))
			{
				if (func_612())
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
	return false;
}

bool func_295(int iParam0)
{
	return __LIB_0__::func_27(__LIB_0__::func_895(Global_1347702[31 /*49*/].f_15), iParam0);
}

void func_296(var uParam0)
{
	if (iLocal_30 == 3 || iLocal_30 == 4)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
	{
		switch (iLocal_27)
		{
			case 0:
				if ((func_611(iLocal_155, 0, &uLocal_469, &iLocal_497, 1, 0) || PED::IS_PED_BEING_JACKED(iLocal_155)) || func_626())
				{
					if (__LIB_12__::func_876(uParam0, "CG2BHAGGRO", 0))
					{
						func_627();
						__LIB_3__::func_319(iLocal_36[2]);
						if (bLocal_428 == 1)
						{
							__LIB_1__::func_951(&(Local_53[1 /*15*/].f_1));
						}
						iLocal_27 = 1;
						func_628(7);
					}
				}
				else if (PED::IS_PED_IN_COMBAT(iLocal_155, 0))
				{
					iLocal_27 = 2;
				}
				break;
			case 1:
				if ((!PED::IS_PED_IN_COMBAT(iLocal_155, 0) && !PED::_IS_PED_HOGTIED(iLocal_155)) && !PED::_IS_PED_LASSOED(iLocal_155))
				{
					TASK::TASK_COMBAT_PED(iLocal_155, Global_35, 0, 0);
				}
				break;
			case 2:
				if (!PED::IS_PED_IN_COMBAT(iLocal_155, 0) && !__LIB_0__::func_163(iLocal_155, 242628503))
				{
					func_629(0, 0);
				}
				break;
		}
		if (PED::_IS_PED_HOGTIED(iLocal_155) && ENTITY::_0x8DE41E9902E85756(iLocal_155))
		{
			if (((__LIB_0__::func_75(&uLocal_412) && __LIB_0__::func_265(&uLocal_412) > 7f) && iLocal_408 < 4) && __LIB_0__::func_665(Global_35, iLocal_155, 1, 1) <= 7f)
			{
				if (__LIB_12__::func_876(uParam0, "CG2STOLEPOSTER", 0))
				{
					iLocal_408++;
					__LIB_1__::func_148(&uLocal_412);
				}
			}
		}
		else if (PED::_IS_PED_HOGTIED(iLocal_155) || (PED::_IS_PED_LASSOED(iLocal_155) && !ENTITY::_0x8DE41E9902E85756(iLocal_155)))
		{
			if (!__LIB_0__::func_75(&uLocal_409))
			{
				__LIB_0__::func_268(&uLocal_409, 5f);
			}
			else if ((__LIB_0__::func_265(&uLocal_409) > 7f && iLocal_407 < 4) && __LIB_0__::func_665(Global_35, iLocal_155, 1, 1) <= 7f)
			{
				if (__LIB_12__::func_876(uParam0, "RBWCG_BHHOG", 0))
				{
					iLocal_407++;
					__LIB_1__::func_148(&uLocal_409);
				}
			}
		}
	}
}

void func_297(var uParam0)
{
	switch (iLocal_29)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_155) && iLocal_27 == 0)
			{
				if (iLocal_30 == 1)
				{
					__LIB_13__::func_319(iLocal_155, &Local_418, 0f, 0f, 0f, 0, 30f, 40f, 2000, 3000, 1000, 1075838976 /* Float: 2.5f */, 1, 1);
					if (PED::IS_PED_ON_MOUNT(Global_35) && CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_155, true, false), 0, 60f, 40f, 25f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
					}
					iLocal_29 = 1;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				__LIB_13__::func_319(iLocal_155, &Local_418, 0f, 0f, 0f, 0, 30f, 40f, 2000, 3000, 1000, 1075838976 /* Float: 2.5f */, 1, 1);
				if (PED::IS_PED_ON_MOUNT(Global_35) && CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_155, true, false), 0, 60f, 40f, 25f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
			}
			break;
	}
}

void func_298(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = -1;
	switch (iLocal_30)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false))
				{
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_36[2], "pl_mount_horse") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_36[2], "pl_mount_horse"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_36[2], "b_breakout", true, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_36[2], "pl_mount_horse", true);
						iLocal_30 = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && bLocal_428 == 1)
			{
				__LIB_9__::func_696(joaat("ARS_BLACK_WHITE_CHAIN_GANG"));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
			{
				if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_36[2]) >= 0.355f) && bLocal_428 == 0)
				{
					if (MAP::DOES_BLIP_EXIST(Local_53[1 /*15*/].f_2))
					{
						MAP::REMOVE_BLIP(&(Local_53[1 /*15*/].f_2));
					}
					__LIB_3__::func_459(iLocal_155, 1);
					__LIB_13__::func_312(iLocal_155, joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 1);
					__LIB_9__::func_696(joaat("ARS_BLACK_WHITE_CHAIN_GANG"));
					PED::SET_PED_CONFIG_FLAG(iLocal_155, 278, false);
					__LIB_3__::func_937(iLocal_155);
					MISC::_0x7FA58CED69405F9A(iLocal_155, 3);
					HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(iLocal_155);
					bLocal_428 = true;
					func_627();
					iLocal_30 = 5;
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_36[2]) >= 0.97f)
				{
					__LIB_3__::func_319(iLocal_36[2]);
					func_629(0, 1);
					__LIB_12__::func_883(uParam0, "RBWCG_RETRIEVE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_13__::func_89(uParam0, "RBWCG_RETRIEVE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_2__::func_29(1);
					__LIB_1__::func_309(-1, 0, 0, 0, 0);
					__LIB_1__::func_924();
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[1 /*15*/]))
					{
						TASK::_DELETE_SCENARIO_POINT(Local_53[1 /*15*/]);
					}
					iLocal_30 = 5;
				}
			}
			else if (bLocal_428 == 1)
			{
				__LIB_12__::func_883(uParam0, "RBWCG_RETRIEVE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_13__::func_89(uParam0, "RBWCG_RETRIEVE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_30 = 5;
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_406))
				{
					MAP::REMOVE_BLIP(&iLocal_406);
				}
				__LIB_3__::func_319(iLocal_36[2]);
				iLocal_30 = 6;
			}
			break;
		case 3:
			if ((TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[1 /*15*/]) && !PED::_IS_PED_USING_SCENARIO_POINT(Global_35, Local_53[1 /*15*/])) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (func_317())
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[iLocal_51 /*15*/]))
					{
						TASK::_DELETE_SCENARIO_POINT(Local_53[iLocal_51 /*15*/]);
					}
					func_318(func_311(iLocal_51));
					func_319();
					iLocal_51 = -1;
					func_627();
					if (!PED::IS_PED_IN_COMBAT(iLocal_155, Global_35))
					{
						TASK::TASK_MELEE(iLocal_155, Global_35, 0, 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
					}
					iLocal_30 = 4;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
			{
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(iLocal_155, 780511057))
				{
					TASK::TASK_COMBAT_PED(iLocal_155, Global_35, 0, 0);
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_406))
				{
					MAP::REMOVE_BLIP(&iLocal_406);
				}
				__LIB_3__::func_319(iLocal_36[2]);
				iLocal_30 = 6;
			}
			break;
		case 5:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_36[2]) >= 0.985f)
			{
				__LIB_3__::func_319(iLocal_36[2]);
				__LIB_1__::func_951(&(Local_53[1 /*15*/].f_1));
				func_629(0, 0);
				__LIB_12__::func_883(uParam0, "RBWCG_RETRIEVE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_13__::func_89(uParam0, "RBWCG_RETRIEVE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_2__::func_29(1);
				__LIB_1__::func_309(-1, 0, 0, 0, 0);
				__LIB_1__::func_924();
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[1 /*15*/]))
				{
					TASK::_DELETE_SCENARIO_POINT(Local_53[1 /*15*/]);
				}
			}
			else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iLocal_155)
			{
				__LIB_3__::func_319(iLocal_36[2]);
				__LIB_1__::func_951(&(Local_53[1 /*15*/].f_1));
				__LIB_12__::func_883(uParam0, "RBWCG_RETRIEVE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_13__::func_89(uParam0, "RBWCG_RETRIEVE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_2__::func_29(1);
				__LIB_1__::func_309(-1, 0, 0, 0, 0);
				__LIB_1__::func_924();
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[1 /*15*/]))
				{
					TASK::_DELETE_SCENARIO_POINT(Local_53[1 /*15*/]);
				}
			}
			else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_155, iLocal_36[2]))
			{
				__LIB_3__::func_319(iLocal_36[2]);
				__LIB_1__::func_951(&(Local_53[1 /*15*/].f_1));
				__LIB_12__::func_883(uParam0, "RBWCG_RETRIEVE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_13__::func_89(uParam0, "RBWCG_RETRIEVE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_2__::func_29(1);
				__LIB_1__::func_309(-1, 0, 0, 0, 0);
				__LIB_1__::func_924();
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_53[1 /*15*/]))
				{
					TASK::_DELETE_SCENARIO_POINT(Local_53[1 /*15*/]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				__LIB_9__::func_696(joaat("ARS_BLACK_WHITE_CHAIN_GANG"));
			}
			if ((((bLocal_428 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2])) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_36[2]) >= 0.38f) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_36[2]) < 0.79f)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_155, 1, 1) < 20f)
				{
					if (!__LIB_13__::func_311(512))
					{
						if (__LIB_12__::func_876(uParam0, "RBWCG_BHTAKE", 0))
						{
							__LIB_13__::func_345(512);
						}
					}
				}
			}
			if (func_642())
			{
				iLocal_51 = -1;
				func_318(2);
				__LIB_0__::func_268(&uLocal_412, 5f);
				if (MAP::DOES_BLIP_EXIST(iLocal_406))
				{
					MAP::REMOVE_BLIP(&iLocal_406);
				}
				if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				}
				func_628(8);
				if (!func_307())
				{
					__LIB_12__::func_883(uParam0, "RBWCG_OTHERPOS", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				func_319();
				__LIB_1__::func_979(1);
				iLocal_30 = 6;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_155, 1, 1) > 150f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
				{
					__LIB_2__::func_426(&iLocal_155);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_156) && !__LIB_0__::func_394(Global_35, iLocal_156, 0))
						{
							__LIB_2__::func_426(&iLocal_156);
						}
						else
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_156);
						}
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_406))
					{
						MAP::REMOVE_BLIP(&iLocal_406);
					}
					func_318(2);
					__LIB_1__::func_979(1);
					__LIB_0__::func_769();
					iLocal_30 = 6;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_155))
				{
					if (!func_645())
					{
						func_646(uParam0);
						func_647();
						if (!bLocal_427)
						{
							iVar0 = func_585(&iLocal_155, &(Local_219[0 /*21*/]), 15f, &Local_241, 0f, 1, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							if (iVar0 == 0)
							{
								if (__LIB_0__::func_181())
								{
									sVar1 = "CG2BHASKPJ";
								}
								else
								{
									sVar1 = "CG2BHASKP";
								}
								if (__LIB_12__::func_876(uParam0, sVar1, 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_155, 8000, 0, 51, 0);
									TASK::_0xE7FA07624574B79A(iLocal_155, Global_35, 1, 2, 1.75f, 1, 0, 0, 0);
									func_629(1, 0);
									func_648();
									__LIB_3__::func_923(iLocal_155, 1088421888 /* Float: 7f */, 1, 0);
									func_610(&iLocal_155);
									bLocal_427 = true;
								}
							}
							else if (iVar0 == 1)
							{
								if (__LIB_0__::func_181())
								{
									sVar2 = "CG2BHTHREATPJ";
								}
								else
								{
									sVar2 = "CG2BHTHREATP";
								}
								if (__LIB_12__::func_876(uParam0, sVar2, 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_155, 8000, 0, 51, 0);
									TASK::_0xE7FA07624574B79A(iLocal_155, Global_35, 1, 2, 1.75f, 1, 0, 0, 0);
									func_629(1, 0);
									func_648();
									__LIB_3__::func_923(iLocal_155, 1088421888 /* Float: 7f */, 1, 0);
									func_610(&iLocal_155);
									bLocal_427 = true;
								}
							}
						}
					}
					else
					{
						func_648();
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false))
						{
							__LIB_3__::func_319(iLocal_36[2]);
						}
						bLocal_427 = true;
					}
				}
				else
				{
					bLocal_427 = true;
				}
			}
			break;
		case 6:
			break;
	}
	if (func_649())
	{
		if (iLocal_30 != 6)
		{
			__LIB_3__::func_319(iLocal_36[2]);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_156))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_156, Global_35, 3, 0, -1f, -1, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_156);
			}
			iLocal_30 = 6;
		}
	}
}

bool func_299(var uParam0)
{
	if (iLocal_31 == 2)
	{
		return true;
	}
	if (__LIB_13__::func_311(2))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_397) || PED::IS_PED_FLEEING(iLocal_397))
		{
			iLocal_31 = 2;
		}
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_397) || func_295(8))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_397))
	{
		iLocal_397 = __LIB_12__::func_885(uParam0, iLocal_20, vLocal_438, 0, 1, 1, 1, 1, 1, 1, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_397) && !ENTITY::IS_ENTITY_DEAD(iLocal_397))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_397, true, true);
		__LIB_12__::func_875(uParam0, iLocal_397, "CG1_FIGHTER", 1);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_397, vLocal_438, fLocal_441, true, false, true);
		TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_397, joaat("WORLD_HUMAN_LEAN_BACK_WALL"), 0, false, joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D"), -1f, false);
		TASK::_0x0000A8ACDC2E1B6A(iLocal_397, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_397, true);
		LAW::_0xFFEBE5AA96BC2E4E(iLocal_397, joaat("CRIME_ASSAULT"), 1);
		LAW::_0xFFEBE5AA96BC2E4E(iLocal_397, joaat("CRIME_LASSO_ASSAULT"), 1);
		LAW::_0xFFEBE5AA96BC2E4E(iLocal_397, joaat("CRIME_THREATEN"), 1);
		LAW::_0xFFEBE5AA96BC2E4E(iLocal_397, joaat("CRIME_UNARMED_ASSAULT"), 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 174, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 72, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 124, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 225, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 317, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 277, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_397, 315, true);
		__LIB_1__::func_991(iLocal_397, 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_397, 16);
		__LIB_4__::func_228(&uLocal_554);
		__LIB_1__::func_393(&uLocal_554, 1);
		__LIB_1__::func_403(&uLocal_554, 0);
		PED::_0xFFA1594703ED27CA(iLocal_397, 1);
		PED::_UPDATE_PED_VARIATION(iLocal_397, false, true, true, true, false);
		return true;
	}
	return false;
}

void func_300(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	vector3 vVar5;
	char* sVar8;
	struct<14> Var9;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_397))
	{
		PED::SET_PED_RESET_FLAG(iLocal_397, 53, true);
	}
	iVar0 = -1;
	switch (iLocal_31)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_397))
			{
				if (bLocal_455)
				{
					if (((((((__LIB_6__::func_903("CG2ASKPOLITE") || __LIB_8__::func_684("CG2ASKPOLITE")) || __LIB_6__::func_903("CG2ASKPOLITEJ")) || __LIB_8__::func_684("CG2ASKPOLITEJ")) || __LIB_6__::func_903("CG2ASKPOLITE2")) || __LIB_8__::func_684("CG2ASKPOLITE2")) || __LIB_6__::func_903("CG2ASKPOLITE2J")) || __LIB_8__::func_684("CG2ASKPOLITE2J"))
					{
						if (__LIB_2__::func_466(&(Local_184[1 /*17*/]), 1, 0))
						{
							__LIB_3__::func_515(&(Local_184[1 /*17*/]), 0, 0);
						}
					}
					else
					{
						if (!__LIB_2__::func_466(&(Local_184[1 /*17*/]), 1, 0))
						{
							__LIB_3__::func_515(&(Local_184[1 /*17*/]), 1, 0);
						}
						if (iLocal_456 <= 1)
						{
							if (!__LIB_2__::func_466(&(Local_184[0 /*17*/]), 1, 0))
							{
								__LIB_3__::func_515(&(Local_184[0 /*17*/]), 1, 0);
							}
						}
					}
					if (__LIB_2__::func_466(&(Local_184[0 /*17*/]), 1, 0) && iLocal_456 >= 2)
					{
						__LIB_3__::func_515(&(Local_184[0 /*17*/]), 0, 0);
					}
				}
				iVar0 = func_585(&iLocal_397, &(Local_162[0 /*21*/]), 6f, &Local_184, 0f, 1, 0, "", __LIB_2__::func_340(2, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar0 == 0)
				{
					if (iLocal_456 == 0)
					{
						if (__LIB_0__::func_181())
						{
							sVar1 = "CG2ASKPOLITEJ";
						}
						else
						{
							sVar1 = "CG2ASKPOLITE";
						}
					}
					else if (__LIB_0__::func_181())
					{
						sVar1 = "CG2ASKPOLITEJ2";
					}
					else
					{
						sVar1 = "CG2ASKPOLITE2";
					}
					if (__LIB_12__::func_876(uParam0, sVar1, 0))
					{
						Local_633.f_3 = Global_35;
						Local_633.f_19 = 4;
						Local_633.f_20 = 4;
						Local_633.f_21 = 4;
						Local_633.f_22 = 4;
						Local_633.f_7 = 12000;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_397, &Local_633);
						TASK::_0xE7FA07624574B79A(iLocal_397, Global_35, 1, 2, 9f, 1, 0, 0, 0);
						func_628(2);
						bLocal_455 = true;
						iLocal_456++;
						if (iLocal_456 <= 1)
						{
							__LIB_2__::func_451(&(Local_162[0 /*21*/]), 0);
							__LIB_3__::func_515(&(Local_184[0 /*17*/]), 0, 0);
						}
					}
				}
				else if (iVar0 == 1)
				{
					if (__LIB_0__::func_181())
					{
						sVar2 = "CG2ASKTHREATJ";
					}
					else
					{
						sVar2 = "CG2ASKTHREAT";
					}
					if (__LIB_12__::func_876(uParam0, sVar2, 0))
					{
						PED::_0x802092B07E3B1EEA(iLocal_397, Global_36, 2);
						__LIB_1__::func_148(&uLocal_683);
						func_628(3);
						Local_633.f_3 = Global_35;
						Local_633.f_19 = 4;
						Local_633.f_20 = 4;
						Local_633.f_21 = 4;
						Local_633.f_22 = 4;
						Local_633.f_7 = 7500;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_397, &Local_633);
						iLocal_398 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_397);
						func_593();
						__LIB_13__::func_345(2);
						iLocal_31 = 1;
					}
				}
				if (PED::_IS_PED_HOGTIED(iLocal_397))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_397, 1, 1);
					iLocal_31 = 2;
				}
				if (func_611(iLocal_397, 0, &uLocal_554, &iLocal_497, 1, 0))
				{
					if (((((((__LIB_6__::func_903("CG2ASKPOLITE") || __LIB_8__::func_684("CG2ASKPOLITE")) || __LIB_6__::func_903("CG2ASKPOLITEJ")) || __LIB_8__::func_684("CG2ASKPOLITEJ")) || __LIB_6__::func_903("CG2ASKPOLITE2")) || __LIB_8__::func_684("CG2ASKPOLITE2")) || __LIB_6__::func_903("CG2ASKPOLITE2J")) || __LIB_8__::func_684("CG2ASKPOLITE2J"))
					{
						__LIB_6__::func_900("CG2ASKPOLITE", 0, 0);
						__LIB_6__::func_900("CG2ASKPOLITEJ", 0, 0);
						__LIB_6__::func_900("CG2ASKPOLITE2", 0, 0);
						__LIB_6__::func_900("CG2ASKPOLITE2J", 0, 0);
					}
					if (iLocal_497 == 8)
					{
						if (__LIB_2__::func_401(iLocal_397, 1, 1, 0, 0, 0))
						{
							if (__LIB_0__::func_181())
							{
								sVar3 = "CG2AIMTHREATJ";
							}
							else
							{
								sVar3 = "CG2AIMTHREAT";
							}
							if (__LIB_12__::func_876(uParam0, sVar3, 0))
							{
								PED::_0xEEED8FAFEC331A70(iLocal_397, Global_36, 1);
								Local_633.f_3 = Global_35;
								Local_633.f_19 = 4;
								Local_633.f_20 = 4;
								Local_633.f_7 = 7500;
								_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_397, &Local_633);
								__LIB_6__::func_699(&(Local_162[0 /*21*/]), &Local_184);
								__LIB_13__::func_345(2);
								iLocal_31 = 2;
							}
						}
						else
						{
							PED::_0x802092B07E3B1EEA(iLocal_397, Global_36, 2);
							Local_633.f_3 = Global_35;
							Local_633.f_19 = 4;
							Local_633.f_20 = 4;
							Local_633.f_7 = 7500;
							_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_397, &Local_633);
							__LIB_6__::func_699(&(Local_162[0 /*21*/]), &Local_184);
							func_628(3);
							iLocal_398 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_397);
							__LIB_13__::func_345(2);
							iLocal_31 = 1;
						}
					}
					else if (iLocal_497 == 2)
					{
						if (__LIB_2__::func_401(iLocal_397, 1, 1, 0, 0, 0))
						{
							if (__LIB_0__::func_181())
							{
								sVar4 = "CG2AIMTHREATJ";
							}
							else
							{
								sVar4 = "CG2AIMTHREAT";
							}
							if (__LIB_12__::func_876(uParam0, sVar4, 0))
							{
								PED::_0x802092B07E3B1EEA(iLocal_397, Global_36, 2);
								PED::SET_PED_CONFIG_FLAG(iLocal_397, 6, false);
								Local_633.f_3 = Global_35;
								Local_633.f_19 = 4;
								Local_633.f_20 = 4;
								Local_633.f_7 = 7500;
								_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_397, &Local_633);
								__LIB_6__::func_699(&(Local_162[0 /*21*/]), &Local_184);
								__LIB_13__::func_345(2);
								iLocal_31 = 2;
							}
						}
						else
						{
							__LIB_6__::func_699(&(Local_162[0 /*21*/]), &Local_184);
							func_628(3);
							iLocal_398 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_397);
							__LIB_13__::func_345(2);
							iLocal_31 = 1;
						}
					}
					else
					{
						__LIB_6__::func_699(&(Local_162[0 /*21*/]), &Local_184);
						func_628(3);
						iLocal_398 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_397);
						__LIB_13__::func_345(2);
						iLocal_31 = 1;
					}
				}
				if (func_601(&iLocal_397, &vVar5))
				{
					__LIB_6__::func_699(&(Local_162[0 /*21*/]), &Local_184);
					PED::_0xEEED8FAFEC331A70(iLocal_397, vVar5, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_397, 6, false);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_397, vVar5, 3, 257, 300f, -1, 0);
					iLocal_31 = 2;
				}
			}
			else
			{
				iLocal_31 = 2;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_397))
			{
				if (((((!PED::IS_PED_IN_COMBAT(iLocal_397, 0) && !TASK::_0x0C3CB2E600C8977D(iLocal_397, 1)) && func_659()) && !PED::_IS_PED_LASSOED(iLocal_397)) && !PED::_IS_PED_HOGTIED(iLocal_397)) && !TASK::_0x916B8E075ABC8B4E(iLocal_397, 1))
				{
					if ((__LIB_0__::func_75(&uLocal_683) && __LIB_0__::func_265(&uLocal_683) > 1.25f) || !__LIB_0__::func_75(&uLocal_683))
					{
						TASK::TASK_COMBAT_PED(iLocal_397, Global_35, 16777216, 0);
					}
				}
				if (PED::_IS_PED_HOGTIED(iLocal_397))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_397, 1, 1);
					iLocal_31 = 2;
				}
				if (__LIB_2__::func_401(iLocal_397, 1, 1, 0, 0, 0) || PED::IS_PED_FLEEING(iLocal_397))
				{
					if (__LIB_8__::func_684("RBWCG_FTATTACK"))
					{
						__LIB_6__::func_900("RBWCG_FTATTACK", 0, 0);
					}
					if (__LIB_0__::func_181())
					{
						sVar8 = "CG2AIMTHREATJ";
					}
					else
					{
						sVar8 = "CG2AIMTHREAT";
					}
					if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, sVar8, 0))
					{
						PED::_0xEEED8FAFEC331A70(iLocal_397, Global_36, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_397, 6, false);
						iLocal_31 = 2;
					}
				}
				else if (PED::IS_PED_IN_COMBAT(iLocal_397, Global_35))
				{
					if (!__LIB_0__::func_75(&uLocal_452))
					{
						__LIB_0__::func_268(&uLocal_452, 7f);
					}
					else if (__LIB_0__::func_264(&uLocal_452) >= 7.5f)
					{
						if ((!__LIB_5__::func_463() && !TASK::_0xF330A5C062B29BED(iLocal_397)) && __LIB_12__::func_876(uParam0, "RBWCG_FTATTACK", 0))
						{
							__LIB_1__::func_148(&uLocal_452);
						}
					}
					if (__LIB_8__::func_684("RBWCG_FTATTACK"))
					{
						if (TASK::_0xF330A5C062B29BED(iLocal_397))
						{
							__LIB_6__::func_900("RBWCG_FTATTACK", 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_31 = 2;
			}
			if (iLocal_458 == -1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					Var9.f_6 = -1082130432;
					Var9.f_7 = -1082130432;
					Var9.f_8 = -1082130432;
					Var9.f_9 = -1082130432;
					Var9.f_10 = -1082130432;
					Var9.f_11 = -1082130432;
					Var9.f_12 = -1;
					Var9.f_13 = -1;
					Var9.f_1 = iLocal_397;
					Var9 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
					iLocal_458 = EVENT::_CREATE_SHOCKING_EVENT(&Var9);
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_684("RBWCG_FTATTACK"))
			{
				__LIB_6__::func_900("RBWCG_FTATTACK", 0, 0);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_398))
			{
				MAP::REMOVE_BLIP(&iLocal_398);
			}
			if (iLocal_458 != -1)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_458);
				iLocal_458 = -1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_397) && __LIB_0__::func_665(Global_35, iLocal_397, 1, 1) > 100f)
			{
				__LIB_2__::func_788(&iLocal_397, 1, 0, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_397))
			{
				if (PED::IS_PED_FLEEING(iLocal_397) && !PED::_IS_PED_HOGTIED(iLocal_397))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_397, 1, 1) < 20f)
					{
						if (!__LIB_0__::func_75(&uLocal_449))
						{
							__LIB_0__::func_268(&uLocal_449, 7f);
						}
						else if (__LIB_0__::func_264(&uLocal_449) > 10f)
						{
							if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "RBWCG_FTFLEE", 0))
							{
								__LIB_1__::func_148(&uLocal_449);
							}
						}
					}
				}
				else if (PED::_IS_PED_HOGTIED(iLocal_397))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_397, 1, 1) < 20f)
					{
						if (!__LIB_0__::func_75(&uLocal_449))
						{
							__LIB_0__::func_268(&uLocal_449, 7f);
						}
						else if (__LIB_0__::func_264(&uLocal_449) > 10f)
						{
							if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "RBWCG_FTHOG", 0))
							{
								__LIB_1__::func_148(&uLocal_449);
							}
						}
					}
				}
				else if ((!PED::IS_PED_FLEEING(iLocal_397) && !PED::_IS_PED_HOGTIED(iLocal_397)) && !TASK::_0x916B8E075ABC8B4E(iLocal_397, 1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_397, Global_35, 3, 257, 300f, -1, 0);
				}
			}
			break;
	}
}

bool func_301(var uParam0)
{
	int iVar0;
	if (!__LIB_3__::func_746(iLocal_399))
	{
		__LIB_13__::func_297(&iLocal_399, 1216.19f, -1425.35f, 68.96f, 4f);
		iVar0 = 45;
		if (!__LIB_1__::func_565(&uLocal_400))
		{
			__LIB_3__::func_414(&uLocal_400, 1216.19f, -1425.35f, 68.96f, 4f, 1, iVar0, 0);
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_401))
	{
		iLocal_401 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_13__::func_298(), __LIB_1__::func_977(), __LIB_13__::func_299(), "RBWCG3 Campfire nav blocker");
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_401, 7))
		{
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_402))
	{
		iLocal_402 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_13__::func_300(), __LIB_13__::func_301(), __LIB_13__::func_302(), "RBWCG3 Tent L nav blocker");
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_402, 7))
		{
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_403))
	{
		iLocal_403 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_13__::func_303(), __LIB_13__::func_304(), __LIB_13__::func_302(), "RBWCG3 Tent R nav blocker");
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_403, 7))
		{
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_404))
	{
		iLocal_404 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_13__::func_305(), __LIB_1__::func_977(), __LIB_13__::func_306(), "RBWCG3 Barrel nav blocker");
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_404, 7))
		{
		}
	}
	if (((((__LIB_13__::func_313() && __LIB_3__::func_746(iLocal_399)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_401)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_402)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_403)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_404))
	{
		return true;
	}
	return false;
}

void func_302()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_448);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_19);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_22);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_23);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_15[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_15[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
}

bool func_303()
{
	if (iLocal_30 == 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_155, 1, 1) < 75f)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_307()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_295(func_311(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_308()
{
	if (__LIB_0__::func_895(Global_1347702[30 /*49*/].f_15) == 2)
	{
		return true;
	}
	return false;
}

void func_310(var uParam0, int iParam1)
{
	float fVar0;
	if (!func_295(func_311(iParam1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		{
			return;
		}
		if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
		{
			return;
		}
		fVar0 = 10f;
		if (iParam1 == 1)
		{
			fVar0 = (fVar0 + 12f);
		}
		else if (iParam1 == 3)
		{
			fVar0 = (fVar0 + 5f);
		}
		if (iParam1 == 0)
		{
			if (iLocal_26 >= 1)
			{
				return;
			}
		}
		if (iParam1 == 1)
		{
			if (bLocal_428 == 1)
			{
				return;
			}
		}
		if ((__LIB_0__::func_665(Global_35, uParam0->f_1, 1, 1) <= fVar0 && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_1)) || ((__LIB_13__::func_184(&uLocal_415, uParam0->f_1, 0f, 1069547520 /* Float: 1.5f */) && __LIB_0__::func_665(Global_35, uParam0->f_1, 1, 1) <= 60f) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_1)))
		{
			uParam0->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(2098831270, uParam0->f_1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_2, "RBWCG1_POSTER");
			MAP::SET_BLIP_SPRITE(uParam0->f_2, joaat("BLIP_PROC_BOUNTY_POSTER"), true);
			MAP::_BLIP_SET_MODIFIER(uParam0->f_2, 580546400);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_2));
	}
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
	}
	return 33;
}

bool func_312(var uParam0)
{
	if (__LIB_0__::func_94(Global_35, uParam0->f_4, 1) < 30f)
	{
		if (iLocal_30 == 0 && iLocal_27 == 0)
		{
			iLocal_30 = 1;
		}
		return true;
	}
	return false;
}

bool func_313(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = false;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		if ((func_680(uParam0, iParam1) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && !TASK::_0x508F5053E3F6F0C4(Global_35, uParam0->f_4 + Vector(1.1f, 0.9f, 0.1f), 20f))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_1, 1, 48, 51, 0);
		}
		if (iParam1 == 3)
		{
			if (iLocal_31 != 2 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
			{
				if (TASK::_IS_SCENARIO_POINT_ACTIVE(*uParam0))
				{
					TASK::_SET_SCENARIO_POINT_ACTIVE(*uParam0, false);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
			{
				if (!TASK::_IS_SCENARIO_POINT_ACTIVE(*uParam0))
				{
					TASK::_SET_SCENARIO_POINT_ACTIVE(*uParam0, true);
				}
			}
			else
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(*uParam0, true);
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (__LIB_1__::func_205(Global_35, uParam0->f_10, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			}
		}
		if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, *uParam0))
		{
			switch (iParam1)
			{
				case 3:
					func_628(4);
					break;
				case 2:
					func_628(5);
					break;
				case 4:
					func_628(6);
					break;
			}
			return true;
		}
	}
	return false;
}

void func_315(var uParam0)
{
	if (func_295(1) && (iLocal_26 == 0 || iLocal_26 == 3))
	{
		return;
	}
	switch (iLocal_26)
	{
		case 0:
			if (func_313(&(Local_53[0 /*15*/]), 0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_53[0 /*15*/].f_2))
				{
					MAP::REMOVE_BLIP(&(Local_53[0 /*15*/].f_2));
				}
				iLocal_51 = 0;
				iLocal_52 = __LIB_1__::func_614(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 0, 0);
				Local_53[0 /*15*/].f_9 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_53[0 /*15*/].f_4);
				func_628(1);
				iLocal_26 = 1;
			}
			break;
		case 1:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_9__::func_749(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG")))
			{
				if (func_317())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_134) && !ENTITY::IS_ENTITY_DEAD(iLocal_134))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false))
						{
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_36[0], "pl_Arthur_chat"))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_36[0], "pl_Arthur_chat"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_36[0], "pl_Arthur_chat", true);
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_36[0], "pl_reading_newspaper");
									_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_583);
									func_318(func_311(0));
									__LIB_13__::func_345(256);
									func_319();
									__LIB_13__::func_296(Local_53[0 /*15*/].f_3);
									iLocal_51 = -1;
									iLocal_26 = 2;
								}
							}
						}
						else
						{
							func_318(func_311(0));
							__LIB_13__::func_345(256);
							func_319();
							__LIB_13__::func_296(Local_53[0 /*15*/].f_3);
							iLocal_51 = -1;
							iLocal_26 = 2;
						}
					}
					else
					{
						__LIB_13__::func_345(256);
						func_318(func_311(0));
						func_319();
						__LIB_13__::func_296(Local_53[0 /*15*/].f_3);
						iLocal_51 = -1;
						iLocal_26 = 2;
					}
				}
				else
				{
					if (iLocal_51 == 0)
					{
						iLocal_26 = 0;
					}
					__LIB_13__::func_296(3);
					iLocal_51 = -1;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_665(Global_35, iLocal_134, 1, 1) > 7f || (INTERIOR::IS_VALID_INTERIOR(Local_53[0 /*15*/].f_9) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != Local_53[0 /*15*/].f_9))
			{
				if (func_686())
				{
					if (__LIB_6__::func_904())
					{
						__LIB_5__::func_20(0, 0);
					}
					TASK::_DELETE_SCENARIO_POINT(Local_53[0 /*15*/]);
					iLocal_26 = 3;
				}
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_36[0], "s_reading_newspaper", 1))
			{
				if (func_686())
				{
					if (__LIB_6__::func_904())
					{
						__LIB_5__::func_20(0, 0);
					}
					TASK::_DELETE_SCENARIO_POINT(Local_53[0 /*15*/]);
					iLocal_26 = 3;
				}
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false))
			{
				if (__LIB_6__::func_904())
				{
					__LIB_5__::func_20(0, 0);
				}
				TASK::_DELETE_SCENARIO_POINT(Local_53[0 /*15*/]);
				iLocal_26 = 3;
			}
			break;
		case 3:
			break;
	}
}

bool func_317()
{
	if (__LIB_1__::func_614(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 0, 0) > iLocal_52)
	{
		return true;
	}
	return false;
}

void func_318(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1347702[31 /*49*/].f_15);
	__LIB_1__::func_683(&iVar0, iParam0);
	__LIB_1__::func_532(Global_1347702[31 /*49*/].f_15, iVar0);
	if (func_295(iParam0))
	{
	}
}

void func_319()
{
	int iVar0;
	int iVar1;
	iVar1 = 5;
	if (func_295(32))
	{
		iVar1 = 4;
		iVar0 = (func_689() - 1);
	}
	else
	{
		iVar0 = func_689();
	}
	uLocal_35 = __LIB_5__::func_785("RBWCG2", MISC::_CREATE_VAR_STRING(2, "RBWCG1_POSTCOUNT", iVar0, iVar1), joaat("TOAST_LOG_BLIPS"), joaat("BLIP_RC_CHAIN_GANG"), 4000, 0, 0, 0, 0, 1, 1);
	uLocal_35 = uLocal_35;
}

bool func_322(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	fVar0 = uParam0->f_745;
	bVar1 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_13__::func_307(uParam0, &bVar2, &fVar3, &uVar4, &uVar5, &fVar6);
			if (__LIB_9__::func_419(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), uVar5, uVar4, fVar3, bVar2, fVar6, 0, 0, 1, 1, 1))
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

int func_337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_721(uParam4);
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

void func_363()
{
	__LIB_2__::func_624(&Local_298, 0, 1, 1, 0);
	__LIB_2__::func_624(&Local_338, 0, 1, 1, 0);
}

void func_379(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_805(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_805(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_805(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_805(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_805(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_805(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_805(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_805(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_805(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_805(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_805(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_805(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_805(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_807();
						func_808(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_805(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_379(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_379(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_379(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_805(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_805(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_842();
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
							func_805(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_479(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_700(iParam1);
	if (iVar0 == 2 || iVar0 == 8)
	{
		return true;
	}
	return false;
}

bool func_498(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (func_611(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_25(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

int func_570(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_131[iParam1]))
	{
		return 1;
	}
	StringCopy(&cVar0, "BWCG_PRISONER", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (__LIB_3__::func_329(MISC::GET_HASH_KEY(&cVar0)))
	{
		iLocal_131[iParam1] = __LIB_13__::func_308(&cVar0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_131[iParam1]))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[30 /*49*/].f_42, false))
		{
			return 0;
		}
		STREAMING::REQUEST_MODEL(iLocal_15[iParam1], false);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_15[iParam1]))
		{
			return 0;
		}
		else
		{
			iLocal_131[iParam1] = __LIB_12__::func_885(uParam0, iLocal_15[iParam1], vLocal_41[iParam1 /*3*/], fLocal_48[iParam1], 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_131[iParam1]))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_131[iParam1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_131[iParam1], true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_131[iParam1], true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_131[iParam1], false);
		PED::SET_PED_CONFIG_FLAG(iLocal_131[iParam1], 186, false);
		if (!PED::IS_PED_FLEEING(iLocal_131[iParam1]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_131[iParam1], joaat("REL_PLAYER_ALLY"));
		}
		__LIB_13__::func_283(&(iLocal_131[iParam1]));
		if (iParam1 == 0)
		{
			__LIB_13__::func_315(&(iLocal_131[iParam1]));
			__LIB_12__::func_875(uParam0, iLocal_131[iParam1], "RBWCG_Black", 1);
		}
		else
		{
			__LIB_13__::func_315(&(iLocal_131[iParam1]));
			__LIB_12__::func_875(uParam0, iLocal_131[iParam1], "RBWCG_White", 1);
		}
		if (__LIB_0__::func_94(iLocal_131[iParam1], vLocal_41[iParam1 /*3*/], 1) > 1f && !__LIB_0__::func_163(iLocal_131[iParam1], 242628503))
		{
			if (!PED::IS_PED_FLEEING(iLocal_131[iParam1]))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_582);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_582);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_41[iParam1 /*3*/], 1f, -1, 0.25f, 4, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, fLocal_48[iParam1], 0);
				if (iParam1 == 0)
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SIT_GROUND"), -1, true, 0, -1f, false);
				}
				else
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SIT_BACK_EXHAUSTED"), -1, true, 0, -1f, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_582);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_131[iParam1], iLocal_582);
			}
		}
		else if (!PED::_IS_PED_USING_SCENARIO_HASH(iLocal_131[iParam1], joaat("WORLD_HUMAN_SIT_GROUND")) && !__LIB_0__::func_163(iLocal_131[iParam1], 242628503))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_131[iParam1], joaat("WORLD_HUMAN_SIT_GROUND"), -1, false, 0, -1f, false);
		}
		__LIB_1__::func_393(&uLocal_498, 1);
		__LIB_10__::func_590(&uLocal_498, 1);
		PED::_0x9851DE7AEC10B4E1(vLocal_41[0 /*3*/], 25f, 1, 0);
		return 1;
	}
	return 0;
}

bool func_571(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (func_611((*iParam0)[*uParam3], 0, uParam1, iParam2, 0, 0))
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

void func_572(var uParam0)
{
	char cVar0[16];
	if (iLocal_468 == 0)
	{
		func_1011();
		iLocal_468 = 1;
	}
	else
	{
		if (func_1012())
		{
			if (__LIB_2__::func_466(&(Local_298[0 /*17*/]), 0, 0))
			{
				__LIB_3__::func_515(&(Local_298[0 /*17*/]), 0, 0);
			}
			if (__LIB_2__::func_466(&(Local_338[0 /*17*/]), 0, 0))
			{
				__LIB_3__::func_515(&(Local_338[0 /*17*/]), 0, 0);
			}
		}
		else
		{
			if (!__LIB_2__::func_466(&(Local_298[0 /*17*/]), 0, 0))
			{
				__LIB_3__::func_515(&(Local_298[0 /*17*/]), 1, 0);
			}
			if (!__LIB_2__::func_466(&(Local_338[0 /*17*/]), 0, 0))
			{
				__LIB_3__::func_515(&(Local_338[0 /*17*/]), 1, 0);
			}
		}
		if (func_585(&(iLocal_131[0]), &(Local_276[0 /*21*/]), 5f, &Local_298, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) >= 0)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "CG1_ILO_B_JOHN", 16);
				}
				else
				{
					StringCopy(&cVar0, "CG1_ILO_B_ARTH", 16);
				}
				if (__LIB_12__::func_876(uParam0, &cVar0, 0))
				{
					__LIB_3__::func_515(&(Local_298[0 /*17*/]), 0, 0);
					__LIB_13__::func_345(4);
				}
			}
		}
		if (func_585(&(iLocal_131[1]), &(Local_316[0 /*21*/]), 5f, &Local_338, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) >= 0)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "CG1_ILO_W_JOHN", 16);
				}
				else
				{
					StringCopy(&cVar0, "CG1_ILO_W_ARTH", 16);
				}
				if (__LIB_12__::func_876(uParam0, &cVar0, 0))
				{
					__LIB_3__::func_515(&(Local_338[0 /*17*/]), 0, 0);
					__LIB_13__::func_345(8);
				}
			}
		}
	}
	if (((__LIB_0__::func_94(iLocal_131[1], Global_36, 1) <= 7f && !ENTITY::IS_ENTITY_DEAD(iLocal_131[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_131[1])) && !func_1013())
	{
		if (func_689() <= 0)
		{
			if (iLocal_464 < 7)
			{
				if (!__LIB_0__::func_75(&uLocal_461))
				{
					__LIB_0__::func_268(&uLocal_461, 12f);
				}
				else if (__LIB_0__::func_264(&uLocal_461) >= 16f)
				{
					if (iLocal_464 == 0)
					{
						StringCopy(&cVar0, "CG1ASKA", 16);
					}
					else if (bLocal_465)
					{
						StringCopy(&cVar0, "CG1ASKB", 16);
					}
					else
					{
						StringCopy(&cVar0, "CG1ASKB_BLCK", 16);
					}
					if (__LIB_12__::func_876(uParam0, &cVar0, 0))
					{
						__LIB_1__::func_148(&uLocal_461);
						iLocal_464++;
						bLocal_465 = !bLocal_465;
						Local_658.f_3 = Global_35;
						Local_658.f_19 = 4;
						Local_658.f_20 = 4;
						Local_658.f_7 = 7500;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_131[1], &Local_658);
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_131[0], &Local_658);
					}
				}
				else if ((__LIB_8__::func_684("CG1ASKA") || __LIB_8__::func_684("CG1ASKB")) || __LIB_8__::func_684("CG1ASKB_BLCK"))
				{
					__LIB_1__::func_148(&uLocal_461);
				}
			}
		}
		else if (iLocal_466 < 2)
		{
			if (!bLocal_467)
			{
				if (!__LIB_0__::func_75(&uLocal_461))
				{
					__LIB_0__::func_268(&uLocal_461, 12f);
				}
				else if (__LIB_0__::func_264(&uLocal_461) >= 16f)
				{
					if (iLocal_466 <= 0)
					{
						if (__LIB_0__::func_181())
						{
							StringCopy(&cVar0, "CG1_RET_W_JOHN", 16);
						}
						else
						{
							StringCopy(&cVar0, "CG1_RET_W_ARTH", 16);
						}
					}
					else if (__LIB_0__::func_181())
					{
						StringCopy(&cVar0, "CG1_RET_B_JOHN", 16);
					}
					else
					{
						StringCopy(&cVar0, "CG1_RET_B_ARTH", 16);
					}
					if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, &cVar0, 0))
					{
						__LIB_1__::func_148(&uLocal_461);
						iLocal_466++;
						bLocal_467 = true;
						Local_658.f_3 = Global_35;
						Local_658.f_19 = 4;
						Local_658.f_20 = 4;
						Local_658.f_7 = 7500;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_131[1], &Local_658);
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_131[0], &Local_658);
					}
				}
				else if (((((((__LIB_8__::func_684("CG1_RET_W_JOHN") || __LIB_8__::func_684("CG1_RET_W_ARTH")) || __LIB_8__::func_684("CG1_RET_B_JOHN")) || __LIB_8__::func_684("CG1_RET_B_ARTH")) || __LIB_8__::func_684("CG1_ILO_B_ARTH")) || __LIB_8__::func_684("CG1_ILO_B_JOHN")) || __LIB_8__::func_684("CG1_ILO_W_ARTH")) || __LIB_8__::func_684("CG1_ILO_W_JOHN"))
				{
					__LIB_1__::func_148(&uLocal_461);
				}
			}
		}
	}
	else if (__LIB_0__::func_94(iLocal_131[1], Global_36, 1) > 50f)
	{
		if (bLocal_467 == 1)
		{
			bLocal_467 = false;
		}
	}
}

void func_573()
{
	__LIB_2__::func_624(&Local_298, 0, 1, 1, 0);
}

void func_574()
{
	__LIB_2__::func_624(&Local_338, 0, 1, 1, 0);
}

bool func_576(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_131[iVar1]) && !PED::IS_PED_FLEEING(iLocal_131[iVar1]))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_131[iVar1], 16896, false);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_131[iVar1], false, 0, false);
			PED::_0xEEED8FAFEC331A70(iLocal_131[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, false, false), 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_131[iVar1], iParam0, 3, 257, 250f, -1, 0);
			TASK::_0xE8F1A5B4CED3725A(iLocal_131[iVar1], 1370.03f, -1353f, 76.67f, -1082130432 /* Float: -1f */);
			TASK::_0xE8F1A5B4CED3725A(iLocal_131[iVar1], 1333.26f, -1307.9f, 75.5f, -1082130432 /* Float: -1f */);
			TASK::_0xE8F1A5B4CED3725A(iLocal_131[iVar1], 1265.48f, -1269.05f, 74.25f, -1082130432 /* Float: -1f */);
			PED::SET_PED_KEEP_TASK(iLocal_131[iVar1], true);
			iVar0 = 0;
		}
		iVar1++;
	}
	__LIB_1__::func_532(Global_1347702[30 /*49*/].f_15, 4);
	return iVar0;
}

bool func_578(var uParam0)
{
	if (!__LIB_1__::func_220(105))
	{
		return false;
	}
	if (__LIB_0__::func_29(70))
	{
		iLocal_161 = __LIB_2__::func_963(70);
		if (!__LIB_0__::func_272(iLocal_161, 1))
		{
			return false;
		}
		__LIB_12__::func_875(uParam0, iLocal_161, "RHD_SHERIFF", 1);
		return true;
	}
	return false;
}

void func_584()
{
	__LIB_2__::func_602(&(Local_378[0 /*17*/]), "INTERACT_GREET", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

int func_585(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_13__::func_320(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_585(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (__LIB_13__::func_321(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*iParam0, iParam1, uParam3))
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
				if (__LIB_13__::func_317(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_13__::func_321(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_13__::func_317(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_587()
{
	__LIB_2__::func_624(&Local_378, 0, 1, 1, 0);
}

void func_588()
{
	__LIB_2__::func_602(&(Local_184[0 /*17*/]), __LIB_2__::func_460(7), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_184[1 /*17*/]), __LIB_2__::func_460(10), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_589()
{
	__LIB_2__::func_602(&(Local_241[0 /*17*/]), __LIB_2__::func_460(36), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_241[1 /*17*/]), __LIB_2__::func_460(37), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

bool func_590(var uParam0, int iParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return true;
	}
	if (func_295(iParam1))
	{
		return true;
	}
	if (!__LIB_1__::func_565(&(uParam0->f_14)))
	{
		uParam0->f_14 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_4, 1.5f, 1, 36, 0);
		return false;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_9) || (INTERIOR::IS_VALID_INTERIOR(uParam0->f_9) && INTERIOR::IS_INTERIOR_READY(uParam0->f_9)))
	{
		if (!__LIB_0__::func_86(uParam0->f_4))
		{
			*uParam0 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_CHAINGANG"), uParam0->f_4, uParam0->f_7, 1f, 0, 1);
			TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 22, true);
		}
		else
		{
			return true;
		}
	}
	else if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_9) && !INTERIOR::IS_INTERIOR_READY(uParam0->f_9))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_9);
	}
	return false;
}

void func_593()
{
	__LIB_1__::func_480(&iLocal_397);
	__LIB_2__::func_624(&Local_184, 0, 0, 1, 0);
}

void func_594()
{
	StringCopy(&(Global_1914319.f_18971), "", 32);
	Global_1914319.f_18975 = -1;
}

int func_596(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]) || func_295(4))
	{
		return 1;
	}
	else
	{
		iLocal_144[0] = __LIB_12__::func_885(uParam0, iLocal_19, vLocal_432, 0, 1, 1, 1, 1, 1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]))
		{
			__LIB_0__::func_568(vLocal_432, 2f, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], vLocal_432, 309.2055f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144[0], true);
			PED::_0xFFA1594703ED27CA(iLocal_144[0], 2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]))
	{
		__LIB_12__::func_875(uParam0, iLocal_144[0], "RBWCG_Arguing1", 1);
		return 1;
	}
	return 0;
}

int func_597(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) || func_295(4))
	{
		return 1;
	}
	else
	{
		iLocal_144[1] = __LIB_12__::func_885(uParam0, iLocal_21, vLocal_435, 0, 1, 1, 2, 1, 1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
		{
			__LIB_0__::func_568(vLocal_435, 2f, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], vLocal_435, 137.3259f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_144[1], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_144[1], false);
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_154))
	{
		iLocal_154 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1348.473f, -1303.607f, 76.92358f, 0f, 0f, -20.51864f, 1.570169f, 1.571734f, 1.55669f, "Nice ped 1 ambient blocker");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) && VOLUME::_DOES_VOLUME_EXIST(iLocal_154))
	{
		__LIB_12__::func_875(uParam0, iLocal_144[1], "RBWCG_Arguing2", 1);
		POPULATION::_0xB56D41A694E42E86(iLocal_154, 0, 0, 0, -1, -1, 0);
		return 1;
	}
	return 0;
}

bool func_599(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_36[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_36[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1047(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_36[iParam0]);
		}
	}
	return false;
}

bool func_600()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_36[1], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_36[1], false))
	{
		return true;
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_36[1], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[1], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01", iLocal_144[0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01", iLocal_144[1], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[1], "A_M_M_RHDTOWNFOLK_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[1], "A_F_M_RHDTOWNFOLK_01", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_36[1]);
			return true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[1], false))
	{
		return true;
	}
	return false;
}

bool func_601(int iParam0, var uParam1)
{
	if (PED::_0xC8D523BF5BBD3808(*iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")))
	{
		PED::_0xCB8F4C9343EBE240(*iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), uParam1);
		return true;
	}
	else if (PED::_0xC8D523BF5BBD3808(*iParam0, joaat("EVENT_SHOT_FIRED")))
	{
		PED::_0xCB8F4C9343EBE240(*iParam0, joaat("EVENT_SHOT_FIRED"), uParam1);
		if (__LIB_0__::func_94(*iParam0, *uParam1, 1) < 20f)
		{
			return true;
		}
	}
	else if (PED::_0xC8D523BF5BBD3808(*iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT")))
	{
		PED::_0xCB8F4C9343EBE240(*iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), uParam1);
		if (__LIB_0__::func_94(*iParam0, *uParam1, 1) < 20f)
		{
			return true;
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, false, false), 20f, true))
	{
		*uParam1 = { Global_36 };
		return true;
	}
	return false;
}

void func_602()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_149))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148))
		{
			STREAMING::REQUEST_MODEL(joaat("P_BENCHCH01X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_BENCHCH01X")))
			{
				if (iLocal_147 == 0)
				{
					iLocal_147 = ENTITY::_0x6F3068258A499E52(joaat("P_BENCHCH01X"), 1348.1f, -1303.2f, 76.87f, 9);
				}
				else if (ENTITY::_0x1FF441D7954F8709(iLocal_147))
				{
					iLocal_148 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_147));
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_148))
		{
			if (__LIB_2__::func_312(joaat("PROP_HUMAN_SEAT_BENCH"), 15, 0, joaat("PROP_HUMAN_SEAT_BENCH_FEMALE_A")))
			{
				iLocal_149 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_148, joaat("PROP_HUMAN_SEAT_BENCH"), 0.585082f, -0.019965f, 0.5f, 180f, 1f, 0f, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BENCHCH01X"));
			}
		}
	}
}

bool func_607()
{
	char* sVar0;
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_36[0], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false))
	{
		if (__LIB_0__::func_181())
		{
			sVar0 = "JOHN";
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_36[0], "b_PlayerArthur", false, false);
		}
		else
		{
			sVar0 = "ARTHUR";
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_36[0], "b_PlayerArthur", true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_134) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[0], "A_M_M_RHDTOWNFOLK_02", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[0], "A_M_M_RHDTOWNFOLK_02", iLocal_134, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_136))
		{
			STREAMING::REQUEST_MODEL(iLocal_24, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_24))
			{
				if (iLocal_135 == 0)
				{
					iLocal_135 = ENTITY::_0x6F3068258A499E52(iLocal_24, 1232.53f, -1292.24f, 76.36f, 5);
				}
				else if (ENTITY::_0x1FF441D7954F8709(iLocal_135))
				{
					iLocal_136 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_135));
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_36[0], "P_CHAIR15X", false)))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_24);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[0], "P_CHAIR15X", iLocal_136, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
		{
			iLocal_137 = OBJECT::CREATE_OBJECT(iLocal_23, vLocal_429, true, true, false, false, true);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_36[0], "p_cs_newspaper_03x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[0], "p_cs_newspaper_03x", iLocal_137, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[0], sVar0, false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[0], sVar0, Global_35, 0);
		}
		if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[0], "A_M_M_RHDTOWNFOLK_02", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[0], sVar0, false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_36[0], "P_CHAIR15X", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_36[0], "p_cs_newspaper_03x", false)))
		{
			Local_583.f_3 = iLocal_134;
			Local_583.f_4 = 21030;
			Local_583.f_7 = 12000;
			ANIMSCENE::START_ANIM_SCENE(iLocal_36[0]);
			return true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[0], false))
	{
		return true;
	}
	return false;
}

void func_610(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
}

bool func_611(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
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
				if (__LIB_4__::func_237(iParam0, uParam2))
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
				if (__LIB_4__::func_235(iParam0, uParam2))
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
				if (func_1060(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_1060(Global_35, iParam0, uParam2, 1))
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
				if (__LIB_10__::func_555(iParam0, iParam1, uParam2))
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
				if (__LIB_10__::func_556(iParam0, uParam2))
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

bool func_612()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_36[2], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[2], "A_M_M_UNIGUNSLINGER_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[2], "A_M_M_UNIGUNSLINGER_01", iLocal_155, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_156) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[2], "P_C_HORSE_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[2], "P_C_HORSE_01", iLocal_156, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_53[1 /*15*/].f_1) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_36[2], "p_cs_wantedalive01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36[2], "p_cs_wantedalive01x", Local_53[1 /*15*/].f_1, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[2], "A_M_M_UNIGUNSLINGER_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_36[2], "P_C_HORSE_01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_36[2], "p_cs_wantedalive01x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_36[2]);
			return true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false))
	{
		return true;
	}
	return false;
}

void func_614(char* sParam0, int iParam1)
{
	Global_1914319.f_18971 = { __LIB_3__::func_997(sParam0) };
	Global_1914319.f_18975 = iParam1;
}

int func_624(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) || func_295(2))
	{
		return 1;
	}
	else
	{
		iLocal_155 = __LIB_12__::func_885(uParam0, iLocal_22, vLocal_442, 0, 1, 1, 1, 1, 1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_155, vLocal_442, 170.04f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_155, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_155, 186, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_155, 225, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_155, 130, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_155, 317, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_155, 277, false);
			__LIB_1__::func_991(iLocal_155, 0);
			PED::_0xFFA1594703ED27CA(iLocal_155, 2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		__LIB_12__::func_875(uParam0, iLocal_155, "RBWCG_BHunter", 1);
		return 1;
	}
	return 0;
}

int func_625(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_156) || func_295(2))
	{
		return 1;
	}
	else
	{
		iLocal_156 = __LIB_12__::func_885(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), vLocal_445, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_156, vLocal_445, 78.7587f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_156, true);
			TASK::TASK_STAND_STILL(iLocal_156, -1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_156, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		return 1;
	}
	return 0;
}

bool func_626()
{
	if (__LIB_3__::func_528(iLocal_156, Global_35))
	{
		return true;
	}
	else if (__LIB_2__::func_901(iLocal_156, Global_35))
	{
		return true;
	}
	else if (__LIB_2__::func_825(Global_35) == iLocal_156)
	{
		return true;
	}
	return false;
}

void func_627()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_406))
	{
		if (bLocal_428 == 0)
		{
			iLocal_406 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_155);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_406, "RBWCG_BHLABEL");
		}
		else
		{
			iLocal_406 = __LIB_8__::func_778(408396114, iLocal_155, 1);
			MAP::SET_BLIP_SPRITE(iLocal_406, joaat("BLIP_PROC_BOUNTY_POSTER"), true);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_406, "RBWCG1_POSTER");
		}
	}
}

void func_628(int iParam0)
{
	iLocal_690 = iParam0;
}

void func_629(bool bParam0, bool bParam1)
{
	if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_36[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_36[2], false)) && __LIB_0__::func_272(iLocal_155, 0)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_155, -1))
	{
		return;
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_582);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_582);
	if (bParam0)
	{
		TASK::TASK_LOOK_AT_ENTITY(0, Global_35, 15000, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 4500, -1f, -1f, -1f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_156) && !PED::IS_PED_ON_MOUNT(iLocal_155))
	{
		TASK::TASK_MOUNT_ANIMAL(0, iLocal_156, 45000, -1, 1f, 1, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.001f, 2176, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_582);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_155, iLocal_582);
	if (bParam1)
	{
		PED::_0x2208438012482A1A(iLocal_155, false, false);
	}
}

bool func_642()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		if (ENTITY::_0x8DE41E9902E85756(iLocal_155))
		{
		}
		if (__LIB_1__::func_614(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 0, 0) > func_689() && ENTITY::_0x8DE41E9902E85756(iLocal_155))
		{
			return true;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_405) && !ENTITY::IS_ENTITY_DEAD(iLocal_155))
		{
			if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_155, iLocal_405, true, 0))
			{
			}
		}
	}
	return false;
}

bool func_645()
{
	if (PED::_0xD0B7AEB56229D317(Global_35) == iLocal_155)
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, Global_35, 1, 1))
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(iLocal_155))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(iLocal_155))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iLocal_155, 0))
	{
		return true;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_155, 32768, 0))
	{
		return true;
	}
	return false;
}

void func_646(var uParam0)
{
	char cVar0[16];
	if (((iLocal_689 < 3 && !PED::_IS_PED_HOGTIED(iLocal_155)) && !PED::_IS_PED_LASSOED(iLocal_155)) && !__LIB_13__::func_201(iLocal_155))
	{
		StringCopy(&cVar0, "CG2BH_FLW", 16);
		if (!__LIB_0__::func_75(&uLocal_686) || __LIB_6__::func_904())
		{
			__LIB_1__::func_148(&uLocal_686);
		}
		if (__LIB_0__::func_665(Global_35, iLocal_155, 1, 1) < 5f || __LIB_2__::func_215(iLocal_155, Global_35, 1, 15f, 0))
		{
			if (__LIB_0__::func_264(&uLocal_686) > 6f)
			{
				StringIntConCat(&cVar0, iLocal_689, 16);
				if (iLocal_689 == 0)
				{
					if (bLocal_427)
					{
						StringConCat(&cVar0, "B", 16);
					}
					else
					{
						StringConCat(&cVar0, "A", 16);
					}
				}
				if (__LIB_12__::func_876(uParam0, &cVar0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_155, Global_35, 8000, 0, 51, 0);
					iLocal_689++;
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_686);
		}
	}
}

void func_647()
{
	if (PED::IS_PED_ON_MOUNT(iLocal_155) && __LIB_0__::func_396(iLocal_155))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_155, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_155) > 20)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_156))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_156, 1.25f);
			}
		}
	}
}

void func_648()
{
	__LIB_1__::func_480(&iLocal_155);
	__LIB_2__::func_624(&Local_241, 0, 0, 1, 0);
}

bool func_649()
{
	if (iLocal_30 == 6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_155) && !bLocal_428)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_53[1 /*15*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_659()
{
	if (((!AUDIO::_0xD89504D9D7D5057D("CG2ASKTHREAT") && !AUDIO::_0x1ECC76792F661CF5("CG2ASKTHREAT")) && !AUDIO::_0xD89504D9D7D5057D("CG2ASKTHREATJ")) && !AUDIO::_0x1ECC76792F661CF5("CG2ASKTHREATJ"))
	{
		return true;
	}
	if (AUDIO::_0xD89504D9D7D5057D("CG2ASKTHREAT") && AUDIO::_0x1ECC76792F661CF5("CG2ASKTHREAT"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("CG2ASKTHREAT") >= 1)
		{
			return true;
		}
	}
	if (AUDIO::_0xD89504D9D7D5057D("CG2ASKTHREATJ") && AUDIO::_0x1ECC76792F661CF5("CG2ASKTHREATJ"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("CG2ASKTHREATJ") >= 1)
		{
			return true;
		}
	}
	return false;
}

bool func_680(var uParam0, int iParam1)
{
	if (__LIB_0__::func_94(Global_35, uParam0->f_4, 1) <= 7f)
	{
		return true;
	}
	return false;
}

bool func_686()
{
	if (ANIMSCENE::_0x1F0E401031E20146(iLocal_36[0], "pl_reading_newspaper"))
	{
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_36[0], "pl_reading_newspaper"))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_36[0], "b_breakout", false, false);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_36[0], "pl_reading_newspaper", true);
		return true;
	}
	else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_36[0], "pl_reading_newspaper"))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_36[0], "pl_reading_newspaper"))
		{
		}
	}
	else if (ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_36[0], "pl_reading_newspaper"))
	{
	}
	return false;
}

int func_689()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_295(func_311(iVar1)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_721(var uParam0)
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
		func_1163(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1165(uParam0);
		func_1166(uParam0);
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

bool func_805(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_805(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_805(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_805(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_805(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_805(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_805(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_805(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_805(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_805(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_805(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_805(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_807()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1341();
	func_1342();
	func_1343();
	func_1344();
	func_1345();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_808(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1348(iParam0, 1, 1, -142743235, 1);
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

void func_842()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1374(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_1011()
{
	if (!__LIB_13__::func_311(4))
	{
		__LIB_2__::func_602(&(Local_298[0 /*17*/]), __LIB_2__::func_460(24), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	}
	if (!__LIB_13__::func_311(8))
	{
		__LIB_2__::func_602(&(Local_338[0 /*17*/]), __LIB_2__::func_460(24), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	}
}

bool func_1012()
{
	if ((((((((((__LIB_8__::func_684("CG1_ILO_B_JOHN") || __LIB_8__::func_684("CG1_ILO_B_ARTH")) || __LIB_8__::func_684("CG1_ILO_W_JOHN")) || __LIB_8__::func_684("CG1_ILO_W_ARTH")) || __LIB_8__::func_684("CG1ASKA")) || __LIB_8__::func_684("CG1ASKB")) || __LIB_8__::func_684("CG1ASKB_BLCK")) || __LIB_8__::func_684("CG1_RET_W_JOHN")) || __LIB_8__::func_684("CG1_RET_W_ARTH")) || __LIB_8__::func_684("CG1_RET_B_JOHN")) || __LIB_8__::func_684("CG1_RET_B_ARTH"))
	{
		return true;
	}
	return false;
}

bool func_1013()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_131[iVar0]))
		{
			if (PED::IS_PED_FLEEING(iLocal_131[iVar0]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_1047(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@bwcg@ig@rc1_ig2_blackwhitesitting@rc1_ig2_blackwhitesitting";
		case 1:
			return "script@rcm@bwcg@ig@rc1_ig3_blackwhitegossip@rc1_ig3_blackwhitegossip";
		case 2:
			return "script@rcm@bwcg@ig@rc1_ig4_blackwhitestanding@rc1_ig4_blackwhitestanding";
	}
	return "";
}

bool func_1060(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1533(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_1534(iParam1, vVar0, vVar4))
					{
						__LIB_1__::func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_1534(iParam1, vVar0, vVar7))
					{
						__LIB_1__::func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

void func_1163(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1588();
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

void func_1165(var uParam0)
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
			func_1596(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1596(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1166(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1596(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1341()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1772(0);
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
	func_1772(1);
}

void func_1342()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_805(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1343()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1775(0);
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
	func_1775(1);
}

void func_1344()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1775(0);
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
	func_1775(1);
}

void func_1345()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_805(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_805(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1348(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1348(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1348(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1348(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1374(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1811(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_805(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1533(var uParam0)
{
	int iVar0;
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			Jump @301; //curOff = 151
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			Jump @301; //curOff = 200
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			Jump @301; //curOff = 249
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			if (*uParam0 & 16777216 != 0)
			{
				if (iVar0 == 2)
				{
					iVar0 = 0;
				}
			}
			return iVar0;
		}
bool func_1534(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (__LIB_1__::func_374(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

void func_1588()
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
	iVar0 = func_1915(6291456, 0);
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

void func_1596(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1596(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1596(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1772(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_805(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2022(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_808(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1348(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2028(Var0);
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

void func_1775(bool bParam0)
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
		func_805(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_805(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1348(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1348(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1348(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1811(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1811(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1811(iVar63, -915411861, 1, 0, 0));
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

int func_1915(int iParam0, int iParam1)
{
	var uVar0;
	return func_2076(&uVar0, iParam0, iParam1);
}

void func_2022(int iParam0)
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
	func_1348(iParam0, 1, 1, -142743235, 1);
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
		func_1348(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2028(struct<6> Param0)
{
	if (!func_2150(Param0.f_4, 1))
	{
	}
	if (!func_2150(Param0, 1))
	{
	}
	if (!func_2150(Param0.f_2, 1))
	{
	}
	if (!func_2150(Param0.f_5, 1))
	{
	}
	if (!func_2150(Param0.f_3, 1))
	{
	}
	if (!func_2150(Param0.f_1, 1))
	{
	}
}

int func_2076(var uParam0, int iParam1, int iParam2)
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
		return func_2076(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2150(int iParam0, int iParam1)
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
				if (func_2150(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2150(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2150(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2150(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

