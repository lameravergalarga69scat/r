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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 1176256512;
	int iLocal_23 = 0;
	var uLocal_24[2] = { 0, 0 };
	var uLocal_27[2] = { 0, 0 };
	struct<32> Local_30[2];
	struct<193> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	struct<9> Local_302[1];
	struct<9> Local_312[1];
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	char[] cLocal_330[8] = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333[2] = { 0, 0 };
	int iLocal_336 = 0;
	bool bLocal_337 = false;
	vector3 vLocal_338 = { 0f, 0f, 0f };
	vector3 vLocal_341 = { 0f, 0f, 0f };
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	vector3 vLocal_347 = { 0f, 0f, 0f };
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = -1;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 2;
	var uLocal_367 = 1;
	var uLocal_368 = 1;
	var uLocal_369 = 1;
	var uLocal_370 = 0;
	var uLocal_371 = 1;
	var uLocal_372 = 2;
	var uLocal_373 = 2;
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 3;
	var uLocal_378 = 1;
	var uLocal_379 = 3;
	var uLocal_380 = 3;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = -1;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 2;
	var uLocal_392 = 1;
	var uLocal_393 = 1;
	var uLocal_394 = 1;
	var uLocal_395 = 0;
	var uLocal_396 = 1;
	var uLocal_397 = 2;
	var uLocal_398 = 2;
	var uLocal_399 = 3;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 3;
	var uLocal_403 = 1;
	var uLocal_404 = 3;
	var uLocal_405 = 3;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	struct<2> Local_409 = { 0, 0 } ;
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
	struct<21> Local_422[2];
	var uLocal_465 = 2;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 570;
	var uLocal_469 = 1065353216;
	var uLocal_470 = -1082130432;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 2;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 570;
	var uLocal_486 = 1065353216;
	var uLocal_487 = -1082130432;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 2;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 2;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 570;
	var uLocal_504 = 1065353216;
	var uLocal_505 = -1082130432;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 2;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 570;
	var uLocal_521 = 1065353216;
	var uLocal_522 = -1082130432;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 2;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536[2] = { 0, 0 };
	int iLocal_539 = 0;
	var uLocal_540 = 0;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_298 = -1;
	cLocal_330 = "RE_SO";
	iLocal_336 = -1;
	iLocal_535 = __LIB_2__::func_340(1, 0, 0) | 64 | 128;
	Local_95.f_3 = __LIB_0__::func_81(&ScriptParam_0);
	Local_95.f_43 = __LIB_0__::func_12();
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		Local_95.f_161 = __LIB_0__::func_27(ScriptParam_0.f_2, 2);
		__LIB_4__::func_414(&Local_95, 1);
		func_7(ScriptParam_0, &iLocal_14, __LIB_1__::func_898(), Local_95.f_161);
		__LIB_2__::func_110(&(Local_95.f_5), 1);
		__LIB_2__::func_111(&(Local_95.f_5), 1);
		__LIB_2__::func_182(&(Local_95.f_5), 0);
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 1461, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_18)
			{
				case 0:
					if (func_13())
					{
						iLocal_18 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_95, &ScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_15(&Local_95, &iLocal_539, &uLocal_540);
						Local_95.f_51.f_4 = uLocal_540;
						__LIB_3__::func_455(&Local_95, iLocal_539, 2139);
						func_18(&Local_95, &iLocal_539, &uLocal_540);
						iLocal_18 = 3;
					}
					else if (Local_95.f_160)
					{
						func_11();
					}
					break;
				case 3:
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(3, 11)))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_289, func_19(3, 11)))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289, func_19(3, 11));
						}
					}
					else if (func_20())
					{
						__LIB_0__::func_568(Local_95.f_51, 3f, 0);
						func_22(iLocal_539, &vLocal_338, &uLocal_344);
						func_23(&Local_95, &Local_30, vLocal_338, vLocal_341, uLocal_353);
						iLocal_23 = __LIB_0__::func_12();
						ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_289, &vLocal_347, &uLocal_350, 2);
						VOLUME::_SET_VOLUME_COORDS(Local_95.f_171, vLocal_347);
						func_24(&uLocal_322, &uLocal_327, vLocal_347, 0f, 0f, 0f, 3f, 3f, 3f, 0, 534496, 1, 0, "RESO_BLOCKING_VOL");
						func_24(&uLocal_323, &uLocal_328, func_25(iLocal_539), 0f, 0f, 0f, 1.3f, 1.3f, 1.3f, 0, 534496, 1, 2, "RESO_SOLID_VOL");
						switch (iLocal_14)
						{
							case 0:
								switch (iLocal_539)
								{
									case 1:
										func_24(&uLocal_324, &uLocal_329, -1803.433f, -427.5037f, 159.1663f, 0f, 0f, -24f, 7f, 3f, 3f, 1, 534496, 1, 2, "RESO_DOCTOR_VOL");
										break;
									case 10:
										func_24(&uLocal_324, &uLocal_329, 2952.501f, 1357.376f, 44.74523f, 0f, 0f, 71f, 2f, 1.5f, 2f, 1, 534496, 1, 2, "RESO_DOCTOR_VOL");
										break;
								}
								break;
						}
						func_26(iLocal_539, &iLocal_326);
						func_27();
						func_28(0);
						func_29(&(Local_422[0 /*21*/]), &uLocal_465);
						func_29(&(Local_422[1 /*21*/]), &uLocal_500);
						func_30(&uLocal_383);
						func_31();
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (!__LIB_17__::func_887(&Local_95, &uLocal_24, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_11();
					}
					if (!Local_95.f_46)
					{
						if (func_33(&uLocal_24, &(Local_95.f_5), &iLocal_408, &iLocal_336, 0, 1, 1) || (ENTITY::IS_ENTITY_DEAD(uLocal_24[0]) && ((__LIB_10__::func_387(uLocal_24[0]) || ENTITY::_0x61914209C36EFDDB(uLocal_24[0]) == 4) || ENTITY::_0x61914209C36EFDDB(uLocal_24[0]) == 5)))
						{
							if (iLocal_408 != 16384)
							{
							}
							else
							{
								func_35(1073741824 /* Float: 2f */);
							}
							__LIB_0__::func_172(iLocal_325);
							Local_95.f_46 = 1;
							__LIB_2__::func_526(&uLocal_465, 0, 0);
							__LIB_2__::func_526(&uLocal_500, 0, 0);
							__LIB_1__::func_649(&iLocal_17, 6);
						}
					}
					if (func_39())
					{
						Local_95.f_50 = 1;
						func_11();
					}
					if (__LIB_3__::func_431(&Local_95, &uLocal_24, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_11();
					}
					break;
			}
			BUILTIN::WAIT(Local_95.f_158);
		}
	}
}

void func_7(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, var uParam9)
{
	bool bVar0;
	bVar0 = true;
	*iParam7 = __LIB_3__::func_390(iParam0, 2, 0);
	if (bVar0)
	{
		switch (iParam8)
		{
			case 1:
				*iParam7 = 0;
				break;
			case 10:
				if (func_44(0))
				{
					*iParam7 = 1;
				}
				else
				{
					*iParam7 = 0;
				}
				break;
			case 11:
				*iParam7 = 1;
				break;
		}
	}
	else
	{
		switch (iParam8)
		{
			case 1:
				if (*iParam7 == 1)
				{
					*iParam7 = 0;
				}
				break;
			case 10:
				break;
			case 11:
				*iParam7 = 1;
				break;
		}
	}
}

void func_11()
{
	func_47(0);
	__LIB_0__::func_172(iLocal_325);
	__LIB_0__::func_172(iLocal_326);
	__LIB_3__::func_525(&uLocal_322, &uLocal_327);
	__LIB_3__::func_525(&uLocal_323, &uLocal_328);
	__LIB_3__::func_525(&uLocal_324, &uLocal_329);
	func_49();
	func_50();
	if (!Local_95.f_46)
	{
		func_51(0);
		func_51(1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_24[0]))
	{
		__LIB_2__::func_603(&(uLocal_24[0]), &(Local_422[0 /*21*/]), &uLocal_465, 1, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_24[0], 3, 2, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_24[0], 4, 2, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_24[0], 7, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_24[1]))
	{
		__LIB_2__::func_603(&(uLocal_24[1]), &(Local_422[1 /*21*/]), &uLocal_500, 1, 1);
	}
	func_28(1);
	__LIB_4__::func_20(&(Local_409.f_1));
	__LIB_3__::func_493(&Local_95, &uLocal_24, &uLocal_27, iLocal_14, iLocal_539, uLocal_540, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_13()
{
	switch (iLocal_16)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_95))
			{
				func_57(&Local_30, __LIB_1__::func_898());
				__LIB_3__::func_284(&Local_30);
				WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0);
				func_59(&iLocal_289, __LIB_1__::func_898());
				iLocal_16 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_15, cLocal_330))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_30))
			{
				return false;
			}
			if (!WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_289, true, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_15(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 141.47f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 70.56f;
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
		case 1:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -1782.253f, -382.1956f, 159.8128f, 0f, 0f, 45f, 20f, 30f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -1756.177f, -403.6084f, 158.2963f, 0f, 0f, 63f, 20f, 40f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -1777.366f, -417.0415f, 158.8414f, 0f, 0f, 56f, 25f, 5f, 10f);
					break;
			}
			break;
		case 10:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2929.53f, 1324.492f, 45.2851f, 0f, 0f, -20f, 27f, 50f, 5f);
					break;
			}
			break;
		case 11:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 1329.143f, -1307.485f, 79.4895f, 0f, 0f, -21f, 50f, 23f, 10f);
					break;
			}
			break;
	}
}

char* func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_14)
			{
				case 0:
					return "PBL_QUICK_01";
				case 1:
					return "PBL_QUICK_02";
				default:
					break;
			}
			break;
		case 1:
			return "PBL_QUICK_02_ALT";
		case 3:
			switch (iLocal_14)
			{
				case 0:
					return "PBL_ACTION_01";
				case 1:
					return "PBL_ACTION_02";
				default:
					break;
			}
			break;
		case 2:
			return "PBL_BASE";
		case 4:
			switch (iParam1)
			{
				case 10:
					return "PBL_EXIT_R";
				case 11:
					return "PBL_EXIT_L";
				default:
					break;
			}
			break;
	}
	return "INVALID_PBL";
}

bool func_20()
{
	switch (iLocal_301)
	{
		case 0:
			iLocal_301 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_95.f_51, 0f, &Local_30, &uLocal_24, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_301 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_22(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = { 0.02f, 4.11f, 0.01f };
			*uParam2 = { -1769.219f, -384.1214f, 156.7393f };
			break;
		case 11:
			*uParam1 = { -3.97f, -1.6f, -0.07f };
			*uParam2 = { 1326.152f, -1317.731f, 76.89645f };
			break;
		case 10:
			*uParam1 = { 2.31f, -0.74f, 0.06f };
			*uParam2 = { 2939.985f, 1321.897f, 43.75893f };
			break;
	}
}

void func_23(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8)
{
	if (__LIB_0__::func_86(vParam2))
	{
		(uParam1[0 /*32*/])->f_6 = { 1.15f, 0.88f, 0f };
		(uParam1[0 /*32*/])->f_9 = uParam0->f_51.f_3;
		(uParam1[1 /*32*/])->f_6 = { 2.22f, 1.69f, 0f };
		(uParam1[1 /*32*/])->f_9 = (uParam0->f_51.f_3 - 180f);
	}
	else
	{
		(uParam1[0 /*32*/])->f_6 = { vParam2 };
		(uParam1[0 /*32*/])->f_9 = uParam0->f_51.f_3;
		(uParam1[1 /*32*/])->f_6 = { vParam5 };
		(uParam1[1 /*32*/])->f_9 = uParam8;
	}
}

void func_24(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				__LIB_3__::func_581(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				__LIB_3__::func_557(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			__LIB_3__::func_685(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			__LIB_3__::func_683(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, 0, 15);
		}
	}
}

Vector3 func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1769.405f, -386.2124f, 156.7331f;
		case 10:
			return 2941.971f, 1321.951f, 43.70759f;
		case 11:
			return 1324.53f, -1316.558f, 76.93623f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			break;
		case 10:
			__LIB_3__::func_557(iParam1, 2935.347f, 1316.777f, 45.31497f, 0f, 0f, -19.5f, 4f, 8f, 5f, "RESO_EXIT_ALT");
			break;
		case 11:
			__LIB_3__::func_557(iParam1, 1332.201f, -1314.278f, 77.7795f, 0f, 0f, -14.25f, 8f, 5f, 5f, "RESO_EXIT_ALT");
			break;
	}
}

void func_27()
{
	switch (iLocal_539)
	{
		case 1:
			iLocal_298 = 477;
			iLocal_299 = __LIB_0__::func_120(iLocal_298);
			break;
		case 10:
			break;
		case 11:
			break;
	}
}

void func_28(bool bParam0)
{
	if (bParam0)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(iLocal_299))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_299);
		}
	}
	else if (PERSCHAR::_0x800DF3FC913355F3(iLocal_299))
	{
		PERSCHAR::_0x7B204F88F6C3D287(iLocal_299);
	}
}

void func_29(var uParam0, var uParam1)
{
	__LIB_3__::func_157(uParam1[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(uParam1[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_451(uParam0, 0);
	__LIB_2__::func_526(uParam1, 0, 0);
}

void func_30(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_7 = 0;
	uParam0->f_8 = 4;
	uParam0->f_19 = 3;
	uParam0->f_21 = 3;
	uParam0->f_17 = 2;
}

void func_31()
{
	int iVar0;
	iLocal_300 = __LIB_3__::func_430(285212672, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_2__::func_1(uLocal_24[iVar0], 0, 1))
		{
			__LIB_3__::func_285(uLocal_24[iVar0], &Local_95, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_24[iVar0], true, true);
		}
		iVar0++;
	}
	__LIB_3__::func_178(uLocal_24[0], &Local_302);
	__LIB_3__::func_178(uLocal_24[1], &Local_312);
	WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_24[0], iLocal_300, 6, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(uLocal_24[0], 2, true);
}

bool func_33(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_453((*uParam0)[*iParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_35(int iParam0)
{
	if (!func_92(iParam0))
	{
		__LIB_1__::func_683(&iLocal_332, iParam0);
	}
}

bool func_39()
{
	int iVar0;
	if (iLocal_17 > 2)
	{
		func_95();
		func_96();
	}
	switch (iLocal_17)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_17, 1);
			break;
		case 1:
			if (func_97())
			{
				__LIB_1__::func_649(&iLocal_17, 2);
			}
			break;
		case 2:
			if (__LIB_17__::func_888(&Local_95, &uLocal_20, 0.75f, 1114636288 /* Float: 60f */, 30f, 1500, 3f, 2f, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, 0))
			{
				if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
				{
					TASK::_0x2E1D6D87346BB7D2(uLocal_24[0], Global_35, 0, 0);
				}
				if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
				{
					TASK::_0x2E1D6D87346BB7D2(uLocal_24[1], Global_35, 0, 0);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289, func_19(3, 11), true);
				__LIB_1__::func_649(&iLocal_17, 3);
			}
			break;
		case 3:
			func_99();
			func_100();
			switch (iLocal_539)
			{
				case 1:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[0], -639229975))
					{
						__LIB_2__::func_315(249295937, uLocal_24[0], 1);
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[1], -639229975))
					{
						__LIB_2__::func_315(249295937, uLocal_24[0], 1);
					}
					break;
				case 10:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[0], -672109443))
					{
						__LIB_2__::func_315(249295937, uLocal_24[0], 1);
					}
					break;
				case 11:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[0], 452110716))
					{
						__LIB_2__::func_315(249295937, uLocal_24[0], 1);
					}
					break;
			}
			func_102();
			func_103();
			func_104();
			if (((!func_92(536870912) && func_92(4)) && __LIB_4__::func_79(iLocal_289)) && __LIB_1__::func_205(Global_35, iLocal_326, 1, 0))
			{
				if ((func_107(0, 536870912, "bCanTransition") && __LIB_4__::func_79(iLocal_289)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(4, iLocal_539)))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289, func_19(4, iLocal_539), true);
				}
			}
			if (func_108())
			{
				__LIB_3__::func_334(&uLocal_27);
				func_47(0);
				switch (iLocal_14)
				{
					case 1:
						__LIB_2__::func_526(&uLocal_465, 1, 0);
						break;
					case 0:
						__LIB_2__::func_526(&uLocal_465, 1, 0);
						__LIB_2__::func_526(&uLocal_500, 1, 0);
						break;
				}
				__LIB_1__::func_649(&iLocal_17, 4);
			}
			break;
		case 4:
			switch (iLocal_14)
			{
				case 0:
					if (!func_110(2))
					{
						if (((!func_111(2, 1) && !func_111(1, 0)) && !func_111(1, 1)) && __LIB_2__::func_227(3f, 1, uLocal_24[1], 1))
						{
							__LIB_2__::func_122(uLocal_24[1], func_113(iLocal_539), 291934926, 0, 1, &(Local_30[1 /*32*/].f_23), 1, 1);
							func_115(2);
							__LIB_1__::func_649(&iLocal_17, 8);
						}
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_DEAD(uLocal_24[0]) || __LIB_0__::func_94(uLocal_24[0], Local_95.f_51, 1) > 35f)
					{
						__LIB_1__::func_649(&iLocal_17, 8);
					}
					else if (!__LIB_0__::func_163(uLocal_24[0], 1435919172))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(uLocal_24[0], Local_95.f_51, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_649(&iLocal_17, 8);
					}
					break;
			}
			break;
		case 6:
			if (!func_92(1073741824 /* Float: 2f */))
			{
				func_47(1);
			}
			__LIB_3__::func_334(&uLocal_27);
			func_50();
			func_118();
			func_119();
			__LIB_1__::func_649(&iLocal_17, 7);
			break;
		case 7:
			if (!__LIB_2__::func_1(uLocal_24[0], 0, 1) && !__LIB_2__::func_1(uLocal_24[1], 0, 1))
			{
				__LIB_1__::func_649(&iLocal_17, 8);
			}
			else if (__LIB_2__::func_118(uLocal_24[0], 1, 1) > 50f)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_2__::func_1(uLocal_24[iVar0], 0, 1))
					{
						func_121(uLocal_24[iVar0], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
					}
					iVar0++;
				}
				__LIB_1__::func_649(&iLocal_17, 8);
			}
			break;
		case 8:
			if (!__LIB_2__::func_1(uLocal_24[0], 0, 1) || Local_95.f_46)
			{
				return true;
			}
			if ((!func_111(1, 0) && !func_111(1, 1)) && __LIB_0__::func_94(uLocal_24[0], Local_95.f_51, 1) > 35f)
			{
				return true;
			}
			if (func_111(2, 0) && func_111(2, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (__LIB_3__::func_564(109, iParam0) == 1)
	{
		return true;
	}
	return false;
}

void func_47(bool bParam0)
{
	if (bParam0 || func_92(524288))
	{
		if (!Local_95.f_48)
		{
			__LIB_3__::func_426(&Local_95, &(Local_95.f_48), Local_95.f_3, &(Local_95.f_51.f_6));
		}
		Local_95.f_44 = 1;
		__LIB_3__::func_461(109, iLocal_14, 1);
	}
}

void func_49()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_289);
		}
	}
}

void func_50()
{
	if (func_92(4096))
	{
		return;
	}
	else
	{
		switch (iLocal_14)
		{
			case 0:
				if (!__LIB_2__::func_1(uLocal_24[0], 0, 1))
				{
					return;
				}
				else if (bLocal_337)
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_24[0], true, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_24[0], iLocal_300, 6, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_24[0], true, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_24[0], iLocal_300, 6, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				break;
			case 1:
				if (!__LIB_2__::func_1(uLocal_24[0], 0, 1))
				{
					return;
				}
				else if (bLocal_337)
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_24[0], true, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_24[0], iLocal_300, 6, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_24[0], true, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_24[0], iLocal_300, 6, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				break;
		}
		__LIB_1__::func_683(&iLocal_332, 4096);
	}
}

void func_51(int iParam0)
{
	if (!__LIB_2__::func_1(uLocal_24[iParam0], 0, 1))
	{
		return;
	}
	else if (iParam0 == 0)
	{
		if (func_92(32))
		{
			return;
		}
		else
		{
			switch (iLocal_14)
			{
				case 0:
					if (func_92(4))
					{
					}
					else
					{
						func_135(uLocal_24[0], 0, 0);
					}
					break;
				case 1:
					if (func_92(4))
					{
						PED::_0x89F5E7ADECCCB49C(uLocal_24[0], "PANIC");
						TASK::_TASK_SMART_FLEE_STYLE_COORD(uLocal_24[0], Local_95.f_51, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_683(&iLocal_332, 32768);
					}
					else
					{
						func_135(uLocal_24[0], 0, 0);
					}
					break;
			}
			__LIB_1__::func_683(&iLocal_332, 32);
		}
	}
	else if (iParam0 == 1)
	{
		if (func_92(64))
		{
			return;
		}
		else
		{
			switch (iLocal_14)
			{
				case 0:
					if (func_92(4))
					{
					}
					else
					{
						func_136(uLocal_24[1], uLocal_24[0]);
					}
					break;
				case 1:
					if (func_92(4))
					{
						__LIB_1__::func_864(uLocal_24[1], 0, 0);
					}
					else
					{
						func_135(uLocal_24[1], 1, 0);
					}
					break;
			}
			__LIB_1__::func_683(&iLocal_332, 64);
		}
	}
}

void func_57(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iLocal_14)
			{
				case 0:
					(uParam0[0 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
					(uParam0[0 /*32*/])->f_3 = -934894752;
					StringCopy(&((uParam0[0 /*32*/])->f_23), "0918_A_M_M_Civ_Poor_White_AVOID_01", 64);
					(*uParam0)[0 /*32*/] = 4;
					(uParam0[1 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
					(uParam0[1 /*32*/])->f_3 = 723204194;
					StringCopy(&((uParam0[1 /*32*/])->f_23), "0815_A_M_M_StrLaborer_01_WHITE_01", 64);
					(*uParam0)[1 /*32*/] = 4;
					break;
			}
			break;
		case 10:
			switch (iLocal_14)
			{
				case 0:
					(uParam0[0 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
					(uParam0[0 /*32*/])->f_3 = -1958167757;
					StringCopy(&((uParam0[0 /*32*/])->f_23), "0024_A_M_Y_AsbMiner_01_WHITE_01", 64);
					(*uParam0)[0 /*32*/] = 4;
					(uParam0[1 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
					(uParam0[1 /*32*/])->f_3 = 2015253088;
					StringCopy(&((uParam0[1 /*32*/])->f_23), "0018_A_M_M_AsbTownfolk_01_WHITE_01", 64);
					(*uParam0)[1 /*32*/] = 4;
					break;
				case 1:
					(uParam0[0 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
					(uParam0[0 /*32*/])->f_3 = -587538794;
					StringCopy(&((uParam0[0 /*32*/])->f_23), "0886_A_M_M_Civ_Poor_Black_AVOID_01", 64);
					(*uParam0)[0 /*32*/] = 4;
					(uParam0[1 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
					(uParam0[1 /*32*/])->f_3 = -2055901938;
					StringCopy(&((uParam0[1 /*32*/])->f_23), "0962_A_M_M_Rancher_White_07", 64);
					(*uParam0)[1 /*32*/] = 4;
					break;
			}
			break;
		case 11:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
			(uParam0[0 /*32*/])->f_3 = -639466092;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "0418_A_M_M_SclRoughTravellers_01_WHITE_01", 64);
			(*uParam0)[0 /*32*/] = 4;
			(uParam0[1 /*32*/])->f_1 = joaat("RE_SHOWOFF_MALES_01");
			(uParam0[1 /*32*/])->f_3 = 390787076;
			StringCopy(&((uParam0[1 /*32*/])->f_23), "0975_A_M_M_RoughTravellers_White_06", 64);
			(*uParam0)[1 /*32*/] = 4;
			break;
	}
	__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
}

void func_59(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_4 = "script@beat@town@showOff@strawberry";
			*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_19(2, 11), false, true);
			break;
		case 10:
			iParam0->f_4 = "script@beat@town@showOff@annesburg";
			*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_19(2, 11), false, true);
			break;
		case 11:
			iParam0->f_4 = "script@beat@town@showOff@rhodes";
			*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_19(2, 11), false, true);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
}

bool func_92(int iParam0)
{
	return __LIB_0__::func_27(iLocal_332, iParam0);
}

void func_95()
{
	iLocal_536[0] = func_261(&(uLocal_24[0]), &(Local_422[0 /*21*/]), 15f, &uLocal_465, &(Local_95.f_192), 0, 1, 0, 0, iLocal_535, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_536[1] = func_261(&(uLocal_24[1]), &(Local_422[1 /*21*/]), 15f, &uLocal_500, &(Local_95.f_192), 0, 1, 0, 0, iLocal_535, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
}

void func_96()
{
	if (Local_95.f_46)
	{
		return;
	}
	if (func_111(1, 0))
	{
		if (__LIB_1__::func_285(&uLocal_354, 1f))
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_24[0], &uLocal_383);
		}
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return;
		}
		if (__LIB_1__::func_285(&uLocal_354, func_263(0, iLocal_539, iLocal_14, func_111(4, 0))))
		{
			switch (iLocal_14)
			{
				case 0:
					if (func_264(uLocal_24[0], Global_35, 1, 0, -1061158912 /* Float: -6f */))
					{
						func_265(2, 0);
						func_266(1, 0);
						func_266(4, 0);
						func_266(8, 0);
						__LIB_0__::func_37(&uLocal_354);
						if (!func_111(2, 1))
						{
							__LIB_2__::func_526(&uLocal_500, 1, 0);
						}
					}
					break;
				case 1:
					if (__LIB_2__::func_122(uLocal_24[0], func_267(0, iLocal_14, iLocal_539, func_111(4, 0)), 291934926, Global_35, 1, &(Local_30[0 /*32*/].f_23), func_268(0, iLocal_14, iLocal_539, func_111(4, 0)), 1))
					{
						func_265(2, 0);
						func_266(1, 0);
						func_266(4, 0);
						func_266(8, 0);
						__LIB_0__::func_37(&uLocal_354);
						if (!func_111(2, 1))
						{
							__LIB_2__::func_526(&uLocal_500, 1, 0);
						}
					}
					break;
			}
		}
		return;
	}
	else if (func_111(1, 1))
	{
		if (__LIB_1__::func_285(&uLocal_354, 1f))
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_24[1], &uLocal_383);
		}
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return;
		}
		if (__LIB_1__::func_285(&uLocal_354, func_263(1, iLocal_539, iLocal_14, func_111(4, 1))))
		{
			switch (iLocal_14)
			{
				case 0:
					if (__LIB_2__::func_122(uLocal_24[1], func_267(1, iLocal_14, iLocal_539, func_111(4, 1)), 291934926, Global_35, 1, &(Local_30[1 /*32*/].f_23), func_268(1, iLocal_14, iLocal_539, func_111(4, 1)), 1))
					{
						func_265(2, 1);
						func_266(1, 1);
						func_266(4, 1);
						func_266(8, 1);
						__LIB_0__::func_37(&uLocal_354);
						if (!func_111(2, 0))
						{
							__LIB_2__::func_526(&uLocal_465, 1, 0);
						}
					}
					break;
			}
		}
		return;
	}
	if (__LIB_2__::func_456(&(Local_422[0 /*21*/])))
	{
		switch (iLocal_536[0])
		{
			case 0:
				func_47(1);
				func_265(4, 0);
				__LIB_2__::func_526(&uLocal_465, 0, 0);
				__LIB_2__::func_526(&uLocal_500, 0, 0);
				if (func_92(4))
				{
					func_264(Global_35, uLocal_24[0], 2048, 0, -1061158912 /* Float: -6f */);
					__LIB_2__::func_526(&uLocal_465, 0, 0);
					__LIB_1__::func_148(&uLocal_354);
					func_265(1, 0);
				}
				else
				{
					func_264(Global_35, uLocal_24[0], 1024, 0, -1061158912 /* Float: -6f */);
				}
				break;
			case 1:
				func_47(1);
				func_265(8, 0);
				__LIB_2__::func_526(&uLocal_500, 0, 0);
				__LIB_2__::func_526(&uLocal_465, 0, 0);
				func_264(Global_35, uLocal_24[0], 4096, 0, -1061158912 /* Float: -6f */);
				__LIB_1__::func_148(&uLocal_354);
				func_265(1, 0);
				break;
		}
	}
	else if (__LIB_2__::func_456(&(Local_422[1 /*21*/])))
	{
		switch (iLocal_536[1])
		{
			case 0:
				func_47(1);
				func_265(4, 1);
				__LIB_2__::func_526(&uLocal_500, 0, 0);
				__LIB_2__::func_526(&uLocal_465, 0, 0);
				if (func_92(4))
				{
					func_264(Global_35, uLocal_24[1], 8192, 0, -1061158912 /* Float: -6f */);
					__LIB_1__::func_148(&uLocal_354);
					func_265(1, 1);
				}
				else
				{
					func_264(Global_35, uLocal_24[1], 1024, 0, -1061158912 /* Float: -6f */);
				}
				break;
			case 1:
				func_47(1);
				func_265(8, 1);
				__LIB_2__::func_526(&uLocal_500, 0, 0);
				func_264(Global_35, uLocal_24[1], 16384, 0, -1061158912 /* Float: -6f */);
				__LIB_1__::func_148(&uLocal_354);
				func_265(1, 1);
				break;
		}
	}
}

bool func_97()
{
	switch (iLocal_19)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(uLocal_24[0], true, false);
			iLocal_19 = 1;
			break;
		case 1:
			func_271();
			iLocal_19 = 2;
			break;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(3, 11)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289, func_19(3, 11));
			}
			switch (iLocal_14)
			{
				case 0:
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289, func_19(0, 11));
					break;
				case 1:
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289, func_19(0, 11));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289, func_19(1, 11));
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_289, func_19(4, iLocal_539));
					break;
			}
			iLocal_19 = 3;
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(3, 11)))
			{
				switch (iLocal_14)
				{
					case 0:
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(0, 11)))
						{
							return false;
						}
						break;
					case 1:
						if ((!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(0, 11)) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(1, 11))) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(4, iLocal_539)))
						{
							return false;
						}
						break;
				}
				iLocal_19 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_99()
{
	if (func_92(524288))
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
	{
		if (__LIB_4__::func_360(&(Local_302[0 /*9*/]), 15f, 1082130432 /* Float: 4f */, 0, 0, 0, 0))
		{
			if (__LIB_3__::func_280(&Local_302, 1, 3f))
			{
				func_35(524288);
			}
		}
	}
	if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
	{
		if (__LIB_4__::func_360(&(Local_312[0 /*9*/]), 15f, 1082130432 /* Float: 4f */, 0, 0, 0, 0))
		{
			if (__LIB_3__::func_280(&Local_312, 1, 3f))
			{
				func_35(524288);
			}
		}
	}
}

int func_100()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[0], 1373283311))
	{
		bLocal_337 = true;
		return 1;
	}
	else if (!func_92(4) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[0], 1506059158))
	{
		bLocal_337 = false;
		return 0;
	}
	return 0;
}

void func_102()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar9;
	if (Local_95.f_46)
	{
		return;
	}
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
			{
				if (func_107(0, 131072, "endsInWalk"))
				{
					__LIB_0__::func_172(iLocal_325);
					func_50();
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_24[0], iLocal_289))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_289, "PED_SHOWOFF", uLocal_24[0]);
					}
					PED::FORCE_PED_MOTION_STATE(uLocal_24[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (__LIB_0__::func_86(func_275(iLocal_539)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_276(iLocal_539, 1), 1f, -1, 0.25f, 8192, 40000f);
						TASK::TASK_WANDER_IN_VOLUME(0, __LIB_0__::func_559(iLocal_23), 3f, 12f, 1);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_275(iLocal_539), 1f, -1, 5f, 1, 40000f);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, func_278(iLocal_539), 1f, 0, false, false, true, false);
					}
					__LIB_1__::func_474(uLocal_24[0], &iVar0, 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(uLocal_24[0], true);
				}
			}
			if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
			{
				if (func_107(1, 262144, "endsInWalk"))
				{
					__LIB_0__::func_172(iLocal_325);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_24[1], iLocal_289))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_289, "PED_SIDEKICK", uLocal_24[1]);
					}
					PED::FORCE_PED_MOTION_STATE(uLocal_24[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					Var2.f_3 = 1065353216;
					Var2.f_4 = -1;
					Var2.f_5 = 1048576000;
					Var2.f_6 = 1193033728;
					Var2 = { func_276(iLocal_539, 1) };
					Var2.f_3 = 1f;
					TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var2);
					TASK::TASK_WANDER_IN_VOLUME(0, __LIB_0__::func_559(iLocal_23), 3f, 12f, 1);
					__LIB_1__::func_474(uLocal_24[1], &iVar1, 0, 0, 1, 1);
					if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
					{
						func_280(uLocal_24[0], &uLocal_358);
						_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_24[1], &uLocal_358);
					}
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
			{
				if (func_107(0, 512, "endsInRun"))
				{
					func_50();
					__LIB_0__::func_172(iLocal_325);
					PED::_0x89F5E7ADECCCB49C(uLocal_24[0], "PANIC");
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_24[0], iLocal_289))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_289, "PED_SHOWOFF", uLocal_24[0]);
					}
					TASK::_0x2E1D6D87346BB7D2(uLocal_24[0], uLocal_24[1], 0, 0);
					PED::FORCE_PED_MOTION_STATE(uLocal_24[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (func_92(536870912))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_281(iLocal_539), 2f, -1, 0.25f, 8193, 40000f);
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, uLocal_24[1], 4, 384, 100f, -1, 0);
					__LIB_1__::func_474(uLocal_24[0], &iVar9, 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(uLocal_24[0], true);
				}
			}
			if (func_92(4) && !ENTITY::IS_ENTITY_DEAD(uLocal_24[1]))
			{
				__LIB_1__::func_864(uLocal_24[1], 1, 0);
			}
			break;
	}
}

void func_103()
{
	if (func_107(1, 4, "fireGun"))
	{
		AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_24[0], true);
		__LIB_2__::func_526(&uLocal_465, 0, 0);
		__LIB_2__::func_526(&uLocal_500, 0, 0);
		func_282(&Local_409, iLocal_14, iLocal_539, uLocal_24[1]);
		__LIB_2__::func_315(1066055203, uLocal_24[1], 1);
	}
	else if (func_107(0, 4, "fireGun"))
	{
		AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_24[1], true);
		__LIB_2__::func_526(&uLocal_465, 0, 0);
		__LIB_2__::func_526(&uLocal_500, 0, 0);
		func_282(&Local_409, iLocal_14, iLocal_539, uLocal_24[0]);
		__LIB_2__::func_315(1066055203, uLocal_24[1], 1);
		if (iLocal_14 == 0)
		{
			PED::_0x89F5E7ADECCCB49C(uLocal_24[0], "INJURED_RIGHT_LEG");
			PED::APPLY_DAMAGE_TO_PED(uLocal_24[0], 40, 0, 6884, 0);
			PED::_0x58D32261AE0F0843(uLocal_24[0], 6884, -0.174878f, -0.051429f, -0.386792f, -0.709578f, -0.702718f, 0.051815f, "BulletCriticalPistol");
		}
		else
		{
			__LIB_3__::func_696(&(uLocal_24[0]), 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_24[0], 6, true);
		}
	}
}

void func_104()
{
	if (func_92(268435456))
	{
		return;
	}
	if (__LIB_2__::func_118(uLocal_24[0], 1, 1) > 3.5f)
	{
		return;
	}
	func_107(0, 8388608, "quickBreakout");
	if (func_92(8388608))
	{
		switch (iLocal_14)
		{
			case 0:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(0, 11)))
				{
					func_35(268435456);
					func_47(1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289, func_19(0, 11), true);
				}
				break;
			case 1:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(1, 11)) && __LIB_1__::func_205(Global_35, iLocal_326, 1, 0))
				{
					func_35(536870912);
					func_35(268435456);
					func_47(1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289, func_19(1, 11), true);
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_289, func_19(0, 11)))
				{
					func_35(268435456);
					func_47(1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_289, func_19(0, 11), true);
				}
				break;
		}
	}
}

bool func_107(int iParam0, int iParam1, char* sParam2)
{
	if (func_92(iParam1))
	{
		return false;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_24[iParam0], MISC::GET_HASH_KEY(sParam2)))
	{
		func_35(iParam1);
		return true;
	}
	return false;
}

bool func_108()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_289))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_289, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_289, false))
			{
				func_50();
				return true;
			}
			else if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_289, func_284(0)) && ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_289, func_284(1)))
			{
				return true;
			}
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

bool func_110(int iParam0)
{
	return __LIB_0__::func_27(iLocal_331, iParam0);
}

bool func_111(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_333[iParam1], iParam0);
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "GENERIC_SHOCKED_DISBELIEF";
		case 10:
			return "SORRY_TO_HEAR_THAT";
		default:
			break;
	}
	return "INVALID_DISTRICT";
}

void func_115(int iParam0)
{
	if (!func_110(iParam0))
	{
		__LIB_1__::func_683(&iLocal_331, iParam0);
	}
}

void func_118()
{
	switch (iLocal_14)
	{
		case 0:
			func_121(uLocal_24[0], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
			__LIB_1__::func_683(&iLocal_332, 32768);
			func_121(uLocal_24[1], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
			__LIB_1__::func_683(&iLocal_332, 65536);
			break;
		case 1:
			if (func_92(4))
			{
				if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
				{
					__LIB_1__::func_864(uLocal_24[1], 0, 0);
				}
				func_121(uLocal_24[0], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
				__LIB_1__::func_683(&iLocal_332, 32768);
			}
			else if (func_289())
			{
				func_290();
			}
			else
			{
				func_121(uLocal_24[0], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
				__LIB_1__::func_683(&iLocal_332, 32768);
				func_121(uLocal_24[1], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
				__LIB_1__::func_683(&iLocal_332, 65536);
			}
			break;
	}
	if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
	{
		PED::SET_PED_KEEP_TASK(uLocal_24[0], true);
	}
	if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
	{
		PED::SET_PED_KEEP_TASK(uLocal_24[1], true);
	}
}

void func_119()
{
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_2__::func_1(uLocal_24[0], 0, 1) && Local_95.f_5.f_10 == uLocal_24[0])
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_504(uLocal_24[0], 0);
				__LIB_2__::func_504(uLocal_24[1], 0);
				if (__LIB_2__::func_122(uLocal_24[0], func_293(iLocal_539, iLocal_14), 291934926, Global_35, 1, &(Local_30[0 /*32*/].f_23), func_294(iLocal_539, iLocal_14), 1))
				{
				}
			}
			else if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_504(uLocal_24[0], 0);
				__LIB_2__::func_504(uLocal_24[1], 0);
				__LIB_2__::func_303(uLocal_24[1], Global_35, __LIB_3__::func_394("SOFF", func_295(iLocal_539), "AGGRO_FRIEND", __LIB_4__::func_221(iLocal_14)), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 1:
			if (func_92(4))
			{
				if (__LIB_2__::func_1(uLocal_24[0], 0, 1))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_504(uLocal_24[0], 0);
					__LIB_2__::func_504(uLocal_24[1], 0);
					if (__LIB_2__::func_122(uLocal_24[0], func_293(iLocal_539, iLocal_14), 291934926, Global_35, 1, &(Local_30[0 /*32*/].f_23), func_294(iLocal_539, iLocal_14), 1))
					{
					}
				}
			}
			else if (__LIB_2__::func_1(uLocal_24[0], 0, 1) && Local_95.f_5.f_10 == uLocal_24[0])
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_504(uLocal_24[0], 0);
				__LIB_2__::func_504(uLocal_24[1], 0);
				if (__LIB_2__::func_122(uLocal_24[0], func_293(iLocal_539, iLocal_14), 291934926, Global_35, 1, &(Local_30[0 /*32*/].f_23), func_294(iLocal_539, iLocal_14), 1))
				{
				}
			}
			else if (__LIB_2__::func_1(uLocal_24[1], 0, 1))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_504(uLocal_24[0], 0);
				__LIB_2__::func_504(uLocal_24[1], 0);
				__LIB_2__::func_303(uLocal_24[1], Global_35, __LIB_3__::func_394("SOFF", func_295(iLocal_539), "AGGRO_FRIEND", __LIB_4__::func_221(iLocal_14)), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
	}
}

void func_121(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (bParam3)
		{
			TASK::TASK_FORCE_MOTION_STATE(0, iParam4, false);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, uParam1, iParam2, 384, 100f, -1, 0);
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_135(int iParam0, bool bParam1, int iParam2)
{
	if (__LIB_2__::func_1(iParam2, 0, 1))
	{
		func_280(iParam2, &uLocal_358);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &uLocal_358);
	}
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_357);
		TASK::TASK_WANDER_IN_VOLUME(0, __LIB_0__::func_559(iLocal_23), 3f, 12f, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_357);
		if (bParam1)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_357, 0.2f, 0.8f);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_357);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_357);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_136(int iParam0, int iParam1)
{
	if (!PED::DOES_GROUP_EXIST(iLocal_297))
	{
		iLocal_297 = PED::CREATE_GROUP(2);
	}
	if (!PED::_0x878B68960C1C2A35(iParam1, iLocal_297))
	{
		PED::SET_PED_AS_GROUP_LEADER(iParam1, iLocal_297, false);
	}
	if (!PED::IS_PED_GROUP_MEMBER(iParam0, iLocal_297, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, iLocal_297);
		PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
	}
}

int func_261(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_440(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

float func_263(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (__LIB_0__::func_181())
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 0:
						if (bParam3)
						{
							return 2f;
						}
						else
						{
							return 2.3f;
						}
						break;
					case 1:
						if (bParam3)
						{
							return 3f;
						}
						else
						{
							return 4f;
						}
						break;
				}
				break;
			case 10:
				switch (iParam2)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								if (bParam3)
								{
									return 2.3f;
								}
								else
								{
									return 2f;
								}
								break;
							case 1:
								if (bParam3)
								{
									return 2.5f;
								}
								else
								{
									return 3f;
								}
								break;
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								if (bParam3)
								{
									return 2f;
								}
								else
								{
									return 2.75f;
								}
								break;
						}
						break;
				}
				break;
			case 11:
				if (bParam3)
				{
					return 2.5f;
				}
				else
				{
					return 2.5f;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 0:
						if (bParam3)
						{
							return 3.25f;
						}
						else
						{
							return 3f;
						}
						break;
					case 1:
						if (bParam3)
						{
							return 3.5f;
						}
						else
						{
							return 4f;
						}
						break;
				}
				break;
			case 10:
				switch (iParam2)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								if (bParam3)
								{
									return 2.3f;
								}
								else
								{
									return 2f;
								}
								break;
							case 1:
								if (bParam3)
								{
									return 2f;
								}
								else
								{
									return 3f;
								}
								break;
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								if (bParam3)
								{
									return 2f;
								}
								else
								{
									return 2.75f;
								}
								break;
						}
						break;
				}
				break;
			case 11:
				if (bParam3)
				{
					return 2.5f;
				}
				else
				{
					return 2.5f;
				}
				break;
		}
	}
	return 4f;
}

bool func_264(int iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	if (__LIB_0__::func_27(iLocal_331, iParam2))
	{
		return true;
	}
	if (!bParam3 || __LIB_2__::func_227(fParam4, 1, 0, 0))
	{
		__LIB_2__::func_303(iParam0, iParam1, func_446(iParam2, iLocal_539, iLocal_14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_683(&iLocal_331, iParam2);
		return true;
	}
	return false;
}

void func_265(int iParam0, int iParam1)
{
	if (!func_111(iParam0, iParam1))
	{
		__LIB_1__::func_683(&(uLocal_333[iParam1]), iParam0);
	}
}

void func_266(int iParam0, int iParam1)
{
	if (func_111(iParam0, iParam1))
	{
		__LIB_1__::func_681(&(uLocal_333[iParam1]), iParam0);
	}
}

char* func_267(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							if (bParam3)
							{
								return "RESPONSE_C";
							}
							else
							{
								return "GENERIC_INSULT_MED_MALE";
							}
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							if (bParam3)
							{
								return "SORRY_TO_HEAR_THAT";
							}
							else
							{
								return "INSULT_RESPONSE";
							}
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							if (bParam3)
							{
								return "PANIC_COMMUNICATE";
							}
							else
							{
								return "GENERIC_FRIGHTENED_HIGH";
							}
							break;
					}
					break;
			}
			break;
		case 11:
			if (bParam3)
			{
				return "PANIC_HELP";
			}
			else
			{
				return "PANIC_HELP";
			}
			break;
	}
	return "INVALID_ILO_OPTION";
}

int func_268(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							if (bParam3)
							{
								return 1;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							if (bParam3)
							{
								return 2;
							}
							else
							{
								return 2;
							}
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							if (bParam3)
							{
								return 1;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
		case 11:
			if (bParam3)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

void func_271()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289, func_284(0), uLocal_24[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_289, func_284(1), uLocal_24[1], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_289);
}

Vector3 func_275(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 2951.523f, 1354.916f, 43.86149f;
		default:
			break;
	}
	return func_449();
}

Vector3 func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_14)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return -1804.821f, -426.3846f, 157.7882f;
						case 1:
							return -1793.402f, -363.1049f, 161.2588f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iLocal_14)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 2953.913f, 1362.94f, 43.86995f;
						case 1:
							return 2919.635f, 1364.095f, 43.78649f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1805.231f, -427.6564f, 158.2436f;
		case 10:
			return 2952.835f, 1356.812f, 44.32264f;
		default:
			break;
	}
	return func_449();
}

void func_280(int iParam0, var uParam1)
{
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_3 = iParam0;
	uParam1->f_8 = 4;
	uParam1->f_19 = 3;
	uParam1->f_21 = 3;
	uParam1->f_17 = 3;
	uParam1->f_18 = 3;
	uParam1->f_7 = 8000;
}

Vector3 func_281(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 2947.721f, 1364.451f, 42.95759f;
		case 11:
			return 1316.28f, -1322.058f, 75.93623f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_3__::func_899(uParam0, func_450(iParam1), "", 0f, 0f, 0f, iParam3, func_451(iParam1), func_452(iParam2, iParam1), func_452(iParam2, iParam1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0);
}

char* func_284(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "Showoff";
				case 1:
					return "Friend";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "Showoff";
				case 1:
					return "Friend";
				default:
					break;
			}
			break;
	}
	return "INVALID_PED";
}

bool func_289()
{
	if (iLocal_336 == -1)
	{
		return false;
	}
	switch (iLocal_408)
	{
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

void func_290()
{
	int iVar0;
	if (iLocal_336 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_2__::func_1(uLocal_24[iVar0], 0, 1))
		{
			if (iLocal_336 == iVar0)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_24[iVar0], 93, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_24[iVar0], 50, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_24[iVar0], 92, true);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_24[iVar0], joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_COMBAT_PED(uLocal_24[iVar0], Global_35, 0, 0);
				__LIB_2__::func_73(uLocal_24[iVar0], &(uLocal_27[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			else
			{
				func_121(uLocal_24[iVar0], Global_35, 4, 0, joaat("MOTIONSTATE_RUN"));
			}
		}
		iVar0++;
	}
}

char* func_293(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "GET_AWAY_FROM_ME";
		case 10:
			switch (iParam1)
			{
				case 0:
					return "PLEAD";
				case 1:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
		case 11:
			return "GET_AWAY_FROM_ME";
	}
	return "GET_AWAY_FROM_ME";
}

int func_294(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 11:
			return 1;
	}
	return 1;
}

char* func_295(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STR";
		case 10:
			return "ASB";
		case 11:
			return "RHD";
		default:
			break;
	}
	return "INVALID";
}

int func_440(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_440(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

char* func_446(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "IMFINE", __LIB_4__::func_221(iParam2));
		case 4:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "MAILED_GUN", __LIB_4__::func_221(iParam2));
		case 1024:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "GREET", __LIB_4__::func_221(iParam2));
		case 2048:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "POS_SHOW_OFF", __LIB_4__::func_221(iParam2));
		case 4096:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "NEG_SHOW_OFF", __LIB_4__::func_221(iParam2));
		case 8192:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "POS_FRIEND", __LIB_4__::func_221(iParam2));
		case 16384:
			return __LIB_3__::func_394("SOFF", func_295(iParam1), "NEG_FRIEND", __LIB_4__::func_221(iParam2));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

Vector3 func_449()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			return 1367.909f, -1309.398f, 77.39516f;
		case 76:
			return -285.42f, 808.1369f, 118.843f;
		case 26:
			return -1805.382f, -427.5335f, 158.2456f;
		case 5:
			return 2732.031f, -1230.156f, 49.83533f;
		case 78:
			return 3006.496f, 1482.702f, 51.87699f;
	}
	return 0f, 0f, 0f;
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EVENT_SHOCKING_BEAT_SURPRISING");
		case 1:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
}

float func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return -1f;
		default:
			break;
	}
	return -1f;
}

float func_452(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 15f;
				case 10:
					return 20f;
				case 11:
					return 15f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					return 7f;
				case 10:
					return 7f;
				case 11:
					return 7f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

