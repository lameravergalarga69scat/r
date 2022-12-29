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
	struct<193> Local_17 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_210 = 0;
	struct<2> Local_211[14];
	struct<32> Local_240[2];
	struct<11> Local_305 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_316 = 0;
	var uLocal_317[2] = { 0, 0 };
	var uLocal_320[3] = { 0, 0, 0 };
	int iLocal_324[2] = { 0, 0 };
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 13;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
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
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
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
	struct<11> Local_435 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	struct<5> Local_477 = { 0, 0, 0, 0, 0 } ;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = -1;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 1097859072;
	var uLocal_509 = 1000;
	var uLocal_510 = 1067450368;
	var uLocal_511 = 5000;
	var uLocal_512 = 42;
	var uLocal_513 = 1103626240;
	var uLocal_514 = 1077936128;
	var uLocal_515 = 1106247680;
	var uLocal_516 = 1103101952;
	var uLocal_517 = 1097859072;
	var uLocal_518 = 1103626240;
	var uLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = -1;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 1097859072;
	var uLocal_540 = 1000;
	var uLocal_541 = 1067450368;
	var uLocal_542 = 5000;
	var uLocal_543 = 42;
	var uLocal_544 = 1103626240;
	var uLocal_545 = 1077936128;
	var uLocal_546 = 1106247680;
	var uLocal_547 = 1103101952;
	var uLocal_548 = 1097859072;
	var uLocal_549 = 1103626240;
	struct<21> Local_550[2];
	struct<17> Local_593[3];
	struct<17> Local_645[3];
	int iLocal_697[3] = { 0, 0, 0 };
	int iLocal_701[3] = { 0, 0, 0 };
	int iLocal_705 = 0;
	int iLocal_706[2] = { 0, 0 };
	bool bLocal_709 = false;
	var uLocal_710 = 0;
	struct<24> Local_711 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0 } ;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = -1082130432;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	float fLocal_755 = 0f;
	var uLocal_756 = 0;
	bool bLocal_757 = false;
	bool bLocal_758 = false;
	var uLocal_759 = 0;
	bool bLocal_760 = false;
	bool bLocal_761 = false;
	bool bLocal_762 = false;
	vector3 vLocal_763 = { 0f, 0f, 0f };
	vector3 vLocal_766 = { 0f, 0f, 0f };
	int iLocal_769[3] = { 0, 0, 0 };
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
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
	var uLocal_818 = 0;
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
	var uLocal_837 = 1065353216;
	var uLocal_838 = 1065353216;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 1065353216;
	var uLocal_843 = 1065353216;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 1065353216;
	var uLocal_848 = 1065353216;
	var uLocal_849 = 0;
	var uLocal_850 = 1040187392;
	var uLocal_851 = 1040187392;
	var uLocal_852 = -1;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = -1082130432;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	struct<24> Local_871 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	int iLocal_904 = 0;
	struct<23> Local_905 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	struct<23> Local_930 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	char* sLocal_955 = NULL;
	char* sLocal_956 = NULL;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 1065353216;
	var uLocal_963 = 1119092736;
	var uLocal_964 = 1092616192;
	var uLocal_965 = 1085276160;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_705 = 458;
	fLocal_755 = 7f;
	sLocal_956 = "GuyInToilet";
	Local_17.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_17.f_43 = __LIB_0__::func_12();
	iLocal_486 = 0;
	Local_17.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_420(&Local_17, 1);
	func_5();
	func_6();
	func_7();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_762 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_762, 1429, 0);
		if (bLocal_762)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_16)
			{
				case 0:
					if (func_10())
					{
						iLocal_16 = 1;
					}
					break;
				case 1:
					if (__LIB_4__::func_218(&Local_17, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_12(&Local_17, &uLocal_487, &uLocal_488);
						func_13();
						if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_41))
						{
							POPULATION::_0xF74E134F40192884(Global_1935630.f_41, 1);
						}
						__LIB_0__::func_568(Local_240[0 /*32*/].f_6, 15f, 1);
						__LIB_3__::func_867(&uLocal_773, &uLocal_749, Local_240[1 /*32*/].f_6, 0f, 0f, 0f, 12f, 12f, 12f, 0, 272352, 1, 8, 0);
						__LIB_3__::func_867(&uLocal_774, &uLocal_750, -1818.278f, -460.9477f, 167.8511f, 0f, 0f, 0f, 3f, 3f, 3f, 0, 0, 1, 0, 0);
						iLocal_16 = 3;
					}
					else if (Local_17.f_160)
					{
						func_8();
					}
					break;
				case 3:
					if (func_16())
					{
						__LIB_0__::func_7(&Global_1935630, 262144);
						iLocal_16 = 4;
					}
					break;
				case 4:
					if (!__LIB_4__::func_175(&Local_17, &iLocal_324, iLocal_486, func_18(128), 1, 0, !func_18(128), 0))
					{
						func_8();
					}
					if (func_20())
					{
						Local_17.f_50 = 1;
						func_8();
					}
					if (!func_18(4194304))
					{
						if (__LIB_3__::func_365(&Local_17, &iLocal_324, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_8();
						}
					}
					else if (__LIB_3__::func_365(&Local_17, &iLocal_324, 0, 1, 1, 0, 1, 1, 0, vLocal_766.x, vLocal_766.y, vLocal_766.z, 0))
					{
						func_8();
					}
					LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
					break;
			}
			BUILTIN::WAIT(Local_17.f_158);
		}
	}
}

void func_5()
{
	Local_240[0 /*32*/].f_1 = joaat("RE_ONTHERUN_MALES_01");
	StringCopy(&(Local_240[0 /*32*/].f_23), "0843_S_M_M_UniButchers_01_WHITE_02", 64);
	Local_240[0 /*32*/].f_3 = 1577039406;
	Local_240[1 /*32*/].f_1 = joaat("RE_ONTHERUN_MALES_01");
	StringCopy(&(Local_240[1 /*32*/].f_23), "0044_A_M_M_BynRoughTravellers_01_WHITE_01", 64);
	Local_240[1 /*32*/].f_3 = -657458017;
	__LIB_4__::func_169(&(Local_240[0 /*32*/]), -1778.258f, -379.2964f, 157.3419f, 0f, 0, 1, 0);
	Local_477.f_4 = "script@beat@town@onTheRun@find_swindler";
	Local_435[0 /*3*/] = { -1798.089f, -350.7399f, 163.0258f };
	Local_435[1 /*3*/] = { -1797.789f, -367.6598f, 160.4626f };
	Local_435[2 /*3*/] = { -1790.96f, -371.2196f, 159.1193f };
	Local_435.f_10[0 /*3*/] = { -1760.049f, -398.3492f, 154.7754f };
	Local_435.f_10[1 /*3*/] = { -1768.49f, -400.7426f, 154.6392f };
	Local_435.f_10[2 /*3*/] = { -1773.031f, -391.154f, 155.9203f };
	Local_435.f_20 = { -1808.712f, -425.0107f, 158.0225f };
	Local_435.f_35 = 51f;
	Local_435.f_29 = { -1801.99f, -434.1437f, 155.7245f };
	Local_435.f_36 = 169.14f;
	Local_435.f_38 = 8.25f;
	Local_305.f_7 = joaat("P_DETONATOR01X");
	Local_305 = { 0f, 0f, 0f };
	Local_305.f_10 = 0;
}

void func_6()
{
	__LIB_2__::func_289(&uLocal_522);
	__LIB_2__::func_613(&uLocal_522, 1);
	__LIB_3__::func_407(&uLocal_522, 15f);
	__LIB_2__::func_290(&(Local_17.f_5));
	__LIB_2__::func_105(&(Local_17.f_5), 1);
	__LIB_2__::func_110(&(Local_17.f_5), 1);
	__LIB_3__::func_333(&(Local_17.f_5), 1);
	__LIB_2__::func_613(&(Local_17.f_5), 1);
	__LIB_3__::func_407(&(Local_17.f_5), 15f);
	__LIB_2__::func_613(&(Local_17.f_5), 1);
	__LIB_2__::func_906(&(Local_17.f_5), 42);
	__LIB_2__::func_507(&(Local_17.f_5), 2000);
	__LIB_2__::func_52(&(Local_17.f_5), 1);
	__LIB_2__::func_180(&(Local_17.f_5), 1);
	__LIB_2__::func_111(&(Local_17.f_5), 1);
	__LIB_3__::func_230(&(Local_17.f_5), 1);
	__LIB_2__::func_715(&(Local_17.f_5), 1);
	__LIB_2__::func_290(&uLocal_491);
	__LIB_2__::func_105(&uLocal_491, 1);
	__LIB_2__::func_51(&uLocal_491, 0);
	__LIB_3__::func_234(&uLocal_491);
	__LIB_2__::func_906(&uLocal_491, 5);
	__LIB_1__::func_975(&uLocal_491, 5f);
	__LIB_2__::func_110(&uLocal_491, 1);
	__LIB_2__::func_52(&uLocal_491, 1);
	__LIB_2__::func_180(&uLocal_491, 1);
	__LIB_3__::func_230(&uLocal_491, 1);
	__LIB_3__::func_407(&uLocal_491, 3f);
}

void func_7()
{
	iLocal_697[0] = 7;
	iLocal_697[1] = 10;
	__LIB_2__::func_602(&(Local_593[0 /*17*/]), __LIB_2__::func_460(iLocal_697[0]), "RE_OR_CGH_V1_SW_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_593[1 /*17*/]), __LIB_2__::func_460(iLocal_697[1]), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_482(&(Local_593[1 /*17*/]), 1, 1);
	iLocal_701[0] = 7;
	iLocal_701[1] = 10;
	iLocal_706[0] = 1;
	__LIB_2__::func_602(&(Local_645[0 /*17*/]), __LIB_2__::func_460(iLocal_701[0]), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_645[1 /*17*/]), __LIB_2__::func_460(iLocal_701[1]), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(&Local_645, 0, 0);
}

void func_8()
{
	vector3 vVar0;
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
	func_45();
	if (iLocal_15 < 3)
	{
		Local_17.f_45 = 0;
	}
	if (iLocal_486 == 0)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_752))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_752, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_240[0 /*32*/].f_11))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_240[0 /*32*/].f_11, false);
		}
	}
	__LIB_0__::func_172(iLocal_776);
	__LIB_1__::func_682(Local_17.f_3);
	__LIB_3__::func_525(&uLocal_773, &uLocal_749);
	__LIB_3__::func_525(&uLocal_774, &uLocal_750);
	__LIB_3__::func_823(&Local_17, &iLocal_324, &uLocal_317, iLocal_486, uLocal_487, uLocal_488, 0, 1, 0, 1);
	__LIB_2__::func_344(&(iLocal_324[0]));
	__LIB_2__::func_593(&(Local_550[0 /*21*/]), &Local_593);
	__LIB_2__::func_344(&(iLocal_324[1]));
	__LIB_2__::func_593(&(Local_550[1 /*21*/]), &Local_645);
	__LIB_0__::func_8(&Global_1935630, 4);
	__LIB_0__::func_8(&Global_1935630, 262144);
	__LIB_3__::func_953(&iLocal_904, 1);
	__LIB_2__::func_298();
	__LIB_4__::func_72(Global_35);
	__LIB_0__::func_172(iLocal_775);
	__LIB_0__::func_172(iLocal_777);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_956);
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	__LIB_1__::func_65(17, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_10()
{
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_17))
			{
				func_60();
				func_61();
				if (iLocal_486 == 0)
				{
					STREAMING::REQUEST_MODEL(Local_305.f_7, false);
				}
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_315(&uLocal_330))
			{
				return false;
			}
			if (iLocal_486 == 0 && !STREAMING::HAS_MODEL_LOADED(Local_305.f_7))
			{
				return false;
			}
			if (Local_240[0 /*32*/].f_1 != 0 && !__LIB_3__::func_289(&(Local_240[0 /*32*/])))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("REOR_Sounds", 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_12(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
	}
}

void func_13()
{
	Local_240[0 /*32*/].f_6 = { -1788.724f, -366.6714f, 159.7196f };
	Local_240[1 /*32*/].f_6 = { -1825.021f, -448.8559f, 159.0318f };
	Local_240[0 /*32*/].f_9 = 79.4051f;
	Local_240[1 /*32*/].f_9 = 64.7084f;
	Local_17.f_51 = { Local_240[0 /*32*/].f_6 };
	Local_17.f_51.f_3 = 0f;
}

bool func_16()
{
	if (!__LIB_2__::func_1(iLocal_324[0], 0, 1))
	{
		iLocal_324[0] = __LIB_3__::func_870(Local_240[0 /*32*/].f_1, &(Local_240[0 /*32*/]), Local_240[0 /*32*/].f_6, Local_240[0 /*32*/].f_9, 1, 0, 1, 0, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_324[0], true, true);
		PED::_0x923583741DC87BCE(iLocal_324[0], "Default");
		PED::_0x89F5E7ADECCCB49C(iLocal_324[0], "Angry");
		func_75(0);
		__LIB_3__::func_285(iLocal_324[0], &Local_17, 0);
		__LIB_3__::func_176(iLocal_324[0], 0);
	}
	else if (!__LIB_2__::func_1(Local_240[0 /*32*/].f_11, 0, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_240[0 /*32*/].f_11) && Local_240[0 /*32*/].f_12 != 0)
		{
			Local_240[0 /*32*/].f_11 = __LIB_3__::func_870(Local_240[0 /*32*/].f_12, &(Local_240[0 /*32*/]), Local_240[0 /*32*/].f_15, Local_240[0 /*32*/].f_18, 1, 1, 1, 0, 1);
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

bool func_18(int iParam0)
{
	return __LIB_0__::func_27(iLocal_327, iParam0);
}

bool func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_87();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_324[1]))
	{
		PED::SET_PED_RESET_FLAG(iLocal_324[1], 79, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_324[0]))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_324[0], Local_477) && FIRE::IS_ENTITY_ON_FIRE(iLocal_324[0]))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_477, func_88(1), iLocal_324[0]);
			PED::SET_PED_TO_RAGDOLL(iLocal_324[0], 200, 200, 0, false, true, false);
		}
	}
	if (__LIB_2__::func_1(Local_240[0 /*32*/].f_11, 0, 1) && !func_18(65536))
	{
		if (iLocal_486 == 0)
		{
			iLocal_751 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-1778.258f, -379.2964f, 157.3419f, joaat("PROP_HITCHINGPOST"), 3f, 1, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_751))
			{
				TASK::_TASK_USE_SCENARIO_POINT(Local_240[0 /*32*/].f_11, iLocal_751, 0, 0, false, true, 0, false, -1f, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_240[0 /*32*/].f_11, true);
			}
			func_89(65536);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_324[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_324[1]))
	{
		if (__LIB_2__::func_118(iLocal_324[1], 1, 1) < 5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 247, true);
		}
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_324[1], 0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_324[1], false);
	}
	func_91();
	if (iLocal_485 != 0 || iLocal_485 != 5)
	{
		func_92();
	}
	switch (iLocal_15)
	{
		case 0:
			func_93();
			if (!func_94(1))
			{
				if (__LIB_0__::func_48(iLocal_324[0], Global_35, (50f - 2f), 1) && __LIB_3__::func_452(&Local_17, 1077936128 /* Float: 3f */, 40f, 45f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
				{
					func_97(iLocal_324[0], Local_211[0 /*2*/], Local_211[0 /*2*/].f_1, 0, 1);
					func_98(1);
					__LIB_2__::func_526(&Local_593, 0, 0);
				}
			}
			else if (__LIB_2__::func_227(-4f, 1, 0, 0) || bLocal_760)
			{
				__LIB_3__::func_987(&uLocal_522, ENTITY::GET_ENTITY_COORDS(iLocal_324[0], true, false), 15f);
				if ((func_101(iLocal_324[0], &uLocal_522, &uLocal_521, 0) || __LIB_0__::func_665(Global_35, iLocal_324[0], 1, 1) < 10f) || __LIB_1__::func_285(&uLocal_815, 1.5f))
				{
					__LIB_3__::func_237(&uLocal_522, &uLocal_521);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_324[0], Global_35, -1, -1f, -1f, -1f);
					func_105(1);
					func_106(Global_35);
					func_107(1);
				}
				else if (!__LIB_0__::func_75(&uLocal_782))
				{
					__LIB_1__::func_283(&uLocal_782, 1);
				}
				else if (__LIB_0__::func_265(&uLocal_782) >= 10f)
				{
					if (!func_94(2))
					{
						__LIB_1__::func_148(&uLocal_782);
						func_97(iLocal_324[0], Local_211[1 /*2*/], Local_211[1 /*2*/].f_1, 0, 1);
						func_98(2);
					}
					else if (!func_94(4))
					{
						__LIB_1__::func_148(&uLocal_782);
						func_97(iLocal_324[0], Local_211[2 /*2*/], Local_211[2 /*2*/].f_1, 0, 1);
						func_98(4);
					}
				}
			}
			break;
		case 1:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			if (PED::IS_PED_FACING_PED(iLocal_324[0], Global_35, 20f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_324[0]))
			{
				if (!func_18(128))
				{
					func_112(iLocal_324[0], Global_35, 1);
					if (!bLocal_760)
					{
						__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_SEE_PLAYER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_97(iLocal_324[0], Local_211[3 /*2*/], Local_211[3 /*2*/].f_1, 0, 1);
					}
					__LIB_1__::func_148(&uLocal_827);
					func_107(2);
				}
				else
				{
					__LIB_0__::func_325(&(uLocal_317[0]));
					func_112(iLocal_324[0], Global_35, 1);
					__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_ASK_FOUND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_45();
					__LIB_4__::func_171(iLocal_904, 1);
					func_116(34, 1, 0);
					__LIB_1__::func_148(&uLocal_782);
					func_107(12);
				}
			}
			if (__LIB_2__::func_118(iLocal_324[0], 1, 1) > 35f)
			{
				func_117();
			}
			break;
		case 2:
			func_118(iLocal_324[0], Global_35, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_324[0], 1f);
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			if (!func_18(1))
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_35) < 3f && __LIB_2__::func_118(iLocal_324[0], 1, 1) < 10f)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_324[0], Local_211[3 /*2*/], Local_211[3 /*2*/].f_1, 1) && (MISC::IS_STRING_NULL_OR_EMPTY(Local_211[4 /*2*/]) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_324[0], Local_211[4 /*2*/], Local_211[4 /*2*/].f_1, 1)))
					{
						iLocal_778 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iLocal_324[0], true, false), 0f, 0f, 0f, 3f, 3f, 3f);
						PED::_0x7C00CFC48A782DC0(iLocal_778, iLocal_324[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						iLocal_904 = __LIB_4__::func_173(iLocal_324[0], iLocal_778, 16);
						func_97(iLocal_324[0], Local_211[5 /*2*/], Local_211[5 /*2*/].f_1, 0, 1);
						__LIB_0__::func_37(&uLocal_782);
						func_89(1);
					}
				}
				if (__LIB_2__::func_118(iLocal_324[0], 1, 1) > 60f || __LIB_1__::func_285(&uLocal_827, 20f))
				{
					func_117();
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_211[6 /*2*/].f_1))
				{
					__LIB_4__::func_174(iLocal_324[0], &uLocal_957, 0f, 0f, 0.5f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 2000, 0.5f, 1, 1, 1084227584 /* Float: 5f */);
					if (__LIB_3__::func_496(iLocal_324[0], "bAnimDone", 1067030938 /* Float: 1.2f */))
					{
						func_97(iLocal_324[0], Local_211[6 /*2*/], Local_211[6 /*2*/].f_1, 0, 1);
						func_98(8);
					}
				}
				else
				{
					func_98(8);
				}
				if (func_94(8))
				{
					__LIB_1__::func_148(&uLocal_779);
					__LIB_1__::func_148(&uLocal_782);
					func_123();
					func_107(3);
				}
			}
			break;
		case 3:
			__LIB_4__::func_113(Global_35, iLocal_324[0], 6f, &uLocal_756, 0, 1, 1);
			__LIB_4__::func_174(iLocal_324[0], &uLocal_957, 0f, 0f, 0.5f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 2000, 0.5f, 1, 1, 1084227584 /* Float: 5f */);
			func_118(iLocal_324[0], Global_35, 1);
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			if (__LIB_3__::func_496(iLocal_324[0], "RE_OR_STR_V1_CI_ASK_HELP", 1067030938 /* Float: 1.2f */))
			{
				__LIB_1__::func_148(&uLocal_788);
				__LIB_2__::func_298();
				__LIB_4__::func_72(Global_35);
				func_116(0, 1, 0);
				fLocal_755 = 12.5f;
				func_107(4);
			}
			break;
		case 4:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			func_118(iLocal_324[0], Global_35, 1);
			if (__LIB_1__::func_285(&uLocal_788, fLocal_755))
			{
				if (!func_125(2097152))
				{
					__LIB_1__::func_148(&uLocal_788);
					fLocal_755 = 10f;
					__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_ASK_HELP_WAIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_126(2097152);
				}
				else
				{
					func_117();
				}
			}
			if (__LIB_2__::func_118(iLocal_324[0], 1, 1) > 20f)
			{
				func_117();
			}
			break;
		case 6:
			if (!func_18(-2147483648))
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					func_89(-2147483648);
				}
			}
			if (!func_18(128))
			{
				func_127(16, Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_REFUSE_TO_HELP", 1506116031, Local_211[8 /*2*/], Local_211[8 /*2*/].f_1);
				if (((func_125(16) && __LIB_1__::func_285(&uLocal_782, 5f)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_2__::func_227(-7f, 1, 0, 0))
				{
					__LIB_0__::func_37(&uLocal_782);
					__LIB_1__::func_727(iLocal_324[0], 1);
					__LIB_1__::func_148(&uLocal_812);
					func_97(iLocal_324[0], Local_211[9 /*2*/], Local_211[9 /*2*/].f_1, 0, 1);
				}
			}
			else if (!func_125(8192) && __LIB_1__::func_285(&uLocal_782, 0.5f))
			{
				__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_REFUSE_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_126(8192);
				__LIB_1__::func_148(&uLocal_782);
				TASK::TASK_REACT(iLocal_324[0], Global_35, Global_36, "DEFAULT_ANGRY", 2f, 5f, 4);
			}
			else if (__LIB_1__::func_285(&uLocal_782, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_0__::func_37(&uLocal_782);
				__LIB_1__::func_727(iLocal_324[0], 1);
				__LIB_1__::func_148(&uLocal_812);
				func_97(iLocal_324[0], Local_211[9 /*2*/], Local_211[9 /*2*/].f_1, 0, 1);
			}
			if (!func_125(32) && __LIB_3__::func_496(iLocal_324[0], "refuse_response", 1067030938 /* Float: 1.2f */))
			{
				if (!func_18(4096))
				{
					__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_REFUSE_RESPONSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_126(32);
			}
			if (__LIB_1__::func_285(&uLocal_812, 3f) && func_125(32))
			{
				__LIB_0__::func_37(&uLocal_800);
				Local_17.f_50 = 1;
				bLocal_761 = false;
				TASK::TASK_WANDER_STANDARD(iLocal_324[0], 40000f, 0);
				__LIB_1__::func_148(&uLocal_797);
				func_107(27);
			}
			break;
		case 5:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			func_118(iLocal_324[0], Global_35, 1);
			if (!func_18(-2147483648))
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					func_89(-2147483648);
				}
			}
			if (!func_18(2))
			{
				func_127(16, Global_35, iLocal_324[0], "RE_OR_STR_V1_CI_AGREE_TO_HELP", 1506116031, Local_211[7 /*2*/], Local_211[7 /*2*/].f_1);
				if (((func_125(16) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_324[0], Local_211[10 /*2*/], Local_211[10 /*2*/].f_1, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_2__::func_227(-7f, 1, 0, 0))
				{
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						func_97(iLocal_324[0], Local_211[11 /*2*/], Local_211[11 /*2*/].f_1, 0, 1);
						func_89(2);
						__LIB_1__::func_148(&uLocal_800);
					}
				}
			}
			else if (func_94(16))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_324[0], Local_211[11 /*2*/], Local_211[11 /*2*/].f_1, 1))
				{
					func_129();
					if (__LIB_2__::func_1(iLocal_324[0], 0, 1))
					{
						__LIB_1__::func_727(iLocal_324[0], 0);
					}
					TASK::CLEAR_PED_TASKS(iLocal_324[0], true, false);
					bLocal_761 = false;
					func_75(1);
					func_130("RE_ORB_OBJ_SRCH", 1);
					__LIB_0__::func_37(&uLocal_800);
					__LIB_1__::func_148(&uLocal_797);
					__LIB_3__::func_966(iLocal_904, 1);
					func_116(24, 1, 0);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_324[1], sLocal_956, 0f, 0f, 0f, 0, "");
					func_107(8);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_324[0], Local_211[11 /*2*/], Local_211[11 /*2*/].f_1, 1))
			{
				func_98(16);
			}
			break;
		case 8:
			if (!func_125(2048))
			{
				if ((__LIB_0__::func_665(iLocal_324[0], Global_35, 1, 1) < 7f && __LIB_3__::func_112(iLocal_324[0], Global_35, 1060437492 /* Float: 0.707f */) != 1) || func_18(32768))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
					if (__LIB_1__::func_285(&uLocal_797, 18f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						__LIB_2__::func_526(&Local_593, 1, 0);
						__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_CUSTOMER_LOITER_HELP_ALT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_482(&(Local_593[0 /*17*/]), 1, 1);
						func_126(2048);
					}
				}
			}
			if (__LIB_2__::func_118(iLocal_324[1], 1, 1) < 15f)
			{
				__LIB_2__::func_478(iLocal_324[1], Global_35, "RE_OR_STR_V1_CI_SWINDLER_ATTRACT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_89(524288);
				__LIB_2__::func_315(1891783641, iLocal_324[1], 1);
				func_75(1);
				func_107(9);
			}
			break;
		case 9:
			if (!func_18(4))
			{
				if (__LIB_2__::func_227(-5f, 1, 0, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_324[1]))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_324[1], 1, 1) < 10f)
					{
						__LIB_3__::func_334(&uLocal_320);
						__LIB_2__::func_73(iLocal_324[1], &(uLocal_317[1]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, "RE_OR_BLIP_SWINDLER");
						func_89(4);
						if (!func_125(64))
						{
							__LIB_2__::func_478(Global_35, iLocal_324[1], "RE_OR_STR_V1_CL_PLAYER_CALL_OUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_126(64);
						}
						__LIB_2__::func_104(&(Local_17.f_5), 0);
					}
				}
			}
			else if (__LIB_0__::func_665(iLocal_324[1], Global_35, 0, 1) < 3.5f)
			{
				iVar1 = __LIB_3__::func_112(iLocal_324[1], Global_35, 1060437492 /* Float: 0.707f */);
				if (iVar1 == 0)
				{
					func_89(1048576);
					__LIB_2__::func_478(Global_35, iLocal_324[1], "RE_OR_STR_V1_CL_FIND_SWINDLER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_283(&uLocal_785, 1);
					__LIB_2__::func_526(&Local_645, 0, 0);
					__LIB_2__::func_592(&Local_645, 1, 1);
					func_45();
					__LIB_3__::func_407(&uLocal_491, 30f);
					__LIB_2__::func_51(&uLocal_491, 1);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_324[1], Global_35, -1, 0, 51, 0);
					func_107(10);
				}
			}
			break;
		case 10:
			if (((__LIB_2__::func_227(-4f, 1, 0, 0) && !func_138()) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_477, "Bool")) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_477, "Bool", true, false);
			}
			func_139();
			if (!func_18(256) && __LIB_0__::func_94(iLocal_324[0], Local_435.f_39, 0) < 0.25f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(1, 0), true);
				__LIB_2__::func_507(&(Local_17.f_5), 2500);
				__LIB_2__::func_180(&(Local_17.f_5), 0);
				__LIB_0__::func_325(&(uLocal_317[1]));
				__LIB_2__::func_51(&uLocal_491, 0);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_324[1]);
				func_89(256);
			}
			if (!func_18(256))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[1], &Local_930);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_324[0], joaat("EXITSCENE")) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_477))
			{
				__LIB_0__::func_172(iLocal_775);
				func_89(16);
				iLocal_489 = 4;
				func_89(262144);
				func_107(26);
			}
			if (__LIB_3__::func_496(iLocal_324[1], "RE_OR_UPDATE_SEARCHER", 1067030938 /* Float: 1.2f */))
			{
				func_142();
			}
			break;
		case 11:
			if (!func_18(256))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[1], &Local_930);
			}
			func_139();
			__LIB_3__::func_987(&uLocal_522, ENTITY::GET_ENTITY_COORDS(iLocal_324[0], true, false), 15f);
			if (func_101(iLocal_324[0], &uLocal_522, &uLocal_521, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, "Default_Curious", 2f, 0f, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 0.5f, 1f, 7.5f, 0);
				__LIB_1__::func_474(iLocal_324[0], &iVar0, 0, 0, 1, 1);
				func_107(1);
			}
			break;
		case 12:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			func_118(iLocal_324[0], Global_35, 1);
			break;
		case 13:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_TRUTH_RESPONSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_116(25, 1, 0);
				func_105(0);
				TASK::_0x42CFD8FD8CC8DC69(iLocal_324[0], 1);
				func_144(1069547520 /* Float: 1.5f */);
				func_145(1);
				__LIB_3__::func_953(&iLocal_904, 1);
				__LIB_2__::func_526(&Local_593, 1, 0);
				func_107(16);
				Local_305.f_8 = OBJECT::CREATE_OBJECT(Local_305.f_7, -1824.669f, -449.9703f, 159.6436f, true, true, false, false, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_305.f_8, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_305.f_8, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_305.f_8, 1);
			}
			break;
		case 14:
			if (!func_18(1024))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_LIE_RESPONSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_105(0);
					TASK::TASK_MOUNT_ANIMAL(iLocal_324[0], Local_240[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
					__LIB_3__::func_953(&iLocal_904, 1);
					func_89(1024);
				}
			}
			else if (PED::IS_PED_ON_MOUNT(iLocal_324[0]))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_240[0 /*32*/].f_11, -1524.639f, -561.0462f, 136.8918f, 1073741824 /* Float: 2f */, 1.501f, 0, 0);
				func_107(15);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_324[1], 1, 1) < 5f)
			{
				func_107(15);
			}
			break;
		case 15:
			if (__LIB_0__::func_396(iLocal_324[0]) || __LIB_0__::func_665(Global_35, iLocal_324[1], 1, 1) < 5f)
			{
				TASK::CLEAR_PED_TASKS(Local_240[0 /*32*/].f_11, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (!PED::IS_PED_ON_MOUNT(iLocal_324[0]))
				{
					TASK::TASK_MOUNT_ANIMAL(0, Local_240[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, -1524.639f, -561.0462f, 136.8918f, 1073741824 /* Float: 2f */, 1.501f, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.25f, 0, 0);
				__LIB_1__::func_474(iLocal_324[0], &iVar2, 0, 0, 1, 1);
				func_107(17);
			}
			break;
		case 16:
			func_139();
			if ((!func_125(32768) && __LIB_2__::func_227(0, 1, iLocal_324[0], 1)) && __LIB_0__::func_665(iLocal_324[0], iLocal_324[1], 1, 1) < 30f)
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_126(32768);
			}
			if (!func_18(16384) && __LIB_3__::func_496(iLocal_324[0], "RE_OR_DUNK", 1067030938 /* Float: 1.2f */))
			{
				PED::APPLY_PED_DAMAGE_PACK(iLocal_324[1], "PD_Mud_Head_NoFade", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(iLocal_324[0], "PD_Mud_Arm_L_NoFade", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(iLocal_324[0], "PD_Mud_Arm_R_NoFade", 0f, 1f);
				func_89(16384);
			}
			if ((!func_18(256) && !func_18(8192)) && __LIB_3__::func_995(&Local_871, 106))
			{
				func_145(0);
				TASK::_0x42CFD8FD8CC8DC69(iLocal_324[0], 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(1, 0), true);
				__LIB_0__::func_325(&(uLocal_317[1]));
				__LIB_2__::func_51(&uLocal_491, 0);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_324[1]);
				func_89(256);
			}
			if (!func_18(256))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[1], &Local_930);
			}
			if (func_18(134217728))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_324[0], Local_477))
				{
					__LIB_0__::func_172(iLocal_775);
					func_89(16);
					iLocal_489 = 4;
					func_107(26);
				}
			}
			else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_324[0], Local_477))
			{
				func_89(134217728);
			}
			break;
		case 17:
			if (!func_125(1024))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_324[1], 1, 1) < 5f)
				{
					__LIB_2__::func_478(Global_35, iLocal_324[1], "RE_OR_STR_V1_CL_CUSTOMER_GONE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_126(1024);
					__LIB_3__::func_465(11, 0, 0, 0, iLocal_324[1], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_148(&uLocal_803);
				}
			}
			else
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && __LIB_1__::func_313(&uLocal_803, 1f))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(3, 0), true);
				}
				func_150(0);
			}
			break;
		case 24:
			func_151(1, "RE_OR_STR_V1_CI_EARLY_ATTACK", 1056964608 /* Float: 0.5f */);
			func_150(1);
			if (__LIB_0__::func_255(iLocal_324[1], 1))
			{
				func_153();
			}
			break;
		case 25:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[1], &Local_930);
			func_154();
			break;
		case 26:
			switch (iLocal_489)
			{
				case 1:
					if (__LIB_2__::func_227(-5f, 1, 0, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_PLAYER_KILL_SWINDLER_BEFORE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_126(1048576);
						func_106(Global_35);
						func_112(iLocal_324[0], Global_35, 0);
						iLocal_489 = 5;
					}
					break;
				case 2:
					if (__LIB_0__::func_94(iLocal_324[0], ENTITY::GET_ENTITY_COORDS(iLocal_324[1], false, false), 1) < 10f)
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
					}
					if (!func_125(1048576))
					{
						if (__LIB_2__::func_215(iLocal_324[0], iLocal_324[1], 0, 8f, 0) || (__LIB_0__::func_94(iLocal_324[0], ENTITY::GET_ENTITY_COORDS(iLocal_324[1], false, false), 1) < 5f && ENTITY::GET_ENTITY_SPEED(iLocal_324[0]) <= 0.05f))
						{
							__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_PLAYER_KILL_SWINDLER_BEFORE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_126(1048576);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_324[0]) == 0f)
					{
						func_106(Global_35);
						func_112(iLocal_324[0], Global_35, 0);
						iLocal_489 = 5;
					}
					break;
				case 3:
					func_106(Global_35);
					func_112(iLocal_324[0], Global_35, 0);
					iLocal_489 = 5;
					break;
				case 4:
					func_106(Global_35);
					func_112(iLocal_324[0], Global_35, 0);
					iLocal_489 = 5;
					break;
				case 5:
					if (__LIB_2__::func_118(iLocal_324[0], 1, 1) < 10f && (iLocal_490 == 4 || iLocal_490 == 0))
					{
						if (__LIB_0__::func_75(&uLocal_809))
						{
							if (__LIB_1__::func_285(&uLocal_809, 1f))
							{
								__LIB_0__::func_37(&uLocal_809);
								if (!func_125(65536))
								{
									func_105(0);
									func_116(10, 1, 0);
									func_156(65536);
								}
								else if (!func_125(131072))
								{
									func_156(131072);
									func_126(262144);
									func_126(524288);
								}
								else if (!func_125(262144))
								{
									func_156(262144);
								}
								else if (!func_125(524288))
								{
									func_156(524288);
								}
								else
								{
									iLocal_489 = 6;
								}
							}
						}
						else if (__LIB_2__::func_227(0, 1, iLocal_324[0], 1) && (__LIB_1__::func_285(&uLocal_824, 3f) || !__LIB_0__::func_75(&uLocal_824)))
						{
							__LIB_1__::func_148(&uLocal_809);
						}
					}
					break;
				case 6:
					__LIB_0__::func_172(iLocal_775);
					Local_17.f_50 = 1;
					if (func_18(262144))
					{
						__LIB_2__::func_110(&(Local_17.f_5), 0);
						LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 100, 0, false);
					}
					func_107(27);
					break;
			}
			break;
		case 19:
			func_151(0, sLocal_955, 1056964608 /* Float: 0.5f */);
			if ((func_125(16384) && func_18(131072)) || !__LIB_2__::func_1(iLocal_324[0], 0, 1))
			{
				if (func_18(128))
				{
					__LIB_3__::func_319(Local_477);
					__LIB_2__::func_426(&(iLocal_324[1]));
				}
				func_107(27);
			}
			break;
		case 20:
			func_151(0, sLocal_955, 1056964608 /* Float: 0.5f */);
			func_159(1082130432 /* Float: 4f */);
			break;
		case 21:
			func_151(0, sLocal_955, 1056964608 /* Float: 0.5f */);
			func_159(1082130432 /* Float: 4f */);
			break;
		case 22:
			func_151(0, sLocal_955, 1056964608 /* Float: 0.5f */);
			if (!func_18(2097152))
			{
				func_159(1082130432 /* Float: 4f */);
			}
			else
			{
				func_154();
			}
			if (!func_18(131072))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_324[0], Local_477) || __LIB_3__::func_496(iLocal_324[0], "exitScene", 1067030938 /* Float: 1.2f */))
				{
					if (PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_324[0], "DEFAULT_SHOCKED"))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_SHOCKED", 2f, 5f, 4);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_324[1], 4, 33024, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_474(iLocal_324[0], &iVar3, 0, 0, 1, 1);
						func_89(131072);
						PED::SET_PED_KEEP_TASK(iLocal_324[0], true);
					}
					else
					{
						PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_324[0], "DEFAULT_SHOCKED");
					}
				}
			}
			break;
		case 23:
			func_151(0, sLocal_955, 1056964608 /* Float: 0.5f */);
			func_159(1082130432 /* Float: 4f */);
			break;
		case 27:
			if (!func_18(128) && !func_125(4096))
			{
				if (__LIB_0__::func_665(iLocal_324[0], Global_35, 1, 1) < 7f)
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
					if (__LIB_1__::func_285(&uLocal_797, 18f))
					{
						__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_CUSTOMER_LOITER_NOHELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_126(4096);
					}
				}
			}
			if (!func_18(64))
			{
				if (!__LIB_2__::func_1(iLocal_324[1], 0, 1))
				{
					func_89(64);
				}
				else if ((ANIMSCENE::_0x005E6F28DD7ED58D(Local_477, "Ped") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_477, "Ped")) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_477, false))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_324[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					func_89(64);
				}
			}
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				if (!__LIB_0__::func_75(&uLocal_794))
				{
					__LIB_1__::func_283(&uLocal_794, 1);
				}
				else if ((__LIB_0__::func_265(&uLocal_794) >= 6f && ((!__LIB_2__::func_1(iLocal_324[0], 0, 1) || __LIB_0__::func_665(Global_35, iLocal_324[0], 1, 1) > 40f) || func_125(4096))) && (!__LIB_2__::func_1(iLocal_324[1], 0, 1) || __LIB_0__::func_665(Global_35, iLocal_324[1], 1, 1) > 40f))
				{
					__LIB_2__::func_788(&(iLocal_324[1]), 1, 0, 1);
					__LIB_2__::func_788(&(iLocal_324[0]), 1, 0, 1);
					return true;
				}
			}
			break;
	}
	if ((iLocal_15 == 16 || iLocal_15 == 26) || iLocal_15 == 27)
	{
		func_161();
	}
	func_162();
	func_163();
	return false;
}

void func_45()
{
	if (bLocal_709)
	{
		__LIB_0__::func_769();
		bLocal_709 = false;
	}
}

void func_60()
{
	__LIB_3__::func_950(&(Local_240[0 /*32*/]));
}

void func_61()
{
	Local_211[0 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[0 /*2*/].f_1 = "where_are_you_customer";
	Local_211[1 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[1 /*2*/].f_1 = "you_knew_was_bunk_customer";
	Local_211[2 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[2 /*2*/].f_1 = "when_i_find_you_customer";
	Local_211[3 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[3 /*2*/].f_1 = "hey_you_customer";
	Local_211[5 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[5 /*2*/].f_1 = "conman_sold_customer";
	Local_211[6 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[6 /*2*/].f_1 = "it_didnt_work_customer";
	Local_211[7 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[7 /*2*/].f_1 = "positive_player";
	Local_211[8 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[8 /*2*/].f_1 = "negative_player";
	Local_211[10 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[10 /*2*/].f_1 = "alright_customer";
	Local_211[9 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[9 /*2*/].f_1 = "thanks_for_nothing_customer";
	Local_211[11 /*2*/] = "script_re@on_the_run@playerapproach_swindler";
	Local_211[11 /*2*/].f_1 = "ill_keep_lookin_customer";
	__LIB_3__::func_318("script_re@on_the_run@confrontswindler_killcustomer", &uLocal_330);
	__LIB_3__::func_318(Local_211[0 /*2*/], &uLocal_330);
}

void func_75(bool bParam0)
{
	int iVar0;
	if (!bLocal_761)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
		if (!bParam0)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_435[0 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 1000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_435[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 1000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_435[2 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 1000);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_435.f_10[0 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 2000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_435.f_10[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 2000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_435.f_10[2 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 2000);
		}
		__LIB_1__::func_474(iLocal_324[0], &iVar0, 0, 0, 1, 1);
		bLocal_761 = true;
	}
}

void func_87()
{
	vector3 vVar0;
	if (func_18(536870912))
	{
		if (__LIB_1__::func_285(&uLocal_830, 1f) && !VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_776, PED::GET_PED_BONE_COORDS(iLocal_324[0], 14285, 0f, 0f, 0f)))
		{
			func_299(536870912);
			func_89(1073741824 /* Float: 2f */);
			__LIB_0__::func_37(&uLocal_830);
		}
		vVar0 = { Vector(160.0282f, -448.4064f, -1824.692f) - Vector(159.665f, -450.131f, -1825.672f) };
		ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_324[0], 0, vVar0 * Vector(3f, 3f, 3f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iLocal_324[0], 14283), false, false, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_324[0], 0, vVar0 * Vector(3f, 3f, 3f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iLocal_324[0], 0), false, false, true, false, true);
	}
	else if (!func_18(1073741824 /* Float: 2f */))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_324[0]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_324[0], iLocal_775, false, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_324[1]))
			{
				__LIB_1__::func_148(&uLocal_830);
				func_89(536870912);
			}
		}
	}
}

char* func_88(bool bParam0)
{
	if (bParam0)
	{
		return "CUSTOMER";
	}
	return "SWINDLER";
}

void func_89(int iParam0)
{
	__LIB_1__::func_336(&iLocal_327, iParam0);
}

void func_91()
{
	switch (iLocal_754)
	{
		case 0:
			if (!Local_17.f_46)
			{
				func_300();
			}
			break;
		case 1:
			if (__LIB_0__::func_665(iLocal_324[1], iLocal_324[0], 1, 1) > 4f)
			{
				if (!bLocal_758)
				{
					func_301();
				}
			}
			else
			{
				iLocal_754 = 0;
			}
			break;
	}
	if (((__LIB_2__::func_1(iLocal_324[0], 0, 1) && !Local_17.f_46) && ENTITY::DOES_ENTITY_EXIST(iLocal_324[1])) && __LIB_0__::func_665(iLocal_324[1], iLocal_324[0], 1, 1) > 4f)
	{
		iLocal_754 = (iLocal_754 + 1 % 2);
	}
}

void func_92()
{
	switch (iLocal_485)
	{
		case 1:
			__LIB_3__::func_950(&(Local_240[1 /*32*/]));
			Local_477 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_477.f_4, 0, func_141(0, 0), false, true);
			iLocal_485 = 2;
			break;
		case 2:
			if (__LIB_3__::func_289(&(Local_240[1 /*32*/])) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_477, false))
			{
				iLocal_485 = 3;
			}
			break;
		case 3:
			if (func_302())
			{
				if (__LIB_0__::func_272(iLocal_324[0], 0))
				{
					__LIB_2__::func_526(&Local_645, 1, 0);
					iLocal_706[1] = 1;
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_477, func_88(1), iLocal_324[0], 0);
				}
				else
				{
					return;
				}
				ANIMSCENE::LOAD_ANIM_SCENE(Local_477);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_477, "Bool", false, false);
				iLocal_485 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_477, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_477);
				func_303(0);
				iLocal_485 = 5;
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_324[1], sLocal_956, 0f, 0f, 0f, 0, "");
			}
			break;
		case 5:
			break;
	}
}

void func_93()
{
	func_304(1, iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_ATTRACT_A", 291934926);
	func_304(2, iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_ATTRACT_B", 291934926);
	func_304(4, iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_ATTRACT_C", 291934926);
}

bool func_94(int iParam0)
{
	return __LIB_0__::func_27(iLocal_328, iParam0);
}

void func_97(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	Local_711 = 1;
	Local_711.f_1 = sParam1;
	Local_711.f_2 = sParam2;
	Local_711.f_3 = 0f;
	Local_711.f_4 = 1f;
	Local_711.f_5 = 1f;
	Local_711.f_16 = 0;
	Local_711.f_17 = 0.25f;
	Local_711.f_18 = 0.25f;
	Local_711.f_19 = -1;
	if (bParam3)
	{
		Local_711.f_20 = 1;
		Local_711.f_21 = 1;
	}
	else
	{
		Local_711.f_20 = 0;
		Local_711.f_21 = iParam4;
	}
	Local_711.f_23 = 1114112;
	TASK::TASK_SCRIPTED_ANIMATION(iParam0, &Local_711);
}

void func_98(int iParam0)
{
	__LIB_1__::func_336(&iLocal_328, iParam0);
}

bool func_101(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_521(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_4__::func_167(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_4__::func_167(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *uParam2);
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
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_2__::func_726(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		if (!MAP::DOES_BLIP_EXIST(uLocal_317[0]))
		{
			__LIB_2__::func_73(iLocal_324[0], &(uLocal_317[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
	}
	else
	{
		__LIB_0__::func_325(&(uLocal_317[0]));
	}
}

void func_106(int iParam0)
{
	Local_905.f_8 = 4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Local_905.f_3 = iParam0;
		Local_905.f_4 = 21030;
		Local_905 = { 0f, 0f, 0f };
	}
	else
	{
		Local_905.f_4 = -1;
		Local_905 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	Local_905.f_12 = 0;
	Local_905.f_9 = 0;
	Local_905.f_10 = 0;
	Local_905.f_11 = 0;
	Local_905.f_19 = 4;
	Local_905.f_20 = 4;
	Local_905.f_21 = 4;
	Local_905.f_22 = 4;
	Local_905.f_17 = 4;
	Local_905.f_18 = 4;
	Local_930.f_8 = 4;
	Local_930.f_3 = Global_35;
	Local_930.f_4 = 21030;
	Local_930.f_12 = 0;
	Local_930.f_9 = 0;
	Local_930.f_10 = 0;
	Local_930.f_11 = 0;
	Local_930.f_19 = 4;
	Local_930.f_20 = 4;
	Local_930.f_21 = 4;
	Local_930.f_22 = 4;
	__LIB_1__::func_581(&(Local_930.f_5), 1);
}

void func_107(int iParam0)
{
	if (iParam0 == 26)
	{
		EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_36, -1f, -1f, -1f, -1f, -1f, -1, -1);
		if ((!func_18(32) && iLocal_520 != 8192) && iLocal_520 != 16384)
		{
			__LIB_3__::func_465(2, 0, 0, 0, iLocal_324[1], 0, 1065353216 /* Float: 1f */, 0);
		}
	}
	if (iParam0 == 27)
	{
		__LIB_0__::func_325(&(uLocal_317[1]));
		__LIB_3__::func_334(&uLocal_320);
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	iLocal_15 = iParam0;
}

void func_112(int iParam0, int iParam1, bool bParam2)
{
	__LIB_4__::func_170(iParam0, iParam1, &uLocal_833, 1.8f, 0, 0, 2f, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 3f, -1f, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	if (bParam2)
	{
		vLocal_763 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	}
}

void func_116(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			iLocal_697[0] = 0;
			iLocal_697[1] = 1;
			Local_593[0 /*17*/].f_13 = "";
			Local_593[1 /*17*/].f_13 = "";
			iLocal_705 = __LIB_2__::func_340(2, 0, 0);
			__LIB_2__::func_360(&(Local_593[0 /*17*/]), __LIB_2__::func_460(iLocal_697[0]));
			__LIB_2__::func_360(&(Local_593[1 /*17*/]), __LIB_2__::func_460(iLocal_697[1]));
			__LIB_3__::func_362(&(Local_593[0 /*17*/]), 10f);
			__LIB_3__::func_362(&(Local_593[1 /*17*/]), 10f);
			break;
		case 7:
			iLocal_697[0] = 7;
			iLocal_697[1] = 10;
			iLocal_705 = __LIB_2__::func_340(3, 0, 0);
			__LIB_2__::func_360(&(Local_593[0 /*17*/]), __LIB_2__::func_460(iLocal_697[0]));
			__LIB_2__::func_360(&(Local_593[1 /*17*/]), __LIB_2__::func_460(iLocal_697[1]));
			__LIB_4__::func_168(&(Local_593[0 /*17*/]), 0);
			__LIB_4__::func_168(&(Local_593[1 /*17*/]), 0);
			break;
		case 34:
			iLocal_697[0] = 34;
			iLocal_697[1] = 35;
			Local_593[0 /*17*/].f_13 = "";
			Local_593[1 /*17*/].f_13 = "";
			iLocal_705 = __LIB_2__::func_340(2, 0, 0);
			__LIB_2__::func_360(&(Local_593[0 /*17*/]), __LIB_2__::func_460(iLocal_697[0]));
			__LIB_2__::func_360(&(Local_593[1 /*17*/]), __LIB_2__::func_460(iLocal_697[1]));
			__LIB_3__::func_362(&(Local_593[0 /*17*/]), 10f);
			__LIB_3__::func_362(&(Local_593[1 /*17*/]), 10f);
			break;
		case 24:
			iLocal_697[0] = 24;
			iLocal_697[1] = 30;
			iLocal_705 = __LIB_2__::func_340(3, 0, 0);
			__LIB_2__::func_360(&(Local_593[0 /*17*/]), __LIB_2__::func_460(24));
			__LIB_2__::func_360(&(Local_593[1 /*17*/]), __LIB_2__::func_460(1));
			__LIB_4__::func_168(&(Local_593[0 /*17*/]), 0);
			__LIB_4__::func_168(&(Local_593[1 /*17*/]), 0);
			break;
		case 25:
			iLocal_697[0] = 25;
			iLocal_705 = __LIB_2__::func_340(3, 0, 0);
			__LIB_2__::func_360(&(Local_593[0 /*17*/]), __LIB_2__::func_460(7));
			__LIB_4__::func_168(&(Local_593[0 /*17*/]), 0);
			__LIB_4__::func_168(&(Local_593[1 /*17*/]), 0);
			break;
		case 10:
			iLocal_697[0] = 25;
			iLocal_697[1] = 10;
			iLocal_705 = __LIB_2__::func_340(3, 0, 0);
			__LIB_2__::func_360(&(Local_593[0 /*17*/]), __LIB_2__::func_460(7));
			__LIB_2__::func_360(&(Local_593[1 /*17*/]), __LIB_2__::func_460(10));
			__LIB_4__::func_168(&(Local_593[0 /*17*/]), 0);
			__LIB_4__::func_168(&(Local_593[1 /*17*/]), 0);
			break;
	}
	__LIB_2__::func_451(&(Local_550[0 /*21*/]), 0);
	if (iParam0 != 25)
	{
		__LIB_2__::func_592(&Local_593, bParam2, 1);
		__LIB_2__::func_526(&Local_593, bParam1, 0);
	}
	else
	{
		__LIB_2__::func_482(&(Local_593[0 /*17*/]), bParam2, 1);
		__LIB_2__::func_411(&(Local_593[0 /*17*/]), bParam1, 0);
		__LIB_2__::func_482(&(Local_593[1 /*17*/]), 1, 1);
	}
}

void func_117()
{
	__LIB_4__::func_72(Global_35);
	func_105(0);
	func_116(7, 0, 1);
	__LIB_2__::func_298();
	if (__LIB_2__::func_1(iLocal_324[0], 0, 1))
	{
		__LIB_1__::func_727(iLocal_324[0], 1);
	}
	func_126(16);
	__LIB_0__::func_268(&uLocal_782, 5.5f);
	func_89(4096);
	func_107(6);
}

void func_118(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_0__::func_94(iParam1, vLocal_763, 1) < 15f)
		{
			if (bLocal_757)
			{
				func_112(iParam0, iParam1, 0);
				bLocal_757 = false;
			}
			else
			{
				__LIB_2__::func_966(iParam0, iParam1, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			}
		}
		else if (!bLocal_757)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, -1, -1f, -1f, -1f);
			bLocal_757 = true;
		}
	}
	else
	{
		__LIB_2__::func_966(iParam0, iParam1, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
}

void func_123()
{
	Local_17.f_44 = 1;
	__LIB_3__::func_666(Local_17.f_3, iLocal_486, 1, 0, 0);
}

bool func_125(int iParam0)
{
	return __LIB_0__::func_27(iLocal_329, iParam0);
}

void func_126(int iParam0)
{
	__LIB_1__::func_336(&iLocal_329, iParam0);
}

void func_127(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6)
{
	if (!func_18(-2147483648))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
			func_89(-2147483648);
		}
	}
	if (!func_125(iParam0))
	{
		if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sParam5, sParam6, 1) && (__LIB_1__::func_285(&uLocal_800, 1f) || !__LIB_0__::func_75(&uLocal_800))) || __LIB_3__::func_496(iParam1, sParam3, 1067030938 /* Float: 1.2f */))
		{
			__LIB_2__::func_504(iLocal_324[0], 1000);
			__LIB_2__::func_478(iParam1, iParam2, sParam3, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, iParam4, 1, 0, 0);
			func_126(iParam0);
		}
	}
}

void func_129()
{
	iLocal_769[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ImpotenceSearch0");
	iLocal_769[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1810.155f, -428.4662f, 157.0386f, 0f, 0f, -22.3633f, 50f, 35f, 7f, "ImpotenceSearch0");
	uLocal_320[0] = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_769[0]);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_320[0], "RE_OR_BLIP_SEARCH");
}

void func_130(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_3__::func_662(sParam0, 7500, 0, 0, -1, -1, 0);
	}
	else
	{
		__LIB_1__::func_324(sParam0);
	}
	bLocal_709 = true;
}

bool func_138()
{
	return (((ANIMSCENE::_0x1F0E401031E20146(Local_477, "PBL_GUN_FLINCH_B") || ANIMSCENE::_0x1F0E401031E20146(Local_477, "PBL_GUN_FLINCH_C")) || ANIMSCENE::_0x1F0E401031E20146(Local_477, "PBL_GUN_FLINCH_D")) || ANIMSCENE::_0x1F0E401031E20146(Local_477, "PBL_GUN_FLINCH_E"));
}

void func_139()
{
	if (!func_18(32))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_477) || (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_324[1], Local_477) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_324[1], -1982987126)))
		{
			__LIB_1__::func_864(iLocal_324[1], 1, 1);
			__LIB_3__::func_465(2, 0, 0, "RE_HONOR_WATCHED_MURDER", iLocal_324[0], 0, 1065353216 /* Float: 1f */, 0);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_956);
			func_89(32);
		}
	}
}

char* func_141(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_CONFRONT";
		case 1:
			return "PBL_CONFRONT_2";
		case 2:
			return "PBL_GUN_FLINCH_B";
		case 3:
			return "PBL_LUNATIC";
		case 4:
			return "PBL_STAND_TABLE";
		case 5:
			if (iLocal_486 == 0)
			{
				if (bParam1)
				{
					return "PBL_GUN_FLINCH_E";
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_477, "idle_a", 1))
				{
					return "PBL_GUN_FLINCH_B";
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_477, "KEEP_IT_DOWN", 1))
				{
					return "PBL_GUN_FLINCH_C";
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_477, "A_VILE_MAN", 1))
				{
					return "PBL_GUN_FLINCH_D";
				}
				else
				{
					return "PBL_GUN_FLINCH_E";
				}
			}
			else
			{
				return "PBL_COWER";
			}
			break;
		case 6:
			return "PBL_GUN_FLINCH_E";
		case 9:
			return "PBL_SHOOT_REACT_A";
		case 10:
			return "PBL_LOOP_DUCKING";
		case 11:
			return "PBL_LUNATIC_BREAKOUT_B";
	}
	return __LIB_3__::func_497(" - Invalid Index.", 0);
}

void func_142()
{
	func_107(11);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_477, "Bool", false, false);
	__LIB_0__::func_325(&(uLocal_317[1]));
	func_130("RE_OR_UPDATE", 1);
	__LIB_2__::func_592(&Local_593, 1, 1);
	__LIB_2__::func_73(iLocal_324[0], &(uLocal_317[0]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, "RE_INTER_STRANGER");
}

void func_144(float fParam0)
{
	struct<4> Var0;
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_477, func_88(1), &Var0, true, func_141(1, 0), 2);
	Local_435.f_39 = { Var0 };
	Local_871.f_1 = iLocal_324[0];
	Local_871.f_8 = { Var0 };
	Local_871.f_19 = Var0.f_3.f_2;
	Local_871.f_20 = 30f;
	Local_871.f_17 = 0.15f;
	Local_871.f_21 = fParam0;
	Local_871.f_23 = 129;
}

void func_145(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (bParam0)
	{
		vVar0 = { 3.5f, 2.194f, 4f };
		vVar3 = { -1823.221f, -448.4688f, 159.903f };
	}
	else
	{
		vVar0 = { 2.25f, 2.194f, 2.338f };
		vVar3 = { -1825.487f, -449.157f, 159.903f };
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_775))
	{
		iLocal_775 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar3, 0f, 0f, 16.891f, vVar0);
	}
	else
	{
		VOLUME::_SET_VOLUME_SCALE(iLocal_775, vVar0);
		VOLUME::_SET_VOLUME_COORDS(iLocal_775, vVar3);
	}
}

void func_150(bool bParam0)
{
	if (__LIB_3__::func_496(iLocal_324[1], "bangHead", 1067030938 /* Float: 1.2f */))
	{
		if (bParam0)
		{
			__LIB_3__::func_465(2, 0, 0, 0, iLocal_324[1], 0, 1065353216 /* Float: 1f */, 0);
		}
		if (func_18(67108864))
		{
			func_153();
		}
		else
		{
			func_107(27);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_956);
	}
}

void func_151(int iParam0, char* sParam1, float fParam2)
{
	if (!__LIB_0__::func_75(&uLocal_806))
	{
		__LIB_1__::func_148(&uLocal_806);
	}
	if (__LIB_1__::func_285(&uLocal_806, fParam2))
	{
		if (!func_125(16384) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			__LIB_2__::func_478(iLocal_324[iParam0], Global_35, sParam1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_126(16384);
		}
	}
}

void func_153()
{
	func_89(16);
	func_89(4194304);
	__LIB_0__::func_325(&(uLocal_317[1]));
	__LIB_3__::func_237(&(Local_17.f_5), &uLocal_519);
	func_6();
	if (!func_18(2048) && iLocal_15 != 16)
	{
		if (func_368())
		{
			iLocal_489 = 2;
			func_116(7, 0, 0);
			func_369();
		}
		else
		{
			func_89(268435456);
		}
	}
	else
	{
		iLocal_489 = 3;
	}
	if (!func_18(268435456) || iLocal_15 == 16)
	{
		func_45();
		TASK::CLEAR_PED_TASKS(iLocal_324[0], true, false);
		func_105(1);
		__LIB_2__::func_110(&(Local_17.f_5), 0);
		func_107(26);
	}
	else if (!func_18(8192))
	{
		func_107(11);
	}
	else
	{
		func_107(27);
	}
	vLocal_766 = { Global_36 };
}

void func_154()
{
	if (!func_18(8))
	{
		if ((__LIB_0__::func_665(Global_35, iLocal_324[1], 1, 1) < 20f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_324[1])) && !__LIB_0__::func_75(&uLocal_830))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(3, 0), true);
			func_89(8);
		}
	}
	else
	{
		func_150(0);
	}
}

void func_156(int iParam0)
{
	switch (iParam0)
	{
		case 65536:
			if (func_18(4194304))
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_PLAYER_KILL_SWINDLER_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::TASK_LOOK_AT_COORD(iLocal_324[0], ENTITY::GET_ENTITY_COORDS(iLocal_324[1], false, false), 1250, 0, 51, 0);
			}
			else
			{
				__LIB_1__::func_148(&uLocal_824);
				func_97(iLocal_324[0], "script_re@on_the_run@confrontswindler_killcustomer", "not_a_word_customer", 0, 1);
			}
			break;
		case 131072:
			TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_324[0], Global_35, -1082130432 /* Float: -1f */, 0, 0);
			if (func_18(4194304))
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_PLAYER_KILL_SWINDLER_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_1__::func_148(&uLocal_824);
				func_97(iLocal_324[0], "script_re@on_the_run@confrontswindler_killcustomer", "felt_good_customer", 0, 1);
			}
			break;
		case 262144:
			if (func_18(4194304))
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_STR_V1_CI_PLAYER_KILL_SWINDLER_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 524288:
			STREAMING::REQUEST_COLLISION_AT_COORD(1833.227f, -1246.374f, 41.74581f);
			iLocal_753 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1833.227f, -1246.374f, 41.74581f, joaat("WORLD_HUMAN_SMOKE"), 2f, 1, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_753) && !TASK::IS_SCENARIO_OCCUPIED(1833.227f, -1246.374f, 41.74581f, 0.5f, true))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_324[0], iLocal_753, 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_324[0], 1833.227f, -1246.374f, 41.74581f, 15f, 0, false, false, false, false);
			}
			__LIB_2__::func_478(iLocal_324[0], Global_35, "RE_OR_CGH_V1_SW_REWARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			break;
	}
	func_126(iParam0);
}

void func_159(float fParam0)
{
	if (!__LIB_0__::func_75(&uLocal_803))
	{
		if ((__LIB_0__::func_255(iLocal_324[0], 0) || PED::_IS_PED_HOGTIED(iLocal_324[0])) || (PED::IS_PED_FLEEING(iLocal_324[0]) && __LIB_0__::func_665(iLocal_324[1], iLocal_324[0], 0, 0) > 20f))
		{
			__LIB_1__::func_148(&uLocal_803);
		}
	}
	else if (__LIB_1__::func_285(&uLocal_803, fParam0))
	{
		func_145(0);
		if (!__LIB_0__::func_255(iLocal_324[1], 0))
		{
			func_107(25);
		}
		else
		{
			func_107(27);
		}
	}
}

void func_161()
{
	int iVar0;
	if (!__LIB_2__::func_1(iLocal_324[0], 0, 1))
	{
		return;
	}
	switch (iLocal_490)
	{
		case 0:
			break;
		case 1:
			if (!func_18(16))
			{
				if (__LIB_1__::func_285(&uLocal_821, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(iLocal_324[0], Global_35, "WON_FIGHT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_821);
					iLocal_490 = 4;
				}
			}
			else if (__LIB_1__::func_285(&uLocal_821, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "IM_OUTTA_HERE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_821);
				__LIB_2__::func_482(&(Local_593[0 /*17*/]), 1, 1);
				iLocal_490 = 4;
			}
			break;
		case 2:
			if (!func_125(67108864))
			{
				if (__LIB_1__::func_285(&uLocal_821, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(iLocal_324[0], Global_35, "MINIGAME_BIG_LOSS", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_821);
					TASK::TASK_STAND_STILL(iLocal_324[0], -1);
					func_126(67108864);
				}
			}
			else if (__LIB_1__::func_285(&uLocal_821, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_2__::func_478(iLocal_324[0], Global_35, "IM_OUTTA_HERE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_821);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 2.5f, 5f, 4);
				TASK::TASK_MOUNT_ANIMAL(0, Local_240[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
				__LIB_1__::func_474(iLocal_324[0], &iVar0, 0, 0, 1, 1);
				iLocal_490 = 4;
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&uLocal_821, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_2__::func_482(&(Local_593[0 /*17*/]), 1, 1);
				if (!func_125(134217728))
				{
					__LIB_2__::func_478(iLocal_324[0], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_126(134217728);
				}
				else
				{
					__LIB_2__::func_592(&Local_593, 1, 1);
					__LIB_2__::func_478(iLocal_324[0], Global_35, "LEAVE_ME", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_821);
				iLocal_490 = 4;
			}
			break;
		case 4:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_324[0], &Local_905);
			if (__LIB_1__::func_285(&uLocal_821, 5f))
			{
				if (func_18(16))
				{
					__LIB_2__::func_526(&Local_593, 1, 0);
				}
				__LIB_0__::func_37(&uLocal_821);
				iLocal_490 = 0;
			}
			break;
	}
}

void func_162()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_324[0], 0, 1) && iLocal_706[0])
	{
		iVar0 = func_371(&(iLocal_324[0]), &(Local_550[0 /*21*/]), 15f, &Local_593, &(Local_17.f_192), 0f, 1, 0, 0, iLocal_705, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (__LIB_2__::func_456(&(Local_550[0 /*21*/])))
		{
			switch (iVar0)
			{
				case 0:
					switch (iLocal_697[0])
					{
						case 24:
							func_89(32768);
							__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_SW_QUESTION", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_482(&(Local_593[0 /*17*/]), 1, 1);
							__LIB_2__::func_504(iLocal_324[0], 1000);
							__LIB_0__::func_268(&uLocal_797, 16f);
							break;
						case 0:
							__LIB_9__::func_420(17, 1);
							__LIB_11__::func_392(3);
							iLocal_752 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-1824.583f, -448.8822f, 159.0215f, joaat("WORLD_HUMAN_PEE"), 1f, 1, false);
							TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_752, false);
							iLocal_776 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1825.373f, -449.3861f, 159.903f, 0f, 0f, 16.891f, 1f, 1f, 2f, "VOL OUTHOUSE");
							func_89(128);
							__LIB_2__::func_180(&(Local_17.f_5), 0);
							__LIB_4__::func_72(Global_35);
							__LIB_2__::func_298();
							iLocal_485 = 1;
							TASK::TASK_PLAY_ANIM(Global_35, Local_211[7 /*2*/], Local_211[7 /*2*/].f_1, 8f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							func_97(iLocal_324[0], Local_211[10 /*2*/], Local_211[10 /*2*/].f_1, 0, 1);
							func_105(0);
							iLocal_705 = __LIB_2__::func_340(3, 0, 0);
							__LIB_2__::func_451(&(Local_550[0 /*21*/]), 0);
							__LIB_3__::func_152(Local_17.f_3);
							__LIB_0__::func_7(&Global_1935630, 4);
							__LIB_1__::func_148(&uLocal_800);
							func_107(5);
							break;
						case 34:
							__LIB_2__::func_504(iLocal_324[0], 1000);
							if (!func_18(268435456))
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_TRUTH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_107(13);
							}
							else
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CI_TRUTH_DEAD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_489 = 1;
								func_107(26);
							}
							iLocal_705 = __LIB_2__::func_340(3, 0, 0);
							__LIB_2__::func_451(&(Local_550[0 /*21*/]), 0);
							break;
						case 7:
							bLocal_760 = true;
							__LIB_1__::func_148(&uLocal_815);
							func_98(1);
							break;
						case 25:
							__LIB_2__::func_504(iLocal_324[0], 1000);
							if (!func_18(256) && !func_18(4194304))
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_ENCOURAGE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_490 = 1;
								__LIB_1__::func_283(&uLocal_821, 0);
							}
							else if (!func_18(16))
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_ENCOURAGE_2", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_126(65536);
								if (!func_125(131072))
								{
									TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_324[0], Global_35, -1082130432 /* Float: -1f */, 0, 0);
									func_126(131072);
								}
								func_126(262144);
								func_126(524288);
								__LIB_1__::func_148(&uLocal_824);
								__LIB_0__::func_37(&uLocal_809);
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_ENCOURAGE_3", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_490 = 1;
								__LIB_1__::func_283(&uLocal_821, 0);
							}
							break;
					}
					break;
				case 1:
					switch (iLocal_697[1])
					{
						case 30:
							__LIB_3__::func_319(Local_477);
							__LIB_0__::func_490(&(iLocal_324[1]), 0);
							__LIB_3__::func_334(&uLocal_320);
							__LIB_1__::func_148(&uLocal_782);
							__LIB_1__::func_148(&uLocal_800);
							func_107(6);
							break;
						case 1:
							__LIB_4__::func_72(Global_35);
							func_105(0);
							__LIB_2__::func_298();
							if (__LIB_2__::func_1(iLocal_324[0], 0, 1))
							{
								__LIB_1__::func_727(iLocal_324[0], 1);
							}
							TASK::TASK_PLAY_ANIM(Global_35, Local_211[8 /*2*/], Local_211[8 /*2*/].f_1, 8f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							__LIB_3__::func_953(&iLocal_904, 1);
							iLocal_705 = __LIB_2__::func_340(3, 0, 0);
							__LIB_2__::func_451(&(Local_550[0 /*21*/]), 0);
							__LIB_1__::func_148(&uLocal_800);
							__LIB_1__::func_148(&uLocal_782);
							func_107(6);
							break;
						case 35:
							__LIB_2__::func_504(iLocal_324[0], 1000);
							__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_LIE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_705 = __LIB_2__::func_340(3, 0, 0);
							__LIB_2__::func_451(&(Local_550[0 /*21*/]), 0);
							func_107(14);
							break;
						case 26:
							if (!func_18(256))
							{
								iLocal_490 = 2;
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_INTERVENE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_283(&uLocal_821, 0);
							}
							else
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_INTERVENE_2", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							break;
						case 10:
							__LIB_2__::func_504(iLocal_324[0], 1000);
							func_126(65536);
							if (!func_125(131072))
							{
								TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_324[0], Global_35, -1082130432 /* Float: -1f */, 0, 0);
								func_126(131072);
							}
							func_126(262144);
							func_126(524288);
							__LIB_1__::func_148(&uLocal_824);
							__LIB_0__::func_37(&uLocal_809);
							if (!func_125(134217728))
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_ANTAGONIZE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_478(Global_35, iLocal_324[0], "RE_OR_STR_V1_CL_ANTAGONIZE_2", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_283(&uLocal_821, 0);
							iLocal_490 = 3;
							break;
					}
					break;
				case 2:
					break;
			}
		}
	}
}

void func_163()
{
	int iVar0;
	if (iLocal_706[1])
	{
		iVar0 = func_371(&(iLocal_324[1]), &(Local_550[1 /*21*/]), 8f, &Local_645, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (__LIB_2__::func_456(&(Local_550[1 /*21*/])))
		{
			switch (iVar0)
			{
				case 0:
					switch (iLocal_701[0])
					{
						case 7:
							__LIB_2__::func_478(Global_35, iLocal_324[1], "RE_OR_STR_V1_CL_FIND_SWINDLER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_89(1048576);
							__LIB_1__::func_283(&uLocal_785, 1);
							func_45();
							__LIB_3__::func_407(&uLocal_491, 30f);
							__LIB_2__::func_51(&uLocal_491, 1);
							__LIB_3__::func_334(&uLocal_320);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_324[1], Global_35, -1, 0, 51, 0);
							func_107(10);
							break;
						case 0:
							break;
					}
					break;
				case 1:
					switch (iLocal_701[1])
					{
						case 10:
							__LIB_2__::func_478(Global_35, iLocal_324[1], "RE_OR_STR_V1_CL_FIND_SWINDLER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_89(1048576);
							__LIB_1__::func_283(&uLocal_785, 1);
							func_45();
							__LIB_3__::func_407(&uLocal_491, 30f);
							__LIB_2__::func_51(&uLocal_491, 1);
							__LIB_3__::func_334(&uLocal_320);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_324[1], Global_35, -1, 0, 51, 0);
							func_107(10);
							break;
						case 1:
							break;
					}
					break;
				case 2:
					break;
			}
		}
	}
}

void func_299(int iParam0)
{
	__LIB_0__::func_516(&iLocal_327, iParam0);
}

void func_300()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_324[0]))
	{
		if (func_483(iLocal_324[0], 0, &(Local_17.f_5), &uLocal_519, 0, 0) || (func_18(256) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_324[1], Global_35, 1, 1)))
		{
			Local_17.f_46 = 1;
			__LIB_2__::func_504(iLocal_324[0], 0);
			__LIB_2__::func_504(iLocal_324[1], 250);
			__LIB_0__::func_325(&(uLocal_317[0]));
			if (!func_18(512))
			{
			}
			if ((iLocal_486 == 0 || !__LIB_2__::func_901(iLocal_324[1], Global_35)) || func_18(16))
			{
				func_89(8192);
				func_485(iLocal_324[0], &(Local_550[0 /*21*/]), &Local_593);
				iLocal_706[0] = 0;
				func_486(16384);
				if (!func_18(524288) || func_18(16))
				{
					TASK::CLEAR_PED_TASKS(iLocal_324[0], true, false);
					func_487();
					func_107(19);
				}
				else if (!func_18(1048576))
				{
					TASK::CLEAR_PED_TASKS(iLocal_324[0], true, false);
					func_487();
					func_107(20);
				}
				else if (!func_18(256))
				{
					TASK::CLEAR_PED_TASKS(iLocal_324[0], true, false);
					func_487();
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(5, 1), true);
					func_107(21);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_324[0]))
					{
						TASK::_0x2E1D6D87346BB7D2(iLocal_324[0], Global_35, 0, 0);
						PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_324[0], "DEFAULT_SHOCKED");
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_324[0], Local_477))
						{
							if (PED::_IS_PED_LASSOED(iLocal_324[0]) || PED::_IS_PED_HOGTIED(iLocal_324[0]))
							{
								sLocal_955 = "RE_OR_STR_V1_SW_CUSTOMER_HOGTIE_REACT";
							}
							else
							{
								sLocal_955 = "RE_OR_STR_V1_CI_CUSTOMER_ATTACK_REACT";
							}
							if (__LIB_3__::func_496(iLocal_324[0], "bSafeToBreakout", 1067030938 /* Float: 1.2f */))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(iLocal_324[0], &iVar0, 0, 0, 1, 1);
								func_89(131072);
								PED::SET_PED_KEEP_TASK(iLocal_324[0], true);
							}
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(10, 0), true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(9, 0), true);
						}
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(10, 0), true);
					}
					if (!PED::_IS_PED_HOGTIED(iLocal_324[1]))
					{
						func_107(22);
					}
					else
					{
						func_107(23);
					}
				}
				iLocal_754 = 1;
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_324[0], Global_35, -1, false, 3);
				func_89(2048);
				func_126(512);
				func_107(24);
			}
		}
	}
}

void func_301()
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_324[1]) && !__LIB_0__::func_75(&uLocal_818)) || __LIB_1__::func_313(&uLocal_818, 2.5f))
	{
		if ((func_483(iLocal_324[1], 0, &uLocal_491, &iLocal_520, 0, 0) && !__LIB_4__::func_172(iLocal_324[0], 0, 0, 0, 1)) && !__LIB_2__::func_901(iLocal_324[0], Global_35))
		{
			__LIB_2__::func_504(iLocal_324[1], 0);
			__LIB_2__::func_504(iLocal_324[0], 250);
			func_486(16384);
			bLocal_758 = true;
			if (iLocal_520 != 1)
			{
				if ((!func_18(33554432) || iLocal_15 == 16) && iLocal_520 != 16)
				{
					if ((iLocal_520 == 8 || iLocal_520 == 16384) || iLocal_520 == 64)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_477, "Bool", false, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(5, 0), true);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(5, 0));
						if (iLocal_15 < 11)
						{
							func_142();
						}
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_477, "Bool", false, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(6, 0), true);
						if (iLocal_15 != 16)
						{
							func_144(2f);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_324[1]);
							func_105(0);
							func_107(16);
						}
					}
					__LIB_3__::func_237(&uLocal_491, &iLocal_520);
					bLocal_758 = false;
					__LIB_1__::func_148(&uLocal_818);
					if (iLocal_15 != 16)
					{
						__LIB_2__::func_478(iLocal_324[1], Global_35, "PLEAD", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_89(33554432);
					}
				}
				else
				{
					if ((iLocal_15 != 14 && iLocal_15 != 15) && iLocal_15 != 17)
					{
						func_89(67108864);
					}
					func_107(24);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_477, func_141(11, 0), true);
				}
			}
			else
			{
				func_153();
			}
			if (iLocal_15 == 24)
			{
				func_89(33554432);
			}
		}
	}
}

bool func_302()
{
	if (Local_240[1 /*32*/].f_1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_324[1]))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_324[1], true, true);
			__LIB_0__::func_169(iLocal_324[1], 0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_324[1], joaat("REL_NO_RELATIONSHIP"));
			PED::SET_PED_CONFIG_FLAG(iLocal_324[1], 6, true);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_240[1 /*32*/].f_23)))
			{
				__LIB_2__::func_133(iLocal_324[1], &(Local_240[1 /*32*/].f_23), 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_477, func_88(0), iLocal_324[1], 0);
			__LIB_3__::func_567(iLocal_324[1], 1);
			ENTITY::_SET_ENTITY_HEALTH(iLocal_324[1], 10, 0);
			if (iLocal_486 == 0)
			{
				PED::APPLY_PED_DAMAGE_PACK(iLocal_324[1], "PD_Outhouse_Muck_Body_Face", 0f, 1f);
				__LIB_3__::func_459(iLocal_324[1], 0);
				PED::_0xAE6004120C18DF97(iLocal_324[1], 0, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_324[0], 7, 0);
			}
			PED::_0xD355E2F1BB41087E(iLocal_324[1], __LIB_2__::func_93(&uLocal_491));
			ENTITY::_0xAF7F3099B9FEB535(iLocal_324[1], 0f, 0f, 1f);
			__LIB_3__::func_176(iLocal_324[1], 0);
			return true;
		}
		else
		{
			iLocal_324[1] = __LIB_3__::func_870(Local_240[1 /*32*/].f_1, &(Local_240[1 /*32*/]), Local_240[1 /*32*/].f_6, Local_240[1 /*32*/].f_9, 1, 0, 1, 0, 1);
		}
	}
	return false;
}

void func_303(bool bParam0)
{
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(0, 0)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(0, 0));
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(1, 0)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(1, 0));
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(2, 0)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(2, 0));
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(3, 0)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(3, 0));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(4, 0)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(4, 0));
	}
	if (iLocal_486 == 0)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, "PBL_GUN_FLINCH_B");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, "PBL_GUN_FLINCH_C");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, "PBL_GUN_FLINCH_D");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, "PBL_GUN_FLINCH_E");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(11, 0));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(6, 0)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(6, 0));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_141(9, 0)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(9, 0));
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_477, func_141(10, 0));
}

void func_304(int iParam0, int iParam1, var uParam2, char* sParam3, int iParam4)
{
	if (!func_125(iParam0) && __LIB_3__::func_496(iParam1, sParam3, 1067030938 /* Float: 1.2f */))
	{
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 4)
		{
			__LIB_2__::func_315(1515458263, iLocal_324[0], 1);
		}
		func_126(iParam0);
	}
}

bool func_368()
{
	if (!WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46) && PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		return true;
	}
	if (iLocal_520 == 16)
	{
		return true;
	}
	return false;
}

void func_369()
{
	TASK::CLEAR_PED_TASKS(iLocal_324[0], true, false);
	TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(iLocal_324[0], -1822.724f, -448.0817f, 158.5549f, 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
	func_106(iLocal_324[1]);
}

int func_371(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_555(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_4__::func_167(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_4__::func_167(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_485(var uParam0, var uParam1, var uParam2)
{
	__LIB_3__::func_462(uParam2, 1);
	__LIB_2__::func_603(&uParam0, uParam1, uParam2, 1, 1);
}

void func_486(int iParam0)
{
	__LIB_0__::func_516(&iLocal_329, iParam0);
}

void func_487()
{
	if (PED::_IS_PED_LASSOED(iLocal_324[0]) || PED::_IS_PED_HOGTIED(iLocal_324[0]))
	{
		sLocal_955 = "RE_OR_STR_V1_CI_CUSTOMER_HOGTIE_REACT";
	}
	else
	{
		sLocal_955 = "RE_OR_STR_V1_CI_CUSTOMER_ATTACK_REACT";
	}
	TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_324[0], Global_35, 3, 128, -1082130432 /* Float: -1f */, -1, 0);
	PED::SET_PED_KEEP_TASK(iLocal_324[0], true);
	func_89(131072);
}

int func_555(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_555(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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

