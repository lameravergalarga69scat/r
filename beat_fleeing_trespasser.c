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
	vector3 vLocal_17 = { 0f, 0f, 0f };
	char* sLocal_20[2] = { NULL, NULL };
	struct<193> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_216 = 0;
	struct<32> Local_217[3];
	struct<5> Local_314 = { 0, 0, 0, 0, 0 } ;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322[3] = { 0, 0, 0 };
	var uLocal_326 = 3;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
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
	bool bLocal_351 = false;
	bool bLocal_352 = false;
	bool bLocal_353 = false;
	bool bLocal_354 = false;
	bool bLocal_355 = false;
	bool bLocal_356 = false;
	bool bLocal_357 = false;
	bool bLocal_358 = false;
	bool bLocal_359 = false;
	bool bLocal_360 = false;
	bool bLocal_361 = false;
	bool bLocal_362 = false;
	bool bLocal_363 = false;
	bool bLocal_364 = false;
	bool bLocal_365 = false;
	bool bLocal_366 = false;
	bool bLocal_367 = false;
	bool bLocal_368 = false;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	bool bLocal_371 = false;
	bool bLocal_372 = false;
	bool bLocal_373 = false;
	bool bLocal_374 = false;
	bool bLocal_375 = false;
	bool bLocal_376 = false;
	bool bLocal_377 = false;
	bool bLocal_378 = false;
	bool bLocal_379 = false;
	bool bLocal_380 = false;
	bool bLocal_381 = false;
	bool bLocal_382 = false;
	bool bLocal_383 = false;
	bool bLocal_384 = false;
	bool bLocal_385 = false;
	bool bLocal_386 = false;
	bool bLocal_387 = false;
	bool bLocal_388 = false;
	bool bLocal_389 = false;
	bool bLocal_390 = false;
	bool bLocal_391 = false;
	bool bLocal_392 = false;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	var uLocal_417[3] = { 0, 0, 0 };
	char[] cLocal_421[8] = 0;
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
	float fLocal_464 = 0f;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 1176256512;
	int iLocal_468 = 0;
	vector3 vLocal_469 = { 0f, 0f, 0f };
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	struct<17> Local_482[2];
	int iLocal_517 = 0;
	var uLocal_518 = -1;
	var uLocal_519 = 0;
	var uLocal_520 = -1;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = -1;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 1073741824;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 1;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	struct<17> Local_538[2];
	struct<17> Local_573[2];
	int iLocal_608 = 0;
	var uLocal_609 = -1;
	var uLocal_610 = 0;
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = -1;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 1073741824;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 1;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	int iLocal_629 = 0;
	var uLocal_630 = -1;
	var uLocal_631 = 0;
	var uLocal_632 = -1;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = -1;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 1073741824;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 1;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	int iLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = -1082130432;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 1065353216;
	var uLocal_660 = 1065353216;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1065353216;
	var uLocal_665 = 1065353216;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 1065353216;
	var uLocal_670 = 1065353216;
	var uLocal_671 = 0;
	var uLocal_672 = 1040187392;
	var uLocal_673 = 1040187392;
	var uLocal_674 = -1;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = -1082130432;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 1176256512;
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
	iLocal_400 = -1;
	cLocal_421 = "TB";
	iLocal_650 = __LIB_2__::func_340(1, 0, 0);
	Local_23.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_23.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	else
	{
		__LIB_3__::func_420(&Local_23, 1);
		__LIB_2__::func_110(&(Local_23.f_5), 1);
		__LIB_2__::func_111(&(Local_23.f_5), 1);
		__LIB_2__::func_104(&(Local_23.f_5), 1);
		__LIB_2__::func_52(&(Local_23.f_5), 1);
		__LIB_3__::func_333(&(Local_23.f_5), 1);
		__LIB_2__::func_179(&(Local_23.f_5), 1);
		__LIB_3__::func_387(&(Local_23.f_5), 1);
		__LIB_2__::func_182(&(Local_23.f_5), 1);
		__LIB_3__::func_232(&(Local_23.f_5), 1);
		__LIB_2__::func_180(&(Local_23.f_5), 1);
		__LIB_2__::func_51(&(Local_23.f_5), 1);
		__LIB_2__::func_105(&(Local_23.f_5), 1);
		__LIB_2__::func_50(&(Local_23.f_5), 1);
		__LIB_3__::func_884(&(Local_23.f_5), 1.25f);
		__LIB_3__::func_900(&(Local_23.f_5), 2000);
		__LIB_2__::func_595(&(Local_23.f_5), 20f);
		__LIB_2__::func_906(&(Local_23.f_5), 100);
		__LIB_2__::func_507(&(Local_23.f_5), 2000);
		__LIB_3__::func_884(&(Local_23.f_5), 0.5f);
		__LIB_2__::func_906(&(Local_23.f_5), 42);
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 1593, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_476)
			{
				case 0:
					if (func_25())
					{
						__LIB_3__::func_914(&Local_482);
						__LIB_3__::func_889(&Local_538);
						__LIB_3__::func_889(&Local_573);
						iLocal_476 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_631(&Local_23, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_29();
						iLocal_476 = 3;
					}
					else if (Local_23.f_160)
					{
						func_23();
					}
					break;
				case 3:
					if (func_30())
					{
						if ((__LIB_2__::func_1(uLocal_322[0], 0, 1) && __LIB_2__::func_1(uLocal_322[1], 0, 1)) && __LIB_2__::func_1(uLocal_322[2], 0, 1))
						{
							if (func_32())
							{
								AUDIO::STOP_PED_SPEAKING(uLocal_322[0], true);
								AUDIO::STOP_PED_SPEAKING(uLocal_322[1], true);
								AUDIO::STOP_PED_SPEAKING(uLocal_322[2], true);
								ENTITY::SET_ENTITY_VISIBLE(uLocal_322[2], true);
								func_33();
								func_34();
								func_35();
								func_36();
								TASK::_0x88E32DB8C1A4AA4B(uLocal_322[0], 0f);
								TASK::_0x88E32DB8C1A4AA4B(uLocal_322[1], 0f);
								uLocal_474 = GRAPHICS::_0xFA50F79257745E74(1557.64f, -1413.61f, 60.52f, 1.5f, 1, 4, 0);
								iLocal_476 = 4;
							}
						}
					}
					break;
				case 4:
					func_37();
					if (!__LIB_3__::func_466(&Local_23, &uLocal_322, 0, 0, 1, 0, 1, 0))
					{
						func_23();
					}
					if (!Local_23.f_46)
					{
						func_39();
						if (bLocal_354 && !bLocal_352)
						{
							if (bLocal_355)
							{
								AUDIO::STOP_PED_SPEAKING(uLocal_322[0], false);
								AUDIO::STOP_PED_SPEAKING(uLocal_322[1], false);
								AUDIO::STOP_PED_SPEAKING(uLocal_322[2], false);
								__LIB_2__::func_461(1);
								Local_23.f_46 = 1;
							}
							__LIB_2__::func_480(&Local_482, 1, 1, 1, 0);
							iLocal_478 = 5;
						}
						if (bLocal_355)
						{
							__LIB_2__::func_461(1);
							__LIB_2__::func_480(&Local_482, 1, 0, 1, 0);
							__LIB_2__::func_480(&Local_538, 1, 1, 1, 0);
							__LIB_2__::func_480(&Local_573, 1, 1, 1, 0);
							iLocal_478 = 5;
							Local_23.f_46 = 1;
						}
					}
					if (func_42())
					{
						Local_23.f_50 = 1;
						func_23();
					}
					if (__LIB_3__::func_431(&Local_23, &uLocal_322, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_23();
					}
					break;
			}
			BUILTIN::WAIT(Local_23.f_158);
		}
	}
}

void func_23()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_322[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_322[iVar0], 12, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_322[iVar0], 317, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_322[iVar0], 347, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_322[iVar0], 6, false);
		}
		iVar0++;
	}
	TASK::_0x88E32DB8C1A4AA4B(uLocal_322[0], 1f);
	TASK::_0x88E32DB8C1A4AA4B(uLocal_322[1], 1f);
	__LIB_0__::func_172(iLocal_414);
	__LIB_0__::func_172(iLocal_413);
	AUDIO::STOP_PED_SPEAKING(uLocal_322[0], false);
	AUDIO::STOP_PED_SPEAKING(uLocal_322[1], false);
	AUDIO::STOP_PED_SPEAKING(uLocal_322[2], false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_481))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_481);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_416))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_416);
	}
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_474, 1);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_400);
	__LIB_3__::func_493(&Local_23, &uLocal_322, &uLocal_417, 0, -1, 0, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_25()
{
	int iVar0;
	switch (iLocal_475)
	{
		case 0:
			func_51();
			func_52();
			func_53();
			func_54();
			STREAMING::REQUEST_MODEL(joaat("S_INTERACT_LANTERN01X"), false);
			iLocal_475 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_479, cLocal_421))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_326))
			{
				return false;
			}
			if (!func_57())
			{
				return false;
			}
			if (!func_58())
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("S_INTERACT_LANTERN01X")))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (Local_217[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_217[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!__LIB_3__::func_449(&Local_217))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_29()
{
	Local_217[0 /*32*/].f_6 = { 1574.85f, -1411.25f, 56.48f };
	Local_217[0 /*32*/].f_9 = 102.23f;
	Local_217[1 /*32*/].f_6 = { 1573.99f, -1413.29f, 56.47f };
	Local_217[1 /*32*/].f_9 = 102.23f;
	Local_217[2 /*32*/].f_6 = { 1563.75f, -1413.3f, 58.78f };
	Local_217[2 /*32*/].f_9 = 102.23f;
	vLocal_17 = { 1011.826f, -1750.457f, 45.6099f };
	vLocal_14 = { 1854.79f, -1358.24f, 41.24f };
}

bool func_30()
{
	int iVar0;
	switch (iLocal_477)
	{
		case 0:
			if (__LIB_3__::func_449(&Local_217))
			{
				iLocal_477 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_23), __LIB_3__::func_526(&Local_23), &Local_217, &uLocal_322, 0, 0, -1, 1))
			{
				iLocal_477 = 6;
			}
			break;
		case 6:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_322[iVar0], Local_217[iVar0 /*32*/].f_6, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(uLocal_322[iVar0], Local_217[iVar0 /*32*/].f_9);
				ENTITY::_0x9587913B9E772D29(uLocal_322[iVar0], 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_322[iVar0], true, true);
				iVar0++;
			}
			return true;
	}
	return false;
}

bool func_32()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Default_Angry");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Default_Curious");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Default_Brave");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Default_Shocked");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Default_Shocked");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Interaction_Defuse");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "TaskCombat_High");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Flee_Panic");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_322[iVar0], "Interaction_Defuse");
		if ((((((((PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Default_Angry") && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Default_Curious")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Default_Brave")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Default_Shocked")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Default_Shocked")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Interaction_Defuse")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "TaskCombat_High")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Flee_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_322[iVar0], "Interaction_Defuse"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_33()
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_322[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_322[1]))
	{
		if (__LIB_3__::func_886())
		{
			if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
			{
				iLocal_481 = OBJECT::CREATE_OBJECT(joaat("S_INTERACT_LANTERN01X"), __LIB_3__::func_179(&Local_23), true, true, false, false, true);
				iVar1 = PED::GET_PED_BONE_INDEX(uLocal_322[0], 37709);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_481, uLocal_322[0], iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_322[iVar0]))
			{
				PED::SET_PED_SEEING_RANGE(uLocal_322[0], 12f);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_322[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_322[iVar0], 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_322[iVar0], 6, true);
				}
				PED::SET_PED_RESET_FLAG(uLocal_322[iVar0], 12, true);
			}
			iVar0++;
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_322[2], joaat("REL_BRAITHWAITES"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("REL_BRAITHWAITES"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_322[0], joaat("REL_GREYS"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_322[1], joaat("REL_GREYS"));
		PED::_0x7C00CFC48A782DC0(iLocal_413, uLocal_322[2], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		TASK::_0x7C015D8BCEC72CF4(uLocal_322[2], 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_322[0], true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_322[1], true);
		__LIB_1__::func_991(uLocal_322[0], 0);
		__LIB_1__::func_991(uLocal_322[1], 0);
		__LIB_3__::func_285(uLocal_322[0], &Local_23, 0);
		__LIB_3__::func_285(uLocal_322[1], &Local_23, 0);
		__LIB_3__::func_285(uLocal_322[2], &Local_23, 0);
		__LIB_2__::func_231(uLocal_322[0], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		__LIB_2__::func_231(uLocal_322[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_322[0], 317, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_322[1], 317, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_322[2], 317, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_322[0], 347, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_322[1], 347, true);
	}
}

void func_34()
{
	__LIB_3__::func_566(&(uLocal_322[0]), -513353480);
	__LIB_3__::func_566(&(uLocal_322[1]), 1638226287);
	__LIB_3__::func_566(&(uLocal_322[2]), -1053170717);
}

void func_35()
{
	__LIB_0__::func_11();
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_314, "ATTACKER_A", uLocal_322[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_314, "ATTACKER_B", uLocal_322[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_314, "VICTIM", uLocal_322[2], 0);
}

void func_36()
{
	if (Local_23.f_161)
	{
		if (!bLocal_351)
		{
			PERSCHAR::_0x92690B0822493CE0();
			PERSCHAR::_0xEFC5C6670E0B99BA();
			__LIB_2__::func_761(Local_23.f_51, 100f, 0, 0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			MISC::CLEAR_AREA(Local_23.f_51, 30f, 2442122);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 30f, 2442122);
			bLocal_351 = true;
		}
	}
	else
	{
		__LIB_2__::func_761(Local_23.f_51, 10f, 0, 0);
	}
}

void func_37()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_314, false))
	{
		fLocal_464 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_314);
		if (fLocal_464 > 0.47f)
		{
			bLocal_356 = true;
			if (fLocal_464 >= 0.98f)
			{
				bLocal_372 = true;
			}
		}
	}
	if (!bLocal_367)
	{
		if (PED::_IS_PED_LASSOED(uLocal_322[2]) || PED::_IS_PED_HOGTIED(uLocal_322[2]))
		{
			bLocal_367 = true;
		}
	}
	else if (!PED::_IS_PED_LASSOED(uLocal_322[2]) && !PED::_IS_PED_HOGTIED(uLocal_322[2]))
	{
		bLocal_367 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_481))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_481, uLocal_322[0]))
		{
			if (fLocal_464 > 0.16f)
			{
				ENTITY::DETACH_ENTITY(iLocal_481, true, true);
			}
		}
	}
}

void func_39()
{
	if (iLocal_478 <= 1)
	{
		if (__LIB_4__::func_52(&uLocal_322, &(Local_23.f_5), &iLocal_480, &uLocal_393, 0, 1, 1))
		{
			bLocal_368 = true;
		}
	}
	if (!bLocal_354 && !bLocal_355)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_322[2], Global_35, 1, 1) || __LIB_3__::func_453(uLocal_322[2], 0, &(Local_23.f_5), &(Local_23.f_5.f_16), 0, Local_23.f_98[2]))
		{
			bLocal_354 = true;
		}
	}
	if (!bLocal_355)
	{
		if (__LIB_4__::func_52(&uLocal_322, &(Local_23.f_5), &iLocal_480, &uLocal_393, 0, 1, 1))
		{
			if ((((iLocal_480 == 2 || iLocal_480 == 4) || iLocal_480 == 8) || iLocal_480 == 65536) || iLocal_480 == 2048)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GREYS"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
				bLocal_355 = true;
			}
			if (((!__LIB_2__::func_1(uLocal_322[2], 0, 1) && bLocal_356) && bLocal_382) && !__LIB_2__::func_401(uLocal_322[2], 1, 1, 1, 0, 0))
			{
				if (iLocal_480 == 256)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GREYS"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
					bLocal_355 = true;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_322[0], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_322[1], Global_35, 1, 1))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GREYS"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
			bLocal_355 = true;
		}
	}
	if (bLocal_371)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GREYS"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		bLocal_355 = true;
	}
	if (bLocal_363)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GREYS"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		bLocal_355 = true;
	}
}

bool func_42()
{
	int iVar0;
	func_96();
	func_97();
	func_98();
	func_99();
	func_100();
	if (!bLocal_379)
	{
		if ((PED::_IS_PED_LASSOED(uLocal_322[2]) && !__LIB_2__::func_1(uLocal_322[2], 0, 0)) || !__LIB_2__::func_1(uLocal_322[2], 0, 0))
		{
			PED::_0xAE6004120C18DF97(uLocal_322[2], 0, 0);
			bLocal_379 = true;
		}
	}
	if (__LIB_2__::func_1(uLocal_322[2], 0, 1) && !bLocal_376)
	{
		if (__LIB_0__::func_94(uLocal_322[2], 1463.6f, -1437.74f, 73.77f, 1) < 5f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_17, 20f, 3f, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_17, 3f, -1, 10f, 0, 40000f);
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_17, 20f, 0, false, false, false, false);
			__LIB_1__::func_474(uLocal_322[2], &iVar0, 0, 0, 1, 1);
			bLocal_376 = true;
		}
	}
	if (bLocal_368)
	{
		TASK::_TASK_FLEE_FROM_PED(uLocal_322[0], Global_35, 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		TASK::_TASK_FLEE_FROM_PED(uLocal_322[1], Global_35, 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		__LIB_2__::func_788(&(uLocal_322[0]), 1, 0, 1);
		__LIB_2__::func_788(&(uLocal_322[1]), 1, 0, 1);
		return true;
	}
	switch (iLocal_478)
	{
		case 0:
			if (__LIB_2__::func_410(17))
			{
			}
			iLocal_478 = 1;
			break;
		case 1:
			if (__LIB_3__::func_647(&Local_23, &uLocal_465, 1f, 1114636288 /* Float: 60f */, 90f, 1000, 1.5f, 1065353216 /* Float: 1f */, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0))
			{
				switch (iLocal_406)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", uLocal_322[1], "REFC_Sounds", false, 0, 0);
						__LIB_2__::func_315(1066055203, uLocal_322[1], 1);
						iLocal_400 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_TERRIFYING"), uLocal_322[1], 0f, 10f, -1f, -1f, -1f, 180f, false, false, -1, -1);
						__LIB_2__::func_303(uLocal_322[2], uLocal_322[0], func_107(0), "", 100f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						iLocal_406++;
						break;
					case 1:
						if (!__LIB_2__::func_136(uLocal_322[2], 0))
						{
							__LIB_2__::func_303(uLocal_322[2], uLocal_322[0], func_107(1), "", 100f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
							__LIB_2__::func_315(1891783641, uLocal_322[1], 1);
							__LIB_1__::func_148(&uLocal_440);
							iLocal_406++;
						}
						break;
					case 2:
						ANIMSCENE::START_ANIM_SCENE(Local_314);
						iLocal_478 = 2;
						break;
				}
			}
			else if (__LIB_4__::func_483(Global_35, &uLocal_322, 15f, 1))
			{
				return true;
			}
			break;
		case 2:
			if (!bLocal_359)
			{
				if (func_112())
				{
					iLocal_478 = 4;
				}
			}
			break;
		case 5:
			if (func_113())
			{
				iLocal_478 = 7;
			}
			break;
		case 3:
			break;
		case 4:
			if (!bLocal_359 && !bLocal_380)
			{
				if (func_114())
				{
					iLocal_478 = 7;
				}
			}
			if (func_115())
			{
				iLocal_478 = 7;
			}
			break;
		case 6:
			if (func_115())
			{
				iLocal_478 = 7;
			}
			break;
		case 7:
			if (!__LIB_2__::func_1(uLocal_322[0], 0, 0) && !__LIB_2__::func_1(uLocal_322[1], 0, 0))
			{
				return true;
			}
			if (__LIB_0__::func_665(Global_35, uLocal_322[0], 1, 1) > 80f && __LIB_0__::func_665(Global_35, uLocal_322[1], 1, 1) > 80f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_51()
{
	Local_217[0 /*32*/].f_1 = joaat("G_M_M_UNIGRAYS_01");
	Local_217[0 /*32*/] = 4;
	StringCopy(&(Local_217[0 /*32*/].f_23), "1058_G_M_M_UniCriminals_01_WHITE_05", 64);
	Local_217[0 /*32*/].f_3 = -513353480;
	Local_217[1 /*32*/].f_1 = joaat("G_M_M_UNIGRAYS_01");
	Local_217[1 /*32*/] = 4;
	StringCopy(&(Local_217[1 /*32*/].f_23), "0131_G_M_M_UniCriminals_01_WHITE_02", 64);
	Local_217[1 /*32*/].f_3 = 1638226287;
	Local_217[2 /*32*/].f_1 = joaat("G_M_M_UNIBRAITHWAITES_01");
	Local_217[2 /*32*/] = 4;
	StringCopy(&(Local_217[2 /*32*/].f_23), "1060_G_M_M_UniCriminals_01_WHITE_07", 64);
	Local_217[2 /*32*/].f_3 = -1053170717;
	__LIB_3__::func_478(&(Local_217[0 /*32*/].f_22));
	__LIB_3__::func_478(&(Local_217[1 /*32*/].f_22));
	__LIB_3__::func_478(&(Local_217[2 /*32*/].f_22));
}

void func_52()
{
	__LIB_3__::func_445(&Local_217);
}

void func_53()
{
	__LIB_3__::func_557(&iLocal_414, 1571.984f, -1432.469f, 59.71183f, 0f, 0f, 9.000001f, 4f, 11f, 5f, "volStartShooting");
	__LIB_3__::func_527(&iLocal_413, 1569.125f, -1433.113f, 61.73186f, 0f, 0f, 0f, 4f, 4f, 3f, "volTrespasserVolume");
	__LIB_3__::func_557(&iLocal_415, 1539.662f, -1414.324f, 62.41129f, 0f, 0f, 9.999998f, 31f, 12f, 25f, "volChaserVolume");
}

void func_54()
{
	Local_314.f_4 = "script@beat@wilderness@fleeingtrespasser@escape";
	sLocal_20[0] = "PBL_RUN_ESCAPE";
	Local_314 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_314.f_4, 0, sLocal_20[0], false, true);
}

bool func_57()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_314, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_314, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_314);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_58()
{
	bool bVar0;
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_314, sLocal_20[0]))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_314, sLocal_20[0]))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_314, sLocal_20[0]);
		}
		bVar0 = false;
	}
	return !bVar0;
	return false;
}

void func_96()
{
	if (Local_23.f_48)
	{
		if (fLocal_464 >= 0.132021f)
		{
			bLocal_373 = true;
		}
	}
	if ((((((bLocal_354 || bLocal_355) || Local_23.f_46) || bLocal_361) || bLocal_363) || bLocal_365) || bLocal_364)
	{
		bLocal_373 = true;
	}
	if (bLocal_373)
	{
		if (!Local_23.f_44)
		{
			Local_23.f_44 = 1;
		}
	}
}

void func_97()
{
	if (iLocal_478 > 1)
	{
		func_249();
		func_250();
	}
}

void func_98()
{
	if (bLocal_366 && __LIB_2__::func_1(uLocal_322[2], 0, 0))
	{
		if (__LIB_0__::func_265(&uLocal_434) > 6f)
		{
			switch (iLocal_401)
			{
				case 0:
					__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(22), "", 150f, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_434);
					iLocal_401++;
					break;
				case 1:
					if (PED::_IS_PED_LASSOED(uLocal_322[2]))
					{
						bLocal_369 = true;
						if (__LIB_0__::func_265(&uLocal_434) > 3f)
						{
							__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(34), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_434);
							iLocal_401++;
						}
					}
					break;
				case 2:
					if (PED::_IS_PED_LASSOED(uLocal_322[2]))
					{
						if (__LIB_0__::func_265(&uLocal_434) > 3f)
						{
							__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(35), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_434);
							iLocal_401++;
						}
					}
					else
					{
						iLocal_401++;
					}
					break;
				case 3:
					if (PED::_IS_PED_LASSOED(uLocal_322[2]))
					{
						if (__LIB_0__::func_265(&uLocal_434) > 3f)
						{
							__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(36), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_434);
							iLocal_401++;
						}
					}
					else
					{
						iLocal_401++;
					}
					break;
				case 4:
					AUDIO::STOP_PED_SPEAKING(uLocal_322[2], false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_322[2], false);
					iLocal_401++;
					break;
			}
		}
	}
}

void func_99()
{
	if (((!bLocal_369 && !bLocal_359) && __LIB_2__::func_1(uLocal_322[2], 0, 1)) && !bLocal_354)
	{
		if ((__LIB_1__::func_205(Global_35, iLocal_413, 1, 0) && __LIB_0__::func_665(uLocal_322[2], Global_35, 1, 1) < 10f) || bLocal_361)
		{
			switch (iLocal_402)
			{
				case 0:
					__LIB_1__::func_148(&uLocal_422);
					iLocal_402++;
					break;
				case 1:
					if (__LIB_0__::func_265(&uLocal_422) > 2f)
					{
						__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(48), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_322[2], Global_35, 3000, 0, 51, 0);
						bLocal_361 = true;
						__LIB_1__::func_148(&uLocal_446);
						__LIB_1__::func_148(&uLocal_422);
						iLocal_402++;
					}
					break;
				case 2:
					if ((__LIB_0__::func_265(&uLocal_422) > 10f || __LIB_4__::func_26(uLocal_322[2], &uLocal_425, &uLocal_651, 1092616192 /* Float: 10f */, 6f, 1065353216 /* Float: 1f */, 1110704128 /* Float: 45f */, 0)) || bLocal_362)
					{
						__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(49), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_422);
						iLocal_402++;
					}
					break;
				case 3:
					if ((__LIB_0__::func_265(&uLocal_422) > 10f || __LIB_4__::func_26(uLocal_322[2], &uLocal_425, &uLocal_651, 1092616192 /* Float: 10f */, 10f, 1065353216 /* Float: 1f */, 1110704128 /* Float: 45f */, 0)) || (bLocal_362 && __LIB_0__::func_265(&uLocal_422) > 5f))
					{
						if (__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(50), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_1__::func_148(&uLocal_422);
							iLocal_402++;
						}
					}
					break;
				case 4:
					break;
			}
		}
	}
}

void func_100()
{
	if (!bLocal_353)
	{
		switch (iLocal_405)
		{
			case 0:
				if (fLocal_464 >= 0.098058f)
				{
					__LIB_2__::func_315(1891783641, uLocal_322[1], 1);
					iLocal_405++;
				}
				break;
			case 1:
				if (fLocal_464 >= 0.139006f)
				{
					func_253();
					__LIB_2__::func_315(1066055203, uLocal_322[1], 1);
					iLocal_405++;
				}
				break;
			case 2:
				bLocal_353 = true;
				break;
		}
	}
}

char* func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_GB_RHD_V1_VICTIM_INT";
		case 1:
			return "RE_GB_RHD_V1_VICTIMHELP";
		case 2:
			return "RE_GB_RHD_V1_VICTIMFENCE";
		case 3:
			return "RE_GB_RHD_V1_CALLBACK";
		case 7:
			return "RE_GB_RHD_V1_CONVO1";
		case 8:
			return "RE_GB_RHD_V1_CONVO2";
		case 9:
			return "";
		case 10:
			return "RE_GB_RHD_V1_CONVO4";
		case 11:
			return "RE_GB_RHD_V1_CONVO5";
		case 12:
			return "RE_GB_RHD_V1_CONVO6";
		case 13:
			return "RE_GB_RHD_V1_CONVO7";
		case 14:
			return "RE_GB_RHD_V1_CONVO8";
		case 15:
			return "RE_GB_RHD_V1_WARN";
		case 16:
			return "RE_GB_RHD_V1_WARN_B";
		case 17:
			return "RE_GB_RHD_V1_WARN_C";
		case 18:
			return "RE_GB_RHD_V1_WARN_D";
		case 19:
			return "RE_GB_RHD_V1_WARN_E";
		case 20:
			return "RE_GB_RHD_V1_AGGRO_A";
		case 21:
			return "RE_GB_RHD_V1_AGGRO_B";
		case 22:
			return "RE_GB_RHD_V1_AGGRO_C";
		case 23:
			return "RE_GB_RHD_V2_CONVO5";
		case 24:
			return "RE_GB_RHD_V2_CONVO6";
		case 25:
			return "RE_GB_RHD_V1_LASSO_A";
		case 26:
			return "RE_GB_RHD_V1_LASSO_B";
		case 27:
			return "RE_GB_RHD_V1_LASSO_C";
		case 28:
			return "RE_GB_RHD_V1_LASSO_D";
		case 29:
			return "RE_GB_RHD_V1_LASSO_E";
		case 30:
			return "RE_GB_RHD_V1_LASSO_F";
		case 31:
			return "RE_GB_RHD_V1_LASSO_FOUND";
		case 32:
			return "RE_GB_RHD_V1_LASSO_NO";
		case 33:
			return "RE_GB_RHD_V1_TRESPASSER_LASSOED_A";
		case 34:
			return "RE_GB_RHD_V1_TRESPASSER_LASSOED_B";
		case 35:
			return "RE_GB_RHD_V1_TRESPASSER_LASSOED_C";
		case 36:
			return "RE_GB_RHD_V1_TRESPASSER_LASSOED_D";
		case 37:
			return "RE_GB_RHD_V1_THANK";
		case 38:
			return "RE_GB_RHD_V1_THANK";
		case 42:
			return "RE_GB_RHD_V1_THANK_RESP";
		case 39:
			return "RE_GB_RHD_V1_LASSO_E";
		case 40:
			return "RE_GB_RHD_V1_LASSO_F";
		case 41:
			return "RE_GB_RHD_V1_THANK_B";
		case 43:
			return "RE_GB_RHD_V1_THANK_RESP_B";
		case 44:
			return "RE_GB_RHD_V1_LASSO_A";
		case 45:
			return "RE_GB_RHD_V1_LASSO_B";
		case 46:
			return "RE_GB_RHD_V1_LASSO_D";
		case 47:
			return "RE_GB_RHD_V1_LASSO_NO";
		case 48:
			return "RE_GB_RHD_V1_TRESPASSER_A";
		case 49:
			return "RE_GB_RHD_V1_TRESPASSER_B";
		case 50:
			return "RE_GB_RHD_V1_TRESPASSER_C";
		case 51:
			return "RE_GB_RHD_V1_TRESPASSER_ILO_QUESTION";
		case 52:
			return "RE_GB_RHD_V1_TRESPASSER_ILO_ANTAGONIZE";
		case 53:
			return "RE_GB_RHD_V1_GUARD_ILO_QUESTION";
		case 54:
			return "RE_GB_RHD_V1_GUARD_ILO_ANTAGONIZE";
		case 60:
			return "INSULT_RESPONSE";
		case 55:
			return "RE_GB_RHD_V1_INTERVENE_ILO_INTERVENE";
		case 56:
			return "RE_GB_RHD_V1_INTERVENE_ILO_ANTAGONIZE";
		case 57:
			return "RE_GB_RHD_V1_WARN_DEFUSE";
		case 58:
			return "RE_GB_RHD_V1_WARN_ANTAGONIZE";
		case 59:
			return "RE_GB_RHD_V1_INTERVENE_ILO_ANTAGONIZE_A";
		case 61:
			return "";
		case 62:
			return "";
		case 63:
			return "";
		case 64:
			return "";
		case 65:
			return "";
		case 66:
			return "";
		case 67:
			return "RE_GB_RHD_V1_FINAL_KILLED_GRAY";
		case 68:
			return "RE_GB_RHD_V1_FINAL_KILLED_BRT";
		case 69:
			return "GENERIC_INSULT_MED_MALE";
	}
	return "RERC_ODR_V1_END_A";
}

bool func_112()
{
	if (bLocal_381)
	{
		return true;
	}
	func_261();
	switch (iLocal_394)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_428);
			iLocal_394++;
			break;
		case 1:
			if (fLocal_464 >= 0.15f)
			{
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_322[2], true);
				TASK::_0x7C015D8BCEC72CF4(uLocal_322[2], 1);
				PED::FORCE_PED_MOTION_STATE(uLocal_322[2], joaat("MOTIONSTATE_RUN"), false, 0, false);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(uLocal_322[2], 3f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_322[2], 1463.6f, -1437.74f, 73.77f, 3f, -1, 1f, 4194321, 40000f);
				__LIB_1__::func_148(&uLocal_428);
				iLocal_394++;
			}
			break;
		case 2:
			iLocal_394++;
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_314, false))
			{
				if (fLocal_464 > 0.47f)
				{
					bLocal_356 = true;
					if ((fLocal_464 >= 0.98f || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_314, false)) || (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_322[0], Local_314) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_322[1], Local_314)))
					{
						bLocal_387 = true;
						bLocal_372 = true;
						return true;
					}
				}
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_113()
{
	if (bLocal_355)
	{
		if (func_262())
		{
			return true;
		}
	}
	else if (!bLocal_352)
	{
		if (bLocal_354)
		{
			if (func_263())
			{
				bLocal_352 = true;
				iLocal_478 = 4;
			}
		}
	}
	return false;
}

bool func_114()
{
	float fVar0;
	if (__LIB_0__::func_491(uLocal_322[0], 713668775) || __LIB_0__::func_491(uLocal_322[1], 713668775))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(uLocal_322[0]);
		if (fVar0 == 0f)
		{
			fVar0 = 1f;
		}
		if (__LIB_2__::func_1(uLocal_322[1], 0, 1))
		{
			PED::SET_PED_MOVE_RATE_OVERRIDE(uLocal_322[1], PED::_0xCA95924C893A0C91(uLocal_322[0], fVar0));
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_322[1], PED::_0xCA95924C893A0C91(uLocal_322[0], fVar0));
		}
		if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
		{
			PED::SET_PED_MOVE_RATE_OVERRIDE(uLocal_322[0], 1f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_322[0], 1f);
		}
	}
	else
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(uLocal_322[0], 1f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_322[0], 1f);
		PED::SET_PED_MOVE_RATE_OVERRIDE(uLocal_322[1], 1f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_322[1], 1f);
	}
	func_265();
	switch (iLocal_395)
	{
		case 0:
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_400);
			TASK::_0x88E32DB8C1A4AA4B(uLocal_322[0], 1f);
			TASK::_0x88E32DB8C1A4AA4B(uLocal_322[1], 1f);
			WEAPON::_HIDE_PED_WEAPONS(uLocal_322[1], 2, false);
			if ((__LIB_3__::func_649(uLocal_322[1], uLocal_322[2]) || !bLocal_367) || bLocal_372)
			{
				__LIB_3__::func_887(uLocal_322[1], uLocal_322[0], &uLocal_655, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
				__LIB_3__::func_911(uLocal_322[0], uLocal_322[1], &uLocal_655, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 1f, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				func_269(uLocal_322[1]);
				bLocal_382 = true;
				WEAPON::_HIDE_PED_WEAPONS(uLocal_322[0], 2, false);
				__LIB_1__::func_148(&uLocal_449);
				iLocal_395++;
			}
			else if (!__LIB_0__::func_491(uLocal_322[1], 1245594896))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_322[1], uLocal_322[2]);
			}
			break;
		case 1:
			iLocal_395++;
			break;
		case 2:
			if (__LIB_0__::func_94(uLocal_322[1], vLocal_14, 1) < 5f)
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_322[0], ENTITY::GET_ENTITY_COORDS(uLocal_322[0], true, false), 50f, 0, false, false, false, false);
				PED::SET_PED_KEEP_TASK(uLocal_322[0], true);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_322[1], ENTITY::GET_ENTITY_COORDS(uLocal_322[1], true, false), 50f, 0, false, false, false, false);
				PED::SET_PED_KEEP_TASK(uLocal_322[1], true);
				iLocal_395++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_115()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = -1;
	if (!bLocal_392)
	{
		return false;
	}
	if ((__LIB_3__::func_649(Global_35, uLocal_322[2]) || PED::_IS_PED_LASSOED(uLocal_322[2])) || PED::_IS_PED_HOGTIED(uLocal_322[2]))
	{
		switch (iLocal_407)
		{
			case 0:
				if ((__LIB_0__::func_665(Global_35, uLocal_322[0], 1, 1) < 20f && __LIB_0__::func_665(uLocal_322[2], uLocal_322[0], 1, 1) < 20f) || (__LIB_0__::func_665(Global_35, uLocal_322[1], 1, 1) < 20f && __LIB_0__::func_665(uLocal_322[2], uLocal_322[1], 1, 1) < 20f))
				{
					if (__LIB_3__::func_722(uLocal_322[iLocal_468], &(Local_23.f_5), &iLocal_480, 0))
					{
						bLocal_380 = true;
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "", 1f, 10f, 4);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, uLocal_322[2], uLocal_322[2], 1.5f, 0, 3f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						TASK::TASK_AIM_AT_ENTITY(0, uLocal_322[2], -1, 0, 0);
						__LIB_1__::func_474(uLocal_322[0], &iVar4, 0, 0, 1, 1);
						TASK::OPEN_SEQUENCE_TASK(&iVar5);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "", 1f, 10f, 4);
						__LIB_1__::func_474(uLocal_322[1], &iVar5, 1f, 1f, 1, 1);
						__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(31), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						WEAPON::_HIDE_PED_WEAPONS(uLocal_322[1], 2, false);
						__LIB_1__::func_148(&uLocal_452);
						iLocal_407 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_3__::func_649(uLocal_322[1], uLocal_322[2]))
				{
					if (!__LIB_0__::func_491(uLocal_322[1], 1245594896))
					{
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_322[1], uLocal_322[2]);
					}
					if (!__LIB_0__::func_75(&uLocal_458))
					{
						__LIB_1__::func_148(&uLocal_458);
					}
					else if (__LIB_0__::func_265(&uLocal_458) > 10f)
					{
						func_272(0);
						__LIB_1__::func_148(&uLocal_449);
						bLocal_355 = true;
					}
				}
				else
				{
					iLocal_407++;
				}
				break;
			case 2:
				if (!__LIB_2__::func_136(uLocal_322[0], 0))
				{
					__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_452);
					iLocal_407++;
				}
				break;
			case 3:
				if (!__LIB_2__::func_136(uLocal_322[1], 0) && __LIB_3__::func_649(uLocal_322[1], uLocal_322[2]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1617.26f, -1353.18f, 43.6f, 1f, -1, 1f, 16, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1679.66f, -1303.13f, 41.57f, 1f, -1, 1f, 16, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1715.49f, -1302.33f, 42.28f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1757.25f, -1306.82f, 42.99f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1810.79f, -1329.1f, 42.96f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_14, 1f, -1, 0.25f, 0, 40000f);
					__LIB_1__::func_474(uLocal_322[1], &iVar6, 0, 0, 1, 1);
					__LIB_3__::func_887(uLocal_322[1], uLocal_322[0], &uLocal_655, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
					__LIB_3__::func_911(uLocal_322[0], uLocal_322[1], &uLocal_655, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 1f, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
					__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_452);
					iLocal_407++;
				}
				break;
			case 4:
				if ((__LIB_0__::func_265(&uLocal_452) > 5f && !__LIB_2__::func_136(uLocal_322[1], 0)) && !__LIB_2__::func_136(uLocal_322[0], 0))
				{
					__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_452);
					iLocal_407++;
				}
				break;
			case 5:
				if (!__LIB_2__::func_136(uLocal_322[0], 0))
				{
					__LIB_2__::func_303(uLocal_322[1], uLocal_322[0], func_107(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_452);
					iLocal_407++;
				}
				break;
			case 6:
				if (!__LIB_2__::func_136(uLocal_322[1], 0))
				{
					__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_452);
					iLocal_407++;
				}
				break;
			case 7:
				if (__LIB_0__::func_94(uLocal_322[1], 1810.79f, -1329.1f, 42.96f, 1) < 5f)
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uLocal_322[1], uLocal_322[2], ENTITY::GET_ENTITY_COORDS(uLocal_322[1], true, false), 1f, 0);
					__LIB_1__::func_148(&uLocal_452);
					iLocal_407++;
				}
				break;
			case 8:
				if (!__LIB_3__::func_649(Global_35, uLocal_322[2]))
				{
					if (!bLocal_388)
					{
						__LIB_2__::func_303(uLocal_322[2], uLocal_322[1], func_107(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_388 = true;
					}
					if (__LIB_0__::func_665(uLocal_322[1], uLocal_322[2], 1, 1) < 5f)
					{
						__LIB_2__::func_279(uLocal_322[2], 1);
						vVar1 = { PED::GET_PED_BONE_COORDS(uLocal_322[2], 21030, 0f, 0f, 0f) };
						PED::_0x4C57F27D1554E6B0(uLocal_322[0], vVar1, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
						iLocal_407 = 11;
					}
				}
				break;
			case 9:
				if (iVar0 == 0)
				{
					WEAPON::_HIDE_PED_WEAPONS(uLocal_322[0], 2, false);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_322[0], uLocal_322[2]);
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(uLocal_322[1], 2, false);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_322[1], uLocal_322[2]);
				}
				iLocal_407++;
				break;
			case 10:
				if (ENTITY::_0x61914209C36EFDDB(uLocal_322[2]) == 5 || __LIB_3__::func_690(uLocal_322[iVar0]))
				{
					iLocal_407++;
				}
				break;
			case 11:
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_322[0], vLocal_14, 20f, 0, false, false, false, false);
				PED::SET_PED_KEEP_TASK(uLocal_322[0], true);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_322[1], vLocal_14, 20f, 0, false, false, false, false);
				PED::SET_PED_KEEP_TASK(uLocal_322[1], true);
				__LIB_1__::func_148(&uLocal_452);
				iLocal_407++;
				break;
			case 12:
				return true;
		}
	}
	return false;
}

void func_249()
{
	if (__LIB_2__::func_1(uLocal_322[2], 0, 1) && !bLocal_354)
	{
		iLocal_399 = func_415(&(uLocal_322[2]), &iLocal_517, 45f, &Local_482, &(Local_23.f_192), 0f, 1, 0, 0, 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		switch (iLocal_411)
		{
			case 0:
				if (!bLocal_361)
				{
					__LIB_2__::func_411(&(Local_482[1 /*17*/]), 0, 0);
					if (iLocal_399 == 0)
					{
						__LIB_2__::func_411(&(Local_482[0 /*17*/]), 0, 0);
						__LIB_2__::func_303(Global_35, uLocal_322[2], func_107(51), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_446);
						bLocal_361 = true;
					}
				}
				else
				{
					if (__LIB_0__::func_265(&uLocal_446) > 2f)
					{
						__LIB_2__::func_411(&(Local_482[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_482[1 /*17*/]), 1, 0);
					}
					if (iLocal_399 == 1)
					{
						__LIB_2__::func_411(&(Local_482[1 /*17*/]), 0, 0);
						__LIB_2__::func_303(Global_35, uLocal_322[2], func_107(52), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_362 = true;
						iLocal_411++;
					}
				}
				break;
			case 1:
				__LIB_2__::func_411(&(Local_482[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_482[0 /*17*/]), 0, 0);
				break;
		}
	}
}

void func_250()
{
	iLocal_409 = func_415(&(uLocal_322[0]), &iLocal_608, 45f, &Local_538, &(Local_23.f_192), 0f, 1, 0, "", iLocal_650, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_410 = func_415(&(uLocal_322[1]), &iLocal_629, 45f, &Local_573, &(Local_23.f_192), 0f, 1, 0, "", iLocal_650, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (!bLocal_354 && !bLocal_355)
	{
		if (bLocal_382 && iLocal_408 < 8)
		{
			if (__LIB_0__::func_75(&uLocal_449))
			{
				if (__LIB_0__::func_265(&uLocal_449) > 5f)
				{
					if (func_417())
					{
						func_272(0);
						__LIB_1__::func_148(&uLocal_449);
						iLocal_408 = 8;
					}
					else
					{
						bLocal_359 = false;
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_449);
			}
		}
		switch (iLocal_408)
		{
			case 0:
				__LIB_2__::func_411(&(Local_538[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_538[1 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_573[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_573[1 /*17*/]), 1, 0);
				iLocal_408++;
				break;
			case 1:
				if (iLocal_409 == 0 || iLocal_410 == 0)
				{
					__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(53), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_364 = true;
				}
				if (iLocal_409 == 1 || iLocal_410 == 1)
				{
					__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_391 = true;
					__LIB_3__::func_465(12, 0, 0, 0, uLocal_322[0], 0, 1065353216 /* Float: 1f */, 0);
					bLocal_365 = true;
				}
				if (bLocal_364 == 1 || bLocal_365 == 1)
				{
					func_272(0);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 45;
				}
				if (bLocal_356)
				{
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408++;
				}
				if (func_419())
				{
					__LIB_1__::func_148(&uLocal_449);
					func_272(0);
					iLocal_408 = 45;
				}
				break;
			case 2:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_360(&(Local_538[0 /*17*/]), __LIB_2__::func_460(7));
					__LIB_2__::func_360(&(Local_538[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_573[0 /*17*/]), __LIB_2__::func_460(7));
					__LIB_2__::func_360(&(Local_573[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_608, 0);
					__LIB_2__::func_451(&iLocal_629, 0);
					func_272(1);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408++;
				}
				else
				{
					func_272(0);
				}
				break;
			case 3:
				if (func_419())
				{
					__LIB_1__::func_148(&uLocal_449);
					func_272(0);
					iLocal_408 = 45;
				}
				if (iLocal_409 == 0 || iLocal_410 == 0)
				{
					__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(53), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_272(0);
					bLocal_364 = true;
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 45;
				}
				else if (iLocal_409 == 1 || iLocal_410 == 1)
				{
					__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(58), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_365 = true;
					func_272(0);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 45;
				}
				break;
			case 45:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					bLocal_359 = true;
					func_421();
					func_422();
					if (bLocal_364)
					{
						__LIB_2__::func_504(uLocal_322[1], 0);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_322[0], Global_35, -1, 0, 51, 1);
						__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(54), "", 100f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_449);
						iLocal_408 = 4;
					}
					else if (bLocal_365)
					{
						__LIB_2__::func_504(uLocal_322[0], 0);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_322[1], Global_35, -1, 0, 51, 1);
						__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(55), "", 100f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						bLocal_391 = true;
						__LIB_1__::func_148(&uLocal_449);
						iLocal_408 = 4;
					}
					else if (bLocal_356)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_322[1], Global_35, -1, 0, 51, 1);
						__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(15), "", 100f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_449);
						iLocal_408 = 4;
					}
					else if (!bLocal_383)
					{
						if (!__LIB_0__::func_75(&uLocal_461))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_322[1], Global_35, -1, 0, 51, 1);
							__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(17), "", 100f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_461);
						}
						else if (__LIB_0__::func_265(&uLocal_461) > 2f)
						{
							if (!__LIB_2__::func_136(uLocal_322[0], 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(uLocal_322[0], Global_35, -1, 0, 51, 1);
								__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(19), "", 100f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								bLocal_383 = true;
							}
						}
					}
				}
				break;
			case 4:
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_314, false) || fLocal_464 > 0.48f)
				{
					func_422();
				}
				if (__LIB_0__::func_265(&uLocal_449) > 3f)
				{
					__LIB_2__::func_360(&(Local_538[0 /*17*/]), __LIB_2__::func_460(8));
					__LIB_2__::func_360(&(Local_538[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_573[0 /*17*/]), __LIB_2__::func_460(8));
					__LIB_2__::func_360(&(Local_573[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_608, 0);
					__LIB_2__::func_451(&iLocal_629, 0);
					func_272(1);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408++;
				}
				else
				{
					func_272(0);
				}
				break;
			case 5:
				if (bLocal_364 || bLocal_365)
				{
					if (func_419())
					{
						bLocal_359 = true;
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_314, false) || fLocal_464 > 0.48f)
						{
							func_422();
						}
					}
					else if (!__LIB_2__::func_123(uLocal_322[1], uLocal_322[0], 30f) || (__LIB_0__::func_491(uLocal_322[1], 1630799643) && !__LIB_0__::func_491(uLocal_322[1], -875674219)))
					{
						if (fLocal_464 > 0.6f && !bLocal_360)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_322[1], uLocal_322[0], 0, -1f, -1f, -1f);
							bLocal_360 = true;
							bLocal_359 = false;
						}
					}
				}
				if (func_419() && __LIB_0__::func_265(&uLocal_449) > 5f)
				{
					__LIB_1__::func_148(&uLocal_449);
					func_272(0);
					iLocal_408 = 65;
				}
				else if (__LIB_0__::func_265(&uLocal_449) > 8f)
				{
					bLocal_359 = false;
				}
				if (iLocal_409 == 0 || iLocal_410 == 0)
				{
					if (!bLocal_391)
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], "RE_GB_RHD_V1_THANK_ANT_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_272(0);
					bLocal_377 = true;
					__LIB_1__::func_148(&uLocal_449);
					bLocal_374 = true;
					iLocal_408 = 65;
				}
				else if (iLocal_409 == 1 || iLocal_410 == 1)
				{
					func_272(0);
					__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(56), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_378 = true;
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 65;
				}
				break;
			case 65:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					bLocal_359 = true;
					TASK::TASK_LOOK_AT_ENTITY(uLocal_322[1], Global_35, 3000, 0, 51, 1);
					if (bLocal_377)
					{
						__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(69), "", 100f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (bLocal_378)
					{
						__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(60), "", 100f, 1, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					WEAPON::_0x94A3C1B804D291EC(uLocal_322[0], 0, 0, 0, 0);
					iLocal_408 = 6;
				}
				break;
			case 6:
				if ((__LIB_0__::func_265(&uLocal_449) > 3f && !__LIB_2__::func_136(uLocal_322[0], 0)) && !__LIB_2__::func_136(uLocal_322[1], 0))
				{
					__LIB_2__::func_451(&iLocal_608, 0);
					__LIB_2__::func_451(&iLocal_629, 0);
					func_272(1);
					__LIB_1__::func_148(&uLocal_449);
					if (bLocal_374)
					{
						bLocal_359 = false;
						iLocal_408++;
					}
					else
					{
						iLocal_408 = 75;
					}
				}
				else
				{
					func_272(0);
				}
				break;
			case 75:
				if (__LIB_0__::func_75(&uLocal_449))
				{
					if (__LIB_0__::func_265(&uLocal_449) > 5f)
					{
						if (func_417())
						{
							func_272(0);
							__LIB_1__::func_148(&uLocal_449);
							iLocal_408 = 8;
						}
						else
						{
							bLocal_359 = false;
						}
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_449);
				}
				if (iLocal_409 == 1 || iLocal_410 == 1)
				{
					if (bLocal_391)
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(59), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], "RE_GB_RHD_V1_THANK_ANTAGONIZE_1", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_272(0);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 8;
				}
				if (iLocal_409 == 0 || iLocal_410 == 0)
				{
					if (!bLocal_391)
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], "RE_GB_RHD_V1_THANK_ANT_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_272(0);
					bLocal_374 = true;
					bLocal_377 = true;
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 6;
				}
				break;
			case 7:
				if (__LIB_0__::func_75(&uLocal_449))
				{
					if (__LIB_0__::func_265(&uLocal_449) > 10f)
					{
						if (func_417())
						{
							func_272(0);
							__LIB_1__::func_148(&uLocal_449);
							iLocal_408 = 8;
						}
						else
						{
							bLocal_359 = false;
						}
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_449);
				}
				__LIB_2__::func_411(&(Local_538[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_573[0 /*17*/]), 0, 0);
				if (iLocal_409 == 1 || iLocal_410 == 1)
				{
					if (bLocal_391)
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(59), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_322[0], "RE_GB_RHD_V1_THANK_ANTAGONIZE_1", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_272(0);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408++;
				}
				break;
			case 8:
				func_421();
				func_422();
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					bLocal_359 = true;
					if (__LIB_0__::func_265(&uLocal_449) > 2f)
					{
						bLocal_363 = true;
						bLocal_365 = true;
						iLocal_408++;
					}
				}
				break;
			case 9:
				break;
		}
	}
	else
	{
		switch (iLocal_412)
		{
			case 0:
				func_272(0);
				iLocal_412++;
				break;
			case 1:
				if (__LIB_2__::func_410(17) || bLocal_386)
				{
					__LIB_2__::func_360(&(Local_538[0 /*17*/]), __LIB_2__::func_460(7));
					__LIB_2__::func_360(&(Local_538[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_573[0 /*17*/]), __LIB_2__::func_460(7));
					__LIB_2__::func_360(&(Local_573[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_608, 0);
					__LIB_2__::func_451(&iLocal_629, 0);
					func_272(0);
					iLocal_412++;
				}
				else
				{
					iLocal_412 = 3;
				}
				break;
			case 2:
				if (iLocal_396 > 1)
				{
					__LIB_2__::func_411(&(Local_538[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_573[0 /*17*/]), 1, 0);
					if (bLocal_384)
					{
						if (iLocal_409 == 0 || iLocal_410 == 0)
						{
							__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_412++;
						}
					}
					else if (bLocal_386)
					{
						if (iLocal_409 == 0 || iLocal_410 == 0)
						{
							__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_412++;
						}
					}
					else if (bLocal_385)
					{
						if (iLocal_409 == 0 || iLocal_410 == 0)
						{
							__LIB_2__::func_303(Global_35, uLocal_322[0], func_107(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_412++;
						}
					}
				}
				break;
			case 3:
				func_272(0);
				break;
		}
	}
}

void func_253()
{
	AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", uLocal_322[1], "REFC_Sounds", false, 0, 0);
}

void func_261()
{
	if (!bLocal_372 && !Local_23.f_46)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_415, 1, 0) && __LIB_0__::func_665(Global_35, uLocal_322[0], 1, 1) < 12f)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_322[0], 192, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_322[1], 192, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_322[0], 192, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_322[1], 192, false);
		}
	}
}

bool func_262()
{
	float fVar0;
	float fVar1;
	switch (iLocal_397)
	{
		case 0:
			__LIB_2__::func_480(&Local_538, 1, 1, 1, 0);
			__LIB_2__::func_480(&Local_573, 1, 1, 1, 0);
			if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
			{
				fVar0 = 0.4f;
				fVar1 = 0.4f;
			}
			else
			{
				fVar0 = 0.1f;
				fVar1 = 0.1f;
			}
			if (!bLocal_365 && !bLocal_363)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("REL_GREYS"), joaat("REL_BRAITHWAITES"));
				func_435(uLocal_322[0], "TaskCombat_High", 0f, 0.1f, 1, 0);
				func_435(uLocal_322[1], "TaskCombat_High", fVar0, fVar1, 1, 0);
				func_436();
				if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
				{
					if (!bLocal_370)
					{
						__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(20), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_397++;
				}
				else
				{
					if (!bLocal_370)
					{
						__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(20), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_397 = 4;
				}
			}
			else
			{
				func_435(uLocal_322[0], "Default_Brave", 0f, 0.2f, 1, 1);
				func_435(uLocal_322[1], "Default_Brave", fVar0, fVar1, 1, 1);
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_322[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_2__::func_788(&(uLocal_322[2]), 1, 0, 1);
				iLocal_397++;
				__LIB_1__::func_148(&uLocal_431);
			}
			break;
		case 1:
			if (!bLocal_365 && !bLocal_363)
			{
				__LIB_1__::func_148(&uLocal_431);
				iLocal_397 = 3;
			}
			else if (__LIB_0__::func_265(&uLocal_431) > 1f)
			{
				__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(20), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_431);
				iLocal_397++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_431) > 1f)
			{
				__LIB_1__::func_148(&uLocal_431);
				iLocal_397++;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_431) > 1f)
			{
				if (__LIB_2__::func_1(uLocal_322[1], 0, 1) && bLocal_355)
				{
					__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(21), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_397++;
			}
			break;
		case 4:
			if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_417[0]))
				{
					__LIB_2__::func_73(uLocal_322[0], &(uLocal_417[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
			}
			if (__LIB_2__::func_1(uLocal_322[1], 0, 1))
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_417[1]))
				{
					__LIB_2__::func_73(uLocal_322[1], &(uLocal_417[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
			}
			__LIB_1__::func_148(&uLocal_431);
			iLocal_397++;
			break;
		case 5:
			if (__LIB_0__::func_265(&uLocal_431) > 10f || (!PED::_IS_PED_CARRYING(uLocal_322[0]) && !PED::_IS_PED_CARRYING(uLocal_322[1])))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[0], 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[1], 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[0], 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[1], 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[1], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[0], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[0], 53, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[1], 53, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[0], 52, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_322[1], 52, false);
				__LIB_1__::func_148(&uLocal_431);
				iLocal_397++;
			}
			break;
		case 6:
			if (!__LIB_2__::func_1(uLocal_322[0], 0, 1) && !__LIB_2__::func_1(uLocal_322[1], 0, 1))
			{
				__LIB_1__::func_148(&uLocal_431);
				iLocal_397++;
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_431) > 2f)
			{
				__LIB_2__::func_303(Global_35, Global_35, "RE_GB_RHD_V1_FINAL_KILLED_GRAY", "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_263()
{
	int iVar0;
	int iVar1;
	switch (iLocal_398)
	{
		case 0:
			__LIB_2__::func_303(uLocal_322[2], Global_35, func_107(33), "", 150f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			func_436();
			__LIB_1__::func_148(&uLocal_434);
			bLocal_366 = true;
			if (!bLocal_356)
			{
				iLocal_398++;
			}
			else
			{
				bLocal_392 = true;
				iLocal_398 = 100;
			}
			break;
		case 1:
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_314, "ATTACKER_A", uLocal_322[0]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_314, "ATTACKER_B", uLocal_322[1]);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Brave", 1f, 10f, 4);
			if (__LIB_2__::func_1(uLocal_322[2], 0, 1))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1559.2f, -1414.69f, 60.25f, uLocal_322[2], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_SHOOT_AT_ENTITY(0, uLocal_322[2], -1, 0, 0);
			}
			__LIB_1__::func_474(uLocal_322[0], &iVar0, 0, 0, 1, 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Brave", 1f, 10f, 4);
			if (__LIB_2__::func_1(uLocal_322[2], 0, 1))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1555.08f, -1410.19f, 60.59f, uLocal_322[2], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_SHOOT_AT_ENTITY(0, uLocal_322[2], -1, 0, 0);
			}
			__LIB_1__::func_474(uLocal_322[1], &iVar1, 1f, 2f, 1, 1);
			if (!__LIB_2__::func_1(uLocal_322[2], 0, 0) && __LIB_2__::func_410(17))
			{
				__LIB_2__::func_303(Global_35, Global_35, "RE_GB_RHD_V1_FINAL_KILLED_BRT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			bLocal_356 = true;
			iLocal_398++;
			break;
		case 2:
			if (__LIB_0__::func_665(uLocal_322[2], uLocal_322[0], 1, 1) > 80f && __LIB_0__::func_665(uLocal_322[2], uLocal_322[1], 1, 1) > 80f)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_322[0], 0);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_322[1], 0);
				bLocal_386 = true;
				iLocal_398 = 5;
			}
			else
			{
				if (PED::_IS_PED_LASSOED(uLocal_322[2]) || PED::_IS_PED_HOGTIED(uLocal_322[2]))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_322[0], 0);
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_322[1], 0);
					bLocal_385 = true;
					iLocal_398 = 3;
				}
				if (!__LIB_2__::func_1(uLocal_322[2], 0, 0))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_322[0], 0);
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_322[1], 0);
					bLocal_384 = true;
					iLocal_398 = 4;
				}
			}
			break;
		case 3:
			if (func_438())
			{
				iLocal_398 = 101;
			}
			break;
		case 4:
			if (func_439())
			{
				iLocal_398 = 101;
			}
			break;
		case 5:
			if (func_440())
			{
				bLocal_372 = true;
				iLocal_398 = 101;
			}
			break;
		case 100:
			iLocal_398++;
			break;
		case 101:
			return true;
	}
	return false;
}

void func_265()
{
	if (!bLocal_375)
	{
		if (__LIB_0__::func_94(uLocal_322[0], 1644.96f, -1404.63f, 45.22f, 1) < 5f)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_322[0], vLocal_14, 1f, -1, 1f, 16, 40000f);
			bLocal_375 = true;
		}
	}
}

void func_269(int iParam0)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1598.12f, -1410.96f, 52.34f, 1f, -1, 1f, 16, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1617.26f, -1353.18f, 43.6f, 1f, -1, 1f, 16, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1679.66f, -1303.13f, 41.57f, 1f, -1, 1f, 16, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1715.49f, -1302.33f, 42.28f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1757.25f, -1306.82f, 42.99f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1810.79f, -1329.1f, 42.96f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_14, 1f, -1, 0.25f, 0, 40000f);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 50f, 0, false, false, false, false);
	__LIB_1__::func_474(iParam0, &iVar0, 1f, 1f, 1, 1);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_400);
	if (!bLocal_387)
	{
		__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(14), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		bLocal_387 = true;
	}
}

void func_272(bool bParam0)
{
	__LIB_2__::func_411(&(Local_538[0 /*17*/]), bParam0, 0);
	__LIB_2__::func_411(&(Local_538[1 /*17*/]), bParam0, 0);
	__LIB_2__::func_411(&(Local_573[0 /*17*/]), bParam0, 0);
	__LIB_2__::func_411(&(Local_573[1 /*17*/]), bParam0, 0);
}

int func_415(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_518(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_417()
{
	__LIB_3__::func_398(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_322[0], true, false), &uLocal_693, 1061158912 /* Float: 0.75f */, 0, 0);
	if ((__LIB_3__::func_193(&uLocal_693, 6000) && __LIB_0__::func_665(Global_35, uLocal_322[0], 1, 1) < 2f) || __LIB_0__::func_665(Global_35, uLocal_322[1], 1, 1) < 2f)
	{
		return true;
	}
	return false;
}

bool func_419()
{
	int iVar0;
	iVar0 = -1;
	iVar0 = __LIB_3__::func_885(&uLocal_322, Global_36, 0, 1, 0, 1);
	if (iVar0 > -1)
	{
		if (!bLocal_358)
		{
			if (__LIB_0__::func_94(uLocal_322[iVar0], Global_36, 1) < 12f)
			{
				bLocal_358 = true;
				__LIB_2__::func_613(&(Local_23.f_5), 1);
			}
		}
		else if (__LIB_0__::func_94(uLocal_322[iVar0], Global_36, 1) >= 12f)
		{
			__LIB_2__::func_613(&(Local_23.f_5), 0);
		}
	}
	iLocal_468 = 0;
	while (iLocal_468 <= 1)
	{
		if (bLocal_372)
		{
			if (__LIB_3__::func_722(uLocal_322[iLocal_468], &(Local_23.f_5), &iLocal_480, 0) && __LIB_0__::func_665(Global_35, uLocal_322[iLocal_468], 1, 1) < 10f)
			{
				return true;
			}
		}
		else if ((__LIB_1__::func_205(Global_35, iLocal_415, 1, 0) && __LIB_0__::func_665(Global_35, uLocal_322[iLocal_468], 1, 1) < 12f) || (__LIB_3__::func_722(uLocal_322[iLocal_468], &(Local_23.f_5), &iLocal_480, 0) && __LIB_0__::func_665(Global_35, uLocal_322[iLocal_468], 1, 1) < 7f))
		{
			return true;
		}
		iLocal_468++;
	}
	return false;
}

void func_421()
{
	int iVar0;
	int iVar1;
	iLocal_472 = __LIB_3__::func_547(uLocal_322[1], Global_35, 0.5f);
	vLocal_469 = { 1555.13f, -1411.07f, 60.62f };
	if (iLocal_472 == 3)
	{
	}
	else if (iLocal_472 == 2)
	{
	}
	else if (iLocal_472 == 1 || iLocal_472 == 0)
	{
	}
	if (!bLocal_389)
	{
		if (!bLocal_356)
		{
			if (!__LIB_0__::func_491(uLocal_322[1], -1073489615))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1f, 2f, 4);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vLocal_469, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 4, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
				__LIB_1__::func_474(uLocal_322[1], &iVar0, 0, 0, 1, 1);
				bLocal_389 = true;
			}
		}
		else if (!__LIB_0__::func_491(uLocal_322[1], -1073489615))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1.5f, 10f, 4);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			if (__LIB_0__::func_94(uLocal_322[1], vLocal_469, 1) < 5f)
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vLocal_469, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + Vector(0f, 3f, 0f), Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			__LIB_1__::func_474(uLocal_322[1], &iVar1, 0, 0, 1, 1);
			bLocal_389 = true;
		}
	}
}

void func_422()
{
	int iVar0;
	if (bLocal_356 && !__LIB_0__::func_491(uLocal_322[0], -875674219))
	{
		if (!bLocal_357)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1f, 10f, 4);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			bLocal_357 = true;
			__LIB_1__::func_474(uLocal_322[0], &iVar0, 0, 0, 1, 1);
		}
	}
}

void func_435(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_1(iParam0, 0, 1) && !PED::IS_PED_IN_COMBAT(0, Global_35))
	{
		if (!bParam5)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if ((PED::_IS_PED_CARRYING(iParam0) || __LIB_0__::func_491(0, -208384378)) || __LIB_0__::func_491(iParam0, 1245594896))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
			}
			if (!bLocal_370)
			{
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), iParam1, 1f, 10f, 4);
			}
			if (bParam4)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			__LIB_1__::func_474(iParam0, &iVar0, fParam2, fParam3, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if ((PED::_IS_PED_CARRYING(iParam0) || ENTITY::_0x61914209C36EFDDB(iParam0) == 4) || __LIB_0__::func_491(iParam0, 1245594896))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
			}
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), iParam1, 0.5f, 0f, 4);
			if (!__LIB_0__::func_491(iParam0, -1073489615))
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			}
			__LIB_1__::func_474(iParam0, &iVar1, fParam2, fParam3, 1, 1);
		}
	}
}

void func_436()
{
	int iVar0;
	iLocal_473 = __LIB_3__::func_547(uLocal_322[1], Global_35, 1f);
	if (!bLocal_356)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (iLocal_473 == 3)
		{
			TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1545.7f, -1336.51f, 59.11f, 5f, -1, 1024, 1077936128 /* Float: 3f */, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		else if (iLocal_473 == 2)
		{
			TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1582.94f, -1500.41f, 61.82f, 5f, -1, 1024, 1077936128 /* Float: 3f */, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		__LIB_1__::func_474(uLocal_322[2], &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_322[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
}

bool func_438()
{
	vector3 vVar0;
	switch (iLocal_404)
	{
		case 0:
			if (__LIB_2__::func_1(uLocal_322[1], 0, 1))
			{
				TASK::TASK_GO_TO_ENTITY(uLocal_322[1], uLocal_322[2], -1, 2f, 2f, 2f, 0);
			}
			if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
			{
				TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_322[0], uLocal_322[1], uLocal_322[2], 0, -1, 1056964608 /* Float: 0.5f */, 2f, 0);
			}
			__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(44), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_322[0], Global_35, 3000, 0, 51, 1);
			__LIB_1__::func_148(&uLocal_437);
			iLocal_404++;
			break;
		case 1:
			if ((__LIB_0__::func_265(&uLocal_437) > 20f || __LIB_0__::func_665(uLocal_322[0], uLocal_322[2], 1, 1) < 10f) || __LIB_0__::func_665(uLocal_322[1], uLocal_322[2], 1, 1) < 10f)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_322[1], false);
				__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(45), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_322[1], uLocal_322[2], uLocal_322[2], 0, -1, 1056964608 /* Float: 0.5f */, 2f, 0);
				__LIB_1__::func_148(&uLocal_437);
				iLocal_404++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_437) > 2f)
			{
				__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(46), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_437);
				iLocal_404++;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_437) > 2f && __LIB_0__::func_665(uLocal_322[1], uLocal_322[2], 1, 1) < 3f)
			{
				__LIB_2__::func_303(uLocal_322[2], uLocal_322[1], func_107(47), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				if (!PED::_IS_PED_HOGTIED(uLocal_322[2]))
				{
					__LIB_2__::func_279(uLocal_322[2], 1);
					vVar0 = { PED::GET_PED_BONE_COORDS(uLocal_322[2], 21030, 0f, 0f, 0f) };
					PED::_0x4C57F27D1554E6B0(uLocal_322[1], vVar0, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
				}
				__LIB_1__::func_148(&uLocal_437);
				iLocal_404++;
			}
			break;
		case 4:
			if (!__LIB_3__::func_649(uLocal_322[1], uLocal_322[2]))
			{
				if (!__LIB_0__::func_491(uLocal_322[1], 1245594896))
				{
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_322[1], uLocal_322[2]);
				}
				if (!__LIB_0__::func_75(&uLocal_437))
				{
					__LIB_1__::func_148(&uLocal_437);
				}
				else if (__LIB_0__::func_265(&uLocal_437) > 8f)
				{
					func_272(0);
					__LIB_1__::func_148(&uLocal_449);
					iLocal_408 = 8;
				}
			}
			else
			{
				iLocal_404++;
			}
			break;
		case 5:
			if (ENTITY::_0x61914209C36EFDDB(uLocal_322[2]) == 5)
			{
				iLocal_404++;
			}
			break;
		case 6:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_322[0], uLocal_322[1], 3000, -1f, -1f, -1f);
			__LIB_1__::func_148(&uLocal_437);
			iLocal_404++;
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_437) > 2f)
			{
				if (!bLocal_387)
				{
					__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(14), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_387 = true;
				}
				iLocal_404++;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

bool func_439()
{
	int iVar0;
	int iVar1;
	int iVar2;
	PED::SET_PED_MOVE_RATE_OVERRIDE(uLocal_322[0], 1.15f);
	PED::SET_PED_MOVE_RATE_OVERRIDE(uLocal_322[1], 1.15f);
	switch (iLocal_396)
	{
		case 0:
			if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1f, 60f, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
				if (__LIB_0__::func_94(uLocal_322[2], 1554.66f, -1411.51f, 60.64f, 1) > 15f)
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_322[1], -2f, -2f, 0f, 3f, -1, 3f, 1, 1, 0, 0, 1);
				}
				else
				{
					bLocal_390 = true;
				}
				__LIB_1__::func_474(uLocal_322[0], &iVar0, 0f, 0.8f, 1, 1);
			}
			if (__LIB_2__::func_1(uLocal_322[1], 0, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1f, 60f, 4);
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uLocal_322[2]);
				__LIB_1__::func_474(uLocal_322[1], &iVar1, 1f, 1f, 1, 1);
			}
			__LIB_1__::func_148(&uLocal_437);
			iLocal_396++;
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_437) > 2f && __LIB_0__::func_665(uLocal_322[0], Global_35, 1, 1) < 30f)
			{
				__LIB_2__::func_303(uLocal_322[0], Global_35, func_107(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_322[0], Global_35, 3000, 0, 51, 1);
				__LIB_1__::func_148(&uLocal_437);
				iLocal_396++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_437) > 3f)
			{
				__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(38), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_322[1], Global_35, 3000, 0, 51, 1);
				__LIB_1__::func_148(&uLocal_437);
				iLocal_396++;
			}
			break;
		case 3:
			if ((__LIB_0__::func_491(uLocal_322[1], 1245594896) || (__LIB_0__::func_265(&uLocal_437) > 3f && __LIB_0__::func_665(uLocal_322[1], uLocal_322[2], 1, 1) < 5f)) || __LIB_0__::func_265(&uLocal_437) > 3f)
			{
				if (!__LIB_2__::func_136(uLocal_322[1], 0))
				{
					__LIB_2__::func_303(uLocal_322[1], uLocal_322[0], func_107(39), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_437);
					iLocal_396++;
				}
			}
			break;
		case 4:
			if (ENTITY::_0x61914209C36EFDDB(uLocal_322[2]) == 5 || __LIB_3__::func_649(uLocal_322[1], uLocal_322[2]))
			{
				__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(40), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_437);
				if (!bLocal_390)
				{
					iLocal_396++;
				}
				else
				{
					iLocal_396 = 55;
				}
			}
			break;
		case 55:
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1571.92f, -1432.24f, 59.66f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_322[1], -1, -1f, -1f, -1f);
			__LIB_1__::func_474(uLocal_322[0], &iVar2, 0, 0, 1, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_322[1], 1571.92f, -1432.24f, 59.66f, 1f, -1, 0.25f, 0, 40000f);
			__LIB_1__::func_148(&uLocal_437);
			iLocal_396 = 5;
			break;
		case 5:
			if (!bLocal_390)
			{
				return true;
			}
			else if (__LIB_0__::func_94(uLocal_322[1], 1571.92f, -1432.24f, 59.66f, 1) < 3f || __LIB_0__::func_265(&uLocal_437) > 20f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_440()
{
	int iVar0;
	int iVar1;
	switch (iLocal_403)
	{
		case 0:
			if (__LIB_2__::func_1(uLocal_322[0], 0, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1f, 0f, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
				__LIB_1__::func_474(uLocal_322[0], &iVar0, 0f, 0.8f, 1, 1);
			}
			if (__LIB_2__::func_1(uLocal_322[1], 0, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 1f, 0f, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
				__LIB_1__::func_474(uLocal_322[1], &iVar1, 1f, 1f, 1, 1);
			}
			__LIB_2__::func_303(uLocal_322[1], Global_35, func_107(41), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_322[1], Global_35, 3000, 0, 51, 1);
			__LIB_1__::func_148(&uLocal_437);
			iLocal_403++;
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_437) > 3f)
			{
				if (!bLocal_387)
				{
					__LIB_2__::func_303(uLocal_322[0], uLocal_322[1], func_107(14), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_387 = true;
				}
				__LIB_1__::func_148(&uLocal_437);
				iLocal_403++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_437) > 3f)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_518(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_518(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

