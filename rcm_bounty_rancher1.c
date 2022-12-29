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
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18[3] = { 0, 0, 0 };
	int iLocal_22 = 0;
	struct<364> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_404 = -1;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	vector3 vLocal_414 = { 0f, 0f, 0f };
	float fLocal_417 = 0f;
	vector3 vLocal_418 = { 0f, 0f, 0f };
	float fLocal_421 = 0f;
	vector3 vLocal_422 = { 0f, 0f, 0f };
	float fLocal_425 = 0f;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	int iLocal_436[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_442 = false;
	bool bLocal_443 = false;
	bool bLocal_444 = false;
	bool bLocal_445 = false;
	bool bLocal_446 = false;
	bool bLocal_447 = false;
	bool bLocal_448 = false;
	bool bLocal_449 = false;
	bool bLocal_450 = false;
	bool bLocal_451 = false;
	bool bLocal_452 = false;
	bool bLocal_453 = false;
	bool bLocal_454 = false;
	bool bLocal_455 = false;
	bool bLocal_456 = false;
	bool bLocal_457 = false;
	bool bLocal_458 = false;
	bool bLocal_459 = false;
	bool bLocal_460 = false;
	bool bLocal_461 = false;
	bool bLocal_462 = false;
	bool bLocal_463 = false;
	bool bLocal_464 = false;
	bool bLocal_465 = false;
	bool bLocal_466 = false;
	bool bLocal_467 = false;
	bool bLocal_468 = false;
	bool bLocal_469 = false;
	bool bLocal_470 = false;
	bool bLocal_471 = false;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = -1;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 1097859072;
	var uLocal_490 = 1000;
	var uLocal_491 = 1067450368;
	var uLocal_492 = 5000;
	var uLocal_493 = 42;
	var uLocal_494 = 1103626240;
	var uLocal_495 = 1077936128;
	var uLocal_496 = 1106247680;
	var uLocal_497 = 1103101952;
	var uLocal_498 = 1097859072;
	var uLocal_499 = 1103626240;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = -1;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 1097859072;
	var uLocal_518 = 1000;
	var uLocal_519 = 1067450368;
	var uLocal_520 = 5000;
	var uLocal_521 = 42;
	var uLocal_522 = 1103626240;
	var uLocal_523 = 1077936128;
	var uLocal_524 = 1106247680;
	var uLocal_525 = 1103101952;
	var uLocal_526 = 1097859072;
	var uLocal_527 = 1103626240;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	int iLocal_548 = 0;
	struct<22> Local_549 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_571 = 3;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = -1;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 1097859072;
	var uLocal_593 = 1000;
	var uLocal_594 = 1067450368;
	var uLocal_595 = 5000;
	var uLocal_596 = 42;
	var uLocal_597 = 1103626240;
	var uLocal_598 = 1077936128;
	var uLocal_599 = 1106247680;
	var uLocal_600 = 1103101952;
	var uLocal_601 = 1097859072;
	var uLocal_602 = 1103626240;
	int iLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = -1;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 1097859072;
	var uLocal_622 = 1000;
	var uLocal_623 = 1067450368;
	var uLocal_624 = 5000;
	var uLocal_625 = 42;
	var uLocal_626 = 1103626240;
	var uLocal_627 = 1077936128;
	var uLocal_628 = 1106247680;
	var uLocal_629 = 1103101952;
	var uLocal_630 = 1097859072;
	var uLocal_631 = 1103626240;
	char* sLocal_632[2] = { NULL, NULL };
	char* sLocal_635 = NULL;
	char* sLocal_636[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	struct<21> Local_645[1];
	struct<17> Local_667[3];
	int iLocal_719 = 0;
	bool bLocal_720 = false;
	bool bLocal_721 = false;
	bool bLocal_722 = false;
	bool bLocal_723 = false;
	bool bLocal_724 = false;
	bool bLocal_725 = false;
	int iLocal_726 = 0;
	bool bLocal_727 = false;
	bool bLocal_728 = false;
	bool bLocal_729 = false;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	char* sLocal_733 = NULL;
	char* sLocal_734[3] = { NULL, NULL, NULL };
	int iLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	int iLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	char* sLocal_749[3] = { NULL, NULL, NULL };
	int iLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	char* sLocal_757 = NULL;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	char* sLocal_761[4] = { NULL, NULL, NULL, NULL };
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768[3] = { 0, 0, 0 };
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	bool bLocal_775 = false;
	char* sLocal_776[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_782 = 0;
	bool bLocal_783 = false;
	int iLocal_784 = 0;
	char* sLocal_785 = NULL;
	char* sLocal_786 = NULL;
	char* sLocal_787 = NULL;
	char* sLocal_788 = NULL;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	bool bLocal_818 = false;
	bool bLocal_819 = false;
	int iLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825[3] = { 0, 0, 0 };
	int iLocal_829[3] = { 0, 0, 0 };
	int iLocal_833[3] = { 0, 0, 0 };
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	bool bLocal_839 = false;
	bool bLocal_840 = false;
	int iLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_532 = -1;
	sLocal_635 = "script_proc@bounty@rhodes_rancher@ranch";
	iLocal_644 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_719 = -1;
	sLocal_785 = "BRAN_START";
	sLocal_786 = "BRAN_RIDE";
	sLocal_787 = "BRAN_CHASE";
	sLocal_788 = "BRAN_STOP";
	iLocal_837 = joaat("A_M_M_VALFARMER_01");
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
			__LIB_13__::func_98(uParam0);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > func_149(uParam0))
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
		__LIB_8__::func_992(uParam0->f_174);
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
	int iVar0;
	__LIB_12__::func_658(uParam0, 4);
	__LIB_12__::func_659(uParam0, 10);
	__LIB_12__::func_656(uParam0, 10f);
	__LIB_12__::func_657(uParam0, 50f);
	iVar0 = __LIB_12__::func_767(uParam0);
	vLocal_414 = { 1685.01f, -615.01f, 44.35f };
	fLocal_417 = 153.66f;
	vLocal_418 = { 1684.76f, -616.8f, 44.27f };
	fLocal_421 = -0.61f;
	vLocal_422 = { 1683.47f, -616.41f, 44.25f };
	fLocal_425 = -157.33f;
	sLocal_733 = "BRARETURN1_";
	sLocal_734[0] = "BRARAGE1";
	sLocal_734[1] = "BRARAGE2";
	sLocal_734[2] = "BRARAGE3";
	sLocal_636[0] = "BRAHOGTIED1";
	sLocal_636[1] = "BRAHOGTIED2";
	sLocal_636[2] = "BRAHOGTIED3";
	sLocal_636[3] = "BRAHOGTIED4";
	sLocal_636[4] = "BRAHOGTIED5";
	sLocal_749[0] = "BRA_AIMS1";
	sLocal_749[1] = "BRA_AIMS2";
	sLocal_749[2] = "BRA_AIMS3";
	sLocal_757 = "BRAN_EMBRACE1";
	sLocal_761[0] = "BRAN_LASSO1";
	sLocal_761[1] = "BRAN_LASSO2";
	sLocal_761[2] = "BRAN_LASSO3";
	sLocal_761[3] = "BRAN_LASSO4";
	sLocal_776[0] = "BRA_JUMP_FLEE_1";
	sLocal_776[1] = "BRA_JUMP_FLEE_2";
	sLocal_776[2] = "BRA_JUMP_FLEE_3";
	sLocal_776[3] = "BRA_JUMP_FLEE_4";
	sLocal_776[4] = "BRA_JUMP_FLEE_5";
	iLocal_436[0] = 0;
	iLocal_436[1] = 0;
	iLocal_436[2] = 0;
	iLocal_436[3] = 0;
	iLocal_436[4] = 0;
	Local_549.f_3 = Global_35;
	Local_549.f_4 = 21030;
	Local_549.f_7 = 0;
	Local_549.f_8 = 4;
	Local_549.f_13 = 1;
	Local_549.f_17 = 3;
	Local_549.f_18 = 2;
	Local_549.f_19 = 3;
	Local_549.f_21 = 3;
	Local_549.f_16 = 3;
	Local_549.f_11 = 0;
	Local_549.f_12 = 0;
	if (iVar0 == 1)
	{
		iLocal_18[2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_189(2), 0, "PBL_hold_back", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_18[2]);
	}
	else if (iVar0 < 1)
	{
		iLocal_18[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_189(0), 0, "PBL_idle_a", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_18[0]);
	}
	func_190();
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	__LIB_13__::func_55(uParam0, sLocal_635, 7);
	__LIB_12__::func_867(uParam0, joaat("MBH_RHODESRANCHER_FEMALES_01"), 1);
	__LIB_12__::func_867(uParam0, joaat("MBH_RHODESRANCHER_TEENS_01"), 1);
	__LIB_12__::func_867(uParam0, iLocal_644, 1);
	__LIB_12__::func_867(uParam0, iLocal_837, 7);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_785);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_786);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_787);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_788);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_632[0]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_632[1]);
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
			Var1 = { 1659.288f, -640.3757f, 42.1784f };
			Var1.f_3 = 316.4231f;
			break;
		case 1:
			Var1 = { 1672.472f, -627.4864f, 42.5558f };
			Var1.f_3 = 317.6338f;
			break;
		case 2:
			Var1 = { 1356.526f, -1312.164f, 75.8679f };
			Var1.f_3 = 351.4928f;
			break;
		case 3:
			Var1 = { 1358.155f, -1308.645f, 76.7151f };
			Var1.f_3 = 155.5372f;
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
	if (__LIB_13__::func_203(uParam0, iLocal_603))
	{
		StringCopy(&(uParam0->f_2578), "BRAN_F_KID", 24);
		return true;
	}
	if (__LIB_18__::func_583(&Local_23, 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		switch (Local_23.f_64)
		{
			case 0:
				StringCopy(&(uParam0->f_2578), "BRAN_F_DEAD", 24);
				break;
			case 1:
				StringCopy(&(uParam0->f_2578), "BRAN_F_LEFT_A", 24);
				break;
			case 3:
				StringCopy(&(uParam0->f_2578), "BRAN_F_ESCP", 24);
				break;
			case 5:
				StringCopy(&(uParam0->f_2578), "BNTY_F_WANTED", 24);
				break;
			case 6:
				StringCopy(&(uParam0->f_2578), "BNTY_F_ATCK", 24);
				break;
		}
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
	if (func_210(uParam0->f_174))
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

void func_72(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	func_224(uParam0);
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
		__LIB_8__::func_992(uParam0->f_174);
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_264(uParam0))
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
		if (uParam0->f_171 != 0 || func_283(uParam0))
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
	switch (iVar0)
	{
		case 0:
			if (!bLocal_460)
			{
				if (func_286(&iLocal_426, 1659.288f, -640.3757f, 42.1784f, 0f))
				{
					bLocal_460 = true;
				}
				else
				{
					return 2;
				}
			}
			if (__LIB_0__::func_272(iLocal_426, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_426, true, false);
				PED::_SET_PED_ON_MOUNT(Global_35, iLocal_426, -1, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_426, 1659.288f, -640.3757f, 42.1784f, 316.4231f, true, false, true);
			}
			if (__LIB_13__::func_204(&uLocal_539))
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_632[0]);
				__LIB_10__::func_197(&Local_23, 4, 0);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			bLocal_720 = true;
			bLocal_435 = true;
			iLocal_431 = 1;
			if (func_291())
			{
				bLocal_839 = true;
			}
			else
			{
				bLocal_839 = false;
			}
			if (func_292())
			{
				if (__LIB_0__::func_272(iLocal_574, 0))
				{
					__LIB_1__::func_864(iLocal_574, 1, 0);
				}
				bLocal_461 = true;
			}
			else
			{
				bLocal_461 = false;
			}
			if (!bLocal_460)
			{
				if (func_286(&iLocal_426, 1659.288f, -640.3757f, 42.1784f, 0f))
				{
					bLocal_460 = true;
				}
				else
				{
					return 2;
				}
			}
			if (__LIB_0__::func_272(iLocal_426, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_426, true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_426, 1659.288f, -640.3757f, 42.1784f, 316.4231f, true, false, true);
			}
			else
			{
				return 2;
			}
			if (__LIB_13__::func_204(&uLocal_539))
			{
				if (bLocal_461 == 1)
				{
					PED::DELETE_PED(&iLocal_603);
				}
				else
				{
					if (__LIB_0__::func_272(iLocal_574, 0))
					{
						ENTITY::_0x9587913B9E772D29(iLocal_574, 0);
					}
					if (__LIB_0__::func_272(iLocal_603, 0))
					{
						ENTITY::_0x9587913B9E772D29(iLocal_603, 0);
					}
				}
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_413))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_413, 1673.827f, -625.5853f, 42.6803f, 325.4215f, true, false, true);
						ENTITY::_0x9587913B9E772D29(iLocal_413, 0);
						if (!__LIB_0__::func_163(iLocal_413, joaat("SCRIPT_TASK_CARRIABLE")))
						{
							TASK::TASK_CARRIABLE(iLocal_413, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_413, 1), 0, 0, 0);
						}
					}
					else
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_413, 1673.827f, -625.5853f, 42.6803f, 325.4215f, true, false, true);
						ENTITY::_0x9587913B9E772D29(iLocal_413, 0);
						if (!__LIB_0__::func_163(iLocal_413, joaat("SCRIPT_TASK_CARRIABLE")))
						{
							TASK::TASK_CARRIABLE(iLocal_413, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_413, 1), 0, 0, 0);
						}
					}
				}
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_632[1]);
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				__LIB_13__::func_105(1, 1);
				iLocal_15 = 1;
				iLocal_17 = 22;
				iLocal_820 = 0;
				return 7;
			}
			break;
		case 2:
			if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_413))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_413, 1354.733f, -1311.028f, 75.8243f, 76.614f, true, false, true);
					if (!__LIB_0__::func_163(iLocal_413, joaat("SCRIPT_TASK_CARRIABLE")))
					{
						TASK::TASK_CARRIABLE(iLocal_413, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_413, 1), Global_35, 0, 0);
					}
					PED::_0x2208438012482A1A(iLocal_413, true, false);
					PED::_0x2208438012482A1A(Global_35, true, false);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_413, 1354.733f, -1311.028f, 75.8243f, 76.614f, true, false, true);
					if (!__LIB_0__::func_163(iLocal_413, joaat("SCRIPT_TASK_CARRIABLE")))
					{
						TASK::TASK_CARRIABLE(iLocal_413, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_413, 1), Global_35, 0, 0);
					}
					PED::_0x2208438012482A1A(iLocal_413, true, false);
					PED::_0x2208438012482A1A(Global_35, true, false);
				}
			}
			bLocal_448 = true;
			bLocal_449 = true;
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_13__::func_105(1, 1);
			iLocal_15 = 1;
			return 7;
		case 3:
			__LIB_10__::func_131(joaat("U_M_M_HTLRANCHERBOUNTY_01"), Local_23.f_300, 0);
			__LIB_10__::func_92(joaat("U_M_M_HTLRANCHERBOUNTY_01"), Local_23.f_300, Local_23.f_299);
			__LIB_1__::func_616(Global_40.f_9074.f_3, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_13__::func_105(1, 1);
			return 8;
		default:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			return 7;
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
	return func_310(Var0, &(uParam0->f_206), uParam0);
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
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	fVar0 = 10f;
	iVar1 = __LIB_12__::func_767(uParam0);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (!bLocal_445 && !PED::_IS_PED_HOGTIED(iLocal_413))
	{
		PED::SET_PED_RESET_FLAG(iLocal_413, 49, true);
	}
	if (iLocal_431 == 1)
	{
		if (!bLocal_428 && !PED::_IS_PED_HOGTIED(iLocal_413))
		{
			bLocal_428 = true;
		}
	}
	if ((!bLocal_724 && __LIB_0__::func_272(iLocal_603, 0)) && bLocal_443)
	{
		if (PED::_IS_PED_HOGTIED(iLocal_413) && ENTITY::_0x61914209C36EFDDB(iLocal_413) == 5)
		{
			bLocal_724 = true;
		}
	}
	if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_272(iLocal_574, 0))
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_603, false, false) - Vector(fVar0, fVar0, fVar0), ENTITY::GET_ENTITY_COORDS(iLocal_603, false, false) + Vector(fVar0, fVar0, fVar0), joaat("WEAPON_THROWN_DYNAMITE"), false) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_603, false, false) - Vector(fVar0, fVar0, fVar0), ENTITY::GET_ENTITY_COORDS(iLocal_603, false, false) + Vector(fVar0, fVar0, fVar0), joaat("WEAPON_THROWN_MOLOTOV"), false))
		{
			func_316();
		}
		else if (((__LIB_0__::func_665(Global_35, iLocal_574, 1, 1) < 1f || __LIB_0__::func_665(iLocal_413, iLocal_603, 1, 1) < 1f) || __LIB_0__::func_665(Global_35, iLocal_574, 1, 1) < 1f) || __LIB_0__::func_665(iLocal_413, iLocal_603, 1, 1) < 1f)
		{
			if (((((((__LIB_13__::func_201(iLocal_413) || PED::IS_PED_RAGDOLL(iLocal_413)) || __LIB_0__::func_163(iLocal_413, joaat("SCRIPT_TASK_CARRIABLE"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_LEFT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_RIGHT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_FRONT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_REAR_LASSO"))) || PED::_0x3BDFCF25B58B0415(iLocal_413))
			{
				func_316();
				bLocal_725 = true;
			}
		}
	}
	if (!bLocal_464)
	{
		if (PED::_IS_PED_HOGTIED(iLocal_413))
		{
			if (bLocal_465)
			{
				if (!bLocal_463)
				{
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(1, 0);
					}
					if (__LIB_12__::func_876(uParam0, "BRA_HOGWAK", 0))
					{
						bLocal_463 = true;
					}
				}
				else if (!__LIB_13__::func_158("BRA_HOGWAK"))
				{
					if (__LIB_0__::func_181())
					{
						sVar2 = "BRA_HOGWAKJ";
					}
					else
					{
						sVar2 = "BRA_HOGWAKA";
					}
					if (__LIB_12__::func_876(uParam0, sVar2, 0))
					{
						bLocal_464 = true;
					}
				}
			}
		}
	}
	if (iVar1 < 2)
	{
		if (func_324())
		{
			func_325(uParam0);
		}
		else if (iLocal_15 == 0)
		{
			func_326(uParam0);
		}
	}
	switch (iLocal_15)
	{
		case 0:
			if (func_327(uParam0))
			{
				iLocal_15 = 1;
			}
			if (func_328(&Local_23, 1))
			{
				iLocal_15 = 2;
			}
			break;
		case 1:
			if (iVar1 < 2)
			{
				func_329(uParam0);
				func_330();
				if (iLocal_820 == 8 && !bLocal_445)
				{
					if (PED::_IS_PED_HOGTIED(iLocal_413))
					{
						if (__LIB_0__::func_396(Global_35) && PED::_GET_CARRIER_AS_MOUNT(iLocal_413) == __LIB_2__::func_825(Global_35))
						{
							func_333(uParam0);
						}
						else
						{
							__LIB_13__::func_92(&Local_23);
						}
					}
				}
			}
			__LIB_13__::func_111(&Local_23);
			if (func_328(&Local_23, 1))
			{
				iLocal_15 = 2;
			}
			if (!bLocal_445 && __LIB_0__::func_94(iLocal_413, __LIB_10__::func_45(Local_23.f_300), 1) < 15f)
			{
				if (PED::_IS_PED_HOGTIED(iLocal_413))
				{
					__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
					bLocal_445 = true;
				}
			}
			else if (!bLocal_448 && __LIB_0__::func_12() == 105)
			{
				if (PED::_IS_PED_HOGTIED(iLocal_413) && __LIB_10__::func_166(iLocal_413, 0))
				{
					if (__LIB_13__::func_123(uParam0, "BRARHODES_", 0, 0))
					{
						bLocal_448 = true;
					}
				}
				else
				{
					bLocal_448 = true;
				}
			}
			else if (!bLocal_449 && __LIB_0__::func_94(iLocal_413, __LIB_10__::func_45(Local_23.f_300), 1) < 100f)
			{
				if ((PED::_IS_PED_HOGTIED(iLocal_413) && __LIB_10__::func_166(iLocal_413, 0)) && !__LIB_13__::func_120("BRARHODES_", 0))
				{
					if (bLocal_461)
					{
						if (__LIB_13__::func_123(uParam0, "BRARHODES_K_", 0, 0))
						{
							bLocal_449 = true;
						}
					}
					else if (__LIB_13__::func_123(uParam0, "BRARHODES_A_", 0, 0))
					{
						bLocal_449 = true;
					}
				}
			}
			break;
		case 2:
			if (func_341(&Local_23))
			{
				if (!__LIB_1__::func_185(17))
				{
					__LIB_7__::func_448(__LIB_3__::func_918(17), 1);
				}
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_788);
				return 8;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	if (__LIB_0__::func_181())
	{
		__LIB_3__::func_666(106, 5, 3, 0, joaat("CS_JOHNMARSTON"));
	}
	else
	{
		__LIB_3__::func_666(106, 5, 3, 0, 0);
	}
	__LIB_2__::func_115(106, 1, 0, 0, 12, 0, 0, 1);
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
	__LIB_13__::func_134(iParam0, 0, iParam3);
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
		func_382(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_138(var uParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_13__::func_134(uParam0->f_174, 0, 0);
		Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	}
	if (!__LIB_0__::func_272(iLocal_413, 0))
	{
		func_316();
	}
	AUDIO::TRIGGER_MUSIC_EVENT(sLocal_788);
}

float func_149(var uParam0)
{
	return __LIB_13__::func_82(&Local_23);
}

bool func_150(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (__LIB_19__::func_267(&Local_23))
			{
				__LIB_6__::func_765(11, 1);
				__LIB_13__::func_67(Local_23.f_300, ENTITY::GET_ENTITY_MODEL(Local_23.f_67));
				return true;
			}
			else if (!__LIB_0__::func_27(Local_23.f_329, 8388608))
			{
				func_415(uParam0);
				if (bLocal_461 && iLocal_784 >= 4)
				{
					func_416(uParam0);
				}
			}
			break;
		case 1:
			func_417();
			if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_665(Global_35, iLocal_603, 1, 1) > 150f)
			{
				return true;
			}
			else if (__LIB_0__::func_272(iLocal_574, 0) && __LIB_0__::func_665(Global_35, iLocal_574, 1, 1) > 150f)
			{
				return true;
			}
			else if (!__LIB_0__::func_272(iLocal_603, 0) && !__LIB_0__::func_272(iLocal_574, 0))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_418(uParam0);
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	__LIB_13__::func_112(&Local_23, 1);
	STREAMING::REMOVE_ANIM_DICT(sLocal_635);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_HTLRANCHERBOUNTY_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_837);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_644);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("MBH_RHODESRANCHER_FEMALES_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("MBH_RHODESRANCHER_TEENS_01"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_603))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_603))
		{
			PED::SET_PED_KEEP_TASK(iLocal_603, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_603);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
		{
			PED::SET_PED_KEEP_TASK(iLocal_574, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_574);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_643))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_643))
		{
			PED::SET_PED_KEEP_TASK(iLocal_643, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_643);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_825[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_825[iVar0]));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		__LIB_0__::func_325(&(iLocal_833[iVar1]));
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		__LIB_2__::func_788(&(iLocal_829[iVar2]), 1, 0, 1);
		iVar2++;
	}
	__LIB_0__::func_172(iLocal_528);
	__LIB_0__::func_172(iLocal_792);
	__LIB_0__::func_172(iLocal_529);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_790))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_790);
		VOLUME::_DELETE_VOLUME(iLocal_790);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_791))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_791);
		VOLUME::_DELETE_VOLUME(iLocal_791);
	}
	__LIB_2__::func_353(&uLocal_842, 1);
	__LIB_2__::func_353(&uLocal_843, 1);
	__LIB_2__::func_353(&uLocal_844, 1);
	__LIB_0__::func_172(iLocal_530);
	__LIB_0__::func_172(iLocal_531);
	__LIB_3__::func_953(&iLocal_532, 1);
}

char* func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@bountyhunting@RHODES@ranch_intro";
		case 1:
			return "script@proc@bountyhunting@RHODES@ranch_exit";
		case 2:
			return "script@proc@bountyhunting@RHODES@ranch_say_goodbye";
	}
	return "";
}

void func_190()
{
	sLocal_632[0] = "BRAN_RESTART_1";
	sLocal_632[1] = "BRAN_RESTART_2";
}

int func_205(vector3 vParam0, var uParam3)
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
		iVar0 = func_474(0, 0);
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

bool func_210(int iParam0)
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

void func_224(var uParam0)
{
	func_418(uParam0);
	__LIB_1__::func_148(&uLocal_730);
	iLocal_427 = __LIB_1__::func_334(70);
	if (__LIB_0__::func_272(iLocal_427, 0))
	{
		__LIB_12__::func_875(uParam0, iLocal_427, "RHD_Sheriff", 1);
	}
}

int func_264(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	iVar0 = __LIB_12__::func_767(uParam0);
	PED::ADD_RELATIONSHIP_GROUP("RancherFamily", &iLocal_789);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413))
	{
		iLocal_413 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413))
	{
		return 0;
	}
	if (!__LIB_0__::func_272(iLocal_413, 0))
	{
		return 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return 0;
	}
	__LIB_3__::func_618(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
	if (__LIB_0__::func_272(iLocal_413, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_413, vLocal_414, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_413, fLocal_417);
		ENTITY::_0x9587913B9E772D29(iLocal_413, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_413, true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_413, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413, iLocal_789);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413, 0, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_413, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_413, 130, true);
		__LIB_4__::func_228(&uLocal_472);
		__LIB_1__::func_398(&uLocal_472, 1);
		__LIB_2__::func_507(&uLocal_472, 0);
		__LIB_1__::func_991(iLocal_413, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_574))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_574))
		{
			iLocal_574 = __LIB_12__::func_885(uParam0, joaat("MBH_RHODESRANCHER_FEMALES_01"), vLocal_422, fLocal_425, 1, 1, 0, 1, 1, 1, 1, 0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_272(iLocal_574, 0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("MBH_RHODESRANCHER_FEMALES_01"));
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_574, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_574, true);
		ENTITY::_0x9587913B9E772D29(iLocal_574, 0);
		__LIB_3__::func_459(iLocal_574, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_574, true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_574, false);
		__LIB_4__::func_228(&uLocal_575);
		__LIB_1__::func_398(&uLocal_575, 1);
		__LIB_2__::func_507(&uLocal_575, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_574, iLocal_789);
		PED::SET_PED_CONFIG_FLAG(iLocal_574, 138, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_603))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_603))
		{
			iLocal_603 = __LIB_12__::func_885(uParam0, joaat("MBH_RHODESRANCHER_TEENS_01"), vLocal_418, fLocal_421, 1, 1, 0, 1, 1, 1, 1, 0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_603))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_272(iLocal_603, 0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("MBH_RHODESRANCHER_TEENS_01"));
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_603, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_603, true);
		ENTITY::_0x9587913B9E772D29(iLocal_603, 0);
		__LIB_3__::func_459(iLocal_603, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_603, true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_603, false);
		__LIB_4__::func_228(&uLocal_604);
		__LIB_1__::func_398(&uLocal_604, 1);
		__LIB_2__::func_507(&uLocal_604, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_603, iLocal_789);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_643))
	{
		vVar1 = { 1686.18f, -615.1f, 44.38f };
		fVar4 = -14.31f;
		if (ENTITY::IS_ENTITY_DEAD(iLocal_643))
		{
			iLocal_643 = __LIB_12__::func_885(uParam0, iLocal_644, vVar1, fVar4, 1, 1, 0, 1, 1, 1, 1, 0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_643))
			{
				return 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_643))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_643, true, false);
		ENTITY::_0x9587913B9E772D29(iLocal_643, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_643, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_643, 66, true);
	}
	func_567(uParam0);
	__LIB_12__::func_875(uParam0, iLocal_413, "RBRA_TARGET", 1);
	__LIB_12__::func_875(uParam0, iLocal_574, "RBRA_WIFE", 1);
	__LIB_12__::func_875(uParam0, iLocal_603, "RBRA_SON", 1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_790))
	{
		iLocal_790 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1679.15f, -620.929f, 42.754f, 0f, 0f, 0f, 12f, 12f, 10f, "Corral Move Restriction");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_790))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_790, 0, 0, 0, -1, -1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_791))
	{
		iLocal_791 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1679.15f, -620.929f, 42.754f, 0f, 0f, 0f, 10f, 10f, 8f, "Corral Spawn Restriction");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_791))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_791, 0, 0, 0, -1, -1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_528))
	{
		iLocal_528 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volHiddenByHouse");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_528))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_528, 1694.092f, -610.167f, 43.43f, 0f, 0f, 24.243f, 8.487f, 40.308f, 6.461f);
		VOLUME::_0x39816F6F94F385AD(iLocal_528, 1686.303f, -590.465f, 43.43f, 0f, 0f, -67.511f, 13.488f, 14.277f, 6.461f);
		VOLUME::_0x39816F6F94F385AD(iLocal_528, 1692.714f, -620.009f, 43.452f, 0f, 0f, -34.988f, 12f, 5f, 6f);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_791))
	{
		__LIB_0__::func_566(iLocal_791, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_792))
	{
		iLocal_792 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1673.662f, -620.982f, 46.057f, 0f, 0f, 27.92f, 34f, 32f, 10f, "mVolTriggerInitialScene");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_529))
	{
		iLocal_529 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1686.225f, -613.214f, 44.678f, 0f, 0f, 0f, 3f, 3f, 2f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_530))
	{
		iLocal_530 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iLocal_413, true, false), 0f, 0f, 0f, 8f, 8f, 5f, "m_volFocus");
	}
	if (!__LIB_3__::func_587(iLocal_532, 1, 1))
	{
		iLocal_532 = __LIB_3__::func_721(iLocal_413, iLocal_530, 16);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_531))
	{
		iLocal_531 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1672.083f, -644.5321f, 42.544f, 0f, 0f, 0f, 50f, 50f, 5f, "m_volAmbientRestrict");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_531))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_531, 4096, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_531, 4096, 0, 0, -1, -1, 0);
	}
	func_571(uParam0);
	__LIB_3__::func_414(&uLocal_842, 1675.441f, -614.9762f, 43.0663f, 3f, 1, 38, 0);
	__LIB_3__::func_414(&uLocal_843, 1680.293f, -611.2579f, 43.5857f, 3.5f, 1, -1, 0);
	__LIB_3__::func_414(&uLocal_844, 1685.4f, -615.28f, 44.25f, 3f, 1, 38, 0);
	__LIB_0__::func_401(joaat("BH_RHODES_RANCHER"));
	GRAPHICS::_0xDFEA23EC90113657(joaat("BH_RHODES_RANCHER"));
	PATHFIND::_0x7C334FF4D9215912("bh_rhodes_rancher");
	if (iVar0 == 1)
	{
		if (!func_574(1) && !func_575())
		{
			return 0;
		}
	}
	else if (iVar0 < 1)
	{
		if ((!func_574(2) && !func_574(1)) && !func_576())
		{
			return 0;
		}
	}
	return 1;
}

bool func_283(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_413, 0))
	{
		return true;
	}
	__LIB_13__::func_110(&Local_23, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
	func_601();
	if (func_602() || func_603(iLocal_413, &uLocal_472, 0))
	{
		if (__LIB_5__::func_463())
		{
			__LIB_5__::func_20(0, 0);
		}
		bLocal_722 = true;
		iLocal_17 = 20;
		func_604();
		__LIB_3__::func_953(&iLocal_532, 1);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_JOHNSON"));
		return true;
	}
	if ((__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || __LIB_10__::func_477(iLocal_413, &uLocal_793, &uLocal_798, &uLocal_799, 2f, 65f, 0f, 0, 15f, 1)) || __LIB_0__::func_665(Global_35, iLocal_603, 1, 1) < 10f)
	{
		__LIB_13__::func_179(iLocal_18[0], "PBL_approach");
		if (__LIB_5__::func_463())
		{
			__LIB_5__::func_20(1, 0);
		}
		iLocal_17 = 0;
		func_604();
		__LIB_10__::func_197(&Local_23, 4, 1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_JOHNSON"));
		return true;
	}
	return false;
}

bool func_286(int iParam0, vector3 vParam1, float fParam4)
{
	struct<11> Var0;
	int iVar11;
	Var0.f_10 = 7;
	Var0 = 0;
	Var0.f_1 = 0;
	Var0.f_4 = 0;
	Var0.f_3 = 0;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	Var0.f_2 = 0;
	iVar11 = 0;
	*iParam0 = __LIB_4__::func_720(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return true;
	}
	else if (iVar11 == 2)
	{
		return true;
	}
	return true;
}

bool func_291()
{
	if (__LIB_10__::func_133(13, 4))
	{
		return true;
	}
	return false;
}

bool func_292()
{
	if (__LIB_10__::func_133(13, 8))
	{
		return true;
	}
	return false;
}

int func_310(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_649(uParam4);
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

void func_316()
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_603, 0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_603, false);
		if (!__LIB_0__::func_163(iLocal_603, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iLocal_603, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1675.635f, -619.76f, 43.3622f, 2f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1664.956f, -610.0569f, 43.4928f, 2f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 257, 2f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_603, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			bLocal_443 = true;
		}
		if (__LIB_0__::func_272(iLocal_574, 0))
		{
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_574, false);
			if (!__LIB_0__::func_163(iLocal_574, 242628503))
			{
				TASK::CLEAR_PED_TASKS(iLocal_574, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1674.445f, -621.2303f, 43.1739f, 2f, 20000, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1663.624f, -610.7069f, 43.2619f, 2f, 20000, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_603, 0f, 0.5f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_574, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
}

bool func_324()
{
	if (iLocal_15 >= 1 && !bLocal_430)
	{
		return true;
	}
	return false;
}

void func_325(var uParam0)
{
	func_700(uParam0);
	func_701(uParam0);
	if (PED::_IS_PED_HOGTIED(iLocal_413))
	{
		if (__LIB_0__::func_396(Global_35) && PED::_GET_CARRIER_AS_MOUNT(iLocal_413) == __LIB_2__::func_825(Global_35))
		{
			func_333(uParam0);
		}
		else
		{
			__LIB_13__::func_92(&Local_23);
		}
		if (!bLocal_446)
		{
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			bLocal_446 = true;
		}
	}
}

void func_326(var uParam0)
{
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_413) && !ENTITY::IS_ENTITY_DEAD(iLocal_603)) && !ENTITY::IS_ENTITY_DEAD(iLocal_574))
	{
		switch (iLocal_16)
		{
			case 0:
				iLocal_16 = 1;
				break;
			case 1:
				if (__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || func_702(50f))
				{
					__LIB_13__::func_179(iLocal_18[0], "PBL_idle_a");
					if (__LIB_13__::func_180(iLocal_18[0], "PBL_idle_a"))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_idle_a"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_a", false, false);
							if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_P1", 0))
							{
								iLocal_16 = 2;
							}
						}
						else
						{
							__LIB_13__::func_181(iLocal_18[0], "PBL_idle_a");
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_a", false, false);
							if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_P1", 0))
							{
								iLocal_16 = 2;
							}
						}
					}
				}
				break;
			case 2:
				if (!__LIB_6__::func_904())
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_a"))
						{
							__LIB_13__::func_179(iLocal_18[0], "PBL_mount_a");
							if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_a"))
							{
								if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_a"))
								{
								}
							}
						}
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "idle_a", 1))
					{
						if (!iLocal_436[0])
						{
							if (__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || func_702(30f))
							{
								if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_LP1", 0))
								{
									iLocal_436[0] = 1;
									iLocal_16 = 3;
								}
							}
						}
					}
				}
				break;
			case 3:
				if (!__LIB_6__::func_904())
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
					{
						__LIB_13__::func_179(iLocal_18[0], "PBL_mount_b");
						if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_b"))
						{
							if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_b"))
							{
							}
						}
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "idle_a", 1))
					{
						if (!iLocal_436[1])
						{
							if (__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || func_702(30f))
							{
								if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_LP2", 0))
								{
									iLocal_436[1] = 1;
									iLocal_16 = 4;
								}
							}
						}
					}
				}
				break;
			case 4:
				if (!__LIB_6__::func_904())
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
					{
						__LIB_13__::func_179(iLocal_18[0], "PBL_mount_a");
						if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_a"))
						{
							if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_a"))
							{
							}
						}
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "idle_a", 1))
					{
						if (!iLocal_436[2])
						{
							if (__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || func_702(30f))
							{
								if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_LP3", 0))
								{
									iLocal_436[2] = 1;
									iLocal_16 = 5;
								}
							}
						}
					}
				}
				break;
			case 5:
				if (!__LIB_6__::func_904())
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
					{
						__LIB_13__::func_179(iLocal_18[0], "PBL_mount_b");
						if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_b"))
						{
							if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_b"))
							{
							}
						}
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "idle_a", 1))
					{
						if (!iLocal_436[3])
						{
							if (__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || func_702(30f))
							{
								if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_LP4", 0))
								{
									iLocal_436[3] = 1;
									iLocal_16 = 6;
								}
							}
						}
					}
				}
				break;
			case 6:
				if (!__LIB_6__::func_904())
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
					{
						__LIB_13__::func_179(iLocal_18[0], "PBL_mount_a");
						if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_a"))
						{
							if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_a"))
							{
							}
						}
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "idle_a", 1))
					{
						if (!iLocal_436[4])
						{
							if (__LIB_1__::func_205(Global_35, iLocal_792, 1, 0) || func_702(30f))
							{
								if (__LIB_12__::func_876(uParam0, "RBRAN_IG1_LP5", 0))
								{
									iLocal_436[4] = 1;
									iLocal_16 = 7;
								}
							}
						}
					}
				}
				break;
			case 7:
				if (!__LIB_6__::func_904())
				{
					func_601();
				}
				break;
		}
	}
}

bool func_327(var uParam0)
{
	if ((func_702(25f) || __LIB_0__::func_665(Global_35, iLocal_603, 1, 1) < 25f) && !__LIB_1__::func_205(Global_35, iLocal_528, 1, 0))
	{
		if (__LIB_2__::func_215(iLocal_574, Global_35, 1, 1114636288 /* Float: 60f */, 0) || __LIB_2__::func_215(iLocal_413, Global_35, 1, 1114636288 /* Float: 60f */, 0))
		{
			iLocal_17 = 0;
			return true;
		}
	}
	if (func_602() || func_603(iLocal_413, &uLocal_472, 0))
	{
		if (__LIB_5__::func_463())
		{
			__LIB_5__::func_20(0, 0);
		}
		bLocal_722 = true;
		iLocal_17 = 20;
		return true;
	}
	return false;
}

bool func_328(var uParam0, bool bParam1)
{
	__LIB_13__::func_155(uParam0);
	__LIB_10__::func_161(uParam0);
	if (__LIB_10__::func_138(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235.f_4 = 1;
			__LIB_10__::func_66(uParam0, 1);
			break;
		case 1:
			if (__LIB_10__::func_138(uParam0))
			{
				uParam0->f_308 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(__LIB_10__::func_45(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, __LIB_0__::func_93());
				__LIB_2__::func_261(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, 0, 15);
				}
				uParam0->f_309 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(__LIB_10__::func_67(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, 0, 15);
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 1, 0);
				if (!Global_1935630.f_12)
				{
					if (__LIB_0__::func_181())
					{
						__LIB_10__::func_139(uParam0, Global_35, "John");
					}
					else
					{
						__LIB_10__::func_139(uParam0, Global_35, "Arthur");
					}
				}
				__LIB_10__::func_140(uParam0, 1);
				__LIB_10__::func_141(uParam0);
				__LIB_10__::func_147(uParam0->f_300);
				__LIB_10__::func_148(uParam0->f_300);
				__LIB_10__::func_66(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_10__::func_68(uParam0))
			{
				__LIB_10__::func_183(uParam0);
				__LIB_13__::func_92(uParam0);
				__LIB_10__::func_66(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_721(uParam0);
			}
			__LIB_10__::func_193(uParam0);
			__LIB_10__::func_219(uParam0);
			if (__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 20f, 1))
			{
				__LIB_13__::func_92(uParam0);
			}
			if (__LIB_10__::func_69(uParam0))
			{
				__LIB_10__::func_183(uParam0);
				__LIB_10__::func_66(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_329(var uParam0)
{
	vector3 vVar0;
	vVar0 = { 1436.884f, -718.5659f, 59.7358f };
	if (__LIB_0__::func_94(Global_35, vLocal_414, 1) > 180f && __LIB_0__::func_94(Global_35, vVar0, 1) > 50f)
	{
		if (bLocal_839)
		{
			if (!bLocal_444)
			{
				if (func_726(uParam0, vVar0))
				{
					if (func_727(uParam0))
					{
						bLocal_444 = true;
					}
				}
			}
		}
	}
	if ((((bLocal_444 && __LIB_0__::func_272(iLocal_825[0], 0)) && __LIB_0__::func_272(__LIB_2__::func_825(iLocal_825[0]), 0)) && iLocal_820 != 0) && iLocal_820 != 6)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_825[0], 1, 1) > 180f)
		{
			if (!__LIB_0__::func_163(iLocal_825[0], 1227113341))
			{
				TASK::TASK_GO_TO_ENTITY(iLocal_825[0], Global_35, -1, 30f, 1f, 40f, 0);
			}
		}
		else if (__LIB_0__::func_665(Global_35, iLocal_825[0], 1, 1) < 30f)
		{
			if (!__LIB_0__::func_163(iLocal_825[0], 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_825[0], Global_35, 35f, -1, 256, 3f, 0);
			}
		}
		else if (!__LIB_0__::func_163(iLocal_825[0], -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_825[0], -1);
		}
	}
	if (iLocal_820 >= 6)
	{
		if (__LIB_0__::func_272(iLocal_413, 0) && PED::_IS_PED_HOGTIED(iLocal_413))
		{
			if (ENTITY::_0x61914209C36EFDDB(iLocal_413) == 8)
			{
				if (!bLocal_455)
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_13__::func_123(uParam0, "BRA_R_ESC3HORS", 0, 0))
						{
							bLocal_455 = true;
						}
					}
					else
					{
						bLocal_455 = true;
					}
				}
			}
			else if (ENTITY::_0x61914209C36EFDDB(iLocal_413) == 7)
			{
				if (bLocal_839)
				{
					if (func_728())
					{
						if (!__LIB_6__::func_904() && !bLocal_456)
						{
							if (__LIB_13__::func_123(uParam0, "BRA_R_ESC3RIDE", 0, 0))
							{
								bLocal_456 = true;
							}
						}
					}
				}
				else if (!__LIB_6__::func_904() && !bLocal_456)
				{
					if (__LIB_13__::func_123(uParam0, "BRA_R_ESC3RIDE", 0, 0))
					{
						bLocal_456 = true;
					}
				}
			}
		}
	}
	switch (iLocal_820)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, vLocal_414, 1) > 220f)
			{
				if (bLocal_435)
				{
					if (!PED::_IS_PED_HOGTIED(iLocal_413) && ENTITY::_0x61914209C36EFDDB(iLocal_413) != 1)
					{
						if (!PED::IS_PED_FLEEING(iLocal_413))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_413, Global_35, 1000f, -1, 256, 2f, 0);
						}
					}
				}
				bLocal_430 = true;
				if (__LIB_6__::func_904())
				{
					__LIB_5__::func_20(1, 0);
				}
				if (!__LIB_6__::func_904())
				{
					if (ENTITY::_0x61914209C36EFDDB(iLocal_413) == 7)
					{
						iLocal_820 = 1;
						__LIB_1__::func_148(&uLocal_821);
					}
					else if (ENTITY::_0x61914209C36EFDDB(iLocal_413) == 5)
					{
						bLocal_840 = true;
						iLocal_820 = 6;
					}
					if (PED::_0x913D04A5176F84C9(iLocal_413))
					{
						iLocal_820 = 6;
					}
				}
			}
			else
			{
				if (!bLocal_461)
				{
					if ((!__LIB_0__::func_272(iLocal_574, 0) && !bLocal_727) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_574, Global_35, 1, 1))
					{
						bLocal_461 = true;
						if (!bLocal_459)
						{
							__LIB_5__::func_20(0, 1);
							if (__LIB_12__::func_876(uParam0, "BRA_SON_RUN", 0))
							{
								bLocal_459 = true;
							}
						}
						__LIB_10__::func_142(uParam0->f_174, 8);
						StringCopy(&(Local_23.f_346), "BRA_RWD_WIFE", 24);
					}
				}
				if (!PED::_IS_PED_HOGTIED(iLocal_413))
				{
					func_730();
				}
				else
				{
					__LIB_0__::func_172(iLocal_529);
				}
				if ((!__LIB_0__::func_270() && __LIB_10__::func_166(iLocal_413, 0)) && !bLocal_442)
				{
					if (__LIB_1__::func_348(Global_35, iLocal_574) < 20f && !bLocal_443)
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "RBRAN_IG3_P1WIF", 0))
							{
								bLocal_442 = true;
							}
						}
					}
				}
				if (bLocal_442 && !bLocal_443)
				{
					if (bLocal_452)
					{
						func_733(uParam0);
					}
				}
			}
			break;
		case 1:
			if (ENTITY::_0x61914209C36EFDDB(iLocal_413) == 7 && __LIB_13__::func_202())
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_413, sLocal_635, "escape_target", 1))
				{
					TASK::TASK_PLAY_ANIM(iLocal_413, sLocal_635, "escape_target", 4f, -8f, -1, 33562628, 0f, false, 0, false, 0, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413, false);
				iLocal_820 = 2;
				WEAPON::_CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_413);
				__LIB_1__::func_148(&uLocal_821);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_413, sLocal_635, "escape_target", 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_413, 1540420485))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_413, PED::GET_MOUNT(Global_35)))
					{
						iLocal_841 = PED::GET_PED_BONE_INDEX(PED::GET_MOUNT(Global_35), 36182);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_413, PED::GET_MOUNT(Global_35), iLocal_841, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_413, PED::GET_MOUNT(Global_35)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_413, true);
				ENTITY::DETACH_ENTITY(iLocal_413, true, true);
				__LIB_3__::func_676(iLocal_413, 3000, 9000, 0, 0);
				func_736();
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_413, Global_35, 4, 256, 1000f, -1, 0);
				__LIB_13__::func_92(&Local_23);
				iLocal_22 = 0;
				iLocal_820 = 3;
			}
			break;
		case 3:
			if (!bLocal_453 && !__LIB_6__::func_904())
			{
				if (!__LIB_0__::func_181())
				{
					if (__LIB_12__::func_876(uParam0, "RBRAN_IG4_P1A", 0))
					{
						bLocal_453 = true;
						TASK::_0x79559BAD83CCD038(iLocal_413, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
						TASK::TASK_SMART_FLEE_PED(iLocal_413, Global_35, 1000f, -1, 256, 2f, 0);
						iLocal_820 = 4;
					}
				}
				else if (__LIB_12__::func_876(uParam0, "RBRAN_IG4_P1J", 0))
				{
					bLocal_453 = true;
					TASK::_0x79559BAD83CCD038(iLocal_413, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
					TASK::TASK_SMART_FLEE_PED(iLocal_413, Global_35, 1000f, -1, 256, 2f, 0);
					iLocal_820 = 4;
				}
			}
			if (!PED::IS_PED_RAGDOLL(iLocal_413))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_413, false);
			}
			func_737(uParam0);
			break;
		case 4:
			__LIB_13__::func_153(&uLocal_407, &iLocal_413);
			if (!PED::IS_PED_RAGDOLL(iLocal_413))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_413, false);
			}
			if (PED::_IS_PED_HOGTIED(iLocal_413))
			{
				if (!bLocal_454)
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_13__::func_123(uParam0, "BRA_R_ESC3_", 0, 0))
					{
						bLocal_454 = true;
					}
				}
				else if (!__LIB_6__::func_904())
				{
					if (!bLocal_457)
					{
						if (__LIB_13__::func_123(uParam0, "BRA_R_ESC3TIE", 0, 0))
						{
							if (bLocal_839)
							{
								AUDIO::TRIGGER_MUSIC_EVENT(sLocal_788);
								iLocal_820 = 5;
							}
							else
							{
								func_739();
								AUDIO::TRIGGER_MUSIC_EVENT(sLocal_788);
								iLocal_820 = 8;
							}
							bLocal_457 = true;
						}
					}
					else if (bLocal_839)
					{
						iLocal_820 = 5;
					}
				}
			}
			else if (!PED::_IS_PED_LASSOED(iLocal_413))
			{
				if (PED::IS_PED_FLEEING(iLocal_413))
				{
					func_740();
					if (!bLocal_775)
					{
						if (__LIB_13__::func_123(uParam0, "BRACHASE_", 0, 0))
						{
							bLocal_775 = true;
						}
					}
					else
					{
						func_741(uParam0);
					}
				}
			}
			else
			{
				func_737(uParam0);
			}
			break;
		case 5:
			if (PED::_IS_PED_HOGTIED(iLocal_413))
			{
				if (__LIB_10__::func_102(iLocal_413, 0))
				{
					if (bLocal_839)
					{
						TASK::CLEAR_PED_TASKS(iLocal_825[0], true, false);
						__LIB_0__::func_37(&uLocal_542);
						iLocal_820 = 6;
					}
				}
				else if (__LIB_10__::func_79(iLocal_413))
				{
					if (!__LIB_0__::func_75(&uLocal_542))
					{
						__LIB_1__::func_283(&uLocal_542, 0);
					}
					else if (__LIB_0__::func_265(&uLocal_542) > 7f)
					{
						if (bLocal_839)
						{
							TASK::CLEAR_PED_TASKS(iLocal_825[0], true, false);
							__LIB_0__::func_37(&uLocal_542);
							iLocal_820 = 6;
						}
					}
				}
			}
			else
			{
				iLocal_820 = 4;
			}
			break;
		case 6:
			if (func_744())
			{
				func_739();
				iLocal_820 = 8;
			}
			else if (bLocal_839)
			{
				func_745();
				if (func_746(uParam0))
				{
					__LIB_1__::func_148(&uLocal_821);
					func_739();
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_413, true);
					iLocal_820 = 7;
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_821) > 5f && __LIB_0__::func_665(Global_35, iLocal_413, 1, 1) < 5f)
			{
				if (bLocal_839)
				{
					if (func_728())
					{
						if (__LIB_13__::func_123(uParam0, "BRA_R_CHA3_", 0, 0))
						{
							iLocal_820 = 8;
						}
					}
					else
					{
						iLocal_820 = 8;
					}
				}
			}
			break;
		case 8:
			break;
	}
}

void func_330()
{
	if (!bLocal_443)
	{
		return;
	}
	if (bLocal_723)
	{
		return;
	}
	if (bLocal_727 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
		{
			if (__LIB_1__::func_348(Global_35, iLocal_574) > 150f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_574))
				{
					bLocal_727 = true;
				}
			}
		}
	}
	if (bLocal_728 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_603))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_603))
			{
				if (__LIB_1__::func_348(Global_35, iLocal_603) > 150f)
				{
					bLocal_728 = true;
				}
			}
		}
	}
}

void func_333(var uParam0)
{
	switch (iLocal_22)
	{
		case 0:
			if (__LIB_0__::func_94(iLocal_413, vLocal_414, 1) < 700f)
			{
				if ((__LIB_0__::func_75(&uLocal_739) && !__LIB_6__::func_904()) && !__LIB_13__::func_120("BRA_R_CHA3_", 0))
				{
					if (__LIB_0__::func_265(&uLocal_739) > 10f)
					{
						if (!__LIB_0__::func_270())
						{
							if (bLocal_723)
							{
								func_747(uParam0);
							}
							else
							{
								func_748(uParam0);
							}
						}
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_739);
				}
			}
			break;
		case 1:
			if (bLocal_723)
			{
				if (__LIB_13__::func_113(&Local_23, 1056964608 /* Float: 0.5f */, func_749(), 1))
				{
					if (iLocal_738 < 4 && iLocal_738 != 0)
					{
						if (__LIB_5__::func_463())
						{
							__LIB_6__::func_900(sLocal_734[(iLocal_738 - 1)], 0, 0);
						}
					}
					iLocal_548++;
					__LIB_1__::func_148(&uLocal_739);
					iLocal_22 = 0;
				}
				else if (!__LIB_6__::func_904() && !__LIB_13__::func_76())
				{
					__LIB_13__::func_92(&Local_23);
					__LIB_1__::func_148(&uLocal_739);
					iLocal_22 = 0;
				}
			}
			else if (__LIB_13__::func_113(&Local_23, 1056964608 /* Float: 0.5f */, func_749(), 1))
			{
				if (__LIB_13__::func_120(sLocal_733, 0))
				{
					__LIB_13__::func_121(0, sLocal_733, 0);
				}
				__LIB_1__::func_148(&uLocal_739);
				iLocal_22 = 3;
			}
			else if (!__LIB_6__::func_904() && !__LIB_13__::func_76())
			{
				if (bLocal_462)
				{
					if (__LIB_12__::func_876(uParam0, "BRARETURN1HURT", 0))
					{
						__LIB_13__::func_92(&Local_23);
						iLocal_22 = 2;
					}
				}
				else if (bLocal_839)
				{
					if (__LIB_12__::func_876(uParam0, "BRARETURN1SPEAK", 0))
					{
						__LIB_13__::func_92(&Local_23);
						iLocal_22 = 2;
					}
				}
				else if (__LIB_12__::func_876(uParam0, "BRARETURN1DIDNT", 0))
				{
					__LIB_13__::func_92(&Local_23);
					iLocal_22 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_904())
			{
				if (__LIB_13__::func_123(uParam0, "BRARETURN2_", 0, 0))
				{
					__LIB_1__::func_148(&uLocal_739);
					iLocal_22 = 3;
				}
			}
			break;
		case 3:
			break;
	}
}

bool func_341(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_721(uParam0);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	__LIB_13__::func_155(uParam0);
	__LIB_10__::func_193(uParam0);
	__LIB_10__::func_196(uParam0);
	__LIB_10__::func_161(uParam0);
	__LIB_10__::func_219(uParam0);
	if (__LIB_10__::func_138(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		__LIB_10__::func_162(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (__LIB_13__::func_99(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				__LIB_10__::func_71(uParam0, 2);
			}
			break;
		case 2:
			__LIB_10__::func_188(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			__LIB_13__::func_115(uParam0, 10);
			__LIB_1__::func_148(&(uParam0->f_364));
			uParam0->f_367 = 0;
			__LIB_1__::func_544(uParam0->f_306);
			if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
			{
				__LIB_10__::func_72(uParam0);
			}
			if (__LIB_10__::func_73(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(__LIB_10__::func_73(uParam0->f_65));
			}
			__LIB_10__::func_71(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (__LIB_10__::func_74(uParam0))
				{
					if (__LIB_13__::func_174(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						__LIB_1__::func_148(&(uParam0->f_312));
						__LIB_0__::func_37(&(uParam0->f_318));
						uParam0->f_361 = 1;
						__LIB_10__::func_71(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (__LIB_0__::func_264(&(uParam0->f_364)) > 10f || !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						__LIB_10__::func_197(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						__LIB_0__::func_37(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(uParam0->f_312)) > 2f || __LIB_0__::func_58(uParam0))
			{
				if (!__LIB_0__::func_27(uParam0->f_328, 128))
				{
					if (__LIB_13__::func_125(uParam0))
					{
						__LIB_8__::func_227(100, 1);
						__LIB_1__::func_148(&(uParam0->f_318));
						__LIB_1__::func_683(&(uParam0->f_328), 128);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_329, 256))
				{
					if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						__LIB_13__::func_128(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				__LIB_13__::func_133(uParam0);
			}
			else
			{
				if (__LIB_10__::func_145(uParam0))
				{
					__LIB_10__::func_71(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					__LIB_10__::func_71(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				__LIB_1__::func_148(&(uParam0->f_318));
				__LIB_10__::func_71(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!__LIB_0__::func_163(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				__LIB_13__::func_115(uParam0, 12);
				func_774(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_382(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_820(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_820(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_820(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_820(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_820(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_820(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_820(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_820(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_820(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_820(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_820(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_820(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_820(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822();
						func_823(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_820(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_382(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_382(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_382(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_820(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_820(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_858();
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
							func_820(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_415(var uParam0)
{
	float fVar0;
	if (iLocal_784 == 0)
	{
		fVar0 = 5f;
	}
	else
	{
		fVar0 = 15f;
	}
	if ((__LIB_0__::func_272(iLocal_413, 0) && __LIB_0__::func_272(iLocal_427, 0)) && __LIB_1__::func_205(Global_35, Local_23.f_306, 1, 0))
	{
		if (iLocal_784 < 4)
		{
			if (__LIB_0__::func_75(&uLocal_730))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_0__::func_265(&uLocal_730) > fVar0)
					{
						if (!bLocal_783)
						{
							if (__LIB_12__::func_876(uParam0, "BRA_BEG", 0))
							{
								bLocal_783 = true;
							}
						}
						else if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "RBRAN_SHR_CELL1", 0))
							{
								iLocal_784++;
								bLocal_783 = false;
								__LIB_1__::func_148(&uLocal_730);
							}
						}
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_730);
			}
		}
	}
}

void func_416(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_413, Global_35) < 20f && __LIB_1__::func_205(Global_35, Local_23.f_306, 1, 0))
	{
		if (__LIB_0__::func_75(&uLocal_730) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_730) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 9f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "BRA_CELLGO_FK", 0))
					{
						__LIB_1__::func_148(&uLocal_730);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_730);
		}
	}
}

void func_417()
{
	if (__LIB_0__::func_272(iLocal_603, 0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_603, false);
		TASK::TASK_SMART_FLEE_PED(iLocal_603, Global_35, 1000f, -1, 257, 2f, 0);
	}
	else if (__LIB_0__::func_272(iLocal_574, 0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_574, false);
		TASK::TASK_SMART_FLEE_PED(iLocal_574, Global_35, 1000f, -1, 257, 2f, 0);
	}
}

void func_418(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	func_906();
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_413, false);
	__LIB_0__::func_400(joaat("BH_RHODES_RANCHER"));
	PATHFIND::_0x527B97C203BB8606("bh_rhodes_rancher");
	GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("BH_RHODES_RANCHER"));
}

int func_474(int iParam0, int iParam1)
{
	var uVar0;
	return func_969(&uVar0, iParam0, iParam1);
}

void func_567(var uParam0)
{
	if (__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 0);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	}
}

int func_571(var uParam0)
{
	__LIB_13__::func_114(&Local_23);
	__LIB_13__::func_126(uParam0, &Local_23, &iLocal_413);
	if (bLocal_461)
	{
		StringCopy(&(Local_23.f_346), "BRA_RWD_WIFE", 24);
	}
	else
	{
		StringCopy(&(Local_23.f_346), "BRA_TGT_PYD", 24);
	}
	Local_23.f_299 = 6;
	Local_23.f_363 = sLocal_786;
	return 1;
}

bool func_574(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_18[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_18[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		if (iParam0 == 2)
		{
			iLocal_18[2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_189(2), 0, "PBL_say_goodbye", false, true);
		}
		else if (iParam0 == 1)
		{
			iLocal_18[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_189(1), 0, "PBL_exit", false, true);
		}
		else
		{
			iLocal_18[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_189(iParam0), 0, 0, false, true);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_18[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_18[iParam0]);
		}
	}
	return false;
}

bool func_575()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_18[2]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_18[2], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_18[2], 1686.706f, -616.5787f, 43.6f, 0f, 0f, 304.4863f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[2], "Target", iLocal_413, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[2], "woman", iLocal_574, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[2], "boy", iLocal_603, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_18[2]);
			return true;
		}
	}
	return false;
}

bool func_576()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_18[0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_18[0], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_18[0], 1686.706f, -616.5787f, 43.6f, 0f, 0f, 304.4863f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[0], "Target", iLocal_413, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[0], "woman", iLocal_574, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[0], "boy", iLocal_603, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[0], "HORSE", iLocal_643, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_a", false, false);
			ANIMSCENE::START_ANIM_SCENE(iLocal_18[0]);
			return true;
		}
	}
	else
	{
		iLocal_18[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_189(0), 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_18[0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_18[0]);
		}
	}
	return false;
}

void func_601()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
	{
		if (__LIB_0__::func_75(&uLocal_533))
		{
			if (__LIB_0__::func_264(&uLocal_533) > 15f)
			{
				if (!bLocal_819)
				{
					__LIB_13__::func_179(iLocal_18[0], "PBL_mount_a");
					if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_a"))
					{
						if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_a"))
						{
							bLocal_819 = true;
						}
					}
				}
				else
				{
					__LIB_13__::func_179(iLocal_18[0], "PBL_mount_b");
					if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_b"))
					{
						if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_b"))
						{
							bLocal_819 = false;
						}
					}
				}
				__LIB_0__::func_37(&uLocal_533);
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_533);
		}
	}
	func_1056();
}

bool func_602()
{
	if (!__LIB_0__::func_272(iLocal_413, 0))
	{
		return false;
	}
	if (!bLocal_462)
	{
		if ((func_603(iLocal_574, &uLocal_575, 0) || PED::_IS_PED_LASSOED(iLocal_574)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_574, Global_35, 1, 1))
		{
			bLocal_462 = true;
		}
	}
	if (((func_603(iLocal_574, &uLocal_575, 0) || func_603(iLocal_603, &uLocal_604, 0)) || PED::_IS_PED_LASSOED(iLocal_574)) || PED::_IS_PED_LASSOED(iLocal_603))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_a") || ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_b"))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "MOUNT_A", 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "mount_b", 1))
			{
				__LIB_13__::func_179(iLocal_18[0], "PBL_mount_breakout");
				if (__LIB_13__::func_180(iLocal_18[0], "PBL_mount_breakout"))
				{
					if (__LIB_13__::func_181(iLocal_18[0], "PBL_mount_breakout"))
					{
					}
				}
			}
		}
		func_906();
		return true;
	}
	return false;
}

bool func_603(int iParam0, var uParam1, bool bParam2)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return true;
	}
	__LIB_4__::func_228(uParam1);
	__LIB_1__::func_401(uParam1, 1);
	__LIB_2__::func_828(uParam1, 1);
	__LIB_2__::func_829(uParam1, 1);
	__LIB_1__::func_398(uParam1, 1);
	__LIB_1__::func_402(uParam1, bParam2);
	__LIB_1__::func_413(uParam1, 0);
	__LIB_2__::func_830(uParam1, 1);
	__LIB_1__::func_406(uParam1, 0);
	if (__LIB_13__::func_199(iParam0, 0, uParam1, &iLocal_412, 0, 0))
	{
		if (iLocal_412 == 4)
		{
			return true;
		}
		else if (iLocal_412 == 256)
		{
			return true;
		}
		else if (iLocal_412 == 2)
		{
			return true;
		}
		else if (iLocal_412 == 16)
		{
			return true;
		}
		else if (iLocal_412 == 8)
		{
			if (!bParam2)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

void func_604()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_785))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_785);
	}
}

void func_649(var uParam0)
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

void func_700(var uParam0)
{
	if (!bLocal_723)
	{
		func_1192();
	}
	else if (!bLocal_429)
	{
		if ((iLocal_17 == 21 && __LIB_0__::func_48(iLocal_413, Global_35, 20f, 1)) && !PED::_IS_PED_HOGTIED(iLocal_413))
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "BRA_N_AGRO2", 0))
				{
					bLocal_429 = true;
				}
			}
		}
	}
}

void func_701(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	func_1194();
	func_1195();
	func_1196(uParam0);
	func_1197(uParam0);
	func_1198();
	func_1199();
	func_1200();
	func_1201();
	func_1202(uParam0);
	switch (iLocal_17)
	{
		case 0:
			__LIB_13__::func_66(uParam0->f_174);
			__LIB_13__::func_179(iLocal_18[0], "PBL_approach");
			if ((ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_a") && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "MOUNT_A", 1)) || (ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_b") && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_18[0], "mount_b", 1)))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(iLocal_18[0], 1.5f);
				if ((ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_a") && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_18[0]) > 20.3f) || (ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_mount_b") && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_18[0]) > 18.17f))
				{
					if (__LIB_13__::func_180(iLocal_18[0], "PBL_approach"))
					{
						if (__LIB_5__::func_463())
						{
							__LIB_5__::func_20(0, 0);
						}
						if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_P1", 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_RATE(iLocal_18[0], 1f);
							if (__LIB_13__::func_181(iLocal_18[0], "PBL_approach"))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_413, Global_35, -1, 0, 51, 0);
								__LIB_2__::func_56(iLocal_413, 1, 1);
								__LIB_3__::func_644(&Local_667, 0, 0, 0, 0);
								PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 1);
								PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 1);
								PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 7, 1, 1);
								__LIB_13__::func_182(iLocal_532, "BH_RANCHER", 0f, 0f, 0f, 0);
								iLocal_17 = 1;
							}
						}
					}
				}
			}
			else if (__LIB_13__::func_180(iLocal_18[0], "PBL_approach"))
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_P1", 0))
				{
					if (__LIB_13__::func_181(iLocal_18[0], "PBL_approach"))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_413, Global_35, -1, 0, 51, 0);
						__LIB_2__::func_56(iLocal_413, 1, 1);
						PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 1);
						PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 1);
						PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 7, 1, 1);
						__LIB_13__::func_182(iLocal_532, "BH_RANCHER", 0f, 0f, 0f, 0);
						iLocal_17 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_702(30f) || __LIB_0__::func_665(Global_35, iLocal_603, 1, 1) < 30f)
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_a") == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_a", true, false);
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_18[0], "Target"))
				{
					if (!__LIB_0__::func_163(iLocal_413, 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_ENTITY(0, Global_35, 10000, 3f, 1f, 2f, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "idle_b_target", Global_35, -1, 4f, -4f, 1, 0f, false, false, -1f, 0, 0, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					if (!__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "BRA_N_UNARM", 0))
						{
							iLocal_17 = 2;
						}
					}
				}
				func_1207();
			}
			break;
		case 2:
			func_1207();
			if (!__LIB_5__::func_463() && func_1208())
			{
				TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
				func_1209();
				iLocal_17 = 4;
			}
			if (func_1210())
			{
				func_1211();
				iLocal_17 = 3;
			}
			break;
		case 3:
			func_1207();
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_413, sLocal_635, "hands_up_idle_target", 1))
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				iLocal_17 = 4;
			}
			else if (!__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_P1B", 0))
				{
					iLocal_17 = 5;
				}
			}
			__LIB_3__::func_953(&iLocal_532, 1);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			break;
		case 4:
			if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_AIM", 0))
			{
				iLocal_17 = 5;
			}
			break;
		case 5:
			if (!__LIB_5__::func_463())
			{
				func_1212();
				__LIB_1__::func_148(&uLocal_730);
				iLocal_17 = 6;
			}
			break;
		case 6:
			if (func_702(30f))
			{
				if (iLocal_719 == 0 || __LIB_1__::func_285(&uLocal_730, 10f))
				{
					iLocal_719 = 0;
					func_1214();
					if (__LIB_0__::func_181())
					{
						__LIB_12__::func_876(uParam0, "RBRAN_IG2_AJ", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "RBRAN_IG2_AA", 0);
					}
					__LIB_1__::func_148(&uLocal_812);
					__LIB_0__::func_37(&uLocal_742);
					iLocal_17 = 8;
				}
				else if (iLocal_719 == 1)
				{
					__LIB_3__::func_609(3, 1);
					func_1214();
					if (__LIB_0__::func_181())
					{
						__LIB_12__::func_876(uParam0, "RBRAN_IG2_RJ", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "RBRAN_IG2_RA", 0);
					}
					func_1216();
					__LIB_0__::func_37(&uLocal_742);
					iLocal_17 = 15;
				}
				func_1217(uParam0);
			}
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_413, Global_35, 1, 1) || __LIB_13__::func_201(iLocal_413)) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 32768, 0))
			{
				__LIB_3__::func_609(3, 1);
				func_906();
				__LIB_0__::func_37(&uLocal_742);
				iLocal_17 = 20;
			}
			break;
		case 8:
			if (!__LIB_5__::func_463())
			{
				func_1218();
				iLocal_17 = 7;
			}
			break;
		case 7:
			if (!__LIB_5__::func_463())
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_603, iLocal_413, -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_574, iLocal_413, -1, 0, 51, 0);
				if (func_1219())
				{
					if (func_702(30f))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[2], false))
						{
							if (func_575())
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_b", true, false);
								iLocal_17 = 9;
							}
						}
					}
				}
				else if (!__LIB_0__::func_163(iLocal_413, 242628503))
				{
					func_1218();
				}
			}
			break;
		case 9:
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_18[2], "Target"))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_413, &Local_549);
				bLocal_839 = true;
				__LIB_10__::func_142(uParam0->f_174, 4);
				__LIB_3__::func_609(3, 3);
				__LIB_1__::func_715(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_0__::func_172(iLocal_529);
				PED::SET_PED_CONFIG_FLAG(iLocal_413, 196, true);
				if (func_291())
				{
				}
				func_1220();
				iLocal_17 = 11;
			}
			break;
		case 10:
			if (bLocal_433)
			{
				__LIB_13__::func_179(iLocal_18[2], "PBL_idle_c");
				if (__LIB_3__::func_642(iLocal_18[2], 100))
				{
					if (__LIB_13__::func_180(iLocal_18[2], "PBL_idle_c"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[2], "BOOL_idle_c", false, false);
						if (__LIB_13__::func_181(iLocal_18[2], "PBL_idle_c"))
						{
						}
						if (__LIB_1__::func_348(Global_35, iLocal_413) > 30f)
						{
							if (__LIB_5__::func_463())
							{
								__LIB_5__::func_20(1, 0);
							}
						}
						if (!__LIB_5__::func_463())
						{
							TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "hands_down_target", Global_35, 3, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
							TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
							TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 3f, 1f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "idle_b_target", Global_35, -1, 4f, -4f, 1, 0f, false, false, -1f, 0, 0, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							iLocal_17 = 11;
						}
					}
				}
			}
			else if (!__LIB_5__::func_463())
			{
				func_1220();
				iLocal_17 = 11;
			}
			TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
			break;
		case 11:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_413, &Local_549);
			func_1222(uParam0);
			__LIB_13__::func_179(iLocal_18[2], "PBL_idle_c");
			if (func_1223(iLocal_18[2], "PBL_say_goodbye"))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
				if (__LIB_13__::func_180(iLocal_18[2], "PBL_idle_c"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[2], "BOOL_idle_c", false, false);
					if (__LIB_13__::func_181(iLocal_18[2], "PBL_idle_c"))
					{
					}
				}
			}
			if (func_1210())
			{
				if (!bLocal_447)
				{
					func_1211();
					if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_WALK", 0))
					{
						__LIB_1__::func_148(&uLocal_730);
						bLocal_447 = true;
					}
				}
				if (bLocal_447 && ANIMSCENE::_0x1F0E401031E20146(iLocal_18[2], "PBL_idle_c"))
				{
					iLocal_17 = 12;
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_18[0], "PBL_idle_b"))
				{
					iLocal_17 = 12;
				}
			}
			break;
		case 15:
			if (!__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "BRA_N_NORS", 0))
				{
					__LIB_1__::func_148(&uLocal_730);
					iLocal_17 = 12;
				}
			}
			break;
		case 12:
			func_1222(uParam0);
			if (!bLocal_720 && bLocal_721)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
				bLocal_720 = true;
			}
			if (func_1224(uParam0))
			{
				__LIB_3__::func_953(&iLocal_532, 1);
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				if (func_1225())
				{
					if (!bLocal_720)
					{
						if (!__LIB_6__::func_904())
						{
							func_1226();
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[1], false))
							{
								iLocal_17 = 13;
							}
						}
					}
					else if (!bLocal_469)
					{
						if (!__LIB_6__::func_904())
						{
							if (func_702(30f))
							{
								if (!__LIB_6__::func_904())
								{
									if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_ESC", 0))
									{
										__LIB_1__::func_283(&uLocal_545, 0);
										if (__LIB_0__::func_272(iLocal_574, 0))
										{
											TASK::_0xE7FA07624574B79A(iLocal_413, iLocal_574, 2, 1, 3f, 1, 0, 0, 0);
										}
										bLocal_469 = true;
									}
								}
							}
						}
					}
					else if (__LIB_0__::func_265(&uLocal_545) > 4f)
					{
						__LIB_0__::func_37(&uLocal_545);
						func_1227();
						bLocal_725 = true;
						iLocal_17 = 14;
					}
				}
				else if (!__LIB_13__::func_201(iLocal_413))
				{
					func_1228();
					iLocal_17 = 14;
				}
			}
			break;
		case 13:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[1], false))
			{
				if (func_702(30f))
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_12__::func_876(uParam0, "RBRAN_IG2_ESC", 0);
					}
				}
			}
			if (__LIB_3__::func_642(iLocal_18[1], 100))
			{
				__LIB_0__::func_172(iLocal_529);
				func_1229();
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_18[1], "Target") && !__LIB_0__::func_163(iLocal_413, 242628503))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_413, joaat("MOTIONSTATE_RUN"), false, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 1703.383f, -624.5929f, 42.5903f, 2f, 0, false, 524419, -1f);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, 150f, -1, 257, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				if (__LIB_0__::func_163(iLocal_413, 242628503))
				{
					bLocal_722 = true;
					iLocal_17 = 14;
				}
			}
			break;
		case 14:
			if (!__LIB_0__::func_163(iLocal_413, 1435919172))
			{
				if (!PED::IS_PED_FLEEING(iLocal_413))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_413, Global_35, 1000f, -1, 257, 3f, 0);
				}
			}
			if (!__LIB_0__::func_163(iLocal_574, 1435919172))
			{
				if (!PED::IS_PED_FLEEING(iLocal_574))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_574, Global_35, 1000f, -1, 257, 3f, 0);
				}
			}
			if (!__LIB_0__::func_163(iLocal_574, 1435919172))
			{
				if (!PED::IS_PED_FLEEING(iLocal_574))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_574, Global_35, 1000f, -1, 257, 3f, 0);
				}
			}
			break;
		case 20:
			if (!__LIB_5__::func_463())
			{
				iLocal_17 = 19;
			}
			break;
		case 19:
			__LIB_5__::func_20(0, 0);
			if (__LIB_12__::func_876(uParam0, func_1230(), 0))
			{
				func_1231();
				iLocal_17 = 21;
			}
			break;
		case 21:
			if (((bLocal_443 && !bLocal_458) && !__LIB_6__::func_904()) && __LIB_12__::func_876(uParam0, "BRA_FAMFLEE", 0))
			{
				bLocal_458 = true;
			}
			__LIB_0__::func_172(iLocal_529);
			__LIB_3__::func_953(&iLocal_532, 1);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			if (!__LIB_0__::func_75(&uLocal_800))
			{
				__LIB_1__::func_148(&uLocal_800);
			}
			if (!bLocal_450)
			{
				if (!PED::_IS_PED_HOGTIED(iLocal_413))
				{
					if (PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 1, 0))
					{
						if (!__LIB_0__::func_272(iLocal_574, 0))
						{
							if (__LIB_12__::func_876(uParam0, "BRA_N_ATTW", 0))
							{
								bLocal_450 = true;
							}
						}
					}
				}
				else if (!__LIB_0__::func_272(iLocal_574, 0))
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_12__::func_876(uParam0, "BRA_HOG_KW", 0))
					{
						bLocal_450 = true;
					}
				}
			}
			if (!bLocal_464)
			{
				if (!PED::_IS_PED_HOGTIED(iLocal_413))
				{
					if (!bLocal_466)
					{
						if (PED::GET_PED_CONFIG_FLAG(iLocal_413, 11, false) == 1 || __LIB_0__::func_163(iLocal_413, 1313215416))
						{
							bLocal_465 = true;
							bLocal_466 = true;
						}
					}
				}
			}
			if (func_1232())
			{
				fVar3 = __LIB_0__::func_265(&uLocal_800);
				fVar4 = __LIB_0__::func_665(iLocal_413, Global_35, 1, 1);
				if (PED::_0xCC2B20596E29E4E3(iLocal_413, 46) == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413, 46, false);
				}
				if (fVar3 > 30f)
				{
					if (fVar4 > 3f)
					{
						func_1228();
					}
				}
			}
			if (PED::IS_PED_FLEEING(iLocal_413))
			{
				iLocal_17 = 14;
			}
			break;
		case 22:
			__LIB_0__::func_172(iLocal_530);
			__LIB_3__::func_953(&iLocal_532, 1);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			func_1222(uParam0);
			if (iLocal_719 == -1)
			{
				__LIB_3__::func_609(3, 1);
				func_906();
			}
			if (!bLocal_720 && !bLocal_725)
			{
				if ((((__LIB_13__::func_201(iLocal_413) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_LEFT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_RIGHT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_FRONT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_REAR_LASSO")))
				{
					func_1233(uParam0);
				}
				if (bLocal_721)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
					bLocal_720 = true;
				}
			}
			if (func_1234())
			{
				func_906();
				if (((__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_272(iLocal_574, 0)) && !PED::IS_PED_FLEEING(iLocal_603)) && !PED::IS_PED_FLEEING(iLocal_574))
				{
					func_1235(uParam0);
				}
			}
			else if (PED::_IS_PED_HOGTIED(iLocal_413))
			{
				if (((__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_48(Global_35, iLocal_603, 15f, 1)) && __LIB_0__::func_272(iLocal_574, 0)) && !bLocal_443)
				{
					if (!bLocal_435)
					{
						if (!__LIB_6__::func_904())
						{
							if (!bLocal_839)
							{
								if (!__LIB_6__::func_904())
								{
									if (__LIB_12__::func_876(uParam0, "BRA_HOGTIE", 0))
									{
										bLocal_435 = true;
									}
								}
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_603, Global_35, -1, 0, 51, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_574, Global_35, -1, 0, 51, 0);
								__LIB_12__::func_876(uParam0, "RBRAN_IG3_P1", 0);
								bLocal_435 = true;
							}
						}
					}
					else if (PED::_GET_CARRIER_AS_PED(iLocal_413) != 0 && !bLocal_452)
					{
						if (!__LIB_13__::func_158("BRA_HOGTIE") && !__LIB_13__::func_158("RBRAN_IG3_P1"))
						{
							if (!bLocal_839)
							{
								if (__LIB_12__::func_876(uParam0, "BRA_SON_NOG", 0))
								{
									bLocal_452 = true;
								}
							}
							else if (__LIB_12__::func_876(uParam0, "BRA_SON_YESG", 0))
							{
								bLocal_452 = true;
							}
						}
					}
				}
			}
			break;
	}
}

bool func_702(float fParam0)
{
	if (__LIB_0__::func_665(Global_35, iLocal_413, 1, 1) < fParam0)
	{
		return true;
	}
	return false;
}

void func_721(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && uParam0->f_62 != 0)
	{
		__LIB_10__::func_85(uParam0, 0);
	}
	if ((uParam0->f_301 == 2 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371)) && PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_69, 0, 1);
	}
	switch (uParam0->f_62)
	{
		case 0:
			if (__LIB_10__::func_199(uParam0))
			{
				__LIB_10__::func_85(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_25)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							__LIB_10__::func_86(uParam0);
						}
						else
						{
							if (uParam0->f_301 == 0)
							{
								Var4 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Sheriff", uParam0->f_30[0 /*14*/].f_9) };
								uParam0->f_371 = __LIB_2__::func_944(joaat("SC_BOUNTY_HUNTER_SHERIFF"), Var4, Var4.f_3, 0, 0, 0);
							}
							else
							{
								uParam0->f_371 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_4, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
							}
							STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
							TASK::_0xE69FDA40AAC3EFC0(uParam0->f_371, 0);
						}
					}
					else
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
						{
							Var0 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Chair", uParam0->f_30[0 /*14*/].f_9) };
							func_1261(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_1261(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
							}
						}
						__LIB_10__::func_72(uParam0);
						__LIB_10__::func_85(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
			{
				__LIB_10__::func_85(uParam0, 1);
			}
			if (__LIB_10__::func_69(uParam0) && __LIB_0__::func_75(&(uParam0->f_372)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f)
				{
					__LIB_13__::func_205(uParam0);
					__LIB_1__::func_148(&(uParam0->f_372));
					__LIB_10__::func_85(uParam0, 3);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_372));
			}
			break;
		case 3:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f || __LIB_10__::func_87(uParam0))
				{
					if (uParam0->f_360)
					{
						__LIB_10__::func_85(uParam0, 4);
					}
					else
					{
						__LIB_10__::func_85(uParam0, 5);
					}
				}
			}
			break;
		case 4:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_13__::func_127(uParam0))
				{
					__LIB_10__::func_85(uParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_13__::func_130(uParam0))
				{
					__LIB_1__::func_148(&(uParam0->f_372));
					__LIB_10__::func_85(uParam0, 6);
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f)
			{
				if (uParam0->f_361 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_30[0 /*14*/].f_1, false))
				{
					if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
					{
						if (uParam0->f_301 == 0)
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
							TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0->f_69, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						}
						else
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
						}
					}
					__LIB_10__::func_85(uParam0, 7);
				}
			}
			break;
	}
}

bool func_726(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_825[iVar0]))
		{
			iLocal_825[iVar0] = __LIB_12__::func_885(uParam0, joaat("A_M_M_VALFARMER_01"), vParam1 + Vector(IntToFloat(iVar0), IntToFloat(iVar0 * 1), IntToFloat(iVar0 * 1)), 180f, 1, 1, 0, 1, 1, 1, 1, 0);
			__LIB_9__::func_233(iLocal_825[iVar0], Global_35);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_825[iVar0]))
			{
				return false;
			}
		}
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
		{
			if (func_1269())
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_825[iVar0], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_825[iVar0], iLocal_789);
				__LIB_1__::func_766(iLocal_825[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_825[iVar0], 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_825[iVar0], 6, true);
				__LIB_4__::func_228(&uLocal_500);
				__LIB_1__::func_991(iLocal_825[iVar0], 0);
				if (iVar0 == 0)
				{
					if (!PED::_0x878B68960C1C2A35(iLocal_825[0], iLocal_838))
					{
						PED::SET_PED_AS_GROUP_LEADER(iLocal_825[0], iLocal_838, false);
					}
				}
				else if (!PED::IS_PED_GROUP_MEMBER(iLocal_825[iVar0], iLocal_838, 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_825[iVar0], 279, true);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_825[iVar0], iLocal_838);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		return true;
	}
	return false;
}

bool func_727(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_829[iVar0]))
		{
			iLocal_829[iVar0] = __LIB_13__::func_200(uParam0, iLocal_825[iVar0]);
			__LIB_1__::func_991(iLocal_829[iVar0], 0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_829[iVar0]))
			{
				return false;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_829[iVar0]))
		{
			ENTITY::_0x18FF3110CF47115D(iLocal_829[iVar0], 15, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		return true;
	}
	return false;
}

bool func_728()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_730()
{
	int iVar0;
	if (PED::IS_PED_ON_MOUNT(Global_35) && bLocal_722 == 0)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_413, 1, 1) < 20f)
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (__LIB_0__::func_272(iVar0, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
			}
		}
	}
}

void func_733(var uParam0)
{
	if (bLocal_720 && !bLocal_470)
	{
		if (__LIB_0__::func_75(&uLocal_754))
		{
			if (__LIB_0__::func_265(&uLocal_754) > 15f)
			{
				if ((!__LIB_6__::func_904() && !__LIB_0__::func_270()) && __LIB_1__::func_348(Global_35, iLocal_574) < 40f)
				{
					if (__LIB_12__::func_876(uParam0, sLocal_757, 0))
					{
						bLocal_470 = true;
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_754);
		}
	}
}

void func_736()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_787))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_787);
	}
}

void func_737(var uParam0)
{
	if (!bLocal_467)
	{
		if (!PED::_IS_PED_HOGTIED(iLocal_413))
		{
			if (PED::_IS_PED_LASSOED(iLocal_413))
			{
				__LIB_5__::func_20(0, 0);
				if (__LIB_13__::func_123(uParam0, "BRA_RECAP_", 0, 0))
				{
					bLocal_467 = true;
				}
			}
		}
	}
}

void func_739()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_785))
	{
		if (AUDIO::CANCEL_MUSIC_EVENT(sLocal_785))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_787))
	{
		if (AUDIO::CANCEL_MUSIC_EVENT(sLocal_787))
		{
		}
	}
}

void func_740()
{
	if (__LIB_0__::func_272(iLocal_413, 8))
	{
		if (__LIB_0__::func_665(iLocal_413, Global_35, 1, 1) > 35f && !bLocal_434)
		{
			bLocal_434 = true;
		}
		else if (__LIB_0__::func_665(iLocal_413, Global_35, 1, 1) < 15f && bLocal_434)
		{
			bLocal_434 = false;
		}
		if (bLocal_434)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_413, 1.5f);
		}
	}
}

void func_741(var uParam0)
{
	float fVar0;
	fVar0 = 6f;
	if (__LIB_0__::func_75(&uLocal_772))
	{
		if (iLocal_782 < 5)
		{
			if (__LIB_0__::func_265(&uLocal_772) > fVar0)
			{
				if ((!__LIB_6__::func_904() && !__LIB_0__::func_270()) && __LIB_1__::func_348(Global_35, iLocal_413) < 30f)
				{
					if (__LIB_12__::func_876(uParam0, sLocal_776[iLocal_782], 0))
					{
						iLocal_782++;
						__LIB_1__::func_148(&uLocal_772);
					}
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_772);
	}
}

bool func_744()
{
	int iVar0;
	if (__LIB_0__::func_94(Global_35, __LIB_10__::func_45(Local_23.f_300), 1) < 200f)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_825[iVar0], true, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_825[iVar0], Global_35, 200f, -1, 0, 3f, 0);
				__LIB_0__::func_325(&(iLocal_833[iVar0]));
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_745()
{
	if (__LIB_0__::func_272(iLocal_413, 0))
	{
		if (__LIB_10__::func_79(iLocal_413))
		{
			PED::SET_PED_RESET_FLAG(iLocal_413, 25, true);
		}
	}
}

bool func_746(var uParam0)
{
	char cVar0[16];
	int iVar2;
	switch (iLocal_824)
	{
		case 0:
			iLocal_824 = 1;
			break;
		case 1:
			if (func_1273(uParam0))
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_833[iVar2]))
					{
						iLocal_833[iVar2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_825[iVar2]);
					}
					iVar2++;
				}
				if (__LIB_6__::func_904())
				{
					__LIB_5__::func_20(1, 0);
				}
				__LIB_1__::func_683(&(Local_23.f_329), 32768);
				iLocal_824 = 2;
			}
			break;
		case 2:
			StringCopy(&cVar0, "BRA_R_CHA1", 16);
			if (bLocal_723)
			{
				StringConCat(&cVar0, "C", 16);
			}
			else if (bLocal_839)
			{
				StringConCat(&cVar0, "A", 16);
			}
			func_1274();
			if (func_1275())
			{
				if (__LIB_12__::func_876(uParam0, &cVar0, 0))
				{
					iLocal_824 = 3;
				}
			}
			if (func_1276())
			{
				__LIB_5__::func_20(1, 0);
				func_1277();
				iLocal_824 = 6;
			}
			break;
		case 3:
			if (func_1275())
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_13__::func_123(uParam0, "BRA_SEERIDE_", 0, 0))
					{
						iLocal_824 = 4;
					}
				}
			}
			else
			{
				__LIB_5__::func_20(1, 0);
				func_1277();
				iLocal_824 = 6;
			}
			break;
		case 4:
			if (!__LIB_6__::func_904())
			{
				StringCopy(&cVar0, "BRA_R_CHA2", 16);
				if (bLocal_723)
				{
					StringConCat(&cVar0, "C", 16);
				}
				else if (bLocal_839)
				{
					StringConCat(&cVar0, "A", 16);
				}
				else
				{
					StringConCat(&cVar0, "B", 16);
				}
				if (func_1275())
				{
					if (__LIB_12__::func_876(uParam0, &cVar0, 0))
					{
						iLocal_824 = 5;
					}
				}
			}
			if (func_1276() || !func_1275())
			{
				__LIB_5__::func_20(1, 0);
				func_1277();
				iLocal_824 = 6;
			}
			break;
		case 5:
			if (func_1276())
			{
				func_1277();
			}
			else
			{
				if (!bLocal_818)
				{
					__LIB_1__::func_148(&uLocal_815);
					bLocal_818 = true;
				}
				if (__LIB_0__::func_75(&uLocal_815))
				{
					if (__LIB_0__::func_265(&uLocal_815) > 3f)
					{
						__LIB_0__::func_37(&uLocal_815);
						func_1278();
					}
				}
				if (__LIB_0__::func_75(&uLocal_809))
				{
					func_1274();
					if (__LIB_0__::func_265(&uLocal_809) > 3f)
					{
						func_1277();
						__LIB_0__::func_37(&uLocal_809);
					}
				}
			}
			func_1279(uParam0);
			func_1280(uParam0);
			if (func_1281())
			{
				return true;
			}
			break;
		case 6:
			func_1279(uParam0);
			func_1280(uParam0);
			if (func_1281())
			{
				return true;
			}
			break;
	}
	if (PED::_IS_PED_HOGTIED(iLocal_413))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_413, false);
	}
	else
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_413, true);
	}
	return false;
}

void func_747(var uParam0)
{
	if (iLocal_738 < 3)
	{
		if (__LIB_12__::func_876(uParam0, sLocal_734[iLocal_738], 0))
		{
			iLocal_738++;
			iLocal_22 = 1;
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_739);
		iLocal_22 = 3;
	}
}

void func_748(var uParam0)
{
	if (__LIB_10__::func_166(iLocal_413, 0))
	{
		if (!bLocal_471 && __LIB_0__::func_94(iLocal_413, vLocal_414, 1) > 50f)
		{
			if (__LIB_13__::func_123(uParam0, sLocal_733, 0, 0))
			{
				bLocal_471 = true;
				iLocal_22 = 1;
			}
		}
	}
	else if (iLocal_642 < 5)
	{
		if (__LIB_12__::func_876(uParam0, sLocal_636[iLocal_642], 0))
		{
			iLocal_642++;
			__LIB_1__::func_148(&uLocal_739);
		}
	}
}

char* func_749()
{
	switch (iLocal_548)
	{
		case 0:
			return "BRA_SHUSH";
		case 1:
			return "BRA_SHUSH2";
		case 2:
			return "BRA_SHUSH3";
	}
	return "BRA_SHUSH";
}

void func_774(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_293(0, uParam0->f_300, 2, 0);
	__LIB_0__::func_870(iVar0);
	if (__LIB_0__::func_181())
	{
		iVar1 = __LIB_5__::func_297(iVar0);
		__LIB_7__::func_448(iVar0, iVar1 + 1);
	}
	else
	{
		iVar1 = __LIB_0__::func_895(iVar0);
		__LIB_1__::func_532(iVar0, iVar1 + 1);
	}
	__LIB_8__::func_975(iVar0, __LIB_0__::func_23());
	Global_1392235.f_4 = 0;
	if (__LIB_0__::func_27(uParam0->f_329, 512))
	{
		if (__LIB_1__::func_707(__LIB_10__::func_49(uParam0->f_65), 1, 0))
		{
			func_1318(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

bool func_820(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
			func_1356(iVar5);
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
				func_820(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1389(iParam0);
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
			func_1391(iParam0, iParam1);
			func_1392(iParam0);
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
						func_820(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_820(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_820(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_820(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_820(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_820(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_820(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_820(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_820(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_820(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_822()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1431();
	func_1432();
	func_1433();
	func_1434();
	func_1435();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_823(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1318(iParam0, 1, 1, -142743235, 1);
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

void func_858()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1470(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_906()
{
	if (iLocal_726 == 1)
	{
		__LIB_1__::func_480(&iLocal_413);
		__LIB_2__::func_480(&Local_667, 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_413, 301, true);
		PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
		iLocal_726 = 0;
	}
}

int func_969(var uParam0, int iParam1, int iParam2)
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
		return func_969(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1056()
{
	__LIB_13__::func_179(iLocal_18[0], "PBL_idle_a");
	if (__LIB_3__::func_642(iLocal_18[0], 100))
	{
		if (__LIB_13__::func_180(iLocal_18[0], "PBL_idle_a"))
		{
			if (__LIB_13__::func_181(iLocal_18[0], "PBL_idle_a"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_a", false, false);
			}
		}
	}
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
		func_1693();
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
			func_1700(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1700(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
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
			func_1700(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1192()
{
	if ((!__LIB_0__::func_272(iLocal_574, 0) && !bLocal_727) || (!__LIB_0__::func_272(iLocal_603, 0) && !bLocal_728))
	{
		bLocal_723 = true;
	}
}

void func_1194()
{
	if (!bLocal_722)
	{
		if (func_602() || bLocal_443)
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			bLocal_722 = true;
			iLocal_17 = 20;
		}
	}
}

void func_1195()
{
	if ((__LIB_0__::func_272(iLocal_603, 0) && !PED::IS_PED_FLEEING(iLocal_603)) || (__LIB_0__::func_272(iLocal_574, 0) && !PED::IS_PED_FLEEING(iLocal_574)))
	{
		if (!bLocal_722)
		{
			if (iLocal_431 == 0)
			{
				if (((((((bLocal_723 == 0 && iLocal_17 != 22) && iLocal_17 != 10) && __LIB_13__::func_201(iLocal_413)) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_LEFT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_RIGHT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_FRONT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_REAR_LASSO")))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_413, 228, false);
					func_906();
					iLocal_431 = 1;
					if (((!__LIB_8__::func_684("BRA_FAMFLEE") && !__LIB_8__::func_684("RBRAN_IG3_P1")) && !__LIB_8__::func_684("BRA_HOGWAK")) && __LIB_6__::func_904())
					{
						__LIB_5__::func_20(0, 0);
					}
					__LIB_3__::func_953(&iLocal_532, 1);
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
					iLocal_17 = 22;
				}
			}
			else if (iLocal_431 == 1)
			{
				if (((((((((bLocal_723 == 0 && iLocal_17 != 12) && iLocal_17 != 13) && iLocal_17 != 14) && iLocal_17 != 10) && !__LIB_13__::func_201(iLocal_413)) && !PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_LEFT_LASSO"))) && !PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_RIGHT_LASSO"))) && !PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_FRONT_LASSO"))) && !PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_413, 16, joaat("AR_HITBY_TAKEDOWN_REAR_LASSO")))
				{
					iLocal_431 = 0;
					iLocal_17 = 12;
				}
			}
		}
	}
}

void func_1196(var uParam0)
{
	if ((iLocal_17 == 7 || iLocal_17 == 8) || iLocal_17 == 9)
	{
		if (func_603(iLocal_413, &uLocal_472, 1) || ((__LIB_2__::func_401(iLocal_413, 1, 1, 1, 0, 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO")) && __LIB_0__::func_264(&uLocal_812) > 2f))
		{
			__LIB_0__::func_37(&uLocal_812);
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			if (__LIB_0__::func_181())
			{
				if (!__LIB_6__::func_904())
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[2], false))
					{
						if (func_1780())
						{
							if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_JTIME", 0))
							{
								bLocal_433 = true;
								__LIB_3__::func_609(3, 1);
								iLocal_17 = 10;
							}
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_JTIME", 0))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_413, Global_35, -1, -1f, -1f, -1f);
						func_1209();
						iLocal_17 = 10;
					}
				}
			}
			else if (!__LIB_6__::func_904())
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[2], false))
				{
					if (func_1780())
					{
						if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_ATIME", 0))
						{
							bLocal_433 = true;
							__LIB_3__::func_609(3, 1);
							iLocal_17 = 10;
						}
					}
				}
				else if (__LIB_12__::func_876(uParam0, "RBRAN_IG2_ATIME", 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_413, Global_35, -1, -1f, -1f, -1f);
					func_1209();
					iLocal_17 = 10;
				}
			}
		}
	}
}

void func_1197(var uParam0)
{
	if (!bLocal_722 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[2], false))
	{
		if (__LIB_2__::func_401(iLocal_603, 1, 1, 0, 0, 0) || (__LIB_2__::func_401(iLocal_574, 1, 1, 0, 0, 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO")))
		{
			func_1781(uParam0);
			if (!bLocal_729)
			{
				bLocal_729 = true;
			}
		}
	}
}

void func_1198()
{
	if (iLocal_820 == 0)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_413, sLocal_635, "hands_up_idle_target", 1))
		{
			if (__LIB_2__::func_401(iLocal_413, 1, 1, 1, 0, 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_148(&uLocal_806);
			}
		}
		else if (iLocal_432 == 1)
		{
			func_1782();
			iLocal_432 = 0;
		}
	}
}

void func_1199()
{
	if (((((iLocal_17 == 5 || iLocal_17 == 15) || iLocal_17 == 12) || iLocal_17 == 6) || iLocal_17 == 3) || iLocal_17 == 4)
	{
		if (__LIB_2__::func_401(iLocal_413, 1, 1, 1, 0, 0))
		{
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO"))
			{
				func_1209();
			}
		}
		else
		{
			if (!__LIB_0__::func_75(&uLocal_806))
			{
				__LIB_1__::func_283(&uLocal_806, 0);
			}
			if (__LIB_0__::func_265(&uLocal_806) > 5f)
			{
				func_1782();
			}
		}
	}
}

void func_1200()
{
	if (((((iLocal_17 == 2 || iLocal_17 == 3) || iLocal_17 == 5) || iLocal_17 == 6) || iLocal_17 == 22) || iLocal_17 == 12)
	{
		if (__LIB_1__::func_348(Global_35, iLocal_413) > 50f && !bLocal_725)
		{
			if (!__LIB_0__::func_75(&uLocal_803))
			{
				__LIB_1__::func_148(&uLocal_803);
			}
			else if (__LIB_0__::func_265(&uLocal_803) > 15f)
			{
				if (!bLocal_720)
				{
					func_1226();
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[1], false))
					{
						bLocal_725 = true;
						iLocal_17 = 13;
					}
				}
				else
				{
					func_1227();
					bLocal_725 = true;
					iLocal_17 = 14;
				}
			}
		}
	}
}

void func_1201()
{
	if (iLocal_17 >= 6 && iLocal_17 < 11)
	{
		iLocal_719 = func_1783(&iLocal_413, &(Local_645[0 /*21*/]), 50f, &Local_667, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	else
	{
		func_906();
	}
}

void func_1202(var uParam0)
{
	if (!bLocal_725)
	{
		if (PED::IS_PED_FATALLY_INJURED(iLocal_413))
		{
			if (__LIB_0__::func_272(iLocal_574, 0) && __LIB_0__::func_272(iLocal_603, 0))
			{
				if (!bLocal_458 && __LIB_12__::func_876(uParam0, "BRA_FAMFLEE", 0))
				{
					bLocal_458 = true;
				}
				func_316();
				bLocal_725 = true;
			}
		}
	}
}

void func_1207()
{
	__LIB_13__::func_179(iLocal_18[0], "PBL_idle_b");
	if (func_1223(iLocal_18[0], "PBL_approach"))
	{
		if (__LIB_13__::func_180(iLocal_18[0], "PBL_idle_b"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_b", false, false);
			if (__LIB_13__::func_181(iLocal_18[0], "PBL_idle_b"))
			{
			}
		}
	}
}

bool func_1208()
{
	if (__LIB_2__::func_401(iLocal_413, 1, 1, 1, 0, 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return true;
	}
	return false;
}

void func_1209()
{
	int iVar0;
	iLocal_432 = 1;
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_413, sLocal_635, "hands_up_idle_target", 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "hands_up_target", Global_35, 3, 4f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "hands_up_idle_target", Global_35, -1, 4f, -2f, 1, 0f, false, false, -1f, 0, 0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (!__LIB_0__::func_75(&uLocal_806))
	{
		__LIB_1__::func_283(&uLocal_806, 0);
	}
	else
	{
		__LIB_1__::func_148(&uLocal_806);
	}
}

bool func_1210()
{
	if (__LIB_0__::func_665(iLocal_413, Global_35, 1, 1) < 5f)
	{
		return true;
	}
	return false;
}

void func_1211()
{
	int iVar0;
	iLocal_432 = 0;
	TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "idle_b_target", Global_35, -1, 4f, -4f, 1, 0f, false, false, -1f, 0, 0, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_1212()
{
	if (iLocal_726 == 0)
	{
		__LIB_2__::func_602(&(Local_667[0 /*17*/]), "BRAN_CNTXT_Y", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_667[1 /*17*/]), "BRAN_CNTXT_N", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		iLocal_726 = 1;
	}
}

void func_1214()
{
	__LIB_2__::func_411(&(Local_667[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_667[1 /*17*/]), 0, 0);
}

void func_1216()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "denied_target", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "idle_b_target", Global_35, -1, 4f, -4f, 1, 0f, false, false, -1f, 0, 0, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_1217(var uParam0)
{
	if (__LIB_0__::func_665(iLocal_413, Global_35, 1, 1) < 20f)
	{
		if (__LIB_0__::func_75(&uLocal_742))
		{
			if (__LIB_0__::func_265(&uLocal_742) > 3f)
			{
				if (__LIB_12__::func_876(uParam0, "BRA_WAIT", 0))
				{
					__LIB_1__::func_148(&uLocal_742);
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_742);
		}
	}
}

void func_1218()
{
	int iVar0;
	int iVar1;
	iLocal_432 = 0;
	if (__LIB_0__::func_272(iLocal_603, 0))
	{
		if (!func_1219())
		{
			TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_603, 0, -1f, -1f, -1f);
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_603, -1, 0, 51, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1684.378f, -614.7146f, 44.6117f, 1f, -1, 0.25f, 0, -31.45f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_ACHIEVE_HEADING(0, -31.45f, 0);
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_603, -1, 0, 51, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

bool func_1219()
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_413, 242628503, true) == 8)
	{
		return true;
	}
	return false;
}

void func_1220()
{
	int iVar0;
	iLocal_432 = 0;
	TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 3f, 1f, 2f, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_1222(var uParam0)
{
	if (bLocal_725)
	{
		return;
	}
	if ((PED::IS_PED_FATALLY_INJURED(iLocal_413) || PED::GET_PED_CONFIG_FLAG(iLocal_413, 11, true) == 1) || __LIB_0__::func_163(iLocal_413, 1313215416))
	{
		if (__LIB_0__::func_272(iLocal_574, 0) && __LIB_0__::func_272(iLocal_603, 0))
		{
			if (!bLocal_458 && __LIB_12__::func_876(uParam0, "BRA_FAMFLEE", 0))
			{
				bLocal_458 = true;
			}
			func_316();
			return;
		}
	}
	if (func_1788(iLocal_574) || func_1788(iLocal_603))
	{
		if (!__LIB_0__::func_75(&uLocal_536))
		{
			__LIB_1__::func_283(&uLocal_536, 0);
		}
		else if (!bLocal_468)
		{
			if (__LIB_0__::func_264(&uLocal_536) > 2f)
			{
				if (!__LIB_6__::func_904())
				{
					__LIB_12__::func_876(uParam0, "BRA_FAMGRIEF", 0);
					__LIB_0__::func_37(&uLocal_536);
					bLocal_468 = true;
				}
			}
		}
		else if (__LIB_0__::func_264(&uLocal_536) > 7f)
		{
			if (!__LIB_6__::func_904())
			{
				__LIB_12__::func_876(uParam0, "BRA_FAMGRIEF_1", 0);
				__LIB_0__::func_37(&uLocal_536);
				func_1789();
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_536))
	{
		__LIB_0__::func_37(&uLocal_536);
	}
}

bool func_1223(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false) || !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1)) || __LIB_3__::func_642(iParam0, 100))
		{
			return true;
		}
	}
	return false;
}

bool func_1224(var uParam0)
{
	if (__LIB_0__::func_75(&uLocal_742))
	{
		if (iLocal_745 < 3)
		{
			if (__LIB_6__::func_904())
			{
				__LIB_1__::func_148(&uLocal_742);
			}
			if (__LIB_0__::func_265(&uLocal_742) > IntToFloat((10 - iLocal_745 * 2)) || bLocal_428)
			{
				if (((!__LIB_6__::func_904() && !__LIB_0__::func_270()) && !__LIB_2__::func_401(iLocal_413, 1, 1, 1, 0, 0)) && __LIB_1__::func_348(iLocal_413, Global_35) < 30f)
				{
					if (__LIB_12__::func_876(uParam0, func_1790(iLocal_745), 0))
					{
						func_1791(iLocal_745);
						iLocal_745++;
						bLocal_428 = false;
						__LIB_1__::func_148(&uLocal_742);
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_163(iLocal_413, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_413, Global_35, -1, -1f, -1f, -1f);
		}
		__LIB_1__::func_283(&uLocal_742, 0);
	}
	if (iLocal_745 >= 3)
	{
		return true;
	}
	return false;
}

bool func_1225()
{
	if (__LIB_0__::func_665(iLocal_413, iLocal_603, 1, 1) < 20f)
	{
		return true;
	}
	if (__LIB_0__::func_665(iLocal_413, iLocal_603, 1, 1) < 50f && !PED::IS_PED_FLEEING(iLocal_603))
	{
		return true;
	}
	return false;
}

void func_1226()
{
	iLocal_432 = 0;
	if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_272(iLocal_574, 0))
	{
		if (__LIB_0__::func_94(iLocal_413, 1683.388f, -615.1075f, 44.6117f, 1) > 0.8f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[1], false))
		{
			if (!__LIB_0__::func_163(iLocal_413, -1824940423))
			{
				TASK::TASK_GO_TO_COORD_ANY_MEANS(iLocal_413, 1683.388f, -615.1075f, 44.6117f, 1.5f, 0, false, 524419, -1f);
			}
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[1], false))
		{
			if (func_1792())
			{
			}
		}
	}
}

void func_1227()
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_603, 0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_603, false);
		if (!PED::IS_PED_FLEEING(iLocal_603))
		{
			TASK::CLEAR_PED_TASKS(iLocal_603, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 1703.341f, -622.9044f, 42.6795f, 2f, 0, false, 524419, -1f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 257, 2f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_603, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (__LIB_0__::func_272(iLocal_574, 0))
		{
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_574, false);
			TASK::CLEAR_PED_TASKS(iLocal_574, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_603, 0f, 2f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_574, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (__LIB_0__::func_272(iLocal_413, 8))
		{
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_413, false);
			TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PAUSE(0, 4000);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_603, 0f, -2f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
}

void func_1228()
{
	int iVar0;
	iLocal_432 = 0;
	if (!PED::IS_PED_FLEEING(iLocal_413))
	{
		TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
		TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 256, 3f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_1229()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_272(iLocal_574, 0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_603, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_574, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_413, false);
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_18[1], "woman") && !__LIB_0__::func_163(iLocal_574, 242628503))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_574, joaat("MOTIONSTATE_RUN"), false, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 1702.286f, -623.3137f, 42.6611f, 2f, 0, false, 524419, -1f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 257, 2f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_574, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_18[1], "boy") && !__LIB_0__::func_163(iLocal_603, 242628503))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_603, joaat("MOTIONSTATE_RUN"), false, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 1703.341f, -622.9044f, 42.6795f, 2f, 0, false, 524419, -1f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 257, 2f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_603, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

char* func_1230()
{
	if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_272(iLocal_574, 0))
	{
		return "BRA_N_AGRO";
	}
	if ((__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_665(iLocal_603, iLocal_413, 1, 1) < 20f) && !__LIB_0__::func_272(iLocal_574, 0))
	{
		return "BRA_N_AGROW";
	}
	return "BRA_N_AGRO";
}

void func_1231()
{
	int iVar0;
	iLocal_432 = 0;
	TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413, 46, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_574) && !__LIB_0__::func_272(iLocal_574, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_REACT(0, iLocal_574, ENTITY::GET_ENTITY_COORDS(iLocal_574, true, false), "Default_Angry", 1f, 0, 4);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else
	{
		TASK::TASK_COMBAT_PED(iLocal_413, Global_35, 0, 0);
	}
	func_316();
}

bool func_1232()
{
	if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_665(Global_35, iLocal_603, 1, 1) < 50f)
	{
		return false;
	}
	return true;
}

void func_1233(var uParam0)
{
	if (!bLocal_721 && !bLocal_722)
	{
		if (__LIB_0__::func_272(iLocal_603, 0) && __LIB_0__::func_272(iLocal_574, 0))
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[2], false))
			{
				__LIB_13__::func_179(iLocal_18[2], "PBL_hold_back");
				if (__LIB_13__::func_180(iLocal_18[2], "PBL_hold_back"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[2], "BOOL_idle_c", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[2], "BOOL_embrace_idle", false, false);
					if (__LIB_13__::func_181(iLocal_18[2], "PBL_hold_back"))
					{
						bLocal_721 = true;
					}
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_18[0], false))
			{
				__LIB_13__::func_179(iLocal_18[0], "PBL_hold_back_alt");
				if (__LIB_13__::func_180(iLocal_18[0], "PBL_hold_back_alt"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_18[0], "BOOL_idle_b", true, false);
					if (__LIB_13__::func_181(iLocal_18[0], "PBL_hold_back_alt"))
					{
						bLocal_721 = true;
					}
				}
			}
		}
	}
}

bool func_1234()
{
	if (__LIB_0__::func_272(iLocal_413, 8))
	{
		if ((PED::_IS_PED_LASSOED(iLocal_413) && __LIB_3__::func_458(iLocal_413) != 1) && !PED::_IS_PED_HOGTIED(iLocal_413))
		{
			return true;
		}
	}
	return false;
}

void func_1235(var uParam0)
{
	float fVar0;
	if (iLocal_766 == 0)
	{
		fVar0 = 1f;
	}
	else
	{
		fVar0 = 10f;
	}
	if (__LIB_0__::func_75(&uLocal_758))
	{
		if (iLocal_766 < 4)
		{
			if (__LIB_0__::func_265(&uLocal_758) > fVar0)
			{
				if ((!__LIB_6__::func_904() && !__LIB_0__::func_270()) && __LIB_1__::func_348(Global_35, iLocal_603) < 30f)
				{
					if (__LIB_12__::func_876(uParam0, sLocal_761[iLocal_766], 0))
					{
						iLocal_766++;
						__LIB_1__::func_148(&uLocal_758);
					}
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_758);
	}
}

void func_1261(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_1700(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1269()
{
	if (!PED::DOES_GROUP_EXIST(iLocal_838))
	{
		iLocal_838 = PED::CREATE_GROUP(0);
	}
	if (PED::DOES_GROUP_EXIST(iLocal_838))
	{
		if (!bLocal_451)
		{
			PED::SET_GROUP_FORMATION(iLocal_838, 5);
			PED::ADD_FORMATION_LOCATION(iLocal_838, -10f, -3f, 0f);
			PED::ADD_FORMATION_LOCATION(iLocal_838, 5f, -15f, 0f);
			bLocal_451 = true;
		}
		return true;
	}
	return false;
}

bool func_1273(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(iLocal_825[0], 0))
	{
		if (__LIB_0__::func_163(iLocal_825[0], 1227113341))
		{
			if (PED::IS_PED_ON_MOUNT(iLocal_825[0]))
			{
				iVar0 = PED::GET_MOUNT(iLocal_825[0]);
			}
			if (__LIB_0__::func_272(iVar0, 0))
			{
				if (((ENTITY::_0x61914209C36EFDDB(iLocal_413) == 7 || ENTITY::_0x61914209C36EFDDB(iLocal_413) == 5) || ENTITY::_0x61914209C36EFDDB(iLocal_413) == 4) || ENTITY::_0x61914209C36EFDDB(iLocal_413) == 8)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35) || __LIB_0__::func_665(Global_35, iLocal_825[0], 1, 1) > 65f)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 2.5f);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 3f);
					}
					else
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 1.75f);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2.25f);
					}
				}
				else if (ENTITY::_0x61914209C36EFDDB(iLocal_413) == 5 && bLocal_840)
				{
					if (__LIB_0__::func_665(Global_35, iLocal_825[0], 1, 1) > 65f)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 2.5f);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 3f);
					}
					else
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 1.75f);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2.25f);
					}
				}
				else
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 1.75f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2.25f);
				}
			}
			if (__LIB_0__::func_665(Global_35, iLocal_825[0], 1, 1) < 25f)
			{
				__LIB_12__::func_875(uParam0, iLocal_825[0], "RBRA_CHASE", 1);
				return true;
			}
		}
		else if (!__LIB_0__::func_163(iLocal_825[0], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(iLocal_825[0], true, false);
			TASK::TASK_GO_TO_ENTITY(iLocal_825[0], Global_35, -1, 0.5f, 3f, 40f, 0);
		}
	}
	else
	{
		func_1274();
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[1], 0))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_825[1], 1, 1) > 15f)
			{
				return false;
			}
		}
		iVar1++;
	}
	if (__LIB_0__::func_272(iLocal_825[1], 0))
	{
		__LIB_12__::func_875(uParam0, iLocal_825[1], "RBRA_CHASE", 1);
	}
	return true;
}

void func_1274()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_825[iVar0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_825[iVar0]);
			}
			if (!__LIB_0__::func_163(iLocal_825[iVar0], 242628503))
			{
				TASK::CLEAR_PED_TASKS(iLocal_825[iVar0], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(0, Global_35, 0, -1, 15f, 0, 0, 2f, 56);
				TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 5f, 1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_825[iVar0], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
		iVar0++;
	}
}

bool func_1275()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_825[iVar0], 1, 1) < 20f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1276()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
		{
			if (func_603(iLocal_825[iVar0], &uLocal_500, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1277()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0) && !PED::IS_PED_IN_COMBAT(iLocal_825[iVar0], Global_35))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_825[iVar0], false);
			TASK::TASK_COMBAT_PED(iLocal_825[iVar0], Global_35, 0, 0);
		}
		iVar0++;
	}
}

int func_1278()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar1 < 1)
		{
			if (__LIB_0__::func_272(iLocal_825[iVar0], 0) && !PED::IS_PED_IN_COMBAT(iLocal_825[iVar0], Global_35))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_825[iVar0], false);
				TASK::TASK_COMBAT_PED(iLocal_825[iVar0], Global_35, 0, 0);
				__LIB_1__::func_283(&uLocal_809, 0);
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_1279(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iLocal_767 < 3)
		{
			if (!__LIB_0__::func_272(iLocal_825[iVar0], 0))
			{
				if (iVar0 == 0)
				{
					if ((!iLocal_768[iVar0] && !__LIB_6__::func_904()) && !__LIB_0__::func_270())
					{
						if (__LIB_12__::func_876(uParam0, "BRA_DYING", 0))
						{
							iLocal_767++;
							iLocal_768[iVar0] = 1;
						}
					}
				}
				else if (iVar0 == 1)
				{
					if ((!iLocal_768[iVar0] && !__LIB_6__::func_904()) && !__LIB_0__::func_270())
					{
						if (__LIB_12__::func_876(uParam0, "BRA_DYING", 0))
						{
							iLocal_767++;
							iLocal_768[iVar0] = 1;
						}
					}
				}
				else if (iVar0 == 2)
				{
					if ((!iLocal_768[iVar0] && !__LIB_6__::func_904()) && !__LIB_0__::func_270())
					{
						if (__LIB_12__::func_876(uParam0, "BRA_DYING", 0))
						{
							iLocal_767++;
							iLocal_768[iVar0] = 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1280(var uParam0)
{
	if ((__LIB_0__::func_272(iLocal_825[1], 0) && __LIB_0__::func_665(iLocal_413, Global_35, 1, 1) < 20f) && __LIB_0__::func_665(iLocal_825[1], Global_35, 1, 1) < 25f)
	{
		if (__LIB_0__::func_75(&uLocal_730) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_730) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)))
			{
				if (__LIB_12__::func_876(uParam0, "BRA_CHASE", 0))
				{
					__LIB_1__::func_148(&uLocal_730);
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_730);
		}
	}
}

bool func_1281()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_825[iVar0], 0))
		{
			if (!PED::IS_PED_FLEEING(iLocal_825[iVar0]))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_825[iVar0], 1, 1) > 200f)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_825[iVar0], Global_35, 300f, -1, 0, 3f, 0);
					__LIB_0__::func_325(&(iLocal_833[iVar0]));
				}
				return false;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iLocal_833[iVar0]));
		}
		iVar0++;
	}
	return true;
}

int func_1318(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1318(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1846(iParam0, iParam1);
	return 1;
}

void func_1356(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1874(48);
	__LIB_0__::func_703(0, -1);
}

void func_1389(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_1910(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1391(int iParam0, int iParam1)
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
			func_1911(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
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
			func_1911(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
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
			func_1911(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_1874(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
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
			func_1911(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
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
			func_1911(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1392(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_1874(48);
		}
	}
}

void func_1431()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1947(0);
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
	func_1947(1);
}

void func_1432()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_820(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1433()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1950(0);
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
	func_1950(1);
}

void func_1434()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1950(0);
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
	func_1950(1);
}

void func_1435()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_820(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_820(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1318(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1318(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1470(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1985(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_820(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1693()
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
	iVar0 = func_2131(6291456, 0);
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

void func_1700(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1700(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1700(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_1780()
{
	if (__LIB_3__::func_112(iLocal_413, Global_35, 1060437492 /* Float: 0.707f */) == 1)
	{
		__LIB_13__::func_179(iLocal_18[2], "PBL_goodbye_interrupt_F");
		if (__LIB_13__::func_180(iLocal_18[2], "PBL_goodbye_interrupt_F"))
		{
			if (__LIB_13__::func_181(iLocal_18[2], "PBL_goodbye_interrupt_F"))
			{
				return true;
			}
		}
	}
	else if (__LIB_3__::func_112(iLocal_413, Global_35, 1f) == 3)
	{
		__LIB_13__::func_179(iLocal_18[2], "PBL_goodbye_interrupt_L");
		if (__LIB_13__::func_180(iLocal_18[2], "PBL_goodbye_interrupt_L"))
		{
			if (__LIB_13__::func_181(iLocal_18[2], "PBL_goodbye_interrupt_L"))
			{
				return true;
			}
		}
	}
	else if (__LIB_3__::func_112(iLocal_413, Global_35, 1f) == 2)
	{
		__LIB_13__::func_179(iLocal_18[2], "PBL_goodbye_interrupt_R");
		if (__LIB_13__::func_180(iLocal_18[2], "PBL_goodbye_interrupt_R"))
		{
			if (__LIB_13__::func_181(iLocal_18[2], "PBL_goodbye_interrupt_R"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1781(var uParam0)
{
	float fVar0;
	if (iLocal_766 == 0)
	{
		fVar0 = 1f;
	}
	else
	{
		fVar0 = 10f;
	}
	if (__LIB_0__::func_75(&uLocal_746))
	{
		if (iLocal_753 < 3)
		{
			if (__LIB_0__::func_265(&uLocal_746) > fVar0)
			{
				if (__LIB_6__::func_904())
				{
					__LIB_5__::func_20(1, 0);
				}
				else if (__LIB_12__::func_876(uParam0, sLocal_749[iLocal_753], 0))
				{
					iLocal_753++;
					__LIB_1__::func_148(&uLocal_746);
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_746);
	}
}

void func_1782()
{
	int iVar0;
	iLocal_432 = 0;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_413, sLocal_635, "hands_up_idle_target", 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "hands_down_target", Global_35, 3, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "idle_b_target", Global_35, -1, 2f, -2f, 1, 0f, false, false, -1f, 0, 0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_1783(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_10__::func_887(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_1783(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*iParam0, iParam1, uParam3))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

int func_1788(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return 0;
	}
	if (__LIB_1__::func_996(iParam0, 1, 1, 1, 0))
	{
		return 1;
	}
	if (__LIB_2__::func_123(Global_35, iParam0, 0))
	{
		if (__LIB_0__::func_665(Global_35, iParam0, 1, 1) < 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_1789()
{
	int iVar0;
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_574, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_574, 355, true);
	if (!__LIB_0__::func_163(iLocal_574, 242628503))
	{
		TASK::CLEAR_PED_TASKS(iLocal_574, true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1679.625f, -621.5831f, 42.9615f, 2f, 20000, 0.25f, 1, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1667.069f, -615.9324f, 43.2733f, 2f, 20000, 0.25f, 1, 40000f);
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 257, 2f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_574, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		bLocal_443 = true;
	}
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_603, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_574, 355, true);
	if (!__LIB_0__::func_163(iLocal_603, 242628503))
	{
		TASK::CLEAR_PED_TASKS(iLocal_603, true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1677.251f, -620.5488f, 43.3424f, 2f, 20000, 0.25f, 1, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1668.503f, -615.0714f, 43.4441f, 2f, 20000, 0.25f, 1, 40000f);
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 257, 2f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_603, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

char* func_1790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (bLocal_428)
			{
				if (bLocal_722 || bLocal_729)
				{
					return "BRA_N_WAIT1B";
				}
				else
				{
					return "BRA_N_WAIT1A";
				}
			}
			else
			{
				return "RBRAN_IG2_WAIT1";
			}
			break;
		case 1:
			return "RBRAN_IG2_WAIT1";
		case 2:
			return "RBRAN_IG2_WAIT1";
	}
	return "";
}

void func_1791(int iParam0)
{
	char* sVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		sVar0 = "callout_01_target";
	}
	else if (iParam0 == 1)
	{
		sVar0 = "callout_02_target";
	}
	else if (iParam0 == 2)
	{
		sVar0 = "callout_03_target";
	}
	if (!TASK::IS_PED_GETTING_UP(iLocal_413))
	{
		TASK::CLEAR_PED_TASKS(iLocal_413, true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, sVar0, Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_635, "idle_b_target", Global_35, -1, 4f, -4f, 1, 0f, false, false, -1f, 0, 0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
}

bool func_1792()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_18[1]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_18[1], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_18[1], 1686.706f, -616.5787f, 43.6f, 0f, 0f, 304.4863f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[1], "Target", iLocal_413, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[1], "woman", iLocal_574, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_18[1], "boy", iLocal_603, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_18[1]);
			return true;
		}
	}
	return false;
}

void func_1846(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_2208(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, iParam1, 1, 0);
		}
	}
}

void func_1874(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = func_2221(iParam0);
	if ((Global_1347477.f_117 || !__LIB_0__::func_293(31)) || !func_2222(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	__LIB_1__::func_606(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1910(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			break;
		case -1835851517:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			break;
		case -1838352012:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			break;
		case -1717960576:
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			break;
		case 210001842:
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			break;
		case -150493654:
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			break;
		case -1271608261:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			break;
		case 1846061697:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			break;
		case -1145519186:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			break;
		case 1766284049:
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			break;
		case 280705402:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			break;
		case 1926308480:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			break;
		case 439465264:
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			break;
		case 1822001510:
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			break;
		case -1612662716:
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			break;
		case 1306158345:
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			break;
		case 1952610440:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			Jump @2851; //curOff = 1429
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			Jump @2851; //curOff = 1477
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			Jump @2851; //curOff = 1525
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			Jump @2851; //curOff = 1573
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			Jump @2851; //curOff = 1621
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			Jump @2851; //curOff = 1669
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			Jump @2851; //curOff = 1717
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			Jump @2851; //curOff = 1765
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			Jump @2851; //curOff = 1813
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			Jump @2851; //curOff = 1852
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			Jump @2851; //curOff = 1891
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			Jump @2851; //curOff = 1930
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			Jump @2851; //curOff = 1969
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2008
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2047
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2086
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			Jump @2851; //curOff = 2125
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2164
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2203
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2242
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			Jump @2851; //curOff = 2281
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			Jump @2851; //curOff = 2302
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			Jump @2851; //curOff = 2323
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			Jump @2851; //curOff = 2344
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			Jump @2851; //curOff = 2365
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			Jump @2851; //curOff = 2391
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			Jump @2851; //curOff = 2417
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			Jump @2851; //curOff = 2443
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			Jump @2851; //curOff = 2464
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			Jump @2851; //curOff = 2485
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2524
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2563
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2602
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2688
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			Jump @2851; //curOff = 2718
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
		}
void func_1911(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

void func_1947(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_820(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2281(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_823(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1318(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2285(Var0);
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

void func_1950(bool bParam0)
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
		func_820(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_820(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1318(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1318(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1318(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1985(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1985(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1985(iVar63, -915411861, 1, 0, 0));
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

int func_2131(int iParam0, int iParam1)
{
	var uVar0;
	return func_2343(&uVar0, iParam0, iParam1);
}

void func_2208(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_1911(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_1911(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_1911(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_1911(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_1911(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

float func_2221(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
			return 20f;
			return 30f;
			return 5f;
			return 5f;
			return 3f;
			return 20f;
			return __LIB_0__::func_994(iParam0);
			return 25f;
			return 50f;
			return 100f;
			return 150f;
			return 20f;
			return 10f;
			return 20f;
			return 20f;
			return 20f;
			return 20f;
			return __LIB_0__::func_994(iParam0);
			return 25f;
			return 50f;
			return 100f;
			return 150f;
			return 1f;
			return 5f;
			return 1f;
			return 3f;
			return 1f;
			return 1f;
			return 1f;
			return 5f;
			return 10f;
			return 20f;
			return 5f;
			return 5f;
			return 10f;
			return 10f;
			return 5f;
			return __LIB_0__::func_994(iParam0);
			return 25f;
			return 50f;
			return 100f;
			return 150f;
			return 5f;
			return 0f;
		}
bool func_2222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_293(18);
		case 2:
			return __LIB_0__::func_293(20);
		case 1:
			return __LIB_0__::func_293(19);
		default:
			break;
	}
	return true;
}

void func_2281(int iParam0)
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
	func_1318(iParam0, 1, 1, -142743235, 1);
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
		func_1318(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2285(struct<6> Param0)
{
	if (!func_2441(Param0.f_4, 1))
	{
	}
	if (!func_2441(Param0, 1))
	{
	}
	if (!func_2441(Param0.f_2, 1))
	{
	}
	if (!func_2441(Param0.f_5, 1))
	{
	}
	if (!func_2441(Param0.f_3, 1))
	{
	}
	if (!func_2441(Param0.f_1, 1))
	{
	}
}

int func_2343(var uParam0, int iParam1, int iParam2)
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
		return func_2343(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2441(int iParam0, int iParam1)
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
				if (func_2441(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2441(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2441(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2441(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

