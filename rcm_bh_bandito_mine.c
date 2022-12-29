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
	vector3 vLocal_16[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char* sLocal_23 = NULL;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<341> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
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
	var uLocal_440 = -1;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	bool bLocal_443 = false;
	bool bLocal_444 = false;
	bool bLocal_445 = false;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	vector3 vLocal_448 = { 0f, 0f, 0f };
	float fLocal_451 = 0f;
	bool bLocal_452 = false;
	int iLocal_453 = 0;
	bool bLocal_454 = false;
	vector3 vLocal_455[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_462 = false;
	int iLocal_463 = 0;
	char* sLocal_464 = NULL;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	vector3 vLocal_467 = { 0f, 0f, 0f };
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	vector3 vLocal_472 = { 0f, 0f, 0f };
	float fLocal_475 = 0f;
	int iLocal_476 = 0;
	vector3 vLocal_477 = { 0f, 0f, 0f };
	float fLocal_480 = 0f;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	vector3 vLocal_484 = { 0f, 0f, 0f };
	float fLocal_487 = 0f;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	vector3 vLocal_490 = { 0f, 0f, 0f };
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	vector3 vLocal_495 = { 0f, 0f, 0f };
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	vector3 vLocal_500 = { 0f, 0f, 0f };
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	vector3 vLocal_507 = { 0f, 0f, 0f };
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	vector3 vLocal_512 = { 0f, 0f, 0f };
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	vector3 vLocal_517 = { 0f, 0f, 0f };
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	vector3 vLocal_522 = { 0f, 0f, 0f };
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	vector3 vLocal_527 = { 0f, 0f, 0f };
	int iLocal_530 = 0;
	vector3 vLocal_531 = { 0f, 0f, 0f };
	int iLocal_534 = 0;
	vector3 vLocal_535 = { 0f, 0f, 0f };
	int iLocal_538 = 0;
	vector3 vLocal_539 = { 0f, 0f, 0f };
	bool bLocal_542 = false;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	int iLocal_546 = 0;
	bool bLocal_547 = false;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557[4] = { 0, 0, 0, 0 };
	int iLocal_562[3] = { 0, 0, 0 };
	int iLocal_566[3] = { 0, 0, 0 };
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	vector3 vLocal_580 = { 0f, 0f, 0f };
	vector3 vLocal_583 = { 0f, 0f, 0f };
	vector3 vLocal_586 = { 0f, 0f, 0f };
	vector3 vLocal_589 = { 0f, 0f, 0f };
	struct<9> Local_592[4];
	struct<9> Local_629[3];
	struct<6> Local_657[3];
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = -1;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 1097859072;
	var uLocal_694 = 1000;
	var uLocal_695 = 1067450368;
	var uLocal_696 = 5000;
	var uLocal_697 = 42;
	var uLocal_698 = 1103626240;
	var uLocal_699 = 1077936128;
	var uLocal_700 = 1106247680;
	var uLocal_701 = 1103101952;
	var uLocal_702 = 1097859072;
	var uLocal_703 = 1103626240;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = -1;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 1097859072;
	var uLocal_723 = 1000;
	var uLocal_724 = 1067450368;
	var uLocal_725 = 5000;
	var uLocal_726 = 42;
	var uLocal_727 = 1103626240;
	var uLocal_728 = 1077936128;
	var uLocal_729 = 1106247680;
	var uLocal_730 = 1103101952;
	var uLocal_731 = 1097859072;
	var uLocal_732 = 1103626240;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	bool bLocal_736 = false;
	bool bLocal_737 = false;
	int iLocal_738 = 0;
	bool bLocal_739 = false;
	vector3 vLocal_740 = { 0f, 0f, 0f };
	float fLocal_743 = 0f;
	vector3 vLocal_744 = { 0f, 0f, 0f };
	float fLocal_747 = 0f;
	struct<17> Local_748[2];
	int iLocal_783 = 0;
	var uLocal_784 = -1;
	var uLocal_785 = 0;
	var uLocal_786 = -1;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = -1;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 1073741824;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 1;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	int iLocal_804 = 0;
	bool bLocal_805 = false;
	bool bLocal_806 = false;
	bool bLocal_807 = false;
	bool bLocal_808 = false;
	bool bLocal_809 = false;
	bool bLocal_810 = false;
	bool bLocal_811 = false;
	bool bLocal_812 = false;
	int iLocal_813[3] = { 0, 0, 0 };
	bool bLocal_817 = false;
	bool bLocal_818 = false;
	bool bLocal_819 = false;
	bool bLocal_820 = false;
	bool bLocal_821 = false;
	bool bLocal_822 = false;
	bool bLocal_823 = false;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	int iLocal_827 = 0;
	vector3 vLocal_828 = { 0f, 0f, 0f };
	bool bLocal_831 = false;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	bool bLocal_835 = false;
	char* sLocal_836[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_841[4] = { NULL, NULL, NULL, NULL };
	int iLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	float fLocal_850 = 0f;
	struct<41> Local_851[4];
	struct<41> Local_1016[2];
	struct<37> Local_1099 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0 } ;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	struct<41> Local_1140[3];
	int iLocal_1264[3] = { 0, 0, 0 };
	int iLocal_1268 = 0;
	bool bLocal_1269 = false;
	bool bLocal_1270 = false;
	bool bLocal_1271 = false;
	bool bLocal_1272 = false;
	bool bLocal_1273 = false;
	int iLocal_1274[4] = { 0, 0, 0, 0 };
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	vector3 vLocal_1284[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1294 = 0f;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	int iLocal_1298 = 0;
	int iLocal_1299[3] = { 0, 0, 0 };
	int iLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	vector3 vLocal_1321 = { 0f, 0f, 0f };
	bool bLocal_1324 = false;
	bool bLocal_1325 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_23 = "NULL";
	iLocal_36 = 1;
	iLocal_37 = -1;
	iLocal_58 = joaat("G_M_M_UNIBANDITOS_01");
	bLocal_445 = true;
	iLocal_447 = joaat("U_M_M_BHT_BANDITOMINE");
	vLocal_448 = { -5979.496f, -3163.882f, -27.6213f };
	fLocal_451 = 267.2557f;
	sLocal_464 = "TARGET";
	iLocal_466 = joaat("P_CAMPFIRE05X");
	vLocal_467 = { -5980.202f, -3218.469f, -22.28947f };
	iLocal_471 = joaat("P_BAT_LUMBER05AX");
	vLocal_472 = { -5969.639f, -3234.909f, -22.6345f };
	fLocal_475 = 38f;
	vLocal_477 = { -5971.27f, -3220.51f, -22.65f };
	fLocal_480 = 38f;
	iLocal_483 = joaat("P_CHUCKWAGONBREAK01X");
	vLocal_484 = { -5980.617f, -3227.624f, -22.597f };
	fLocal_487 = -36.04f;
	iLocal_489 = joaat("P_CHAIR02X");
	vLocal_490 = { -5981.851f, -3221.841f, -21.631f };
	iLocal_494 = joaat("P_CHAIR24X");
	vLocal_495 = { -5982.146f, -3220.777f, -22.206f };
	iLocal_499 = joaat("P_DYNAMITECRATE01X");
	vLocal_500 = { -5978.983f, -3226.345f, -21.4463f };
	iLocal_504 = joaat("P_DYNAMITECRATE01X");
	iLocal_506 = joaat("P_BOTTLEJD01X");
	vLocal_507 = { -5982.459f, -3223.606f, -22.216f };
	iLocal_511 = joaat("P_BOTTLEJD01X");
	vLocal_512 = { -5980.788f, -3219.99f, -22.246f };
	iLocal_516 = joaat("W_REPEATER_CARBINE01");
	vLocal_517 = { -5982.367f, -3222.619f, -22.228f };
	iLocal_521 = joaat("W_REPEATER_CARBINE01");
	vLocal_522 = { -5982.892f, -3219.436f, -22.174f };
	iLocal_526 = joaat("P_LANTERN05X");
	vLocal_527 = { -5961.67f, -3177.02f, -23.92f };
	vLocal_531 = { -5982.46f, -3163.49f, -24.23f };
	vLocal_535 = { -5978.83f, -3162.27f, -25.75f };
	vLocal_539 = { -5966.37f, -3203.79f, -20.45f };
	bLocal_547 = true;
	iLocal_552 = 40;
	vLocal_580 = { -5969.74f, -3226.21f, -28.64f };
	vLocal_583 = { -5991.44f, -3219.52f, -13.92f };
	vLocal_586 = { -5979.02f, -3225.82f, -26.61f };
	vLocal_589 = { -5978.97f, -3203.72f, -10.78f };
	vLocal_740 = { -5930.893f, -3241.162f, -22.0747f };
	fLocal_743 = 114.51f;
	vLocal_744 = { -5526.026f, -2922.074f, -3.1708f };
	fLocal_747 = 114.5885f;
	iLocal_804 = -1;
	bLocal_808 = true;
	vLocal_828 = { -5965.169f, -3204.969f, -21.426f };
	iLocal_1268 = joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
	fLocal_1294 = 270f;
	vLocal_1321 = { -5963.701f, -3200.572f, -22.5253f };
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
				__LIB_13__::func_100(uParam0);
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
				__LIB_13__::func_100(uParam0);
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
		__LIB_19__::func_279(uParam0, __LIB_0__::func_58(uParam0));
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
	__LIB_13__::func_100(uParam0);
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
		__LIB_13__::func_156(uParam0);
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
		__LIB_13__::func_100(uParam0);
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
	__LIB_12__::func_658(uParam0, 7);
	__LIB_12__::func_659(uParam0, 15);
	func_187();
	func_188();
	sLocal_836[0] = "RBT23_RAGE1A";
	sLocal_836[1] = "RBT23_RAGE2A";
	sLocal_836[2] = "RBT23_RAGE3A";
	sLocal_836[3] = "RBT23_RAGE4A";
	sLocal_841[0] = "RBT23_HIT1";
	sLocal_841[1] = "RBT23_HIT2";
	sLocal_841[2] = "RBT23_HIT3";
	sLocal_841[3] = "RBT23_Shush";
	__LIB_4__::func_228(&uLocal_676);
	__LIB_2__::func_828(&uLocal_676, 1);
	__LIB_2__::func_830(&uLocal_676, 1);
	__LIB_1__::func_398(&uLocal_676, 1);
	__LIB_1__::func_402(&uLocal_676, 1);
	__LIB_1__::func_397(&uLocal_676, 1);
	__LIB_2__::func_829(&uLocal_676, 1);
	__LIB_1__::func_400(&uLocal_676, 1);
	__LIB_1__::func_399(&uLocal_705, 1);
	__LIB_1__::func_397(&uLocal_705, 1);
	__LIB_1__::func_400(&uLocal_705, 1);
	iLocal_1274[0] = 0;
	iLocal_1274[1] = 0;
	iLocal_1274[2] = 0;
	iLocal_1274[3] = 0;
	iLocal_813[0] = 0;
	iLocal_813[1] = 0;
	iLocal_813[2] = 0;
	iLocal_1299[0] = 0;
	iLocal_1299[1] = 0;
	iLocal_1299[2] = 0;
	Local_851[0 /*41*/].f_1 = 710008452;
	Local_851[0 /*41*/].f_3 = { -5979.902f, -3219.765f, -22.3223f };
	Local_851[0 /*41*/].f_6 = 274.0349f;
	Local_851[0 /*41*/].f_7 = "BANDITO_PED5";
	Local_851[0 /*41*/].f_9 = 100;
	Local_851[0 /*41*/].f_10 = "BANDITO_B";
	Local_851[0 /*41*/].f_36 = joaat("WEAPON_REPEATER_CARBINE");
	Local_851[0 /*41*/].f_38 = { -5968.19f, -3212.43f, -22.54f };
	Local_851[1 /*41*/].f_1 = -1427175664;
	Local_851[1 /*41*/].f_3 = { -5968.39f, -3212.3f, -22.51f };
	Local_851[1 /*41*/].f_6 = 278.3235f;
	Local_851[1 /*41*/].f_7 = "BANDITO_PED2";
	Local_851[1 /*41*/].f_9 = 500;
	Local_851[1 /*41*/].f_10 = "BANDITO_C";
	Local_851[1 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Local_851[1 /*41*/].f_38 = { -5967.86f, -3231.22f, -22.64f };
	Local_851[2 /*41*/].f_1 = -104423980;
	Local_851[2 /*41*/].f_3 = { -5979.447f, -3225.211f, -22.5006f };
	Local_851[2 /*41*/].f_6 = 261.7957f;
	Local_851[2 /*41*/].f_7 = "BANDITO_PED6";
	Local_851[2 /*41*/].f_9 = 800;
	Local_851[2 /*41*/].f_10 = "BANDITO_A";
	Local_851[2 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Local_851[2 /*41*/].f_38 = { -5977.92f, -3236.97f, -22.57f };
	Local_851[3 /*41*/].f_1 = 1601358025;
	Local_851[3 /*41*/].f_3 = { -5978.985f, -3218.045f, -22.4159f };
	Local_851[3 /*41*/].f_6 = 277.1082f;
	Local_851[3 /*41*/].f_7 = "BANDITO_PED3";
	Local_851[3 /*41*/].f_9 = 1200;
	Local_851[3 /*41*/].f_10 = "BANDITO_D";
	Local_851[3 /*41*/].f_36 = joaat("WEAPON_REPEATER_CARBINE");
	Local_851[3 /*41*/].f_38 = { -5984.41f, -3212.32f, -20f };
	Local_1016[0 /*41*/].f_1 = -1253154414;
	Local_1016[0 /*41*/].f_3 = { -5958.655f, -3181.701f, -23.34869f };
	Local_1016[0 /*41*/].f_6 = 140.2351f;
	Local_1016[0 /*41*/].f_8 = 0;
	Local_1016[0 /*41*/].f_9 = 115;
	Local_1016[0 /*41*/].f_10 = "BANDITO_E";
	Local_1016[0 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Local_1016[0 /*41*/].f_7 = "BANDITO_PED1";
	vLocal_455[0 /*3*/] = { -5962.592f, -3176.119f, -24.0807f };
	Local_1016[1 /*41*/].f_1 = -1280549298;
	Local_1016[1 /*41*/].f_3 = { -5955.668f, -3181.073f, -23.3022f };
	Local_1016[1 /*41*/].f_6 = 123.2135f;
	Local_1016[1 /*41*/].f_8 = 0;
	Local_1016[1 /*41*/].f_9 = 235;
	Local_1016[1 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	vLocal_455[1 /*3*/] = { -5955.668f, -3181.073f, -23.3022f };
	Local_1099.f_1 = 1259241107;
	Local_1099.f_3 = { -5962.91f, -3173.94f, -24.29f };
	Local_1099.f_6 = 211.2063f;
	Local_1099.f_8 = 0;
	Local_1099.f_9 = 235;
	Local_1099.f_36 = joaat("WEAPON_REPEATER_CARBINE");
	Local_1140[0 /*41*/].f_1 = -1642564421;
	Local_1140[0 /*41*/].f_3 = { -5970.521f, -3189.062f, -9.414f };
	Local_1140[0 /*41*/].f_6 = 225.8811f;
	Local_1140[0 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Local_1140[0 /*41*/].f_7 = "BANDITO_PED6";
	vLocal_1284[0 /*3*/] = { -5975.492f, -3197.922f, -11.1665f };
	Local_1140[1 /*41*/].f_1 = -1892362508;
	Local_1140[1 /*41*/].f_3 = { -5962.515f, -3186.021f, -8.17629f };
	Local_1140[1 /*41*/].f_6 = 270.2936f;
	Local_1140[1 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	vLocal_1284[1 /*3*/] = { -5966.699f, -3200.27f, -10.2943f };
	Local_1140[2 /*41*/].f_1 = 2095788641;
	Local_1140[2 /*41*/].f_3 = { -5952.971f, -3192.26f, -8.8836f };
	Local_1140[2 /*41*/].f_6 = 159.0619f;
	Local_1140[2 /*41*/].f_36 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	vLocal_1284[2 /*3*/] = { -5956.468f, -3203.458f, -10.3411f };
	Local_592[0 /*9*/] = { -5963.073f, -3175.305f, -24.1142f };
	Local_592[0 /*9*/].f_3 = { 0f, 0f, 142.7489f };
	Local_592[0 /*9*/].f_6 = { 1.934955f, 1.423457f, 3.265989f };
	Local_592[1 /*9*/] = { -5955.668f, -3181.073f, -23.3022f };
	Local_592[1 /*9*/].f_3 = { 0f, 0f, 32.23284f };
	Local_592[1 /*9*/].f_6 = { 1.934955f, 1.423457f, 3.385317f };
	Local_592[2 /*9*/] = { -5968.641f, -3168.384f, -25.9197f };
	Local_592[2 /*9*/].f_3 = { 0f, 0f, -23.37213f };
	Local_592[2 /*9*/].f_6 = { 2.225618f, 1.684003f, 2.940384f };
	Local_592[3 /*9*/] = { -5961.443f, -3178.078f, -22.61258f };
	Local_592[3 /*9*/].f_3 = { -9.908773f, 0.187808f, 32.55581f };
	Local_592[3 /*9*/].f_6 = { 7.174339f, 13.42854f, 5.198833f };
	Local_629[0 /*9*/] = { -5978.177f, -3195.329f, -10.34726f };
	Local_629[0 /*9*/].f_3 = { 0f, 0f, 16.66485f };
	Local_629[0 /*9*/].f_6 = { 6.450672f, 3.982966f, 4.365438f };
	Local_629[1 /*9*/] = { -5964.354f, -3196.015f, -9.63243f };
	Local_629[1 /*9*/].f_3 = { 0f, 0f, -0.822623f };
	Local_629[1 /*9*/].f_6 = { 7.685209f, 4.442951f, 2.441645f };
	Local_629[2 /*9*/] = { -5952.272f, -3204.74f, -10.19545f };
	Local_629[2 /*9*/].f_3 = { 0f, 0f, -62.33933f };
	Local_629[2 /*9*/].f_6 = { 7.74975f, 4.231377f, 3.697152f };
	Local_657[0 /*6*/] = { -5962.466f, -3176.566f, -23.9815f };
	Local_657[0 /*6*/].f_3 = 155.9396f;
	Local_657[0 /*6*/].f_4 = 1;
	Local_657[0 /*6*/].f_5 = 2;
	Local_657[1 /*6*/] = { -5955.673f, -3181.042f, -23.3456f };
	Local_657[1 /*6*/].f_3 = 197.8866f;
	Local_657[1 /*6*/].f_4 = 0;
	Local_657[1 /*6*/].f_5 = 2;
	Local_657[2 /*6*/] = { -5970.366f, -3202.988f, -20.5022f };
	Local_657[2 /*6*/].f_3 = 167.728f;
	Local_657[2 /*6*/].f_4 = 0;
	Local_657[2 /*6*/].f_5 = 0;
	__LIB_12__::func_656(uParam0, 150f);
	__LIB_12__::func_657(uParam0, 100f);
	__LIB_2__::func_165(vLocal_467, 100f, 0, 0, 5);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	__LIB_12__::func_867(uParam0, iLocal_447, 3);
	__LIB_12__::func_867(uParam0, iLocal_58, 3);
	__LIB_12__::func_867(uParam0, iLocal_483, 3);
	__LIB_12__::func_867(uParam0, iLocal_466, 3);
	__LIB_12__::func_867(uParam0, iLocal_499, 3);
	__LIB_12__::func_867(uParam0, iLocal_489, 3);
	__LIB_12__::func_867(uParam0, iLocal_494, 3);
	__LIB_12__::func_867(uParam0, iLocal_506, 3);
	__LIB_12__::func_867(uParam0, iLocal_511, 3);
	__LIB_12__::func_867(uParam0, iLocal_516, 3);
	__LIB_12__::func_867(uParam0, iLocal_521, 3);
	__LIB_12__::func_867(uParam0, iLocal_471, 3);
	__LIB_12__::func_867(uParam0, iLocal_526, 3);
	__LIB_12__::func_867(uParam0, iLocal_1268, 2);
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
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -5930.956f, -3241.229f, -22.08196f };
			Var0.f_3 = 126.2467f;
			break;
		case 1:
			Var0 = { -5963.527f, -3195.785f, -22.6112f };
			Var0.f_3 = 150.4175f;
			break;
		case 2:
			Var0 = { __LIB_13__::func_73(115) };
			Var0.f_3 = 359.7829f;
			break;
		case 3:
			Var0 = { __LIB_13__::func_73(115) };
			Var0.f_3 = 203.6745f;
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

bool func_62(var uParam0)
{
	return func_215(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_53 < 4)
	{
		if (!__LIB_0__::func_266(Global_35, vLocal_467, 150f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "RBT23_LEFT_BEHIND_ALIVE", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_FAIL");
			return true;
		}
		else if (!__LIB_0__::func_266(Global_35, vLocal_467, 100f, 1, 1) && !bLocal_444)
		{
			__LIB_12__::func_883(uParam0, "RBT23_RETURN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_444 = true;
		}
		else if (__LIB_0__::func_266(Global_35, vLocal_467, 80f, 1, 1) && bLocal_444)
		{
			__LIB_10__::func_197(&Local_59, 2, 0);
			bLocal_444 = false;
		}
	}
	else if (iLocal_53 >= 4)
	{
		if (func_218(&Local_59, 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
		{
			switch (Local_59.f_64)
			{
				case 3:
					StringCopy(&(uParam0->f_2578), "RBT23_CORTEZ_ESCAPED", 24);
					break;
				case 1:
					StringCopy(&(uParam0->f_2578), "RBT23_LEFT_BEHIND_ALIVE", 24);
					break;
				case 2:
					StringCopy(&(uParam0->f_2578), "RBT23_LEFT_BEHIND_DEAD", 24);
					break;
				case 4:
					StringCopy(&(uParam0->f_2578), "RBT23_DEAD_BODY_LOST", 24);
					break;
				case 5:
					StringCopy(&(uParam0->f_2578), "RBT23_WANTED", 24);
					break;
				case 6:
					StringCopy(&(uParam0->f_2578), "RBT23_ATTACKED_SHERIFF", 24);
					break;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_FAIL");
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
	if (__LIB_12__::func_924(uParam0) && func_275(uParam0))
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
		__LIB_19__::func_279(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_294(uParam0))
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
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = iParam1;
	iVar2 = 0;
	switch (iVar0)
	{
		case 0:
			if (__LIB_13__::func_90(&uLocal_733))
			{
				if (__LIB_10__::func_133(uParam0->f_174, 2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_738))
					{
						__LIB_13__::func_71(&iLocal_738, vLocal_740, fLocal_743, 1, 1, 1, 1);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_738, true, false);
						ENTITY::_0x9587913B9E772D29(iLocal_738, 0);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_738, -1, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_738, vLocal_740, fLocal_743, true, false, true);
						PED::_0x2208438012482A1A(iLocal_738, true, false);
						PED::_0x2208438012482A1A(Global_35, true, false);
					}
				}
				__LIB_13__::func_66(uParam0->f_174);
				__LIB_13__::func_87(uParam0);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					Local_851[iVar2 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_851[iVar2 /*41*/]);
					MAP::_BLIP_SET_MODIFIER(Local_851[iVar2 /*41*/].f_2, -1118229366);
					iVar2++;
				}
				bLocal_26 = true;
				bLocal_27 = false;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				__LIB_13__::func_91(uParam0, 0);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_2__::func_426(&iLocal_446);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_738))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(iLocal_738))
					{
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 7;
					}
				}
				else
				{
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					return 7;
				}
			}
			break;
		case 1:
			bLocal_28 = true;
			bLocal_1270 = false;
			if (__LIB_13__::func_90(&uLocal_733))
			{
				if (func_303(uParam0))
				{
					func_304(uParam0, &iVar1);
					TASK::_0xFF745B0346E19E2C(iVar1);
					if (TASK::_0xB8F52A3F84A7CC59(iVar1))
					{
						ENTITY::_0x9587913B9E772D29(iLocal_446, 0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_446, -5963.522f, -3196.811f, -22.59114f, -118.88f, true, false, true);
						PED::_0x2208438012482A1A(iLocal_446, true, true);
						TASK::TASK_CARRIABLE(iLocal_446, iVar1, 0, 0, 0);
						if (ENTITY::IS_ENTITY_DEAD(iLocal_446))
						{
							func_305(9);
						}
						else
						{
							func_305(7);
						}
						__LIB_11__::func_640(4);
						__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
						AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
						bLocal_812 = true;
						__LIB_13__::func_91(uParam0, 0);
						if (__LIB_10__::func_133(uParam0->f_174, 2))
						{
							if (ENTITY::IS_ENTITY_DEAD(iLocal_738))
							{
								__LIB_13__::func_71(&iLocal_738, vLocal_740, fLocal_743, 1, 1, 1, 1);
								return 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_738, true, false);
								ENTITY::_0x9587913B9E772D29(iLocal_738, 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_738, vLocal_740, fLocal_743, true, false, true);
								PED::_0x2208438012482A1A(iLocal_738, true, false);
								TASK::TASK_STAND_STILL(iLocal_738, -1);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 7;
					}
				}
			}
			break;
		case 2:
			if (__LIB_13__::func_90(&uLocal_733))
			{
				if (func_303(uParam0))
				{
					func_304(uParam0, &iVar1);
					TASK::_0xFF745B0346E19E2C(iVar1);
					if (TASK::_0xB8F52A3F84A7CC59(iVar1))
					{
						if (__LIB_10__::func_133(uParam0->f_174, 2))
						{
							if (ENTITY::IS_ENTITY_DEAD(iLocal_738))
							{
								__LIB_13__::func_71(&iLocal_738, vLocal_744, fLocal_747, 1, 1, 1, 1);
								return 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_738, true, false);
								ENTITY::_0x9587913B9E772D29(iLocal_738, 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_738, vLocal_744, fLocal_747, true, false, true);
								iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_744, joaat("PROP_HITCHINGPOST"), 3f, 0, false);
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3) && !__LIB_9__::func_366(iLocal_738, iVar3))
								{
									PHYSICS::_0x06AADE17334F7A40(iLocal_738, vLocal_744);
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_446))
						{
							if (PED::_GET_CARRIER_AS_PED(iLocal_446) == 0)
							{
								if (!__LIB_0__::func_163(iLocal_446, joaat("SCRIPT_TASK_CARRIABLE")))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_446, Global_36, false, false, true, true);
									TASK::TASK_CARRIABLE(iLocal_446, iVar1, Global_35, 0, 0);
									PED::_0x2208438012482A1A(iLocal_446, true, false);
									PED::_0x2208438012482A1A(Global_35, true, false);
								}
							}
							if (PED::_GET_CARRIER_AS_PED(iLocal_446) == Global_35)
							{
								__LIB_11__::func_640(4);
								__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
								bLocal_812 = true;
								bLocal_819 = true;
								bLocal_820 = true;
								__LIB_13__::func_91(uParam0, 0);
								if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								return 7;
							}
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_446, Global_36, false, false, true, true);
							TASK::TASK_CARRIABLE(iLocal_446, iVar1, Global_35, 0, 0);
							__LIB_11__::func_640(4);
							AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
							__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
							bLocal_812 = true;
							bLocal_819 = true;
							bLocal_820 = true;
							__LIB_13__::func_91(uParam0, 0);
							if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							return 7;
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_13__::func_90(&uLocal_733))
			{
				if (func_303(uParam0))
				{
					func_304(uParam0, &iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_446))
					{
						__LIB_10__::func_131(iLocal_447, Local_59.f_300, 0);
						__LIB_13__::func_67(115, iLocal_447);
						__LIB_2__::func_426(&iLocal_446);
						__LIB_10__::func_92(iLocal_447, Local_59.f_300, Local_59.f_299);
						__LIB_1__::func_616(Global_40.f_9074.f_3, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_446, __LIB_10__::func_67(115), false, false, true, true);
						__LIB_1__::func_616(Global_40.f_9074.f_4, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					if (__LIB_10__::func_133(uParam0->f_174, 2))
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_738))
						{
							__LIB_13__::func_71(&iLocal_738, vLocal_744, fLocal_747, 1, 1, 1, 1);
							return 2;
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_738, true, false);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_738, vLocal_744, fLocal_747, true, false, true);
							iVar4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_744, joaat("PROP_HITCHINGPOST"), 3f, 0, false);
							if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4) && !__LIB_9__::func_366(iLocal_738, iVar4))
							{
								PHYSICS::_0x06AADE17334F7A40(iLocal_738, vLocal_744);
							}
						}
					}
					return 8;
				}
			}
			break;
		default:
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
		__LIB_19__::func_279(uParam0, 0);
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
	return func_326(Var0, &(uParam0->f_206), uParam0);
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
	if (!bLocal_27 && iLocal_15 == 10)
	{
		iLocal_15 = 3;
	}
	func_188();
	func_332();
	func_333();
	func_334();
	func_335();
	func_336();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_446))
	{
		func_337(uParam0);
		if (__LIB_0__::func_272(iLocal_446, 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_446, 25, true);
		}
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 2048, 0, -1, -1);
	CAM::_0xC252C0CC969AF79A(1);
	if (!__LIB_10__::func_133(uParam0->f_174, 2))
	{
		__LIB_13__::func_87(uParam0);
	}
	switch (iLocal_53)
	{
		case 0:
			func_339(uParam0);
			func_340();
			func_341(uParam0);
			func_342();
			if (func_343(uParam0))
			{
				func_344(vLocal_16[0 /*3*/], sLocal_23);
				func_345();
				func_346();
				if (bLocal_30)
				{
					iLocal_54 = 3;
					bLocal_805 = true;
					func_341(uParam0);
					__LIB_11__::func_640(2);
				}
				else
				{
					__LIB_11__::func_640(1);
				}
			}
			break;
		case 1:
			func_341(uParam0);
			func_347();
			func_348();
			func_349();
			func_350();
			if (func_351())
			{
				__LIB_5__::func_20(0, 0);
				iLocal_54 = 3;
				bLocal_805 = true;
				func_341(uParam0);
				__LIB_11__::func_640(2);
			}
			else if (iLocal_804 == 0 || iLocal_804 == 1)
			{
				if (!__LIB_8__::func_684("RBT23_ILOASK_J") && !__LIB_8__::func_684("RBT23_ILOTHR_J"))
				{
					__LIB_11__::func_640(2);
				}
			}
			else if ((bLocal_32 && !__LIB_8__::func_684("RBT23_1st_Warn")) && !__LIB_8__::func_684("RBT23_IG2_WARN"))
			{
				if (!bLocal_821)
				{
					if (!__LIB_0__::func_75(&uLocal_824))
					{
						__LIB_1__::func_283(&uLocal_824, 0);
					}
					else if (__LIB_0__::func_264(&uLocal_824) > 3f)
					{
						__LIB_12__::func_876(uParam0, "RBT23_Last_Warn", 0);
						bLocal_821 = true;
					}
				}
				else if (!__LIB_8__::func_684("RBT23_Last_Warn"))
				{
					iLocal_54 = 3;
					bLocal_805 = true;
					func_341(uParam0);
					__LIB_11__::func_640(2);
				}
			}
			break;
		case 2:
			func_347();
			func_356();
			func_348();
			func_357();
			func_358();
			func_359(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1099))
			{
				func_303(uParam0);
			}
			func_360(uParam0);
			if (func_361())
			{
				if (func_362() && bLocal_452)
				{
					__LIB_11__::func_640(3);
				}
			}
			break;
		case 3:
			func_357();
			func_360(uParam0);
			if (func_363(uParam0))
			{
				__LIB_11__::func_640(4);
			}
			if (!bLocal_1269)
			{
				if (func_364())
				{
					func_365(uParam0);
				}
			}
			break;
		case 4:
			func_366(uParam0);
			if (!bLocal_1269)
			{
				if (func_364())
				{
					func_365(uParam0);
				}
			}
			if (bLocal_1269 && !bLocal_807)
			{
				if (func_367())
				{
					func_368(uParam0);
				}
			}
			if (bLocal_807 && !bLocal_1270)
			{
				func_369();
			}
			if (bLocal_1270)
			{
				func_370();
			}
			func_371(uParam0);
			if (func_372(uParam0))
			{
				__LIB_11__::func_640(5);
			}
			break;
		case 5:
			if (func_373(&Local_59))
			{
				func_374();
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
		func_410(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

float func_149(var uParam0)
{
	return __LIB_13__::func_82(&Local_59);
}

bool func_150(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (func_439(&Local_59))
			{
				if (!__LIB_10__::func_75(Local_59.f_67))
				{
					__LIB_10__::func_131(iLocal_447, Local_59.f_300, 0);
					__LIB_13__::func_67(Local_59.f_300, ENTITY::GET_ENTITY_MODEL(Local_59.f_67));
				}
				__LIB_2__::func_426(&iLocal_446);
				return true;
			}
			break;
		case 1:
			return true;
		default:
			return true;
	}
	return false;
}

void func_159(var uParam0)
{
	func_441(uParam0);
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	__LIB_13__::func_112(&Local_59, 1);
	__LIB_2__::func_161(vLocal_467, 100f, 5);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_465))
	{
		__LIB_8__::func_863(&iLocal_465, 0, 1, 1);
		GRAPHICS::_0xAE7BF7CA9E4BA48D(uLocal_553);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_470))
	{
		__LIB_8__::func_863(&iLocal_470, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_476))
	{
		__LIB_8__::func_863(&iLocal_476, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_488))
	{
		__LIB_8__::func_863(&iLocal_488, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_493))
	{
		__LIB_8__::func_863(&iLocal_493, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_498))
	{
		__LIB_8__::func_863(&iLocal_498, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_503))
	{
		__LIB_8__::func_863(&iLocal_503, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_515))
	{
		__LIB_8__::func_863(&iLocal_515, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_520))
	{
		__LIB_8__::func_863(&iLocal_520, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_505))
	{
		__LIB_8__::func_863(&iLocal_505, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		__LIB_8__::func_863(&iLocal_510, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_525))
	{
		__LIB_8__::func_863(&iLocal_525, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_530))
	{
		__LIB_8__::func_863(&iLocal_530, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		__LIB_8__::func_863(&iLocal_534, 0, 1, 1);
	}
	if (iLocal_481 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_481);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_738))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 217, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 77, false);
		PED::_0x2EB75FB86C41F026(iLocal_738, 3, 1);
		PED::_0x2EB75FB86C41F026(iLocal_738, 1, 1);
		PED::_0x2EB75FB86C41F026(iLocal_738, 7, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_738, 512, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_738, false);
	}
}

void func_187()
{
	vLocal_16[0 /*3*/].f_1 = "script@proc@bountyhunting@banditomine@banditomine_main";
	vLocal_16[1 /*3*/].f_1 = "script@proc@bountyhunting@banditomine@target";
}

void func_188()
{
	switch (iLocal_15)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_16[0 /*3*/]))
			{
				vLocal_16[0 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_16[0 /*3*/].f_1, 0, "PB_ALL", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_16[0 /*3*/]);
				iLocal_15 = 1;
			}
			break;
		case 1:
			if (bLocal_26)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_16[0 /*3*/], true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[2 /*41*/].f_10, Local_851[2 /*41*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[0 /*41*/].f_10, Local_851[0 /*41*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[1 /*41*/].f_10, Local_851[1 /*41*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[3 /*41*/].f_10, Local_851[3 /*41*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_1016[0 /*41*/].f_10, Local_1016[0 /*41*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "CHAIR_C", iLocal_488, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "CHAIR_D", iLocal_493, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "RIFLE_D", iLocal_520, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "RIFLE_B", iLocal_515, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "BOOTLE_A", iLocal_505, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "BOOTLE_B", iLocal_510, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "CRATE", iLocal_498, 0);
					ANIMSCENE::START_ANIM_SCENE(vLocal_16[0 /*3*/]);
					iLocal_15 = 2;
				}
			}
			break;
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_BLOWUP_V1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_BLOWUP_V2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_BRKOUT_FRONT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_BRKOUT_LEFT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_TELLOFF");
			iLocal_15 = 3;
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_BR_ASK");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_BR_THREAT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_FL_ASK");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_FL_THREAT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_FR_ASK");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_FR_THREAT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_FRONT_ASK");
			ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_16[0 /*3*/], "PB_ILO_FRONT_THREAT");
			iLocal_15 = 10;
			bLocal_27 = true;
			break;
		case 5:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_16[1 /*3*/]))
			{
				vLocal_16[1 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_16[1 /*3*/].f_1, 0, "PB_FALL", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_16[1 /*3*/]);
				iLocal_15 = 6;
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_16[1 /*3*/], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_16[1 /*3*/], sLocal_464, iLocal_446, 0);
				ANIMSCENE::START_ANIM_SCENE(vLocal_16[1 /*3*/]);
				iLocal_15 = 10;
			}
			break;
		case 10:
			break;
	}
}

int func_215(vector3 vParam0, var uParam3)
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
		iVar0 = func_496(0, 0);
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

bool func_218(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (__LIB_0__::func_27(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			__LIB_0__::func_325(&(uParam0->f_68));
			return true;
		}
		return false;
	}
	if (uParam0->f_61 <= 0)
	{
		if (__LIB_10__::func_75(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				__LIB_0__::func_325(&(uParam0->f_68));
				return true;
			}
			if (!__LIB_0__::func_75(&(uParam0->f_321)))
			{
				if (__LIB_10__::func_81(uParam0->f_67))
				{
					__LIB_1__::func_148(&(uParam0->f_321));
				}
			}
			else if ((!__LIB_10__::func_81(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				__LIB_0__::func_37(&(uParam0->f_321));
			}
			else if (__LIB_0__::func_265(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				__LIB_0__::func_325(&(uParam0->f_68));
				return true;
			}
		}
		else if (!__LIB_0__::func_75(&(uParam0->f_321)))
		{
			if (__LIB_10__::func_81(uParam0->f_67))
			{
				__LIB_1__::func_148(&(uParam0->f_321));
			}
		}
		else if ((!__LIB_10__::func_81(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			__LIB_0__::func_37(&(uParam0->f_321));
		}
		else if (__LIB_0__::func_265(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			__LIB_0__::func_325(&(uParam0->f_68));
			return true;
		}
	}
	fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (__LIB_10__::func_75(uParam0->f_67))
			{
				uParam0->f_64 = 2;
			}
			else if (!PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				uParam0->f_64 = 3;
			}
			else
			{
				uParam0->f_64 = 1;
			}
			return true;
		}
		else if (fVar0 > fParam1)
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 16))
			{
				__LIB_10__::func_197(uParam0, 256, 1);
				__LIB_1__::func_683(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (__LIB_0__::func_27(uParam0->f_329, 16))
			{
				__LIB_1__::func_681(&(uParam0->f_329), 16);
				if (__LIB_10__::func_75(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
				{
					__LIB_10__::func_197(uParam0, 16, 0);
				}
				else
				{
					__LIB_10__::func_197(uParam0, 4, 0);
				}
			}
		}
	}
	if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (__LIB_0__::func_272(uParam0->f_69, 0))
		{
			if (func_514(uParam0))
			{
				if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 5;
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 6;
				}
				return true;
			}
		}
		else
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_64 = 6;
			return true;
		}
	}
	if (uParam0->f_63 == 7 || uParam0->f_63 == 8)
	{
		fVar1 = __LIB_0__::func_94(Global_35, __LIB_10__::func_45(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar1 > 35f)
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 131072))
			{
				__LIB_1__::func_683(&(uParam0->f_329), 131072);
				__LIB_10__::func_197(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (__LIB_0__::func_27(uParam0->f_329, 131072))
			{
				__LIB_1__::func_681(&(uParam0->f_329), 131072);
				__LIB_10__::func_197(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = __LIB_0__::func_94(Global_35, __LIB_10__::func_45(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar2 > 55f)
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 33554432))
			{
				__LIB_1__::func_683(&(uParam0->f_329), 33554432);
				__LIB_10__::func_197(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (__LIB_0__::func_27(uParam0->f_329, 33554432))
			{
				__LIB_1__::func_681(&(uParam0->f_329), 33554432);
				__LIB_10__::func_197(uParam0, 2048, 0);
			}
		}
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

int func_275(var uParam0)
{
	int iVar0;
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return 0;
	}
	if (!bLocal_443)
	{
		__LIB_13__::func_114(&Local_59);
		bLocal_443 = true;
	}
	if (!__LIB_10__::func_133(uParam0->f_174, 2))
	{
		__LIB_13__::func_87(uParam0);
	}
	iVar0 = __LIB_12__::func_767(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_465))
	{
		iLocal_465 = OBJECT::CREATE_OBJECT(iLocal_466, vLocal_467, true, true, false, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_465, 0);
		uLocal_553 = GRAPHICS::_0x27219300C36A8D40(vLocal_467, 1f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_470))
	{
		iLocal_470 = OBJECT::CREATE_OBJECT(iLocal_471, vLocal_472, true, true, false, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_470, vLocal_472, fLocal_475, true, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_470, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_476))
	{
		iLocal_476 = OBJECT::CREATE_OBJECT(iLocal_471, vLocal_477, true, true, false, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_476, vLocal_477, fLocal_480, true, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_476, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_498))
	{
		iLocal_498 = OBJECT::CREATE_OBJECT(iLocal_499, vLocal_500, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_482))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vLocal_484, 5f, iLocal_483, false))
		{
			if (iLocal_481 == 0)
			{
				iLocal_481 = ENTITY::_0x6F3068258A499E52(iLocal_483, vLocal_484, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_481))
			{
				iLocal_482 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_481));
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_482, vLocal_484, fLocal_487, true, false, true);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_505))
	{
		iLocal_505 = OBJECT::CREATE_OBJECT(iLocal_506, vLocal_507, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		iLocal_510 = OBJECT::CREATE_OBJECT(iLocal_511, vLocal_512, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_515))
	{
		iLocal_515 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), -1, vLocal_517, true, 1f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_520))
	{
		iLocal_520 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), -1, vLocal_522, true, 1f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_525))
	{
		iLocal_525 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_527, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_525, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_530))
	{
		iLocal_530 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_531, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_530, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		iLocal_534 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_535, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_534, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_538))
	{
		iLocal_538 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_539, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_538, 1);
	}
	__LIB_13__::func_91(uParam0, 0);
	if (iVar0 < 1)
	{
		if (iLocal_1279 < 4)
		{
			func_596(uParam0);
		}
		else if (iLocal_1280 < 2)
		{
			func_597(uParam0);
		}
		else if (iLocal_1280 >= 2)
		{
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_488))
	{
		iLocal_488 = OBJECT::CREATE_OBJECT(iLocal_489, vLocal_490, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_493))
	{
		iLocal_493 = OBJECT::CREATE_OBJECT(iLocal_494, vLocal_495, true, true, false, false, true);
	}
	func_598();
	if (iVar0 >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_294(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (bLocal_443)
	{
		__LIB_13__::func_110(&Local_59, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
	}
	bLocal_26 = true;
	func_333();
	func_598();
	func_188();
	func_339(uParam0);
	func_340();
	func_342();
	if (__LIB_0__::func_94(Global_35, vLocal_467, 1) > 125f)
	{
		if (!bLocal_35)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_851[0 /*41*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_851[1 /*41*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_851[2 /*41*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_851[3 /*41*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_482, true);
			bLocal_35 = true;
		}
		return false;
	}
	else if (bLocal_35)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_851[0 /*41*/], false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_851[1 /*41*/], false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_851[2 /*41*/], false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_851[3 /*41*/], false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_482, false);
		bLocal_35 = false;
	}
	if (func_343(uParam0))
	{
		func_344(vLocal_16[0 /*3*/], sLocal_23);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		__LIB_13__::func_91(uParam0, 0);
		func_345();
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Local_851[iVar0 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_851[iVar0 /*41*/]);
			iVar0++;
		}
		__LIB_11__::func_640(2);
		return true;
	}
	else if (__LIB_1__::func_410(Global_36, vLocal_467, 40f, 1))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Local_851[iVar0 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_851[iVar0 /*41*/]);
			MAP::_BLIP_SET_MODIFIER(Local_851[iVar0 /*41*/].f_2, -1118229366);
			iVar0++;
		}
		__LIB_13__::func_91(uParam0, 0);
		return true;
	}
	return false;
}

bool func_303(var uParam0)
{
	int iVar0;
	if (bLocal_452)
	{
		return true;
	}
	if (((((ENTITY::IS_ENTITY_DEAD(Local_851[0 /*41*/]) && ENTITY::IS_ENTITY_DEAD(Local_851[1 /*41*/])) && ENTITY::IS_ENTITY_DEAD(Local_851[2 /*41*/])) && ENTITY::IS_ENTITY_DEAD(Local_851[3 /*41*/])) || __LIB_0__::func_266(Global_35, vLocal_828, 5f, 1, 1)) || ENTITY::DOES_ENTITY_EXIST(iLocal_446))
	{
		iVar0 = __LIB_12__::func_767(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_446))
		{
			iLocal_446 = __LIB_8__::func_931(iLocal_447, vLocal_448, fLocal_451, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_446, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_446, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_446, joaat("REL_PLAYER_ENEMY"));
			__LIB_1__::func_766(iLocal_446, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_13__::func_74(iLocal_446, 1);
			func_633(uParam0);
			__LIB_12__::func_875(uParam0, iLocal_446, "RBH_TARGET23", 0);
			__LIB_10__::func_139(&Local_59, iLocal_446, "RBH_TARGET23");
			if (iVar0 < 3)
			{
				__LIB_10__::func_82(&Local_59);
			}
			__LIB_10__::func_197(&Local_59, 4, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 6, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 146, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 305, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 306, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 388, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 132, true);
		}
		else if (iVar0 >= 1)
		{
			bLocal_452 = true;
		}
		else
		{
			func_636();
		}
	}
	return false;
}

void func_304(var uParam0, int iParam1)
{
	if (__LIB_10__::func_133(uParam0->f_174, 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_446))
	{
		CAM::_0x5B637D6F3B67716A(iLocal_446);
		bLocal_462 = true;
		__LIB_1__::func_864(iLocal_446, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_446))
	{
		*iParam1 = joaat("HOGTIED_PED");
	}
	else
	{
		*iParam1 = joaat("DEAD_CARRIABLE_HUMAN");
	}
}

void func_305(int iParam0)
{
	if (iLocal_55 != iParam0)
	{
		iLocal_55 = iParam0;
	}
}

int func_326(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_672(uParam4);
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

void func_332()
{
	switch (iLocal_56)
	{
		case 0:
			if (((Local_851[0 /*41*/].f_8 >= 5 || Local_851[1 /*41*/].f_8 >= 5) || Local_851[2 /*41*/].f_8 >= 5) || Local_851[3 /*41*/].f_8 >= 5)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_START"))
				{
					iLocal_56 = 1;
				}
			}
			break;
		case 1:
			if (func_717(1, 1, 1, 1, 0) >= 8)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_STOP"))
				{
					iLocal_56 = 2;
				}
			}
			break;
		case 2:
			if (bLocal_1270)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_START"))
				{
					iLocal_56 = 3;
				}
			}
			break;
		case 3:
			if (func_717(1, 1, 1, 0, 1) >= 10)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_STOP"))
				{
					iLocal_56 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_333()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_738))
	{
		__LIB_13__::func_71(&iLocal_738, vLocal_740, fLocal_743, 0, 0, 1, 1);
	}
	else if (!bLocal_739)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 217, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 77, true);
		PED::_0x2EB75FB86C41F026(iLocal_738, 3, 0);
		PED::_0x2EB75FB86C41F026(iLocal_738, 1, 0);
		PED::_0x2EB75FB86C41F026(iLocal_738, 7, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_738, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_738, 512, true);
		POPULATION::_0xF74E134F40192884(iLocal_738, 0);
		bLocal_739 = true;
	}
	if (bLocal_739)
	{
		PED::SET_PED_RESET_FLAG(iLocal_738, 53, true);
		PED::SET_PED_RESET_FLAG(iLocal_738, 49, true);
	}
}

void func_334()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_851[iVar0 /*41*/]) && Local_851[iVar0 /*41*/].f_8 < 10)
		{
			if (PED::IS_PED_DEAD_OR_DYING(Local_851[iVar0 /*41*/], true) || PED::IS_PED_FATALLY_INJURED(Local_851[iVar0 /*41*/]))
			{
				Local_851[iVar0 /*41*/].f_8 = 10;
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[iVar0 /*41*/].f_10, Local_851[iVar0 /*41*/]);
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1099) && Local_1099.f_8 < 10)
	{
		if (PED::IS_PED_DEAD_OR_DYING(Local_1099, true) || PED::IS_PED_FATALLY_INJURED(Local_1099))
		{
			Local_1099.f_8 = 10;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1016[iVar0 /*41*/]) && Local_1016[iVar0 /*41*/].f_8 < 10)
		{
			if (PED::IS_PED_DEAD_OR_DYING(Local_1016[iVar0 /*41*/], true) || PED::IS_PED_FATALLY_INJURED(Local_1016[iVar0 /*41*/]))
			{
				Local_1016[iVar0 /*41*/].f_8 = 10;
				if (iVar0 == 0)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], "BANDITO_E", Local_1016[iVar0 /*41*/]);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1140[iVar0 /*41*/]) && Local_1140[iVar0 /*41*/].f_8 < 10)
		{
			if (PED::IS_PED_DEAD_OR_DYING(Local_1140[iVar0 /*41*/], true) || PED::IS_PED_FATALLY_INJURED(Local_1140[iVar0 /*41*/]))
			{
				Local_1140[iVar0 /*41*/].f_8 = 10;
			}
		}
		iVar0++;
	}
}

void func_335()
{
	if (!MAP::DOES_BLIP_EXIST(Local_59.f_66))
	{
		return;
	}
	if (bLocal_445)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_59.f_66, -1878373110);
			bLocal_445 = false;
		}
	}
	else if (__LIB_0__::func_396(Global_35))
	{
		MAP::_BLIP_SET_MODIFIER(Local_59.f_66, -1878373110);
		bLocal_445 = true;
	}
}

void func_336()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_851[iVar0 /*41*/]) && Local_851[iVar0 /*41*/].f_8 >= 5)
		{
			if (__LIB_9__::func_114(Local_851[iVar0 /*41*/], -1118229366, 1))
			{
			}
		}
		iVar0++;
	}
}

void func_337(var uParam0)
{
	func_720(uParam0);
	if (!__LIB_10__::func_133(uParam0->f_174, 1))
	{
		if (iLocal_463 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_446))
			{
				iLocal_463++;
			}
		}
		else if (iLocal_463 == 1)
		{
			iLocal_463++;
		}
		else if (iLocal_463 == 2)
		{
			if (!bLocal_462)
			{
				__LIB_10__::func_142(uParam0->f_174, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("PRBTY_RIDE_DEAD");
				CAM::_0xE3639DB78B3B5400(iLocal_446);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_446, true);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_446, 0, 0);
				func_305(9);
				bLocal_462 = false;
			}
		}
	}
	if (iLocal_55 != 7 && iLocal_55 != 9)
	{
		if (__LIB_13__::func_201(iLocal_446))
		{
			if (__LIB_8__::func_684("RBT23_RELEASED"))
			{
				__LIB_6__::func_900("RBT23_RELEASED", 0, 0);
			}
		}
		if (__LIB_13__::func_151(iLocal_446))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 453, true);
			func_305(7);
		}
	}
	if ((((bLocal_812 == 1 && iLocal_55 != 9) && iLocal_55 != 5) && iLocal_55 != 6) && !__LIB_13__::func_201(iLocal_446))
	{
		if (__LIB_12__::func_876(uParam0, "RBT23_CUTFREEJ", 0))
		{
			func_305(5);
			bLocal_835 = false;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			break;
		case 5:
			if (!__LIB_0__::func_163(iLocal_446, 518218985))
			{
				TASK::CLEAR_PED_TASKS(iLocal_446, true, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_446, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			func_305(6);
			break;
		case 6:
			func_724(uParam0);
			break;
		case 7:
			if (__LIB_10__::func_166(iLocal_446, 1))
			{
				func_726(uParam0);
			}
			else if (!PED::_IS_PED_HOGTIED(iLocal_446))
			{
				if (!__LIB_0__::func_163(iLocal_446, 518218985))
				{
					TASK::CLEAR_PED_TASKS(iLocal_446, true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_446, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
				func_305(8);
			}
			if (iLocal_53 < 4)
			{
				__LIB_11__::func_640(4);
			}
			break;
		case 8:
			break;
		case 9:
			if (iLocal_53 < 4)
			{
				func_362();
				__LIB_11__::func_640(4);
			}
			break;
	}
}

void func_339(var uParam0)
{
	if (iLocal_827 < 1 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_1", 1))
	{
		iLocal_827 = 0;
	}
	else if (iLocal_827 < 2 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "BREAK_CONVO_1", 1))
	{
		iLocal_827 = 1;
	}
	else if (iLocal_827 < 3 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_1", 1))
	{
		iLocal_827 = 2;
	}
	else if (iLocal_827 < 4 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_2", 1))
	{
		iLocal_827 = 3;
	}
	else if (iLocal_827 < 5 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "BREAK_CONVO_2", 1))
	{
		iLocal_827 = 4;
	}
	else if (iLocal_827 < 6 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_2", 1))
	{
		iLocal_827 = 5;
	}
	else if (iLocal_827 < 7 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_3", 1))
	{
		iLocal_827 = 6;
	}
	else if (iLocal_827 < 8 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_3", 1))
	{
		iLocal_827 = 7;
	}
	else if (iLocal_827 < 9 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF", 1))
	{
		iLocal_827 = 8;
	}
	else if (iLocal_827 < 10 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF_POST_1", 1))
	{
		iLocal_827 = 9;
	}
	else if (iLocal_827 < 11 && ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF_POST_2", 1))
	{
		iLocal_827 = 10;
	}
	if (iLocal_827 > 8)
	{
		if (!bLocal_1325)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -5977.234f, -3243.004f, -23.14962f, -5964.408f, -3201.771f, -14.14777f, 29.75f, false, true, 0))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_1016[0 /*41*/], 0f, 0f, 0f, true, 1000, 1500, 1500, 0);
				bLocal_1325 = true;
			}
		}
	}
	switch (iLocal_827)
	{
		case 0:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_1", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_HCNV1", 0);
					iLocal_827++;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "BREAK_CONVO_1", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_BRK1", 0);
					iLocal_827++;
				}
				bLocal_547 = true;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_1", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_MCNV1", 0);
					iLocal_827++;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_2", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_HCNV2", 0);
					iLocal_827++;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "BREAK_CONVO_2", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_BRK2", 0);
					iLocal_827++;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_2", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_MCNV2", 0);
					iLocal_827++;
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_3", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_HCNV3", 0);
					iLocal_827++;
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_3", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG1_MCNV3", 0);
					iLocal_827++;
				}
			}
			break;
		case 8:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF", 1))
			{
				bLocal_29 = true;
				if (__LIB_0__::func_266(Local_1016[0 /*41*/], vLocal_828, 1f, 1, 1))
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_1016[0 /*41*/].f_2, -1034486097);
					MAP::_BLIP_SET_MODIFIER(Local_1016[0 /*41*/].f_2, -1118229366);
					__LIB_5__::func_20(0, 0);
					__LIB_12__::func_876(uParam0, "RBT23_IG2_TELL1", 0);
					iLocal_827++;
				}
			}
			break;
		case 9:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF_POST_1", 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RBT23_IG2_TELL2", 0);
					iLocal_827++;
				}
			}
			break;
		case 10:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF_POST_2", 1))
			{
				if (!__LIB_5__::func_463())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_16[0 /*3*/], "LOOP_BOOL", false, false);
					__LIB_12__::func_876(uParam0, "RBT23_IG2_TELL4", 0);
					iLocal_827++;
				}
			}
			else if (!__LIB_8__::func_684("RBT23_IG2_TELL2") && !bLocal_25)
			{
				__LIB_12__::func_876(uParam0, "RBT23_IG2_TELL3", 0);
				bLocal_25 = true;
			}
			break;
	}
}

void func_340()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<15> Var9;
	vVar0 = { -5959f, -3219f, -15f };
	vVar3 = { -5959f, -3219f, -20f };
	vVar6 = { -5980.6f, -3221.7f, -22.2f };
	Var9.f_8 = -1082130432;
	Var9 = { vVar6 };
	Var9.f_3 = { vVar0 };
	Var9.f_7 = 0f;
	Var9.f_12 = 1;
	Var9.f_6 = joaat("WEAPON_RIFLE_SPRINGFIELD");
	Var9.f_13 = 0;
	Var9.f_14 = 1;
	if (iLocal_36 < 2)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_1", 1))
		{
			if (!__LIB_0__::func_75(&uLocal_41))
			{
				__LIB_1__::func_283(&uLocal_38, 0);
				__LIB_1__::func_283(&uLocal_41, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_38) > 8.15f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				__LIB_0__::func_37(&uLocal_38);
			}
			else if (__LIB_0__::func_264(&uLocal_41) > 8.33f)
			{
				FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], vVar0, 25, 1f, true, false, 1f);
				__LIB_0__::func_37(&uLocal_41);
				iLocal_36 = 2;
			}
		}
	}
	else if (iLocal_36 < 3)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_1", 1))
		{
			if (!__LIB_0__::func_75(&uLocal_41))
			{
				__LIB_1__::func_283(&uLocal_38, 0);
				__LIB_1__::func_283(&uLocal_41, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_38) > 7f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				__LIB_0__::func_37(&uLocal_38);
			}
			else if (__LIB_0__::func_264(&uLocal_41) > 9.45f)
			{
				FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], vVar3, 25, 1f, true, false, 1f);
				__LIB_0__::func_37(&uLocal_41);
				iLocal_36 = 3;
			}
		}
	}
	else if (iLocal_36 < 4)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_2", 1))
		{
			if (!__LIB_0__::func_75(&uLocal_41))
			{
				__LIB_1__::func_283(&uLocal_38, 0);
				__LIB_1__::func_283(&uLocal_41, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_38) > 8f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				__LIB_0__::func_37(&uLocal_38);
			}
			else if (__LIB_0__::func_264(&uLocal_41) > 8.27f)
			{
				FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], vVar0, 25, 1f, true, false, 1f);
				__LIB_0__::func_37(&uLocal_41);
				iLocal_36 = 4;
			}
		}
	}
	else if (iLocal_36 < 5)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_2", 1))
		{
			if (!__LIB_0__::func_75(&uLocal_41))
			{
				__LIB_1__::func_283(&uLocal_38, 0);
				__LIB_1__::func_283(&uLocal_41, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_38) > 6.97f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				__LIB_0__::func_37(&uLocal_38);
			}
			else if (__LIB_0__::func_264(&uLocal_41) > 10.5f)
			{
				FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], vVar3, 25, 1f, true, false, 1f);
				__LIB_0__::func_37(&uLocal_41);
				iLocal_36 = 5;
			}
		}
	}
	else if (iLocal_36 < 6)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "CONVO_3", 1))
		{
			if (!__LIB_0__::func_75(&uLocal_41))
			{
				__LIB_1__::func_283(&uLocal_38, 0);
				__LIB_1__::func_283(&uLocal_41, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_38) > 8.6f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				__LIB_0__::func_37(&uLocal_38);
			}
			else if (__LIB_0__::func_264(&uLocal_41) > 8.83f)
			{
				FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], vVar0, 25, 1f, true, false, 1f);
				__LIB_0__::func_37(&uLocal_41);
				iLocal_36 = 6;
			}
		}
	}
	else if (iLocal_36 < 7)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "MISS_CONVO_3", 1))
		{
			if (!__LIB_0__::func_75(&uLocal_41))
			{
				__LIB_1__::func_283(&uLocal_38, 0);
				__LIB_1__::func_283(&uLocal_41, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_38) > 8.1f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				__LIB_0__::func_37(&uLocal_38);
			}
			else if (__LIB_0__::func_264(&uLocal_41) > 9.5f)
			{
				FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], vVar3, 25, 1f, true, false, 1f);
				__LIB_0__::func_37(&uLocal_41);
				iLocal_36 = 7;
			}
		}
	}
}

void func_341(var uParam0)
{
	switch (iLocal_54)
	{
		case 0:
			__LIB_3__::func_157(&(Local_748[0 /*17*/]), "INTERACT_QUESTION", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_157(&(Local_748[1 /*17*/]), "INTERACT_THREATEN", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(Local_851[1 /*41*/], 130, false);
			PED::SET_PED_CONFIG_FLAG(Local_851[1 /*41*/], 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_851[1 /*41*/], 178, true);
			PED::SET_PED_CONFIG_FLAG(Local_851[1 /*41*/], 317, true);
			PED::SET_PED_CONFIG_FLAG(Local_851[1 /*41*/], 277, false);
			iLocal_54 = 1;
			break;
		case 1:
			if (iLocal_804 == -1)
			{
				iLocal_804 = func_729(&(Local_851[1 /*41*/]), &iLocal_783, 23f, &Local_748, 0, 3, 0, "RBT23_ILO", 8193, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iLocal_804 == 0 || iLocal_804 == 1)
				{
					__LIB_5__::func_20(1, 0);
					if (iLocal_804 == 0)
					{
						__LIB_12__::func_876(uParam0, "RBT23_ILOASK_J", 0);
					}
					else if (iLocal_804 == 1)
					{
						__LIB_12__::func_876(uParam0, "RBT23_ILOTHR_J", 0);
					}
					__LIB_2__::func_344(&(Local_851[1 /*41*/]));
					__LIB_2__::func_480(&Local_748, 0, 0, 1, 0);
					if (!bLocal_454)
					{
						TASK::CLEAR_PED_TASKS(Local_1016[0 /*41*/], true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1016[0 /*41*/], vLocal_455[0 /*3*/], 1.5f, 20000, 0.25f, 0, 40000f);
						bLocal_454 = true;
					}
					iLocal_54 = 2;
				}
				else
				{
					iLocal_804 = -1;
				}
			}
			break;
		case 2:
			if (!__LIB_5__::func_463() && !bLocal_805)
			{
				bLocal_805 = true;
			}
			break;
		case 3:
			__LIB_2__::func_344(&(Local_851[1 /*41*/]));
			__LIB_2__::func_480(&Local_748, 0, 0, 1, 0);
			if (!bLocal_805)
			{
				iLocal_54 = 0;
			}
			break;
	}
}

void func_342()
{
	int iVar0;
	iVar0 = 0;
	if (!bLocal_24)
	{
		bLocal_24 = ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF", 1);
	}
	else if (!ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[0 /*3*/], "TELLOFF", 1) && !__LIB_8__::func_684("RBT23_IG2_WARN"))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (Local_1016[iVar0 /*41*/].f_8 < 2)
			{
				TASK::TASK_GO_TO_COORD_ANY_MEANS(Local_1016[iVar0 /*41*/], vLocal_455[iVar0 /*3*/], 1f, 0, false, 524419, -1f);
				Local_1016[iVar0 /*41*/].f_8 = 2;
			}
			iVar0++;
		}
		MAP::_BLIP_SET_MODIFIER(Local_1016[0 /*41*/].f_2, -1034486097);
		MAP::_BLIP_REMOVE_MODIFIER(Local_1016[0 /*41*/].f_2, -1118229366);
		bLocal_24 = false;
	}
}

bool func_343(var uParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = -1;
	func_732();
	fVar1 = __LIB_3__::func_978(Local_851[1 /*41*/], Global_35, 1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_554))
	{
		iLocal_554 = VOLUME::_CREATE_VOLUME_CYLINDER(-5961.937f, -3202.078f, -20.938f, 0f, 0f, -123.947f, 6.447f, 5.393f, 1.953f);
	}
	if (__LIB_0__::func_393(Global_35, iLocal_554, 0, 1))
	{
		sLocal_23 = "PB_BRKOUT_FRONT";
		__LIB_5__::func_20(0, 0);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN2_SEE", 0);
		}
		else if (iVar0 == 1)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN5_SEE", 0);
		}
		else if (iVar0 == 2)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN6_SEE", 0);
		}
		else if (iVar0 == 3)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN3_SEE", 0);
		}
		bLocal_30 = true;
		return true;
	}
	if (MISC::IS_BULLET_IN_AREA(vLocal_500, 2f, true))
	{
		if (fVar1 > 330f || fVar1 < 90f)
		{
			sLocal_23 = "PB_BLOWUP_V1";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			sLocal_23 = "PB_ILO_BR_THREAT";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			sLocal_23 = "PB_ILO_FR_THREAT";
		}
		else
		{
			sLocal_23 = "PB_BLOWUP_V2";
		}
		__LIB_5__::func_20(0, 0);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN2_SHOT", 0);
		}
		else if (iVar0 == 1)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN5_SHOT", 0);
		}
		else if (iVar0 == 2)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN6_SHOT", 0);
		}
		else if (iVar0 == 3)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN3_SHOT", 0);
		}
		bLocal_30 = true;
		return true;
	}
	else if (func_735())
	{
		if (fVar1 > 330f || fVar1 < 90f)
		{
			sLocal_23 = "PB_BRKOUT_LEFT";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			sLocal_23 = "PB_ILO_BR_THREAT";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			sLocal_23 = "PB_ILO_FR_THREAT";
		}
		else
		{
			sLocal_23 = "PB_BRKOUT_FRONT";
		}
		__LIB_5__::func_20(0, 0);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN2_SHOT", 0);
		}
		else if (iVar0 == 1)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN5_SHOT", 0);
		}
		else if (iVar0 == 2)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN6_SHOT", 0);
		}
		else if (iVar0 == 3)
		{
			__LIB_12__::func_876(uParam0, "RBT23_BAN3_SHOT", 0);
		}
		bLocal_30 = true;
		return true;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_555))
		{
			iLocal_555 = VOLUME::_CREATE_VOLUME_SPHERE(-5969.858f, -3211.56f, -22.371f, 0.521f, -13.213f, 31.798f, 27.542f, 20.266f, 18.188f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_556))
		{
			iLocal_556 = VOLUME::_CREATE_VOLUME_CYLINDER(-5972.426f, -3211.742f, -21.558f, 0f, 0f, -34.344f, 18.472f, 32.037f, 3.909f);
		}
		iLocal_1279++;
		if (iLocal_1279 > 4)
		{
			iLocal_1279 = 0;
		}
		if (iLocal_1279 < 4)
		{
			if (((__LIB_0__::func_48(Global_35, Local_851[iLocal_1279 /*41*/], 9f, 1) && __LIB_4__::func_138(Local_851[iLocal_1279 /*41*/], &uLocal_705)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_851[iLocal_1279 /*41*/], Global_35, 17)) || (__LIB_9__::func_660(Local_851[iLocal_1279 /*41*/], &uLocal_705) && __LIB_0__::func_393(Global_35, iLocal_555, 0, 1)))
			{
				if (fVar1 > 330f || fVar1 < 90f)
				{
					sLocal_23 = "PB_ILO_FL_ASK";
				}
				else if (fVar1 > 90f && fVar1 < 201f)
				{
					sLocal_23 = "PB_ILO_BR_ASK";
				}
				else if (fVar1 > 200f && fVar1 < 248f)
				{
					sLocal_23 = "PB_ILO_FR_ASK";
				}
				else
				{
					sLocal_23 = "PB_ILO_FRONT_ASK";
				}
				if (!__LIB_0__::func_75(&uLocal_548))
				{
					__LIB_1__::func_283(&uLocal_548, 0);
				}
				if (iLocal_37 < 0)
				{
					iLocal_37 = iLocal_1279;
				}
				__LIB_5__::func_20(0, 0);
				bLocal_32 = __LIB_12__::func_876(uParam0, "RBT23_1st_Warn", 0);
				return true;
			}
		}
		else if ((__LIB_0__::func_393(Global_35, iLocal_556, 0, 1) && __LIB_0__::func_48(Global_35, Local_1016[0 /*41*/], 40f, 1)) && __LIB_9__::func_660(Local_1016[0 /*41*/], &uLocal_705))
		{
			if (fVar1 > 330f || fVar1 < 90f)
			{
				sLocal_23 = "PB_ILO_FL_ASK";
			}
			else if (fVar1 > 90f && fVar1 < 201f)
			{
				sLocal_23 = "PB_ILO_BR_ASK";
			}
			else if (fVar1 > 200f && fVar1 < 248f)
			{
				sLocal_23 = "PB_ILO_FR_ASK";
			}
			else
			{
				sLocal_23 = "PB_ILO_FRONT_ASK";
			}
			if (!__LIB_0__::func_75(&uLocal_548))
			{
				__LIB_1__::func_283(&uLocal_548, 0);
			}
			if (iLocal_37 < 0)
			{
				iLocal_37 = iLocal_1279;
			}
			__LIB_5__::func_20(0, 0);
			bLocal_32 = __LIB_12__::func_876(uParam0, "RBT23_IG2_WARN", 0);
			return true;
		}
	}
	if (iLocal_804 == 0)
	{
		if (fVar1 > 330f || fVar1 < 91f)
		{
			sLocal_23 = "PB_ILO_FL_ASK";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			sLocal_23 = "PB_ILO_BR_ASK";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			sLocal_23 = "PB_ILO_FR_ASK";
		}
		else
		{
			sLocal_23 = "PB_ILO_FRONT_ASK";
		}
		return true;
	}
	else if (iLocal_804 == 1)
	{
		if (fVar1 > 330f || fVar1 < 91f)
		{
			sLocal_23 = "PB_ILO_FL_THREAT";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			sLocal_23 = "PB_ILO_BR_THREAT";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			sLocal_23 = "PB_ILO_FR_THREAT";
		}
		else
		{
			sLocal_23 = "PB_ILO_FRONT_THREAT";
		}
		return true;
	}
	return false;
}

void func_344(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		}
	}
}

void func_345()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_498))
	{
		__LIB_8__::func_863(&iLocal_498, 0, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_498) && !ENTITY::DOES_ENTITY_EXIST(iLocal_503))
	{
		iLocal_503 = OBJECT::CREATE_OBJECT(iLocal_504, vLocal_500, true, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_503, -102.6f);
	}
}

void func_346()
{
	if (!bLocal_831)
	{
		TASK::CLEAR_PED_TASKS(Local_1016[0 /*41*/], true, false);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1016[0 /*41*/], vLocal_455[0 /*3*/], 1.5f, 20000, 0.25f, 0, 40000f);
		MAP::_BLIP_SET_MODIFIER(Local_1016[0 /*41*/].f_2, -1034486097);
		MAP::_BLIP_REMOVE_MODIFIER(Local_1016[0 /*41*/].f_2, -1118229366);
		bLocal_831 = true;
	}
}

void func_347()
{
	if (bLocal_31)
	{
		return;
	}
	if (((ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_BR_ASK") || ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_FL_ASK")) || ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_FR_ASK")) || ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_FRONT_ASK"))
	{
		if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 14.5f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[3 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[3 /*41*/].f_10, Local_851[3 /*41*/]);
				Local_851[3 /*41*/].f_8 = 5;
			}
			bLocal_31 = true;
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 12.2f, -1082130432 /* Float: -1f */))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(vLocal_16[0 /*3*/], 1.5f);
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 11.9f, -1082130432 /* Float: -1f */))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(vLocal_16[0 /*3*/], 3.5f);
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 11.8f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[1 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[1 /*41*/].f_10, Local_851[1 /*41*/]);
				Local_851[1 /*41*/].f_8 = 5;
			}
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 9f, -1082130432 /* Float: -1f */))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(vLocal_16[0 /*3*/], 1.5f);
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 2.9f, -1082130432 /* Float: -1f */))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(vLocal_16[0 /*3*/], 3.5f);
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 2.8f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[2 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[2 /*41*/].f_10, Local_851[2 /*41*/]);
				Local_851[2 /*41*/].f_8 = 5;
			}
			if (Local_851[0 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[0 /*41*/].f_10, Local_851[0 /*41*/]);
				Local_851[0 /*41*/].f_8 = 5;
			}
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 0.9f, -1082130432 /* Float: -1f */))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(vLocal_16[0 /*3*/], 1.5f);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(vLocal_16[0 /*3*/], 3.35f);
		}
	}
	if (((ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_BR_THREAT") || ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_FL_THREAT")) || ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_FR_THREAT")) || ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_ILO_FRONT_THREAT"))
	{
		if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 2.9f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[3 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[3 /*41*/].f_10, Local_851[3 /*41*/]);
				Local_851[3 /*41*/].f_8 = 5;
			}
			bLocal_31 = true;
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 2.2f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[0 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[0 /*41*/].f_10, Local_851[0 /*41*/]);
				Local_851[0 /*41*/].f_8 = 5;
			}
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 2.3f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[2 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[2 /*41*/].f_10, Local_851[2 /*41*/]);
				Local_851[2 /*41*/].f_8 = 5;
			}
		}
		else if (__LIB_13__::func_64(vLocal_16[0 /*3*/], 1.9f, -1082130432 /* Float: -1f */))
		{
			if (Local_851[1 /*41*/].f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_16[0 /*3*/], Local_851[1 /*41*/].f_10, Local_851[1 /*41*/]);
				Local_851[1 /*41*/].f_8 = 5;
			}
		}
	}
}

void func_348()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_505))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], "BOOTLE_A"))
		{
			__LIB_8__::func_863(&iLocal_505, 0, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], "BOOTLE_B"))
		{
			__LIB_8__::func_863(&iLocal_510, 0, 1, 1);
		}
	}
}

void func_349()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_851[iVar0 /*41*/].f_8 < 10)
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_851[iVar0 /*41*/], &(Local_851[iVar0 /*41*/].f_11));
		}
		iVar0++;
	}
}

int func_350()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		__LIB_9__::func_114(Local_851[iVar1 /*41*/], -1118229366, 1);
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_851[0 /*41*/]) && Local_851[0 /*41*/].f_8 < 6)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], Local_851[0 /*41*/].f_10))
		{
			TASK::TASK_FORCE_MOTION_STATE(Local_851[0 /*41*/], joaat("MOTIONSTATE_AIMING"), false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_515))
			{
				__LIB_8__::func_863(&iLocal_515, 0, 1, 1);
				__LIB_1__::func_766(Local_851[0 /*41*/], Local_851[0 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			bVar0 = true;
		}
		else if (ANIMSCENE::_0xB89FCFF19DAFFF28(vLocal_16[0 /*3*/], Local_851[0 /*41*/].f_10) && !__LIB_0__::func_163(Local_851[0 /*41*/], -2015108952))
		{
			WEAPON::_0x0A2AB7B7ABC055F4(Local_851[0 /*41*/]);
			WEAPON::_0x5230D3F6EE56CFE6(Local_851[0 /*41*/], 0);
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, Local_851[0 /*41*/].f_38) };
			TASK::TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(Local_851[0 /*41*/], Global_35, vVar2, 0, -1, 1056964608 /* Float: 0.5f */, 1f, 4);
			Local_851[0 /*41*/].f_8 = 6;
		}
	}
	else if (Local_851[0 /*41*/].f_8 == 6)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(Local_851[0 /*41*/], 0.5f);
		if (__LIB_0__::func_665(Local_851[0 /*41*/], Global_35, 1, 1) < 6.5f && !__LIB_0__::func_163(Local_851[0 /*41*/], 1630799643))
		{
			TASK::CLEAR_PED_TASKS(Local_851[0 /*41*/], true, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_851[0 /*41*/], Global_35, -1, false, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_851[1 /*41*/]) && Local_851[1 /*41*/].f_8 < 6)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], Local_851[1 /*41*/].f_10))
		{
			TASK::TASK_FORCE_MOTION_STATE(Local_851[1 /*41*/], joaat("MOTIONSTATE_AIMING"), false);
			bVar0 = true;
		}
		else if (ANIMSCENE::_0xB89FCFF19DAFFF28(vLocal_16[0 /*3*/], Local_851[1 /*41*/].f_10) && !__LIB_0__::func_163(Local_851[1 /*41*/], -2015108952))
		{
			TASK::TASK_GOTO_ENTITY_OFFSET(Local_851[1 /*41*/], Global_35, -1, 0.5f, 0f, 1f, 12);
			Local_851[1 /*41*/].f_8 = 6;
		}
	}
	else if (Local_851[1 /*41*/].f_8 == 6)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_851[1 /*41*/], 0.5f);
		if (__LIB_0__::func_665(Local_851[1 /*41*/], Global_35, 1, 1) < 6.5f && !__LIB_0__::func_163(Local_851[1 /*41*/], 1630799643))
		{
			TASK::CLEAR_PED_TASKS(Local_851[1 /*41*/], true, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_851[1 /*41*/], Global_35, -1, false, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_851[2 /*41*/]) && Local_851[2 /*41*/].f_8 < 6)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], Local_851[2 /*41*/].f_10))
		{
			TASK::TASK_FORCE_MOTION_STATE(Local_851[2 /*41*/], joaat("MOTIONSTATE_AIMING"), false);
			bVar0 = true;
		}
		else if (ANIMSCENE::_0xB89FCFF19DAFFF28(vLocal_16[0 /*3*/], Local_851[2 /*41*/].f_10) && !__LIB_0__::func_163(Local_851[2 /*41*/], -2015108952))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_851[2 /*41*/], true, true);
			__LIB_1__::func_766(Local_851[2 /*41*/], Local_851[2 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_851[2 /*41*/], Local_851[2 /*41*/].f_36, false, 0, false, false);
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, Local_851[2 /*41*/].f_38) };
			TASK::TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(Local_851[2 /*41*/], Global_35, vVar2, 0, -1, 1056964608 /* Float: 0.5f */, 1f, 12);
			Local_851[2 /*41*/].f_8 = 6;
		}
	}
	else if (Local_851[2 /*41*/].f_8 == 6)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_851[2 /*41*/], 0.5f);
		if (__LIB_0__::func_665(Local_851[2 /*41*/], Global_35, 1, 1) < 6.5f && !__LIB_0__::func_163(Local_851[2 /*41*/], 1630799643))
		{
			TASK::CLEAR_PED_TASKS(Local_851[2 /*41*/], true, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_851[2 /*41*/], Global_35, -1, false, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_851[3 /*41*/]) && Local_851[3 /*41*/].f_8 < 6)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], Local_851[3 /*41*/].f_10))
		{
			TASK::TASK_FORCE_MOTION_STATE(Local_851[3 /*41*/], joaat("MOTIONSTATE_AIMING"), false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_520))
			{
				__LIB_8__::func_863(&iLocal_520, 0, 1, 1);
				__LIB_1__::func_766(Local_851[3 /*41*/], Local_851[3 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			bVar0 = true;
		}
		else if (ANIMSCENE::_0xB89FCFF19DAFFF28(vLocal_16[0 /*3*/], Local_851[3 /*41*/].f_10) && !__LIB_0__::func_163(Local_851[3 /*41*/], 1237250926))
		{
			WEAPON::_0x0A2AB7B7ABC055F4(Local_851[3 /*41*/]);
			WEAPON::_0x5230D3F6EE56CFE6(Local_851[3 /*41*/], 0);
			TASK::TASK_AIM_GUN_AT_COORD(Local_851[3 /*41*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 2f, -1f), -1, false, true);
			Local_851[3 /*41*/].f_8 = 6;
		}
	}
	else if (Local_851[3 /*41*/].f_8 == 6)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_851[3 /*41*/], 0.5f);
		if (__LIB_0__::func_665(Local_851[3 /*41*/], Global_35, 1, 1) < 6.5f && !__LIB_0__::func_163(Local_851[3 /*41*/], 1630799643))
		{
			TASK::CLEAR_PED_TASKS(Local_851[3 /*41*/], true, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_851[3 /*41*/], Global_35, -1, false, 1);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_351()
{
	if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_851[iLocal_551 /*41*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_851[iLocal_551 /*41*/], iLocal_738, 1, 1)) || __LIB_4__::func_172(Local_851[iLocal_551 /*41*/], 0, 1, 0, 1)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(Local_851[iLocal_551 /*41*/].f_3, 8f, true, true)) || ENTITY::IS_ENTITY_DEAD(Local_851[iLocal_551 /*41*/])) || func_741(Local_851[iLocal_551 /*41*/], 0, &uLocal_676, &uLocal_704, 0, 0)) || __LIB_0__::func_266(Global_35, vLocal_1321, 5f, 1, 1))
	{
		return true;
	}
	iLocal_551++;
	if (iLocal_551 == 4)
	{
		iLocal_551 = 0;
	}
	return false;
}

void func_356()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_851[iVar0 /*41*/].f_8 < 7)
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_16[0 /*3*/], Local_851[iVar0 /*41*/].f_10))
			{
				TASK::TASK_FORCE_MOTION_STATE(Local_851[iVar0 /*41*/], joaat("MOTIONSTATE_AIMING"), false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_515) && iVar0 == 0)
				{
					__LIB_8__::func_863(&iLocal_515, 0, 1, 1);
					__LIB_1__::func_766(Local_851[iVar0 /*41*/], Local_851[iVar0 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_520) && iVar0 == 3)
				{
					__LIB_8__::func_863(&iLocal_520, 0, 1, 1);
					__LIB_1__::func_766(Local_851[iVar0 /*41*/], Local_851[iVar0 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				}
			}
			else if (ANIMSCENE::_0xB89FCFF19DAFFF28(vLocal_16[0 /*3*/], Local_851[iVar0 /*41*/].f_10))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_851[iVar0 /*41*/], Local_851[iVar0 /*41*/].f_38, Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				Local_851[iVar0 /*41*/].f_8 = 7;
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_851[iVar0 /*41*/]))
		{
			if (iVar0 == 0)
			{
				__LIB_8__::func_863(&iLocal_515, 0, 1, 1);
			}
			else if (iVar0 == 3)
			{
				__LIB_8__::func_863(&iLocal_520, 0, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_357()
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_44))
	{
		__LIB_1__::func_148(&uLocal_44);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_851[iVar0 /*41*/].f_37))
		{
			if (iVar0 == 3)
			{
				Local_851[iVar0 /*41*/].f_37 = VOLUME::_CREATE_VOLUME_SPHERE(Local_851[iVar0 /*41*/].f_38, 0f, 0f, 0f, 4f, 4f, 4f);
			}
			else
			{
				Local_851[iVar0 /*41*/].f_37 = VOLUME::_CREATE_VOLUME_SPHERE(Local_851[iVar0 /*41*/].f_38, 0f, 0f, 0f, 8f, 8f, 8f);
			}
		}
		iVar0++;
	}
	if ((!iLocal_1274[0] && !PED::IS_PED_DEAD_OR_DYING(Local_851[0 /*41*/], true)) && !PED::IS_PED_FATALLY_INJURED(Local_851[0 /*41*/]))
	{
		if (Local_851[0 /*41*/].f_8 == 5 && !__LIB_0__::func_163(Local_851[0 /*41*/], -1758697641))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_515))
			{
				__LIB_8__::func_863(&iLocal_515, 0, 1, 1);
				__LIB_1__::func_766(Local_851[0 /*41*/], Local_851[0 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			PED::_0x406CCF555B04FAD3(Local_851[0 /*41*/], 0, 0f);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_851[0 /*41*/], Local_851[0 /*41*/].f_38, Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			Local_851[0 /*41*/].f_8 = 6;
		}
		else if (Local_851[0 /*41*/].f_8 == 6 && __LIB_3__::func_135(&uLocal_44) > Local_851[0 /*41*/].f_9)
		{
			if (__LIB_0__::func_266(Local_851[0 /*41*/], Local_851[0 /*41*/].f_38, 3f, 1, 1) || !__LIB_0__::func_163(Local_851[0 /*41*/], 780511057))
			{
				if (!__LIB_0__::func_163(Local_851[0 /*41*/], 780511057))
				{
					TASK::CLEAR_PED_TASKS(Local_851[0 /*41*/], true, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_851[0 /*41*/], Local_851[0 /*41*/].f_36, false, 0, false, false);
					__LIB_3__::func_442(Local_851[0 /*41*/], Local_851[0 /*41*/].f_37, 1, 0);
					TASK::TASK_COMBAT_PED(Local_851[0 /*41*/], Global_35, 0, 0);
				}
				else
				{
					Local_851[0 /*41*/].f_8 = 7;
				}
			}
		}
		else if (Local_851[0 /*41*/].f_8 == 7)
		{
			if (!__LIB_0__::func_163(Local_851[0 /*41*/], 780511057) && !iLocal_1274[0])
			{
				TASK::CLEAR_PED_TASKS(Local_851[0 /*41*/], true, false);
				__LIB_3__::func_442(Local_851[0 /*41*/], Local_851[0 /*41*/].f_37, 0, 0);
				TASK::TASK_COMBAT_PED(Local_851[0 /*41*/], Global_35, 0, 0);
				iLocal_1274[0] = 1;
			}
		}
	}
	if ((!iLocal_1274[1] && !PED::IS_PED_DEAD_OR_DYING(Local_851[1 /*41*/], true)) && !PED::IS_PED_FATALLY_INJURED(Local_851[1 /*41*/]))
	{
		if ((Local_851[1 /*41*/].f_8 == 5 && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_851[1 /*41*/], iLocal_488)) && !__LIB_0__::func_163(Local_851[1 /*41*/], -1758697641))
		{
			PED::_0x406CCF555B04FAD3(Local_851[1 /*41*/], 0, 0f);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_851[1 /*41*/], Local_851[1 /*41*/].f_38, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			Local_851[1 /*41*/].f_8 = 6;
		}
		else if (Local_851[1 /*41*/].f_8 == 6 && __LIB_3__::func_135(&uLocal_44) > Local_851[1 /*41*/].f_9)
		{
			if (__LIB_0__::func_266(Local_851[1 /*41*/], Local_851[1 /*41*/].f_38, 2f, 1, 1) || !__LIB_0__::func_163(Local_851[1 /*41*/], 780511057))
			{
				if (!__LIB_0__::func_163(Local_851[1 /*41*/], 780511057))
				{
					TASK::CLEAR_PED_TASKS(Local_851[1 /*41*/], true, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_851[1 /*41*/], Local_851[1 /*41*/].f_36, false, 0, false, false);
					__LIB_3__::func_442(Local_851[1 /*41*/], Local_851[1 /*41*/].f_37, 1, 0);
					TASK::TASK_COMBAT_PED(Local_851[1 /*41*/], Global_35, 0, 0);
				}
				else
				{
					Local_851[1 /*41*/].f_8 = 7;
				}
			}
		}
		else if (Local_851[1 /*41*/].f_8 == 7)
		{
			if (!__LIB_0__::func_163(Local_851[1 /*41*/], 780511057) && !iLocal_1274[1])
			{
				TASK::CLEAR_PED_TASKS(Local_851[1 /*41*/], true, false);
				__LIB_3__::func_442(Local_851[1 /*41*/], Local_851[1 /*41*/].f_37, 1, 0);
				TASK::TASK_COMBAT_PED(Local_851[1 /*41*/], Global_35, 0, 0);
				iLocal_1274[1] = 1;
			}
		}
	}
	if ((!iLocal_1274[2] && !PED::IS_PED_DEAD_OR_DYING(Local_851[2 /*41*/], true)) && !PED::IS_PED_FATALLY_INJURED(Local_851[2 /*41*/]))
	{
		if (Local_851[2 /*41*/].f_8 == 5 && !__LIB_0__::func_163(Local_851[2 /*41*/], -1758697641))
		{
			PED::_0x406CCF555B04FAD3(Local_851[2 /*41*/], 0, 0f);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_851[2 /*41*/], -5986.88f, -3231.82f, -22.21f, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			Local_851[2 /*41*/].f_8 = 6;
		}
		else if (Local_851[2 /*41*/].f_8 == 6 && __LIB_3__::func_135(&uLocal_44) > Local_851[2 /*41*/].f_9)
		{
			if (__LIB_0__::func_266(Local_851[2 /*41*/], -5986.88f, -3231.82f, -22.21f, 3f, 1, 0) || !__LIB_0__::func_163(Local_851[2 /*41*/], -1758697641))
			{
				if (!__LIB_0__::func_163(Local_851[2 /*41*/], 780511057))
				{
					TASK::CLEAR_PED_TASKS(Local_851[2 /*41*/], true, false);
					__LIB_3__::func_442(Local_851[2 /*41*/], Local_851[2 /*41*/].f_37, 1, 0);
					TASK::TASK_COMBAT_PED(Local_851[2 /*41*/], Global_35, 0, 0);
				}
				else
				{
					Local_851[2 /*41*/].f_8 = 7;
				}
			}
		}
		else if (Local_851[2 /*41*/].f_8 == 7)
		{
			if (!__LIB_0__::func_163(Local_851[2 /*41*/], 780511057) && !iLocal_1274[2])
			{
				TASK::CLEAR_PED_TASKS(Local_851[2 /*41*/], true, false);
				__LIB_3__::func_442(Local_851[2 /*41*/], Local_851[2 /*41*/].f_37, 1, 0);
				TASK::TASK_COMBAT_PED(Local_851[2 /*41*/], Global_35, 0, 0);
				iLocal_1274[2] = 1;
			}
		}
	}
	if ((!iLocal_1274[3] && !PED::IS_PED_DEAD_OR_DYING(Local_851[3 /*41*/], true)) && !PED::IS_PED_FATALLY_INJURED(Local_851[3 /*41*/]))
	{
		if ((Local_851[3 /*41*/].f_8 == 5 && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_851[3 /*41*/], iLocal_493)) && !__LIB_0__::func_163(Local_851[3 /*41*/], 688521916))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_520))
			{
				__LIB_8__::func_863(&iLocal_520, 0, 1, 1);
				__LIB_1__::func_766(Local_851[3 /*41*/], Local_851[3 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			PED::_0x406CCF555B04FAD3(Local_851[3 /*41*/], 0, 0f);
			TASK::CLEAR_PED_TASKS(Local_851[3 /*41*/], true, false);
			TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Local_851[3 /*41*/], -5981.87f, -3216.12f, -22.25f, Global_36, 2f, true, 0.5f, 6f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
			Local_851[3 /*41*/].f_8 = 6;
		}
		else if (Local_851[3 /*41*/].f_8 == 6 && __LIB_3__::func_135(&uLocal_44) > Local_851[3 /*41*/].f_9)
		{
			if (__LIB_0__::func_266(Local_851[3 /*41*/], -5981.87f, -3216.12f, -22.25f, 3f, 1, 1) || !__LIB_0__::func_163(Local_851[3 /*41*/], 688521916))
			{
				if (!__LIB_0__::func_163(Local_851[3 /*41*/], 780511057))
				{
					TASK::CLEAR_PED_TASKS(Local_851[3 /*41*/], true, false);
					__LIB_3__::func_442(Local_851[3 /*41*/], Local_851[3 /*41*/].f_37, 1, 0);
					TASK::TASK_COMBAT_PED(Local_851[3 /*41*/], Global_35, 0, 0);
				}
				else
				{
					Local_851[3 /*41*/].f_8 = 7;
				}
			}
		}
		else if (Local_851[3 /*41*/].f_8 == 7)
		{
			if (!__LIB_0__::func_163(Local_851[3 /*41*/], 780511057) && !iLocal_1274[3])
			{
				TASK::CLEAR_PED_TASKS(Local_851[3 /*41*/], true, false);
				__LIB_3__::func_442(Local_851[3 /*41*/], Local_851[3 /*41*/].f_37, 1, 0);
				TASK::TASK_COMBAT_PED(Local_851[3 /*41*/], Global_35, 0, 0);
				iLocal_1274[3] = 1;
			}
		}
	}
}

void func_358()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_1016[iVar0 /*41*/].f_8 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1016[iVar0 /*41*/]) && !PED::IS_PED_FATALLY_INJURED(Local_1016[iVar0 /*41*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_1016[iVar0 /*41*/], true, false);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(Local_1016[iVar0 /*41*/], vLocal_455[iVar0 /*3*/], 3f, 0, false, 524419, -1f);
				Local_1016[iVar0 /*41*/].f_8 = 3;
			}
		}
		iVar0++;
	}
}

void func_359(var uParam0)
{
	if (!bLocal_822)
	{
		if (!__LIB_5__::func_463())
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_851[2 /*41*/]))
			{
				__LIB_12__::func_876(uParam0, "RBT23_Hes_a_BH", 0);
			}
			bLocal_822 = true;
		}
	}
	else if (!bLocal_823)
	{
		if (!__LIB_5__::func_463())
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_851[3 /*41*/]))
			{
				__LIB_12__::func_876(uParam0, "RBT23_Attack", 0);
			}
			bLocal_823 = true;
		}
	}
}

void func_360(var uParam0)
{
	if (Local_1099.f_8 == 10)
	{
		return;
	}
	if (!bLocal_1324)
	{
		if (func_717(1, 0, 0, 0, 0) >= 3 || __LIB_0__::func_266(Global_35, vLocal_1321, 5f, 1, 1))
		{
			func_748();
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_1099, Local_657[2 /*6*/], Global_35, 3f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_1099, joaat("WEAPON_REPEATER_CARBINE"), true, 0, false, false);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1016[0 /*41*/]))
			{
				if (__LIB_12__::func_876(uParam0, "RBT23_GO_SEE", 0))
				{
				}
			}
			bLocal_1324 = true;
		}
	}
	else if (__LIB_0__::func_266(Local_1099, Local_657[2 /*6*/], 1f, 1, 1) && Local_1099.f_8 < 7)
	{
		if (!__LIB_0__::func_163(Local_1099, 167901368))
		{
			TASK::TASK_SHOOT_AT_ENTITY(Local_1099, Global_35, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			Local_1099.f_8 = 7;
		}
	}
	else if (__LIB_0__::func_48(Local_1099, Global_35, 12f, 1) || __LIB_3__::func_528(Local_1099, Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1099))
		{
			if (!__LIB_0__::func_163(Local_1099, 780511057))
			{
				TASK::REMOVE_COVER_POINT(iLocal_562[2]);
				TASK::CLEAR_PED_TASKS(Local_1099, true, false);
				TASK::TASK_COMBAT_PED(Local_1099, Global_35, 0, 0);
				Local_1099.f_8 = 7;
			}
		}
	}
}

bool func_361()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_557[iVar0]))
		{
			iLocal_557[iVar0] = VOLUME::_CREATE_VOLUME_SPHERE(Local_592[iVar0 /*9*/], Local_592[iVar0 /*9*/].f_3, Local_592[iVar0 /*9*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_562[iVar0]))
		{
			iLocal_562[iVar0] = TASK::ADD_COVER_POINT(Local_657[iVar0 /*6*/], Local_657[iVar0 /*6*/].f_3, Local_657[iVar0 /*6*/].f_4, Local_657[iVar0 /*6*/].f_5, 0, true);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_1016[iVar0 /*41*/].f_8 < 4)
		{
			if (__LIB_0__::func_266(Local_1016[iVar0 /*41*/], vLocal_455[iVar0 /*3*/], 2f, 1, 1))
			{
				__LIB_3__::func_442(Local_1016[iVar0 /*41*/], iLocal_557[iVar0], 0, 0);
				TASK::_0x50AA09A0DA64E73C(Local_1016[iVar0 /*41*/], vLocal_455[iVar0 /*3*/], Global_36);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1016[iVar0 /*41*/], vLocal_455[iVar0 /*3*/], -1, 0, 0, 0, 0, iLocal_562[iVar0], 0, 0, 0);
				Local_1016[iVar0 /*41*/].f_8 = 4;
				if (__LIB_11__::func_307(Local_1016[iVar0 /*41*/], iLocal_562[iVar0], 0, 1077936128 /* Float: 3f */))
				{
				}
			}
		}
		iVar0++;
	}
	if ((Local_1016[0 /*41*/].f_8 >= 4 || ENTITY::IS_ENTITY_DEAD(Local_1016[0 /*41*/])) && (Local_1016[1 /*41*/].f_8 >= 4 || ENTITY::IS_ENTITY_DEAD(Local_1016[1 /*41*/])))
	{
		return true;
	}
	return false;
}

bool func_362()
{
	int iVar0;
	iVar0 = 0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_557[3]))
	{
		iLocal_557[3] = VOLUME::_CREATE_VOLUME_SPHERE(Local_592[3 /*9*/], Local_592[3 /*9*/].f_3, Local_592[3 /*9*/].f_6);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_1016[iVar0 /*41*/].f_8 < 7)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1016[iVar0 /*41*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
			{
				__LIB_1__::func_766(Local_1016[iVar0 /*41*/], Local_1016[iVar0 /*41*/].f_36, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Local_1016[iVar0 /*41*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			if (__LIB_0__::func_266(Global_35, vLocal_455[iVar0 /*3*/], 15f, 1, 1))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1016[iVar0 /*41*/], false, true);
				TASK::TASK_COMBAT_PED(Local_1016[iVar0 /*41*/], Global_35, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1016[iVar0 /*41*/], 0, false);
				TASK::_0xE5831AA1E2FD147C(Local_1016[iVar0 /*41*/]);
				__LIB_3__::func_442(Local_1016[iVar0 /*41*/], iLocal_557[3], 0, 0);
				Local_1016[iVar0 /*41*/].f_8 = 7;
			}
		}
		iVar0++;
	}
	if ((Local_1016[0 /*41*/].f_8 >= 7 || ENTITY::IS_ENTITY_DEAD(Local_1016[0 /*41*/])) && (Local_1016[1 /*41*/].f_8 >= 7 || ENTITY::IS_ENTITY_DEAD(Local_1016[1 /*41*/])))
	{
		return true;
	}
	return false;
}

bool func_363(var uParam0)
{
	if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_16[1 /*3*/], "CLIMBING_LOOP", 1))
	{
		if ((PED::IS_PED_DEAD_OR_DYING(Local_1016[0 /*41*/], true) && PED::IS_PED_DEAD_OR_DYING(Local_1016[1 /*41*/], true)) && __LIB_0__::func_48(Global_35, iLocal_446, 28f, 1))
		{
			if (!bLocal_809)
			{
				bLocal_809 = __LIB_12__::func_876(uParam0, "RBT23_GETAWAY", 0);
			}
			if (!__LIB_0__::func_75(&uLocal_47) && __LIB_2__::func_215(Global_35, iLocal_446, 0, 1114636288 /* Float: 60f */, 0))
			{
				__LIB_1__::func_283(&uLocal_47, 0);
			}
		}
		if (!bLocal_33)
		{
			if (__LIB_0__::func_48(Global_35, iLocal_446, 20f, 1) || __LIB_3__::func_135(&uLocal_47) > 2000)
			{
				if (!__LIB_5__::func_463())
				{
					bLocal_33 = __LIB_12__::func_876(uParam0, "RBT23_Scramble1", 0);
				}
			}
		}
		if (!bLocal_34)
		{
			if (__LIB_0__::func_48(Global_35, iLocal_446, 15f, 1) || __LIB_3__::func_135(&uLocal_47) > 5000)
			{
				if (!__LIB_5__::func_463())
				{
					bLocal_34 = __LIB_12__::func_876(uParam0, "RBT23_Scramble2", 0);
				}
			}
		}
		if (__LIB_0__::func_48(Global_35, iLocal_446, 13f, 1) || __LIB_3__::func_135(&uLocal_47) > 6000)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_16[1 /*3*/], "BOOL", true, false);
		}
	}
	else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_446, vLocal_16[1 /*3*/]))
	{
		__LIB_0__::func_37(&uLocal_47);
		if (iLocal_55 != 9)
		{
			__LIB_12__::func_876(uParam0, "RBT23_NoTNT", 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_446, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
			{
				__LIB_1__::func_766(iLocal_446, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_446, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			TASK::TASK_COMBAT_PED(iLocal_446, Global_35, 0, 0);
		}
		return true;
	}
	return false;
}

bool func_364()
{
	if ((__LIB_13__::func_201(iLocal_446) || __LIB_10__::func_75(iLocal_446)) || ANIMSCENE::GET_ANIM_SCENE_BOOL(vLocal_16[1 /*3*/], "BOOL"))
	{
		return true;
	}
	return false;
}

void func_365(var uParam0)
{
	if (iLocal_1281 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1140[iLocal_1281 /*41*/]))
		{
			Local_1140[iLocal_1281 /*41*/] = __LIB_8__::func_931(iLocal_58, Local_1140[iLocal_1281 /*41*/].f_3, Local_1140[iLocal_1281 /*41*/].f_6, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			PED::_SET_PED_BODY_COMPONENT(Local_1140[iLocal_1281 /*41*/], Local_1140[iLocal_1281 /*41*/].f_1);
			PED::_UPDATE_PED_VARIATION(Local_1140[iLocal_1281 /*41*/], false, true, true, true, false);
			__LIB_1__::func_766(Local_1140[iLocal_1281 /*41*/], Local_1140[iLocal_1281 /*41*/].f_36, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1140[iLocal_1281 /*41*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_1140[iLocal_1281 /*41*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1140[iLocal_1281 /*41*/], joaat("REL_PLAYER_ENEMY"));
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_1140[iLocal_1281 /*41*/], false);
			PED::SET_PED_CONFIG_FLAG(Local_1140[iLocal_1281 /*41*/], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_1140[iLocal_1281 /*41*/], 146, true);
			PED::SET_PED_CONFIG_FLAG(Local_1140[iLocal_1281 /*41*/], 388, true);
			ENTITY::_0x18FF3110CF47115D(Local_1140[iLocal_1281 /*41*/], 2, 0);
			PED::_0xAE6004120C18DF97(Local_1140[iLocal_1281 /*41*/], 0, 0);
			if (iLocal_1281 == 0)
			{
				__LIB_12__::func_875(uParam0, Local_1140[iLocal_1281 /*41*/], Local_1140[iLocal_1281 /*41*/].f_7, 0);
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1264[iLocal_1281]))
			{
				iLocal_1264[iLocal_1281] = __LIB_8__::func_931(iLocal_1268, Local_1140[iLocal_1281 /*41*/].f_3, Local_1140[iLocal_1281 /*41*/].f_6, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_1264[iLocal_1281], 15, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1264[iLocal_1281], joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_CONFIG_FLAG(iLocal_1264[iLocal_1281], 217, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_1264[iLocal_1281], 77, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1264[iLocal_1281], 48, true);
				PED::_0x2EB75FB86C41F026(iLocal_1264[iLocal_1281], 3, 0);
				PED::_0x2EB75FB86C41F026(iLocal_1264[iLocal_1281], 1, 0);
				PED::_0x2EB75FB86C41F026(iLocal_1264[iLocal_1281], 7, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1264[iLocal_1281], true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1264[iLocal_1281], 512, true);
				POPULATION::_0xF74E134F40192884(iLocal_1264[iLocal_1281], 2);
			}
			PED::_SET_PED_ON_MOUNT(Local_1140[iLocal_1281 /*41*/], iLocal_1264[iLocal_1281], -1, true);
			if (iLocal_1281 == 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1303);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1284[iLocal_1281 /*3*/], 1.5f, -1, 0.25f, 0, 40000f);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1303);
				TASK::TASK_PERFORM_SEQUENCE(Local_1140[iLocal_1281 /*41*/], iLocal_1303);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1303);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1140[iLocal_1281 /*41*/], vLocal_1284[iLocal_1281 /*3*/], 1.5f, -1, 0.25f, 0, 40000f);
			}
			iLocal_1281++;
		}
	}
	if (iLocal_1281 >= 3)
	{
		bLocal_1269 = true;
	}
}

void func_366(var uParam0)
{
	int iVar0;
	if (bLocal_808)
	{
		if (__LIB_3__::func_135(&uLocal_572) > 8500)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!__LIB_0__::func_71(Local_1140[iVar0 /*41*/]) && Local_1140[iVar0 /*41*/].f_8 != 10)
				{
					__LIB_1__::func_562(Local_1140[iVar0 /*41*/], iLocal_1264[iVar0], 0, 2f, 20000);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1140[iVar0 /*41*/], Local_1140[iVar0 /*41*/].f_36, false, 0, false, false);
				}
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_1140[iVar0 /*41*/], false);
				iVar0++;
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_571))
			{
				iLocal_571 = VOLUME::_CREATE_VOLUME_BOX(-5971.073f, -3181.897f, -23.03f, 0f, -8.655f, -25.004f, 53.153f, 39.812f, 6.337f);
			}
			if (__LIB_0__::func_393(Global_35, iLocal_571, 0, 1))
			{
				__LIB_12__::func_876(uParam0, "RBT23_BAN6_MINE", 0);
			}
			bLocal_808 = false;
		}
		iLocal_579++;
		if (iLocal_579 >= 3)
		{
			iLocal_579 = 0;
		}
	}
	else if (((!bLocal_1272 && __LIB_0__::func_396(Local_1140[0 /*41*/])) && !__LIB_2__::func_65(Local_1140[0 /*41*/], Global_35)) && Local_1140[0 /*41*/].f_8 != 10)
	{
		TASK::TASK_COMBAT_PED(Local_1140[0 /*41*/], Global_35, 0, 0);
		bLocal_1272 = true;
	}
}

bool func_367()
{
	if (bLocal_1273)
	{
		return true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_570))
	{
		iLocal_570 = VOLUME::_CREATE_VOLUME_BOX(-5964.1f, -3206.79f, -20.608f, 0f, 0f, 146.798f, 17.568f, 2.159695f, 4.635f);
	}
	else if (__LIB_0__::func_393(Global_35, iLocal_570, 0, 1) && !__LIB_0__::func_75(&uLocal_572))
	{
		__LIB_1__::func_283(&uLocal_572, 0);
	}
	else if (__LIB_0__::func_264(&uLocal_572) > 1.5f || __LIB_9__::func_660(Local_1140[iLocal_579 /*41*/], &uLocal_705))
	{
		Local_1140[0 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1140[0 /*41*/]);
		Local_1140[1 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1140[1 /*41*/]);
		Local_1140[2 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1140[2 /*41*/]);
		bLocal_1273 = true;
		return true;
	}
	iLocal_579++;
	if (iLocal_579 >= 3)
	{
		iLocal_579 = 0;
	}
	return false;
}

void func_368(var uParam0)
{
	if (!bLocal_806)
	{
		bLocal_806 = __LIB_12__::func_876(uParam0, "RBT23_BAN6_INIT", 0);
	}
	else if (!AUDIO::_0x1ECC76792F661CF5("RBT23_BAN6_INIT"))
	{
		if (__LIB_10__::func_79(iLocal_446))
		{
			if (__LIB_10__::func_75(iLocal_446))
			{
				bLocal_807 = __LIB_12__::func_876(uParam0, "RBT23_BAN6_DED", 0);
			}
			else
			{
				bLocal_807 = __LIB_12__::func_876(uParam0, "RBT23_BAN6_ALVE", 0);
			}
		}
		else
		{
			bLocal_807 = __LIB_12__::func_876(uParam0, "RBT23_BAN6_NOT", 0);
		}
	}
}

void func_369()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_566[iVar0]))
		{
			iLocal_566[iVar0] = VOLUME::_CREATE_VOLUME_SPHERE(Local_629[iVar0 /*9*/], Local_629[iVar0 /*9*/].f_3, Local_629[iVar0 /*9*/].f_6);
		}
		iVar0++;
	}
	iLocal_1282 = 0;
	while (iLocal_1282 < 3)
	{
		if (!PED::IS_PED_IN_COMBAT(Local_1140[iLocal_1282 /*41*/], 0) && !PED::IS_PED_DEAD_OR_DYING(Local_1140[iLocal_1282 /*41*/], true))
		{
			TASK::CLEAR_PED_TASKS(Local_1140[iLocal_1282 /*41*/], true, false);
			__LIB_3__::func_442(Local_1140[iLocal_1282 /*41*/], iLocal_566[iLocal_1282], 0, 0);
			TASK::TASK_COMBAT_PED(Local_1140[iLocal_1282 /*41*/], Global_35, 0, 0);
			MAP::_BLIP_SET_MODIFIER(Local_1140[iLocal_1282 /*41*/].f_2, 1475371487);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1140[iLocal_1282 /*41*/], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1140[iLocal_1282 /*41*/], 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1140[iLocal_1282 /*41*/], 50, true);
			Local_1140[iLocal_1282 /*41*/].f_8 = 7;
		}
		iLocal_1282++;
	}
	bLocal_1270 = true;
}

void func_370()
{
	int iVar0;
	float fVar1;
	fVar1 = 0f;
	if (!bLocal_1271)
	{
		if (!AUDIO::_0x1ECC76792F661CF5("RBT23_BAN6_ALVE"))
		{
			if (__LIB_10__::func_79(iLocal_446) && !__LIB_10__::func_75(iLocal_446))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 3)
				{
					fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 6.28f);
					if (!PED::IS_PED_DEAD_OR_DYING(Local_1140[iVar0 /*41*/], true))
					{
						TASK::CLEAR_PED_TASKS(Local_1140[iVar0 /*41*/], true, false);
						TASK::TASK_GOTO_ENTITY_OFFSET(Local_1140[iLocal_1283 /*41*/], Global_35, -1, 12f, fVar1, 2.5f, 12);
					}
					iVar0++;
				}
				__LIB_1__::func_148(&uLocal_575);
				iLocal_578 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 4500);
			}
			bLocal_1271 = true;
		}
	}
	else if (__LIB_10__::func_75(iLocal_446) || !__LIB_10__::func_79(iLocal_446))
	{
		func_756();
		if (!__LIB_10__::func_75(iLocal_446) && __LIB_10__::func_79(iLocal_446))
		{
			bLocal_1271 = false;
		}
	}
	else if (__LIB_3__::func_135(&uLocal_575) > iLocal_578)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (!ENTITY::IS_ENTITY_DEAD(Local_1140[iVar0 /*41*/]) && !__LIB_0__::func_163(Local_1140[iVar0 /*41*/], -1692648609))
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 6.28f);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1140[iVar0 /*41*/], false, true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1303);
			func_757(&uLocal_1304, 0, Global_36, Global_35, 3000, joaat("FIRING_PATTERN_SLOW_SHOT"), 1, 0);
			TASK::TASK_GOTO_ENTITY_OFFSET(0, Global_35, -1, 12f, fVar1, 2.5f, 44);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1303);
			TASK::TASK_PERFORM_SEQUENCE(Local_1140[iVar0 /*41*/], iLocal_1303);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1303);
			WEAPON::_0x0A2AB7B7ABC055F4(Local_1140[iVar0 /*41*/]);
			iLocal_578 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 4500);
			__LIB_1__::func_148(&uLocal_575);
		}
	}
}

void func_371(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_851[iVar0 /*41*/], true))
		{
			if (!__LIB_0__::func_266(Local_851[iVar0 /*41*/], vLocal_467, fLocal_1294, 1, 1) || !__LIB_0__::func_48(Local_851[iVar0 /*41*/], Global_35, 60f, 1))
			{
				if (!__LIB_0__::func_163(Local_851[iVar0 /*41*/], 518218985))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_851[iVar0 /*41*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
				if (!__LIB_0__::func_48(Local_851[iVar0 /*41*/], Global_35, 100f, 1))
				{
					__LIB_2__::func_426(&(Local_851[iVar0 /*41*/]));
					__LIB_0__::func_325(&(Local_851[iVar0 /*41*/].f_2));
				}
			}
		}
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(Local_1099, true))
	{
		if (!__LIB_0__::func_266(Local_1099, vLocal_467, fLocal_1294, 1, 1) || !__LIB_0__::func_48(Local_1099, Global_35, 60f, 1))
		{
			if (!__LIB_0__::func_163(Local_1099, 518218985))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1099, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			if (!__LIB_0__::func_48(Local_1099, Global_35, 100f, 1))
			{
				__LIB_2__::func_426(&Local_1099);
				__LIB_0__::func_325(&(Local_1099.f_2));
			}
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_1016[iVar0 /*41*/], true))
		{
			if (!__LIB_0__::func_266(Local_1016[iVar0 /*41*/], vLocal_467, fLocal_1294, 1, 1) || !__LIB_0__::func_48(Local_1016[iVar0 /*41*/], Global_35, 60f, 1))
			{
				if (!__LIB_0__::func_163(Local_1016[iVar0 /*41*/], 518218985))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1016[iVar0 /*41*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
				if (!__LIB_0__::func_48(Local_1016[iVar0 /*41*/], Global_35, 100f, 1))
				{
					__LIB_2__::func_426(&(Local_1016[iVar0 /*41*/]));
					__LIB_0__::func_325(&(Local_1016[iVar0 /*41*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_1140[iVar0 /*41*/], true))
		{
			if (!__LIB_0__::func_266(Local_1140[iVar0 /*41*/], vLocal_467, fLocal_1294, 1, 1))
			{
				if (!__LIB_0__::func_48(Local_1140[iVar0 /*41*/], Global_35, 60f, 1) || __LIB_1__::func_410(Global_36, __LIB_10__::func_45(115), 150f, 1))
				{
					if (!__LIB_0__::func_163(Local_1140[iVar0 /*41*/], 518218985))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1140[iVar0 /*41*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						if ((!bLocal_818 && !bLocal_817) && !ENTITY::IS_ENTITY_DEAD(iLocal_446))
						{
							__LIB_12__::func_876(uParam0, "RBT23_Gang_Flee", 0);
							bLocal_818 = true;
						}
					}
					if (!__LIB_0__::func_48(Local_1140[iVar0 /*41*/], Global_35, 100f, 1))
					{
						__LIB_2__::func_426(&(Local_1140[iVar0 /*41*/]));
						__LIB_2__::func_426(&(iLocal_1264[iVar0]));
						__LIB_0__::func_325(&(Local_1140[iVar0 /*41*/].f_2));
					}
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_1140[iVar0 /*41*/], 0f);
					if (__LIB_0__::func_272(iLocal_1264[iVar0], 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1264[iVar0], 0f);
					}
					if (!__LIB_0__::func_163(Local_1140[iVar0 /*41*/], 167901368))
					{
						TASK::CLEAR_PED_TASKS(Local_1140[iVar0 /*41*/], true, false);
						TASK::TASK_SHOOT_AT_ENTITY(Local_1140[iVar0 /*41*/], Global_35, -1, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
						iLocal_1299[iVar0] = 1;
					}
				}
			}
			else if (!__LIB_0__::func_48(Local_1140[iVar0 /*41*/], Global_35, 100f, 1))
			{
				__LIB_2__::func_426(&(Local_1140[iVar0 /*41*/]));
				__LIB_2__::func_426(&(iLocal_1264[iVar0]));
				__LIB_0__::func_325(&(Local_1140[iVar0 /*41*/].f_2));
			}
		}
		iVar0++;
	}
}

bool func_372(var uParam0)
{
	if (func_758(&Local_59, 1))
	{
		return true;
	}
	func_337(uParam0);
	func_759(uParam0);
	func_760(uParam0);
	return false;
}

bool func_373(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_761(uParam0);
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
					if (__LIB_10__::func_149(uParam0))
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
				func_785(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_374()
{
	if (__LIB_1__::func_185(70))
	{
		if (__LIB_10__::func_133(20, 1))
		{
			__LIB_6__::func_765(19, 1);
		}
		else
		{
			__LIB_6__::func_765(17, 1);
		}
	}
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
						func_823(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_823(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_823(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_823(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_823(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_823(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_823(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_823(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_823(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_823(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_823(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_823(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_823(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_825();
						func_826(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_823(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_823(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_861();
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
							func_823(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_439(var uParam0)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_10__::func_62(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_69, 49, true);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	if (!__LIB_0__::func_27(uParam0->f_329, 8388608))
	{
		func_900(uParam0);
		__LIB_10__::func_196(uParam0);
		if (!__LIB_0__::func_27(uParam0->f_329, 256))
		{
			if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				__LIB_13__::func_128(uParam0);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_329, 512) && !__LIB_0__::func_27(uParam0->f_328, 32))
		{
			__LIB_10__::func_187(uParam0);
		}
		if (!__LIB_0__::func_27(uParam0->f_328, 2097152))
		{
			__LIB_10__::func_134(uParam0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
	{
		__LIB_3__::func_459(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (__LIB_10__::func_145(uParam0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_308))
	{
		if (!__LIB_2__::func_157(uParam0->f_306, Global_36))
		{
			__LIB_1__::func_544(uParam0->f_308);
			__LIB_0__::func_172(uParam0->f_308);
		}
	}
	return false;
}

void func_441(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		iVar0 = 0;
		AUDIO::STOP_PED_SPEAKING(iLocal_446, false);
		__LIB_0__::func_172(iLocal_554);
		__LIB_0__::func_172(iLocal_453);
		__LIB_0__::func_172(iLocal_555);
		__LIB_0__::func_172(iLocal_556);
		__LIB_0__::func_172(iLocal_570);
		__LIB_0__::func_172(iLocal_50);
		__LIB_0__::func_172(iLocal_51);
		__LIB_0__::func_172(iLocal_52);
		__LIB_0__::func_172(iLocal_571);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_0__::func_172(Local_851[iVar0 /*41*/].f_37);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_0__::func_172(iLocal_557[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_0__::func_172(iLocal_566[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_562[iVar0]))
			{
				TASK::REMOVE_COVER_POINT(iLocal_562[iVar0]);
			}
			iVar0++;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_STOP");
	}
}

int func_496(int iParam0, int iParam1)
{
	var uVar0;
	return func_962(&uVar0, iParam0, iParam1);
}

bool func_514(var uParam0)
{
	if (func_741(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
	{
		if (uParam0->f_102 == 2)
		{
			return true;
		}
		else if (uParam0->f_102 == 4)
		{
			return true;
		}
		else if (uParam0->f_102 == 8)
		{
			return true;
		}
		else if (uParam0->f_102 == 8192)
		{
			if (__LIB_2__::func_839(uParam0->f_69, &(uParam0->f_74), 1))
			{
				return true;
			}
		}
		else if (uParam0->f_102 == 64)
		{
			return true;
		}
		else if (uParam0->f_102 == 256)
		{
			if (__LIB_1__::func_205(Global_35, uParam0->f_306, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_596(var uParam0)
{
	if (iLocal_1279 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_851[iLocal_1279 /*41*/]))
		{
			Local_851[iLocal_1279 /*41*/] = __LIB_8__::func_931(iLocal_58, Local_851[iLocal_1279 /*41*/].f_3, Local_851[iLocal_1279 /*41*/].f_6, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0);
			PED::_SET_PED_BODY_COMPONENT(Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_1);
			PED::_UPDATE_PED_VARIATION(Local_851[iLocal_1279 /*41*/], false, true, true, true, false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_851[iLocal_1279 /*41*/], true, true);
			PED::_0x406CCF555B04FAD3(Local_851[iLocal_1279 /*41*/], 1, 0.2f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_851[iLocal_1279 /*41*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_851[iLocal_1279 /*41*/], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_851[iLocal_1279 /*41*/], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_851[iLocal_1279 /*41*/], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_851[iLocal_1279 /*41*/], 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_851[iLocal_1279 /*41*/], 46, true);
			PED::SET_PED_ACCURACY(Local_851[iLocal_1279 /*41*/], iLocal_552);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_851[iLocal_1279 /*41*/], joaat("REL_PLAYER_ENEMY"));
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_851[iLocal_1279 /*41*/], false);
			PED::SET_PED_CONFIG_FLAG(Local_851[iLocal_1279 /*41*/], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_851[iLocal_1279 /*41*/], 146, true);
			PED::SET_PED_CONFIG_FLAG(Local_851[iLocal_1279 /*41*/], 122, true);
			PED::SET_PED_CONFIG_FLAG(Local_851[iLocal_1279 /*41*/], 388, true);
			ENTITY::_0x18FF3110CF47115D(Local_851[iLocal_1279 /*41*/], 2, 0);
			PED::_0xAE6004120C18DF97(Local_851[iLocal_1279 /*41*/], 0, 0);
			PED::SET_PED_HEARING_RANGE(Local_851[iLocal_1279 /*41*/], 5f);
			Local_851[iLocal_1279 /*41*/].f_8 = 1;
			if (iLocal_1279 == 0)
			{
				__LIB_12__::func_875(uParam0, Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_7, 0);
			}
			else if (iLocal_1279 == 1)
			{
				__LIB_1__::func_766(Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_36, 1, 1, func_1023(iLocal_1279), 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_12__::func_875(uParam0, Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_7, 0);
			}
			else if (iLocal_1279 == 2)
			{
				__LIB_1__::func_766(Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_36, 0, 1, func_1023(iLocal_1279), 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_12__::func_875(uParam0, Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_7, 0);
			}
			else if (iLocal_1279 == 3)
			{
				__LIB_12__::func_875(uParam0, Local_851[iLocal_1279 /*41*/], Local_851[iLocal_1279 /*41*/].f_7, 0);
			}
			Local_851[iLocal_1279 /*41*/].f_11 = { 0f, 0f, 0f };
			Local_851[iLocal_1279 /*41*/].f_11.f_3 = Global_35;
			Local_851[iLocal_1279 /*41*/].f_11.f_4 = 21030;
			Local_851[iLocal_1279 /*41*/].f_11.f_8 = 4;
			Local_851[iLocal_1279 /*41*/].f_11.f_19 = 4;
			Local_851[iLocal_1279 /*41*/].f_11.f_21 = 4;
			Local_851[iLocal_1279 /*41*/].f_11.f_17 = 4;
			Local_851[iLocal_1279 /*41*/].f_11.f_18 = 4;
			Local_851[iLocal_1279 /*41*/].f_11.f_7 = 0;
		}
		iLocal_1279++;
	}
}

void func_597(var uParam0)
{
	if (iLocal_1280 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1016[iLocal_1280 /*41*/]))
		{
			Local_1016[iLocal_1280 /*41*/] = __LIB_8__::func_931(iLocal_58, Local_1016[iLocal_1280 /*41*/].f_3, Local_1016[iLocal_1280 /*41*/].f_6, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			PED::_SET_PED_BODY_COMPONENT(Local_1016[iLocal_1280 /*41*/], Local_1016[iLocal_1280 /*41*/].f_1);
			PED::_UPDATE_PED_VARIATION(Local_1016[iLocal_1280 /*41*/], false, true, true, true, false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_1016[iLocal_1280 /*41*/], true, true);
			__LIB_1__::func_766(Local_1016[iLocal_1280 /*41*/], Local_1016[iLocal_1280 /*41*/].f_36, 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			Local_1016[iLocal_1280 /*41*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1016[iLocal_1280 /*41*/]);
			MAP::_BLIP_SET_MODIFIER(Local_1016[iLocal_1280 /*41*/].f_2, -1034486097);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1016[iLocal_1280 /*41*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_1016[iLocal_1280 /*41*/], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1016[iLocal_1280 /*41*/], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1016[iLocal_1280 /*41*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1016[iLocal_1280 /*41*/], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1016[iLocal_1280 /*41*/], 12, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1016[iLocal_1280 /*41*/], 16, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1016[iLocal_1280 /*41*/], joaat("REL_PLAYER_ENEMY"));
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_1016[iLocal_1280 /*41*/], false);
			PED::SET_PED_CONFIG_FLAG(Local_1016[iLocal_1280 /*41*/], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_1016[iLocal_1280 /*41*/], 146, true);
			PED::SET_PED_CONFIG_FLAG(Local_1016[iLocal_1280 /*41*/], 388, true);
			ENTITY::_0x18FF3110CF47115D(Local_1016[iLocal_1280 /*41*/], 2, 0);
			PED::_0xAE6004120C18DF97(Local_1016[iLocal_1280 /*41*/], 0, 0);
		}
		if (iLocal_1280 == 0)
		{
			__LIB_12__::func_875(uParam0, Local_1016[iLocal_1280 /*41*/], Local_1016[iLocal_1280 /*41*/].f_7, 0);
		}
		iLocal_1280++;
	}
}

void func_598()
{
	if (!bLocal_542)
	{
		if ((!__LIB_0__::func_75(&uLocal_543) && __LIB_0__::func_266(Global_35, vLocal_467, 125f, 1, 1)) && ENTITY::DOES_ENTITY_EXIST(Local_851[1 /*41*/]))
		{
			FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], -5959f, -3219f, -15f, 25, 1f, true, false, 1f);
			__LIB_1__::func_283(&uLocal_543, 0);
		}
		else if (__LIB_0__::func_264(&uLocal_543) > 25f && __LIB_0__::func_266(Global_35, vLocal_467, 125f, 1, 1))
		{
			FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], -5959f, -3219f, -15f, 25, 1f, true, false, 1f);
			__LIB_1__::func_283(&uLocal_543, 1);
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_546))
	{
		iLocal_546 = VOLUME::_CREATE_VOLUME_SPHERE(-6011.534f, -3281.546f, -14.305f, 0f, 0f, -10.696f, 95.326f, 107.8175f, 26.692f);
	}
	if (__LIB_0__::func_393(Global_35, iLocal_546, 0, 1) && !bLocal_542)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_16[0 /*3*/], "LOOP_BOOL", true, false);
		bLocal_542 = true;
	}
}

void func_633(var uParam0)
{
	Local_59.f_67 = iLocal_446;
	__LIB_13__::func_83(&iLocal_446);
	__LIB_13__::func_114(&Local_59);
	__LIB_13__::func_189(uParam0, &Local_59, &iLocal_446);
	PED::SET_PED_CONFIG_FLAG(iLocal_446, 278, false);
	StringCopy(&(Local_59.f_340), "RBT23_SHMOAN1J", 24);
	Local_59.f_299 = 15;
}

void func_636()
{
	if (bLocal_28 && iLocal_15 == 10)
	{
		bLocal_452 = true;
	}
	if (!bLocal_28)
	{
		iLocal_15 = 5;
		bLocal_28 = true;
	}
	func_188();
}

void func_672(var uParam0)
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
		func_1121(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1123(uParam0);
		func_1124(uParam0);
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

int func_717(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if ((((!ENTITY::DOES_ENTITY_EXIST(Local_851[iVar0 /*41*/]) || ENTITY::IS_ENTITY_DEAD(Local_851[iVar0 /*41*/])) || PED::IS_PED_FATALLY_INJURED(Local_851[iVar0 /*41*/])) || PED::_IS_PED_HOGTIED(Local_851[iVar0 /*41*/])) || PED::IS_PED_FLEEING(Local_851[iVar0 /*41*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (bParam1)
	{
		if ((((!ENTITY::DOES_ENTITY_EXIST(Local_1099) || ENTITY::IS_ENTITY_DEAD(Local_1099)) || PED::IS_PED_FATALLY_INJURED(Local_1099)) || PED::_IS_PED_HOGTIED(Local_1099)) || PED::IS_PED_FLEEING(Local_1099))
		{
			iVar1++;
		}
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if ((((!ENTITY::DOES_ENTITY_EXIST(Local_1016[iVar0 /*41*/]) || ENTITY::IS_ENTITY_DEAD(Local_1016[iVar0 /*41*/])) || PED::IS_PED_FATALLY_INJURED(Local_1016[iVar0 /*41*/])) || PED::_IS_PED_HOGTIED(Local_1016[iVar0 /*41*/])) || PED::IS_PED_FLEEING(Local_1016[iVar0 /*41*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (bParam3)
	{
		if ((((!ENTITY::DOES_ENTITY_EXIST(iLocal_446) || ENTITY::IS_ENTITY_DEAD(iLocal_446)) || PED::IS_PED_FATALLY_INJURED(iLocal_446)) || PED::_IS_PED_HOGTIED(iLocal_446)) || PED::IS_PED_FLEEING(iLocal_446))
		{
			iVar1++;
		}
	}
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if ((((!ENTITY::DOES_ENTITY_EXIST(Local_1140[iVar0 /*41*/]) || ENTITY::IS_ENTITY_DEAD(Local_1140[iVar0 /*41*/])) || PED::IS_PED_FATALLY_INJURED(Local_1140[iVar0 /*41*/])) || PED::_IS_PED_HOGTIED(Local_1140[iVar0 /*41*/])) || PED::IS_PED_FLEEING(Local_1140[iVar0 /*41*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_720(var uParam0)
{
	if (((bLocal_1269 && !bLocal_817) && !bLocal_818) && func_717(1, 1, 1, 1, 0) >= 8)
	{
		if (func_1191())
		{
			__LIB_5__::func_20(0, 0);
			__LIB_12__::func_876(uParam0, "RBT23_All_DeadJ", 0);
			bLocal_817 = true;
		}
		else if (((func_717(0, 0, 0, 0, 1) >= 3 && __LIB_0__::func_665(iLocal_446, Local_1140[0 /*41*/], 1, 1) > 50f) && __LIB_0__::func_665(iLocal_446, Local_1140[1 /*41*/], 1, 1) > 50f) && __LIB_0__::func_665(iLocal_446, Local_1140[2 /*41*/], 1, 1) > 50f)
		{
			bLocal_817 = true;
		}
	}
	if (!bLocal_812)
	{
		if (__LIB_13__::func_151(iLocal_446))
		{
			__LIB_5__::func_20(0, 0);
			if (__LIB_1__::func_185(70))
			{
				bLocal_812 = __LIB_12__::func_876(uParam0, "RBT23_HTIE_SAD", 0);
			}
			else
			{
				bLocal_812 = __LIB_12__::func_876(uParam0, "RBT23_CAUGHTJ", 0);
			}
		}
	}
	else if (!bLocal_811)
	{
		if (PED::GET_PED_CONFIG_FLAG(iLocal_446, 11, false) == 1)
		{
			bLocal_810 = true;
		}
		if ((((bLocal_810 && !__LIB_8__::func_684("RBT23_HTIE_SAD")) && !__LIB_8__::func_684("RBT23_CAUGHTJ")) && !__LIB_8__::func_684("RBT23_CARRIEDJ")) && !__LIB_0__::func_266(iLocal_446, -5981.803f, -3163.511f, -27.3806f, 2.7f, 1, 1))
		{
			bLocal_811 = __LIB_12__::func_876(uParam0, "RBT23_Come_To", 0);
		}
	}
	if ((!bLocal_819 && !ENTITY::IS_ENTITY_DEAD(iLocal_446)) && __LIB_10__::func_166(iLocal_446, 0))
	{
		if (__LIB_12__::func_876(uParam0, "RBT23_CARRIEDJ", 0))
		{
			bLocal_819 = true;
		}
	}
}

void func_724(var uParam0)
{
	if (!__LIB_5__::func_463() && !bLocal_835)
	{
		if (!__LIB_0__::func_75(&uLocal_832))
		{
			__LIB_1__::func_148(&uLocal_832);
			AUDIO::STOP_PED_SPEAKING(iLocal_446, true);
		}
		else if (__LIB_3__::func_135(&uLocal_832) > 5000 && !__LIB_13__::func_201(iLocal_446))
		{
			__LIB_12__::func_876(uParam0, "RBT23_RELEASED", 0);
			__LIB_0__::func_37(&uLocal_832);
			bLocal_835 = true;
		}
	}
}

void func_726(var uParam0)
{
	if (((!bLocal_820 && __LIB_0__::func_266(Global_35, -5528.317f, -2930.494f, -2.3609f, 10f, 1, 1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_446)) && __LIB_10__::func_166(iLocal_446, 0))
	{
		if (__LIB_12__::func_876(uParam0, "RBT23_JAILJ", 0))
		{
			__LIB_13__::func_92(&Local_59);
			bLocal_820 = true;
		}
	}
	if ((((!ENTITY::IS_ENTITY_DEAD(iLocal_446) && (bLocal_817 || bLocal_818)) && !__LIB_6__::func_903("RBT23_All_Dead")) && !__LIB_6__::func_903("RBT23_All_DeadJ")) && !__LIB_6__::func_903("RBT23_Gang_Flee"))
	{
		switch (iLocal_57)
		{
			case 0:
				if (__LIB_0__::func_266(iLocal_446, Global_36, 15f, 1, 1) && __LIB_10__::func_102(iLocal_446, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_847))
					{
						__LIB_1__::func_283(&uLocal_847, 0);
					}
					else if (__LIB_0__::func_264(&uLocal_847) > 5f)
					{
						iLocal_57 = 1;
					}
				}
				break;
			case 1:
				if ((!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(115), 80f, 1) && __LIB_10__::func_102(iLocal_446, 1)) && __LIB_0__::func_266(iLocal_446, Global_36, 10f, 1, 1))
				{
					if (__LIB_12__::func_876(uParam0, sLocal_836[iLocal_846], 0))
					{
						iLocal_57 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_13__::func_113(&Local_59, 1056964608 /* Float: 0.5f */, sLocal_841[iLocal_846], 1))
				{
					if (iLocal_846 < 4 && __LIB_6__::func_903(sLocal_836[iLocal_846]))
					{
						__LIB_6__::func_900(sLocal_836[iLocal_846], 0, 0);
					}
					__LIB_13__::func_92(&Local_59);
					fLocal_850 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 15f);
					__LIB_1__::func_148(&uLocal_847);
					iLocal_57 = 4;
				}
				else if (!__LIB_6__::func_904() && !__LIB_13__::func_76())
				{
					__LIB_12__::func_876(uParam0, "RBT23_REACTJ", 0);
					__LIB_13__::func_92(&Local_59);
					fLocal_850 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
					__LIB_1__::func_148(&uLocal_847);
					iLocal_57 = 4;
				}
				break;
			case 4:
				if (__LIB_0__::func_264(&uLocal_847) > fLocal_850)
				{
					iLocal_846++;
					if (iLocal_846 < 4)
					{
						iLocal_57 = 1;
					}
					else
					{
						__LIB_0__::func_37(&uLocal_847);
						iLocal_57 = 5;
					}
				}
				break;
			case 5:
				break;
		}
	}
}

int func_729(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_729(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_732()
{
	if (!bLocal_29)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_50))
		{
			iLocal_50 = VOLUME::_CREATE_VOLUME_CYLINDER(-5972.395f, -3229.879f, -21.558f, 0f, 0f, -45.808f, 14.848f, 30.618f, 4.035f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_51))
		{
			iLocal_51 = VOLUME::_CREATE_VOLUME_CYLINDER(-5977.245f, -3203.788f, -12.364f, 0f, 0f, 0.679f, 27.443f, 12.952f, 10.966f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_52))
		{
			iLocal_52 = VOLUME::_CREATE_VOLUME_BOX(-5952.475f, -3213.432f, -12.872f, 0f, 0f, 12.622f, 10.903f, 46.154f, 24.138f);
		}
		if (bLocal_547)
		{
			if ((__LIB_0__::func_393(Global_35, iLocal_50, 0, 1) || __LIB_0__::func_393(Global_35, iLocal_51, 0, 1)) || __LIB_0__::func_393(Global_35, iLocal_52, 0, 1))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_16[0 /*3*/], "PB_TELLOFF"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_16[0 /*3*/], "PB_TELLOFF", true);
					bLocal_29 = true;
				}
			}
		}
	}
}

bool func_735()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (((((MISC::HAS_BULLET_IMPACTED_IN_AREA(Local_851[iVar0 /*41*/].f_3, 8f, true, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_851[iVar0 /*41*/], Global_35, 1, 1)) || __LIB_4__::func_172(Local_851[iVar0 /*41*/], 0, 1, 0, 1)) || MISC::IS_BULLET_IN_AREA(Local_851[iVar0 /*41*/].f_3, 20f, true)) || MISC::IS_PROJECTILE_IN_AREA(vLocal_580, vLocal_583, true)) || func_1222())
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_738) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_851[iVar0 /*41*/], iLocal_738, 1, 1))
		{
			return true;
		}
		iVar0++;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1016[0 /*41*/], Global_35, 1, 1) || __LIB_4__::func_172(Local_1016[0 /*41*/], 0, 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_741(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_748()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1099))
	{
		Local_1099 = __LIB_8__::func_931(iLocal_58, Local_1099.f_3, Local_1099.f_6, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		PED::_SET_PED_BODY_COMPONENT(Local_1099, Local_1099.f_1);
		PED::_UPDATE_PED_VARIATION(Local_1099, false, true, true, true, false);
		__LIB_1__::func_766(Local_1099, Local_1099.f_36, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		Local_1099.f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1099);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1099, true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_1099, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1099, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1099, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1099, 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1099, 16, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1099, joaat("REL_PLAYER_ENEMY"));
		TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_1099, false);
		PED::SET_PED_CONFIG_FLAG(Local_1099, 6, true);
		PED::SET_PED_CONFIG_FLAG(Local_1099, 146, true);
		PED::SET_PED_CONFIG_FLAG(Local_1099, 388, true);
		ENTITY::_0x18FF3110CF47115D(Local_1099, 2, 0);
		PED::_0xAE6004120C18DF97(Local_1099, 0, 0);
	}
}

void func_756()
{
	float fVar0;
	fVar0 = 0f;
	if (!__LIB_0__::func_75(&uLocal_1295) || __LIB_0__::func_264(&uLocal_1295) > 6.2f)
	{
		__LIB_1__::func_148(&uLocal_1295);
		iLocal_1298 = 0;
	}
	else if ((__LIB_0__::func_265(&uLocal_1295) > 6f && iLocal_1298 == 2) && !iLocal_1299[2])
	{
		TASK::CLEAR_PED_TASKS(Local_1140[2 /*41*/], true, false);
		iLocal_1298++;
	}
	else if ((__LIB_0__::func_265(&uLocal_1295) > 4f && iLocal_1298 == 1) && !iLocal_1299[1])
	{
		TASK::CLEAR_PED_TASKS(Local_1140[1 /*41*/], true, false);
		iLocal_1298++;
	}
	else if ((__LIB_0__::func_265(&uLocal_1295) > 2f && iLocal_1298 == 0) && !iLocal_1299[0])
	{
		TASK::CLEAR_PED_TASKS(Local_1140[0 /*41*/], true, false);
		iLocal_1298++;
	}
	iLocal_1283 = 0;
	while (iLocal_1283 < 3)
	{
		if ((!PED::IS_PED_DEAD_OR_DYING(Local_1140[iLocal_1283 /*41*/], true) && !PED::_0x913D04A5176F84C9(Local_1140[iLocal_1283 /*41*/])) && !iLocal_1299[iLocal_1283])
		{
			if (__LIB_0__::func_163(Local_1140[iLocal_1283 /*41*/], -2015108952))
			{
				if ((!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_1140[iLocal_1283 /*41*/]) && !__LIB_0__::func_163(Local_1140[iLocal_1283 /*41*/], 2104565373)) && __LIB_0__::func_396(Local_1140[iLocal_1283 /*41*/]))
				{
					TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_1140[iLocal_1283 /*41*/]);
					TASK::TASK_DRIVE_BY(Local_1140[iLocal_1283 /*41*/], Global_35, 0, 0f, 0f, 0f, 200f, 75, true, -753768974);
				}
				if (ENTITY::IS_ENTITY_DEAD(iLocal_1264[iLocal_1283]) || !PED::IS_PED_ON_MOUNT(Local_1140[iLocal_1283 /*41*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_1140[iLocal_1283 /*41*/], true, false);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1264[iLocal_1283]) && !PED::IS_PED_FLEEING(iLocal_1264[iLocal_1283]))
			{
				if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_1140[iLocal_1283 /*41*/], true) && !__LIB_0__::func_163(Local_1140[iLocal_1283 /*41*/], 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_1140[iLocal_1283 /*41*/], iLocal_1264[iLocal_1283], -1, -1, 1073741824 /* Float: 2f */, 9, 0, 0);
				}
				else if (PED::IS_PED_ON_MOUNT(Local_1140[iLocal_1283 /*41*/]) && !PED::IS_PED_BEING_JACKED(Local_1140[iLocal_1283 /*41*/]))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1140[iLocal_1283 /*41*/], Local_1140[iLocal_1283 /*41*/].f_36, false, 0, false, false);
					TASK::CLEAR_PED_TASKS(Local_1140[iLocal_1283 /*41*/], true, false);
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					TASK::TASK_GOTO_ENTITY_OFFSET(Local_1140[iLocal_1283 /*41*/], Global_35, -1, 12f, fVar0, 2.5f, 12);
				}
			}
			else if (!__LIB_0__::func_163(Local_1140[iLocal_1283 /*41*/], 780511057))
			{
				TASK::TASK_COMBAT_PED(Local_1140[iLocal_1283 /*41*/], Global_35, 0, 0);
			}
		}
		iLocal_1283++;
	}
}

void func_757(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	uParam0->f_1 = { vParam2 };
	*uParam0 = iParam5;
	uParam0->f_4 = iParam6;
	uParam0->f_5 = iParam7;
	uParam0->f_14 = iParam8;
	uParam0->f_6 = __LIB_0__::func_27(iParam9, 1);
	uParam0->f_7 = __LIB_0__::func_27(iParam9, 2);
	uParam0->f_13 = __LIB_0__::func_27(iParam9, 4);
	TASK::TASK_SHOOT_WITH_WEAPON(iParam1, uParam0);
}

bool func_758(var uParam0, bool bParam1)
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
				func_761(uParam0);
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

void func_759(var uParam0)
{
	if (!bLocal_736)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_446) || PED::_IS_PED_HOGTIED(iLocal_446))
		{
			if (__LIB_12__::func_767(uParam0) < 1)
			{
				if (iLocal_55 == 7 || iLocal_55 == 9)
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
					bLocal_736 = true;
					if (iLocal_55 == 9)
					{
						__LIB_10__::func_142(uParam0->f_174, 1);
					}
				}
			}
			else
			{
				bLocal_736 = true;
			}
		}
	}
}

void func_760(var uParam0)
{
	if (!bLocal_737)
	{
		if (__LIB_12__::func_767(uParam0) < 2)
		{
			if (__LIB_1__::func_410(Global_36, __LIB_10__::func_45(Local_59.f_300), 20f, 1))
			{
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				bLocal_737 = true;
			}
		}
		else
		{
			bLocal_737 = true;
		}
	}
}

void func_761(var uParam0)
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
							func_1271(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_1271(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
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
					__LIB_10__::func_200(uParam0);
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

void func_785(var uParam0)
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
			func_1314(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

bool func_823(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_823(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_823(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_823(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_823(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_823(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_823(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_823(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_823(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_823(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_823(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_823(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_825()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1426();
	func_1427();
	func_1428();
	func_1429();
	func_1430();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_826(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1314(iParam0, 1, 1, -142743235, 1);
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

void func_861()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1465(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_900(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	fVar3 = 15f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (__LIB_0__::func_272(uParam0->f_69, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false) };
			if ((((((func_514(uParam0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f)) || MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_69, 5000)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_67, 5000)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
				{
					PED::_0x802092B07E3B1EEA(uParam0->f_69, Global_36, 3);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
				TASK::TASK_COMBAT_PED(uParam0->f_69, Global_35, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
				if (__LIB_2__::func_763(__LIB_10__::func_46(uParam0->f_300), 0) && (__LIB_0__::func_122(__LIB_10__::func_46(uParam0->f_300)) || !__LIB_0__::func_171(__LIB_10__::func_46(uParam0->f_300))))
				{
					__LIB_2__::func_753(__LIB_10__::func_46(uParam0->f_300), 0, 1, 0, 0);
				}
				if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
				}
				__LIB_5__::func_20(0, 0);
				__LIB_1__::func_683(&(uParam0->f_329), 8388608);
			}
		}
		else
		{
			__LIB_1__::func_683(&(uParam0->f_329), 8388608);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

int func_962(var uParam0, int iParam1, int iParam2)
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
		return func_962(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1023(int iParam0)
{
	if (iParam0 == 0)
	{
		return 9;
	}
	else if (iParam0 == 1)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 3)
	{
		return 9;
	}
	return 0;
}

void func_1121(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1650();
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

void func_1123(var uParam0)
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
			func_1657(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1657(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1124(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1657(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1191()
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_446))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((!iLocal_813[iVar0] && __LIB_2__::func_215(iLocal_446, Local_1140[iVar0 /*41*/], 0, 1114636288 /* Float: 60f */, 0)) && PED::IS_PED_DEAD_OR_DYING(Local_1140[iVar0 /*41*/], true))
		{
			iLocal_813[iVar0] = 1;
		}
		iVar0++;
	}
	if ((iLocal_813[0] && iLocal_813[1]) && iLocal_813[2])
	{
		return true;
	}
	return false;
}

bool func_1222()
{
	if (ENTITY::IS_ENTITY_IN_AREA(Global_35, vLocal_586, vLocal_589, false, true, 0))
	{
		return true;
	}
	if (!__LIB_0__::func_266(Global_35, vLocal_467, 20f, 1, 1))
	{
		return false;
	}
	if (__LIB_0__::func_266(Global_35, vLocal_467, 6f, 1, 1))
	{
		return true;
	}
	if (__LIB_0__::func_266(Global_35, vLocal_1321, 5f, 1, 1))
	{
		return true;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (TASK::IS_PED_SPRINTING(Global_35) && __LIB_0__::func_266(Global_35, vLocal_467, 10f, 1, 1))
		{
			return true;
		}
	}
	else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(__LIB_2__::func_825(Global_35)) >= 2.001f && __LIB_0__::func_266(Global_35, vLocal_467, 12f, 1, 1))
	{
		return true;
	}
	return false;
}

void func_1271(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_1657(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_1314(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1314(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_1426()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1951(0);
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
	func_1951(1);
}

void func_1427()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_823(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1428()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1954(0);
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
	func_1954(1);
}

void func_1429()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1954(0);
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
	func_1954(1);
}

void func_1430()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_823(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_823(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1314(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1314(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1465(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1989(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_823(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1650()
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
	iVar0 = func_2094(6291456, 0);
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

void func_1657(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1657(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1657(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1951(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_823(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2252(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_826(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1314(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2256(Var0);
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

void func_1954(bool bParam0)
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
		func_823(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_823(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1314(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1314(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1314(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1989(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1989(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1989(iVar63, -915411861, 1, 0, 0));
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

int func_2094(int iParam0, int iParam1)
{
	var uVar0;
	return func_2304(&uVar0, iParam0, iParam1);
}

void func_2252(int iParam0)
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
	func_1314(iParam0, 1, 1, -142743235, 1);
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
		func_1314(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2256(struct<6> Param0)
{
	if (!func_2384(Param0.f_4, 1))
	{
	}
	if (!func_2384(Param0, 1))
	{
	}
	if (!func_2384(Param0.f_2, 1))
	{
	}
	if (!func_2384(Param0.f_5, 1))
	{
	}
	if (!func_2384(Param0.f_3, 1))
	{
	}
	if (!func_2384(Param0.f_1, 1))
	{
	}
}

int func_2304(var uParam0, int iParam1, int iParam2)
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
		return func_2304(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2384(int iParam0, int iParam1)
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
				if (func_2384(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2384(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2384(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2384(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

