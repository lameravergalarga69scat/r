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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	float fLocal_17 = 0f;
	vector3 vLocal_18 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	struct<18> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_47 = 0;
	struct<19> Local_48[2];
	struct<19> Local_87[2];
	struct<19> Local_126[11];
	struct<19> Local_336[5];
	struct<19> Local_432[4];
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = -1;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 1097859072;
	var uLocal_527 = 1000;
	var uLocal_528 = 1067450368;
	var uLocal_529 = 5000;
	var uLocal_530 = 42;
	var uLocal_531 = 1103626240;
	var uLocal_532 = 1077936128;
	var uLocal_533 = 1106247680;
	var uLocal_534 = 1103101952;
	var uLocal_535 = 1097859072;
	var uLocal_536 = 1103626240;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	float fLocal_541 = 0f;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	int iLocal_565[2] = { 0, 0 };
	int iLocal_568[62] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_631[23] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	struct<5> Local_665[20];
	struct<5> Local_766[13];
	int iLocal_832[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	var uLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	var uLocal_870 = 0;
	int iLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	int iLocal_878 = 0;
	bool bLocal_879 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_14 = { -2098.257f, 660.971f, 120.1385f };
	fLocal_17 = 121f;
	vLocal_18 = { -2096.721f, 655.8862f, 119.8362f };
	fLocal_21 = 45f;
	iLocal_23 = 1;
	iLocal_24 = -1;
	iLocal_27 = 16;
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
		if (__LIB_11__::func_406(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_11__::func_406(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
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
		__LIB_19__::func_275(uParam0, __LIB_0__::func_58(uParam0));
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
			else if (__LIB_11__::func_406(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_11__::func_406(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
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
		__LIB_13__::func_510(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	bool bVar0;
	func_185();
	__LIB_0__::func_803(311708813);
	__LIB_0__::func_706(11);
	__LIB_12__::func_659(uParam0, 22);
	__LIB_12__::func_656(uParam0, 16f);
	__LIB_12__::func_657(uParam0, 16f);
	__LIB_12__::func_781(uParam0, 2228255, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 2228255, 0, 0, -1, -1, 0);
	__LIB_12__::func_841(&(uParam0->f_206));
	__LIB_0__::func_88(&(uParam0->f_206), 16);
	__LIB_4__::func_228(&uLocal_509);
	__LIB_6__::func_905(&uLocal_509);
	__LIB_9__::func_261(&uLocal_509);
	__LIB_2__::func_595(&uLocal_509, 30f);
	__LIB_1__::func_393(&uLocal_509, 0);
	__LIB_9__::func_714(&uLocal_509, 1);
	__LIB_1__::func_400(&uLocal_509, 1);
	PED::SET_PED_CONFIG_FLAG(Local_29, 263, true);
	PED::SET_PED_CONFIG_FLAG(Local_29, 315, true);
	GRAPHICS::_0x2A1625858887D4E6(0.1f);
	GRAPHICS::_0x8DCCC98DC0DBF9E4(0.1f);
	if (__LIB_12__::func_871(uParam0) || __LIB_12__::func_738(uParam0))
	{
		__LIB_12__::func_25(16, 1, 0);
	}
	bVar0 = false;
	if (__LIB_12__::func_738(uParam0))
	{
		bVar0 = true;
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 4096))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_1__::func_683(&iLocal_860, 8);
	}
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("G_M_M_UNIDUSTER_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("G_M_M_UNIDUSTER_02"), 7);
	__LIB_12__::func_867(uParam0, joaat("U_M_M_FATDUSTER_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_SAWBUCKTABLE01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_WINDSORCHAIR02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CANEMPTY09X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_KNIFE04X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR13X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR02X"), 7);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SNIPERRIFLE_CARCANO"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_THROWN_MOLOTOV"), -1, 0);
	__LIB_12__::func_867(uParam0, WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_THROWN_THROWING_KNIVES")), 7);
	__LIB_12__::func_867(uParam0, WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")), 7);
	TASK::REQUEST_WAYPOINT_RECORDING("rdst62_sadie_walk");
	TASK::REQUEST_WAYPOINT_RECORDING("rdst62_cabin_stairs");
	TASK::REQUEST_WAYPOINT_RECORDING("rdst62_sadie_walk_cabin");
	TASK::REQUEST_WAYPOINT_RECORDING("rdst62_gate_enemies_walk");
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
			Var1 = { -2111.469f, 659.3508f, 119.8126f };
			Var1.f_3 = 137.0682f;
			break;
		case 1:
			Var1 = { -2170.434f, 668.0164f, 118.9042f };
			Var1.f_3 = 23.3287f;
			break;
		case 2:
			Var1 = { -2216.332f, 729.87f, 122.0216f };
			Var1.f_3 = 206.9802f;
			break;
		case 3:
		case 4:
			Var1 = { -2184.331f, 716.3356f, 121.2996f };
			Var1.f_3 = 146.8528f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_216(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	float fVar0;
	struct<8> Var1;
	if (__LIB_0__::func_27(iLocal_864, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_29))
		{
			if (func_218(Local_29) || (__LIB_1__::func_205(Local_29, iLocal_631[7], 1, 0) && FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_631[7])))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_DEAD_SADIE", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_864, 2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_538))
		{
			if (func_218(iLocal_538))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_MOUNT_DEAD_SADIE", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_864, 8))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_29))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_29))
			{
				fVar0 = __LIB_1__::func_348(Local_29, Global_35);
				if (fVar0 > ((300f / 3f) - 25f))
				{
					if (!__LIB_2__::func_618(&uLocal_562) || func_221(&uLocal_562, 20f))
					{
						if (!func_222(uParam0, &iLocal_28))
						{
							Var1 = { __LIB_6__::func_907(11) };
							__LIB_12__::func_883(uParam0, __LIB_1__::func_569(Var1), 1, 7500, 1, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_5__::func_107(&uLocal_562);
						}
					}
				}
				if (fVar0 > (300f / 3f))
				{
					StringCopy(&(uParam0->f_2578), "SADIE_ABANDON", 24);
					return true;
				}
			}
		}
	}
	return false;
}

void func_68(var uParam0)
{
	func_226(uParam0);
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
	if (func_229(uParam0->f_174))
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
	if (func_238(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_243(uParam0);
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
			func_258(uParam0);
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
	return iLocal_24;
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
	func_298(uParam0);
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
	if (__LIB_0__::func_27(iLocal_860, 8))
	{
		func_300(uParam0, 1, 0);
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
		__LIB_19__::func_275(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_301(uParam0))
		{
			if (__LIB_13__::func_371(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_860, 8))
	{
		return 5;
	}
	return 7;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	switch (iVar0)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
			if (func_304(&Local_29, 11, -2122.625f, 662.442f, 119.7483f, 60.9154f, 1, -2051275045))
			{
				if (func_305(uParam0, 1, 1, 1, 1, 0, 1))
				{
					if (__LIB_0__::func_272(Local_29, 256) && __LIB_0__::func_272(Global_35, 256))
					{
						func_300(uParam0, 1, 0);
						func_307();
						func_308(uParam0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_29, -2122.625f, 662.442f, 119.7483f, 60.9154f, false, false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -2116.606f, 659.6566f, 119.7393f, 68.8717f, false, false, true);
						__LIB_4__::func_7(Local_29, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						func_310();
						iLocal_25 = 0;
						iLocal_23 = 1;
						__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
						if (!__LIB_12__::func_936(uParam0))
						{
							func_312(&Local_29, 0);
							__LIB_1__::func_683(&iLocal_860, 2);
							func_313(&Local_29, 6, 1, 0);
							__LIB_13__::func_105(1, 1);
							return 7;
						}
						else
						{
							return 5;
						}
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
			}
			else
			{
				return 2;
			}
			return 2;
		case 1:
			if (!__LIB_2__::func_618(&uLocal_544))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_304(&Local_29, 11, -2122.625f, 662.442f, 119.7483f, 60.9154f, 1, -2051275045))
				{
					if (func_305(uParam0, 1, 1, 1, 1, 0, 1))
					{
						if (__LIB_0__::func_272(Local_29, 256) && __LIB_0__::func_272(Global_35, 256))
						{
							func_315(&iLocal_869, Local_29);
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_869) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_869, true, false))
							{
								func_307();
								func_308(uParam0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_29, -2149.477f, 677.2163f, 119.8477f, 100.6937f, false, false, true);
								__LIB_4__::func_7(Local_29, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								func_310();
								__LIB_1__::func_683(&iLocal_860, 8192);
								ANIMSCENE::START_ANIM_SCENE(iLocal_869);
								func_313(&Local_29, 8, 1, 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -2142.447f, 672.1948f, 119.8581f, 68.2914f, false, false, true);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_48[0 /*19*/], -2177.864f, 676.1115f, 118.9903f, 256f, true, false, true);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_48[1 /*19*/], -2178.76f, 674.5257f, 118.9539f, 270f, true, false, true);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_48[0 /*19*/], false, true);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_48[1 /*19*/], false, true);
								__LIB_5__::func_107(&uLocal_544);
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
			}
			else if (__LIB_11__::func_406(&uLocal_544) >= 100)
			{
				iLocal_25 = 1;
				iLocal_23 = 1;
				func_316(&iLocal_24, 1);
				__LIB_1__::func_683(&iLocal_860, 2);
				__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			return 2;
		case 2:
			if (!__LIB_2__::func_618(&uLocal_544))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_304(&Local_29, 11, -2176.157f, 720.4539f, 125.2033f, 113.645f, 1, -2051275045))
				{
					if (func_317())
					{
						if (__LIB_0__::func_272(Local_29, 256) && __LIB_0__::func_272(Global_35, 256))
						{
							func_307();
							func_308(uParam0);
							__LIB_4__::func_7(Local_29, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_310();
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_29, Local_766[11 /*5*/], (Local_766[1 /*5*/].f_3 + 90f), false, false, true);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_29, Local_766[11 /*5*/], -1, 0, 0f, 1, 0, Local_766[11 /*5*/].f_4, 0, 0, 0);
							func_313(&Local_29, 4, 0, 0);
							func_318(1);
							__LIB_5__::func_107(&uLocal_544);
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
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_11__::func_406(&uLocal_544) >= 100)
			{
				iLocal_25 = 2;
				iLocal_23 = 2;
				func_316(&iLocal_24, 5);
				__LIB_1__::func_683(&iLocal_860, 65536);
				__LIB_1__::func_683(&iLocal_860, 131072);
				__LIB_1__::func_683(&iLocal_860, 8388608);
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_13__::func_105(0, 1);
				return 7;
			}
			return 2;
		case 3:
			if (!__LIB_2__::func_618(&uLocal_544))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_304(&Local_29, 11, -2176.157f, 720.4539f, 125.2033f, 113.645f, 1, -2051275045))
				{
					if (func_317())
					{
						if (func_319(&iLocal_538, 11, 1, 1, vLocal_14.x, vLocal_14.y, vLocal_14.z, fLocal_17))
						{
							if (func_320(&(Local_432[3 /*19*/]), Local_432[3 /*19*/].f_4, Local_432[3 /*19*/].f_13, Local_432[3 /*19*/].f_16, joaat("REL_GANG_ODRISCOLL"), 1, 1, 0, -2, 1, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
							{
								if (func_321())
								{
									if (((__LIB_0__::func_272(Local_432[3 /*19*/], 256) && __LIB_0__::func_272(Local_29, 256)) && __LIB_0__::func_272(iLocal_538, 256)) && __LIB_0__::func_272(Global_35, 256))
									{
										func_307();
										func_308(uParam0);
										func_318(1);
										func_322();
										PED::KNOCK_OFF_PED_PROP(Local_29, false, true, false, false);
										__LIB_5__::func_107(&uLocal_544);
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
			}
			else if (__LIB_11__::func_406(&uLocal_544) >= 100)
			{
				func_300(uParam0, 2, 0);
				iLocal_23 = 0;
				__LIB_1__::func_683(&iLocal_860, 8388608);
				func_316(&iLocal_24, 7);
				__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_13__::func_105(1, 0);
				return 5;
			}
			return 2;
		case 4:
			if (!__LIB_2__::func_618(&uLocal_544))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_317())
				{
					if (__LIB_0__::func_272(Global_35, 256))
					{
						func_307();
						func_308(uParam0);
						func_318(1);
						func_322();
						__LIB_5__::func_107(&uLocal_544);
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
			}
			else if (__LIB_11__::func_406(&uLocal_544) >= 100)
			{
				iLocal_23 = 0;
				__LIB_13__::func_105(1, 1);
				return 8;
			}
			return 2;
		default:
			break;
	}
	func_323();
	__LIB_9__::func_599(64);
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
		if (!__LIB_13__::func_508(uParam0))
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
		__LIB_19__::func_275(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_331(uParam0))
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
	return func_337(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_22)
	{
		case 1:
			__LIB_1__::func_683(&iLocal_860, 2);
			__LIB_1__::func_683(&iLocal_860, 4096);
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			return 7;
		case 2:
			__LIB_0__::func_745(11);
			__LIB_0__::func_904(11, 0);
			__LIB_8__::func_863(&iLocal_657, 0, 1, 1);
			__LIB_8__::func_863(&iLocal_658, 0, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Local_432[3 /*19*/]))
			{
				__LIB_1__::func_864(Local_432[3 /*19*/], 1, 0);
			}
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_508(uParam0))
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
	bLocal_879 = false;
	func_346();
	func_347(uParam0);
	func_348(&uLocal_867);
	switch (iLocal_25)
	{
		case 0:
			if (func_349(uParam0, &iLocal_28))
			{
				func_350();
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (func_351(uParam0, &iLocal_28))
			{
				func_350();
				iLocal_25 = 2;
			}
			break;
		case 2:
			if (func_222(uParam0, &iLocal_28))
			{
				return 5;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	func_373(16, 0, 0);
	__LIB_12__::func_25(16, 0, 0);
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
		func_388(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_644(uParam0) == 11)
	{
		if (__LIB_1__::func_22(11) && __LIB_0__::func_272(Local_29, 0))
		{
			if (!__LIB_0__::func_163(Local_29, 518218985))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_29, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			bVar0 = false;
			if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
			{
				bVar0 = true;
			}
			__LIB_11__::func_616(11, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, bVar0, 0, 0, 0);
		}
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!__LIB_0__::func_27(iLocal_860, 256))
		{
			if (__LIB_0__::func_27(iLocal_860, 128))
			{
				if (!PED::IS_PED_INJURED(Local_29) && !PED::IS_PED_INJURED(iLocal_538))
				{
					if (!__LIB_1__::func_205(Local_29, iLocal_631[3], 1, 0) && !__LIB_0__::func_266(Local_29, VOLUME::_GET_VOLUME_COORDS(iLocal_631[3]), 125f, 1, 1))
					{
						PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Local_29, 10, "ALL");
						__LIB_11__::func_616(11, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						__LIB_1__::func_463(iLocal_538, 11, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_860, 256);
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_860, 64))
		{
			if (!__LIB_1__::func_205(Global_35, iLocal_631[3], 1, 0) && !__LIB_0__::func_266(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_631[3]), 165f, 1, 1))
			{
				__LIB_1__::func_683(&iLocal_860, 64);
			}
		}
		if (__LIB_0__::func_27(iLocal_860, 64))
		{
			if (PATHFIND::_0x5AC0944C156E5F44("nav_dusters62"))
			{
				PATHFIND::_0x527B97C203BB8606("nav_dusters62");
			}
			__LIB_11__::func_616(11, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			__LIB_1__::func_463(iLocal_538, 11, 1, 0, 0);
			return true;
		}
		return false;
	}
	return true;
}

void func_159(var uParam0)
{
	bool bVar0;
	bool bVar1;
	func_421(uParam0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdst62_ilo_sadie");
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_13__::func_513(60f);
		bVar0 = true;
	}
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		__LIB_12__::func_25(16, 1, 0);
		if (PATHFIND::_0x5AC0944C156E5F44("nav_dusters62"))
		{
			PATHFIND::_0x527B97C203BB8606("nav_dusters62");
		}
	}
	if (!PED::IS_PED_INJURED(Local_29))
	{
		if (__LIB_0__::func_866(11, 0))
		{
			__LIB_1__::func_640(11);
		}
		if (!__LIB_0__::func_27(iLocal_860, 128))
		{
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Local_29, 10, "ALL");
		}
	}
	PED::SET_PED_CONFIG_FLAG(Local_29, 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_29, 263, false);
	PED::SET_PED_CONFIG_FLAG(Local_29, 301, false);
	if (!__LIB_0__::func_27(iLocal_860, 128))
	{
		bVar1 = false;
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
		{
			bVar1 = true;
		}
		__LIB_11__::func_616(11, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, bVar1, 0, 0, 0);
		__LIB_1__::func_463(iLocal_538, 11, 1, 0, 0);
	}
	__LIB_0__::func_745(11);
	__LIB_2__::func_145(iLocal_539, 0);
	func_426(&Local_48, 1, 1);
	func_426(&Local_87, 1, 1);
	func_426(&Local_336, 1, 1);
	func_426(&Local_126, 1, 1);
	func_426(&Local_432, 1, 1);
	__LIB_8__::func_863(&iLocal_656, 1, 1, bVar0);
	__LIB_8__::func_863(&iLocal_657, 1, 1, bVar0);
	__LIB_8__::func_863(&iLocal_658, 1, 1, bVar0);
	func_427();
	func_428();
	func_429();
	WEAPON::_0xC3896D03E2852236(joaat("WEAPON_THROWN_MOLOTOV"));
	WEAPON::_0xC3896D03E2852236(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
	WEAPON::_0xC3896D03E2852236(joaat("WEAPON_THROWN_THROWING_KNIVES"));
	AUDIO::_0x531A78D6BF27014B("rdst62_sounds");
	AUDIO::CANCEL_MUSIC_EVENT("ODRISC6.2_STAIRS");
	AUDIO::CANCEL_MUSIC_EVENT("ODRISC6.2_OS3");
	TASK::REMOVE_WAYPOINT_RECORDING("rdst62_sadie_walk");
	TASK::REMOVE_WAYPOINT_RECORDING("rdst62_cabin_stairs");
	TASK::REMOVE_WAYPOINT_RECORDING("rdst62_sadie_walk_cabin");
	GRAPHICS::_0x2A1625858887D4E6(1f);
	GRAPHICS::_0x8DCCC98DC0DBF9E4(1f);
	__LIB_0__::func_8(&Global_1935630, 262144);
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
		case 1:
			__LIB_0__::func_3(60, 0, 1);
			break;
	}
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
}

void func_185()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[0]))
	{
		iLocal_631[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2111.41f, 661.3301f, 121.1178f, 0f, 0f, 62.25f, 10f, 5.1f, 3f, "RDST62_VOLUME_INTRO_BOX_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[1]))
	{
		iLocal_631[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2109.209f, 660.1849f, 121.1241f, 0f, 0f, 62.25f, 5f, 5f, 1.5f, "RDST62_VOLUME_INTRO_CYLINDER_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[21]))
	{
		iLocal_631[21] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2109.209f, 660.1849f, 121.1241f, 0f, 0f, 62.25f, 20f, 20f, 2.5f, "RDST62_VOLUME_INTRO_FRIENDLY");
		VOLUME::_0xFD010A2154B40676(iLocal_631[21], joaat("REL_GANG_DUTCHS"));
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[2]))
	{
		iLocal_631[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2197.673f, 713.0527f, 120.102f, 0f, 0f, 31f, 40f, 45f, 4f, "RDST62_VOLUME_HIDEOUT_RANCH_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[3]))
	{
		iLocal_631[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2177.284f, 683.1416f, 129.7603f, 0f, 0f, 50f, 72f, 98f, 16f, "RDST62_VOLUME_HIDEOUT_FAIL_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[4]))
	{
		iLocal_631[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2176.94f, 717.8f, 124.83f, 0f, 0f, 24.8f, 11f, 13f, 7f, "RDST62_VOLUME_CABIN_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[5]))
	{
		iLocal_631[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST62_VOLUME_CABIN_STAIRCASE_VOLUME");
		VOLUME::_0x39816F6F94F385AD(iLocal_631[5], -2171.115f, 716.3472f, 123.6821f, 0f, 0f, 24.8f, 1.6f, 5f, 5f);
		VOLUME::_0x39816F6F94F385AD(iLocal_631[5], -2172.335f, 713.9207f, 125.3844f, 0f, 0f, 24.8f, 5.85f, 1.6f, 4f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[8]))
	{
		iLocal_631[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2173.698f, 713.266f, 126.7791f, 0f, 0f, 24f, 4.5f, 2.5f, 5f, "RDST62_VOLUME_BLOCK_STAIRCASE");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[6]))
	{
		iLocal_631[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2183.716f, 718.7952f, 123.6573f, 0f, 0f, 24.8f, 23f, 23f, 3f, "RDST62_VOLUME_CABIN_APPROACH_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[7]))
	{
		iLocal_631[7] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2177.313f, 719.6047f, 126.1802f, 0f, 0f, 25f, 8f, 9f, 2f, "RDST62_VOLUME_CABIN_UPSTAIRS_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[9]))
	{
		iLocal_631[9] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RDST62_VOLUME_BARN_VOLUME");
		VOLUME::_0x39816F6F94F385AD(iLocal_631[9], -2217.8f, 733.68f, 123.3859f, 0f, 0f, 29.9f, 21f, 18.15f, 3f);
		VOLUME::_0x39816F6F94F385AD(iLocal_631[9], -2217.857f, 733.7109f, 127.6932f, 0f, 0f, 29f, 10f, 18f, 6f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[10]))
	{
		iLocal_631[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2219.314f, 735.8791f, 127.6122f, 0f, 0f, 28.99999f, 10f, 13f, 2f, "RDST62_VOLUME_BARN_UPPER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[11]))
	{
		iLocal_631[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2161.332f, 698.9027f, 122.6899f, 0f, 0f, 22.29999f, 12f, 9f, 7f, "RDST62_VOLUME_SHED_EXPLOSION_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[12]))
	{
		iLocal_631[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2133.084f, 665.7289f, 121.25f, 0f, 0f, 14f, 13f, 32f, 4f, "RDST62_VOLUME_SADIE_WALK_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[13]))
	{
		iLocal_631[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2185.208f, 714.8499f, 122.5408f, 0f, 0f, 25f, 7f, 7f, 3f, "RDST62_VOLUME_RDST6_RSC3_CORPSE_CLEAR_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[14]))
	{
		iLocal_631[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2187.64f, 680.174f, 120.9822f, 0f, 0f, 12.00001f, 6f, 16f, 5f, "RDST62_VOLUME_SADIE_DEFENSIVE_VOLUME1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[15]))
	{
		iLocal_631[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2196.427f, 696.5735f, 120.9822f, 0f, 0f, 31f, 11f, 10f, 5f, "RDST62_VOLUME_SADIE_DEFENSIVE_VOLUME2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[16]))
	{
		iLocal_631[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2211.449f, 703.642f, 120.9822f, 0f, 0f, 31f, 17f, 10f, 5f, "RDST62_VOLUME_SADIE_DEFENSIVE_VOLUME3");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[17]))
	{
		iLocal_631[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2225.515f, 721.5055f, 122.6751f, 0f, 0f, 31f, 3f, 5f, 2f, "RDST62_VOLUME_SADIE_DEFENSIVE_VOLUME4");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[18]))
	{
		iLocal_631[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2192.187f, 699.1695f, 121.9473f, 0f, 0f, 31f, 25f, 18f, 5f, "RDST62_VOLUME_RANCHER_DEFENSIVE_VOLUME1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[19]))
	{
		iLocal_631[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2194.671f, 714.799f, 121.8002f, 0f, 0f, 31f, 10f, 10f, 5f, "RDST62_VOLUME_RANCHER_DEFENSIVE_VOLUME2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631[20]))
	{
		iLocal_631[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2206.682f, 719.7517f, 120.9822f, 0f, 0f, 31f, 22f, 12f, 5f, "RDST62_VOLUME_RANCHER_DEFENSIVE_VOLUME3");
	}
}

int func_216(vector3 vParam0, var uParam3)
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
		iVar0 = func_494(0, 0);
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

bool func_218(int iParam0)
{
	if ((((ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0)) || FIRE::IS_ENTITY_ON_FIRE(iParam0)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), 0)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_THROWN_MOLOTOV"), 0))
	{
		return true;
	}
	return false;
}

bool func_221(var uParam0, float fParam1)
{
	if (!__LIB_2__::func_618(uParam0))
	{
		return false;
	}
	if (__LIB_5__::func_51(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_222(var uParam0, int iParam1)
{
	func_500(uParam0, &Local_29, &iLocal_866, &iLocal_869, &uLocal_870);
	if (!__LIB_0__::func_27(iLocal_863, 4096))
	{
		func_305(uParam0, 0, 0, 0, 0, 1, 0);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_538))
	{
		if (func_319(&iLocal_538, 11, 1, 1, vLocal_14.x, vLocal_14.y, vLocal_14.z, fLocal_17))
		{
			if (!PED::IS_PED_INJURED(iLocal_538))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_538, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_538, true);
			}
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_631[6], 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
		if (__LIB_0__::func_1(Global_1935630, 262144))
		{
			__LIB_0__::func_8(&Global_1935630, 262144);
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_631[5], 1, 0) && func_501(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	}
	if (!__LIB_0__::func_27(iLocal_860, 16384) && __LIB_1__::func_205(Global_35, iLocal_631[5], 1, 0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ODRISC6.2_STAIRS");
		__LIB_1__::func_683(&iLocal_860, 16384);
	}
	if (__LIB_1__::func_205(Global_35, iLocal_631[8], 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PICKUP_CARRIABLE"), false);
	}
	func_502(uParam0);
	switch (*iParam1)
	{
		case 0:
			if (func_321())
			{
				*iParam1++;
			}
			break;
		case 1:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_432[3 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_538)) && ENTITY::DOES_ENTITY_EXIST(Local_29))
			{
				if (!PED::IS_PED_INJURED(Local_29))
				{
					func_300(uParam0, 2, 1);
					*iParam1++;
				}
			}
			break;
		case 2:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_29, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_29) >= 22)
			{
				__LIB_5__::func_602(Local_29, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
				__LIB_5__::func_602(Local_29, joaat("WEAPON_REPEATER_CARBINE_SADIE"));
				WEAPON::SET_CURRENT_PED_WEAPON(Local_29, joaat("WEAPON_MELEE_KNIFE_SADIE"), true, 0, false, false);
				*iParam1++;
			}
			break;
		case 3:
			__LIB_18__::func_607(&(uParam0->f_753), uParam0->f_2581, 0, 0);
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_859);
				func_316(&iLocal_24, 7);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_657, true, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_656, true, false);
				*iParam1++;
			}
			break;
		case 4:
			if (__LIB_18__::func_607(&(uParam0->f_753), uParam0->f_2581, 0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_226(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_23)
	{
		case 0:
			break;
		case 1:
			if (func_317())
			{
				iVar1 = 1;
			}
			if (func_305(uParam0, 1, 1, 1, 1, 0, 0) && iVar1 == 1)
			{
				iLocal_23 = 2;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_48)
			{
				func_506(uParam0, &(Local_48[iVar0 /*19*/]), iVar0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_87)
			{
				func_507(uParam0, &(Local_87[iVar0 /*19*/]), iVar0, &iLocal_868);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_126)
			{
				func_508(uParam0, &(Local_126[iVar0 /*19*/]), iVar0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_336)
			{
				func_509(uParam0, &(Local_336[iVar0 /*19*/]), iVar0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_432)
			{
				func_510(uParam0, &(Local_432[iVar0 /*19*/]), iVar0);
				iVar0++;
			}
			if (!__LIB_0__::func_27(iLocal_863, 4))
			{
				if (func_511(&Local_48))
				{
					__LIB_1__::func_683(&iLocal_863, 4);
				}
			}
			if (!__LIB_0__::func_27(iLocal_863, 32))
			{
				if (func_511(&Local_87))
				{
					__LIB_1__::func_683(&iLocal_863, 32);
				}
			}
			if (!__LIB_0__::func_27(iLocal_863, 2048))
			{
				if (func_511(&Local_336))
				{
					__LIB_1__::func_683(&iLocal_863, 2048);
				}
			}
			if (!__LIB_0__::func_27(iLocal_863, 256))
			{
				if (func_511(&Local_126))
				{
					__LIB_1__::func_683(&iLocal_863, 256);
				}
			}
			if (!__LIB_0__::func_27(iLocal_861, 2048))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0))
				{
					if (func_501(Global_35))
					{
						func_512();
						__LIB_1__::func_683(&iLocal_861, 2048);
					}
				}
			}
			break;
	}
}

bool func_229(int iParam0)
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

int func_238(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_29))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_866))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_866, false))
			{
				if (!ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "S_RSC2_IG1_QUICK_EXIT01", 1) && !__LIB_14__::func_106(&Local_29, &(uParam0->f_178), &iVar0, 1, 0, 0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_866, "PL_RSC2_IG1_QUICK_EXIT01", true);
				}
			}
			else if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_866, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_243(var uParam0)
{
	func_421(uParam0);
}

void func_258(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_282(var uParam0)
{
	if (!func_304(&Local_29, 11, -2109.737f, 660.7101f, 119.9074f, 35.6823f, 1, -2051275045))
	{
		return 0;
	}
	if (__LIB_12__::func_871(uParam0))
	{
		return 1;
	}
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_878))
	{
		iLocal_878 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REPEATER_HENRY"), -2110.5f, 658.31f, 119.8f, 90f, -2f, 27f, 0, 60, 2, true, 0, 0, 0f, 0);
	}
	if (__LIB_0__::func_27(iLocal_860, 8) || __LIB_12__::func_936(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_29) && !ENTITY::IS_ENTITY_DEAD(Local_29))
		{
			__LIB_13__::func_525(&iLocal_539, 1, vLocal_18.x, vLocal_18.y, vLocal_18.z, fLocal_21, 1);
			func_319(&iLocal_538, 11, 1, 1, vLocal_14.x, vLocal_14.y, vLocal_14.z, fLocal_17);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_538) && !ENTITY::IS_ENTITY_DEAD(iLocal_538))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_539) && !ENTITY::IS_ENTITY_DEAD(iLocal_539))
				{
					if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_29))
					{
						if (func_589())
						{
							func_308(uParam0);
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_29, Global_35, 1, 1))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_29);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_29, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_29, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_29, Global_1347702[uParam0->f_174 /*49*/].f_24, 0f, true, false, true);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_538, true, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_538, vLocal_14, fLocal_17, true, false, true);
							ENTITY::_0x9587913B9E772D29(iLocal_538, 0);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 0f, true, false, true);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_539, true, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_539, vLocal_18, fLocal_21, true, false, true);
							ENTITY::_0x9587913B9E772D29(iLocal_539, 0);
							__LIB_4__::func_7(Local_29, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_310();
							__LIB_4__::func_7(Local_29, joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_591(Global_35, __LIB_0__::func_664(), 0, 1, 32);
							CLOCK::SET_CLOCK_TIME(9, 30, 0);
							__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 1103626240 /* Float: 25f */);
							return 1;
						}
					}
				}
			}
		}
		return 0;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_866))
	{
		iLocal_866 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst6@ig@rsc2_ig1", 0, "pl_rsc2_ig1_idle01", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_866);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_655))
	{
		iLocal_655 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CANEMPTY09X"), -2109.55f, 660.2764f, 119.8891f, true, true, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_29) && !ENTITY::IS_ENTITY_DEAD(Local_29))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_866) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_866, true, false))
		{
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_29))
			{
				func_308(uParam0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_29, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_29, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_29, -2109.737f, 660.7101f, 119.9074f, 35.6823f, true, false, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_29, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_29, 24593);
				__LIB_13__::func_260(uParam0, Local_29);
				__LIB_4__::func_7(Local_29, joaat("WEAPON_THROWN_THROWING_KNIVES"), -1, 0, 6, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				iLocal_663 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_29, 6);
				iLocal_664 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, -2108.66f, 661.58f, 119.9f, true, 1f);
				func_310();
				WEAPON::SET_PED_INFINITE_AMMO(Local_29, true, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "Arthur", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "CS_MrsAdler", Local_29, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "w_melee_knife05", iLocal_663, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "p_canempty09x", iLocal_655, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "w_shotgun_doublebarrel01", iLocal_664, 1);
				ANIMSCENE::START_ANIM_SCENE(iLocal_866);
				PED::SET_PED_CONFIG_FLAG(Local_29, 315, true);
				__LIB_1__::func_683(&iLocal_860, 2);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_866, "pl_rsc2_ig1_hey");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_866, "pl_rsc2_ig1_quick_exit01");
				__LIB_12__::func_777(&(uParam0->f_178));
				__LIB_1__::func_402(&(uParam0->f_178), 0);
				__LIB_12__::func_841(&(uParam0->f_206));
				__LIB_0__::func_88(&(uParam0->f_206), 16);
				iLocal_631[22] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2150.174f, 676.5481f, 120.5224f, 0f, 0f, 6f, 23f, 9f, 3f, "RDST62_VOLUME_INTRO_IG_CLEAR");
				__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 1103626240 /* Float: 25f */);
				return 1;
			}
		}
	}
	return 0;
}

void func_298(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	AUDIO::_0xD9130842D7226045("rdst62_sounds", 0);
	__LIB_0__::func_172(iLocal_631[21]);
	func_613();
	func_614();
	func_615();
	iLocal_859 = AUDIO::GET_SOUND_ID();
	func_616();
	func_617();
	func_618();
	if (!PED::IS_PED_INJURED(Local_29))
	{
		__LIB_0__::func_904(11, 1);
	}
	__LIB_0__::func_7(&Global_1935630, 262144);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_631[22]))
	{
		MISC::_0x2FCD528A397E5C88(iLocal_631[22], 1065016);
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar1 = ENTITY::_0x886171A12F400B89(iLocal_631[22], iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
			iVar4 = iVar3;
			if (__LIB_1__::func_356(iVar4))
			{
				if (__LIB_0__::func_272(iVar4, 0))
				{
					TASK::TASK_SMART_FLEE_COORD(iVar4, -2150.067f, 706.1765f, 120.5951f, 80f, -1, false, 1f);
				}
			}
			iVar2++;
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
}

void func_300(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar12;
	char cVar13[64];
	char cVar21[64];
	iLocal_22 = iParam1;
	switch (iLocal_22)
	{
		case 1:
			StringCopy(&(uParam0->f_2575), "RDST6_RSC1B", 24);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_29, "MRSADLER", 0, 0, 0);
			__LIB_13__::func_522(&(uParam0->f_206), Local_29, 0, "w_shotgun_doublebarrel01", 0, 0);
			__LIB_12__::func_841(&(uParam0->f_206));
			__LIB_0__::func_88(&(uParam0->f_206), 16);
			__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
			__LIB_12__::func_982(uParam0, 120692);
			__LIB_13__::func_16(uParam0, 120803);
			__LIB_12__::func_981(uParam0, 120935);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "RDST6_RSC3", 24);
			__LIB_12__::func_944(uParam0, "RDST6_RSC3", 0);
			__LIB_12__::func_841(&(uParam0->f_206));
			__LIB_0__::func_88(&(uParam0->f_206), 16);
			if (__LIB_12__::func_738(uParam0))
			{
				__LIB_0__::func_88(&(uParam0->f_206), 524288);
			}
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_538, "HORSE_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_29, "MRSADLER", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_432[3 /*19*/], "U_M_M_FATDUSTER_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_656, "P_CHAIR13X", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_657, "P_WINDSORCHAIR02X", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_658, "P_SAWBUCKTABLE01X", 0, 0, 0);
			__LIB_0__::func_143(&(uParam0->f_206.f_13[__LIB_12__::func_716(&(uParam0->f_206), Local_29) /*12*/]), 16);
			__LIB_0__::func_143(&(uParam0->f_206.f_13[__LIB_12__::func_716(&(uParam0->f_206), Local_432[3 /*19*/]) /*12*/]), 16);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, "ARTHUR", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_29, "MRSADLER", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_432[3 /*19*/], "G_M_M_UNIDUSTER_01", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_656, "P_CHAIR13X", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_657, "P_WINDSORCHAIR02X", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_658, "P_SAWBUCKTABLE01X", 0);
			iVar12 = 0;
			while (iVar12 < 11)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_753.f_1418[iVar12 /*10*/].f_8, "P_CHAIR13X", &vVar0, false, 0, 2))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_656, vVar0, true, false, true, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_656, vVar0, 2, true);
				}
			else
			{
				}
				else
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_753.f_1418[iVar12 /*10*/].f_8, "P_WINDSORCHAIR02X", &vVar0, false, 0, 2))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_657, vVar0, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_657, vVar0, 2, true);
					}
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_753.f_1418[iVar12 /*10*/].f_8, "P_SAWBUCKTABLE01X", &vVar0, false, 0, 2))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_658, vVar0, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_658, vVar0, 2, true);
					}
					else
					{
						iVar12++;
					}
					if (bParam2)
					{
						if (__LIB_0__::func_871())
						{
							StringCopy(&cVar13, "1-HighHonor-NormalStart", 64);
							StringCopy(&cVar21, "1-HighHonor-MultiStart", 64);
						}
						else
						{
							StringCopy(&cVar13, "2-LowHonor-NormalStart", 64);
							StringCopy(&cVar21, "2-LowHonor-MultiStart", 64);
						}
						__LIB_12__::func_676(&(uParam0->f_206), &cVar13);
						__LIB_13__::func_402(&(uParam0->f_206), cVar21);
					}
					else
					{
						if (__LIB_0__::func_871())
						{
							StringCopy(&cVar13, "1-HighHonor-MultiStart", 64);
						}
						else
						{
							StringCopy(&cVar13, "2-LowHonor-MultiStart", 64);
						}
						__LIB_12__::func_676(&(uParam0->f_206), &cVar13);
						__LIB_13__::func_402(&(uParam0->f_206), cVar13);
					}
					__LIB_12__::func_779(uParam0, -2178.906f, 719.3654f, 125.1993f);
					__LIB_12__::func_982(uParam0, 120692);
					__LIB_13__::func_16(uParam0, 120803);
					__LIB_12__::func_981(uParam0, 120935);
					__LIB_0__::func_7(&(uParam0->f_172), 16);
				}
			}
			default:
				break;
	}
}

bool func_301(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_860, 8))
	{
		__LIB_9__::func_599(256);
		return true;
	}
	if ((((!PED::IS_PED_INJURED(Global_35) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(Local_29)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_866)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_866, false))
	{
		if (__LIB_17__::func_595(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &uLocal_875, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 20f, 15f, 1f, 1, 1, 1, 1, 0))
		{
			if (!__LIB_0__::func_27(iLocal_860, 1))
			{
				__LIB_5__::func_511(2);
				__LIB_1__::func_683(&iLocal_860, 1);
			}
		}
		if (__LIB_1__::func_205(Global_35, iLocal_631[0], 1, 0) && __LIB_1__::func_205(Global_35, iLocal_631[1], 1, 0))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_29, 5000, 2048, 51, 0);
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_29, "RC_DUSTERS_62_INTRO", ENTITY::GET_ENTITY_COORDS(Local_29, true, false), 0, "rdst62_ilo_sadie");
			func_313(&Local_29, 1, 1, 0);
			__LIB_9__::func_599(256);
			PED::_0xC2266AA617668AD3(Local_29, 0.1f);
			return true;
		}
	}
	return false;
}

bool func_304(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = func_644(iParam1, 1, 1, fParam2, fParam3, fParam4, fParam5, bParam6, 1, 0, 0, 0, 0, iParam7, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
			}
			if (bParam6 == 1 && !__LIB_0__::func_86(fParam2, fParam3, fParam4))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam2, fParam3, fParam4, fParam5, true, false, true);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 58, true);
			PED::SET_COMBAT_FLOAT(*iParam0, 12, 2f);
			WEAPON::SET_PED_INFINITE_AMMO(*iParam0, true, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 24593);
			switch (iParam1)
			{
				case 11:
					__LIB_5__::func_602(*iParam0, joaat("WEAPON_REPEATER_CARBINE_SADIE"));
					break;
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam1 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_863, 1))
		{
			if (!__LIB_0__::func_27(iLocal_863, 2))
			{
				__LIB_1__::func_683(&iLocal_863, 2);
			}
			else if (func_645(&Local_48, joaat("REL_GANG_ODRISCOLL"), 1, 1, 1, 12, iParam6))
			{
				if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_48[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_48[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_48[1 /*19*/], 85, 0);
					__LIB_13__::func_514(Local_48[1 /*19*/], 2);
				}
				if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_48[0 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false))
					{
						__LIB_4__::func_7(Local_48[0 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_48[0 /*19*/], 85, 0);
					__LIB_13__::func_514(Local_48[0 /*19*/], 2);
				}
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						__LIB_1__::func_681(&iLocal_860, 32768);
						break;
					case 1:
						__LIB_1__::func_683(&iLocal_860, 32768);
						break;
				}
				if (!__LIB_0__::func_27(iLocal_860, 32768))
				{
					if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]))
					{
						__LIB_12__::func_875(uParam0, Local_48[0 /*19*/], "ODR_PED8", 0);
						AUDIO::SET_AMBIENT_VOICE_NAME(Local_48[0 /*19*/], "0360_G_M_M_UNIDUSTER_03_IRISH_01");
					}
					if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]))
					{
						__LIB_12__::func_875(uParam0, Local_48[1 /*19*/], "ODR_PED3", 0);
						AUDIO::SET_AMBIENT_VOICE_NAME(Local_48[1 /*19*/], "0362_G_M_M_UNIDUSTER_03_WHITE_02");
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]))
					{
						__LIB_12__::func_875(uParam0, Local_48[0 /*19*/], "ODR_PED1", 0);
						AUDIO::SET_AMBIENT_VOICE_NAME(Local_48[0 /*19*/], "0356_G_M_M_UNIDUSTER_01_WHITE_02");
					}
					if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]))
					{
						__LIB_12__::func_875(uParam0, Local_48[1 /*19*/], "ODR_PED2", 0);
						AUDIO::SET_AMBIENT_VOICE_NAME(Local_48[1 /*19*/], "0358_G_M_M_UNIDUSTER_02_WHITE_02");
					}
				}
				__LIB_1__::func_683(&iLocal_863, 1);
			}
		}
	}
	if (iParam2 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_863, 8))
		{
			if (!__LIB_0__::func_27(iLocal_863, 16))
			{
				if (iParam1 == 0 || (iParam1 == 1 && __LIB_0__::func_27(iLocal_863, 1)))
				{
					__LIB_1__::func_683(&iLocal_863, 16);
				}
			}
			else if (func_645(&Local_87, joaat("REL_GANG_ODRISCOLL"), 1, 1, 1, 0, iParam6))
			{
				if (!PED::IS_PED_INJURED(Local_87[0 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_87[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_87[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
				}
				if (!PED::IS_PED_INJURED(Local_87[1 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_87[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_87[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
				}
				func_313(&(Local_87[0 /*19*/]), 9, 0, 0);
				func_313(&(Local_87[1 /*19*/]), 9, 0, 0);
				__LIB_1__::func_683(&iLocal_863, 8);
			}
		}
	}
	if (iParam3 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_863, 64))
		{
			if (!__LIB_0__::func_27(iLocal_863, 128))
			{
				if (iParam2 == 0 || (iParam2 == 1 && __LIB_0__::func_27(iLocal_863, 8)))
				{
					__LIB_1__::func_683(&iLocal_863, 128);
				}
			}
			else if (func_645(&Local_126, joaat("REL_GANG_ODRISCOLL"), 1, 1, 1, 0, iParam6))
			{
				if (!PED::IS_PED_INJURED(Local_126[0 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[0 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false))
					{
						__LIB_4__::func_7(Local_126[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[0 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[0 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[1 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[1 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false))
					{
						__LIB_4__::func_7(Local_126[1 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[1 /*19*/], 85, 0);
					__LIB_13__::func_514(Local_126[1 /*19*/], 1);
				}
				if (!PED::IS_PED_INJURED(Local_126[2 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[2 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[2 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[2 /*19*/], 85, 0);
					__LIB_13__::func_514(Local_126[2 /*19*/], 1);
				}
				if (!PED::IS_PED_INJURED(Local_126[3 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[3 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[3 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[3 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[4 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[4 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[4 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false))
					{
						__LIB_4__::func_7(Local_126[4 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[4 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[4 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[5 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[5 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[5 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[5 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[5 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[5 /*19*/], 85, 0);
					__LIB_13__::func_514(Local_126[5 /*19*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[6 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[6 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[6 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[6 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[6 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[6 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[7 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[7 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[7 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[7 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 2, 9, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[7 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[7 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[8 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[8 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[8 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[8 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 2, 9, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[8 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[8 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[9 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[9 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[9 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[9 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 2, 9, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[9 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[9 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_126[10 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_126[10 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_126[10 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_126[10 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 2, 9, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_126[10 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_126[10 /*19*/], 85, 0);
				}
				__LIB_1__::func_683(&iLocal_863, 64);
			}
		}
	}
	if (iParam4 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_863, 512))
		{
			if (!__LIB_0__::func_27(iLocal_863, 1024))
			{
				if (iParam3 == 0 || (iParam3 == 1 && __LIB_0__::func_27(iLocal_863, 64)))
				{
					__LIB_1__::func_683(&iLocal_863, 1024);
				}
			}
			else if (func_645(&Local_336, joaat("REL_GANG_ODRISCOLL"), 1, 1, 1, 0, iParam6))
			{
				if (!PED::IS_PED_INJURED(Local_336[0 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_336[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_336[0 /*19*/], joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_336[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_336[0 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_336[1 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_336[1 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_336[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_336[1 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_336[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_336[1 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_336[2 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_336[2 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_336[2 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_336[2 /*19*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_336[2 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_336[2 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_336[3 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_336[3 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_336[3 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_336[3 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_336[4 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_336[4 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_336[4 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_336[4 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_336[1 /*19*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_336[1 /*19*/], "0356_G_M_M_UNIDUSTER_01_WHITE_02");
				}
				if (!PED::IS_PED_INJURED(Local_336[2 /*19*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_336[2 /*19*/], "0358_G_M_M_UNIDUSTER_02_WHITE_02");
				}
				if (!PED::IS_PED_INJURED(Local_336[3 /*19*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_336[3 /*19*/], "0362_G_M_M_UNIDUSTER_03_WHITE_02");
				}
				if (!PED::IS_PED_INJURED(Local_336[4 /*19*/]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_336[4 /*19*/], "0360_G_M_M_UNIDUSTER_03_IRISH_01");
				}
				__LIB_1__::func_683(&iLocal_863, 512);
			}
		}
	}
	if (iParam5 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_863, 4096))
		{
			if (!__LIB_0__::func_27(iLocal_863, 8192))
			{
				if (iParam4 == 0 || (iParam4 == 1 && __LIB_0__::func_27(iLocal_863, 512)))
				{
					__LIB_1__::func_683(&iLocal_863, 8192);
				}
			}
			else if (func_645(&Local_432, joaat("REL_GANG_ODRISCOLL"), 1, 1, 1, 0, iParam6))
			{
				if (!PED::IS_PED_INJURED(Local_432[0 /*19*/]))
				{
					__LIB_0__::func_915(joaat("WEAPON_REPEATER_HENRY"));
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_432[0 /*19*/], joaat("WEAPON_REPEATER_HENRY"), 0, false) || !WEAPON::HAS_PED_GOT_WEAPON(Local_432[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_432[0 /*19*/], joaat("WEAPON_REPEATER_HENRY"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_4__::func_7(Local_432[0 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_432[0 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_432[1 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_432[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_432[1 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_432[1 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_432[2 /*19*/]))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_432[2 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
					{
						__LIB_4__::func_7(Local_432[2 /*19*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						return false;
					}
					ENTITY::_SET_ENTITY_HEALTH(Local_432[2 /*19*/], 85, 0);
				}
				if (!PED::IS_PED_INJURED(Local_432[3 /*19*/]))
				{
					__LIB_5__::func_437(Local_432[3 /*19*/], "DISCOVERABLE_NAME_ODRISCOLL", 1);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_432[3 /*19*/], true);
				}
				__LIB_1__::func_683(&iLocal_863, 4096);
			}
		}
	}
	return (((((iParam1 == 0 || (iParam1 == 1 && __LIB_0__::func_27(iLocal_863, 1))) && (iParam2 == 0 || (iParam2 == 1 && __LIB_0__::func_27(iLocal_863, 8)))) && (iParam3 == 0 || (iParam3 == 1 && __LIB_0__::func_27(iLocal_863, 64)))) && (iParam4 == 0 || (iParam4 == 1 && __LIB_0__::func_27(iLocal_863, 512)))) && (iParam5 == 0 || (iParam5 == 1 && __LIB_0__::func_27(iLocal_863, 4096))));
}

void func_307()
{
	float fVar0;
	vector3 vVar1;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_631[3]))
	{
		fVar0 = 100f;
		vVar1 = { VOLUME::_GET_VOLUME_COORDS(iLocal_631[3]) };
		FIRE::STOP_FIRE_IN_RANGE(vVar1, fVar0);
		MISC::_0x2FCD528A397E5C88(iLocal_631[3], 2442122);
	}
}

void func_308(var uParam0)
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	if (!PED::IS_PED_INJURED(Local_29))
	{
		__LIB_12__::func_875(uParam0, Local_29, "SADIE_ADLER", 1);
	}
}

void func_310()
{
	if (WEAPON::_HAS_PED_GOT_WEAPON_COMPONENT(Local_29, joaat("COMPONENT_REPEATER_CLOTH_STRAP01"), joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
	{
		WEAPON::_REMOVE_WEAPON_COMPONENT_FROM_PED(Local_29, joaat("COMPONENT_REPEATER_CLOTH_STRAP01"), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
	}
	if (WEAPON::_HAS_PED_GOT_WEAPON_COMPONENT(Local_29, joaat("COMPONENT_LEFTSHOULDER_STRAP01"), joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
	{
		WEAPON::_REMOVE_WEAPON_COMPONENT_FROM_PED(Local_29, joaat("COMPONENT_LEFTSHOULDER_STRAP01"), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
	}
	if (WEAPON::_HAS_PED_GOT_WEAPON_COMPONENT(Local_29, joaat("COMPONENT_REPEATER_STRAP01"), joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
	{
		WEAPON::_REMOVE_WEAPON_COMPONENT_FROM_PED(Local_29, joaat("COMPONENT_REPEATER_STRAP01"), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
	}
}

void func_312(int iParam0, bool bParam1)
{
	struct<15> Var0;
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 24593);
		Var0.f_2 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1082130432;
		Var0.f_12 = -1082130432;
		Var0.f_13 = 1;
		Var0.f_14 = -1082130432;
		Var0 = "rdst62_sadie_walk";
		Var0.f_10 = 0.1f;
		Var0.f_1 = 0;
		Var0.f_3 = 71303180;
		Var0.f_13 = 0;
		Var0.f_12 = 1f;
		Var0.f_14 = -1f;
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam0, &Var0);
		PED::FORCE_PED_MOTION_STATE(*iParam0, joaat("MOTIONSTATE_WALK"), bParam1, 0, false);
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), *iParam0, -1082130432 /* Float: -1f */);
		PLAYER::_0xBA5CA1FEB5DE0DF6(PLAYER::PLAYER_ID(), "rdst62_sadie_walk", 1073741824 /* Float: 2f */, 1089470464 /* Float: 7.5f */, 1097859072 /* Float: 15f */, 1101004800 /* Float: 20f */);
		__LIB_1__::func_731(&uLocal_843);
		__LIB_1__::func_683(&(iParam0->f_10), 262144);
	}
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_6 = iParam2;
	iParam0->f_3 = iParam1;
	if (iParam3 != -1)
	{
		iParam0->f_9 = iParam3;
	}
}

void func_315(int iParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst6@ig@rsc2_ig4_throwmolotov", 0, "pl_ig4_walkandgrabmolotov01", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "MrsAdler", iParam1, 0);
		ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
	}
}

void func_316(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
			break;
		case 3:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
			__LIB_1__::func_683(&iLocal_861, 8);
			break;
		case 4:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
			__LIB_1__::func_683(&iLocal_861, 8);
			__LIB_1__::func_683(&iLocal_861, 16);
			break;
		case 5:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
			__LIB_1__::func_683(&iLocal_861, 8);
			__LIB_1__::func_683(&iLocal_861, 16);
			__LIB_1__::func_683(&iLocal_861, 32);
			break;
		case 6:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
			__LIB_1__::func_683(&iLocal_861, 8);
			__LIB_1__::func_683(&iLocal_861, 16);
			__LIB_1__::func_683(&iLocal_861, 32);
			__LIB_1__::func_683(&iLocal_861, 64);
			break;
		case 7:
			__LIB_1__::func_683(&iLocal_861, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
			__LIB_1__::func_683(&iLocal_861, 8);
			__LIB_1__::func_683(&iLocal_861, 16);
			__LIB_1__::func_683(&iLocal_861, 32);
			__LIB_1__::func_683(&iLocal_861, 64);
			__LIB_1__::func_683(&iLocal_861, 128);
			break;
	}
}

bool func_317()
{
	STREAMING::_REQUEST_IMAP(1354870005);
	if (PATHFIND::_0x495CFAB2924237C7("nav_dusters62"))
	{
		if (!PATHFIND::_0x5AC0944C156E5F44("nav_dusters62"))
		{
			PATHFIND::_0x7C334FF4D9215912("nav_dusters62");
		}
	}
	if (((func_652(&uLocal_659, joaat("P_LANTERN05X"), -2215.137f, 736.7103f, 123.2054f, 0f, 0f, 210.413f, 0, 0, -1) && func_652(&uLocal_660, joaat("P_LANTERN05X"), -2223.261f, 736.3617f, 123.3436f, 0f, 0f, 204.413f, 0, 0, -1)) && func_652(&iLocal_661, joaat("P_CHAIR02X"), -2162.371f, 695.5798f, 120.0167f, 0f, 0f, -104.16f, 0, 0, -1)) && func_652(&iLocal_662, joaat("P_CHAIR02X"), -2163.203f, 695.0607f, 119.9972f, 0f, 0f, 166.76f, 0, 0, -1))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdst62_cabin_stairs"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("rdst62_cabin_stairs", 1, 0.9f, 0.6f, 1);
			return true;
		}
	}
	return false;
}

void func_318(bool bParam0)
{
	__LIB_1__::func_948(joaat("DOOR_HAN_01_PROPS_15"), 0, -0.9f, 0, 0, 0, bParam0, 0);
	__LIB_1__::func_948(joaat("DOOR_HAN_01_PROPS_16"), 0, 0.9f, 0, 0, 0, bParam0, 0);
}

bool func_319(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = func_654(iParam1, bParam2, bParam3, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam4, fParam5, fParam6, fParam7, true, false, true);
				TASK::TASK_STAND_STILL(*iParam0, -1);
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_320(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			bVar0 = true;
			if (iParam13 != joaat("META_OUTFIT_DEFAULT"))
			{
				bVar0 = false;
			}
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 1, 1, 0, 1, 1, bVar0, 0, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			if (iParam11 == 1)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, false, true);
			}
			if (iParam6 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam6);
			}
			if (PED::IS_PED_HUMAN(*uParam0))
			{
				if (iParam12 != joaat("WEAPON_UNARMED"))
				{
					__LIB_4__::func_7(*uParam0, iParam12, 24, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					WEAPON::_0x94A3C1B804D291EC(*uParam0, 0, 0, 0, 0);
				}
			}
			if (iParam13 != joaat("META_OUTFIT_DEFAULT"))
			{
				PED::_SET_PED_BODY_COMPONENT(*uParam0, iParam13);
				PED::_UPDATE_PED_VARIATION(*uParam0, false, true, true, true, false);
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 233, bParam8);
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, bParam7);
			ENTITY::_0x18FF3110CF47115D(*uParam0, 1, 0);
			if (bParam8 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 103, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 146, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 143, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 148, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 168, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 250, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 96, true);
				PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
				PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1024, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 58, true);
				ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 150);
				PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 35, true);
			WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, 0);
			PED::SET_PED_KEEP_TASK(*uParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			if (iParam1 == joaat("U_M_M_FATDUSTER_01"))
			{
				__LIB_3__::func_459(*uParam0, 1);
				__LIB_2__::func_463(*uParam0, joaat("PROVISION_BRACELET_GOLD"), 1, 0);
				__LIB_3__::func_937(*uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam9) && !ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iParam9))
				{
					PED::SET_PED_INTO_VEHICLE(*uParam0, ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam9), iParam10);
				}
				else if (ENTITY::IS_ENTITY_A_PED(iParam9) && PED::_0x2D64376CF437363E(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam9)))
				{
					PED::_SET_PED_ON_MOUNT(*uParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam9), iParam10, true);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_321()
{
	if ((func_652(&iLocal_656, joaat("P_CHAIR13X"), -2177.805f, 716.1919f, 125.6274f, 0f, 0f, 0f, 0, 1, -1) && func_652(&iLocal_657, joaat("P_WINDSORCHAIR02X"), -2177.187f, 714.4435f, 125.6275f, 0f, 0f, 0f, 0, 1, -1)) && func_652(&iLocal_658, joaat("P_SAWBUCKTABLE01X"), -2177.543f, 715.2872f, 125.6298f, 0f, 0f, 0f, 0, 1, -1))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_656, -2177.74f, 716.1888f, 125.4509f, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_656, 1E-06f, 89.82101f, 24.0253f, 2, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_656, false, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_657, -2177.122f, 714.4404f, 125.5002f, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_657, 0f, -94.43458f, -162.8322f, 2, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_657, false, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_658, -2177.477f, 715.2847f, 125.5627f, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_658, 0.89184f, -83.31865f, 23.37807f, 2, true);
		return true;
	}
	return false;
}

void func_322()
{
	__LIB_1__::func_948(joaat("DOOR_HAN_DOG_RANCH_FRONT01"), 0, 0f, 0, 0, 0, 1, 0);
}

void func_323()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_860, -2147483648))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-2177.459f, 717.2651f, 121.6204f);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "HAN_WIN_LOCK", 0);
				__LIB_1__::func_683(&iLocal_860, -2147483648);
			}
		}
	}
}

bool func_331(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (__LIB_0__::func_27(iLocal_860, 8) || __LIB_12__::func_936(uParam0))
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return false;
			}
			else if (!func_660())
			{
				return false;
			}
		}
		else if (!__LIB_13__::func_519(uParam0))
		{
			return false;
		}
	}
	return true;
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
			func_684(uParam4);
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

void func_346()
{
	if (!__LIB_0__::func_27(iLocal_861, 1))
	{
		func_316(&iLocal_24, 0);
		__LIB_1__::func_683(&iLocal_861, 1);
	}
	if (!__LIB_0__::func_27(iLocal_861, 2))
	{
		if (!PED::IS_PED_INJURED(Local_29) && Local_29.f_3 == 6)
		{
			func_316(&iLocal_24, 1);
			__LIB_1__::func_683(&iLocal_861, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_861, 4))
	{
		if (!PED::IS_PED_INJURED(Local_29) && Local_29.f_3 == 15)
		{
			func_316(&iLocal_24, 2);
			__LIB_1__::func_683(&iLocal_861, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_861, 8))
	{
		if (__LIB_0__::func_27(iLocal_860, 1048576))
		{
			func_316(&iLocal_24, 3);
			__LIB_1__::func_683(&iLocal_861, 8);
		}
	}
	if (!__LIB_0__::func_27(iLocal_861, 16))
	{
		if (__LIB_0__::func_27(iLocal_860, 2097152))
		{
			func_316(&iLocal_24, 4);
			__LIB_1__::func_683(&iLocal_861, 16);
		}
	}
	if (!__LIB_0__::func_27(iLocal_861, 32))
	{
		if (__LIB_0__::func_27(iLocal_860, 2097152))
		{
			if (((__LIB_0__::func_27(iLocal_863, 4) && __LIB_0__::func_27(iLocal_863, 32)) && __LIB_0__::func_27(iLocal_863, 256)) && __LIB_0__::func_27(iLocal_863, 2048))
			{
				func_316(&iLocal_24, 5);
				__LIB_1__::func_683(&iLocal_861, 32);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_861, 64))
	{
		if (__LIB_0__::func_27(iLocal_860, 268435456) && __LIB_1__::func_205(Global_35, iLocal_631[4], 1, 0))
		{
			func_316(&iLocal_24, 6);
			__LIB_1__::func_683(&iLocal_861, 64);
		}
	}
	if (!__LIB_0__::func_27(iLocal_861, 1024))
	{
		if (__LIB_0__::func_27(iLocal_860, 536870912))
		{
			if (AUDIO::_0xE368E8422C860BA7("sadie_brawl", "rdst62_sounds", iLocal_859))
			{
				AUDIO::_0xDCF5BA95BBF0FABA(iLocal_859, "sadie_brawl", -2178.1f, 718.7f, 126.6f, "rdst62_sounds", 0, 0, 0);
				__LIB_1__::func_683(&iLocal_861, 1024);
			}
		}
	}
}

void func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	if (!__LIB_0__::func_27(iLocal_860, 65536))
	{
		if (!func_734(5))
		{
			if (!PED::IS_PED_INJURED(Local_29) && Local_29.f_3 == 6)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "ODR6_HANGD_WALK", 0))
					{
						func_738(5, 1);
					}
				}
			}
		}
		if (!func_734(33) && !func_734(27))
		{
			if ((!PED::IS_PED_INJURED(Local_48[0 /*19*/]) && !PED::IS_PED_INJURED(Local_48[1 /*19*/])) && !PED::IS_PED_INJURED(Local_29))
			{
				if (Local_48[0 /*19*/].f_3 == 12 && Local_48[1 /*19*/].f_3 == 12)
				{
					if ((Local_29.f_11 >= 18 || Local_29.f_3 == 8) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_869) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_869, false)))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (!__LIB_0__::func_27(iLocal_860, 32768))
							{
								if (__LIB_12__::func_876(uParam0, "ODR6_G1SEESADIE", 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_48[0 /*19*/], Local_29, -1, 2048, 51, 0);
									TASK::TASK_LOOK_AT_ENTITY(Local_48[1 /*19*/], Local_29, -1, 2048, 51, 0);
									func_738(33, 1);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "ODR6_G1SEESADIE", 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_48[0 /*19*/], Local_29, -1, 2048, 51, 0);
								TASK::TASK_LOOK_AT_ENTITY(Local_48[1 /*19*/], Local_29, -1, 2048, 51, 0);
								func_738(27, 1);
							}
						}
					}
				}
			}
		}
		if ((((!__LIB_0__::func_27(iLocal_860, 8192) && !func_734(32)) && !func_734(34)) && !func_734(28)) && !func_734(30))
		{
			if (func_734(33) || func_734(27))
			{
				if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]) && !PED::IS_PED_INJURED(Local_48[1 /*19*/]))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								if (!__LIB_0__::func_27(iLocal_860, 32768))
								{
									if (__LIB_12__::func_876(uParam0, "ODR6_G8RECSADIE", 0))
									{
										__LIB_1__::func_683(&(Local_48[0 /*19*/].f_10), 512);
										func_738(34, 1);
									}
								}
								else if (__LIB_12__::func_876(uParam0, "ODR6_G1RECSADIE", 0))
								{
									__LIB_1__::func_683(&(Local_48[0 /*19*/].f_10), 512);
									func_738(28, 1);
								}
								break;
							case 1:
								if (!__LIB_0__::func_27(iLocal_860, 32768))
								{
									if (__LIB_12__::func_876(uParam0, "ODR6_G3RECSADIE", 0))
									{
										__LIB_1__::func_683(&(Local_48[1 /*19*/].f_10), 512);
										func_738(32, 1);
									}
								}
								else if (__LIB_12__::func_876(uParam0, "ODR6_G2RECSADIE", 0))
								{
									__LIB_1__::func_683(&(Local_48[1 /*19*/].f_10), 512);
									func_738(30, 1);
								}
								break;
						}
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_862, 2))
		{
			__LIB_13__::func_520(&iLocal_565);
			__LIB_8__::func_771(Local_29, 0, 1, 0);
			__LIB_1__::func_683(&iLocal_862, 2);
		}
		if (!__LIB_0__::func_27(iLocal_860, 131072))
		{
			if (!func_734(14))
			{
				if (__LIB_0__::func_27(iLocal_860, 262144))
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_87[0 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*19*/])) && !ENTITY::IS_ENTITY_DEAD(Local_87[1 /*19*/]))
					{
						if (__LIB_0__::func_27(Local_87[0 /*19*/].f_10, 2) || __LIB_0__::func_27(Local_87[1 /*19*/].f_10, 2))
						{
							if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_868) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_868, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_868) >= 0.25f)
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "ODR6_MC_BURN", 0))
									{
										func_738(14, 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_734(22))
			{
				if (__LIB_0__::func_27(iLocal_861, 4096))
				{
					if (__LIB_0__::func_27(Local_336[0 /*19*/].f_10, 1))
					{
						if (((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && ENTITY::IS_ENTITY_DEAD(Local_336[0 /*19*/])) && !func_734(23))
						{
							if (__LIB_12__::func_876(uParam0, "ODR6_SNIPE_DOWN", 0))
							{
								func_738(22, 1);
							}
						}
					}
				}
			}
			if (!func_734(19))
			{
				if (__LIB_0__::func_27(iLocal_861, 4096))
				{
					if (((!__LIB_0__::func_27(Local_336[0 /*19*/].f_10, 1) && !PED::IS_PED_FATALLY_INJURED(Local_336[0 /*19*/])) && !PED::IS_PED_INJURED(Local_336[0 /*19*/])) && !CAM::_0x1204EB53A5FBC63D())
					{
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_29))
						{
							if (__LIB_12__::func_876(uParam0, "ODR6_SNIPER1", 0))
							{
								func_738(19, 1);
							}
						}
					}
				}
			}
			else if (!func_734(21))
			{
				if (!__LIB_0__::func_27(Local_336[0 /*19*/].f_10, 1))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "ODR6_FLANK", 0))
						{
							func_738(21, 1);
						}
					}
				}
			}
			else if (!func_734(20))
			{
				if (!__LIB_0__::func_27(Local_336[0 /*19*/].f_10, 1))
				{
					if ((MISC::GET_GAME_TIMER() - Local_29.f_12) > 10000)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "ODR6_SNIPER2", 0))
							{
								Local_29.f_12 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_27(iLocal_862, 32))
			{
				if (__LIB_0__::func_27(Local_336[0 /*19*/].f_10, 1) || (ENTITY::DOES_ENTITY_EXIST(Local_336[0 /*19*/]) && ENTITY::IS_ENTITY_DEAD(Local_336[0 /*19*/])))
				{
					if (__LIB_0__::func_27(iLocal_862, 16))
					{
						if (__LIB_0__::func_139(iLocal_565[0]) || __LIB_0__::func_139(iLocal_565[1]))
						{
							__LIB_13__::func_520(&iLocal_565);
						}
						__LIB_8__::func_771(Local_29, 0, 1, 0);
					}
					__LIB_1__::func_683(&iLocal_862, 32);
				}
			}
			if (!__LIB_0__::func_27(iLocal_862, 32))
			{
				if (!__LIB_0__::func_27(iLocal_862, 64) && !__LIB_0__::func_27(iLocal_862, 128))
				{
					if (!__LIB_0__::func_27(iLocal_862, 16))
					{
						if (((!PED::IS_PED_INJURED(Local_29) && Local_29.f_3 == 15) && !PED::IS_PED_INJURED(Local_336[0 /*19*/])) && Local_336[0 /*19*/].f_3 == 14)
						{
							if (func_734(19) && !__LIB_8__::func_684("ODR6_SNIPER1"))
							{
								__LIB_1__::func_573(Local_29, __LIB_1__::func_464(11, 0), 30f, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_862, 16);
							}
						}
					}
					else if (!__LIB_0__::func_139(iLocal_565[0]) && !__LIB_0__::func_139(iLocal_565[1]))
					{
						if (__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_29))
						{
							iLocal_565[0] = __LIB_1__::func_877("RDST62_U_DECIDEB1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							iLocal_565[1] = __LIB_1__::func_877("RDST62_U_DECIDEB2", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_9__::func_332(&(iLocal_565[0]), Local_29);
							__LIB_9__::func_332(&(iLocal_565[1]), Local_29);
							if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(Local_29) || AUDIO::_0x54B187F111D9C6F8(Local_29, 1)))
							{
								__LIB_1__::func_221(iLocal_565[0], 0, 1);
								__LIB_1__::func_221(iLocal_565[1], 0, 1);
							}
							else
							{
								__LIB_1__::func_221(iLocal_565[0], 1, 1);
								__LIB_1__::func_221(iLocal_565[1], 1, 1);
							}
						}
					}
					else
					{
						if ((AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1)) || (AUDIO::IS_ANY_SPEECH_PLAYING(Local_29) || AUDIO::_0x54B187F111D9C6F8(Local_29, 1)))
						{
							__LIB_1__::func_221(iLocal_565[0], 0, 1);
							__LIB_1__::func_221(iLocal_565[1], 0, 1);
						}
						else
						{
							__LIB_1__::func_221(iLocal_565[0], 1, 1);
							__LIB_1__::func_221(iLocal_565[1], 1, 1);
						}
						if (__LIB_0__::func_572(iLocal_565[0], 0) && __LIB_1__::func_732(iLocal_565[0], 1))
						{
							if (__LIB_12__::func_876(uParam0, "ODR6_DECIDEB1A", 0))
							{
								__LIB_13__::func_520(&iLocal_565);
								func_738(8, 1);
								__LIB_8__::func_771(Local_29, 0, 1, 0);
								__LIB_1__::func_683(&iLocal_862, 64);
							}
						}
						else if (__LIB_0__::func_572(iLocal_565[1], 0) && __LIB_1__::func_732(iLocal_565[1], 1))
						{
							if (__LIB_12__::func_876(uParam0, "ODR6_DECIDEB2A", 0))
							{
								__LIB_13__::func_520(&iLocal_565);
								func_738(9, 1);
								__LIB_8__::func_771(Local_29, 0, 1, 0);
								__LIB_1__::func_683(&iLocal_862, 128);
							}
						}
					}
				}
			}
			if (!func_734(10))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_869, false))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "ODR6_LETSGO", 0))
						{
							func_738(10, 1);
						}
					}
				}
			}
			if (((!func_734(35) && !func_734(36)) && !func_734(37)) && !func_734(38))
			{
				if (iLocal_542 == 0)
				{
					iLocal_542 = MISC::GET_GAME_TIMER();
				}
				if (((iLocal_542 != 0 && (MISC::GET_GAME_TIMER() - iLocal_542) > 10000) || !__LIB_0__::func_27(iLocal_860, 262144)) || __LIB_0__::func_27(iLocal_860, 524288))
				{
					iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_GANG_ODRISCOLL"), MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0, 28);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar1))
					{
						if (((PED::IS_PED_IN_COMBAT(iVar1, 0) || PED::_0x77525BBF433F2CD6(iVar1)) || func_752(iVar1, &Local_87)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 35f)
						{
							if (!__LIB_0__::func_27(iLocal_860, 262144))
							{
								if (__LIB_6__::func_904() || __LIB_5__::func_463())
								{
									__LIB_5__::func_20(0, 0);
								}
							}
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								vVar2 = { __LIB_13__::func_515(&(uParam0->f_643), iVar1) };
								if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar2))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
									{
										case 0:
											iVar0 = 0;
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 1);
											break;
										case 1:
											iVar0 = 1;
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
											break;
										case 2:
											iVar0 = 2;
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 1);
											break;
										case 3:
											iVar0 = 3;
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 1);
											break;
									}
								}
								else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED1"))
								{
									iVar0 = 0;
								}
								else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED2"))
								{
									iVar0 = 1;
								}
								else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED3"))
								{
									iVar0 = 2;
								}
								else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED8"))
								{
									iVar0 = 3;
								}
								switch (iVar0)
								{
									case 0:
										if (__LIB_12__::func_876(uParam0, "ODR6_G1SEEARTH", 0))
										{
											iLocal_542 = MISC::GET_GAME_TIMER();
											func_738(35, 1);
										}
										break;
									case 1:
										if (__LIB_12__::func_876(uParam0, "ODR6_G2SEEARTH", 0))
										{
											iLocal_542 = MISC::GET_GAME_TIMER();
											func_738(36, 1);
										}
										break;
									case 2:
										if (__LIB_12__::func_876(uParam0, "ODR6_G3SEEARTH", 0))
										{
											iLocal_542 = MISC::GET_GAME_TIMER();
											func_738(37, 1);
										}
										break;
									case 3:
										if (__LIB_12__::func_876(uParam0, "ODR6_G8SEEARTH", 0))
										{
											iLocal_542 = MISC::GET_GAME_TIMER();
											func_738(38, 1);
										}
										break;
								}
							}
						}
					}
				}
			}
			else
			{
				if (!func_734(39) && !func_734(40))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_542) > 15000)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_GANG_ODRISCOLL"), MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0, 28);
							if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar1))
							{
								if (PED::IS_PED_IN_COMBAT(iVar1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 30f)
								{
									vVar2 = { __LIB_13__::func_515(&(uParam0->f_643), iVar1) };
									if ((MISC::IS_STRING_NULL_OR_EMPTY(&vVar2) || MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED3")) || MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED8"))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												iVar0 = 0;
												__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 1);
												break;
											case 1:
												iVar0 = 1;
												__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
												break;
										}
									}
									else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED1"))
									{
										iVar0 = 0;
									}
									else if (MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED2"))
									{
										iVar0 = 1;
									}
									switch (iVar0)
									{
										case 0:
											if (__LIB_12__::func_876(uParam0, "ODR6_G1SEEARTH2", 0))
											{
												iLocal_542 = MISC::GET_GAME_TIMER();
												func_738(39, 1);
											}
											break;
										case 1:
											if (__LIB_12__::func_876(uParam0, "ODR6_G2SEEARTH2", 0))
											{
												iLocal_542 = MISC::GET_GAME_TIMER();
												func_738(40, 1);
											}
											break;
									}
								}
							}
						}
					}
				}
				if (!func_734(29))
				{
					if (func_734(39) || func_734(40))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_542) > 20000)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_GANG_ODRISCOLL"), MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0, 28);
								if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar1))
								{
									if (PED::IS_PED_IN_COMBAT(iVar1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 30f)
									{
										vVar2 = { __LIB_13__::func_515(&(uParam0->f_643), iVar1) };
										if (((MISC::IS_STRING_NULL_OR_EMPTY(&vVar2) || MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED1")) || MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED8")) || MISC::ARE_STRINGS_EQUAL(&vVar2, "ODR_PED3"))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 1);
										}
										if (__LIB_12__::func_876(uParam0, "ODR6_G2SEESADIE", 0))
										{
											iLocal_542 = MISC::GET_GAME_TIMER();
											func_738(29, 1);
										}
									}
								}
							}
						}
					}
				}
			}
			if (!func_734(17))
			{
				if (!__LIB_0__::func_27(iLocal_860, 262144))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "ODR6_BLOW", 0))
						{
							func_738(17, 1);
						}
					}
					else if (((!__LIB_8__::func_684("ODR6_G1SEEARTH") && !__LIB_8__::func_684("ODR6_G2SEEARTH")) && !__LIB_8__::func_684("ODR6_G3SEEARTH")) && !__LIB_8__::func_684("ODR6_G8SEEARTH"))
					{
						__LIB_5__::func_20(0, 0);
					}
				}
			}
			if (!func_734(13))
			{
				if ((__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !__LIB_8__::func_684("ODR6_GOBARN"))
				{
					if (__LIB_12__::func_876(uParam0, "ODR6_BARNENTER", 0))
					{
						func_738(13, 1);
					}
				}
			}
			if (((!func_734(43) && !func_734(44)) && !func_734(45)) && !func_734(46))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0) && func_501(Global_35))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_GANG_ODRISCOLL"), 0, 0, 28);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_752(iVar1, &Local_336))
						{
							if (iVar1 == Local_336[1 /*19*/])
							{
								__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 0);
								if (__LIB_12__::func_876(uParam0, "ODR6_G1ARTBARN", 0))
								{
									iLocal_542 = MISC::GET_GAME_TIMER();
									func_738(43, 1);
								}
							}
							else if (iVar1 == Local_336[2 /*19*/])
							{
								__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 0);
								if (__LIB_12__::func_876(uParam0, "ODR6_G2ARTBARN", 0))
								{
									iLocal_542 = MISC::GET_GAME_TIMER();
									func_738(44, 1);
								}
							}
							else if (iVar1 == Local_336[3 /*19*/])
							{
								__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 0);
								if (__LIB_12__::func_876(uParam0, "ODR6_G3ARTBARN", 0))
								{
									iLocal_542 = MISC::GET_GAME_TIMER();
									func_738(45, 1);
								}
							}
							else if (iVar1 == Local_336[4 /*19*/])
							{
								__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 0);
								if (__LIB_12__::func_876(uParam0, "ODR6_G8ARTBARN", 0))
								{
									iLocal_542 = MISC::GET_GAME_TIMER();
									func_738(46, 1);
								}
							}
						}
					}
				}
				else if ((__LIB_0__::func_27(iLocal_860, 2097152) && !__LIB_0__::func_27(iLocal_863, 2048)) && func_734(23))
				{
					if (iLocal_542 != 0 && (MISC::GET_GAME_TIMER() - iLocal_542) > 0)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_GANG_ODRISCOLL"), MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0, 28);
							if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_752(iVar1, &Local_336))
							{
								if (PED::IS_PED_IN_COMBAT(iVar1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 25f)
								{
									if (iVar1 == Local_336[1 /*19*/])
									{
										if (!func_734(47))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G1CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = (MISC::GET_GAME_TIMER() + 10000 + iLocal_543 * 1000);
												func_738(47, 1);
											}
										}
										else if (!func_734(51))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G1CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = (MISC::GET_GAME_TIMER() + 10000 + iLocal_543 * 1000);
												func_738(51, 1);
											}
										}
									}
									else if (iVar1 == Local_336[2 /*19*/])
									{
										if (!func_734(48))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G2CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = (MISC::GET_GAME_TIMER() + 10000 + iLocal_543 * 1000);
												func_738(48, 1);
											}
										}
										else if (!func_734(52))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G2CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = (MISC::GET_GAME_TIMER() + 10000 + iLocal_543 * 1000);
												func_738(52, 1);
											}
										}
									}
									else if (iVar1 == Local_336[3 /*19*/])
									{
										if (!func_734(49))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G3CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = (MISC::GET_GAME_TIMER() + 10000 + iLocal_543 * 1000);
												func_738(49, 1);
											}
										}
										else if (!func_734(53))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G3CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = (MISC::GET_GAME_TIMER() + 10000 + iLocal_543 * 1000);
												func_738(53, 1);
											}
										}
									}
									else if (iVar1 == Local_336[4 /*19*/])
									{
										if (!func_734(50))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G8CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = MISC::GET_GAME_TIMER() + 10000;
												func_738(50, 1);
											}
										}
										else if (!func_734(54))
										{
											__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 0);
											if (__LIB_12__::func_876(uParam0, "ODR6_G8CALLBARN", 0))
											{
												iLocal_543++;
												iLocal_542 = MISC::GET_GAME_TIMER() + 10000;
												func_738(54, 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (((!func_734(55) && !func_734(56)) && !func_734(57)) && !func_734(58))
			{
				if (iLocal_542 != 0 && (MISC::GET_GAME_TIMER() - iLocal_542) > 5000)
				{
					if (__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							iVar1 = __LIB_11__::func_672(Global_35, joaat("REL_GANG_ODRISCOLL"), MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0, 28);
							if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_752(iVar1, &Local_336))
							{
								if (iVar1 == Local_336[1 /*19*/])
								{
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED1", 0);
									if (__LIB_12__::func_876(uParam0, "ODR6_G1HCARGE", 0))
									{
										iLocal_542 = MISC::GET_GAME_TIMER();
										func_738(55, 1);
									}
								}
								else if (iVar1 == Local_336[2 /*19*/])
								{
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED2", 0);
									if (__LIB_12__::func_876(uParam0, "ODR6_G2HCARGE", 0))
									{
										iLocal_542 = MISC::GET_GAME_TIMER();
										func_738(56, 1);
									}
								}
								else if (iVar1 == Local_336[3 /*19*/])
								{
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED3", 0);
									if (__LIB_12__::func_876(uParam0, "ODR6_G3HCARGE", 0))
									{
										iLocal_542 = MISC::GET_GAME_TIMER();
										func_738(57, 1);
									}
								}
								else if (iVar1 == Local_336[4 /*19*/])
								{
									__LIB_12__::func_875(uParam0, iVar1, "ODR_PED8", 0);
									if (__LIB_12__::func_876(uParam0, "ODR6_G8HCARGE", 0))
									{
										iLocal_542 = MISC::GET_GAME_TIMER();
										func_738(58, 1);
									}
								}
							}
						}
					}
				}
			}
			else if ((!func_734(59) && !func_734(60)) && !func_734(61))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (func_734(56))
					{
						if (__LIB_12__::func_876(uParam0, "ODR6_G2HCARGE2", 0))
						{
							func_738(59, 1);
						}
					}
					else if (func_734(57))
					{
						if (__LIB_12__::func_876(uParam0, "ODR6_G3HCARGE2", 0))
						{
							func_738(60, 1);
						}
					}
					else if (func_734(58))
					{
						if (__LIB_12__::func_876(uParam0, "ODR6_G8HCARGE2", 0))
						{
							func_738(61, 1);
						}
					}
				}
			}
			if ((Local_29.f_12 == 0 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_869, false)) || MISC::GET_GAME_TIMER() > Local_29.f_12)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (Local_29.f_3 == 15)
					{
						if (!PED::IS_PED_INJURED(Local_29) && PED::IS_PED_IN_COMBAT(Local_29, 0))
						{
							if (__LIB_1__::func_985())
							{
								bVar5 = __LIB_12__::func_876(uParam0, "ODSC6_ARTH_ATT", 0);
							}
							else if (Local_29.f_5 != 16)
							{
								bVar5 = __LIB_12__::func_876(uParam0, "ODSC6_SAD_ATT", 0);
							}
							else
							{
								bVar5 = __LIB_12__::func_876(uParam0, "ODSC6_CBT_STRT2", 0);
							}
							if (bVar5)
							{
								Local_29.f_12 = (MISC::GET_GAME_TIMER() + 10000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2500));
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_139(iLocal_565[0]) || __LIB_0__::func_139(iLocal_565[1]))
	{
		if (!__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_29))
		{
			__LIB_13__::func_520(&iLocal_565);
		}
	}
}

void func_348(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_860, 8388608))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_869) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_869, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_869) > 0.9f)
		{
			__LIB_1__::func_683(&iLocal_860, 262144);
			__LIB_1__::func_683(&iLocal_860, 8388608);
		}
	}
	else
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
		{
			func_756(uParam0);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false))
			{
				ANIMSCENE::START_ANIM_SCENE(*uParam0);
			}
		}
	}
}

bool func_349(var uParam0, int iParam1)
{
	func_500(uParam0, &Local_29, &iLocal_866, &iLocal_869, &uLocal_870);
	if (!__LIB_0__::func_27(iLocal_860, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_WEAPON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_UNARMED"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_HANDGUN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_SHOTGUN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_SMG"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_AUTO_RIFLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_SNIPER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_HEAVY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_SPECIAL"), false);
	}
	func_757(uParam0);
	switch (*iParam1)
	{
		case 0:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (!__LIB_0__::func_27(iLocal_862, 512))
			{
				AUDIO::PREPARE_MUSIC_EVENT("ODRISC6.2_OS3");
				__LIB_1__::func_683(&iLocal_862, 512);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_866, false) && !__LIB_0__::func_27(iLocal_862, 256))
			{
				__LIB_9__::func_603(16);
				__LIB_1__::func_683(&iLocal_862, 256);
			}
			if (__LIB_0__::func_27(iLocal_860, 65536))
			{
				*iParam1++;
			}
			break;
		case 1:
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			return true;
	}
	return false;
}

void func_350()
{
	iLocal_28 = 0;
	__LIB_2__::func_608(&uLocal_547);
	__LIB_2__::func_608(&uLocal_550);
}

bool func_351(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	func_500(uParam0, &Local_29, &iLocal_866, &iLocal_869, &uLocal_870);
	func_759(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_29))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_29))
		{
			fVar0 = __LIB_1__::func_348(Local_29, Global_35);
			if (func_734(23))
			{
				fVar1 = 300f;
			}
			else
			{
				fVar1 = 60f;
			}
			if (fVar0 > 60f || __LIB_13__::func_533(&uLocal_872, fVar1))
			{
				if (func_734(23))
				{
					iVar2 = 0;
					while (iVar2 < Local_336)
					{
						if (!__LIB_0__::func_27(Local_336[iVar2 /*19*/].f_10, 2048) && !__LIB_0__::func_27(Local_336[iVar2 /*19*/].f_10, 262144))
						{
							func_313(&(Local_336[iVar2 /*19*/]), 15, 0, 10);
							__LIB_1__::func_683(&(Local_336[iVar2 /*19*/].f_10), 262144);
						}
						iVar2++;
					}
				}
				__LIB_5__::func_553(Local_29, 1);
				CAM::_0x986F7A51EE3E1F92(Local_29, 1);
			}
			else
			{
				__LIB_5__::func_553(Local_29, 0);
				CAM::_0x5B637D6F3B67716A(Local_29);
			}
		}
	}
	switch (*iParam1)
	{
		case 0:
			if (((((__LIB_0__::func_27(iLocal_863, 4) && __LIB_0__::func_27(iLocal_863, 32)) && __LIB_0__::func_27(iLocal_863, 256)) && func_734(23)) && Local_29.f_3 == 4) && !__LIB_8__::func_684("ODR6_GOBARN"))
			{
				__LIB_1__::func_683(&iLocal_860, 131072);
				__LIB_5__::func_107(&uLocal_556);
				*iParam1++;
			}
			break;
		case 1:
			if (((__LIB_9__::func_324(&uLocal_556) > 5f && __LIB_0__::func_27(iLocal_863, 2048)) && __LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0)) && (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_29, 17) || !__LIB_2__::func_0(Local_29, 0f, 1f, 0f, 1f)))
			{
				__LIB_0__::func_325(&iLocal_540);
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_373(int iParam0, bool bParam1, bool bParam2)
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
	func_388(iVar0, 1, bParam1, 0, 1);
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

void func_388(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_808(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_808(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_808(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_808(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_808(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_808(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_808(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_808(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_808(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_808(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_808(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_808(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_808(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_810();
						func_811(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_808(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_388(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_388(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_388(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_808(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_845();
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
							func_808(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_421(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
}

void func_426(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_0__::func_325(&((iParam0[iVar0 /*19*/])->f_2));
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*19*/]))
		{
			PED::SET_PED_KEEP_TASK((*iParam0)[iVar0 /*19*/], bParam2);
		}
		__LIB_0__::func_490(iParam0[iVar0 /*19*/], bParam1);
		iVar0++;
	}
}

void func_427()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_631)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_631[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_631[iVar0]);
		}
		iVar0++;
	}
}

void func_428()
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-2177.459f, 717.2651f, 121.6204f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "HAN_WIN_LOCK", true);
			__LIB_1__::func_681(&iLocal_860, -2147483648);
		}
	}
}

void func_429()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_832)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_832[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_832[iVar0]);
		}
		iVar0++;
	}
}

int func_494(int iParam0, int iParam1)
{
	var uVar0;
	return func_940(&uVar0, iParam0, iParam1);
}

void func_500(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	vector3 vVar19;
	struct<19> Var22;
	struct<15> Var43;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_17 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			switch (iParam1->f_3)
			{
				case 1:
					PED::SET_PED_CONFIG_FLAG(*iParam1, 315, true);
					if (iParam1->f_6 == 0)
					{
						iParam1->f_6 = 1;
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_rsc2_ig1_hey");
						if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_rsc2_ig1_hey"))
						{
							func_313(iParam1, 2, 0, 0);
						}
					}
					break;
				case 2:
					if (iParam1->f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_rsc2_ig1_hey", true);
							iParam1->f_6 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
						{
							if (!__LIB_0__::func_27(iLocal_860, 4))
							{
								if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam2) >= 0.7f)
								{
									if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
									{
										PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdst62_ilo_sadie");
									}
									__LIB_1__::func_683(&iLocal_860, 4);
								}
							}
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam2, "w_shotgun_doublebarrel01"))
						{
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam2, "CS_MrsAdler"))
						{
							func_312(iParam1, 0);
							func_313(iParam1, 6, 1, 0);
							__LIB_1__::func_683(&iLocal_860, 4096);
						}
					}
					break;
				case 6:
					if (PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
						{
							PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
						}
					}
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								func_312(iParam1, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								func_315(iParam3, *iParam1);
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, (1f * 1.15f), 0, -1082130432 /* Float: -1f */, 0);
										iParam1->f_11 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
										if (iParam1->f_11 >= 22)
										{
											func_313(iParam1, 8, 0, 0);
										}
									}
								}
							}
							break;
						case 1:
							if ((IntToFloat(TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1)) >= 27f && !__LIB_0__::func_27(iLocal_860, 2)) || (IntToFloat(TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1)) >= 27f && !__LIB_0__::func_27(iLocal_860, 4096)))
							{
								__LIB_1__::func_683(&iLocal_860, 2);
								__LIB_1__::func_683(&iLocal_860, 4096);
							}
							if (iParam1->f_6 == 0)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
									{
										if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]) && !__LIB_0__::func_27(Local_48[0 /*19*/].f_10, 512))
										{
											TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(*iParam1, Local_48[0 /*19*/], 0, -1082130432 /* Float: -1f */);
										}
										else if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]) && !__LIB_0__::func_27(Local_48[1 /*19*/].f_10, 512))
										{
											TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(*iParam1, Local_48[1 /*19*/], 0, -1082130432 /* Float: -1f */);
										}
										PED::SET_PED_ACCURACY(*iParam1, 100);
										PED::SET_COMBAT_FLOAT(*iParam1, 6, 1f);
										PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 27, true);
										iParam1->f_7 = MISC::GET_GAME_TIMER();
										iParam1->f_6 = 1;
									}
								}
							}
							else if (((func_734(28) || func_734(30)) || func_734(32)) || func_734(34))
							{
								if (((((__LIB_8__::func_684("ODR6_G1RECSADIE") || __LIB_8__::func_684("ODR6_G2RECSADIE")) || __LIB_8__::func_684("ODR6_G3RECSADIE")) || __LIB_8__::func_684("ODR6_G8RECSADIE")) && (MISC::GET_GAME_TIMER() - iParam1->f_7) > 1750) || (((!__LIB_8__::func_684("ODR6_G1RECSADIE") && !__LIB_8__::func_684("ODR6_G2RECSADIE")) && !__LIB_8__::func_684("ODR6_G3RECSADIE")) && !__LIB_8__::func_684("ODR6_G8RECSADIE")))
								{
									func_313(iParam1, 6, 0, 2);
								}
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]) && !__LIB_0__::func_27(Local_48[0 /*19*/].f_10, 512))
								{
									PED::SET_PED_CONFIG_FLAG(Local_48[0 /*19*/], 138, true);
									PED::SET_PED_CONFIG_FLAG(Local_48[0 /*19*/], 354, true);
									TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam1, Local_48[0 /*19*/], 0, 0, -1082130432 /* Float: -1f */);
								}
								else if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]) && !__LIB_0__::func_27(Local_48[1 /*19*/].f_10, 512))
								{
									PED::SET_PED_CONFIG_FLAG(Local_48[1 /*19*/], 138, true);
									PED::SET_PED_CONFIG_FLAG(Local_48[1 /*19*/], 354, true);
									TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam1, Local_48[1 /*19*/], 0, 0, -1082130432 /* Float: -1f */);
								}
								iParam1->f_6 = 1;
							}
							else if (PED::IS_PED_INJURED(Local_48[0 /*19*/]) || PED::IS_PED_INJURED(Local_48[1 /*19*/]))
							{
								__LIB_1__::func_683(&iLocal_860, 65536);
								if (__LIB_9__::func_225(*iParam1, Local_48[0 /*19*/]) || __LIB_9__::func_225(*iParam1, Local_48[1 /*19*/]))
								{
									__LIB_1__::func_683(&iLocal_860, 262144);
								}
								func_313(iParam1, 6, 0, 3);
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]))
								{
									TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(*iParam1, Local_48[0 /*19*/], 0, -1082130432 /* Float: -1f */);
								}
								else if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]))
								{
									TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(*iParam1, Local_48[0 /*19*/], 0, -1082130432 /* Float: -1f */);
								}
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > 750)
							{
								if (((!__LIB_8__::func_684("ODR6_G1RECSADIE") && !__LIB_8__::func_684("ODR6_G2RECSADIE")) && !__LIB_8__::func_684("ODR6_G3RECSADIE")) && !__LIB_8__::func_684("ODR6_G8RECSADIE"))
								{
									func_313(iParam1, 6, 0, 4);
								}
							}
							break;
						case 4:
							if (iParam1->f_6 == 0)
							{
								if (!PED::IS_PED_INJURED(Local_48[0 /*19*/]))
								{
									PED::SET_PED_CONFIG_FLAG(Local_48[0 /*19*/], 138, true);
									PED::SET_PED_CONFIG_FLAG(Local_48[0 /*19*/], 354, true);
									TASK::TASK_SHOOT_AT_ENTITY(*iParam1, Local_48[0 /*19*/], -1, 0, 1);
								}
								else if (!PED::IS_PED_INJURED(Local_48[1 /*19*/]))
								{
									PED::SET_PED_CONFIG_FLAG(Local_48[1 /*19*/], 138, true);
									PED::SET_PED_CONFIG_FLAG(Local_48[1 /*19*/], 354, true);
									TASK::TASK_SHOOT_AT_ENTITY(*iParam1, Local_48[1 /*19*/], -1, 0, 1);
								}
								iParam1->f_6 = 1;
							}
							else if (PED::IS_PED_INJURED(Local_48[0 /*19*/]) && PED::IS_PED_INJURED(Local_48[1 /*19*/]))
							{
								func_313(iParam1, 6, 0, 5);
							}
							break;
						case 5:
							if (iParam1->f_6 == 0)
							{
								TASK::TASK_RELOAD_WEAPON(*iParam1, true);
								__LIB_1__::func_683(&iLocal_860, 65536);
								__LIB_1__::func_683(&iLocal_860, 262144);
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1021121169, true) == 8)
							{
								func_313(iParam1, 15, 0, 0);
							}
							break;
					}
					if (__LIB_0__::func_27(iLocal_860, 65536) && !__LIB_0__::func_27(iLocal_860, 262144))
					{
						func_313(iParam1, 15, 0, 4);
					}
					__LIB_9__::func_397(&uLocal_843, *iParam1);
					break;
				case 8:
					if (iParam1->f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							ANIMSCENE::START_ANIM_SCENE(*iParam3);
							iParam1->f_6 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
					{
						if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "MrsAdler"))
						{
							__LIB_1__::func_683(&iLocal_860, 262144);
							__LIB_1__::func_683(&iLocal_860, 65536);
							func_313(iParam1, 15, 0, 4);
						}
					}
					break;
				case 15:
					if (__LIB_0__::func_27(iParam1->f_10, 262144))
					{
						PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
						__LIB_5__::func_438(&uLocal_843);
						__LIB_1__::func_681(&(iParam1->f_10), 262144);
					}
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								__LIB_1__::func_683(&iLocal_860, 16777216);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2164.63f, 678.66f, 119.33f, 1f, 40000, (0.25f * 10f), 1, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 1)
							{
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								func_313(iParam1, 15, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (IntToFloat((MISC::GET_GAME_TIMER() - iParam1->f_7)) > __LIB_0__::func_514(PED::IS_PED_IN_COVER(*iParam1, false, false), 2000f, 750f))
								{
									__LIB_1__::func_683(&iLocal_860, 16777216);
									WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, joaat("WEAPON_THROWN_MOLOTOV"), 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_THROWN_MOLOTOV"), false, 0, false, false);
									TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
									iParam1->f_6 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8)
							{
								if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam1, &iVar1, true, 0, false) && iVar1 == joaat("WEAPON_THROWN_MOLOTOV"))
								{
									func_313(iParam1, 15, 0, 2);
								}
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								Var2.f_4 = -1;
								Var2.f_1 = { -2161.767f, 694.3687f, 122.3076f };
								Var2.f_8 = 1;
								Var2.f_12 = 3;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_SHOOT_WITH_WEAPON(*iParam1, &Var2);
								__LIB_12__::func_876(uParam0, "ODR6_THROW", 0);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1692648609, true) == 8)
							{
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								func_313(iParam1, 15, 0, 3);
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 0, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 716706914, true) == 8)
							{
								if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam1, &iVar1, true, 0, false) && iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
								{
									__LIB_1__::func_681(&iLocal_860, 16777216);
									__LIB_1__::func_683(&iLocal_860, 262144);
									__LIB_1__::func_683(&iLocal_860, 65536);
									func_313(iParam1, 15, 0, 4);
								}
							}
							break;
						case 4:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 249, true);
								PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 27, true);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
								PED::_0x32CEDA9A0AB4CEF7(*iParam1, joaat("GROUP_SHOTGUN"), 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								vVar19 = { ENTITY::GET_ENTITY_COORDS(Local_48[0 /*19*/], false, false) };
								TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Local_29, vVar19, vVar19, 1f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
								iParam1->f_6 = 1;
							}
							else if (!__LIB_0__::func_272(Local_48[0 /*19*/], 0) && !__LIB_0__::func_272(Local_48[1 /*19*/], 0))
							{
								func_313(iParam1, 15, 0, 5);
							}
							break;
						case 5:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
								PED::SET_PED_ACCURACY(*iParam1, 80);
								PED::_0xC2266AA617668AD3(Local_29, 0.2f);
								PED::_0x32CEDA9A0AB4CEF7(*iParam1, joaat("GROUP_SHOTGUN"), 1);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
								if (iParam1->f_5 < 14)
								{
									PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[14], 0, 0, 0);
									iParam1->f_5 = 14;
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								if (iLocal_865 >= 5 && !__LIB_0__::func_272(Local_336[0 /*19*/], 2))
								{
									if (iParam1->f_5 != 16)
									{
										if (!__LIB_2__::func_618(&uLocal_559))
										{
											__LIB_8__::func_901(&uLocal_559, 0);
										}
										else if (func_221(&uLocal_559, 1.4f))
										{
											PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[16], 0, 0, 0);
											iParam1->f_5 = 16;
											__LIB_2__::func_608(&uLocal_559);
										}
									}
								}
								else if (iLocal_865 >= 3)
								{
									if ((iParam1->f_5 != 15 && iParam1->f_5 != 16) && iParam1->f_5 != 16)
									{
										if (!__LIB_2__::func_618(&uLocal_559))
										{
											__LIB_8__::func_901(&uLocal_559, 0);
										}
										else if (func_221(&uLocal_559, 1.4f))
										{
											PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[15], 0, 0, 0);
											iParam1->f_5 = 15;
											__LIB_2__::func_608(&uLocal_559);
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_862, 1024))
								{
									if (__LIB_0__::func_27(iLocal_862, 64))
									{
										func_313(iParam1, 15, 0, 11);
										__LIB_1__::func_683(&iLocal_862, 1024);
									}
									else if (__LIB_0__::func_27(iLocal_862, 128))
									{
										__LIB_1__::func_683(&iLocal_862, 1024);
										func_313(iParam1, 15, 0, 9);
									}
								}
							}
							break;
						case 7:
							if (iParam1->f_6 == 0)
							{
								if (!__LIB_13__::func_516(Global_35, Local_766[6 /*5*/].f_4, 1, 1.5f))
								{
									iParam1->f_8 = 6;
								}
								else if (!__LIB_13__::func_516(Global_35, Local_766[7 /*5*/].f_4, 1, 1.5f))
								{
									iParam1->f_8 = 7;
								}
								PED::SET_PED_CONFIG_FLAG(*iParam1, 357, false);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_766[iParam1->f_8 /*5*/], 1f, 0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
								iParam1->f_6 = 1;
							}
							else
							{
								if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
								{
									switch (iParam1->f_8)
									{
										case 6:
											if (__LIB_13__::func_516(Global_35, Local_766[6 /*5*/].f_4, 1, 1.5f))
											{
												func_313(iParam1, 15, 0, -1);
											}
											break;
										case 7:
											if (__LIB_13__::func_516(Global_35, Local_766[7 /*5*/].f_4, 1, 1.5f))
											{
												func_313(iParam1, 15, 0, -1);
											}
											break;
									}
								}
								if ((PED::IS_PED_INJURED(Local_126[0 /*19*/]) && PED::IS_PED_INJURED(Local_126[2 /*19*/])) && PED::IS_PED_INJURED(Local_126[3 /*19*/]))
								{
									func_313(iParam1, 15, 0, 8);
								}
							}
							break;
						case 8:
							if (iParam1->f_6 == 0)
							{
								if (!__LIB_13__::func_516(Global_35, Local_766[8 /*5*/].f_4, 1, 1.5f))
								{
									iParam1->f_8 = 8;
								}
								else if (!__LIB_13__::func_516(Global_35, Local_766[9 /*5*/].f_4, 1, 1.5f))
								{
									iParam1->f_8 = 9;
								}
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_766[iParam1->f_8 /*5*/], 1f, 0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 35, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
								iParam1->f_6 = 1;
							}
							else if (!PED::IS_PED_IN_COVER(*iParam1, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam1))
							{
								switch (iParam1->f_8)
								{
									case 8:
										if (__LIB_13__::func_516(Global_35, Local_766[8 /*5*/].f_4, 1, 1.5f))
										{
											func_313(iParam1, 15, 0, -1);
										}
										break;
									case 9:
										if (__LIB_13__::func_516(Global_35, Local_766[9 /*5*/].f_4, 1, 1.5f))
										{
											func_313(iParam1, 15, 0, -1);
										}
										break;
								}
							}
							break;
						case 9:
							if (iParam1->f_6 == 0)
							{
								PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[17], 0, 0, 0);
								iParam1->f_5 = 17;
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(*iParam1, VOLUME::_GET_VOLUME_COORDS(iLocal_631[17]), Local_336[0 /*19*/], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000, 0);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(*iParam1, true);
								WEAPON::_0x5230D3F6EE56CFE6(*iParam1, 0);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else if (__LIB_1__::func_205(*iParam1, iLocal_631[17], 1, 0))
							{
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(*iParam1, false);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								func_313(iParam1, 15, 0, 3);
							}
							break;
						case 11:
							if (iParam1->f_6 == 0)
							{
								TASK::TASK_SHOOT_AT_COORD(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_336[0 /*19*/], false, false), 4000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
								PED::_0x1F44B7E283C09EDE(*iParam1, 4f, 4000);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 12, true);
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -653332088, true) == 8)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 12, false);
								func_313(iParam1, 15, 0, 5);
							}
							break;
						case 600:
							if (iParam1->f_6 == 0)
							{
								if (PED::IS_PED_INJURED(Local_126[2 /*19*/]) && !PED::IS_PED_RAGDOLL(Local_126[2 /*19*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_126[2 /*19*/], false, false), 1f, 20000, (0.25f * 10f), 1, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_126[2 /*19*/], 0, -1f, -1f, -1f);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									iParam1->f_6 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8)
							{
								func_313(iParam1, 15, 0, 7);
							}
							break;
					}
					if ((__LIB_0__::func_27(iLocal_863, 4) && __LIB_0__::func_27(iLocal_863, 32)) && __LIB_0__::func_27(iLocal_863, 256))
					{
						if (PED::IS_PED_INJURED(Local_336[0 /*19*/]) || PED::_IS_PED_HOGTIED(Local_336[0 /*19*/]))
						{
							__LIB_2__::func_608(&uLocal_547);
							__LIB_1__::func_683(&iLocal_860, 2097152);
							func_313(iParam1, 3, 0, 0);
						}
					}
					break;
				case 3:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, -2186.403f, 714.8924f, 121.268f, (1f * 1.25f), 40000, (0.25f * 4f), 1, 287f);
								iParam1->f_6 = 1;
							}
							else
							{
								if (!func_734(23))
								{
									if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_29))
									{
										if (__LIB_12__::func_876(uParam0, "ODR6_GOBARN", 0))
										{
											func_738(23, 1);
										}
									}
								}
								if (__LIB_0__::func_94(*iParam1, -2183.386f, 716.8393f, 121.3069f, 1) < 5f && __LIB_0__::func_94(Global_35, -2183.386f, 716.8393f, 121.3069f, 1) > 5f)
								{
									func_313(iParam1, 3, 0, 1);
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								Var22.f_10 = -1082130432;
								Var22 = *iParam1;
								Var22.f_14 = { -2183.386f, 716.8393f, 121.3069f };
								Var22.f_4 = 2;
								Var22.f_7 = 1;
								Var22.f_8 = 0;
								Var22.f_9 = 1f;
								Var22.f_5 = -1;
								Var22.f_3 = Local_766[11 /*5*/].f_4;
								Var22.f_17 = 0;
								Var22.f_10 = 1f;
								Var22.f_18 = 1;
								AICOVERPOINT::TASK_ENTER_COVER(&Var22);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 33, true);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
								iParam1->f_6 = 1;
							}
							else if (__LIB_13__::func_516(*iParam1, Local_766[11 /*5*/].f_4, 0, 1077936128 /* Float: 3f */))
							{
								__LIB_2__::func_608(&uLocal_553);
								func_313(iParam1, 4, 0, 0);
							}
							else if (!__LIB_0__::func_163(*iParam1, 578916952) && __LIB_0__::func_94(Global_35, -2183.386f, 716.8393f, 121.3069f, 1) > 5f)
							{
								iParam1->f_6 = 0;
							}
							break;
					}
					break;
				case 4:
					if (!__LIB_0__::func_27(iLocal_860, 67108864))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(*iParam1);
						__LIB_1__::func_683(&iLocal_860, 67108864);
					}
					else if (!__LIB_0__::func_27(iLocal_860, 134217728))
					{
						if (__LIB_0__::func_27(iLocal_863, 2048))
						{
							if (PED::IS_TRACKED_PED_VISIBLE(*iParam1))
							{
								if (!__LIB_2__::func_618(&uLocal_553))
								{
									__LIB_8__::func_901(&uLocal_553, 0);
								}
								if (__LIB_2__::func_618(&uLocal_553) && __LIB_2__::func_611(&uLocal_553))
								{
									__LIB_11__::func_595(&uLocal_553);
								}
							}
							else if (__LIB_2__::func_618(&uLocal_553))
							{
								__LIB_11__::func_596(&uLocal_553);
							}
							if ((__LIB_2__::func_618(&uLocal_553) && !__LIB_2__::func_611(&uLocal_553)) && __LIB_11__::func_406(&uLocal_553) >= 500)
							{
								__LIB_1__::func_683(&iLocal_860, 134217728);
							}
						}
					}
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4))
								{
									*uParam4 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst6@ig@rsc3_ig3_shotgun_throat", 0, "pl_rsc3_ig3_sadiefires", false, true);
									ANIMSCENE::LOAD_ANIM_SCENE(*uParam4);
								}
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam4, true, false))
								{
									iParam1->f_12 = MISC::GET_GAME_TIMER() + 20000;
									iParam1->f_6 = 1;
								}
							}
							else
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (!__LIB_0__::func_27(iLocal_863, 2048))
									{
										if (!__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0))
										{
											if ((MISC::GET_GAME_TIMER() - iParam1->f_12) > 0)
											{
												if (__LIB_12__::func_876(uParam0, "ODR6_GOBARNR", 0))
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER() + 15000;
												}
											}
										}
									}
								}
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam4, true, false)) && ENTITY::DOES_ENTITY_EXIST(Local_432[0 /*19*/]))
								{
									if ((iParam1->f_17 <= 31f || (iParam1->f_17 <= 40f && (TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35)))) || (iParam1->f_17 <= 45f && __LIB_0__::func_27(iLocal_860, 134217728)))
									{
										func_313(iParam1, 5, 0, 0);
									}
								}
							}
							break;
					}
					break;
				case 5:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam4, true, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_432[0 /*19*/]) && !PED::IS_PED_INJURED(Local_432[0 /*19*/]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_432[0 /*19*/], true);
										func_322();
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam4, "CS_MrsAdler", *iParam1, 0);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam4, "G_M_M_UNIDUSTER_01", Local_432[0 /*19*/], 0);
										ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam4, 1.15f);
										ANIMSCENE::START_ANIM_SCENE(*uParam4);
										iParam1->f_6 = 1;
									}
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4))
							{
								if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam4, "CS_MrsAdler"))
								{
									Var43.f_2 = -1;
									Var43.f_7 = -1;
									Var43.f_8 = -1082130432;
									Var43.f_12 = -1082130432;
									Var43.f_13 = 1;
									Var43.f_14 = -1082130432;
									Var43 = "rdst62_sadie_walk_cabin";
									Var43.f_1 = 0;
									Var43.f_3 = 4194316;
									Var43.f_13 = 0;
									Var43.f_12 = 1.5f;
									Var43.f_14 = -1f;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var43);
									PED::FORCE_PED_MOTION_STATE(*iParam1, -1415276238, true, 0, false);
									__LIB_1__::func_683(&iLocal_860, 268435456);
									func_313(iParam1, 7, 1, 0);
								}
							}
							break;
					}
					break;
				case 7:
					if (iParam1->f_6 == 0)
					{
						iParam1->f_6 = 1;
					}
					else
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
						{
							switch (iParam1->f_9)
							{
								case 0:
									PED::KNOCK_OFF_PED_PROP(*iParam1, false, true, false, false);
									WEAPON::_SET_PED_INFINITE_AMMO_CLIP(*iParam1, true);
									PED::SET_PED_ACCURACY(*iParam1, 100);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 27, true);
									__LIB_2__::func_279(Local_432[1 /*19*/], 1);
									__LIB_2__::func_279(Local_432[2 /*19*/], 1);
									if (!PED::IS_PED_INJURED(Local_432[1 /*19*/]))
									{
										TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(*iParam1, Local_432[1 /*19*/], 0, -1082130432 /* Float: -1f */);
									}
									iParam1->f_7 = MISC::GET_GAME_TIMER();
									func_313(iParam1, 7, 1, 1);
									break;
								case 1:
									if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > 500)
									{
										if (!PED::IS_PED_INJURED(Local_432[1 /*19*/]))
										{
											TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam1, Local_432[1 /*19*/], 0, 0, -1082130432 /* Float: -1f */);
										}
										func_313(iParam1, 7, 1, 2);
									}
									break;
								case 2:
									if (PED::IS_PED_INJURED(Local_432[1 /*19*/]))
									{
										TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(*iParam1);
										func_313(iParam1, 7, 1, 3);
									}
									break;
								case 3:
									if (!PED::IS_PED_INJURED(Local_432[2 /*19*/]))
									{
										TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(*iParam1, Local_432[2 /*19*/], 0, -1082130432 /* Float: -1f */);
									}
									iParam1->f_7 = MISC::GET_GAME_TIMER();
									func_313(iParam1, 7, 1, 4);
									break;
								case 4:
									if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > 500)
									{
										if (!PED::IS_PED_INJURED(Local_432[2 /*19*/]))
										{
											TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam1, Local_432[2 /*19*/], 0, 0, -1082130432 /* Float: -1f */);
										}
										func_313(iParam1, 7, 1, 5);
									}
									break;
								case 5:
									if (PED::IS_PED_INJURED(Local_432[1 /*19*/]) && PED::IS_PED_INJURED(Local_432[2 /*19*/]))
									{
										TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(*iParam1);
										func_313(iParam1, 7, 1, 6);
									}
									break;
							}
							switch (iParam1->f_9)
							{
								case 0:
								case 1:
								case 2:
								case 3:
								case 4:
								case 5:
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 2f, 0, -1082130432 /* Float: -1f */, 0);
									break;
								default:
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 2f, 0, -1082130432 /* Float: -1f */, 0);
									break;
							}
						}
						if (!__LIB_0__::func_27(iLocal_860, 536870912))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1) >= 21)
							{
								__LIB_1__::func_683(&iLocal_860, 536870912);
							}
						}
					}
					break;
			}
		}
	}
}

bool func_501(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0)))
		{
			return true;
		}
	}
	return false;
}

void func_502(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (!func_734(4))
	{
		if (!__LIB_2__::func_618(&uLocal_547))
		{
			fLocal_541 = 0f;
			__LIB_13__::func_89(uParam0, "RDST62_O_GTS", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_900(11);
			func_952(2);
			__LIB_5__::func_107(&uLocal_547);
			__LIB_5__::func_107(&uLocal_550);
		}
		else
		{
			if (!func_734(4))
			{
				if (__LIB_5__::func_352("RDST62_O_GTS"))
				{
					func_738(4, 1);
				}
			}
			if (!func_734(4) && !__LIB_5__::func_352("RDST62_O_GTS"))
			{
				bVar0 = (func_734(25) && !__LIB_8__::func_684("ODR6_CABIN"));
				iVar1 = __LIB_13__::func_494(&fLocal_541, Local_29.f_17);
				if (bVar0 == 1 || iVar1 == 0)
				{
					if (((__LIB_5__::func_51(&uLocal_547) > 12f || __LIB_5__::func_51(&uLocal_550) > 7f) || Local_29.f_17 > 65f) || bVar0 == 1)
					{
						__LIB_12__::func_883(uParam0, "RDST62_O_GTS", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_738(4, 1);
					}
				}
				else
				{
					__LIB_5__::func_107(&uLocal_547);
					__LIB_5__::func_107(&uLocal_550);
				}
				if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
				{
					__LIB_5__::func_107(&uLocal_550);
				}
			}
		}
	}
	if (!func_734(24))
	{
		if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
		{
			if (__LIB_12__::func_876(uParam0, "ODR6_CLEAR", 0))
			{
				func_738(24, 1);
			}
		}
	}
	else if (!func_734(25))
	{
		if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
		{
			if (__LIB_12__::func_876(uParam0, "ODR6_CABIN", 0))
			{
				func_738(25, 1);
			}
		}
	}
	if (!func_734(26))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_631[4], 1, 0) && func_501(Global_35))
		{
			if (__LIB_1__::func_472(Local_29, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_738(26, 1);
			}
			else if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "ODR6_WHERESAD", 0))
				{
					func_738(26, 1);
				}
			}
		}
	}
}

void func_506(var uParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_0__::func_272(*iParam1, 10))
		{
			iParam1->f_17 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Local_29, 1, 1);
			if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
			{
				iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
				MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -662251075);
			}
			if (!__LIB_0__::func_27(iLocal_860, 65536))
			{
				if (func_958(iParam1, Global_35, 1))
				{
					__LIB_1__::func_683(&iLocal_860, 65536);
				}
			}
			switch (iParam1->f_3)
			{
				case 12:
					if (iParam2 == 1)
					{
						if (!__LIB_0__::func_27(iParam1->f_10, 131072))
						{
							if (((func_734(28) || func_734(30)) || func_734(32)) || func_734(34))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
								__LIB_1__::func_683(&(iParam1->f_10), 131072);
							}
						}
					}
					if (!__LIB_0__::func_27(iParam1->f_10, 16384))
					{
						if ((((ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*19*/]) && ENTITY::IS_ENTITY_DEAD(Local_48[0 /*19*/])) && __LIB_9__::func_225(Local_29, Local_48[0 /*19*/])) || ((ENTITY::DOES_ENTITY_EXIST(Local_48[1 /*19*/]) && ENTITY::IS_ENTITY_DEAD(Local_48[1 /*19*/])) && __LIB_9__::func_225(Local_29, Local_48[1 /*19*/]))) || (((__LIB_8__::func_684("ODR6_G1RECSADIE") || __LIB_8__::func_684("ODR6_G2RECSADIE")) || __LIB_8__::func_684("ODR6_G3RECSADIE")) || __LIB_8__::func_684("ODR6_G8RECSADIE")))
						{
							func_313(iParam1, 12, 0, 4);
							__LIB_1__::func_683(&(iParam1->f_10), 16384);
						}
					}
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								if (!__LIB_0__::func_27(iLocal_860, 8192))
								{
									switch (iParam2)
									{
										case 0:
											TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_GUARD_LEAN_WALL"), 0, false, 0, -1f, false);
											break;
										case 1:
											TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_SMOKE"), 0, false, 0, -1f, false);
											break;
									}
								}
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_29, "rdst62_sadie_walk") && TASK::GET_PED_WAYPOINT_PROGRESS(Local_29) >= 16)
							{
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								func_313(iParam1, 12, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > iParam2 * 100)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									switch (iParam2)
									{
										case 0:
											PED::_0xEC6935EBE0847B90(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_29, false, false));
											break;
										case 1:
											PED::_0xEC6935EBE0847B90(*iParam1, ENTITY::GET_ENTITY_COORDS(Local_29, false, false));
											break;
									}
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Local_29, -1, 3072, 51, 1);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Local_29, 0, -1f, -1f, -1f);
									iParam1->f_7 = MISC::GET_GAME_TIMER();
									iParam1->f_6 = 1;
								}
							}
							else if ((((func_734(28) || func_734(30)) || func_734(32)) || func_734(34)) || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_29, "rdst62_sadie_walk") && TASK::GET_PED_WAYPOINT_PROGRESS(Local_29) >= 18))
							{
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								func_313(iParam1, 12, 0, 2);
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								Var0.f_2 = -1;
								Var0.f_7 = -1;
								Var0.f_8 = -1082130432;
								Var0.f_12 = -1082130432;
								Var0.f_13 = 1;
								Var0.f_14 = -1082130432;
								Var0 = "rdst62_gate_enemies_walk";
								Var0.f_1 = 13;
								Var0.f_12 = 1f;
								Var0.f_3 = 4213762;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								switch (iParam2)
								{
									case 0:
										Var0.f_10 = 1f;
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var0);
										break;
									case 1:
										Var0.f_10 = -1f;
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var0);
										break;
								}
								iParam1->f_6 = 1;
							}
							else
							{
								switch (iParam2)
								{
									case 0:
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
										{
											TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 1.35f, 0, -1f, 1);
											if (TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1) >= 19)
											{
												iParam1->f_7 = MISC::GET_GAME_TIMER();
												func_313(iParam1, 12, 0, 3);
											}
										}
										break;
									case 1:
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
										{
											TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 1.39f, 0, -1f, 1);
											if (TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1) >= 18)
											{
												iParam1->f_7 = MISC::GET_GAME_TIMER();
												func_313(iParam1, 12, 0, 3);
											}
										}
										break;
								}
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > iParam2 * 500)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									switch (iParam2)
									{
										case 0:
											TASK::TASK_LOOK_AT_ENTITY(*iParam1, Local_29, -1, 3072, 51, 1);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Local_29, 0, -1f, -1f, -1f);
											break;
										case 1:
											TASK::TASK_LOOK_AT_ENTITY(*iParam1, Local_29, -1, 3072, 51, 1);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Local_29, 0, -1f, -1f, -1f);
											break;
									}
									iParam1->f_6 = 1;
								}
							}
							break;
					}
					if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_869, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_869) > 0.73f) || __LIB_0__::func_27(iLocal_860, 65536))
					{
						__LIB_1__::func_683(&iLocal_860, 65536);
						__LIB_1__::func_683(&iLocal_860, 262144);
						PED::_0x73B6F907B913C860(*iParam1, 1f);
						__LIB_2__::func_279(*iParam1, 1);
						func_313(iParam1, 15, 0, 0);
					}
					break;
				case 15:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
									}
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
									}
									PED::SET_PED_ACCURACY(*iParam1, 35);
									PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
									PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
									PED::_0x9238A3D970BBB0A9(*iParam1, -820192119);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2184.66f, 680.6454f, 119.4183f, 5f, 0, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 16384, 0);
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							break;
					}
					break;
			}
		}
		else if (!__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_1__::func_683(&(iParam1->f_10), 1);
		}
	}
}

void func_507(var uParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_0__::func_272(*iParam1, 10))
		{
			iParam1->f_17 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Local_29, 1, 1);
			if (!__LIB_0__::func_27(iLocal_860, 65536))
			{
				if (func_958(iParam1, Global_35, 0))
				{
					__LIB_1__::func_683(&iLocal_860, 65536);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_10, 32))
			{
				if (__LIB_0__::func_27(iLocal_860, 65536) && !__LIB_0__::func_27(iLocal_860, 262144))
				{
					__LIB_1__::func_683(&(iParam1->f_10), 32);
				}
			}
			if (__LIB_0__::func_27(iParam1->f_10, 128))
			{
				PED::_0xD05AD61F242C626B(*iParam1, 0f);
			}
			else
			{
				PED::_0xD05AD61F242C626B(*iParam1, 1f);
			}
			switch (iParam1->f_3)
			{
				case 9:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
							}
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3);
								if (__LIB_0__::func_27(iParam1->f_10, 32))
								{
									if (fVar0 >= 0.3075f)
									{
										func_313(iParam1, 15, 0, 0);
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								iParam1->f_6 = 1;
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3);
								if (__LIB_0__::func_27(iParam1->f_10, 32))
								{
									if (fVar0 >= 0.3265f)
									{
										func_313(iParam1, 15, 0, 0);
									}
								}
							}
							break;
					}
					break;
				case 11:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								if (__LIB_0__::func_27(iParam1->f_10, 2))
								{
									fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3);
									if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1))
									{
										AUDIO::PLAY_PAIN(*iParam1, 1, 0f, false, false);
									}
									switch (iParam1->f_9)
									{
										case 0:
											if (fVar0 >= 0.396f)
											{
												PED::_0x4C57F27D1554E6B0(*iParam1, -2168.32f, 714.4f, 125.4f, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
												iParam1->f_9++;
											}
											break;
										case 1:
											if (fVar0 >= 0.5f)
											{
												PED::_0x4C57F27D1554E6B0(*iParam1, -2174.23f, 712.06f, 127.49f, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
												iParam1->f_9++;
											}
											break;
										case 2:
											if (fVar0 >= 0.514f)
											{
												PED::_0x4C57F27D1554E6B0(*iParam1, -2237.55f, 733.3f, 140.11f, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
												iParam1->f_9++;
											}
											break;
									}
									if (!__LIB_0__::func_27(iParam1->f_10, 4))
									{
										if (fVar0 >= 0.43f)
										{
											FIRE::START_SCRIPT_FIRE(-2166.95f, 700.3f, 121.58f, 10, 0f, false, 0, -1f, 4);
											__LIB_1__::func_683(&(iParam1->f_10), 4);
										}
									}
									if (!__LIB_0__::func_27(iParam1->f_10, 65536))
									{
										if (fVar0 >= 0.52f)
										{
											WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 0, 0, 0);
											__LIB_1__::func_683(&(iParam1->f_10), 65536);
										}
									}
									if (!__LIB_0__::func_27(iParam1->f_10, 8))
									{
										if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3) >= 0.85f)
										{
											ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
											ENTITY::SET_ENTITY_MAX_HEALTH(*iParam1, 50);
											ENTITY::_SET_ENTITY_HEALTH(*iParam1, 50, 0);
											FIRE::START_ENTITY_FIRE(*iParam1, 0f, PED::GET_PED_BONE_INDEX(*iParam1, 33646), 0);
											__LIB_1__::func_683(&(iParam1->f_10), 8);
										}
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								iParam1->f_6 = 1;
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								if (__LIB_0__::func_27(iParam1->f_10, 2))
								{
									fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam3);
									if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1))
									{
										AUDIO::PLAY_PAIN(*iParam1, 1, 0f, false, false);
									}
									if (!__LIB_0__::func_27(iParam1->f_10, 65536))
									{
										if (fVar0 >= 0.015f)
										{
											WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 0, 0, 0);
											__LIB_1__::func_683(&(iParam1->f_10), 65536);
										}
									}
									if (!__LIB_0__::func_27(iParam1->f_10, 8))
									{
										if (fVar0 >= 0.8f)
										{
											ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
											ENTITY::SET_ENTITY_MAX_HEALTH(*iParam1, 50);
											ENTITY::_SET_ENTITY_HEALTH(*iParam1, 50, 0);
											FIRE::START_ENTITY_FIRE(*iParam1, 0f, PED::GET_PED_BONE_INDEX(*iParam1, 33646), 0);
											__LIB_1__::func_683(&(iParam1->f_10), 8);
										}
									}
								}
							}
							break;
					}
					break;
				case 15:
					switch (iParam1->f_9)
					{
						case 0:
							__LIB_1__::func_681(&(iParam1->f_10), 128);
							if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
							{
								iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
							}
							if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
							{
								MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
							}
							PED::SET_PED_ACCURACY(*iParam1, 35);
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
							if (iParam1->f_6 == 0)
							{
								switch (iParam2)
								{
									case 0:
										if (!bLocal_879)
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2168.859f, 694.9164f, 120.0553f, 1.5f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 1:
										if (!bLocal_879)
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2172.477f, 691.153f, 119.8547f, 1.5f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
								}
							}
							break;
					}
					break;
			}
		}
		else if (!__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_1__::func_683(&(iParam1->f_10), 1);
		}
		if (iParam2 == 0)
		{
			switch (Local_87[0 /*19*/].f_3)
			{
				case 9:
					if (Local_87[0 /*19*/].f_6 == 0)
					{
						func_959(0);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								if (!PED::IS_PED_INJURED(Local_87[0 /*19*/]))
								{
									__LIB_1__::func_683(&(Local_87[0 /*19*/].f_10), 128);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[0 /*19*/], true);
									ENTITY::SET_ENTITY_PROOFS(Local_87[0 /*19*/], 2, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[0 /*19*/], true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "G_M_M_UNIDUSTER_01", Local_87[0 /*19*/], 0);
								}
								if (!PED::IS_PED_INJURED(Local_87[1 /*19*/]))
								{
									__LIB_1__::func_683(&(Local_87[1 /*19*/].f_10), 128);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[1 /*19*/], true);
									ENTITY::SET_ENTITY_PROOFS(Local_87[1 /*19*/], 2, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[1 /*19*/], true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "G_M_M_UNIDUSTER_01^1", Local_87[1 /*19*/], 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_661) && !ENTITY::IS_ENTITY_DEAD(iLocal_661))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "p_chair02x", iLocal_661, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_662) && !ENTITY::IS_ENTITY_DEAD(iLocal_662))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "p_chair02x^1", iLocal_662, 0);
								}
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_ig6_eof_sitidle", true);
								ANIMSCENE::START_ANIM_SCENE(*iParam3);
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_ig6_eof_sittocover");
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_ig6_eof_covertoonfire");
								Local_87[0 /*19*/].f_6 = 1;
								Local_87[1 /*19*/].f_6 = 1;
							}
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
					{
						if ((__LIB_0__::func_27(iLocal_860, 65536) || __LIB_0__::func_27(Local_87[0 /*19*/].f_10, 32)) || __LIB_0__::func_27(Local_87[1 /*19*/].f_10, 32))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_ig6_eof_sittocover"))
							{
								if (__LIB_0__::func_27(Local_87[0 /*19*/].f_10, 32) || __LIB_0__::func_27(Local_87[1 /*19*/].f_10, 32))
								{
									__LIB_1__::func_683(&(Local_87[0 /*19*/].f_10), 32);
									__LIB_1__::func_683(&(Local_87[1 /*19*/].f_10), 32);
								}
								func_313(&(Local_87[0 /*19*/]), 10, 0, 0);
								func_313(&(Local_87[1 /*19*/]), 10, 0, 0);
							}
						}
					}
					break;
				case 10:
					if (Local_87[0 /*19*/].f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
							{
								if (!PED::IS_PED_INJURED(Local_87[0 /*19*/]))
								{
									__LIB_1__::func_683(&(Local_87[0 /*19*/].f_10), 128);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[0 /*19*/], true);
									ENTITY::SET_ENTITY_PROOFS(Local_87[0 /*19*/], 2, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[0 /*19*/], true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "G_M_M_UNIDUSTER_01", Local_87[0 /*19*/], 0);
								}
								if (!PED::IS_PED_INJURED(Local_87[1 /*19*/]))
								{
									__LIB_1__::func_683(&(Local_87[1 /*19*/].f_10), 128);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[1 /*19*/], true);
									ENTITY::SET_ENTITY_PROOFS(Local_87[1 /*19*/], 2, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[1 /*19*/], true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "G_M_M_UNIDUSTER_01^1", Local_87[1 /*19*/], 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_661) && !ENTITY::IS_ENTITY_DEAD(iLocal_661))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "p_chair02x", iLocal_661, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_662) && !ENTITY::IS_ENTITY_DEAD(iLocal_662))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "p_chair02x^1", iLocal_662, 0);
								}
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_ig6_eof_sittocover", true);
								ANIMSCENE::START_ANIM_SCENE(*iParam3);
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_ig6_eof_covertoonfire");
							}
							else
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_ig6_eof_sittocover", true);
								ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_ig6_eof_covertoonfire");
							}
							Local_87[0 /*19*/].f_6 = 1;
							Local_87[1 /*19*/].f_6 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
					{
						if (!__LIB_0__::func_27(iParam1->f_10, 32))
						{
							if (ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pl_ig6_eof_sittocover"))
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_ig6_eof_coveridle", 1))
								{
									if (__LIB_0__::func_27(iLocal_860, 8388608))
									{
										if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_ig6_eof_covertoonfire"))
										{
											Local_87[0 /*19*/].f_7 = MISC::GET_GAME_TIMER();
											func_313(&(Local_87[0 /*19*/]), 11, 0, 0);
											func_313(&(Local_87[1 /*19*/]), 11, 0, 0);
										}
									}
								}
							}
						}
					}
					break;
				case 11:
					if (Local_87[0 /*19*/].f_6 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
						{
							if ((MISC::GET_GAME_TIMER() - Local_87[0 /*19*/].f_7) > 2500)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_ig6_eof_covertoonfire", true);
								if (!PED::IS_PED_INJURED(Local_87[0 /*19*/]))
								{
									PED::SET_PED_CONFIG_FLAG(Local_87[0 /*19*/], 18, true);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_87[0 /*19*/], 57460);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[0 /*19*/], true);
									ENTITY::SET_ENTITY_PROOFS(Local_87[0 /*19*/], 0, false);
									ENTITY::SET_ENTITY_MAX_HEALTH(Local_87[0 /*19*/], 400);
									ENTITY::_SET_ENTITY_HEALTH(Local_87[0 /*19*/], 400, 0);
									FIRE::START_ENTITY_FIRE(Local_87[0 /*19*/], 0f, PED::GET_PED_BONE_INDEX(*iParam1, 54187), 0);
									ENTITY::SET_ENTITY_PROOFS(Local_87[0 /*19*/], 2, false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[0 /*19*/], true);
									PED::SET_PED_CONFIG_FLAG(Local_87[0 /*19*/], 354, true);
									__LIB_1__::func_683(&(Local_87[0 /*19*/].f_10), 2);
									__LIB_1__::func_681(&(Local_87[0 /*19*/].f_10), 8);
								}
								if (!PED::IS_PED_INJURED(Local_87[1 /*19*/]))
								{
									PED::SET_PED_CONFIG_FLAG(Local_87[1 /*19*/], 18, true);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_87[1 /*19*/], 57460);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[1 /*19*/], true);
									ENTITY::SET_ENTITY_PROOFS(Local_87[1 /*19*/], 0, false);
									ENTITY::SET_ENTITY_MAX_HEALTH(Local_87[1 /*19*/], 400);
									ENTITY::_SET_ENTITY_HEALTH(Local_87[1 /*19*/], 400, 0);
									FIRE::START_ENTITY_FIRE(Local_87[1 /*19*/], 0f, PED::GET_PED_BONE_INDEX(*iParam1, 54187), 0);
									ENTITY::SET_ENTITY_PROOFS(Local_87[1 /*19*/], 2, false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[1 /*19*/], true);
									PED::SET_PED_CONFIG_FLAG(Local_87[1 /*19*/], 354, true);
									__LIB_1__::func_683(&(Local_87[1 /*19*/].f_10), 2);
									__LIB_1__::func_681(&(Local_87[1 /*19*/].f_10), 8);
								}
								Local_87[0 /*19*/].f_9 = 0;
								Local_87[1 /*19*/].f_9 = 0;
								Local_87[0 /*19*/].f_6 = 1;
								Local_87[1 /*19*/].f_6 = 1;
							}
						}
					}
					break;
			}
		}
	}
}

void func_508(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_0__::func_272(*iParam1, 10))
		{
			iParam1->f_17 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Local_29, 1, 1);
			if (!__LIB_0__::func_27(iLocal_860, 65536))
			{
				if (func_958(iParam1, Global_35, 0))
				{
					__LIB_1__::func_683(&iLocal_860, 65536);
				}
			}
			switch (iParam1->f_3)
			{
				case 0:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								switch (iParam2)
								{
									case 0:
										TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_PEE"), 0, false, 0, -1f, false);
										break;
									case 1:
										TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_GUARD_LEAN_WALL"), 0, false, 0, -1f, false);
										break;
									case 2:
										TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_DRINKING_DRUNK"), 0, false, 0, -1f, false);
										break;
									case 3:
										TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_LEAN_BACK_WALL_DRINKING"), 0, false, 0, -1f, false);
										break;
									case 4:
										TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_PEE"), 0, false, 0, -1f, false);
										break;
									case 5:
										TASK::TASK_STAND_STILL(*iParam1, -1);
										break;
									case 6:
										TASK::TASK_STAND_STILL(*iParam1, -1);
										break;
									case 7:
										TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_DRINKING_DRUNK"), 0, false, 0, -1f, false);
										break;
									case 8:
									case 9:
									case 10:
										TASK::TASK_STAND_STILL(*iParam1, -1);
										break;
								}
								PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
								iParam1->f_6 = 1;
							}
							else
							{
								switch (iParam2)
								{
									case 5:
										if (__LIB_1__::func_205(Global_35, iLocal_631[12], 1, 0) || __LIB_1__::func_205(Local_29, iLocal_631[12], 1, 0))
										{
											func_313(iParam1, 13, 0, 0);
										}
										break;
								}
							}
							break;
					}
					if (__LIB_0__::func_27(iLocal_860, 65536))
					{
						if (iParam2 < 8)
						{
							func_313(iParam1, 15, 0, 0);
						}
						else
						{
							func_313(iParam1, 15, 0, 1);
						}
					}
					break;
				case 13:
					if (iParam1->f_6 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						switch (iParam2)
						{
							case 5:
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2212.493f, 724.4184f, 121.8532f, 1f, 20000, (0.25f * 4f), 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2208.574f, 719.4556f, 121.5418f, 1f, 20000, (0.25f * 4f), 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2200.055f, 713.0621f, 121.3303f, 1f, 20000, (0.25f * 4f), 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2191.766f, 711.5297f, 121.1672f, 1f, 20000, (0.25f * 4f), 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2185.48f, 713.3965f, 121.285f, 1f, 20000, (0.25f * 4f), 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2182.201f, 714.2763f, 121.3005f, 1f, 20000, (0.25f * 2f), 512, 112.5082f);
								TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_GUARD_LAZY"), 0, true, 0, -1f, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								break;
						}
						iParam1->f_6 = 1;
					}
					if (__LIB_0__::func_27(iLocal_860, 65536))
					{
						if (iParam2 < 8)
						{
							func_313(iParam1, 15, 0, 0);
						}
						else
						{
							func_313(iParam1, 15, 0, 1);
						}
					}
					break;
				case 15:
					if (!__LIB_0__::func_27(iParam1->f_10, 64))
					{
						if (__LIB_0__::func_27(iLocal_860, 16777216))
						{
							func_960(iParam1, Local_29, 1, 0);
							__LIB_1__::func_683(&(iParam1->f_10), 64);
						}
					}
					else if (!__LIB_0__::func_27(iLocal_860, 16777216))
					{
						if (!__LIB_0__::func_27(iParam1->f_10, 256))
						{
							func_960(iParam1, Local_29, 0, 0);
							__LIB_1__::func_681(&(iParam1->f_10), 64);
						}
					}
					if (__LIB_0__::func_27(iParam1->f_10, 64))
					{
						PED::_0xD05AD61F242C626B(Global_35, 1f);
						PED::_0xD05AD61F242C626B(Local_29, 0f);
					}
					else
					{
						PED::_0xD05AD61F242C626B(Global_35, 1f);
						PED::_0xD05AD61F242C626B(Local_29, 1f);
					}
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
									}
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
									}
									PED::SET_PED_ACCURACY(*iParam1, 35);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 43, false);
									PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
									PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[18], 0, 0, 0);
									iParam1->f_5 = 18;
									PED::_0x9238A3D970BBB0A9(*iParam1, -820192119);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
									PED::_0x73B6F907B913C860(*iParam1, 1f);
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							else if (iLocal_865 >= 9)
							{
								func_313(iParam1, 15, 0, 2);
							}
							else if (iLocal_865 >= 5)
							{
								if (iParam1->f_5 != 20)
								{
									PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[20], 0, 0, 0);
									iParam1->f_5 = 20;
								}
							}
							else if (iLocal_865 >= 3)
							{
								if (iParam1->f_5 != 19 && iParam1->f_5 != 16)
								{
									if (iLocal_27 == 16)
									{
										PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[19], 0, 0, 0);
										iParam1->f_5 = 19;
										iLocal_27 = 19;
									}
									else
									{
										PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[16], 0, 0, 0);
										iParam1->f_5 = 16;
										iLocal_27 = 16;
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
									}
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
									}
									switch (iParam2)
									{
										case 8:
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2199.519f, 729.7388f, 121.7645f, 2.5f, 1, 0, 0);
											break;
										case 9:
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2190.423f, 725.0308f, 121.3561f, 2.5f, 1, 0, 0);
											break;
										case 10:
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 6f, 1, 0, 0);
											break;
									}
									PED::_0x9238A3D970BBB0A9(*iParam1, -820192119);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
									PED::_0x73B6F907B913C860(*iParam1, 1f);
									PED::SET_PED_ACCURACY(*iParam1, 35);
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							else if (iLocal_865 >= 9)
							{
								func_313(iParam1, 15, 0, 2);
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
								PED::SET_PED_ACCURACY(*iParam1, 35);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 35, true);
								PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
								iParam1->f_6 = 1;
							}
							break;
					}
					break;
			}
		}
		else if (!__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_1__::func_683(&(iParam1->f_10), 1);
			iLocal_865++;
		}
	}
}

void func_509(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_0__::func_272(*iParam1, 10))
		{
			iParam1->f_17 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Local_29, 1, 1);
			if (!__LIB_0__::func_27(iLocal_860, 65536))
			{
				if (func_958(iParam1, Global_35, 0))
				{
					__LIB_1__::func_683(&iLocal_860, 65536);
				}
			}
			switch (iParam1->f_3)
			{
				case 0:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_STAND_STILL(*iParam1, -1);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 43, true);
								iParam1->f_6 = 1;
							}
							break;
					}
					if (__LIB_0__::func_27(iLocal_860, 65536))
					{
						func_313(iParam1, 15, 0, 0);
					}
					break;
				case 15:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
								{
									iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
								}
								if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
								{
									MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
								}
								switch (iParam2)
								{
									case 0:
										func_313(iParam1, 14, 0, 0);
										break;
									case 1:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 246, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 43, false);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_665[15 /*5*/], 1f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 2:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 246, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 43, false);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_665[16 /*5*/], 1f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 3:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 246, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 43, false);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_665[12 /*5*/], 1f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 4:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 246, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, true);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 43, false);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_665[14 /*5*/], 1f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
								}
							}
							else if (func_961(iParam1))
							{
								func_313(&(Local_336[1 /*19*/]), 15, 0, 1);
								func_313(&(Local_336[2 /*19*/]), 15, 0, 1);
								func_313(&(Local_336[3 /*19*/]), 15, 0, 1);
								func_313(&(Local_336[4 /*19*/]), 15, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								switch (iParam2)
								{
									case 1:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2217.656f, 739.4409f, 126.7704f, 0.75f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 2:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, -2222.438f, 734.5979f, 126.7634f, 0.75f, 1, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 3:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[10], 0, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
									case 4:
										if (!bLocal_879)
										{
											PED::SET_PED_CONFIG_FLAG(*iParam1, 79, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 32, false);
											PED::SET_PED_CONFIG_FLAG(*iParam1, 34, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 11, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
											PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
											PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
											PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[10], 0, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
											iParam1->f_6 = 1;
											bLocal_879 = true;
										}
										break;
								}
							}
							else
							{
								switch (iParam2)
								{
									case 1:
										if ((__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0) && __LIB_1__::func_205(*iParam1, iLocal_631[9], 1, 0)) || (PED::IS_PED_RAGDOLL(*iParam1) && !__LIB_0__::func_266(*iParam1, -2217.656f, 739.4409f, 126.7704f, 2f, 1, 1)))
										{
											func_313(iParam1, 15, 0, 3);
										}
										break;
									case 2:
										if ((__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0) && __LIB_1__::func_205(*iParam1, iLocal_631[9], 1, 0)) || (PED::IS_PED_RAGDOLL(*iParam1) && !__LIB_0__::func_266(*iParam1, -2222.438f, 734.5979f, 126.7634f, 2f, 1, 1)))
										{
											func_313(iParam1, 15, 0, 3);
										}
										break;
								}
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, false);
									PED::SET_PED_COMBAT_RANGE(*iParam1, 1);
									PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
									PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_631[9], 0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
									TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							break;
						case 10:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
									TASK::TASK_COMBAT_PED(*iParam1, Local_29, 16777216, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 27, true);
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							break;
					}
					break;
				case 14:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_STAND_STILL(*iParam1, -1);
								iParam1->f_6 = 1;
							}
							else if ((__LIB_1__::func_205(Global_35, iLocal_631[15], 1, 0) || __LIB_1__::func_205(Local_29, iLocal_631[15], 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0))
							{
								func_318(0);
								__LIB_1__::func_683(&iLocal_860, 1048576);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								func_313(iParam1, 14, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
								{
									iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
								}
								if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
								{
									MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
								}
								if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > 1000)
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, true);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 138, true);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 354, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(*iParam1, Local_665[18 /*5*/], Local_665[4 /*5*/], 1.5f, 0, (0.25f * 1f), 0.5f, 1, 1049604, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
									PED::FORCE_PED_MOTION_STATE(*iParam1, -1415276238, true, 0, false);
									__LIB_1__::func_683(&iLocal_861, 4096);
									iParam1->f_7 = 0;
									iParam1->f_6 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 432954108, true) == 8 || __LIB_0__::func_266(*iParam1, Local_665[18 /*5*/], (0.25f * 2f), 1, 1))
							{
								func_313(iParam1, 14, 0, 2);
							}
							break;
						case 2:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
									PED::SET_PED_ACCURACY(*iParam1, 1);
									PED::SET_COMBAT_FLOAT(*iParam1, 6, 0.2f);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 27, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 30, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_10), 2048);
									__LIB_1__::func_681(&(iParam1->f_10), 4096);
									__LIB_1__::func_681(&(iParam1->f_10), 8192);
									iParam1->f_11 = 0;
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							else
							{
								if (!__LIB_0__::func_27(iParam1->f_10, 8192))
								{
									if (PED::IS_PED_SHOOTING(*iParam1))
									{
										iParam1->f_11++;
										if (iParam1->f_11 != 0 && (iParam1->f_11 % 3) == 0)
										{
											iParam1->f_7 = MISC::GET_GAME_TIMER();
											__LIB_1__::func_683(&(iParam1->f_10), 8192);
										}
									}
								}
								if (__LIB_0__::func_27(iParam1->f_10, 8192))
								{
									if ((MISC::GET_GAME_TIMER() - iParam1->f_7) > 500)
									{
										if (__LIB_0__::func_27(iParam1->f_10, 2048))
										{
											__LIB_1__::func_681(&(iParam1->f_10), 2048);
										}
										else
										{
											__LIB_1__::func_683(&(iParam1->f_10), 2048);
										}
										if (__LIB_0__::func_27(iParam1->f_10, 4096))
										{
											__LIB_1__::func_681(&(iParam1->f_10), 4096);
										}
										else
										{
											__LIB_1__::func_683(&(iParam1->f_10), 4096);
										}
										__LIB_1__::func_681(&(iParam1->f_10), 8192);
									}
								}
								if (__LIB_0__::func_27(iParam1->f_10, 2048))
								{
									PED::_0xD05AD61F242C626B(Global_35, 0f);
									PED::_0xD05AD61F242C626B(Local_29, 1f);
								}
								else if (__LIB_0__::func_27(iParam1->f_10, 4096))
								{
									PED::_0xD05AD61F242C626B(Global_35, 1f);
									PED::_0xD05AD61F242C626B(Local_29, 0f);
								}
								if (!__LIB_0__::func_27(iLocal_860, 2048) && Local_29.f_3 == 15)
								{
									if (Local_29.f_9 == 9 && __LIB_0__::func_163(Local_29, -1758697641))
									{
										__LIB_1__::func_683(&iLocal_860, 2048);
										func_313(iParam1, 14, 0, 3);
									}
									else if (Local_29.f_9 == 11)
									{
										__LIB_1__::func_683(&iLocal_860, 2048);
										func_313(iParam1, 14, 0, 3);
									}
								}
							}
							break;
						case 3:
							if (iParam1->f_6 == 0)
							{
								if (!bLocal_879)
								{
									PED::SET_PED_ACCURACY(*iParam1, 7);
									TASK::TASK_COMBAT_PED(*iParam1, Local_29, 16777216, 0);
									iParam1->f_6 = 1;
									bLocal_879 = true;
								}
							}
							else if (!__LIB_0__::func_163(Local_29, -1758697641))
							{
								PED::SET_PED_ACCURACY(*iParam1, 65);
								func_313(iParam1, 14, 0, 2);
							}
							break;
						case 4:
							if (iParam1->f_6 == 0)
							{
								TASK::TASK_REACT(*iParam1, Local_29, ENTITY::GET_ENTITY_COORDS(Local_29, false, false), "TaskCombat_Panic", 10f, 0, 4);
								iParam1->f_6 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 2121492476, true) == 8)
							{
								func_313(iParam1, 14, 0, 2);
							}
							break;
					}
					break;
			}
		}
		else
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				if ((iParam2 == 0 && __LIB_9__::func_225(Global_35, *iParam1)) && PED::_0x06FA94C835787C64(*iParam1))
				{
					__LIB_12__::func_967(uParam0, joaat("RDST62_HEADSHOTSNIPER"));
				}
				__LIB_1__::func_683(&(iParam1->f_10), 1);
			}
			if (iParam2 == 0)
			{
				if (!__LIB_0__::func_27(iParam1->f_10, 16))
				{
					if (__LIB_9__::func_225(Global_35, *iParam1))
					{
						CAM::_0xE3639DB78B3B5400(*iParam1);
						__LIB_1__::func_683(&(iParam1->f_10), 16);
					}
				}
			}
		}
	}
}

void func_510(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_0__::func_272(*iParam1, 10))
		{
			iParam1->f_17 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Local_29, 1, 1);
			switch (iParam1->f_3)
			{
				case 0:
					if (iParam1->f_6 == 0)
					{
						switch (iParam2)
						{
							case 0:
							case 1:
							case 2:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_STAND_STILL(*iParam1, -1);
								iParam1->f_6 = 1;
								break;
						}
					}
					else
					{
						switch (iParam2)
						{
							case 1:
							case 2:
								if (!PED::IS_PED_INJURED(Local_29) && Local_29.f_3 == 5)
								{
									func_313(iParam1, 15, 0, 0);
								}
								break;
						}
					}
					break;
				case 15:
					switch (iParam1->f_9)
					{
						case 0:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 354, true);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 138, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_AIM_GUN_AT_ENTITY(*iParam1, Local_29, -1, false, 1);
								iParam1->f_6 = 1;
							}
							else if (!PED::IS_PED_INJURED(Local_29) && Local_29.f_3 == 7)
							{
								func_313(iParam1, 15, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_6 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 27, true);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
								iParam1->f_6 = 1;
							}
							else
							{
								switch (iParam2)
								{
									case 1:
										if ((MISC::GET_GAME_TIMER() - iParam1->f_7) >= 150)
										{
											PED::_0x4C57F27D1554E6B0(*iParam1, -2182.06f, 715.46f, 123.7f, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
											func_313(iParam1, 15, 1, 2);
										}
										break;
									case 2:
										if ((MISC::GET_GAME_TIMER() - iParam1->f_7) >= 550)
										{
											PED::_0x4C57F27D1554E6B0(*iParam1, -2182.43f, 716.45f, 123.35f, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
											func_313(iParam1, 15, 1, 2);
										}
										break;
								}
							}
							break;
					}
					break;
			}
		}
	}
}

bool func_511(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (((PED::IS_PED_INJURED((*iParam0)[iVar0 /*19*/]) || __LIB_0__::func_27((iParam0[iVar0 /*19*/])->f_10, 1)) || __LIB_0__::func_27((iParam0[iVar0 /*19*/])->f_10, 2)) || PED::_IS_PED_HOGTIED((*iParam0)[iVar0 /*19*/]))
		{
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_512()
{
	__LIB_4__::func_389(joaat("DOOR_HAN_01_PROPS_15"), 0, 0);
	__LIB_4__::func_389(joaat("DOOR_HAN_01_PROPS_16"), 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(joaat("DOOR_HAN_01_PROPS_15"), 1);
	OBJECT::_0x1BC47A9DEDC8DF5D(joaat("DOOR_HAN_01_PROPS_16"), 1);
}

bool func_589()
{
	char* sVar0;
	switch (iLocal_26)
	{
		case 0:
			if (__LIB_0__::func_871())
			{
				sVar0 = "PBL_1";
			}
			else
			{
				sVar0 = "PBL_2";
			}
			iLocal_871 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@buck_coyote@odr6", 0, sVar0, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_871);
			iLocal_26 = 1;
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_871, true, false))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_591(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0) && WEAPON::IS_WEAPON_VALID(iParam1))
	{
		iVar0 = func_1014(128, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0) && (WEAPON::_IS_WEAPON_REPEATER(iVar0) || WEAPON::_IS_WEAPON_RIFLE(iVar0)))
		{
		}
		else
		{
			__LIB_4__::func_7(iParam0, iParam1, iParam4, iParam2, iParam3, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_613()
{
	Local_48[1 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_48[1 /*19*/].f_13 = { -2185.195f, 687.9401f, 119.927f };
	Local_48[1 /*19*/].f_16 = 160.3729f;
	Local_48[0 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_48[0 /*19*/].f_13 = { -2186.201f, 686.6942f, 119.8457f };
	Local_48[0 /*19*/].f_16 = 287.6281f;
	Local_87[0 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_87[0 /*19*/].f_13 = { -2164.091f, 694.7808f, 119.987f };
	Local_87[0 /*19*/].f_16 = 292.7968f;
	Local_87[1 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_87[1 /*19*/].f_13 = { -2164.816f, 696.5628f, 120.088f };
	Local_87[1 /*19*/].f_16 = 292.5222f;
	Local_126[0 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_126[0 /*19*/].f_13 = { -2201.256f, 682.155f, 119.8387f };
	Local_126[0 /*19*/].f_16 = 200.8359f;
	Local_126[1 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[1 /*19*/].f_13 = { -2203.551f, 705.2712f, 121.0534f };
	Local_126[1 /*19*/].f_16 = 304.727f;
	Local_126[2 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[2 /*19*/].f_13 = { -2203.182f, 706.5937f, 121.0956f };
	Local_126[2 /*19*/].f_16 = 189.9673f;
	Local_126[3 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[3 /*19*/].f_13 = { -2194.067f, 694.0089f, 120.4895f };
	Local_126[3 /*19*/].f_16 = 19.9263f;
	Local_126[4 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_126[4 /*19*/].f_13 = { -2198.917f, 747.433f, 122.6885f };
	Local_126[4 /*19*/].f_16 = 36.4885f;
	Local_126[5 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[5 /*19*/].f_13 = { -2212.223f, 729.1276f, 122.0214f };
	Local_126[5 /*19*/].f_16 = 183.4507f;
	Local_126[6 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[6 /*19*/].f_13 = { -2217.806f, 724.0245f, 121.7948f };
	Local_126[6 /*19*/].f_16 = 304.0116f;
	Local_126[7 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[7 /*19*/].f_13 = { -2225.318f, 721.0627f, 121.6972f };
	Local_126[7 /*19*/].f_16 = 124.1858f;
	Local_126[8 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_126[8 /*19*/].f_13 = { -2198.352f, 734.679f, 122.1186f };
	Local_126[8 /*19*/].f_16 = 275f;
	Local_126[9 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_126[9 /*19*/].f_13 = { -2196.02f, 733.0143f, 121.926f };
	Local_126[9 /*19*/].f_16 = 54f;
	Local_126[10 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_126[10 /*19*/].f_13 = { -2195.146f, 735.0151f, 122.1384f };
	Local_126[10 /*19*/].f_16 = 99f;
	Local_336[0 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_336[0 /*19*/].f_13 = { -2214.177f, 727.8793f, 126.6964f };
	Local_336[0 /*19*/].f_16 = 210.9453f;
	Local_336[1 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_336[1 /*19*/].f_13 = { -2212.007f, 728.3888f, 126.699f };
	Local_336[1 /*19*/].f_16 = 27.85f;
	Local_336[2 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_336[2 /*19*/].f_13 = { -2216.286f, 725.457f, 126.6959f };
	Local_336[2 /*19*/].f_16 = 23.728f;
	Local_336[3 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_336[3 /*19*/].f_13 = { -2212.474f, 732.228f, 122.0778f };
	Local_336[3 /*19*/].f_16 = 210.9006f;
	Local_336[4 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_336[4 /*19*/].f_13 = { -2223.492f, 737.3148f, 122.3989f };
	Local_336[4 /*19*/].f_16 = 209.3565f;
	Local_432[0 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_432[0 /*19*/].f_13 = { -2181.665f, 716.1746f, 121.6227f };
	Local_432[0 /*19*/].f_16 = 113.8526f;
	Local_432[1 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_02");
	Local_432[1 /*19*/].f_13 = { -2174.102f, 719.714f, 121.6175f };
	Local_432[1 /*19*/].f_16 = 114.923f;
	Local_432[2 /*19*/].f_4 = joaat("G_M_M_UNIDUSTER_01");
	Local_432[2 /*19*/].f_13 = { -2173.648f, 716.6235f, 121.6183f };
	Local_432[2 /*19*/].f_16 = 62.2712f;
	Local_432[3 /*19*/].f_4 = joaat("U_M_M_FATDUSTER_01");
	Local_432[3 /*19*/].f_13 = { -2177.313f, 720.0639f, 125.2051f };
	Local_432[3 /*19*/].f_16 = 295.2693f;
}

void func_614()
{
	__LIB_13__::func_491(&(Local_766[0 /*5*/]), -2160.533f, 676.1638f, 119.3246f, 20.609f, 1, 0, 0, 1);
	__LIB_13__::func_491(&(Local_766[1 /*5*/]), -2166.516f, 681.6657f, 119.4638f, 34.8961f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_766[2 /*5*/]), -2176.471f, 677.0161f, 118.9327f, 28.621f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_766[3 /*5*/]), -2181.21f, 675.5042f, 119.0421f, 13.7819f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_766[4 /*5*/]), -2176.654f, 690.5712f, 119.8921f, 16.7934f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_766[5 /*5*/]), -2171.864f, 689.7719f, 119.7494f, 26.325f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_766[6 /*5*/]), -2189.654f, 695.7351f, 120.5238f, 48.0072f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_766[7 /*5*/]), -2193.047f, 691.5634f, 120.3322f, 19.7184f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_766[8 /*5*/]), -2201.678f, 701.8206f, 120.9126f, 32.4878f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_766[9 /*5*/]), -2203.854f, 704.6334f, 121.0333f, 34.4744f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_766[10 /*5*/]), -2196.738f, 712.0953f, 121.258f, 53.3715f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_766[11 /*5*/]), -2183.304f, 716.9853f, 121.3078f, 294.7791f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_766[12 /*5*/]), -2195.052f, 717.2545f, 121.3889f, 69.1532f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[0 /*5*/]), -2186.921f, 686.9761f, 119.8821f, 207.6392f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[1 /*5*/]), -2177.615f, 693.7914f, 120.129f, 197.2076f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[2 /*5*/]), -2207.59f, 710.5372f, 121.2679f, 231.3506f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[3 /*5*/]), -2202.836f, 703.452f, 120.9824f, 211.3413f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[4 /*5*/]), -2193.771f, 694.1181f, 120.4913f, 204.0739f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[5 /*5*/]), -2199.713f, 697.3821f, 120.7107f, 301.1132f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[6 /*5*/]), -2205.287f, 706.7568f, 121.1157f, 215.5624f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[7 /*5*/]), -2198.982f, 715.2606f, 121.352f, 243.6326f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[8 /*5*/]), -2204.749f, 722.2406f, 121.6f, 225.5948f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[9 /*5*/]), -2192.115f, 716.4207f, 121.3021f, 197.0739f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[10 /*5*/]), -2190.666f, 725.3058f, 121.3521f, 160.3408f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[11 /*5*/]), -2215.587f, 724.8633f, 121.8829f, 210.5962f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[12 /*5*/]), -2212.93f, 731.2247f, 122.0454f, 208.6905f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[13 /*5*/]), -2218.001f, 739.8857f, 122.4683f, 211.3784f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[14 /*5*/]), -2223.076f, 736.9186f, 122.3772f, 207.7136f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[15 /*5*/]), -2212.92f, 734.3495f, 126.7186f, 298.3243f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[16 /*5*/]), -2220.852f, 729.6667f, 126.7333f, 117.9068f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_665[17 /*5*/]), -2214.475f, 714.2549f, 121.3945f, 235.8316f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[18 /*5*/]), -2212.599f, 724.7962f, 126.8039f, 212.3902f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_665[19 /*5*/]), -2177.383f, 702.7074f, 121.2352f, 237.9468f, 0, 0, 0, 0);
}

void func_615()
{
	iLocal_832[0] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2223.382f, 737.6287f, 126.7446f, 299.4512f, 1.5f, 0, 0);
	iLocal_832[1] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2221.961f, 735.5133f, 126.7424f, 300.1517f, 1.5f, 0, 0);
	iLocal_832[2] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2220.908f, 733.5848f, 126.7513f, 301.3965f, 1.5f, 0, 0);
	iLocal_832[3] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2220.046f, 731.8846f, 126.7488f, 302.2317f, 1.5f, 0, 0);
	iLocal_832[4] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2217.087f, 732.0931f, 126.7007f, 28.7762f, 1.5f, 0, 0);
	iLocal_832[5] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2215.092f, 734.6556f, 126.7673f, 119.5999f, 1.5f, 0, 0);
	iLocal_832[6] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2215.946f, 736.3818f, 126.7772f, 121.3506f, 1.5f, 0, 0);
	iLocal_832[7] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2217.331f, 738.3671f, 126.7734f, 122.7945f, 1.5f, 0, 0);
	iLocal_832[8] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2218.5f, 740.5164f, 126.7685f, 122.3685f, 1.5f, 0, 0);
	iLocal_832[9] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -2212.29f, 724.15f, 127.55f, 210f, 2f, 0, 0);
}

void func_616()
{
	__LIB_1__::func_948(-2123724066, 0, -1f, 1, 0, 0, 1, 0);
}

void func_617()
{
	__LIB_1__::func_948(joaat("DOOR_HAN_01_PROPS_15"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("DOOR_HAN_01_PROPS_16"), 1, 0f, 0, 0, 0, 1, 0);
}

void func_618()
{
	__LIB_1__::func_948(joaat("DOOR_HAN_DOG_RANCH_FRONT01"), 1, 0f, 0, 0, 0, 1, 0);
}

int func_628(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RDST6_RSC1B"))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_871, false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_871, false);
		}
		__LIB_1__::func_683(&iLocal_860, 32);
		return 1;
	}
	else if (__LIB_13__::func_23(uParam0, "RDST6_RSC3"))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, true);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, true);
		return 1;
	}
	return 0;
}

void func_630(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RDST6_RSC3"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, false);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, false);
		}
		if (!PED::IS_PED_INJURED(iLocal_538))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_538, true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_538, false);
		}
		if (!PED::IS_PED_INJURED(Local_432[3 /*19*/]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_432[3 /*19*/], false);
		}
	}
}

void func_632(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_13__::func_23(uParam0, "RDST6_RSC1B"))
	{
		if (__LIB_13__::func_521(uParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
		}
		if (__LIB_13__::func_521(uParam0, Local_29, "MrsAdler", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_29))
			{
				func_312(&Local_29, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_29, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Local_29, 1, 1, 0, 0);
				func_313(&Local_29, 6, 1, 0);
			}
		}
	}
	else if (__LIB_13__::func_23(uParam0, "RDST6_RSC3"))
	{
		if (!__LIB_13__::func_525(&iLocal_539, 1, -2156.99f, 706.17f, 121.62f, 75.34f, __LIB_9__::func_404(7)))
		{
		}
		if (!__LIB_0__::func_163(iLocal_539, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_539, -1);
		}
		if (!__LIB_0__::func_27(iLocal_860, 16))
		{
			iVar0 = 0;
			while (iVar0 < Local_336)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_336[iVar0 /*19*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_336[iVar0 /*19*/], iLocal_631[13], false, 0))
					{
						__LIB_0__::func_490(&(Local_336[iVar0 /*19*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_432)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_432[iVar0 /*19*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_432[iVar0 /*19*/], iLocal_631[13], false, 0))
					{
						__LIB_0__::func_490(&(Local_432[iVar0 /*19*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_48)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*19*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_48[iVar0 /*19*/], iLocal_631[13], false, 0))
					{
						__LIB_0__::func_490(&(Local_48[iVar0 /*19*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_126)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_126[iVar0 /*19*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_126[iVar0 /*19*/], iLocal_631[13], false, 0))
					{
						__LIB_0__::func_490(&(Local_126[iVar0 /*19*/]), 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_87)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_87[iVar0 /*19*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_87[iVar0 /*19*/], iLocal_631[13], false, 0))
					{
						__LIB_0__::func_490(&(Local_87[iVar0 /*19*/]), 0);
					}
				}
				iVar0++;
			}
			__LIB_1__::func_683(&iLocal_860, 16);
		}
		if (!__LIB_0__::func_27(iLocal_860, 512) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RDST6_RSC3_P3_T03_Shot_1", 1))
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, true);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, true);
			__LIB_1__::func_683(&iLocal_860, 512);
		}
		if (!__LIB_0__::func_27(Local_432[3 /*19*/].f_10, 524288))
		{
			if ((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, "MultiStart") && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 22.5f) || (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, "NormalStart") && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 0.5f))
			{
				GRAPHICS::_CREATE_BLOOD_POOLS_FROM_PED(Local_432[3 /*19*/], 1.25f, 1.75f, 1f);
				__LIB_1__::func_683(&(Local_432[3 /*19*/].f_10), 524288);
			}
		}
		if (__LIB_13__::func_521(uParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
			}
		}
		if (__LIB_13__::func_521(uParam0, Local_29, "MrsAdler", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_29))
			{
				__LIB_0__::func_745(11);
				__LIB_0__::func_904(11, 0);
			}
		}
		if (__LIB_13__::func_521(uParam0, iLocal_538, "Horse_01", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_29) && !PED::IS_PED_INJURED(iLocal_538))
			{
				if (!__LIB_0__::func_394(Local_29, iLocal_538, 0))
				{
					PED::_SET_PED_ON_MOUNT(Local_29, iLocal_538, -1, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_29, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2117.66f, 639f, 119.23f, 2.5f, -1, 0.25f, 4194305, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2052.53f, 638.55f, 118.63f, 3f, -1, 0.25f, 4194305, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1857.91f, 585.38f, 114f, 3f, -1, 0.25f, 4194305, 40000f);
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, -1954.16f, 633.12f, 115.2f, 1073741824 /* Float: 2f */, 3f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_29, iVar1);
				PED::_0x2208438012482A1A(Local_29, false, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_538, joaat("MOTIONSTATE_SPRINT"), true, 0, false);
				PED::SET_PED_KEEP_TASK(Local_29, true);
				__LIB_1__::func_683(&iLocal_860, 128);
			}
		}
		if (__LIB_13__::func_521(uParam0, Local_432[3 /*19*/], "U_M_M_FATDUSTER_01", 0, 0, 1))
		{
		}
		if (__LIB_13__::func_14(uParam0, 1))
		{
			if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
				__LIB_0__::func_489(0, 0);
			}
		}
	}
}

int func_644(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
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
						__LIB_11__::func_616(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_1066(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_645(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*19*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		if (iParam6 == 1)
		{
			iVar0 = 0;
			while (iVar0 < *iParam0)
			{
				if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*19*/]) && !PED::_0xA0BC8FAED8CFEB3C((*iParam0)[iVar0 /*19*/]))
				{
					return false;
				}
				iVar0++;
			}
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iVar0 == iVar1 && func_320(iParam0[iVar0 /*19*/], (iParam0[iVar0 /*19*/])->f_4, (iParam0[iVar0 /*19*/])->f_13, (iParam0[iVar0 /*19*/])->f_16, iParam1, iParam2, iParam3, 0, -2, iParam4, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*19*/]))
			{
				func_313(iParam0[iVar0 /*19*/], iParam5, 0, 0);
			}
		}
		iVar0++;
	}
	return false;
}

int func_652(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, int iParam10)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, vParam2, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, vParam5, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam8);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, bParam9);
			if (iParam10 != -1)
			{
				ENTITY::SET_ENTITY_LOD_DIST(*iParam0, iParam10);
			}
			return 1;
		}
	}
	return 0;
}

int func_654(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1084(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_660()
{
	switch (iLocal_26)
	{
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_871, true, false))
			{
				HUD::_HIDE_HUD_COMPONENT(-1679307491);
				MISC::SET_BIT(&(Global_1956580.f_1), 5);
				ANIMSCENE::START_ANIM_SCENE(iLocal_871);
				iLocal_26 = 2;
			}
			break;
		case 2:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_871) > 0.994f || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_871))
			{
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
				iLocal_26 = 3;
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_684(var uParam0)
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
		func_1114(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1116(uParam0);
		func_1117(uParam0);
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

bool func_734(int iParam0)
{
	return iLocal_568[iParam0];
}

void func_738(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_734(iParam0))
		{
			iLocal_568[iParam0] = 1;
		}
	}
	else if (func_734(iParam0))
	{
		iLocal_568[iParam0] = 0;
	}
}

bool func_752(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if ((*iParam1)[iVar0 /*19*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_756(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst6@shed_fire", 2, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
}

void func_757(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (!func_734(0))
	{
		if (!__LIB_2__::func_618(&uLocal_547))
		{
			if (__LIB_0__::func_27(iLocal_860, 2))
			{
				fLocal_541 = 0f;
				if (__LIB_0__::func_27(iLocal_860, 32))
				{
					__LIB_12__::func_883(uParam0, "SADIE_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else
				{
					__LIB_13__::func_89(uParam0, "SADIE_FOLLOW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_0__::func_900(11);
				func_952(2);
				__LIB_5__::func_107(&uLocal_547);
				__LIB_5__::func_107(&uLocal_550);
			}
		}
		else
		{
			if (!func_734(0))
			{
				if (__LIB_5__::func_352("SADIE_FOLLOW"))
				{
					func_738(0, 1);
				}
			}
			if (!func_734(0) && !__LIB_5__::func_352("SADIE_FOLLOW"))
			{
				bVar0 = Local_29.f_17 < 7.5f;
				iVar1 = __LIB_13__::func_494(&fLocal_541, Local_29.f_17);
				if (bVar0 == 0 && iVar1 == 0)
				{
					if ((__LIB_5__::func_51(&uLocal_547) > 12f || __LIB_5__::func_51(&uLocal_550) > 7f) || Local_29.f_17 > 65f)
					{
						__LIB_12__::func_883(uParam0, "SADIE_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_738(0, 1);
					}
				}
				else
				{
					__LIB_5__::func_107(&uLocal_547);
					__LIB_5__::func_107(&uLocal_550);
				}
				if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
				{
					__LIB_5__::func_107(&uLocal_550);
				}
			}
		}
	}
}

void func_759(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (!func_734(1))
	{
		if (!__LIB_2__::func_618(&uLocal_547))
		{
			__LIB_13__::func_89(uParam0, "RDST62_O_KILL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_745(11);
			func_952(1);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
			}
			__LIB_5__::func_107(&uLocal_547);
			__LIB_5__::func_107(&uLocal_550);
		}
		else
		{
			if (!func_734(1))
			{
				if (__LIB_5__::func_352("RDST62_O_KILL"))
				{
					func_738(1, 1);
				}
			}
			if (!func_734(1) && !__LIB_5__::func_352("RDST62_O_KILL"))
			{
				if (!__LIB_0__::func_27(iLocal_860, 4194304))
				{
					if (!PED::IS_PED_INJURED(Global_35) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PED::IS_PED_SHOOTING(Global_35) || PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
						{
							__LIB_1__::func_683(&iLocal_860, 4194304);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_860, 4194304))
				{
					func_738(1, 1);
				}
				if (!func_734(1))
				{
					if (__LIB_5__::func_51(&uLocal_547) > 15f)
					{
						__LIB_12__::func_883(uParam0, "RDST62_O_KILL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_738(1, 1);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_860, 2097152))
	{
		if (!func_734(2))
		{
			if (!__LIB_2__::func_618(&uLocal_547))
			{
				if (func_734(23))
				{
					fLocal_541 = 0f;
					__LIB_13__::func_89(uParam0, "RDST62_O_BARN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_745(11);
					func_952(1);
					if (!MAP::DOES_BLIP_EXIST(iLocal_540))
					{
						iLocal_540 = __LIB_5__::func_554(408396114, iLocal_631[9], 1);
					}
					__LIB_5__::func_107(&uLocal_547);
					__LIB_5__::func_107(&uLocal_550);
				}
			}
			else
			{
				if (!func_734(2))
				{
					if (__LIB_5__::func_352("RDST62_O_BARN"))
					{
						func_738(2, 1);
					}
				}
				if (!func_734(2) && !__LIB_5__::func_352("RDST62_O_BARN"))
				{
					bVar0 = (func_734(23) && !__LIB_8__::func_684("ODR6_GOBARN"));
					iVar1 = __LIB_13__::func_494(&fLocal_541, MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), VOLUME::_GET_VOLUME_COORDS(iLocal_631[9]), true));
					if (bVar0 == 1 || iVar1 == 0)
					{
						if (__LIB_5__::func_51(&uLocal_547) > 12f || bVar0 == 1)
						{
							__LIB_12__::func_883(uParam0, "RDST62_O_BARN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_738(2, 1);
						}
					}
					else
					{
						__LIB_5__::func_107(&uLocal_547);
						__LIB_5__::func_107(&uLocal_550);
					}
				}
				if (__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0) && func_501(Global_35))
				{
					__LIB_5__::func_107(&uLocal_547);
					__LIB_5__::func_107(&uLocal_550);
				}
			}
		}
	}
}

bool func_808(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_808(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_5__::func_391(28);
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
			__LIB_1__::func_846(iParam0);
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
			__LIB_1__::func_858(iParam0, 0, 0, 0);
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
						func_808(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_808(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_808(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_808(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_808(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_808(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_808(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_808(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_808(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_5__::func_507(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_808(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_810()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1319();
	func_1320();
	func_1321();
	func_1322();
	func_1323();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_811(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1326(iParam0, 1, 1, -142743235, 1);
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

void func_845()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1359(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_940(var uParam0, int iParam1, int iParam2)
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
		return func_940(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_952(int iParam0)
{
	iLocal_864 = 0;
	if (iParam0 == 0)
	{
		__LIB_1__::func_683(&iLocal_864, 1);
	}
	else if (iParam0 == 1)
	{
		__LIB_1__::func_683(&iLocal_864, 1);
	}
	else if (iParam0 == 2)
	{
		__LIB_1__::func_683(&iLocal_864, 1);
		__LIB_1__::func_683(&iLocal_864, 2);
		__LIB_1__::func_683(&iLocal_864, 8);
		__LIB_1__::func_683(&iLocal_864, 16);
	}
}

bool func_958(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (__LIB_2__::func_167(*uParam0, 1))
		{
			return false;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false, false) };
		if (__LIB_13__::func_427(*uParam0, 0, &uLocal_509, &iLocal_537, 0, 0))
		{
			switch (iLocal_537)
			{
				case 8:
					if (func_752(*uParam0, &Local_48))
					{
						if (!PED::IS_PED_INJURED(Local_29) && PED::GET_PED_CONFIG_FLAG(Local_29, 12, true) == 1)
						{
							return false;
						}
					}
					return true;
			}
		}
		if (func_1443(*uParam0, &uLocal_509, &iLocal_537, 0))
		{
			switch (iLocal_537)
			{
				case 131072:
					if (__LIB_1__::func_205(Global_35, iLocal_631[2], 1, 0))
					{
						return true;
					}
					if (uParam0->f_17 < 7.5f)
					{
						return true;
					}
					if (uParam0->f_17 < 15f)
					{
						if (func_752(*uParam0, &Local_48))
						{
							if (uParam0->f_3 == 12 && uParam0->f_9 > 0)
							{
								return false;
							}
						}
						return true;
					}
					break;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (MISC::IS_BULLET_IN_AREA(vVar0, 75f, true))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam0, iParam1))
		{
			return true;
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW"), 2f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_BOW"), 0))
			{
				return true;
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW_IMPROVED"), 2f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_BOW_IMPROVED"), 0))
			{
				return true;
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_THROWING_KNIVES"), 2f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_THROWN_THROWING_KNIVES"), 0))
			{
				return true;
			}
		}
		if (FIRE::IS_ENTITY_ON_FIRE(*uParam0) || __LIB_0__::func_27(uParam0->f_10, 2))
		{
			return true;
		}
		if (__LIB_0__::func_27(iLocal_860, 8388608))
		{
			return true;
		}
		if (PED::IS_PED_IN_COMBAT(*uParam0, 0) || PED::_0x77525BBF433F2CD6(*uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_959(bool bParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_868))
	{
		iLocal_868 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dst6@ig@rsc2_ig6_enemiesonfire", 0, __LIB_0__::func_196(bParam0, "pl_ig6_eof_sittocover", "pl_ig6_eof_sitidle"), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_868);
	}
}

void func_960(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((!PED::IS_PED_INJURED(*iParam0) && !PED::IS_PED_INJURED(iParam1)) && !PED::IS_PED_INJURED(Global_35))
	{
		PED::REGISTER_TARGET(*iParam0, Global_35, 1);
		if (iParam2 == 1)
		{
			PED::_0x4707E9C23D8CA3FE(*iParam0, iParam1);
		}
		else
		{
			PED::REGISTER_TARGET(*iParam0, iParam1, 1);
		}
		PED::_0xD05AD61F242C626B(Global_35, 1f);
		if (iParam2 == 1)
		{
			PED::_0xD05AD61F242C626B(iParam1, 0f);
		}
		else
		{
			PED::_0xD05AD61F242C626B(iParam1, 1f);
		}
		if (iParam2 == 1)
		{
			__LIB_1__::func_683(&(iParam0->f_10), 64);
		}
		else
		{
			__LIB_1__::func_681(&(iParam0->f_10), 64);
		}
		if (iParam3 == 1)
		{
			__LIB_1__::func_683(&(iParam0->f_10), 256);
		}
		else
		{
			__LIB_1__::func_681(&(iParam0->f_10), 256);
		}
	}
}

bool func_961(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		fVar0 = __LIB_0__::func_514(PED::IS_PED_INJURED(Local_336[0 /*19*/]), 3f, 1.5f);
		vVar1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, false, false) };
		if (__LIB_1__::func_205(Global_35, iLocal_631[9], 1, 0))
		{
			return true;
		}
		if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_631[9]))
		{
			return true;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
		{
			return true;
		}
		if ((((((MISC::IS_BULLET_IN_AREA(vVar1, fVar0, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar1, joaat("WEAPON_BOW"), fVar0, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar1, joaat("WEAPON_BOW_IMPROVED"), fVar0, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar1, joaat("WEAPON_THROWN_TOMAHAWK"), fVar0, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar1, joaat("WEAPON_THROWN_TOMAHAWK"), fVar0, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar1, joaat("WEAPON_THROWN_MOLOTOV"), (fVar0 * 3f), true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar1, joaat("WEAPON_THROWN_DYNAMITE"), (fVar0 * 3f), true))
		{
			return true;
		}
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_336[1 /*19*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_336[2 /*19*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_336[3 /*19*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_336[4 /*19*/], Global_35, 1, 1))
		{
			return true;
		}
	}
	return false;
}

int func_1014(int iParam0, int iParam1)
{
	var uVar0;
	return func_1496(&uVar0, iParam0, iParam1);
}

void func_1066(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1066(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1066(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1084(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1552(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

void func_1114(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1568();
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

void func_1116(var uParam0)
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
			func_1066(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1066(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1117(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1066(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1319()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1763(0);
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
	func_1763(1);
}

void func_1320()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_808(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1321()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1766(0);
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
	func_1766(1);
}

void func_1322()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1766(0);
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
	func_1766(1);
}

void func_1323()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_808(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_808(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1326(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1326(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1326(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1326(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_1359(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1805(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_808(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1443(int iParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *iParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

int func_1496(var uParam0, int iParam1, int iParam2)
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
		return func_1496(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1552(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
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
				if (!__LIB_13__::func_58(iParam0, vVar0, iParam6, iParam10))
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
				func_1066(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1568()
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
	iVar0 = func_1014(6291456, 0);
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

void func_1763(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_808(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2059(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_811(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1326(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2064(Var0);
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

void func_1766(bool bParam0)
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
		func_808(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_808(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1326(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1326(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1326(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1805(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1805(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1805(iVar63, -915411861, 1, 0, 0));
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

void func_2059(int iParam0)
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
	func_1326(iParam0, 1, 1, -142743235, 1);
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
		func_1326(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2064(struct<6> Param0)
{
	if (!func_2223(Param0.f_4, 1))
	{
	}
	if (!func_2223(Param0, 1))
	{
	}
	if (!func_2223(Param0.f_2, 1))
	{
	}
	if (!func_2223(Param0.f_5, 1))
	{
	}
	if (!func_2223(Param0.f_3, 1))
	{
	}
	if (!func_2223(Param0.f_1, 1))
	{
	}
}

bool func_2223(int iParam0, int iParam1)
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
				if (func_2223(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2223(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2223(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2223(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

