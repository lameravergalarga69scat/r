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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	struct<61> Local_68[1];
	struct<61> Local_130[1];
	struct<17> Local_192[2];
	struct<17> Local_227[1];
	bool bLocal_245 = false;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	struct<4> Local_252 = { 0, 0, 0, 0 } ;
	var uLocal_256 = 0;
	var uLocal_257 = 1065353216;
	var uLocal_258 = 1119092736;
	var uLocal_259 = 1092616192;
	var uLocal_260 = 1085276160;
	int iLocal_261 = 0;
	int iLocal_262[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	vector3 vLocal_293 = { 0f, 0f, 0f };
	struct<8> Local_296 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_304 = 2;
	var uLocal_305 = 1;
	var uLocal_306 = 1;
	var uLocal_307 = 1;
	var uLocal_308 = 0;
	var uLocal_309 = 1;
	var uLocal_310 = 2;
	var uLocal_311 = 2;
	var uLocal_312 = 3;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 3;
	var uLocal_316 = 1;
	var uLocal_317 = 3;
	var uLocal_318 = 3;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	struct<61> Local_328[1];
	struct<17> Local_390[1];
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
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	vector3 vLocal_422 = { 0f, 0f, 0f };
	vector3 vLocal_425 = { 0f, 0f, 0f };
	float fLocal_428 = 0f;
	vector3 vLocal_429 = { 0f, 0f, 0f };
	float fLocal_432 = 0f;
	vector3 vLocal_433 = { 0f, 0f, 0f };
	float fLocal_436 = 0f;
	vector3 vLocal_437 = { 0f, 0f, 0f };
	float fLocal_440 = 0f;
	vector3 vLocal_441 = { 0f, 0f, 0f };
	vector3 vLocal_444 = { 0f, 0f, 0f };
	vector3 vLocal_447 = { 0f, 0f, 0f };
	vector3 vLocal_450 = { 0f, 0f, 0f };
	vector3 vLocal_453 = { 0f, 0f, 0f };
	vector3 vLocal_456 = { 0f, 0f, 0f };
	vector3 vLocal_459 = { 0f, 0f, 0f };
	vector3 vLocal_462 = { 0f, 0f, 0f };
	vector3 vLocal_465 = { 0f, 0f, 0f };
	vector3 vLocal_468 = { 0f, 0f, 0f };
	vector3 vLocal_471 = { 0f, 0f, 0f };
	vector3 vLocal_474 = { 0f, 0f, 0f };
	vector3 vLocal_477 = { 0f, 0f, 0f };
	float fLocal_480 = 0f;
	vector3 vLocal_481 = { 0f, 0f, 0f };
	vector3 vLocal_484 = { 0f, 0f, 0f };
	float fLocal_487 = 0f;
	bool bLocal_488 = false;
	bool bLocal_489 = false;
	char* sLocal_490 = NULL;
	bool bLocal_491 = false;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	float fLocal_494 = 0f;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	bool bLocal_497 = false;
	int iLocal_498 = 0;
	bool bLocal_499 = false;
	bool bLocal_500 = false;
	bool bLocal_501 = false;
	bool bLocal_502 = false;
	bool bLocal_503 = false;
	bool bLocal_504 = false;
	bool bLocal_505 = false;
	bool bLocal_506 = false;
	bool bLocal_507 = false;
	bool bLocal_508 = false;
	bool bLocal_509 = false;
	bool bLocal_510 = false;
	bool bLocal_511 = false;
	bool bLocal_512 = false;
	bool bLocal_513 = false;
	bool bLocal_514 = false;
	bool bLocal_515 = false;
	bool bLocal_516 = false;
	bool bLocal_517 = false;
	int iLocal_518 = 0;
	bool bLocal_519 = false;
	int iLocal_520 = 0;
	bool bLocal_521 = false;
	bool bLocal_522 = false;
	bool bLocal_523 = false;
	bool bLocal_524 = false;
	bool bLocal_525 = false;
	bool bLocal_526 = false;
	bool bLocal_527 = false;
	bool bLocal_528 = false;
	var uLocal_529 = 0;
	bool bLocal_530 = false;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	var uLocal_535[2] = { 0, 0 };
	var uLocal_538 = 2;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	int iLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	vector3 vLocal_555 = { 0f, 0f, 0f };
	float fLocal_558 = 0f;
	int iLocal_559 = 0;
	bool bLocal_560 = false;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	struct<119> Local_578 = { 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_697 = 0;
	struct<119> Local_698 = { 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_817 = 0;
	int iLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
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
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	bool bLocal_864 = false;
	bool bLocal_865 = false;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	float fLocal_873 = 0f;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = -1;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 1097859072;
	var uLocal_892 = 1000;
	var uLocal_893 = 1067450368;
	var uLocal_894 = 5000;
	var uLocal_895 = 42;
	var uLocal_896 = 1103626240;
	var uLocal_897 = 1077936128;
	var uLocal_898 = 1106247680;
	var uLocal_899 = 1103101952;
	var uLocal_900 = 1097859072;
	var uLocal_901 = 1103626240;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = -1;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 1097859072;
	var uLocal_921 = 1000;
	var uLocal_922 = 1067450368;
	var uLocal_923 = 5000;
	var uLocal_924 = 42;
	var uLocal_925 = 1103626240;
	var uLocal_926 = 1077936128;
	var uLocal_927 = 1106247680;
	var uLocal_928 = 1103101952;
	var uLocal_929 = 1097859072;
	var uLocal_930 = 1103626240;
	int iLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = -1;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 1097859072;
	var uLocal_950 = 1000;
	var uLocal_951 = 1067450368;
	var uLocal_952 = 5000;
	var uLocal_953 = 42;
	var uLocal_954 = 1103626240;
	var uLocal_955 = 1077936128;
	var uLocal_956 = 1106247680;
	var uLocal_957 = 1103101952;
	var uLocal_958 = 1097859072;
	var uLocal_959 = 1103626240;
	var uLocal_960 = 0;
	int iLocal_961 = 0;
	struct<22> Local_962 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_984 = 3;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	struct<22> Local_987 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_1009 = 3;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_272 = -1;
	vLocal_293 = { 2814.04f, -1221.43f, 46.53f };
	iLocal_325 = -1;
	vLocal_422 = { 2813.22f, -1219.61f, 46.57f };
	vLocal_425 = { 2817.51f, -1225.226f, 46.5463f };
	fLocal_428 = 274.0254f;
	vLocal_429 = { 2848.841f, -1202.705f, 46.5916f };
	fLocal_432 = 274.1369f;
	vLocal_433 = { 2853.514f, -1199.415f, 44.596f };
	fLocal_436 = 272.2479f;
	vLocal_437 = { 2814.222f, -1225.011f, 46.5608f };
	fLocal_440 = 326.2441f;
	vLocal_441 = { 2816.44f, -1221.02f, 46.53f };
	vLocal_444 = { 2855.12f, -1202.17f, 47.59f };
	vLocal_447 = { 2860.497f, -1195.681f, 48.98595f };
	vLocal_450 = { 2859.99f, -1196.47f, 47.99f };
	vLocal_453 = { 2860.09f, -1201.24f, 49.64f };
	vLocal_456 = { 2856.08f, -1197.89f, 45.6f };
	vLocal_459 = { 2858.09f, -1199.21f, 45.6f };
	vLocal_462 = { 2859.426f, -1200.474f, 49.6493f };
	vLocal_465 = { 2860.07f, -1199.123f, 49.5935f };
	vLocal_468 = { 2860.004f, -1202.306f, 49.5959f };
	vLocal_471 = { 2859.99f, -1195.45f, 47.99f };
	vLocal_474 = { 2861.134f, -1196.898f, 49.7916f };
	vLocal_477 = { -15.2719f, 0f, 58.3122f };
	fLocal_480 = 40f;
	vLocal_481 = { 2862.354f, -1196.248f, 48.7905f };
	vLocal_484 = { 10.079f, 0f, 76.4481f };
	fLocal_487 = 55f;
	bLocal_489 = true;
	bLocal_497 = true;
	bLocal_530 = true;
	vLocal_555 = { 2860f, -1194.25f, 47.99f };
	fLocal_558 = 4.01f;
	iLocal_564 = joaat("RCSP_CALDERON_MALES_01");
	iLocal_565 = joaat("P_COINSTACK01");
	iLocal_566 = joaat("P_COIN01X");
	iLocal_567 = joaat("P_COINSTACK01");
	iLocal_568 = joaat("P_MONEYSTACK01X");
	iLocal_569 = joaat("P_WOODBOWL01X");
	fLocal_873 = -1f;
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
	func_91(uParam0);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
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
	__LIB_12__::func_658(uParam0, 4);
	__LIB_12__::func_659(uParam0, 4);
	__LIB_12__::func_656(uParam0, 5f);
	__LIB_12__::func_657(uParam0, 6f);
	PED::ADD_RELATIONSHIP_GROUP("Shopkeeper group", &iLocal_961);
	Local_987.f_3 = Global_35;
	Local_987.f_8 = 4;
	Local_987.f_19 = 3;
	Local_987.f_21 = 3;
	Local_987.f_17 = 0;
	Local_987.f_18 = 0;
	Local_962.f_4 = 21030;
	Local_962.f_8 = 4;
	Local_962.f_19 = 4;
	Local_962.f_21 = 4;
	Local_962.f_17 = 4;
	Local_962.f_18 = 4;
	Local_962.f_7 = 7500;
	Local_578.f_84 = { 2856.657f, -1197.961f, 45.6235f };
	Local_578.f_87 = 131.13f;
	Local_698.f_84 = { 2857.891f, -1199.742f, 45.6071f };
	Local_698.f_87 = 311.8513f;
	MISC::CLEAR_AREA(vLocal_422, 4f, 2442122);
	__LIB_13__::func_221(uParam0, 4f);
}

void func_42(var uParam0)
{
	__LIB_13__::func_55(uParam0, "script_rc@cldn@ig@rsc2_ig5_reacttosunlight", 7);
	__LIB_12__::func_867(uParam0, joaat("CS_BROTHERDORKINS"), 3);
	__LIB_12__::func_867(uParam0, iLocal_568, 2);
	__LIB_12__::func_867(uParam0, iLocal_566, 2);
	__LIB_12__::func_867(uParam0, iLocal_567, 2);
	__LIB_12__::func_867(uParam0, iLocal_564, 2);
	__LIB_12__::func_867(uParam0, iLocal_569, 3);
	__LIB_12__::func_867(uParam0, iLocal_565, 3);
	__LIB_12__::func_867(uParam0, joaat("P_CS_SHADBMNT_SHKL01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_PICK01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_BOOKCASE04X"), 2);
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_calderon_12_basementhelper");
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
		Var1 = { vLocal_425 };
		Var1.f_3 = fLocal_428;
	}
	else if (iVar0 == 1)
	{
		Var1 = { vLocal_429 };
		Var1.f_3 = fLocal_432;
	}
	else if (iVar0 == 2)
	{
		Var1 = { vLocal_433 };
		Var1.f_3 = fLocal_436;
	}
	else if (iVar0 == 3)
	{
		Var1 = { vLocal_433 };
		Var1.f_3 = fLocal_436;
	}
	else if (iVar0 == 4)
	{
		Var1 = { vLocal_437 };
		Var1.f_3 = fLocal_440;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_204(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_50 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_578) && ENTITY::IS_ENTITY_DEAD(Local_578))
		{
			StringCopy(&(uParam0->f_2578), "CALDERON1_F3", 24);
			return true;
		}
		else if (__LIB_13__::func_230(Local_578, 0, &uLocal_932, &uLocal_960, 0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_578, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON1_F4", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "CALDERON1_F4A", 24);
			}
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_698) && ENTITY::IS_ENTITY_DEAD(Local_698))
		{
			StringCopy(&(uParam0->f_2578), "CALDERON1_F3", 24);
			return true;
		}
		else if (__LIB_13__::func_230(Local_698, 0, &uLocal_932, &uLocal_960, 0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_698, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "CALDERON1_F4", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "CALDERON1_F4A", 24);
			}
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		StringCopy(&(uParam0->f_2578), "CALDERON1_F1", 24);
		return true;
	}
	else
	{
		switch (iLocal_60)
		{
			case 0:
				if (__LIB_13__::func_230(iLocal_291, 0, &uLocal_903, &iLocal_931, 0, 0))
				{
					if (iLocal_931 == 256 || iLocal_931 == 8)
					{
						iLocal_60 = 2;
					}
					else
					{
						iLocal_60 = 1;
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_12__::func_876(uParam0, "RCLDN_GRIEF_AFT", 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_291, true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_291, Global_35, 3, 0, 300f, -1, 0);
					iLocal_60 = 3;
					StringCopy(&(uParam0->f_2578), "CALDERON1_F5", 24);
				}
				break;
			case 2:
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_12__::func_876(uParam0, "RCLDN_FEAR", 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_291, true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_291, Global_35, 3, 0, 300f, -1, 0);
					iLocal_60 = 3;
					StringCopy(&(uParam0->f_2578), "CALDERON1_F7", 24);
				}
				break;
			case 3:
				if (!__LIB_8__::func_684("RCLDN_GRIEF_AFT") && !__LIB_8__::func_684("RCLDN_FEAR"))
				{
					return true;
				}
				break;
		}
	}
	if (__LIB_0__::func_94(Global_35, vLocal_293, 1) >= 70f)
	{
		if (!bLocal_488)
		{
			sLocal_490 = func_211(iLocal_53);
			__LIB_13__::func_89(uParam0, "CALDERON1_W2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_12__::func_883(uParam0, "CALDERON1_W2", 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_488 = true;
			bLocal_489 = false;
		}
		if (__LIB_0__::func_94(Global_35, vLocal_293, 1) >= 100f)
		{
			StringCopy(&(uParam0->f_2578), "CALDERON1_F2", 24);
			return true;
		}
	}
	else if (!bLocal_489)
	{
		__LIB_13__::func_89(uParam0, sLocal_490, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		bLocal_489 = true;
		bLocal_488 = false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		StringCopy(&(uParam0->f_2578), "CALDERON1_F6", 24);
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	if ((uParam0->f_177 == 5 || uParam0->f_177 == 2) || uParam0->f_177 == 6)
	{
		if (bLocal_865)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
			{
				if (__LIB_0__::func_871())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "Honor_is", true, false);
					bLocal_865 = false;
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "Honor_is", false, false);
					bLocal_865 = false;
				}
			}
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
	if (func_217(uParam0->f_174))
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
	if (func_226(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_231(uParam0);
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
			func_246(uParam0);
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
	return iLocal_1015;
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
	if (__LIB_0__::func_13(32768) && __LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 8192))
	{
		__LIB_13__::func_33(uParam0, 0);
		func_291(uParam0, 1);
	}
}

void func_91(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_1__::func_694(Global_35, Global_1347702[22 /*49*/].f_24, 0, 1112014848 /* Float: 50f */, 5f, 4.5f, 3f, 1, 1, 1, 0);
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
				bLocal_865 = true;
				return 5;
			}
			else
			{
				__LIB_13__::func_105(1, 1);
				return 7;
			}
		}
		return 2;
	}
	else if (iVar0 == 1)
	{
		if (func_299(uParam0))
		{
			__LIB_13__::func_105(1, 1);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 2)
	{
		if (func_300(uParam0))
		{
			__LIB_13__::func_105(1, 1);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 3)
	{
		if (func_301(uParam0))
		{
			__LIB_13__::func_105(1, 1);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 4)
	{
		if (func_302(uParam0))
		{
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
	return func_315(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			__LIB_13__::func_33(uParam0, -1);
			__LIB_0__::func_268(&uLocal_819, 8f);
			__LIB_1__::func_398(&uLocal_903, 0);
			__LIB_0__::func_106(&(uParam0->f_206), 1);
			__LIB_9__::func_963(41);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[7]);
			}
			func_324();
			if (!bLocal_524)
			{
				if (bLocal_527)
				{
					__LIB_1__::func_715(13, 1630638415, 0, "", iLocal_291, 0, 1065353216 /* Float: 1f */, 0);
					if (__LIB_0__::func_492(1) >= 5)
					{
						__LIB_1__::func_432(5, 0, 0, 1, 1);
					}
				}
			}
			__LIB_6__::func_916(&(uLocal_535[1]));
			__LIB_6__::func_916(&(uLocal_535[0]));
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			break;
		case 1:
			__LIB_13__::func_33(uParam0, -1);
			__LIB_0__::func_325(&iLocal_411);
			__LIB_0__::func_325(&iLocal_414);
			__LIB_0__::func_325(&iLocal_415);
			if (!ENTITY::IS_ENTITY_DEAD(Local_578))
			{
				if (PED::IS_PED_IN_GROUP(Local_578))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_578);
					PED::SET_PED_CONFIG_FLAG(Local_578, 156, false);
					PED::SET_PED_CONFIG_FLAG(Local_578, 333, false);
					COMPANION::_0x72B7F65F11FC8896(PED::GET_PED_GROUP_INDEX(Global_35));
				}
			}
			__LIB_2__::func_426(&Local_578);
			if (!ENTITY::IS_ENTITY_DEAD(Local_698))
			{
				if (PED::IS_PED_IN_GROUP(Local_698))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_698);
					PED::SET_PED_CONFIG_FLAG(Local_698, 156, false);
					PED::SET_PED_CONFIG_FLAG(Local_698, 333, false);
				}
			}
			__LIB_2__::func_426(&Local_698);
			COMPANION::_0x72B7F65F11FC8896(PED::GET_PED_GROUP_INDEX(Global_35));
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, false);
			__LIB_2__::func_426(&iLocal_291);
			if (!bLocal_524)
			{
				if (!bLocal_528)
				{
					__LIB_1__::func_715(13, -1579440727, 0, "", iLocal_291, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_1__::func_616(100, 0, 0f, 1, 0, 0, 1, 752097756);
				}
			}
			else if (bLocal_528)
			{
				__LIB_1__::func_616(100, 0, 0f, 1, 0, 0, 1, 752097756);
			}
			return 8;
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
		if (func_331(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	switch (iLocal_50)
	{
		case 0:
			func_333(uParam0);
			func_334(uParam0);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_275) && !MAP::DOES_BLIP_EXIST(iLocal_411))
			{
				iLocal_411 = MAP::_0xA6EF0C54A3443E70(408396114, iLocal_275);
				MAP::_BLIP_SET_MODIFIER(iLocal_411, 231194138);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_411, "CLD2_SHOP");
			}
			if (func_335(uParam0, 1, 1, 0, 0))
			{
				iLocal_50 = 1;
			}
			break;
		case 1:
			func_333(uParam0);
			func_334(uParam0);
			func_336(uParam0);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_275) && __LIB_1__::func_205(Global_35, iLocal_275, 1, 0))
			{
				iLocal_416 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2861.9f, -1203.14f, 48.59f, joaat("RANSACK_ATTACHED_CHEST_LARGE"), 1f, 0, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_416))
				{
					TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_416, false);
				}
				TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_CHEST_LARGE", false);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROBBERIES");
				PED::_0x789DABD18E9024DB(Global_35, 89, 0);
				iLocal_498 = 1;
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				func_338(1, 0);
				func_339(1);
				ENTITY::CREATE_MODEL_HIDE(2858.77f, -1201.45f, 49.73f, 1f, joaat("P_CIGAR02X"), true);
				iLocal_50 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_410) && iLocal_58 == 1)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_410, &Local_987);
			}
			func_340(uParam0);
			func_341(uParam0);
			func_336(uParam0);
			func_333(uParam0);
			func_342();
			if (iLocal_58 <= 4)
			{
				if (func_343())
				{
					func_344();
				}
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_275) && !__LIB_1__::func_205(Global_35, iLocal_275, 1, 0))
			{
				PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
				iLocal_498 = 0;
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_275, 1, 0))
			{
				if (bLocal_497)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_411))
					{
						iLocal_411 = __LIB_8__::func_775(408396114, iLocal_275, 1);
					}
				}
				if (iLocal_498 == 0)
				{
					PED::_0x789DABD18E9024DB(Global_35, 89, 0);
					iLocal_498 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_410) || iLocal_58 == 5)
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_413))
				{
					MAP::REMOVE_BLIP(&iLocal_413);
				}
				if (!bLocal_491 && iLocal_56 > 1)
				{
					func_338(4, 0);
					iLocal_54 = 2;
				}
				else if (bLocal_491)
				{
					func_338(5, 0);
				}
				iLocal_50 = 3;
			}
			else if (iLocal_54 > 0)
			{
				iLocal_50 = 3;
			}
			break;
		case 3:
			func_340(uParam0);
			func_341(uParam0);
			func_336(uParam0);
			func_333(uParam0);
			func_342();
			if (!bLocal_491)
			{
				if (func_346(uParam0))
				{
					func_339(5);
					func_347();
					AUDIO::STOP_PED_SPEAKING(Global_35, true);
					iLocal_50 = 4;
					func_338(6, 0);
				}
			}
			else if (func_348())
			{
				func_339(5);
				func_347();
				AUDIO::STOP_PED_SPEAKING(Global_35, true);
				iLocal_50 = 4;
				func_338(6, 0);
			}
			break;
		case 4:
			func_349(uParam0);
			func_336(uParam0);
			func_333(uParam0);
			func_342();
			func_350();
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_280))
			{
				iLocal_280 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2854.964f, -1198.485f, 45.87078f, 0f, 0f, 5.405399f, 7.590277f, 7.51015f, 2.705784f, "Basement volume");
			}
			else if (!MAP::DOES_BLIP_EXIST(iLocal_411))
			{
				iLocal_411 = __LIB_8__::func_775(408396114, iLocal_280, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_411, "CLD2_BASE");
			}
			if (__LIB_1__::func_205(Global_35, iLocal_276, 1, 0) && func_351())
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_578.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_578.f_1], false))
				{
					if ((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[Local_578.f_1], "pl_react_enter_player") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[Local_578.f_1], "pl_react_enter_player")) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_262[Local_578.f_1], "pl_react_enter_player"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[Local_578.f_1], "pl_react_enter_player", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_578.f_1], "LOOP", true, false);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_698.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_698.f_1], false))
				{
					if ((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[Local_698.f_1], "pl_react_enter_player") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[Local_698.f_1], "pl_react_enter_player")) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_262[Local_698.f_1], "pl_react_enter_player"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[Local_698.f_1], "pl_react_enter_player", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_698.f_1], "LOOP", true, false);
					}
				}
				if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_578.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_578.f_1], false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_698.f_1])) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_698.f_1], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_262[Local_578.f_1], "pl_react_enter_player") && ANIMSCENE::_0x1F0E401031E20146(iLocal_262[Local_698.f_1], "pl_react_enter_player"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_578.f_1], "LOOP", false, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_698.f_1], "LOOP", false, false);
						func_352();
						func_353();
						if (MAP::DOES_BLIP_EXIST(iLocal_411))
						{
							MAP::REMOVE_BLIP(&iLocal_411);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_578))
						{
							if (!MAP::DOES_BLIP_EXIST(iLocal_414))
							{
								iLocal_414 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_578);
								MAP::_BLIP_SET_MODIFIER(iLocal_414, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_414, "CLD2_SLAVE");
							}
							PED::SET_PED_CONFIG_FLAG(Local_578, 277, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_698))
						{
							if (!MAP::DOES_BLIP_EXIST(iLocal_415))
							{
								iLocal_415 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_698);
								MAP::_BLIP_SET_MODIFIER(iLocal_415, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_415, "CLD2_SLAVE");
							}
							PED::SET_PED_CONFIG_FLAG(Local_698, 277, false);
						}
						OBJECT::SET_OBJECT_TARGETTABLE(Local_578.f_89, true);
						OBJECT::SET_OBJECT_TARGETTABLE(Local_698.f_89, true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_578.f_89, true, 10f);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_698.f_89, true, 10f);
						__LIB_0__::func_37(&uLocal_561);
						__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
						iLocal_50 = 5;
					}
				}
			}
			break;
		case 5:
			func_354(uParam0);
			if (((__LIB_0__::func_75(&uLocal_561) && __LIB_3__::func_135(&uLocal_561) > 2000) && Local_578.f_88 == 0) && Local_698.f_88 == 0)
			{
				if (iLocal_53 != 7)
				{
					func_338(7, 0);
				}
			}
			func_356(&Local_578, &iLocal_414, uParam0, 1);
			func_356(&Local_698, &iLocal_415, uParam0, 2);
			func_333(uParam0);
			func_342();
			func_350();
			if (ENTITY::DOES_ENTITY_EXIST(Local_578))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_578))
				{
					AUDIO::STOP_PED_SPEAKING(Local_578, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_698))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_698))
				{
					AUDIO::STOP_PED_SPEAKING(Local_698, false);
				}
			}
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_578.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_578.f_1], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_262[Local_578.f_1])) || ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_698.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_698.f_1], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_262[Local_698.f_1])))
			{
				HUD::_0xC9CAEAEEC1256E54(724769646);
			}
			if (!Local_578.f_88)
			{
				if (__LIB_0__::func_665(Global_35, Local_578, 1, 1) > 1.5f || func_358(PLAYER::GET_PLAYER_INDEX(), Local_578, &(Local_578.f_3[0 /*61*/])))
				{
					func_352();
					func_359(&Local_578, &(Local_578.f_3[0 /*61*/]), 3.5f, &(Local_578.f_65), 5f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (__LIB_0__::func_665(Global_35, Local_578, 1, 1) <= 1.5f)
				{
					if (Local_578.f_83)
					{
						__LIB_1__::func_480(&Local_578);
						__LIB_13__::func_219(&(Local_578.f_3[0 /*61*/]), &(Local_578.f_65));
						func_362();
						Local_578.f_83 = 0;
					}
					func_359(&Local_578, &(Local_578.f_3[0 /*61*/]), 1.5f, &(Local_578.f_65), 5f, 3, 0, "", 32, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
			}
			if (!Local_698.f_88)
			{
				if (__LIB_0__::func_665(Global_35, Local_698, 1, 1) > 1.5f || func_358(PLAYER::GET_PLAYER_INDEX(), Local_698, &(Local_698.f_3[0 /*61*/])))
				{
					func_353();
					func_359(&Local_698, &(Local_698.f_3[0 /*61*/]), 3.5f, &(Local_698.f_65), 5f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (__LIB_0__::func_665(Global_35, Local_698, 1, 1) <= 1.5f)
				{
					if (Local_698.f_83)
					{
						__LIB_1__::func_480(&Local_698);
						__LIB_13__::func_219(&(Local_698.f_3[0 /*61*/]), &(Local_698.f_65));
						func_363();
						Local_698.f_83 = 0;
					}
					func_359(&Local_698, &(Local_698.f_3[0 /*61*/]), 1.5f, &(Local_698.f_65), 5f, 3, 0, "", 32, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
			}
			if (!Local_578.f_88 && __LIB_9__::func_754(&(Local_578.f_3[0 /*61*/])))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_578.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_578.f_1], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[Local_578.f_1], Local_578.f_96))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[Local_578.f_1], Local_578.f_96) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[Local_578.f_1], Local_578.f_96))
						{
							if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
							{
								if (!__LIB_0__::func_163(Global_35, 716706914))
								{
									if (!__LIB_0__::func_75(&uLocal_852))
									{
										__LIB_1__::func_148(&uLocal_852);
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
									}
									else if (__LIB_1__::func_871(&uLocal_852) > 2000)
									{
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										__LIB_1__::func_148(&uLocal_852);
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, Local_578.f_84, 0.25f, 0.25f, 0.25f, false, true, 0) && !__LIB_0__::func_163(Global_35, 1369124074))
							{
								TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_262[Local_578.f_1], "ARTHUR", Local_578.f_96, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
							}
							else if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_262[Local_578.f_1], "ARTHUR"))
							{
								HUD::_0xC9CAEAEEC1256E54(724769646);
								if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_578.f_1], "Arthur", false)))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_578.f_1], "Arthur", Global_35, 0);
								}
								else
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[Local_578.f_1], Local_578.f_96, true);
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_578.f_1], "LOOP", true, false);
									PED::SET_ENABLE_HANDCUFFS(Local_578, false, false);
									PED::_0x5A1A929C8B729B4A(Local_578);
									Local_578.f_88 = 1;
									__LIB_0__::func_37(&uLocal_852);
									__LIB_1__::func_148(&uLocal_855);
									if (__LIB_0__::func_75(&uLocal_822))
									{
										__LIB_1__::func_148(&uLocal_822);
									}
									if (MAP::DOES_BLIP_EXIST(iLocal_414))
									{
										MAP::_0xBD62D98799A3DAF0(iLocal_414, -89429847);
									}
									func_367();
								}
							}
						}
					}
					else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[Local_578.f_1], "LOOP"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_578.f_1], "LOOP", false, false);
					}
				}
			}
			else if (!Local_698.f_88 && __LIB_9__::func_754(&(Local_698.f_3[0 /*61*/])))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_698.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_698.f_1], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[Local_698.f_1], Local_698.f_96))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[Local_698.f_1], Local_698.f_96) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[Local_698.f_1], Local_698.f_96))
						{
							if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
							{
								if (!__LIB_0__::func_163(Global_35, 716706914))
								{
									if (!__LIB_0__::func_75(&uLocal_852))
									{
										__LIB_1__::func_148(&uLocal_852);
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
									}
									else if (__LIB_1__::func_871(&uLocal_852) > 2000)
									{
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										__LIB_1__::func_148(&uLocal_852);
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, Local_698.f_84, 0.25f, 0.25f, 0.25f, false, true, 0) && !__LIB_0__::func_163(Global_35, 1369124074))
							{
								TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_262[Local_698.f_1], "ARTHUR", Local_698.f_96, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
							}
							else if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_262[Local_698.f_1], "ARTHUR"))
							{
								HUD::_0xC9CAEAEEC1256E54(724769646);
								if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_698.f_1], "Arthur", false)))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_698.f_1], "Arthur", Global_35, 0);
								}
								else
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[Local_698.f_1], Local_698.f_96, true);
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_698.f_1], "LOOP", true, false);
									PED::SET_ENABLE_HANDCUFFS(Local_698, false, false);
									PED::_0x5A1A929C8B729B4A(Local_698);
									Local_698.f_88 = 1;
									__LIB_0__::func_37(&uLocal_852);
									__LIB_1__::func_148(&uLocal_855);
									if (__LIB_0__::func_75(&uLocal_822))
									{
										__LIB_1__::func_148(&uLocal_822);
									}
									if (MAP::DOES_BLIP_EXIST(iLocal_415))
									{
										MAP::_0xBD62D98799A3DAF0(iLocal_415, -89429847);
									}
									func_368();
								}
							}
						}
					}
					else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[Local_698.f_1], "LOOP"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[Local_698.f_1], "LOOP", false, false);
					}
				}
			}
			if (((Local_578.f_88 == 1 && Local_698.f_88 == 1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)) && __LIB_0__::func_264(&uLocal_855) > 0.5f)
			{
				if (iLocal_53 != 8)
				{
					func_338(8, 0);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_411))
				{
					iLocal_411 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_291);
					MAP::_BLIP_SET_MODIFIER(iLocal_411, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_411, "CLD2_DORKOBJ");
				}
			}
			if (((Local_578.f_88 == 1 && Local_698.f_88 == 1) && func_370()) && __LIB_0__::func_264(&uLocal_855) > 1f)
			{
				if (iLocal_53 != 8)
				{
					func_338(8, 0);
					__LIB_0__::func_325(&iLocal_411);
					if (!MAP::DOES_BLIP_EXIST(iLocal_411))
					{
						iLocal_411 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_291);
						MAP::_BLIP_SET_MODIFIER(iLocal_411, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_411, "CLD2_DORKOBJ");
					}
				}
				OBJECT::SET_OBJECT_TARGETTABLE(Local_578.f_89, false);
				OBJECT::SET_OBJECT_TARGETTABLE(Local_698.f_89, false);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_578.f_89, false, 0f);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_698.f_89, false, 0f);
				if (__LIB_12__::func_876(uParam0, "C2_SLAVEASK", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_578))
					{
						TASK::TASK_GO_TO_ENTITY(Local_578, Global_35, 20000, 4f, 1f, 4.5f, 0);
						TASK::TASK_LOOK_AT_ENTITY(Local_578, Global_35, -1, 0, 51, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_698))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_698, Global_35, -1, 0, 51, 0);
						TASK::TASK_GO_TO_ENTITY(Local_698, Global_35, 20000, 4f, 1f, 4.5f, 0);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_414))
					{
						MAP::_0xBD62D98799A3DAF0(iLocal_414, -89429847);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_415))
					{
						MAP::_0xBD62D98799A3DAF0(iLocal_415, -89429847);
					}
					__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
					__LIB_13__::func_33(uParam0, 1);
					func_291(uParam0, 0);
					__LIB_0__::func_37(&uLocal_855);
					iLocal_493 = 0;
					iLocal_492 = 0;
					func_339(6);
					iLocal_50 = 6;
				}
			}
			break;
		case 6:
			func_371(uParam0);
			func_372(uParam0);
			func_373();
			func_334(uParam0);
			func_374();
			func_350();
			func_333(uParam0);
			PED::SET_PED_RESET_FLAG(Global_35, 53, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_578))
			{
				PED::SET_PED_RESET_FLAG(Local_578, 53, true);
				if (FIRE::IS_ENTITY_ON_FIRE(Local_578))
				{
					AUDIO::STOP_PED_SPEAKING(Local_578, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_698))
			{
				PED::SET_PED_RESET_FLAG(Local_698, 53, true);
				if (FIRE::IS_ENTITY_ON_FIRE(Local_698))
				{
					AUDIO::STOP_PED_SPEAKING(Local_698, false);
				}
			}
			if ((!bLocal_515 && __LIB_0__::func_393(Global_35, iLocal_278, 0, 1)) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				if (__LIB_12__::func_876(uParam0, "C2_SLAVETALK", 0))
				{
					bLocal_515 = true;
				}
			}
			if ((!bLocal_516 && !__LIB_0__::func_393(Global_35, iLocal_275, 0, 1)) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				if (__LIB_12__::func_876(uParam0, "C2_SLAVEMRKT", 0))
				{
					bLocal_516 = true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_578))
			{
				if (__LIB_4__::func_207(Local_578, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_578, false, false), 1.5f, true) && !__LIB_0__::func_163(Local_578, 474215631)))
				{
					TASK::TASK_COWER(Local_578, -1, Global_35, 0);
				}
				else if (!__LIB_4__::func_207(Local_578, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) && !MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_578, false, false), 1.5f, true))
				{
					if (__LIB_0__::func_163(Local_578, 474215631))
					{
						if (PED::_GET_PED_CROUCH_MOVEMENT(Local_578))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_578, false, 0, false);
						}
					}
					if ((((((!__LIB_0__::func_163(Local_578, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")) && !__LIB_0__::func_393(Global_35, iLocal_281, 0, 1)) && (bLocal_514 == 1 || !__LIB_0__::func_393(Global_35, iLocal_278, 0, 1))) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_578, iLocal_262[4])) && iLocal_59 != 2) && iLocal_59 != 3) && iLocal_59 != 4)
					{
						PED::SET_PED_CONFIG_FLAG(Local_578, 279, true);
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_578, Global_35, 0, 0, 2.25f, 2.75f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
						if (PED::_GET_PED_CROUCH_MOVEMENT(Local_578))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_578, false, 0, false);
						}
					}
					else if (__LIB_0__::func_163(Local_578, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
					{
					}
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_414))
				{
					iLocal_414 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_578);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_414, "CLD2_SLAVE");
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_698))
			{
				if (__LIB_4__::func_207(Local_698, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_698, false, false), 1.5f, true) && !__LIB_0__::func_163(Local_698, 474215631)))
				{
					TASK::TASK_COWER(Local_698, -1, Global_35, 0);
				}
				else if (!__LIB_4__::func_207(Local_698, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) && !MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_698, false, false), 1.5f, true))
				{
					if (__LIB_0__::func_163(Local_698, 474215631))
					{
						if (PED::_GET_PED_CROUCH_MOVEMENT(Local_698))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_698, false, 0, false);
						}
					}
					if ((((((!__LIB_0__::func_163(Local_698, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")) && !__LIB_0__::func_393(Global_35, iLocal_281, 0, 1)) && (bLocal_514 == 1 || !__LIB_0__::func_393(Global_35, iLocal_278, 0, 1))) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_698, iLocal_262[4])) && iLocal_59 != 2) && iLocal_59 != 3) && iLocal_59 != 4)
					{
						PED::SET_PED_CONFIG_FLAG(Local_698, 279, true);
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_698, Global_35, 0, 0, 2.25f, 2.75f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
						if (PED::_GET_PED_CROUCH_MOVEMENT(Local_698))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_698, false, 0, false);
						}
					}
					else if (__LIB_0__::func_163(Local_698, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
					{
					}
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_415))
				{
					iLocal_415 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_698);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_415, "CLD2_SLAVE");
				}
			}
			func_331(&(uParam0->f_753), uParam0->f_2581, 0, 0);
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_411))
				{
					MAP::REMOVE_BLIP(&iLocal_411);
				}
				func_377();
				__LIB_3__::func_319(iLocal_262[7]);
				__LIB_0__::func_7(&(uParam0->f_172), 262144);
				return 5;
			}
			else if (!MAP::DOES_BLIP_EXIST(iLocal_411) && !ENTITY::IS_ENTITY_DEAD(iLocal_291))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_291, vLocal_441, 1f, 1f, 1f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_291, vLocal_441, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_291, 92.52f);
				}
				iLocal_411 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_291);
				MAP::_BLIP_SET_MODIFIER(iLocal_411, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_411, "CLD2_DORKOBJ");
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	__LIB_6__::func_765(22, 1);
	__LIB_0__::func_325(&iLocal_411);
	__LIB_0__::func_325(&iLocal_414);
	__LIB_0__::func_325(&iLocal_415);
	__LIB_12__::func_654(uParam0->f_174, 1);
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
		func_413(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (__LIB_1__::func_187(uParam0->f_174))
	{
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_578))
		{
			TASK::TASK_SMART_FLEE_PED(Local_578, Global_35, 200f, -1, 0, 1.5f, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_698))
		{
			TASK::TASK_SMART_FLEE_PED(Local_698, Global_35, 200f, -1, 0, 1.5f, 0);
		}
		func_442(5, 4);
		__LIB_0__::func_325(&iLocal_411);
		__LIB_0__::func_325(&iLocal_414);
		__LIB_0__::func_325(&iLocal_415);
		iVar0 = __LIB_0__::func_560(5, 4);
		__LIB_18__::func_928(iVar0, 1, 1);
		iVar1 = __LIB_16__::func_268(iVar0);
		iVar2 = PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iVar1));
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			MISC::_0xEB946B9E579729AD(iVar2, 0);
		}
		__LIB_1__::func_943(4, 64);
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
		{
			if (!PED::IS_PED_FLEEING(iLocal_291))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_291, Global_35, 3, 0, -1f, -1, 0);
			}
			fVar3 = __LIB_0__::func_665(iLocal_291, Global_35, 1, 1);
			if (fVar3 <= 10f)
			{
				if (!__LIB_0__::func_75(&uLocal_321))
				{
					__LIB_1__::func_148(&uLocal_321);
				}
				else if (__LIB_0__::func_264(&uLocal_321) > 8.5f)
				{
					if (__LIB_12__::func_876(uParam0, "RCLDN_CHASE", 0))
					{
						Local_296.f_3 = Global_35;
						Local_296.f_7 = 4000;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_291, &Local_296);
						__LIB_1__::func_148(&uLocal_321);
					}
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_321))
			{
				__LIB_1__::func_148(&uLocal_321);
			}
			else if (__LIB_0__::func_264(&uLocal_321) > 8.5f)
			{
				if (__LIB_12__::func_876(uParam0, "RCLDN_FEAR", 0))
				{
					Local_296.f_3 = Global_35;
					Local_296.f_7 = 4000;
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_291, &Local_296);
					__LIB_1__::func_148(&uLocal_321);
				}
			}
			if (__LIB_0__::func_665(iLocal_291, Global_35, 1, 1) >= 50f && __LIB_1__::func_472(iLocal_291, 70f, 50f, fVar3, -1082130432 /* Float: -1f */))
			{
				return true;
			}
			return false;
		}
	}
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 9)
	{
		return true;
	}
	return true;
}

void func_159(var uParam0)
{
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rcm_calderon_12_basementhelper"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("rcm_calderon_12_basementhelper");
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (__LIB_1__::func_200(23))
	{
		__LIB_2__::func_426(&iLocal_291);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 155, false);
	PED::_0xEAE3B5B019C8D23F(Global_35, 89);
	PERSCHAR::_0x8BC555034A5A5E8C(joaat("SDN_GEN_STORE_SHADY"), joaat("U_M_M_NBXSHADYDEALER_01"));
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_SHADY"), joaat("META_OUTFIT_DEFAULT"));
	__LIB_2__::func_788(&iLocal_291, 1, 0, 1);
	__LIB_2__::func_788(&Local_578, 1, 0, 1);
	__LIB_2__::func_788(&Local_698, 1, 0, 1);
	if (__LIB_12__::func_644(uParam0) == 0 || __LIB_12__::func_644(uParam0) == 1)
	{
		__LIB_2__::func_754(__LIB_0__::func_560(5, 4), 0);
		if (!bLocal_530)
		{
			if (__LIB_13__::func_214(41))
			{
				__LIB_13__::func_108(41, 0, 1);
			}
			__LIB_13__::func_215(219);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ROBBERIES");
	}
	__LIB_4__::func_353();
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_410) && __LIB_0__::func_255(iLocal_410, 0))
	{
		func_455();
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(219)))
	{
		PERSCHAR::_0xB65E7F733956CF25(__LIB_0__::func_120(219));
	}
	if (__LIB_2__::func_763(219, 0))
	{
		__LIB_2__::func_753(219, 0, 1, 0, 0);
	}
	__LIB_2__::func_788(&iLocal_410, 1, 0, 1);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_288))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_288, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_289))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_289, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_290))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_290, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_529))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_529, false);
	}
	__LIB_14__::func_240(&uLocal_14);
	__LIB_14__::func_240(&uLocal_32);
	__LIB_0__::func_172(iLocal_273);
	__LIB_0__::func_172(iLocal_274);
	__LIB_0__::func_172(iLocal_275);
	__LIB_0__::func_172(iLocal_276);
	__LIB_0__::func_172(iLocal_277);
	__LIB_0__::func_172(iLocal_278);
	__LIB_0__::func_172(iLocal_279);
	__LIB_0__::func_172(iLocal_280);
	__LIB_0__::func_172(iLocal_281);
	__LIB_0__::func_172(iLocal_282);
	__LIB_0__::func_172(iLocal_283);
	__LIB_0__::func_172(iLocal_284);
	__LIB_0__::func_172(iLocal_285);
	__LIB_0__::func_172(iLocal_287);
	__LIB_3__::func_319(iLocal_262[0]);
	__LIB_3__::func_319(iLocal_262[2]);
	__LIB_3__::func_319(iLocal_262[3]);
	__LIB_3__::func_319(iLocal_262[4]);
	__LIB_3__::func_319(iLocal_262[5]);
	__LIB_3__::func_319(iLocal_262[6]);
	if (MAP::DOES_BLIP_EXIST(iLocal_411))
	{
		MAP::REMOVE_BLIP(&iLocal_411);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_412))
	{
		MAP::REMOVE_BLIP(&iLocal_412);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_961);
	if (iLocal_1013 != 0 && ENTITY::_0x1FF441D7954F8709(iLocal_1013))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_1013);
	}
	ENTITY::REMOVE_FORCED_OBJECT(vLocal_447, 5f, joaat("S_EAGLEEYESCRATCH_01X"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_551))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
		}
		ENTITY::_0x0DB41D59E0F1502B(iLocal_551);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_551);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_554))
	{
		OBJECT::DELETE_OBJECT(&iLocal_554);
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_BOOKCASE04X", true);
	if (iLocal_1012 != 0 && ENTITY::_0x1FF441D7954F8709(iLocal_1012))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_1012);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_552))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_552);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_552);
	}
	func_460();
	__LIB_8__::func_794(41, 0);
	__LIB_11__::func_10(4, 0, 0);
	ENTITY::REMOVE_MODEL_HIDE(2858.77f, -1201.45f, 49.73f, 1f, joaat("P_CIGAR02X"), 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_416))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_416, true);
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_CHEST_LARGE", true);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_818) && INTERIOR::IS_INTERIOR_READY(iLocal_818))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_818);
	}
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 3, 0, 0);
	if (bLocal_517)
	{
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE("RC_Calderon_01_Basement_AZ_List", false, true);
		bLocal_517 = false;
	}
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		if (iLocal_59 == 5)
		{
			__LIB_1__::func_715(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		if (__LIB_13__::func_22(uParam0) == -1 || __LIB_13__::func_22(uParam0) == 1)
		{
			if (!bLocal_524)
			{
				if (bLocal_527)
				{
					__LIB_1__::func_715(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
			}
		}
	}
}

int func_204(vector3 vParam0, var uParam3)
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
		iVar0 = func_512(0, 0);
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

char* func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLD2_GOSHOP_OBJ";
		case 1:
			return "CLD2_SLAVE_OBJ";
		case 2:
			return "CLD2_CONFRONT";
		case 3:
			return "CLD2_INTIMIDATE";
		case 4:
			return "CLD2_FORCEOBJ";
		case 5:
			return "CLD2_SWITCHOBJ";
		case 6:
			return "CLD2_GOBASE";
		case 7:
			return "CLD2_FREESL";
		case 8:
			return "CLD2_RETDORK";
		default:
			break;
	}
	return "UNKNOWN";
}

bool func_217(int iParam0)
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

int func_226(var uParam0)
{
	if (__LIB_13__::func_230(iLocal_291, 0, &uLocal_903, &iLocal_931, 0, 0))
	{
		if (__LIB_12__::func_876(uParam0, "RCLDN_GRIEF_PRE", 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_291, Global_35, 3, 0, 300f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_291, true);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291) && ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		return 1;
	}
	return 0;
}

void func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	__LIB_13__::func_222(uParam0, 1);
	__LIB_0__::func_37(&uLocal_321);
	func_324();
	PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), 0);
	PLAYER::_0x98CD760DE43B612E(PLAYER::PLAYER_ID(), 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 3, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 2, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 3, 2, 0);
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		func_442(5, 4);
		__LIB_0__::func_325(&iLocal_411);
		__LIB_0__::func_325(&iLocal_414);
		__LIB_0__::func_325(&iLocal_415);
		iVar0 = __LIB_0__::func_560(5, 4);
		__LIB_18__::func_928(iVar0, 1, 1);
		iVar1 = __LIB_16__::func_268(iVar0);
		iVar2 = PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iVar1));
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			MISC::_0xEB946B9E579729AD(iVar2, 0);
		}
		__LIB_1__::func_943(4, 64);
	}
	else if (__LIB_12__::func_644(uParam0) == 0)
	{
		iVar0 = __LIB_0__::func_560(5, 4);
		if (!bLocal_530)
		{
			if (__LIB_13__::func_214(41))
			{
				__LIB_13__::func_108(iVar0, 0, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
		{
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iLocal_291, &uVar3));
		}
		iVar4 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar4, 0, 0, 0, 2, 0, 0, 0);
		__LIB_13__::func_882(4, iVar0, iVar4);
	}
}

void func_246(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_271(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		iLocal_291 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		iLocal_291 = __LIB_12__::func_885(uParam0, joaat("CS_BROTHERDORKINS"), Global_1347702[22 /*49*/].f_24, 0, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
		return 0;
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	__LIB_12__::func_875(uParam0, iLocal_291, "RCLD1_DORKINS", 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_291, true);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_291))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_291, true, true);
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_291, vLocal_441, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_291, 92.5273f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_291, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_291, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_291, 66, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_570))
	{
		iLocal_570 = OBJECT::CREATE_OBJECT(iLocal_569, 2815.72f, -1220.51f, 46.54f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_571))
	{
		iLocal_571 = OBJECT::CREATE_OBJECT(iLocal_565, 2815.7f, -1220.8f, 46f, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_571, true);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_286))
	{
		iLocal_286 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2823.621f, -1225.481f, 48.29537f, 0f, 0f, -4.399003f, 13.85683f, 18.67138f, 12.92984f, "CLD1 Disable conv manager");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_291))
		{
			return 0;
		}
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_291) && ENTITY::DOES_ENTITY_EXIST(iLocal_570)) && ENTITY::DOES_ENTITY_EXIST(iLocal_571)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_286))
	{
		__LIB_4__::func_228(&uLocal_903);
		__LIB_6__::func_905(&uLocal_903);
		__LIB_13__::func_223(&iLocal_291);
		PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_291, 8, 0, 1);
		__LIB_1__::func_398(&uLocal_903, 1);
		__LIB_2__::func_906(&uLocal_903, 50);
		return 1;
	}
	return 0;
}

void func_291(var uParam0, bool bParam1)
{
	char cVar0[64];
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			StringCopy(&(uParam0->f_2575), func_655(uParam0), 24);
			__LIB_13__::func_16(uParam0, 122961);
			__LIB_12__::func_981(uParam0, 123035);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_291, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_570, "p_woodbowl01x", 0, iLocal_569, 0);
			__LIB_12__::func_957(uParam0, iLocal_571, "p_coin01x", 0, iLocal_565, 1);
			__LIB_12__::func_846(&(uParam0->f_206));
			StringCopy(&cVar0, "1-Start-Multi", 64);
			if (!bParam1)
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Start-Normal");
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Start-Multi");
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			}
			__LIB_12__::func_779(uParam0, vLocal_441);
			__LIB_12__::func_943(&(uParam0->f_206), 2804.583f, -1212.54f, 46.4735f, 197.0106f, 0);
			__LIB_0__::func_88(&(uParam0->f_206), -2147483648);
			__LIB_0__::func_88(&(uParam0->f_206), 131072);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			bLocal_522 = false;
			bLocal_523 = false;
			bLocal_526 = false;
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), func_655(uParam0), 24);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_571))
			{
				OBJECT::DELETE_OBJECT(&iLocal_571);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_571))
			{
				iLocal_571 = OBJECT::CREATE_OBJECT(iLocal_566, 2815.7f, -1220.8f, 46f, true, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_571, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_572))
			{
				iLocal_572 = OBJECT::CREATE_OBJECT(iLocal_567, 2815.7f, -1220.4f, 46f, true, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_572, true);
			}
			__LIB_13__::func_16(uParam0, 124049);
			__LIB_12__::func_981(uParam0, 124075);
			__LIB_12__::func_944(uParam0, &(uParam0->f_2575), !bParam1);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_291, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_578, "A_M_M_nbxSlums_01", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_698, "A_M_M_nbxSlums_01^1", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_570, "p_woodbowl01x", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_571, "p_coin01x", 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_291, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_578, "A_M_M_nbxSlums_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_698, "A_M_M_nbxSlums_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_570, "p_woodbowl01x", 0, iLocal_569, 0);
			__LIB_12__::func_957(uParam0, iLocal_571, "p_coin01x", 0, iLocal_566, 1);
			__LIB_12__::func_957(uParam0, iLocal_572, "p_coinStack01", 0, iLocal_567, 1);
			StringCopy(&cVar0, "1-Start-Multi", 64);
			if (!bParam1)
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Start-Normal");
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Start-Multi");
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			}
			__LIB_12__::func_779(uParam0, vLocal_441);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			bLocal_522 = false;
			bLocal_523 = false;
			bLocal_526 = false;
			break;
	}
}

bool func_293(var uParam0)
{
	float fVar0;
	bool bVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	bVar1 = __LIB_1__::func_205(Global_35, iLocal_286, 1, 0);
	if (iLocal_1014 > 0 && iLocal_520 == 0)
	{
		if (bVar1)
		{
		}
	}
	switch (iLocal_1014)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_273))
			{
				iLocal_273 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2812.731f, -1220.614f, 47.92695f, 0f, 0f, 0f, 7.776189f, 13.55215f, 3.375656f, "Dorkins initial scene notice vol");
			}
			if (func_670(7, 2, "pl_idle") && VOLUME::_DOES_VOLUME_EXIST(iLocal_273))
			{
				if (func_671())
				{
					MAP::ALLOW_SONAR_BLIPS(true);
					iLocal_1014 = 1;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false))
			{
				if (!__LIB_0__::func_75(&uLocal_321))
				{
					__LIB_1__::func_148(&uLocal_321);
				}
				fVar0 = __LIB_0__::func_665(Global_35, iLocal_291, 1, 1);
				if (fVar0 < 35f)
				{
					if (PED::IS_ANY_PED_NEAR_POINT(vLocal_293, 4f))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_292) && func_672())
						{
							sVar2 = func_673(iLocal_324);
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[7], sVar2) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[7], sVar2))
							{
								if (__LIB_12__::func_876(uParam0, "C1_ATTRACT", 0))
								{
									__LIB_0__::func_37(&uLocal_321);
									Local_296.f_3 = iLocal_292;
									Local_296.f_7 = 3500;
									_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_291, &Local_296);
									if (iLocal_324 >= 2)
									{
										iLocal_324 = 0;
									}
									else
									{
										iLocal_324++;
									}
									MAP::_TRIGGER_SONAR_BLIP_2(682760074, iLocal_291);
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[7], sVar2, true);
									iLocal_1014 = 2;
								}
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_292) && PED::GET_CLOSEST_PED(vLocal_293, 4f, 1, 0, &iLocal_292, 0, 1, 1, 28))
						{
						}
					}
					if (__LIB_0__::func_264(&uLocal_321) > 7.5f && func_672())
					{
						sVar3 = func_673(iLocal_324);
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[7], sVar3) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[7], sVar3))
						{
							if (__LIB_12__::func_876(uParam0, "C1_ATTRACT", 0))
							{
								__LIB_0__::func_37(&uLocal_321);
								if (iLocal_324 >= 2)
								{
									iLocal_324 = 0;
								}
								else
								{
									iLocal_324++;
								}
								MAP::_TRIGGER_SONAR_BLIP_2(682760074, iLocal_291);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[7], sVar3, true);
								iLocal_1014 = 3;
							}
						}
					}
					else if (__LIB_0__::func_264(&uLocal_321) > 7.5f)
					{
						MAP::_TRIGGER_SONAR_BLIP_2(682760074, iLocal_291);
						__LIB_1__::func_148(&uLocal_321);
					}
				}
			}
			if (fVar0 <= 5f && __LIB_1__::func_205(Global_35, iLocal_273, 1, 0))
			{
				iLocal_1014 = 4;
			}
			break;
		case 3:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_262[7], "s_idle", 1))
			{
				iLocal_1014 = 1;
			}
			if (__LIB_0__::func_665(Global_35, iLocal_291, 1, 1) <= 5f && !AUDIO::_0x1ECC76792F661CF5("C1_ATTRACT"))
			{
				iLocal_1014 = 4;
			}
			break;
		case 2:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_262[7], "s_idle", 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_292))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_292);
					iLocal_292 = 0;
				}
				iLocal_1014 = 1;
			}
			if (__LIB_0__::func_665(Global_35, iLocal_291, 1, 1) <= 5f && !AUDIO::_0x1ECC76792F661CF5("C1_ATTRACT"))
			{
				iLocal_1014 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false))
			{
				sVar4 = func_674();
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[7], sVar4) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[7], sVar4))
				{
					if (__LIB_12__::func_876(uParam0, "C1_ATTRARTH", 0))
					{
						__LIB_13__::func_33(uParam0, 0);
						func_291(uParam0, 0);
						Local_296.f_3 = Global_35;
						Local_296.f_7 = -1;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_291, &Local_296);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[7], sVar4, true);
						iLocal_1014 = 5;
					}
				}
			}
			break;
		case 5:
			if (!bLocal_521)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
				{
					if (__LIB_0__::func_871())
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2B-LowHonor");
					}
					else
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2A-HighHonor");
					}
					bLocal_521 = true;
				}
			}
			fVar0 = __LIB_0__::func_665(Global_35, iLocal_291, 1, 1);
			if (fVar0 <= 8f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			}
			if (!bLocal_521)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
				{
					if (__LIB_0__::func_871())
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2B-LowHonor");
					}
					else
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2A-HighHonor");
					}
					bLocal_521 = true;
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false))
			{
				if (fVar0 < 8f && !bVar1)
				{
					iLocal_409 = __LIB_3__::func_112(iLocal_291, Global_35, 1060437492 /* Float: 0.707f */);
					if (((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_262[7], "s_CO_Idle_f", 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_262[7], "s_CO_Idle_l", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_262[7], "s_CO_Idle_r", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_262[7], "s_idle", 1))
					{
						if (iLocal_409 != iLocal_408)
						{
							sVar5 = func_676(iLocal_409);
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[7], sVar5) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[7], sVar5))
							{
								if (__LIB_3__::func_135(&uLocal_819) >= 7500)
								{
									__LIB_0__::func_268(&uLocal_819, 6f);
								}
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[7], sVar5, true);
								iLocal_408 = iLocal_409;
							}
						}
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[7], "pl_idle"))
				{
					if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[7], "pl_idle") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[7], "pl_idle"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[7], "pl_idle", true);
						iLocal_408 = 4;
					}
				}
				if (((fVar0 < 20f && !bLocal_327) && !bVar1) || bLocal_327 == 1)
				{
					if (!bLocal_326)
					{
						if (func_677())
						{
							bLocal_326 = true;
						}
					}
					else
					{
						iLocal_325 = func_359(&iLocal_291, &(Local_328[0 /*61*/]), 8f, &Local_390, 0.25f, 3, 0, "", 1, iLocal_274, 0, 2, -1082130432 /* Float: -1f */);
						if (iLocal_325 > -1)
						{
							bLocal_327 = true;
						}
						if (((bLocal_327 && !__LIB_8__::func_684("RCLDN_ILODAWDLE")) && !AUDIO::_0x1ECC76792F661CF5("C1_ATTRACT")) && !AUDIO::_0x1ECC76792F661CF5("C1_ATTRARTH"))
						{
							func_678(&iLocal_291, &(Local_328[0 /*61*/]), &Local_390, 8f, -1082130432 /* Float: -1f */, 0);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
							iLocal_520 = 1;
							__LIB_3__::func_515(&(Local_390[0 /*17*/]), 0, 1);
							MAP::ALLOW_SONAR_BLIPS(false);
							iLocal_1014 = 6;
						}
						else
						{
							if (bLocal_327)
							{
								func_678(&iLocal_291, &(Local_328[0 /*61*/]), &Local_390, 8f, -1082130432 /* Float: -1f */, 0);
							}
							if (!__LIB_0__::func_75(&uLocal_819) && !__LIB_5__::func_463())
							{
								__LIB_1__::func_148(&uLocal_819);
							}
							else if (__LIB_3__::func_135(&uLocal_819) > 7500 && __LIB_0__::func_665(Global_35, iLocal_291, 1, 1) < 8f)
							{
								if (__LIB_12__::func_876(uParam0, "RCLDN_ILODAWDLE", 0))
								{
									__LIB_1__::func_148(&uLocal_819);
								}
							}
						}
					}
				}
			}
			break;
		case 6:
			func_678(&iLocal_291, &(Local_328[0 /*61*/]), &Local_390, 8f, -1082130432 /* Float: -1f */, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			if (!bLocal_521)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
				{
					if (__LIB_0__::func_871())
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2B-LowHonor");
					}
					else
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2A-HighHonor");
					}
					bLocal_521 = true;
				}
			}
			sVar6 = "RCLDN_RC1_ILO";
			if (__LIB_12__::func_876(uParam0, sVar6, 0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[7], "Loop_CallOver_Idle", true, false);
				}
				iLocal_1014 = 7;
			}
			break;
		case 7:
			if (!bLocal_521)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
				{
					if (__LIB_0__::func_871())
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2B-LowHonor");
					}
					else
					{
						ANIMSCENE::_0x1407F5115FB9583E(uParam0->f_206.f_348, "2A-HighHonor");
					}
					bLocal_521 = true;
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			__LIB_1__::func_538(0);
			func_678(&iLocal_291, &(Local_328[0 /*61*/]), &Local_390, 8f, -1082130432 /* Float: -1f */, 0);
			if (!__LIB_5__::func_463())
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_262[7]) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_262[7]) > 0.98f)
				{
					if (__LIB_0__::func_871())
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "Honor_is", true, false);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "Honor_is", false, false);
					}
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_296(var uParam0)
{
	switch (iLocal_51)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					__LIB_13__::func_33(uParam0, 0);
					func_291(uParam0, 1);
				}
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return true;
			}
			else if (func_335(uParam0, 1, 1, 0, 0) && func_683(uParam0))
			{
				__LIB_13__::func_227(iLocal_291);
				iLocal_51 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75(&uLocal_246))
			{
				__LIB_1__::func_148(&uLocal_246);
			}
			else if (__LIB_0__::func_265(&uLocal_246) > 5f)
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_425, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_428);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), true, 0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				PED::_0x4759CC730F947C81();
				iLocal_51 = 2;
			}
			break;
		case 2:
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				func_442(5, 4);
				iLocal_50 = 0;
				func_338(0, 0);
				__LIB_0__::func_37(&uLocal_246);
				return true;
			}
			break;
	}
	return false;
}

bool func_299(var uParam0)
{
	switch (iLocal_51)
	{
		case 0:
			if (func_335(uParam0, 1, 1, 0, 1) && func_683(uParam0))
			{
				__LIB_13__::func_227(iLocal_291);
				iLocal_51 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75(&uLocal_246))
			{
				__LIB_1__::func_148(&uLocal_246);
			}
			else if (__LIB_0__::func_265(&uLocal_246) > 5f)
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_429, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_432);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), true, 0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				func_442(5, 4);
				iLocal_50 = 0;
				func_338(0, 0);
				__LIB_0__::func_37(&uLocal_246);
				return true;
			}
			break;
	}
	return false;
}

bool func_300(var uParam0)
{
	switch (iLocal_51)
	{
		case 0:
			if (func_335(uParam0, 1, 0, 1, 1) && func_670(2, 0, "pbl_HardOpen_Success"))
			{
				if (func_686())
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(iLocal_262[2], 5f);
					iLocal_51 = 1;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_262[2], false))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_553))
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_553))
					{
						CAM::SET_CAM_ACTIVE(iLocal_553, false);
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					}
					CAM::DESTROY_CAM(iLocal_553, false);
				}
				iLocal_51 = 2;
			}
			break;
		case 2:
			if ((((func_687(uParam0, 1) && func_688(uParam0, 1)) && func_683(uParam0)) && func_689(uParam0, 0)) && func_350())
			{
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_433, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_436);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), true, 0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROBBERIES");
				if (!__LIB_2__::func_763(219, 0))
				{
					iLocal_410 = __LIB_2__::func_965(219, 0, 0, 0, 1, 1);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_410))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_410, 186, true);
						__LIB_1__::func_864(iLocal_410, 1, 1);
					}
					MISC::CLEAR_AREA(vLocal_459, 5f, 2442122);
					__LIB_13__::func_227(iLocal_291);
					func_352();
					func_353();
					iLocal_50 = 5;
					iLocal_54 = 6;
					iLocal_51 = 5;
				}
			}
			break;
		case 5:
			if (!CAM::_0x251241CAEC707106() && !CAM::_0x43AB9D5A7D415478())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_578))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_414))
					{
						iLocal_414 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_578);
						MAP::_BLIP_SET_MODIFIER(iLocal_414, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_414, "CLD2_SLAVE");
					}
					PED::SET_PED_CONFIG_FLAG(Local_578, 277, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_698))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_415))
					{
						iLocal_415 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_698);
						MAP::_BLIP_SET_MODIFIER(iLocal_415, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_415, "CLD2_SLAVE");
					}
					PED::SET_PED_CONFIG_FLAG(Local_698, 277, false);
				}
				OBJECT::SET_OBJECT_TARGETTABLE(Local_578.f_89, true);
				OBJECT::SET_OBJECT_TARGETTABLE(Local_698.f_89, true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_578.f_89, true, 10f);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_698.f_89, true, 10f);
				func_692(4);
				func_338(7, 0);
				__LIB_0__::func_37(&uLocal_561);
				AUDIO::TRIGGER_MUSIC_EVENT("CLDN2_RESTART_3");
				func_339(5);
				return true;
			}
			break;
	}
	return false;
}

bool func_301(var uParam0)
{
	switch (iLocal_51)
	{
		case 0:
			if (func_335(uParam0, 0, 0, 1, 1) && func_670(2, 0, "pbl_HardOpen_Success"))
			{
				if (func_686())
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(iLocal_262[2], 5f);
					iLocal_51 = 1;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_262[2], false))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_553))
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_553))
					{
						CAM::SET_CAM_ACTIVE(iLocal_553, false);
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					}
					CAM::DESTROY_CAM(iLocal_553, false);
				}
				iLocal_51 = 2;
			}
			break;
		case 2:
			if ((((func_687(uParam0, 0) && func_688(uParam0, 0)) && func_683(uParam0)) && func_689(uParam0, 0)) && func_350())
			{
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_433, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_436);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), true, 0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				if (!__LIB_2__::func_763(219, 0))
				{
					iLocal_410 = __LIB_2__::func_965(219, 0, 0, 0, 1, 1);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_410))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_410, 186, true);
						__LIB_1__::func_864(iLocal_410, 1, 1);
					}
					MISC::CLEAR_AREA(vLocal_459, 5f, 2442122);
					__LIB_13__::func_227(iLocal_291);
					iLocal_50 = 6;
					iLocal_54 = 6;
					iLocal_51 = 5;
				}
			}
			break;
		case 5:
			if (!CAM::_0x251241CAEC707106() && !CAM::_0x43AB9D5A7D415478())
			{
				func_692(4);
				Local_578.f_88 = 1;
				Local_698.f_88 = 1;
				__LIB_13__::func_33(uParam0, 1);
				func_291(uParam0, 0);
				func_338(8, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("CLDN2_RESTART_4");
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROBBERIES");
				func_339(6);
				__LIB_13__::func_105(1, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_302(var uParam0)
{
	switch (iLocal_51)
	{
		case 0:
			if (func_335(uParam0, 0, 0, 1, 0))
			{
				iLocal_51 = 1;
			}
			break;
		case 1:
			if ((func_687(uParam0, 0) && func_688(uParam0, 0)) && func_683(uParam0))
			{
				__LIB_12__::func_997(uParam0, func_61(4), func_61(4), 4, 4, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_437, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_440);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), true, 0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_410))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 186, true);
					__LIB_1__::func_864(iLocal_410, 1, 1);
				}
				PED::_0x4759CC730F947C81();
				MISC::CLEAR_AREA(vLocal_459, 5f, 2442122);
				__LIB_13__::func_33(uParam0, 1);
				func_291(uParam0, 1);
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
				iLocal_493 = 1;
				iLocal_50 = 6;
				iLocal_54 = 6;
				iLocal_51 = 5;
			}
			break;
		case 5:
			if ((!CAM::_0x251241CAEC707106() && !CAM::_0x43AB9D5A7D415478()) && PED::_0x0EE3F0D7FECCC54F())
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return false;
				}
				func_377();
				__LIB_13__::func_105(1, 0);
				return true;
			}
			break;
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
			func_717(uParam4);
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

void func_324()
{
	__LIB_1__::func_480(&iLocal_291);
	__LIB_6__::func_815(&(Local_328[0 /*61*/]), iLocal_291);
}

bool func_331(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_13__::func_458(uParam0);
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

void func_333(var uParam0)
{
	switch (iLocal_53)
	{
		case 0:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				fLocal_494 = __LIB_0__::func_94(Global_35, vLocal_444, 1);
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if (iLocal_493 == 0 && __LIB_0__::func_75(&uLocal_822))
			{
				__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_493 = 1;
				__LIB_0__::func_37(&uLocal_822);
			}
			break;
		case 1:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if (((iLocal_493 == 0 && (iLocal_58 <= 1 || iLocal_58 >= 8)) && iLocal_56 <= 1) && __LIB_0__::func_75(&uLocal_822))
			{
				if (!__LIB_0__::func_270())
				{
					__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_493 = 1;
					__LIB_0__::func_37(&uLocal_822);
				}
			}
			break;
		case 2:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_412) && iLocal_58 <= 1)
				{
					iLocal_412 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_410);
					MAP::_BLIP_SET_MODIFIER(iLocal_412, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_412, "CLD2_SHOPK");
				}
				iLocal_493 = 1;
			}
			if ((iLocal_493 == 0 && iLocal_58 <= 1) && __LIB_0__::func_75(&uLocal_822))
			{
				if (!__LIB_0__::func_270())
				{
					__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_412))
					{
						iLocal_412 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_410);
						MAP::_BLIP_SET_MODIFIER(iLocal_412, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_412, "CLD2_SHOPK");
					}
					iLocal_493 = 1;
					__LIB_0__::func_37(&uLocal_822);
				}
			}
			break;
		case 3:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_412) && iLocal_58 <= 1)
				{
					iLocal_412 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_410);
				}
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_412, "CLD2_SHOPK");
				iLocal_493 = 1;
			}
			if (iLocal_493 == 0 && __LIB_0__::func_75(&uLocal_822))
			{
				if (!__LIB_0__::func_270() && !__LIB_5__::func_463())
				{
					__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_412))
					{
						iLocal_412 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_410);
					}
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_412, "CLD2_SHOPK");
					iLocal_493 = 1;
					__LIB_0__::func_37(&uLocal_822);
				}
			}
			break;
		case 4:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if (iLocal_493 == 0 && __LIB_0__::func_75(&uLocal_822))
			{
				if (__LIB_0__::func_265(&uLocal_822) >= 0f)
				{
					if (!__LIB_0__::func_270() && iLocal_54 <= 2)
					{
						__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_493 = 1;
						__LIB_0__::func_37(&uLocal_822);
					}
				}
			}
			break;
		case 5:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if (iLocal_493 == 0)
			{
				__LIB_12__::func_883(uParam0, func_211(iLocal_53), 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_493 = 1;
				__LIB_0__::func_37(&uLocal_822);
			}
			break;
		case 6:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if (iLocal_493 == 0 && __LIB_0__::func_75(&uLocal_822))
			{
				if (__LIB_0__::func_265(&uLocal_822) >= 0f)
				{
					if (!__LIB_0__::func_270())
					{
						__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_493 = 1;
						__LIB_0__::func_37(&uLocal_822);
					}
				}
			}
			break;
		case 7:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if ((iLocal_493 == 0 && __LIB_0__::func_75(&uLocal_822)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
			{
				if (__LIB_0__::func_265(&uLocal_822) >= 0f)
				{
					if (!__LIB_0__::func_270())
					{
						__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_493 = 1;
						__LIB_0__::func_37(&uLocal_822);
					}
				}
			}
			break;
		case 8:
			if (iLocal_492 == 0)
			{
				__LIB_13__::func_89(uParam0, func_211(iLocal_53), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_492 = 1;
				fLocal_494 = __LIB_0__::func_665(Global_35, iLocal_291, 1, 1);
				__LIB_1__::func_148(&uLocal_822);
			}
			if (__LIB_5__::func_352(func_211(iLocal_53)))
			{
				if (__LIB_0__::func_75(&uLocal_822))
				{
					__LIB_0__::func_37(&uLocal_822);
				}
				iLocal_493 = 1;
			}
			if (iLocal_493 == 0 && __LIB_0__::func_75(&uLocal_822))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_291, 1, 1) < (fLocal_494 - 1f) || __LIB_1__::func_205(Global_35, iLocal_276, 1, 0))
				{
					fLocal_494 = __LIB_0__::func_665(Global_35, iLocal_291, 1, 1);
				}
				if (__LIB_0__::func_75(&uLocal_822) && __LIB_0__::func_264(&uLocal_822) >= 0f)
				{
					__LIB_12__::func_883(uParam0, func_211(iLocal_53), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_37(&uLocal_822);
					iLocal_493 = 1;
				}
			}
			break;
	}
}

void func_334(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		if (func_670(8, 0, "pl_leadout"))
		{
			if (func_778())
			{
				if (__LIB_0__::func_665(iLocal_291, Global_35, 1, 1) <= 9f)
				{
					if (!_NAMESPACE29::_0x6098139150DCC745(iLocal_291, 6))
					{
						Local_296.f_3 = Global_35;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_291, &Local_296);
					}
					if (iLocal_50 <= 4)
					{
						if (!__LIB_0__::func_75(&uLocal_819))
						{
							__LIB_1__::func_148(&uLocal_819);
						}
						else if (__LIB_0__::func_265(&uLocal_819) > 10f && iLocal_872 < 3)
						{
							if (PED::_0x7F9B9791D4CB71F6(iLocal_291, Global_35, 0, 0) == 1)
							{
								if (__LIB_12__::func_876(uParam0, "C1_DAWDLE", 0))
								{
									iLocal_872++;
									__LIB_1__::func_148(&uLocal_819);
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_335(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!__LIB_1__::func_220(5))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_275))
	{
		iLocal_275 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.056f, -1199.901f, 47.10595f, 0f, 0f, 95.93949f, 11.5f, 12.50369f, 9.12837f, "Cldn 1.2 Whole shop volume");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_276))
	{
		iLocal_276 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2855.08f, -1198.521f, 45.785f, 0f, 0f, -175.5392f, 7.685874f, 7.711682f, 2.490394f, "Cldn 1.2 bookcase alcove volume");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_277))
	{
		iLocal_277 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.638f, -1195.732f, 49.183f, 0f, 0f, -174.5f, 11.3f, 2.547f, 4.649f, "volPrivAccessCldn2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_278))
	{
		iLocal_278 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2860.284f, -1201.147f, 50.01742f, 0f, 0f, 2.714306f, 4.378f, 7.759854f, 3.17446f, "volumeUpperShopArea");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_281))
	{
		iLocal_281 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2860.356f, -1203.012f, 49.65502f, 0f, 0f, 4.679204f, 5.030352f, 4.058296f, 2.342782f, "Behind counter vol");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_279))
	{
		iLocal_279 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2860.252f, -1200.362f, 49.71137f, 0f, 0f, 4.740993f, 5.170365f, 6.419256f, 2.465351f, "ILO area");
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_529))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_282))
		{
			iLocal_282 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2860.218f, -1203.546f, 49.93956f, 0f, 0f, 4.99931f, 1f, 1f, 1f, "Loot tin blocker");
		}
		else
		{
			uLocal_529 = PED::_0x4C39C95AE5DB1329(iLocal_282, false, 16);
		}
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rcm_calderon_12_basementhelper"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("rcm_calderon_12_basementhelper", 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	}
	if (!bLocal_864)
	{
		if (bParam4)
		{
			PED::_0x4759CC730F947C81();
		}
		__LIB_1__::func_206(vLocal_450, 8f, 6);
		PED::CLEAR_PED_NON_CREATION_AREA();
		bLocal_864 = true;
	}
	func_781();
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_818))
	{
		iLocal_818 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_453);
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_818))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_818);
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iLocal_818))
	{
	}
	if ((((((((((((VOLUME::_DOES_VOLUME_EXIST(iLocal_275) && VOLUME::_DOES_VOLUME_EXIST(iLocal_276)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_277)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_278)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_279)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_281)) && PED::_0x91A5F9CBEBB9D936(uLocal_529)) && func_689(uParam0, !bParam2)) && func_687(uParam0, bParam1)) && func_688(uParam0, bParam1)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rcm_calderon_12_basementhelper")) && bLocal_519) && (INTERIOR::IS_VALID_INTERIOR(iLocal_818) && INTERIOR::IS_INTERIOR_READY(iLocal_818)))
	{
		__LIB_4__::func_228(&uLocal_903);
		__LIB_6__::func_905(&uLocal_903);
		__LIB_1__::func_398(&uLocal_903, 0);
		__LIB_1__::func_406(&uLocal_903, 0);
		__LIB_1__::func_402(&uLocal_903, 0);
		__LIB_1__::func_393(&uLocal_903, 1);
		__LIB_1__::func_401(&uLocal_903, 1);
		__LIB_1__::func_398(&uLocal_903, 1);
		__LIB_1__::func_405(&uLocal_903, 0);
		__LIB_1__::func_396(&uLocal_903, 0);
		__LIB_1__::func_404(&uLocal_903, 0);
		__LIB_1__::func_397(&uLocal_903, 0);
		__LIB_2__::func_830(&uLocal_903, 1);
		__LIB_1__::func_407(&uLocal_903, 0);
		__LIB_1__::func_399(&uLocal_903, 0);
		__LIB_2__::func_906(&uLocal_903, BUILTIN::FLOOR(18f));
		__LIB_4__::func_228(&uLocal_874);
		__LIB_6__::func_905(&uLocal_874);
		__LIB_1__::func_398(&uLocal_874, 0);
		__LIB_1__::func_406(&uLocal_874, 0);
		__LIB_1__::func_402(&uLocal_874, 1);
		__LIB_1__::func_393(&uLocal_874, 1);
		__LIB_1__::func_401(&uLocal_874, 1);
		__LIB_1__::func_405(&uLocal_874, 0);
		__LIB_1__::func_396(&uLocal_874, 0);
		__LIB_1__::func_404(&uLocal_874, 0);
		__LIB_1__::func_397(&uLocal_874, 0);
		__LIB_2__::func_830(&uLocal_874, 0);
		__LIB_1__::func_407(&uLocal_874, 0);
		__LIB_1__::func_398(&uLocal_874, 0);
		__LIB_1__::func_399(&uLocal_874, 0);
		__LIB_4__::func_228(&uLocal_932);
		__LIB_6__::func_905(&uLocal_932);
		__LIB_1__::func_398(&uLocal_932, 0);
		__LIB_1__::func_406(&uLocal_932, 0);
		__LIB_1__::func_402(&uLocal_932, 0);
		__LIB_1__::func_393(&uLocal_932, 1);
		__LIB_1__::func_401(&uLocal_932, 0);
		__LIB_1__::func_405(&uLocal_932, 0);
		__LIB_1__::func_396(&uLocal_932, 0);
		__LIB_1__::func_404(&uLocal_932, 0);
		__LIB_1__::func_397(&uLocal_932, 0);
		__LIB_2__::func_830(&uLocal_932, 0);
		__LIB_1__::func_407(&uLocal_932, 0);
		__LIB_1__::func_398(&uLocal_932, 0);
		__LIB_1__::func_399(&uLocal_932, 0);
		func_790();
		MISC::CLEAR_AREA(vLocal_459, 5f, 2442122);
		if (bLocal_530 == 0)
		{
			__LIB_13__::func_108(41, 1, 1);
			__LIB_16__::func_409(41, 4, 1);
			if (__LIB_0__::func_30(1687619371))
			{
				OBJECT::_0x57C242543B7B8FB9(1687619371, 1);
			}
		}
		else
		{
			__LIB_9__::func_951(41, 1, 1);
		}
		func_794();
		__LIB_8__::func_794(41, 1);
		__LIB_11__::func_10(4, 1, 0);
		return true;
	}
	return false;
}

void func_336(var uParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if ((!__LIB_0__::func_272(iLocal_410, 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_410)) || PED::_IS_PED_HOGTIED(iLocal_410))
	{
		if (iLocal_58 != 8 && iLocal_58 != 5)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[0]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_410) && ENTITY::IS_ENTITY_DEAD(iLocal_410))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RCLDN1"), joaat("RCLDN1_FINDCAPTIVEPEACEFUL"), 0);
			}
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			ENTITY::_0x18FF3110CF47115D(iLocal_410, 7, 0);
			ENTITY::_0x18FF3110CF47115D(iLocal_410, 2, 0);
			func_347();
			func_796();
			func_797();
			func_339(4);
			if (!bLocal_502)
			{
				func_338(1, 0);
				bLocal_497 = true;
			}
			iLocal_58 = 8;
		}
	}
	if (bLocal_530 == 0 && iLocal_58 != 8)
	{
		iLocal_58 = 8;
	}
	iVar0 = -1;
	switch (iLocal_58)
	{
		case 0:
			iLocal_58 = 1;
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(iLocal_410, 53, true);
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_410, Global_35, 1, 1) || PED::_0xD0B7AEB56229D317(Global_35) == iLocal_410)
			{
				iLocal_58 = 6;
			}
			if (!bLocal_245)
			{
				iVar0 = func_359(&iLocal_410, &(Local_68[0 /*61*/]), 5f, &Local_192, 0f, 3, 0, "", 1, iLocal_279, 0, 2, -1082130432 /* Float: -1f */);
				iVar2 = __LIB_0__::func_17(Local_192[1 /*17*/].f_6);
				if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar2 /*18*/].f_3))
				{
					HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar2 /*18*/].f_3, joaat("INPUT_MELEE_ATTACK"));
				}
				if (iVar0 == 0)
				{
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(1, 0);
					}
					__LIB_2__::func_624(&Local_192, 0, 0, 1, 0);
					iLocal_58 = 2;
				}
				else
				{
					if ((__LIB_13__::func_230(iLocal_410, 0, &uLocal_874, &uLocal_902, 1, 0) && iLocal_58 != 6) || bLocal_508)
					{
						__LIB_6__::func_900("C2_GENERAL", 0, 0);
						__LIB_6__::func_900("C2_CLOSING", 0, 0);
						__LIB_6__::func_900("C2_STRANGE", 0, 0);
						if (!__LIB_2__::func_763(219, 0))
						{
							iLocal_410 = __LIB_2__::func_965(219, 0, 0, 0, 1, 1);
						}
						else if (!__LIB_1__::func_205(Global_35, iLocal_275, 1, 0))
						{
							func_347();
							iLocal_58 = 7;
						}
						else
						{
							func_347();
							iLocal_58 = 3;
						}
					}
					else if (func_342())
					{
						if (!__LIB_2__::func_763(219, 0))
						{
							iLocal_410 = __LIB_2__::func_965(219, 0, 0, 0, 1, 1);
						}
						else
						{
							func_347();
							iLocal_58 = 3;
						}
					}
					Jump @843; //curOff = 628
					if (!__LIB_6__::func_903("RCLDN_RSC2_IG1A") && !__LIB_8__::func_684("RCLDN_RSC2_IG1A"))
					{
						iVar0 = func_359(&iLocal_410, &(Local_130[0 /*61*/]), 5f, &Local_227, 0f, 3, 0, "CLD2_SHOPK", 1, iLocal_279, 0, 2, -1082130432 /* Float: -1f */);
					}
					else
					{
						__LIB_1__::func_148(&uLocal_828);
					}
					iVar3 = __LIB_0__::func_17(Local_227[0 /*17*/].f_6);
					if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar3 /*18*/].f_3))
					{
						HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar3 /*18*/].f_3, joaat("INPUT_MELEE_ATTACK"));
					}
					if (iVar0 == 0)
					{
						func_347();
						func_796();
						__LIB_1__::func_148(&uLocal_828);
						iLocal_58 = 3;
					}
					else if (__LIB_13__::func_230(iLocal_410, 0, &uLocal_874, &uLocal_902, 1, 0))
					{
						func_347();
						func_796();
						__LIB_1__::func_148(&uLocal_828);
						iLocal_58 = 3;
					}
					else if (func_342())
					{
						func_347();
						func_796();
						__LIB_1__::func_148(&uLocal_828);
						iLocal_58 = 3;
					}
					if (iLocal_54 == 4)
					{
						if (!__LIB_2__::func_763(219, 0))
						{
							iLocal_410 = __LIB_2__::func_965(219, 0, 0, 0, 1, 1);
						}
						else if (__LIB_12__::func_876(uParam0, "C2_CLERKFORCE", 0))
						{
							STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RCLDN1"), joaat("RCLDN1_FINDCAPTIVEPEACEFUL"), 1);
							iLocal_58 = 7;
						}
					}
					Jump @4405; //curOff = 909
					PED::SET_PED_RESET_FLAG(iLocal_410, 53, true);
					if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "RCLDN_RSC2_IG1A", 0))
					{
						__LIB_3__::func_515(&(Local_192[0 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_828);
						bLocal_245 = true;
						iLocal_58 = 1;
					}
					Jump @4405; //curOff = 970
					if (__LIB_0__::func_163(iLocal_410, joaat("SCRIPT_TASK_INTIMIDATED")))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
						PED::SET_PED_RESET_FLAG(iLocal_410, 49, true);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[0]))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[0]);
						}
						if (TASK::_0xF330A5C062B29BED(iLocal_410))
						{
						}
						else if (PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_410, 512, 0))
						{
						}
						else
						{
							__LIB_6__::func_900("C2_GENERAL", 0, 0);
							__LIB_6__::func_900("C2_CLOSING", 0, 0);
							__LIB_6__::func_900("C2_STRANGE", 0, 0);
							if (__LIB_5__::func_463())
							{
								__LIB_5__::func_20(1, 0);
							}
							bLocal_497 = false;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
							func_796();
							func_339(3);
							iLocal_58 = 4;
							Jump @1365; //curOff = 1128
							if (!__LIB_2__::func_763(219, 0))
							{
								PED::SET_PED_RESET_FLAG(iLocal_410, 53, true);
								iLocal_410 = __LIB_2__::func_965(219, 0, 0, 0, 1, 1);
								PED::_0x62FDAD5E01D2DD47(iLocal_410, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_410, 452, true);
								if (iLocal_56 == 8)
								{
									sVar1 = "RCLDN_RSC2_I3";
								}
								else
								{
									sVar1 = "C2_HOLDUP_I3";
								}
								PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), sVar1);
								PLAYER::_0x98CD760DE43B612E(PLAYER::PLAYER_ID(), sVar1);
							}
							else
							{
								TASK::_TASK_INTIMIDATED_2(iLocal_410, Global_35, 2, 0, 0, 0, 0, 1, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_410, 225, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_410, 130, false);
								AUDIO::STOP_PED_SPEAKING(iLocal_410, true);
								_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_410, 6, 0);
								Local_987.f_3 = Global_35;
								Local_987.f_7 = -1;
								Local_987.f_8 = 4;
								Local_987.f_19 = 3;
								Local_987.f_21 = 3;
								Local_987.f_17 = 0;
								Local_987.f_18 = 0;
								_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_410, &Local_987);
								STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RCLDN1"), joaat("RCLDN1_FINDCAPTIVEPEACEFUL"), 0);
							}
							Jump @4405; //curOff = 1365
							func_802();
							PED::SET_PED_RESET_FLAG(Global_35, 31, true);
							PED::SET_PED_RESET_FLAG(iLocal_410, 49, true);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
							if (!__LIB_0__::func_163(iLocal_410, joaat("SCRIPT_TASK_INTIMIDATED")) && !TASK::_0xF330A5C062B29BED(iLocal_410))
							{
								TASK::_TASK_INTIMIDATED_2(iLocal_410, Global_35, 2, 0, 0, 0, 0, 1, 0);
							}
							switch (Local_61)
							{
								case 0:
									if (!Local_61.f_1)
									{
										PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
										if (iLocal_56 == 8)
										{
											sVar1 = "RCLDN_RSC2_I1";
										}
										else
										{
											sVar1 = "C2_HOLDUP_I1";
										}
										if (__LIB_5__::func_463())
										{
											__LIB_5__::func_20(0, 0);
										}
										else
										{
											if (__LIB_12__::func_876(uParam0, sVar1, 0))
											{
												Local_61.f_1 = 1;
												if (MAP::DOES_BLIP_EXIST(iLocal_411))
												{
													MAP::REMOVE_BLIP(&iLocal_411);
												}
												if (!MAP::DOES_BLIP_EXIST(iLocal_412))
												{
													iLocal_412 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_410);
												}
												else
												{
													MAP::_0xBD62D98799A3DAF0(iLocal_412, joaat("BLIP_STYLE_ENEMY"));
												}
												MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_412, "CLD2_SHOPK");
												if (iLocal_53 == 2)
												{
													func_338(3, 1);
												}
												else
												{
													func_338(3, 0);
												}
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
											}
											Jump @1828; //curOff = 1654
											if (!Local_61.f_2)
											{
												if (__LIB_5__::func_463())
												{
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
												}
												Local_61.f_2 = 1;
											}
											else
											{
												if (__LIB_5__::func_463())
												{
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
												}
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
												ENTITY::_SET_ENTITY_HEALTH(iLocal_410, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_410, false), 0);
												Local_61 = 1;
												iVar4 = __LIB_0__::func_17(Local_192[1 /*17*/].f_6);
												if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar4 /*18*/].f_3))
												{
													HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar4 /*18*/].f_3, joaat("INPUT_MELEE_ATTACK"));
												}
											}
											Jump @3286; //curOff = 1828
											if (!Local_61.f_3)
											{
												PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
												if (__LIB_5__::func_463())
												{
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
													PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
												}
												else
												{
													if (iLocal_56 == 8)
													{
														sVar1 = "RCLDN_RSC2_I2";
													}
													else
													{
														sVar1 = "C2_HOLDUP_I2";
													}
													if (__LIB_12__::func_876(uParam0, sVar1, 0))
													{
														Local_61.f_3 = 1;
													}
													Jump @2509; //curOff = 1921
													if (!Local_61.f_4)
													{
														PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
														if (__LIB_5__::func_463())
														{
															PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
															PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
														}
														else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_410, Global_35, 0, 0) || PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iLocal_410)
														{
															ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
														}
														else
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_410, false);
															PED::_0x24C82EF607105FAA(iLocal_410, joaat("SCRIPTEDTIMIDROB"));
															PED::SET_PED_CONFIG_FLAG(iLocal_410, 315, false);
															PED::SET_PED_CONFIG_FLAG(iLocal_410, 431, true);
															PED::SET_PED_CONFIG_FLAG(iLocal_410, 178, true);
															PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 3, 0, 1);
															PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 0, 0);
															PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 2, 0);
															PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 1, 0);
															Local_61.f_4 = 1;
															Jump @2509; //curOff = 2130
															if (__LIB_5__::func_463())
															{
																PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
															}
															else
															{
																PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
																PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
																PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 0, 0);
																PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 2, 0);
																PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 2, 0);
																PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 1, 0);
																PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 1, 0);
																if (PED::GET_PED_CONFIG_FLAG(iLocal_410, 130, true))
																{
																	PED::SET_PED_CONFIG_FLAG(iLocal_410, 130, false);
																}
																if (!bLocal_510)
																{
																	if (iLocal_53 == 2)
																	{
																		func_338(3, 1);
																	}
																	else
																	{
																		func_338(3, 0);
																	}
																	bLocal_510 = true;
																}
																if (((((WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_410, joaat("WEAPON_UNARMED"), 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_410, Global_35, 0, 0)) || PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iLocal_410) || PED::_0x285D36C5C72B0569(Global_35) < 0.5f) || __LIB_14__::func_21()) || __LIB_2__::func_401(iLocal_410, 1, 0, 0, 0, 0))
																{
																	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
																	ENTITY::_SET_ENTITY_HEALTH(iLocal_410, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_410, false), 0);
																	__LIB_6__::func_786(&(Local_130[0 /*61*/]), 0);
																	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_410, 7, 1, 1);
																	PED::SET_PED_CONFIG_FLAG(iLocal_410, 431, false);
																	__LIB_5__::func_20(0, 0);
																	Local_61 = 2;
																}
																iVar5 = __LIB_0__::func_17(Local_192[1 /*17*/].f_6);
																if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar5 /*18*/].f_3))
																{
																	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar5 /*18*/].f_3, joaat("INPUT_MELEE_ATTACK"));
																}
																Jump @3286; //curOff = 2509
																PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
																if (!Local_61.f_5)
																{
																	if (iLocal_56 == 8)
																	{
																		sVar1 = "RCLDN_RSC2_I3";
																	}
																	else
																	{
																		sVar1 = "C2_HOLDUP_I3";
																	}
																	if (__LIB_12__::func_876(uParam0, sVar1, 0))
																	{
																		Local_61.f_5 = 1;
																	}
																}
																else
																{
																	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
																	ENTITY::_SET_ENTITY_HEALTH(iLocal_410, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_410, false), 0);
																	Local_987.f_3 = Global_35;
																	Local_987.f_7 = -1;
																	Local_987.f_8 = 4;
																	Local_987.f_19 = 3;
																	Local_987.f_21 = 3;
																	Local_987.f_17 = 0;
																	Local_987.f_18 = 0;
																	_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_410, &Local_987);
																	Local_61 = 3;
																}
																Jump @3286; //curOff = 2653
																PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
																if (AUDIO::_0x1ECC76792F661CF5("C2_HOLDUP_I3"))
																{
																	if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("C2_HOLDUP_I3") >= 2)
																	{
																		bLocal_502 = true;
																		bLocal_491 = true;
																		if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && !PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
																		{
																			PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_552, 0);
																			PLAYER::_0x6ECFC621A168424C(iLocal_552, iLocal_552, 0, 0);
																		}
																		if (ENTITY::DOES_ENTITY_EXIST(iLocal_551) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
																		{
																			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
																		}
																	}
																}
																else if (AUDIO::_0x1ECC76792F661CF5("RCLDN_RSC2_I3"))
																{
																	if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RCLDN_RSC2_I3") >= 1)
																	{
																		bLocal_502 = true;
																		bLocal_491 = true;
																		if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && !PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
																		{
																			PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_552, 0);
																			PLAYER::_0x6ECFC621A168424C(iLocal_552, iLocal_552, 0, 0);
																		}
																		if (ENTITY::DOES_ENTITY_EXIST(iLocal_551) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
																		{
																			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
																		}
																	}
																}
																if (__LIB_5__::func_463())
																{
																	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
																}
																else
																{
																	if (bLocal_502)
																	{
																		bLocal_491 = true;
																		if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && !PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
																		{
																			PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_552, 0);
																			PLAYER::_0x6ECFC621A168424C(iLocal_552, iLocal_552, 0, 0);
																		}
																		if (ENTITY::DOES_ENTITY_EXIST(iLocal_551) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
																		{
																			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
																		}
																		if (((!__LIB_8__::func_684("RCLDN_RSC2_I3") && !__LIB_8__::func_684("C2_HOLDUP_I3")) && !__LIB_6__::func_903("RCLDN_RSC2_I3")) && !__LIB_6__::func_903("C2_HOLDUP_I3"))
																		{
																			func_338(5, 0);
																			if (!MAP::DOES_BLIP_EXIST(iLocal_412))
																			{
																				iLocal_412 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_410);
																			}
																			else
																			{
																				MAP::_0xBD62D98799A3DAF0(iLocal_412, joaat("BLIP_STYLE_ENEMY"));
																			}
																			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_410);
																			func_797();
																			__LIB_2__::func_279(iLocal_410, 1);
																			PED::SET_PED_CONFIG_FLAG(iLocal_410, 21, true);
																			PED::SET_PED_CONFIG_FLAG(iLocal_410, 178, false);
																			PED::SET_PED_CONFIG_FLAG(iLocal_410, 431, false);
																			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_410, true);
																			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_412, "CLD2_SHOPK");
																			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_961);
																			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_961, joaat("PLAYER"));
																			PED::_0xAE6004120C18DF97(iLocal_410, 0, 1);
																			ENTITY::_0x18FF3110CF47115D(iLocal_410, 0, 1);
																			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
																			PED::_0xA180FBD502A03125(iLocal_410, 0.9f, 0.75f);
																			__LIB_1__::func_148(&uLocal_837);
																			iLocal_58 = 5;
																		}
																	}
																}
															}
														}
														if (iLocal_54 == 4)
														{
															if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "C2_CLERKFORCE", 0))
															{
																iLocal_58 = 7;
															}
														}
														Jump @4405; //curOff = 3319
														if (!ENTITY::IS_ENTITY_DEAD(iLocal_410) && !_NAMESPACE29::_0x6098139150DCC745(iLocal_410, 6))
														{
															Local_987.f_3 = Global_35;
															Local_987.f_7 = -1;
															Local_987.f_8 = 4;
															Local_987.f_19 = 3;
															Local_987.f_21 = 3;
															Local_987.f_17 = 0;
															Local_987.f_18 = 0;
															_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_410, &Local_987);
														}
														PED::SET_PED_RESET_FLAG(Global_35, 31, true);
														PED::SET_PED_RESET_FLAG(iLocal_410, 49, true);
														if ((!__LIB_0__::func_163(iLocal_410, joaat("SCRIPT_TASK_INTIMIDATED")) && !TASK::_0xF330A5C062B29BED(iLocal_410)) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) != iLocal_410)
														{
															TASK::_TASK_INTIMIDATED_2(iLocal_410, Global_35, 2, 0, 0, 0, 0, 1, 0);
														}
														if (__LIB_0__::func_264(&uLocal_837) > 7.5f && iLocal_870 < 3)
														{
															if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "C2_CLERKIDLE", 0))
															{
																__LIB_1__::func_148(&uLocal_837);
																iLocal_870++;
															}
														}
														if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417) && PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_417)) && !__LIB_5__::func_463()) && !bLocal_505)
														{
															if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "RCLDN_SHOP_ROB", 0))
															{
																bLocal_505 = true;
															}
														}
														if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_275) && !__LIB_1__::func_205(Global_35, iLocal_275, 1, 0)) || iLocal_55 > 0)
														{
															bLocal_509 = true;
															PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
															func_797();
															PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
															PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 3, 0, 0);
															func_339(4);
															func_347();
															iLocal_58 = 7;
														}
														if (!bLocal_504)
														{
															if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iLocal_410 || PED::_0xD0B7AEB56229D317(Global_35) == iLocal_410)
															{
																if (__LIB_5__::func_463() && !__LIB_6__::func_903("C2_TOKNOCK"))
																{
																	__LIB_5__::func_20(0, 0);
																}
																if (__LIB_12__::func_876(uParam0, "C2_TOKNOCK", 0))
																{
																	bLocal_504 = true;
																}
															}
														}
														if ((ENTITY::IS_ENTITY_DEAD(iLocal_410) || FIRE::IS_ENTITY_ON_FIRE(iLocal_410)) || PED::_IS_PED_HOGTIED(iLocal_410))
														{
															if (MAP::DOES_BLIP_EXIST(iLocal_412))
															{
																MAP::REMOVE_BLIP(&iLocal_412);
															}
															TASK::TASK_CLEAR_LOOK_AT(Global_35);
															UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
															PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
															ENTITY::_0x18FF3110CF47115D(iLocal_410, 7, 0);
															ENTITY::_0x18FF3110CF47115D(iLocal_410, 2, 0);
															TASK::CLEAR_PED_TASKS(iLocal_410, true, false);
															func_339(4);
															PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
															PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 3, 0, 0);
															func_347();
															iLocal_58 = 8;
														}
														Jump @4405; //curOff = 3937
														if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[0], false))
														{
															TASK::TASK_CLEAR_LOOK_AT(Global_35);
															PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
															{
																ENTITY::_0x18FF3110CF47115D(iLocal_410, 7, 0);
																ENTITY::_0x18FF3110CF47115D(iLocal_410, 2, 0);
															}
															if (__LIB_0__::func_272(iLocal_410, 0))
															{
																TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_410, Global_35, 3, 0, -1f, -1, 0);
															}
															ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[0]);
														}
														func_796();
														iLocal_58 = 7;
														Jump @4405; //curOff = 4062
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_410) && !PED::IS_PED_FLEEING(iLocal_410))
														{
															TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_410, Global_35, 3, 0, -1f, -1, 0);
															if (MAP::DOES_BLIP_EXIST(iLocal_412))
															{
																MAP::REMOVE_BLIP(&iLocal_412);
															}
															func_347();
														}
														else if (ENTITY::DOES_ENTITY_EXIST(iLocal_410) && PED::IS_PED_FLEEING(iLocal_410))
														{
															if (__LIB_0__::func_665(Global_35, iLocal_410, 1, 1) < 10f && !__LIB_0__::func_393(Global_35, iLocal_275, 0, 1))
															{
																if (!__LIB_0__::func_75(&uLocal_840) || __LIB_0__::func_264(&uLocal_840) > 7.5f)
																{
																	if (__LIB_12__::func_876(uParam0, "RCLDN_SHOP_CHSE", 0))
																	{
																		__LIB_1__::func_148(&uLocal_840);
																	}
																}
															}
															if (__LIB_12__::func_610(iLocal_410, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 0, -1082130432 /* Float: -1f */))
															{
																PED::SET_PED_KEEP_TASK(iLocal_410, true);
																ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_410);
																iLocal_58 = 8;
															}
														}
														Jump @4405; //curOff = 4289
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
														{
															if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_410, joaat("SCRIPT_TASK_INTIMIDATED"), true) == 1 || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_410, joaat("SCRIPT_TASK_INTIMIDATED"), true) == 0 && !PED::IS_PED_FATALLY_INJURED(iLocal_410)))
															{
																TASK::CLEAR_PED_TASKS(iLocal_410, true, false);
															}
														}
														if ((bLocal_502 && !bLocal_509) && !__LIB_5__::func_463())
														{
															bLocal_509 = __LIB_12__::func_876(uParam0, "C2_STAYDOWN", 0);
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
					}
				}
			}
			default:
				break;
	}
}

void func_338(int iParam0, bool bParam1)
{
	iLocal_53 = iParam0;
	iLocal_492 = 0;
	if (!bParam1)
	{
		iLocal_493 = 0;
	}
	else
	{
		iLocal_493 = 1;
	}
}

void func_339(int iParam0)
{
	iLocal_1015 = iParam0;
}

void func_340(var uParam0)
{
	var uVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_410))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && iLocal_58 <= 1)
			{
				if (((!__LIB_0__::func_75(&uLocal_834) || __LIB_3__::func_135(&uLocal_834) > 5000) && iLocal_867 < 3) && __LIB_0__::func_665(Global_35, iLocal_410, 1, 1) <= 3f)
				{
					if (__LIB_12__::func_876(uParam0, "RCLDN_SHOP_FEAR", 0))
					{
						__LIB_1__::func_148(&uLocal_834);
						iLocal_867++;
						if (iLocal_867 == 1)
						{
							TASK::_0xE7FA07624574B79A(iLocal_410, Global_35, 3, 3, 40f, 1, 0, 0, 0);
						}
						bLocal_499 = true;
					}
				}
			}
		}
		else if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && iLocal_58 <= 1)
			{
				if (((!__LIB_0__::func_75(&uLocal_831) || __LIB_3__::func_135(&uLocal_831) > 5000) && iLocal_866 < 2) && __LIB_0__::func_665(Global_35, iLocal_410, 1, 1) <= 3f)
				{
					if (__LIB_12__::func_876(uParam0, "RCLDN_SHOP_WEP", 0))
					{
						__LIB_1__::func_148(&uLocal_831);
						iLocal_866++;
						if (iLocal_866 == 1)
						{
							TASK::_0xE7FA07624574B79A(iLocal_410, Global_35, 2, 3, 40f, 1, 0, 0, 0);
						}
						bLocal_499 = true;
					}
				}
			}
		}
		else
		{
			if (TASK::_0x916B8E075ABC8B4E(iLocal_410, 1))
			{
				TASK::_0x541E5B41DCA45828(iLocal_410, 3, 0);
			}
			if (!bLocal_499 && iLocal_58 <= 1)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_410, 1, 1) < 6.5f && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "C2_CLERKWELCOME", 0))
					{
						bLocal_499 = true;
						__LIB_1__::func_148(&uLocal_828);
					}
				}
			}
			else if (iLocal_58 <= 1 && iLocal_56 <= 1)
			{
				if (!__LIB_13__::func_211(iLocal_410, 1097859072 /* Float: 15f */))
				{
					if ((__LIB_0__::func_264(&uLocal_828) > 8f && !__LIB_5__::func_463()) && iLocal_869 < 3)
					{
						if (__LIB_12__::func_876(uParam0, "C2_GENERAL", 0))
						{
							__LIB_1__::func_148(&uLocal_828);
							iLocal_869++;
						}
					}
					else if ((__LIB_0__::func_264(&uLocal_828) > 8f && !__LIB_5__::func_463()) && iLocal_869 == 3)
					{
						if (__LIB_12__::func_876(uParam0, "C2_CLOSING", 0))
						{
							__LIB_1__::func_148(&uLocal_828);
							iLocal_869++;
						}
					}
				}
				else
				{
					if (__LIB_8__::func_684("C2_GENERAL"))
					{
						__LIB_6__::func_900("C2_GENERAL", 1, 0);
					}
					if (__LIB_8__::func_684("C2_CLOSING"))
					{
						__LIB_6__::func_900("C2_CLOSING", 1, 0);
					}
					bLocal_508 = true;
				}
			}
			if (iLocal_58 <= 1 && iLocal_56 >= 8)
			{
				if (!__LIB_13__::func_211(iLocal_410, 1097859072 /* Float: 15f */))
				{
					if (!bLocal_503)
					{
						if (__LIB_0__::func_264(&uLocal_828) > 8f && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "C2_STRANGE", 0))
							{
								bLocal_503 = true;
							}
						}
						else
						{
							if (__LIB_0__::func_264(&uLocal_828) < 8f)
							{
							}
							if (__LIB_5__::func_463())
							{
							}
						}
					}
				}
				else
				{
					if (__LIB_8__::func_684("C2_STRANGE"))
					{
						__LIB_6__::func_900("C2_STRANGE", 1, 0);
					}
					bLocal_508 = true;
				}
			}
		}
	}
}

void func_341(var uParam0)
{
	int iVar0;
	func_810();
	if (bLocal_491)
	{
		if (iLocal_56 < 9)
		{
			__LIB_6__::func_916(&iLocal_531);
			iLocal_56 = 9;
		}
	}
	switch (iLocal_56)
	{
		case 0:
			if (func_811())
			{
				if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
				{
					PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_551, 0);
					PLAYER::_0x6ECFC621A168424C(iLocal_551, iLocal_551, 0, 0);
				}
				else
				{
					iLocal_56 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_139(iLocal_531))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_551, true, false), 0.5f))
				{
					if (iLocal_58 <= 1 || iLocal_58 >= 8)
					{
						iLocal_531 = __LIB_2__::func_512("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), iLocal_551, 1, 0, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						__LIB_2__::func_450(iLocal_531, 1.5f, 1);
						__LIB_1__::func_574(&iLocal_531, iLocal_551);
						__LIB_1__::func_522(iLocal_531, 13, 1, 1);
					}
				}
			}
			else
			{
				if (__LIB_1__::func_264(iLocal_531, 1))
				{
					__LIB_3__::func_807();
					__LIB_1__::func_26(1);
					if (__LIB_1__::func_499())
					{
						__LIB_0__::func_101();
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				}
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_551, true, false), 0.5f))
				{
					iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 1f, 2, 1, 0, "CLD2_SCRATCHES", 0);
					HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_531), iLocal_272, 0);
				}
				else
				{
					__LIB_1__::func_281(&iLocal_531, 1, 1);
				}
			}
			if (__LIB_0__::func_567(iLocal_531, 1) && (iLocal_58 == 1 || iLocal_58 == 8))
			{
				HUD::_HIDE_HUD_COMPONENT(724769646);
				__LIB_12__::func_773(0, 1, 1, 1);
				if (func_670(1, 0, "pbl_InspectFloor"))
				{
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(1, 0);
					}
					__LIB_2__::func_450(iLocal_531, 4.5f, 1);
					__LIB_1__::func_382(iLocal_531, 0, 1);
					__LIB_1__::func_683(&iVar0, 8);
					iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHES", iVar0);
					func_339(2);
					iLocal_56 = 2;
				}
			}
			else
			{
				if (func_670(1, 0, "pbl_InspectFloor"))
				{
				}
				if (((!bLocal_506 && __LIB_0__::func_94(Global_35, vLocal_447, 1) <= 1f) && __LIB_0__::func_139(iLocal_531)) && __LIB_1__::func_264(iLocal_531, 1))
				{
					PAD::SET_PAD_SHAKE(0, 200, 125);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_551, -1, 0, 51, 0);
					bLocal_506 = true;
				}
				else if (((bLocal_506 && __LIB_0__::func_94(Global_35, vLocal_447, 1) > 1f) && __LIB_0__::func_139(iLocal_531)) && !__LIB_1__::func_264(iLocal_531, 1))
				{
					bLocal_506 = false;
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
				}
				if ((((((!bLocal_500 && VOLUME::_DOES_VOLUME_EXIST(iLocal_277)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_277, true, 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_410)) && !PED::_IS_PED_HOGTIED(iLocal_410)) && !__LIB_5__::func_463()) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_410))
				{
					bLocal_500 = __LIB_12__::func_876(uParam0, "C2_CLERKWARN", 0);
				}
				if (iLocal_58 > 1 && iLocal_58 < 8)
				{
					if (__LIB_0__::func_139(iLocal_531))
					{
						__LIB_1__::func_281(&iLocal_531, 1, 1);
					}
				}
			}
			break;
		case 2:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			__LIB_12__::func_773(0, 1, 1, 1);
			__LIB_1__::func_382(iLocal_531, 0, 1);
			__LIB_1__::func_683(&iVar0, 8);
			iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHES", iVar0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!__LIB_0__::func_163(Global_35, 716706914))
				{
					if (!__LIB_0__::func_75(&uLocal_852))
					{
						__LIB_1__::func_148(&uLocal_852);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					else if (__LIB_1__::func_871(&uLocal_852) > 2000)
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						__LIB_1__::func_148(&uLocal_852);
					}
				}
			}
			else if (!bLocal_507)
			{
				if (func_824(1))
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_262[1], "ARTHUR", "pbl_InspectFloor", 1069379748 /* Float: 1.48f */, 1, 1, 20000, -1082130432 /* Float: -1f */);
					bLocal_507 = true;
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[1]) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_262[1]))
			{
				__LIB_0__::func_7(&(Local_252.f_3), 2);
				iLocal_56 = 3;
			}
			break;
		case 3:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			__LIB_12__::func_773(0, 1, 1, 1);
			if (!__LIB_0__::func_75(&uLocal_846))
			{
				__LIB_1__::func_148(&uLocal_846);
				__LIB_1__::func_382(iLocal_531, 0, 1);
				__LIB_1__::func_683(&iVar0, 8);
				iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHES", iVar0);
			}
			else if (__LIB_3__::func_135(&uLocal_846) < 2500)
			{
				__LIB_1__::func_382(iLocal_531, 0, 1);
				__LIB_1__::func_683(&iVar0, 8);
				iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHES", iVar0);
			}
			else
			{
				__LIB_5__::func_437(iLocal_551, "CLD2_SCRATCHBK", 1);
				__LIB_1__::func_382(iLocal_531, 0, 1);
				__LIB_1__::func_683(&iVar0, 8);
				iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHBK", iVar0);
			}
			if ((((!ENTITY::IS_ENTITY_DEAD(iLocal_410) && !PED::_IS_PED_HOGTIED(iLocal_410)) && !__LIB_5__::func_463()) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_410)) && !bLocal_501)
			{
				if (__LIB_12__::func_876(uParam0, "C2_CLERKSCRATCH", 0))
				{
					bLocal_501 = true;
				}
			}
			else if (__LIB_5__::func_463() || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_410))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_551))
			{
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[1]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_262[1], false))
			{
				iLocal_56 = 4;
			}
			break;
		case 4:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			__LIB_12__::func_773(0, 1, 1, 1);
			__LIB_1__::func_382(iLocal_531, 0, 1);
			__LIB_1__::func_683(&iVar0, 8);
			iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHBK", iVar0);
			if ((ENTITY::IS_ENTITY_DEAD(iLocal_410) || PED::_IS_PED_HOGTIED(iLocal_410)) || __LIB_12__::func_876(uParam0, "C2_CLERKREACT", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_551) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
				{
					PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
				}
				Local_962.f_3 = iLocal_410;
				Local_962.f_7 = 3000;
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_962);
				bLocal_245 = true;
				bLocal_497 = false;
				if (MAP::DOES_BLIP_EXIST(iLocal_411))
				{
					MAP::REMOVE_BLIP(&iLocal_411);
				}
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_410) && !PED::_IS_PED_HOGTIED(iLocal_410))
				{
					func_338(2, 0);
				}
				else
				{
					func_338(4, 0);
					iLocal_54 = 2;
				}
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				__LIB_1__::func_148(&uLocal_828);
				iLocal_56 = 8;
			}
			break;
		case 8:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_277) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_277, true, 0))
			{
				if (__LIB_0__::func_139(iLocal_531) && iLocal_54 < 2)
				{
					__LIB_1__::func_382(iLocal_531, 0, 1);
					__LIB_1__::func_683(&iVar0, 8);
					iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_551, 4.5f, 1, 1, 0, "CLD2_SCRATCHBK", iVar0);
				}
				else if (iLocal_54 < 2)
				{
				}
				if (!__LIB_0__::func_75(&uLocal_849))
				{
					__LIB_1__::func_148(&uLocal_849);
				}
				else if (__LIB_1__::func_871(&uLocal_849) > 6500 && iLocal_54 < 2)
				{
					__LIB_1__::func_281(&iLocal_531, 1, 1);
					iLocal_54 = 2;
				}
			}
			else if (__LIB_0__::func_75(&uLocal_849))
			{
				__LIB_0__::func_37(&uLocal_849);
			}
			break;
	}
}

bool func_342()
{
	if (bLocal_514)
	{
		return true;
	}
	if (!func_343())
	{
		return false;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417) && PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_417))
	{
		if (iLocal_59 == 0)
		{
			iLocal_59 = 5;
		}
		bLocal_514 = true;
	}
	return false;
}

bool func_343()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417))
	{
		return true;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_818))
	{
		return false;
	}
	if (iLocal_418 > 5)
	{
		return false;
	}
	if (!__LIB_0__::func_75(&uLocal_419))
	{
		__LIB_0__::func_268(&uLocal_419, 5f);
	}
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("PROP_PLAYER_CASH_REGISTER"), true);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417) && __LIB_0__::func_264(&uLocal_419) > 5f)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417))
		{
			iLocal_417 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_453, joaat("PROP_PLAYER_CASH_REGISTER"), 0.75f, 0, false);
			__LIB_1__::func_148(&uLocal_419);
		}
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417))
		{
			iLocal_418++;
			if (iLocal_418 > 5)
			{
			}
		}
	}
	return false;
}

void func_344()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417))
	{
		if (TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_417))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_417, false);
		}
	}
}

bool func_346(var uParam0)
{
	int iVar0;
	float fVar1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false))
	{
		if (((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_262[2]) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Success")) && iLocal_261 < 4) && iLocal_54 < 6)
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[2]);
			__LIB_1__::func_281(&iLocal_534, 1, 1);
			__LIB_1__::func_281(&iLocal_532, 1, 1);
			__LIB_1__::func_281(&iLocal_533, 1, 1);
			__LIB_0__::func_37(&uLocal_548);
			__LIB_4__::func_353();
			iLocal_54 = 5;
			if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_547);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_547);
			iLocal_261 = 0;
		}
	}
	switch (iLocal_54)
	{
		case 0:
			break;
		case 2:
			if (func_670(2, 0, "pbl_HardOpen_Enter"))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_410))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_413))
					{
						iLocal_413 = __LIB_4__::func_983(408396114, vLocal_471, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && !PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
					{
						PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_552, 0);
						PLAYER::_0x6ECFC621A168424C(iLocal_552, iLocal_552, 0, 0);
					}
				}
				if (iLocal_58 == 4 || iLocal_58 == 5)
				{
					if (__LIB_0__::func_139(iLocal_532))
					{
						__LIB_1__::func_281(&iLocal_532, 1, 1);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_413))
					{
						MAP::REMOVE_BLIP(&iLocal_413);
					}
				}
				else if (!__LIB_0__::func_139(iLocal_532))
				{
					iLocal_532 = __LIB_1__::func_282("CLD2_FORCEDOOR", joaat("INPUT_CONTEXT_Y"), vLocal_471, 1f, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					if (__LIB_0__::func_139(iLocal_532))
					{
						iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_552, 1f, 2, 1, 0, "CLD2_BOOKCASE", 0);
						HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_532), iLocal_272, 0);
					}
				}
				else
				{
					iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_552, 1f, 2, 1, 0, "CLD2_BOOKCASE", 0);
					HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_532), iLocal_272, 0);
					if (__LIB_1__::func_264(iLocal_532, 1))
					{
						__LIB_3__::func_807();
						__LIB_1__::func_26(1);
						if (__LIB_1__::func_499())
						{
							__LIB_0__::func_101();
						}
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					}
					if (__LIB_5__::func_777(iLocal_532, 1))
					{
						PAD::_SET_CONTROL_CONTEXT(4, joaat("NOPLAYERCONTROL"));
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 2860.146f, -1195.863f, 47.9857f, 1f, 20000, 0.1f, 0, 96.9559f);
						__LIB_1__::func_281(&iLocal_532, 1, 1);
						if (MAP::DOES_BLIP_EXIST(iLocal_413))
						{
							MAP::REMOVE_BLIP(&iLocal_413);
						}
						if (iLocal_53 != 4)
						{
							func_338(4, 0);
						}
						func_797();
						iLocal_547 = AUDIO::GET_SOUND_ID();
						HUD::_HIDE_HUD_COMPONENT(724769646);
						iLocal_54 = 3;
					}
				}
			}
			break;
		case 3:
			PAD::_SET_CONTROL_CONTEXT(4, joaat("NOPLAYERCONTROL"));
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
				{
					if (!__LIB_0__::func_163(Global_35, 716706914))
					{
						if (!__LIB_0__::func_75(&uLocal_852))
						{
							__LIB_1__::func_148(&uLocal_852);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						}
						else if (__LIB_1__::func_871(&uLocal_852) > 2000)
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
							__LIB_1__::func_148(&uLocal_852);
						}
					}
				}
				else if (PED::_IS_PED_CARRYING(Global_35))
				{
					if (!__LIB_0__::func_163(Global_35, -208384378))
					{
						if (__LIB_3__::func_417(Global_35))
						{
							iVar0 = __LIB_0__::func_147();
						}
						else
						{
							iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
						}
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, 2861.69f, -1195.84f, 47.99f, 1f, 8);
					}
				}
				else if (!__LIB_0__::func_163(Global_35, -208384378) && func_686())
				{
					__LIB_0__::func_37(&uLocal_852);
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Enter"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[2], "pbl_HardOpen_Loops") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[2], "pbl_HardOpen_Loops"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_262[2]) >= 0.985f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[2], "pbl_HardOpen_Loops", true);
							}
						}
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_262[2]))
						{
							__LIB_1__::func_281(&iLocal_534, 1, 1);
							__LIB_1__::func_281(&iLocal_532, 1, 1);
							__LIB_1__::func_281(&iLocal_533, 1, 1);
							__LIB_0__::func_37(&uLocal_548);
							__LIB_4__::func_353();
							if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
							{
								AUDIO::_0x3210BCB36AF7621B(iLocal_547);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_553))
							{
								if (CAM::IS_CAM_ACTIVE(iLocal_553))
								{
									CAM::SET_CAM_ACTIVE(iLocal_553, false);
									CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
								}
								CAM::DESTROY_CAM(iLocal_553, false);
							}
							AUDIO::RELEASE_SOUND_ID(iLocal_547);
							iLocal_261 = 0;
							iLocal_54 = 5;
							return false;
						}
					}
					else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Loops"))
					{
						PAD::_SET_CONTROL_CONTEXT(4, joaat("CALDERON1FORCEDOOR"));
						iLocal_54 = 4;
					}
				}
			}
			break;
		case 4:
			PAD::_SET_CONTROL_CONTEXT(4, joaat("CALDERON1FORCEDOOR"));
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_262[2]) && iLocal_261 < 4)
			{
				__LIB_1__::func_281(&iLocal_534, 1, 1);
				__LIB_1__::func_281(&iLocal_532, 1, 1);
				__LIB_1__::func_281(&iLocal_533, 1, 1);
				__LIB_0__::func_37(&uLocal_548);
				__LIB_4__::func_353();
				if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
				{
					AUDIO::_0x3210BCB36AF7621B(iLocal_547);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_553))
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_553))
					{
						CAM::SET_CAM_ACTIVE(iLocal_553, false);
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					}
					CAM::DESTROY_CAM(iLocal_553, false);
				}
				AUDIO::RELEASE_SOUND_ID(iLocal_547);
				iLocal_261 = 0;
				iLocal_54 = 5;
				return false;
			}
			switch (iLocal_261)
			{
				case 0:
					if (!__LIB_0__::func_139(iLocal_532))
					{
						iLocal_532 = __LIB_1__::func_746("CLD2_PULLCTX", joaat("INPUT_MINIGAME_ACTION_DOWN"), 3, 570, 4000, 25, 3f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_1__::func_522(iLocal_532, 14, 1, 1);
						__LIB_1__::func_522(iLocal_532, 10, 1, 1);
						__LIB_1__::func_522(iLocal_532, 11, 1, 1);
						__LIB_14__::func_235(iLocal_532, "Cld1Pull");
					}
					else
					{
						iLocal_261 = 2;
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[2], "pbl_HardOpen_Fail");
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[2], "pbl_HardOpen_Success");
						BUILTIN::SETTIMERA(0);
						__LIB_1__::func_148(&uLocal_548);
					}
					break;
				case 2:
					if (__LIB_0__::func_139(iLocal_532))
					{
						if (func_833(&iLocal_532))
						{
							iLocal_261 = 1;
						}
					}
					else
					{
						iLocal_261 = 0;
					}
					break;
				case 1:
					if (!__LIB_0__::func_139(iLocal_533))
					{
						iLocal_533 = __LIB_1__::func_746("CLD2_FORCECTX", joaat("INPUT_CONTEXT_ACTION"), 9, 570, 4000, 15, 2f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_1__::func_522(iLocal_533, 14, 1, 1);
						__LIB_14__::func_235(iLocal_533, "Cld1Force");
					}
					else if (!func_833(&iLocal_532))
					{
						if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
						{
							AUDIO::_0x3210BCB36AF7621B(iLocal_547);
						}
						__LIB_1__::func_281(&iLocal_533, 1, 1);
						__LIB_0__::func_37(&uLocal_548);
						iLocal_261 = 0;
					}
					else
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_A")))
						{
							__LIB_1__::func_148(&uLocal_548);
						}
						if (__LIB_4__::func_442(iLocal_533, 1))
						{
							__LIB_1__::func_515(iLocal_533, 1);
						}
						fVar1 = 0f;
						if (__LIB_0__::func_75(&uLocal_548) && __LIB_1__::func_871(&uLocal_548) > 500)
						{
							if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
							{
								AUDIO::_0x3210BCB36AF7621B(iLocal_547);
							}
							func_836(0f);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_552))
						{
							fVar1 = __LIB_0__::func_486(iLocal_533, 1);
							func_836(fVar1);
							if (AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
							{
								if (AUDIO::_0xE368E8422C860BA7("Force_Bookcase_Loop", "RCLDN1_sounds", iLocal_547))
								{
									AUDIO::_0xDCF5BA95BBF0FABA(iLocal_547, "Force_Bookcase_Loop", ENTITY::GET_ENTITY_COORDS(iLocal_552, true, false), "RCLDN1_sounds", 0, 0, 0);
									AUDIO::_0x503703EC1781B7D6(iLocal_547, "force", fVar1);
								}
							}
							else
							{
								AUDIO::_0x503703EC1781B7D6(iLocal_547, "force", fVar1);
							}
						}
						if (fVar1 > 0f)
						{
							if (!__LIB_0__::func_75(&uLocal_544))
							{
								if (__LIB_1__::func_265(Global_35, func_838(), joaat("SPEECH_PARAMS_FORCE_FRONTEND"), 0, 1, 0, 0, 1))
								{
									__LIB_1__::func_148(&uLocal_544);
								}
							}
							else if (__LIB_3__::func_135(&uLocal_544) >= 2300)
							{
								if (__LIB_1__::func_265(Global_35, func_838(), joaat("SPEECH_PARAMS_FORCE_FRONTEND"), 0, 1, 0, 0, 1))
								{
									__LIB_1__::func_148(&uLocal_544);
								}
							}
						}
						if (__LIB_0__::func_139(iLocal_533))
						{
							if (__LIB_0__::func_567(iLocal_533, 1))
							{
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[2], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false))
								{
									if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[2], "pbl_HardOpen_Success"))
									{
										if (ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Loops"))
										{
											ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[2], "Loop", true, false);
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[2], "pbl_HardOpen_Success", true);
										}
									}
								}
								__LIB_0__::func_105(1);
								if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
								{
									AUDIO::_0x3210BCB36AF7621B(iLocal_547);
								}
								AUDIO::RELEASE_SOUND_ID(iLocal_547);
								__LIB_1__::func_265(Global_35, "Exert_Melee_Med", joaat("SPEECH_PARAMS_FORCE_FRONTEND"), 0, 1, 0, 0, 1);
								__LIB_1__::func_281(&iLocal_532, 1, 1);
								__LIB_1__::func_281(&iLocal_533, 1, 1);
								__LIB_1__::func_281(&iLocal_534, 1, 1);
								__LIB_0__::func_37(&uLocal_548);
								__LIB_4__::func_353();
								iLocal_261 = 4;
							}
						}
					}
					break;
				case 4:
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_554))
					{
						iLocal_554 = OBJECT::CREATE_OBJECT(joaat("P_BOOKCASE04X"), vLocal_555, true, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_554, fLocal_558);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_554, false);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_BOOKCASE04X", false);
					}
					if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[2], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Success"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_262[2]) >= 0.99f)
						{
							iLocal_54 = 6;
						}
					}
					else
					{
						iLocal_54 = 6;
					}
					break;
			}
			if (!__LIB_0__::func_139(iLocal_534))
			{
				if (iLocal_261 < 4)
				{
					iLocal_534 = __LIB_2__::func_512("CLD2_CANCEL", joaat("INPUT_CONTEXT_B"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (__LIB_5__::func_777(iLocal_534, 1))
			{
				if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[2], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[2], "pbl_HardOpen_Fail"))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Loops"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[2], "Loop", true, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[2], "pbl_HardOpen_Fail", true);
					}
				}
				__LIB_1__::func_281(&iLocal_534, 1, 1);
				__LIB_1__::func_281(&iLocal_532, 1, 1);
				__LIB_1__::func_281(&iLocal_533, 1, 1);
				__LIB_0__::func_37(&uLocal_548);
				__LIB_4__::func_353();
				iLocal_54 = 5;
				if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_547))
				{
					AUDIO::_0x3210BCB36AF7621B(iLocal_547);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_553))
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_553))
					{
						CAM::SET_CAM_ACTIVE(iLocal_553, false);
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					}
					CAM::DESTROY_CAM(iLocal_553, false);
				}
				AUDIO::RELEASE_SOUND_ID(iLocal_547);
				iLocal_261 = 0;
			}
			break;
		case 5:
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[2], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_262[2], "pbl_HardOpen_Fail"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_262[2]) >= 0.99f)
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
					iLocal_54 = 2;
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[2]);
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[2]);
				}
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				iLocal_54 = 2;
			}
			break;
		case 6:
			if (CAM::DOES_CAM_EXIST(iLocal_553))
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_553))
				{
					CAM::SET_CAM_ACTIVE(iLocal_553, false);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				}
				CAM::DESTROY_CAM(iLocal_553, false);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_412))
			{
				MAP::REMOVE_BLIP(&iLocal_412);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_551) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_552);
			}
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			return true;
	}
	return false;
}

void func_347()
{
	__LIB_9__::func_951(41, 0, 1);
	__LIB_2__::func_754(41, 1);
}

bool func_348()
{
	int iVar0;
	switch (iLocal_55)
	{
		case 0:
			if (func_670(3, 0, "PBL_EasyOpen") && func_841())
			{
				if (!__LIB_0__::func_139(iLocal_532))
				{
					iLocal_532 = __LIB_1__::func_282("CLD2_OPENDOOR", joaat("INPUT_CONTEXT_Y"), 2860.06f, -1195.56f, 47.99f, 1f, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					if (__LIB_0__::func_139(iLocal_532))
					{
						iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_552, 1f, 2, 1, 0, "CLD2_BOOKCASE", 0);
						HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_532), iLocal_272, 0);
					}
				}
				else
				{
					if (__LIB_1__::func_264(iLocal_532, 1))
					{
						__LIB_3__::func_807();
						__LIB_1__::func_26(1);
						if (__LIB_1__::func_499())
						{
							__LIB_0__::func_101();
						}
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					}
					iLocal_272 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_552, 1f, 2, 1, 0, "CLD2_BOOKCASE", 0);
					HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_532), iLocal_272, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_413))
					{
						iLocal_413 = __LIB_4__::func_983(408396114, 2860.06f, -1195.56f, 47.99f, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_413, "CLD2_DOOROBJ");
					}
					if (__LIB_5__::func_777(iLocal_532, 1))
					{
						__LIB_1__::func_281(&iLocal_532, 1, 1);
						if (MAP::DOES_BLIP_EXIST(iLocal_413))
						{
							MAP::REMOVE_BLIP(&iLocal_413);
						}
						iLocal_55 = 2;
					}
				}
			}
			break;
		case 2:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			if (func_810())
			{
				iLocal_55 = 3;
			}
			break;
		case 3:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!__LIB_0__::func_163(Global_35, 716706914))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			}
			else if (PED::_IS_PED_CARRYING(Global_35))
			{
				if (!__LIB_0__::func_163(Global_35, -208384378))
				{
					if (__LIB_3__::func_417(Global_35))
					{
						iVar0 = __LIB_0__::func_147();
					}
					else
					{
						iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
					}
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, 2861.69f, -1195.84f, 47.99f, 1f, 8);
				}
			}
			else if (!__LIB_0__::func_163(Global_35, -208384378))
			{
				iLocal_55 = 4;
			}
			break;
		case 4:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[3]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[3], true, false)) && func_810()) && func_842(vLocal_474, vLocal_477, fLocal_480)) && func_841())
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_262[3], "ARTHUR", "PBL_EasyOpen", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_55 = 5;
			}
			break;
		case 5:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[3], false))
				{
					iLocal_55 = 6;
				}
			}
			break;
		case 6:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_554))
			{
				iLocal_554 = OBJECT::CREATE_OBJECT(joaat("P_BOOKCASE04X"), vLocal_555, true, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_554, fLocal_558);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_554, false);
				TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_BOOKCASE04X", false);
			}
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (__LIB_3__::func_642(iLocal_262[3], 100))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_553))
					{
						if (CAM::IS_CAM_ACTIVE(iLocal_553))
						{
							CAM::SET_CAM_ACTIVE(iLocal_553, false);
							CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
						}
						CAM::DESTROY_CAM(iLocal_553, false);
					}
					iLocal_55 = 7;
				}
				else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[3], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_262[3], "PBL_EasyOpen"))
				{
					iLocal_55 = 7;
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[3]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[3], false))
				{
					iLocal_55 = 7;
				}
				else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[3]))
				{
					iLocal_55 = 7;
				}
			}
			break;
		case 7:
			__LIB_3__::func_319(iLocal_262[3]);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_551) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_551))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_551);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_552))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_552);
			}
			return true;
	}
	return false;
}

void func_349(var uParam0)
{
	if (!__LIB_0__::func_75(&uLocal_561))
	{
		if (__LIB_12__::func_876(uParam0, "C2_CALL1", 0))
		{
			__LIB_1__::func_148(&uLocal_561);
		}
	}
	else if ((__LIB_0__::func_265(&uLocal_561) >= 7f && iLocal_868 < 3) && !AUDIO::_0xA2CAC9DEF0195E6F(0))
	{
		if (__LIB_12__::func_876(uParam0, "C2_CALL2", 0))
		{
			iLocal_868++;
			__LIB_1__::func_148(&uLocal_561);
		}
	}
}

bool func_350()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_283))
	{
		iLocal_283 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2835.107f, -1225.858f, 47.41278f, 0f, 0f, 35.56075f, 3.737052f, 4.164434f, 3.039912f, "Narrow market area blocker 1");
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_288))
	{
		uLocal_288 = __LIB_1__::func_391(iLocal_283, 0, 0, 8192);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_284))
	{
		iLocal_284 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2840.637f, -1223.422f, 47.41278f, 0f, 0f, 2.134286f, 3.737052f, 4.164434f, 3.039912f, "Narrow market area blocker 2");
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_289))
	{
		uLocal_289 = __LIB_1__::func_391(iLocal_284, 0, 0, 8192);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_285))
	{
		iLocal_285 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2844.302f, -1216.007f, 47.41278f, 0f, 0f, 2.134286f, 3.737052f, 8.601548f, 3.039912f, "Narrow market area blocker 3");
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_290))
	{
		uLocal_290 = __LIB_1__::func_391(iLocal_285, 0, 0, 8192);
	}
	if (((((VOLUME::_DOES_VOLUME_EXIST(iLocal_283) && VOLUME::_DOES_VOLUME_EXIST(iLocal_284)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_285)) && PED::_0x91A5F9CBEBB9D936(uLocal_288)) && PED::_0x91A5F9CBEBB9D936(uLocal_289)) && PED::_0x91A5F9CBEBB9D936(uLocal_290))
	{
		return true;
	}
	return false;
}

bool func_351()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_578) && ENTITY::DOES_ENTITY_EXIST(Local_698))
	{
		if (PED::_0x164CECC59E70DF86(Local_578, 80f) || PED::_0x164CECC59E70DF86(Local_698, 80f))
		{
			return true;
		}
	}
	return false;
}

void func_352()
{
	if (!Local_578.f_83)
	{
		PED::SET_PED_CONFIG_FLAG(Local_578, 297, true);
		__LIB_13__::func_219(&(Local_578.f_3[0 /*61*/]), &(Local_578.f_65));
		__LIB_2__::func_602(&(Local_578.f_65[0 /*17*/]), "CLD2_CUTFREE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		Local_578.f_83 = 1;
	}
}

void func_353()
{
	if (!Local_698.f_83)
	{
		PED::SET_PED_CONFIG_FLAG(Local_698, 297, true);
		__LIB_2__::func_602(&(Local_698.f_65[0 /*17*/]), "CLD2_CUTFREE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		Local_698.f_83 = 1;
	}
}

void func_354(var uParam0)
{
	char cVar0[16];
	if (Local_578.f_88 == 0 || Local_698.f_88 == 0)
	{
		if (!__LIB_0__::func_75(&uLocal_561))
		{
			if (__LIB_12__::func_876(uParam0, "C2_SEEN1", 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_578, 5000, 48, 41, 0);
				__LIB_1__::func_148(&uLocal_561);
			}
		}
		else if ((__LIB_0__::func_265(&uLocal_561) >= 7f && iLocal_559 < 6) && !AUDIO::_0xA2CAC9DEF0195E6F(0))
		{
			StringCopy(&cVar0, "C2_SEEN2_S", 16);
			if (bLocal_560)
			{
				StringConCat(&cVar0, "2", 16);
			}
			else
			{
				StringConCat(&cVar0, "1", 16);
			}
			if (__LIB_12__::func_876(uParam0, &cVar0, 0))
			{
				if (bLocal_560)
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_698, 5000, 48, 41, 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_578, 5000, 48, 41, 0);
				}
				iLocal_559++;
				bLocal_560 = !bLocal_560;
				__LIB_1__::func_148(&uLocal_561);
			}
		}
	}
}

void func_356(int iParam0, int iParam1, var uParam2, int iParam3)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (((!ENTITY::IS_ENTITY_DEAD(*iParam0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[iParam0->f_1])) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[iParam0->f_1], false)) && !iParam0->f_88)
	{
		PED::SET_PED_RESET_FLAG(*iParam0, 307, true);
		if ((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[iParam0->f_1], iParam0->f_93) && ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[iParam0->f_1], iParam0->f_92)) && ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[iParam0->f_1], iParam0->f_95))
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_89) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_89, Global_35, 1, 1))
		{
			switch (iParam0->f_2)
			{
				case 0:
					if ((MISC::IS_BULLET_IN_ANGLED_AREA(iParam0->f_103[0 /*3*/], iParam0->f_103[1 /*3*/], iParam0->f_110, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(iParam0->f_103[0 /*3*/], 0.75f, true, true)) || ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_92))
					{
						if (__LIB_0__::func_75(&(iParam0->f_97)))
						{
							__LIB_0__::func_37(&(iParam0->f_97));
						}
						iParam0->f_2 = 1;
					}
					if ((MISC::IS_BULLET_IN_ANGLED_AREA(iParam0->f_111[0 /*3*/], iParam0->f_111[1 /*3*/], iParam0->f_118, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(iParam0->f_111[0 /*3*/], 0.75f, true, true)) || ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_93))
					{
						if (__LIB_0__::func_75(&(iParam0->f_97)))
						{
							__LIB_0__::func_37(&(iParam0->f_97));
						}
						iParam0->f_2 = 2;
					}
					if (__LIB_2__::func_401(*iParam0, 1, 1, 1, 0, 0))
					{
						if (!__LIB_0__::func_75(&(iParam0->f_97)))
						{
							__LIB_1__::func_148(&(iParam0->f_97));
						}
						else if (__LIB_0__::func_265(&(iParam0->f_97)) > 1f)
						{
							if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_91))
							{
								if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[iParam0->f_1], iParam0->f_91) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[iParam0->f_1], iParam0->f_91))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[iParam0->f_1], iParam0->f_91, true);
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", true, false);
								}
							}
							else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP"))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", false, false);
							}
						}
					}
					else if (__LIB_0__::func_75(&(iParam0->f_97)))
					{
						__LIB_0__::func_37(&(iParam0->f_97));
					}
					break;
				case 1:
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_92))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[iParam0->f_1], iParam0->f_92))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[iParam0->f_1], iParam0->f_92, true);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", true, false);
							__LIB_1__::func_148(&(iParam0->f_100));
						}
					}
					else
					{
						if ((__LIB_0__::func_75(&(iParam0->f_100)) && __LIB_0__::func_264(&(iParam0->f_100)) <= 1.5f) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1.5f, true))
						{
							iParam0->f_2 = 3;
						}
						else if (__LIB_0__::func_264(&(iParam0->f_100)) > 1.5f)
						{
							__LIB_0__::func_37(&(iParam0->f_100));
						}
						if ((MISC::IS_BULLET_IN_ANGLED_AREA(iParam0->f_111[0 /*3*/], iParam0->f_111[1 /*3*/], iParam0->f_118, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(iParam0->f_111[0 /*3*/], 0.75f, true, true)) && iParam0->f_2 != 3)
						{
							iParam0->f_2 = 2;
						}
						else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1.5f, true))
						{
							if (!__LIB_0__::func_75(&(iParam0->f_100)))
							{
								__LIB_1__::func_148(&(iParam0->f_100));
							}
						}
						if (!iParam0->f_119)
						{
							if (iParam3 == 1)
							{
								sVar0 = "RCLDN_SHOCKC1";
							}
							else
							{
								sVar0 = "RCLDN_SHOCKC2";
							}
							__LIB_6__::func_900("C2_SEEN1", 0, 0);
							__LIB_6__::func_900("C2_SEEN2_S1", 0, 0);
							__LIB_6__::func_900("C2_SEEN2_S2", 0, 0);
							iParam0->f_119 = __LIB_12__::func_876(uParam2, sVar0, 0);
						}
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", false, false);
						}
					}
					break;
				case 2:
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_93))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[iParam0->f_1], iParam0->f_93))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[iParam0->f_1], iParam0->f_93, true);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", true, false);
							__LIB_1__::func_148(&(iParam0->f_100));
						}
					}
					else
					{
						if ((__LIB_0__::func_75(&(iParam0->f_100)) && __LIB_0__::func_264(&(iParam0->f_100)) <= 1.5f) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1.5f, true))
						{
							iParam0->f_2 = 3;
						}
						else if (__LIB_0__::func_264(&(iParam0->f_100)) > 1.5f)
						{
							__LIB_0__::func_37(&(iParam0->f_100));
						}
						if ((MISC::IS_BULLET_IN_ANGLED_AREA(iParam0->f_103[0 /*3*/], iParam0->f_103[1 /*3*/], iParam0->f_110, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(iParam0->f_103[0 /*3*/], 0.75f, true, true)) && iParam0->f_2 != 3)
						{
							iParam0->f_2 = 1;
						}
						else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1.5f, true))
						{
							if (!__LIB_0__::func_75(&(iParam0->f_100)))
							{
								__LIB_1__::func_148(&(iParam0->f_100));
							}
						}
						if (!iParam0->f_119)
						{
							if (iParam3 == 1)
							{
								sVar1 = "RCLDN_SHOCKC1";
							}
							else
							{
								sVar1 = "RCLDN_SHOCKC2";
							}
							__LIB_6__::func_900("C2_SEEN1", 0, 0);
							__LIB_6__::func_900("C2_SEEN2_S1", 0, 0);
							__LIB_6__::func_900("C2_SEEN2_S2", 0, 0);
							iParam0->f_119 = __LIB_12__::func_876(uParam2, sVar1, 0);
						}
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", false, false);
						}
					}
					break;
				case 3:
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_94))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[iParam0->f_1], iParam0->f_94) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[iParam0->f_1], iParam0->f_94))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[iParam0->f_1], iParam0->f_94, true);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", true, false);
							__LIB_1__::func_148(&(iParam0->f_100));
						}
					}
					else
					{
						if ((__LIB_0__::func_75(&(iParam0->f_100)) && __LIB_0__::func_264(&(iParam0->f_100)) > 2.5f) || !__LIB_0__::func_75(&(iParam0->f_100)))
						{
							if (__LIB_0__::func_75(&(iParam0->f_100)))
							{
								__LIB_0__::func_37(&(iParam0->f_100));
							}
							if (MISC::IS_BULLET_IN_ANGLED_AREA(iParam0->f_103[0 /*3*/], iParam0->f_103[1 /*3*/], iParam0->f_110, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(iParam0->f_103[0 /*3*/], 0.75f, true, true))
							{
								__LIB_1__::func_148(&(iParam0->f_100));
								iParam0->f_2 = 1;
							}
							else if (MISC::IS_BULLET_IN_ANGLED_AREA(iParam0->f_111[0 /*3*/], iParam0->f_111[1 /*3*/], iParam0->f_118, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(iParam0->f_111[0 /*3*/], 0.75f, true, true))
							{
								__LIB_1__::func_148(&(iParam0->f_100));
								iParam0->f_2 = 2;
							}
						}
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", false, false);
						}
						if (!iParam0->f_119)
						{
							if (iParam3 == 1)
							{
								sVar2 = "RCLDN_SHOCKC1";
							}
							else
							{
								sVar2 = "RCLDN_SHOCKC2";
							}
							__LIB_6__::func_900("C2_SEEN1", 0, 0);
							__LIB_6__::func_900("C2_SEEN2_S1", 0, 0);
							__LIB_6__::func_900("C2_SEEN2_S2", 0, 0);
							iParam0->f_119 = __LIB_12__::func_876(uParam2, sVar2, 0);
						}
					}
					break;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_89))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_89, Global_35, 1, 1))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_262[iParam0->f_1], iParam0->f_95))
				{
					if (((ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_262[iParam0->f_1], iParam0->f_95) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_262[iParam0->f_1], iParam0->f_95)) && !FIRE::IS_ENTITY_ON_FIRE(*iParam0)) && !TASK::_0xF330A5C062B29BED(*iParam0))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_262[iParam0->f_1], iParam0->f_95, true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", true, false);
						PED::_0x5A1A929C8B729B4A(*iParam0);
					}
				}
				else
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_262[iParam0->f_1], "LOOP", false, false);
					}
					iParam0->f_88 = 1;
					if (MAP::DOES_BLIP_EXIST(*iParam1))
					{
						MAP::_0xBD62D98799A3DAF0(*iParam1, -89429847);
					}
					__LIB_1__::func_148(&uLocal_855);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_262[iParam0->f_1], iParam0->f_93);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_262[iParam0->f_1], iParam0->f_92);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_262[iParam0->f_1], iParam0->f_94);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0->f_89);
					if (__LIB_0__::func_75(&(iParam0->f_97)))
					{
						__LIB_0__::func_37(&(iParam0->f_97));
					}
					if (__LIB_0__::func_75(&(iParam0->f_100)))
					{
						__LIB_0__::func_37(&(iParam0->f_100));
					}
				}
			}
		}
	}
}

bool func_358(int iParam0, int iParam1, var uParam2)
{
	if (__LIB_2__::func_341(uParam2))
	{
		return true;
	}
	if (__LIB_13__::func_212(iParam0, &iParam1))
	{
		return true;
	}
	return false;
}

int func_359(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_678(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
					if (func_850(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_359(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_854(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (func_857(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_13__::func_220(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_857(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_854(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
							if (__LIB_3__::func_112(Global_35, *iParam0, 1f) == 3)
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
							if (__LIB_3__::func_112(Global_35, *iParam0, 1f) == 3)
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
					__LIB_13__::func_220(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_857(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_854(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_362()
{
	__LIB_2__::func_602(&(Local_578.f_65[0 /*17*/]), "CLD2_CUTFREE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

void func_363()
{
	__LIB_2__::func_602(&(Local_698.f_65[0 /*17*/]), "CLD2_CUTFREE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

void func_367()
{
	__LIB_1__::func_480(&Local_578);
	__LIB_2__::func_624(&(Local_578.f_65), 0, 0, 1, 0);
}

void func_368()
{
	__LIB_1__::func_480(&Local_698);
	__LIB_2__::func_624(&(Local_698.f_65), 0, 0, 1, 0);
}

bool func_370()
{
	int iVar0;
	iVar0 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(Local_578))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_578, iLocal_262[Local_578.f_1]))
		{
			iVar0 = 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_698))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_698, iLocal_262[Local_698.f_1]))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_371(var uParam0)
{
	if (!bLocal_511)
	{
		if (__LIB_0__::func_272(Local_578, 0) && !__LIB_1__::func_205(Local_578, iLocal_275, 1, 0))
		{
			TASK::TASK_PLAY_ANIM(Local_578, "script_rc@cldn@ig@rsc2_ig5_reacttosunlight", "upperreact_slums01", 8f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
			bLocal_511 = true;
		}
	}
	if (!bLocal_512)
	{
		if (__LIB_0__::func_272(Local_698, 0) && !__LIB_1__::func_205(Local_698, iLocal_275, 1, 0))
		{
			TASK::TASK_PLAY_ANIM(Local_698, "script_rc@cldn@ig@rsc2_ig5_reacttosunlight", "upperreact_slums01^1", 8f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
			bLocal_512 = true;
		}
	}
	if (((bLocal_511 && bLocal_512) && !bLocal_513) && !__LIB_5__::func_463())
	{
		if (__LIB_12__::func_876(uParam0, "RCLDN_SLBANT", 0))
		{
			bLocal_513 = true;
		}
	}
}

void func_372(var uParam0)
{
	if (!__LIB_5__::func_463())
	{
		if (!__LIB_0__::func_75(&uLocal_843) || IntToFloat(__LIB_3__::func_135(&uLocal_843)) > 9f)
		{
			if (!__LIB_0__::func_75(&uLocal_858))
			{
				__LIB_1__::func_148(&uLocal_858);
			}
			else if (__LIB_0__::func_264(&uLocal_858) > 8.5f)
			{
				if (__LIB_1__::func_265(Local_578, func_870(), joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, 0, 0, 1))
				{
					__LIB_1__::func_148(&uLocal_858);
				}
			}
			if (!__LIB_0__::func_75(&uLocal_861))
			{
				if (__LIB_1__::func_265(Local_698, func_871(), joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, 0, 0, 1))
				{
					__LIB_1__::func_148(&uLocal_861);
				}
			}
			else if (__LIB_0__::func_264(&uLocal_861) > 10.5f)
			{
				if (__LIB_1__::func_265(Local_698, func_871(), joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, 0, 0, 1))
				{
					__LIB_1__::func_148(&uLocal_861);
				}
			}
		}
	}
	if (!__LIB_1__::func_205(Global_35, iLocal_275, 1, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		if (fLocal_873 == -1f)
		{
			fLocal_873 = __LIB_0__::func_665(Global_35, iLocal_291, 1, 1);
		}
		else if (__LIB_0__::func_665(Global_35, iLocal_291, 1, 1) < fLocal_873)
		{
			fLocal_873 = __LIB_0__::func_665(Global_35, iLocal_291, 1, 1);
			__LIB_0__::func_37(&uLocal_843);
		}
		else if (__LIB_0__::func_665(Global_35, iLocal_291, 1, 1) >= fLocal_873)
		{
			if (!__LIB_0__::func_75(&uLocal_843))
			{
				__LIB_1__::func_148(&uLocal_843);
			}
			else if (__LIB_0__::func_264(&uLocal_843) > 7.5f && iLocal_871 < 3)
			{
				if (__LIB_12__::func_876(uParam0, "C2_DAWD", 0))
				{
					iLocal_871++;
					__LIB_1__::func_148(&uLocal_843);
				}
			}
		}
	}
}

void func_373()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_578))
	{
		if (__LIB_0__::func_665(Global_35, Local_578, 1, 1) < 3f && TASK::IS_PED_STILL(Global_35))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_578, 1f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_698))
	{
		if (__LIB_0__::func_665(Global_35, Local_698, 1, 1) < 3f && TASK::IS_PED_STILL(Global_35))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_698, 1f);
		}
	}
}

void func_374()
{
	if (iLocal_59 == 5)
	{
		if (__LIB_0__::func_393(Global_35, iLocal_281, 0, 1))
		{
			if (PED::IS_PED_IN_GROUP(Local_578))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_578);
				PED::SET_PED_CONFIG_FLAG(Local_578, 156, false);
				PED::SET_PED_CONFIG_FLAG(Local_578, 333, false);
				COMPANION::_0x72B7F65F11FC8896(PED::GET_PED_GROUP_INDEX(Global_35));
				PED::SET_PED_CONFIG_FLAG(Global_35, 155, false);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_578, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_578, vLocal_462, 1f, -1, 0.5f, 0, 40000f);
			}
			else if ((ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_578, -875674219)) && !__LIB_0__::func_163(Local_578, 474215631))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_578, Global_35, -1, -1f, -1f, -1f);
			}
			else if (__LIB_2__::func_401(Local_578, 1, 0, 0, 0, 1) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_578, false, false), 1.5f, true) && !__LIB_0__::func_163(Local_578, 474215631)))
			{
				TASK::TASK_COWER(Local_578, 2000, Global_35, 0);
			}
			else if (!__LIB_2__::func_401(Local_578, 1, 0, 0, 0, 1) && !MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_578, false, false), 1.5f, true))
			{
				if (!__LIB_0__::func_163(Local_578, 474215631))
				{
					if (PED::_GET_PED_CROUCH_MOVEMENT(Local_578))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Local_578, false, 0, false);
					}
				}
			}
			if (PED::IS_PED_IN_GROUP(Local_698))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_698);
				PED::SET_PED_CONFIG_FLAG(Local_698, 156, false);
				PED::SET_PED_CONFIG_FLAG(Local_698, 333, false);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_698, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_698, vLocal_465, 1f, -1, 0.5f, 0, 40000f);
			}
			else if ((ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_698, -875674219)) && !__LIB_0__::func_163(Local_698, 474215631))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_698, Global_35, -1, -1f, -1f, -1f);
			}
			else if (__LIB_2__::func_401(Local_698, 1, 0, 0, 0, 1) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_698, false, false), 1.5f, true) && !__LIB_0__::func_163(Local_698, 474215631)))
			{
				TASK::TASK_COWER(Local_698, 2000, Global_35, 0);
			}
			else if (!__LIB_2__::func_401(Local_698, 1, 0, 0, 0, 1) && !MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_698, false, false), 1.5f, true))
			{
				if (!__LIB_0__::func_163(Local_698, 474215631))
				{
					if (PED::_GET_PED_CROUCH_MOVEMENT(Local_698))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Local_698, false, 0, false);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_578))
			{
				if (!__LIB_0__::func_163(Local_578, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")) && !__LIB_0__::func_163(Local_578, 474215631))
				{
					TASK::CLEAR_PED_TASKS(Local_578, true, false);
					PED::SET_PED_CONFIG_FLAG(Local_578, 279, true);
					TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_578, Global_35, 0, 0, 2.25f, 2.75f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_698))
			{
				if (!__LIB_0__::func_163(Local_698, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")) && !__LIB_0__::func_163(Local_698, 474215631))
				{
					TASK::CLEAR_PED_TASKS(Local_698, true, false);
					PED::SET_PED_CONFIG_FLAG(Local_698, 279, true);
					TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_698, Global_35, 0, 0, 2.25f, 2.75f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
				}
			}
		}
		return;
	}
	if (func_872())
	{
	}
	switch (iLocal_59)
	{
		case 0:
			if (func_670(4, 0, "") && func_873())
			{
				iLocal_59 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_393(Global_35, iLocal_278, 0, 1) && !bLocal_514)
			{
				if (PED::IS_PED_IN_GROUP(Local_578))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_578);
					PED::SET_PED_CONFIG_FLAG(Local_578, 156, false);
					PED::SET_PED_CONFIG_FLAG(Local_578, 333, false);
					COMPANION::_0x72B7F65F11FC8896(PED::GET_PED_GROUP_INDEX(Global_35));
					PED::SET_PED_CONFIG_FLAG(Global_35, 155, false);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_578, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_578, vLocal_462, 1f, -1, 0.5f, 0, 40000f);
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_578, -875674219)) && !__LIB_0__::func_163(Local_578, 474215631))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_578, Global_35, -1, -1f, -1f, -1f);
				}
				else if (__LIB_2__::func_401(Local_578, 1, 0, 0, 0, 1) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_578, false, false), 1.5f, true) && !__LIB_0__::func_163(Local_578, 474215631)))
				{
					TASK::TASK_COWER(Local_578, 2000, Global_35, 0);
				}
				else if (!__LIB_2__::func_401(Local_578, 1, 0, 0, 0, 1) && !MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_578, false, false), 1.5f, true))
				{
					if (!__LIB_0__::func_163(Local_578, 474215631))
					{
						if (PED::_GET_PED_CROUCH_MOVEMENT(Local_578))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_578, false, 0, false);
						}
					}
				}
				if (PED::IS_PED_IN_GROUP(Local_698))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_698);
					PED::SET_PED_CONFIG_FLAG(Local_698, 156, false);
					PED::SET_PED_CONFIG_FLAG(Local_698, 333, false);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_698, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_698, vLocal_465, 1f, -1, 0.5f, 0, 40000f);
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_698, -875674219)) && !__LIB_0__::func_163(Local_698, 474215631))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_698, Global_35, -1, -1f, -1f, -1f);
				}
				else if (__LIB_2__::func_401(Local_698, 1, 0, 0, 0, 1) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_698, false, false), 1.5f, true) && !__LIB_0__::func_163(Local_698, 474215631)))
				{
					TASK::TASK_COWER(Local_698, 2000, Global_35, 0);
				}
				else if (!__LIB_2__::func_401(Local_698, 1, 0, 0, 0, 1) && !MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_698, false, false), 1.5f, true))
				{
					if (!__LIB_0__::func_163(Local_698, 474215631))
					{
						if (PED::_GET_PED_CROUCH_MOVEMENT(Local_698))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_698, false, 0, false);
						}
					}
				}
				if (!__LIB_0__::func_139(iLocal_532))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417) && TASK::_0x974DA3408DEC4E79(iLocal_417))
					{
						iLocal_532 = __LIB_2__::func_512("CLD2_ROBTILL", joaat("INPUT_CONTEXT_Y"), Global_35, 3, 0, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						iLocal_272 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(iLocal_417, MISC::GET_HASH_KEY("CASH_REGISTER"));
						HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_532), iLocal_272, 0);
					}
				}
				else if (__LIB_0__::func_139(iLocal_532))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417) && !TASK::_0x974DA3408DEC4E79(iLocal_417))
					{
						__LIB_1__::func_281(&iLocal_532, 1, 1);
					}
					else if (__LIB_0__::func_567(iLocal_532, 1))
					{
						func_344();
						__LIB_1__::func_281(&iLocal_532, 1, 1);
						iLocal_59 = 2;
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_578))
				{
					if (!__LIB_0__::func_163(Local_578, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")) && !__LIB_0__::func_163(Local_578, 474215631))
					{
						TASK::CLEAR_PED_TASKS(Local_578, true, false);
						PED::SET_PED_CONFIG_FLAG(Local_578, 279, true);
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_578, Global_35, 0, 0, 2.25f, 2.75f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_698))
				{
					if (!__LIB_0__::func_163(Local_698, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")) && !__LIB_0__::func_163(Local_698, 474215631))
					{
						TASK::CLEAR_PED_TASKS(Local_698, true, false);
						PED::SET_PED_CONFIG_FLAG(Local_698, 279, true);
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_698, Global_35, 0, 0, 2.25f, 2.75f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
				}
			}
			if (func_342())
			{
				if (!PED::IS_PED_IN_GROUP(Local_578))
				{
					TASK::CLEAR_PED_TASKS(Local_578, true, false);
					PED::SET_PED_CONFIG_FLAG(Local_578, 279, true);
					PED::SET_PED_AS_GROUP_MEMBER(Local_578, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_GROUP_FORMATION(PED::GET_PED_GROUP_INDEX(Global_35), 6);
					PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
					COMPANION::_0xCBD9EC60495C728C(PED::GET_PED_GROUP_INDEX(Global_35));
					PED::SET_PED_CONFIG_FLAG(Local_578, 156, true);
					PED::SET_PED_CONFIG_FLAG(Local_578, 333, true);
				}
				if (!PED::IS_PED_IN_GROUP(Local_698))
				{
					TASK::CLEAR_PED_TASKS(Local_698, true, false);
					PED::SET_PED_CONFIG_FLAG(Local_698, 279, true);
					PED::SET_PED_AS_GROUP_MEMBER(Local_698, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_CONFIG_FLAG(Local_698, 156, true);
					PED::SET_PED_CONFIG_FLAG(Local_698, 333, true);
				}
				__LIB_6__::func_916(&iLocal_532);
				__LIB_1__::func_715(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				iLocal_59 = 5;
			}
			break;
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (PED::IS_PED_IN_GROUP(Local_578))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_578);
				PED::SET_PED_CONFIG_FLAG(Local_578, 156, false);
				PED::SET_PED_CONFIG_FLAG(Local_578, 333, false);
				COMPANION::_0x72B7F65F11FC8896(PED::GET_PED_GROUP_INDEX(Global_35));
				PED::SET_PED_CONFIG_FLAG(Global_35, 155, false);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_578, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_578, vLocal_462, 1f, -1, 0.5f, 0, 40000f);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_578, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_578, Global_35, -1, -1f, -1f, -1f);
			}
			if (PED::IS_PED_IN_GROUP(Local_698))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_698);
				PED::SET_PED_CONFIG_FLAG(Local_698, 156, false);
				PED::SET_PED_CONFIG_FLAG(Local_698, 333, false);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_698, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_698, vLocal_465, 1f, -1, 0.5f, 0, 40000f);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0) && !__LIB_0__::func_163(Local_698, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_698, Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!__LIB_0__::func_163(Global_35, 716706914))
				{
					if (!__LIB_0__::func_75(&uLocal_852))
					{
						__LIB_1__::func_148(&uLocal_852);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					else if (__LIB_1__::func_871(&uLocal_852) > 2000)
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						__LIB_1__::func_148(&uLocal_852);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_468, 0.5f, 0.5f, 0.5f, false, true, 0) && !__LIB_0__::func_163(Global_35, 1369124074))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_262[4], "ARTHUR", "", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_468, 0.5f, 0.5f, 0.5f, false, true, 0))
			{
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_578, vLocal_462, 0.5f, 0.5f, 2.5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_698, vLocal_465, 0.5f, 0.5f, 2.5f, false, true, 0))
			{
				iLocal_59 = 3;
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				if (!__LIB_0__::func_163(Global_35, 716706914))
				{
					if (!__LIB_0__::func_75(&uLocal_852))
					{
						__LIB_1__::func_148(&uLocal_852);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					else if (__LIB_1__::func_871(&uLocal_852) > 2000)
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						__LIB_1__::func_148(&uLocal_852);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_468, 0.5f, 0.5f, 0.5f, false, true, 0) && !__LIB_0__::func_163(Global_35, 1369124074))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_262[4], "ARTHUR", "", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_468, 0.5f, 0.5f, 0.5f, false, true, 0))
			{
				if (func_874())
				{
					__LIB_0__::func_37(&uLocal_852);
					bLocal_514 = true;
					iLocal_59 = 4;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[4]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_262[4], false))
			{
				__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				iLocal_59 = 5;
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[4]))
			{
				__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				iLocal_59 = 5;
			}
			break;
	}
}

void func_377()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_571))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_571, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_572))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_572, false);
	}
}

void func_413(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_914(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_914(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_914(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_914(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_914(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_914(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_914(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_914(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_914(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_914(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_914(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_914(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_914(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_916();
						func_917(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_914(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_413(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_413(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_413(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_914(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_914(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_951();
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
							func_914(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_442(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_560(iParam0, iParam1);
	__LIB_18__::func_928(iVar0, 1, 1);
	__LIB_18__::func_843(iVar0);
	__LIB_4__::func_932(iVar0, 1);
	iVar1 = __LIB_16__::func_268(iVar0);
	__LIB_13__::func_215(iVar1);
	iVar2 = PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iVar1));
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		MISC::_0xEB946B9E579729AD(iVar2, 0);
	}
}

void func_455()
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	iVar1 = iVar0 * 10 + 7;
	__LIB_0__::func_7(&(Global_23118.f_1651[iVar1]), 256);
}

void func_460()
{
	Global_1393521.f_2 = 0;
}

int func_512(int iParam0, int iParam1)
{
	var uVar0;
	return func_1057(&uVar0, iParam0, iParam1);
}

char* func_655(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			return "RCLDN_RSC1";
		case 1:
			return "RCLDN_RSC3";
	}
	return "";
}

void func_656(var uParam0)
{
	func_324();
	__LIB_0__::func_172(iLocal_274);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_262[7]);
	}
	__LIB_0__::func_106(uParam0, 0);
	__LIB_13__::func_227(iLocal_291);
}

void func_658(var uParam0)
{
	float fVar0;
	if (__LIB_13__::func_23(uParam0, "RCLDN_RSC1"))
	{
		if (!bLocal_522)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC1_P1A1_T04_Shot_2", 1))
			{
				if (!__LIB_4__::func_813(&uLocal_14))
				{
					__LIB_8__::func_796(&uLocal_14, "CALDERON1_DONATE", "CALDERON1_NODONATE", __LIB_0__::func_342(), 0, 18500, 1, -1, -1);
					__LIB_1__::func_148(&uLocal_541);
					bLocal_523 = true;
				}
				bLocal_522 = true;
			}
		}
		else if (!bLocal_523)
		{
			if (!__LIB_4__::func_813(&uLocal_14))
			{
				__LIB_8__::func_796(&uLocal_14, "CALDERON1_DONATE", "CALDERON1_NODONATE", __LIB_0__::func_342(), 0, 18500, 1, -1, -1);
				__LIB_1__::func_148(&uLocal_541);
				bLocal_523 = true;
			}
		}
		else if (__LIB_13__::func_216(&uLocal_14))
		{
			if (__LIB_4__::func_819(&uLocal_14))
			{
				if (__LIB_8__::func_350(&uLocal_14))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC1_P1A1_T04_Shot_2", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Yes_is", false, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "LOOP", true, false);
						return;
					}
					else
					{
						__LIB_11__::func_720(&uLocal_14);
						if (__LIB_0__::func_84(uParam0, 512))
						{
							__LIB_12__::func_677(uParam0, 512, 1);
						}
						if (__LIB_0__::func_84(uParam0, 2))
						{
							__LIB_12__::func_677(uParam0, 2, 1);
						}
						bLocal_526 = true;
						bLocal_527 = false;
						bLocal_524 = true;
						__LIB_14__::func_240(&uLocal_14);
						__LIB_0__::func_37(&uLocal_541);
						return;
					}
				}
				else if (__LIB_8__::func_349(&uLocal_14))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC1_P1A1_T04_Shot_2", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "LOOP", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Yes_is", true, false);
						return;
					}
					else
					{
						__LIB_11__::func_720(&uLocal_14);
						if (__LIB_0__::func_84(uParam0, 512))
						{
							__LIB_12__::func_677(uParam0, 512, 1);
						}
						if (__LIB_0__::func_84(uParam0, 2))
						{
							__LIB_12__::func_677(uParam0, 2, 1);
						}
						bLocal_526 = true;
						bLocal_527 = true;
						__LIB_14__::func_240(&uLocal_14);
						__LIB_0__::func_37(&uLocal_541);
						return;
					}
				}
			}
			else if (__LIB_8__::func_350(&uLocal_14))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC1_P1A1_T04_Shot_2", 1))
				{
				}
				else
				{
					__LIB_11__::func_720(&uLocal_14);
					if (__LIB_0__::func_84(uParam0, 512))
					{
						__LIB_12__::func_677(uParam0, 512, 1);
					}
					if (__LIB_0__::func_84(uParam0, 2))
					{
						__LIB_12__::func_677(uParam0, 2, 1);
					}
					bLocal_526 = true;
					bLocal_527 = false;
					bLocal_524 = true;
					bLocal_525 = true;
					__LIB_14__::func_240(&uLocal_14);
					__LIB_0__::func_37(&uLocal_541);
					return;
				}
			}
			else if (__LIB_8__::func_349(&uLocal_14))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC1_P1A1_T04_Shot_2", 1))
				{
				}
				else
				{
					__LIB_11__::func_720(&uLocal_14);
					if (__LIB_0__::func_84(uParam0, 512))
					{
						__LIB_12__::func_677(uParam0, 512, 1);
					}
					if (__LIB_0__::func_84(uParam0, 2))
					{
						__LIB_12__::func_677(uParam0, 2, 1);
					}
					bLocal_526 = true;
					bLocal_527 = true;
					bLocal_524 = true;
					bLocal_525 = true;
					__LIB_14__::func_240(&uLocal_14);
					__LIB_0__::func_37(&uLocal_541);
					return;
				}
			}
		}
		if (bLocal_526)
		{
			if (!bLocal_525)
			{
				if (bLocal_527)
				{
					fVar0 = 53985f;
				}
				else
				{
					fVar0 = 68758f;
				}
			}
			else if (bLocal_527)
			{
				fVar0 = 56894f;
			}
			else
			{
				fVar0 = 72329f;
			}
			if (IntToFloat(__LIB_12__::func_685(uParam0)) >= fVar0)
			{
				__LIB_0__::func_99(uParam0, 1);
			}
		}
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC1_P1_T08_Shot_4", 1))
	{
		if (__LIB_13__::func_218(uParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
	}
	func_670(8, 0, "pl_leadout");
}

void func_664(var uParam0)
{
	var uVar0;
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iLocal_291, &uVar0));
}

void func_665(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RCLDN_RSC3"))
	{
		if (!bLocal_522)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC3_P2_T02_Shot_2", 1))
			{
				if (!__LIB_4__::func_813(&uLocal_32))
				{
					__LIB_8__::func_796(&uLocal_32, "CALDERON1_REFUSE", "CALDERON1_TAKE", __LIB_0__::func_342(), 0, 9500, 1, -1, -1);
					__LIB_1__::func_148(&uLocal_541);
					bLocal_524 = false;
					bLocal_523 = true;
				}
				bLocal_522 = true;
			}
		}
		else if (!bLocal_523)
		{
			if (!__LIB_4__::func_813(&uLocal_32))
			{
				__LIB_8__::func_796(&uLocal_32, "CALDERON1_REFUSE", "CALDERON1_TAKE", __LIB_0__::func_342(), 0, 9500, 1, -1, -1);
				__LIB_1__::func_148(&uLocal_541);
				bLocal_524 = false;
				bLocal_523 = true;
			}
		}
		else if (__LIB_13__::func_216(&uLocal_32))
		{
			if (__LIB_8__::func_350(&uLocal_32))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC3_P2_T02_Shot_2", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "LOOP", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Yes_is", true, false);
					return;
				}
				else
				{
					__LIB_11__::func_720(&uLocal_32);
					__LIB_12__::func_677(uParam0, 512, 1);
					bLocal_524 = false;
					bLocal_526 = true;
					bLocal_528 = true;
					__LIB_14__::func_240(&uLocal_32);
					__LIB_0__::func_37(&uLocal_541);
					return;
				}
			}
			else if (__LIB_8__::func_349(&uLocal_32))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RCLDN_RSC3_P2_T02_Shot_2", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "LOOP", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Yes_is", false, false);
					return;
				}
				else
				{
					__LIB_11__::func_720(&uLocal_32);
					__LIB_12__::func_677(uParam0, 512, 1);
					bLocal_526 = true;
					bLocal_528 = false;
					__LIB_14__::func_240(&uLocal_32);
					__LIB_0__::func_37(&uLocal_541);
					return;
				}
			}
		}
	}
	if (__LIB_13__::func_218(uParam0, Local_578, "A_M_M_nbxSlums_01", 0, 1, 1))
	{
		PED::FORCE_PED_MOTION_STATE(Local_578, joaat("MOTIONSTATE_WALK"), false, 1, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(Local_578, Global_35, 6, 0, -1f, -1, 0);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(__LIB_12__::func_717(uParam0, "A_M_M_nbxSlums_01")))
	{
	}
	if (__LIB_13__::func_218(uParam0, Local_698, "A_M_M_nbxSlums_01^1", 0, 1, 1))
	{
		PED::FORCE_PED_MOTION_STATE(Local_698, joaat("MOTIONSTATE_WALK"), false, 1, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(Local_698, Global_35, 6, 0, -1f, -1, 0);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(__LIB_12__::func_717(uParam0, "A_M_M_nbxSlums_01^1")))
	{
	}
	if (__LIB_13__::func_218(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		__LIB_1__::func_951(&iLocal_571);
		__LIB_1__::func_951(&iLocal_572);
	}
}

bool func_670(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_262[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1199(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_262[iParam0]);
		}
	}
	return false;
}

bool func_671()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[7]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[7], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[7], "Arthur", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[7], "Arthur", Global_35, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_291) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[7], "BrotherDorkins", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[7], "BrotherDorkins", iLocal_291, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_570) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[7], "p_woodbowl01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[7], "p_woodbowl01x", iLocal_570, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[7], "Arthur", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[7], "BrotherDorkins", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[7], "p_woodbowl01x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_262[7]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[7], false))
	{
		return true;
	}
	return false;
}

bool func_672()
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35)))
	{
		return false;
	}
	if (__LIB_0__::func_665(Global_35, iLocal_291, 1, 1) > 18f)
	{
		return false;
	}
	return true;
}

char* func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_dialogue01";
		case 1:
			return "pl_dialogue02";
		case 2:
			return "pl_dialogue03";
		default:
			return "pl_dialogue01";
	}
	return "pl_dialogue01";
}

char* func_674()
{
	iLocal_408 = __LIB_3__::func_112(iLocal_291, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iLocal_408)
	{
		case 0:
			return "pl_callover_f";
		case 3:
			return "pl_callover_l";
		case 2:
			return "pl_callover_r";
		default:
			return "pl_callover_f";
	}
	return "pl_callover_f";
}

char* func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_callover_f_idle";
		case 3:
			return "pl_callover_l_idle";
		case 2:
			return "pl_callover_r_idle";
		default:
			return "pl_callover_f_idle";
	}
	return "pl_callover_f_idle";
}

bool func_677()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_274))
	{
		iLocal_274 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2812.549f, -1220.807f, 47.18547f, 0f, 0f, 0f, 7.82553f, 8.066592f, 5.254785f, "Calderon 1.1 ILO trigger");
		return false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[22 /*49*/].f_37))
	{
		__LIB_6__::func_736(&(Local_328[0 /*61*/]), &Local_390, 0, Global_1347702[22 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_390[0 /*17*/]), __LIB_2__::func_460(7), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		return true;
	}
	return false;
}

void func_678(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	func_1205(iParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_6__::func_785(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
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

bool func_683(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		iLocal_291 = __LIB_12__::func_885(uParam0, joaat("CS_BROTHERDORKINS"), vLocal_441, 92.5273f, 1, 1, 0, 1, 1, 1, 1, 0);
		if (!__LIB_0__::func_163(iLocal_291, 993674639))
		{
			__LIB_1__::func_473(iLocal_291, joaat("WORLD_HUMAN_STARE_STOIC"), 0, 0, 0, -1082130432 /* Float: -1f */);
		}
		if (!__LIB_0__::func_163(iLocal_291, 150319005))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_291, Global_35, -1, 48, 41, 0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_686()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[2], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[2], "Arthur", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[2], "Arthur", Global_35, 0);
		}
		if (func_810() && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[2], "S_CLOTHINGCASEDOOR01X", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[2], "S_CLOTHINGCASEDOOR01X", iLocal_552, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[2], "Arthur", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[2], "S_CLOTHINGCASEDOOR01X", false))) && func_842(vLocal_481, vLocal_484, fLocal_487))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_262[2]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[2], false))
	{
		return true;
	}
	return false;
}

bool func_687(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_578) && func_1218(uParam0, bParam1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_578))
	{
		Local_578 = __LIB_12__::func_885(uParam0, iLocal_564, vLocal_456, 0f, 1, 1, 1, 1, 1, 0, 1, 0);
		if (func_1218(uParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_688(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_698) && func_1219(uParam0, bParam1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_698))
	{
		Local_698 = __LIB_12__::func_885(uParam0, iLocal_564, vLocal_459, 0f, 1, 1, 1, 1, 1, 0, 1, 0);
		if (func_1219(uParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_689(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		return true;
	}
	switch (iLocal_52)
	{
		case 0:
			if (!__LIB_0__::func_75(&uLocal_249))
			{
				__LIB_1__::func_148(&uLocal_249);
			}
			else if (__LIB_0__::func_264(&uLocal_249) > 4f)
			{
				iLocal_52 = 1;
			}
			break;
		case 1:
			if (__LIB_10__::func_696(41))
			{
				bLocal_530 = false;
				if (__LIB_0__::func_29(219))
				{
					__LIB_8__::func_91(219);
				}
				__LIB_1__::func_949(219, 0);
				if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(219)))
				{
					PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(219));
					PERSCHAR::_0xA8C406C2A56EDC16(__LIB_0__::func_120(219));
				}
				else
				{
					__LIB_13__::func_108(41, 1, 1);
					STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RCLDN1"), joaat("RCLDN1_FINDCAPTIVEPEACEFUL"), 1);
					iLocal_52 = 5;
					return true;
				}
			}
			else
			{
				iVar0 = __LIB_0__::func_120(219);
				if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar0)) && !ENTITY::_0x88AD6CC10D8D35B2(PERSCHAR::_0x31C70A716CAE1FEE(iVar0)))
					{
						PERSCHAR::_0xE0E65E0D261F7507(iVar0);
					}
					PERSCHAR::_0x7B204F88F6C3D287(iVar0);
					PERSCHAR::_0xA8C406C2A56EDC16(__LIB_0__::func_120(219));
					PERSCHAR::_0x8BC555034A5A5E8C(joaat("SDN_GEN_STORE_SHADY"), joaat("RCSP_CALDERON_MALES_01"));
					PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_SHADY"), 1842035296);
					iLocal_52 = 3;
				}
				bLocal_530 = true;
				return false;
			}
			break;
		case 2:
			iVar0 = __LIB_0__::func_120(219);
			if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar0)))
			{
				PERSCHAR::_0x8BC555034A5A5E8C(joaat("SDN_GEN_STORE_SHADY"), joaat("RCSP_CALDERON_MALES_01"));
				PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_SHADY"), 1842035296);
				PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
				iLocal_52 = 3;
				return false;
			}
			else
			{
				PERSCHAR::_0x7B204F88F6C3D287(iVar0);
				PERSCHAR::_0xA8C406C2A56EDC16(__LIB_0__::func_120(219));
			}
			break;
		case 3:
			if (__LIB_3__::func_397(219, 0))
			{
				iLocal_52 = 4;
			}
			return false;
		case 4:
			iVar0 = __LIB_0__::func_120(219);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				iLocal_410 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_410) && !ENTITY::IS_ENTITY_DEAD(iLocal_410))
				{
					__LIB_12__::func_875(uParam0, iLocal_410, "RCLD1_Shopkeeper", 1);
					__LIB_1__::func_991(iLocal_410, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_410, 7, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_410, 2, 0);
					PED::_0x2E5B5D1F1453E08E(iLocal_410, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_410, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_410, true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_410, true, 7.5f);
					MISC::_0xE98D55C5983F2509(iLocal_410);
					MISC::_0x870708A6E147A9AD(iLocal_410, "", 5f, 0f, 0, 0, 0, 0, 0, -1);
					PED::_0xAE6004120C18DF97(iLocal_410, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_410, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 6, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 174, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 72, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 124, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 130, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 225, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 297, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 317, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 277, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 315, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 169, true);
					if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(219)))
					{
						PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(219));
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_410, iLocal_961);
					PED::SET_PED_CONFIG_FLAG(iLocal_410, 6, true);
					bLocal_530 = true;
					iLocal_52 = 5;
				}
				else if (__LIB_5__::func_458(219))
				{
					if (!PERSCHAR::_0xEB98B38CA60742D7(iVar0))
					{
						iLocal_410 = PERSCHAR::_0x0CADC3A977997472(iVar0, 1);
					}
					else if (PERSCHAR::_0x49A8C2CD97815215(iVar0))
					{
					}
				}
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	iVar1 = __LIB_0__::func_560(__LIB_0__::func_12(), iParam0);
	if (iVar1 == 27)
	{
		__LIB_0__::func_803(-644722288);
	}
	iVar2 = __LIB_1__::func_915(iParam0);
	if (iVar2 >= 15)
	{
		return;
	}
	if (iParam0 == 9)
	{
		bVar3 = CAM::IS_SPHERE_VISIBLE(Global_1914319.f_3[9 /*446*/].f_11, 15f);
		fVar4 = __LIB_0__::func_94(Global_35, Global_1914319.f_3[iParam0 /*446*/].f_11, 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar5 = Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/];
		if (__LIB_0__::func_30(iVar5))
		{
			__LIB_0__::func_68(iVar5, 0, 0);
			if (!__LIB_0__::func_724(iVar5))
			{
				return;
			}
			bVar6 = Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 >= 1f;
			if ((!__LIB_4__::func_925(iVar5) && !Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5) || (!__LIB_11__::func_360(iVar5, bVar6) && Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5))
			{
				if (iParam0 == 9)
				{
					if (fVar4 >= 125f || ((fVar4 < 125f && fVar4 >= 50f) && !bVar3))
					{
						__LIB_1__::func_948(iVar5, 0, Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4, Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5, 1, 0, 0, 0);
					}
					else
					{
						__LIB_1__::func_948(iVar5, 0, 0, 0, 1, 0, 0, 0);
					}
				}
				else
				{
					__LIB_1__::func_948(iVar5, 0, Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4, Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5, 1, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_717(var uParam0)
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
		func_1256(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1258(uParam0);
		func_1259(uParam0);
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

bool func_778()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[8]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[8], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[8], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_291) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[8], "BrotherDorkins", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[8], "BrotherDorkins", iLocal_291, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_570) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[8], "p_woodbowl01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[8], "p_woodbowl01x", iLocal_570, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[8], "BrotherDorkins", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[8], "p_woodbowl01x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_262[8]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[8], false))
	{
		return true;
	}
	return false;
}

void func_781()
{
	if (!bLocal_519 && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT/CALDERON_01_STAGE_1"))
	{
		bLocal_519 = true;
	}
	iLocal_518 = 1;
}

void func_790()
{
	__LIB_2__::func_602(&(Local_192[0 /*17*/]), "CLD_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_227[0 /*17*/]), "CLD_THREATEN", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_794()
{
	Global_1393521.f_2 = 1;
}

void func_796()
{
	__LIB_1__::func_480(&iLocal_410);
	__LIB_2__::func_624(&Local_192, 0, 0, 1, 0);
	__LIB_2__::func_624(&Local_227, 0, 0, 1, 0);
	__LIB_14__::func_48(&(Local_192[0 /*17*/]));
	__LIB_14__::func_48(&(Local_192[1 /*17*/]));
	__LIB_14__::func_48(&(Local_227[0 /*17*/]));
}

void func_797()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_417))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_417, true);
	}
}

void func_802()
{
	switch (iLocal_57)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_410) && !__LIB_0__::func_75(&uLocal_825))
			{
				Local_987.f_3 = Global_35;
				Local_987.f_7 = -1;
				Local_987.f_8 = 4;
				Local_987.f_19 = 3;
				Local_987.f_21 = 3;
				Local_987.f_17 = 0;
				Local_987.f_18 = 0;
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_410, &Local_987);
				__LIB_1__::func_148(&uLocal_825);
			}
			else if (__LIB_0__::func_264(&uLocal_825) > 10f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_551))
				{
					_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_410, 6, 0);
					__LIB_0__::func_37(&uLocal_825);
					iLocal_57 = 1;
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_410) && !__LIB_0__::func_75(&uLocal_825))
			{
				Local_987.f_3 = iLocal_551;
				Local_987.f_7 = -1;
				Local_987.f_8 = 4;
				Local_987.f_19 = 3;
				Local_987.f_21 = 3;
				Local_987.f_17 = 0;
				Local_987.f_18 = 0;
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_410, &Local_987);
				__LIB_1__::func_148(&uLocal_825);
			}
			else if (__LIB_0__::func_264(&uLocal_825) > 4f)
			{
				_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_410, 6, 0);
				__LIB_0__::func_37(&uLocal_825);
				iLocal_57 = 0;
			}
			break;
	}
}

bool func_810()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_552))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_CLOTHINGCASEDOOR01X"));
		return true;
	}
	STREAMING::REQUEST_MODEL(joaat("S_CLOTHINGCASEDOOR01X"), false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("S_CLOTHINGCASEDOOR01X")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_552))
		{
			if (iLocal_1012 == 0)
			{
				iLocal_1012 = ENTITY::_0x6F3068258A499E52(joaat("S_CLOTHINGCASEDOOR01X"), 2858.86f, -1194.85f, 47.99f, 7);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_1012))
			{
				iLocal_552 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1012));
			}
		}
	}
	return false;
}

bool func_811()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_551))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_EAGLEEYESCRATCH_01X"));
		ENTITY::_0x3F08C6163A4AB1D6(iLocal_551);
		ENTITY::CREATE_FORCED_OBJECT(vLocal_447, 5f, joaat("S_EAGLEEYESCRATCH_01X"), true);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_551))
	{
		STREAMING::REQUEST_MODEL(joaat("S_EAGLEEYESCRATCH_01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("S_EAGLEEYESCRATCH_01X")))
		{
			if (iLocal_1013 == 0)
			{
				iLocal_1013 = ENTITY::_0x6F3068258A499E52(joaat("S_EAGLEEYESCRATCH_01X"), vLocal_447, 7);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_1013))
			{
				iLocal_551 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1013));
			}
		}
	}
	return false;
}

bool func_824(bool bParam0)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[1]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[1], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[1], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[1], "Arthur", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[1], "Arthur", Global_35, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[1], "Arthur", false)))
		{
			if (!bParam0)
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_262[1]);
			}
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[1], false))
	{
		return true;
	}
	return false;
}

bool func_833(int iParam0)
{
	if (__LIB_1__::func_530(*iParam0, 1) && PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_DOWN")) > 0.75f)
	{
		return true;
	}
	return false;
}

void func_836(float fParam0)
{
	int iVar0;
	iVar0 = BUILTIN::CEIL(fParam0);
	iVar0 *= 100;
	PAD::SET_PAD_SHAKE(0, 100, iVar0);
}

char* func_838()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			return "Climb_Small";
		case 1:
			return "Climb_Large";
		case 2:
			return "Exert_Melee_Low";
	}
	return "Climb_Small";
}

bool func_841()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[3], "Arthur", false)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[3], "Arthur", Global_35, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_552) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[3], "S_CLOTHINGCASEDOOR01X", false)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[3], "S_CLOTHINGCASEDOOR01X", iLocal_552, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[3], "Arthur", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[3], "S_CLOTHINGCASEDOOR01X", false)))
	{
		return true;
	}
	return false;
}

bool func_842(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return true;
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_553))
	{
		iLocal_553 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vParam3, fParam6, false, 2);
	}
	else if (!CAM::IS_CAM_ACTIVE(iLocal_553))
	{
		CAM::SET_CAM_ACTIVE(iLocal_553, true);
		CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

bool func_850(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		iVar5 = __LIB_4__::func_455(*iParam0, iParam1, uParam2, fParam3, bVar4);
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

void func_854(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_4__::func_456(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_857(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_4__::func_457(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
							__LIB_6__::func_785(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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

char* func_870()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return "Pain_Struggle_100";
		case 1:
			return "Cough_Small";
	}
	return "Pain_Struggle_100";
}

char* func_871()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return "Pain_Exert_Timid_100";
		case 1:
			return "Cower";
	}
	return "Pain_Exert_Timid_100";
}

bool func_872()
{
	int iVar0;
	var uVar1[1];
	var uVar3;
	int iVar10;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_573))
	{
		return true;
	}
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_453, joaat("PROP_PLAYER_CASH_REGISTER"), 1f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		iLocal_573 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar0));
	}
	uVar3 = 6;
	__LIB_14__::func_631(&uVar3, 0);
	iVar10 = func_1398(&uVar1, &uVar3, 1, 2859.9f, -1201.35f, 49.64f, 1.5f);
	if (iVar10 > 0)
	{
		iLocal_573 = uVar1[0];
		return true;
	}
	return false;
}

bool func_873()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[4], true, false))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_574))
		{
			iLocal_574 = OBJECT::CREATE_OBJECT(iLocal_567, 2860.08f, -1201.26f, 49.66f, true, true, false, false, true);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "p_coinStack01", iLocal_574, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_575))
		{
			iLocal_575 = OBJECT::CREATE_OBJECT(iLocal_567, 2860.08f, -1201.24f, 49.66f, true, true, false, false, true);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01^1", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "p_coinStack01^1", iLocal_575, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_576))
		{
			iLocal_576 = OBJECT::CREATE_OBJECT(iLocal_568, 2860.08f, -1201.2f, 49.66f, true, true, false, false, true);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "p_moneyStack01x", iLocal_576, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_577))
		{
			iLocal_577 = OBJECT::CREATE_OBJECT(iLocal_568, 2860.1f, -1201.24f, 49.66f, true, true, false, false, true);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x^1", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "p_moneyStack01x^1", iLocal_577, 1);
		}
		if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x^1", false)))
		{
			return true;
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01^1", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01^2", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x^1", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x^2", false)))
			{
			}
		}
	}
	return false;
}

bool func_874()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[4], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[4], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "Arthur", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "Arthur", Global_35, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_578) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "A_M_M_NBXSLUMS_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "A_M_M_NBXSLUMS_01", Local_578, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_698) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "A_M_M_NBXSLUMS_01^1", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "A_M_M_NBXSLUMS_01^1", Local_698, 0);
		}
		if (func_872() && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "P_REGISTER03X", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[4], "P_REGISTER03X", iLocal_573, 0);
		}
		if (((((((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "Arthur", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "A_M_M_NBXSLUMS_01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "A_M_M_NBXSLUMS_01^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "P_REGISTER03X", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x^1", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_262[4]);
			return true;
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "Arthur", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "A_M_M_NBXSLUMS_01", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[4], "A_M_M_NBXSLUMS_01^1", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "P_REGISTER03X", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_coinStack01^1", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[4], "p_moneyStack01x^1", false)))
			{
			}
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[4], false))
	{
		return true;
	}
	return false;
}

bool func_914(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_914(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_914(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_914(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_914(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_914(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_914(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_914(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_914(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_914(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_914(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_914(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_916()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1505();
	func_1506();
	func_1507();
	func_1508();
	func_1509();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_917(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1512(iParam0, 1, 1, -142743235, 1);
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

void func_951()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1538(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_1057(var uParam0, int iParam1, int iParam2)
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
		return func_1057(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

char* func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@cldn@ig@rsc2_ig1_questionshopkeeper@questionshopkeeper";
		case 1:
			return "script@rcm@cldn@ig@rsc2_ig1_questionshopkeeper@inspectfloor";
		case 2:
		case 3:
			return "script@rcm@cldn@ig@rsc2_ig2_openhiddendoor@openhiddendoor";
		case 4:
			return "script@rcm@cldn@ig@rsc2_ig4_takemoney@takemoney";
		case 5:
			return "script@rcm@cldn@ig@RSC2_IG3_FoundTheSlaves@IG3_FoundTheSlaves_Slave1";
		case 6:
			return "script@rcm@cldn@ig@RSC2_IG3_FoundTheSlaves@IG3_FoundTheSlaves_Slave2";
		case 7:
			return "script@rcm@cldn@leadin@rsc1@leadin";
		case 8:
			return "script@rcm@cldn@leadout@rsc1@leadout";
	}
	return "";
}

void func_1205(int iParam0, int* iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	fVar0 = __LIB_0__::func_514(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_6__::func_742(iParam1, uParam2);
		__LIB_6__::func_749(iParam1);
		__LIB_3__::func_113(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_3__::func_112(Global_35, *iParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_1__::func_694(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_0__::func_514(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

bool func_1218(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_578))
	{
		return false;
	}
	if (iLocal_495 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_578))
	{
		Local_578.f_1 = 5;
		Local_578.f_92 = "pl_react_gun_shot_L";
		Local_578.f_93 = "pl_react_gun_shot_R";
		Local_578.f_94 = "pl_react_gun_shot_Multi";
		Local_578.f_91 = "pl_react_gun_point_2";
		Local_578.f_95 = "pl_shoot_shackles_slave1";
		Local_578.f_96 = "pl_unlock_shackles_slave1";
		Local_578.f_103[0 /*3*/] = { 2855.738f, -1197.774f, 44.60716f };
		Local_578.f_103[1 /*3*/] = { 2856.76f, -1195.285f, 46.35716f };
		Local_578.f_110 = 1.5f;
		Local_578.f_111[0 /*3*/] = { 2857.778f, -1198.388f, 44.60716f };
		Local_578.f_111[1 /*3*/] = { 2857.991f, -1195.042f, 45.85716f };
		Local_578.f_118 = 1.5f;
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_578))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_578, false, true);
		}
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		ENTITY::SET_ENTITY_MAX_HEALTH(Local_578, 25);
		__LIB_4__::func_63(Local_578, 25);
		PED::SET_PED_CONFIG_FLAG(Local_578, 6, true);
		PED::SET_PED_CONFIG_FLAG(Local_578, 340, true);
		PED::SET_PED_CONFIG_FLAG(Local_578, 392, true);
		AUDIO::STOP_PED_SPEAKING(Local_578, true);
		ENTITY::SET_ENTITY_HEADING(Local_578, -179.45f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_578, true);
		PED::SET_PED_CONFIG_FLAG(Local_578, 168, false);
		PED::SET_PED_CONFIG_FLAG(Local_578, 277, true);
		__LIB_12__::func_875(uParam0, Local_578, "NBS_CAPTIVE1", 1);
		ENTITY::_0x9587913B9E772D29(Local_578, 0);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_578);
		TASK::TASK_LOOK_AT_ENTITY(Local_578, Global_35, -1, 48, 51, 0);
		PED::_0x923583741DC87BCE(Local_578, "FREE_SLAVE_01");
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_578, "Cautious", 1f, -1);
		PED::_SET_PED_BODY_COMPONENT(Local_578, 1237014266);
		PED::_UPDATE_PED_VARIATION(Local_578, false, true, true, true, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_578, joaat("PLAYER"));
		iLocal_495 = 1;
	}
	if (bParam1)
	{
		if (!func_1703())
		{
			return false;
		}
	}
	return true;
}

bool func_1219(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_698))
	{
		return false;
	}
	if (iLocal_496 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_698))
	{
		Local_698.f_1 = 6;
		Local_698.f_92 = "pl_react_gun_shot_L";
		Local_698.f_93 = "pl_react_gun_shot_R";
		Local_698.f_94 = "pl_react_gun_shot_Multi";
		Local_698.f_91 = "pl_react_gun_point_2";
		Local_698.f_95 = "pl_shoot_shackles_slave2";
		Local_698.f_96 = "pl_unlock_shackles_slave2";
		Local_698.f_103[0 /*3*/] = { 2857.513f, -1198.551f, 44.60716f };
		Local_698.f_103[1 /*3*/] = { 2859.086f, -1198.417f, 46.37204f };
		Local_698.f_110 = 1f;
		Local_698.f_111[0 /*3*/] = { 2857.732f, -1199.95f, 44.61554f };
		Local_698.f_111[1 /*3*/] = { 2859.7f, -1199.775f, 46.13044f };
		Local_698.f_118 = 1f;
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_698))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_698, false, true);
		}
		ENTITY::SET_ENTITY_MAX_HEALTH(Local_698, 25);
		__LIB_4__::func_63(Local_698, 25);
		AUDIO::STOP_PED_SPEAKING(Local_698, true);
		ENTITY::SET_ENTITY_HEADING(Local_698, 91.63f);
		PED::SET_PED_CONFIG_FLAG(Local_698, 6, true);
		PED::SET_PED_CONFIG_FLAG(Local_698, 340, true);
		PED::SET_PED_CONFIG_FLAG(Local_698, 392, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_698, true);
		PED::SET_PED_CONFIG_FLAG(Local_698, 168, false);
		PED::SET_PED_CONFIG_FLAG(Local_698, 277, true);
		__LIB_12__::func_875(uParam0, Local_698, "NBS_CAPTIVE2", 1);
		ENTITY::_0x9587913B9E772D29(Local_698, 0);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_698);
		TASK::TASK_LOOK_AT_ENTITY(Local_698, Global_35, -1, 48, 51, 0);
		PED::_0x923583741DC87BCE(Local_698, "FREE_SLAVE_02");
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_698, "Cautious", 1f, -1);
		PED::_SET_PED_BODY_COMPONENT(Local_698, 1466561111);
		PED::_UPDATE_PED_VARIATION(Local_698, false, true, true, true, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_698, joaat("PLAYER"));
		iLocal_496 = 1;
	}
	if (bParam1)
	{
		if (!func_1704())
		{
			return false;
		}
	}
	return true;
}

void func_1256(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1716();
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

void func_1258(var uParam0)
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
			func_1724(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1724(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1259(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1724(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1398(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = __LIB_13__::func_213(uParam0, uParam1, iVar0, iParam2);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_1505()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1924(0);
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
	func_1924(1);
}

void func_1506()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_914(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1507()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1927(0);
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
	func_1927(1);
}

void func_1508()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1927(0);
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
	func_1927(1);
}

void func_1509()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_914(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_914(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1512(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1512(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1512(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1512(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1538(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1957(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_914(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1703()
{
	if (func_670(Local_578.f_1, 0, "pl_base_idle"))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_578.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[Local_578.f_1], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_578.f_1], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_578) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_578.f_1], "A_M_M_NBXSLUMS_01", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_578.f_1], "A_M_M_NBXSLUMS_01", Local_578, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_578.f_89))
			{
				STREAMING::REQUEST_MODEL(joaat("P_CS_SHADBMNT_SHKL01X"), false);
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SHADBMNT_SHKL01X")))
				{
					Local_578.f_89 = OBJECT::CREATE_OBJECT(joaat("P_CS_SHADBMNT_SHKL01X"), 2856.53f, -1197.46f, 44.61f, true, true, false, false, true);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_578.f_89) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_578.f_1], "P_CS_SHADBMNT_SHKL01X", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_578.f_1], "P_CS_SHADBMNT_SHKL01X", Local_578.f_89, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_578.f_90))
			{
				STREAMING::REQUEST_MODEL(joaat("P_CS_PICK01X"), false);
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_PICK01X")))
				{
					Local_578.f_90 = OBJECT::CREATE_OBJECT(joaat("P_CS_PICK01X"), 2856.54f, -1197.47f, 44.61f, true, true, false, false, true);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_578.f_90) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_578.f_1], "P_CS_PICK01X", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_578.f_1], "P_CS_PICK01X", Local_578.f_90, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_578.f_1], "Arthur", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_578.f_1], "Arthur", Global_35, 0);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_578.f_1], "A_M_M_NBXSLUMS_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_578.f_1], "Arthur", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_578.f_1], "P_CS_SHADBMNT_SHKL01X", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_578.f_1], "P_CS_PICK01X", false)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_578))
				{
					PED::SET_ENABLE_HANDCUFFS(Local_578, true, true);
					PED::_0xE1AADD0055D76603(Local_578, Local_578.f_89, PED::GET_PED_BONE_INDEX(Local_578, 53675), -1, ENTITY::GET_ENTITY_COORDS(Local_578.f_89, true, false), -1f, 1, 0, -1);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_262[Local_578.f_1]);
				return true;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_578.f_1], false))
		{
			return true;
		}
	}
	return false;
}

bool func_1704()
{
	if (func_670(Local_698.f_1, 0, "pl_base_idle"))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_262[Local_698.f_1]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_262[Local_698.f_1], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_698.f_1], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_698) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_698.f_1], "A_M_M_NBXSLUMS_01^1", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_698.f_1], "A_M_M_NBXSLUMS_01^1", Local_698, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_698.f_89))
			{
				STREAMING::REQUEST_MODEL(joaat("P_CS_SHADBMNT_SHKL01X"), false);
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SHADBMNT_SHKL01X")))
				{
					Local_698.f_89 = OBJECT::CREATE_OBJECT(joaat("P_CS_SHADBMNT_SHKL01X"), 2858.61f, -1200.85f, 44.61f, true, true, false, false, true);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_698.f_89) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_698.f_1], "P_CS_SHADBMNT_SHKL01X^1", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_698.f_1], "P_CS_SHADBMNT_SHKL01X^1", Local_698.f_89, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_698.f_90))
			{
				STREAMING::REQUEST_MODEL(joaat("P_CS_PICK01X"), false);
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_PICK01X")))
				{
					Local_698.f_90 = OBJECT::CREATE_OBJECT(joaat("P_CS_PICK01X"), 2858.65f, -1200.87f, 44.61f, true, true, false, false, true);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_698.f_90) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_698.f_1], "P_CS_PICK01X", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_698.f_1], "P_CS_PICK01X", Local_698.f_90, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_698.f_1], "Arthur", false)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_262[Local_698.f_1], "Arthur", Global_35, 0);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_698.f_1], "A_M_M_NBXSLUMS_01^1", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_262[Local_698.f_1], "Arthur", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_698.f_1], "P_CS_SHADBMNT_SHKL01X^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_262[Local_698.f_1], "P_CS_PICK01X", false)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_698))
				{
					PED::SET_ENABLE_HANDCUFFS(Local_698, true, true);
					PED::_0xE1AADD0055D76603(Local_698, Local_698.f_89, PED::GET_PED_BONE_INDEX(Local_698, 53675), -1, ENTITY::GET_ENTITY_COORDS(Local_698.f_89, true, false), -1f, 1, 0, -1);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_262[Local_698.f_1]);
				return true;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_262[Local_698.f_1], false))
		{
			return true;
		}
	}
	return false;
}

void func_1716()
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
	iVar0 = func_2032(6291456, 0);
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

void func_1724(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1724(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1724(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1924(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_914(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2142(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_917(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1512(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2148(Var0);
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

void func_1927(bool bParam0)
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
		func_914(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_914(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1512(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1512(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1512(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1957(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1957(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1957(iVar63, -915411861, 1, 0, 0));
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

int func_2032(int iParam0, int iParam1)
{
	var uVar0;
	return func_2195(&uVar0, iParam0, iParam1);
}

void func_2142(int iParam0)
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
	func_1512(iParam0, 1, 1, -142743235, 1);
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
		func_1512(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2148(struct<6> Param0)
{
	if (!func_2263(Param0.f_4, 1))
	{
	}
	if (!func_2263(Param0, 1))
	{
	}
	if (!func_2263(Param0.f_2, 1))
	{
	}
	if (!func_2263(Param0.f_5, 1))
	{
	}
	if (!func_2263(Param0.f_3, 1))
	{
	}
	if (!func_2263(Param0.f_1, 1))
	{
	}
}

int func_2195(var uParam0, int iParam1, int iParam2)
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
		return func_2195(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2263(int iParam0, int iParam1)
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
				if (func_2263(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2263(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2263(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2263(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

