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
	char[] cLocal_15[8] = 0;
	struct<12> Local_16[1];
	struct<193> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_222 = 0;
	struct<6> Local_223 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	struct<32> Local_231[4];
	var uLocal_360 = 17;
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
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
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
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	struct<2> Local_497[17];
	vector3 vLocal_532 = { 0f, 0f, 0f };
	float fLocal_535 = 0f;
	vector3 vLocal_536[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_543 = { 0f, 0f, 0f };
	char* sLocal_546[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_553[3] = { NULL, NULL, NULL };
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = -1;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 2;
	var uLocal_566 = 1;
	var uLocal_567 = 1;
	var uLocal_568 = 1;
	var uLocal_569 = 0;
	var uLocal_570 = 1;
	var uLocal_571 = 2;
	var uLocal_572 = 2;
	var uLocal_573 = 3;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 3;
	var uLocal_577 = 1;
	var uLocal_578 = 3;
	var uLocal_579 = 3;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594[2] = { 0, 0 };
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	float fLocal_599 = 0f;
	var uLocal_600[4] = { 0, 0, 0, 0 };
	var uLocal_605[4] = { 0, 0, 0, 0 };
	var uLocal_610 = 8;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_629[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	int iLocal_644[2] = { 0, 0 };
	bool bLocal_647 = false;
	bool bLocal_648 = false;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	struct<28> Local_651[2];
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = -1;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 1097859072;
	var uLocal_726 = 1000;
	var uLocal_727 = 1067450368;
	var uLocal_728 = 5000;
	var uLocal_729 = 42;
	var uLocal_730 = 1103626240;
	var uLocal_731 = 1077936128;
	var uLocal_732 = 1106247680;
	var uLocal_733 = 1103101952;
	var uLocal_734 = 1097859072;
	var uLocal_735 = 1103626240;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	vector3 vLocal_739[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	vector3 vLocal_752[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 15;
	var uLocal_778 = 0;
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
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
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
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	struct<12> Local_918 = { 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0 } ;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	int iLocal_938 = 0;
	struct<75> Local_939[4];
	int iLocal_1240 = 0;
	struct<55> Local_1241 = { 0, 0, 0, 0, 0, 0, 0, 20, 10, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	bool bLocal_1298 = false;
	bool bLocal_1299 = false;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_15 = "PEEP";
	iLocal_585 = 1;
	fLocal_599 = 1.5f;
	iLocal_649 = -1;
	iLocal_938 = 3592;
	iLocal_1240 = __LIB_2__::func_340(1, 0, 0) | 64 | 128 | 256 | 2;
	bLocal_1298 = true;
	Local_29.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_29.f_43 = __LIB_0__::func_12();
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		Local_29.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_4__::func_116(&Local_29, 1);
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 843, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_585)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_29, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_9(&Local_29, &iLocal_589, &iLocal_590);
						Local_29.f_51.f_4 = iLocal_590;
						__LIB_3__::func_455(&Local_29, iLocal_589, 1560);
						func_12(iLocal_589, iLocal_590, &iLocal_14);
						func_13(iLocal_14);
						if (!Local_29.f_161)
						{
							if (__LIB_3__::func_993(102, iLocal_14) != 1)
							{
							}
							else
							{
								func_6();
							}
						}
						func_15(&uLocal_638, &uLocal_641);
						func_16(&uLocal_620, &uLocal_629);
						func_17(&Local_29, &iLocal_589, &iLocal_590);
						func_18(&uLocal_557);
						func_19(&Local_16);
						func_20(&Local_231, &vLocal_532, &vLocal_536, &vLocal_543, &fLocal_535);
						func_21(&(Local_29.f_5), &Local_651, &uLocal_708);
						iLocal_585 = 0;
					}
					else if (Local_29.f_160)
					{
						func_6();
					}
					break;
				case 0:
					if (func_22())
					{
						iLocal_585 = 3;
					}
					else if (!__LIB_3__::func_927(BUILTIN::VDIST(Global_36, Local_29.f_51), Local_29.f_3))
					{
						func_6();
					}
					break;
				case 3:
					if (func_24(0, 1))
					{
						iLocal_914 = 0;
						func_25();
						if (iLocal_14 == 0)
						{
						}
						else
						{
							__LIB_3__::func_400(Local_29.f_51, &Local_16, 0f, 1, 0, -1, 0);
						}
						func_27(iLocal_14, &(Local_939[0 /*75*/].f_21));
						func_27(iLocal_14, &(Local_939[1 /*75*/].f_21));
						func_28();
						iLocal_585 = 4;
					}
					break;
				case 4:
					if (!__LIB_17__::func_871(&Local_29, &uLocal_600, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					func_30();
					if (func_31())
					{
						Local_29.f_50 = 1;
						func_6();
					}
					if (__LIB_3__::func_431(&Local_29, &uLocal_600, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_29.f_158);
		}
	}
}

void func_6()
{
	int iVar0;
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_35();
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_600[2]))
	{
		PED::_0x39A2FC5AF55A52B1(uLocal_600[2], -1);
		PED::_0x36E4B61DC56DE77C(uLocal_600[2], 7f, 20f, 5000, 10000);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_600[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_600[3]))
	{
		PED::_0x39A2FC5AF55A52B1(uLocal_600[3], -1);
		PED::_0x36E4B61DC56DE77C(uLocal_600[3], 7f, 20f, 5000, 10000);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_600[3]));
	}
	func_36(&uLocal_610, 1);
	__LIB_3__::func_525(&(uLocal_620[0]), &(uLocal_629[0]));
	__LIB_3__::func_525(&(uLocal_620[1]), &(uLocal_629[1]));
	__LIB_3__::func_525(&(uLocal_620[2]), &(uLocal_629[2]));
	__LIB_0__::func_172(uLocal_620[3]);
	__LIB_0__::func_172(uLocal_620[4]);
	__LIB_0__::func_172(uLocal_620[6]);
	__LIB_0__::func_172(uLocal_620[7]);
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_620[5]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(uLocal_620[5]);
		__LIB_0__::func_172(uLocal_620[5]);
	}
	__LIB_3__::func_319(Local_223);
	__LIB_3__::func_319(Local_223.f_1);
	if (__LIB_2__::func_1(uLocal_600[0], 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_600[0], false);
	}
	if (__LIB_2__::func_1(uLocal_600[1], 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_600[1], false);
	}
	iVar0 = __LIB_3__::func_564(102, iLocal_14);
	if (Local_29.f_45)
	{
		if (__LIB_5__::func_657() == 102)
		{
			if (!Local_29.f_44)
			{
				iVar0++;
				__LIB_3__::func_461(102, iLocal_14, iVar0);
				if (iVar0 >= 3)
				{
					Local_29.f_44 = 1;
				}
			}
		}
	}
	if (iLocal_649 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_649);
	}
	__LIB_3__::func_493(&Local_29, &uLocal_600, &uLocal_605, iLocal_14, iLocal_589, iLocal_590, 0, 1, func_44(), 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
	}
}

Vector3 func_10(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			*iParam2 = 0;
			break;
		default:
			switch (iParam1)
			{
				case 0:
					*iParam2 = 1;
					break;
				default:
					*iParam2 = 2;
					break;
			}
			break;
	}
}

void func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_400(1190076410);
			break;
	}
}

void func_15(var uParam0, var uParam1)
{
	switch (iLocal_14)
	{
		case 1:
			*uParam0 = { -284.2674f, 865.5158f, 120.1024f };
			*uParam1 = { -283.4608f, 871.796f, 120.1273f };
			break;
		case 2:
			*uParam0 = { -259.0413f, 732.8713f, 117.183f };
			*uParam1 = { -259.0413f, 732.8713f, 117.183f };
			break;
		case 0:
			*uParam0 = { -1784.119f, -404.2327f, 155.4618f };
			*uParam1 = { -285.435f, 865.6515f, 120.1257f };
			break;
		default:
			*uParam0 = { -285.435f, 865.6515f, 120.1257f };
			*uParam1 = { -285.435f, 865.6515f, 120.1257f };
			break;
	}
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	switch (iLocal_14)
	{
		case 1:
			__LIB_3__::func_867(uParam0[0], uParam1[0], -284.763f, 865.133f, 120.555f, 0f, 0f, -6f, 3f, 4f, 2f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_867(uParam0[1], uParam1[1], -283.769f, 871.234f, 120.808f, 0f, 0f, -6f, 4f, 8f, 2f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_867(uParam0[2], uParam1[2], -293.913f, 861.629f, 120.412f, 0f, 0f, -5f, 10f, 4f, 2f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_573(uParam0[3], -281.3292f, 865.2272f, 120.808f, 0f, 0f, -4f, 10f, 1.25f, 2f, "REPT_VOL_PLAYER_SEEN_1");
			__LIB_3__::func_573(uParam0[4], -280.5456f, 865.3428f, 120.808f, 0f, 0f, -4f, 6f, 4f, 2f, "REPT_VOL_PLAYER_SEEN_2");
			__LIB_3__::func_573(uParam0[6], -285.79f, 867.115f, 124.922f, 0f, 0f, -4.5f, 6f, 8f, 4f, "REPT_VOL_IGNORE_BREAKOUT");
			break;
		case 2:
			__LIB_3__::func_867(uParam0[0], uParam1[0], -258.064f, 731.89f, 117.391f, 0f, 0f, 20.5f, 9f, 4f, 3f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_867(uParam0[1], uParam1[1], -254.327f, 740.865f, 118.464f, 0f, 0f, 20.5f, 3f, 15f, 3f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_867(uParam0[2], uParam1[2], -270.007f, 736.106f, 116.712f, 0f, 0f, 19.5f, 11f, 11f, 3f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_573(uParam0[6], -260.756f, 734.223f, 121.985f, 0f, 0f, 21f, 6f, 5f, 4f, "REPT_VOL_IGNORE_BREAKOUT");
			break;
		case 0:
			__LIB_3__::func_867(uParam0[0], uParam1[0], -1781.631f, -404.57f, 156.708f, 0f, 0f, 0f, 11f, 2f, 3f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_867(uParam0[1], uParam1[1], -1775.374f, -402.117f, 156.408f, 0f, 0f, 0f, 2f, 8f, 3f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_867(uParam0[2], uParam1[2], -1773.196f, -401.798f, 155.258f, 0f, 0f, 0f, 2f, 6f, 2f, 1, 534496, 1, 2, 0);
			__LIB_3__::func_683(uParam0[5], -1773.736f, -401.6385f, 154.9288f, 0f, 0f, 0f, 1f, 1f, 1f, "REPT_VOL_BLOCKING");
			PATHFIND::_0x19C7567D2F2287D6((*uParam0)[5], 7);
			__LIB_3__::func_573(uParam0[3], -1784.283f, -404.243f, 156.67f, 0f, 0f, 0f, 0.75f, 2.5f, 2.5f, "REPT_VOL_PLAYER_SEEN_1");
			__LIB_3__::func_573(uParam0[6], -1783.83f, -402.687f, 160.727f, 0f, 0f, 0f, 10f, 7f, 6f, "REPT_VOL_IGNORE_BREAKOUT");
			(*uParam0)[7] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1784.348f, -404.57f, 156.708f, 0f, 0f, 0f, 1f, 2f, 3f);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar0]))
		{
			__LIB_3__::func_378((*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	switch (*iParam1)
	{
		case 1:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0xBCE668AAF83608BE(uParam0->f_173, -1756.639f, -403.6233f, 154.3729f, 0f, 0f, 10f, 20f, 20f, 5f);
					VOLUME::_0xBCE668AAF83608BE(uParam0->f_173, -1785.022f, -422.8229f, 154.3905f, 0f, 0f, 0.1f, 20f, 20f, 5f);
					break;
			}
			break;
	}
}

void func_18(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
	uParam0->f_7 = 2000;
}

void func_19(var uParam0)
{
	if (iLocal_14 == 0)
	{
		(uParam0[0 /*12*/])->f_7 = joaat("P_SHOTGUN_DOUBLEBARREL01");
	}
	else if (iLocal_14 == 2)
	{
		(uParam0[0 /*12*/])->f_7 = joaat("P_OPIUMPIPE01X");
	}
}

void func_20(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	switch (iLocal_14)
	{
		case 0:
			(uParam0[2 /*32*/])->f_6 = { 0.02f, -1.51f, 0f };
			(uParam0[2 /*32*/])->f_9 = 270.3835f;
			__LIB_3__::func_626(&((uParam0[2 /*32*/])->f_22));
			(uParam0[0 /*32*/])->f_6 = { 2.11f, -3.6f, 0f };
			(uParam0[0 /*32*/])->f_9 = 358.5339f;
			__LIB_3__::func_626(&((uParam0[0 /*32*/])->f_22));
			(uParam0[1 /*32*/])->f_6 = { 3f, -3.45f, 0f };
			(uParam0[1 /*32*/])->f_9 = 358.5339f;
			__LIB_3__::func_626(&((uParam0[1 /*32*/])->f_22));
			*uParam1 = { -1784.205f, -404.1717f, 155.4638f };
			*(uParam2[0 /*3*/]) = { -1775.225f, -400.4953f, 155.4706f };
			*(uParam2[1 /*3*/]) = { -1770.009f, -397.7302f, 155.0929f };
			*uParam3 = { -1778.943f, -400.5291f, 155.4879f };
			*fParam4 = 0f;
			break;
		case 1:
			(uParam0[2 /*32*/])->f_6 = { -2.13f, -1.23f, 0.01f };
			(uParam0[2 /*32*/])->f_9 = 263.8729f;
			(uParam0[3 /*32*/])->f_6 = { -1.65f, -1.25f, 0.01f };
			(uParam0[3 /*32*/])->f_9 = 263.8729f;
			(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			(uParam0[0 /*32*/])->f_9 = 82.6332f;
			(uParam0[1 /*32*/])->f_6 = { 0f, 0f, 0f };
			(uParam0[1 /*32*/])->f_9 = 82.6332f;
			*uParam1 = { -285.8419f, 865.4821f, 120.2342f };
			*(uParam2[0 /*3*/]) = { -293.1871f, 835.0521f, 119.1021f };
			*(uParam2[1 /*3*/]) = { -293.1871f, 835.0521f, 119.1021f };
			*uParam3 = { -287.2625f, 867.8655f, 120.1367f };
			*fParam4 = 84.75f;
			break;
		case 2:
			(uParam0[2 /*32*/])->f_6 = { -0.06f, 2.19f, 1.26f };
			(uParam0[2 /*32*/])->f_9 = 275.4f;
			(uParam0[3 /*32*/])->f_6 = { -0.06f, 2.19f, 1.26f };
			(uParam0[3 /*32*/])->f_9 = 275.4f;
			(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			(uParam0[0 /*32*/])->f_9 = 181.3992f;
			(uParam0[1 /*32*/])->f_6 = { 0f, 0f, 0f };
			(uParam0[1 /*32*/])->f_9 = 181.3992f;
			*uParam1 = { -260.9178f, 733.0137f, 118.1432f };
			*uParam3 = { -275.0332f, 727.3121f, 115.9876f };
			*(uParam2[0 /*3*/]) = { -251.8502f, 735.5443f, 117.1832f };
			*(uParam2[1 /*3*/]) = { -251.8502f, 735.5443f, 117.1832f };
			*fParam4 = -180f;
			break;
	}
}

void func_21(int iParam0, var uParam1, int iParam2)
{
	__LIB_4__::func_64(iParam0);
	__LIB_3__::func_391(iParam0, 1);
	__LIB_4__::func_202(iParam0, 1);
	__LIB_3__::func_392(iParam0, 1);
	__LIB_3__::func_232(iParam0, 1);
	__LIB_4__::func_203(iParam0, 0);
	__LIB_7__::func_909(iParam0, 1);
	__LIB_2__::func_181(iParam0, 1);
	__LIB_2__::func_182(iParam0, 0);
	__LIB_2__::func_180(iParam0, 1);
	__LIB_3__::func_391(uParam1[0 /*28*/], 1);
	__LIB_3__::func_385(uParam1[0 /*28*/], 0);
	__LIB_4__::func_202(uParam1[0 /*28*/], 1);
	__LIB_2__::func_180(uParam1[0 /*28*/], 1);
	__LIB_3__::func_393(uParam1[0 /*28*/], 0);
	__LIB_3__::func_392(uParam1[0 /*28*/], 0);
	__LIB_3__::func_386(uParam1[0 /*28*/], 0);
	__LIB_3__::func_391(uParam1[1 /*28*/], 1);
	__LIB_3__::func_385(uParam1[1 /*28*/], 0);
	__LIB_4__::func_202(uParam1[1 /*28*/], 1);
	__LIB_2__::func_180(uParam1[1 /*28*/], 1);
	__LIB_3__::func_393(uParam1[1 /*28*/], 0);
	__LIB_3__::func_392(uParam1[1 /*28*/], 0);
	__LIB_3__::func_386(uParam1[1 /*28*/], 0);
	__LIB_3__::func_391(iParam2, 1);
	__LIB_3__::func_385(iParam2, 0);
	__LIB_4__::func_202(iParam2, 0);
	__LIB_2__::func_180(iParam2, 1);
	__LIB_3__::func_393(iParam2, 1);
	__LIB_3__::func_392(iParam2, 0);
	__LIB_3__::func_386(iParam2, 1);
	__LIB_3__::func_391(iParam2, 1);
}

bool func_22()
{
	int iVar0;
	switch (iLocal_583)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_29))
			{
				func_71(&Local_231);
				__LIB_3__::func_284(&Local_231);
				func_19(&Local_16);
				__LIB_3__::func_314(&Local_16);
				func_74(&Local_497, &uLocal_360);
				func_75(&Local_223);
				func_76(&Local_918);
				if (iLocal_14 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("P_CHAIR02X"), false);
					WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0);
					TASK::REQUEST_WAYPOINT_RECORDING("re_peeping_tom_str");
				}
				if (iLocal_14 == 1)
				{
					STREAMING::REQUEST_MODEL(joaat("P_CURTAINSLACE02X"), false);
				}
				iLocal_583 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_582, cLocal_15))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_360))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_16))
			{
				return false;
			}
			if (iLocal_14 == 0)
			{
				if (!WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR02X")))
				{
					return false;
				}
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_peeping_tom_str"))
				{
					return false;
				}
			}
			if (iLocal_14 == 1)
			{
				if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PEEPING_TOM"))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CURTAINSLACE02X")))
				{
					return false;
				}
			}
			if (!__LIB_3__::func_366(&Local_231))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (Local_231[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_231[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_223, true, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_24(int iParam0, int iParam1)
{
	switch (iLocal_914)
	{
		case 0:
			if (!__LIB_17__::func_892(&Local_29, &uLocal_777, &Local_231, 1, 1, 1, iParam0, iParam1))
			{
				return false;
			}
			iLocal_914 = 1;
			break;
		case 1:
			if (!func_83(&uLocal_777, &Local_231, &uLocal_600, 1, 1, iParam0, iParam1))
			{
				return false;
			}
			iLocal_914 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_25()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(uLocal_600[iVar0], 0, 1))
		{
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_600[iVar0], func_84(iLocal_14, iVar0));
			PED::SET_PED_CONFIG_FLAG(uLocal_600[iVar0], 146, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_600[iVar0], 355, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_600[iVar0], true, true);
		}
		iVar0++;
	}
	__LIB_3__::func_285(uLocal_600[0], &Local_29, 0);
	__LIB_3__::func_285(uLocal_600[1], &Local_29, 0);
	if (iLocal_14 == 0)
	{
		Local_29.f_120++;
	}
}

void func_27(int iParam0, var uParam1)
{
	__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(uParam1[0 /*17*/], 0, 0);
}

void func_28()
{
	vector3 vVar0;
	vVar0 = { Local_29.f_51 };
	switch (iLocal_14)
	{
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223, -262.63f, 734.317f, 117.177f, 0f, 0f, 110f, 2);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223, -291.671f, 866.743f, 120.138f, 0f, 0f, 79.247f, 2);
			break;
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223, vVar0, 0f, 0f, fLocal_535, 2);
			break;
	}
	if (__LIB_2__::func_1(uLocal_600[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223, func_93(0), uLocal_600[0], 0);
	}
	if (__LIB_2__::func_1(uLocal_600[1], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223, func_93(1), uLocal_600[1], 0);
	}
	ANIMSCENE::START_ANIM_SCENE(Local_223);
}

void func_30()
{
	var uVar0;
	if (!Local_29.f_46)
	{
		if (__LIB_3__::func_550(&uLocal_600, &(Local_29.f_5), &iLocal_650, &uLocal_597, 0, 1, 1))
		{
			Local_29.f_46 = 1;
			if (func_105())
			{
				func_106(&iLocal_591, &vLocal_536);
			}
			else
			{
				func_107(&iLocal_591, &vLocal_536);
			}
			switch (iLocal_650)
			{
				case 8:
					break;
				default:
					__LIB_2__::func_504(uLocal_600[0], 0);
					__LIB_2__::func_504(uLocal_600[1], 0);
					break;
			}
			iLocal_644[0] = 1;
			iLocal_644[1] = 1;
			func_109(8);
			func_110();
			__LIB_0__::func_325(&(uLocal_605[0]));
			__LIB_2__::func_526(&(Local_939[0 /*75*/].f_21), 0, 0);
			__LIB_2__::func_526(&(Local_939[1 /*75*/].f_21), 0, 0);
			__LIB_1__::func_649(&iLocal_915, 12);
			__LIB_0__::func_172(uLocal_620[7]);
			if (iLocal_584 < 5)
			{
				__LIB_1__::func_649(&iLocal_584, 13);
			}
			else
			{
				__LIB_1__::func_649(&iLocal_584, 11);
			}
		}
	}
	if (iLocal_584 == 11)
	{
		if (!__LIB_4__::func_201(131072))
		{
			if (__LIB_3__::func_550(&uLocal_600, &uLocal_708, &uVar0, &uLocal_598, 2, 3, 1))
			{
				func_116();
				func_109(131072);
			}
			else if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_WINDOW_SMASHED"), vLocal_532, 5f))
			{
				func_116();
				func_109(131072);
			}
			else if (iLocal_14 == 0 || iLocal_14 == 1)
			{
				if (__LIB_3__::func_332(vLocal_532, 1) < 5f)
				{
					if (func_118(uLocal_600[0], Global_35) || func_118(uLocal_600[1], Global_35))
					{
						func_116();
						func_109(131072);
					}
				}
			}
		}
	}
}

bool func_31()
{
	bool bVar0;
	if (iLocal_584 > 2)
	{
		func_119(!__LIB_4__::func_201(16384));
		func_120(0, &iLocal_916, 536870912);
		func_120(1, &iLocal_917, 1073741824 /* Float: 2f */);
	}
	switch (iLocal_584)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_584, 1);
			break;
		case 1:
			if (func_121())
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_223, "pblIdles"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblIdles", true);
				}
				else
				{
					__LIB_1__::func_649(&iLocal_584, 2);
				}
			}
			break;
		case 2:
			func_122();
			if (__LIB_3__::func_452(&Local_29, 2f, 1114636288 /* Float: 60f */, func_123(), 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_3__::func_164(&(Local_29.f_121));
				__LIB_1__::func_649(&iLocal_584, 3);
			}
			break;
		case 3:
			if (func_122())
			{
				__LIB_1__::func_649(&iLocal_584, 4);
			}
			break;
		case 4:
			func_125();
			if (func_24(2, 3))
			{
				if (func_126())
				{
					func_127();
					func_128();
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_223.f_1, "pblIdles"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223.f_1, "pblIdles", true);
						__LIB_1__::func_649(&iLocal_584, 5);
					}
				}
			}
			break;
		case 5:
			if ((!MAP::DOES_BLIP_EXIST(uLocal_605[0]) && !__LIB_4__::func_201(64)) && __LIB_2__::func_215(Global_35, uLocal_600[0], 1, 10f, 0))
			{
				func_109(64);
				__LIB_3__::func_652(vLocal_532, &(uLocal_605[0]), -89429847, 0, 0, 0);
			}
			func_125();
			func_131();
			if (func_132())
			{
				__LIB_4__::func_243(uLocal_600[0], &(Local_29.f_121));
				__LIB_4__::func_243(uLocal_600[1], &(Local_29.f_121));
				__LIB_3__::func_178(uLocal_600[2], &(Local_29.f_121));
				__LIB_3__::func_164(&(Local_29.f_121));
				__LIB_3__::func_392(&(Local_29.f_5), 0);
				__LIB_1__::func_649(&iLocal_584, 10);
			}
			break;
		case 10:
			func_135();
			if (iLocal_916 >= 10 && iLocal_917 >= 10)
			{
				bVar0 = true;
			}
			if ((ENTITY::IS_ENTITY_DEAD(uLocal_600[0]) || __LIB_0__::func_94(uLocal_600[0], vLocal_532, 1) > 4f) && (ENTITY::IS_ENTITY_DEAD(uLocal_600[1]) || __LIB_0__::func_94(uLocal_600[1], vLocal_532, 1) > 4f))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_0__::func_172(uLocal_620[7]);
				__LIB_1__::func_649(&iLocal_584, 11);
			}
			break;
		case 11:
			func_137();
			func_138();
			func_139();
			func_140();
			func_135();
			func_141();
			func_131();
			break;
		case 13:
			func_137();
			func_138();
			func_131();
			if (func_141())
			{
				Local_29.f_44 = Local_29.f_48;
				return true;
			}
			break;
	}
	return false;
}

void func_35()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<31> Var9;
	if (iLocal_14 != 2)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_223.f_1, false))
	{
		return;
	}
	vVar0 = { -262.63f, 734.317f, 117.177f };
	vVar3 = { 0f, 0f, 110f };
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_600[2], Local_223.f_1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_600[2], Local_497[9 /*2*/], Local_497[9 /*2*/].f_1, 1))
			{
				iVar7 = 9;
				iVar8 = 133;
				fVar6 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_600[2], Local_497[9 /*2*/], Local_497[9 /*2*/].f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_600[2], Local_497[11 /*2*/], Local_497[11 /*2*/].f_1, 1))
			{
				iVar7 = 11;
				iVar8 = 134;
				fVar6 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_600[2], Local_497[11 /*2*/], Local_497[11 /*2*/].f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_600[2], Local_497[13 /*2*/], Local_497[13 /*2*/].f_1, 1))
			{
				iVar7 = 13;
				iVar8 = 134;
				fVar6 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_600[2], Local_497[13 /*2*/], Local_497[13 /*2*/].f_1);
			}
			else
			{
				iVar7 = 9;
				iVar8 = 133;
				fVar6 = 0f;
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_600[2], false, false);
			TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_600[2], Local_497[iVar7 /*2*/], Local_497[iVar7 /*2*/].f_1, vVar0, vVar3, 16f, -8f, -1, iVar8, fVar6, 2, 17317919, 0);
			PED::SET_PED_KEEP_TASK(uLocal_600[2], true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[3]))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_600[3], Local_223.f_1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_600[3], Local_497[10 /*2*/], Local_497[10 /*2*/].f_1, 1))
			{
				iVar7 = 10;
				iVar8 = 133;
				fVar6 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_600[3], Local_497[10 /*2*/], Local_497[10 /*2*/].f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_600[3], Local_497[12 /*2*/], Local_497[12 /*2*/].f_1, 1))
			{
				iVar7 = 12;
				iVar8 = 134;
				fVar6 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_600[3], Local_497[12 /*2*/], Local_497[12 /*2*/].f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_600[3], Local_497[14 /*2*/], Local_497[14 /*2*/].f_1, 1))
			{
				iVar7 = 14;
				iVar8 = 134;
				fVar6 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_600[3], Local_497[14 /*2*/], Local_497[14 /*2*/].f_1);
			}
			else
			{
				iVar7 = 10;
				iVar8 = 133;
				fVar6 = 0f;
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_600[3], false, false);
			TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_600[3], Local_497[iVar7 /*2*/], Local_497[iVar7 /*2*/].f_1, vVar0, vVar3, 16f, -8f, -1, iVar8, fVar6, 2, 17317919, 0);
			PED::SET_PED_KEEP_TASK(uLocal_600[3], true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_16[0 /*12*/].f_8))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_16[0 /*12*/].f_8, Local_223.f_1))
		{
			Var9.f_4 = 1065353216;
			Var9.f_5 = 1065353216;
			Var9.f_9 = 1065353216;
			Var9.f_10 = 1065353216;
			Var9.f_14 = 1065353216;
			Var9.f_15 = 1065353216;
			Var9.f_17 = 1040187392;
			Var9.f_18 = 1040187392;
			Var9.f_19 = -1;
			Var9.f_26 = -1082130432;
			Var9 = 1;
			Var9.f_27 = { vVar0 };
			Var9.f_30 = { vVar3 };
			Var9.f_17 = 16f;
			Var9.f_22 = 1;
			Var9.f_1 = Local_497[16 /*2*/];
			if (__LIB_4__::func_201(262144))
			{
				Var9.f_2 = Local_497[16 /*2*/].f_1;
				Var9.f_20 = 262;
			}
			else
			{
				Var9.f_2 = Local_497[15 /*2*/].f_1;
				Var9.f_20 = 261;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_16[0 /*12*/].f_8, Var9.f_1, Var9.f_2, 1))
			{
				Var9.f_3 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_16[0 /*12*/].f_8, Var9.f_1, Var9.f_2);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_16[0 /*12*/].f_8))
			{
				ENTITY::DETACH_ENTITY(Local_16[0 /*12*/].f_8, true, true);
			}
			TASK::PLAY_ENTITY_SCRIPTED_ANIM(Local_16[0 /*12*/].f_8, &Var9);
			if (!ENTITY::_0x0B7CB1300CBFE19C(Local_16[0 /*12*/].f_8, 1))
			{
				OBJECT::DELETE_OBJECT(&(Local_16[0 /*12*/].f_8));
			}
		}
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]))
		{
			if (bParam1)
			{
			}
			PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar0], 448, !bParam1);
		}
		iVar0++;
	}
}

bool func_44()
{
	if (__LIB_4__::func_201(536870912) || __LIB_4__::func_201(1073741824 /* Float: 2f */))
	{
		return true;
	}
	return false;
}

void func_71(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[0 /*32*/] = 4;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "0925_A_M_M_Civ_Poor_White_AVOID_08", 64);
			(uParam0[0 /*32*/])->f_3 = -2101093034;
			(uParam0[1 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[1 /*32*/] = 4;
			StringCopy(&((uParam0[1 /*32*/])->f_23), "0924_A_M_M_Civ_Poor_White_AVOID_07", 64);
			(uParam0[1 /*32*/])->f_3 = 1906981667;
			(uParam0[2 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_FEMALES_01");
			(*uParam0)[2 /*32*/] = 5;
			StringCopy(&((uParam0[2 /*32*/])->f_23), "PEEPED_WOMAN", 64);
			(uParam0[2 /*32*/])->f_3 = 1149397788;
			break;
		case 2:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[0 /*32*/] = 4;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19", 64);
			(uParam0[0 /*32*/])->f_3 = 681302568;
			(uParam0[1 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[1 /*32*/] = 4;
			StringCopy(&((uParam0[1 /*32*/])->f_23), "0643_A_M_M_Poor_White_02", 64);
			(uParam0[1 /*32*/])->f_3 = -1426399484;
			(uParam0[2 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[2 /*32*/] = 4;
			StringCopy(&((uParam0[2 /*32*/])->f_23), "OPIUM_MAN", 64);
			(uParam0[2 /*32*/])->f_3 = 787636659;
			(uParam0[3 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_FEMALES_01");
			(*uParam0)[3 /*32*/] = 5;
			StringCopy(&((uParam0[3 /*32*/])->f_23), "OPIUM_WOMAN", 64);
			(uParam0[3 /*32*/])->f_3 = -332119951;
			break;
		case 1:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[0 /*32*/] = 4;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
			(uParam0[0 /*32*/])->f_3 = -986147997;
			(uParam0[1 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[1 /*32*/] = 4;
			StringCopy(&((uParam0[1 /*32*/])->f_23), "0816_A_M_M_ValLaborer_01_WHITE_01", 64);
			(uParam0[1 /*32*/])->f_3 = 912389556;
			(uParam0[2 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_MALES_01");
			(*uParam0)[2 /*32*/] = 4;
			StringCopy(&((uParam0[2 /*32*/])->f_23), "SPANKED_COWBOY", 64);
			(uParam0[2 /*32*/])->f_3 = 2135582760;
			(uParam0[3 /*32*/])->f_1 = joaat("RE_PEEPINGTOM_FEMALES_01");
			(*uParam0)[3 /*32*/] = 5;
			StringCopy(&((uParam0[3 /*32*/])->f_23), "SPANKING_WIFE", 64);
			(uParam0[3 /*32*/])->f_3 = 1883654295;
			break;
	}
}

void func_74(var uParam0, var uParam1)
{
	if (iLocal_14 == 0)
	{
		(*uParam0)[0 /*2*/] = "script_re@peep_tom@topless_woman";
		(uParam0[0 /*2*/])->f_1 = "peepers_breakout_left_peeper01";
		(*uParam0)[1 /*2*/] = "script_re@peep_tom@topless_woman";
		(uParam0[1 /*2*/])->f_1 = "peepers_breakout_left_peeper02";
		(*uParam0)[2 /*2*/] = "script_re@peep_tom@topless_woman";
		(uParam0[2 /*2*/])->f_1 = "PEEPERS_BREAKOUT_RIGHT_ALT_PEEPER01";
		(*uParam0)[3 /*2*/] = "script_re@peep_tom@topless_woman";
		(uParam0[3 /*2*/])->f_1 = "PEEPERS_BREAKOUT_RIGHT_ALT_PEEPER02";
	}
	else if (iLocal_14 == 1)
	{
		(*uParam0)[0 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[0 /*2*/])->f_1 = "peepers_breakout_left_peeper01";
		(*uParam0)[1 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[1 /*2*/])->f_1 = "peepers_breakout_left_peeper02";
		(*uParam0)[2 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[2 /*2*/])->f_1 = "peepers_breakout_right_peeper01";
		(*uParam0)[3 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[3 /*2*/])->f_1 = "peepers_breakout_right_peeper02";
		(*uParam0)[4 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[4 /*2*/])->f_1 = "spanking_breakout_cowboy";
		(*uParam0)[5 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[5 /*2*/])->f_1 = "spanking_breakout_female";
		(*uParam0)[6 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[6 /*2*/])->f_1 = "spanking_breakout_curtains";
		(*uParam0)[7 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[7 /*2*/])->f_1 = "spanking_breakout_cig";
		(*uParam0)[8 /*2*/] = "script_re@peep_tom@spanking_cowboy";
		(uParam0[8 /*2*/])->f_1 = "SPANKING_IDLE_CURTAINS";
	}
	else if (iLocal_14 == 2)
	{
		(*uParam0)[0 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[0 /*2*/])->f_1 = "peepers_breakout_left_peeper01";
		(*uParam0)[1 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[1 /*2*/])->f_1 = "peepers_breakout_left_peeper02";
		(*uParam0)[2 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[2 /*2*/])->f_1 = "peepers_breakout_right_peeper01";
		(*uParam0)[3 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[3 /*2*/])->f_1 = "peepers_breakout_right_peeper02";
		(*uParam0)[9 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[9 /*2*/])->f_1 = "SMOKING_IDLE_MALE";
		(*uParam0)[10 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[10 /*2*/])->f_1 = "SMOKING_IDLE_FEMALE";
		(*uParam0)[11 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[11 /*2*/])->f_1 = "SMOKING_EXIT_MALE";
		(*uParam0)[12 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[12 /*2*/])->f_1 = "SMOKING_EXIT_FEMALE";
		(*uParam0)[13 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[13 /*2*/])->f_1 = "SMOKING_EXIT_IDLE_MALE";
		(*uParam0)[14 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[14 /*2*/])->f_1 = "SMOKING_EXIT_IDLE_FEMALE";
		(*uParam0)[15 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[15 /*2*/])->f_1 = "SMOKING_IDLE_PIPE";
		(*uParam0)[16 /*2*/] = "script_re@peep_tom@smoking_opium";
		(uParam0[16 /*2*/])->f_1 = "SMOKING_EXIT_PIPE";
	}
	__LIB_3__::func_318((*uParam0)[0 /*2*/], uParam1);
}

void func_75(int iParam0)
{
	switch (iLocal_14)
	{
		case 2:
			iParam0->f_4 = "script@beat@town@peepingTom@opiumPeepers";
			iParam0->f_5 = "script@beat@town@peepingTom@opiumScene";
			break;
		case 1:
			iParam0->f_4 = "script@beat@town@peepingTom@spankPeepers";
			iParam0->f_5 = "script@beat@town@peepingTom@spankScene";
			break;
		case 0:
			iParam0->f_4 = "script@beat@town@peepingTom@preenPeepers";
			iParam0->f_5 = "script@beat@town@peepingTom@preenScene";
			break;
	}
	*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, "pblIdles", false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
}

void func_76(var uParam0)
{
	*uParam0 = { -1784.206f, -400.6368f, 156.4032f };
	uParam0->f_3 = { -1784.186f, -405.589f, 156.9501f };
	uParam0->f_6 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
	uParam0->f_7 = 20f;
	uParam0->f_12 = 1;
	uParam0->f_15 = 1;
	uParam0->f_11 = Global_35;
}

bool func_83(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	if (*uParam1 != *uParam2)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= *uParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *uParam1)
	{
		iParam6 = (*uParam1 - 1);
	}
	if (__LIB_4__::func_225(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar0]) && (uParam1[iVar0 /*32*/])->f_1 != 0)
			{
				(*uParam2)[iVar0] = __LIB_3__::func_827(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0]))
				{
					if ((uParam1[iVar0 /*32*/])->f_12 != 0)
					{
						(uParam1[iVar0 /*32*/])->f_11 = __LIB_3__::func_827(uParam0, iVar0 + 15);
						__LIB_4__::func_204(&((uParam1[iVar0 /*32*/])->f_11), uParam1[iVar0 /*32*/], bParam3, 1);
						ENTITY::_SET_ENTITY_HEALTH((uParam1[iVar0 /*32*/])->f_11, 400, 0);
						PED::_SET_RANDOM_OUTFIT_VARIATION((uParam1[iVar0 /*32*/])->f_11, true);
						PED::_SET_PED_BODY_COMPONENT((uParam1[iVar0 /*32*/])->f_11, joaat("META_HORSE_SADDLE_ONLY"));
						PED::_UPDATE_PED_VARIATION((uParam1[iVar0 /*32*/])->f_11, true, true, true, true, false);
						if ((uParam1[iVar0 /*32*/])->f_13)
						{
							PED::_SET_PED_ON_MOUNT((*uParam2)[iVar0], (uParam1[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG((*uParam2)[iVar0], 307, true);
					}
					if ((uParam1[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1((*uParam2)[iVar0], (uParam1[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam1[iVar0 /*32*/])->f_23)))
						{
							__LIB_2__::func_133((*uParam2)[iVar0], &((uParam1[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (__LIB_3__::func_841(&((uParam1[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_0xDFCE8CE9F3EBE93F((*uParam2)[iVar0]);
					}
					__LIB_4__::func_204(uParam2[iVar0], uParam1[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		__LIB_3__::func_828(uParam0);
		return true;
	}
	return false;
}

char* func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "Default_Panic";
				case 1:
					return "Default_Panic";
				case 2:
					return "Default_Panic";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "Default_Panic";
				case 1:
					return "Default_Panic";
				case 2:
					return "Default_Panic";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "Default_Panic";
				case 1:
					return "Default_Panic";
				case 2:
					return "Default_Panic";
				default:
					break;
			}
			break;
	}
	return "Default_Panic";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pedPeeperA";
		case 1:
			return "pedPeeperB";
		case 2:
			return "pedVictim";
		case 3:
			return "pedVictim2";
		default:
			break;
	}
	return "INVALID_PED";
}

bool func_105()
{
	vector3 vVar0;
	switch (iLocal_14)
	{
		case 1:
			vVar0 = { -280.7759f, 864.9177f, 119.6622f };
			break;
		case 2:
			vVar0 = { -258.9949f, 727.1036f, 116.3725f };
			break;
		case 0:
			vVar0 = { -1784.333f, -405.4706f, 155.4812f };
			break;
	}
	if (__LIB_0__::func_195(vVar0, vLocal_532, Global_36))
	{
		return true;
	}
	return false;
}

void func_106(int iParam0, var uParam1)
{
	__LIB_1__::func_683(iParam0, 32);
	switch (iLocal_14)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -1774.641f, -404.1791f, 155.4695f };
			*(uParam1[1 /*3*/]) = { -1773.69f, -391.0948f, 155.7128f };
			break;
		case 2:
			*(uParam1[0 /*3*/]) = { -251.9975f, 735.3788f, 117.1469f };
			*(uParam1[1 /*3*/]) = { -254.7075f, 757.2803f, 116.0289f };
			break;
		case 1:
			*(uParam1[0 /*3*/]) = { -288.2779f, 876.9728f, 119.7318f };
			*(uParam1[1 /*3*/]) = { -298.1447f, 875.8338f, 119.517f };
			break;
	}
}

void func_107(int iParam0, var uParam1)
{
	__LIB_1__::func_683(iParam0, 16);
	switch (iLocal_14)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -1791.483f, -404.6982f, 152.0737f };
			*(uParam1[1 /*3*/]) = { -1797.492f, -418.425f, 155.4626f };
			break;
		case 2:
			*(uParam1[0 /*3*/]) = { -272.4986f, 727.4485f, 116.1223f };
			*(uParam1[1 /*3*/]) = { -279.9165f, 742.4937f, 116.3102f };
			break;
		case 1:
			*(uParam1[0 /*3*/]) = { -292.1957f, 856.775f, 119.3069f };
			*(uParam1[1 /*3*/]) = { -304.7931f, 845.9597f, 118.5402f };
			break;
	}
}

void func_109(int iParam0)
{
	if (!__LIB_4__::func_201(iParam0))
	{
		__LIB_1__::func_683(&iLocal_591, iParam0);
	}
}

void func_110()
{
	if (!__LIB_2__::func_1(uLocal_600[0], 0, 1) || !__LIB_2__::func_1(uLocal_600[1], 0, 1))
	{
		return;
	}
	if (__LIB_2__::func_118(uLocal_600[0], 1, 1) > __LIB_2__::func_118(uLocal_600[1], 1, 1))
	{
		iLocal_594[0] = 0;
		iLocal_594[1] = 350;
	}
	else
	{
		iLocal_594[0] = 350;
		iLocal_594[1] = 0;
	}
}

void func_116()
{
	switch (iLocal_14)
	{
		case 1:
			if (func_254(Local_223.f_1, "pblIdles") || (func_254(Local_223.f_1, "pblExit") && func_255(Local_223.f_1, 0f, 0.6847f)))
			{
				bLocal_1299 = true;
				iLocal_587 = 3;
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223.f_1, "pblBreakout", true);
				func_109(524288);
				__LIB_1__::func_649(&iLocal_588, 4);
				__LIB_1__::func_649(&iLocal_584, 11);
			}
			break;
		case 2:
			bLocal_1299 = true;
			iLocal_587 = 3;
			__LIB_1__::func_649(&iLocal_588, 4);
			__LIB_1__::func_649(&iLocal_584, 11);
			break;
		case 0:
			bLocal_1299 = true;
			iLocal_587 = 3;
			__LIB_1__::func_649(&iLocal_588, 4);
			__LIB_0__::func_172(uLocal_620[7]);
			__LIB_1__::func_649(&iLocal_584, 11);
			break;
	}
}

int func_118(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_119(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_4__::func_201(536870912))
	{
		iVar0 = func_257(&(uLocal_600[0]), &(Local_939[0 /*75*/]), 15f, &(Local_939[0 /*75*/].f_21), &(Local_29.f_192), 0f, 1, 0, 0, iLocal_1240, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (!__LIB_4__::func_201(1073741824 /* Float: 2f */))
	{
		iVar1 = func_257(&(uLocal_600[1]), &(Local_939[1 /*75*/]), 15f, &(Local_939[1 /*75*/].f_21), &(Local_29.f_192), 0f, 1, 0, 0, iLocal_1240, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (__LIB_4__::func_201(1))
	{
		return;
	}
	if ((__LIB_2__::func_456(&(Local_939[0 /*75*/])) && iVar0 != -1) || (__LIB_2__::func_456(&(Local_939[1 /*75*/])) && iVar1 != -1))
	{
		if (bParam0)
		{
			bLocal_647 = true;
			func_259();
		}
		__LIB_2__::func_303(Global_35, uLocal_600[0], func_260(iLocal_14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_2__::func_526(&(Local_939[0 /*75*/].f_21), 0, 0);
		__LIB_2__::func_526(&(Local_939[1 /*75*/].f_21), 0, 0);
		__LIB_0__::func_325(&(uLocal_605[0]));
		func_109(1);
	}
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_2__::func_1(uLocal_600[iParam0], 0, 0))
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (__LIB_3__::func_496(uLocal_600[0], "RE_PT_AGGRO", 1067030938 /* Float: 1.2f */))
		{
			switch (iLocal_14)
			{
				case 0:
					__LIB_1__::func_683(&iLocal_592, 512);
					break;
				case 1:
					__LIB_1__::func_683(&iLocal_592, 2048);
					break;
				case 2:
					__LIB_1__::func_683(&iLocal_592, 262144);
					break;
			}
		}
	}
	if (iLocal_644[iParam0])
	{
		switch (*iParam1)
		{
			case 0:
			case 1:
				__LIB_1__::func_148(&(vLocal_739[iParam0 /*3*/]));
				iLocal_644[iParam0] = 0;
				__LIB_1__::func_649(iParam1, 5);
				break;
			case 3:
			case 10:
			case 11:
				__LIB_1__::func_148(&(vLocal_739[iParam0 /*3*/]));
				iLocal_644[iParam0] = 0;
				__LIB_1__::func_649(iParam1, 8);
				break;
		}
	}
	switch (*iParam1)
	{
		case 0:
			TASK::_0x2E1D6D87346BB7D2(uLocal_600[iParam0], Global_35, 0, 0);
			__LIB_1__::func_649(iParam1, 1);
			break;
		case 1:
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[iParam0], -1931509438))
			{
				func_264(Local_223, func_93(iParam0), uLocal_600[iParam0]);
				if (iLocal_14 != 2)
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_600[iParam0], joaat("MOTIONSTATE_WALK"), false, 0, false);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_536[1 /*3*/], 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				__LIB_1__::func_474(uLocal_600[iParam0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_600[iParam0], true);
				__LIB_1__::func_649(iParam1, 10);
			}
			break;
		case 5:
			if (__LIB_3__::func_464(uLocal_600[iParam0], 0, &(Local_651[iParam0 /*28*/]), &uVar2, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(uLocal_600[iParam0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_600[iParam0], true);
				__LIB_1__::func_148(&(vLocal_752[iParam0 /*3*/]));
				__LIB_1__::func_649(iParam1, 11);
			}
			else if (func_267(iParam0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_223, false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_223, "pblBreakoutL") && !ANIMSCENE::_0x1F0E401031E20146(Local_223, "pblBreakoutR"))
					{
						if (__LIB_4__::func_201(16))
						{
							if (iLocal_14 == 0)
							{
								func_109(268435456);
							}
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblBreakoutL", true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblBreakoutR", true);
						}
					}
				}
				else
				{
					iVar1 = func_268(iParam0, __LIB_4__::func_201(16));
					TASK::TASK_PLAY_ANIM(uLocal_600[iParam0], Local_497[iVar1 /*2*/], Local_497[iVar1 /*2*/].f_1, 8f, -16f, -1, 16384, 0f, false, 0, false, 0, false);
				}
				__LIB_1__::func_649(iParam1, 6);
			}
			break;
		case 6:
			if (__LIB_3__::func_496(uLocal_600[iParam0], "bSeesPlayer", 1067030938 /* Float: 1.2f */))
			{
				__LIB_2__::func_504(uLocal_600[iParam0], 0);
			}
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_600[0], true) || PED::IS_PED_DEAD_OR_DYING(uLocal_600[1], true))
			{
				PED::SET_PED_RESET_FLAG(uLocal_600[iParam0], 290, true);
				if (!bLocal_648)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[iParam0], joaat("RE_PT_AGGRO")))
					{
						if (__LIB_2__::func_122(uLocal_600[iParam0], func_269(), 291934926, 0, 1, &(Local_231[iParam0 /*32*/].f_23), func_270(iParam0, iLocal_14, iLocal_590), 1))
						{
							bLocal_648 = true;
						}
					}
				}
			}
			if (__LIB_3__::func_464(uLocal_600[iParam0], 0, &(Local_651[iParam0 /*28*/]), &uVar2, 0, 0) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_600[iParam0], Local_223)))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_4__::func_201(268435456) && func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_532, 3, 384, 15f, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(uLocal_600[iParam0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_600[iParam0], true);
				__LIB_1__::func_148(&(vLocal_752[iParam0 /*3*/]));
				if (PED::IS_PED_DEAD_OR_DYING(uLocal_600[0], true) || PED::IS_PED_DEAD_OR_DYING(uLocal_600[1], true))
				{
					if (!bLocal_648)
					{
						if (__LIB_2__::func_122(uLocal_600[iParam0], func_269(), 291934926, 0, 1, &(Local_231[iParam0 /*32*/].f_23), func_270(iParam0, iLocal_14, iLocal_590), 1))
						{
							bLocal_648 = true;
						}
					}
				}
				__LIB_1__::func_649(iParam1, 7);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[iParam0], -1931509438))
			{
				func_264(Local_223, func_93(iParam0), uLocal_600[iParam0]);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FORCE_MOTION_STATE(0, joaat("MOTIONSTATE_RUN"), false);
				if (func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_536[0 /*3*/], 2f, -1, 1f, 8193, 40000f);
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_532, 3, 384, 15f, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(uLocal_600[iParam0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_600[iParam0], true);
				__LIB_1__::func_148(&(vLocal_752[iParam0 /*3*/]));
				__LIB_1__::func_649(iParam1, 7);
			}
			break;
		case 7:
			if (__LIB_1__::func_313(&(vLocal_752[iParam0 /*3*/]), 5f))
			{
				func_273(iParam0, iParam2, 33);
				__LIB_1__::func_649(iParam1, 12);
			}
			break;
		case 8:
			if (func_267(iParam0))
			{
				func_274(iParam0, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, func_84(iLocal_14, iParam0), 0.75f, 0, 4);
				if (func_266(iParam0, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(uLocal_600[iParam0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_600[iParam0], true);
				__LIB_1__::func_148(&(vLocal_752[iParam0 /*3*/]));
				__LIB_1__::func_649(iParam1, 11);
			}
			break;
		case 9:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_266(iParam0, 1))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_peeping_tom_str", 0, iLocal_938, -1, 0, 0, -1);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(uLocal_600[iParam0], &iVar0, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(uLocal_600[iParam0], true);
			__LIB_1__::func_148(&(vLocal_752[iParam0 /*3*/]));
			__LIB_1__::func_649(iParam1, 11);
			break;
		case 10:
			PED::SET_PED_RESET_FLAG(uLocal_600[iParam0], 12, true);
			PED::SET_PED_RESET_FLAG(uLocal_600[iParam0], 172, true);
			if (__LIB_0__::func_94(uLocal_600[iParam0], vLocal_532, 1) > 20f || __LIB_0__::func_94(uLocal_600[iParam0], vLocal_536[1 /*3*/], 1) < 10f)
			{
				if (__LIB_4__::func_201(128))
				{
					func_273(iParam0, iParam2, 0);
				}
				else
				{
					func_273(iParam0, iParam2, 30);
				}
				__LIB_1__::func_649(iParam1, 12);
			}
			break;
		case 11:
			if (__LIB_1__::func_313(&(vLocal_752[iParam0 /*3*/]), 5f))
			{
				func_273(iParam0, iParam2, 33);
				__LIB_1__::func_649(iParam1, 12);
			}
			break;
		case 12:
			break;
	}
}

bool func_121()
{
	int iVar0;
	switch (iLocal_586)
	{
		case 0:
			iLocal_586 = 1;
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_223, true, false))
			{
				return false;
			}
			else
			{
				iLocal_586 = 2;
			}
			break;
		case 2:
			sLocal_546[0] = "pblIdles";
			sLocal_546[1] = "pblDialogue";
			sLocal_546[2] = "pblExitL";
			sLocal_546[3] = "pblExitR";
			sLocal_546[4] = "pblBreakoutL";
			sLocal_546[5] = "pblBreakoutR";
			sLocal_553[0] = "pblIdles";
			sLocal_553[1] = "pblExit";
			sLocal_553[2] = "pblBreakout";
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_546[iVar0]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223, sLocal_546[iVar0]);
				}
				iVar0++;
			}
			iLocal_586 = 3;
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_546[iVar0]))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223, sLocal_546[iVar0]))
					{
						return false;
					}
				}
				iVar0++;
			}
			iLocal_586 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_122()
{
	switch (iLocal_1300)
	{
		case 0:
			if (iLocal_14 == 1)
			{
				iLocal_1300 = 1;
			}
			else
			{
				iLocal_1300 = 4;
			}
			break;
		case 1:
			iLocal_1301 = INTERIOR::GET_INTERIOR_AT_COORDS(-289.4923f, 865.9225f, 120.1366f);
			iLocal_1300 = 3;
			break;
		case 3:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1301))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_1301))
				{
					if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_1301, "val_res_a_int_peepcurtain"))
					{
						if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1301, "val_res_a_int_peepcurtain"))
						{
							INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1301, "val_res_a_int_peepcurtain", 0);
						}
						iLocal_1300 = 2;
					}
				}
			}
			else
			{
				iLocal_1300 = 1;
			}
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_VAL_PEEPCURTAIN01X")))
			{
				STREAMING::REQUEST_MODEL(joaat("P_VAL_PEEPCURTAIN01X"), false);
			}
			else if (iLocal_1302 == 0)
			{
				iLocal_1302 = ENTITY::_0x6F3068258A499E52(joaat("P_VAL_PEEPCURTAIN01X"), -286.4733f, 865.5103f, 120.869f, 5);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_1302))
			{
				iLocal_619 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_1302);
				iLocal_1300 = 4;
			}
			else
			{
				iLocal_1302 = ENTITY::_0x6F3068258A499E52(joaat("P_VAL_PEEPCURTAIN01X"), -286.4733f, 865.5103f, 120.869f, 5);
			}
			break;
		case 4:
			Local_223.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_223.f_5, 0, 0, false, true);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_223.f_5))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_223.f_1, true, false))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_223.f_1);
					iLocal_1300 = 5;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_223.f_1, true, false))
			{
				iLocal_1300 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

float func_123()
{
	switch (iLocal_14)
	{
		case 0:
			return 20f;
		case 1:
			return 35f;
		case 2:
			return 20f;
		default:
			break;
	}
	return 20f;
}

void func_125()
{
	if (__LIB_4__::func_201(8) || iLocal_584 < 5)
	{
		return;
	}
	switch (iLocal_14)
	{
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(1)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(2)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(4)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(8)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(16)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(32)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(64)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(128)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(256)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(512)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(1)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(2)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(4)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(8)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(16)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(64)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(128)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			break;
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(1)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(2)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(4)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(8)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(16)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(32)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[0], func_275(64)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[1], func_275(128)))
			{
				__LIB_3__::func_277(40789253, vLocal_532, 1);
			}
			break;
	}
}

bool func_126()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_223.f_1, true, false))
	{
		return false;
	}
	else
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223.f_1, sLocal_553[0]))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223.f_1, sLocal_553[0]);
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223.f_1, sLocal_553[1]))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223.f_1, sLocal_553[1]);
			return false;
		}
		if (iLocal_14 == 1)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_223.f_1, sLocal_553[2]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_223.f_1, sLocal_553[2]);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_127()
{
	if (__LIB_2__::func_1(uLocal_600[2], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_600[2], 253, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_600[2], 301, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_600[2], 1, true);
		__LIB_1__::func_991(uLocal_600[2], 0);
		switch (iLocal_14)
		{
			case 2:
				__LIB_0__::func_169(uLocal_600[2], 0, 1);
				break;
			case 0:
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_600[2], func_84(iLocal_14, 2));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_600[2], false);
				break;
		}
	}
	if (__LIB_2__::func_1(uLocal_600[3], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_600[3], 253, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_600[3], 301, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_600[3], 1, true);
		__LIB_1__::func_991(uLocal_600[3], 0);
	}
}

void func_128()
{
	vector3 vVar0;
	vVar0 = { Local_29.f_51 };
	switch (iLocal_14)
	{
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223.f_1, -262.63f, 734.317f, 117.177f, 0f, 0f, 110f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, "objPipe", Local_16[0 /*12*/].f_8, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223.f_1, -291.6873f, 866.289f, 120.1314f, 0f, 0f, fLocal_535, 2);
			break;
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_223.f_1, vVar0, 0f, 0f, fLocal_535, 2);
			Local_16[0 /*12*/].f_8 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, Local_29.f_51 + Vector(0.1f, 0f, 0f), true, 1f);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, "objGun", Local_16[0 /*12*/].f_8, 0);
			break;
	}
	if (__LIB_2__::func_1(uLocal_600[2], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, func_93(2), uLocal_600[2], 0);
	}
	if (__LIB_2__::func_1(uLocal_600[3], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_223.f_1, func_93(3), uLocal_600[3], 0);
	}
	ANIMSCENE::START_ANIM_SCENE(Local_223.f_1);
}

void func_131()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_600[2]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_600[2], 258, true);
	}
	if (iLocal_14 != 0 && ENTITY::DOES_ENTITY_EXIST(uLocal_600[3]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_600[3], 258, true);
	}
}

bool func_132()
{
	switch (iLocal_915)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_915, 1);
			break;
		case 1:
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblDialogue", true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_223, "bPlayDialogue", true, false);
			__LIB_1__::func_649(&iLocal_915, 2);
			break;
		case 2:
			if (func_281() || __LIB_4__::func_201(1))
			{
				if (func_105())
				{
					func_106(&iLocal_591, &vLocal_536);
				}
				else
				{
					func_107(&iLocal_591, &vLocal_536);
				}
				__LIB_1__::func_649(&iLocal_915, 4);
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_223) > func_282(iLocal_14))
			{
				if (func_105() || iLocal_14 == 0)
				{
					func_106(&iLocal_591, &vLocal_536);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblExitR", true);
				}
				else
				{
					func_107(&iLocal_591, &vLocal_536);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223, "pblExitL", true);
				}
				__LIB_0__::func_172(uLocal_620[7]);
				func_109(16384);
				__LIB_1__::func_649(&iLocal_916, 3);
				__LIB_1__::func_649(&iLocal_917, 3);
				__LIB_1__::func_649(&iLocal_915, 3);
			}
			break;
		case 3:
			if (!__LIB_4__::func_79(Local_223))
			{
				__LIB_1__::func_649(&iLocal_915, 12);
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[0]))
			{
				PED::SET_PED_RESET_FLAG(uLocal_600[0], 290, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[1]))
			{
				PED::SET_PED_RESET_FLAG(uLocal_600[1], 290, true);
			}
			if (!__LIB_0__::func_75(&uLocal_736))
			{
				func_109(8);
				__LIB_1__::func_148(&uLocal_736);
			}
			else if (__LIB_0__::func_265(&uLocal_736) > fLocal_599)
			{
				__LIB_1__::func_649(&iLocal_915, 5);
			}
			break;
		case 5:
			if (func_105())
			{
				func_109(32);
			}
			else
			{
				func_109(16);
			}
			__LIB_1__::func_148(&(vLocal_739[0 /*3*/]));
			__LIB_1__::func_148(&(vLocal_739[1 /*3*/]));
			__LIB_1__::func_649(&iLocal_916, 5);
			__LIB_1__::func_649(&iLocal_917, 5);
			__LIB_1__::func_649(&iLocal_915, 12);
			break;
		case 12:
			return true;
	}
	return false;
}

void func_135()
{
	if (__LIB_4__::func_201(512))
	{
		return;
	}
	else if (__LIB_4__::func_201(256))
	{
		if (__LIB_2__::func_227(-5f, 1, 0, 0))
		{
			func_274(0, 1);
			__LIB_1__::func_649(&iLocal_916, 9);
			__LIB_1__::func_649(&iLocal_917, 9);
			func_287(256);
			func_109(512);
		}
		return;
	}
	if (__LIB_4__::func_201(1))
	{
		if (!bLocal_647)
		{
			if (__LIB_2__::func_1(uLocal_600[0], 0, 1))
			{
				TASK::_0x2E1D6D87346BB7D2(uLocal_600[0], Global_35, 0, 0);
			}
			if (__LIB_2__::func_1(uLocal_600[1], 0, 1))
			{
				TASK::_0x2E1D6D87346BB7D2(uLocal_600[1], Global_35, 0, 0);
			}
			func_109(256);
		}
	}
	if (!__LIB_4__::func_201(1) && __LIB_0__::func_94(uLocal_600[0], Local_29.f_51, 1) > 10f)
	{
		__LIB_2__::func_526(&(Local_939[0 /*75*/].f_21), 0, 0);
		__LIB_2__::func_526(&(Local_939[1 /*75*/].f_21), 0, 0);
		func_109(512);
	}
	if (__LIB_4__::func_201(8) || __LIB_4__::func_201(128))
	{
		return;
	}
	if (__LIB_3__::func_332(Local_29.f_51, 1) < 15f && __LIB_2__::func_227(-3f, 1, 0, 0))
	{
		if (__LIB_2__::func_215(uLocal_600[0], Global_35, 1, 7f, 0))
		{
			func_109(128);
			__LIB_2__::func_122(uLocal_600[0], func_288(0, iLocal_14, iLocal_590), 291934926, 0, 1, &(Local_231[0 /*32*/].f_23), func_289(0, iLocal_14, iLocal_590), 1);
		}
		else if (__LIB_2__::func_215(uLocal_600[1], Global_35, 1, 7f, 0))
		{
			func_109(128);
			__LIB_2__::func_122(uLocal_600[1], func_288(1, iLocal_14, iLocal_590), 291934926, 0, 1, &(Local_231[1 /*32*/].f_23), func_289(1, iLocal_14, iLocal_590), 1);
		}
	}
}

void func_137()
{
	int iVar0;
	int iVar1;
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_588)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], -219817230))
					{
						__LIB_1__::func_649(&iLocal_588, 1);
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], -1140841175))
					{
						__LIB_3__::func_391(&uLocal_708, 0);
						if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1241.f_2) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1241.f_2, false)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1241.f_2))
						{
							Local_918.f_11 = 0;
						}
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_918);
						__LIB_2__::func_315(1066055203, uLocal_600[2], 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_16[0 /*12*/].f_8))
						{
							WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&(Local_16[0 /*12*/].f_8), uLocal_600[2], 752097756, false);
						}
						if (__LIB_3__::func_332(vLocal_532, 1) < 2f)
						{
							if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1241.f_2) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1241.f_2, false)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1241.f_2))
							{
								PED::_0x09171A6F8FDE5DC1(Global_35, -1784.262f, -403.5812f, 157.1804f, 1);
							}
						}
						iLocal_649 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), -1784.146f, -403.6157f, 157.4285f, -1f, 15f, 15f, -1f, -1f, -1, -1);
						func_291(joaat("CRIME_DISTURBANCE"));
						func_109(1024);
						__LIB_3__::func_525(&(uLocal_620[0]), &(uLocal_629[0]));
						__LIB_3__::func_525(&(uLocal_620[1]), &(uLocal_629[1]));
						__LIB_1__::func_649(&iLocal_588, 3);
					}
					break;
				case 3:
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_223.f_1, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_600[2], 713668775, true) != 1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_600[2], vLocal_543, 2f, 2000, 0.25f, 0, 40000f);
							__LIB_1__::func_649(&iLocal_588, 5);
						}
					}
					break;
				case 4:
					iLocal_587 = 3;
					if (ENTITY::IS_ENTITY_DEAD(uLocal_600[2]))
					{
						__LIB_1__::func_649(&iLocal_588, 6);
					}
					else
					{
						__LIB_2__::func_504(uLocal_600[2], 0);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_600[2], Local_223.f_1))
						{
							func_264(Local_223.f_1, func_93(2), uLocal_600[2]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_16[0 /*12*/].f_8))
						{
							if (__LIB_3__::func_496(uLocal_600[2], "gunEquipped", 1067030938 /* Float: 1.2f */))
							{
								WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&(Local_16[0 /*12*/].f_8), uLocal_600[2], 752097756, false);
							}
							else
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_223.f_1, "objGun", Local_16[0 /*12*/].f_8);
							}
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_REACT(0, Global_35, Global_36, func_84(iLocal_14, 2), 2f, 0, 4);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_543, 2f, 2000, 0.25f, 0, 40000f);
						__LIB_1__::func_474(uLocal_600[2], &iVar1, 0, 0, 1, 1);
						__LIB_3__::func_319(Local_223.f_1);
						__LIB_1__::func_649(&iLocal_588, 5);
					}
					break;
				case 5:
					if ((iLocal_587 == 4 && ENTITY::DOES_ENTITY_EXIST(uLocal_600[2])) && __LIB_0__::func_94(uLocal_600[2], vLocal_543, 1) < 2f)
					{
						TASK::TASK_STAND_STILL(uLocal_600[2], -1);
						__LIB_2__::func_426(&(uLocal_600[2]));
						__LIB_1__::func_649(&iLocal_584, 13);
						__LIB_1__::func_649(&iLocal_588, 6);
					}
					break;
				case 6:
					break;
			}
			break;
		case 1:
			switch (iLocal_588)
			{
				case 0:
					if (!__LIB_4__::func_201(-2147483648))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], -462412321) && (__LIB_1__::func_205(Global_35, uLocal_620[3], 1, 0) || __LIB_1__::func_205(Global_35, uLocal_620[4], 1, 0)))
							{
								func_109(-2147483648);
							}
						}
					}
					if (((!ENTITY::IS_ENTITY_DEAD(uLocal_600[3]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[3], 528459669)) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_223.f_1, false))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]))
						{
							TASK::TASK_STAND_STILL(uLocal_600[2], -1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[3]))
						{
							TASK::TASK_STAND_STILL(uLocal_600[3], -1);
						}
						__LIB_1__::func_649(&iLocal_588, 3);
					}
					break;
				case 3:
					if (iLocal_587 == 4)
					{
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1241.f_2) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1241.f_2))
						{
							if (ENTITY::IS_ENTITY_DEAD(uLocal_600[2]) || !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_600[2]))
							{
								__LIB_2__::func_426(&(uLocal_600[2]));
								__LIB_2__::func_426(&(uLocal_600[3]));
								__LIB_1__::func_649(&iLocal_588, 6);
							}
						}
					}
					break;
				case 4:
					if (func_255(Local_223.f_1, 0.899f, 1065353216 /* Float: 1f */))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_223.f_1, true);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_619))
						{
							ENTITY::PLAY_ENTITY_ANIM(iLocal_619, Local_497[8 /*2*/].f_1, Local_497[8 /*2*/], 1000f, true, true, false, 0f, 0);
						}
						__LIB_2__::func_426(&(uLocal_600[2]));
						__LIB_2__::func_426(&(uLocal_600[3]));
						__LIB_1__::func_649(&iLocal_584, 13);
						__LIB_1__::func_649(&iLocal_588, 6);
					}
					else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_223.f_1, false))
					{
						__LIB_2__::func_426(&(uLocal_600[2]));
						__LIB_2__::func_426(&(uLocal_600[3]));
						__LIB_1__::func_649(&iLocal_584, 13);
						__LIB_1__::func_649(&iLocal_588, 6);
					}
					break;
				case 6:
					break;
			}
			break;
		case 2:
			switch (iLocal_588)
			{
				case 0:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_223.f_1, false))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], -589377963) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[3], -589377963))
						{
							func_109(2);
							__LIB_1__::func_649(&iLocal_588, 1);
						}
					}
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					if (func_293())
					{
						iVar0 = 2;
						while (iVar0 <= 3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_600[iVar0]))
							{
								if (__LIB_2__::func_215(Global_35, uLocal_600[iVar0], 0, 5f, 0))
								{
									PED::DELETE_PED(&(uLocal_600[iVar0]));
								}
							}
							iVar0++;
						}
						if ((!__LIB_2__::func_1(uLocal_600[2], 0, 1) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_600[2], 713668775, true) != 1) && (!__LIB_2__::func_1(uLocal_600[3], 0, 1) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_600[3], 713668775, true) != 1))
						{
							__LIB_1__::func_649(&iLocal_588, 6);
						}
					}
					break;
				case 4:
					if (__LIB_1__::func_313(&uLocal_774, 5f))
					{
						__LIB_1__::func_649(&iLocal_584, 13);
						__LIB_1__::func_649(&iLocal_588, 6);
					}
					else if (!__LIB_0__::func_75(&uLocal_774))
					{
						__LIB_1__::func_148(&uLocal_774);
					}
					break;
				case 6:
					break;
			}
			break;
	}
}

void func_138()
{
	switch (iLocal_14)
	{
		case 1:
			if (!__LIB_4__::func_201(33554432))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], -167301387))
				{
					__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[3], -1840721831))
				{
					__LIB_2__::func_315(249295937, uLocal_600[3], 1);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(1024)))
			{
				if (__LIB_4__::func_201(-2147483648))
				{
					__LIB_2__::func_303(uLocal_600[2], uLocal_600[3], func_294(1024), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			break;
		case 2:
			if (__LIB_4__::func_201(33554432))
			{
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(1024)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[3], func_275(2048)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[3], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(4096)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[3], func_275(8192)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[3], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(16384)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(32768)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(65536)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], func_275(131072)))
			{
				__LIB_2__::func_315(1891783641, uLocal_600[2], 1);
			}
			break;
		case 0:
			break;
	}
}

void func_139()
{
	if (__LIB_4__::func_201(1048576))
	{
		if (!__LIB_4__::func_201(1048576))
		{
			func_295();
		}
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_223.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_223.f_1, false) || ((ANIMSCENE::_0xA9016536015DE29D(Local_223.f_1, sLocal_553[1]) && ANIMSCENE::_0x1F0E401031E20146(Local_223.f_1, sLocal_553[1])) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_223.f_1) > 0.99f))
		{
			func_109(1048576);
		}
	}
	else
	{
		func_109(1048576);
	}
}

void func_140()
{
	if (__LIB_4__::func_201(262144) || __LIB_4__::func_201(524288))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_3__::func_332(vLocal_532, 1) < 2.5f)
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_600[2]) || __LIB_1__::func_205(Global_35, uLocal_620[3], 1, 0))
				{
					if (__LIB_0__::func_75(&uLocal_746) && !__LIB_0__::func_33(&uLocal_746))
					{
						if (__LIB_0__::func_265(&uLocal_746) > 50f || (__LIB_1__::func_205(Global_35, uLocal_620[3], 1, 0) && __LIB_0__::func_265(&uLocal_746) > 2f))
						{
							func_297();
							func_109(4194304);
							func_109(2048);
						}
					}
					else if (__LIB_0__::func_33(&uLocal_746))
					{
						__LIB_2__::func_112(&uLocal_746);
					}
					else
					{
						__LIB_1__::func_148(&uLocal_746);
					}
				}
				else if (!__LIB_0__::func_33(&uLocal_746))
				{
					__LIB_2__::func_113(&uLocal_746);
				}
			}
			else if (!__LIB_0__::func_33(&uLocal_746))
			{
				__LIB_2__::func_113(&uLocal_746);
			}
			break;
		default:
			if (__LIB_3__::func_332(vLocal_532, 1) < 2.5f)
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_600[2]))
				{
					if (!__LIB_0__::func_75(&uLocal_746))
					{
						__LIB_1__::func_148(&uLocal_746);
					}
					else if (__LIB_0__::func_265(&uLocal_746) > 2f)
					{
						func_297();
						func_109(4194304);
						func_109(2048);
					}
				}
				else if (__LIB_0__::func_75(&uLocal_746))
				{
					__LIB_0__::func_37(&uLocal_746);
				}
			}
			break;
	}
}

bool func_141()
{
	float fVar0;
	if (__LIB_4__::func_201(16777216))
	{
		if (func_293())
		{
			func_287(16777216);
			func_36(&uLocal_610, 1);
		}
	}
	else if (!func_293())
	{
		if (!__LIB_4__::func_201(8388608))
		{
			func_301(&uLocal_610, &uLocal_600, vLocal_532);
		}
		func_109(16777216);
		func_36(&uLocal_610, 0);
	}
	if (!__LIB_4__::func_201(33554432) && Local_1241 == 4)
	{
		func_109(33554432);
	}
	switch (iLocal_587)
	{
		case 0:
			Local_1241.f_16 = "RE_WINDOW_PEEK";
			if (iLocal_14 == 0)
			{
				Local_1241.f_46 = 1500;
				Local_1241.f_45 = 2f;
			}
			else
			{
				Local_1241.f_45 = 3f;
			}
			switch (iLocal_14)
			{
				case 0:
					Local_1241.f_51 = { -1786.066f, -401.217f, 155.484f };
					Local_1241.f_54 = { 0f, 0f, 0f };
					Local_1241.f_39 = -6.1f;
					Local_1241.f_40 = -8.5f;
					Local_1241.f_41 = { -1784.2f, -404.3f, 157f };
					Local_1241.f_1 = "script@beat@town@peepingtom@preenwindowpeek";
					Local_1241.f_25 = { -1784.5f, -405.8f, 157.3f };
					Local_1241.f_28 = { -13.2f, 0f, -2.8f };
					Local_1241.f_31 = { -1784.5f, -405.8f, 157.3f };
					Local_1241.f_34 = { -13.2f, 0f, -2.8f };
					__LIB_9__::func_780(&Local_1241, 1);
					__LIB_9__::func_780(&Local_1241, 2);
					__LIB_9__::func_780(&Local_1241, 4);
					__LIB_9__::func_780(&Local_1241, 128);
					__LIB_9__::func_780(&Local_1241, 256);
					__LIB_9__::func_780(&Local_1241, 512);
					__LIB_9__::func_780(&Local_1241, 8192);
					Local_1241.f_48 = { -1784.219f, -404.4418f, 156.4077f };
					bLocal_1298 = false;
					break;
				case 1:
					Local_1241.f_51 = { -291.816f, 866.197f, 120.138f };
					Local_1241.f_54 = { 0f, 0f, 85f };
					Local_1241.f_39 = 81.8f;
					Local_1241.f_40 = -0.7f;
					Local_1241.f_41 = { -285.5f, 865.6f, 121.7f };
					Local_1241.f_1 = "script@beat@town@peepingtom@spankwindowpeek";
					__LIB_9__::func_780(&Local_1241, 2);
					__LIB_9__::func_780(&Local_1241, 1);
					__LIB_9__::func_780(&Local_1241, 256);
					__LIB_9__::func_780(&Local_1241, 512);
					Local_1241.f_25 = { -282.1f, 865.3f, 122f };
					Local_1241.f_28 = { -9.3f, 0f, 81.9f };
					Local_1241.f_48 = { -285.493f, 865.595f, 121.071f };
					break;
				case 2:
					Local_1241.f_51 = { -262.63f, 734.317f, 117.177f };
					Local_1241.f_54 = { 0f, 0f, 110f };
					Local_1241.f_39 = 19.7f;
					Local_1241.f_40 = -6.4f;
					Local_1241.f_41 = { -260.7f, 732.8f, 118.5f };
					Local_1241.f_1 = "script@beat@town@peepingtom@opiumwindowpeek";
					__LIB_9__::func_780(&Local_1241, 1);
					__LIB_9__::func_780(&Local_1241, 2);
					__LIB_9__::func_780(&Local_1241, 256);
					__LIB_9__::func_780(&Local_1241, 512);
					Local_1241.f_25 = { -259.8f, 730.6f, 119.4f };
					Local_1241.f_28 = { -17.2f, 0f, 20.6f };
					Local_1241.f_48 = { -260.5985f, 732.3628f, 118.0494f };
					break;
			}
			iLocal_587 = 1;
			break;
		case 1:
			func_303(&Local_1241, 0, 0, 1, 0, 0);
			if (Local_1241 == 4 || __LIB_4__::func_201(4194304))
			{
				func_304();
				if (Local_1241 == 4)
				{
					func_109(2048);
				}
				if (iLocal_14 != 0)
				{
					func_297();
				}
				iLocal_587 = 2;
			}
			break;
		case 2:
			func_303(&Local_1241, 0, 0, bLocal_1298, 0, 0);
			func_305();
			if (Local_1241 == 4)
			{
				func_109(2048);
			}
			if (iLocal_14 != 0)
			{
				if (!__LIB_4__::func_201(1024))
				{
					if (Local_1241 == 4 || (__LIB_3__::func_332(vLocal_532, 1) < 2.5f && !ENTITY::IS_ENTITY_OCCLUDED(uLocal_600[2])))
					{
						if (__LIB_4__::func_201(65536))
						{
							func_109(1024);
						}
						if (__LIB_0__::func_75(&uLocal_762))
						{
							if (iLocal_14 == 1)
							{
								fVar0 = 12f;
							}
							else
							{
								fVar0 = 14f;
							}
							if (__LIB_1__::func_313(&uLocal_762, fVar0))
							{
								func_109(1024);
							}
						}
						else if (__LIB_0__::func_33(&uLocal_762))
						{
							__LIB_2__::func_112(&uLocal_762);
						}
						else
						{
							__LIB_1__::func_148(&uLocal_762);
						}
					}
					else
					{
						if (Local_1241 == 5)
						{
							func_109(65536);
						}
						if (__LIB_0__::func_75(&uLocal_762))
						{
							__LIB_2__::func_113(&uLocal_762);
						}
					}
				}
			}
			if (!__LIB_4__::func_201(67108864))
			{
				if (!func_306(2))
				{
					if ((Local_1241 == 2 || Local_1241 == 3) || Local_1241 == 4)
					{
						func_307(2);
						__LIB_2__::func_303(Global_35, 0, func_308(iLocal_14, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (Local_1241 == 4)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], 630311317))
					{
						func_109(67108864);
					}
					if (!__LIB_4__::func_201(262144))
					{
						if (iLocal_14 == 0)
						{
							if (__LIB_0__::func_75(&uLocal_759))
							{
								if (__LIB_1__::func_871(&uLocal_759) > 400)
								{
									__LIB_0__::func_37(&uLocal_759);
									func_297();
								}
							}
							else
							{
								__LIB_1__::func_148(&uLocal_759);
							}
						}
					}
					switch (iLocal_14)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_600[2]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_600[2], 1123535862))
							{
								if (__LIB_2__::func_227(func_310(iLocal_14), 1, Global_35, 0))
								{
									if (!func_306(1))
									{
										func_307(1);
										__LIB_2__::func_303(Global_35, 0, func_308(iLocal_14, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
								}
							}
							break;
					}
				}
			}
			switch (iLocal_14)
			{
				case 0:
					if (((__LIB_4__::func_201(262144) && func_254(Local_223.f_1, "pblExit")) && func_255(Local_223.f_1, 0.586f, 1065353216 /* Float: 1f */)) && func_293())
					{
						bLocal_1299 = true;
						iLocal_587 = 3;
					}
					if ((__LIB_4__::func_201(262144) && func_254(Local_223.f_1, "pblExit")) && func_255(Local_223.f_1, 0.8512f, 1065353216 /* Float: 1f */))
					{
						if (func_293())
						{
							bLocal_1299 = true;
						}
						iLocal_587 = 3;
					}
					break;
				case 1:
					if (bLocal_1298)
					{
						if (func_254(Local_223.f_1, "pblExit") && func_255(Local_223.f_1, 0.8451f, 1065353216 /* Float: 1f */))
						{
							bLocal_1298 = false;
						}
					}
					if (((__LIB_4__::func_201(262144) && func_293()) && func_254(Local_223.f_1, "pblExit")) && func_255(Local_223.f_1, 0.8451f, 1065353216 /* Float: 1f */))
					{
						bLocal_1299 = true;
						iLocal_587 = 3;
					}
					break;
				case 2:
					if (!func_306(1))
					{
						if (__LIB_0__::func_75(&uLocal_771))
						{
							if (__LIB_0__::func_265(&uLocal_771) > 10f)
							{
								if (Local_1241 == 5)
								{
									func_307(1);
									__LIB_2__::func_303(Global_35, 0, func_308(iLocal_14, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
							}
						}
						else if (Local_1241 == 4)
						{
							__LIB_1__::func_148(&uLocal_771);
						}
					}
					if (bLocal_1298 && func_255(Local_223.f_1, 0.8621f, 1065353216 /* Float: 1f */))
					{
						if (func_293())
						{
							bLocal_1299 = true;
							iLocal_587 = 3;
						}
						else
						{
							bLocal_1298 = false;
						}
					}
					break;
			}
			if ((__LIB_4__::func_201(1048576) || __LIB_4__::func_201(131072)) || __LIB_4__::func_201(2))
			{
				func_295();
				iLocal_587 = 3;
			}
			break;
		case 3:
			func_303(&Local_1241, bLocal_1299, 1, bLocal_1298, 0, 0);
			func_287(16777216);
			func_36(&uLocal_610, 1);
			iLocal_587 = 4;
			break;
		case 4:
			func_305();
			func_303(&Local_1241, bLocal_1299, 1, bLocal_1298, 0, 0);
			if (!func_306(4))
			{
				if (__LIB_4__::func_201(-2147483648) || iLocal_14 != 1)
				{
					if (Local_1241 == 5)
					{
						__LIB_2__::func_504(Global_35, 0);
						func_307(4);
						__LIB_2__::func_303(Global_35, 0, func_308(iLocal_14, 4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
			}
			switch (iLocal_14)
			{
				case 0:
					if ((!func_306(8) && __LIB_4__::func_201(134217728)) && __LIB_1__::func_313(&uLocal_749, 1.5f))
					{
						func_307(8);
						__LIB_2__::func_303(Global_35, 0, func_308(iLocal_14, 8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1931509438))
					{
						func_109(134217728);
						__LIB_1__::func_148(&uLocal_749);
					}
					break;
				case 1:
					break;
				case 2:
					break;
			}
			break;
	}
	return func_293();
}

bool func_254(int iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || !__LIB_4__::func_79(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1);
}

bool func_255(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	if (!__LIB_4__::func_79(iParam0))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	if (fVar0 > fParam1 && fVar0 < fParam2)
	{
		return true;
	}
	return false;
}

int func_257(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_450(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
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

void func_259()
{
	if (__LIB_4__::func_201(32768))
	{
		return;
	}
	func_109(32768);
	__LIB_3__::func_465(11, joaat("HONOR_EVENT_INTERVENED"), 0, 0, uLocal_600[0], 0, 1065353216 /* Float: 1f */, 0);
}

char* func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_PT_STR_V1_INTERRUPT";
		case 1:
			return "RE_PT_VAL_V1_INTERRUPT";
		case 2:
			return "RE_PT_VAL_V2_INTERRUPT";
		default:
			break;
	}
	return "INVALID_STRING";
}

void func_264(int iParam0, char* sParam1, int iParam2)
{
	if (!__LIB_2__::func_1(iParam2, 0, 0))
	{
		return;
	}
	else if (!__LIB_4__::func_79(iParam0))
	{
		return;
	}
	else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, iParam0))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam1, iParam2);
}

bool func_266(int iParam0, bool bParam1)
{
	vector3 vVar0;
	if (iLocal_14 != 0)
	{
		return false;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_peeping_tom_str"))
	{
		return false;
	}
	else if (!__LIB_1__::func_205(uLocal_600[iParam0], uLocal_620[0], 1, 0))
	{
		return false;
	}
	else if (!bParam1)
	{
		return true;
	}
	vVar0 = { -1786.838f, -404.5404f, 155.4959f };
	if (__LIB_3__::func_332(vVar0, 1) > __LIB_0__::func_94(uLocal_600[iParam0], vVar0, 1))
	{
		return true;
	}
	return false;
}

bool func_267(int iParam0)
{
	if (!__LIB_2__::func_1(uLocal_600[iParam0], 0, 1))
	{
		return false;
	}
	if (!__LIB_0__::func_75(&(vLocal_739[iParam0 /*3*/])))
	{
		__LIB_1__::func_148(&(vLocal_739[iParam0 /*3*/]));
	}
	else if (__LIB_1__::func_871(&(vLocal_739[iParam0 /*3*/])) >= iLocal_594[iParam0])
	{
		__LIB_0__::func_37(&(vLocal_739[iParam0 /*3*/]));
		return true;
	}
	return false;
}

int func_268(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (iParam0 == 0)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	return 2;
}

char* func_269()
{
	return "GENERIC_SHOCKED_HIGH";
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 2;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 1;
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	func_109(iParam1);
	__LIB_3__::func_141(uLocal_600[iParam0], 1088421888 /* Float: 7f */, 0, 0);
	__LIB_2__::func_603(&(uLocal_600[iParam0]), &(Local_939[iParam0 /*75*/]), &(Local_939[iParam0 /*75*/].f_21), 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_600[iParam0], false);
	if (iParam2 != 0)
	{
		Var0.f_14 = uLocal_600[iParam0];
		Var0 = Global_35;
		Var0.f_7 = __LIB_0__::func_12();
		Var0.f_8 = 0;
		Var0.f_11 = 100;
		Var0.f_12 = iParam2;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
	PED::_0x24C82EF607105FAA(uLocal_600[iParam0], joaat("TIMID"));
	PED::_0xE737D5F14304A2EC(uLocal_600[iParam0], PLAYER::GET_PLAYER_INDEX(), 120000);
}

void func_274(int iParam0, bool bParam1)
{
	if ((__LIB_0__::func_27(iLocal_592, 2048) || __LIB_0__::func_27(iLocal_592, 262144)) || __LIB_0__::func_27(iLocal_592, 512))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			if (bParam1)
			{
				__LIB_2__::func_303(uLocal_600[iParam0], Global_35, "RE_PT_VAL_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_592, 2048);
			}
			else
			{
				func_459(uLocal_600[iParam0], Global_35, 2048);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_2__::func_303(uLocal_600[iParam0], Global_35, "RE_PT_VAL_V2_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_592, 262144);
			}
			else
			{
				func_459(uLocal_600[iParam0], Global_35, 262144);
			}
			break;
		case 0:
			if (bParam1)
			{
				__LIB_2__::func_303(uLocal_600[iParam0], Global_35, "RE_PT_STR_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_592, 512);
			}
			else
			{
				func_459(uLocal_600[iParam0], Global_35, 512);
			}
			break;
	}
}

int func_275(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return joaat("RE_PT_STR_V1_SLOBBERIN");
				case 2:
					return joaat("RE_PT_STR_V1_QUIET");
				case 4:
					return joaat("RE_PT_STR_V1_ROOM");
				case 8:
					return joaat("RE_PT_STR_V1_WAITING");
				case 16:
					return joaat("RE_PT_STR_V1_ROUTINE");
				case 32:
					return joaat("RE_PT_STR_V1_SHOWTIME");
				case 64:
					return joaat("RE_PT_STR_V1_DONT_STOP");
				case 128:
					return joaat("RE_PT_STR_V1_LEAVE");
				case 256:
					return joaat("RE_PT_STR_V1_SPOTTED");
				case 512:
					return joaat("RE_PT_AGGRO");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return joaat("RE_PT_VAL_V2_HURRY");
				case 2:
					return joaat("RE_PT_VAL_V2_PROLOGUE");
				case 4:
					return joaat("RE_PT_VAL_V2_BOOTS");
				case 8:
					return joaat("RE_PT_VAL_V2_HAPPEN");
				case 16:
					return joaat("RE_PT_VAL_V2_SHEETS");
				case 32:
					return joaat("RE_PT_VAL_V2_SMOKIN");
				case 64:
					return joaat("RE_PT_VAL_V2_TOBACCO");
				case 128:
					return joaat("RE_PT_VAL_V2_CUES");
				case 256:
					return joaat("RE_PT_VAL_V2_CANOODLIN");
				case 512:
					return joaat("RE_PT_VAL_V2_LEAVE");
				case 1024:
					return joaat("DIALOGUE01");
				case 2048:
					return joaat("DIALOGUE02");
				case 4096:
					return -536488850;
				case 8192:
					return -162692867;
				case 16384:
					return 743271676;
				case 32768:
					return 377438560;
				case 65536:
					return -929553001;
				case 131072:
					return 1123293769;
				case 262144:
					return joaat("RE_PT_AGGRO");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					return joaat("RE_PT_VAL_V1_EVERYDAY");
				case 2:
					return joaat("RE_PT_VAL_V1_TOUGH");
				case 4:
					return 309297304;
				case 8:
					return joaat("RE_PT_VAL_V1_RECKON");
				case 16:
					return -888622819;
				case 64:
					return joaat("RE_PT_VAL_V1_HELLNO");
				case 128:
					return joaat("RE_PT_VAL_V1_LEAVE_01");
				case 256:
					return joaat("RE_PT_VAL_V1_SPANK_REACT");
				case 512:
					return joaat("RE_PT_VAL_V1_SPOTTED");
				case 1024:
					return joaat("RE_PT_VAL_V1_THREATEN");
				case 2048:
					return joaat("RE_PT_AGGRO");
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_281()
{
	if (__LIB_1__::func_205(Global_35, uLocal_620[6], 1, 0) || Global_36.f_2 > func_462(iLocal_14))
	{
		return false;
	}
	if (func_463(&uLocal_600, 2f, 0, 0, -1))
	{
		fLocal_599 = 0f;
		__LIB_2__::func_526(&(Local_939[0 /*75*/].f_21), 0, 0);
		__LIB_2__::func_526(&(Local_939[1 /*75*/].f_21), 0, 0);
		__LIB_0__::func_325(&(uLocal_605[0]));
		func_109(8);
		__LIB_1__::func_148(&uLocal_736);
		return true;
	}
	return false;
}

float func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.991f;
		case 1:
			return 0.997f;
		case 2:
			return 0.991f;
		default:
			break;
	}
	return 1f;
}

void func_287(int iParam0)
{
	if (__LIB_4__::func_201(iParam0))
	{
		__LIB_1__::func_681(&iLocal_591, iParam0);
	}
}

char* func_288(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "BUMP";
				case 1:
					return "PLAYER_LOITERING";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return "BLOCKED_GENERIC";
						case 1:
							return "PLAYER_LOITERING";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return "BUMP";
						case 1:
							return "BUMP";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "INVALID_STRING";
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 3;
						case 1:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 1;
}

void func_291(int iParam0)
{
	__LIB_0__::func_267(1);
	LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
	LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 75f, 100f, 0, 0, 0, 0);
}

bool func_293()
{
	if ((Local_1241 < 2 || Local_1241 == 7) || Local_1241 == 8)
	{
		return true;
	}
	return false;
}

char* func_294(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return "RE_PT_STR_V1_SLOBBERIN";
				case 2:
					return "RE_PT_STR_V1_QUIET";
				case 4:
					return "RE_PT_STR_V1_ROOM";
				case 8:
					return "RE_PT_STR_V1_WAITING";
				case 16:
					return "RE_PT_STR_V1_ROUTINE";
				case 32:
					return "RE_PT_STR_V1_SHOWTIME";
				case 64:
					return "RE_PT_STR_V1_DONT_STOP";
				case 128:
					return "RE_PT_STR_V1_LEAVE";
				case 256:
					return "RE_PT_STR_V1_SPOTTED";
				case 512:
					return "RE_PT_STR_V1_AGGRO";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return "RE_PT_VAL_V2_HURRY";
				case 2:
					return "RE_PT_VAL_V2_PROLOGUE";
				case 4:
					return "RE_PT_VAL_V2_BOOTS";
				case 8:
					return "RE_PT_VAL_V2_HAPPEN";
				case 16:
					return "RE_PT_VAL_V2_SHEETS";
				case 32:
					return "RE_PT_VAL_V2_SMOKIN";
				case 64:
					return "RE_PT_VAL_V2_TOBACCO";
				case 128:
					return "RE_PT_VAL_V2_CUES";
				case 256:
					return "RE_PT_VAL_V2_CANOODLIN";
				case 512:
					return "RE_PT_VAL_V2_LEAVE";
				case 1024:
					return "RE_PT_VAL_V2_FUDDLED";
				case 2048:
					return "RE_PT_VAL_V2_HEAVY";
				case 4096:
					return "RE_PT_VAL_V2_AMAZING";
				case 8192:
					return "RE_PT_VAL_V2_STOP";
				case 16384:
					return "RE_PT_VAL_V2_YOU_ARE";
				case 32768:
					return "RE_PT_VAL_V2_WILD";
				case 65536:
					return "RE_PT_VAL_V2_LOVE";
				case 131072:
					return "RE_PT_VAL_V2_CLOUDS";
				case 262144:
					return "RE_PT_VAL_V2_AGGRO";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					return "RE_PT_VAL_V1_EVERYDAY";
				case 2:
					return "RE_PT_VAL_V1_TOUGH";
				case 4:
					return "RE_PT_VAL_V1_HOLD_YOU_01";
				case 8:
					return "RE_PT_VAL_V1_RECKON";
				case 16:
					return "RE_PT_VAL_V1_WRONG_01";
				case 32:
					return "RE_PT_VAL_V1_WRONG_B_01";
				case 64:
					return "RE_PT_VAL_V1_HELLNO";
				case 128:
					return "RE_PT_VAL_V1_LEAVE_01";
				case 256:
					return "RE_PT_VAL_V1_SPANK_REACT";
				case 512:
					return "RE_PT_VAL_V1_SPOTTED";
				case 1024:
					return "RE_PT_VAL_V1_THREATEN";
				case 2048:
					return "RE_PT_VAL_V1_AGGRO";
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_295()
{
	if (iLocal_14 == 1)
	{
		return;
	}
	if (!__LIB_4__::func_201(2097152))
	{
		if (__LIB_4__::func_201(1048576))
		{
			if (!__LIB_4__::func_201(2))
			{
				__LIB_3__::func_319(Local_223.f_1);
			}
			func_109(2097152);
		}
	}
}

void func_297()
{
	if (!__LIB_4__::func_201(262144))
	{
		__LIB_0__::func_325(&(uLocal_605[0]));
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_223.f_1, "pblExit", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_223.f_1, "bPlayExit", true, false);
		Local_29.f_44 = 1;
		func_109(262144);
	}
}

void func_301(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	if (!__LIB_0__::func_86(vParam2))
	{
		iVar0 = __LIB_4__::func_206(uParam0, uParam1, *uParam0, vParam2, 25f, 0, 0, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	}
}

int func_303(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	char* sVar15;
	vector3 vVar16;
	vector3 vVar28;
	vector3 vVar40;
	var uVar52;
	var uVar53;
	int iVar54;
	int iVar55;
	float fVar56;
	vector3 vVar57;
	if ((bParam1 && *iParam0 != 7) && *iParam0 != 8)
	{
		*iParam0 = 7;
	}
	switch (*iParam0)
	{
		case 0:
			if ((__LIB_3__::func_332(iParam0->f_48, 1) > iParam0->f_45 || CAM::_0x74F1D22EFA71FAB8()) || PAD::IS_CONTROL_PRESSED(1, joaat("INPUT_CINEMATIC_CAM")))
			{
				return 0;
			}
			if (!__LIB_9__::func_258(iParam0, 8192) && CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				if (__LIB_0__::func_139(iParam0->f_17))
				{
					__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (PED::_IS_PED_CARRYING(Global_35) || __LIB_0__::func_163(Global_35, -208384378))
			{
				if (__LIB_0__::func_139(iParam0->f_17))
				{
					__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter"))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_2);
						return 0;
					}
				}
				else
				{
					iParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_1, 0, "pbl_enter", false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_2);
				}
			}
			if (!__LIB_0__::func_139(iParam0->f_17))
			{
				iParam0->f_17 = __LIB_1__::func_877(iParam0->f_16, joaat("INPUT_CONTEXT_LT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			__LIB_9__::func_779(iParam0, 16384);
			__LIB_1__::func_221(iParam0->f_17, 1, 1);
			*iParam0 = 1;
			break;
		case 1:
			if ((__LIB_3__::func_332(iParam0->f_48, 1) > iParam0->f_45 || CAM::_0x74F1D22EFA71FAB8()) || PAD::IS_CONTROL_PRESSED(1, joaat("INPUT_CINEMATIC_CAM")))
			{
				if (__LIB_0__::func_139(iParam0->f_17))
				{
					__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (!__LIB_9__::func_258(iParam0, 8192) && CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				if (__LIB_0__::func_139(iParam0->f_17))
				{
					__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (PED::_IS_PED_CARRYING(Global_35) || __LIB_0__::func_163(Global_35, -208384378))
			{
				if (__LIB_0__::func_139(iParam0->f_17))
				{
					__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_2, true, false))
			{
				if (!__LIB_0__::func_86(iParam0->f_51) || !__LIB_0__::func_86(iParam0->f_54))
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iParam0->f_2, &vVar3, &vVar6, 2);
					if (!__LIB_0__::func_138(iParam0->f_51, vVar3) && !__LIB_0__::func_138(iParam0->f_54, vVar6))
					{
						vVar9 = { iParam0->f_51 };
						vVar12 = { iParam0->f_54 };
						if (__LIB_0__::func_86(vVar9))
						{
							vVar9 = { vVar3 };
						}
						if (__LIB_0__::func_86(vVar12))
						{
							vVar12 = { vVar6 };
						}
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_2, vVar9, vVar12, 2);
					}
				}
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iParam0->f_2))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_2, "arthur", Global_35, 0);
				}
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter"))
			{
				if (__LIB_0__::func_27(iParam0->f_3, 1) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_left"))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_left"))
					{
					}
					else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_enter_left"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_enter_left");
					}
				}
				if (__LIB_0__::func_27(iParam0->f_3, 2) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_right"))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_right"))
					{
					}
					else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_enter_right"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_enter_right");
					}
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1) || (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_2, true, false) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter")))
			{
				if (__LIB_1__::func_530(iParam0->f_17, 1))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						}
						return 0;
					}
					sVar15 = "pbl_enter";
					if (__LIB_0__::func_86(iParam0->f_48))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_2, "arthur", &vVar16, true, "pbl_enter", 2))
						{
							iParam0->f_48 = { vVar16 };
						}
						if (((__LIB_0__::func_27(iParam0->f_3, 1) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_left")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_left")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_2, "arthur", &vVar28, true, "pbl_enter_left", 2))
						{
							if (__LIB_0__::func_86(vVar28))
							{
							}
							else if (__LIB_0__::func_86(vVar16) || __LIB_3__::func_332(vVar28, 1) < __LIB_3__::func_332(vVar16, 1))
							{
								sVar15 = "pbl_enter_left";
								iParam0->f_48 = { vVar28 };
							}
						}
						if (((__LIB_0__::func_27(iParam0->f_3, 2) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_enter_right")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_enter_right")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_2, "arthur", &vVar40, true, "pbl_enter_right", 2))
						{
							if (__LIB_0__::func_86(vVar40))
							{
							}
							else if (__LIB_0__::func_86(vVar16) || __LIB_3__::func_332(vVar40, 1) < __LIB_3__::func_332(vVar16, 1))
							{
								sVar15 = "pbl_enter_right";
								iParam0->f_48 = { vVar40 };
							}
						}
					}
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, sVar15, true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) && !__LIB_9__::func_258(iParam0, 128))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
						__LIB_9__::func_780(iParam0, 32);
					}
					else
					{
						__LIB_9__::func_779(iParam0, 32);
					}
					iParam0->f_47 = PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth");
					if (iParam0->f_47 > 0f)
					{
						__LIB_9__::func_780(iParam0, 4096);
						PED::_0x411189E51B8020BA(Global_35, "Stealth");
					}
					if (__LIB_9__::func_258(iParam0, 256))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, __LIB_9__::func_258(iParam0, 512), 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_2, "Arthur", sVar15, 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					*iParam0 = 2;
				}
			}
			else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_enter"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_enter");
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if ((!__LIB_1__::func_530(iParam0->f_17, 1) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_LT")))
			{
				vVar0 = { iParam0->f_48 };
				iParam0->f_48 = { vVar0 };
				__LIB_3__::func_286(Global_35);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (__LIB_9__::func_258(iParam0, 4096))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", iParam0->f_47, -1);
					__LIB_9__::func_779(iParam0, 4096);
				}
				__LIB_9__::func_779(iParam0, 16384);
				__LIB_1__::func_221(iParam0->f_17, 1, 1);
				*iParam0 = 1;
			}
			else if ((PED::IS_PED_IN_COVER(Global_35, false, true) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35)) && __LIB_9__::func_258(iParam0, 64))
			{
				*iParam0 = 3;
			}
			else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iParam0->f_2) && ANIMSCENE::_0x337F1CC8EE895601(iParam0->f_2, "Arthur"))
			{
				vVar0 = { iParam0->f_48 };
				iParam0->f_48 = { vVar0 };
				*iParam0 = 3;
			}
			else if (bParam4)
			{
				*iParam0 = 3;
			}
			break;
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_1) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_2, false))
			{
				ANIMSCENE::START_ANIM_SCENE(iParam0->f_2);
			}
			if (__LIB_0__::func_27(iParam0->f_3, 4))
			{
				__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
			}
			iParam0->f_37 = iParam0->f_39;
			iParam0->f_38 = iParam0->f_40;
			iParam0->f_18 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			iParam0->f_21 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			iParam0->f_24 = CAM::GET_FINAL_RENDERED_CAM_FOV();
			if (__LIB_9__::func_258(iParam0, 8192) && CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				__LIB_9__::func_780(iParam0, 16384);
				iParam0->f_44 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), iParam0->f_31, iParam0->f_34, iParam0->f_24, true, 2);
			}
			else
			{
				iParam0->f_44 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), iParam0->f_18, iParam0->f_21, iParam0->f_24, true, 2);
			}
			CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_41, iParam0->f_38, 0f, iParam0->f_37, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
			CAM::SET_CAM_NEAR_CLIP(iParam0->f_44, 0f);
			CAM::SHAKE_CAM(iParam0->f_44, "HAND_SHAKE", 0.2f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			MAP::DISPLAY_RADAR(false);
			*iParam0 = 4;
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_exit"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_exit");
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_exit_alt")) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_2, "pbl_exit_alt"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_2, "pbl_exit_alt");
			}
			if (!CAM::DOES_CAM_EXIST(iParam0->f_44) || !CAM::IS_CAM_INTERPOLATING(iParam0->f_44))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_44))
				{
					__LIB_6__::func_898(&uVar52, &uVar53, &iVar54, &iVar55, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
					if (iParam0->f_4 == iVar54 && iParam0->f_5 == iVar55)
					{
						if (iParam0->f_6 < MISC::GET_GAME_TIMER())
						{
							iParam0->f_4 = 0;
							iParam0->f_5 = 0;
						}
					}
					else
					{
						iParam0->f_4 = iVar54;
						iParam0->f_5 = iVar55;
						iParam0->f_6 = MISC::GET_GAME_TIMER() + 4000;
					}
					iParam0->f_10.f_2 = (-(BUILTIN::TO_FLOAT(iVar54) / 127f) * IntToFloat(iParam0->f_7));
					iParam0->f_10.f_1 = ((-iParam0->f_10.f_2 * IntToFloat(iParam0->f_9)) / IntToFloat(iParam0->f_7));
					if (PAD::IS_LOOK_INVERTED())
					{
						iParam0->f_10 = ((BUILTIN::TO_FLOAT(iVar55) / 127f) * IntToFloat(iParam0->f_8));
					}
					else
					{
						iParam0->f_10 = (-(BUILTIN::TO_FLOAT(iVar55) / 127f) * IntToFloat(iParam0->f_8));
					}
					fVar56 = (30f * BUILTIN::TIMESTEP());
					vVar57 = { iParam0->f_10 };
					iParam0->f_13 = (iParam0->f_13 + __LIB_0__::func_251((((vVar57.x - iParam0->f_13) * 0.05f) * fVar56), -3f, 3f));
					iParam0->f_13.f_1 = (iParam0->f_13.f_1 + __LIB_0__::func_251((((vVar57.y - iParam0->f_13.f_1) * 0.05f) * fVar56), -3f, 3f));
					iParam0->f_13.f_2 = (iParam0->f_13.f_2 + __LIB_0__::func_251((((vVar57.z - iParam0->f_13.f_2) * 0.05f) * fVar56), -3f, 3f));
					CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_41, Vector(iParam0->f_37, 0f, iParam0->f_38) + iParam0->f_13, iParam0->f_24, 0, 1, 1, 2, 1, 0);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2) || ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_exit"))
				{
					if (bParam2 || (((!__LIB_0__::func_27(iParam0->f_3, 4) && !__LIB_1__::func_530(iParam0->f_17, 1)) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_LT"))))
					{
						if ((__LIB_0__::func_27(iParam0->f_3, 8) && ANIMSCENE::_0xA9016536015DE29D(iParam0->f_2, "pbl_exit_alt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_exit_alt"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, "pbl_exit_alt", true);
						}
						else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, "pbl_exit", true);
						}
						if (CAM::DOES_CAM_EXIST(iParam0->f_44))
						{
							if (__LIB_9__::func_258(iParam0, 16384))
							{
								CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_31, iParam0->f_34, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
							else if (__LIB_0__::func_86(iParam0->f_25))
							{
								CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_18, iParam0->f_21, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
							else
							{
								CAM::SET_CAM_PARAMS(iParam0->f_44, iParam0->f_25, iParam0->f_28, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
						}
						iParam0->f_13 = { 0f, 0f, 0f };
						*iParam0 = 5;
					}
				}
			}
			break;
		case 5:
			if (CAM::DOES_CAM_EXIST(iParam0->f_44))
			{
				if (CAM::IS_CAM_INTERPOLATING(iParam0->f_44))
				{
					return 0;
				}
				else if (__LIB_0__::func_86(iParam0->f_25))
				{
					__LIB_3__::func_595(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam0->f_18, iParam0->f_21.f_2, 0f, 10f, 0f));
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					CAM::DESTROY_CAM(iParam0->f_44, false);
				}
				else
				{
					__LIB_3__::func_595(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam0->f_25, iParam0->f_28.f_2, 0f, 10f, 0f));
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					CAM::DESTROY_CAM(iParam0->f_44, false);
				}
			}
			if ((((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2) || ANIMSCENE::_0xF94692EB9DC15D74(iParam0->f_2, 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_2, false)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_2, false)) || (__LIB_9__::func_258(iParam0, 16) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SAFEBREAKOUT"))))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_2);
				}
				if (__LIB_9__::func_258(iParam0, 4096))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", iParam0->f_47, -1);
					__LIB_9__::func_779(iParam0, 4096);
				}
				if (__LIB_9__::func_258(iParam0, 32) && !__LIB_9__::func_258(iParam0, 128))
				{
					__LIB_9__::func_779(iParam0, 32);
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
					*iParam0 = 6;
				}
				else
				{
					MAP::DISPLAY_RADAR(true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					if (CAM::DOES_CAM_EXIST(iParam0->f_44))
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
						CAM::DESTROY_CAM(iParam0->f_44, false);
					}
					if (bParam2)
					{
						*iParam0 = 7;
					}
					else if (bParam3)
					{
						__LIB_1__::func_221(iParam0->f_17, 1, 1);
						*iParam0 = 0;
					}
					else
					{
						*iParam0 = 7;
					}
				}
			}
			break;
		case 6:
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
				CAM::DESTROY_CAM(iParam0->f_44, false);
				if (bParam2)
				{
					*iParam0 = 7;
				}
				else if (bParam3)
				{
					__LIB_1__::func_221(iParam0->f_17, 1, 1);
					*iParam0 = 0;
				}
				else
				{
					*iParam0 = 7;
				}
			}
			break;
		case 7:
			if (CAM::DOES_CAM_EXIST(iParam0->f_44))
			{
				CAM::DESTROY_ALL_CAMS(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				CAM::DESTROY_CAM(iParam0->f_44, false);
				CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
			}
			if (((!bParam1 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2)) && !ANIMSCENE::_0x1F0E401031E20146(iParam0->f_2, "pbl_exit")) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_2, "pbl_exit"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_2, "pbl_exit", true);
			}
			if ((((bParam1 || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_2, false)) || ANIMSCENE::_0xF94692EB9DC15D74(iParam0->f_2, 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_2, false))
			{
				if (__LIB_0__::func_139(iParam0->f_17))
				{
					__LIB_1__::func_748(&(iParam0->f_17), 1, 1);
				}
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_2))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_2);
				}
				if (__LIB_9__::func_258(iParam0, 32))
				{
					if (!__LIB_9__::func_258(iParam0, 128))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
					}
					__LIB_9__::func_779(iParam0, 32);
				}
				if (__LIB_9__::func_258(iParam0, 4096))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", iParam0->f_47, -1);
					__LIB_9__::func_779(iParam0, 4096);
				}
				if (iParam5 == 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

void func_304()
{
	if (!__LIB_4__::func_201(4))
	{
		if (__LIB_3__::func_993(Local_29.f_3, iLocal_14) != 1)
		{
			__LIB_3__::func_666(Local_29.f_3, iLocal_14, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_591, 4);
	}
}

void func_305()
{
	if (__LIB_4__::func_201(2048))
	{
		if (!__LIB_4__::func_201(8192))
		{
			if (__LIB_0__::func_75(&uLocal_765))
			{
				if (__LIB_1__::func_313(&uLocal_765, 1.5f))
				{
					func_109(8192);
					__LIB_3__::func_465(1, 0, 0, 0, uLocal_600[2], 0, 1065353216 /* Float: 1f */, 0);
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_765);
			}
		}
	}
	if (__LIB_4__::func_201(1024))
	{
		if (!__LIB_4__::func_201(4096))
		{
			if (__LIB_0__::func_75(&uLocal_768))
			{
				if (__LIB_1__::func_313(&uLocal_768, 1.5f))
				{
					func_109(4096);
					__LIB_3__::func_465(3, 0, 0, "RE_HONOR_VOYEURISM", uLocal_600[2], 0, 1065353216 /* Float: 1f */, 0);
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_768);
			}
		}
	}
}

bool func_306(int iParam0)
{
	return __LIB_0__::func_27(iLocal_593, iParam0);
}

void func_307(int iParam0)
{
	if (!func_306(iParam0))
	{
		__LIB_1__::func_683(&iLocal_593, iParam0);
	}
}

char* func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "RE_PT_STR_V1_MUTTER_A";
				case 2:
					return "RE_PT_STR_V1_LOOK_INSIDE";
				case 4:
					return "RE_PT_STR_V1_PLAYER_REACT";
				case 8:
					return "RE_PT_STR_V1_PLAYER_REACT_POST";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "RE_PT_VAL_V1_MUTTER_A";
				case 2:
					return "RE_PT_VAL_V1_LOOK_INSIDE";
				case 4:
					return "RE_PT_VAL_V1_PLAYER_REACT";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "RE_PT_VAL_V2_MUTTER_A";
				case 2:
					return "RE_PT_VAL_V2_LOOK_INSIDE";
				case 4:
					return "RE_PT_VAL_V2_PLAYER_REACT";
				default:
					break;
			}
			break;
	}
	return "INVALID_STRING";
}

float func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2f;
		case 1:
			return -2f;
		case 2:
			return -2f;
		default:
			break;
	}
	return 0f;
}

int func_450(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_450(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

int func_459(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return 0;
	}
	switch (iLocal_14)
	{
		case 2:
			return func_578(iParam0, iParam1, &iLocal_592, iParam2, func_275(iParam2), func_294(iParam2), 0, 0, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
		case 1:
			return func_578(iParam0, iParam1, &iLocal_592, iParam2, func_275(iParam2), func_294(iParam2), 0, 0, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
		case 0:
			return func_578(iParam0, iParam1, &iLocal_592, iParam2, func_275(iParam2), func_294(iParam2), 0, 0, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
		default:
			break;
	}
	return 0;
}

float func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157.9196f;
		case 1:
			return 123.2165f;
		case 2:
			return 120.6433f;
		default:
			break;
	}
	return 120.6433f;
}

bool func_463(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 == -1 || iParam4 >= *uParam0)
	{
		iParam4 = (*uParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (__LIB_2__::func_118((*uParam0)[iVar0], bParam2, 1) < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_578(int iParam0, int iParam1, int* iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	if (bParam12)
	{
		bVar0 = MISC::IS_BIT_SET(*iParam2, iParam3);
	}
	else
	{
		bVar0 = __LIB_0__::func_1(*iParam2, iParam3);
	}
	if (!bVar0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam4))
	{
		if (!__LIB_2__::func_227(fParam8, 1, 0, 0))
		{
			if (bParam7)
			{
				__LIB_2__::func_461(0);
			}
			else
			{
				return 0;
			}
		}
		if (bParam9)
		{
			AUDIO::PLAY_PAIN(iParam0, iParam10, 0f, bParam11, false);
		}
		if (!bParam13)
		{
			__LIB_2__::func_303(iParam0, iParam1, sParam5, sParam6, fParam14, 0, 0, 0, 1, 1, bParam15, iParam16, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_122(iParam0, sParam5, joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
		}
		if (!bParam12)
		{
			__LIB_1__::func_336(iParam2, iParam3);
		}
		else
		{
			MISC::SET_BIT(iParam2, iParam3);
		}
		return 1;
	}
	return 0;
}

