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
	struct<4> Local_16 = { 0, 0, 0, 0 } ;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	struct<22> Local_28 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<32> Local_52[2];
	struct<2> Local_117[16];
	struct<12> Local_150[1];
	struct<193> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_356 = 0;
	struct<8> Local_357 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_365 = 0;
	struct<22> Local_366 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_388 = 3;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	struct<5> Local_391 = { 1, 0, 0, 0, 0 } ;
	var uLocal_396 = -1;
	var uLocal_397 = 0;
	var uLocal_398 = 2;
	var uLocal_399 = 2;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	char* sLocal_405 = NULL;
	var uLocal_406 = 3;
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
	int iLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 1112014848;
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
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 9;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 1;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 24;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
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
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = -1082130432;
	var uLocal_617 = -1082130432;
	var uLocal_618 = 1103626240;
	var uLocal_619 = -1067450368;
	var uLocal_620 = 1097859072;
	var uLocal_621 = 1073741824;
	var uLocal_622 = 4000;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 1073741824;
	var uLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	struct<21> Local_651[2];
	struct<17> Local_694[2];
	struct<17> Local_729[2];
	int iLocal_764 = 0;
	struct<24> Local_765 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798[2] = { 0, 0 };
	var uLocal_801[2] = { 0, 0 };
	int iLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	int iLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
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
	float fLocal_852 = 0f;
	float fLocal_853 = 0f;
	float fLocal_854 = 0f;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	bool bLocal_867 = false;
	vector3 vLocal_868 = { 0f, 0f, 0f };
	vector3 vLocal_871 = { 0f, 0f, 0f };
	char[] cLocal_874[8] = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar3;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_405 = "CLIPSET@MECH_LOCO@GENERIC@HURRIED@BASE@A";
	fLocal_854 = 35f;
	iLocal_856 = 1;
	iLocal_857 = 1;
	iLocal_864 = 1;
	vLocal_868 = { 7f, 7f, 7f };
	vLocal_871 = { 0f, 0f, 0f };
	cLocal_874 = "Dark_Alley";
	Local_163.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_867 = true;
	}
	if (!bLocal_867)
	{
		Local_163.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_163.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_163.f_43 = __LIB_0__::func_12();
		uLocal_645 = uLocal_645;
		__LIB_3__::func_368(&Local_163, 1);
		func_5();
		func_6(&uLocal_432, Local_163.f_3);
		func_7();
		__LIB_2__::func_433(&(Local_163.f_5));
		__LIB_2__::func_51(&(Local_163.f_5), 0);
		Local_163.f_176 = 1;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_867, 3596, 0);
		if (bLocal_867)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_648)
			{
				case 0:
					if (func_12())
					{
						iLocal_648 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_631(&Local_163, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_14();
						if (iLocal_14 == 1)
						{
							func_10();
						}
						func_15(&Local_163, &iLocal_15, &(Local_163.f_51.f_4));
						__LIB_3__::func_455(&Local_163, iLocal_15, 4705);
						func_18(&Local_163, &iLocal_15, &(Local_163.f_51.f_4));
						iLocal_648 = 3;
					}
					else if (Local_163.f_160)
					{
						func_10();
					}
					break;
				case 3:
					if (func_19())
					{
						func_20();
						func_21();
						func_22();
						func_23();
						func_24();
						if (Local_163.f_51.f_4 != 1)
						{
							if (Local_163.f_51.f_4 == 0 && iLocal_15 == 4)
							{
								__LIB_3__::func_594(&uLocal_805, &uLocal_814, -799.907f, -1309.465f, 42.66f, 0f, 0f, 90f, 45f, 18f, 16.333f, 1, 0, 1, 2, 0);
								__LIB_3__::func_627(&uLocal_808, -799.907f, -1309.465f, 42.66f, 0f, 0f, 90f, 45f, 18f, 16.333f, 1, 16384, 0);
								__LIB_3__::func_627(&uLocal_809, -799.907f, -1309.465f, 42.66f, 0f, 0f, 90f, 45f, 18f, 16.333f, 1, 10208, 0);
								__LIB_3__::func_594(&uLocal_806, &uLocal_815, -828.457f, -1306.821f, 42.56986f, 0f, 0f, 0f, 33.012f, 9f, 16.333f, 1, 0, 1, 2, 0);
								__LIB_3__::func_627(&uLocal_810, -828.457f, -1306.821f, 42.56986f, 0f, 0f, 0f, 33.012f, 9f, 16.333f, 1, 16384, 0);
								__LIB_3__::func_627(&uLocal_811, -828.457f, -1306.821f, 42.56986f, 0f, 0f, 0f, 33.012f, 9f, 16.333f, 1, 10208, 0);
							}
							else
							{
								__LIB_3__::func_594(&uLocal_805, &uLocal_814, Local_163.f_51, 0f, 0f, 0f, vLocal_868, 1, 0, 1, 2, 0);
								__LIB_3__::func_627(&uLocal_808, Local_163.f_51, 0f, 0f, 0f, 20f, 20f, 10f, 0, 16384, 0);
								__LIB_3__::func_627(&uLocal_809, Local_163.f_51, 0f, 0f, 0f, 13f, 13f, 10f, 0, 10208, 0);
								func_27();
							}
						}
						else
						{
							__LIB_3__::func_594(&uLocal_805, &uLocal_814, 2643.559f, -1213.411f, 52.216f, 0f, 0f, 0f, 40.74f, 12.423f, 16.333f, 1, 0, 1, 2, 0);
							__LIB_3__::func_627(&uLocal_808, 2643.559f, -1213.411f, 52.216f, 0f, 0f, 0f, 40.74f, 12.423f, 16.333f, 1, 16384, 0);
							__LIB_3__::func_627(&uLocal_809, 2643.559f, -1213.411f, 52.216f, 0f, 0f, 0f, 40.74f, 12.423f, 16.333f, 1, 10208, 0);
							__LIB_3__::func_594(&uLocal_806, &uLocal_815, 2651.065f, -1242.029f, 52.216f, 0f, 0f, 0f, 33.012f, 12.423f, 16.333f, 1, 0, 1, 2, 0);
							__LIB_3__::func_627(&uLocal_810, 2651.065f, -1242.029f, 52.216f, 0f, 0f, 0f, 33.012f, 12.423f, 16.333f, 1, 16384, 0);
							__LIB_3__::func_627(&uLocal_811, 2651.065f, -1242.029f, 52.216f, 0f, 0f, 0f, 33.012f, 12.423f, 16.333f, 1, 10208, 0);
						}
						__LIB_3__::func_557(&iLocal_812, Local_163.f_51, 0f, 0f, Local_163.f_51.f_3, 10f, 2f, 5f, "NAV_BLOCKER");
						iLocal_821 = GRAPHICS::CREATE_TRACKED_POINT();
						iLocal_648 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_617(&Local_163, &uLocal_798, iLocal_365, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (!Local_163.f_46)
					{
						if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
						{
							__LIB_3__::func_606(&uLocal_808);
						}
						if (((__LIB_4__::func_209(uLocal_798[0], 0, &(Local_163.f_5), &iLocal_650, 0, 0) || __LIB_4__::func_209(uLocal_798[1], 0, &(Local_163.f_5), &iLocal_650, 0, 0)) || ((func_33() && !__LIB_0__::func_27(iLocal_402, 32768)) && !__LIB_0__::func_27(iLocal_402, 33554432))) || ((__LIB_0__::func_264(&uLocal_828) > 1f && !__LIB_0__::func_27(iLocal_402, 32768)) && !__LIB_0__::func_27(iLocal_402, 33554432)))
						{
							iVar3 = 1;
							if (iLocal_365 != 1)
							{
							}
							else if (((((iLocal_650 == 8 || iLocal_650 == 4) || iLocal_650 == 256) && __LIB_0__::func_27(iLocal_402, 33554432)) && __LIB_0__::func_27(iLocal_402, 268435456)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_798[1], Local_357))
							{
								iVar3 = 0;
								__LIB_3__::func_237(&(Local_163.f_5), &iLocal_650);
							}
							if (iVar3 != 1)
							{
							}
							else
							{
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[0], 100);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[1], 100);
								iLocal_857 = 1;
								func_37();
								iLocal_860 = 1;
								iLocal_431 = 1;
								if (VOLUME::_DOES_VOLUME_EXIST(iLocal_812))
								{
									if (PATHFIND::_0x19C7567D2F2287D6(iLocal_812, 7))
									{
									}
								}
								__LIB_3__::func_606(&uLocal_808);
								PED::SET_PED_CONFIG_FLAG(uLocal_798[0], 315, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_798[0], 130, false);
								func_38();
								Local_163.f_46 = 1;
								iLocal_647 = 7;
							}
						}
					}
					if (__LIB_0__::func_27(iLocal_402, 262144))
					{
						if (__LIB_4__::func_209(uLocal_798[1], 0, &(Local_163.f_5), &iLocal_650, 0, 0) || (__LIB_0__::func_665(Global_35, uLocal_798[1], 1, 1) < 2f && PED::IS_PED_RAGDOLL(uLocal_798[1])))
						{
							if ((iLocal_650 == 4 || iLocal_650 == 256) && (func_40() || func_41()))
							{
								__LIB_3__::func_237(&(Local_163.f_5), &iLocal_650);
								if (!__LIB_0__::func_27(iLocal_402, 16777216) && __LIB_0__::func_264(&uLocal_831) >= 3f)
								{
									if (iLocal_863 == 0)
									{
										if (__LIB_0__::func_163(uLocal_798[1], 242628503) && TASK::GET_SEQUENCE_PROGRESS(uLocal_798[1]) >= 2)
										{
											iLocal_863 = 1;
										}
									}
									__LIB_2__::func_504(uLocal_798[1], 0);
									switch (iLocal_820)
									{
										case 0:
											__LIB_2__::func_122(uLocal_798[1], "GENERIC_SHOCKED_HIGH", 1808677283, Global_35, 1, &(Local_52[1 /*32*/].f_23), 1, 1);
											break;
										default:
											break;
									}
									__LIB_1__::func_148(&uLocal_831);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
									TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 5f, 6000f, 4);
									if (iLocal_863 == 0)
									{
										TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[7 /*2*/], Local_117[7 /*2*/].f_1, Global_35, 3700, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
									}
									TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[11 /*2*/], Local_117[11 /*2*/].f_1, Global_35, 1867, 4f, -4f, 8, 0f, false, false, -1f, 0, 0, -1f);
									TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[12 /*2*/], Local_117[12 /*2*/].f_1, Global_35, 8000, 4f, -4f, 9, 0f, false, false, -1f, 0, 0, -1f);
									TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[13 /*2*/], Local_117[13 /*2*/].f_1, Global_35, 4167, 4f, -4f, 8, 0f, false, false, -1f, 0, 0, -1f);
									TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[12 /*2*/], Local_117[12 /*2*/].f_1, Global_35, -1, 4f, -4f, 9, 0f, false, false, -1f, 0, 0, -1f);
									__LIB_1__::func_474(uLocal_798[1], &iLocal_804, 0, 0, 1, 1);
									iLocal_820 = (1 + iLocal_820);
									if (iLocal_820 >= 3)
									{
										__LIB_1__::func_683(&iLocal_402, 16777216);
									}
								}
							}
							else if (iLocal_650 == 8 && (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_LASSO")))
							{
							}
							else
							{
								if (iLocal_650 == 4 || iLocal_650 == 256)
								{
								}
								if (func_40())
								{
								}
								if (func_41())
								{
								}
								iLocal_857 = 1;
								func_37();
								__LIB_1__::func_681(&iLocal_402, 262144);
								__LIB_1__::func_681(&iLocal_402, 1);
								__LIB_1__::func_681(&iLocal_402, 4);
								__LIB_1__::func_681(&iLocal_402, 8);
								if (ENTITY::DOES_ENTITY_EXIST(Local_150[0 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(Local_150[0 /*12*/].f_8, true, true);
									ENTITY::SET_ENTITY_VISIBLE(Local_150[0 /*12*/].f_8, true);
									TASK::_0x78B4567E18B54480(Local_150[0 /*12*/].f_8);
									PHYSICS::ACTIVATE_PHYSICS(Local_150[0 /*12*/].f_8);
									ENTITY::SET_ENTITY_COLLISION(Local_150[0 /*12*/].f_8, true, false);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_150[0 /*12*/].f_8, uLocal_798[1], true);
									ENTITY::APPLY_FORCE_TO_ENTITY(Local_150[0 /*12*/].f_8, 1, 0f, 1f, 1f, 0f, 0f, 0f, 0, true, true, true, false, true);
									MISC::_0x8BB99B85444544D9(Local_150[0 /*12*/].f_8, 1000);
								}
								if (__LIB_0__::func_139(Local_163.f_165))
								{
									__LIB_1__::func_748(&(Local_163.f_165), 1, 1);
								}
								__LIB_2__::func_461(0);
								if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
								{
									if (iLocal_650 == 8 || iLocal_650 == 2048)
									{
										if (__LIB_0__::func_12() == 5 && iLocal_365 == 0)
										{
										}
										else
										{
											__LIB_2__::func_122(uLocal_798[1], "STOP_THAT", 291934926, Global_35, 1, 0, 0, 1);
										}
									}
									else
									{
										__LIB_2__::func_122(uLocal_798[1], "GENERIC_FRIGHTENED_MED", 291934926, Global_35, 1, 0, 0, 1);
									}
								}
								__LIB_3__::func_606(&uLocal_808);
								__LIB_1__::func_683(&iLocal_402, 2);
								__LIB_1__::func_681(&iLocal_402, 262144);
								if ((PED::IS_PED_RAGDOLL(uLocal_798[1]) || PED::_0x29FCE825613FEFCA(uLocal_798[1], 250)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[1], Global_35, 1, 1))
								{
									TASK::CLEAR_PED_TASKS(uLocal_798[1], true, false);
									TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
								}
								PED::SET_PED_RESET_FLAG(uLocal_798[1], 290, true);
								TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
								if (__LIB_0__::func_94(uLocal_798[1], Local_163.f_51, 1) < 4f)
								{
									if (__LIB_0__::func_27(iLocal_402, 16))
									{
										if (!__LIB_0__::func_86(Local_28.f_18))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_18, 2f, -1, 0.25f, 2049, 40000f);
											TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
											__LIB_1__::func_474(uLocal_798[1], &iLocal_804, 0, 0, 1, 1);
										}
										else
										{
											TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
										}
									}
									else if (!__LIB_0__::func_86(Local_28.f_21))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_21, 2f, -1, 0.25f, 2049, 40000f);
										TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
										__LIB_1__::func_474(uLocal_798[1], &iLocal_804, 0, 0, 1, 1);
									}
									else
									{
										TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
									}
								}
								else
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
								}
								__LIB_2__::func_526(&Local_694, 0, 0);
								PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
								iLocal_857 = 1;
								iLocal_859 = 1;
								TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
								func_57();
								__LIB_0__::func_325(&(uLocal_801[1]));
								PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
								iLocal_647 = 14;
							}
						}
					}
					if (func_59())
					{
						Local_163.f_50 = 1;
						func_10();
					}
					if (__LIB_3__::func_431(&Local_163, &uLocal_798, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_163.f_50 = 1;
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_163.f_158);
		}
	}
}

void func_5()
{
	switch (__LIB_3__::func_168(iLocal_15))
	{
		case 3:
			if (__LIB_4__::func_177(82, 3) == 0 && !__LIB_3__::func_628(0))
			{
				iLocal_365 = 0;
			}
			else if (__LIB_3__::func_628(0) && !__LIB_0__::func_181())
			{
				iLocal_365 = 1;
				if (__LIB_3__::func_564(82, 0) == 1)
				{
					Local_163.f_44 = 1;
					iLocal_14 = 1;
				}
			}
			else
			{
				iLocal_365 = 1;
			}
			break;
		case 1:
			if (__LIB_4__::func_177(82, 1) == 0 && !__LIB_3__::func_628(0))
			{
				iLocal_365 = 0;
			}
			else if (__LIB_3__::func_628(0) && !__LIB_0__::func_181())
			{
				iLocal_365 = 1;
				if (__LIB_3__::func_564(82, 1) == 1)
				{
					Local_163.f_44 = 1;
					iLocal_14 = 1;
				}
			}
			else
			{
				iLocal_365 = 1;
			}
			break;
	}
}

void func_6(var uParam0, int iParam1)
{
	StringCopy(&(uParam0->f_34), "RE_DAS_THANKS", 64);
	StringCopy(&(uParam0->f_2), "script_re@dark_alley_stab", 64);
	StringCopy(&(uParam0->f_10), "thanks_line_vic", 64);
	__LIB_3__::func_318(&(uParam0->f_2), &uLocal_406);
	uParam0->f_70 = joaat("REWARD_BEAT_MEDIUM");
	uParam0->f_72 = __LIB_3__::func_687(iParam1);
}

void func_7()
{
	Local_366 = { 0f, 0f, 0f };
	Local_366.f_3 = Global_35;
	Local_366.f_8 = 4;
	Local_366.f_19 = 4;
	Local_366.f_21 = 4;
	Local_366.f_17 = 4;
	Local_366.f_18 = 4;
	Local_366.f_7 = -1;
}

void func_10()
{
	__LIB_0__::func_325(&(uLocal_801[0]));
	__LIB_0__::func_325(&(uLocal_801[1]));
	TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
	func_78();
	if (iLocal_648 == 4)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_821);
	}
	if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
		__LIB_3__::func_141(uLocal_798[1], 1088421888 /* Float: 7f */, 0, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_798[1], 7, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_798[1], 3, 2, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_798[1], 4, 2, 1);
	}
	if (iLocal_865 == 1)
	{
		if (iLocal_647 == 3)
		{
			__LIB_3__::func_465(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_798[1], 0, 1065353216 /* Float: 1f */, 0);
		}
	}
	if (Local_163.f_44 == 1)
	{
		if (iLocal_365 == 1)
		{
			switch (__LIB_3__::func_168(iLocal_15))
			{
				case 3:
					__LIB_3__::func_461(82, 0, 1);
					break;
				case 1:
					__LIB_3__::func_461(82, 1, 1);
					break;
				default:
					break;
			}
		}
	}
	__LIB_3__::func_606(&uLocal_808);
	__LIB_3__::func_606(&uLocal_809);
	if (Local_163.f_51.f_4 == 1)
	{
		__LIB_3__::func_606(&uLocal_810);
		__LIB_3__::func_606(&uLocal_811);
		__LIB_3__::func_525(&uLocal_805, &uLocal_815);
	}
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
	__LIB_0__::func_172(iLocal_812);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_357.f_3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_357.f_3, false))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (iLocal_856 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
		iLocal_856 = 1;
	}
	if (iLocal_817 != 0)
	{
		__LIB_3__::func_524(&iLocal_817);
	}
	if (iLocal_818 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_818);
	}
	if (iLocal_819 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_819);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_807))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_807);
		POPULATION::_0xA1CFB35069D23C23(iLocal_807);
		VOLUME::_DELETE_VOLUME(iLocal_807);
	}
	__LIB_3__::func_525(&uLocal_805, &uLocal_814);
	__LIB_3__::func_493(&Local_163, &uLocal_798, &uLocal_801, iLocal_365, iLocal_15, __LIB_3__::func_172(&Local_163), 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12()
{
	switch (iLocal_646)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_163))
			{
				func_90();
				func_91();
				func_92();
				func_93();
				__LIB_3__::func_314(&Local_150);
				STREAMING::REQUEST_CLIP_SET(sLocal_405);
				iLocal_646 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_645, cLocal_874))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_406))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_150))
			{
				return false;
			}
			if (!func_98())
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_52))
			{
				return false;
			}
			if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_405))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_14()
{
	if (iLocal_365 == 0)
	{
		Local_357.f_4 = "script@beat@town@darkAlleyStab@main";
		Local_357.f_7 = "script@beat@town@darkAlleyStab@handover";
	}
	else if (iLocal_365 == 1)
	{
		Local_357.f_4 = "script@beat@town@darkAlleyStab@disarm";
		Local_357.f_7 = "script@beat@town@darkAlleyStab@handover";
	}
}

void func_15(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 0;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 0;
			*uParam2 = 4;
			break;
		case 5:
			*iParam1 = 0;
			*uParam2 = 5;
			break;
		case 6:
			*iParam1 = 0;
			*uParam2 = 6;
			break;
		case 7:
			*iParam1 = 0;
			*uParam2 = 7;
			break;
		case 8:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -91.44f;
				case 1:
					return 0f, 0f, -6f;
				case 2:
					return 0f, 0f, 187.92f;
				case 3:
					return 0f, 0f, -1.44f;
				case 4:
					return 0f, 0f, 91.44f;
				case 5:
					return 0f, 0f, 142.668f;
				case 6:
					return 0f, 0f, -50.4f;
				case 7:
					return 0f, 0f, 205.2f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 92.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_18(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 0:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2687.021f, -1175.423f, 49.6715f, 0f, 0f, 0.1f, 16.7f, 33.7f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2668.796f, -1181.647f, 49.2901f, 0f, 0f, 0.1f, 17.8f, 8.5f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2655.243f, -1184.528f, 49.2683f, 0f, 0f, 0.1f, 9.1f, 15.025f, 10f);
					break;
				case 1:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2642.65f, -1213.723f, 51.0142f, 0f, 0f, 0.1f, 6.9f, 12f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2644.147f, -1243.988f, 49.8411f, 0f, 0f, 10.1f, 4.8f, 26.3f, 11.2f);
					break;
				case 2:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2838.5f, -1207.5f, 47.6f, 0f, 0f, 4.2f, 17.7f, 8.8f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2834.2f, -1191.2f, 47.6f, 0f, 0f, 3.7f, 9.7f, 44.3f, 10f);
					break;
				case 3:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2774.031f, -1122.315f, 46.4863f, 0f, 0f, 0f, 3.175f, 15.3f, 7f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2773.666f, -1106.35f, 46.2666f, 0f, 0f, 0f, 8.8f, 17.2f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2770.587f, -1107.168f, 46.6186f, 0f, 0f, 17.1875f, 5f, 18.7f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2774.617f, -1133.69f, 46.4408f, 0f, 0f, 0f, 5f, 13.1f, 10f);
					break;
				case 4:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2526.413f, -1404.212f, 45.1582f, 0f, 0f, 90.625f, 10f, 53f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2534.765f, -1409.22f, 45.1355f, 0f, 0f, -84.8958f, 5f, 16.7f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2499.98f, -1404.607f, 45.1182f, 0f, 0f, -88.0208f, 9.8f, 15f, 10f);
					break;
				case 5:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2735.221f, -1321.609f, 46.5754f, 0f, 0f, 54.1667f, 16.1f, 6.5f, 5f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2722.907f, -1331.617f, 46.5597f, 0f, 0f, 44.7917f, 17.2f, 11.5f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2743.037f, -1309.74f, 46.8843f, 0f, 0f, -39.0625f, 6.4f, 12.7f, 5f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2742.092f, -1305.863f, 46.5354f, 0f, 0f, -11.9792f, 2.275f, 8.825f, 5f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2740.778f, -1307.002f, 46.5655f, 0f, 0f, -31.7708f, 2.3f, 11.6f, 5f);
					break;
				case 6:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2694.287f, -1330.165f, 47.876f, 0f, 0f, 39.6f, 19.975f, 5.85f, 6.125f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2662.522f, -1357.02f, 47.6812f, 0f, 0f, -50.4f, 6.825f, 27.85f, 7.6f);
					break;
				case 7:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2666.302f, -1438.151f, 45.3835f, 0f, 0f, 25.6f, 9.325f, 86.2f, 6.65f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2643.528f, -1393.446f, 45.2447f, 0f, 0f, 22.32f, 10.075f, 12.7f, 18.325f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2652.519f, -1433.922f, 45.2499f, 0f, 0f, 0f, 16.575f, 65.975f, 7.225f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2665.169f, -1450.729f, 45.2897f, 0f, 0f, 0f, 9.525f, 32.175f, 8.025f);
					break;
			}
			break;
		case 4:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -815.5157f, -1309.911f, 42.6708f, 0f, 0f, -179.1667f, 26.975f, 5.2f, 6f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -831.1533f, -1307.191f, 42.6265f, 0f, 0f, 0f, 20.1f, 10.5f, 6f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -801.6334f, -1309.425f, 42.5446f, 0f, 0f, 0f, 23.4f, 9.3f, 6f);
					break;
			}
			break;
	}
}

bool func_19()
{
	switch (iLocal_649)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_163), __LIB_3__::func_526(&Local_163), &Local_52, &uLocal_798, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_20()
{
	func_108();
	if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_798[0], Local_163.f_51, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_798[0], Local_52[0 /*32*/].f_9);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_798[0], true, true);
		iLocal_764 = __LIB_2__::func_272(uLocal_798[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_798[0], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_798[0], 186, false);
		__LIB_2__::func_190(uLocal_798[0], 5);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_798[0], iLocal_764, true, 0, false, false);
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_798[1], "DEFAULT_SCARED");
		__LIB_2__::func_133(uLocal_798[0], &(Local_52[0 /*32*/].f_23), 0);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_798[0], false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_798[0], true, 0f);
		PED::_0x24C82EF607105FAA(uLocal_798[0], joaat("AGGRESSIVE"));
	}
	if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_798[1], Local_163.f_51, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_798[1], Local_52[1 /*32*/].f_9);
		PED::_0x923583741DC87BCE(uLocal_798[1], "default");
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_798[1], true, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_798[1], 186, false);
		__LIB_2__::func_190(uLocal_798[1], __LIB_3__::func_540(joaat("REWARD_BEAT_HUGE"), 0, -1));
		__LIB_2__::func_133(uLocal_798[1], &(Local_52[1 /*32*/].f_23), 0);
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_798[0], "DEFAULT_SHOCKED");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_798[1], joaat("REL_PLAYER_LIKE"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_798[1], false);
	}
	__LIB_3__::func_285(uLocal_798[1], &Local_163, 0);
}

void func_21()
{
	__LIB_3__::func_157(&(Local_694[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_694[1 /*17*/]), "RE_DAS_INTERVENE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_729[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_729[1 /*17*/]), "RE_DAS_INTERVENE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_694[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_694[1 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_729[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_729[1 /*17*/]), 1, 0);
}

void func_22()
{
	Local_357 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_357.f_4, 64, "PBL_EXIT_LEFT", false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_357, Local_163.f_51, 0f, 0f, Local_163.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357, "PED_STABBER", uLocal_798[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357, "PED_VICTIM", uLocal_798[1], 0);
	Local_150[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_150[0 /*12*/].f_7, Local_163.f_51, true, true, false, false, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_150[0 /*12*/].f_8, false);
	ENTITY::SET_ENTITY_COLLISION(Local_150[0 /*12*/].f_8, false, false);
	MISC::_0x8BB99B85444544D9(Local_150[0 /*12*/].f_8, 1000);
	Local_357.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_357.f_7, 0, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_357.f_3, Local_163.f_51, 0f, 0f, Local_163.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357.f_3, "Victim", uLocal_798[1], 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_357.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_357, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_357);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_357.f_7))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_357.f_3, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_357.f_3);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_357, "ACTION", false, false);
}

void func_23()
{
	iLocal_817 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_798[0], 0f, 20f, 1f, -1f, -1f, 180f, false, true, -1, -1);
}

void func_24()
{
	__LIB_3__::func_561(&iLocal_807, Local_28.f_6, Local_28.f_9, Local_28.f_12);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_807))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_807, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_807, 0, 0, 0, -1, -1, 0);
	}
}

void func_27()
{
	if (!__LIB_0__::func_86(Local_28.f_15))
	{
		__LIB_3__::func_618(Local_28.f_15, 2f, 1, 0, 0, 0, 0);
	}
}

bool func_33()
{
	float fVar0;
	fVar0 = __LIB_2__::func_118(uLocal_798[0], 1, 1);
	if (!__LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_27(iLocal_402, 1024))
	{
		return false;
	}
	if (fVar0 < 3.5f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_798[0], Global_35, 17))
	{
		__LIB_1__::func_683(&iLocal_402, 128);
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_798[0], &Local_366);
		return true;
	}
	return false;
}

void func_37()
{
	__LIB_2__::func_526(&Local_694, 0, 0);
}

void func_38()
{
	if ((!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1) && ((!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[1], Global_35, 1, 1) && !PED::_IS_PED_LASSOED(uLocal_798[1])) && !PED::_IS_PED_HOGTIED(uLocal_798[1]))) && iLocal_650 != 16)
	{
		__LIB_1__::func_683(&iLocal_402, 4);
	}
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[1], Global_35, 1, 1)) || iLocal_650 == 16)
	{
		if (iLocal_650 == 16)
		{
		}
		__LIB_1__::func_683(&iLocal_402, 8);
	}
	if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1) || PED::_IS_PED_LASSOED(uLocal_798[0])) || PED::_IS_PED_HOGTIED(uLocal_798[0])) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[1], Global_35, 1, 1))
	{
		__LIB_1__::func_683(&iLocal_402, 1);
	}
	if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[1], Global_35, 1, 1) || PED::_IS_PED_LASSOED(uLocal_798[1])) || PED::_IS_PED_HOGTIED(uLocal_798[1])) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1))
	{
		__LIB_1__::func_683(&iLocal_402, 2);
	}
}

bool func_40()
{
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), uLocal_798[0], 1000))
	{
		return true;
	}
	if (WEAPON::_0x9E2D5D6BC97A5F1E(uLocal_798[0], __LIB_3__::func_619(Global_35, 0, 0), 1500) || WEAPON::_0x9E2D5D6BC97A5F1E(uLocal_798[0], __LIB_3__::func_619(Global_35, 1, 0), 1500))
	{
		return true;
	}
	return false;
}

bool func_41()
{
	if (__LIB_2__::func_901(uLocal_798[0], Global_35))
	{
		if (__LIB_0__::func_75(&uLocal_837))
		{
			if (__LIB_0__::func_264(&uLocal_837) < 3.5f)
			{
				return true;
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_837);
			return true;
		}
	}
	return false;
}

void func_57()
{
	if (iLocal_818 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_818);
	}
	if (iLocal_819 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_819);
	}
	iLocal_818 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), uLocal_798[1], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
}

bool func_59()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	char* sVar5;
	func_176();
	func_177();
	func_178();
	func_179();
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_357))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_357, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(Local_357, "PBL_INTERVENE_LEFT"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_INTERVENE_LEFT"))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_INTERVENE_LEFT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_INTERVENE_LEFT");
					}
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_357, "PBL_INTERVENE_RIGHT"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_INTERVENE_RIGHT"))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_INTERVENE_RIGHT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_INTERVENE_RIGHT");
					}
				}
			}
		}
	}
	switch (iLocal_647)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_357, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_357);
				__LIB_3__::func_567(uLocal_798[1], 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_798[0], 186, false);
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_798[0], 1, 1);
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_798[1], 1, 1);
				iLocal_647 = 1;
			}
			break;
		case 1:
			func_181();
			if (__LIB_4__::func_11(Global_35, uLocal_798[0]) && !__LIB_0__::func_27(iLocal_402, 16))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_EXIT_LEFT"))
				{
					__LIB_1__::func_683(&iLocal_402, 16);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_EXIT_LEFT", true);
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_EXIT_LEFT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_EXIT_LEFT");
				}
			}
			else if (!__LIB_4__::func_11(Global_35, uLocal_798[0]) && __LIB_0__::func_27(iLocal_402, 16))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_EXIT_RIGHT"))
				{
					__LIB_1__::func_681(&iLocal_402, 16);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_EXIT_RIGHT", true);
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_EXIT_RIGHT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_EXIT_RIGHT");
				}
			}
			if (__LIB_3__::func_452(&Local_163, 3f, 40f, 30f, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 1125515264 /* Float: 150f */, 1, 0))
			{
				if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_EXIT_LEFT"))
					{
						__LIB_1__::func_683(&iLocal_402, 16);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_EXIT_LEFT", true);
					}
					else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_EXIT_LEFT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_EXIT_LEFT");
					}
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_EXIT_RIGHT"))
				{
					__LIB_1__::func_681(&iLocal_402, 16);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_EXIT_RIGHT", true);
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_EXIT_RIGHT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_EXIT_RIGHT");
				}
				if (!MAP::DOES_BLIP_EXIST(uLocal_801[1]))
				{
					__LIB_2__::func_73(uLocal_798[1], &(uLocal_801[1]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				}
				__LIB_1__::func_283(&uLocal_840, 0);
				__LIB_1__::func_283(&uLocal_831, 0);
				iLocal_647 = 3;
				GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_821, Local_163.f_51, 1f);
			}
			break;
		case 3:
			func_181();
			if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_357, "PBL_EXIT_LEFT"))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_EXIT_LEFT"))
					{
						__LIB_1__::func_683(&iLocal_402, 16);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_EXIT_LEFT", true);
					}
					else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_EXIT_LEFT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_EXIT_LEFT");
					}
				}
			}
			else if (!ANIMSCENE::_0x1F0E401031E20146(Local_357, "PBL_EXIT_RIGHT"))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_EXIT_RIGHT"))
				{
					__LIB_1__::func_681(&iLocal_402, 16);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_EXIT_RIGHT", true);
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_357, "PBL_EXIT_RIGHT"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_357, "PBL_EXIT_RIGHT");
				}
			}
			if (__LIB_0__::func_264(&uLocal_840) > 2f && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_821))
			{
				if (iLocal_865 == 0)
				{
					iLocal_865 = 1;
				}
			}
			if (__LIB_0__::func_264(&uLocal_840) > 4f && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_821))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_357, "ACTION", true, false);
				iLocal_647 = 4;
			}
			break;
		case 4:
			func_186();
			if (iLocal_818 == 0)
			{
				iLocal_818 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), uLocal_798[1], -1f, 50f, 50f, -1f, -1f, 180f, false, false, -1, -1);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_357))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_357, false))
				{
					fLocal_853 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_357);
					fLocal_853 = fLocal_853;
				}
			}
			if (iLocal_365 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], joaat("ENDSINRUN")))
				{
					__LIB_2__::func_360(&(Local_729[1 /*17*/]), "RE_INTER_ANTAGONIZE");
					__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_729[1 /*17*/]), 1, 0);
					PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
					WEAPON::_0x94A3C1B804D291EC(uLocal_798[0], 0, 0, 0, 0);
					TASK::TASK_SWAP_WEAPON(uLocal_798[0], 0, 1, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
					if (__LIB_0__::func_27(iLocal_402, 16))
					{
						if (!__LIB_0__::func_86(Local_28.f_18))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_18, 2f, -1, 0.25f, 2049, 40000f);
						}
					}
					else if (!__LIB_0__::func_86(Local_28.f_21))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_21, 2f, -1, 0.25f, 2049, 40000f);
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_798[0], iLocal_804);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
					iLocal_861 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
					if (!__LIB_0__::func_27(iLocal_402, 32768))
					{
						func_78();
					}
					func_188();
					iLocal_647 = 14;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], -1377892927))
				{
					__LIB_3__::func_459(uLocal_798[1], 0);
				}
			}
			else if (iLocal_365 == 1)
			{
				if (func_190())
				{
					Local_163.f_44 = 1;
					iLocal_647 = 14;
				}
			}
			break;
		case 7:
			if (iLocal_817 != 0)
			{
				__LIB_3__::func_524(&iLocal_817);
			}
			if (__LIB_0__::func_27(iLocal_402, 32768) && __LIB_2__::func_1(uLocal_798[0], 0, 0))
			{
				if (((((!PED::IS_PED_RAGDOLL(uLocal_798[0]) && !PED::_IS_PED_HOGTIED(uLocal_798[0])) && !PED::_IS_PED_LASSOED(uLocal_798[0])) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_357)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_798[0], Local_357))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], joaat("ENDSINRUN")))
					{
						func_191(1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
						if (__LIB_0__::func_27(iLocal_402, 16))
						{
							if (!__LIB_0__::func_86(Local_28.f_18))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_18, 2f, -1, 0.25f, 1, 40000f);
							}
						}
						else if (!__LIB_0__::func_86(Local_28.f_21))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_21, 2f, -1, 0.25f, 1, 40000f);
						}
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_474(uLocal_798[0], &iLocal_804, 0, 0, 1, 1);
						PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
						iLocal_861 = 1;
						if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
						{
							TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
							TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
						}
						PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
						__LIB_2__::func_360(&(Local_729[1 /*17*/]), "RE_INTER_ANTAGONIZE");
						__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_729[1 /*17*/]), 1, 0);
						if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
						{
							TASK::_0x3923EC958249657D(uLocal_798[1], uLocal_798[0], -1082130432 /* Float: -1f */);
						}
					}
					else
					{
						__LIB_3__::func_237(&(Local_163.f_5), &iLocal_650);
						Local_163.f_46 = 0;
					}
				}
				else
				{
					WEAPON::_0x94A3C1B804D291EC(uLocal_798[0], 0, 0, 0, 0);
					TASK::TASK_SWAP_WEAPON(uLocal_798[0], 0, 1, 0, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_861 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
				}
				iLocal_647 = 8;
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_402, 4))
				{
					if (!__LIB_0__::func_27(iLocal_402, 32768))
					{
						iVar0 = 0;
						if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
						{
							if (!ANIMSCENE::_0x1F0E401031E20146(Local_357, "PBL_INTERVENE_LEFT"))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_INTERVENE_LEFT"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_INTERVENE_LEFT", true);
									iVar0 = 1;
								}
							}
						}
						else if (!ANIMSCENE::_0x1F0E401031E20146(Local_357, "PBL_INTERVENE_RIGHT"))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_357, "PBL_INTERVENE_RIGHT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_357, "PBL_INTERVENE_RIGHT", true);
								iVar0 = 1;
							}
						}
						if (iVar0 == 0)
						{
							if (__LIB_0__::func_27(iLocal_402, 512))
							{
							}
							else
							{
								TASK::_0x673A8779D229BA5A(uLocal_798[0], Local_163.f_51, 0, 0);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
								if (!ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], 602728109))
								{
									if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
									{
										TASK::TASK_PLAY_ANIM(0, Local_117[1 /*2*/], Local_117[1 /*2*/].f_1, 16f, -8f, -1, 1051136, 0f, false, 0, false, 0, false);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(0, Local_117[3 /*2*/], Local_117[3 /*2*/].f_1, 16f, -8f, -1, 1051136, 0f, false, 0, false, 0, false);
									}
								}
								else
								{
									if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
									{
										TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 0.5f, 0f, 4);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28, 2f, 20000, 0.25f, 1050689, 40000f);
									}
									else
									{
										TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 0.5f, 0f, 4);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_3, 2f, 20000, 0.25f, 1050689, 40000f);
									}
									TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_163.f_51, 4, 384, -1f, -1, 0);
								}
								__LIB_1__::func_474(uLocal_798[0], &iLocal_804, 0, 0, 1, 1);
							}
							iLocal_861 = 1;
							PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
							if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
							{
								TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
								TASK::_0x3923EC958249657D(uLocal_798[0], Global_35, -1082130432 /* Float: -1f */);
							}
						}
						if (__LIB_0__::func_27(iLocal_402, 1024))
						{
						}
						else
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
							if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(0, Local_117[2 /*2*/], Local_117[2 /*2*/].f_1, ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false), 0f, 0f, Local_163.f_51.f_3, 8f, -4f, -1, 1050624, 0f, 2, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(0, Local_117[4 /*2*/], Local_117[4 /*2*/].f_1, ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false), 0f, 0f, Local_163.f_51.f_3, 8f, -4f, -1, 1050624, 0f, 2, 0, 0);
							}
							TASK::TASK_REACT(0, uLocal_798[0], 0f, 0f, 0f, "Default_Scared", 60f, 2f, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, 3f, 0.25f, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_798[1], iLocal_804);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
						}
						TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], Global_35, 0, 0);
						iLocal_647 = 8;
					}
					else
					{
						Jump @3126; //curOff = 2843
						if (__LIB_0__::func_27(iLocal_402, 8))
						{
							if (__LIB_2__::func_1(uLocal_798[1], 0, 1) && !__LIB_0__::func_27(iLocal_402, 32768))
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
								PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
								__LIB_2__::func_526(&Local_694, 0, 0);
								iLocal_857 = 1;
								iLocal_859 = 1;
								if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
								{
									TASK::_0x3923EC958249657D(uLocal_798[1], uLocal_798[0], -1082130432 /* Float: -1f */);
								}
								PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
								func_57();
							}
							if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
								iLocal_861 = 1;
								if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
								{
									TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
									TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
								}
								PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
							}
							TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
							__LIB_0__::func_325(&(uLocal_801[1]));
							iLocal_647 = 8;
						}
						else if (__LIB_0__::func_27(iLocal_402, 1))
						{
							if (!__LIB_0__::func_27(iLocal_402, 32768) && !__LIB_0__::func_27(iLocal_402, 1024))
							{
								TASK::TASK_PLAY_ANIM(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1, 8f, -2f, -1, 1048576, 0f, false, 0, false, 0, false);
								iLocal_855 = 1;
							}
							else if (iLocal_365 == 0)
							{
							}
							if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
							{
								WEAPON::_0x94A3C1B804D291EC(uLocal_798[0], 0, 0, 0, 0);
								TASK::TASK_SWAP_WEAPON(uLocal_798[0], 0, 1, 0, 0);
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
								if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
								{
									TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
									TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
								}
								iLocal_861 = 1;
								PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
							}
							iLocal_647 = 8;
						}
						else
						{
							if (__LIB_0__::func_27(iLocal_402, 2))
							{
								if (__LIB_2__::func_1(uLocal_798[0], 0, 1) && !__LIB_0__::func_27(iLocal_402, 262144))
								{
									if (iLocal_862 == 0)
									{
										if (__LIB_4__::func_11(Global_35, uLocal_798[0]))
										{
											TASK::TASK_PLAY_ANIM(uLocal_798[0], Local_117[5 /*2*/], Local_117[5 /*2*/].f_1, 8f, -2f, -1, 1050624, 0f, false, 0, false, 0, false);
										}
										else
										{
											TASK::TASK_PLAY_ANIM(uLocal_798[0], Local_117[6 /*2*/], Local_117[6 /*2*/].f_1, 8f, -2f, -1, 1050624, 0f, false, 0, false, 0, false);
										}
									}
									__LIB_2__::func_461(0);
									__LIB_2__::func_478(uLocal_798[0], Global_35, func_192("CRAZY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (__LIB_2__::func_1(uLocal_798[1], 0, 1) && !__LIB_0__::func_27(iLocal_402, 32768))
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
									PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
									__LIB_2__::func_526(&Local_694, 0, 0);
									__LIB_2__::func_526(&Local_729, 0, 0);
									iLocal_857 = 1;
									iLocal_859 = 1;
									if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
									{
										TASK::_0x3923EC958249657D(uLocal_798[1], uLocal_798[0], -1082130432 /* Float: -1f */);
									}
									func_57();
								}
								TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
								__LIB_0__::func_325(&(uLocal_801[1]));
								PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
								TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], Global_35, 0, 0);
								iLocal_647 = 8;
							}
							Jump @8943; //curOff = 3755
							func_194(uLocal_798[0]);
							func_195();
							func_191(0);
							func_196();
							iLocal_862 = 1;
							if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
							{
								if (PED::_IS_PED_LASSOED(uLocal_798[0]))
								{
									if (!__LIB_0__::func_27(iLocal_402, 1048576))
									{
										__LIB_1__::func_683(&iLocal_402, 1048576);
										WEAPON::_0x94A3C1B804D291EC(uLocal_798[0], 0, 0, 0, 0);
										TASK::TASK_SWAP_WEAPON(uLocal_798[0], 0, 1, 0, 0);
										TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
										PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
										iLocal_861 = 1;
										if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
										{
											TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
											TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
										}
									}
								}
								else if (__LIB_0__::func_27(iLocal_402, 1048576))
								{
									__LIB_1__::func_681(&iLocal_402, 1048576);
									WEAPON::_0x94A3C1B804D291EC(uLocal_798[0], 0, 0, 0, 0);
									TASK::TASK_SWAP_WEAPON(uLocal_798[0], 0, 1, 0, 0);
									TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
									PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
									iLocal_861 = 1;
									if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
									{
										TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
										TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
									}
								}
							}
							if (((PED::IS_PED_RAGDOLL(uLocal_798[1]) && !__LIB_0__::func_27(iLocal_402, 16384)) && !__LIB_0__::func_27(iLocal_402, 2)) && !__LIB_0__::func_27(iLocal_402, 8))
							{
								TASK::TASK_REACT(uLocal_798[1], Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 60f, 0f, 4);
								__LIB_1__::func_683(&iLocal_402, 16384);
							}
							if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
							{
								if ((!TASK::GET_IS_TASK_ACTIVE(uLocal_798[0], 3) && !__LIB_0__::func_163(uLocal_798[0], 242628503)) || (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], joaat("ENDSINRUN")) && !__LIB_0__::func_27(iLocal_402, 1)))
								{
									func_191(1);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
									if (__LIB_0__::func_27(iLocal_402, 16))
									{
										if (!__LIB_0__::func_86(Local_28.f_18))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_18, 2f, -1, 0.25f, 1, 40000f);
										}
									}
									else if (!__LIB_0__::func_86(Local_28.f_21))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_21, 2f, -1, 0.25f, 1, 40000f);
									}
									TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
									__LIB_1__::func_474(uLocal_798[0], &iLocal_804, 0, 0, 1, 1);
									PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
									iLocal_861 = 1;
									if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
									{
										TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
										TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
									}
									PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
									__LIB_2__::func_360(&(Local_729[1 /*17*/]), "RE_INTER_ANTAGONIZE");
									__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_729[1 /*17*/]), 1, 0);
									if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
									{
										TASK::_0x3923EC958249657D(uLocal_798[1], uLocal_798[0], -1082130432 /* Float: -1f */);
									}
									iLocal_647 = 9;
									if (iLocal_365 == 0 || (!__LIB_0__::func_27(iLocal_402, 1024) || __LIB_0__::func_27(iLocal_402, 1)))
									{
										func_197();
									}
								}
							}
							if ((!__LIB_2__::func_1(uLocal_798[0], 0, 1) || __LIB_0__::func_94(uLocal_798[0], Local_163.f_51, 1) > 7f) || __LIB_0__::func_27(iLocal_402, 1048576))
							{
								iLocal_647 = 9;
							}
							Jump @8943; //curOff = 4712
							func_198();
							if (!__LIB_0__::func_27(iLocal_402, 67108864))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_798[1], joaat("REL_CIVMALE"));
								__LIB_1__::func_683(&iLocal_402, 67108864);
							}
							func_195();
							func_196();
							if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
							{
								if (iLocal_861 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], joaat("ENDSINRUN")))
								{
									iLocal_861 = 1;
									__LIB_2__::func_360(&(Local_729[1 /*17*/]), "RE_INTER_ANTAGONIZE");
									__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_729[1 /*17*/]), 1, 0);
									PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
									WEAPON::_0x94A3C1B804D291EC(uLocal_798[0], 0, 0, 0, 0);
									TASK::TASK_SWAP_WEAPON(uLocal_798[0], 0, 1, 0, 0);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
									if (__LIB_0__::func_27(iLocal_402, 16))
									{
										if (!__LIB_0__::func_86(Local_28.f_18))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_18, 2f, -1, 0.25f, 1, 40000f);
										}
									}
									else if (!__LIB_0__::func_86(Local_28.f_21))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_21, 2f, -1, 0.25f, 1, 40000f);
									}
									TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
									__LIB_1__::func_474(uLocal_798[0], &iLocal_804, 0, 0, 1, 1);
									PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
									iLocal_861 = 1;
									if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
									{
										TASK::_0x3923EC958249657D(uLocal_798[0], uLocal_798[1], -1082130432 /* Float: -1f */);
										TASK::_0xE8F1A5B4CED3725A(uLocal_798[0], Local_163.f_51, -1082130432 /* Float: -1f */);
									}
								}
							}
							if (((PED::IS_PED_RAGDOLL(uLocal_798[1]) && !__LIB_0__::func_27(iLocal_402, 16384)) && !__LIB_0__::func_27(iLocal_402, 2)) && !__LIB_0__::func_27(iLocal_402, 8))
							{
								TASK::TASK_REACT(uLocal_798[1], Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 60f, 0f, 4);
								__LIB_1__::func_683(&iLocal_402, 16384);
							}
							if ((__LIB_2__::func_1(uLocal_798[1], 0, 1) && !__LIB_0__::func_27(iLocal_402, 2)) && !__LIB_0__::func_27(iLocal_402, 8))
							{
								func_188();
								if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
								{
									if (PED::_IS_PED_LASSOED(uLocal_798[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], 1635322840))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
										TASK::TASK_REACT(0, uLocal_798[0], 0f, 0f, 0f, "Default_Scared", 60f, 2f, 4);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, 3f, 0.25f, -1f);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_798[1], iLocal_804);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
									}
								}
								func_199(0);
								func_194(uLocal_798[0]);
								if (iLocal_365 == 1)
								{
									if (__LIB_0__::func_27(iLocal_402, 1024))
									{
										Local_163.f_44 = 1;
										iLocal_647 = 14;
									}
									else
									{
										if ((!__LIB_2__::func_1(uLocal_798[0], 0, 1) && !__LIB_0__::func_27(iLocal_402, 32768)) || __LIB_0__::func_94(uLocal_798[0], Local_163.f_51, 1) > 7f)
										{
											if (PED::IS_PED_RAGDOLL(uLocal_798[1]))
											{
												TASK::TASK_REACT(uLocal_798[1], Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 60f, 0f, 4);
												__LIB_1__::func_683(&iLocal_402, 16384);
											}
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1, 1) || iLocal_855 == 1)
											{
												if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1, 1))
												{
													TASK::TASK_PLAY_ANIM(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1, 8f, -2f, -1, 4, 0f, false, 0, false, 0, false);
												}
												fLocal_852 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1);
											}
											else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[2 /*2*/], Local_117[2 /*2*/].f_1, 1))
											{
												fLocal_852 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_798[1], Local_117[2 /*2*/], Local_117[2 /*2*/].f_1);
											}
											else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[4 /*2*/], Local_117[4 /*2*/].f_1, 1))
											{
												fLocal_852 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_798[1], Local_117[4 /*2*/], Local_117[4 /*2*/].f_1);
											}
											else
											{
												__LIB_1__::func_683(&iLocal_402, 16384);
											}
											if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], 1722708197) || fLocal_852 > 0.8f) || __LIB_0__::func_27(iLocal_402, 16384))
											{
												func_194(0);
												TASK::SET_ANIM_RATE(uLocal_798[1], 1f, 0, false);
												__LIB_1__::func_683(&iLocal_402, 262144);
												__LIB_3__::func_620(&(Local_163.f_5), 0);
												__LIB_2__::func_104(&(Local_163.f_5), 0);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
												TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3f, 0.25f, -1f);
												TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[7 /*2*/], Local_117[7 /*2*/].f_1, Global_35, 3700, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
												TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[11 /*2*/], Local_117[11 /*2*/].f_1, Global_35, 1867, 4f, -4f, 8, 0f, false, false, -1f, 0, 0, -1f);
												TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[12 /*2*/], Local_117[12 /*2*/].f_1, Global_35, 8000, 4f, -4f, 9, 0f, false, false, -1f, 0, 0, -1f);
												TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[13 /*2*/], Local_117[13 /*2*/].f_1, Global_35, 4167, 4f, -4f, 8, 0f, false, false, -1f, 0, 0, -1f);
												TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[12 /*2*/], Local_117[12 /*2*/].f_1, Global_35, -1, 4f, -4f, 9, 0f, false, false, -1f, 0, 0, -1f);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
												TASK::TASK_PERFORM_SEQUENCE(uLocal_798[1], iLocal_804);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
												__LIB_1__::func_283(&uLocal_825, 0);
												__LIB_3__::func_608(uLocal_798[1]);
												Local_163.f_44 = 1;
												__LIB_3__::func_237(&(Local_163.f_5), &iLocal_650);
												iLocal_647 = 10;
											}
										}
										Jump @6240; //curOff = 6227
										Local_163.f_44 = 1;
										iLocal_647 = 14;
										Jump @8943; //curOff = 6240
										func_188();
										func_199(0);
										func_194(0);
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[7 /*2*/], Local_117[7 /*2*/].f_1, 1))
										{
											__LIB_3__::func_237(&(Local_163.f_5), &iLocal_650);
											__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
											__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
											__LIB_1__::func_683(&iLocal_403, 1);
											iLocal_647 = 13;
										}
										Jump @8943; //curOff = 6331
										if (__LIB_3__::func_496(uLocal_798[1], "attach", 1067030938 /* Float: 1.2f */))
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_150[0 /*12*/].f_8))
											{
												ENTITY::SET_ENTITY_VISIBLE(Local_150[0 /*12*/].f_8, true);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_150[0 /*12*/].f_8, uLocal_798[1], PED::GET_PED_BONE_INDEX(uLocal_798[1], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
											}
										}
										if (__LIB_0__::func_27(iLocal_402, 262144) && (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[12 /*2*/], Local_117[12 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[13 /*2*/], Local_117[13 /*2*/].f_1, 1)))
										{
											__LIB_2__::func_51(&(Local_163.f_5), 1);
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[12 /*2*/], Local_117[12 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[13 /*2*/], Local_117[13 /*2*/].f_1, 1))
										{
											if (iLocal_858 == 0)
											{
												iLocal_857 = 0;
												iLocal_858 = 1;
												iLocal_431 = 2;
												__LIB_3__::func_527(&iLocal_813, Local_163.f_51, 0f, 0f, 0f, 5f, 5f, 5f, "volHorseCheck");
												__LIB_2__::func_360(&(Local_694[0 /*17*/]), "BEAT_GRT_POS");
												__LIB_2__::func_360(&(Local_694[1 /*17*/]), "BEAT_GRT_NEG");
												__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
												__LIB_3__::func_621(&(Local_694[0 /*17*/]), 1, 0);
												if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
												{
													__LIB_2__::func_411(&(Local_694[0 /*17*/]), 1, 0);
													__LIB_2__::func_411(&(Local_694[1 /*17*/]), 1, 0);
												}
											}
										}
										if (__LIB_1__::func_313(&uLocal_825, 20f))
										{
											TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
											TASK::TASK_PLAY_ANIM(uLocal_798[1], Local_117[10 /*2*/], Local_117[10 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
											iLocal_431 = 3;
											iLocal_857 = 1;
											func_37();
											PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
											__LIB_2__::func_360(&(Local_694[0 /*17*/]), "RE_INTER_POS");
											__LIB_2__::func_360(&(Local_694[1 /*17*/]), "RE_INTER_ANTAGONIZE");
											__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
											__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
											__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
											__LIB_3__::func_621(&(Local_694[0 /*17*/]), 0, 0);
											iLocal_647 = 11;
										}
										Jump @8943; //curOff = 6873
										iLocal_857 = 1;
										if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_357.f_3, false) && !__LIB_0__::func_27(iLocal_402, 131072))
										{
											if (__LIB_3__::func_995(&Local_765, 106))
											{
												ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357.f_3, "COINPURSE", Local_150[0 /*12*/].f_8, 0);
												ANIMSCENE::START_ANIM_SCENE(Local_357.f_3);
												TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
												__LIB_1__::func_683(&iLocal_402, 131072);
											}
										}
										else
										{
											if (__LIB_3__::func_496(Global_35, "ObjectExchange", 1067030938 /* Float: 1.2f */))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_150[0 /*12*/].f_8))
												{
													OBJECT::DELETE_OBJECT(&(Local_150[0 /*12*/].f_8));
													__LIB_4__::func_19(joaat("REWARD_BEAT_HUGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
													__LIB_2__::func_360(&(Local_694[0 /*17*/]), "RE_INTER_POS");
													__LIB_2__::func_360(&(Local_694[1 /*17*/]), "RE_INTER_ANTAGONIZE");
													__LIB_3__::func_621(&(Local_694[0 /*17*/]), 0, 0);
												}
												if (iLocal_365 == 0 && __LIB_0__::func_12() == 5)
												{
													__LIB_2__::func_478(uLocal_798[1], Global_35, func_192("REFLECT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												}
												else
												{
													__LIB_2__::func_122(uLocal_798[1], "HELPED_RECENTLY", 291934926, Global_35, 1, 0, 0, 1);
												}
												__LIB_1__::func_283(&uLocal_843, 0);
											}
											if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_357.f_3) >= 0.6265f && !__LIB_0__::func_27(iLocal_402, 134217728))
											{
												__LIB_1__::func_683(&iLocal_402, 134217728);
												PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
											}
											if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_357.f_3))
											{
												Local_163.f_44 = 1;
												func_198();
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
												TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
												TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_871, 12, 524672, 100f, -1, 0);
												TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
												TASK::TASK_PERFORM_SEQUENCE(uLocal_798[1], iLocal_804);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
												PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
												PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
												iLocal_647 = 14;
											}
										}
										Jump @8943; //curOff = 7363
										func_199(0);
										func_194(0);
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], -453350889) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], 1927671669))
										{
											__LIB_1__::func_683(&iLocal_402, 65536);
											if (__LIB_0__::func_139(Local_163.f_165))
											{
												__LIB_1__::func_748(&(Local_163.f_165), 1, 1);
											}
											ENTITY::SET_ENTITY_VISIBLE(Local_150[0 /*12*/].f_8, true);
											ENTITY::SET_ENTITY_COLLISION(Local_150[0 /*12*/].f_8, true, false);
											vVar1 = { PED::GET_PED_BONE_COORDS(uLocal_798[1], 7966, 0f, 0f, 0f) };
											ENTITY::SET_ENTITY_COORDS(Local_150[0 /*12*/].f_8, vVar1, true, false, true, true);
											fVar4 = __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false), Global_36, 1);
											ENTITY::SET_ENTITY_ROTATION(Local_150[0 /*12*/].f_8, 0f, 0f, fVar4, 2, true);
											ENTITY::APPLY_FORCE_TO_ENTITY(Local_150[0 /*12*/].f_8, 1, 0f, 1.5f, 1.5f, 0f, 0f, 0f, 0, true, true, true, false, true);
											MISC::_0x8BB99B85444544D9(Local_150[0 /*12*/].f_8, 1000);
											TASK::_0x78B4567E18B54480(Local_150[0 /*12*/].f_8);
											Local_163.f_44 = 1;
										}
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[10 /*2*/], Local_117[10 /*2*/].f_1, 1) && __LIB_0__::func_27(iLocal_402, 65536))
										{
											func_198();
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
											TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_871, 12, 524672, 100f, -1, 0);
											TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_798[1], iLocal_804);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
											func_57();
											if (iLocal_365 == 0 && __LIB_0__::func_12() == 5)
											{
												__LIB_2__::func_478(uLocal_798[1], Global_35, func_192("REFLECT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											}
											PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
											iLocal_647 = 14;
											__LIB_1__::func_283(&uLocal_843, 0);
										}
										Jump @8943; //curOff = 7828
										if (iLocal_817 != 0)
										{
											__LIB_3__::func_524(&iLocal_817);
										}
										__LIB_3__::func_606(&uLocal_809);
										if ((__LIB_0__::func_75(&uLocal_843) && __LIB_0__::func_264(&uLocal_843) > 1f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]))
										{
											iLocal_857 = 1;
											__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
											__LIB_2__::func_411(&(Local_694[0 /*17*/]), 1, 0);
											__LIB_2__::func_411(&(Local_694[1 /*17*/]), 1, 0);
											__LIB_0__::func_37(&uLocal_843);
										}
										if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
										{
											if (((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[0], Local_117[1 /*2*/], Local_117[1 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[0], Local_117[3 /*2*/], Local_117[3 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[0], Local_117[5 /*2*/], Local_117[5 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[0], Local_117[6 /*2*/], Local_117[6 /*2*/].f_1, 1))
											{
												if (!__LIB_0__::func_75(&uLocal_834))
												{
													__LIB_1__::func_283(&uLocal_834, 0);
												}
												if (__LIB_0__::func_264(&uLocal_834) > 1f)
												{
													__LIB_1__::func_148(&uLocal_834);
													TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], uLocal_798[1], 0, 0);
												}
											}
										}
										if (__LIB_2__::func_1(uLocal_798[0], 0, 1) && __LIB_0__::func_27(iLocal_402, 512))
										{
											if (__LIB_0__::func_163(uLocal_798[0], 242628503))
											{
												if (TASK::GET_SEQUENCE_PROGRESS(uLocal_798[0]) == 0)
												{
													if (!__LIB_0__::func_75(&uLocal_834))
													{
														__LIB_1__::func_283(&uLocal_834, 0);
													}
													if (__LIB_0__::func_264(&uLocal_834) > 1f)
													{
														__LIB_1__::func_148(&uLocal_834);
														TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], uLocal_798[1], 0, 0);
													}
												}
											}
											if (__LIB_0__::func_163(uLocal_798[0], 242628503) && ((TASK::GET_SEQUENCE_PROGRESS(uLocal_798[0]) >= 1 || __LIB_0__::func_94(uLocal_798[0], Local_28.f_3, 0) <= 3f) || __LIB_0__::func_94(uLocal_798[0], Local_28, 0) <= 3f))
											{
												PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
												TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], uLocal_798[1], 4, 384, -1082130432 /* Float: -1f */, -1, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_798[0], false);
												iLocal_861 = 1;
											}
											if (!__LIB_0__::func_27(iLocal_402, 4194304))
											{
												if (__LIB_2__::func_227(-4f, 1, uLocal_798[0], 0) && __LIB_0__::func_665(uLocal_798[0], Global_35, 1, 1) < 6f)
												{
													switch (__LIB_0__::func_12())
													{
														case 5:
															if (iLocal_365 == 0)
															{
																sVar5 = "PLAYER_STARING";
															}
															else
															{
																sVar5 = "PLAYER_STARING";
															}
															break;
														case 38:
															if (iLocal_365 == 0)
															{
																sVar5 = "BUMP";
															}
															else
															{
																sVar5 = "PLAYER_LOITERING";
															}
															break;
													}
													__LIB_2__::func_122(uLocal_798[0], sVar5, 291934926, Global_35, 1, 0, 0, 1);
													__LIB_1__::func_683(&iLocal_402, 4194304);
												}
											}
										}
										if (__LIB_2__::func_1(uLocal_798[1], 0, 0) && __LIB_0__::func_27(iLocal_402, 2))
										{
											PED::SET_PED_RESET_FLAG(uLocal_798[1], 290, true);
										}
										if (__LIB_2__::func_1(uLocal_798[1], 0, 1) && !__LIB_0__::func_27(iLocal_402, 2097152))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[14 /*2*/], Local_117[14 /*2*/].f_1, 1))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_150[0 /*12*/].f_8) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_798[1], Local_117[14 /*2*/], Local_117[14 /*2*/].f_1) >= 0.579f)
												{
													OBJECT::DELETE_OBJECT(&(Local_150[0 /*12*/].f_8));
												}
												if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_798[1], Local_117[14 /*2*/], Local_117[14 /*2*/].f_1) >= 0.885f || !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
												{
													__LIB_1__::func_683(&iLocal_402, 2097152);
													if (iLocal_365 == 0 && __LIB_0__::func_12() == 5)
													{
														__LIB_2__::func_478(uLocal_798[1], Global_35, func_192("REFLECT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
													}
													else
													{
														__LIB_2__::func_122(uLocal_798[1], "HELPED_RECENTLY", 291934926, Global_35, 1, 0, 0, 1);
													}
													__LIB_1__::func_283(&uLocal_843, 0);
												}
											}
										}
										if (__LIB_3__::func_332(Local_163.f_51, 1) > 45f)
										{
											Local_163.f_44 = 1;
											return true;
										}
										if (!__LIB_2__::func_1(uLocal_798[0], 0, 1) && !__LIB_2__::func_1(uLocal_798[1], 0, 1))
										{
											Local_163.f_44 = 1;
											return true;
										}
									}
									return false;
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

void func_78()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_357))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_357);
	}
}

void func_90()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			if (iLocal_365 == 0)
			{
				Local_52[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
				Local_52[0 /*32*/] = 22;
				Local_52[0 /*32*/].f_3 = 143972945;
				StringCopy(&(Local_52[0 /*32*/].f_23), "0911_A_M_M_Civ_Poor_White_AGGRESSIVE_11", 64);
				Local_52[1 /*32*/].f_1 = joaat("RE_DARKALLEYSTABBING_MALES_01");
				Local_52[1 /*32*/] = 4;
				Local_52[1 /*32*/].f_3 = 1892216320;
				StringCopy(&(Local_52[1 /*32*/].f_23), "0702_A_M_M_RhdUpperClass_01_WHITE_02", 64);
			}
			else if (iLocal_365 == 1)
			{
				Local_52[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
				Local_52[0 /*32*/] = 22;
				Local_52[0 /*32*/].f_3 = 451116782;
				StringCopy(&(Local_52[0 /*32*/].f_23), "0906_A_M_M_Civ_Poor_White_AGGRESSIVE_06", 64);
				Local_52[1 /*32*/].f_1 = joaat("RE_DARKALLEYSTABBING_MALES_01");
				Local_52[1 /*32*/] = 4;
				Local_52[1 /*32*/].f_3 = 34607264;
				StringCopy(&(Local_52[1 /*32*/].f_23), "0924_A_M_M_Civ_Poor_White_AVOID_07", 64);
			}
			break;
		case 38:
			if (iLocal_365 == 0)
			{
				Local_52[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
				Local_52[0 /*32*/] = 22;
				Local_52[0 /*32*/].f_3 = -838499372;
				StringCopy(&(Local_52[0 /*32*/].f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
				Local_52[1 /*32*/].f_1 = joaat("RE_DARKALLEYSTABBING_MALES_01");
				Local_52[1 /*32*/] = 4;
				Local_52[1 /*32*/].f_3 = 2107826708;
				StringCopy(&(Local_52[1 /*32*/].f_23), "0752_A_M_O_BlWUpperClass_01_WHITE_02", 64);
			}
			else if (iLocal_365 == 1)
			{
				Local_52[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
				Local_52[0 /*32*/] = 22;
				Local_52[0 /*32*/].f_3 = 1911671730;
				StringCopy(&(Local_52[0 /*32*/].f_23), "0753_A_M_M_BlWLaborer_01_WHITE_01", 64);
				Local_52[1 /*32*/].f_1 = joaat("RE_DARKALLEYSTABBING_MALES_01");
				Local_52[1 /*32*/] = 4;
				Local_52[1 /*32*/].f_3 = 159381960;
				StringCopy(&(Local_52[1 /*32*/].f_23), "0937_A_M_M_Civ_White_AVOID_07", 64);
			}
			break;
		default:
			break;
	}
	__LIB_3__::func_303(&(Local_52[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_52[1 /*32*/].f_22));
}

void func_91()
{
	__LIB_3__::func_445(&Local_52);
}

void func_92()
{
	Local_117[0 /*2*/] = "script_re@dark_alley_stab";
	Local_117[0 /*2*/].f_1 = "attacker_shot_vic";
	Local_117[1 /*2*/] = "script_re@dark_alley_stab";
	Local_117[1 /*2*/].f_1 = "intervene_exit_left_thug";
	Local_117[2 /*2*/] = "script_re@dark_alley_stab";
	Local_117[2 /*2*/].f_1 = "intervene_exit_left_vic";
	Local_117[3 /*2*/] = "script_re@dark_alley_stab";
	Local_117[3 /*2*/].f_1 = "intervene_exit_right_thug";
	Local_117[4 /*2*/] = "script_re@dark_alley_stab";
	Local_117[4 /*2*/].f_1 = "intervene_exit_right_vic";
	Local_117[5 /*2*/] = "script_re@dark_alley_stab";
	Local_117[5 /*2*/].f_1 = "victim_shot_exit_left_thug";
	Local_117[6 /*2*/] = "script_re@dark_alley_stab";
	Local_117[6 /*2*/].f_1 = "victim_shot_exit_right_thug";
	Local_117[7 /*2*/] = "script_re@dark_alley_stab";
	Local_117[7 /*2*/].f_1 = "thanks_merged_vic";
	Local_117[8 /*2*/] = "script_re@dark_alley_stab";
	Local_117[8 /*2*/].f_1 = "purse";
	Local_117[9 /*2*/] = "script_re@dark_alley_stab";
	Local_117[9 /*2*/].f_1 = "STRUGGLE_IDLE_THUG";
	Local_117[10 /*2*/] = "script_re@dark_alley_stab";
	Local_117[10 /*2*/].f_1 = "toss_vic";
	__LIB_3__::func_318(Local_117[0 /*2*/], &uLocal_406);
	Local_117[11 /*2*/] = "script_re@DARK_ALLEY_STAB@handover";
	Local_117[11 /*2*/].f_1 = "take_this_offer_victim";
	Local_117[12 /*2*/] = "script_re@DARK_ALLEY_STAB@handover";
	Local_117[12 /*2*/].f_1 = "offer_loop_victim";
	Local_117[13 /*2*/] = "script_re@DARK_ALLEY_STAB@handover";
	Local_117[13 /*2*/].f_1 = "will_you_take_offer_victim";
	Local_117[14 /*2*/] = "script_re@DARK_ALLEY_STAB@handover";
	Local_117[14 /*2*/].f_1 = "dont_take_offer_victim";
	Local_117[15 /*2*/] = "script_re@DARK_ALLEY_STAB@handover";
	Local_117[15 /*2*/].f_1 = "take_offer_player";
	__LIB_3__::func_318(Local_117[11 /*2*/], &uLocal_406);
}

void func_93()
{
	Local_150[0 /*12*/].f_7 = joaat("S_INV_COINPURSE01X");
}

bool func_98()
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_52[0 /*32*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_52[1 /*32*/].f_1))
	{
		return false;
	}
	return true;
}

void func_108()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			func_261();
			break;
		case 38:
			func_262();
			break;
	}
}

void func_176()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	if (!__LIB_0__::func_27(iLocal_402, 32768) && __LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], 191330232))
		{
			__LIB_1__::func_683(&iLocal_402, 32768);
			if (iLocal_15 == 0)
			{
				__LIB_2__::func_122(uLocal_798[1], "DEATH_LOW", 1744022339, Global_35, 1, 0, 0, 1);
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, uLocal_798[1], 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, uLocal_798[0], 17))
			{
				__LIB_3__::func_465(2, 0, 0, "RE_HONOR_WITNESSED_DEATH", uLocal_798[1], 0, 1065353216 /* Float: 1f */, 0);
			}
			else
			{
				__LIB_3__::func_465(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_798[1], 0, 1065353216 /* Float: 1f */, 0);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_402, 33554432) && __LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], 1621248316))
		{
			__LIB_1__::func_683(&iLocal_402, 33554432);
		}
	}
	if (__LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], -1739913107))
		{
			__LIB_0__::func_325(&(uLocal_801[1]));
			__LIB_1__::func_864(uLocal_798[1], 1, 0);
			__LIB_2__::func_360(&(Local_729[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], 1408655137))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_150[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_150[0 /*12*/].f_8));
			}
		}
	}
	if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], -1180236971))
		{
			TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], Global_35, 0, 0);
		}
		if (PED::IS_PED_FLEEING(uLocal_798[0]) || __LIB_0__::func_27(iLocal_402, 536870912))
		{
			if (__LIB_2__::func_1(uLocal_798[1], 0, 0))
			{
				if (!__LIB_0__::func_27(iLocal_402, 536870912))
				{
					if (!__LIB_0__::func_75(&uLocal_846))
					{
						__LIB_1__::func_283(&uLocal_846, 0);
					}
					if (__LIB_0__::func_264(&uLocal_846) > 0.5f)
					{
						if (ENTITY::IS_ENTITY_IN_AREA(uLocal_798[0], Global_36, ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false), false, true, 0))
						{
							vVar0 = { Local_28.f_3 };
							fVar3 = __LIB_0__::func_94(Global_35, Local_28, 1);
							if (fVar3 > __LIB_0__::func_94(Global_35, Local_28.f_3, 1))
							{
								vVar0 = { Local_28 };
							}
							TASK::CLEAR_PED_TASKS(uLocal_798[0], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 3f, 20000, 0.25f, 2049, 40000f);
							TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
							__LIB_1__::func_474(uLocal_798[0], &iLocal_804, 0, 0, 1, 1);
							__LIB_1__::func_683(&iLocal_402, 536870912);
							if (VOLUME::_DOES_VOLUME_EXIST(iLocal_812))
							{
								PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
								__LIB_0__::func_172(iLocal_812);
							}
						}
					}
					if (__LIB_0__::func_264(&uLocal_846) > 1.5f)
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_812))
						{
							PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
							__LIB_0__::func_172(iLocal_812);
						}
					}
				}
				else
				{
					fVar4 = __LIB_0__::func_665(uLocal_798[0], uLocal_798[1], 1, 1);
					if (fVar4 < 1f)
					{
						if (__LIB_3__::func_254(ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false), uLocal_798[0]))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(uLocal_798[0], 2f);
						}
					}
					if (fVar4 < 25f)
					{
						PED::SET_PED_RESET_FLAG(uLocal_798[0], 12, true);
					}
				}
			}
		}
	}
}

void func_177()
{
	if (__LIB_0__::func_27(iLocal_403, 1))
	{
		if (iLocal_856 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
			iLocal_856 = 1;
		}
		return;
	}
	if ((__LIB_0__::func_665(uLocal_798[1], Global_35, 1, 1) < 3f && __LIB_0__::func_665(uLocal_798[1], uLocal_798[0], 1, 1) > 2f) && __LIB_0__::func_665(Global_35, uLocal_798[0], 1, 1) > 2f)
	{
		if (iLocal_856 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
			iLocal_856 = 0;
		}
	}
	else if (iLocal_856 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
		iLocal_856 = 1;
	}
}

void func_178()
{
	if (!__LIB_0__::func_75(&uLocal_837))
	{
		if (__LIB_2__::func_901(uLocal_798[0], Global_35))
		{
			if (!__LIB_0__::func_75(&uLocal_837))
			{
				__LIB_1__::func_283(&uLocal_837, 0);
			}
			else
			{
				__LIB_1__::func_148(&uLocal_837);
			}
		}
	}
}

void func_179()
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	int iVar16;
	if (iLocal_859 == 0)
	{
		if (__LIB_1__::func_489(&(Local_651[0 /*21*/]), 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ROB"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
		}
	}
	if ((!__LIB_0__::func_27(iLocal_402, 2) && !__LIB_0__::func_27(iLocal_402, 8)) && __LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		if (__LIB_0__::func_27(iLocal_404, 16) && !__LIB_0__::func_27(iLocal_404, 64))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]))
			{
				__LIB_1__::func_683(&iLocal_404, 64);
				if (iLocal_15 == 0)
				{
					if (iLocal_365 == 0)
					{
						__LIB_2__::func_478(uLocal_798[1], Global_35, "HELPED_RECENTLY", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_798[1], Global_35, "RESPONSE_B", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_365 == 0)
				{
					__LIB_2__::func_478(uLocal_798[1], Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_798[1], Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_404, 32) && !__LIB_0__::func_27(iLocal_404, 128))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]))
			{
				__LIB_1__::func_683(&iLocal_404, 128);
				if (iLocal_15 == 0)
				{
					if (iLocal_365 == 0)
					{
						__LIB_2__::func_478(uLocal_798[1], Global_35, "GENERIC_CURSE_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_798[1], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_365 == 0)
				{
					__LIB_2__::func_478(uLocal_798[1], Global_35, "RESPONSE_IDLING", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_798[1], Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	if (iLocal_431 == 2 && iLocal_859 == 0)
	{
		fVar0 = (Global_36.f_2 - (Local_163.f_51.f_2 + 1f));
		fVar0 = MISC::ABSF(fVar0);
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false) };
		vVar5 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
		vVar8 = { __LIB_4__::func_147(vVar5, vVar2) };
		fVar1 = (fVar1 / 2f);
		VOLUME::_SET_VOLUME_COORDS(iLocal_813, vVar8);
		VOLUME::_SET_VOLUME_SCALE(iLocal_813, fVar1, fVar1, 5f);
		iVar11 = 0;
		iVar12 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar12))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iVar12, iLocal_813, true, 0))
			{
				iVar11 = 1;
			}
		}
		if ((((((PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || __LIB_0__::func_665(uLocal_798[1], Global_35, 1, 1) > 5f) || fVar0 >= 1f) || iVar11 == 1) || PED::IS_PED_IN_COVER(Global_35, false, true)) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_798[1], Global_35, 17))
		{
			if (iLocal_866 == 0)
			{
				iLocal_866 = 1;
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
			}
		}
		else if (iLocal_866 == 1)
		{
			iLocal_866 = 0;
			__LIB_2__::func_411(&(Local_694[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_694[1 /*17*/]), 1, 0);
		}
	}
	iVar16 = -1;
	iVar16 = func_355(&(uLocal_798[1]), &(Local_651[0 /*21*/]), 25f, &Local_694, &(Local_163.f_192), 0f, 1, 0, 0, func_354(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar16 == 0)
	{
		switch (iLocal_431)
		{
			case 0:
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[0], 100);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[1], 100);
				__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("ILO_SHOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_283(&uLocal_828, 0);
				__LIB_1__::func_148(&uLocal_822);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				break;
			case 1:
				__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("YOU_OK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				break;
			case 2:
				iLocal_431 = 3;
				vVar13 = { ENTITY::GET_ENTITY_COORDS(uLocal_798[1], true, false) };
				if (!__LIB_0__::func_86(vVar13))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_357.f_3, vVar13.x, vVar13.y, (vVar13.z - 1f), ENTITY::GET_ENTITY_ROTATION(uLocal_798[1], 2), 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_357.f_3, "player", Global_35, 0);
				}
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
				iLocal_857 = 1;
				iLocal_859 = 1;
				func_355(&(uLocal_798[1]), &(Local_651[0 /*21*/]), 25f, &Local_694, &(Local_163.f_192), 0f, 1, 0, 0, func_354(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_357.f_3, "player", &Local_16, true, 0, 2))
				{
					func_356();
					iLocal_647 = 12;
					__LIB_2__::func_111(&(Local_163.f_5), 0);
					__LIB_2__::func_478(Global_35, uLocal_798[1], func_192("PLY_THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_857 = 1;
				func_37();
				break;
			case 3:
				__LIB_2__::func_478(Global_35, uLocal_798[1], func_192("ILO_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				__LIB_1__::func_683(&iLocal_404, 16);
				break;
		}
	}
	else if (iVar16 == 1)
	{
		switch (iLocal_431)
		{
			case 0:
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[0], 100);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[1], 100);
				__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("ILO_SHOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_283(&uLocal_828, 0);
				__LIB_1__::func_148(&uLocal_822);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				break;
			case 1:
				__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("YOU_OK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				break;
			case 2:
				iLocal_431 = 3;
				__LIB_3__::func_465(10, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_798[1], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_478(Global_35, uLocal_798[1], func_192("PLY_KEEP_IT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_198();
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_117[14 /*2*/], Local_117[14 /*2*/].f_1, Global_35, 4433, 4f, -4f, 24, 0f, false, false, -1f, 0, 0, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_871, 12, 524544, 100f, -1, 0);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_804);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_798[1], iLocal_804);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
				PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
				iLocal_647 = 14;
				iLocal_859 = 1;
				__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
				iLocal_857 = 1;
				func_355(&(uLocal_798[1]), &(Local_651[0 /*21*/]), 25f, &Local_694, &(Local_163.f_192), 0f, 1, 0, 0, func_354(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
				__LIB_2__::func_360(&(Local_694[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_694[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
				__LIB_3__::func_621(&(Local_694[0 /*17*/]), 0, 0);
				break;
			case 3:
				__LIB_2__::func_478(Global_35, uLocal_798[1], func_192("ILO_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_694[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
				__LIB_1__::func_683(&iLocal_404, 32);
				break;
		}
	}
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1) || PED::_IS_PED_LASSOED(uLocal_798[0])) || PED::_IS_PED_HOGTIED(uLocal_798[0]))
	{
		if (iLocal_864 == 1)
		{
			__LIB_2__::func_480(&Local_729, 0, 0, 1, 0);
			__LIB_2__::func_593(&(Local_651[1 /*21*/]), &Local_729);
			__LIB_2__::func_451(&(Local_651[1 /*21*/]), 0);
			iLocal_864 = 0;
		}
		return;
	}
	iVar16 = -1;
	iVar16 = func_355(&(uLocal_798[0]), &(Local_651[1 /*21*/]), 25f, &Local_729, &(Local_163.f_192), 0f, 1, 0, 0, func_359(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar16 == 0)
	{
		if (__LIB_2__::func_1(uLocal_798[1], 0, 1) && iLocal_860 == 0)
		{
			__LIB_2__::func_504(uLocal_798[0], 100);
			__LIB_2__::func_504(uLocal_798[1], 100);
			__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("ILO_SHOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_283(&uLocal_828, 0);
			__LIB_1__::func_148(&uLocal_822);
			__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_729[1 /*17*/]), 0, 0);
		}
		else
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[1], 100);
			__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("THUG_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_729[1 /*17*/]), 0, 0);
		}
	}
	else if (iVar16 == 1)
	{
		if (__LIB_2__::func_1(uLocal_798[1], 0, 1) && iLocal_860 == 0)
		{
			__LIB_2__::func_504(uLocal_798[0], 100);
			__LIB_2__::func_504(uLocal_798[1], 100);
			__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("ILO_SHOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_283(&uLocal_828, 0);
			__LIB_1__::func_148(&uLocal_822);
			__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_729[1 /*17*/]), 0, 0);
		}
		else
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_798[1], 100);
			__LIB_2__::func_478(Global_35, uLocal_798[0], func_192("THUG_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_2__::func_411(&(Local_729[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_729[1 /*17*/]), 0, 0);
		}
	}
}

void func_181()
{
	if (__LIB_3__::func_332(Local_163.f_51, 1) < fLocal_854)
	{
		switch (iLocal_816)
		{
			case 0:
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_798[1], Global_35, func_192("CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_1__::func_283(&uLocal_822, 0);
					func_360(0);
					iLocal_816++;
					fLocal_854 = 35f;
				}
				break;
			case 1:
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[0])) && __LIB_0__::func_264(&uLocal_822) > 1f)
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_798[0], uLocal_798[1], func_192("GIVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_822);
					func_360(1);
					iLocal_816++;
				}
				break;
			case 2:
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[0])) && __LIB_0__::func_264(&uLocal_822) > 4.5f)
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_798[1], uLocal_798[0], func_192("HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_822);
					func_360(0);
					iLocal_816++;
				}
				break;
			case 3:
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[0])) && __LIB_0__::func_264(&uLocal_822) > 3f)
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_798[0], uLocal_798[1], func_192("LAST_CHANCE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_822);
					func_360(1);
					iLocal_816++;
				}
				break;
			case 4:
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[0])) && __LIB_0__::func_264(&uLocal_822) > 6f)
				{
					__LIB_2__::func_122(uLocal_798[1], "GENERIC_FRIGHTENED_HIGH", 1744022339, Global_35, 1, 0, 0, 1);
					func_360(0);
					__LIB_1__::func_148(&uLocal_822);
					iLocal_816++;
				}
				break;
			case 5:
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[0])) && __LIB_0__::func_264(&uLocal_822) > 4f)
				{
					__LIB_2__::func_122(uLocal_798[1], "SCREAM_TERROR", 1744022339, Global_35, 1, 0, 0, 1);
					func_360(0);
					__LIB_1__::func_148(&uLocal_822);
					iLocal_816++;
				}
				break;
			case 6:
				break;
		}
	}
}

void func_186()
{
	if (!__LIB_0__::func_27(iLocal_404, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], -655336827))
		{
			__LIB_1__::func_683(&iLocal_404, 1);
		}
	}
	if (!__LIB_0__::func_27(iLocal_404, 2))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], 284223852))
		{
			__LIB_1__::func_683(&iLocal_404, 2);
		}
	}
}

void func_188()
{
	if ((!__LIB_0__::func_27(iLocal_402, 524288) && !__LIB_0__::func_27(iLocal_402, 32768)) && __LIB_2__::func_1(uLocal_798[1], 0, 1))
	{
		__LIB_3__::func_465(13, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_798[1], 0, 1065353216 /* Float: 1f */, 0);
		__LIB_1__::func_683(&iLocal_402, 524288);
		__LIB_3__::func_615(uLocal_798[1], 4);
	}
}

bool func_190()
{
	if (!__LIB_0__::func_27(iLocal_404, 4))
	{
		if (fLocal_853 > 0.59f)
		{
			__LIB_1__::func_683(&iLocal_404, 4);
		}
	}
	if (__LIB_2__::func_1(uLocal_798[0], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], -815191907))
	{
		WEAPON::_0xC6A6789BB405D11C(uLocal_798[0], 1);
	}
	if (!__LIB_0__::func_27(iLocal_404, 8))
	{
		if (fLocal_853 > 0.865f)
		{
			__LIB_1__::func_683(&iLocal_404, 8);
			TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], uLocal_798[1], 0, 0);
			TASK::_0x2E1D6D87346BB7D2(uLocal_798[1], uLocal_798[0], 0, 0);
		}
	}
	if (!__LIB_0__::func_27(iLocal_402, 512))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_798[0], Local_357) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], joaat("ENDSINRUN")))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
			TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], uLocal_798[1], 0, 0);
			if (__LIB_0__::func_27(iLocal_402, 16))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28, 2f, 20000, 0.25f, 1, 40000f);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_3, 2f, 20000, 0.25f, 1, 40000f);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, uLocal_798[1], 4, 384, -1082130432 /* Float: -1f */, -1, 0);
			iLocal_861 = 1;
			__LIB_1__::func_474(uLocal_798[0], &iLocal_804, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(uLocal_798[0], true);
			__LIB_1__::func_683(&iLocal_402, 512);
		}
	}
	if (__LIB_0__::func_163(uLocal_798[0], 242628503) && TASK::GET_SEQUENCE_PROGRESS(uLocal_798[0]) >= 1)
	{
		PED::FORCE_PED_MOTION_STATE(uLocal_798[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[0], uLocal_798[1], 4, 384, -1082130432 /* Float: -1f */, -1, 0);
	}
	if (!__LIB_0__::func_27(iLocal_402, 1024))
	{
		if (!__LIB_0__::func_27(iLocal_402, 268435456))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[0], -533064935) || __LIB_3__::func_891(Local_357) >= 0.8291f)
			{
				__LIB_1__::func_683(&iLocal_402, 268435456);
				TASK::_0x2E1D6D87346BB7D2(uLocal_798[1], uLocal_798[0], 0, 0);
			}
		}
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_798[0], Local_357) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_798[1], joaat("ENDSINRUN")))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_798[1], joaat("MOTIONSTATE_RUN"), false, 0, false);
			func_198();
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_804);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_804);
			TASK::_0x2E1D6D87346BB7D2(uLocal_798[1], uLocal_798[0], 0, 0);
			if (__LIB_0__::func_27(iLocal_402, 16))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28.f_3, 3f, 20000, 0.25f, 2049, 40000f);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_28, 3f, 20000, 0.25f, 2049, 40000f);
			}
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vLocal_871, 4, 524544, 150f, -1, 0);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			__LIB_1__::func_474(uLocal_798[1], &iLocal_804, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
			func_57();
			__LIB_2__::func_51(&(Local_163.f_5), 1);
			__LIB_2__::func_526(&Local_694, 0, 0);
			if (__LIB_0__::func_27(iLocal_402, 16))
			{
			}
			__LIB_1__::func_683(&iLocal_402, 1024);
		}
	}
	if (__LIB_0__::func_27(iLocal_402, 512) && __LIB_0__::func_27(iLocal_402, 1024))
	{
		TASK::_0x2E1D6D87346BB7D2(uLocal_798[0], uLocal_798[1], 0, 0);
		WEAPON::_0xC6A6789BB405D11C(uLocal_798[0], 1);
		__LIB_3__::func_608(uLocal_798[1]);
		return true;
	}
	return false;
}

void func_191(int iParam0)
{
	if (__LIB_2__::func_1(uLocal_798[0], 0, 1) && !__LIB_0__::func_27(iLocal_404, 256))
	{
		if (((__LIB_0__::func_27(iLocal_402, 128) || __LIB_0__::func_264(&uLocal_828) > 1f) && !__LIB_0__::func_27(iLocal_404, 1)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[0], Global_35, 1, 1))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || iParam0 == 1)
			{
				if (__LIB_0__::func_12() == 5)
				{
					if (iLocal_365 == 0)
					{
						__LIB_2__::func_504(uLocal_798[0], 0);
						__LIB_2__::func_478(uLocal_798[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_504(uLocal_798[0], 0);
						__LIB_2__::func_478(uLocal_798[0], Global_35, func_192("GET_BACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_0__::func_12() == 38)
				{
					if (iLocal_365 == 0)
					{
						__LIB_2__::func_504(uLocal_798[0], 0);
						__LIB_2__::func_478(uLocal_798[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_504(uLocal_798[0], 0);
						__LIB_2__::func_478(uLocal_798[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_683(&iLocal_404, 256);
			}
		}
	}
}

char* func_192(char* sParam0)
{
	int iVar0;
	if (iLocal_365 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_365 == 1)
	{
		iVar0 = 2;
	}
	switch (__LIB_1__::func_898())
	{
		case 0:
			return __LIB_3__::func_394("DAS", "NBX", sParam0, iVar0);
		case 4:
			return __LIB_3__::func_394("DAS", "BLW", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

void func_194(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	if ((__LIB_2__::func_1(uLocal_798[1], 0, 1) && __LIB_2__::func_118(uLocal_798[1], 1, 1) < 10f) && iLocal_647 != 14)
	{
		Local_366.f_3 = iParam0;
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_798[1], &Local_366);
	}
}

void func_195()
{
	if (__LIB_0__::func_27(iLocal_402, 2))
	{
		return;
	}
	if (PED::_IS_PED_LASSOED(uLocal_798[1]))
	{
	}
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_798[1], Global_35, 1, 1) || PED::_IS_PED_LASSOED(uLocal_798[1])) || PED::_IS_PED_HOGTIED(uLocal_798[1]))
	{
		if (__LIB_2__::func_1(uLocal_798[1], 0, 1) && !__LIB_0__::func_27(iLocal_402, 32768))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_798[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_812);
			__LIB_2__::func_526(&Local_694, 0, 0);
			iLocal_857 = 1;
			iLocal_859 = 1;
			if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
			{
				TASK::_0x3923EC958249657D(uLocal_798[1], uLocal_798[0], -1082130432 /* Float: -1f */);
			}
		}
		func_57();
		TASK::CLEAR_PED_SECONDARY_TASK(uLocal_798[1]);
		PED::SET_PED_KEEP_TASK(uLocal_798[1], true);
		__LIB_0__::func_325(&(uLocal_801[1]));
		iLocal_647 = 7;
		__LIB_1__::func_681(&iLocal_402, 4);
		__LIB_1__::func_683(&iLocal_402, 2);
	}
}

void func_196()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1, 1))
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_798[1], Local_117[0 /*2*/], Local_117[0 /*2*/].f_1, 0.65f);
		if (!__LIB_0__::func_75(&uLocal_849))
		{
			__LIB_1__::func_283(&uLocal_849, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[2 /*2*/], Local_117[2 /*2*/].f_1, 1))
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_798[1], Local_117[2 /*2*/], Local_117[2 /*2*/].f_1, 0.65f);
		if (!__LIB_0__::func_75(&uLocal_849))
		{
			__LIB_1__::func_283(&uLocal_849, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_798[1], Local_117[4 /*2*/], Local_117[4 /*2*/].f_1, 1))
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_798[1], Local_117[4 /*2*/], Local_117[4 /*2*/].f_1, 0.65f);
		if (!__LIB_0__::func_75(&uLocal_849))
		{
			__LIB_1__::func_283(&uLocal_849, 0);
		}
	}
	if (!__LIB_0__::func_27(iLocal_402, 1073741824 /* Float: 2f */))
	{
		if (((__LIB_0__::func_264(&uLocal_849) > 3f && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[1])) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_798[0]))
		{
			__LIB_1__::func_683(&iLocal_402, 1073741824 /* Float: 2f */);
			__LIB_2__::func_122(uLocal_798[1], "COWER", 291934926, 0, 1, 0, 0, 1);
		}
	}
}

void func_197()
{
	__LIB_3__::func_157(&(Local_694[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_694[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_451(&(Local_651[0 /*21*/]), 0);
	__LIB_2__::func_411(&(Local_694[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_694[1 /*17*/]), 0, 0);
}

void func_198()
{
	if (__LIB_0__::func_86(vLocal_871))
	{
		if (__LIB_2__::func_1(uLocal_798[0], 0, 1))
		{
			vLocal_871 = { ENTITY::GET_ENTITY_COORDS(uLocal_798[0], false, false) };
		}
		if (__LIB_0__::func_86(vLocal_871))
		{
			vLocal_871 = { Local_163.f_51 };
		}
	}
}

void func_199(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	if ((__LIB_2__::func_1(uLocal_798[0], 0, 1) && __LIB_2__::func_118(uLocal_798[0], 1, 1) < 10f) && PED::IS_PED_FACING_PED(uLocal_798[0], Global_35, 15f))
	{
		Local_366.f_3 = iParam0;
		Local_391.f_4 = iParam0;
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_798[0], &Local_366);
		_NAMESPACE29::_0x0B9F7A01EC50448D(uLocal_798[0], &Local_391);
	}
}

void func_261()
{
	switch (Local_163.f_51.f_4)
	{
		case 0:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2669.041f, -1181.373f, 52.13864f };
			Local_28.f_3 = { 2685.335f, -1181.897f, 51.96281f };
			Local_28.f_6 = { 2675.32f, -1180.95f, 52.0954f };
			Local_28.f_9 = { 0f, 0f, 0f };
			Local_28.f_12 = { 25.688f, 20.971f, 7.383f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 1:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2642.664f, -1242.414f, 52.22538f };
			Local_28.f_3 = { 2642.813f, -1217.992f, 52.33041f };
			Local_28.f_6 = { 2643.548f, -1229.305f, 52.2161f };
			Local_28.f_9 = { 0f, 0f, -0.03921f };
			Local_28.f_12 = { 2.995f, 29.144f, 16.3328f };
			Local_28.f_15 = { 2642.136f, -1229.305f, 52.2161f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2833.657f, -1182.676f, 45.93254f };
			Local_28.f_3 = { 2835.152f, -1203.162f, 46.64587f };
			Local_28.f_6 = { 2835.006f, -1190.365f, 46.598f };
			Local_28.f_9 = { 0f, 0f, 179.209f };
			Local_28.f_12 = { 35.42331f, 37.92102f, 15.9483f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 3:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2774.266f, -1129.268f, 46.49832f };
			Local_28.f_3 = { 2773.421f, -1105.478f, 46.31316f };
			Local_28.f_6 = { 2782.397f, -1123.584f, 47.65691f };
			Local_28.f_9 = { 0f, 0f, -79.87067f };
			Local_28.f_12 = { 28.94299f, 47.90044f, 8.896154f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 4:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2538.084f, -1405.84f, 45.16802f };
			Local_28.f_3 = { 2505.285f, -1405.871f, 45.16895f };
			Local_28.f_6 = { 2523.754f, -1395.681f, 47.94202f };
			Local_28.f_9 = { 0f, 0f, 90.33828f };
			Local_28.f_12 = { 52.35681f, 30.19019f, 12.04963f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 5:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2740.03f, -1313.92f, 46.62f };
			Local_28.f_3 = { 2729.94f, -1328.56f, 46.56f };
			Local_28.f_6 = { 2735.679f, -1320.648f, 48.446f };
			Local_28.f_9 = { 0f, 0f, -40.695f };
			Local_28.f_12 = { 5.178f, 13.272f, 3.866f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 6:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2671.384f, -1349.791f, 47.67f };
			Local_28.f_3 = { 2692.911f, -1331.065f, 47.9008f };
			Local_28.f_6 = { 2678.266f, -1341.816f, 47.7528f };
			Local_28.f_9 = { 0f, 0f, -40.695f };
			Local_28.f_12 = { 50.178f, 50.272f, 5.866f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
		case 7:
			__LIB_1__::func_683(&iLocal_402, 16);
			Local_28 = { 2644.501f, -1396.096f, 45.2794f };
			Local_28.f_3 = { 2658.51f, -1428.246f, 45.2611f };
			Local_28.f_6 = { 2651.291f, -1410.081f, 45.3449f };
			Local_28.f_9 = { 0f, 0f, -40.695f };
			Local_28.f_12 = { 5.178f, 13.272f, 3.866f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { 0f, 0f, 0f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
	}
	__LIB_3__::func_626(&(Local_52[0 /*32*/].f_22));
	__LIB_3__::func_626(&(Local_52[1 /*32*/].f_22));
}

void func_262()
{
	switch (Local_163.f_51.f_4)
	{
		case 0:
			Local_28 = { -807.5154f, -1309.439f, 42.65405f };
			Local_28.f_3 = { -823.912f, -1308.613f, 42.57822f };
			Local_28.f_6 = { -815.067f, -1309.481f, 42.671f };
			Local_28.f_9 = { 0f, 0f, 0f };
			Local_28.f_12 = { 8.763f, 2.772f, 5f };
			Local_28.f_15 = { 0f, 0f, 0f };
			Local_28.f_18 = { -804.3803f, -1307.097f, 43.50461f };
			Local_28.f_21 = { 0f, 0f, 0f };
			break;
	}
	__LIB_3__::func_626(&(Local_52[0 /*32*/].f_22));
	__LIB_3__::func_626(&(Local_52[1 /*32*/].f_22));
}

int func_354()
{
	if (iLocal_857 == 1)
	{
		if (iLocal_431 == 0)
		{
			return __LIB_2__::func_340(1, 0, 0) | 64;
		}
		else
		{
			return 330;
		}
	}
	return 346;
}

int func_355(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_516(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_356()
{
	__LIB_3__::func_623(&Local_765);
	Local_765.f_1 = Global_35;
	Local_765.f_8 = { Local_16 };
	Local_765.f_19 = Local_16.f_3.f_2;
	Local_765.f_18 = 0f;
	__LIB_1__::func_336(&(Local_765.f_23), 1024);
	__LIB_1__::func_336(&(Local_765.f_23), 1);
}

int func_359()
{
	return __LIB_2__::func_340(1, 0, 0) | 64 | 256;
}

void func_360(int iParam0)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	float fVar13;
	if (iParam0 == 1)
	{
		__LIB_2__::func_315(249295937, uLocal_798[0], 1);
	}
	else
	{
		__LIB_2__::func_315(1891783641, uLocal_798[1], 1);
	}
	iLocal_818 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), uLocal_798[0], 3f, -1f, 10f, -1f, -1f, 180f, false, true, -1, -1);
	if (iLocal_819 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_819);
	}
	iLocal_819 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"), uLocal_798[1], 5f, 40f, 40f, -1f, -1f, 180f, false, false, -1, -1);
	fVar13 = 40f;
	if (iParam0 == 1)
	{
		fVar13 = 30f;
	}
	if (Local_163.f_51.f_4 == 1 || (Local_163.f_51.f_4 == 0 && iLocal_15 == 4))
	{
		func_523(uLocal_805, fVar13);
		func_523(uLocal_806, fVar13);
	}
	else
	{
		iVar11 = PED::GET_PED_NEARBY_PEDS(uLocal_798[1], &uVar0, -1, -1);
		if (iVar11 > 0)
		{
			iVar12 = 0;
			while (iVar12 < 10)
			{
				if ((__LIB_2__::func_1(uVar0[iVar12], 0, 1) && PED::IS_PED_HUMAN(uVar0[iVar12])) && !__LIB_3__::func_291(uVar0[iVar12], 1))
				{
					if ((uVar0[iVar12] != Global_35 && uVar0[iVar12] != uLocal_798[1]) && uVar0[iVar12] != uLocal_798[0])
					{
						if (__LIB_0__::func_665(uVar0[iVar12], uLocal_798[1], 1, 1) <= fVar13)
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uVar0[iVar12], uLocal_798[0], 2, 0, -1082130432 /* Float: -1f */, -1, 0);
						}
					}
				}
				iVar12++;
			}
		}
	}
}

int func_516(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_516(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_523(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x886171A12F400B89(uParam0, iVar0, 1);
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar3))
				{
					if ((__LIB_2__::func_1(iVar4, 0, 1) && PED::IS_PED_HUMAN(iVar4)) && !__LIB_3__::func_291(iVar4, 1))
					{
						if ((iVar4 != Global_35 && iVar4 != uLocal_798[1]) && iVar4 != uLocal_798[0])
						{
							if (__LIB_0__::func_665(iVar4, uLocal_798[1], 1, 1) <= fParam1)
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(iVar4, uLocal_798[0], 2, 0, -1082130432 /* Float: -1f */, -1, 0);
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

