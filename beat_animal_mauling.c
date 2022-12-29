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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17[12] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<6> Local_30 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	char* sLocal_39[30] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_70 = 0;
	var uLocal_71 = -1;
	var uLocal_72 = 0;
	var uLocal_73 = -1;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = -1;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 1073741824;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 1;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<17> Local_91[3];
	var uLocal_143 = 0;
	int iLocal_144 = 0;
	struct<194> Local_145 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_339 = { 0, 3 } ;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 41788943;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 1;
	var uLocal_355 = 1;
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
	var uLocal_372 = 623901053;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 41788943;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 1;
	var uLocal_387 = 1;
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
	var uLocal_404 = 623901053;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 41788943;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 1;
	var uLocal_419 = 1;
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
	var uLocal_436 = 623901053;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = -1;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 2;
	var uLocal_446 = 1;
	var uLocal_447 = 1;
	var uLocal_448 = 1;
	var uLocal_449 = 0;
	var uLocal_450 = 1;
	var uLocal_451 = 2;
	var uLocal_452 = 2;
	var uLocal_453 = 3;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 3;
	var uLocal_457 = 1;
	var uLocal_458 = 3;
	var uLocal_459 = 3;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 1112014848;
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
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
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
	var uLocal_535 = 9;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 1;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 24;
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
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
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
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = -1082130432;
	var uLocal_647 = -1082130432;
	var uLocal_648 = 1103626240;
	var uLocal_649 = -1067450368;
	var uLocal_650 = 1097859072;
	var uLocal_651 = 1073741824;
	var uLocal_652 = 4000;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 1073741824;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	bool bLocal_680 = false;
	bool bLocal_681 = false;
	bool bLocal_682 = false;
	bool bLocal_683 = false;
	bool bLocal_684 = false;
	bool bLocal_685 = false;
	bool bLocal_686 = false;
	int iLocal_687 = 0;
	bool bLocal_688 = false;
	bool bLocal_689 = false;
	bool bLocal_690 = false;
	bool bLocal_691 = false;
	bool bLocal_692 = false;
	var uLocal_693[3] = { 0, 0, 0 };
	var uLocal_697[3] = { 0, 0, 0 };
	int iLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	int iLocal_708[2] = { 0, 0 };
	bool bLocal_711 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "SCRIPT_RE@ANIMAL_MAULING";
	sLocal_15 = "SCRIPT_RE@ANIMAL_MAULING@DEAD_HORSE";
	sLocal_16 = "DEAD_VERT_HORSE";
	Local_145.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_145.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(1);
	}
	__LIB_3__::func_368(&Local_145, 1);
	__LIB_3__::func_302(&(Local_145.f_5), 0);
	__LIB_2__::func_50(&(Local_145.f_5), 1);
	__LIB_2__::func_507(&(Local_145.f_5), 2000);
	func_8();
	func_9(&uLocal_462);
	while (true)
	{
		switch (iLocal_678)
		{
			case 0:
				if (func_10())
				{
					iLocal_678 = 1;
				}
				break;
			case 1:
				if (__LIB_3__::func_669(&Local_145, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_12(&Local_145, &iLocal_144, &(Local_145.f_51.f_4));
					if (iLocal_144 == 1)
					{
						iVar0 = __LIB_0__::func_120(882);
						if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_2__::func_963(882)))
							{
								__LIB_3__::func_229(882);
								PERSCHAR::_0xFCC6DB8DBE709BC8(iVar0);
							}
						}
					}
					func_16(Local_145, &Local_339);
					iLocal_678 = 3;
				}
				else if (Local_145.f_160)
				{
					func_3(0);
				}
				break;
			case 3:
				if (func_17(&Local_339, &uLocal_693))
				{
					func_18();
					func_19();
					iLocal_678 = 4;
				}
				break;
			case 4:
				func_20();
				if (!__LIB_3__::func_466(&Local_145, &uLocal_693, 0, 0, 0, 0, 1, 0))
				{
					func_3(0);
				}
				if ((!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]) && iLocal_677 >= 2) && iLocal_677 < 5)
				{
					if (PED::IS_PED_RAGDOLL(uLocal_693[0]))
					{
						func_22(0);
						__LIB_1__::func_864(uLocal_693[0], 0, 0);
						__LIB_1__::func_715(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
						iLocal_677 = 9;
					}
				}
				if (func_25() || __LIB_17__::func_836(&Local_145, &uLocal_693, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Local_145.f_50 = 1;
					func_3(1);
				}
				func_27();
				break;
		}
		BUILTIN::WAIT(Local_145.f_158);
	}
}

void func_3(bool bParam0)
{
	int iVar0;
	if (Local_145.f_48 && !Local_145.f_44)
	{
		Local_145.f_45 = iLocal_687;
	}
	if (bParam0 && !bLocal_681)
	{
		__LIB_1__::func_864(uLocal_693[0], 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[1]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_693[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_30))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_30);
	}
	if (iLocal_144 == 1)
	{
		iVar0 = __LIB_0__::func_120(882);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	if (bLocal_692)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
	}
	if (((Local_145.f_48 && !bLocal_690) && !bLocal_681) && !bLocal_688)
	{
		__LIB_1__::func_715(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	func_28();
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[1]))
	{
		func_22(0);
		__LIB_2__::func_788(&(uLocal_693[1]), 1, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
	{
		__LIB_2__::func_788(&(uLocal_693[0]), 1, bLocal_681, 1);
	}
	__LIB_3__::func_709(&Local_145, &uLocal_693, &uLocal_697, 0, iLocal_144, Local_145.f_51.f_4, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8()
{
	switch (__LIB_3__::func_283())
	{
		case 0:
			sLocal_39[0] = "PANIC_HELP";
			sLocal_39[1] = "RE_AM_MTN_V1_GETAWAY";
			sLocal_39[2] = "RE_AM_MTN_V1_HURTSSOBAD";
			sLocal_39[3] = "RE_AM_MTN_V1_HELP";
			sLocal_39[4] = "RE_AM_MTN_V1_SOMEONE";
			sLocal_39[5] = "RE_AM_MTN_V1_BEGGING";
			sLocal_39[6] = "RE_AM_MTN_V1_MISERY";
			sLocal_39[7] = "RE_AM_MTN_V1_KILLME";
			sLocal_39[8] = "RE_AM_MTN_V1_BOTTLE";
			sLocal_39[9] = "RE_AM_MTN_V1_DOIT";
			sLocal_39[10] = "RE_AM_MTN_V1_TOOMUCH";
			sLocal_39[11] = "RE_AM_MTN_V1_TAKEANYMORE";
			sLocal_39[12] = "RE_AM_MTN_V1_JUSTSHOOT";
			sLocal_39[13] = "RE_AM_MTN_V1_SONOFABITCH";
			sLocal_39[14] = "RE_AM_MTN_V1_SWIGOFTHIS";
			sLocal_39[15] = "RE_AM_MTN_V1_GIVE_MEDICINE";
			sLocal_39[16] = "RE_AM_MTN_V1_LOOKATME";
			sLocal_39[17] = "RE_AM_MTN_V1_NOHEALING";
			sLocal_39[18] = "RE_AM_MTN_V1_TOOMUCH_W";
			sLocal_39[19] = "RE_AM_MTN_V1_LIGHTHEADED";
			sLocal_39[20] = "RE_AM_MTN_V1_SLIPPING";
			sLocal_39[21] = "RE_AM_MTN_V1_THANKS";
			sLocal_39[22] = "RE_AM_MTN_V1_SAFE";
			sLocal_39[23] = "RE_AM_MTN_V1_WHATTHEHELL";
			sLocal_39[24] = "RE_AM_MTN_V1_MAKINGITWORSE";
			sLocal_39[25] = "RE_AM_MTN_V1_AIM_INVALID";
			sLocal_39[26] = "RE_AM_MTN_V1_AIM_NOTMESSY";
			sLocal_39[27] = "RE_AM_MTN_V1_AIM_MESSY";
			sLocal_39[28] = "RE_AM_MTN_V1_REACTION";
			sLocal_39[29] = "GET_AWAY_FROM_ME";
			break;
		case 2:
			sLocal_39[0] = "RE_AM_FTH_V1_HELP";
			sLocal_39[1] = "RE_AM_FTH_V1_GETAWAY";
			sLocal_39[2] = "RE_AM_FTH_V1_HURTSSOBAD";
			sLocal_39[3] = "RE_AM_FTH_V1_SOMEONE";
			sLocal_39[4] = "PANIC_HELP";
			sLocal_39[5] = "RE_AM_FTH_V1_BEGGING";
			sLocal_39[6] = "RE_AM_FTH_V1_MISERY";
			sLocal_39[7] = "RE_AM_FTH_V1_KILLME";
			sLocal_39[8] = "RE_AM_FTH_V1_BOTTLE";
			sLocal_39[9] = "RE_AM_FTH_V1_DOIT";
			sLocal_39[10] = "RE_AM_FTH_V1_TOOMUCH";
			sLocal_39[11] = "RE_AM_FTH_V1_TAKEANYMORE";
			sLocal_39[12] = "RE_AM_FTH_V1_JUSTSHOOT";
			sLocal_39[13] = "RE_AM_FTH_V1_SONOFABITCH";
			sLocal_39[14] = "RE_AM_FTH_V1_SWIGOFTHIS";
			sLocal_39[15] = "RE_AM_FTH_V1_GIVE_MEDICINE";
			sLocal_39[16] = "RE_AM_FTH_V1_LOOKATME";
			sLocal_39[17] = "RE_AM_FTH_V1_NOHEALING";
			sLocal_39[18] = "RE_AM_FTH_V1_TOOMUCH_W";
			sLocal_39[19] = "RE_AM_FTH_V1_LIGHTHEADED";
			sLocal_39[20] = "RE_AM_FTH_V1_SLIPPING";
			sLocal_39[21] = "RE_AM_FTH_V1_THANKS";
			sLocal_39[22] = "RE_AM_FTH_V1_SAFE";
			sLocal_39[23] = "RE_AM_FTH_V1_WHATTHEHELL";
			sLocal_39[24] = "RE_AM_FTH_V1_MAKINGITWORSE";
			sLocal_39[25] = "RE_AM_FTH_V1_AIM_INVALID";
			sLocal_39[26] = "RE_AM_FTH_V1_AIM_NOTMESSY";
			sLocal_39[27] = "RE_AM_FTH_V1_AIM_MESSY";
			sLocal_39[28] = "RE_AM_FTH_V1_REACTION";
			sLocal_39[29] = "GET_AWAY_FROM_ME";
			break;
	}
}

void func_9(var uParam0)
{
	StringCopy(&(uParam0->f_34), sLocal_39[21], 64);
	uParam0->f_77 = 1;
	uParam0->f_1 = 65f;
	uParam0->f_80 = 1;
	uParam0->f_78 = 0;
}

bool func_10()
{
	int iVar0;
	bool bVar1;
	switch (iLocal_679)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_145))
			{
				func_44(&Local_339);
				func_45();
				STREAMING::REQUEST_ANIM_DICT(sLocal_15);
				iLocal_679 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&(Local_339.f_1)))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_15))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_30, true, false))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_30.f_1, true, false))
			{
				return false;
			}
			else
			{
				iVar0 = 1;
				while (iVar0 <= 11)
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_30.f_1, sLocal_17[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_30.f_1, sLocal_17[iVar0]);
						bVar1 = true;
					}
					iVar0++;
				}
				if (bVar1)
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

void func_12(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 1;
			*uParam2 = 4;
			break;
		case 5:
			*iParam1 = 1;
			*uParam2 = 5;
			break;
		case 6:
			*iParam1 = 1;
			*uParam2 = 6;
			break;
		case 7:
			*iParam1 = 1;
			*uParam2 = 7;
			break;
		case 8:
			*iParam1 = 3;
			*uParam2 = 0;
			break;
		case 9:
			*iParam1 = 6;
			*uParam2 = 0;
			break;
		case 10:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 11:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

void func_16(struct<52> Param0, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194)
{
	int iVar0;
	iVar0 = func_59(__LIB_1__::func_898());
	uParam194->f_1[0 /*32*/].f_6 = { Param0.f_51 };
	uParam194->f_1[1 /*32*/].f_6 = { Param0.f_51 };
	switch (iVar0)
	{
		case 2:
			switch (Param0.f_51.f_4)
			{
				case 0:
					uParam194->f_1[2 /*32*/].f_6 = { -1497.867f, 383.3983f, 102.7712f };
					break;
				case 1:
					uParam194->f_1[2 /*32*/].f_6 = { -1294.42f, 141.1849f, 71.7868f };
					break;
				case 2:
					uParam194->f_1[2 /*32*/].f_6 = { -2365.32f, 131.6669f, 238.8774f };
					break;
				case 3:
					uParam194->f_1[2 /*32*/].f_6 = { -2628.259f, 82.34212f, 164.7711f };
					break;
				case 4:
					uParam194->f_1[2 /*32*/].f_6 = { -1744.654f, -921.0851f, 100.4838f };
					break;
				case 5:
					uParam194->f_1[2 /*32*/].f_6 = { -2043.211f, -487.9759f, 148.8717f };
					break;
				case 6:
					uParam194->f_1[2 /*32*/].f_6 = { -1172.763f, -758.6129f, 66.65485f };
					break;
				case 7:
					uParam194->f_1[2 /*32*/].f_6 = { -2514.834f, -93.21464f, 167.3283f };
					break;
			}
			break;
		case 8:
			switch (Param0.f_51.f_4)
			{
				case 0:
					uParam194->f_1[2 /*32*/].f_6 = { 638.2377f, 1781.444f, 197.7003f };
					break;
			}
			break;
		case 64:
			switch (Param0.f_51.f_4)
			{
				case 0:
					uParam194->f_1[2 /*32*/].f_6 = { 1433.223f, 1313.11f, 161.837f };
					break;
			}
			break;
		case 1024:
			switch (Param0.f_51.f_4)
			{
				case 0:
					uParam194->f_1[2 /*32*/].f_6 = { 2532.596f, 1319.752f, 121.9457f };
					break;
				case 1:
					uParam194->f_1[2 /*32*/].f_6 = { 2784.178f, 1894.14f, 160.399f };
					break;
			}
			break;
	}
}

bool func_17(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			if (iVar0 != 2)
			{
				(*uParam1)[iVar0] = __LIB_3__::func_870(uParam0->f_1[iVar0 /*32*/].f_1, &(uParam0->f_1[iVar0 /*32*/]), uParam0->f_1[iVar0 /*32*/].f_6, uParam0->f_1[iVar0 /*32*/].f_9, 1, 0, 1, 0, 1);
			}
			else
			{
				(*uParam1)[iVar0] = __LIB_3__::func_870(uParam0->f_1[iVar0 /*32*/].f_1, &(uParam0->f_1[iVar0 /*32*/]), uParam0->f_1[iVar0 /*32*/].f_6, uParam0->f_1[iVar0 /*32*/].f_9, 1, 1, 1, 0, 1);
			}
			if (iVar0 == 1)
			{
				PED::_SET_PED_SCALE((*uParam1)[iVar0], 1f);
			}
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_18()
{
	func_61();
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_693[0], true, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_693[1], true, 0f);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 1, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 253, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 448, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 317, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[1], 388, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[1], 317, false);
	PED::_0xFD6943B6DF77E449(uLocal_693[1], false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_693[0], joaat("REL_PLAYER_DISLIKE"));
	PED::SET_PED_USING_ACTION_MODE(uLocal_693[1], true, -1, 0);
	PED::_0x923583741DC87BCE(uLocal_693[0], "Default");
	PED::_0x89F5E7ADECCCB49C(uLocal_693[0], "injured_LEFT_LEG");
	ENTITY::_0x8C03CD6B5E0E85E8(uLocal_693[0], joaat("HUNTER"));
	__LIB_3__::func_285(uLocal_693[0], &Local_145, 0);
	__LIB_3__::func_285(uLocal_693[1], &Local_145, 0);
}

void func_19()
{
	__LIB_2__::func_659(&(iLocal_708[0]), Local_145.f_51, 5f, 0, 0);
	__LIB_3__::func_337(&(iLocal_708[1]), Local_145.f_51, 3f);
}

void func_20()
{
	int iVar0;
	if (bLocal_686 || bLocal_681)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
	{
		if (__LIB_2__::func_901(uLocal_693[0], Global_35))
		{
			iVar0 = PED::GET_PED_CAUSE_OF_DEATH(uLocal_693[0]);
			if ((WEAPON::_IS_WEAPON_PISTOL(iVar0) || WEAPON::_IS_WEAPON_REVOLVER(iVar0)) || WEAPON::_IS_WEAPON_REPEATER(iVar0))
			{
				if (bLocal_685)
				{
					__LIB_1__::func_715(11, 0, 0, "MAULING_MERCY", uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
					bLocal_686 = true;
				}
			}
			else
			{
				__LIB_1__::func_715(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
				bLocal_686 = true;
			}
		}
	}
}

void func_22(bool bParam0)
{
	PED::_0x34B5CEAC180A5D6E(uLocal_693[1], joaat("GROUP_PISTOL"), bParam0);
	PED::_0x34B5CEAC180A5D6E(uLocal_693[1], joaat("GROUP_REVOLVER"), bParam0);
	PED::_0x34B5CEAC180A5D6E(uLocal_693[1], joaat("GROUP_RIFLE"), bParam0);
	PED::_0x34B5CEAC180A5D6E(uLocal_693[1], joaat("GROUP_SHOTGUN"), bParam0);
	PED::SET_PED_CONFIG_FLAG(uLocal_693[1], 263, bParam0);
}

int func_25()
{
	var uVar0;
	vector3 vVar1;
	func_80();
	func_81();
	if (ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
	{
		if (PED::GET_PED_CONFIG_FLAG(uLocal_693[0], 253, false))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 253, false);
		}
	}
	func_82();
	if (iLocal_677 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_30, "PED_VICTIM"))
		{
			__LIB_1__::func_864(uLocal_693[0], 1, 0);
		}
	}
	if ((__LIB_1__::func_313(&uLocal_702, 7.5f) || ENTITY::IS_ENTITY_DEAD(uLocal_693[1])) || bLocal_682)
	{
		if (!bLocal_681 || __LIB_1__::func_313(&uLocal_702, 3f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 253, false);
				__LIB_2__::func_51(&(Local_145.f_5), 1);
			}
		}
	}
	switch (iLocal_677)
	{
		case 0:
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_693[1], true);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[2]))
			{
				TASK::TASK_PLAY_ANIM(uLocal_693[2], sLocal_15, sLocal_16, 8f, -8f, -1, 131076, 0f, false, 0, false, 0, false);
			}
			PED::APPLY_PED_DAMAGE_PACK(uLocal_693[2], "PD_Ex_Large_aged_carcass_Lit_Hot", 1f, 1f);
			GRAPHICS::_0xDFCE8CE9F3EBE93F(uLocal_693[2]);
			ANIMSCENE::START_ANIM_SCENE(Local_30);
			iLocal_677 = 1;
			break;
		case 1:
			if (__LIB_2__::func_1(uLocal_693[1], 0, 1))
			{
				if (__LIB_3__::func_452(&Local_145, 2f, 40f, 35f, 2, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
				{
					func_87(1);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_693[1], false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_30, "TAUNT_LOOP_BOOL", true, false);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_693[0], 3500, 512, 51, 0);
					if (__LIB_2__::func_227(0, 1, uLocal_693[0], 1))
					{
						if (iLocal_38 == 0)
						{
							__LIB_2__::func_478(uLocal_693[0], 0, sLocal_39[0], 0, 100f, 2, 0, 1, 2, 1, 1, -500314840, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_693[0], 0, sLocal_39[0], 0, 100f, 0, 0, 1, 2, 1, 1, -500314840, 1, 0, 0);
						}
						__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false), 1);
					}
					__LIB_2__::func_73(uLocal_693[0], &(uLocal_697[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
					PED::_0xAE6004120C18DF97(uLocal_693[0], 0, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 6, true);
					PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 138, true);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Animal_attack_right_body", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Animal_attack_left_body", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Animal_attack_blood_body_upper_right", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Blood_face_right", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Blood_face_left", 0f, 1f);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_693[0], "PD_Face_Splatter", 0f, 1f);
					func_22(1);
					iLocal_687 = 1;
					Local_145.f_44 = 1;
					__LIB_2__::func_105(&(Local_145.f_5), 1);
					__LIB_2__::func_634(&(Local_145.f_5), 1);
					__LIB_1__::func_975(&(Local_145.f_5), 5f);
					iLocal_677 = 2;
				}
				else
				{
					func_95();
					if (__LIB_3__::func_276(uLocal_693[1], 0, &(Local_145.f_5), &uVar0, 0, 0))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_30);
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[1]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_693[1], false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_693[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						}
						Local_145.f_44 = 1;
						func_97();
					}
				}
			}
			else
			{
				__LIB_3__::func_426(&Local_145, &(Local_145.f_48), Local_145.f_3, &(Local_145.f_51.f_6));
				Local_145.f_44 = 1;
				func_97();
			}
			break;
		case 2:
			if ((func_98() && !ANIMSCENE::_0x8D81E7824B7753F7(Local_30, "Taunt", 1)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_30) > 0.44f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[1]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_693[1], Global_35, 3, 1048576, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_2__::func_104(&(Local_145.f_5), 0);
				}
				PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 317, true);
				bLocal_690 = true;
				__LIB_1__::func_715(11, 0, 0, "HONOR_EVENT_STRANGER_HELPED", uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false) };
				__LIB_2__::func_106(&vVar1, 50, 10, 0);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_30, "PED_VICTIM", uLocal_693[0]);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_30.f_1, vVar1, 0f, 0f, ENTITY::GET_ENTITY_HEADING(uLocal_693[0]), 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_30.f_1, "Victim", uLocal_693[0], 0);
				ANIMSCENE::START_ANIM_SCENE(Local_30.f_1);
				__LIB_1__::func_148(&uLocal_705);
				func_102();
				func_87(1);
				__LIB_1__::func_148(&uLocal_702);
				iLocal_677 = 3;
			}
			else
			{
				func_103();
			}
			break;
		case 3:
			if (__LIB_1__::func_313(&uLocal_705, 3f))
			{
				__LIB_2__::func_602(&(Local_91[0 /*17*/]), "GIVE_WHISKEY", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_91[1 /*17*/]), "GIVE_MEDS", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_1__::func_471(&(Local_91[0 /*17*/]), 5);
				__LIB_1__::func_471(&(Local_91[1 /*17*/]), 5);
				__LIB_1__::func_471(&(Local_91[0 /*17*/]), 20);
				__LIB_1__::func_471(&(Local_91[1 /*17*/]), 20);
				__LIB_3__::func_362(&(Local_91[0 /*17*/]), 5f);
				__LIB_3__::func_362(&(Local_91[1 /*17*/]), 5f);
			}
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_30.f_1))
			{
				func_108(&(uLocal_693[0]), &iLocal_70, 5f, &Local_91, &(Local_145.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				func_22(0);
				bLocal_689 = true;
				iLocal_677 = 4;
			}
			else
			{
				func_109();
				if (func_110())
				{
					__LIB_2__::func_526(&Local_91, 0, 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_30.f_1, sLocal_17[1], true);
					__LIB_2__::func_526(&Local_91, 0, 0);
					iLocal_677 = 9;
				}
			}
			break;
		case 4:
			func_108(&(uLocal_693[0]), &iLocal_70, 5f, &Local_91, &(Local_145.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			func_112();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GIVE_WHISKEY")))
			{
				__LIB_2__::func_478(Global_35, 0, sLocal_39[14], 0, 100f, 0, 0, 1, 2, 1, 1, 291934926, 1, 0, 0);
				if (__LIB_1__::func_707(joaat("CONSUMABLE_WHISKEY_USED"), 1, 0))
				{
					func_114(joaat("CONSUMABLE_WHISKEY_USED"), 1, 0, -142743235, 0);
				}
				else if (__LIB_1__::func_707(joaat("CONSUMABLE_WHISKEY"), 1, 0))
				{
					func_114(joaat("CONSUMABLE_WHISKEY"), 1, 0, -142743235, 0);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GIVE_MEDS")))
			{
				__LIB_2__::func_478(Global_35, 0, sLocal_39[15], 0, 100f, 0, 0, 1, 2, 1, 1, 291934926, 1, 0, 0);
				if (__LIB_1__::func_707(joaat("CONSUMABLE_MEDICINE_USED"), 1, 0))
				{
					func_114(joaat("CONSUMABLE_MEDICINE_USED"), 1, 0, -142743235, 0);
				}
				else if (__LIB_1__::func_707(joaat("CONSUMABLE_MEDICINE"), 1, 0))
				{
					func_114(joaat("CONSUMABLE_MEDICINE"), 1, 0, -142743235, 0);
				}
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_30.f_1) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPT")))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
				bLocal_692 = false;
				iLocal_677 = 9;
			}
			break;
		case 5:
			if (!__LIB_5__::func_679(&(Local_145.f_5), 4) && PED::IS_PED_SHOOTING(Global_35))
			{
				__LIB_2__::func_105(&(Local_145.f_5), 1);
			}
			if (__LIB_2__::func_1(uLocal_693[0], 0, 1))
			{
				if (!bLocal_711)
				{
					if (!TASK::GET_IS_TASK_ACTIVE(uLocal_693[0], 3))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_30);
						bLocal_711 = true;
					}
				}
				if (func_108(&(uLocal_693[0]), &iLocal_70, 15f, &Local_91, &(Local_145.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0) != -1)
				{
					__LIB_2__::func_526(&Local_91, 0, 0);
				}
				if (func_116(uLocal_693[0], &(uLocal_697[0]), Global_35, &uLocal_143, &uLocal_462, &Local_145))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_693[0], Global_35, 1f, 128, 0);
					iLocal_677 = 6;
				}
			}
			break;
		case 6:
			if (func_108(&(uLocal_693[0]), &iLocal_70, 15f, &Local_91, &(Local_145.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0) != -1)
			{
				__LIB_2__::func_526(&Local_91, 0, 0);
			}
			if (__LIB_0__::func_232(Global_35, uLocal_693[0], 1) > 1600f)
			{
				return 1;
			}
			break;
		case 7:
			if (PED::_IS_PED_LASSOED(uLocal_693[0]) || PED::_GET_LASSO_TARGET(Global_35) == uLocal_693[0])
			{
				func_118();
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
			{
				if (!PED::IS_PED_RAGDOLL(uLocal_693[0]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_693[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_677 = 8;
				}
			}
			else
			{
				iLocal_677 = 9;
			}
			break;
		case 8:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_693[0]) || func_119())
			{
				iLocal_677 = 9;
			}
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[1]))
			{
				if (!PED::IS_PED_IN_COMBAT(uLocal_693[1], 0) && !__LIB_0__::func_163(uLocal_693[1], 518218985))
				{
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_30, "PED_WOLF"))
					{
						if (__LIB_0__::func_48(Global_35, uLocal_693[1], 35f, 1))
						{
							if (!__LIB_0__::func_163(uLocal_693[1], 780511057))
							{
								func_22(0);
								TASK::TASK_COMBAT_PED(uLocal_693[1], Global_35, 0, 0);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_COORD(uLocal_693[1], Local_145.f_51, 10000f, -1, false, 1077936128);
						}
					}
					return 0;
				}
				else if (__LIB_0__::func_665(Global_35, uLocal_693[1], 0, 1) < 50f)
				{
					return 0;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

void func_27()
{
	int iVar0;
	bool bVar1;
	if (__LIB_2__::func_1(uLocal_693[0], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_693[0], 0, 1);
		PED::SET_PED_RESET_FLAG(uLocal_693[0], 88, true);
		PED::SET_PED_RESET_FLAG(uLocal_693[0], 91, true);
		if (bLocal_683)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_693[0], sLocal_14, "DIA_02_VICTIM", 1))
			{
				if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_94(Global_35, Local_145.f_51, 0) < 5f)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 129, true);
				}
			}
			else
			{
				bLocal_683 = false;
			}
		}
		if (bLocal_684)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_693[0], sLocal_14, "DIA_01_VICTIM", 1))
			{
				if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_94(Global_35, Local_145.f_51, 0) < 5f)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 129, true);
				}
			}
			else
			{
				bLocal_684 = false;
			}
		}
	}
	if ((!bLocal_682 && iLocal_677 >= 3) && (ENTITY::IS_ENTITY_DEAD(uLocal_693[1]) || __LIB_0__::func_665(uLocal_693[0], uLocal_693[1], 0, 1) > 20f))
	{
		bLocal_682 = true;
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_693[0]) && iLocal_677 != 9)
	{
		if (!bLocal_689)
		{
			if ((!bLocal_688 && ENTITY::IS_ENTITY_DEAD(uLocal_693[0])) && !__LIB_2__::func_901(uLocal_693[0], Global_35))
			{
				if (__LIB_0__::func_232(Global_35, uLocal_693[0], 1) < 225f || PED::IS_TRACKED_PED_VISIBLE(uLocal_693[0]))
				{
					__LIB_1__::func_715(2, 0, 0, "HONOR_EVENT_WATCHED_DEATH", uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
					bLocal_688 = true;
				}
			}
		}
		func_22(0);
		Local_145.f_46 = 1;
		iLocal_677 = 9;
	}
	if (!Local_145.f_46)
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false), 10f))
		{
			bVar1 = true;
			iVar0 = 16;
		}
		if (PED::_IS_PED_LASSOED(uLocal_693[0]) || PED::_GET_LASSO_TARGET(Global_35) == uLocal_693[0])
		{
			__LIB_3__::func_286(uLocal_693[0]);
			func_87(1);
			iLocal_677 = 7;
			Local_145.f_46 = 1;
		}
		else if (__LIB_3__::func_276(uLocal_693[0], 0, &(Local_145.f_5), &iVar0, 0, 0) || bVar1)
		{
			if (iVar0 == 4 && func_129(uLocal_693[1]))
			{
				__LIB_3__::func_237(&(Local_145.f_5), &iVar0);
				return;
			}
			else
			{
				func_131(iVar0);
			}
		}
	}
}

void func_28()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_708)
	{
		__LIB_2__::func_353(&(iLocal_708[iVar0]), 1);
		iVar0++;
	}
}

void func_44(var uParam0)
{
	iLocal_38 = __LIB_3__::func_283();
	switch (iLocal_38)
	{
		case 0:
			uParam0->f_1[0 /*32*/].f_1 = joaat("RE_ANIMALMAULING_MALES_01");
			uParam0->f_1[0 /*32*/] = 4;
			uParam0->f_1[0 /*32*/].f_2 = 1;
			StringCopy(&(uParam0->f_1[0 /*32*/].f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
			uParam0->f_1[0 /*32*/].f_3 = -10963979;
			uParam0->f_1[1 /*32*/].f_1 = joaat("A_C_WOLF");
			uParam0->f_1[1 /*32*/] = 28;
			uParam0->f_1[1 /*32*/].f_6 = { 0f, 3f, 0f };
			uParam0->f_1[1 /*32*/].f_9 = 180f;
			break;
		case 2:
			uParam0->f_1[0 /*32*/].f_1 = joaat("RE_ANIMALMAULING_MALES_01");
			uParam0->f_1[0 /*32*/] = 4;
			uParam0->f_1[0 /*32*/].f_2 = 1;
			StringCopy(&(uParam0->f_1[0 /*32*/].f_23), "0896_A_M_M_Civ_Poor_Hispanic_AVOID_01", 64);
			uParam0->f_1[0 /*32*/].f_3 = -251521208;
			uParam0->f_1[1 /*32*/].f_1 = joaat("A_C_WOLF");
			uParam0->f_1[1 /*32*/] = 28;
			uParam0->f_1[1 /*32*/].f_6 = { 0f, 3f, 0f };
			uParam0->f_1[1 /*32*/].f_9 = 180f;
			break;
	}
	uParam0->f_1[2 /*32*/].f_1 = joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN");
	__LIB_3__::func_284(&(uParam0->f_1));
}

void func_45()
{
	Local_30.f_4 = "script@beat@wilderness@animalMauling@grapple";
	Local_30.f_5 = "script@beat@wilderness@animalMauling@dying";
	Local_30 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_30.f_4, 64, "PBL_TAKEDOWN", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_30);
	Local_30.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_30.f_5, 64, "PBL_TRANS_FROM_RAGDOLL", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_30.f_1);
	sLocal_17[0] = "PBL_TRANS_FROM_RAGDOLL";
	sLocal_17[1] = "PBL_DEATH";
	sLocal_17[2] = "PBL_DIA_01";
	sLocal_17[3] = "PBL_DIA_02";
	sLocal_17[4] = "PBL_DIA01_DEATH";
	sLocal_17[5] = "PBL_DIA02_DEATH";
	sLocal_17[6] = "PBL_GIVE_WHISKEY_F";
	sLocal_17[7] = "PBL_GIVE_WHISKEY_L";
	sLocal_17[8] = "PBL_GIVE_WHISKEY_R";
	sLocal_17[9] = "PBL_OFFER_MEDICINE_F";
	sLocal_17[10] = "PBL_OFFER_MEDICINE_L";
	sLocal_17[11] = "PBL_OFFER_MEDICINE_R";
}

int func_59(int iParam0)
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
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case -1:
		default:
			break;
	}
	return 0;
}

void func_61()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { func_192(iLocal_144, Local_145.f_51.f_4) };
	vVar3 = { func_193(iLocal_144, Local_145.f_51.f_4) };
	__LIB_2__::func_106(&vVar0, 50, 10, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_30, vVar0, vVar3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_30, "PED_VICTIM", uLocal_693[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_30, "PED_WOLF", uLocal_693[1], 0);
}

void func_80()
{
	if ((iLocal_677 == 3 || iLocal_677 == 4) && __LIB_0__::func_665(Global_35, uLocal_693[0], 0, 1) <= 2f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	}
}

void func_81()
{
	if (!bLocal_691 && iLocal_677 >= 3)
	{
		if (__LIB_0__::func_232(uLocal_693[0], uLocal_693[1], 1) > 25f)
		{
			func_22(0);
			bLocal_691 = true;
		}
	}
}

void func_82()
{
	if (iLocal_677 >= 2 && iLocal_677 < 5)
	{
		if (__LIB_0__::func_232(Global_35, uLocal_693[0], 1) < 225f)
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_693[0], 3500, 512, 51, 0);
		}
	}
}

void func_87(bool bParam0)
{
	iLocal_675 = 0;
	if (bParam0)
	{
		__LIB_0__::func_268(&uLocal_0, 1000f);
	}
}

bool func_95()
{
	if (!__LIB_2__::func_227(0, 1, uLocal_693[0], 1))
	{
		return false;
	}
	switch (iLocal_675)
	{
		case 0:
			if (__LIB_1__::func_992(Global_35, Local_145.f_51, 0) < 6400f)
			{
				if (__LIB_2__::func_478(uLocal_693[0], 0, sLocal_39[1], 0, 100f, 0, 0, 1, 2, 1, 1, -500314840, 1, 0, 0))
				{
					__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false), 1);
					__LIB_3__::func_415(&Local_145, uLocal_693[0], 0f, 0f, 0f, 150);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_693[0], 3500, 512, 51, 0);
					iLocal_675++;
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_992(Global_35, Local_145.f_51, 0) < 3600f)
			{
				if (__LIB_2__::func_478(uLocal_693[0], 0, sLocal_39[4], 0, 100f, 1, 0, 1, 2, 1, 1, -500314840, 1, 0, 0))
				{
					__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false), 1);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_693[0], 3500, 512, 51, 0);
					iLocal_675++;
				}
			}
			break;
		case 3:
			return __LIB_2__::func_227(0, 1, uLocal_693[0], 1);
	}
	return false;
}

void func_97()
{
	if (!__LIB_3__::func_528(uLocal_693[0], Global_35))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_693[0], joaat("REL_PLAYER_LIKE"));
		__LIB_2__::func_634(&(Local_145.f_5), 1);
		func_286();
		__LIB_1__::func_148(&uLocal_702);
		bLocal_681 = true;
		PED::SET_PED_CONFIG_FLAG(uLocal_693[0], 317, true);
		__LIB_1__::func_715(13, 0, 0, "HONOR_EVENT_STRANGER_HELPED", uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
		iLocal_677 = 5;
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_693[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iLocal_677 = 9;
	}
}

bool func_98()
{
	var uVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_693[1]))
	{
		return true;
	}
	if (__LIB_3__::func_276(uLocal_693[1], 0, &(Local_145.f_5), &uVar0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_102()
{
	vector3 vVar0;
	if (!bLocal_680)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_693[0], -0.2f, -0.2f, 1f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
		GRAPHICS::_ADD_BLOOD_POOL_2(vVar0, 0.5f, 1.25f, 0.01f, true, NaNf, false);
		bLocal_680 = true;
	}
}

bool func_103()
{
	if (!__LIB_2__::func_227(0, 1, uLocal_693[0], 1))
	{
		return false;
	}
	switch (iLocal_675)
	{
		case 0:
			__LIB_2__::func_478(uLocal_693[0], 0, sLocal_39[2], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
			__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false), 1);
			func_102();
			iLocal_675++;
			break;
		case 1:
			__LIB_2__::func_478(uLocal_693[0], 0, sLocal_39[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_693[0], true, false), 1);
			iLocal_675++;
			break;
		case 2:
			return __LIB_2__::func_227(0, 1, uLocal_693[0], 1);
	}
	return false;
}

int func_108(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_294(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_109()
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (bLocal_692)
	{
		return;
	}
	iVar0 = func_108(&(uLocal_693[0]), &iLocal_70, 5f, &Local_91, &(Local_145.f_192), 0, 1, 0, 0, __LIB_2__::func_340(2, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar0 != -1)
	{
		__LIB_2__::func_526(&Local_91, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		bLocal_692 = true;
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		iVar1 = __LIB_3__::func_112(uLocal_693[0], Global_35, 1060437492 /* Float: 0.707f */);
		switch (iVar1)
		{
			case 0:
				if (iVar0 == 0)
				{
					uVar2 = sLocal_17[6];
				}
				else if (iVar0 == 1)
				{
					uVar2 = sLocal_17[9];
				}
				break;
			case 3:
				if (iVar0 == 0)
				{
					uVar2 = sLocal_17[7];
				}
				else if (iVar0 == 1)
				{
					uVar2 = sLocal_17[10];
				}
				break;
			case 2:
				if (iVar0 == 0)
				{
					uVar2 = sLocal_17[8];
				}
				else if (iVar0 == 1)
				{
					uVar2 = sLocal_17[11];
				}
				break;
			case 1:
				iVar1 = __LIB_3__::func_112(uLocal_693[0], Global_35, 1f);
				if (iVar1 == 3)
				{
					if (iVar0 == 0)
					{
						uVar2 = sLocal_17[7];
					}
					else if (iVar0 == 1)
					{
						uVar2 = sLocal_17[10];
					}
				}
				else if (iVar0 == 0)
				{
					uVar2 = sLocal_17[8];
				}
				else if (iVar0 == 1)
				{
					uVar2 = sLocal_17[11];
				}
				break;
		}
		TASK::OPEN_SEQUENCE_TASK(&iLocal_701);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		TASK::TASK_ENTER_ANIM_SCENE(0, Local_30.f_1, "plr", uVar2, 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_701);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_701);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_701);
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
		MISC::_0xE98D55C5983F2509(uLocal_693[0]);
	}
}

bool func_110()
{
	if ((!__LIB_2__::func_227(0, 1, uLocal_693[0], 1) || !ANIMSCENE::_0x8D81E7824B7753F7(Local_30.f_1, "PAIN_IDLE", 1)) || bLocal_692)
	{
		return false;
	}
	switch (iLocal_675)
	{
		case 0:
			func_299(uLocal_693[0], Global_35, sLocal_39[8], 0, 0, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		case 1:
			func_299(uLocal_693[0], Global_35, sLocal_39[5], 0, 0, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		case 2:
			func_299(uLocal_693[0], Global_35, sLocal_39[6], 0, 0, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		case 3:
			func_299(uLocal_693[0], Global_35, sLocal_39[7], 0, 0, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		default:
			return __LIB_2__::func_227(0, 1, uLocal_693[0], 1);
	}
	return false;
}

void func_112()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_693[0], 14612012 /* GXTEntry: "Take Whiskey" */))
	{
		__LIB_1__::func_715(11, 0, 0, 0, uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_693[0], 1337913127))
	{
		__LIB_1__::func_715(11, 0, 0, 0, uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
	}
}

int func_114(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_114(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

bool func_116(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_313(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

bool func_118()
{
	switch (iLocal_675)
	{
		case 0:
			func_299(uLocal_693[0], Global_35, sLocal_39[23], 0, -2f, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		case 1:
			if (!bLocal_681)
			{
				func_299(uLocal_693[0], Global_35, sLocal_39[24], 0, -2f, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			}
			else
			{
				iLocal_675++;
			}
			break;
		case 2:
			return __LIB_2__::func_227(0, 1, uLocal_693[0], 1);
	}
	return false;
}

bool func_119()
{
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_693[0], -1))
	{
		return false;
	}
	switch (iLocal_675)
	{
		case 0:
			func_299(uLocal_693[0], Global_35, sLocal_39[19], 0, -2f, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		case 1:
			func_299(uLocal_693[0], Global_35, sLocal_39[20], 0, -2f, 1117126656 /* Float: 75f */, 5000, 1, 1, 0);
			break;
		case 2:
			return __LIB_2__::func_227(0, 1, uLocal_693[0], 1);
	}
	return false;
}

bool func_129(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), &fVar0, &fVar1);
	HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(ENTITY::GET_ENTITY_COORDS(uLocal_693[0], false, false), &fVar2, &fVar3);
	fVar0 = MISC::ABSF(fVar0);
	fVar1 = MISC::ABSF(fVar1);
	fVar2 = MISC::ABSF(fVar2);
	fVar3 = MISC::ABSF(fVar3);
	fVar4 = ((fVar0 + fVar1) / 2f);
	fVar5 = ((fVar2 + fVar3) / 2f);
	if ((MISC::ABSF((fVar4 - 0.5f)) - MISC::ABSF((fVar5 - 0.5f))) < 0.06f)
	{
		return true;
	}
	return false;
}

void func_131(int iParam0)
{
	int iVar0;
	if (iLocal_677 == 5 || iLocal_677 == 6)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(uLocal_693[0]);
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_693[0], Global_35, 3, 128, -1082130432 /* Float: -1f */, -1, 0);
		__LIB_2__::func_478(uLocal_693[0], Global_35, sLocal_39[29], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_715(4, 0, 0, 0, uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
		iLocal_677 = 9;
		Local_145.f_46 = 1;
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_30) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_693[1], Local_30.f_1)) || func_318())
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_693[0], Global_35, 1, 1))
		{
			__LIB_1__::func_864(uLocal_693[0], 0, 0);
			__LIB_3__::func_286(uLocal_693[0]);
			func_22(0);
			iLocal_677 = 9;
			Local_145.f_46 = 1;
		}
		else if ((iLocal_677 != 9 && iLocal_677 > 2) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_693[0], sLocal_14, "DEATH_VICTIM", 1))
		{
			if (((iParam0 == 8 || iParam0 == 4) || iParam0 == 256) || iParam0 == 16)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_693[0]) && bLocal_682)
				{
					iVar0 = func_319(iParam0);
					if (!__LIB_0__::func_27(iLocal_676, iVar0))
					{
						switch (iVar0)
						{
							case 4:
								__LIB_2__::func_478(uLocal_693[0], Global_35, sLocal_39[25], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_676, iVar0);
								break;
							case 1:
								if (iLocal_677 == 4)
								{
									if (func_318())
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_30.f_1, "PBL_DIA02_DEATH", true);
										__LIB_2__::func_478(uLocal_693[0], Global_35, sLocal_39[27], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										__LIB_1__::func_683(&iLocal_676, iVar0);
										iLocal_677 = 9;
									}
								}
								else
								{
									__LIB_2__::func_478(uLocal_693[0], Global_35, sLocal_39[27], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_30.f_1, "PBL_DIA_02", true);
									bLocal_683 = true;
									__LIB_1__::func_683(&iLocal_676, iVar0);
								}
								break;
							case 2:
								if (iLocal_677 == 4)
								{
									if (func_318())
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_30.f_1, "PBL_DIA01_DEATH", true);
										__LIB_2__::func_478(uLocal_693[0], Global_35, sLocal_39[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										bLocal_685 = true;
										__LIB_1__::func_683(&iLocal_676, iVar0);
										iLocal_677 = 9;
									}
								}
								else
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_30.f_1, "PBL_DIA_01", true);
									__LIB_2__::func_478(uLocal_693[0], Global_35, sLocal_39[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									bLocal_685 = true;
									bLocal_684 = true;
									__LIB_1__::func_683(&iLocal_676, iVar0);
								}
								break;
						}
					}
				}
			}
		}
	}
}

Vector3 func_192(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1487.833f, 384.474f, 102.2717f;
				case 1:
					return -1286.226f, 148.542f, 71.8978f;
				case 2:
					return -2379.321f, 135.6397f, 236.9608f;
				case 3:
					return -2618.931f, 90.8313f, 166.3284f;
				case 4:
					return -1746.079f, -914.7423f, 100.5956f;
				case 5:
					return -2036.105f, -507.9698f, 149.6753f;
				case 6:
					return -1149.823f, -766.3174f, 63.4474f;
				case 7:
					return -2526.743f, -108.6706f, 165.4704f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 675.9786f, 1789.638f, 216.4616f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1450.093f, 1325.142f, 161.2261f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2523.959f, 1320.4f, 122.2039f;
				case 1:
					return 2786.135f, 1908.004f, 161.0971f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_193(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -46.007f;
				case 1:
					return 0f, 0f, 100.001f;
				case 2:
					return 0f, 0f, -122.5f;
				case 3:
					return 0f, 0f, 267.84f;
				case 4:
					return 0f, 0f, -270f;
				case 5:
					return 0f, 0f, 84.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -23.76f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 212.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_286()
{
	__LIB_2__::func_451(&iLocal_70, 0);
	__LIB_2__::func_602(&(Local_91[0 /*17*/]), "RE_INTER_POS", "RE_AM_MTN_V1_PL_GREET_AFTER_THANKS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_91[1 /*17*/]), "RE_INTER_ANTAGONIZE", "RE_AM_MTN_V1_PL_ANTAGONIZE_AFTER_THANKS", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_91[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(Local_91[0 /*17*/]), 8);
	__LIB_1__::func_471(&(Local_91[1 /*17*/]), 8);
	__LIB_2__::func_411(&(Local_91[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_91[1 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_91[2 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_91[2 /*17*/]), 1);
}

int func_294(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_294(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

int func_299(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9)
{
	if (!__LIB_2__::func_227(fParam4, 1, 0, 0) || (!bParam9 && AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)))
	{
		return 0;
	}
	if (!__LIB_2__::func_478(iParam0, iParam1, sParam2, 0, fParam5, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
		if (bParam8)
		{
			__LIB_1__::func_148(&uLocal_0);
			return 0;
		}
	}
	__LIB_2__::func_281(&uLocal_437, iParam1, iParam3, iParam6, iParam7, 1, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &uLocal_437);
	iLocal_675++;
	return 1;
}

bool func_313(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = __LIB_0__::func_665(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(__LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1f, -1f, -1f);
			}
			if (uParam4->f_180)
			{
				if (__LIB_0__::func_232(iParam0, iParam2, 1) >= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					__LIB_1__::func_148(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (__LIB_0__::func_665(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (__LIB_0__::func_665(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (__LIB_1__::func_313(&(uParam4->f_191), uParam4->f_189) || __LIB_0__::func_232(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || __LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
					else
					{
						__LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((__LIB_2__::func_215(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || __LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_531(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!__LIB_2__::func_1(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (__LIB_3__::func_273(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					__LIB_1__::func_748(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((__LIB_2__::func_227(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						__LIB_1__::func_616(uParam4->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						__LIB_1__::func_797(uParam4->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					__LIB_0__::func_45(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		return true;
	}
	return false;
}

bool func_318()
{
	if (bLocal_689)
	{
		return false;
	}
	if (iLocal_677 == 4)
	{
		if (!TASK::_0x0C3CB2E600C8977D(uLocal_693[0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_319(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (iParam0 == 16)
	{
		return 1;
	}
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if ((WEAPON::_IS_WEAPON_PISTOL(iVar0) || WEAPON::_IS_WEAPON_REVOLVER(iVar0)) || WEAPON::_IS_WEAPON_REPEATER(iVar0))
		{
			return 2;
		}
		if (WEAPON::_IS_WEAPON_RIFLE(iVar0) || WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
		{
			return 1;
		}
	}
	return 4;
}

void func_531(var uParam0)
{
	int iVar0;
	if (uParam0->f_75 != 0)
	{
		__LIB_1__::func_616(uParam0->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		__LIB_1__::func_797(uParam0->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	if (__LIB_0__::func_144(uParam0->f_74, 0))
	{
		func_642(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (__LIB_3__::func_256() + uParam0->f_72);
			__LIB_3__::func_216(iVar0);
		}
		else
		{
			__LIB_3__::func_707(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		__LIB_1__::func_715(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

int func_642(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return 0;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
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
				func_642(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_730(28);
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
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_739(iParam0);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_4__::func_130(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
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
						func_642(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_642(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_642(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_642(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_642(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_642(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_642(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_730(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_14__::func_150(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_14__::func_150(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_642(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_642(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_776(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_777(iParam0);
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
				func_642(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return 1;
}

void func_730(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_839(iParam0);
}

void func_739(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_274(Global_35, iParam0, &uVar0))
		{
			__LIB_14__::func_150(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_776(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_14__::func_150(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_730(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_777(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_895(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_895(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_895(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_895(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_895(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_895(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_895(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_895(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_895(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_895(-1, iParam0);
	}
}

void func_839(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_3__::func_427(iVar0, 1, 752097756);
					}
					__LIB_14__::func_150(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_3__::func_427(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_3__::func_427(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_17__::func_830();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

void func_895(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_998(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_998(iParam1, 1);
		__LIB_3__::func_871(iParam0);
	}
}

void func_998(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_730(50);
			}
			else
			{
				func_730(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_730(51);
			}
			else
			{
				func_730(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_730(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

