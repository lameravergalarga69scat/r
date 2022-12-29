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
	var uLocal_14 = 4;
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
	struct<2> Local_47[4];
	struct<12> Local_56[3];
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	struct<32> Local_99[1];
	struct<193> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_325 = 0;
	int iLocal_326 = 0;
	struct<5> Local_327 = { 0, 0, 0, 0, 0 } ;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	struct<23> Local_337 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	int iLocal_362 = 0;
	char[] cLocal_363[8] = 0;
	struct<4> Local_364 = { 0, 0, 0, 0 } ;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	struct<4> Local_376 = { 0, 0, 0, 0 } ;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	struct<4> Local_388 = { 0, 0, 0, 0 } ;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	struct<24> Local_400 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433[1] = { 0 };
	var uLocal_435[1] = { 0 };
	int iLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	var uLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	float fLocal_457 = 0f;
	float fLocal_458 = 0f;
	float fLocal_459 = 0f;
	float fLocal_460 = 0f;
	float fLocal_461 = 0f;
	float fLocal_462 = 0f;
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
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	bool bLocal_538 = false;
	int iLocal_539 = 0;
	var uLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	struct<21> Local_547[1];
	struct<17> Local_569[2];
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_363 = "DISABLED_BEGGAR";
	iLocal_441 = 1;
	fLocal_457 = 0f;
	fLocal_460 = 5f;
	fLocal_461 = 7f;
	fLocal_462 = 5f;
	iLocal_515 = 1;
	iLocal_516 = 1;
	iLocal_519 = 1;
	iLocal_520 = 1;
	Local_132.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_538 = true;
	}
	if (!bLocal_538)
	{
		Local_132.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_132.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_132.f_43 = __LIB_0__::func_12();
		uLocal_438 = uLocal_438;
		func_4();
		func_5();
		func_6();
		__LIB_3__::func_368(&Local_132, 1);
		__LIB_2__::func_433(&(Local_132.f_5));
		Local_132.f_176 = 1;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_538, 2073, 0);
		if (bLocal_538)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_442)
			{
				case 0:
					if (func_11())
					{
						iLocal_442 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_631(&Local_132, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_132, &uLocal_445, &(Local_132.f_51.f_4));
						__LIB_3__::func_503(&Local_132, uLocal_445, 3332);
						if ((((Local_132.f_51.f_4 != 4 && Local_132.f_51.f_4 != 5) && Local_132.f_51.f_4 != 6) && Local_132.f_51.f_4 != 8) && Local_132.f_51.f_4 != 10)
						{
							vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_132.f_51, Local_132.f_51.f_3, 0f, 0.3f, 0f) };
							Local_132.f_51 = { vVar0 };
						}
						iLocal_442 = 3;
					}
					else if (Local_132.f_160)
					{
						func_9();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17();
						func_18();
						func_19();
						func_20();
						func_21(1);
						if (iLocal_326 != 1)
						{
						}
						else
						{
							__LIB_2__::func_51(&(Local_132.f_5), 0);
							__LIB_2__::func_110(&(Local_132.f_5), 0);
							__LIB_2__::func_251(&(Local_132.f_5), 0);
							__LIB_2__::func_715(&(Local_132.f_5), 0);
							__LIB_3__::func_230(&(Local_132.f_5), 0);
							__LIB_2__::func_180(&(Local_132.f_5), 0);
							__LIB_3__::func_231(&(Local_132.f_5), 0);
						}
						__LIB_2__::func_662(&(Local_132.f_5), 0);
						__LIB_3__::func_675(&(Local_132.f_5), 1097859072 /* Float: 15f */);
						iLocal_442 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_617(&Local_132, &uLocal_433, iLocal_326, 1, 1, 0, 0, 0))
					{
						func_9();
					}
					if (!Local_132.f_46)
					{
						if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
						{
							__LIB_3__::func_606(&uLocal_545);
						}
						if ((((func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1) || ((iLocal_326 == 1 && Global_1935630.f_24 == 1) && func_35())) || Global_1935630.f_24 == 1) || (Local_132.f_48 == 1 && PED::IS_PED_RAGDOLL(uLocal_433[0]))) || ((iLocal_326 == 1 && __LIB_0__::func_27(iLocal_448, 131072)) && !__LIB_0__::func_27(iLocal_448, 524288)))
						{
							iLocal_517 = 1;
							if (__LIB_0__::func_27(iLocal_446, 2048))
							{
								if (iLocal_326 != 1)
								{
								}
								else
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_433[0], Global_35, 1, 1))
									{
										func_37(1);
									}
									else
									{
										func_37(0);
									}
									__LIB_0__::func_325(&(uLocal_435[0]));
								}
							}
							Local_132.f_46 = 1;
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							if (iLocal_326 != 1)
							{
								if (iLocal_326 != 0)
								{
								}
								else
								{
									if (iLocal_533 != 1)
									{
									}
									else
									{
										__LIB_1__::func_991(uLocal_433[0], 0);
									}
									if ((((__LIB_0__::func_27(iLocal_446, 262144) && !__LIB_0__::func_27(iLocal_446, 33554432)) && __LIB_2__::func_1(uLocal_433[0], 0, 1)) && ((iLocal_444 == 256 || iLocal_444 == 8) || iLocal_444 == 4)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_433[0], Global_35, 1, 1))
									{
										__LIB_2__::func_504(uLocal_433[0], 0);
										__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("SHOOT_STOP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										__LIB_1__::func_683(&iLocal_446, 33554432);
										__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
										if (__LIB_0__::func_75(&uLocal_511))
										{
											__LIB_1__::func_148(&uLocal_511);
										}
										TASK::OPEN_SEQUENCE_TASK(&iLocal_437);
										TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 10f, 60f, 4);
										TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 257, -1082130432 /* Float: -1f */, -1, 0);
										__LIB_1__::func_474(uLocal_433[0], &iLocal_437, 0, 0, 1, 1);
									}
									else if (!ANIMSCENE::_0x1F0E401031E20146(Local_327, "PBL_MTH_STEAL_02") && !ANIMSCENE::_0x1F0E401031E20146(Local_327, "PBL_EXIT"))
									{
										if (__LIB_0__::func_27(iLocal_446, 2048))
										{
											if (func_49(Local_327, "PBL_COWER_REACT_02") && func_49(Local_327, "PBL_BASE_TO_COWER"))
											{
												iVar3 = 1;
												if (ANIMSCENE::_0x8D81E7824B7753F7(Local_327, "Cower", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_327, "base_to_cower", 1))
												{
													func_50(Local_327, "PBL_COWER_REACT_02", "cower_bool", 19, "AGGRO CHECK");
													iVar3 = 1;
													iLocal_537 = 1;
												}
												else
												{
													func_50(Local_327, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "AGGRO CHECK");
													iVar3 = 0;
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_56[1 /*12*/].f_8))
												{
													ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "COIN01", Local_56[1 /*12*/].f_8);
													PHYSICS::ACTIVATE_PHYSICS(Local_56[1 /*12*/].f_8);
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_56[2 /*12*/].f_8))
												{
													ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "COIN02", Local_56[2 /*12*/].f_8);
													PHYSICS::ACTIVATE_PHYSICS(Local_56[2 /*12*/].f_8);
												}
												__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
												__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
												if (iVar3 == 0)
												{
													iLocal_440 = 6;
												}
												else
												{
													iLocal_440 = 9;
												}
												__LIB_1__::func_148(&uLocal_472);
											}
											else
											{
												Local_132.f_46 = 0;
											}
										}
										else
										{
											iLocal_440 = 5;
										}
									}
									else
									{
										__LIB_1__::func_283(&uLocal_508, 0);
										iLocal_537 = 1;
										TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
										PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
									}
								}
							}
							else
							{
								iLocal_440 = 5;
							}
						}
					}
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0]) && iLocal_326 == 0)
					{
						if (__LIB_1__::func_313(&uLocal_508, 0.25f))
						{
							if (!__LIB_0__::func_27(iLocal_446, 8388608))
							{
								__LIB_2__::func_504(uLocal_433[0], 0);
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("CONT_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!__LIB_0__::func_27(iLocal_447, 8388608))
							{
								__LIB_2__::func_504(uLocal_433[0], 0);
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_447, 8388608);
							}
						}
					}
					if (func_53())
					{
						Local_132.f_50 = 1;
						func_9();
					}
					bVar4 = true;
					if ((ENTITY::DOES_ENTITY_EXIST(uLocal_433[0]) && !__LIB_2__::func_1(uLocal_433[0], 0, 0)) && PED::GET_PED_CONFIG_FLAG(uLocal_433[0], 11, true))
					{
						bVar4 = false;
					}
					if (__LIB_3__::func_431(&Local_132, &uLocal_433, 1, bVar4, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_132.f_50 = 1;
						func_9();
					}
					break;
			}
			BUILTIN::WAIT(Local_132.f_158);
		}
	}
}

void func_4()
{
	if (__LIB_3__::func_140(85) == 0)
	{
		iLocal_326 = 0;
	}
	else
	{
		iLocal_326 = 1;
	}
}

void func_5()
{
	if (iLocal_326 == 0)
	{
		Local_327.f_4 = "script@beat@town@disabledBeggar@con@main";
	}
	else if (iLocal_326 == 1)
	{
		Local_327.f_4 = "script@beat@town@disabledBeggar@real@main";
	}
}

void func_6()
{
	Local_337 = { 0f, 0f, 0f };
	Local_337.f_3 = Global_35;
	Local_337.f_8 = 4;
	Local_337.f_4 = 21030;
	Local_337.f_19 = 4;
	Local_337.f_20 = 4;
	Local_337.f_21 = 4;
	Local_337.f_22 = 4;
	Local_337.f_17 = 4;
	Local_337.f_18 = 4;
	Local_337.f_7 = 0;
}

void func_9()
{
	int iVar0;
	__LIB_0__::func_325(&(uLocal_435[0]));
	PED::SET_PED_CONFIG_FLAG(uLocal_433[0], 6, false);
	if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
	{
		LAW::_0xFFEBE5AA96BC2E4E(uLocal_433[0], joaat("CRIME_UNARMED_ASSAULT"), 0);
	}
	__LIB_3__::func_606(&uLocal_545);
	__LIB_2__::func_344(&(uLocal_433[0]));
	__LIB_2__::func_480(&Local_569, 0, 0, 1, 0);
	if (iLocal_515 == 0)
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		iLocal_515 = 1;
	}
	__LIB_3__::func_524(&iLocal_453);
	func_64();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	LAW::_0x710448D44A64C213(1);
	LAW::_0xC805EB785824F712(1);
	__LIB_3__::func_525(&uLocal_540, &uLocal_546);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_542))
	{
		VOLUME::_DELETE_VOLUME(iLocal_542);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_541))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_541);
		__LIB_0__::func_172(iLocal_542);
	}
	__LIB_0__::func_172(iLocal_543);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_3__::func_475(uLocal_433[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	if (iLocal_517 == 0)
	{
		Local_132.f_45 = 0;
		__LIB_3__::func_252(&Local_132);
		if (iLocal_326 == 1)
		{
			__LIB_1__::func_864(uLocal_433[0], 1, 1);
			PED::_0x6569F31A01B4C097(uLocal_433[0], 4, 0);
		}
		else
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_433[0], Local_327))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(uLocal_433[0], joaat("WORLD_HUMAN_SIT_BACK_EXHAUSTED"), 1000, false, 0, -1f, false);
			}
			__LIB_3__::func_566(&(uLocal_433[0]), 313807665);
		}
	}
	if (iLocal_517 == 1)
	{
		if (Local_132.f_44 == 0)
		{
			iVar0 = __LIB_3__::func_564(85, 0);
			iVar0++;
			if (iVar0 >= 3)
			{
				__LIB_3__::func_461(85, 0, 0);
				__LIB_2__::func_115(81, 1, 0, 0, 6, 0, 0, 1);
				Local_132.f_44 = 1;
			}
			else
			{
				__LIB_3__::func_461(85, 0, iVar0);
			}
		}
		else
		{
			__LIB_3__::func_461(85, 0, 0);
		}
	}
	__LIB_3__::func_480(&Local_56);
	__LIB_3__::func_493(&Local_132, &uLocal_433, &uLocal_435, iLocal_326, uLocal_445, __LIB_3__::func_172(&Local_132), 0, 1, 0, 1);
	__LIB_1__::func_682(85);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_11()
{
	int iVar0;
	switch (iLocal_439)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_132))
			{
				func_80();
				func_81();
				func_82();
				func_83();
				__LIB_3__::func_314(&Local_56);
				PED::_0x91FE941F9FCFB702(-252998940, 0);
				if (iLocal_326 == 0)
				{
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@GIVE");
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_01");
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_02");
				}
				else
				{
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@GIVE");
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@STEAL");
				}
				iLocal_439 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_438, cLocal_363))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_99[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (iLocal_326 == 0)
			{
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@GIVE"))
				{
					return false;
				}
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_01"))
				{
					return false;
				}
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_02"))
				{
					return false;
				}
			}
			else
			{
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@GIVE"))
				{
					return false;
				}
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@STEAL"))
				{
					return false;
				}
			}
			if (!__LIB_3__::func_449(&Local_99))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_14))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_56))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("REDIB_Sounds", 0))
			{
				return false;
			}
			PED::_0x91FE941F9FCFB702(-252998940, 0);
			return true;
	}
	return false;
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 0;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 0;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 0;
			*uParam2 = 6;
			break;
		case 6:
			*uParam1 = 0;
			*uParam2 = 7;
			break;
		case 7:
			*uParam1 = 0;
			*uParam2 = 8;
			break;
		case 8:
			*uParam1 = 0;
			*uParam2 = 9;
			break;
		case 9:
			*uParam1 = 0;
			*uParam2 = 10;
			break;
		case 10:
			*uParam1 = 0;
			*uParam2 = 11;
			break;
	}
}

Vector3 func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 94.513f;
				case 1:
					return 0f, 0f, -65f;
				case 2:
					return 0f, 0f, -90f;
				case 3:
					return 0f, 0f, -111.148f;
				case 4:
					return 0f, 0f, -1.3f;
				case 6:
					return 0f, 0f, -172.261f;
				case 7:
					return 0f, 0f, -83.61f;
				case 8:
					return 0f, 0f, 53.512f;
				case 9:
					return 0f, 0f, 271.129f;
				case 10:
					return 0f, 0f, 89.192f;
				case 11:
					return 0f, 0f, 163.562f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_16()
{
	switch (iLocal_443)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_132), __LIB_3__::func_526(&Local_132), &Local_99, &uLocal_433, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_17()
{
	vector3 vVar0;
	if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
	{
		__LIB_3__::func_579(uLocal_433[0]);
		__LIB_2__::func_190(uLocal_433[0], __LIB_3__::func_970(joaat("BEAT_DARK_ALLEY_BUM_MONEY")));
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_433[0], true, true);
		func_100();
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -440666838 /* GXTEntry: "Beggar" */);
		if (iLocal_326 == 1)
		{
			PED::_0xAE6004120C18DF97(uLocal_433[0], 0, 0);
		}
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_132.f_51, Local_132.f_51.f_3, -0.22f, -0.55f, 1f) };
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_433[0], Local_47[1 /*2*/], Local_47[1 /*2*/].f_1, vVar0, 0f, 0f, Local_132.f_51.f_3, 1000f, -8f, -1, 1, 0f, 2, 0, 0);
		if (iLocal_326 == 1)
		{
			__LIB_2__::func_279(uLocal_433[0], 1);
		}
		__LIB_2__::func_133(uLocal_433[0], &(Local_99[0 /*32*/].f_23), 0);
		iLocal_453 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_433[0], 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
		PED::_SET_PED_COMPONENT_DISABLED(uLocal_433[0], joaat("HATS"), 1);
		PED::_UPDATE_PED_VARIATION(uLocal_433[0], false, true, true, true, false);
		__LIB_3__::func_285(uLocal_433[0], &Local_132, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_433[0], 6, true);
	}
}

void func_18()
{
	vector3 vVar0;
	Local_327 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_327.f_4, 0, "pbl_action", false, true);
	vVar0 = { 0f, 180f, -Local_132.f_51.f_3 };
	Local_56[0 /*12*/].f_8 = PED::_0x9641A9A20310F6B8(-252998940, Local_132.f_51 + Vector(0.13f, 0f, 0f), vVar0, 0, 0, 0);
	Local_56[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_56[1 /*12*/].f_7, Local_132.f_51 + Vector(0.2f, 0.02f, 0.02f), true, true, false, false, true);
	Local_56[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_56[2 /*12*/].f_7, Local_132.f_51 + Vector(0.2f, 0f, 0f), true, true, false, false, true);
	if (iLocal_326 == 1)
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_56[1 /*12*/].f_8, false);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_56[2 /*12*/].f_8, false);
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_56[0 /*12*/].f_8, Local_56[1 /*12*/].f_8, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_56[0 /*12*/].f_8, Local_56[2 /*12*/].f_8, false);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_327.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_327, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_327);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_327, Local_132.f_51, 0f, 0f, Local_132.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "Beggar", uLocal_433[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "hat", Local_56[0 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "player", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "COIN_01", Local_56[1 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "COIN_02", Local_56[2 /*12*/].f_8, 0);
	__LIB_1__::func_683(&iLocal_446, 67108864);
}

void func_19()
{
	vector3 vVar0;
	iLocal_542 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uLocal_433[0], true, false), 0f, 0f, Local_99[0 /*32*/].f_9, 1f, 1f, 5f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_542))
	{
		PED::_0x7C00CFC48A782DC0(iLocal_542, uLocal_433[0], 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
	}
	iLocal_543 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_132.f_51, 0f, 0f, 0f, 2.5f, 2.5f, 5f);
	PED::_0x7C00CFC48A782DC0(iLocal_543, uLocal_433[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_543, 0);
	VOLUME::_0xBE551C2CC421185D(iLocal_543, 1);
	__LIB_3__::func_527(&iLocal_541, Local_132.f_51, 0f, 0f, 0f, 2f, 2f, 5f, "NAV_BLOCKER");
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_541))
	{
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_541, 7))
		{
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_433[0], 0f, 2f, 0f) };
	__LIB_3__::func_557(&iLocal_544, vVar0, vLocal_96, 8f, 5f, 5f, "INTERACT_AREA");
	func_106(&uLocal_545, Local_132.f_51, 0f, 0f, 0f, 20f, 20f, 10f, 0, 16384, 0);
	__LIB_3__::func_682(&uLocal_540, &uLocal_546, Local_132.f_51, 0f, 0f, Local_132.f_51.f_3, 6f, 5f, 5f, 1, 534496, 1, 2, "AmbientBlocker");
	__LIB_3__::func_378(uLocal_540, 0);
}

void func_20()
{
	__LIB_3__::func_157(&(Local_569[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_569[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	iLocal_441 = 0;
	__LIB_2__::func_351(&(Local_569[1 /*17*/]), 3);
}

void func_21(int iParam0)
{
	__LIB_3__::func_968(&(Local_569[0 /*17*/]), "RE_DAB_GIVE", 50);
	__LIB_2__::func_360(&(Local_569[1 /*17*/]), "RE_DAB_STEAL_COIN");
	__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
	__LIB_3__::func_621(&(Local_569[0 /*17*/]), 1, 0);
	__LIB_3__::func_621(&(Local_569[1 /*17*/]), 1, 0);
	if ((iLocal_525 == 1 || ((iLocal_326 == 0 && iLocal_526 == 1) && iLocal_449 >= 2)) || iParam0 == 1)
	{
		__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
	}
	if ((iLocal_526 == 1 && (iLocal_326 == 1 || (iLocal_326 == 0 && iLocal_449 > 1))) || iParam0 == 1)
	{
		__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
	}
	iLocal_441 = 1;
}

bool func_34(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_957((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_35()
{
	int iVar0;
	iVar0 = 0;
	if (iLocal_326 == 1 && Global_1935630.f_24 == 1)
	{
		if (PED::_0x09D7AFD3716DA8E1(uLocal_433[0], 250))
		{
			iVar0 = 1;
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED"), Local_132.f_51, 20f))
		{
			iVar0 = 1;
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), Local_132.f_51, 20f))
		{
			iVar0 = 1;
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), Local_132.f_51, 20f))
		{
			iVar0 = 1;
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PED_SCREAMED"), Local_132.f_51, 15f))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (iLocal_531 == 1)
	{
		__LIB_2__::func_360(&(Local_569[0 /*17*/]), "INTERACT_ENCOURAGE");
	}
	else
	{
		__LIB_2__::func_360(&(Local_569[0 /*17*/]), "RE_INTER_POS");
	}
	__LIB_2__::func_360(&(Local_569[1 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
	if (iLocal_521 == 1 || iParam0 == 1)
	{
		__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
	}
	if (iLocal_522 == 1 || iParam0 == 1)
	{
		__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
	}
}

char* func_42(char* sParam0)
{
	int iVar0;
	if (iLocal_326 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_326 == 1)
	{
		iVar0 = 2;
	}
	switch (__LIB_1__::func_898())
	{
		case 0:
			return __LIB_3__::func_394("DIB", "NBX", sParam0, iVar0);
		case 4:
			return __LIB_3__::func_394("DIB", "BLW", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

bool func_49(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
				}
				else
				{
					return true;
				}
			}
		}
	}
	iLocal_516 = 0;
	return false;
}

void func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4)
{
	if (func_49(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam2, true, false);
		if (!MISC::IS_STRING_NULL(sParam4))
		{
		}
		if (iParam3 != 20)
		{
			iLocal_335 = iParam3;
		}
		__LIB_1__::func_148(&uLocal_469);
	}
}

bool func_53()
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	func_144();
	func_145();
	if (Local_132.f_48 == 1)
	{
		func_146();
		if (__LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 16f)
		{
			func_148();
			func_149();
			func_150();
			func_151();
		}
	}
	if (func_152())
	{
		return true;
	}
	if (iLocal_515 == 0)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_327) && iLocal_530 == 1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			iLocal_515 = 1;
		}
	}
	if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_433[0], 0, 1);
	}
	switch (iLocal_440)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_327, true, false))
			{
				iLocal_516 = 1;
				__LIB_2__::func_462(&uLocal_490, 15f, 0);
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_327, false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_327);
				}
				if (iLocal_326 == 0)
				{
					func_49(Local_327, "PBL_BASE_REACT_02");
					func_49(Local_327, "PBL_BASE_TO_COWER");
					func_49(Local_327, "PBL_BASE_VAR01");
					func_49(Local_327, "PBL_BASE_VAR02");
					func_49(Local_327, "PBL_COWER_REACT_02");
					func_49(Local_327, "PBL_COWER_TO_BASE");
					func_49(Local_327, "PBL_DIA_01");
					func_49(Local_327, "PBL_DIA_02");
					func_49(Local_327, "PBL_DIA_03");
					func_49(Local_327, "PBL_DIA_04");
					func_49(Local_327, "PBL_DIA_05");
					func_49(Local_327, "PBL_DIA_06");
					func_49(Local_327, "PBL_DIA_07");
					func_49(Local_327, "PBL_DIA_08");
					func_49(Local_327, "PBL_DIA_09");
					func_49(Local_327, "PBL_EXIT");
				}
				else if (iLocal_326 == 1)
				{
					func_49(Local_327, "PBL_BASE_TO_COWER");
					func_49(Local_327, "PBL_BASE_VAR01");
					func_49(Local_327, "PBL_BASE_VAR02");
					func_49(Local_327, "PBL_COWER_DIA_06");
					func_49(Local_327, "PBL_COWER_DIA_07");
					func_49(Local_327, "PBL_COWER_FLINCH_01");
					func_49(Local_327, "PBL_COWER_FLINCH_02");
					func_49(Local_327, "PBL_COWER_TO_BASE");
					func_49(Local_327, "PBL_DIA_01");
					func_49(Local_327, "PBL_DIA_02");
					func_49(Local_327, "PBL_DIA_03");
					func_49(Local_327, "PBL_DIA_04");
					func_49(Local_327, "PBL_DIA_05");
				}
				iLocal_516 = 1;
				if (iLocal_516 == 1)
				{
					iLocal_440 = 1;
				}
			}
			break;
		case 1:
			if (Local_132.f_48 == 1)
			{
				func_154();
			}
			vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_433[0]))
			{
				if (!__LIB_0__::func_27(iLocal_446, 65536))
				{
					if (__LIB_0__::func_94(uLocal_433[0], vVar0, 1) < 30f)
					{
						__LIB_1__::func_683(&iLocal_446, 65536);
						__LIB_1__::func_683(&iLocal_447, 16);
						if (!__LIB_0__::func_75(&uLocal_463))
						{
							__LIB_1__::func_283(&uLocal_463, 0);
						}
					}
				}
				if (__LIB_0__::func_665(uLocal_433[0], Global_35, 1, 1) < 8f && __LIB_3__::func_452(&Local_132, 2f, 6f, 8f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
				{
					iLocal_539 = __LIB_3__::func_112(uLocal_433[0], Global_35, 1060437492 /* Float: 0.707f */);
					if (iLocal_539 != 1)
					{
						__LIB_1__::func_683(&iLocal_447, 16);
						if (!__LIB_0__::func_27(iLocal_446, 512))
						{
							__LIB_2__::func_73(uLocal_433[0], &(uLocal_435[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
							__LIB_1__::func_683(&iLocal_446, 512);
						}
						if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028) || iLocal_525 == 1) || iLocal_526 == 1)
						{
							fLocal_457 = 0f;
							iLocal_335 = 4;
							__LIB_1__::func_148(&uLocal_469);
							iLocal_440 = 2;
						}
					}
				}
			}
			break;
		case 2:
			func_154();
			iLocal_440 = 3;
			break;
		case 3:
			if (Local_132.f_48 == 1)
			{
				func_160();
				func_154();
				func_161();
			}
			if (iLocal_326 == 0 && !__LIB_0__::func_27(iLocal_446, 4096))
			{
				if (__LIB_0__::func_27(iLocal_446, 128) && (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1765767514)))
				{
					if ((__LIB_0__::func_665(uLocal_433[0], Global_35, 1, 1) > 10f && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0])) && func_49(Local_327, "PBL_EXIT"))
					{
						__LIB_1__::func_991(uLocal_433[0], 0);
						__LIB_1__::func_283(&uLocal_505, 0);
						__LIB_1__::func_683(&iLocal_446, 4096);
						func_50(Local_327, "PBL_EXIT", "BASE_BOOL", 19, "STATE_INTERACT");
						__LIB_3__::func_237(&(Local_132.f_5), &iLocal_444);
						Local_132.f_46 = 0;
						__LIB_2__::func_315(249295937, uLocal_433[0], 1);
						iLocal_441 = 0;
						__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
						iLocal_528 = 1;
						iLocal_440 = 10;
					}
				}
				if (__LIB_0__::func_27(iLocal_446, 256))
				{
					__LIB_3__::func_237(&(Local_132.f_5), &iLocal_444);
					Local_132.f_46 = 0;
					iLocal_440 = 10;
				}
			}
			if ((iLocal_530 == 1 && __LIB_0__::func_264(&uLocal_493) > 1f) && ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1589193385)) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1765767514)))
			{
				__LIB_0__::func_37(&uLocal_493);
				iLocal_530 = 0;
				func_21(0);
				__LIB_2__::func_462(&uLocal_487, 5f, 1);
			}
			if (__LIB_0__::func_75(&uLocal_478))
			{
				if (__LIB_0__::func_264(&uLocal_478) > 5f && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028))
				{
					__LIB_0__::func_37(&uLocal_478);
					if (iLocal_326 == 1)
					{
						Local_132.f_46 = 0;
						__LIB_3__::func_237(&(Local_132.f_5), &iLocal_444);
					}
					__LIB_1__::func_283(&uLocal_481, 0);
					if ((iLocal_336 == 19 || iLocal_336 == 5) || iLocal_336 == 6)
					{
						iLocal_336 = 0;
					}
					func_21(0);
				}
			}
			if (__LIB_0__::func_75(&uLocal_481))
			{
				if (__LIB_1__::func_313(&uLocal_481, fLocal_460))
				{
					iLocal_335 = iLocal_336;
				}
			}
			break;
		case 5:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_542))
			{
				VOLUME::_DELETE_VOLUME(iLocal_542);
			}
			__LIB_0__::func_172(iLocal_543);
			if (__LIB_0__::func_27(iLocal_446, 2048) && iLocal_326 == 0)
			{
				if (func_49(Local_327, "PBL_BASE_TO_COWER"))
				{
					func_50(Local_327, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "STATE_ATTACKED - AFTER PED RETURNED TO BASE");
					iLocal_440 = 8;
				}
				return false;
			}
			if (((((((iLocal_444 == 8 || iLocal_444 == 256) || iLocal_444 == 4) || iLocal_444 == 8192) || Global_1935630.f_24 == 1) && Local_132.f_48 == 1) && __LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 15f) || iLocal_326 == 1)
			{
				if (func_49(Local_327, "PBL_BASE_TO_COWER"))
				{
					if (__LIB_0__::func_27(iLocal_446, 2048))
					{
						__LIB_1__::func_681(&iLocal_446, 2048);
					}
					__LIB_1__::func_148(&uLocal_472);
					func_50(Local_327, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "STATE_ATTACKED - AGGRO CHECK");
					if (iLocal_326 == 0)
					{
						if (__LIB_0__::func_27(iLocal_446, 2048))
						{
							iLocal_440 = 8;
							func_166(1);
							iLocal_441 = 2;
						}
						else
						{
							iLocal_440 = 6;
							func_166(0);
							iLocal_441 = 2;
						}
					}
					else if (iLocal_326 == 1)
					{
						iLocal_440 = 7;
						func_166(0);
						iLocal_441 = 2;
					}
				}
			}
			else
			{
				__LIB_1__::func_283(&uLocal_505, 0);
				__LIB_0__::func_325(&(uLocal_435[0]));
				if ((PED::IS_PED_RAGDOLL(uLocal_433[0]) || __LIB_4__::func_417(uLocal_433[0])) && iLocal_326 == 0)
				{
					__LIB_1__::func_283(&uLocal_508, 0);
					iLocal_537 = 1;
					if (__LIB_1__::func_375(uLocal_433[0], 250, 0, 0))
					{
						__LIB_3__::func_676(uLocal_433[0], 750, 750, 0, 0);
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
					if (iLocal_326 == 0)
					{
						__LIB_1__::func_283(&uLocal_508, 0);
						iLocal_537 = 1;
					}
					iLocal_440 = 10;
				}
				else if (iLocal_518 == 1)
				{
					func_50(Local_327, "PBL_COWER_REACT_02", "BASE_BOOL", 19, "STATE_ATTACKED - bCowering = TRUE");
					iLocal_440 = 10;
				}
				else if (iLocal_518 == 0)
				{
					func_50(Local_327, "PBL_BASE_REACT_02", "BASE_BOOL", 19, "STATE_ATTACKED - bCowering = FALSE");
					iLocal_440 = 10;
				}
			}
			break;
		case 6:
			__LIB_1__::func_283(&uLocal_505, 0);
			iLocal_444 = 0;
			fLocal_458 = 8f;
			fLocal_459 = 7f;
			if (iLocal_523 == 1)
			{
				fLocal_458 = 3f;
				fLocal_459 = 4f;
			}
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_472))
				{
					__LIB_1__::func_283(&uLocal_472, 0);
				}
				iVar3 = 0;
				if (PED::IS_PED_RAGDOLL(uLocal_433[0]))
				{
					__LIB_1__::func_283(&uLocal_508, 0);
					iLocal_537 = 1;
					iVar3 = 1;
				}
				if ((func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1) || iLocal_524 == 1) || (__LIB_0__::func_27(iLocal_446, 2048) && iLocal_326 == 0))
				{
					if ((((iLocal_444 != 8 && iLocal_444 != 256) && iLocal_444 != 4) && iLocal_444 != 8192) && iLocal_524 == 0)
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
						iLocal_440 = 10;
						if (iLocal_326 == 0)
						{
							if (!__LIB_0__::func_27(iLocal_447, 8388608))
							{
								__LIB_2__::func_461(0);
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_447, 8388608);
							}
						}
					}
					else if (((iLocal_444 == 4 || iLocal_444 == 256) || (iLocal_524 == 1 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))) || (__LIB_0__::func_27(iLocal_446, 2048) && iLocal_326 == 0))
					{
						if (iLocal_524 == 1)
						{
						}
						else
						{
							iLocal_524 = 1;
						}
						if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028) && !__LIB_0__::func_27(iLocal_446, 2048)) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1738742925))
						{
							if (func_49(Local_327, "PBL_COWER_REACT_02"))
							{
								func_50(Local_327, "PBL_COWER_REACT_02", "cower_bool", 20, "STATE_COWER_CON - AGGRO");
								__LIB_1__::func_148(&uLocal_472);
								__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
								iLocal_440 = 9;
								return false;
							}
						}
					}
					else if (iLocal_444 == 8)
					{
						__LIB_1__::func_148(&uLocal_472);
					}
				}
				if (!__LIB_0__::func_27(iLocal_446, 2048))
				{
					if (((__LIB_0__::func_264(&uLocal_472) > fLocal_458 && !PED::_0xB7DBB2986B87E230(uLocal_433[0], fLocal_459)) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1)) && func_49(Local_327, "PBL_COWER_TO_BASE"))
					{
						__LIB_1__::func_683(&iLocal_446, 2048);
						func_50(Local_327, "PBL_COWER_TO_BASE", "cower_bool", 19, "STATE_COWER_CON");
						iLocal_440 = 3;
						__LIB_3__::func_237(&(Local_132.f_5), &iLocal_444);
						__LIB_0__::func_37(&uLocal_472);
						__LIB_1__::func_283(&uLocal_478, 0);
						Local_132.f_46 = 0;
						__LIB_2__::func_526(&Local_569, 0, 0);
					}
				}
				if (iVar3 == 1)
				{
					__LIB_1__::func_283(&uLocal_508, 0);
					iLocal_537 = 1;
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
					iLocal_440 = 10;
				}
			}
			break;
		case 7:
			fLocal_458 = 10f;
			fLocal_459 = 9f;
			if (iLocal_523 == 1)
			{
				fLocal_458 = 6f;
				fLocal_459 = 6f;
			}
			if (iLocal_524 == 1)
			{
				fLocal_458 = 16f;
				fLocal_459 = 16f;
			}
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
			{
				if (((PED::_0x09D7AFD3716DA8E1(uLocal_433[0], 250) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_327, "Cower", 1)) && __LIB_0__::func_264(&uLocal_472) > 0.25f)
				{
					__LIB_2__::func_461(0);
					switch (iLocal_450)
					{
						case 0:
							if (func_49(Local_327, "PBL_COWER_FLINCH_01"))
							{
								func_50(Local_327, "PBL_COWER_FLINCH_01", "cower_bool", 20, "STATE_COWER_REAL - CASE 0");
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("COWER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_450 = 1;
								__LIB_1__::func_148(&uLocal_472);
							}
							break;
						case 1:
							if (func_49(Local_327, "PBL_COWER_DIA_06"))
							{
								if (!__LIB_0__::func_27(iLocal_447, 16777216))
								{
									func_50(Local_327, "PBL_COWER_DIA_06", "cower_bool", 20, "STATE_COWER_REAL - CASE 1");
									__LIB_1__::func_148(&uLocal_472);
								}
								else
								{
									__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("COWER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_450 = 2;
							}
							break;
						case 2:
							if (func_49(Local_327, "PBL_COWER_FLINCH_02"))
							{
								func_50(Local_327, "PBL_COWER_FLINCH_02", "cower_bool", 20, "STATE_COWER_REAL - CASE 2");
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("COWER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_450 = 3;
								__LIB_1__::func_148(&uLocal_472);
							}
							break;
						case 3:
							if (func_49(Local_327, "PBL_COWER_DIA_07"))
							{
								if (!__LIB_0__::func_27(iLocal_447, 33554432))
								{
									func_50(Local_327, "PBL_COWER_DIA_07", "cower_bool", 20, "STATE_COWER_REAL - CASE 3");
									__LIB_1__::func_148(&uLocal_472);
								}
								else
								{
									__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("COWER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_450 = 0;
							}
							break;
					}
				}
				if (!__LIB_0__::func_27(iLocal_446, 2048))
				{
					if (((__LIB_0__::func_264(&uLocal_472) > fLocal_458 && !PED::_0xB7DBB2986B87E230(uLocal_433[0], fLocal_459)) && func_49(Local_327, "PBL_COWER_TO_BASE")) && Global_1935630.f_24 == 0)
					{
						__LIB_1__::func_683(&iLocal_446, 2048);
						func_50(Local_327, "PBL_COWER_TO_BASE", "cower_bool", 19, 0);
						iLocal_440 = 3;
						__LIB_1__::func_283(&uLocal_478, 0);
						__LIB_2__::func_526(&Local_569, 0, 0);
					}
				}
				if (PED::IS_PED_RAGDOLL(uLocal_433[0]))
				{
					TASK::TASK_COWER(uLocal_433[0], -1, 0, 0);
					PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
					iLocal_441 = 3;
					__LIB_2__::func_526(&Local_569, 0, 0);
					__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
					if (!__LIB_0__::func_27(iLocal_447, 8388608))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_447, 8388608);
					}
				}
			}
			break;
		case 8:
			if (Local_132.f_44 == 0)
			{
				__LIB_2__::func_115(81, 1, 0, 0, 6, 0, 0, 1);
			}
			Local_132.f_44 = 1;
			iLocal_528 = 1;
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
			{
				if (PED::IS_PED_RAGDOLL(uLocal_433[0]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
					__LIB_1__::func_283(&uLocal_508, 0);
					iLocal_537 = 1;
					iLocal_440 = 10;
				}
				if (!__LIB_0__::func_75(&uLocal_472))
				{
					__LIB_1__::func_283(&uLocal_472, 0);
				}
				if (__LIB_0__::func_264(&uLocal_472) > 0.25f && (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1738742925) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028)))
				{
					if (func_49(Local_327, "PBL_COWER_REACT_02"))
					{
						func_50(Local_327, "PBL_COWER_REACT_02", "cower_bool", 19, "STATE_CONFESS");
						__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
						iLocal_440 = 9;
						__LIB_1__::func_148(&uLocal_472);
					}
				}
			}
			break;
		case 9:
			if (Local_132.f_44 == 0)
			{
				__LIB_2__::func_115(81, 1, 0, 0, 6, 0, 0, 1);
			}
			Local_132.f_44 = 1;
			__LIB_0__::func_325(&(uLocal_435[0]));
			if (!__LIB_0__::func_27(iLocal_446, 32768))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -759498749))
				{
					if (func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1))
					{
						if (iLocal_444 != 8)
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
							if (iLocal_326 == 0)
							{
								if (!__LIB_0__::func_27(iLocal_447, 8388608))
								{
									__LIB_2__::func_461(0);
									__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&iLocal_447, 8388608);
								}
							}
							PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
							iLocal_440 = 10;
							return false;
						}
					}
				}
			}
			if (iLocal_519 == 0)
			{
				if (__LIB_0__::func_27(iLocal_446, 32768))
				{
					if (func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1))
					{
						if (iLocal_444 == 8)
						{
							__LIB_1__::func_148(&uLocal_472);
							iLocal_444 = 0;
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
							if (iLocal_326 == 0)
							{
								if (!__LIB_0__::func_27(iLocal_447, 8388608))
								{
									__LIB_2__::func_461(0);
									__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&iLocal_447, 8388608);
								}
							}
							PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
							iLocal_440 = 10;
						}
					}
					if (__LIB_0__::func_264(&uLocal_472) > 4f || __LIB_0__::func_264(&uLocal_472) > 20f)
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 2, 385, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("LEAVING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_440 = 10;
					}
				}
			}
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
			{
				fVar4 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_327);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 527513388) || fVar4 >= 0.9667f)
				{
				}
				if (((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_327) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_327) >= 0.99f) || fVar4 >= 0.9667f) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 527513388))
				{
					if (iLocal_519 == 0)
					{
						TASK::TASK_REACT(uLocal_433[0], Global_35, 0f, 0f, 0f, "DEFAULT_DEFUSE", 60000f, 10f, 4);
						PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
						__LIB_3__::func_237(&(Local_132.f_5), &iLocal_444);
						__LIB_1__::func_683(&iLocal_446, 32768);
						iLocal_528 = 1;
						__LIB_1__::func_148(&uLocal_472);
						__LIB_1__::func_283(&uLocal_475, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 2, 385, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("LEAVING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_440 = 10;
						__LIB_1__::func_683(&iLocal_446, 32768);
						iLocal_528 = 1;
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "hat", Local_56[0 /*12*/].f_8);
						PHYSICS::ACTIVATE_PHYSICS(Local_56[0 /*12*/].f_8);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_56[0 /*12*/].f_8, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_56[1 /*12*/].f_8))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "COIN01", Local_56[1 /*12*/].f_8);
							PHYSICS::ACTIVATE_PHYSICS(Local_56[1 /*12*/].f_8);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_56[1 /*12*/].f_8, Local_56[0 /*12*/].f_8, true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_56[2 /*12*/].f_8))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "COIN02", Local_56[2 /*12*/].f_8);
							PHYSICS::ACTIVATE_PHYSICS(Local_56[2 /*12*/].f_8);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_56[2 /*12*/].f_8, Local_56[0 /*12*/].f_8, true);
						}
						func_37(0);
						iLocal_441 = 0;
					}
				}
			}
			break;
		case 10:
			func_172();
			func_173();
			func_174();
			if (iLocal_456 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[0 /*12*/].f_8))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_56[0 /*12*/].f_8, 1, 0f, 0f, 0.1f, 0.25f, 0f, 0f, 1, true, true, true, false, true);
					iLocal_456 = (iLocal_456 - 1);
				}
			}
			__LIB_3__::func_606(&uLocal_545);
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
			{
				if (!__LIB_0__::func_27(iLocal_446, 262144))
				{
					if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_433[0], Local_327) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 527513388)) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 2118412884))
					{
						__LIB_0__::func_325(&(uLocal_435[0]));
						if (ENTITY::DOES_ENTITY_EXIST(Local_56[0 /*12*/].f_8))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "hat", Local_56[0 /*12*/].f_8);
							PHYSICS::ACTIVATE_PHYSICS(Local_56[0 /*12*/].f_8);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_56[0 /*12*/].f_8, true);
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_56[0 /*12*/].f_8, 1, 0f, 0f, 0.1f, 0.5f, 0f, 0f, 1, true, true, true, false, true);
							iLocal_456 = 3;
						}
						if (Local_132.f_46 == 0 && !__LIB_0__::func_27(iLocal_448, 32768))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 1, 385, -1082130432 /* Float: -1f */, -1, 0);
						}
						else if (Local_132.f_46 == 1 && !__LIB_0__::func_163(uLocal_433[0], 1435919172))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 385, -1082130432 /* Float: -1f */, -1, 0);
							if (iLocal_326 == 0)
							{
								if (!__LIB_0__::func_27(iLocal_447, 8388608))
								{
									__LIB_2__::func_461(0);
									__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&iLocal_447, 8388608);
								}
							}
						}
						PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
						__LIB_1__::func_683(&iLocal_446, 262144);
						__LIB_1__::func_283(&uLocal_511, 0);
						if (PATHFIND::_0xDE0EA444735C1368(iLocal_541))
						{
							PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_541);
							__LIB_0__::func_172(iLocal_542);
						}
						__LIB_0__::func_172(iLocal_543);
					}
				}
				else if (((((__LIB_0__::func_264(&uLocal_511) > fLocal_462 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_433[0], Global_35, 17)) && !PED::_IS_PED_LASSOED(uLocal_433[0])) && !PED::_IS_PED_HOGTIED(uLocal_433[0]))
				{
					switch (iLocal_455)
					{
						case 0:
							if (__LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 10f)
							{
								if (((((((__LIB_0__::func_27(iLocal_448, 4) || __LIB_0__::func_27(iLocal_448, 16)) || __LIB_0__::func_27(iLocal_448, 1048576)) || __LIB_0__::func_27(iLocal_448, 4096)) || __LIB_0__::func_27(iLocal_448, 8)) || __LIB_0__::func_27(iLocal_448, 32)) || __LIB_0__::func_27(iLocal_448, 2097152)) || __LIB_0__::func_27(iLocal_448, 8192))
								{
									__LIB_0__::func_268(&uLocal_511, 5f);
								}
								else
								{
									__LIB_2__::func_478(uLocal_433[0], Global_35, "PLAYER_FOLLOWING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_148(&uLocal_511);
								}
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 1, 384, -1082130432 /* Float: -1f */, -1, 0);
								PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
								__LIB_3__::func_237(&(Local_132.f_5), &iLocal_444);
								iLocal_455++;
							}
							break;
						case 1:
							if (__LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 15f)
							{
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("RUN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 2, 384, -1082130432 /* Float: -1f */, -1, 0);
								PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
								__LIB_1__::func_148(&uLocal_511);
								fLocal_462 = 7f;
								iLocal_455++;
							}
							break;
						case 2:
							if (__LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 20f)
							{
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("RUN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
								PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
								__LIB_1__::func_148(&uLocal_511);
								fLocal_462 = 8f;
								iLocal_455++;
							}
							break;
						case 3:
							if (__LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 20f)
							{
								__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("RUN_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
								PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
								__LIB_1__::func_148(&uLocal_511);
								iLocal_455++;
							}
							break;
					}
				}
			}
			break;
	}
	return false;
}

void func_64()
{
	if (iLocal_514 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_56[1 /*12*/].f_8))
		{
			if (ENTITY::_0x5AFFA9DDC87846F8(Local_56[1 /*12*/].f_7))
			{
				TASK::_0x78B4567E18B54480(Local_56[1 /*12*/].f_8);
				GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_gen_shiny_bling", Local_56[1 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_56[2 /*12*/].f_8))
		{
			if (ENTITY::_0x5AFFA9DDC87846F8(Local_56[2 /*12*/].f_7))
			{
				TASK::_0x78B4567E18B54480(Local_56[2 /*12*/].f_8);
				GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_gen_shiny_bling", Local_56[1 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
			}
		}
		iLocal_514 = 1;
	}
}

void func_80()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			if (iLocal_326 == 0)
			{
				Local_99[0 /*32*/].f_1 = joaat("RE_DISABLEDBEGGAR_MALES_01");
				Local_99[0 /*32*/] = 4;
				Local_99[0 /*32*/].f_3 = 257876299;
				StringCopy(&(Local_99[0 /*32*/].f_23), "FAKE_BEGGAR", 64);
				__LIB_3__::func_303(&(Local_99[0 /*32*/].f_22));
			}
			else if (iLocal_326 == 1)
			{
				Local_99[0 /*32*/].f_1 = joaat("RE_DISABLEDBEGGAR_MALES_01");
				Local_99[0 /*32*/] = 4;
				Local_99[0 /*32*/].f_3 = -456291287;
				StringCopy(&(Local_99[0 /*32*/].f_23), "BLIND_BEGGAR", 64);
				__LIB_3__::func_303(&(Local_99[0 /*32*/].f_22));
			}
			break;
	}
}

void func_81()
{
	__LIB_3__::func_445(&Local_99);
}

void func_82()
{
	if (iLocal_326 == 0)
	{
		Local_47[0 /*2*/] = "script_re@dark_alley_bum@desp";
		Local_47[0 /*2*/].f_1 = "breakout_bum";
		Local_47[1 /*2*/] = "script_re@disabled_beggar@con";
		Local_47[1 /*2*/].f_1 = "BASE_BUM";
	}
	else if (iLocal_326 == 1)
	{
		Local_47[0 /*2*/] = "script_re@dark_alley_bum@drunk";
		Local_47[0 /*2*/].f_1 = "breakout_bum";
		Local_47[1 /*2*/] = "script_re@disabled_beggar@real";
		Local_47[1 /*2*/].f_1 = "BASE_BUM";
	}
	__LIB_3__::func_318(Local_47[1 /*2*/], &uLocal_14);
}

void func_83()
{
	Local_56[0 /*12*/].f_7 = joaat("P_CS_BEGGARHAT01X");
	Local_56[1 /*12*/].f_7 = joaat("P_COIN01X");
	Local_56[2 /*12*/].f_7 = joaat("P_COIN01X");
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_100()
{
	switch (Local_132.f_51.f_4)
	{
		case 0:
			vLocal_93 = { 2814.41f, -1222.949f, 47.527f };
			vLocal_96 = { 0f, 0f, 94.513f };
			break;
		case 1:
			vLocal_93 = { 2603.891f, -1286.316f, 52.258f };
			vLocal_96 = { 0f, 0f, -65f };
			break;
		case 2:
			vLocal_93 = { 2662.243f, -1192.9f, 53.284f };
			vLocal_96 = { 0f, 0f, -90f };
			break;
		case 3:
			vLocal_93 = { 2752.048f, -1205.806f, 49.335f };
			vLocal_96 = { 0f, 0f, -117f };
			break;
		case 4:
			vLocal_93 = { 2514.196f, -1126.779f, 49.972f };
			vLocal_96 = { 0f, 0f, -179.5f };
			break;
		case 5:
			vLocal_93 = { 2713.135f, -1232.871f, 50.163f };
			vLocal_96 = { 0f, 0f, 89.937f };
			break;
		case 6:
			vLocal_93 = { 2639.69f, -1418.491f, 46.37f };
			vLocal_96 = { 0f, 0f, -172.261f };
			break;
		case 7:
			vLocal_93 = { 2704.596f, -1185.193f, 51.848f };
			vLocal_96 = { 0f, 0f, -90f };
			break;
		case 8:
			vLocal_93 = { 2780.219f, -1277.374f, 47.401f };
			vLocal_96 = { 0f, 0f, 56.512f };
			break;
		case 9:
			vLocal_93 = { 2594.572f, -1207.724f, 53.303f };
			vLocal_96 = { 0f, 0f, -89.871f };
			break;
		case 10:
			vLocal_93 = { 2668.58f, -1113.233f, 50.545f };
			vLocal_96 = { 0f, 0f, 95f };
			break;
		case 11:
			vLocal_93 = { 2481.515f, -1467.387f, 46.201f };
			vLocal_96 = { 0f, 0f, -8.75f };
			break;
	}
}

void func_106(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam10)
		{
			__LIB_3__::func_581(uParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			__LIB_1__::func_266(uParam0, vParam1, vParam4, vParam7);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

void func_144()
{
	if (__LIB_0__::func_27(iLocal_446, 65536) && __LIB_2__::func_1(uLocal_433[0], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 1935919182))
		{
			TASK::_0x2E1D6D87346BB7D2(uLocal_433[0], Global_35, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("BEG_A")))
		{
			__LIB_1__::func_683(&iLocal_447, 1);
			if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
			{
				__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
			}
			if (!__LIB_0__::func_75(&uLocal_463))
			{
				__LIB_1__::func_283(&uLocal_463, 0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -608692325) || __LIB_0__::func_264(&uLocal_502) > 3f)
		{
			if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
			{
				__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
			}
			__LIB_0__::func_37(&uLocal_502);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("BEG_B")))
		{
			__LIB_1__::func_683(&iLocal_447, 2);
			if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
			{
				__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("BEG_C")))
		{
			__LIB_1__::func_683(&iLocal_447, 4);
			if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
			{
				__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1078014831))
		{
			__LIB_1__::func_683(&iLocal_447, 8);
			if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
			{
				__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
			}
		}
		if (iLocal_326 == 0)
		{
			if (Local_132.f_48 == 1)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("DROP_COIN")))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("DROP_COIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_447, 64);
					if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
					{
						__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("HERE_WE_ARE")))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("HERE_WE_ARE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_447, 128);
					if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
					{
						__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 673864806))
				{
					if (!__LIB_0__::func_27(iLocal_446, 2) && !__LIB_0__::func_27(iLocal_446, 4))
					{
						__LIB_2__::func_315(1891783641, uLocal_433[0], 1);
					}
					__LIB_1__::func_683(&iLocal_447, 256);
					if (!__LIB_0__::func_75(&uLocal_463))
					{
						__LIB_1__::func_283(&uLocal_463, 0);
					}
					iLocal_517 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -647642345))
				{
					__LIB_1__::func_683(&iLocal_447, 512);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("ANYTHING")))
				{
					__LIB_1__::func_683(&iLocal_447, 1024);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -140146567))
				{
					__LIB_1__::func_683(&iLocal_447, 2048);
					MAP::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 332513497))
				{
					__LIB_1__::func_683(&iLocal_447, 4096);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 629564482))
				{
					__LIB_1__::func_683(&iLocal_447, 8192);
				}
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 350994814) && __LIB_2__::func_227(-7f, 1, 0, 0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -988448251))
				{
					__LIB_1__::func_683(&iLocal_447, 16384);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -689431130))
				{
					__LIB_1__::func_683(&iLocal_447, 32768);
					iLocal_335 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("IGNORE")))
				{
					__LIB_1__::func_683(&iLocal_447, 65536);
					__LIB_0__::func_325(&(uLocal_435[0]));
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -564989216))
				{
					OBJECT::DELETE_OBJECT(&(Local_56[0 /*12*/].f_8));
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("AIM_AGGRO")))
			{
				if (!__LIB_0__::func_27(iLocal_447, 131072))
				{
					__LIB_1__::func_683(&iLocal_447, 131072);
					__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AIM_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("CONT_AGGRO")))
			{
				__LIB_1__::func_683(&iLocal_446, 8388608);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("LEAVING")))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("LEAVING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("AGGRO")))
			{
				if (!__LIB_0__::func_27(iLocal_447, 8388608))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_447, 8388608);
				}
			}
		}
		else if (iLocal_326 == 1)
		{
			if (Local_132.f_48 == 1)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -2113988843))
				{
					__LIB_1__::func_683(&iLocal_447, 524288);
					if (!__LIB_0__::func_75(&uLocal_463))
					{
						__LIB_1__::func_283(&uLocal_463, 0);
					}
					iLocal_517 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 2010860023))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("IGNORE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_447, 65536);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("THANKS")))
				{
					__LIB_1__::func_683(&iLocal_447, 2097152);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 98839351))
				{
					__LIB_1__::func_683(&iLocal_447, 4194304);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("AGGRO_A")) && !__LIB_0__::func_27(iLocal_447, 8388608))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_447, 8388608);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("AGGRO_B")))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_447, 16777216);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], joaat("AGGRO_C")))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_447, 33554432);
			}
		}
		if (Local_132.f_48 == 1)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PLY_GIVE")))
			{
				if (!__LIB_0__::func_27(iLocal_447, 268435456))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("PLY_GIVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_447, 268435456);
				}
			}
		}
	}
}

void func_145()
{
	float fVar0;
	if (__LIB_0__::func_27(iLocal_446, 65536))
	{
		if (__LIB_1__::func_313(&uLocal_469, 0.5f))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_327, "BASE_BOOL", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_327, "cower_bool", false, false);
		}
		fVar0 = 8f;
		if (iLocal_336 != 0)
		{
			fVar0 = 35f;
		}
		switch (iLocal_335)
		{
			case 0:
				func_310(16, Local_327, "PBL_DIA_01", "BASE_BOOL", 1, 0.5f, 30f);
				break;
			case 1:
				func_310(1, Local_327, "PBL_DIA_02", "BASE_BOOL", 2, 3f, 35f);
				break;
			case 2:
				func_310(2, Local_327, "PBL_DIA_03", "BASE_BOOL", 3, 3f, 35f);
				break;
			case 3:
				if (iLocal_336 != 0)
				{
					func_310(4, Local_327, "PBL_DIA_04", "BASE_BOOL", 4, 3f, 35f);
				}
				else
				{
					func_310(4, Local_327, "PBL_DIA_04", "BASE_BOOL", 5, 3f, 35f);
				}
				break;
			case 4:
				if (iLocal_326 == 0)
				{
					func_310(16, Local_327, "PBL_DIA_06", "BASE_BOOL", 10, 1f, fVar0);
				}
				else if (iLocal_326 == 1)
				{
					func_310(16, Local_327, "PBL_DIA_05", "BASE_BOOL", 10, 7f, fVar0);
				}
				break;
			case 10:
				if (iLocal_326 == 0)
				{
					func_310(256, Local_327, "PBL_DIA_07", "BASE_BOOL", 11, 4f, fVar0);
				}
				else if (iLocal_326 == 1)
				{
					func_310(524288, Local_327, "PBL_DIA_06", "BASE_BOOL", 11, 7f, fVar0);
					if ((!__LIB_0__::func_27(iLocal_447, 1073741824 /* Float: 2f */) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028)) && __LIB_0__::func_27(iLocal_447, 524288))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, "BUMP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_447, 1073741824 /* Float: 2f */);
					}
				}
				break;
			case 11:
				if (iLocal_326 == 0)
				{
					func_310(512, Local_327, "PBL_DIA_08", "BASE_BOOL", 12, 7f, fVar0);
				}
				else if (iLocal_326 == 1)
				{
					func_310(1073741824 /* Float: 2f */, Local_327, "PBL_DIA_07", "BASE_BOOL", 12, 7f, fVar0);
					if (!__LIB_0__::func_27(iLocal_447, -2147483648))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("BEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_447, -2147483648);
					}
				}
				break;
			case 12:
				if (iLocal_326 == 0)
				{
					func_310(1024, Local_327, "PBL_DIA_05", "BASE_BOOL", 5, 7f, fVar0);
				}
				else if (iLocal_326 == 1)
				{
					func_310(-2147483648, Local_327, "PBL_DIA_08", "BASE_BOOL", 5, 7f, fVar0);
					if (!__LIB_0__::func_27(iLocal_447, 1048576))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_447, 1048576);
					}
				}
				break;
			case 5:
				func_310(67108864, Local_327, "PBL_BASE_VAR02", "BASE_BOOL", 6, 4f, fVar0);
				break;
			case 6:
				func_310(67108864, Local_327, "PBL_BASE_VAR01", "BASE_BOOL", 19, 3f, fVar0);
				break;
			case 7:
				func_50(Local_327, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "BEG_STATE_BASE_TO_COWER");
				break;
			case 8:
				func_50(Local_327, "PBL_COWER_TO_BASE", "cower_bool", 19, "BEG_STATE_COWER_TO_BASE");
				__LIB_2__::func_526(&Local_569, 0, 0);
				break;
			case 9:
				func_50(Local_327, "PBL_EXIT", "BASE_BOOL", 19, "BEG_STATE_EXIT");
				break;
			case 13:
				if (iLocal_326 == 0)
				{
					func_310(64, Local_327, "PBL_DIA_09", "BASE_BOOL", 5, 2f, 1090519040 /* Float: 8f */);
				}
				else if (iLocal_326 == 1)
				{
					if (__LIB_0__::func_27(iLocal_448, 1))
					{
						iLocal_335 = 5;
						__LIB_1__::func_283(&uLocal_469, 0);
						__LIB_1__::func_683(&iLocal_447, 65536);
					}
					else if (func_49(Local_327, "PBL_BASE_VAR02"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_327, "PBL_BASE_VAR02", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_327, "BASE_BOOL", true, false);
						iLocal_335 = 5;
						__LIB_1__::func_283(&uLocal_469, 0);
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("PASSER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_447, 65536);
					}
				}
				break;
			case 14:
				if (iLocal_326 == 1)
				{
					func_50(Local_327, "PBL_COWER_REACT", "cower_bool", 19, "BEG_STATE_COWER_REACT");
				}
				else
				{
					func_50(Local_327, "PBL_COWER_REACT_02", "cower_bool", 19, "BEG_STATE_COWER_REACT");
				}
				break;
			case 15:
				func_50(Local_327, "PBL_COWER_DIA_06", "cower_bool", 19, "BEG_STATE_COWER_A");
				break;
			case 16:
				func_50(Local_327, "PBL_COWER_DIA_07", "cower_bool", 19, "BEG_STATE_COWER_B");
				break;
			case 17:
				func_50(Local_327, "PBL_COWER_FLINCH_01", "cower_bool", 19, "BEG_STATE_COWER_FLINCH_A");
				break;
			case 18:
				func_50(Local_327, "PBL_COWER_FLINCH_02", "cower_bool", 19, "BEG_STATE_COWER_FLINCH_B");
				break;
			case 19:
				break;
		}
	}
}

void func_146()
{
	if (__LIB_1__::func_313(&uLocal_505, 2f))
	{
		iLocal_533 = 1;
		iLocal_454 = 0;
		LAW::_0xFFEBE5AA96BC2E4E(uLocal_433[0], joaat("CRIME_UNARMED_ASSAULT"), 1);
	}
	if (iLocal_326 == 0)
	{
		if (iLocal_533 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_433[0], Global_35, 1, 1) || PED::IS_PED_RAGDOLL(uLocal_433[0]))
			{
				__LIB_1__::func_991(uLocal_433[0], 0);
				if (ENTITY::IS_ENTITY_DEAD(uLocal_433[0]))
				{
					if (iLocal_535 == 0)
					{
						__LIB_3__::func_465(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
						iLocal_535 = 1;
					}
				}
				else if (iLocal_534 == 0)
				{
					__LIB_3__::func_465(2, 0, 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_534 = 1;
				}
			}
		}
	}
	if (iLocal_527 == 0 && Local_132.f_48 == 1)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_433[0], Global_35, 1, 1) || PED::IS_PED_RAGDOLL(uLocal_433[0]))
		{
			if (PED::IS_PED_RAGDOLL(uLocal_433[0]))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "Beggar", uLocal_433[0]);
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[1 /*12*/].f_8))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "COIN01", Local_56[1 /*12*/].f_8);
					PHYSICS::ACTIVATE_PHYSICS(Local_56[1 /*12*/].f_8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[2 /*12*/].f_8))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "COIN02", Local_56[2 /*12*/].f_8);
					PHYSICS::ACTIVATE_PHYSICS(Local_56[2 /*12*/].f_8);
				}
			}
			iLocal_527 = 1;
			iLocal_441 = 3;
			__LIB_2__::func_480(&Local_569, 1, 1, 1, 0);
			__LIB_2__::func_593(&(Local_547[0 /*21*/]), &Local_569);
			__LIB_2__::func_526(&Local_569, 0, 0);
			__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
			if (iLocal_326 == 0)
			{
				__LIB_1__::func_283(&uLocal_508, 0);
				iLocal_537 = 1;
			}
			else if (iLocal_326 == 1)
			{
				if (PED::IS_PED_RAGDOLL(uLocal_433[0]))
				{
					__LIB_1__::func_991(uLocal_433[0], 0);
					if (PED::GET_PED_CONFIG_FLAG(uLocal_433[0], 11, true))
					{
						__LIB_3__::func_465(2, joaat("HONOR_EVENT_AMBIENT_KO"), 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					else
					{
						__LIB_3__::func_465(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					__LIB_1__::func_864(uLocal_433[0], 1, 0);
				}
				else if (!__LIB_0__::func_27(iLocal_447, 8388608))
				{
					__LIB_1__::func_991(uLocal_433[0], 0);
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("AGGRO_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_447, 8388608);
					__LIB_3__::func_465(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
				}
			}
		}
	}
}

void func_148()
{
	if (Local_132.f_48 == 1)
	{
		if (iLocal_326 == 0)
		{
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_433[0], &Local_337);
			}
		}
	}
}

void func_149()
{
	if (Local_132.f_48 == 1)
	{
		if (((__LIB_2__::func_1(uLocal_433[0], 0, 1) && __LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) < 7f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_433[0], Global_35, 1, 1)) && ENTITY::IS_ENTITY_ON_SCREEN(uLocal_433[0]))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			LAW::_0x710448D44A64C213(0);
			LAW::_0xC805EB785824F712(0);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
		}
	}
}

void func_150()
{
	int iVar0;
	if (Local_132.f_48 == 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1660197584))
		{
			if (iLocal_326 == 1)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_56[1 /*12*/].f_8, true);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_56[2 /*12*/].f_8, true);
			}
		}
		if (!__LIB_0__::func_27(iLocal_446, 128))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -591523853))
			{
				iVar0 = __LIB_3__::func_970(joaat("BEAT_DARK_ALLEY_BUM_MONEY"));
				__LIB_1__::func_432(iVar0, 0, 0, 1, 1);
				if (iLocal_326 == 1)
				{
					if (__LIB_0__::func_27(iLocal_446, 256))
					{
						__LIB_3__::func_465(12, 0, 0, "RE_HONOR_CHARITY", uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					else
					{
						__LIB_3__::func_465(12, 0, 0, "RE_HONOR_CHARITY", uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					}
				}
				else
				{
					__LIB_3__::func_465(12, 0, 0, "RE_HONOR_CHARITY", uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_1__::func_283(&uLocal_466, 0);
				__LIB_0__::func_325(&(uLocal_435[0]));
				__LIB_1__::func_683(&iLocal_446, 128);
			}
		}
		if (!__LIB_0__::func_27(iLocal_446, 256))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 627724801))
			{
				__LIB_1__::func_683(&iLocal_446, 256);
				if (__LIB_0__::func_27(iLocal_446, 128))
				{
					if (iLocal_326 == 1)
					{
						__LIB_3__::func_465(2, joaat("HONOR_EVENT_THEFT"), 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					__LIB_1__::func_616(__LIB_3__::func_970(joaat("BEAT_DARK_ALLEY_BUM_MONEY")) * 2, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				}
				else
				{
					if (iLocal_326 == 1)
					{
						__LIB_3__::func_465(2, joaat("HONOR_EVENT_THEFT"), 0, 0, uLocal_433[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					__LIB_9__::func_952(joaat("BEAT_DARK_ALLEY_BUM_MONEY"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[1 /*12*/].f_8))
				{
					if (iLocal_326 == 1 && !__LIB_0__::func_27(iLocal_446, 128))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_56[1 /*12*/].f_8, false);
					}
					else
					{
						OBJECT::DELETE_OBJECT(&(Local_56[1 /*12*/].f_8));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[2 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_56[2 /*12*/].f_8));
				}
				iLocal_521 = 0;
				iLocal_522 = 0;
				__LIB_0__::func_325(&(uLocal_435[0]));
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_1__::func_283(&uLocal_466, 0);
				if (PATHFIND::_0xDE0EA444735C1368(iLocal_541))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_541);
					__LIB_0__::func_172(iLocal_542);
				}
			}
		}
		if (__LIB_0__::func_75(&uLocal_466) && __LIB_1__::func_313(&uLocal_466, 0.5f))
		{
			if ((iLocal_336 == 19 || iLocal_336 == 5) || iLocal_336 == 6)
			{
				iLocal_336 = 0;
			}
			__LIB_1__::func_283(&uLocal_481, 0);
			fLocal_460 = 15f;
		}
	}
}

void func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	func_316();
	if (iLocal_527 == 1)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = -1;
	if (iLocal_441 == 2 && __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		if (iLocal_523 == 0)
		{
			iLocal_523 = 1;
			__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
		}
	}
	switch (iLocal_441)
	{
		case 3:
			iVar2 = func_318(&(uLocal_433[0]), &(Local_547[0 /*21*/]), 15f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			break;
		case 0:
			if (iLocal_528 == 0)
			{
				if ((__LIB_0__::func_393(Global_35, iLocal_544, 0, 1) && __LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) <= 5f) && !__LIB_0__::func_27(iLocal_446, 8388608))
				{
					func_21(0);
					iLocal_441 = 1;
					__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
					return;
				}
			}
			iVar2 = func_318(&(uLocal_433[0]), &(Local_547[0 /*21*/]), 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar2 == 0)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				iLocal_521 = 1;
				func_320(1);
			}
			else if (iVar2 == 1)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				iLocal_522 = 1;
				func_320(0);
			}
			if (__LIB_2__::func_227(-6f, 1, 0, 0) && __LIB_1__::func_313(&uLocal_487, 3f))
			{
				iLocal_520 = 1;
				__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
				if (iLocal_521 == 0)
				{
					__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
				}
				if (iLocal_522 == 0)
				{
					__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
				}
			}
			break;
		case 1:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_433[0], Local_327))
			{
				iLocal_441 = 0;
				return;
			}
			if (((!__LIB_0__::func_27(iLocal_446, 128) || !__LIB_0__::func_27(iLocal_446, 4)) && iLocal_326 == 1) || iLocal_326 == 0)
			{
				fVar3 = (Global_36.f_2 - (Local_132.f_51.f_2 + 1f));
				fVar3 = MISC::ABSF(fVar3);
				if ((((((!__LIB_0__::func_393(Global_35, iLocal_544, 0, 1) || __LIB_0__::func_665(Global_35, uLocal_433[0], 1, 1) > 5f) || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || __LIB_3__::func_291(Global_35, 1)) || __LIB_3__::func_112(uLocal_433[0], Global_35, 1060437492 /* Float: 0.707f */) == 1) || fVar3 >= 1f)
				{
					if (iLocal_532 == 0)
					{
						__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
						__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
						iLocal_532 = 1;
					}
				}
				else if (iLocal_532 == 1)
				{
					if (!__LIB_0__::func_27(iLocal_446, 128))
					{
						__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
					}
					if (__LIB_0__::func_27(iLocal_446, 4) && iLocal_326 == 1)
					{
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
					}
					else
					{
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
					}
					__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
					iLocal_532 = 0;
				}
			}
			if (iLocal_528 == 0 && iLocal_326 == 1)
			{
				if (iLocal_525 == 1 && iLocal_526 == 1)
				{
					iLocal_528 = 1;
				}
			}
			iVar2 = func_318(&(uLocal_433[0]), &(Local_547[0 /*21*/]), 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, func_321() | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar2 == 0)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				__LIB_1__::func_681(&iLocal_446, 16);
				__LIB_1__::func_683(&iLocal_446, 2);
				__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
				iLocal_525 = 1;
				func_322();
				iLocal_362 = 0;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_327, "BASE_BOOL", false, false);
				iLocal_441 = 3;
				__LIB_2__::func_526(&Local_569, 0, 0);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "player", Global_35);
				__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_327, "PBL_MTH_GIVE");
			}
			else if (iVar2 == 1)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iLocal_451++;
				__LIB_1__::func_681(&iLocal_446, 16);
				__LIB_1__::func_681(&iLocal_446, 2);
				__LIB_1__::func_683(&iLocal_446, 4);
				__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
				iLocal_526 = 1;
				iLocal_362 = 0;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_327, "BASE_BOOL", false, false);
				__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
				func_318(&(uLocal_433[0]), &(Local_547[0 /*21*/]), 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				__LIB_1__::func_991(uLocal_433[0], 0);
				if (iLocal_326 == 0)
				{
					__LIB_1__::func_283(&uLocal_505, 0);
				}
				__LIB_2__::func_526(&Local_569, 0, 0);
				iLocal_441 = 3;
				__LIB_2__::func_526(&Local_569, 0, 0);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_327, "player", Global_35);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_327, "PBL_MTH_STEAL_01");
				if (iLocal_326 == 1)
				{
					func_322();
				}
				if (iLocal_451 >= 2 && iLocal_326 == 0)
				{
					func_322();
					iLocal_441 = 0;
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_327, "PBL_MTH_STEAL_02");
					iLocal_528 = 1;
				}
			}
			if (iVar0 == 1)
			{
				func_323();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				iLocal_515 = 0;
				if (Local_132.f_44 == 0)
				{
					__LIB_2__::func_115(81, 1, 0, 0, 6, 0, 0, 1);
				}
				Local_132.f_48 = 1;
				Local_132.f_44 = 1;
				iLocal_336 = iLocal_335;
				iLocal_335 = 19;
			}
			if (__LIB_2__::func_227(-6f, 1, 0, 0) && __LIB_1__::func_313(&uLocal_487, 3f))
			{
				iLocal_520 = 1;
				__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
				iLocal_532 = 1;
			}
			break;
		case 2:
			iVar2 = func_318(&(uLocal_433[0]), &(Local_547[0 /*21*/]), 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 64 | 256 | 2 | 8, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (((iLocal_326 == 0 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0])) && __LIB_1__::func_313(&uLocal_487, 3f))
			{
				if (iLocal_524 == 0)
				{
					iLocal_520 = 1;
					__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
					if (iLocal_523 == 0)
					{
						__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
					}
					if (iLocal_524 == 0)
					{
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
					}
				}
			}
			if (iVar2 == 0)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				iLocal_523 = 1;
				func_320(1);
				__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
			}
			else if (iVar2 == 1)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				if (__LIB_0__::func_75(&uLocal_472))
				{
					__LIB_1__::func_148(&uLocal_472);
				}
				if (iLocal_326 == 1)
				{
					iLocal_524 = 1;
				}
				func_320(0);
				__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
			}
			break;
	}
	if (iVar0 == 1)
	{
		if (__LIB_0__::func_75(&uLocal_490))
		{
			__LIB_1__::func_148(&uLocal_490);
		}
		iLocal_517 = 1;
		if (Local_132.f_44 == 0)
		{
			__LIB_2__::func_115(81, 1, 0, 0, 6, 0, 0, 1);
		}
		Local_132.f_44 = 1;
		if (iVar1 == 1)
		{
			__LIB_1__::func_283(&uLocal_484, 0);
		}
	}
}

bool func_152()
{
	if (Local_132.f_48 == 1)
	{
		if (!__LIB_2__::func_1(uLocal_433[0], 0, 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(uLocal_433[0], 11, true))
			{
				if (__LIB_0__::func_665(uLocal_433[0], Global_35, 1, 0) > 25f && ENTITY::IS_ENTITY_OCCLUDED(uLocal_433[0]))
				{
					PED::_0x39A2FC5AF55A52B1(uLocal_433[0], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_433[0]));
					return true;
				}
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_433[0], 6, false);
				iLocal_536 = 1;
			}
			if (!__LIB_0__::func_75(&uLocal_496))
			{
				__LIB_1__::func_283(&uLocal_496, 0);
			}
		}
		if (__LIB_0__::func_75(&uLocal_496))
		{
			if (iLocal_536 == 1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_154()
{
	if (Local_132.f_48 == 1 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_327))
	{
		if (!__LIB_0__::func_27(iLocal_446, 32))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_327, "PBL_MTH_STEAL_01");
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_327, "player", &Local_376, true, "PBL_MTH_STEAL_01", 2))
			{
				if (!__LIB_0__::func_86(Local_376) && !__LIB_0__::func_86(Local_376.f_3))
				{
					__LIB_1__::func_683(&iLocal_446, 32);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_446, 131072))
		{
			if (iLocal_326 == 0)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_327, "PBL_MTH_STEAL_02");
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_327, "player", &Local_388, true, "PBL_MTH_STEAL_02", 2))
				{
					if (!__LIB_0__::func_86(Local_388) && !__LIB_0__::func_86(Local_388.f_3))
					{
						__LIB_1__::func_683(&iLocal_446, 131072);
					}
				}
			}
			else
			{
				__LIB_1__::func_683(&iLocal_446, 131072);
			}
		}
		if (!__LIB_0__::func_27(iLocal_446, 64))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_327, "PBL_MTH_GIVE");
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_327, "player", &Local_364, true, "PBL_MTH_GIVE", 2))
			{
				if (!__LIB_0__::func_86(Local_364) && !__LIB_0__::func_86(Local_364.f_3))
				{
					__LIB_1__::func_683(&iLocal_446, 64);
				}
			}
		}
	}
}

void func_160()
{
	if (Local_132.f_48 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_446, 8192))
		{
			if (__LIB_2__::func_1(uLocal_433[0], 0, 1) && __LIB_2__::func_118(uLocal_433[0], 1, 1) < 6f)
			{
				__LIB_1__::func_683(&iLocal_446, 8192);
			}
		}
		else if ((!__LIB_0__::func_27(iLocal_446, 16384) && !__LIB_0__::func_27(iLocal_446, 128)) && !__LIB_0__::func_27(iLocal_446, 256))
		{
			if (((__LIB_2__::func_1(uLocal_433[0], 0, 1) && __LIB_2__::func_118(uLocal_433[0], 1, 1) > 8f) && !__LIB_0__::func_27(iLocal_447, 134217728)) && iLocal_533 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0]))
				{
					if (iLocal_326 == 0 && func_49(Local_327, "PBL_DIA_09"))
					{
						func_50(Local_327, "PBL_DIA_09", "BASE_BOOL", 19, "HANDLE_PLAYER_IGNORING - CON");
						__LIB_1__::func_683(&iLocal_446, 16384);
					}
					else if (iLocal_326 == 1 && func_49(Local_327, "PBL_BASE_VAR02"))
					{
						func_50(Local_327, "PBL_BASE_VAR02", "BASE_BOOL", 5, "HANDLE_PLAYER_IGNORING - REAL");
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("PASSER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_447, 65536);
						__LIB_1__::func_683(&iLocal_446, 16384);
					}
				}
			}
		}
	}
}

void func_161()
{
	int iVar0;
	if ((__LIB_0__::func_27(iLocal_446, 8) && !__LIB_0__::func_27(iLocal_446, 16)) && !__LIB_0__::func_163(Global_35, -875674219))
	{
		if (PATHFIND::_0xDE0EA444735C1368(iLocal_541))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_541);
			__LIB_0__::func_172(iLocal_542);
		}
		if (__LIB_0__::func_27(iLocal_446, 2))
		{
			func_49(Local_327, "PBL_MTH_GIVE");
		}
		else if (__LIB_0__::func_27(iLocal_446, 4))
		{
			if (iLocal_449 == 0)
			{
				func_49(Local_327, "PBL_MTH_STEAL_01");
			}
			else
			{
				func_49(Local_327, "PBL_MTH_STEAL_02");
			}
		}
		iVar0 = 0;
		if (__LIB_0__::func_27(iLocal_446, 2))
		{
			if (__LIB_3__::func_678(Global_35, Local_327, "player", "PBL_MTH_GIVE", &iLocal_362, 1065353216 /* Float: 1f */, 1, 1, 1))
			{
				iVar0 = 1;
			}
		}
		else if (__LIB_0__::func_27(iLocal_446, 4))
		{
			if (iLocal_449 == 0)
			{
				if (__LIB_3__::func_678(Global_35, Local_327, "player", "PBL_MTH_STEAL_01", &iLocal_362, 1065353216 /* Float: 1f */, 1, 1, 1))
				{
					iVar0 = 1;
				}
			}
			else if (__LIB_3__::func_678(Global_35, Local_327, "player", "PBL_MTH_STEAL_02", &iLocal_362, 1065353216 /* Float: 1f */, 1, 1, 1))
			{
				iVar0 = 1;
			}
		}
		if (iVar0 == 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "player", Global_35, 0);
			if (__LIB_0__::func_27(iLocal_446, 2))
			{
				__LIB_1__::func_148(&uLocal_469);
				__LIB_1__::func_683(&iLocal_446, 16);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_541))
				{
					if (PATHFIND::_0x19C7567D2F2287D6(iLocal_541, 7))
					{
						iLocal_542 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uLocal_433[0], true, false), 0f, 0f, Local_99[0 /*32*/].f_9, 1f, 1f, 5f);
					}
				}
				iLocal_530 = 1;
				iLocal_515 = 0;
				__LIB_1__::func_283(&uLocal_493, 0);
			}
			else if (__LIB_0__::func_27(iLocal_446, 4))
			{
				if (iLocal_449 == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_327, "player", Global_35, 0);
					__LIB_1__::func_148(&uLocal_469);
					__LIB_1__::func_683(&iLocal_446, 16);
					iLocal_449++;
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_541))
					{
						if (PATHFIND::_0x19C7567D2F2287D6(iLocal_541, 7))
						{
							iLocal_542 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uLocal_433[0], true, false), 0f, 0f, Local_99[0 /*32*/].f_9, 1f, 1f, 5f);
						}
					}
					iLocal_530 = 1;
					iLocal_515 = 0;
					__LIB_1__::func_283(&uLocal_493, 0);
				}
				else if (iLocal_449 > 0)
				{
					__LIB_1__::func_148(&uLocal_469);
					__LIB_1__::func_683(&iLocal_446, 16);
					iLocal_449++;
					func_37(1);
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_541))
					{
						if (PATHFIND::_0x19C7567D2F2287D6(iLocal_541, 7))
						{
							iLocal_542 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uLocal_433[0], true, false), 0f, 0f, Local_99[0 /*32*/].f_9, 1f, 1f, 5f);
						}
					}
					iLocal_530 = 1;
					iLocal_515 = 0;
					__LIB_1__::func_283(&uLocal_493, 0);
				}
			}
		}
		return;
	}
}

void func_166(int iParam0)
{
	__LIB_2__::func_360(&(Local_569[0 /*17*/]), "RE_INTER_DEFUSE");
	__LIB_2__::func_360(&(Local_569[1 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_3__::func_621(&(Local_569[0 /*17*/]), 0, 0);
	__LIB_3__::func_621(&(Local_569[1 /*17*/]), 0, 0);
	__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
	__LIB_0__::func_37(&uLocal_493);
	iLocal_530 = 0;
	if ((iLocal_523 == 1 || iParam0 == 1) || __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
	}
	if (iLocal_524 == 1 || iParam0 == 1)
	{
		__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
	}
}

void func_172()
{
	int iVar0;
	if (Local_132.f_48 == 1)
	{
		if (__LIB_2__::func_1(uLocal_433[0], 0, 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 217959441))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[1 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_56[1 /*12*/].f_8));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[2 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_56[2 /*12*/].f_8));
				}
				__LIB_4__::func_276(uLocal_433[0], 0, 0);
				iVar0 = __LIB_3__::func_970(joaat("BEAT_DARK_ALLEY_BUM_MONEY"));
				if (__LIB_0__::func_27(iLocal_446, 128))
				{
					iVar0 += 100;
				}
				__LIB_2__::func_190(uLocal_433[0], iVar0);
				__LIB_2__::func_360(&(Local_569[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_569[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_360(&(Local_569[0 /*17*/]), "RE_INTER_POS");
				iLocal_521 = 0;
				__LIB_2__::func_360(&(Local_569[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
				if (iLocal_521 == 0)
				{
					__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
				}
				else
				{
					__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
				}
				if (iLocal_522 == 0)
				{
					__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
				}
				else
				{
					__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 263679809))
			{
				TASK::_0x2E1D6D87346BB7D2(uLocal_433[0], Global_35, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], 2118412884))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_433[0], Local_327))
				{
					if (__LIB_0__::func_27(iLocal_446, 128))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 6, 385, -1082130432 /* Float: -1f */, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_433[0], Global_35, 1, 385, -1082130432 /* Float: -1f */, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
				}
			}
		}
	}
}

void func_173()
{
	if (__LIB_0__::func_665(uLocal_433[0], Global_35, 1, 1) > 20f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_433[0]))
	{
		PED::_0x39A2FC5AF55A52B1(uLocal_433[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_433[0]));
	}
}

void func_174()
{
	if (__LIB_2__::func_1(uLocal_433[0], 0, 0))
	{
		if (!__LIB_0__::func_27(iLocal_446, 1048576))
		{
			if (ENTITY::_0x61914209C36EFDDB(uLocal_433[0]) == 1 || PED::_IS_PED_HOGTIED(uLocal_433[0]))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0]))
				{
					__LIB_2__::func_504(uLocal_433[0], 0);
					if (iLocal_533 == 0)
					{
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("HOGTIE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
						__LIB_1__::func_683(&iLocal_446, 1048576);
					}
					else
					{
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("RUN_HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
						__LIB_1__::func_683(&iLocal_446, 1048576);
					}
					__LIB_1__::func_283(&uLocal_499, 0);
					fLocal_461 = 7f;
					return;
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_446, 16777216))
		{
			if (__LIB_3__::func_458(uLocal_433[0]) == 10 && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0]))
			{
				__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("HOGTIE_UNTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_446, 16777216);
				__LIB_1__::func_148(&uLocal_499);
				return;
			}
		}
		if (((__LIB_0__::func_27(iLocal_446, 1048576) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0])) && __LIB_0__::func_264(&uLocal_499) > fLocal_461) && (PED::_IS_PED_HOGTIED(uLocal_433[0]) || PED::_IS_PED_LASSOED(uLocal_433[0])))
		{
			if (iLocal_533 == 0)
			{
				switch (iLocal_454)
				{
					case 0:
						__LIB_2__::func_504(uLocal_433[0], 0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("HOGTIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454++;
						break;
					case 1:
						__LIB_2__::func_504(uLocal_433[0], 0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("HOGTIE_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454++;
						break;
					case 2:
						break;
				}
			}
			else
			{
				switch (iLocal_454)
				{
					case 0:
						__LIB_2__::func_504(uLocal_433[0], 0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("POST_HOGTIED_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 8f;
						iLocal_454++;
						break;
					case 1:
						__LIB_2__::func_504(uLocal_433[0], 0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("POST_HOGTIED_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 6f;
						iLocal_454++;
						break;
					case 2:
						__LIB_2__::func_504(uLocal_433[0], 0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("POST_HOGTIED_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454++;
						break;
					case 3:
						__LIB_2__::func_504(uLocal_433[0], 0);
						__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("POST_HOGTIED_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454++;
						break;
					case 4:
						break;
				}
			}
			__LIB_1__::func_148(&uLocal_499);
		}
	}
}

void func_310(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (__LIB_0__::func_264(&uLocal_490) > 15f)
	{
		if ((((__LIB_0__::func_27(iLocal_447, iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0])) && __LIB_0__::func_665(uLocal_433[0], Global_35, 1, 1) < fParam6) && __LIB_0__::func_264(&uLocal_463) > fLocal_457)
		{
			if (func_49(iParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam3, true, false);
				fLocal_457 = fParam5;
				iLocal_335 = iParam4;
				__LIB_1__::func_148(&uLocal_469);
			}
		}
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_433[0], -1950704028))
	{
		__LIB_1__::func_148(&uLocal_463);
	}
}

void func_316()
{
	if (iLocal_537 == 1)
	{
		return;
	}
	if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_433[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_1__::func_313(&uLocal_484, 2f))
	{
		if (__LIB_0__::func_27(iLocal_448, 1) && !__LIB_0__::func_27(iLocal_448, 64))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_EARLY_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 64);
		}
		else if (__LIB_0__::func_27(iLocal_448, 2) && !__LIB_0__::func_27(iLocal_448, 128))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_EARLY_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 128);
		}
		else if (__LIB_0__::func_27(iLocal_448, 4096) && !__LIB_0__::func_27(iLocal_448, 16384))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_CAUGHT_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 16384);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_437);
			TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_NERVOUS", 3f, 0f, 4);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(uLocal_433[0], &iLocal_437, 0, 0, 1, 1);
		}
		else if (__LIB_0__::func_27(iLocal_448, 8192) && !__LIB_0__::func_27(iLocal_448, 32768))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_CAUGHT_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 32768);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_437);
			TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_NERVOUS", 3f, 0f, 4);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(uLocal_433[0], &iLocal_437, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(uLocal_433[0], true);
		}
		else if (__LIB_0__::func_27(iLocal_448, 4) && !__LIB_0__::func_27(iLocal_448, 256))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_GAVE_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 256);
		}
		else if (__LIB_0__::func_27(iLocal_448, 8) && !__LIB_0__::func_27(iLocal_448, 512))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_GAVE_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 512);
		}
		else if (__LIB_0__::func_27(iLocal_448, 16) && !__LIB_0__::func_27(iLocal_448, 1024))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_STOLE_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 1024);
		}
		else if (__LIB_0__::func_27(iLocal_448, 32) && !__LIB_0__::func_27(iLocal_448, 2048))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_STOLE_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 2048);
		}
		else if (__LIB_0__::func_27(iLocal_448, 1048576) && !__LIB_0__::func_27(iLocal_448, 4194304))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_CONFESSED_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 4194304);
		}
		else if (__LIB_0__::func_27(iLocal_448, 2097152) && !__LIB_0__::func_27(iLocal_448, 8388608))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_CONFESSED_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 8388608);
		}
		else if ((__LIB_0__::func_27(iLocal_448, 65536) && !__LIB_0__::func_27(iLocal_448, 262144)) && !__LIB_0__::func_27(iLocal_446, 8388608))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_DEFUSE_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 262144);
		}
		else if ((__LIB_0__::func_27(iLocal_448, 131072) && !__LIB_0__::func_27(iLocal_448, 524288)) && !__LIB_0__::func_27(iLocal_446, 8388608))
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_THREATEN_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 524288);
			if (__LIB_0__::func_75(&uLocal_472))
			{
				__LIB_1__::func_148(&uLocal_472);
			}
		}
		else if ((__LIB_0__::func_27(iLocal_448, 16777216) && !__LIB_0__::func_27(iLocal_448, 33554432)) && iLocal_326 == 1)
		{
			__LIB_2__::func_478(uLocal_433[0], Global_35, func_42("ILO_THREATEN_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_448, 33554432);
		}
		__LIB_1__::func_283(&uLocal_487, 0);
	}
}

int func_318(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_476(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_320(int iParam0)
{
	if (iParam0 == 1)
	{
		if (iLocal_441 == 2 && !__LIB_0__::func_27(iLocal_448, 65536))
		{
			__LIB_1__::func_683(&iLocal_448, 65536);
			if (__LIB_0__::func_75(&uLocal_472))
			{
				__LIB_1__::func_148(&uLocal_472);
			}
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_DEFUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (__LIB_0__::func_27(iLocal_446, 32768))
		{
			__LIB_1__::func_683(&iLocal_448, 1048576);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_CONFESSED_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (__LIB_0__::func_27(iLocal_446, 4096))
		{
			__LIB_1__::func_683(&iLocal_448, 4096);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_CAUGHT_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (__LIB_0__::func_27(iLocal_446, 256))
		{
			__LIB_1__::func_683(&iLocal_448, 16);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_STOLE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (__LIB_0__::func_27(iLocal_446, 128))
		{
			__LIB_1__::func_683(&iLocal_448, 4);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_GAVE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (iParam0 == 0)
	{
		if (iLocal_441 == 2 && !__LIB_0__::func_27(iLocal_448, 131072))
		{
			__LIB_1__::func_683(&iLocal_448, 131072);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_THREATEN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (__LIB_0__::func_75(&uLocal_472))
			{
				__LIB_1__::func_148(&uLocal_472);
			}
			__LIB_2__::func_504(uLocal_433[0], 250);
		}
		else if ((iLocal_441 == 2 && __LIB_0__::func_27(iLocal_448, 131072)) && !__LIB_0__::func_27(iLocal_448, 16777216))
		{
			__LIB_1__::func_683(&iLocal_448, 16777216);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_THREATEN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_524 = 1;
			if (__LIB_0__::func_75(&uLocal_472))
			{
				__LIB_1__::func_148(&uLocal_472);
			}
			__LIB_2__::func_504(uLocal_433[0], 250);
		}
		else if (__LIB_0__::func_27(iLocal_446, 32768))
		{
			__LIB_1__::func_683(&iLocal_448, 2097152);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_CONFESSED_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_521 = 1;
			iLocal_522 = 1;
		}
		else if (__LIB_0__::func_27(iLocal_446, 4096))
		{
			__LIB_1__::func_683(&iLocal_448, 8192);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_CAUGHT_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_441 = 3;
			__LIB_2__::func_526(&Local_569, 0, 0);
			__LIB_2__::func_451(&(Local_547[0 /*21*/]), 0);
		}
		else if (__LIB_0__::func_27(iLocal_446, 256))
		{
			__LIB_1__::func_683(&iLocal_448, 32);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_STOLE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (__LIB_0__::func_27(iLocal_446, 128))
		{
			__LIB_1__::func_683(&iLocal_448, 8);
			__LIB_2__::func_478(Global_35, uLocal_433[0], func_42("ILO_GAVE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
}

int func_321()
{
	if ((iLocal_525 == 1 || (iLocal_451 >= 2 && iLocal_326 == 0)) || (iLocal_451 >= 1 && iLocal_326 == 1))
	{
		return __LIB_2__::func_340(1, 0, 0);
	}
	return 90;
}

void func_322()
{
	if (iLocal_529 == 0)
	{
		iLocal_529 = 1;
		iLocal_521 = 0;
		iLocal_522 = 0;
	}
}

void func_323()
{
	var uVar0[3];
	var uVar4;
	int iVar6;
	__LIB_3__::func_623(&Local_400);
	Local_400.f_1 = Global_35;
	if (__LIB_0__::func_27(iLocal_446, 2))
	{
		Local_400.f_8 = { Local_364 };
		Local_400.f_19 = Local_364.f_3.f_2;
	}
	else if (__LIB_0__::func_27(iLocal_446, 4))
	{
		Local_400.f_8 = { Local_376 };
		Local_400.f_19 = Local_376.f_3.f_2;
	}
	Local_400.f_18 = 0f;
	__LIB_1__::func_336(&(Local_400.f_23), 1024);
	__LIB_1__::func_336(&(Local_400.f_23), 1);
	__LIB_1__::func_683(&iLocal_446, 8);
	uVar4 = 1;
	__LIB_11__::func_841(&uVar0, &uVar4, 3, Local_132.f_51, 3f);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar6]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(uVar0[iVar6], Local_132.f_51, 6, 0, 4f, -1, 0);
		}
		iVar6++;
	}
	MAP::DISPLAY_RADAR(false);
}

int func_476(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_476(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

