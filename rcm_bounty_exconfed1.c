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
	struct<341> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_403 = -1;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	int iLocal_411 = 0;
	vector3 vLocal_412 = { 0f, 0f, 0f };
	float fLocal_415 = 0f;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = -1;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 1097859072;
	var uLocal_434 = 1000;
	var uLocal_435 = 1067450368;
	var uLocal_436 = 5000;
	var uLocal_437 = 42;
	var uLocal_438 = 1103626240;
	var uLocal_439 = 1077936128;
	var uLocal_440 = 1106247680;
	var uLocal_441 = 1103101952;
	var uLocal_442 = 1097859072;
	var uLocal_443 = 1103626240;
	int iLocal_444 = 0;
	int iLocal_445[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_453[7] = { 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_461[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_483[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<28> Local_491[7];
	int iLocal_688 = 0;
	vector3 vLocal_689 = { 0f, 0f, 0f };
	int iLocal_692[3] = { 0, 0, 0 };
	int iLocal_696[3] = { 0, 0, 0 };
	vector3 vLocal_700[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_710[3] = { 0f, 0f, 0f };
	struct<28> Local_714[3];
	int iLocal_799[3] = { 0, 0, 0 };
	int iLocal_803[4] = { 0, 0, 0, 0 };
	int iLocal_808[4] = { 0, 0, 0, 0 };
	int iLocal_813[4] = { 0, 0, 0, 0 };
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831[3] = { 0, 0, 0 };
	int iLocal_835 = 0;
	vector3 vLocal_836 = { 0f, 0f, 0f };
	float fLocal_839 = 0f;
	int iLocal_840 = 0;
	var uLocal_841 = -1;
	var uLocal_842 = 0;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = -1;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 1073741824;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 1;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	struct<17> Local_861[3];
	bool bLocal_913 = false;
	bool bLocal_914 = false;
	bool bLocal_915 = false;
	bool bLocal_916 = false;
	bool bLocal_917 = false;
	bool bLocal_918 = false;
	bool bLocal_919 = false;
	bool bLocal_920 = false;
	bool bLocal_921 = false;
	bool bLocal_922 = false;
	bool bLocal_923 = false;
	bool bLocal_924 = false;
	bool bLocal_925 = false;
	bool bLocal_926 = false;
	bool bLocal_927 = false;
	bool bLocal_928 = false;
	bool bLocal_929 = false;
	int iLocal_930[1] = { 0 };
	bool bLocal_932 = false;
	bool bLocal_933 = false;
	bool bLocal_934 = false;
	bool bLocal_935 = false;
	bool bLocal_936 = false;
	bool bLocal_937 = false;
	bool bLocal_938 = false;
	bool bLocal_939 = false;
	bool bLocal_940 = false;
	bool bLocal_941 = false;
	int iLocal_942[2] = { 0, 0 };
	int iLocal_945[2] = { 0, 0 };
	bool bLocal_948 = false;
	bool bLocal_949 = false;
	bool bLocal_950 = false;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	var uLocal_956 = 0;
	int iLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	char* sLocal_969 = NULL;
	struct<22> Local_970 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_992 = 3;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	struct<6> Local_995 = { 0, 0, 0, 0, 0, 1065353216 } ;
	var uLocal_1001 = 1119092736;
	var uLocal_1002 = 1092616192;
	var uLocal_1003 = 1085276160;
	bool bLocal_1004 = false;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	char* sLocal_1011 = NULL;
	char* sLocal_1012[5] = { NULL, NULL, NULL, NULL, NULL };
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	char* sLocal_1021[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	char* sLocal_1031[3] = { NULL, NULL, NULL };
	int iLocal_1035 = 0;
	char* sLocal_1036[3] = { NULL, NULL, NULL };
	int iLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	char* sLocal_1044[2] = { NULL, NULL };
	int iLocal_1047 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_688 = joaat("G_M_Y_UNIEXCONFEDS_01");
	iLocal_818 = joaat("G_M_M_BOUNTYHUNTERS_01");
	sLocal_969 = "bh_lemoyne_tower";
	sLocal_1011 = "script_proc@bounty@lemoyne_raider@ambush";
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
			func_131();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			func_133(1, 1);
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
	func_144(Global_1347702[uParam0->f_174 /*49*/].f_15);
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
		func_175(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
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
	__LIB_12__::func_658(uParam0, 13);
	__LIB_12__::func_659(uParam0, 21);
	vLocal_412 = { 2462.68f, 277.05f, 75.4f };
	fLocal_415 = 71.3424f;
	vLocal_461[0 /*3*/] = { 2462.913f, 275.8442f, 74.3879f };
	fLocal_483[0] = 53.7115f;
	vLocal_461[1 /*3*/] = { 2442.024f, 279.076f, 75.5863f };
	fLocal_483[1] = 171.92f;
	vLocal_461[2 /*3*/] = { 2446.79f, 293.29f, 70.36f };
	fLocal_483[2] = 88.94f;
	vLocal_461[3 /*3*/] = { 2441.64f, 279.57f, 76.58f };
	fLocal_483[3] = -135.33f;
	vLocal_461[4 /*3*/] = { 2445.51f, 294.74f, 70.35f };
	fLocal_483[4] = 171.2f;
	vLocal_461[5 /*3*/] = { 2462.95f, 278.52f, 75.39f };
	fLocal_483[5] = 173.887f;
	vLocal_461[6 /*3*/] = { 2439.71f, 279.63f, 76.54f };
	fLocal_483[6] = -129.81f;
	vLocal_700[0 /*3*/] = { 2466.895f, 332.6272f, 62.4925f };
	fLocal_710[0] = 168.0346f;
	vLocal_700[1 /*3*/] = { 2469.567f, 331.9769f, 63.5769f };
	fLocal_710[1] = 168.0346f;
	vLocal_700[2 /*3*/] = { 2460.16f, 327.1454f, 66.1367f };
	fLocal_710[2] = 131.6904f;
	vLocal_689 = { 2455.039f, 314.7832f, 69.5491f };
	vLocal_836 = { 2458f, 278.15f, 74.36f };
	fLocal_839 = 345.41f;
	sLocal_1021[0] = "BCORETURN1";
	sLocal_1021[1] = "BCORETURN2";
	sLocal_1021[2] = "BCORETURN3";
	sLocal_1021[3] = "BCORETURN4";
	sLocal_1021[4] = "BCORETURN5";
	sLocal_1031[0] = "RBCO_GRD2SHT1";
	sLocal_1031[1] = "RBCO_GRD2SHT2";
	sLocal_1031[2] = "RBCO_GRD1SHT1";
	sLocal_1036[0] = "RBCO_GRD2LINDED";
	sLocal_1036[1] = "RBCO_GRD2ARTHUR";
	sLocal_1036[2] = "RBCO_GRD1LINDED";
	sLocal_1044[0] = "RBCO_REINFORCE1";
	sLocal_1044[1] = "RBCO_REINFORCE2";
	iLocal_831[0] = TASK::ADD_COVER_POINT(2449.652f, 277.7044f, 73.7201f, 337.4394f, 3, 0, 0, false);
	iLocal_831[1] = TASK::ADD_COVER_POINT(2447f, 293.34f, 69.35f, 91.0022f, 0, 0, 0, false);
	iLocal_831[2] = TASK::ADD_COVER_POINT(2445.475f, 294.7818f, 69.3452f, 179.857f, 3, 0, 0, false);
	func_187();
	Local_970.f_3 = Global_35;
	Local_970.f_4 = 21030;
	Local_970.f_7 = 0;
	Local_970.f_8 = 4;
	Local_970.f_13 = 1;
	Local_970.f_17 = 3;
	Local_970.f_18 = 2;
	Local_970.f_19 = 3;
	Local_970.f_21 = 3;
	Local_970.f_16 = 3;
	Local_970.f_11 = 0;
	Local_970.f_12 = 0;
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("G_M_Y_UNIEXCONFEDS_01"), 7);
	__LIB_12__::func_867(uParam0, iLocal_818, 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 7);
	__LIB_12__::func_867(uParam0, joaat("GATLINGMAXIM02"), 7);
	__LIB_13__::func_55(uParam0, sLocal_1011, 7);
	__LIB_13__::func_15(uParam0, sLocal_969, 2, -1, 7);
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_1012[0]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_1012[1]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_1012[2]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_1012[3]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_1012[4]);
}

bool func_53(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (func_197(&iVar0))
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
			Var1 = { 2482.932f, 309.1404f, 72.289f };
			Var1.f_3 = 124.3879f;
			break;
		case 1:
			Var1 = { 2450.666f, 276.8916f, 73.742f };
			Var1.f_3 = 289.3594f;
			break;
		case 2:
			Var1 = { 2591.492f, -700.0161f, 41.8641f };
			Var1.f_3 = 165.8423f;
			break;
		case 3:
			Var1 = { 2519.736f, -1305.924f, 48.0049f };
			Var1.f_3 = 94.8962f;
			break;
		case 4:
			Var1 = { 2520.291f, -1306.121f, 48.0295f };
			Var1.f_3 = 49.0296f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_203(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_18__::func_583(&Local_22, 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[4]);
		switch (Local_22.f_64)
		{
			case 0:
				StringCopy(&(uParam0->f_2578), "BNTY_BCON_F_DEAD", 24);
				break;
			case 1:
				StringCopy(&(uParam0->f_2578), "BNTY_BCON_F_LEFT_A", 24);
				break;
			case 2:
				StringCopy(&(uParam0->f_2578), "BNTY_BCON_F_LEFT_D", 24);
				break;
			case 3:
				StringCopy(&(uParam0->f_2578), "BNTY_BCON_F_ESCP", 24);
				break;
			case 4:
				StringCopy(&(uParam0->f_2578), "BNTY_BCON_F_LOST", 24);
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
	else if (__LIB_1__::func_205(iLocal_411, iLocal_828, 0, 0))
	{
		StringCopy(&(uParam0->f_2578), "BNTY_BCON_F_LOST", 24);
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
			func_270(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		func_271(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
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
		func_280(uParam0, func_61(0), func_61(1), 0, 1, 0);
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
		if (uParam0->f_171 != 0 || func_281(uParam0))
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
			func_284();
			if (!func_285())
			{
				return 2;
			}
			if (__LIB_13__::func_204(&uLocal_963))
			{
				if (__LIB_0__::func_272(iLocal_444, 0) && !__LIB_0__::func_163(iLocal_444, -982327190))
				{
					ENTITY::_0x9587913B9E772D29(iLocal_444, 0);
					TASK::TASK_STAND_STILL(iLocal_444, -1);
					__LIB_2__::func_145(iLocal_444, 0);
				}
				__LIB_10__::func_143(uParam0->f_174, 1);
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[0]);
				if (!MAP::DOES_BLIP_EXIST(iLocal_819))
				{
					iLocal_819 = __LIB_8__::func_775(1259054292, iLocal_821, 1);
				}
				__LIB_12__::func_883(uParam0, "BCON_O_INVEST", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_280(uParam0, func_61(0), func_61(1), 0, 1, 1);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_17 = 0;
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			func_284();
			if (!func_285())
			{
				return 2;
			}
			if (__LIB_0__::func_272(iLocal_444, 0) && !__LIB_0__::func_163(iLocal_444, -982327190))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_444, 2470.479f, 311.9824f, 72.1345f, 207.9214f, true, false, true);
				ENTITY::_0x9587913B9E772D29(iLocal_444, 0);
				TASK::TASK_STAND_STILL(iLocal_444, -1);
				__LIB_2__::func_145(iLocal_444, 0);
			}
			func_293();
			func_294();
			func_295();
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
				{
					if (__LIB_0__::func_272(iLocal_411, 0))
					{
						if (!__LIB_0__::func_163(iLocal_411, joaat("SCRIPT_TASK_CARRIABLE")))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_411, 2452.117f, 277.4009f, 73.8824f, 279.0443f, true, false, true);
							ENTITY::_0x9587913B9E772D29(iLocal_411, 0);
							TASK::TASK_CARRIABLE(iLocal_411, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_411, 1), 0, 0, 0);
						}
					}
				}
			}
			else if (TASK::_0xB8F52A3F84A7CC59(joaat("DEAD_CARRIABLE_HUMAN")))
			{
				if (__LIB_0__::func_272(iLocal_411, 0))
				{
					if (!__LIB_0__::func_163(iLocal_411, joaat("SCRIPT_TASK_CARRIABLE")))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_411, 2452.117f, 277.4009f, 73.8824f, 279.0443f, true, false, true);
						ENTITY::_0x9587913B9E772D29(iLocal_411, 0);
						__LIB_10__::func_82(&Local_22);
						__LIB_1__::func_864(iLocal_411, 1, 0);
						TASK::TASK_CARRIABLE(iLocal_411, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_411, 2), 0, 0, 0);
					}
				}
			}
			if (__LIB_13__::func_204(&uLocal_963))
			{
				func_280(uParam0, func_61(1), func_61(2), 1, 2, 1);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				__LIB_13__::func_105(1, 1);
				bLocal_924 = true;
				bLocal_949 = true;
				iLocal_17 = 1;
				iLocal_18 = 1;
				return 7;
			}
			break;
		case 2:
			if (!func_285())
			{
				return 2;
			}
			if (__LIB_13__::func_204(&uLocal_963))
			{
				if (__LIB_0__::func_272(iLocal_444, 0) && !__LIB_0__::func_163(iLocal_444, -982327190))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_444, 2590.685f, -700.659f, 41.8179f, 156.9187f, true, false, true);
					ENTITY::_0x9587913B9E772D29(iLocal_444, 0);
					TASK::TASK_STAND_STILL(iLocal_444, -1);
					__LIB_2__::func_145(iLocal_444, 0);
					PED::_SET_PED_ON_MOUNT(Global_35, iLocal_444, -1, true);
				}
				func_293();
				func_294();
				func_295();
				if (!__LIB_10__::func_133(uParam0->f_174, 1))
				{
					if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
					{
						if (__LIB_0__::func_272(iLocal_411, 0))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_411, 2589.26f, -699.829f, 41.6849f, 193.0201f, true, false, true);
							if (!__LIB_0__::func_163(iLocal_411, joaat("SCRIPT_TASK_CARRIABLE")))
							{
								TASK::TASK_CARRIABLE(iLocal_411, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_411, 1), iLocal_444, 0, 0);
							}
							PED::_0x2208438012482A1A(iLocal_411, true, false);
							PED::_0x2208438012482A1A(Global_35, true, false);
						}
					}
				}
				else if (TASK::_0xB8F52A3F84A7CC59(joaat("DEAD_CARRIABLE_HUMAN")))
				{
					if (__LIB_0__::func_272(iLocal_411, 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_411, 2589.26f, -699.829f, 41.6849f, 193.0201f, true, false, true);
						__LIB_1__::func_864(iLocal_411, 1, 0);
						if (!__LIB_0__::func_163(iLocal_411, joaat("SCRIPT_TASK_CARRIABLE")))
						{
							TASK::TASK_CARRIABLE(iLocal_411, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_411, 2), iLocal_444, 0, 0);
						}
						PED::_0x2208438012482A1A(iLocal_411, true, false);
						PED::_0x2208438012482A1A(Global_35, true, false);
					}
				}
				func_280(uParam0, func_61(2), func_61(3), 2, 3, 1);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				__LIB_13__::func_105(1, 1);
				bLocal_924 = true;
				bLocal_949 = true;
				iLocal_17 = 1;
				iLocal_18 = 1;
				return 7;
			}
			break;
		case 3:
			func_293();
			func_294();
			func_295();
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
				{
					if (__LIB_0__::func_272(iLocal_411, 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_411, 2519.736f, -1305.924f, 48.0049f, 193.9102f, true, false, true);
						if (!__LIB_0__::func_163(iLocal_411, joaat("SCRIPT_TASK_CARRIABLE")))
						{
							TASK::TASK_CARRIABLE(iLocal_411, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_411, 1), Global_35, 0, 0);
						}
						PED::_0x2208438012482A1A(iLocal_411, true, false);
						PED::_0x2208438012482A1A(Global_35, true, false);
					}
				}
			}
			else if (TASK::_0xB8F52A3F84A7CC59(joaat("DEAD_CARRIABLE_HUMAN")))
			{
				if (__LIB_0__::func_272(iLocal_411, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_411, 2519.736f, -1305.924f, 48.0049f, 193.9102f, true, false, true);
					__LIB_1__::func_864(iLocal_411, 1, 0);
					if (!__LIB_0__::func_163(iLocal_411, joaat("SCRIPT_TASK_CARRIABLE")))
					{
						TASK::TASK_CARRIABLE(iLocal_411, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_411, 2), Global_35, 0, 0);
					}
					PED::_0x2208438012482A1A(iLocal_411, true, false);
					PED::_0x2208438012482A1A(Global_35, true, false);
				}
			}
			func_280(uParam0, func_61(3), func_61(4), 3, 4, 1);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_13__::func_105(1, 1);
			bLocal_924 = true;
			bLocal_928 = true;
			bLocal_949 = true;
			bLocal_950 = true;
			iLocal_17 = 1;
			iLocal_18 = 1;
			return 7;
		case 4:
			func_293();
			func_294();
			func_295();
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_10__::func_131(joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"), Local_22.f_300, 0);
				__LIB_10__::func_92(joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"), Local_22.f_300, Local_22.f_299);
				__LIB_1__::func_616(Global_40.f_9074.f_3, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			else
			{
				__LIB_1__::func_616(Global_40.f_9074.f_4, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_2__::func_115(106, 1, 0, 0, 12, 0, 0, 1);
				if (__LIB_0__::func_181())
				{
					__LIB_3__::func_666(106, 2, 3, 0, joaat("CS_JOHNMARSTON"));
				}
				else
				{
					__LIB_3__::func_666(106, 2, 3, 0, 0);
				}
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
		func_280(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_317(Var0, &(uParam0->f_206), uParam0);
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
				func_280(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (__LIB_1__::func_205(Global_35, iLocal_829, 1, 0))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_969, 1, 1065353216 /* Float: 1f */, 1f, 1);
	}
	else
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_969, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_835))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_835, true, true))
		{
			WEAPON::_0x56CB3B4305A4F7CE(iLocal_835, -1, -45f, 90f);
		}
	}
	if (!__LIB_0__::func_272(iLocal_411, 0) && !PED::GET_PED_CONFIG_FLAG(iLocal_411, 11, false))
	{
		if (!__LIB_10__::func_133(uParam0->f_174, 1))
		{
			if (func_323(0))
			{
				__LIB_10__::func_142(uParam0->f_174, 1);
			}
			else if (__LIB_6__::func_904())
			{
				__LIB_5__::func_20(0, 0);
			}
			else if (__LIB_1__::func_985() == 1)
			{
				if (func_328(uParam0, 2) && __LIB_12__::func_876(uParam0, "RBCO_GD1TKIA", 0))
				{
					CAM::_0xE3639DB78B3B5400(iLocal_411);
					__LIB_10__::func_142(uParam0->f_174, 1);
				}
			}
			else if (func_328(uParam0, 3) && __LIB_12__::func_876(uParam0, "RBCO_GD2TKIA", 0))
			{
				CAM::_0xE3639DB78B3B5400(iLocal_411);
				__LIB_10__::func_142(uParam0->f_174, 1);
			}
		}
	}
	switch (iLocal_17)
	{
		case 0:
			CAM::_0xC252C0CC969AF79A(1);
			if (func_330(uParam0))
			{
				iLocal_17 = 1;
			}
			break;
		case 1:
			__LIB_13__::func_153(&uLocal_406, &iLocal_411);
			CAM::_0xC252C0CC969AF79A(1);
			__LIB_13__::func_111(&Local_22);
			if (func_333(uParam0))
			{
				if (!__LIB_10__::func_133(uParam0->f_174, 1))
				{
					__LIB_2__::func_115(106, 1, 0, 0, 12, 0, 0, 1);
					if (__LIB_0__::func_181())
					{
						__LIB_3__::func_666(106, 6, 3, 0, joaat("CS_JOHNMARSTON"));
					}
					else
					{
						__LIB_3__::func_666(106, 6, 3, 0, 0);
					}
				}
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
	func_362(iParam0, 0, iParam3);
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
			cVar0 = func_368(Global_1347702[iParam0 /*49*/].f_15);
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
		func_369(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_370(Global_1347702[iParam0 /*49*/].f_15, bParam6);
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
	vVar2 = { func_373(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_133(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && __LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_377(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (__LIB_0__::func_13(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = __LIB_0__::func_23();
	}
}

void func_138(var uParam0)
{
	func_362(uParam0->f_174, 0, 0);
}

void func_144(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (iParam0 != __LIB_0__::func_298(0))
	{
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (__LIB_0__::func_291(iParam0) == 3)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
			if (__LIB_0__::func_700(iParam0) != 1 && __LIB_0__::func_700(iParam0) != 8)
			{
				__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_387(iParam0);
	__LIB_0__::func_267(1);
	func_388(0);
	func_389(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			__LIB_0__::func_300(1);
			__LIB_0__::func_747(15, 0, 1);
			break;
		case 4:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 8:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 9:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 2:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 6:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 5:
			__LIB_0__::func_747(10, 0, 1);
			break;
	}
	__LIB_0__::func_301(1);
}

float func_149(var uParam0)
{
	return __LIB_13__::func_82(&Local_22);
}

bool func_150(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (__LIB_19__::func_267(&Local_22))
			{
				if (!__LIB_10__::func_75(Local_22.f_67))
				{
					__LIB_13__::func_67(Local_22.f_300, ENTITY::GET_ENTITY_MODEL(Local_22.f_67));
				}
				__LIB_2__::func_426(&iLocal_411);
				return true;
			}
			else
			{
				func_401(uParam0);
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
	int iVar0;
	func_402(uParam0);
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	__LIB_13__::func_112(&Local_22, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_UNIEXCONFEDS_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("GATLINGMAXIM02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_818);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	STREAMING::REMOVE_ANIM_DICT(sLocal_1011);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_445[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_445[iVar0]));
			__LIB_0__::func_325(&(uLocal_453[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_692[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_692[iVar0]));
			__LIB_0__::func_325(&(iLocal_696[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_803[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_803[iVar0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_808[iVar0]));
			__LIB_0__::func_325(&(iLocal_813[iVar0]));
		}
		iVar0++;
	}
	__LIB_0__::func_325(&iLocal_819);
	__LIB_0__::func_172(iLocal_820);
	__LIB_0__::func_172(iLocal_821);
	__LIB_0__::func_172(iLocal_822);
	__LIB_0__::func_172(iLocal_823);
	__LIB_0__::func_172(iLocal_824);
	__LIB_0__::func_172(iLocal_825);
	__LIB_0__::func_172(iLocal_826);
	__LIB_0__::func_172(iLocal_828);
	__LIB_0__::func_172(iLocal_827);
	__LIB_0__::func_172(iLocal_829);
	__LIB_0__::func_172(iLocal_830);
	VEHICLE::DELETE_VEHICLE(&iLocal_835);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	TASK::REMOVE_COVER_POINT(iLocal_831[0]);
	TASK::REMOVE_COVER_POINT(iLocal_831[1]);
	TASK::REMOVE_COVER_POINT(iLocal_831[2]);
	if (iLocal_951 != 0)
	{
		__LIB_1__::func_948(iLocal_951, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iLocal_952 != 0)
	{
		__LIB_1__::func_948(iLocal_952, 0, 0, 0, 0, 0, 0, 0);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_969))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_969);
	}
}

void func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!__LIB_1__::func_44(iParam0) && !__LIB_0__::func_702(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !__LIB_1__::func_44(iParam0))
	{
		iParam2 = -1;
	}
	if (__LIB_0__::func_291(iParam0) == 3 || (__LIB_0__::func_291(iParam0) == 1 && STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0))))
	{
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iParam2);
		if ((!__LIB_0__::func_6(Global_1572864.f_8) && !__LIB_0__::func_296(0, 1, 0)) && !__LIB_0__::func_1(Global_1935630, 32768))
		{
			iVar0 = __LIB_1__::func_24(iParam0);
			if (iVar0 != -1)
			{
				__LIB_0__::func_867(0);
			}
			else if (__LIB_0__::func_700(iParam0) == 8)
			{
				iVar0 = __LIB_1__::func_194();
				if (iVar0 != -1)
				{
					__LIB_0__::func_867(0);
				}
			}
		}
	}
	func_389(iParam0, 0);
	if (__LIB_0__::func_298(0) == iParam0)
	{
		__LIB_0__::func_267(1);
		func_388(0);
		__LIB_0__::func_301(1);
	}
	__LIB_1__::func_144(iParam0, 1);
	func_387(iParam0);
}

void func_187()
{
	sLocal_1012[0] = "RBCON_START";
	sLocal_1012[1] = "RBCON_SURROUNDED";
	sLocal_1012[2] = "RBCON_FIGHT";
	sLocal_1012[3] = "RBCON_DEAD";
	sLocal_1012[4] = "RBCON_STOP";
}

int func_197(int iParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*iParam0 = func_447(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

int func_203(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_133(0, 1);
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
		iVar1 = func_483(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
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

void func_222(var uParam0)
{
	func_402(uParam0);
}

int func_262(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_12__::func_767(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		iLocal_411 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		return 0;
	}
	if (!__LIB_0__::func_272(iLocal_411, 0))
	{
		return 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return 0;
	}
	if (iVar0 < 3)
	{
		if (!func_551())
		{
			return 0;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_820))
		{
			iLocal_820 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2452.887f, 290.233f, 70.872f, 0f, 0f, -3.096f, 18f, 20f, 10f, "m_volumeInsideFort");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_821))
		{
			iLocal_821 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2452.933f, 291.081f, 72.735f, 0f, 0f, -3.096f, 26f, 29f, 20f, "m_volumeDefenseFort");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_822))
		{
			iLocal_822 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2441.021f, 278.244f, 76.932f, 0f, 0f, -1.499f, 4f, 4f, 3f, "m_volumeDefenseTower");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_823))
		{
			iLocal_823 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2452.933f, 291.081f, 72.735f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volumeAmbientRestrict");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_824))
		{
			iLocal_824 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volumeDefenseTarget");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_825))
		{
			iLocal_825 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2451.594f, 277.597f, 77.44f, 0f, 0f, -3.096f, 26f, 3f, 9f, "m_volumeGatling");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_826))
		{
			iLocal_826 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2454.197f, 310.749f, 71.179f, 0f, 0f, -3.096f, 8f, 11f, 5f, "m_volumeFortGate");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_828))
		{
			iLocal_828 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2444.031f, 293.76f, 66.468f, 0f, 0f, -3.096f, 3f, 3f, 3f, "m_volumeBasement");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_827))
		{
			iLocal_827 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2454.255f, 306.789f, 71.179f, 0f, 0f, -3.096f, 5f, 3f, 5f, "m_volumeFortGatePlayer");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_829))
		{
			iLocal_829 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2463.763f, 277.396f, 75.817f, 0f, 0f, -1.499f, 4f, 4f, 3f, "m_volumeLeftTower");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_830))
		{
			iLocal_830 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2445.473f, 292.115f, 70.662f, 0f, 0f, -3.096f, 4f, 7f, 3f, "m_volumeShack");
		}
		__LIB_3__::func_618(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0, 0, 0, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar1]))
			{
				iLocal_445[iVar1] = __LIB_12__::func_885(uParam0, iLocal_688, vLocal_461[iVar1 /*3*/], fLocal_483[iVar1], 1, 1, 0, 1, 1, 1, 1, 0);
				if (ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar1]))
				{
					return 0;
				}
			}
			if (__LIB_0__::func_272(iLocal_445[iVar1], 0))
			{
				if (iLocal_955 < 7)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_445[iVar1], 1);
					func_552(iLocal_445[iVar1]);
					__LIB_1__::func_398(&(Local_491[iVar1 /*28*/]), 0);
					__LIB_1__::func_401(&(Local_491[iVar1 /*28*/]), 1);
					__LIB_2__::func_828(&(Local_491[iVar1 /*28*/]), 1);
					__LIB_2__::func_829(&(Local_491[iVar1 /*28*/]), 1);
					TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_445[iVar1], true);
					__LIB_4__::func_7(iLocal_445[iVar1], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					iLocal_955++;
				}
			}
			iVar1++;
		}
	}
	if (__LIB_0__::func_272(iLocal_411, 0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_411, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_411, vLocal_412, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_411, fLocal_415);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_411, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_411, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_411, 14, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_411, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_411, 44, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_411, 512, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_411, joaat("REL_PLAYER_ENEMY"));
		if (iVar0 < 2)
		{
			if (!WEAPON::_0x495A04CAEC263AF8(iLocal_411, 0))
			{
				__LIB_4__::func_7(iLocal_411, joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
		}
		__LIB_4__::func_228(&uLocal_416);
		__LIB_1__::func_398(&uLocal_416, 1);
		__LIB_1__::func_401(&uLocal_416, 1);
		__LIB_2__::func_828(&uLocal_416, 1);
		__LIB_2__::func_829(&uLocal_416, 1);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_411, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_411, 265, false);
		PED::_0xFC3DB99C8144CD81(iLocal_411, iLocal_824, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_411, 130, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_411, 178, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_411, 315, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_411, 308, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_411, 359, true);
		if (iVar0 <= 0)
		{
			func_554();
		}
		if (func_555() != 0)
		{
			func_556(0);
		}
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	__LIB_12__::func_875(uParam0, iLocal_411, "RBCO_TARGET", 0);
	func_558(uParam0);
	if (iVar0 < 3)
	{
		if (iLocal_955 == 7)
		{
			__LIB_12__::func_875(uParam0, iLocal_445[5], "EXC_YPED3", 1);
			func_559();
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_821))
			{
				POPULATION::_0xB56D41A694E42E86(iLocal_821, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_821, 0, 0, 0, -1, -1, 0);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_823))
			{
				POPULATION::_0xB56D41A694E42E86(iLocal_823, 14304, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_823, 14304, 0, 0, -1, -1, 0);
			}
			TASK::ADD_COVER_BLOCKING_AREA(2459.98f, 300.32f, 69.18f, 2462.85f, 296.96f, 69.5f, true, false, true, false);
			TASK::ADD_COVER_BLOCKING_AREA(2443.06f, 297.85f, 69.21f, 2451.89f, 304.43f, 69.48f, true, false, true, false);
			iLocal_951 = 1931091523;
			iLocal_952 = -260990748;
			if (iLocal_951 != 0)
			{
				__LIB_1__::func_948(iLocal_951, 1, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_952 != 0)
			{
				__LIB_1__::func_948(iLocal_952, 1, 0, 0, 0, 0, 0, 0);
			}
			func_560();
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_824))
			{
				VOLUME::_0x39816F6F94F385AD(iLocal_824, 2452.418f, 281.57f, 77.44f, 0f, 0f, -3.096f, 26f, 10f, 14f);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_270(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_241(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(iParam0), __LIB_0__::func_76(iParam0), __LIB_0__::func_872(iParam0), __LIB_0__::func_299(iParam0), Global_36);
		}
	}
	func_389(iParam0, 1);
	bParam1 = bParam1;
}

void func_271(int iParam0, bool bParam1, bool bParam2)
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
		func_389(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_388(1);
		}
		func_566(iParam0, -1);
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
				__LIB_1__::func_312(0);
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
		func_566(iParam0, -1);
		func_389(iParam0, 4);
	}
	__LIB_1__::func_144(iParam0, 0);
}

void func_280(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;
	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			__LIB_12__::func_945(uParam0);
		}
		uParam0->f_752 = iParam9;
		__LIB_12__::func_946(uParam0);
	}
	if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
	{
		__LIB_0__::func_869(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((__LIB_4__::func_513() == iParam9 && __LIB_12__::func_799() == iParam10) && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (__LIB_4__::func_513() != iParam9 && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
	{
		__LIB_0__::func_304(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_583(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

bool func_281(var uParam0)
{
	__LIB_13__::func_110(&Local_22, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
	if (!bLocal_922)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1347702[uParam0->f_174 /*49*/].f_24, true) < Global_1347702[uParam0->f_174 /*49*/].f_18)
		{
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[0]);
			bLocal_922 = true;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1347702[uParam0->f_174 /*49*/].f_24, true) > Global_1347702[uParam0->f_174 /*49*/].f_18)
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[4]);
		bLocal_922 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		return false;
	}
	func_284();
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2452.887f, 290.233f, 67.073f, 45f, 45f, 50f, false, true, 0))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_819))
		{
			iLocal_819 = __LIB_8__::func_775(1259054292, iLocal_821, 1);
		}
		iLocal_17 = 0;
		__LIB_10__::func_143(uParam0->f_174, 1);
		return true;
	}
	if (!__LIB_0__::func_272(iLocal_411, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
		{
			__LIB_10__::func_142(uParam0->f_174, 1);
			iLocal_17 = 0;
			return true;
		}
	}
	return false;
}

void func_284()
{
	if (!bLocal_941 && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_835))
	{
		ENTITY::_0x445D7D8EA66E373E(iLocal_835, 0, ENTITY::GET_ENTITY_COORDS(iLocal_835, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
		bLocal_941 = true;
	}
}

bool func_285()
{
	if (__LIB_12__::func_637(&iLocal_444, 2470.479f, 311.9824f, 72.1345f, 207.9214f, 1, 0, 1, 1))
	{
		if (__LIB_0__::func_272(iLocal_444, 0))
		{
			return true;
		}
	}
	return false;
}

void func_293()
{
	if (__LIB_0__::func_272(iLocal_411, 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_411, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_411, false);
		__LIB_13__::func_197(&iLocal_411, 0, 0);
	}
	if (__LIB_0__::func_272(iLocal_445[0], 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_445[0], true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_445[0], false);
		__LIB_13__::func_197(&(iLocal_445[0]), 0, 0);
	}
	if (__LIB_0__::func_272(iLocal_445[1], 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_445[1], true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_445[1], false);
		__LIB_13__::func_197(&(iLocal_445[1]), 0, 0);
	}
}

bool func_294()
{
	int iVar0;
	if (iLocal_954 >= 7)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_445[iVar0], true);
			__LIB_13__::func_197(&(iLocal_445[iVar0]), 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_445[iVar0], false);
		}
		iLocal_954++;
		iVar0++;
	}
	return false;
}

void func_295()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			__LIB_1__::func_864(iLocal_445[iVar0], 1, 0);
		}
		iVar0++;
	}
	if (bLocal_915)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__::func_272(iLocal_692[iVar0], 0))
			{
				__LIB_1__::func_864(iLocal_692[iVar0], 1, 0);
			}
			iVar0++;
		}
	}
	bLocal_920 = true;
}

int func_317(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_634(uParam4);
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

bool func_323(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar1], 0))
		{
			return false;
		}
		iVar1++;
	}
	if (bLocal_915)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__::func_272(iLocal_692[iVar0], 0))
			{
				return false;
			}
			iVar0++;
		}
	}
	else if (bParam0)
	{
		return false;
	}
	return true;
}

bool func_328(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 2 && iLocal_945[0])
	{
		return true;
	}
	else if ((iParam1 == 3 && iVar0 == 5) || iLocal_945[1])
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			if (iVar0 != 0 && iVar0 != 5)
			{
				if (iParam1 == 2)
				{
					if (!iLocal_945[0] && iVar0 != iLocal_942[1])
					{
						__LIB_12__::func_875(uParam0, iLocal_445[iVar0], "EXC_YPED2", 1);
						iLocal_942[0] = iVar0;
						iLocal_945[0] = 1;
					}
				}
				else if (iParam1 == 3)
				{
					if (!iLocal_945[1] && iVar0 != iLocal_942[0])
					{
						__LIB_12__::func_875(uParam0, iLocal_445[iVar0], "EXC_YPED3", 1);
						iLocal_942[1] = iVar0;
						iLocal_945[1] = 1;
					}
				}
			}
		}
		else
		{
			if (iVar0 == iLocal_942[0])
			{
				iLocal_945[0] = 0;
			}
			if (iVar0 == iLocal_942[1])
			{
				iLocal_945[1] = 0;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_330(var uParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iLocal_16)
	{
		case 0:
			if (__LIB_0__::func_272(iLocal_411, 0))
			{
				if (func_683() || func_684())
				{
					func_685();
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						iLocal_444 = PED::GET_MOUNT(Global_35);
						__LIB_1__::func_694(iLocal_444, 2454.431f, 291.8034f, 69.3963f, 0, 30f, 20f, 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
					}
					else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_444) && __LIB_0__::func_272(iLocal_444, 0)) && !__LIB_0__::func_163(iLocal_444, -1824940423))
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS(iLocal_444, 2470.479f, 311.9824f, 72.1345f, 2f, 0, false, 524419, -1f);
					}
					if (!bLocal_1004)
					{
						AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[1]);
						Local_995.f_5 = 2f;
						__LIB_0__::func_7(&(Local_995.f_3), 16);
						__LIB_0__::func_7(&(Local_995.f_3), 256);
						bLocal_1004 = true;
					}
					else if (__LIB_2__::func_519(&Local_995))
					{
						__LIB_1__::func_539();
					}
					else
					{
						func_690(2449.175f, 277.4205f, 73.694f, &Local_995, 0f, 0f, 0f, 30f, 100f, -1, 4000, 1000, 1);
					}
					if (!bLocal_918)
					{
						if (__LIB_13__::func_123(uParam0, "RBCON_CALL_", 0, 0))
						{
							func_293();
							func_294();
							if (!__LIB_0__::func_163(iLocal_445[1], -1758697641))
							{
								func_692(&(iLocal_445[1]), &(uLocal_453[1]), 0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(iLocal_445[1], 2450.813f, 277.0583f, 73.7808f, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							}
							__LIB_10__::func_197(&Local_22, 4, 0);
							bLocal_918 = true;
						}
					}
					else if (!bLocal_917)
					{
						if (!bLocal_934)
						{
							if (!__LIB_13__::func_120("RBCON_CALL_", 0))
							{
								if (__LIB_12__::func_876(uParam0, "RBCON_IG5", 0))
								{
									__LIB_0__::func_325(&iLocal_819);
									func_294();
									func_556(1);
									__LIB_1__::func_148(&uLocal_1008);
									bLocal_917 = true;
								}
							}
						}
						else
						{
							__LIB_0__::func_325(&iLocal_819);
							func_294();
							func_556(2);
							bLocal_917 = true;
						}
					}
					if (bLocal_917)
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_411, &Local_970);
					}
					if (!bLocal_934)
					{
						if (__LIB_0__::func_264(&uLocal_1008) > 2f)
						{
							if (func_694() != 1)
							{
								func_695(1);
							}
							__LIB_0__::func_37(&uLocal_1008);
						}
					}
					else
					{
						if (func_694() != 1)
						{
							func_695(1);
						}
						if (!PED::IS_PED_IN_COMBAT(iLocal_445[1], 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_445[1], Global_35, 0, 0);
						}
					}
					if (!bLocal_934)
					{
						iVar0 = func_696(&iLocal_411, &iLocal_840, 60f, &Local_861, 0f, 3, 1, 0, 10241, iLocal_820, 0, 2, -1082130432 /* Float: -1f */);
						if (iVar0 == 0)
						{
							func_697();
							__LIB_5__::func_20(0, 0);
							if (__LIB_0__::func_181())
							{
								__LIB_12__::func_876(uParam0, "RBCON_ILO_POSJ", 0);
							}
							else
							{
								__LIB_12__::func_876(uParam0, "RBCON_ILO_POSA", 0);
							}
							__LIB_1__::func_539();
							__LIB_0__::func_37(&uLocal_1005);
							__LIB_0__::func_37(&uLocal_1008);
							AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[2]);
							return true;
						}
						else if (iVar0 == 1)
						{
							func_697();
							__LIB_5__::func_20(0, 0);
							if (__LIB_0__::func_181())
							{
								__LIB_12__::func_876(uParam0, "RBCON_ILO_NEGJ", 0);
							}
							else
							{
								__LIB_12__::func_876(uParam0, "RBCON_ILO_NEGA", 0);
							}
							__LIB_1__::func_539();
							__LIB_0__::func_37(&uLocal_1005);
							__LIB_0__::func_37(&uLocal_1008);
							AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[2]);
							return true;
						}
						else if ((((((func_698() || func_699(0)) || func_699(1)) || PED::IS_PED_IN_COMBAT(iLocal_445[2], 0)) || PED::IS_PED_IN_COMBAT(iLocal_445[4], 0)) || PED::IS_PED_IN_COMBAT(iLocal_445[5], 0)) || (__LIB_2__::func_401(iLocal_411, 1, 1, 0, 0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_411, false)))
						{
							func_697();
							__LIB_5__::func_20(0, 0);
							__LIB_0__::func_325(&iLocal_819);
							func_294();
							func_692(&(iLocal_445[0]), &(uLocal_453[0]), 0);
							func_692(&(iLocal_445[1]), &(uLocal_453[1]), 1);
							__LIB_1__::func_539();
							__LIB_0__::func_37(&uLocal_1005);
							__LIB_0__::func_37(&uLocal_1008);
							AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[2]);
							return true;
						}
						else if (!__LIB_6__::func_904() && __LIB_9__::func_344())
						{
							func_697();
							func_294();
							__LIB_0__::func_325(&iLocal_819);
							__LIB_1__::func_539();
							__LIB_0__::func_37(&uLocal_1005);
							__LIB_0__::func_37(&uLocal_1008);
							AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[2]);
							return true;
						}
					}
					else if (!__LIB_6__::func_904() && __LIB_9__::func_344())
					{
						func_697();
						func_294();
						__LIB_5__::func_20(0, 0);
						__LIB_0__::func_325(&iLocal_819);
						__LIB_1__::func_539();
						__LIB_0__::func_37(&uLocal_1005);
						__LIB_0__::func_37(&uLocal_1008);
						AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[2]);
						return true;
					}
				}
				else
				{
					func_702();
					if (!__LIB_1__::func_588("BCON_O_INVEST", 0, 0, -1, -1, 0))
					{
						__LIB_12__::func_883(uParam0, "BCON_O_INVEST", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
			}
			else if (func_294())
			{
				__LIB_1__::func_539();
				__LIB_0__::func_325(&iLocal_819);
				__LIB_0__::func_37(&uLocal_1005);
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[2]);
				return true;
			}
			break;
	}
	if (bLocal_918)
	{
		if (func_704(&Local_22, 1))
		{
			iLocal_18 = 2;
		}
	}
	return false;
}

bool func_333(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_767(uParam0);
	switch (iLocal_18)
	{
		case 0:
			iLocal_18 = 1;
			break;
		case 1:
			if (iLocal_21 != 3 && iLocal_21 != 4)
			{
				if (!bLocal_948)
				{
					if (__LIB_0__::func_396(Global_35) && PED::_GET_CARRIER_AS_MOUNT(iLocal_411) == __LIB_2__::func_825(Global_35))
					{
						func_709(uParam0);
					}
					else
					{
						__LIB_13__::func_92(&Local_22);
					}
				}
			}
			func_710(uParam0);
			if (iVar0 <= 1)
			{
				func_711(uParam0);
			}
			if ((__LIB_1__::func_205(Global_35, Local_22.f_306, 1, 0) && __LIB_0__::func_272(iLocal_411, 0)) && !bLocal_939)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "BCON_WOF_CHIEF", 0))
					{
						bLocal_939 = true;
					}
				}
			}
			if (func_704(&Local_22, 1))
			{
				iLocal_18 = 2;
			}
			if (!bLocal_948 && __LIB_0__::func_94(iLocal_411, __LIB_10__::func_45(Local_22.f_300), 1) < 15f)
			{
				func_280(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_13__::func_92(&Local_22);
				bLocal_948 = true;
			}
			break;
		case 2:
			if (func_712(&Local_22))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_362(int iParam0, int iParam1, int iParam2)
{
	__LIB_13__::func_101(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		func_723(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			func_175(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

char[] func_368(int iParam0)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_6(iParam0))
	{
		return cVar0;
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[__LIB_0__::func_909(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_483(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_369(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				func_389(iParam0, 6);
			}
			else
			{
				func_389(iParam0, 5);
			}
			func_387(iParam0);
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
		func_731(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		func_388(0);
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
		iVar9 = func_738(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_739(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
	func_387(iParam0);
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
			func_389(iParam0, 6);
		}
		else
		{
			func_389(iParam0, 5);
		}
		func_387(iParam0);
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
						func_748(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_748(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_748(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_748(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_748(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_748(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_748(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_748(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_748(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_748(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_748(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_748(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_748(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_750();
						func_751(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_748(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_369(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_369(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_369(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_748(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_786();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						func_787(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_787(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_787(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_787(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_787(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_787(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_787(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						func_787(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_787(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_787(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_748(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_787(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_787(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_787(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							func_787(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_787(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						func_787(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_787(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_787(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_787(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_787(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_483(0, 10, 11, joaat("CABR01")))
				{
					func_787(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_483(0, 7, 11, joaat("CACR02")))
				{
					func_787(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_483(0, 8, 11, joaat("CACR03")))
				{
					func_787(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_483(0, 11, 11, joaat("CACR01")))
				{
					func_787(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_483(0, 12, 11, joaat("CACR04")))
				{
					func_787(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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
						func_790(func_368(Global_1879514.f_1));
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

void func_370(int iParam0, bool bParam1)
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
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_483(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = func_792();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (__LIB_0__::func_702(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	else if (__LIB_1__::func_44(iParam0))
	{
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam1)
			{
				func_389(iParam0, 6);
			}
			else
			{
				func_389(iParam0, 5);
			}
			func_387(iParam0);
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

Vector3 func_373(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_793(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_793(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_377(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_6__::func_775();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	func_804();
}

int func_387(int iParam0)
{
	return func_820(__LIB_0__::func_327(iParam0));
}

int func_388(bool bParam0)
{
	if (!bParam0 && func_821(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_389(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	func_822(iParam0, iParam1);
}

void func_401(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_411, Global_35) < 20f && __LIB_1__::func_205(Global_35, Local_22.f_306, 1, 0))
	{
		if (__LIB_0__::func_75(&uLocal_966) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_966) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 9f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "RBCON_CELL_BYE", 0))
					{
						__LIB_1__::func_148(&uLocal_966);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_966);
		}
	}
}

void func_402(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	__LIB_1__::func_539();
	AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[4]);
	func_842();
	func_697();
	__LIB_13__::func_92(&Local_22);
}

int func_447(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = __LIB_0__::func_623(iParam0);
	if (__LIB_0__::func_83(iVar1))
	{
		iVar0 = Global_1835011[iVar1 /*74*/].f_1;
	}
	else
	{
		iVar2 = __LIB_0__::func_624(iParam0);
		if (__LIB_0__::func_5(iVar2))
		{
			iVar0 = Global_1347702[iVar2 /*49*/].f_15;
		}
		else if (iParam0 == joaat("CABR01"))
		{
			iVar0 = func_483(0, 10, 11, joaat("CABR01"));
		}
	}
	return iVar0;
}

int func_459(int iParam0, int iParam1)
{
	var uVar0;
	return func_911(&uVar0, iParam0, iParam1);
}

int func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= __LIB_0__::func_388())
	{
		iVar2 = __LIB_0__::func_388();
	}
	iVar5 = __LIB_0__::func_389(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return func_927(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return func_927(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return func_927(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_551()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_835))
	{
		iLocal_835 = VEHICLE::CREATE_VEHICLE(joaat("GATLINGMAXIM02"), vLocal_836, fLocal_839, true, true, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_835))
	{
		return false;
	}
	return true;
}

void func_552(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 117, true);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, true, 1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ENEMY"));
		PED::_0xFC3DB99C8144CD81(iParam0, iLocal_821, 0, 0, 0);
	}
}

void func_554()
{
	__LIB_2__::func_602(&(Local_861[0 /*17*/]), __LIB_2__::func_460(7), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_861[1 /*17*/]), __LIB_2__::func_460(10), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

int func_555()
{
	switch (iLocal_19)
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
	}
	return iLocal_19;
}

void func_556(int iParam0)
{
	int iVar0;
	iLocal_19 = iParam0;
	if (!__LIB_0__::func_272(iLocal_411, 0))
	{
		return;
	}
	switch (iLocal_19)
	{
		case 0:
			if (!__LIB_0__::func_163(iLocal_411, 993674639))
			{
				__LIB_1__::func_473(iLocal_411, joaat("WORLD_HUMAN_CROUCH_INSPECT"), 0, 0, 0, -1082130432 /* Float: -1f */);
				PED::_0xF1C03A5352243A30(iLocal_411);
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(iLocal_411, -2017877118))
			{
				TASK::TASK_PLAY_ANIM(iLocal_411, sLocal_1011, "action_lindsey", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(iLocal_411, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 2449.652f, 277.7044f, 73.7201f, 5000, 1, 0, 0, 0, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_411, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 3:
			PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_411, false);
			PED::_0xFC3DB99C8144CD81(iLocal_411, iLocal_822, 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 2442.137f, 277.3136f, 75.5729f, 2000, 1, 0, 0, 0, 0, 0, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_411, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 4:
			if (__LIB_1__::func_205(iLocal_411, iLocal_822, 1, 0) && !__LIB_0__::func_163(iLocal_411, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_411, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 5:
			break;
	}
}

void func_558(var uParam0)
{
	__LIB_13__::func_114(&Local_22);
	__LIB_13__::func_126(uParam0, &Local_22, &iLocal_411);
	if (__LIB_0__::func_181())
	{
		StringCopy(&(Local_22.f_340), "RBCON_DMP_J", 24);
	}
	else
	{
		StringCopy(&(Local_22.f_340), "RBCON_DMP_A", 24);
	}
	Local_22.f_299 = 9;
}

void func_559()
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_411, 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_411, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_411, true);
		__LIB_13__::func_197(&iLocal_411, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_445[iVar0], false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_445[iVar0], true);
			__LIB_13__::func_197(&(iLocal_445[iVar0]), 1, 0);
		}
		iVar0++;
	}
}

void func_560()
{
	__LIB_0__::func_401(joaat("LEMOYNE_RAIDERS_COVER"));
	PATHFIND::_0x7C334FF4D9215912("lemoyne_raiders_cover");
	GRAPHICS::_0xDFEA23EC90113657(joaat("LEMOYNE_RAIDERS_COVER"));
}

int func_566(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_327(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	__LIB_1__::func_236(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_985(iVar0, iParam1);
	return iParam1;
}

void func_583(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_133(1, 1);
	__LIB_5__::func_119(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_634(var uParam0)
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
		func_1045(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1047(uParam0);
		func_1048(uParam0);
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

int func_683()
{
	if (!bLocal_921)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 2f)
		{
			if (__LIB_1__::func_205(Global_35, iLocal_821, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_827, 1, 0))
			{
				bLocal_921 = true;
			}
		}
		else if (__LIB_1__::func_205(Global_35, iLocal_821, 1, 0))
		{
			bLocal_921 = true;
		}
	}
	if (bLocal_921)
	{
		return 1;
	}
	return 0;
}

int func_684()
{
	int iVar0;
	if (bLocal_934)
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_826, true, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			if (func_699(iVar0))
			{
				bLocal_934 = true;
				return 1;
			}
			else if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_821))
			{
				bLocal_934 = true;
				return 1;
			}
		}
		iVar0++;
	}
	if (func_698())
	{
		bLocal_934 = true;
		return 1;
	}
	return 0;
}

void func_685()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			if (((iVar0 != 1 && iVar0 != 0) && iVar0 != 3) && iVar0 != 6)
			{
				if (iVar0 == 2 || iVar0 == 4)
				{
					if (__LIB_1__::func_348(Global_35, iLocal_445[iVar0]) < 1f || __LIB_1__::func_205(Global_35, iLocal_830, 1, 0))
					{
						if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
						{
							if (!PED::IS_PED_IN_COMBAT(iLocal_445[iVar0], Global_35))
							{
								func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
								func_1117(&(iLocal_445[iVar0]));
							}
						}
					}
				}
				else if (__LIB_1__::func_348(Global_35, iLocal_445[iVar0]) < 5f || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iLocal_445[iVar0], 17))
				{
					if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
					{
						if (!PED::IS_PED_IN_COMBAT(iLocal_445[iVar0], Global_35))
						{
							func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
							func_1117(&(iLocal_445[iVar0]));
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_690(vector3 vParam0, var uParam3, vector3 vParam4, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (__LIB_0__::func_51(&(uParam3->f_3), 1))
	{
		__LIB_3__::func_565(uParam3);
		if (__LIB_1__::func_378(vParam0, fParam8, 2.5f, fParam12, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(vParam0, uParam3, fParam8))
	{
		if (__LIB_0__::func_51(&(uParam3->f_3), 128))
		{
			__LIB_2__::func_496(uParam3, vParam0, fParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!__LIB_0__::func_51(&(uParam3->f_3), 128))
		{
			__LIB_2__::func_496(uParam3, vParam0, fParam7, iParam10);
		}
	}
}

void func_692(var uParam0, var uParam1, bool bParam2)
{
	if (__LIB_0__::func_272(*uParam0, 0) && !MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
		if (bParam2)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, -1034486097);
		}
	}
}

int func_694()
{
	switch (iLocal_20)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return iLocal_20;
}

void func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	iLocal_20 = iParam0;
	switch (iLocal_20)
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
				{
					if (iVar0 == 0)
					{
						func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(iLocal_445[iVar0], 2458.962f, 276.7076f, 74.3992f, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
				}
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
				{
					if (iVar0 == 2)
					{
						func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
						if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
						{
							TASK::CLEAR_PED_TASKS(iLocal_445[iVar0], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2450.539f, 287.6745f, 69.4056f, Global_35, 1.5f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_445[iVar0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
					}
					else if (iVar0 == 4)
					{
						func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
						if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
						{
							TASK::CLEAR_PED_TASKS(iLocal_445[iVar0], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_PAUSE(0, 2000);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2449.203f, 293.4914f, 69.2131f, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_445[iVar0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
				{
					if (iVar0 == 3)
					{
						func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
						if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
						{
							TASK::CLEAR_PED_TASKS(iLocal_445[iVar0], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2442.042f, 295.214f, 73.1069f, Global_35, 1.5f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_445[iVar0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
					}
					else if (iVar0 == 5)
					{
						func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
						if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
						{
							TASK::CLEAR_PED_TASKS(iLocal_445[iVar0], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2463.94f, 281.5091f, 72.785f, Global_35, 1.5f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_445[iVar0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
					}
					else if (iVar0 == 6)
					{
						func_692(&(iLocal_445[iVar0]), &(uLocal_453[iVar0]), 1);
						if (!__LIB_0__::func_163(iLocal_445[iVar0], 242628503))
						{
							TASK::CLEAR_PED_TASKS(iLocal_445[iVar0], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2440.953f, 289.5829f, 73.1998f, Global_35, 1.5f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_445[iVar0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
					}
				}
				iVar0++;
			}
			break;
	}
}

int func_696(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_696(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_697()
{
	__LIB_1__::func_480(&iLocal_411);
	__LIB_2__::func_480(&Local_861, 0, 0, 1, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_411, 301, true);
}

bool func_698()
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_411, 0))
	{
		if (__LIB_13__::func_199(iLocal_411, 0, &uLocal_416, &iVar0, 0, 0))
		{
			if (((iVar0 == 2 || iVar0 == 256) || iVar0 == 4) || iVar0 == 16)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_699(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_445[iParam0], 0))
	{
		if (__LIB_13__::func_199(iLocal_445[iParam0], 0, &(Local_491[iParam0 /*28*/]), &iVar0, 0, 0))
		{
			if (((iVar0 == 2 || iVar0 == 4) || iVar0 == 1) || iVar0 == 16)
			{
				return true;
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_445[iParam0], Global_35, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_702()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 0 && iVar0 != 1)
		{
			if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
			{
				if (!__LIB_0__::func_163(iLocal_445[iVar0], 993674639))
				{
					__LIB_1__::func_473(iLocal_445[iVar0], joaat("WORLD_HUMAN_CROUCH_INSPECT"), 0, 0, 0, -1082130432 /* Float: -1f */);
					PED::_0xF1C03A5352243A30(iLocal_445[iVar0]);
				}
			}
		}
		iVar0++;
	}
}

bool func_704(var uParam0, bool bParam1)
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
				func_1162(uParam0);
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

void func_709(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			if (__LIB_0__::func_272(iLocal_411, 0))
			{
				if (__LIB_0__::func_94(iLocal_411, vLocal_412, 1) > 75f && func_1169())
				{
					if (!func_1170() || func_1171())
					{
						if (__LIB_0__::func_75(&uLocal_1018) && !__LIB_6__::func_904())
						{
							if (__LIB_0__::func_265(&uLocal_1018) > 10f)
							{
								if (!__LIB_0__::func_270())
								{
									if (__LIB_0__::func_181())
									{
										if (iLocal_1027 < 4)
										{
											if (__LIB_12__::func_876(uParam0, sLocal_1021[iLocal_1027], 0))
											{
												iLocal_1027++;
												iLocal_15 = 1;
											}
										}
										else
										{
											__LIB_0__::func_37(&uLocal_1018);
											iLocal_15 = 2;
										}
									}
									else if (__LIB_1__::func_187(67))
									{
										if (iLocal_1027 < 5)
										{
											if (__LIB_12__::func_876(uParam0, sLocal_1021[iLocal_1027], 0))
											{
												iLocal_1027++;
												iLocal_15 = 1;
											}
										}
										else
										{
											__LIB_0__::func_37(&uLocal_1018);
											iLocal_15 = 2;
										}
									}
									else if (iLocal_1027 < 4)
									{
										if (__LIB_12__::func_876(uParam0, sLocal_1021[iLocal_1027], 0))
										{
											iLocal_1027++;
											iLocal_15 = 1;
										}
									}
									else
									{
										__LIB_0__::func_37(&uLocal_1018);
										iLocal_15 = 2;
									}
								}
							}
						}
						else
						{
							__LIB_1__::func_148(&uLocal_1018);
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_13__::func_113(&Local_22, 1056964608 /* Float: 0.5f */, func_1172(), 1))
			{
				if (__LIB_0__::func_181())
				{
					if (iLocal_1027 < 5 && iLocal_1027 != 0)
					{
						if (__LIB_5__::func_463())
						{
							__LIB_6__::func_900(sLocal_1021[(iLocal_1027 - 1)], 0, 0);
						}
					}
					iLocal_959++;
					__LIB_1__::func_148(&uLocal_1018);
					iLocal_15 = 0;
				}
				else
				{
					if (iLocal_1027 < 6 && iLocal_1027 != 0)
					{
						if (__LIB_5__::func_463())
						{
							__LIB_6__::func_900(sLocal_1021[(iLocal_1027 - 1)], 0, 0);
						}
					}
					iLocal_959++;
					__LIB_1__::func_148(&uLocal_1018);
					iLocal_15 = 0;
				}
			}
			else if (!__LIB_6__::func_904() && !__LIB_13__::func_76())
			{
				__LIB_13__::func_92(&Local_22);
				__LIB_1__::func_148(&uLocal_1018);
				iLocal_15 = 0;
			}
			break;
		case 2:
			break;
	}
}

void func_710(var uParam0)
{
	func_1176(uParam0);
	func_1177();
	func_1178(uParam0);
	func_1179(uParam0);
	func_1180(uParam0);
	func_685();
	func_1181(uParam0);
	if (!bLocal_949)
	{
		if (func_1182() || !__LIB_0__::func_272(iLocal_411, 0))
		{
			if (func_323(1) || __LIB_0__::func_94(iLocal_411, vLocal_412, 1) > 60f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[4]);
				func_280(uParam0, func_61(1), func_61(2), 1, 2, 0);
				bLocal_949 = true;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iLocal_444 = PED::GET_MOUNT(Global_35);
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_444) && __LIB_0__::func_272(iLocal_444, 0)) && !__LIB_0__::func_163(iLocal_444, -1824940423))
		{
			TASK::CLEAR_PED_TASKS(iLocal_444, true, false);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(iLocal_444, 2470.479f, 311.9824f, 72.1345f, 2f, 0, false, 524419, -1f);
		}
	}
	else
	{
		if (__LIB_0__::func_94(iLocal_411, vLocal_412, 1) > 200f)
		{
			func_1183();
		}
		if (!bLocal_923)
		{
			if (__LIB_0__::func_94(iLocal_411, vLocal_412, 1) > 60f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[4]);
				TASK::REMOVE_COVER_POINT(iLocal_831[0]);
				TASK::REMOVE_COVER_POINT(iLocal_831[1]);
				TASK::REMOVE_COVER_POINT(iLocal_831[2]);
				bLocal_923 = true;
			}
		}
	}
	if (!bLocal_950)
	{
		if (__LIB_0__::func_12() == 5)
		{
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_1012[4]);
			func_280(uParam0, func_61(2), func_61(3), 2, 3, 0);
			bLocal_950 = true;
		}
	}
}

void func_711(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_10__::func_45(Local_22.f_300), true);
	switch (iLocal_21)
	{
		case 0:
			fVar0 = __LIB_0__::func_94(iLocal_411, 2452.887f, 290.233f, 70.872f, 1);
			if (MAP::_0xF47A1EB2A538A3A3())
			{
				if (fVar0 > 80f)
				{
					iLocal_21 = 1;
				}
			}
			else if (fVar0 > 70f)
			{
				iLocal_21 = 1;
			}
			break;
		case 1:
			vVar3 = { func_1184() };
			if (!__LIB_0__::func_86(vVar3))
			{
				if (func_1185(vVar3, uParam0))
				{
					iLocal_21 = 2;
				}
			}
			break;
		case 2:
			if (func_1186(uParam0))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_813[iVar2]))
					{
						iLocal_813[iVar2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_803[iVar2]);
					}
					iVar2++;
				}
				if (__LIB_6__::func_904())
				{
					__LIB_5__::func_20(0, 0);
				}
				else if (__LIB_0__::func_272(iLocal_411, 0))
				{
					if (__LIB_12__::func_876(uParam0, "RBCON_BOUNA", 0))
					{
						__LIB_13__::func_92(&Local_22);
						bLocal_936 = true;
						iLocal_21 = 3;
					}
				}
				else if (__LIB_12__::func_876(uParam0, "RBCON_BOUNB", 0))
				{
					__LIB_13__::func_92(&Local_22);
					iLocal_21 = 3;
				}
			}
			else if (fVar1 < 100f)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					__LIB_0__::func_325(&(iLocal_813[iVar2]));
					TASK::CLEAR_PED_TASKS(iLocal_803[iVar2], true, false);
					TASK::TASK_SMART_FLEE_PED(iLocal_803[iVar2], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					__LIB_2__::func_788(&(iLocal_803[iVar2]), 1, 0, 1);
					iVar2++;
				}
				__LIB_1__::func_148(&uLocal_1018);
				iLocal_21 = 5;
			}
			break;
		case 3:
			if (!__LIB_13__::func_198("RBCON_BOUNB") && !__LIB_13__::func_198("RBCON_BOUNA"))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_813[iVar2]))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_813[iVar2], -1034486097);
					}
					iVar2++;
				}
				func_1188();
				iLocal_21 = 4;
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!__LIB_0__::func_163(iLocal_803[iVar2], -2015108952))
					{
						TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_803[iVar2], Global_35, Global_35, 0, -1, 0.5f, 3f, 0);
					}
					iVar2++;
				}
			}
			break;
		case 4:
			if (func_1171() || __LIB_0__::func_12() == 5)
			{
				if (func_1171() && !bLocal_940)
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_13__::func_123(uParam0, "BCON_BOUNTY_D", 0, 0))
					{
						bLocal_940 = true;
					}
				}
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (__LIB_0__::func_272(iLocal_803[iVar2], 0))
					{
						__LIB_0__::func_325(&(iLocal_813[iVar2]));
						TASK::CLEAR_PED_TASKS(iLocal_803[iVar2], true, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_803[iVar2], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
						__LIB_2__::func_788(&(iLocal_803[iVar2]), 1, 0, 1);
					}
					iVar2++;
				}
				__LIB_1__::func_148(&uLocal_1018);
				iLocal_21 = 5;
			}
			else
			{
				if (!__LIB_0__::func_272(iLocal_411, 0) && bLocal_936)
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_13__::func_123(uParam0, "BCON_WOF_BDEAD", 0, 0))
					{
						bLocal_936 = false;
					}
				}
				func_1189(uParam0);
			}
			func_1188();
			break;
		case 5:
			break;
	}
}

bool func_712(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_1162(uParam0);
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
				func_1203(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_723(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_702(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	iVar0 = __LIB_0__::func_80(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { Var2 };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { Var2 };
	}
	Global_1898329 = (Global_1898329 - 1);
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

int func_731(bool bParam0, int iParam1)
{
	int iVar0;
	if (!bParam0 && func_821(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
	func_388(bParam0);
	return 1;
}

int func_738(int iParam0, var uParam1, int iParam2)
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
			Jump @2348; //curOff = 1597
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
			Jump @2348; //curOff = 2200
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
int func_739(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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

bool func_748(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_748(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1272(iParam0);
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
						func_748(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_748(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_748(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_748(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_748(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_748(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_748(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_748(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_748(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_748(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_750()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1314();
	func_1315();
	func_1316();
	func_1317();
	func_1318();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_751(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1321(iParam0, 1, 1, -142743235, 1);
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

void func_786()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1354(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_787(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_1__::func_616(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_1357(iParam0, iParam1, fParam3, iParam4);
	}
}

void func_790(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!Global_1879514.f_11)
	{
		iVar0 = func_792();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (__LIB_0__::func_700(Global_1879514.f_1) == 1)
			{
				__LIB_0__::func_896(5, 1);
			}
			else if (__LIB_0__::func_700(Global_1879514.f_1) == 8 && (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 1) || __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				__LIB_0__::func_896(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

int func_792()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_1361(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (__LIB_0__::func_318(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_793(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1367();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1368(Global_1310720.f_21))
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
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && func_1371(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
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

void func_804()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	if (!__LIB_0__::func_1(Global_1935630, 8192))
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_0__::func_8(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(10f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(25f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * __LIB_0__::func_646(6f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = __LIB_0__::func_648();
	fVar0 = (fVar0 + (0.1111111f * __LIB_0__::func_646(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + __LIB_0__::func_646(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * __LIB_0__::func_646(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(__LIB_1__::func_5()))));
	if (__LIB_1__::func_187(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * __LIB_0__::func_646(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	__LIB_1__::func_702(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(__LIB_1__::func_6());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = __LIB_0__::func_650(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (__LIB_0__::func_6(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = __LIB_0__::func_291(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_723(Global_1898330[iVar61]);
				}
				else
				{
					__LIB_1__::func_130(iVar61, 0);
					if (__LIB_0__::func_700(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = __LIB_0__::func_299(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = __LIB_0__::func_299(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(__LIB_0__::func_299(Global_1898437), &iVar9);
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

int func_820(int iParam0)
{
	struct<5> Var0;
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_985(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_821(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_1392(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_822(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1393(iParam0);
	}
	else
	{
		__LIB_0__::func_932(iParam0, iParam1);
	}
	__LIB_0__::func_408();
}

void func_842()
{
	__LIB_0__::func_400(joaat("LEMOYNE_RAIDERS_COVER"));
	PATHFIND::_0x527B97C203BB8606("lemoyne_raiders_cover");
	GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("LEMOYNE_RAIDERS_COVER"));
}

int func_911(var uParam0, int iParam1, int iParam2)
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
		return func_911(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_927(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_475(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > __LIB_0__::func_388())
	{
		return -1;
	}
	iVar0 = __LIB_0__::func_389(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_822(iVar1, 0);
	__LIB_0__::func_341(iVar1, 0);
	__LIB_0__::func_397(iVar1, 0);
	__LIB_0__::func_476(iVar1, 0);
	__LIB_0__::func_477(iVar1, iVar0);
	if (iParam4 != 0)
	{
		__LIB_0__::func_478(iVar1, iParam4);
	}
	return iVar1;
}

void func_985(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			__LIB_0__::func_517((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			__LIB_0__::func_517(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (__LIB_0__::func_6(Global_1898164.f_1[0 /*5*/]))
	{
		func_389(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_1045(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1575();
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

void func_1047(var uParam0)
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
			func_1582(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1582(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1048(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1582(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1117(var uParam0)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (!PED::IS_PED_IN_COMBAT(*uParam0, Global_35))
		{
			TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 16);
		}
	}
}

void func_1162(var uParam0)
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
			if (func_1704(uParam0))
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
							func_1708(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_1708(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
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

bool func_1169()
{
	if (PED::_GET_CARRIER_AS_PED(iLocal_411) != 0)
	{
		return true;
	}
	return false;
}

bool func_1170()
{
	if (iLocal_21 == 3)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_1171()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(iLocal_803[iVar0], 0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

char* func_1172()
{
	switch (iLocal_959)
	{
		case 0:
			return "RBCON_SHUSH";
		case 1:
			return "RBCON_SHUSH2";
		case 2:
			return "RBCON_SHUSH3";
		case 3:
			return "RBCON_SHUSH4";
		case 4:
			return "RBCON_SHUSH5";
	}
	return "RBCON_SHUSH";
}

void func_1176(var uParam0)
{
	int iVar0;
	if (bLocal_915)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__::func_272(iLocal_692[iVar0], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_692[iVar0], vLocal_689, 13f, 13f, 3f, false, true, 0))
				{
					if (__LIB_0__::func_71(iLocal_692[iVar0]))
					{
						if (!__LIB_0__::func_163(iLocal_692[iVar0], 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(iLocal_692[iVar0], 0, 0, 0, 0, 0);
						}
					}
				}
				if (!__LIB_0__::func_71(iLocal_692[iVar0]))
				{
					if (!bLocal_919)
					{
						__LIB_12__::func_875(uParam0, iLocal_692[0], "EXC_YPED4", 1);
						bLocal_919 = true;
					}
					else if (__LIB_1__::func_205(iLocal_692[0], iLocal_821, 1, 0))
					{
						func_1725(uParam0);
					}
					if (!PED::IS_PED_IN_COMBAT(iLocal_692[iVar0], 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_692[iVar0], Global_35, 0, 16);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1177()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_692[iVar0], 0) && !bLocal_916)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_696[iVar0]) && __LIB_1__::func_348(iLocal_692[iVar0], Global_35) < 50f)
			{
				iLocal_696[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_692[iVar0]);
				MAP::_BLIP_SET_MODIFIER(iLocal_696[iVar0], -1034486097);
				iLocal_953++;
			}
		}
		iVar0++;
	}
	if (iLocal_953 == 3 && !bLocal_916)
	{
		bLocal_916 = true;
	}
}

void func_1178(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (!__LIB_0__::func_272(iLocal_411, 0))
	{
		func_1726();
	}
	if (!bLocal_920)
	{
		if (__LIB_0__::func_272(iLocal_445[0], 0))
		{
			if (func_1727())
			{
			}
		}
		if (!bLocal_913)
		{
			if (__LIB_0__::func_272(iLocal_411, 0))
			{
				if (func_555() != 2)
				{
					func_556(2);
				}
			}
			if (!__LIB_0__::func_163(iLocal_445[1], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 2446.65f, 280.0008f, 73.7468f, 5000, 1, 0, 0, 0, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_445[1], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
			if (!__LIB_0__::func_272(iLocal_445[0], 0) || !__LIB_0__::func_272(iLocal_411, 0))
			{
				if (func_694() != 2)
				{
					func_695(2);
					bLocal_913 = true;
				}
			}
		}
		if (!bLocal_914)
		{
			if (!__LIB_0__::func_163(iLocal_445[1], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 2446.65f, 280.0008f, 73.7468f, 2f, 0, false, 524419, -1f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_445[1], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
			if (iVar1 >= 3)
			{
				if (func_694() != 3)
				{
					func_695(3);
				}
				if (!__LIB_1__::func_205(iLocal_445[3], iLocal_825, 1, 0) && !__LIB_1__::func_205(iLocal_445[6], iLocal_825, 1, 0))
				{
					if (__LIB_0__::func_272(iLocal_411, 0))
					{
						if (func_555() != 3)
						{
							func_556(3);
							bLocal_914 = true;
						}
					}
				}
			}
		}
		else if (func_555() != 4 || func_555() != 5)
		{
			func_556(4);
		}
		if (iVar1 >= 6 && !bLocal_915)
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_825, true, 0))
			{
				if (func_1728(uParam0))
				{
					if (func_1729(uParam0))
					{
						func_1730();
						bLocal_915 = true;
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_411, iLocal_825, true, 0))
			{
				if (func_1728(uParam0))
				{
					if (func_1729(uParam0))
					{
						func_1730();
						bLocal_915 = true;
					}
				}
			}
		}
	}
}

void func_1179(var uParam0)
{
	if ((((__LIB_1__::func_205(Global_35, iLocal_821, 1, 0) && iLocal_930[0] == 1) && !__LIB_13__::func_198("RBCO_ATTACKED")) && !__LIB_13__::func_198("RBCO_G1TURDEAD")) && !__LIB_13__::func_198("RBCO_G2TURDEAD"))
	{
		if (__LIB_0__::func_272(iLocal_411, 0))
		{
			if (!func_323(0))
			{
				if (!PED::_IS_PED_HOGTIED(iLocal_411))
				{
					if (__LIB_1__::func_985() == 1)
					{
						if (!func_1169())
						{
							func_1731(uParam0, 1);
						}
					}
					else if (iLocal_1035 == 0 || iLocal_1035 == 1)
					{
						if (func_328(uParam0, 3))
						{
							func_1731(uParam0, 2);
						}
					}
					else if (iLocal_1035 == 2)
					{
						if (func_328(uParam0, 2))
						{
							func_1731(uParam0, 2);
						}
					}
				}
				else
				{
					func_1731(uParam0, 1);
				}
			}
		}
		else if (iLocal_1040 == 0 || iLocal_1040 == 1)
		{
			if (func_328(uParam0, 3))
			{
				func_1731(uParam0, 3);
			}
		}
		else if (iLocal_1040 == 2)
		{
			if (func_328(uParam0, 2))
			{
				func_1731(uParam0, 3);
			}
		}
	}
}

void func_1180(var uParam0)
{
	if (!iLocal_930[0])
	{
		if (func_694() == 1)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_1__::func_985() == 1)
				{
					if (func_328(uParam0, 2))
					{
						if (__LIB_12__::func_876(uParam0, "RBCO_G1MANMG", 0))
						{
							iLocal_930[0] = 1;
						}
					}
				}
				else if (func_328(uParam0, 3))
				{
					if (__LIB_12__::func_876(uParam0, "RBCO_G2MANMG", 0))
					{
						iLocal_930[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_930[0] && !bLocal_933)
	{
		if (!__LIB_13__::func_198("RBCO_G1MANMG") && !__LIB_13__::func_198("RBCO_G2MANMG"))
		{
			if (func_328(uParam0, 3))
			{
				if (__LIB_12__::func_876(uParam0, "RBCO_ATTACKED", 0))
				{
					bLocal_933 = true;
				}
			}
		}
	}
	else if (func_694() == 2)
	{
		if (!__LIB_0__::func_272(iLocal_445[0], 0))
		{
			if (!bLocal_932)
			{
				if (__LIB_1__::func_985() == 1)
				{
					if (func_328(uParam0, 2))
					{
						if (__LIB_12__::func_876(uParam0, "RBCO_G1TURDEAD", 0))
						{
							bLocal_932 = true;
						}
					}
				}
				else if (func_328(uParam0, 3))
				{
					if (__LIB_12__::func_876(uParam0, "RBCO_G2TURDEAD", 0))
					{
						bLocal_932 = true;
					}
				}
			}
		}
	}
}

void func_1181(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_411, 0))
	{
		return;
	}
	if (!PED::_IS_PED_HOGTIED(iLocal_411))
	{
		return;
	}
	if (!bLocal_924)
	{
		if (PED::GET_PED_CONFIG_FLAG(iLocal_411, 11, false) == 0)
		{
			if (__LIB_6__::func_904())
			{
				__LIB_5__::func_20(0, 0);
			}
			if (__LIB_13__::func_123(uParam0, "BCON_HOG_", 0, 0))
			{
				bLocal_924 = true;
			}
		}
	}
	func_1732(uParam0);
	if (func_323(1))
	{
		if (!bLocal_937 && !__LIB_6__::func_904())
		{
			if (__LIB_12__::func_876(uParam0, "RBCON_WOF_ALL", 0))
			{
				bLocal_937 = true;
			}
		}
		else if (!bLocal_938 && !__LIB_6__::func_904())
		{
			if (__LIB_13__::func_123(uParam0, "BCON_AFTER_", 0, 0))
			{
				bLocal_938 = true;
			}
		}
		if (!bLocal_925)
		{
			if ((!__LIB_13__::func_120("BCON_AFTER_", 0) && !__LIB_13__::func_198("RBCON_WOF_ALL")) && ENTITY::_0x61914209C36EFDDB(iLocal_411) == 8)
			{
				if (__LIB_13__::func_123(uParam0, "BCON_ONHOR_", 0, 0))
				{
					bLocal_925 = true;
				}
			}
		}
	}
	else if (!bLocal_925)
	{
		if (ENTITY::_0x61914209C36EFDDB(iLocal_411) == 8)
		{
			if (__LIB_13__::func_123(uParam0, "BCON_HORSELIVE", 0, 0))
			{
				bLocal_925 = true;
			}
		}
	}
	else if (!bLocal_926 && !__LIB_6__::func_904())
	{
		if (__LIB_12__::func_876(uParam0, "BCON_HORSE_HELP", 0))
		{
			bLocal_926 = true;
		}
	}
	if (!func_323(1))
	{
		if (!bLocal_927)
		{
			if ((!__LIB_13__::func_120("BCON_AFTER_", 0) && !__LIB_13__::func_198("RBCON_WOF_ALL")) && ENTITY::_0x61914209C36EFDDB(iLocal_411) == 4)
			{
				bLocal_927 = __LIB_13__::func_123(uParam0, "BCON_PICKUP_", 0, 0);
			}
		}
	}
	if (!bLocal_928 && __LIB_0__::func_94(iLocal_411, __LIB_10__::func_45(Local_22.f_300), 1) < 50f)
	{
		if (ENTITY::_0x61914209C36EFDDB(iLocal_411) == 5 || ENTITY::_0x61914209C36EFDDB(iLocal_411) == 7)
		{
			if (__LIB_13__::func_123(uParam0, "RCON_CLJAIL_", 0, 0))
			{
				bLocal_928 = true;
			}
		}
	}
	if (!bLocal_929 && __LIB_0__::func_94(iLocal_411, __LIB_10__::func_45(Local_22.f_300), 1) < 20f)
	{
		if (ENTITY::_0x61914209C36EFDDB(iLocal_411) == 5 || ENTITY::_0x61914209C36EFDDB(iLocal_411) == 9)
		{
			if (__LIB_13__::func_123(uParam0, "RCON_JAILHORSE", 0, 0))
			{
				bLocal_929 = true;
			}
		}
	}
}

bool func_1182()
{
	if (!__LIB_0__::func_272(iLocal_411, 0))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(iLocal_411) && !__LIB_13__::func_183(Global_35))
	{
		if (__LIB_9__::func_375(Global_35) != iLocal_411)
		{
			return true;
		}
	}
	return false;
}

void func_1183()
{
	int iVar0;
	int iVar1;
	if (bLocal_915)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__::func_272(iLocal_692[iVar0], 0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_692[iVar0]))
			{
				__LIB_2__::func_788(&(iLocal_692[iVar0]), 0, 0, 1);
				__LIB_0__::func_325(&(iLocal_696[iVar0]));
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar1], 0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_445[iVar1]))
		{
			__LIB_2__::func_788(&(iLocal_445[iVar1]), 0, 0, 1);
			__LIB_0__::func_325(&(uLocal_453[iVar1]));
		}
		iVar1++;
	}
}

Vector3 func_1184()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	float fVar11;
	if (!__LIB_0__::func_75(&uLocal_960))
	{
		__LIB_0__::func_268(&uLocal_960, 1000f);
	}
	if (__LIB_0__::func_265(&uLocal_960) > 1f)
	{
		iVar10 = 20;
		vVar3 = { __LIB_4__::func_147(Global_36, 2452.887f, 290.233f, 70.872f) };
		vVar3 = { __LIB_4__::func_147(Global_36, vVar3) };
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if (__LIB_0__::func_86(vVar0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar3, iVar9, &vVar6, 1, 1077936128 /* Float: 3f */, 0))
				{
					fVar11 = __LIB_0__::func_94(Global_35, vVar6, 1);
					if ((fVar11 < 200f && fVar11 > 40f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("G_M_Y_UNIEXCONFEDS_01"), vVar6, true))
					{
						if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar6 + Vector(-2f, -2f, -2f), vVar6 + Vector(2f, 2f, 2f)))
						{
							vVar0 = { vVar6 };
						}
						else
						{
							vVar6 = { 0f, 0f, 0f };
						}
					}
					else
					{
						vVar6 = { 0f, 0f, 0f };
					}
				}
			}
			iVar9++;
		}
		__LIB_1__::func_148(&uLocal_960);
	}
	return vVar0;
}

bool func_1185(vector3 vParam0, var uParam3)
{
	if (iLocal_957 == 3)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_803[iLocal_957]))
	{
		iLocal_803[iLocal_957] = __LIB_12__::func_885(uParam3, iLocal_818, vParam0 + Vector(IntToFloat(iLocal_957), IntToFloat(iLocal_957 * 1), IntToFloat(iLocal_957 * 1)), 0, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_803[iLocal_957]))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_808[iLocal_957]))
	{
		iLocal_808[iLocal_957] = __LIB_13__::func_200(uParam3, iLocal_803[iLocal_957]);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_808[iLocal_957]))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_803[iLocal_957], true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_803[iLocal_957], 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_803[iLocal_957], 6, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_803[iLocal_957], joaat("REL_PLAYER_ENEMY"));
	__LIB_1__::func_991(iLocal_803[iLocal_957], 0);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_803[iLocal_957], false, 0f);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_803[iLocal_957], true);
	TASK::_0x9DE63896B176EA94(iLocal_803[iLocal_957], 1);
	TASK::_0xC6170856E54557B2(iLocal_803[iLocal_957], 1, 1f);
	TASK::_0xF948F4356F010F11(iLocal_803[iLocal_957], 1, 1f);
	PED::SET_PED_CONFIG_FLAG(iLocal_803[iLocal_957], 265, false);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_808[iLocal_957], false, 0f);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_808[iLocal_957], true);
	TASK::_0x9DE63896B176EA94(iLocal_808[iLocal_957], 1);
	TASK::_0xC6170856E54557B2(iLocal_808[iLocal_957], 1, 1f);
	TASK::_0xF948F4356F010F11(iLocal_808[iLocal_957], 1, 1f);
	PED::SET_PED_CONFIG_FLAG(iLocal_808[iLocal_957], 265, false);
	ENTITY::_0x18FF3110CF47115D(iLocal_808[iLocal_957], 15, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_808[iLocal_957], 6, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_803[iLocal_957], 127, true);
	PED::_0x712B2C2B2471B493(iLocal_803[iLocal_957], joaat("DISABLED"));
	__LIB_9__::func_233(iLocal_803[iLocal_957], Global_35);
	if (iLocal_957 == 0)
	{
		__LIB_1__::func_766(iLocal_803[iLocal_957], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_766(iLocal_803[iLocal_957], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_803[iLocal_957]))
	{
		TASK::TASK_GO_TO_ENTITY(iLocal_803[iLocal_957], Global_35, -1, 30f, 3f, 40f, 0);
	}
	iLocal_957++;
	return false;
}

bool func_1186(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_803[iVar0]))
		{
			if (!__LIB_0__::func_163(iLocal_803[iVar0], 1227113341))
			{
				TASK::TASK_GO_TO_ENTITY(iLocal_803[iVar0], Global_35, -1, 30f, 3f, 40f, 0);
			}
			if ((__LIB_0__::func_665(Global_35, iLocal_803[iVar0], 1, 1) < 30f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_803[iVar0], true, false), 20f, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_803[iVar0], Global_35, 1, 1))
			{
				__LIB_12__::func_875(uParam0, iLocal_803[iVar0], "RBCON_BHUNTER1", 1);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1188()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(iLocal_803[iVar0], 0))
		{
			if (!PED::IS_PED_IN_COMBAT(iLocal_803[iVar0], 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_803[iVar0], false);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_803[iVar0], Global_35, -1, 0, 51, 0);
				TASK::TASK_COMBAT_PED(iLocal_803[iVar0], Global_35, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_1189(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_411, Global_35) < 20f && func_1739())
	{
		if (__LIB_0__::func_75(&uLocal_966) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_966) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 9f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_1__::func_985() == 1)
					{
						if (__LIB_13__::func_123(uParam0, "BCON_BOUNTY_SH", 0, 0))
						{
							__LIB_1__::func_148(&uLocal_966);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "BCON_WOF_BOUNTY", 0))
					{
						__LIB_1__::func_148(&uLocal_966);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_966);
		}
	}
}

void func_1203(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_483(0, uParam0->f_300, 2, 0);
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
			func_1321(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

void func_1272(int iParam0)
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
			func_1821(-748969569, 0, 0);
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

void func_1314()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1858(0);
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
	func_1858(1);
}

void func_1315()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_748(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1316()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1861(0);
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
	func_1861(1);
}

void func_1317()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1861(0);
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
	func_1861(1);
}

void func_1318()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_748(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_748(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1321(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1321(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1321(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1321(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1354(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1899(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_748(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1357(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (__LIB_0__::func_472())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (__LIB_0__::func_472())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(__LIB_0__::func_299(iParam0), iVar3, iVar1, iParam3);
	iVar4 = __LIB_0__::func_76(iParam0);
	if (__LIB_0__::func_700(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(8, iVar1);
					__LIB_1__::func_635(7, iVar1);
					break;
				case 12:
					__LIB_1__::func_635(6, iVar1);
					break;
				case 53:
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(7, iVar1);
					__LIB_1__::func_635(4, iVar1);
					break;
				case 20:
					__LIB_1__::func_635(8, iVar1);
					break;
				case 19:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(2, iVar1);
					break;
				case 24:
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(9, iVar1);
					__LIB_1__::func_635(20, iVar1);
					break;
				case 28:
					__LIB_1__::func_635(1, iVar1);
					break;
				case 34:
					__LIB_1__::func_635(23, iVar1);
					__LIB_1__::func_635(2, iVar1);
					__LIB_1__::func_635(18, iVar1);
					break;
				case 29:
					__LIB_1__::func_635(0, iVar1);
					__LIB_1__::func_635(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					__LIB_1__::func_635(0, iVar1);
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(2, iVar1);
					__LIB_1__::func_635(11, iVar1);
					__LIB_1__::func_635(6, iVar1);
					__LIB_1__::func_635(25, iVar1);
					__LIB_1__::func_635(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					__LIB_1__::func_635(5, iVar1);
					break;
				case 63:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(3, iVar1);
					break;
				case 37:
					__LIB_1__::func_635(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_483(0, 10, 11, joaat("CABR01")))
			{
				__LIB_1__::func_635(7, iVar1);
				__LIB_1__::func_635(4, iVar1);
			}
			else if (iParam0 == func_483(0, 7, 11, joaat("CACR02")))
			{
				__LIB_1__::func_635(8, iVar1);
				__LIB_1__::func_635(15, iVar1);
			}
			else if (iParam0 == func_483(0, 8, 11, joaat("CACR03")))
			{
				__LIB_1__::func_635(3, iVar1);
			}
			else if (iParam0 == func_483(0, 11, 11, joaat("CACR01")))
			{
				__LIB_1__::func_635(6, iVar1);
				__LIB_1__::func_635(3, iVar1);
			}
			else if (iParam0 == func_483(0, 12, 11, joaat("CACR04")))
			{
				__LIB_1__::func_635(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", __LIB_0__::func_473()));
	if (!__LIB_0__::func_474(629))
	{
		__LIB_1__::func_240(629, 0);
	}
}

int func_1361(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_6(iParam0))
	{
		return 0;
	}
	cVar0 = func_368(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

int func_1367()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1906(8);
		}
	}
	return 0;
}

bool func_1368(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1907(iParam0));
}

bool func_1371(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_977(iParam0);
	if (func_821(373691918) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

int func_1392(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
			return 94;
			return 363;
			return 382;
			return 200;
			return 99;
			return 196;
			return 70;
			return 51;
			return 96;
			return 328;
			return 161;
			return 229;
			return 203;
			return 371;
			return 91;
			return 180;
			return 6;
			return 190;
			return 193;
			return 369;
			return 308;
			return 63;
			return 299;
			return 306;
			return 282;
			return 39;
			return 192;
			return 341;
			return 255;
			return 87;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}
int func_1393(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_32(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return __LIB_0__::func_518(iVar0);
}

void func_1575()
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
	iVar0 = func_2049(6291456, 0);
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

void func_1582(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1582(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1582(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_1704(var uParam0)
{
	uParam0->f_69 = __LIB_2__::func_965(__LIB_10__::func_46(uParam0->f_300), 1, 0, 0, 1, 1);
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_69) || !ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_69))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_69, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, true);
		PED::_0xBD75500141E4725C(uParam0->f_69, joaat("LAW_SHERIFF"));
		__LIB_1__::func_406(&(uParam0->f_74), 1);
		__LIB_1__::func_405(&(uParam0->f_74), 1);
		__LIB_1__::func_402(&(uParam0->f_74), 1);
		__LIB_2__::func_828(&(uParam0->f_74), 1);
		__LIB_1__::func_401(&(uParam0->f_74), 1);
		if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_69, false, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_69, 146, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_69, func_2114(uParam0->f_300), true, false, true, true);
		WEAPON::_0x94A3C1B804D291EC(uParam0->f_69, 1, 0, 0, 0);
		TASK::TASK_SWAP_WEAPON(uParam0->f_69, 1, 0, 0, 0);
		__LIB_10__::func_139(uParam0, uParam0->f_69, func_2115(uParam0->f_300));
		__LIB_0__::func_928(&(uParam0->f_201), uParam0->f_69, func_2115(uParam0->f_300), 1);
		__LIB_10__::func_172(uParam0, uParam0->f_69);
		if (!Global_1935630.f_12)
		{
			if (__LIB_0__::func_181())
			{
				__LIB_0__::func_928(&(uParam0->f_201), Global_35, "John", 1);
			}
			else
			{
				__LIB_0__::func_928(&(uParam0->f_201), Global_35, "Arthur", 1);
			}
		}
		return true;
	}
	return false;
}

void func_1708(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_1582(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1725(var uParam0)
{
	float fVar0;
	if (iLocal_1047 == 0)
	{
		fVar0 = 1f;
	}
	else
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
	}
	if (__LIB_0__::func_75(&uLocal_1041) && !__LIB_6__::func_904())
	{
		if (__LIB_0__::func_265(&uLocal_1041) > fVar0)
		{
			if (iLocal_1047 < 2)
			{
				if (__LIB_12__::func_876(uParam0, sLocal_1044[iLocal_1047], 0))
				{
					iLocal_1047++;
					__LIB_1__::func_148(&uLocal_1041);
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_1041);
	}
}

void func_1726()
{
	int iVar0;
	if (iLocal_958 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(iLocal_445[iVar0], 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[iVar0], 50, true);
			PED::SET_PED_SHOOT_RATE(iLocal_445[iVar0], 125);
		}
		iLocal_958++;
		iVar0++;
	}
}

bool func_1727()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[0]))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_825, 1, 0))
		{
			func_692(&(iLocal_445[0]), &(uLocal_453[0]), 1);
			if (!__LIB_0__::func_163(iLocal_445[0], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_445[0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				bLocal_935 = true;
			}
		}
		else if (!bLocal_935)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_835))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_835, true, true) && __LIB_1__::func_205(iLocal_445[0], iLocal_825, 1, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_445[0], false))
					{
						if (!__LIB_0__::func_163(iLocal_445[0], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_445[0], iLocal_835, -1, -1, 2f, 1073741824 /* Float: 2f */, 0);
						}
						return false;
					}
					else if (!__LIB_0__::func_163(iLocal_445[0], 538064912))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[0], 27, false);
						WEAPON::_0xA769D753922B031B(iLocal_445[0], 0.9f, 0.9f);
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_445[0], joaat("WEAPON_TURRET_MAXIM"));
						PED::SET_PED_FIRING_PATTERN(iLocal_445[0], 1575766855);
						PED::SET_PED_ACCURACY(iLocal_445[0], 40);
						WEAPON::_0xA769D753922B031B(iLocal_445[0], 0.9f, 0.9f);
						TASK::TASK_VEHICLE_SHOOT_AT_PED(iLocal_445[0], Global_35, 20f);
					}
				}
				else if (!__LIB_0__::func_163(iLocal_445[0], 780511057))
				{
					func_692(&(iLocal_445[0]), &(uLocal_453[0]), 1);
					TASK::TASK_COMBAT_PED(iLocal_445[0], Global_35, 0, 16);
				}
			}
		}
	}
	return true;
}

bool func_1728(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_692[iVar0]))
		{
			iLocal_692[iVar0] = __LIB_12__::func_885(uParam0, iLocal_688, vLocal_700[iVar0 /*3*/], fLocal_710[iVar0], 1, 1, 0, 1, 1, 1, 1, 0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_692[iVar0]))
			{
				return false;
			}
		}
		if (__LIB_0__::func_272(iLocal_692[iVar0], 0))
		{
			func_552(iLocal_692[iVar0]);
			__LIB_4__::func_228(&(Local_714[iVar0 /*28*/]));
			__LIB_6__::func_905(&(Local_714[iVar0 /*28*/]));
			__LIB_1__::func_398(&(Local_714[iVar0 /*28*/]), 1);
			__LIB_1__::func_401(&(Local_714[iVar0 /*28*/]), 1);
			__LIB_2__::func_828(&(Local_714[iVar0 /*28*/]), 1);
			__LIB_2__::func_829(&(Local_714[iVar0 /*28*/]), 1);
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

bool func_1729(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_799[iVar0]))
		{
			iLocal_799[iVar0] = __LIB_13__::func_200(uParam0, iLocal_692[iVar0]);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_799[iVar0]))
			{
				return false;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_799[iVar0]))
		{
			ENTITY::_0x18FF3110CF47115D(iLocal_799[iVar0], 15, 0);
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

void func_1730()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(iLocal_692[iVar0], 0))
		{
			if (!__LIB_0__::func_163(iLocal_692[iVar0], 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_692[iVar0], vLocal_689, 1.75f, 20000, 0.25f, 0, 40000f);
			}
		}
		iVar0++;
	}
}

void func_1731(var uParam0, int iParam1)
{
	if (__LIB_0__::func_75(&uLocal_1028) && !__LIB_6__::func_904())
	{
		if (__LIB_0__::func_265(&uLocal_1028) > 10f)
		{
			if (!__LIB_0__::func_270())
			{
				if (iParam1 == 1)
				{
					if (!PED::_IS_PED_HOGTIED(iLocal_411))
					{
						if (!__LIB_1__::func_205(iLocal_411, iLocal_822, 1, 0))
						{
							if (__LIB_12__::func_876(uParam0, "RBCON_WOF_SHOUT", 0))
							{
								__LIB_1__::func_148(&uLocal_1028);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RBCON_WOF_CORN", 0))
						{
							__LIB_1__::func_148(&uLocal_1028);
						}
					}
					else if (!bLocal_915)
					{
						if (func_694() == 3)
						{
							if (__LIB_12__::func_876(uParam0, "RBCON_WOF_TIEDR", 0))
							{
								__LIB_1__::func_148(&uLocal_1028);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RBCON_WOF_TIED", 0))
						{
							__LIB_1__::func_148(&uLocal_1028);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RBCON_WOF_TIEDS", 0))
					{
						__LIB_1__::func_148(&uLocal_1028);
					}
				}
				else if (iParam1 == 2)
				{
					if (iLocal_1035 < 3)
					{
						if (__LIB_12__::func_876(uParam0, sLocal_1031[iLocal_1035], 0))
						{
							iLocal_1035++;
							__LIB_1__::func_148(&uLocal_1028);
						}
					}
				}
				else if (iParam1 == 3)
				{
					if (iLocal_1040 < 3)
					{
						if (__LIB_12__::func_876(uParam0, sLocal_1036[iLocal_1040], 0))
						{
							iLocal_1040++;
							__LIB_1__::func_148(&uLocal_1028);
						}
					}
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_1028);
	}
}

void func_1732(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_411, Global_35) < 20f && ENTITY::_0x61914209C36EFDDB(iLocal_411) == 5)
	{
		if (__LIB_0__::func_75(&uLocal_966) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_966) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 9f))
			{
				if (!__LIB_0__::func_270())
				{
					if (func_323(1))
					{
						if ((!__LIB_13__::func_120("BCON_AFTER_", 0) && !__LIB_13__::func_198("RBCON_WOF_ALL")) && __LIB_12__::func_876(uParam0, "RBCON_WOF_RAGE", 0))
						{
							__LIB_1__::func_148(&uLocal_966);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "BCON_ESCAPE", 0))
					{
						__LIB_1__::func_148(&uLocal_966);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_966);
		}
	}
}

bool func_1739()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_803[iVar0]))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_803[iVar0], 1, 1) < 30f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1821(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_2201(1497516462);
			func_2202(2016141805);
			func_2202(1010885152);
			func_2202(-502324015);
			break;
		case 2016141805:
			func_2202(1497516462);
			func_2201(2016141805);
			func_2202(1010885152);
			func_2202(-502324015);
			break;
		case 1010885152:
			func_2202(1497516462);
			func_2202(2016141805);
			func_2201(1010885152);
			func_2202(-502324015);
			break;
		case -502324015:
			func_2202(1497516462);
			func_2202(2016141805);
			func_2202(1010885152);
			func_2201(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_2202(-538889627);
			func_2202(-538880323);
			func_2202(-1056767524);
			func_2201(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_2203();
			func_2201(iParam0);
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
			func_2204();
			func_2201(iParam0);
			break;
		case 2019386373:
			func_2202(-664252410);
			func_2202(2109952320);
			func_2201(2019386373);
			break;
		case -664252410:
			func_2202(2019386373);
			func_2202(2109952320);
			func_2201(-664252410);
			break;
		case 2109952320:
			func_2202(2019386373);
			func_2202(-664252410);
			func_2201(2109952320);
			break;
		case -1674179981:
			func_2202(-1835851517);
			func_2202(-1838352012);
			func_2201(-1674179981);
			break;
		case -1835851517:
			func_2202(-1674179981);
			func_2202(-1838352012);
			func_2201(-1835851517);
			break;
		case -1838352012:
			func_2202(-1674179981);
			func_2202(-1835851517);
			func_2201(-1838352012);
			break;
		case -1717960576:
			func_2202(210001842);
			func_2201(-1717960576);
			break;
		case 210001842:
			func_2202(-1717960576);
			func_2201(210001842);
			break;
		case -150493654:
			func_2202(-1271608261);
			func_2202(1846061697);
			func_2202(-1145519186);
			func_2201(-150493654);
			break;
		case -1271608261:
			func_2202(-150493654);
			func_2202(1846061697);
			func_2202(-1145519186);
			func_2201(-1271608261);
			break;
		case 1846061697:
			func_2202(-150493654);
			func_2202(-1271608261);
			func_2202(-1145519186);
			func_2201(1846061697);
			break;
		case -1145519186:
			func_2202(-150493654);
			func_2202(-1271608261);
			func_2202(1846061697);
			func_2201(-1145519186);
			break;
		case 1766284049:
			func_2202(280705402);
			func_2202(1926308480);
			func_2201(1766284049);
			break;
		case 280705402:
			func_2202(1766284049);
			func_2202(1926308480);
			func_2201(280705402);
			break;
		case 1926308480:
			func_2202(1766284049);
			func_2202(280705402);
			func_2201(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_2202(439465264);
				func_2201(1609506757);
			}
			else
			{
				func_2202(1609506757);
				func_2202(439465264);
			}
			break;
		case 439465264:
			if (func_821(1609506757))
			{
				if (bParam1)
				{
					func_2201(439465264);
				}
				else
				{
					func_2202(439465264);
				}
			}
			break;
		case 1822001510:
			func_2202(-1612662716);
			func_2201(1822001510);
			break;
		case -1612662716:
			func_2202(1822001510);
			func_2201(-1612662716);
			break;
		case 1306158345:
			func_2202(1952610440);
			func_2202(-223469678);
			func_2202(-404698347);
			func_2202(1517904467);
			func_2201(1306158345);
			break;
		case 1952610440:
			func_2202(1306158345);
			func_2202(-223469678);
			func_2202(-404698347);
			func_2202(1517904467);
			func_2201(1952610440);
			break;
		case -223469678:
			func_2202(1306158345);
			func_2202(1952610440);
			func_2202(-404698347);
			func_2202(1517904467);
			func_2201(-223469678);
			break;
		case -404698347:
			func_2202(1306158345);
			func_2202(1952610440);
			func_2202(-223469678);
			func_2202(1517904467);
			func_2201(-404698347);
			break;
		case 1517904467:
			func_2202(1306158345);
			func_2202(1952610440);
			func_2202(-223469678);
			func_2202(-404698347);
			func_2201(1517904467);
			break;
		case 1376646519:
			func_2202(931649776);
			func_2202(-434590080);
			func_2202(1743048395);
			func_2202(449774763);
			func_2201(1376646519);
			break;
		case 931649776:
			func_2202(1376646519);
			func_2202(-434590080);
			func_2202(1743048395);
			func_2202(449774763);
			func_2201(931649776);
			break;
		case -434590080:
			func_2202(1376646519);
			func_2202(931649776);
			func_2202(1743048395);
			func_2202(449774763);
			func_2201(-434590080);
			break;
		case 1743048395:
			func_2202(1376646519);
			func_2202(931649776);
			func_2202(-434590080);
			func_2202(449774763);
			func_2201(1743048395);
			break;
		case 449774763:
			func_2202(1376646519);
			func_2202(931649776);
			func_2202(-434590080);
			func_2202(1743048395);
			func_2201(449774763);
			break;
		case -1414537028:
			func_2202(38162571);
			func_2202(1350391819);
			func_2202(54073871);
			func_2201(-1414537028);
			break;
		case 38162571:
			func_2202(-1414537028);
			func_2202(1350391819);
			func_2202(54073871);
			func_2201(38162571);
			break;
		case 1350391819:
			func_2202(-1414537028);
			func_2202(38162571);
			func_2202(54073871);
			func_2201(1350391819);
			break;
		case 54073871:
			func_2202(-1414537028);
			func_2202(38162571);
			func_2202(1350391819);
			func_2201(54073871);
			break;
		case 198200492:
			func_2201(198200492);
			func_2202(-1124061431);
			func_2202(52706132);
			func_2202(-259123672);
			break;
		case -1124061431:
			func_2202(198200492);
			func_2201(-1124061431);
			func_2202(52706132);
			func_2202(-259123672);
			break;
		case 52706132:
			func_2202(198200492);
			func_2202(-1124061431);
			func_2201(52706132);
			func_2202(-259123672);
			break;
		case -259123672:
			func_2202(198200492);
			func_2202(-1124061431);
			func_2202(52706132);
			func_2201(-259123672);
			break;
		case -919512195:
			func_2201(-919512195);
			func_2202(-1925798111);
			func_2202(420709909);
			func_2202(1703426636);
			break;
		case -1925798111:
			func_2201(-1925798111);
			func_2202(-919512195);
			func_2202(420709909);
			func_2202(1703426636);
			break;
		case 420709909:
			func_2201(420709909);
			func_2202(-919512195);
			func_2202(-1925798111);
			func_2202(1703426636);
			break;
		case 1703426636:
			func_2201(1703426636);
			func_2202(-919512195);
			func_2202(-1925798111);
			func_2202(420709909);
			break;
		case -1223121209:
			func_2201(-1223121209);
			func_2202(630808005);
			break;
		case 630808005:
			func_2201(630808005);
			func_2202(-1223121209);
			break;
		case 1453909576:
			func_2201(1453909576);
			func_2202(1643531967);
			break;
		case 1643531967:
			func_2201(1643531967);
			func_2202(1453909576);
			break;
		case 0:
			func_2201(0);
			func_2202(473295046);
			func_2202(-1738165526);
			break;
		case 473295046:
			func_2201(473295046);
			func_2202(0);
			func_2202(-1738165526);
			break;
		case -1738165526:
			func_2201(-1738165526);
			func_2202(0);
			func_2202(473295046);
			break;
		case 932909855:
			func_2201(932909855);
			func_2202(2051822093);
			break;
		case 2051822093:
			func_2201(2051822093);
			func_2202(932909855);
			break;
		case 405586984:
			func_2201(405586984);
			func_2202(1509509592);
			func_2202(-959357075);
			func_2202(-1311865656);
			break;
		case 1509509592:
			func_2201(1509509592);
			func_2202(405586984);
			func_2202(-959357075);
			func_2202(-1311865656);
			break;
		case -959357075:
			func_2201(-959357075);
			func_2202(1509509592);
			func_2202(405586984);
			func_2202(-1311865656);
			break;
		case -1311865656:
			func_2201(-1311865656);
			func_2202(1509509592);
			func_2202(-959357075);
			func_2202(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_2201(-524145696);
			}
			else
			{
				func_2202(-524145696);
			}
			func_2202(1626481264);
			func_2202(282809459);
			break;
		case 282809459:
			func_2201(282809459);
			func_2202(1626481264);
			func_2202(-524145696);
			break;
		case 1626481264:
			func_2201(1626481264);
			func_2202(-524145696);
			func_2202(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_2201(885203519);
			}
			else
			{
				func_2202(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_2201(-1080627546);
			}
			else
			{
				func_2202(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_821(iParam0))
				{
					func_2201(iParam0);
				}
			}
			else if (func_821(iParam0))
			{
				func_2202(iParam0);
			}
			break;
	}
}

void func_1858(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_748(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2223(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_751(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1321(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2228(Var0);
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

void func_1861(bool bParam0)
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
		func_748(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1321(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1321(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1321(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1899(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1899(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1899(iVar63, -915411861, 1, 0, 0));
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

int func_1906(int iParam0)
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
			Jump @9446; //curOff = 789
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
			Jump @9446; //curOff = 1572
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
			Jump @9446; //curOff = 1960
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
			Jump @9446; //curOff = 2481
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
			Jump @9446; //curOff = 2920
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
			Jump @9446; //curOff = 3515
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
			Jump @9446; //curOff = 4298
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
			Jump @9446; //curOff = 4382
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9446; //curOff = 4473
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
			Jump @9446; //curOff = 5584
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
			Jump @9446; //curOff = 6027
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
bool func_1907(int iParam0)
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

int func_2049(int iParam0, int iParam1)
{
	var uVar0;
	return func_2312(&uVar0, iParam0, iParam1);
}

Vector3 func_2114(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2906.88f, 1313.98f, 44.32f;
		case 5:
			return 2510.23f, -1308.89f, 47.95f;
		case 105:
			return 1362.44f, -1301.61f, 76.76f;
		case 26:
			return -1808.22f, -347.41f, 163.65f;
			Jump @206; //curOff = 140
			return -278.31f, 805.26f, 118.37f;
			Jump @206; //curOff = 161
			return -763.94f, -1270.71f, 43.14f;
			Jump @206; //curOff = 182
			return -5530.877f, -2930.6f, -2.2877f;
			return 0f, 0f, 0f;
		}
char* func_2115(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 78:
			sVar0 = "ASB_Sheriff";
			break;
		case 5:
			sVar0 = "SD_PoliceChief";
			break;
		case 105:
			sVar0 = "RHD_sheriff";
			break;
		case 26:
			sVar0 = "STR_Sheriff";
			break;
		case 76:
			sVar0 = "VAL_Sheriff";
			break;
		case 38:
			sVar0 = "BLW_Police_Chief";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "VAL_Sheriff";
			break;
	}
	return sVar0;
}

void func_2201(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_1392(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_2202(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_1392(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_2203()
{
	func_2202(-939420910);
	func_2202(-1187950766);
	func_2202(356365161);
	func_2202(753127042);
	func_2202(-2038424081);
	func_2202(1884271742);
	func_2202(459290420);
}

void func_2204()
{
	func_2202(704802028);
	func_2202(588987611);
	func_2202(2008888900);
	func_2202(1649996811);
	func_2202(227918160);
	func_2202(168171957);
	func_2202(1193080109);
	func_2202(-491981251);
	func_2202(-639037538);
	func_2202(-618620429);
}

void func_2223(int iParam0)
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
	func_1321(iParam0, 1, 1, -142743235, 1);
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
		func_1321(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2228(struct<6> Param0)
{
	if (!func_2400(Param0.f_4, 1))
	{
	}
	if (!func_2400(Param0, 1))
	{
	}
	if (!func_2400(Param0.f_2, 1))
	{
	}
	if (!func_2400(Param0.f_5, 1))
	{
	}
	if (!func_2400(Param0.f_3, 1))
	{
	}
	if (!func_2400(Param0.f_1, 1))
	{
	}
}

int func_2312(var uParam0, int iParam1, int iParam2)
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
		return func_2312(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2400(int iParam0, int iParam1)
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
				if (func_2400(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2400(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2400(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2400(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

