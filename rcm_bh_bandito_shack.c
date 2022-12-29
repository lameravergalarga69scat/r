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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	struct<341> Local_26 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_407 = -1;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	bool bLocal_410 = false;
	int iLocal_411 = 0;
	struct<11> Local_412[3];
	int iLocal_446 = 0;
	bool bLocal_447 = false;
	bool bLocal_448 = false;
	bool bLocal_449 = false;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	vector3 vLocal_453 = { 0f, 0f, 0f };
	int iLocal_456[2] = { 0, 0 };
	bool bLocal_459 = false;
	bool bLocal_460 = false;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[2] = { 0, 0 };
	int iLocal_468[2] = { 0, 0 };
	int iLocal_471[2] = { 0, 0 };
	bool bLocal_474 = false;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	bool bLocal_477 = false;
	bool bLocal_478 = false;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	var uLocal_481 = -1;
	var uLocal_482 = 0;
	var uLocal_483 = -1;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = -1;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 1073741824;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 1;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	struct<17> Local_501[2];
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	vector3 vLocal_539 = { 0f, 0f, 0f };
	float fLocal_542 = 0f;
	int iLocal_543 = 0;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = -1;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = -1;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 1073741824;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 1;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	struct<17> Local_564[2];
	int iLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	bool bLocal_606 = false;
	struct<9> Local_607[2];
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	bool bLocal_632 = false;
	bool bLocal_633 = false;
	int iLocal_634 = 0;
	bool bLocal_635 = false;
	int iLocal_636 = 0;
	bool bLocal_637 = false;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	char* sLocal_641 = NULL;
	vector3 vLocal_642[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_673 = false;
	int iLocal_674 = 0;
	vector3 vLocal_675 = { 0f, 0f, 0f };
	vector3 vLocal_678 = { 0f, 0f, 0f };
	vector3 vLocal_681[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_691 = false;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	vector3 vLocal_695 = { 0f, 0f, 0f };
	float fLocal_698 = 0f;
	bool bLocal_699 = false;
	bool bLocal_700 = false;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	bool bLocal_709 = false;
	char* sLocal_710 = NULL;
	char* sLocal_711 = NULL;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	vector3 vLocal_714 = { 0f, 0f, 0f };
	bool bLocal_717 = false;
	struct<11> Local_718[2];
	int iLocal_741 = 0;
	bool bLocal_742 = false;
	bool bLocal_743 = false;
	bool bLocal_744 = false;
	bool bLocal_745 = false;
	struct<21> Local_746[2];
	struct<35> Local_789[2];
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	int iLocal_863 = 0;
	struct<9> Local_864[3];
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	bool bLocal_895 = false;
	bool bLocal_896 = false;
	int iLocal_897 = 0;
	bool bLocal_898 = false;
	bool bLocal_899 = false;
	bool bLocal_900 = false;
	bool bLocal_901 = false;
	bool bLocal_902 = false;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = -1;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 1097859072;
	var uLocal_924 = 1000;
	var uLocal_925 = 1067450368;
	var uLocal_926 = 5000;
	var uLocal_927 = 42;
	var uLocal_928 = 1103626240;
	var uLocal_929 = 1077936128;
	var uLocal_930 = 1106247680;
	var uLocal_931 = 1103101952;
	var uLocal_932 = 1097859072;
	var uLocal_933 = 1103626240;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	bool bLocal_938 = false;
	bool bLocal_939 = false;
	bool bLocal_940 = false;
	int iLocal_941 = 0;
	bool bLocal_942 = false;
	bool bLocal_943 = false;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	float fLocal_947 = 0f;
	vector3 vLocal_948 = { 0f, 0f, 0f };
	bool bLocal_951 = false;
	float fLocal_952 = 0f;
	bool bLocal_953 = false;
	bool bLocal_954 = false;
	bool bLocal_955 = false;
	bool bLocal_956 = false;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	char* sLocal_961[4] = { NULL, NULL, NULL, NULL };
	int iLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	float fLocal_970 = 0f;
	char* sLocal_971[4] = { NULL, NULL, NULL, NULL };
	int iLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	float fLocal_980 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_411 = joaat("G_M_M_UNIBANDITOS_01");
	vLocal_453 = { -5421.9f, -3653.3f, -21.8f };
	iLocal_476 = joaat("P_LAMPKEROSENE01X");
	iLocal_479 = -1;
	vLocal_539 = { -5421.379f, -3658.686f, -23.125f };
	fLocal_542 = 33.1542f;
	iLocal_599 = -1;
	iLocal_626 = __LIB_2__::func_185(5, 0, 0);
	iLocal_627 = __LIB_2__::func_185(5, 1, 0);
	sLocal_641 = "bh_banditoshack";
	vLocal_675 = { -5872.313f, -3610.956f, -24.1009f };
	vLocal_678 = { -5845.634f, -3595.634f, -24.4846f };
	iLocal_694 = joaat("U_M_M_BHT_BANDITOSHACK");
	vLocal_695 = { -5844.541f, -3600.23f, -24.5752f };
	fLocal_698 = 330.1552f;
	sLocal_710 = "bh_banditoshack_fleebarn";
	sLocal_711 = "bh_banditoshack_fleerocks";
	iLocal_712 = -1;
	vLocal_714 = { 0f, 0f, 0f };
	iLocal_863 = -1;
	iLocal_897 = -1;
	fLocal_952 = 1000f;
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
		func_4(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&Var0);
	while (true)
	{
		func_6(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_8(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_10(&Var0);
					break;
				case 3:
					func_11(&Var0);
					break;
				case 4:
					func_12(&Var0);
					break;
				case 2:
					func_13(&Var0);
					break;
				case 5:
					func_14(&Var0);
					break;
				case 6:
					func_15(&Var0);
					break;
				case 7:
					func_16(&Var0);
					break;
				case 8:
					func_17(&Var0);
					break;
				case 9:
					func_18(&Var0, 0);
					break;
				case 10:
					func_19(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_23(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_4(var uParam0)
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
			func_17(uParam0);
		}
		else
		{
			func_18(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_23(uParam0);
}

void func_5(var uParam0)
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
	func_40(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_46(uParam0);
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

void func_6(var uParam0)
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
	if (func_57(uParam0))
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
						Var1 = { func_65(0) };
						if (func_66(&Var1))
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
			if (func_68(uParam0))
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
			if (func_74(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_23(uParam0);
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

void func_8(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_18(uParam0, 0);
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
			func_23(uParam0);
		}
	}
}

void func_10(var uParam0)
{
	if (func_89(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_90(uParam0);
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

void func_11(var uParam0)
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
				func_90(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_12(var uParam0)
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
	if (func_96(uParam0))
	{
		func_90(uParam0);
		iVar0 = __LIB_12__::func_492(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
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
			func_15(uParam0);
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
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_100(uParam0, __LIB_12__::func_767(uParam0)));
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

void func_14(var uParam0)
{
	if (func_102(uParam0))
	{
		func_15(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	func_103(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_105(uParam0))
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

void func_16(var uParam0)
{
	int iVar0;
	if (func_108(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_13__::func_178(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_111(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
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
		func_15(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_17(var uParam0)
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
			func_132(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
			func_135();
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
		func_23(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_18(var uParam0, bool bParam1)
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
		func_23(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_19(var uParam0)
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
			func_23(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_23(uParam0);
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > func_153(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		if (func_154(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_163(uParam0);
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

void func_40(var uParam0)
{
	__LIB_12__::func_658(uParam0, 8);
	__LIB_12__::func_659(uParam0, 15);
	Local_412[0 /*11*/].f_2 = { -5424.725f, -3652.854f, -23.1449f };
	Local_412[0 /*11*/].f_5 = 272.1613f;
	Local_412[0 /*11*/].f_7 = 2000;
	Local_412[0 /*11*/].f_6 = "BANDITO_PED6";
	Local_412[0 /*11*/].f_10 = "outlaw_a";
	Local_412[1 /*11*/].f_2 = { -5420.65f, -3651.689f, -23.1331f };
	Local_412[1 /*11*/].f_5 = 109.5308f;
	Local_412[1 /*11*/].f_7 = 4000;
	Local_412[1 /*11*/].f_6 = "BANDITO_PED1";
	Local_412[1 /*11*/].f_10 = "outlaw_b";
	Local_412[2 /*11*/].f_2 = { -5422.836f, -3655.008f, -23.1379f };
	Local_412[2 /*11*/].f_5 = 53.4842f;
	Local_412[2 /*11*/].f_7 = 3000;
	Local_412[2 /*11*/].f_6 = "RBT22_BANDKID";
	Local_412[2 /*11*/].f_10 = "outlaw_c";
	Local_607[0 /*9*/].f_1 = { -5414.996f, -3657.709f, -23.0766f };
	Local_607[0 /*9*/].f_4 = 160.9242f;
	Local_607[0 /*9*/].f_5 = { -5415.926f, -3657.984f, -23.0882f };
	Local_607[1 /*9*/].f_1 = { -5413.621f, -3658.881f, -23.0597f };
	Local_607[1 /*9*/].f_4 = 141.579f;
	Local_607[1 /*9*/].f_5 = { -5413.678f, -3658.812f, -23.0605f };
	iLocal_456[0] = 0;
	iLocal_456[1] = 0;
	Local_718[0 /*11*/].f_2 = { -5843.143f, -3599.703f, -24.4789f };
	Local_718[0 /*11*/].f_5 = 33.6552f;
	Local_718[0 /*11*/].f_6 = "BANDITO_PED2";
	Local_718[0 /*11*/].f_7 = 500;
	Local_718[0 /*11*/].f_10 = "male_a";
	Local_718[1 /*11*/].f_2 = { -5845.062f, -3598.682f, -24.4541f };
	Local_718[1 /*11*/].f_5 = 297.7763f;
	Local_718[1 /*11*/].f_6 = "BANDITO_PED3";
	Local_718[1 /*11*/].f_7 = 1000;
	Local_718[1 /*11*/].f_10 = "male_c";
	Local_864[0 /*9*/].f_1 = { -5852.488f, -3601.967f, -25.0822f };
	Local_864[0 /*9*/].f_4 = 184.3371f;
	Local_864[0 /*9*/].f_5 = { -5851.71f, -3604.94f, -24.91f };
	Local_864[1 /*9*/].f_1 = { -5847.083f, -3606.793f, -25.1031f };
	Local_864[1 /*9*/].f_4 = 28.0384f;
	Local_864[1 /*9*/].f_5 = { -5848.3f, -3604.09f, -24.51f };
	Local_864[2 /*9*/].f_1 = { -5851.597f, -3607.123f, -25.1648f };
	Local_864[2 /*9*/].f_4 = 352.6213f;
	Local_864[2 /*9*/].f_5 = { -5851.71f, -3604.94f, -24.91f };
	sLocal_961[0] = "RBT22_RIDE1";
	sLocal_961[1] = "RBT22_RIDE2";
	sLocal_961[2] = "RBT22_RIDE3";
	sLocal_961[3] = "RBT22_RIDE4";
	sLocal_971[0] = "RBT22_ESC1";
	sLocal_971[1] = "RBT22_ESC2";
	sLocal_971[2] = "RBT22_ESC3";
	sLocal_971[3] = "RBT22_ESC4";
	__LIB_4__::func_228(&uLocal_906);
	__LIB_2__::func_828(&uLocal_906, 1);
	__LIB_1__::func_402(&uLocal_906, 0);
}

void func_46(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	__LIB_12__::func_867(uParam0, iLocal_411, 3);
	__LIB_12__::func_867(uParam0, iLocal_626, 3);
	__LIB_12__::func_867(uParam0, iLocal_627, 3);
	__LIB_12__::func_867(uParam0, iLocal_694, 2);
	__LIB_12__::func_867(uParam0, iLocal_476, 3);
	__LIB_13__::func_15(uParam0, sLocal_641, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_710, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_711, 2, -1, 2);
}

bool func_57(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_18(uParam0, 0);
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

struct<4> func_65(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -5375.237f, -3633.907f, -22.7384f };
			Var0.f_3 = 137.5f;
			break;
		case 1:
		case 2:
			Var0 = { -5394.14f, -3656.509f, -23.1362f };
			Var0.f_3 = 128.7f;
			break;
		case 3:
			Var0 = { -5762.336f, -3617.499f, -24.1814f };
			Var0.f_3 = 84.1777f;
			break;
		case 4:
			Var0 = { -5855.977f, -3632.894f, -26.6364f };
			Var0.f_3 = 93.4317f;
			break;
		case 5:
			Var0 = { __LIB_13__::func_73(115) };
			Var0.f_3 = 13.6745f;
			break;
		case 6:
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

bool func_66(var uParam0)
{
	return func_209(*uParam0, uParam0->f_3);
}

bool func_68(var uParam0)
{
	float fVar0;
	if (iLocal_15 == 1)
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_634))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_453, true);
			if (fVar0 < fLocal_947)
			{
				if (fVar0 >= 15f)
				{
					fLocal_947 = fVar0;
					bLocal_951 = false;
				}
			}
			else if (!bLocal_951)
			{
				if ((fLocal_947 + 50f) < fVar0)
				{
					__LIB_12__::func_883(uParam0, "RBT22_RETURN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_951 = true;
				}
			}
			else
			{
				if (fVar0 > (fLocal_947 + 90f))
				{
					StringCopy(&(uParam0->f_2578), "RBT22_ABANDON", 24);
					return true;
				}
				if (fVar0 <= 40f)
				{
					__LIB_12__::func_883(uParam0, "RBT22_CLUES", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_951 = false;
				}
			}
		}
	}
	else if (iLocal_15 == 2)
	{
		if (iLocal_22 == 1 || iLocal_22 == 2)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_678, true);
			if (bLocal_951)
			{
				if (fVar0 > (fLocal_952 + 100f))
				{
					StringCopy(&(uParam0->f_2578), __LIB_13__::func_104(1), 24);
					return true;
				}
				else if (fVar0 <= fLocal_952)
				{
					bLocal_951 = false;
					__LIB_13__::func_89(uParam0, "RBT22_SEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else if (fVar0 < fLocal_952)
			{
				if (fVar0 > 80f)
				{
					fLocal_952 = fVar0;
				}
			}
			else if (fVar0 > (fLocal_952 + 75f))
			{
				__LIB_12__::func_883(uParam0, "RBT22_SEARCH", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_951 = true;
			}
		}
	}
	else if (iLocal_15 >= 3 && __LIB_13__::func_177(&Local_26, 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		StringCopy(&(uParam0->f_2578), __LIB_13__::func_104(Local_26.f_64), 24);
		AUDIO::TRIGGER_MUSIC_EVENT("PRBTY_FAIL");
		return true;
	}
	return false;
}

bool func_74(var uParam0)
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

bool func_89(var uParam0)
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

void func_90(var uParam0)
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
			Var1 = { func_65(0) };
			if (!func_66(&Var1))
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
		__LIB_12__::func_997(uParam0, func_65(0), func_65(1), 0, 1, 0);
	}
}

bool func_96(var uParam0)
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

int func_100(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	struct<4> Var9;
	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (__LIB_13__::func_90(&uLocal_935))
			{
				if (__LIB_10__::func_133(uParam0->f_174, 2))
				{
					Var1 = { func_65(0) };
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, Var1, Var1.f_1, Var1.f_2, Var1.f_3);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, true, false);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_941, -1, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_941, Var1, Var1.f_3, true, false, true);
					}
				}
				__LIB_13__::func_66(uParam0->f_174);
				__LIB_13__::func_87(uParam0);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				__LIB_13__::func_91(uParam0, 0);
				__LIB_12__::func_997(uParam0, func_65(0), func_65(2), 0, 2, 0);
				__LIB_13__::func_105(1, 1);
				__LIB_10__::func_197(&Local_26, 2, 1);
				return 7;
			}
			break;
		case 1:
		case 2:
			if (__LIB_13__::func_90(&uLocal_935))
			{
				if (__LIB_10__::func_133(uParam0->f_174, 2))
				{
					Var5 = { func_65(2) };
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, Var5, Var5.f_1, Var5.f_2, Var5.f_3);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, true, false);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_941, -1, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_941, Var5, Var5.f_3, true, false, true);
					}
				}
				if (__LIB_0__::func_272(Local_412[0 /*11*/], 0))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_412[0 /*11*/], true);
					ENTITY::_SET_ENTITY_HEALTH(Local_412[0 /*11*/], 0, 0);
				}
				if (__LIB_0__::func_272(Local_412[1 /*11*/], 0))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_412[1 /*11*/], true);
					ENTITY::_SET_ENTITY_HEALTH(Local_412[1 /*11*/], 0, 0);
				}
				if (__LIB_0__::func_272(Local_412[2 /*11*/], 0))
				{
					if (iVar0 == 1)
					{
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_412[2 /*11*/], true);
						ENTITY::_SET_ENTITY_HEALTH(Local_412[2 /*11*/], 0, 0);
					}
					else
					{
						__LIB_2__::func_426(&(Local_412[2 /*11*/]));
					}
					bLocal_606 = true;
				}
				if (iVar0 == 2)
				{
					__LIB_12__::func_997(uParam0, func_65(2), func_65(3), 2, 3, 0);
					bLocal_635 = true;
					__LIB_4__::func_300(2);
				}
				else
				{
					__LIB_12__::func_997(uParam0, func_65(1), func_65(3), 1, 3, 0);
					bLocal_635 = false;
					__LIB_4__::func_300(1);
				}
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				__LIB_13__::func_91(uParam0, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 3:
			if (func_301(uParam0))
			{
				if (__LIB_10__::func_133(uParam0->f_174, 2))
				{
					Var9 = { func_65(3) };
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, Var9, Var9.f_1, Var9.f_2, Var9.f_3);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, true, false);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_941, -1, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_941, Var9, Var9.f_3, true, false, true);
						if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_941))
						{
							return 2;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
				{
					iLocal_941 = func_293(1, 1, 0, -5755.63f, -3620.66f, -24.36f, 84.18f);
					return 2;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_941, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_941, -5755.63f, -3620.66f, -24.36f, 84.18f, true, false, true);
					if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_941))
					{
						return 2;
					}
				}
				__LIB_4__::func_300(2);
				__LIB_12__::func_997(uParam0, func_65(3), func_65(4), 3, 4, 0);
				bLocal_938 = true;
				bLocal_635 = true;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				__LIB_13__::func_91(uParam0, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 4:
			if (func_302(uParam0, 1))
			{
				__LIB_10__::func_82(&Local_26);
				TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")) && __LIB_13__::func_90(&uLocal_935))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_941))
					{
						iLocal_941 = func_293(1, 1, 0, -5848.74f, -3627.67f, -25.95f, 93.43f);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_941, true, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_941, -5848.74f, -3627.67f, -25.95f, 93.43f, true, false, true);
						if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_941))
						{
							return 2;
						}
					}
					if (!__LIB_0__::func_163(iLocal_692, joaat("SCRIPT_TASK_CARRIABLE")))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_692, -5857.747f, -3632.866f, -26.7362f, 180.2059f, true, false, true);
						TASK::CLEAR_PED_TASKS(iLocal_692, true, false);
						TASK::TASK_CARRIABLE(iLocal_692, joaat("HOGTIED_PED"), 0, 0, 0);
						PED::_0x2208438012482A1A(iLocal_692, true, false);
						return 2;
					}
					__LIB_4__::func_300(3);
					__LIB_12__::func_997(uParam0, func_65(4), func_65(5), 4, 5, 0);
					func_305(7);
					AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
					bLocal_953 = true;
					bLocal_896 = true;
					bLocal_898 = true;
					__LIB_13__::func_91(uParam0, 0);
					__LIB_13__::func_105(1, 1);
					return 7;
				}
			}
			break;
		case 5:
			if (func_302(uParam0, 0))
			{
				TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")) && __LIB_13__::func_90(&uLocal_935))
				{
					if (__LIB_0__::func_272(iLocal_692, 0))
					{
						if (PED::_GET_CARRIER_AS_PED(iLocal_692) == 0)
						{
							if (!__LIB_0__::func_163(iLocal_692, joaat("SCRIPT_TASK_CARRIABLE")))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_692, Global_36, false, false, true, true);
								TASK::TASK_CARRIABLE(iLocal_692, joaat("HOGTIED_PED"), Global_35, 0, 0);
								PED::_0x2208438012482A1A(iLocal_692, true, false);
								PED::_0x2208438012482A1A(Global_35, true, false);
							}
						}
						if (PED::_GET_CARRIER_AS_PED(iLocal_692) == Global_35)
						{
							__LIB_4__::func_300(3);
							__LIB_8__::func_734(500, 1);
							__LIB_12__::func_997(uParam0, func_65(5), func_65(6), 5, 6, 0);
							bLocal_953 = true;
							bLocal_896 = true;
							bLocal_898 = true;
							__LIB_13__::func_91(uParam0, 0);
							return 7;
						}
					}
				}
			}
			break;
		case 6:
			if (func_302(uParam0, 0))
			{
				__LIB_10__::func_131(iLocal_694, Local_26.f_300, 0);
				__LIB_10__::func_92(iLocal_694, Local_26.f_300, Local_26.f_299);
				__LIB_13__::func_67(Local_26.f_300, iLocal_694);
				__LIB_2__::func_426(&iLocal_692);
				__LIB_1__::func_616(Global_40.f_9074.f_3, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				__LIB_8__::func_734(500, 1);
				return 8;
			}
			break;
		default:
			__LIB_8__::func_734(500, 1);
			return 7;
	}
	return 2;
}

bool func_102(var uParam0)
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
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_89(uParam0))
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

void func_103(var uParam0)
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
		__LIB_12__::func_997(uParam0, func_65(0), func_65(1), 0, 1, 1);
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

int func_105(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_323(Var0, &(uParam0->f_206), uParam0);
}

bool func_108(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_89(uParam0))
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
				__LIB_12__::func_997(uParam0, func_65(0), func_65(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_111(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_692, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_692, 25, true);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	CAM::_0xC252C0CC969AF79A(1);
	switch (iLocal_15)
	{
		case 0:
			if (func_329(uParam0))
			{
				if (bLocal_635)
				{
					__LIB_4__::func_300(2);
					__LIB_12__::func_997(uParam0, func_65(2), func_65(3), 2, 3, 0);
				}
				else
				{
					__LIB_4__::func_300(1);
					__LIB_12__::func_997(uParam0, func_65(1), func_65(3), 1, 3, 0);
				}
			}
			break;
		case 1:
			if (func_330(uParam0))
			{
				__LIB_4__::func_300(2);
			}
			break;
		case 2:
			func_331(uParam0);
			if (func_332(uParam0))
			{
				__LIB_10__::func_82(&Local_26);
				__LIB_4__::func_300(3);
			}
			break;
		case 3:
			__LIB_13__::func_111(&Local_26);
			if (func_334(uParam0))
			{
				__LIB_4__::func_300(4);
			}
			break;
		case 4:
			if (func_335(&Local_26))
			{
				func_336(joaat("DOCUMENT_NOTE_BANDITO_SHACK"), 1, 0, -142743235, 0);
				return 8;
			}
			break;
	}
	return 7;
}

void func_132(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		func_372(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_135()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_376(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

float func_153(var uParam0)
{
	return __LIB_13__::func_82(&Local_26);
}

bool func_154(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (__LIB_18__::func_578(&Local_26))
			{
				__LIB_13__::func_67(Local_26.f_300, ENTITY::GET_ENTITY_MODEL(Local_26.f_67));
				__LIB_2__::func_426(&iLocal_692);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1:
			return true;
		default:
			return true;
	}
	return true;
}

void func_163(var uParam0)
{
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	__LIB_13__::func_112(&Local_26, 1);
	func_336(joaat("DOCUMENT_NOTE_BANDITO_SHACK"), 1, 0, -142743235, 0);
	if (bLocal_709 && ENTITY::DOES_ENTITY_EXIST(iLocal_692))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_692, 0);
	}
	if (iLocal_471[0])
	{
		iLocal_471[0] = 0;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_468[0]);
	}
	if (iLocal_471[1])
	{
		iLocal_471[1] = 0;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_468[1]);
	}
	__LIB_0__::func_172(iLocal_450);
	__LIB_0__::func_172(iLocal_451);
	__LIB_0__::func_172(iLocal_452);
	__LIB_1__::func_951(&iLocal_475);
}

int func_209(vector3 vParam0, var uParam3)
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
		iVar0 = func_459(0, 0);
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
				func_132(113, 1, 0, 1, 1, 1, 0);
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
	int iVar0;
	bool bVar1;
	var uVar2[1];
	int iVar4;
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return 0;
	}
	if (!bLocal_410)
	{
		__LIB_13__::func_114(&Local_26);
		bLocal_410 = true;
	}
	iVar0 = __LIB_12__::func_767(uParam0);
	if (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_475))
		{
			iLocal_475 = OBJECT::CREATE_OBJECT(iLocal_476, -5426.14f, -3652.86f, -23.15f, true, true, false, false, true);
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_475, 0);
		}
		if (iLocal_446 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_412[iLocal_446 /*11*/]))
			{
				bVar1 = true;
				if (iLocal_446 == 2)
				{
					bVar1 = false;
				}
				Local_412[iLocal_446 /*11*/] = __LIB_8__::func_931(iLocal_411, Local_412[iLocal_446 /*11*/].f_2, Local_412[iLocal_446 /*11*/].f_5, 1, 1, 0, 1, 1, bVar1, 0, 0, 0, 0);
				if (iLocal_446 == 0)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_412[iLocal_446 /*11*/], 2054263469);
					PED::_UPDATE_PED_VARIATION(Local_412[iLocal_446 /*11*/], false, true, true, true, false);
					PED::SET_PED_NAME_DEBUG(Local_412[iLocal_446 /*11*/], "BARN1");
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_412[iLocal_446 /*11*/], true, true);
					__LIB_1__::func_766(Local_412[iLocal_446 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					__LIB_1__::func_766(Local_412[iLocal_446 /*11*/], joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				}
				else if (iLocal_446 == 1)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_412[iLocal_446 /*11*/], -1330577621);
					PED::_UPDATE_PED_VARIATION(Local_412[iLocal_446 /*11*/], false, true, true, true, false);
					PED::SET_PED_NAME_DEBUG(Local_412[iLocal_446 /*11*/], "BARN2");
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_412[iLocal_446 /*11*/], true, true);
					__LIB_1__::func_766(Local_412[iLocal_446 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				}
				else if (iLocal_446 == 2)
				{
					PED::_SET_PED_BODY_COMPONENT(Local_412[iLocal_446 /*11*/], 205624806);
					PED::_UPDATE_PED_VARIATION(Local_412[iLocal_446 /*11*/], false, true, true, true, false);
					PED::SET_PED_NAME_DEBUG(Local_412[iLocal_446 /*11*/], "BARNKID");
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_412[iLocal_446 /*11*/], true, true);
					__LIB_1__::func_766(Local_412[iLocal_446 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_412[iLocal_446 /*11*/], false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_412[iLocal_446 /*11*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_412[iLocal_446 /*11*/], joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_412[iLocal_446 /*11*/], 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_412[iLocal_446 /*11*/], 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_412[iLocal_446 /*11*/], 46, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_412[iLocal_446 /*11*/], 98, true);
				PED::SET_PED_CONFIG_FLAG(Local_412[iLocal_446 /*11*/], 6, true);
				PED::SET_PED_CONFIG_FLAG(Local_412[iLocal_446 /*11*/], 146, true);
				PED::SET_PED_CONFIG_FLAG(Local_412[iLocal_446 /*11*/], 388, true);
				if (iLocal_446 != 2)
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_412[iLocal_446 /*11*/], true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_412[iLocal_446 /*11*/], true, 0f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_412[iLocal_446 /*11*/], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_412[iLocal_446 /*11*/], 46, true);
				}
				else
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_412[iLocal_446 /*11*/], false, 0f);
					PED::_0xAE6004120C18DF97(Local_412[iLocal_446 /*11*/], 0, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_412[iLocal_446 /*11*/].f_6))
				{
					__LIB_12__::func_875(uParam0, Local_412[iLocal_446 /*11*/], Local_412[iLocal_446 /*11*/].f_6, 0);
				}
				iLocal_446++;
			}
		}
		else if (iLocal_628 < 2)
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_607[iLocal_628 /*9*/].f_8))
			{
				iVar4 = TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(Local_607[iLocal_628 /*9*/].f_5, 0.5f, &uVar2, 1);
				if (iVar4 > 0)
				{
					Local_607[iLocal_628 /*9*/].f_8 = uVar2[0];
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_607[iLocal_628 /*9*/]))
			{
				if (iLocal_628 == 0)
				{
					Local_607[iLocal_628 /*9*/] = __LIB_8__::func_931(iLocal_626, Local_607[iLocal_628 /*9*/].f_1, Local_607[iLocal_628 /*9*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					Local_607[iLocal_628 /*9*/] = __LIB_8__::func_931(iLocal_627, Local_607[iLocal_628 /*9*/].f_1, Local_607[iLocal_628 /*9*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				PED::SET_PED_CONFIG_FLAG(Local_607[iLocal_628 /*9*/], 6, true);
				TASK::TASK_HITCH_ANIMAL(Local_607[iLocal_628 /*9*/], Local_607[iLocal_628 /*9*/].f_8, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_607[iLocal_628 /*9*/], true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_607[iLocal_628 /*9*/], false, 0f);
				__LIB_1__::func_991(Local_607[iLocal_628 /*9*/], joaat("HONOR_EVENT_STEAL_HORSE"));
				ENTITY::_0x18FF3110CF47115D(Local_864[iLocal_892 /*9*/], 15, 0);
				iLocal_628++;
			}
		}
	}
	if (iVar0 >= 3 || (iLocal_446 >= 3 && iLocal_628 >= 2))
	{
		iLocal_451 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5417.33f, -3666.19f, -23.07f, 0f, 0f, 0f, 7f, 7f, 7f, "RBT22_Barn_Defence_1");
		iLocal_452 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5414.54f, -3646.99f, -23.09f, 0f, 0f, 0f, 7f, 7f, 7f, "RBT22_Barn_Defence_2");
		iLocal_450 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5424.683f, -3653.581f, -21.736f, 0f, 0f, 0f, 9.6f, 5f, 3f, "RBT22_Inside_Barn");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(Local_412[2 /*11*/], "TaskIntimidated_OnFoot");
		return 1;
	}
	return 0;
}

bool func_288(var uParam0)
{
	if (bLocal_410)
	{
		__LIB_13__::func_110(&Local_26, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
	}
	func_579(uParam0);
	if (bLocal_448)
	{
		func_580(uParam0);
		return true;
	}
	func_581(uParam0);
	if (iLocal_18 >= 2)
	{
		func_580(uParam0);
		return true;
	}
	if (__LIB_1__::func_410(Global_36, Global_1347702[uParam0->f_174 /*49*/].f_24, 45f, 1))
	{
		func_580(uParam0);
		return true;
	}
	return false;
}

int func_293(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_6 = { fParam3, fParam4, fParam5 };
	Var1.f_9 = fParam6;
	return __LIB_1__::func_854(&uVar0, &Var1);
}

bool func_301(var uParam0)
{
	if (iLocal_741 >= 2 && iLocal_892 >= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_864[0 /*9*/]))
		{
			PED::SET_PED_RESET_FLAG(Local_864[0 /*9*/], 170, true);
		}
		return true;
	}
	if (!func_302(uParam0, 0))
	{
		return false;
	}
	if (iLocal_741 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_718[iLocal_741 /*11*/]))
		{
			Local_718[iLocal_741 /*11*/] = __LIB_8__::func_931(iLocal_411, Local_718[iLocal_741 /*11*/].f_2, Local_718[iLocal_741 /*11*/].f_5, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			return false;
		}
		else
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_718[iLocal_741 /*11*/], true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_718[iLocal_741 /*11*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_718[iLocal_741 /*11*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_718[iLocal_741 /*11*/], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_718[iLocal_741 /*11*/], 388, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_718[iLocal_741 /*11*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_718[iLocal_741 /*11*/], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_718[iLocal_741 /*11*/], 98, true);
			PED::SET_PED_CONFIG_FLAG(Local_718[iLocal_741 /*11*/], 146, true);
			if (iLocal_741 == 0)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_718[iLocal_741 /*11*/], -890419023);
				PED::_UPDATE_PED_VARIATION(Local_718[iLocal_741 /*11*/], false, true, true, true, false);
				__LIB_1__::func_766(Local_718[iLocal_741 /*11*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_1__::func_766(Local_718[iLocal_741 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(Local_718[iLocal_741 /*11*/], "RAILGANG_0");
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(Local_718[iLocal_741 /*11*/], -67818828);
				PED::_UPDATE_PED_VARIATION(Local_718[iLocal_741 /*11*/], false, true, true, true, false);
				__LIB_1__::func_766(Local_718[iLocal_741 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(Local_718[iLocal_741 /*11*/], "RAILGANG_1");
			}
			WEAPON::_0x94A3C1B804D291EC(Local_718[iLocal_741 /*11*/], 0, 0, 0, 1);
			__LIB_12__::func_875(uParam0, Local_718[iLocal_741 /*11*/], Local_718[iLocal_741 /*11*/].f_6, 0);
			iLocal_741++;
			return false;
		}
	}
	if (iLocal_892 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_864[iLocal_892 /*9*/]))
		{
			if (iLocal_892 == 0)
			{
				Local_864[iLocal_892 /*9*/] = __LIB_8__::func_931(iLocal_626, Local_864[iLocal_892 /*9*/].f_1, Local_864[iLocal_892 /*9*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_864[iLocal_892 /*9*/] = __LIB_8__::func_931(iLocal_627, Local_864[iLocal_892 /*9*/].f_1, Local_864[iLocal_892 /*9*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			PED::SET_PED_CONFIG_FLAG(Local_864[iLocal_892 /*9*/], 6, true);
			PHYSICS::_0x06AADE17334F7A40(Local_864[iLocal_892 /*9*/], Local_864[iLocal_892 /*9*/].f_5);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_864[iLocal_892 /*9*/], true);
			ENTITY::_0x18FF3110CF47115D(Local_864[iLocal_892 /*9*/], 15, 0);
			__LIB_1__::func_991(Local_864[iLocal_892 /*9*/], 0);
			iLocal_892++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_864[0 /*9*/]))
		{
			PED::SET_PED_RESET_FLAG(Local_864[0 /*9*/], 170, true);
		}
	}
	return false;
}

bool func_302(var uParam0, int iParam1)
{
	if (bLocal_699)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_692))
	{
		if (iParam1 == 0)
		{
			iLocal_692 = __LIB_8__::func_931(iLocal_694, vLocal_695, fLocal_698, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			iLocal_692 = __LIB_8__::func_931(iLocal_694, __LIB_13__::func_73(115), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_692, 1);
			bLocal_709 = true;
		}
		PED::_SET_PED_BODY_COMPONENT(iLocal_692, -1688362028);
		PED::_UPDATE_PED_VARIATION(iLocal_692, false, true, true, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_692, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_692, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_692, joaat("REL_PLAYER_ENEMY"));
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_692, 0, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_692, 6, true);
		__LIB_13__::func_74(iLocal_692, 1);
		__LIB_12__::func_875(uParam0, iLocal_692, "RBH_TARGET22", 0);
		func_597(uParam0);
		__LIB_1__::func_766(iLocal_692, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		__LIB_1__::func_766(iLocal_692, joaat("WEAPON_REVOLVER_CATTLEMAN_DUALWIELD"), 0, 1, 1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		bLocal_699 = true;
	}
	return false;
}

void func_305(int iParam0)
{
	if (iLocal_24 != iParam0)
	{
		iLocal_24 = iParam0;
	}
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
			func_633(uParam4);
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
				__LIB_19__::func_325(uParam4);
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
					__LIB_18__::func_770(&(uParam4->f_405), 0);
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
				__LIB_19__::func_325(uParam4);
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

bool func_329(var uParam0)
{
	func_579(uParam0);
	func_679(uParam0);
	func_581(uParam0);
	switch (iLocal_16)
	{
		case 0:
			if (bLocal_448 || bLocal_447)
			{
				if (__LIB_13__::func_158("RBT22_BARN1"))
				{
					__LIB_6__::func_900("RBT22_BARN1", 0, 0);
				}
				func_682(uParam0);
				__LIB_0__::func_325(&(Local_412[2 /*11*/].f_1));
				__LIB_13__::func_75(1);
			}
			break;
		case 1:
			func_682(uParam0);
			func_684(uParam0);
			func_685();
			if (!__LIB_0__::func_75(&uLocal_536))
			{
				if (func_686())
				{
					__LIB_1__::func_283(&uLocal_536, 0);
				}
			}
			else if (__LIB_0__::func_265(&uLocal_536) > 1.5f || ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_412[2 /*11*/], 5f, 5f, 5f, false, true, 0))
			{
				func_687(uParam0);
				if (!MAP::DOES_BLIP_EXIST(Local_412[2 /*11*/].f_1))
				{
					Local_412[2 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_412[2 /*11*/]);
					MAP::_BLIP_SET_MODIFIER(Local_412[2 /*11*/].f_1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					__LIB_13__::func_89(uParam0, "RBT22_INTER", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_12__::func_883(uParam0, "RBT22_INTER", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				func_688(2, 3);
				__LIB_13__::func_75(2);
			}
			break;
		case 2:
			if (Local_412[2 /*11*/].f_8 != 5)
			{
				switch (iLocal_19)
				{
					case 0:
						func_687(uParam0);
						if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_412[2 /*11*/], 20f, 20f, 20f, false, true, 0))
						{
							WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
							if (__LIB_13__::func_123(uParam0, "RBT22_SURR", 0, 0))
							{
								__LIB_14__::func_251(1);
							}
						}
						else if (!MAP::DOES_BLIP_EXIST(Local_412[2 /*11*/].f_1))
						{
							Local_412[2 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_412[2 /*11*/]);
							MAP::_BLIP_SET_MODIFIER(Local_412[2 /*11*/].f_1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
							__LIB_13__::func_89(uParam0, "RBT22_INTER", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						break;
					case 1:
						func_687(uParam0);
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "RBT22_SURRKID", 0))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_412[2 /*11*/]);
								__LIB_14__::func_251(2);
							}
						}
						break;
					case 2:
						if (!MAP::DOES_BLIP_EXIST(Local_412[2 /*11*/].f_1))
						{
							Local_412[2 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_412[2 /*11*/]);
							MAP::_BLIP_SET_MODIFIER(Local_412[2 /*11*/].f_1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
							__LIB_13__::func_89(uParam0, "RBT22_INTER", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_412[2 /*11*/], true, false), 5f, true))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_412[2 /*11*/], Global_35, 1, 1))
							{
								func_693();
								iLocal_20 = 5;
								bLocal_635 = false;
								return true;
							}
							else
							{
								iLocal_599 = 1;
								__LIB_14__::func_251(3);
								return true;
							}
						}
						__LIB_2__::func_602(&(Local_564[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_564[1 /*17*/]), "INTERACT_THREATEN", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						PED::SET_PED_CONFIG_FLAG(Local_412[2 /*11*/], 301, false);
						PED::SET_PED_CONFIG_FLAG(Local_412[2 /*11*/], 315, true);
						PED::SET_PED_CONFIG_FLAG(Local_412[2 /*11*/], 130, true);
						__LIB_14__::func_251(3);
						break;
					case 3:
						if ((iLocal_599 == -1 && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_412[2 /*11*/], true, false), 5f, true)) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_412[1 /*11*/], 20f, 20f, 20f, false, true, 0))
						{
							__LIB_2__::func_411(&(Local_564[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_564[1 /*17*/]), 0, 0);
							func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							iLocal_599 = 1;
						}
						if ((iLocal_599 == -1 && __LIB_2__::func_401(Local_412[2 /*11*/], 1, 1, 0, 0, 1)) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_412[2 /*11*/], 20f, 20f, 20f, false, true, 0))
						{
							__LIB_2__::func_411(&(Local_564[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_564[1 /*17*/]), 0, 0);
							func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							iLocal_599 = 1;
						}
						if (iLocal_599 == -1 && __LIB_4__::func_417(Local_412[2 /*11*/]))
						{
							__LIB_2__::func_411(&(Local_564[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_564[1 /*17*/]), 0, 0);
							func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_412[2 /*11*/]);
							iLocal_599 = 1;
						}
						if (iLocal_599 == -1)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_412[2 /*11*/], Global_35, 1, 1))
							{
								func_693();
								iLocal_20 = 5;
								bLocal_635 = false;
								__LIB_0__::func_325(&(Local_412[2 /*11*/].f_1));
								return true;
							}
						}
						if (iLocal_599 == -1)
						{
							iLocal_599 = func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							if (iLocal_599 == 0)
							{
								__LIB_2__::func_411(&(Local_564[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_564[1 /*17*/]), 0, 0);
								func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							}
							else if (iLocal_599 == 1)
							{
								__LIB_2__::func_411(&(Local_564[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_564[1 /*17*/]), 0, 0);
								func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
							}
						}
						if (iLocal_599 == 0)
						{
							if (__LIB_13__::func_123(uParam0, "RBT22_ILO1", 0, 0))
							{
								__LIB_14__::func_251(4);
							}
						}
						else if (iLocal_599 == 1)
						{
							if (__LIB_13__::func_123(uParam0, "RBT22_ILO2", 0, 0))
							{
								__LIB_14__::func_251(4);
							}
						}
						break;
					case 4:
						if (!__LIB_6__::func_904())
						{
							if (iLocal_599 == 0)
							{
								if (__LIB_12__::func_876(uParam0, "RBT22_ILO1QUST", 0))
								{
									__LIB_14__::func_251(5);
								}
							}
							else if (iLocal_599 == 1)
							{
								if (__LIB_12__::func_876(uParam0, "RBT22_ILO1THRT", 0))
								{
									__LIB_14__::func_251(5);
								}
							}
						}
						else if (__LIB_13__::func_158("RBT22_ILO1QUST") || __LIB_13__::func_158("RBT22_ILO1THRT"))
						{
							__LIB_14__::func_251(5);
						}
						break;
					case 5:
						if (!__LIB_6__::func_904())
						{
							__LIB_0__::func_325(&(Local_412[2 /*11*/].f_1));
							bLocal_635 = true;
							return true;
						}
						break;
				}
			}
			else
			{
				if (__LIB_6__::func_904())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (func_700())
				{
					__LIB_12__::func_876(uParam0, "RBT22_ALLDEAD_J", 0);
				}
				fLocal_947 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_453, true);
				if (fLocal_947 < 15f)
				{
					fLocal_947 = 15f;
				}
				bLocal_635 = false;
				return true;
			}
			break;
	}
	return false;
}

bool func_330(var uParam0)
{
	func_687(uParam0);
	switch (iLocal_21)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_634))
			{
				func_701();
				func_702();
				__LIB_12__::func_883(uParam0, "RBT22_CLUES", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_283(&uLocal_638, 0);
			}
			if (func_301(uParam0))
			{
				func_703();
				iLocal_21 = 1;
			}
			break;
		case 1:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_707(uParam0);
			func_708(uParam0);
			if (iLocal_636 == 0)
			{
				func_703();
				if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
				{
					bLocal_637 = true;
					if (func_709())
					{
						__LIB_13__::func_123(uParam0, "RBT22_EAGLEEYE", 0, 0);
						iLocal_636 = 1;
						__LIB_0__::func_325(&iLocal_634);
						fLocal_947 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_695, true);
						__LIB_12__::func_883(uParam0, "RBT22_FOLLOW", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				else if (!bLocal_637)
				{
					if (__LIB_0__::func_264(&uLocal_638) > 20f)
					{
						__LIB_0__::func_45("RBT22_H_TRACK", 10000, 0, 0, 0, 1);
						__LIB_0__::func_37(&uLocal_638);
						bLocal_637 = true;
					}
				}
			}
			if (bLocal_742)
			{
				func_710(1);
				iLocal_22 = 5;
				bLocal_635 = true;
				func_711(uParam0);
				return true;
			}
			else if (bLocal_691 || __LIB_1__::func_410(Global_36, vLocal_678, 35f, 1))
			{
				func_710(0);
				__LIB_0__::func_325(&iLocal_634);
				bLocal_635 = true;
				func_711(uParam0);
				return true;
			}
			else if (__LIB_1__::func_410(Global_36, vLocal_678, 80f, 1))
			{
				__LIB_0__::func_325(&iLocal_634);
				bLocal_635 = true;
				func_701();
				return true;
			}
			else if (func_331(uParam0))
			{
				if (__LIB_13__::func_123(uParam0, "RBT22_FINDCLUE", 0, 0))
				{
					__LIB_0__::func_325(&iLocal_634);
					bLocal_635 = true;
					func_701();
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_331(var uParam0)
{
	int iVar0;
	if (bLocal_633)
	{
		return true;
	}
	if (bLocal_632)
	{
		if (__LIB_9__::func_749(joaat("DOCUMENT_NOTE_BANDITO_SHACK")))
		{
			__LIB_13__::func_89(uParam0, "RBT22_SEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_633 = true;
			if (bLocal_635)
			{
				__LIB_13__::func_123(uParam0, "RBT22_FINDCLUE", 0, 0);
			}
		}
		else if (__LIB_1__::func_325())
		{
			__LIB_0__::func_37(&uLocal_629);
		}
		else if (__LIB_0__::func_264(&uLocal_629) > 10f)
		{
			__LIB_0__::func_37(&uLocal_629);
			if (!bLocal_635)
			{
				__LIB_12__::func_883(uParam0, "RBT22_NOTE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
		return false;
	}
	if (!__LIB_0__::func_75(&uLocal_629))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_10__::func_387(Local_412[iVar0 /*11*/]))
			{
				bLocal_637 = true;
				__LIB_1__::func_283(&uLocal_629, 0);
				return false;
			}
			iVar0++;
		}
	}
	else if (__LIB_0__::func_265(&uLocal_629) > 3f)
	{
		if (!bLocal_632)
		{
			__LIB_13__::func_123(uParam0, "RBT22_MAP", 0, 0);
			bLocal_632 = true;
			func_715(joaat("DOCUMENT_NOTE_BANDITO_SHACK"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (!bLocal_635)
			{
				__LIB_13__::func_89(uParam0, "RBT22_NOTE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
	}
	return false;
}

bool func_332(var uParam0)
{
	int iVar0;
	func_687(uParam0);
	switch (iLocal_22)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_674))
			{
				func_701();
				func_702();
				fLocal_947 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_695, true);
				__LIB_13__::func_89(uParam0, "RBT22_SEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			if (func_301(uParam0))
			{
				func_703();
				iLocal_22 = 1;
			}
			iLocal_599 = -1;
			break;
		case 1:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_707(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
			}
			else if (bLocal_743)
			{
				iLocal_22 = 6;
				func_710(0);
				func_711(uParam0);
			}
			else if (bLocal_691)
			{
				func_710(0);
				if (!bLocal_942)
				{
					__LIB_12__::func_883(uParam0, "RBT22_QU_OBJ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_942 = true;
				}
				func_711(uParam0);
			}
			else if (__LIB_1__::func_410(Global_36, vLocal_678, 70f, 1))
			{
				__LIB_2__::func_602(&(Local_789[0 /*35*/][0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_789[0 /*35*/][1 /*17*/]), "INTERACT_THREATEN", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_718[0 /*11*/], 301, false);
				__LIB_2__::func_602(&(Local_789[1 /*35*/][0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_789[1 /*35*/][1 /*17*/]), "INTERACT_THREATEN", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_718[1 /*11*/], 301, false);
				iLocal_599 = -1;
				iLocal_22 = 2;
			}
			break;
		case 2:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_707(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
				__LIB_10__::func_197(&Local_26, 4, 1);
				return false;
			}
			else if (bLocal_743)
			{
				iLocal_22 = 6;
				func_710(0);
				func_711(uParam0);
				return false;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (iLocal_863 == -1)
					{
						iLocal_599 = func_696(&(Local_718[iVar0 /*11*/]), &(Local_746[iVar0 /*21*/]), 70f, &(Local_789[iVar0 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
						if (iLocal_599 != -1)
						{
							iLocal_863 = iVar0;
						}
					}
					iVar0++;
				}
				if (iLocal_599 == 0)
				{
					if (!bLocal_942)
					{
						__LIB_13__::func_89(uParam0, "RBT22_QU_OBJ", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						bLocal_942 = true;
					}
					if (__LIB_13__::func_158("RBT22_IG5"))
					{
						__LIB_6__::func_900("RBT22_IG5", 0, 0);
					}
					func_710(1);
					func_711(uParam0);
					if (iLocal_863 == 0)
					{
						__LIB_2__::func_411(&(Local_789[0 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[0 /*35*/][1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][1 /*17*/]), 0, 0);
						func_696(&(Local_718[0 /*11*/]), &(Local_746[0 /*21*/]), 70f, &(Local_789[0 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					}
					else if (iLocal_863 == 1)
					{
						__LIB_2__::func_411(&(Local_789[0 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[0 /*35*/][1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][1 /*17*/]), 0, 0);
						func_696(&(Local_718[1 /*11*/]), &(Local_746[1 /*21*/]), 70f, &(Local_789[1 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					}
					if (__LIB_13__::func_123(uParam0, "RBT22_RILOFARQ", 0, 0))
					{
						func_716();
						bLocal_743 = true;
						iLocal_22 = 4;
					}
					else
					{
						iLocal_22 = 3;
					}
					return false;
				}
				else if (iLocal_599 == 1)
				{
					if (!bLocal_942)
					{
						__LIB_13__::func_89(uParam0, "RBT22_QU_OBJ", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						bLocal_942 = true;
					}
					if (__LIB_13__::func_158("RBT22_IG5"))
					{
						__LIB_6__::func_900("RBT22_IG5", 0, 0);
					}
					func_710(1);
					func_711(uParam0);
					if (iLocal_863 == 0)
					{
						__LIB_2__::func_411(&(Local_789[0 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[0 /*35*/][1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][1 /*17*/]), 0, 0);
						func_696(&(Local_718[0 /*11*/]), &(Local_746[0 /*21*/]), 70f, &(Local_789[0 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					}
					else if (iLocal_863 == 1)
					{
						__LIB_2__::func_411(&(Local_789[0 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[0 /*35*/][1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_789[1 /*35*/][1 /*17*/]), 0, 0);
						func_696(&(Local_718[1 /*11*/]), &(Local_746[1 /*21*/]), 70f, &(Local_789[1 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					}
					if (__LIB_13__::func_123(uParam0, "RBT22_RILOFART", 0, 0))
					{
						func_716();
						bLocal_743 = true;
						iLocal_22 = 4;
					}
					else
					{
						iLocal_22 = 3;
					}
					return false;
				}
			}
			if (bLocal_691 || __LIB_1__::func_410(Global_36, vLocal_678, 35f, 1))
			{
				func_710(0);
				__LIB_0__::func_325(&iLocal_674);
				__LIB_0__::func_325(&iLocal_634);
				if (!bLocal_942)
				{
					__LIB_12__::func_883(uParam0, "RBT22_QU_OBJ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_942 = true;
				}
				func_711(uParam0);
			}
			break;
		case 3:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
			}
			else if (iLocal_599 == 0)
			{
				if (__LIB_13__::func_123(uParam0, "RBT22_RILOFARQ", 0, 0))
				{
					func_716();
					bLocal_743 = true;
					iLocal_22 = 4;
				}
			}
			else if (iLocal_599 == 1)
			{
				if (__LIB_13__::func_123(uParam0, "RBT22_RILOFART", 0, 0))
				{
					func_716();
					bLocal_743 = true;
					iLocal_22 = 4;
				}
			}
			break;
		case 4:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_708(uParam0);
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
			}
			else if (iLocal_599 == 0)
			{
				if (!__LIB_13__::func_120("RBT22_RILOFARQ", 0))
				{
					if (func_718(uParam0) || bLocal_896)
					{
						func_719();
						func_720(0);
						iLocal_22 = 10;
					}
				}
			}
			else if (iLocal_599 == 1)
			{
				if (!__LIB_13__::func_120("RBT22_RILOFART", 0))
				{
					if (func_718(uParam0) || bLocal_896)
					{
						func_719();
						func_720(0);
						iLocal_22 = 10;
					}
				}
			}
			break;
		case 5:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			func_721(1);
			if (func_718(uParam0))
			{
				func_722();
				iLocal_22 = 11;
			}
			break;
		case 6:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (__LIB_13__::func_158("RBT22_IG5"))
			{
				__LIB_6__::func_900("RBT22_IG5", 0, 0);
			}
			if (bLocal_742)
			{
				iLocal_22 = 5;
				func_710(1);
				func_711(uParam0);
			}
			else if (__LIB_12__::func_876(uParam0, "RBT22_CHALLENGE", 0))
			{
				func_720(1);
				__LIB_2__::func_602(&(Local_789[0 /*35*/][0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_789[1 /*35*/][1 /*17*/]), "INTERACT_THREATEN", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_718[0 /*11*/], 301, false);
				func_716();
				__LIB_1__::func_283(&uLocal_860, 0);
				iLocal_22 = 7;
			}
			break;
		case 7:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (bLocal_742)
			{
				func_720(0);
				iLocal_22 = 5;
			}
			else if (__LIB_0__::func_264(&uLocal_860) > 10f)
			{
				func_720(0);
				iLocal_22 = 5;
			}
			else
			{
				iLocal_599 = func_696(&(Local_718[0 /*11*/]), &(Local_746[0 /*21*/]), 25f, &(Local_789[0 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iLocal_599 == 0)
				{
					if (__LIB_13__::func_123(uParam0, "RBT22_RILOQ", 0, 0))
					{
						iLocal_22 = 9;
					}
					else
					{
						iLocal_22 = 8;
					}
					__LIB_2__::func_411(&(Local_789[0 /*35*/][0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_789[0 /*35*/][1 /*17*/]), 0, 0);
					func_696(&(Local_718[0 /*11*/]), &(Local_746[0 /*21*/]), 25f, &(Local_789[0 /*35*/]), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (iLocal_599 == 1)
				{
					iLocal_599 = 1;
					if (__LIB_13__::func_123(uParam0, "RBT22_RILOT", 0, 0))
					{
						iLocal_22 = 9;
					}
					else
					{
						iLocal_22 = 8;
					}
				}
				func_716();
			}
			break;
		case 8:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (bLocal_742)
			{
				func_720(0);
				iLocal_22 = 5;
			}
			else if (iLocal_599 == 0)
			{
				if (__LIB_13__::func_123(uParam0, "RBT22_RILOQ", 0, 0))
				{
					iLocal_22 = 9;
				}
			}
			else if (iLocal_599 == 1)
			{
				if (__LIB_13__::func_123(uParam0, "RBT22_RILOT", 0, 0))
				{
					iLocal_22 = 9;
				}
			}
			break;
		case 9:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (bLocal_742)
			{
				__LIB_12__::func_876(uParam0, "RBT22_RILOANS", 0);
				func_720(0);
				iLocal_22 = 10;
			}
			else if (!__LIB_6__::func_904())
			{
				if (func_718(uParam0) || bLocal_896)
				{
					func_719();
					func_720(0);
					iLocal_22 = 10;
				}
			}
			break;
		case 10:
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			if (func_718(uParam0))
			{
				func_721(1);
				func_722();
				iLocal_22 = 11;
			}
			break;
		case 11:
			__LIB_10__::func_82(&Local_26);
			func_704(uParam0);
			func_705(uParam0);
			func_706(uParam0);
			return true;
	}
	return false;
}

bool func_334(var uParam0)
{
	if (func_725(&Local_26, 1))
	{
		return true;
	}
	else
	{
		func_706(uParam0);
	}
	func_704(uParam0);
	func_705(uParam0);
	func_726(uParam0);
	func_727(uParam0);
	return false;
}

bool func_335(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_728(uParam0);
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
				func_752(uParam0);
				return true;
			}
			break;
	}
	return false;
}

int func_336(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_336(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_372(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_715(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_715(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_715(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_715(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_715(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_715(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_715(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_715(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_715(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_715(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_715(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_715(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_715(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_799();
						func_800(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_715(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_372(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						__LIB_17__::func_731(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_372(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_372(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_715(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_715(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_715(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_376(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_841(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_841(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

int func_459(int iParam0, int iParam1)
{
	var uVar0;
	return func_932(&uVar0, iParam0, iParam1);
}

void func_579(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (!bLocal_448 && MISC::IS_BULLET_IN_AREA(vLocal_453, 10f, true))
	{
		bLocal_448 = true;
	}
	fVar4 = 15f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_412[iVar0 /*11*/].f_8 != 5)
		{
			if (!__LIB_0__::func_272(Local_412[iVar0 /*11*/], 0))
			{
				bLocal_447 = true;
				bLocal_448 = true;
				__LIB_0__::func_325(&(Local_412[iVar0 /*11*/].f_1));
				func_688(iVar0, 5);
			}
			else if (PED::_IS_PED_HOGTIED(Local_412[iVar0 /*11*/]))
			{
				bLocal_447 = true;
				bLocal_448 = true;
				__LIB_0__::func_325(&(Local_412[iVar0 /*11*/].f_1));
				func_688(iVar0, 4);
			}
			else if ((uParam0->f_177 == 7 && bLocal_447 == 0) && bLocal_448 == 0)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_412[iVar0 /*11*/].f_1))
				{
					Local_412[iVar0 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_412[iVar0 /*11*/]);
					MAP::_BLIP_SET_MODIFIER(Local_412[iVar0 /*11*/].f_1, -662251075);
				}
			}
		}
		switch (Local_412[iVar0 /*11*/].f_8)
		{
			case 0:
				if (bLocal_447 == 0)
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_412[iVar0 /*11*/], false, false) };
					if (func_1019(iVar0))
					{
						bLocal_447 = true;
					}
					else if (__LIB_0__::func_48(Local_412[iVar0 /*11*/], Global_35, 1.5f, 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_450, true, 0))
					{
						if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
						{
							bLocal_447 = true;
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_412[iVar0 /*11*/], Global_35, 1, 1))
					{
						bLocal_448 = true;
					}
					else if (func_1021(iVar0))
					{
						bLocal_447 = true;
					}
					else if (func_1022(Local_412[iVar0 /*11*/], 10f, 1, 1, 0, 0) || MISC::IS_PROJECTILE_IN_AREA(vVar1 - Vector(fVar4, fVar4, fVar4), vVar1 + Vector(fVar4, fVar4, fVar4), false))
					{
						bLocal_448 = true;
					}
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
		}
		iVar0++;
	}
}

void func_580(var uParam0)
{
	__LIB_13__::func_91(uParam0, 0);
	AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
}

void func_581(var uParam0)
{
	int iVar0;
	switch (iLocal_18)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_412[iVar0 /*11*/]))
				{
					return;
				}
				iVar0++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_465[0]))
			{
				iLocal_465[0] = WEAPON::_0xC6A6789BB405D11C(Local_412[0 /*11*/], 1);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_465[1]))
			{
				if (!iLocal_471[1])
				{
					iLocal_468[1] = joaat("W_MELEE_KNIFE02");
					STREAMING::REQUEST_MODEL(iLocal_468[1], false);
					iLocal_471[1] = 1;
				}
				else if (STREAMING::HAS_MODEL_LOADED(iLocal_468[1]))
				{
					iLocal_465[1] = OBJECT::CREATE_OBJECT(iLocal_468[1], Local_412[1 /*11*/].f_2, true, true, false, false, true);
				}
				return;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_465[0]))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_465[1]))
			{
				return;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_465[0], Local_412[0 /*11*/], PED::GET_PED_BONE_INDEX(Local_412[0 /*11*/], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_464))
			{
				if (!bLocal_474)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, Local_412[0 /*11*/].f_10, Local_412[0 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, Local_412[1 /*11*/].f_10, Local_412[1 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, Local_412[2 /*11*/].f_10, Local_412[2 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, "pistol_a", iLocal_465[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, "KNIFE", iLocal_465[1], 0);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_464);
					bLocal_474 = true;
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_464, true, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_464);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_464, "pbl_breakout_a_bk");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_464, "pbl_breakout_a_fwd");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_464, "pbl_breakout_b_fwd");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_464, "pbl_breakout_b_bk");
					iLocal_471[1] = 0;
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_468[1]);
					iLocal_18 = 1;
				}
			}
			else
			{
				iLocal_464 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@banditoshack@barn", 0, "pbl_cant_kill_kid", false, true);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_464))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, Local_412[0 /*11*/].f_10, Local_412[0 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, Local_412[1 /*11*/].f_10, Local_412[1 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, Local_412[2 /*11*/].f_10, Local_412[2 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, "pistol_a", iLocal_465[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_464, "KNIFE", iLocal_465[1], 0);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_464);
					bLocal_474 = true;
				}
			}
			break;
		case 1:
			if (func_1023())
			{
				func_1024(uParam0);
				iLocal_18 = 4;
			}
			else if (__LIB_1__::func_410(Global_36, vLocal_453, 35f, 1))
			{
				if (__LIB_12__::func_876(uParam0, "RBT22_BARN1", 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_464, "bool", true, false);
					iLocal_18 = 2;
				}
			}
			break;
		case 2:
			if (func_1023())
			{
				func_1024(uParam0);
				iLocal_18 = 4;
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_464, "cant_kill_kid", 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_464, "bool"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_464, "bool", false, false);
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_464, "idle", 1))
			{
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_464, "intro_idle", 1))
			{
			}
			break;
		case 3:
			if (func_1023())
			{
				func_1024(uParam0);
				iLocal_18 = 4;
			}
			break;
		case 4:
			if (func_1025(uParam0))
			{
				iLocal_18 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_597(var uParam0)
{
	Local_26.f_67 = iLocal_692;
	__LIB_13__::func_83(&iLocal_692);
	__LIB_13__::func_114(&Local_26);
	__LIB_13__::func_189(uParam0, &Local_26, &iLocal_692);
	if (__LIB_0__::func_181())
	{
		StringCopy(&(Local_26.f_340), "RBT22_SHMOAN1J", 24);
	}
	else
	{
		StringCopy(&(Local_26.f_340), "RBT22_SHMOAN1A", 24);
	}
	Local_26.f_299 = 14;
}

void func_633(var uParam0)
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
			__LIB_17__::func_730(&(uParam0->f_416));
		}
		func_1100(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1102(uParam0);
		func_1103(uParam0);
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

void func_679(var uParam0)
{
	int iVar0;
	if (bLocal_448)
	{
		if (iLocal_17 != 6)
		{
			func_1171();
			iLocal_17 = 6;
		}
		return;
	}
	switch (iLocal_17)
	{
		case 0:
			if (__LIB_0__::func_48(Global_35, Local_412[1 /*11*/], 30f, 1))
			{
				__LIB_2__::func_602(&(Local_501[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_501[1 /*17*/]), "INTERACT_THREATEN", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_412[1 /*11*/], 301, false);
				iLocal_17 = 1;
			}
			break;
		case 1:
			iVar0 = func_1172(&(Local_412[1 /*11*/]), &iLocal_480, 30f, &Local_501, 0, 3, 0, 0, 2, 0, 2, -1082130432 /* Float: -1f */);
			if (iVar0 == 0)
			{
				__LIB_2__::func_411(&(Local_501[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_501[1 /*17*/]), 0, 0);
				func_1172(&(Local_412[1 /*11*/]), &iLocal_480, 30f, &Local_501, 0, 3, 0, 0, 2, 0, 2, -1082130432 /* Float: -1f */);
				if (__LIB_13__::func_158("RBT22_BARN1"))
				{
					__LIB_6__::func_900("RBT22_BARN1", 0, 0);
				}
				if (__LIB_13__::func_123(uParam0, "RBT22_BARNQ", 0, 0))
				{
					iLocal_17 = 4;
				}
				else
				{
					iLocal_17 = 2;
				}
			}
			else if (iVar0 == 1)
			{
				__LIB_2__::func_411(&(Local_501[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_501[1 /*17*/]), 0, 0);
				func_1172(&(Local_412[1 /*11*/]), &iLocal_480, 30f, &Local_501, 0, 3, 0, 0, 2, 0, 2, -1082130432 /* Float: -1f */);
				if (__LIB_13__::func_158("RBT22_BARN1"))
				{
					__LIB_6__::func_900("RBT22_BARN1", 0, 0);
				}
				if (__LIB_13__::func_123(uParam0, "RBT22_BARNT", 0, 0))
				{
					iLocal_17 = 5;
				}
				else
				{
					iLocal_17 = 3;
				}
			}
			break;
		case 2:
			if (__LIB_13__::func_123(uParam0, "RBT22_BARNQ", 0, 0))
			{
				iLocal_17 = 4;
			}
			break;
		case 3:
			if (__LIB_13__::func_123(uParam0, "RBT22_BARNT", 0, 0))
			{
				iLocal_17 = 5;
			}
			break;
		case 4:
			if (!__LIB_13__::func_120("RBT22_BARNQ", 0))
			{
				bLocal_448 = true;
				func_1171();
				iLocal_17 = 6;
			}
			else if (!bLocal_449)
			{
				func_1173();
				bLocal_449 = true;
			}
			break;
		case 5:
			if (!__LIB_13__::func_120("RBT22_BARNT", 0))
			{
				bLocal_448 = true;
				func_1171();
				iLocal_17 = 6;
			}
			else if (!bLocal_449)
			{
				func_1173();
				bLocal_449 = true;
			}
			break;
		case 6:
			break;
	}
}

void func_682(var uParam0)
{
	if (!iLocal_456[0] && !bLocal_448)
	{
		if (__LIB_6__::func_904())
		{
			__LIB_5__::func_20(0, 0);
		}
		if (__LIB_0__::func_272(Local_412[1 /*11*/], 1))
		{
			if (__LIB_12__::func_876(uParam0, "RBT22_SPOT2", 0))
			{
				iLocal_456[0] = 1;
			}
		}
		else if (__LIB_0__::func_272(Local_412[0 /*11*/], 1))
		{
			if (__LIB_12__::func_876(uParam0, "RBT22_SPOT1", 0))
			{
				iLocal_456[0] = 1;
			}
		}
		else
		{
			iLocal_456[0] = 1;
			iLocal_456[1] = 1;
		}
	}
	else if (!iLocal_456[1])
	{
		if (__LIB_6__::func_904())
		{
			return;
		}
		if (__LIB_0__::func_272(Local_412[0 /*11*/], 1))
		{
			if (__LIB_12__::func_876(uParam0, "RBT22_ALERT1", 0))
			{
				iLocal_456[1] = 1;
			}
		}
		else if (__LIB_0__::func_272(Local_412[1 /*11*/], 1))
		{
			if (__LIB_12__::func_876(uParam0, "RBT22_ALERT2", 0))
			{
				iLocal_456[1] = 1;
			}
		}
		else
		{
			iLocal_456[1] = 1;
		}
	}
}

void func_684(var uParam0)
{
	if (!__LIB_0__::func_75(&uLocal_461))
	{
		__LIB_1__::func_283(&uLocal_461, 0);
	}
	else if (__LIB_0__::func_265(&uLocal_461) > 8f)
	{
		if (__LIB_2__::func_401(Local_412[2 /*11*/], 1, 1, 1, 0, 0))
		{
			if (__LIB_12__::func_876(uParam0, "RBT22_DONTHURT", 0))
			{
				__LIB_1__::func_148(&uLocal_461);
			}
		}
	}
}

void func_685()
{
	int iVar0;
	if (bLocal_460)
	{
		return;
	}
	if (iLocal_456[1])
	{
		if (__LIB_0__::func_272(Local_412[0 /*11*/], 1))
		{
			__LIB_4__::func_291(Local_412[0 /*11*/], iLocal_451, 1, 0);
			TASK::CLEAR_PED_TASKS(Local_412[0 /*11*/], true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_412[0 /*11*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (__LIB_0__::func_272(Local_412[1 /*11*/], 1))
		{
			__LIB_4__::func_291(Local_412[1 /*11*/], iLocal_452, 0, 0);
			TASK::CLEAR_PED_TASKS(Local_412[1 /*11*/], true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 500);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_412[1 /*11*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		bLocal_460 = true;
	}
}

bool func_686()
{
	if ((Local_412[0 /*11*/].f_8 == 5 || Local_412[0 /*11*/].f_8 == 4) && (Local_412[1 /*11*/].f_8 == 5 || Local_412[1 /*11*/].f_8 == 4))
	{
		return true;
	}
	return false;
}

void func_687(var uParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_412[2 /*11*/]))
	{
		if (!bLocal_606)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_412[2 /*11*/]))
			{
				__LIB_1__::func_715(2, 0, 0, 0, Local_412[2 /*11*/], 0, 1065353216 /* Float: 1f */, 0);
			}
			bLocal_606 = true;
		}
		if (iLocal_20 < 7)
		{
			__LIB_0__::func_325(&(Local_412[2 /*11*/].f_1));
			func_693();
			iLocal_20 = 7;
		}
		return;
	}
	switch (iLocal_20)
	{
		case 0:
			if (iLocal_18 < 5)
			{
				iLocal_18 = 5;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_412[2 /*11*/], 20f, 20f, 20f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_412[2 /*11*/], true, false);
				PED::_0xAAB050DA48B57978(Local_412[2 /*11*/], "TaskIntimidated_OnFoot", Global_35, -1, 4);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 4f, 1f, 2f, 0);
				TASK::_TASK_INTIMIDATED_2(0, Global_35, 2, 1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_412[2 /*11*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iLocal_20 = 1;
			}
			break;
		case 1:
			if (iLocal_15 != 0)
			{
				if (func_1177())
				{
					iLocal_20 = 5;
				}
				else
				{
					iLocal_20 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_266(Local_412[2 /*11*/], Global_36, 20f, 1, 1))
			{
				iLocal_20 = 5;
				return;
			}
			if (func_1177())
			{
				func_693();
				__LIB_0__::func_325(&(Local_412[2 /*11*/].f_1));
				iLocal_20 = 5;
			}
			else if (!__LIB_6__::func_904())
			{
				__LIB_2__::func_602(&(Local_564[0 /*17*/]), "RBT22_RELEASE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_564[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_564[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_564[1 /*17*/]), 0, 0);
				__LIB_14__::func_251(3);
				TASK::CLEAR_PED_TASKS(Local_412[2 /*11*/], true, false);
				PED::_0xAAB050DA48B57978(Local_412[2 /*11*/], "TaskIntimidated_OnFoot", Global_35, -1, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_412[2 /*11*/], Global_35, -1, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(Local_412[2 /*11*/], Global_35, -1, 0, 51, 0);
				iLocal_599 = -1;
				iLocal_20 = 3;
			}
			break;
		case 3:
			if (func_1177())
			{
				func_693();
				iLocal_20 = 5;
				return;
			}
			if (!__LIB_0__::func_266(Local_412[2 /*11*/], Global_36, 20f, 1, 1))
			{
				func_693();
				iLocal_20 = 5;
				return;
			}
			if (iLocal_599 == -1)
			{
				iLocal_599 = func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iLocal_599 == 0)
				{
					__LIB_2__::func_411(&(Local_564[0 /*17*/]), 0, 0);
					func_696(&(Local_412[2 /*11*/]), &iLocal_543, 12f, &Local_564, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
			}
			if (iLocal_599 == 0)
			{
				if (__LIB_13__::func_123(uParam0, "RBT22_ILOR", 0, 0))
				{
					__LIB_1__::func_715(12, 0, 0, 0, Local_412[2 /*11*/], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_283(&uLocal_603, 0);
					iLocal_20 = 4;
				}
			}
			else
			{
				func_1178(uParam0);
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_603) > 2f)
			{
				__LIB_0__::func_37(&uLocal_603);
				iLocal_20 = 5;
			}
			break;
		case 5:
			if (!PED::IS_PED_RAGDOLL(Local_412[2 /*11*/]) && !TASK::IS_PED_GETTING_UP(Local_412[2 /*11*/]))
			{
				AUDIO::STOP_PED_SPEAKING(Local_412[2 /*11*/], true);
				TASK::CLEAR_PED_TASKS(Local_412[2 /*11*/], true, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_412[2 /*11*/], Global_35, 3, 1, -1082130432 /* Float: -1f */, -1, 0);
				TASK::_0xE8F1A5B4CED3725A(Local_412[2 /*11*/], vLocal_678, -1082130432 /* Float: -1f */);
				TASK::_0xE8F1A5B4CED3725A(Local_412[2 /*11*/], -5461.481f, -3674.878f, -20.4336f, -1082130432 /* Float: -1f */);
				TASK::_0xE8F1A5B4CED3725A(Local_412[2 /*11*/], -5460.794f, -3664.118f, -21.7869f, -1082130432 /* Float: -1f */);
				TASK::_0xE8F1A5B4CED3725A(Local_412[2 /*11*/], -5458.073f, -3652.466f, -22.1534f, -1082130432 /* Float: -1f */);
				iLocal_20 = 6;
			}
			if (!__LIB_13__::func_120("RBT22_ILOR", 0))
			{
				func_693();
			}
			break;
		case 6:
			if (!__LIB_13__::func_120("RBT22_ILOR", 0))
			{
				func_693();
			}
			if (!__LIB_0__::func_266(Local_412[2 /*11*/], Global_36, 70f, 1, 1) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_412[2 /*11*/]))
			{
				__LIB_2__::func_426(&(Local_412[2 /*11*/]));
				iLocal_20 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_688(int iParam0, int iParam1)
{
	if (Local_412[iParam0 /*11*/].f_8 != iParam1)
	{
		Local_412[iParam0 /*11*/].f_8 = iParam1;
	}
}

void func_693()
{
	__LIB_2__::func_344(&(Local_412[2 /*11*/]));
	__LIB_2__::func_480(&Local_564, 0, 0, 1, 0);
}

int func_696(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_696(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_700()
{
	if ((Local_412[0 /*11*/].f_8 == 5 && Local_412[1 /*11*/].f_8 == 5) && Local_412[2 /*11*/].f_8 == 5)
	{
		return true;
	}
	return false;
}

void func_701()
{
	if (MAP::DOES_BLIP_EXIST(Local_26.f_68) || MAP::DOES_BLIP_EXIST(iLocal_693))
	{
		return;
	}
	if (bLocal_635)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_674))
		{
			iLocal_674 = __LIB_8__::func_777(408396114, vLocal_675, 100f, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_674, "RBT22_BLIP");
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(iLocal_634))
	{
		iLocal_634 = __LIB_8__::func_777(408396114, vLocal_453, 30f, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_634, "RBT22_BLIP");
	}
}

void func_702()
{
	__LIB_1__::func_148(&uLocal_944);
	vLocal_948 = { Global_36 };
}

void func_703()
{
	int iVar0;
	if (!bLocal_673)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_864[0 /*9*/]))
		{
			return;
		}
		else
		{
			PED::SET_PED_RESET_FLAG(Local_864[0 /*9*/], 170, true);
		}
		if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), Local_864[0 /*9*/]))
		{
			ENTITY::_0x1AD922AB5038DEF3(Local_864[0 /*9*/]);
			PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), Local_864[0 /*9*/], 0);
		}
		__LIB_13__::func_80(Local_864[0 /*9*/], sLocal_641, 1, 0.762f, 0.4f, 0, 0, 1);
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_864[0 /*9*/], MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOAQUIN_ARROYO"));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_641, iVar0, &(vLocal_642[iVar0 /*3*/]));
			iVar0++;
		}
		bLocal_673 = true;
	}
}

void func_704(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_692))
	{
		return;
	}
	__LIB_13__::func_153(&uLocal_704, &iLocal_692);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_692))
	{
		if (!bLocal_954)
		{
			if (PED::GET_PED_CONFIG_FLAG(iLocal_692, 11, false))
			{
				bLocal_954 = true;
			}
		}
		if (iLocal_24 != 7)
		{
			if (PED::_IS_PED_HOGTIED(iLocal_692))
			{
				func_305(7);
				if (__LIB_13__::func_120("RBT22_TSPOT", 0))
				{
					__LIB_5__::func_20(0, 0);
				}
				if (!bLocal_953)
				{
					if (bLocal_954)
					{
						if (__LIB_12__::func_876(uParam0, "RBT22_HOGKOED", 0))
						{
							bLocal_953 = true;
						}
					}
					else if (__LIB_13__::func_123(uParam0, "RBT22_CAUGHT", 0, 0))
					{
						bLocal_953 = true;
					}
				}
			}
		}
		else if (iLocal_24 != 6 && iLocal_24 != 8)
		{
			if (PED::_IS_PED_LASSOED(iLocal_692) || func_1214(iLocal_692))
			{
				bLocal_742 = true;
				func_721(1);
				func_305(6);
			}
		}
	}
	switch (iLocal_24)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_693))
			{
				func_707(uParam0);
			}
			if (__LIB_13__::func_95(iLocal_692, 0, &uLocal_906, &uLocal_934, 0, 0))
			{
				bLocal_742 = true;
			}
			else if (func_1214(iLocal_692) || func_1022(iLocal_692, 10f, 1, 1, 0, 0))
			{
				func_722();
				bLocal_742 = true;
			}
			else if (func_1215() || bLocal_743)
			{
				bLocal_743 = true;
				func_305(1);
			}
			break;
		case 1:
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_692, Global_35, 1, 1) || func_1214(iLocal_692)) || func_1022(iLocal_692, 10f, 1, 1, 0, 0))
			{
				func_722();
				bLocal_742 = true;
			}
			else if (__LIB_0__::func_266(iLocal_692, Global_36, 2.5f, 1, 1))
			{
				bLocal_742 = true;
			}
			break;
		case 2:
			func_1216(uParam0);
			if (func_1217())
			{
				func_1218();
				func_305(4);
			}
			else if (__LIB_0__::func_266(iLocal_692, vLocal_453, 20f, 1, 1))
			{
				func_1219();
				func_305(3);
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_864[iLocal_712 /*9*/]))
			{
				if (__LIB_0__::func_266(iLocal_692, vLocal_453, 40f, 1, 1))
				{
					func_1219();
					func_305(3);
				}
				else
				{
					func_1218();
					func_305(4);
				}
			}
			else
			{
				func_1220();
			}
			break;
		case 3:
			if (!bLocal_956 && __LIB_0__::func_48(iLocal_692, Global_35, 15f, 1))
			{
				if (__LIB_12__::func_876(uParam0, "RBT22_RIDEBARN", 0))
				{
					bLocal_956 = true;
				}
			}
			break;
		case 4:
			func_1216(uParam0);
			if (__LIB_0__::func_266(iLocal_692, vLocal_714, 2f, 1, 1))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_713))
				{
					iLocal_713 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_714, 0f, 0f, 0f, 5f, 5f, 5f, "RBT22_Targetrocksdef");
				}
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_692, 0);
				__LIB_9__::func_410(iLocal_692, 1, 0);
				TASK::TASK_COMBAT_PED(iLocal_692, Global_35, 0, 0);
				func_305(5);
			}
			else if (!bLocal_717)
			{
				if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_711, &iVar0))
				{
					if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_711, (iVar0 - 1), &vLocal_714))
					{
						bLocal_717 = true;
					}
				}
			}
			break;
		case 5:
			break;
		case 6:
			if (!PED::_IS_PED_LASSOED(iLocal_692) && ENTITY::_0x61914209C36EFDDB(iLocal_692) != 1)
			{
				func_305(8);
			}
			break;
		case 7:
			if (__LIB_10__::func_166(iLocal_692, 1))
			{
				func_1223(uParam0);
			}
			else if (!PED::_IS_PED_HOGTIED(iLocal_692))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_692, Global_35, 3, 0, 1000f, -1, 0);
				func_305(8);
			}
			else
			{
				func_1223(uParam0);
			}
			break;
		case 8:
			if (((!PED::_IS_PED_LASSOED(iLocal_692) && ENTITY::_0x61914209C36EFDDB(iLocal_692) != 1) && !PED::_IS_PED_HOGTIED(iLocal_692)) && !ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_692, 1f, 1f, 1f, false, true, 0))
			{
				func_1224(uParam0);
			}
			func_1220();
			break;
		case 9:
			break;
	}
}

void func_705(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_718[iVar0 /*11*/].f_8 != 5)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_718[iVar0 /*11*/]))
			{
				__LIB_0__::func_325(&(Local_718[iVar0 /*11*/].f_1));
				bLocal_742 = true;
				func_1225(iVar0, 5);
			}
			else if (Local_718[iVar0 /*11*/].f_8 != 4 && PED::_IS_PED_HOGTIED(Local_718[iVar0 /*11*/]))
			{
				bLocal_742 = true;
				bLocal_743 = true;
				__LIB_0__::func_325(&(Local_718[iVar0 /*11*/].f_1));
				func_1225(iVar0, 4);
			}
			else if (Local_718[iVar0 /*11*/].f_8 == 2)
			{
				if (!__LIB_0__::func_266(Local_718[iVar0 /*11*/], Global_36, 75f, 1, 1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_718[iVar0 /*11*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_2__::func_788(&(Local_718[iVar0 /*11*/]), 1, 1, 1);
					func_1225(iVar0, 5);
				}
			}
		}
		func_1226(uParam0);
		switch (Local_718[iVar0 /*11*/].f_8)
		{
			case 0:
				if (((bLocal_742 || __LIB_13__::func_95(Local_718[iVar0 /*11*/], 0, &uLocal_906, &uLocal_934, 0, 0)) || func_1214(Local_718[iVar0 /*11*/])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_718[iVar0 /*11*/], true, false), 30f, true))
				{
					bLocal_742 = true;
				}
				else if (__LIB_2__::func_123(Local_718[iVar0 /*11*/], Global_35, 0.5f) && __LIB_2__::func_215(Local_718[iVar0 /*11*/], Global_35, 0, 30f, 0))
				{
					bLocal_743 = true;
					func_1225(iVar0, 1);
				}
				else if (__LIB_0__::func_48(Local_718[iVar0 /*11*/], Global_35, 10f, 1))
				{
					bLocal_743 = true;
					func_1225(iVar0, 1);
				}
				else if (__LIB_0__::func_48(Local_718[iVar0 /*11*/], Global_35, 15f, 1))
				{
					if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
					{
						bLocal_743 = true;
						func_1225(iVar0, 1);
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -5856.947f, -3593.846f, -25.07924f, -5883.247f, -3586.886f, -22.09525f, 4.25f, false, true, 0))
				{
					bLocal_743 = true;
					func_1225(iVar0, 1);
				}
				break;
			case 1:
				if ((__LIB_13__::func_95(Local_718[iVar0 /*11*/], 0, &uLocal_906, &uLocal_934, 0, 0) || func_1214(Local_718[iVar0 /*11*/])) || func_1022(Local_718[iVar0 /*11*/], 10f, 1, 1, 0, 0))
				{
					bLocal_742 = true;
				}
				break;
			case 2:
				if (!__LIB_0__::func_75(&uLocal_903))
				{
					__LIB_1__::func_283(&uLocal_903, 0);
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
		iVar0++;
	}
}

void func_706(var uParam0)
{
	char* sVar0;
	float fVar1;
	switch (iLocal_15)
	{
		case 2:
			switch (iLocal_22)
			{
				case 1:
				case 2:
					if (__LIB_0__::func_75(&uLocal_944))
					{
						sVar0 = "RBT22_SEARCH";
						if (__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
						{
							if (__LIB_1__::func_325())
							{
								__LIB_0__::func_37(&uLocal_944);
							}
							else if (__LIB_1__::func_410(vLocal_948, Global_36, 5f, 1) && __LIB_0__::func_265(&uLocal_944) > 15f)
							{
								__LIB_0__::func_37(&uLocal_944);
								__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							}
							else if (__LIB_0__::func_264(&uLocal_944) > 30f)
							{
								__LIB_0__::func_37(&uLocal_944);
								__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							}
							else
							{
								fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_695, true);
								if (fVar1 < fLocal_947)
								{
									fLocal_947 = fVar1;
								}
								else if ((fLocal_947 + 20f) < fVar1)
								{
									__LIB_0__::func_37(&uLocal_944);
									__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								}
							}
						}
					}
					break;
				case 5:
					break;
				case 7:
					break;
				case 11:
					break;
			}
			break;
		case 3:
			if (!bLocal_943 && MAP::DOES_BLIP_EXIST(Local_26.f_68))
			{
				__LIB_10__::func_197(&Local_26, 4, 1);
				bLocal_943 = true;
			}
			break;
		case 4:
			break;
	}
}

void func_707(var uParam0)
{
	if (bLocal_691)
	{
		return;
	}
	if (__LIB_0__::func_94(iLocal_692, Global_36, 1) > 100f)
	{
		return;
	}
	if ((func_1229(&(vLocal_681[0 /*3*/]), iLocal_692, 1073741824 /* Float: 2f */, 1069547520 /* Float: 1.5f */) || func_1229(&(vLocal_681[1 /*3*/]), Local_718[0 /*11*/], 1073741824 /* Float: 2f */, 1069547520 /* Float: 1.5f */)) || func_1229(&(vLocal_681[2 /*3*/]), Local_718[1 /*11*/], 1073741824 /* Float: 2f */, 1069547520 /* Float: 1.5f */))
	{
		if (__LIB_13__::func_123(uParam0, "RBT22_BSPOT", 0, 0))
		{
			bLocal_691 = true;
		}
	}
}

void func_708(var uParam0)
{
	int iVar0;
	switch (iLocal_23)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_893))
			{
				if (!bLocal_895)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_893, "male_b", iLocal_692, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_893, Local_718[0 /*11*/].f_10, Local_718[0 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_893, Local_718[1 /*11*/].f_10, Local_718[1 /*11*/], 0);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_893);
					bLocal_895 = true;
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_893, true, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_893);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_893, "pbl_react_bk");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_893, "pbl_react_fwd");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_893, "pbl_react_lt");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_893, "pbl_react_rt");
					iLocal_23 = 1;
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_692))
				{
					return;
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_718[iVar0 /*11*/]))
					{
						return;
					}
					iVar0++;
				}
				iLocal_893 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@banditoshack@railroad", 0, "pbl_where_is_train", false, true);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_893))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_893, "male_b", iLocal_692, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_893, Local_718[0 /*11*/].f_10, Local_718[0 /*11*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_893, Local_718[1 /*11*/].f_10, Local_718[1 /*11*/], 0);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_893);
					bLocal_895 = true;
				}
			}
			break;
		case 1:
			if (bLocal_742)
			{
				func_1230(1);
				iLocal_23 = 5;
			}
			else if (bLocal_743)
			{
				if (bLocal_744 == 0)
				{
					func_1230(0);
					iLocal_23 = 4;
				}
				else
				{
					iLocal_23 = 6;
				}
			}
			else if (__LIB_1__::func_410(Global_36, vLocal_678, 50f, 1) && __LIB_12__::func_876(uParam0, "RBT22_IG5", 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_893, "Bool", true, false);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (bLocal_742)
			{
				func_1230(1);
				iLocal_23 = 6;
			}
			else if (bLocal_743)
			{
				if (bLocal_744 == 0)
				{
					func_1230(0);
					iLocal_23 = 4;
				}
				else
				{
					iLocal_23 = 6;
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_893, "where_is_train", 1) && ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_893, "Bool"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_893, "Bool", false, false);
			}
			break;
		case 3:
			if (bLocal_742)
			{
				func_1230(1);
				if (iLocal_894 != -1)
				{
					iLocal_23 = 5;
				}
				else
				{
					iLocal_23 = 6;
				}
			}
			else if (bLocal_743)
			{
				if (bLocal_744 == 0)
				{
					func_1230(0);
					iLocal_23 = 4;
				}
				else
				{
					iLocal_23 = 6;
				}
			}
			break;
		case 4:
			if (bLocal_742)
			{
				func_1231(iLocal_692, 100, 100, 1);
				func_1231(Local_718[0 /*11*/], 100, 125, 1);
				func_1231(Local_718[1 /*11*/], 100, 175, 1);
				iLocal_23 = 6;
			}
			else if (iLocal_894 == -1)
			{
				iLocal_23 = 6;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_893) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_893, false))
			{
				iLocal_23 = 6;
			}
			else
			{
				func_1232(uParam0);
			}
			break;
		case 5:
			if (iLocal_894 == -1)
			{
			}
			break;
		case 6:
			break;
	}
}

bool func_709()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_13__::func_84(vLocal_642[iVar0 /*3*/], 1f, 7.5f))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_710(bool bParam0)
{
	int iVar0;
	__LIB_0__::func_325(&iLocal_674);
	__LIB_0__::func_325(&iLocal_634);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_718[iVar0 /*11*/]))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_718[iVar0 /*11*/].f_1))
			{
				Local_718[iVar0 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_718[iVar0 /*11*/]);
				if (bParam0)
				{
					MAP::_BLIP_SET_MODIFIER(Local_718[iVar0 /*11*/].f_1, -1034486097);
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(Local_718[iVar0 /*11*/].f_1, -662251075);
				}
			}
			else if (bParam0)
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_718[iVar0 /*11*/].f_1, -662251075);
				MAP::_BLIP_SET_MODIFIER(Local_718[iVar0 /*11*/].f_1, -1034486097);
			}
		}
		iVar0++;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_26.f_68))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_693))
		{
			iLocal_693 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_692);
			if (bParam0)
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_693, -1034486097);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_693, -662251075);
			}
		}
		else if (bParam0)
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_693, -662251075);
			MAP::_BLIP_SET_MODIFIER(iLocal_693, -1034486097);
		}
	}
}

void func_711(var uParam0)
{
	if (!bLocal_938)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_10__::func_142(uParam0->f_174, 2);
		}
		else
		{
			__LIB_10__::func_143(uParam0->f_174, 2);
		}
		__LIB_12__::func_997(uParam0, func_65(3), func_65(4), 3, 4, 0);
		bLocal_938 = true;
	}
}

bool func_715(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_715(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_19__::func_326(28);
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
			__LIB_18__::func_771(iParam0);
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
						func_715(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_715(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_715(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_715(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_715(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_715(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_715(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_19__::func_326(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_14__::func_161(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_14__::func_161(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_715(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_715(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_19__::func_500(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_623(iParam0);
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
				func_715(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_716()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	if (!bLocal_744)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_718[0 /*11*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_718[0 /*11*/], true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_718[0 /*11*/], WEAPON::GET_BEST_PED_WEAPON(Local_718[0 /*11*/], false, false), true, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if ((iLocal_22 == 2 || iLocal_22 == 4) || iLocal_22 == 3)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			}
			else
			{
				fVar1 = __LIB_0__::func_94(Local_718[0 /*11*/], Global_36, 1);
				if (fVar1 <= 8f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				}
				else if (fVar1 <= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 8f, 1f, 2f, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, (fVar1 / 2f), 1.5f, 2f, 0);
				}
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_SWAP_WEAPON(Local_718[0 /*11*/], 1, 0, 0, 0);
			TASK::TASK_PERFORM_SEQUENCE(Local_718[0 /*11*/], iVar0);
			TASK::TASK_LOOK_AT_ENTITY(Local_718[0 /*11*/], Global_35, -1, 12, 41, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_718[1 /*11*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_718[1 /*11*/], true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_718[1 /*11*/], WEAPON::GET_BEST_PED_WEAPON(Local_718[1 /*11*/], false, false), true, 0, false, false);
			vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_718[1 /*11*/], true, false) };
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, (vVar2.x + 1f), (vVar2.y + 2.5f), vVar2.z, Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_SWAP_WEAPON(Local_718[1 /*11*/], 1, 1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(Local_718[1 /*11*/], Global_35, -1, 12, 41, 0);
			TASK::TASK_PERFORM_SEQUENCE(Local_718[1 /*11*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_692))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_692, WEAPON::GET_BEST_PED_WEAPON(iLocal_692, false, false), true, 0, false, false);
			TASK::CLEAR_PED_TASKS(iLocal_692, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_692, iVar0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_692, Global_35, -1, 12, 41, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		bLocal_744 = true;
	}
}

bool func_718(var uParam0)
{
	if (__LIB_13__::func_158("RBT22_IG5"))
	{
		__LIB_6__::func_900("RBT22_IG5", 0, 0);
	}
	if (!bLocal_896)
	{
		if (__LIB_0__::func_272(Local_718[1 /*11*/], 1))
		{
			if (__LIB_6__::func_904())
			{
				__LIB_5__::func_20(0, 0);
			}
			if (__LIB_12__::func_876(uParam0, "RBT22_BAN3_WARN", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_718[1 /*11*/], iLocal_692, 3000, 0, 51, 0);
				iLocal_897 = 1;
				bLocal_896 = true;
			}
		}
		else
		{
			bLocal_896 = true;
			bLocal_898 = true;
		}
		return false;
	}
	else if (!bLocal_898)
	{
		if (!__LIB_6__::func_904())
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_692, 40f, 40f, 40f, false, true, 0) && __LIB_0__::func_272(Local_718[1 /*11*/], 1))
			{
				if (__LIB_12__::func_876(uParam0, "RBT22_RILOANSJO", 0))
				{
					bLocal_898 = true;
				}
			}
			else
			{
				bLocal_898 = true;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_719()
{
	if (!bLocal_745)
	{
		if (iLocal_897 != 0)
		{
			PED::_0x89F5E7ADECCCB49C(Local_718[0 /*11*/], "action");
			TASK::TASK_REACT(Local_718[0 /*11*/], Global_35, Global_36, "TaskCombat_React", 1f, 0, 4);
		}
		bLocal_745 = true;
	}
}

void func_720(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_2__::func_344(&(Local_718[0 /*11*/]));
		__LIB_2__::func_480(&(Local_789[0 /*35*/]), 0, 0, 1, 0);
	}
	__LIB_2__::func_344(&(Local_718[1 /*11*/]));
	__LIB_2__::func_480(&(Local_789[1 /*35*/]), 0, 0, 1, 0);
}

void func_721(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(Local_718[iVar0 /*11*/], 0))
		{
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(Local_718[iVar0 /*11*/], true, false);
				TASK::TASK_COMBAT_PED(Local_718[iVar0 /*11*/], Global_35, 0, 16);
			}
			else if (!__LIB_0__::func_163(Local_718[iVar0 /*11*/], 780511057))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_PAUSE(0, Local_718[iVar0 /*11*/].f_7);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_718[iVar0 /*11*/], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
			if (!MAP::DOES_BLIP_EXIST(Local_718[iVar0 /*11*/].f_1))
			{
				Local_718[iVar0 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_718[iVar0 /*11*/]);
			}
			MAP::_BLIP_SET_MODIFIER(Local_718[iVar0 /*11*/].f_1, -1034486097);
			func_1225(iVar0, 2);
		}
		iVar0++;
	}
}

void func_722()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (MAP::DOES_BLIP_EXIST(iLocal_693))
	{
		MAP::_BLIP_REMOVE_MODIFIER(iLocal_693, -1034486097);
		MAP::_BLIP_REMOVE_MODIFIER(iLocal_693, -662251075);
		MAP::REMOVE_BLIP(&iLocal_693);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(Local_864[iVar0 /*9*/], 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, Local_864[iVar0 /*9*/], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_710, 0, &vVar2))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar2, 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_710, 0, 17416, -1, 0, 1, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_692, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iLocal_692, Global_35, 1, 0, -1082130432 /* Float: -1f */);
			iLocal_712 = iVar0;
			func_305(2);
			return;
		}
		iVar0++;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_711, 0, &vVar2))
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar2, 2f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_711, 0, 8, -1, 0, 1, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar1);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_692, iVar1);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iLocal_692, Global_35, 1, 0, -1082130432 /* Float: -1f */);
	func_305(4);
}

bool func_725(var uParam0, bool bParam1)
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
				func_728(uParam0);
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

void func_726(var uParam0)
{
	if (!bLocal_939)
	{
		if (__LIB_12__::func_767(uParam0) < 4)
		{
			if ((iLocal_24 == 7 || iLocal_24 == 9) && func_1316())
			{
				__LIB_12__::func_997(uParam0, func_65(4), func_65(5), 4, 5, 0);
				bLocal_939 = true;
			}
		}
		else
		{
			bLocal_939 = true;
		}
	}
}

void func_727(var uParam0)
{
	if (!bLocal_940)
	{
		if (__LIB_12__::func_767(uParam0) < 5)
		{
			if (__LIB_1__::func_410(Global_36, __LIB_10__::func_45(Local_26.f_300), 20f, 1))
			{
				__LIB_12__::func_997(uParam0, func_65(5), func_65(6), 5, 6, 0);
				bLocal_940 = true;
			}
		}
		else
		{
			bLocal_940 = true;
		}
	}
}

void func_728(var uParam0)
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
							func_1322(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_1322(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
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

void func_752(var uParam0)
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
			func_336(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

void func_799()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1417();
	func_1418();
	func_1419();
	func_1420();
	func_1421();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_800(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_336(iParam0, 1, 1, -142743235, 1);
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
	__LIB_13__::func_96(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_13__::func_96(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1454(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_841(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			bVar11 = func_1470(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && func_1471(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
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

int func_932(var uParam0, int iParam1, int iParam2)
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
		return func_932(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1019(int iParam0)
{
	float fVar0;
	float fVar1;
	if (!PED::_0x5102307CE88798EB(Local_412[iParam0 /*11*/]))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_412[iParam0 /*11*/]);
	}
	PED::SET_PED_RESET_FLAG(Local_412[iParam0 /*11*/], 42, true);
	if (Local_412[iParam0 /*11*/] == Local_412[2 /*11*/])
	{
		fVar0 = 7f;
	}
	else
	{
		fVar0 = 12f;
	}
	fVar1 = __LIB_0__::func_665(Local_412[iParam0 /*11*/], Global_35, 1, 1);
	if (fVar1 > fVar0)
	{
		return false;
	}
	if (PED::_0x7F9B9791D4CB71F6(Local_412[iParam0 /*11*/], Global_35, true, 0) == 1)
	{
		return true;
	}
	return false;
}

bool func_1021(int iParam0)
{
	float fVar0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -5424.192f, -3647.715f, -25.14695f, -5423.271f, -3660.144f, -15.38046f, 39.5f, false, true, 0))
	{
		return false;
	}
	if (TASK::IS_PED_SPRINTING(Global_35) || (PED::IS_PED_ON_MOUNT(Global_35) && TASK::IS_PED_RUNNING(Global_35)))
	{
		fVar0 = 25f;
		fVar1 = __LIB_0__::func_665(Local_412[iParam0 /*11*/], Global_35, 1, 1);
		if (fVar1 < fVar0)
		{
			return true;
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 10f;
		fVar1 = __LIB_0__::func_665(Local_412[iParam0 /*11*/], Global_35, 1, 1);
		if (fVar1 < fVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_1022(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), joaat("WEAPON_THROWN_DYNAMITE"), fParam1, true))
		{
			return true;
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), joaat("WEAPON_THROWN_MOLOTOV"), fParam1, true))
		{
			return true;
		}
	}
	if (bParam4)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), joaat("WEAPON_THROWN_TOMAHAWK"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT"), fParam1, true))
		{
			return true;
		}
	}
	if (bParam5)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), joaat("WEAPON_THROWN_THROWING_KNIVES"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), joaat("WEAPON_THROWN_THROWING_KNIVES_JAVIER"), fParam1, true))
		{
			return true;
		}
	}
	return false;
}

bool func_1023()
{
	if ((iLocal_16 != 0 || bLocal_448) || bLocal_447)
	{
		return true;
	}
	return false;
}

void func_1024(var uParam0)
{
	int iVar0;
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_464, false))
	{
		iLocal_479 = func_1613();
	}
	else
	{
		bLocal_477 = true;
		bLocal_478 = true;
	}
	if (bLocal_477)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		if (__LIB_0__::func_272(Local_412[0 /*11*/], 0))
		{
			TASK::CLEAR_PED_TASKS(Local_412[0 /*11*/], true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_412[0 /*11*/], joaat("WEAPON_REPEATER_CARBINE"), false, 0, false, false);
			TASK::TASK_PERFORM_SEQUENCE(Local_412[0 /*11*/], iVar0);
		}
		if (__LIB_0__::func_272(Local_412[1 /*11*/], 0))
		{
			TASK::CLEAR_PED_TASKS(Local_412[1 /*11*/], true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_412[1 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			TASK::TASK_PERFORM_SEQUENCE(Local_412[1 /*11*/], iVar0);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (bLocal_478)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_464, false))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_464, func_1614(iLocal_479)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_464, func_1614(iLocal_479), true);
			}
		}
		else
		{
			func_1615(2, 1);
		}
	}
	func_682(uParam0);
}

bool func_1025(var uParam0)
{
	float fVar0;
	int iVar1;
	func_682(uParam0);
	if (bLocal_478 == 0)
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_464);
		if (((iLocal_479 == 0 || iLocal_479 == 1) && fVar0 > 18.6f) || ((iLocal_479 == 2 || iLocal_479 == 3) && fVar0 > 40.5f))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_464, func_1614(iLocal_479), true);
			__LIB_2__::func_919(iLocal_465[0], 1, 0);
			bLocal_478 = true;
		}
		return false;
	}
	else
	{
		iVar1 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(Local_412[0 /*11*/]) && !__LIB_0__::func_163(Local_412[0 /*11*/], 780511057))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_412[0 /*11*/], iLocal_464) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_464, Local_412[0 /*11*/].f_10))
			{
				__LIB_1__::func_766(Local_412[0 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_412[0 /*11*/], Global_35, 0, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_412[1 /*11*/]) && !__LIB_0__::func_163(Local_412[1 /*11*/], 780511057))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_412[1 /*11*/], iLocal_464) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_464, Local_412[1 /*11*/].f_10))
			{
				__LIB_2__::func_919(iLocal_465[0], 1, 0);
				__LIB_1__::func_766(Local_412[1 /*11*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_412[1 /*11*/], Global_35, 0, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_412[2 /*11*/]) && !__LIB_0__::func_163(Local_412[2 /*11*/], 474215631))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_412[2 /*11*/], iLocal_464) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_464, Local_412[2 /*11*/].f_10))
			{
				__LIB_0__::func_325(&(Local_412[2 /*11*/].f_1));
				TASK::TASK_COWER(Local_412[2 /*11*/], -1, 0, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
		return iVar1;
	}
	return false;
}

void func_1100(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1665();
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

void func_1102(var uParam0)
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
			func_1672(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1672(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1103(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1672(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1171()
{
	__LIB_2__::func_344(&(Local_412[1 /*11*/]));
	__LIB_2__::func_480(&Local_501, 0, 0, 1, 0);
}

int func_1172(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_696(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

void func_1173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			iVar1 = 150;
		}
		else
		{
			iVar1 = 350;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_412[iVar0 /*11*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_412[iVar0 /*11*/], true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_STAND_STILL(0, iVar1);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(Local_412[iVar0 /*11*/], iVar2);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		iVar0++;
	}
}

bool func_1177()
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_412[2 /*11*/], Global_35, 1, 1))
	{
		return true;
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_412[2 /*11*/], true, false), 5f, true))
	{
		return true;
	}
	return false;
}

void func_1178(var uParam0)
{
	if (!__LIB_0__::func_75(&uLocal_600))
	{
		if (!__LIB_6__::func_904())
		{
			__LIB_2__::func_462(&uLocal_600, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f), 1);
		}
	}
	else if (__LIB_0__::func_265(&uLocal_600) > 10f && ENTITY::IS_ENTITY_ON_SCREEN(Local_412[2 /*11*/]))
	{
		if (__LIB_12__::func_876(uParam0, "RBT22_PLEAD", 0))
		{
			__LIB_0__::func_37(&uLocal_600);
		}
	}
}

bool func_1214(int iParam0)
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if ((Global_1935630.f_44 == joaat("WEAPON_LASSO") && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar0, iParam0, true)) && __LIB_2__::func_215(iParam0, Global_35, 0, 30f, 0))
	{
		return true;
	}
	if ((__LIB_2__::func_401(iParam0, 1, 1, 1, 0, 1) && __LIB_0__::func_48(iParam0, Global_35, 30f, 1)) && __LIB_2__::func_215(iParam0, Global_35, 0, 30f, 0))
	{
		return true;
	}
	return false;
}

bool func_1215()
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, iLocal_692, 1, 1);
	if (fVar0 < 20f)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 0)
		{
			return true;
		}
	}
	if (fVar0 < 30f)
	{
		return true;
	}
	return false;
}

void func_1216(var uParam0)
{
	if (__LIB_5__::func_463())
	{
		__LIB_0__::func_37(&uLocal_958);
		return;
	}
	if (PED::_IS_PED_LASSOED(iLocal_692) || __LIB_3__::func_458(iLocal_692) == 1)
	{
		__LIB_0__::func_37(&uLocal_958);
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_958))
	{
		__LIB_1__::func_283(&uLocal_958, 0);
	}
	else if (__LIB_0__::func_265(&uLocal_958) > 6f && __LIB_0__::func_266(iLocal_692, Global_36, 25f, 1, 1))
	{
		if (__LIB_12__::func_876(uParam0, "RBT22_FLEE", 0))
		{
			__LIB_0__::func_37(&uLocal_958);
		}
	}
}

bool func_1217()
{
	if (!bLocal_700)
	{
		if (PED::IS_PED_ON_MOUNT(iLocal_692))
		{
			bLocal_700 = true;
		}
		else if (__LIB_0__::func_163(iLocal_692, 242628503))
		{
			if (!__LIB_0__::func_75(&uLocal_701))
			{
				__LIB_1__::func_283(&uLocal_701, 0);
			}
			else if (__LIB_0__::func_265(&uLocal_701) > 15f || ENTITY::IS_ENTITY_DEAD(Local_864[iLocal_712 /*9*/]))
			{
				bLocal_700 = true;
				__LIB_0__::func_37(&uLocal_701);
				return true;
			}
		}
	}
	return false;
}

void func_1218()
{
	TASK::CLEAR_PED_TASKS(iLocal_692, true, false);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_692, Global_35, 3, 1, -1082130432 /* Float: -1f */, -1, 0);
}

void func_1219()
{
	int iVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_713))
	{
		iLocal_713 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_453, 0f, 0f, 0f, 20f, 20f, 20f, "RBT22_Targetbarndef");
		PED::_0xFC3DB99C8144CD81(iLocal_692, iLocal_713, 0, false, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::CLEAR_PED_TASKS(iLocal_692, true, false);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_692, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_1220()
{
	float fVar0;
	if (PED::IS_PED_ON_MOUNT(iLocal_692))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iLocal_692, 1, 1);
		if (fVar0 > 60f)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, sLocal_710))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_692, 1.5f);
			}
		}
		else if (fVar0 > 45f)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, sLocal_710))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_692, 2f);
			}
		}
		else if (fVar0 > 25f)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, sLocal_710))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_692, 1.75f);
			}
		}
		else if (fVar0 > 10f)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, sLocal_710))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 2.5f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_692, 2.5f);
			}
		}
		else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, sLocal_710))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 3f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_692, 3f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_692, 1.5f);
		}
	}
}

void func_1223(var uParam0)
{
	if (__LIB_0__::func_266(iLocal_692, __LIB_10__::func_45(115), 15f, 0, 1))
	{
		if (!bLocal_955)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "RBT22_RIDEARRJ", 0))
				{
					__LIB_13__::func_92(&Local_26);
					iLocal_25 = 5;
					bLocal_955 = true;
				}
			}
		}
		return;
	}
	if (!bLocal_956)
	{
		if (__LIB_0__::func_266(iLocal_692, vLocal_453, 15f, 1, 1))
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "RBT22_RIDEBARNJ", 0))
				{
					__LIB_1__::func_148(&uLocal_967);
					bLocal_956 = true;
				}
			}
			return;
		}
	}
	switch (iLocal_25)
	{
		case 0:
			if (__LIB_0__::func_266(iLocal_692, Global_36, 15f, 1, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_967))
				{
					__LIB_1__::func_283(&uLocal_967, 0);
				}
				else if (__LIB_0__::func_265(&uLocal_967) > 8f)
				{
					iLocal_25 = 1;
				}
			}
			break;
		case 1:
			if ((!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(115), 30f, 1) && __LIB_10__::func_166(iLocal_692, 1)) && __LIB_0__::func_266(iLocal_692, Global_36, 10f, 1, 1))
			{
				if (__LIB_13__::func_123(uParam0, sLocal_961[iLocal_966], 0, 0))
				{
					iLocal_25 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_13__::func_113(&Local_26, 1056964608 /* Float: 0.5f */, func_1784(), 1))
			{
				if (iLocal_966 < 4 && __LIB_13__::func_120(sLocal_961[iLocal_966], 0))
				{
					__LIB_13__::func_121(0, sLocal_961[iLocal_966], 0);
				}
				iLocal_957++;
				fLocal_970 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 15f);
				__LIB_1__::func_148(&uLocal_967);
				iLocal_25 = 3;
			}
			else if (!__LIB_6__::func_904() && !__LIB_13__::func_76())
			{
				__LIB_13__::func_92(&Local_26);
				fLocal_970 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 7f);
				__LIB_1__::func_148(&uLocal_967);
				iLocal_957++;
				if (__LIB_13__::func_123(uParam0, "RBT22_REACT", 0, 0))
				{
					iLocal_25 = 4;
				}
			}
			break;
		case 4:
			if (!__LIB_6__::func_904())
			{
				__LIB_1__::func_148(&uLocal_967);
				fLocal_970 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 7f);
				iLocal_25 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_967) > fLocal_970)
			{
				iLocal_966++;
				if (iLocal_966 < 4)
				{
					iLocal_25 = 1;
				}
				else
				{
					__LIB_0__::func_37(&uLocal_967);
					iLocal_25 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1224(var uParam0)
{
	if (iLocal_976 < 4)
	{
		if (!__LIB_0__::func_75(&uLocal_977))
		{
			__LIB_1__::func_283(&uLocal_977, 0);
			fLocal_980 = MISC::GET_RANDOM_FLOAT_IN_RANGE(9f, 15f);
		}
		else if (__LIB_0__::func_264(&uLocal_977) > fLocal_980 && __LIB_0__::func_266(iLocal_692, Global_36, 15f, 1, 1))
		{
			if ((PED::_IS_PED_LASSOED(iLocal_692) || __LIB_3__::func_458(iLocal_692) == 1) || PED::GET_PED_CONFIG_FLAG(iLocal_692, 11, true) == 1)
			{
				__LIB_0__::func_37(&uLocal_977);
				return;
			}
			if (__LIB_13__::func_123(uParam0, sLocal_971[iLocal_976], 0, 0))
			{
				iLocal_976++;
				if (iLocal_976 >= 4)
				{
					__LIB_0__::func_37(&uLocal_977);
				}
				else
				{
					fLocal_980 = MISC::GET_RANDOM_FLOAT_IN_RANGE(9f, 15f);
					__LIB_1__::func_148(&uLocal_977);
				}
			}
		}
	}
}

void func_1225(int iParam0, int iParam1)
{
	if (Local_718[iParam0 /*11*/].f_8 != iParam1)
	{
		Local_718[iParam0 /*11*/].f_8 = iParam1;
	}
}

void func_1226(var uParam0)
{
	if (bLocal_742)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_718[1 /*11*/]))
		{
			if (!bLocal_899)
			{
				bLocal_899 = __LIB_12__::func_876(uParam0, "RBT22_BAN3_COM2", 0);
			}
			if (!bLocal_900)
			{
				if (Local_718[1 /*11*/].f_8 == 2)
				{
					if (__LIB_0__::func_75(&uLocal_903))
					{
						if (__LIB_0__::func_265(&uLocal_903) > 5f)
						{
							bLocal_900 = __LIB_12__::func_876(uParam0, "RBT22_BAN3_COM4", 0);
						}
					}
				}
			}
			if (!bLocal_902)
			{
				if (PED::IS_PED_ON_MOUNT(iLocal_692))
				{
					bLocal_902 = __LIB_12__::func_876(uParam0, "RBT22_BAN3_COM3", 0);
				}
			}
			if (!bLocal_901)
			{
				if (iLocal_24 == 7)
				{
					bLocal_901 = __LIB_12__::func_876(uParam0, "RBT22_BAN3_CAUG", 0);
				}
			}
		}
	}
}

int func_1229(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	if (!__LIB_11__::func_608() && !__LIB_13__::func_107())
	{
		__LIB_0__::func_37(uParam0);
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		if (!PED::_0x5102307CE88798EB(iVar3))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar3);
		}
		else if (ENTITY::IS_ENTITY_OCCLUDED(iVar3))
		{
			__LIB_0__::func_37(uParam0);
			return 0;
		}
		else if (PED::_0x164CECC59E70DF86(iVar3, 75f))
		{
			if (__LIB_2__::func_0(iVar3, 0.45f, 0.55f, 0.45f, 0.55f))
			{
				if (!__LIB_0__::func_75(uParam0))
				{
					__LIB_1__::func_283(uParam0, 0);
				}
				else if (__LIB_0__::func_265(uParam0) > fParam2)
				{
					return 1;
				}
			}
			else
			{
				__LIB_0__::func_37(uParam0);
			}
		}
		else
		{
			__LIB_0__::func_37(uParam0);
		}
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
		iVar4 = __LIB_13__::func_175(vVar0, iParam3, 1097859072 /* Float: 15f */);
		if (iVar4 == 6)
		{
			if (fParam2 > 0f)
			{
				if (!__LIB_0__::func_75(uParam0))
				{
					__LIB_1__::func_283(uParam0, 0);
				}
				else if (__LIB_0__::func_265(uParam0) > fParam2)
				{
					return 1;
				}
			}
		}
		__LIB_0__::func_37(uParam0);
	}
	return 0;
}

void func_1230(bool bParam0)
{
	iLocal_894 = func_1791();
	if (iLocal_894 != -1)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_893, func_1792(iLocal_894), true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_893, "Bool", true, false);
	}
	else
	{
		if (bParam0)
		{
			func_722();
		}
		else
		{
			func_1231(iLocal_692, 100, 150, 0);
		}
		func_1231(Local_718[0 /*11*/], 100, 150, bParam0);
		func_1231(Local_718[1 /*11*/], 100, 50, bParam0);
	}
}

void func_1231(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam3)
	{
		TASK::TASK_PAUSE(0, iParam2);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
	}
	else
	{
		TASK::TASK_PAUSE(0, iParam1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

int func_1232(var uParam0)
{
	if (bLocal_459)
	{
		return 1;
	}
	if (__LIB_12__::func_876(uParam0, "RBT22_CHALLENGE", 0))
	{
		bLocal_459 = true;
		return 1;
	}
	return 0;
}

bool func_1316()
{
	if ((Local_718[0 /*11*/].f_8 == 4 || Local_718[0 /*11*/].f_8 == 5) && (Local_718[1 /*11*/].f_8 == 4 || Local_718[1 /*11*/].f_8 == 5))
	{
		return true;
	}
	return false;
}

void func_1322(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_1672(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1417()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1938(0);
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
	func_1938(1);
}

void func_1418()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_715(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1419()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1941(0);
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
	func_1941(1);
}

void func_1420()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1941(0);
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
	func_1941(1);
}

void func_1421()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_715(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_715(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_336(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_336(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1454(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1970(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_715(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1470(int iParam0, int iParam1)
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
		if (func_1980(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1471(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_1981(iParam0);
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

int func_1613()
{
	float fVar0;
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_464, "intro_idle", 1))
	{
		bLocal_478 = true;
		bLocal_477 = true;
		if (func_2072())
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_464, "cant_kill_kid", 1))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_464);
		if (fVar0 < 18.6f)
		{
			bLocal_477 = true;
			bLocal_478 = true;
			if (func_2072())
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (fVar0 < 34.9f)
		{
			bLocal_478 = true;
			bLocal_477 = true;
			if (func_2072())
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (fVar0 < 40.5f)
		{
			bLocal_478 = false;
			bLocal_477 = true;
			if (func_2072())
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else if (fVar0 < 42.2f)
		{
			bLocal_478 = true;
			bLocal_477 = true;
			if (func_2072())
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		bLocal_478 = true;
		bLocal_477 = true;
		if (func_2072())
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_464, "idle", 1))
	{
		bLocal_478 = true;
		bLocal_477 = true;
		if (func_2072())
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

char* func_1614(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_breakout_a_fwd";
		case 1:
			return "pbl_breakout_a_bk";
		case 2:
			return "pbl_breakout_b_fwd";
		case 3:
			return "pbl_breakout_b_bk";
		default:
			break;
	}
	return "";
}

void func_1615(int iParam0, bool bParam1)
{
	int iVar0;
	if (Local_412[iParam0 /*11*/].f_8 < 2 && __LIB_0__::func_272(Local_412[iParam0 /*11*/], 0))
	{
		if (iParam0 != 2)
		{
			if (bParam1)
			{
				TASK::CLEAR_PED_TASKS(Local_412[iParam0 /*11*/], true, false);
				TASK::TASK_COMBAT_PED(Local_412[iParam0 /*11*/], Global_35, 0, 0);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PAUSE(0, Local_412[iParam0 /*11*/].f_7);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_412[iParam0 /*11*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (!MAP::DOES_BLIP_EXIST(Local_412[iParam0 /*11*/].f_1))
			{
				Local_412[iParam0 /*11*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_412[iParam0 /*11*/]);
			}
			MAP::_BLIP_REMOVE_MODIFIER(Local_412[iParam0 /*11*/].f_1, -662251075);
			MAP::_BLIP_SET_MODIFIER(Local_412[iParam0 /*11*/].f_1, -1034486097);
			func_688(iParam0, 2);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_539, 1.5f, 20000, 0.25f, 0, fLocal_542);
			TASK::TASK_COWER(0, -1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_412[iParam0 /*11*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			__LIB_0__::func_325(&(Local_412[iParam0 /*11*/].f_1));
			func_688(iParam0, 2);
		}
	}
}

void func_1665()
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
	iVar0 = func_2111(6291456, 0);
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

void func_1672(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1672(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1672(iVar2, vParam1, fParam4, iParam5, iParam6);
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

char* func_1784()
{
	switch (iLocal_957)
	{
		case 0:
			return "RBT22_HIT1";
		case 1:
			return "RBT22_HIT2";
		case 2:
			return "RBT22_HIT3";
		case 3:
			return "RBT22_SHUSH";
	}
	return "RBT22_SHUSH";
}

int func_1791()
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_893))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_893, false))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_893, "idle_b", 1))
			{
				iVar0 = __LIB_3__::func_112(iLocal_692, Global_35, 1060437492 /* Float: 0.707f */);
				if (iVar0 == 0)
				{
					return 1;
				}
				else if (iVar0 == 1)
				{
					return 0;
				}
				else if (iVar0 == 3)
				{
					return 2;
				}
				else if (iVar0 == 2)
				{
					return 3;
				}
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
	return -1;
}

char* func_1792(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_react_bk";
		case 1:
			return "pbl_react_fwd";
		case 2:
			return "pbl_react_lt";
		case 3:
			return "pbl_react_rt";
		default:
			break;
	}
	return "";
}

void func_1938(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_715(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2264(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_800(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_336(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2268(Var0);
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

void func_1941(bool bParam0)
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
		func_715(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_715(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_336(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_336(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_336(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1970(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1970(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1970(iVar63, -915411861, 1, 0, 0));
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

int func_1980(int iParam0)
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
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return -1673339528;
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
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
int func_1981(int iParam0)
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

bool func_2072()
{
	if (Global_36 < -5423.9f)
	{
		return true;
	}
	return false;
}

int func_2111(int iParam0, int iParam1)
{
	var uVar0;
	return func_2320(&uVar0, iParam0, iParam1);
}

void func_2264(int iParam0)
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
	func_336(iParam0, 1, 1, -142743235, 1);
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
		func_336(uVar18[iVar36], 1, 1, -142743235, 1);
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
	__LIB_13__::func_96(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
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
					__LIB_13__::func_96(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
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
					__LIB_13__::func_96(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
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
					__LIB_17__::func_732(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	__LIB_13__::func_96(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_13__::func_96(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_2268(struct<6> Param0)
{
	if (!func_2401(Param0.f_4, 1))
	{
	}
	if (!func_2401(Param0, 1))
	{
	}
	if (!func_2401(Param0.f_2, 1))
	{
	}
	if (!func_2401(Param0.f_5, 1))
	{
	}
	if (!func_2401(Param0.f_3, 1))
	{
	}
	if (!func_2401(Param0.f_1, 1))
	{
	}
}

int func_2320(var uParam0, int iParam1, int iParam2)
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
		return func_2320(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2401(int iParam0, int iParam1)
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
				if (func_2401(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2401(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2401(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2401(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

