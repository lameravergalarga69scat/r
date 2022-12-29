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
	var uLocal_15[2] = { 0, 0 };
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	struct<193> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_213 = 0;
	struct<32> Local_214[2];
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284[2] = { 0, 0 };
	int iLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	struct<18> Local_296 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = -1;
	var uLocal_318 = -1;
	var uLocal_319 = -1;
	var uLocal_320 = -1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
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
	struct<21> Local_387[2];
	struct<17> Local_430[2];
	int iLocal_465 = 0;
	int iLocal_466[2] = { 0, 0 };
	var uLocal_469[2] = { 0, 0 };
	var uLocal_472[2] = { 0, 0 };
	var uLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482[1] = { 0 };
	var uLocal_484 = 2;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	vector3 vLocal_488[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_495[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_520 = { 0f, 0f, 0f };
	vector3 vLocal_523 = { 0f, 0f, 0f };
	vector3 vLocal_526 = { 0f, 0f, 0f };
	float fLocal_529 = 0f;
	char* sLocal_530 = NULL;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	bool bLocal_537 = false;
	bool bLocal_538 = false;
	bool bLocal_539 = false;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 1176256512;
	int iLocal_543 = 0;
	bool bLocal_544 = false;
	int iLocal_545[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_560[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_575 = 0;
	struct<4> Local_576 = { 0, 0, 0, 0 } ;
	var uLocal_580 = 0;
	var uLocal_581 = 1065353216;
	var uLocal_582 = 1119092736;
	var uLocal_583 = 1092616192;
	var uLocal_584 = 1085276160;
	vector3 vLocal_585 = { 0f, 0f, 0f };
	int iLocal_588 = 0;
	bool bLocal_589 = false;
	int iLocal_590 = 0;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_279 = 1;
	Local_20.f_3 = __LIB_0__::func_81(&ScriptParam_0);
	Local_20.f_161 = __LIB_0__::func_27(ScriptParam_0.f_2, 2);
	iLocal_18 = __LIB_3__::func_390(9, 1, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4();
	}
	__LIB_3__::func_368(&Local_20, 1);
	if (!func_6())
	{
		func_4();
	}
	__LIB_2__::func_433(&(Local_20.f_5));
	__LIB_2__::func_104(&(Local_20.f_5), 1);
	__LIB_2__::func_105(&(Local_20.f_5), 1);
	__LIB_2__::func_51(&(Local_20.f_5), 0);
	func_11();
	while (true)
	{
		if (iLocal_280 > 1)
		{
			__LIB_4__::func_319(&uLocal_333, Local_20.f_51, 4, -1082130432 /* Float: -1f */);
		}
		switch (iLocal_280)
		{
			case 0:
				if (func_13())
				{
					iLocal_280 = 1;
				}
				break;
			case 1:
				if (func_14(ScriptParam_0))
				{
					__LIB_2__::func_106(&(Local_20.f_51), 5, 10, 0);
					func_16(0);
					func_17();
					PROPSET::_REQUEST_PROPSET_2(joaat("PG_RE_CAMPFIREAMBUSH01X"));
					iLocal_481 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_20.f_51, 0f, 0f, 0f, 8f, 8f, 20f, "volHerbSuppress");
					__LIB_3__::func_241(iLocal_481, 1);
					iLocal_280 = 2;
				}
				break;
			case 2:
				if (func_19())
				{
					iLocal_534 = (20000 + MISC::GET_GAME_TIMER());
					iLocal_280 = 3;
				}
				break;
			case 3:
				if (func_20())
				{
					func_21();
					iLocal_280 = 4;
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_534)
				{
					func_4();
				}
				break;
			case 4:
				if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_479) && __LIB_1__::func_205(Global_35, iLocal_479, 1, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_20.f_51, true) < 7f)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
				}
				func_23();
				if (!__LIB_17__::func_864(&Local_20, &iLocal_466, iLocal_18, 0, 1, 0, 1, 0))
				{
					func_4();
				}
				if (!Local_20.f_46)
				{
					if (func_25())
					{
						if (bLocal_544)
						{
							__LIB_12__::func_26(1, 1);
							bLocal_544 = false;
						}
						func_27();
						ENTITY::SET_ENTITY_VISIBLE(iLocal_466[0], true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_466[1], true);
						if (!__LIB_4__::func_241(262144))
						{
							if (func_29())
							{
								Local_20.f_46 = 1;
								if (VOLUME::_DOES_VOLUME_EXIST(iLocal_480))
								{
									VOLUME::_DELETE_VOLUME(iLocal_480);
								}
								func_30(8);
							}
						}
						else
						{
							__LIB_5__::func_709(&uLocal_333);
							if (iLocal_283 >= 10)
							{
								__LIB_3__::func_593(0);
							}
							if (iLocal_283 < 4)
							{
								func_33(0);
							}
							else
							{
								func_33(1);
							}
						}
					}
				}
				else if (!__LIB_4__::func_241(2097152))
				{
					if (__LIB_3__::func_514(&uLocal_375, 0.75f))
					{
						if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_466[0], false);
						}
						__LIB_17__::func_464(2097152);
					}
				}
				if (func_37())
				{
					Local_20.f_50 = 1;
					func_4();
				}
				if (__LIB_3__::func_365(&Local_20, &iLocal_466, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_4();
				}
				break;
		}
		BUILTIN::WAIT(Local_20.f_158);
	}
}

void func_4()
{
	int iVar0;
	int iVar1;
	func_41(0);
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_465))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_465);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_480))
	{
		VOLUME::_DELETE_VOLUME(iLocal_480);
	}
	__LIB_12__::func_26(1, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_466[iVar0]))
		{
			__LIB_17__::func_865(&(iLocal_466[iVar0]), &(Local_387[iVar0 /*21*/]), &Local_430, 1, 1);
			switch (iVar0)
			{
				case 1:
					if (__LIB_4__::func_241(4) && !ENTITY::IS_ENTITY_VISIBLE(iLocal_466[iVar0]))
					{
						PED::DELETE_PED(&(iLocal_466[iVar0]));
					}
					break;
				case 0:
					if (!__LIB_4__::func_241(2097152))
					{
						if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_466[0], false);
						}
						__LIB_17__::func_464(2097152);
					}
					if (!__LIB_4__::func_241(262144) && !Local_20.f_46)
					{
						PED::DELETE_PED(&(iLocal_466[iVar0]));
					}
					break;
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_560)
	{
		__LIB_2__::func_353(&(iLocal_560[iVar1]), 1);
		iVar1++;
	}
	func_44(&Local_20, &iLocal_466, &uLocal_469, iLocal_18, uLocal_288, Local_20.f_51.f_4, 0, 1, 0, 1);
	if (__LIB_0__::func_899(&uLocal_369))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (__LIB_4__::func_241(524288))
	{
		if (__LIB_0__::func_163(Global_35, -2017877118))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		func_47(524288);
	}
	__LIB_3__::func_920(&Local_20);
	if (MAP::DOES_BLIP_EXIST(Local_20.f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(Local_20.f_51.f_6));
	}
	__LIB_3__::func_334(&uLocal_469);
	func_50();
	if (!Local_20.f_44 && !__LIB_4__::func_241(1024))
	{
		Local_20.f_45 = 0;
	}
	__LIB_2__::func_298();
	__LIB_2__::func_353(&uLocal_294, 1);
	__LIB_2__::func_353(&uLocal_295, 1);
	__LIB_2__::func_353(&uLocal_292, 1);
	__LIB_2__::func_353(&uLocal_291, 1);
	__LIB_2__::func_353(&uLocal_293, 1);
	func_16(1);
	AUDIO::CANCEL_MUSIC_EVENT("RECA_START");
	AUDIO::CANCEL_MUSIC_EVENT("RECA_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("RECA_ATTACK");
	AUDIO::STOP_AUDIO_SCENE("RE_AMBUSH_CAMPFIRE_AMBUSH_SCENE");
	__LIB_3__::func_711(&uLocal_333, 106);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6()
{
	switch (__LIB_1__::func_898())
	{
		case 3:
		case 10:
			__LIB_3__::func_352(&Local_20, 1);
			iLocal_19 = 0;
			break;
		default:
			return false;
	}
	return true;
}

void func_11()
{
	if (iLocal_19 == 0)
	{
		Local_296.f_16 = "RE_CA_MTN_V1_ROB_IN_A";
		Local_296.f_17 = func_64(1);
	}
}

bool func_13()
{
	switch (iLocal_282)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_20))
			{
				func_74();
				func_75();
				func_76();
				if (!AUDIO::PREPARE_MUSIC_EVENT("RECA_START"))
				{
				}
				if (!AUDIO::PREPARE_MUSIC_EVENT("RECA_ATTACK"))
				{
				}
				if (!AUDIO::PREPARE_MUSIC_EVENT("RECA_STOP"))
				{
				}
				if (!AUDIO::PREPARE_MUSIC_EVENT("RECA_FAIL"))
				{
				}
				iLocal_282 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_449(&Local_214))
			{
				return false;
			}
			if (!func_78())
			{
				return false;
			}
			if (!func_79())
			{
				return false;
			}
			func_80();
			return true;
	}
	return false;
}

bool func_14(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iLocal_281)
	{
		case 0:
			if (func_81(&Local_20, &uParam0, 0, 0, 0, 1, 0, 1))
			{
				func_82(&Local_20, &uLocal_288, &(Local_20.f_51.f_4));
				__LIB_3__::func_503(&Local_20, uLocal_288, 11212);
				vLocal_488[0 /*3*/] = { 0.06f, 4.24f, 0f };
				vLocal_488[1 /*3*/] = { 4.66f, 0.14f, 0f };
				return true;
			}
			else if (Local_20.f_160)
			{
				func_4();
			}
			break;
	}
	return false;
}

void func_16(bool bParam0)
{
	float fVar0;
	if (__LIB_0__::func_175(Local_20.f_51, 2544.99f, 1441.78f, 86.5061f, 4f, 0))
	{
		fVar0 = 15f;
	}
	else
	{
		fVar0 = 20f;
	}
	if (bParam0)
	{
		__LIB_2__::func_161(Local_20.f_51, fVar0, 5);
	}
	else
	{
		__LIB_2__::func_165(Local_20.f_51, fVar0, 0, 0, 4);
	}
}

void func_17()
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar2 = (360f / 8f);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar1 = (Local_20.f_51.f_3 + (IntToFloat(iVar0) * fVar2));
		vLocal_495[iVar0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_20.f_51, fVar1, 0f, 1.4f, 0f) };
		__LIB_2__::func_106(&(vLocal_495[iVar0 /*3*/]), 1, 10, 0);
		iVar0++;
	}
}

bool func_19()
{
	PROPSET::_REQUEST_PROPSET_2(joaat("PG_RE_CAMPFIREAMBUSH01X"));
	if (!PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_RE_CAMPFIREAMBUSH01X")))
	{
		return false;
	}
	iLocal_465 = PROPSET::_CREATE_PROPSET_2(joaat("PG_RE_CAMPFIREAMBUSH01X"), Local_20.f_51, 1, Local_20.f_51.f_3, 500f, false, false);
	return true;
}

bool func_20()
{
	vector3 vVar0;
	switch (iLocal_287)
	{
		case 0:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_20.f_51, Local_20.f_51.f_3, vLocal_488[0 /*3*/]) };
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_20.f_51, 5f);
			if (func_91(&uLocal_475, joaat("P_ANIM_ARMYPUP02X"), vVar0, 4f, 0))
			{
				uLocal_472[0] = uLocal_475;
				vLocal_523 = { ENTITY::GET_ENTITY_COORDS(uLocal_472[0], true, false) };
				fLocal_529 = (ENTITY::GET_ENTITY_HEADING(uLocal_472[0]) - 180f);
				vLocal_526 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_523, fLocal_529, 0f, 2.5f, 0f) };
				func_92();
				iLocal_477 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_523, 0f, 0f, fLocal_529, 4f, 4f, 5f, "volCoverBlock");
				TASK::_0xEB2ED1DC3AEC0654(iLocal_477, 1, 1, 1, 0);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_477, 7);
				iLocal_478 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_523, 0f, 0f, fLocal_529, 7f, 7f, 5f, "volCoverBlock");
				iLocal_480 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vLocal_523, 0f, 0f, fLocal_529, 3.033f, 3.103f, 5f);
				__LIB_3__::func_285(uLocal_472[0], &Local_20, 0);
				func_94(1);
			}
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_20.f_51, Local_20.f_51.f_3, &Local_214, &iLocal_466, 0, 0, -1, 1))
			{
				return false;
			}
			func_94(2);
			break;
		case 2:
			if (__LIB_3__::func_940(iLocal_465, joaat("P_ANIM_ARMYPUP02X"), &iLocal_543, 0))
			{
				if (func_97())
				{
					func_94(3);
				}
			}
			break;
		case 3:
			func_94(4);
			break;
		case 4:
			return true;
	}
	return false;
}

void func_21()
{
	vector3 vVar0;
	iLocal_545[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(0), vVar0, 0.5f, 0.5f, 0.5f, "volCullSphereCampfire");
	iLocal_545[1] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(1), vVar0, 1.5f, 1.5f, 1.5f, "volCullTentMain");
	iLocal_545[2] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(2), vVar0, 1.7f, 1.7f, 1.7f, "volCullTentAdd1");
	iLocal_545[3] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(3), vVar0, 2f, 2f, 2f, "volCullTentAdd2");
	iLocal_545[4] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(4), vVar0, 0.9f, 0.9f, 0.9f, "volCullTableMain");
	iLocal_545[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(5), vVar0, 0.6f, 0.6f, 0.6f, "volCullTableAdd1");
	iLocal_545[6] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(6), vVar0, 0.6f, 0.6f, 0.6f, "volCullChair1");
	iLocal_545[7] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(7), vVar0, 0.6f, 0.6f, 0.6f, "volCullChair2");
	iLocal_545[8] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(8), vVar0, 2.75f, 2.75f, 2.75f, "volCullBushesCamp1");
	iLocal_545[9] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(9), 0f, 0f, 0f, 0.9f, 0.9f, 0.9f, "volFlattenCamp1");
	iLocal_545[10] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(10), 0f, 0f, 0f, 0.6f, 0.6f, 0.6f, "volFlattenCamp2");
	iLocal_545[11] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(11), 0f, 0f, 0f, 0.7f, 0.7f, 0.7f, "volFlattenCamp3");
	iLocal_545[12] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(12), 0f, 0f, 0f, 1f, 1f, 1f, "volFlattenCamp4");
	iLocal_545[13] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_98(13), 0f, 0f, 0f, 0.7f, 0.7f, 0.7f, "volFlattenCamp5");
	func_99(0, 1);
	func_99(8, 0);
	func_99(1, 1);
	func_99(2, 1);
	func_99(3, 1);
	func_99(4, 0);
	func_99(5, 0);
	func_99(6, 0);
	func_99(7, 0);
	func_100(9);
	func_100(10);
	func_100(11);
	func_100(12);
	func_100(13);
}

void func_23()
{
	if ((!__LIB_1__::func_205(Global_35, iLocal_478, 1, 0) && __LIB_1__::func_205(Global_35, iLocal_479, 1, 0)) || (func_101() && iLocal_283 < 2))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	}
}

bool func_25()
{
	if (__LIB_3__::func_453(iLocal_466[0], 0, &(Local_20.f_5), &iLocal_290, 0, 0))
	{
		return true;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_466[1]) && ENTITY::IS_ENTITY_VISIBLE(iLocal_466[1])) && __LIB_3__::func_453(iLocal_466[1], 0, &(Local_20.f_5), &iLocal_290, 0, 0))
	{
		return true;
	}
	if (!__LIB_4__::func_241(262144))
	{
	}
	else if (__LIB_4__::func_241(2048))
	{
		return true;
	}
	return false;
}

void func_27()
{
	if (!Local_20.f_48)
	{
		__LIB_3__::func_426(&Local_20, &(Local_20.f_48), 9, &(Local_20.f_51.f_6));
		__LIB_3__::func_164(&(Local_20.f_121));
	}
}

bool func_29()
{
	char* sVar0;
	if ((!__LIB_1__::func_339(iLocal_290, 1, 1, 1, 0) && iLocal_290 != 256) && !__LIB_4__::func_241(16))
	{
		return false;
	}
	if (func_116())
	{
		sVar0 = "PB_BREAKOUT_R";
	}
	else
	{
		sVar0 = "PB_BREAKOUT_L";
	}
	func_117(0, "IDLE_BOOL", 1);
	func_118(0, sVar0, 0);
	if (bLocal_544)
	{
		__LIB_12__::func_26(1, 1);
		bLocal_544 = false;
	}
	func_119(iLocal_466[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", -1082130432 /* Float: -1f */, 1, 1744022339, 2);
	func_120(0, 2);
	__LIB_2__::func_73(iLocal_466[0], &(uLocal_469[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 277, false);
	if (__LIB_4__::func_241(4))
	{
		__LIB_2__::func_426(&(iLocal_466[1]));
	}
	__LIB_4__::func_89(&uLocal_375, 0);
	return true;
}

void func_30(int iParam0)
{
	iLocal_283 = iParam0;
}

void func_33(int iParam0)
{
	int iVar0;
	if (!Local_20.f_46)
	{
		__LIB_3__::func_593(0);
		iVar0 = func_127();
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_466[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_466[iVar0], 277, false);
			if (iLocal_283 > 6 && Local_296.f_2)
			{
				func_119(iLocal_466[iVar0], Global_35, "RE_CA_MTN_V1_AGGRO_C", -1082130432 /* Float: -1f */, 1, 1744022339, 0);
			}
			else if (iParam0 == 0)
			{
				func_119(iLocal_466[iVar0], Global_35, "RE_CA_MTN_V1_AGGRO_A", -1082130432 /* Float: -1f */, 1, 1744022339, 0);
			}
			else if (iParam0 == 1)
			{
				func_119(iLocal_466[iVar0], Global_35, "RE_CA_MTN_V1_AGGRO_B", -1082130432 /* Float: -1f */, 1, 1744022339, 0);
			}
		}
		func_128();
		func_30(9);
		Local_20.f_46 = 1;
	}
}

bool func_37()
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	func_131();
	iVar0 = func_132();
	if (iLocal_283 >= 6)
	{
		__LIB_17__::func_863(&Local_296);
	}
	switch (iLocal_283)
	{
		case 0:
			func_134();
			PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_466[1], 297, true);
			func_30(1);
			break;
		case 1:
			if (__LIB_0__::func_567(iLocal_289, 1))
			{
				__LIB_3__::func_590(&(Local_387[0 /*21*/]), 0);
				__LIB_1__::func_281(&iLocal_289, 1, 1);
				func_138();
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_477);
				func_30(2);
			}
			else
			{
				func_92();
				func_139();
				func_140();
				if (bLocal_538)
				{
					if (!__LIB_0__::func_899(&uLocal_378))
					{
						__LIB_2__::func_259(&uLocal_378);
					}
					else if (!__LIB_2__::func_136(iLocal_466[0], 0))
					{
						if (func_143())
						{
							func_30(9);
						}
					}
				}
			}
			break;
		case 2:
			if (func_144())
			{
				func_145();
				func_30(3);
			}
			break;
		case 3:
			func_146();
			if (func_147())
			{
				func_148();
				iLocal_588 = iLocal_466[0];
				PED::_0x8ACC0506743A8A5C(iLocal_466[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
				PED::_0x8ACC0506743A8A5C(iLocal_466[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
				__LIB_0__::func_7(&(Local_576.f_3), 4);
				__LIB_0__::func_7(&(Local_576.f_3), 2);
				func_30(4);
			}
			else
			{
				__LIB_4__::func_89(&uLocal_369, 0);
				if (__LIB_3__::func_514(&uLocal_369, 5f))
				{
					__LIB_1__::func_561(&uLocal_369);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					func_30(1);
				}
			}
			break;
		case 4:
			if (bLocal_544)
			{
				__LIB_12__::func_26(1, 1);
				bLocal_544 = false;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
			{
				PED::_0x8ACC0506743A8A5C(iLocal_466[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			}
			if (__LIB_2__::func_1(iLocal_466[1], 0, 0))
			{
				PED::_0x8ACC0506743A8A5C(iLocal_466[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			}
			func_150();
			bVar1 = true;
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_466[1], iLocal_482[0]))
			{
				if (__LIB_4__::func_241(4))
				{
					__LIB_4__::func_89(&uLocal_357, 0);
					if (__LIB_3__::func_601(&uLocal_357, 0.4f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_466[1]))
					{
						WEAPON::_0x5230D3F6EE56CFE6(iLocal_466[0], 0);
						WEAPON::_0x5230D3F6EE56CFE6(iLocal_466[1], 0);
						func_41(1);
					}
				}
			}
			if (!func_152(0, 1))
			{
				if (__LIB_2__::func_598(iLocal_466[0], iLocal_482[0], "MURFREE_A", 0, 0, 1, 0))
				{
					if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_466[0], Global_35, -1, false, 0);
						PED::FORCE_PED_MOTION_STATE(iLocal_466[0], joaat("MOTIONSTATE_AIMING"), false, 0, false);
						PED::_0x2208438012482A1A(iLocal_466[0], true, false);
						TASK::_0x2E1D6D87346BB7D2(iLocal_466[0], Global_35, 0, 0);
						func_120(0, 1);
					}
				}
				else
				{
					bVar1 = false;
				}
			}
			if (!func_152(1, 1))
			{
				if (__LIB_2__::func_598(iLocal_466[1], iLocal_482[0], "MURFREE_B", 0, 0, 1, 0))
				{
					if (__LIB_2__::func_1(iLocal_466[1], 0, 0))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_466[1], Global_35, -1, false, 0);
						PED::FORCE_PED_MOTION_STATE(iLocal_466[1], joaat("MOTIONSTATE_AIMING"), false, 0, false);
						PED::_0x2208438012482A1A(iLocal_466[1], true, false);
						TASK::_0x2E1D6D87346BB7D2(iLocal_466[1], Global_35, 0, 0);
						func_120(1, 1);
					}
				}
				else
				{
					bVar1 = false;
				}
			}
			if (!__LIB_4__::func_241(4096))
			{
				if (__LIB_2__::func_598(Global_35, iLocal_482[0], "player", 0, 0, 1, 0))
				{
					sVar2 = func_154(0);
					TASK::TASK_PLAY_ANIM(Global_35, sVar2, "idle_player", 4f, -16f, -1, 1, 0f, false, 0, false, 0, false);
					__LIB_17__::func_464(4096);
					__LIB_17__::func_464(524288);
				}
				else
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				__LIB_2__::func_180(&(Local_20.f_5), 0);
				if (bLocal_544)
				{
					__LIB_12__::func_26(1, 1);
					bLocal_544 = false;
				}
				__LIB_2__::func_298();
				func_30(5);
			}
			break;
		case 5:
			if (!__LIB_4__::func_241(1))
			{
				if (__LIB_4__::func_398(0f, 1, iLocal_466[0], 1) && __LIB_4__::func_398(0f, 1, iLocal_466[1], 1))
				{
					func_119(iLocal_466[1], Global_35, func_64(2), -1082130432 /* Float: -1f */, 1, -417894478, 0);
					__LIB_17__::func_464(1);
				}
			}
			else if (__LIB_3__::func_514(&uLocal_360, 1f))
			{
				Local_296.f_16 = "";
				func_30(6);
			}
			else if (__LIB_4__::func_398(0f, 1, iLocal_466[0], 1) && __LIB_4__::func_398(0f, 1, iLocal_466[1], 1))
			{
				__LIB_4__::func_89(&uLocal_360, 0);
			}
			break;
		case 6:
			if (func_156(iLocal_466[iLocal_279], &Local_296, 1028443341 /* Float: 0.05f */, 1, 0, 6, 0, 0, iVar3, 4000, 0, 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (((Local_296.f_1 || !Local_296.f_2) || Local_296.f_6) || !Local_296.f_4)
				{
					__LIB_4__::func_89(&uLocal_354, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("RECA_ATTACK");
					func_157(0.5f);
					func_30(7);
				}
				else if (Local_296.f_2)
				{
					func_158();
					AUDIO::TRIGGER_MUSIC_EVENT("RECA_FAIL");
					__LIB_4__::func_89(&uLocal_342, 1);
					func_159();
					func_30(10);
				}
			}
			if (__LIB_4__::func_241(524288))
			{
				func_47(524288);
			}
			if (Local_296.f_4 && !Local_296.f_6)
			{
				if (!__LIB_4__::func_241(8))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_466[iLocal_279], false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_466[iLocal_279], false);
					fVar4 = (BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false)));
					if (fVar4 > 0.5f)
					{
						__LIB_0__::func_854(Global_35, 0.5f, 0);
					}
					else if (fVar4 > 0.25f)
					{
						__LIB_0__::func_854(Global_35, 0.5f, 0);
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Global_35) > 1)
					{
						PED::APPLY_DAMAGE_TO_PED(Global_35, 1, 1, -1, 0);
					}
					__LIB_17__::func_464(8);
				}
			}
			if (TASK::IS_PED_RUNNING(Global_35))
			{
				func_33(1);
				AUDIO::TRIGGER_MUSIC_EVENT("RECA_ATTACK");
			}
			break;
		case 7:
			if (__LIB_3__::func_514(&uLocal_354, 1f) || __LIB_3__::func_504(iLocal_466[0]))
			{
				func_33(1);
				func_30(9);
			}
			break;
		case 8:
			if (__LIB_2__::func_598(iLocal_466[0], iLocal_482[0], "MURFREE_A", 0, 0, 1, 0))
			{
				__LIB_2__::func_73(iLocal_466[0], &(uLocal_469[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
				{
					PED::_0x78815FC52832B690(iLocal_466[0], 1);
					iVar5 = 67108864;
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_466[0]))
					{
						PED::FORCE_PED_MOTION_STATE(iLocal_466[0], joaat("MOTIONSTATE_AIMING"), false, 1, true);
						PED::_0x2208438012482A1A(iLocal_466[0], true, false);
						__LIB_1__::func_336(&iVar5, 33554432);
					}
					TASK::TASK_COMBAT_PED(iLocal_466[0], Global_35, iVar5, 0);
				}
				__LIB_5__::func_709(&uLocal_333);
				func_30(9);
			}
			break;
		case 9:
			if (__LIB_0__::func_139(iLocal_289))
			{
				__LIB_1__::func_281(&iLocal_289, 1, 1);
			}
			func_163();
			if (__LIB_3__::func_505(&iLocal_466, 0))
			{
				if (!__LIB_0__::func_899(&uLocal_381))
				{
					__LIB_2__::func_259(&uLocal_381);
				}
				else if (__LIB_1__::func_583(&uLocal_381) > 2f)
				{
					func_119(Global_35, Global_35, "RE_CA_MTN_V1_PLAYER_FINAL", -1082130432 /* Float: -1f */, 1, -417894478, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("RECA_STOP");
					Local_20.f_44 = 1;
					return true;
				}
			}
			break;
		case 10:
			iVar0 = func_165();
			func_166();
			if (__LIB_3__::func_514(&uLocal_342, 0.1f))
			{
				PED::SET_PED_TO_RAGDOLL(Global_35, 3500, 3500, 0, false, false, false);
				if (__LIB_3__::func_514(&uLocal_342, 3f))
				{
					if (__LIB_2__::func_1(iLocal_466[iLocal_279], 0, 1))
					{
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_466[iLocal_279], true);
						PED::SET_PED_CAN_RAGDOLL(iLocal_466[iLocal_279], true);
					}
					__LIB_5__::func_709(&uLocal_333);
					func_30(11);
				}
			}
			break;
		case 11:
			iVar0 = func_165();
			func_166();
			func_167(1, 0);
			func_30(12);
			break;
		case 12:
			iVar0 = func_165();
			func_168();
			func_166();
			if (iVar0 == 1)
			{
				__LIB_17__::func_464(2048);
			}
			if (!__LIB_4__::func_328(&iLocal_466, 80f, 1, 0, -1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RECA_STOP");
				return true;
			}
			break;
	}
	return false;
}

void func_41(bool bParam0)
{
	if (!bParam0)
	{
		if (__LIB_2__::func_1(iLocal_466[1], 0, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_466[1], bParam0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_466[1], bParam0, false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_466[1], bParam0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_466[1], !bParam0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_466[1], 127, false);
			__LIB_17__::func_464(4);
		}
	}
	else if (__LIB_2__::func_1(iLocal_466[1], 0, 1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_466[1], bParam0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_466[1], bParam0, false);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_466[1], bParam0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_466[1], !bParam0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_466[1], 0, false);
		func_47(4);
	}
}

void func_44(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_4__::func_103(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_47(int iParam0)
{
	__LIB_0__::func_516(&iLocal_14, iParam0);
}

void func_50()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_190(iVar0);
		iVar0++;
	}
}

char* func_64(int iParam0)
{
	if (bLocal_537)
	{
		switch (iParam0)
		{
			case 1:
				return "RE_CA_MTN_V1_ROB_IN2_F";
			case 2:
				return "RE_CA_MTN_V1_INTIM_IN1_F";
			case 3:
				return "RE_CA_MTN_V1_EXIT_IN_F";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "RE_CA_MTN_V1_ROB_IN_B";
			case 2:
				return "RE_CA_MTN_V1_INTIM_IN1";
			case 3:
				return "RE_CA_MTN_V1_EXIT_IN";
			default:
				break;
		}
	}
	return "";
}

void func_74()
{
	int iVar0;
	bLocal_537 = __LIB_2__::func_284(1, 100);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_214[iVar0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
		Local_214[iVar0 /*32*/] = 22;
		__LIB_3__::func_478(&(Local_214[iVar0 /*32*/].f_22));
		switch (iVar0)
		{
			case 0:
				Local_214[iVar0 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_214[iVar0 /*32*/].f_9 = 0f;
				StringCopy(&(Local_214[iVar0 /*32*/].f_23), "0204_G_M_M_UniInbred_03_WHITE_02", 64);
				Local_214[iVar0 /*32*/].f_3 = 1306309085;
				break;
			case 1:
				Local_214[iVar0 /*32*/].f_6 = { -20f, 15f, 20f };
				Local_214[iVar0 /*32*/].f_9 = 0f;
				StringCopy(&(Local_214[iVar0 /*32*/].f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
				Local_214[iVar0 /*32*/].f_3 = 1529597051;
				break;
		}
		iVar0++;
	}
	__LIB_3__::func_445(&Local_214);
}

void func_75()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_154(iVar0);
		STREAMING::REQUEST_ANIM_DICT(sVar1);
		iVar0++;
	}
}

void func_76()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_205(iVar0, 0, 1);
		iVar0++;
	}
}

bool func_78()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_154(iVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_79()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_207(iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_80()
{
	func_208(0, "PB_BREAKOUT_L");
	func_208(0, "PB_BREAKOUT_R");
	func_208(0, "ACTION_L");
	func_208(0, "ACTION_R");
	func_208(0, "PB_IDLE");
}

bool func_81(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_209(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_82(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 10;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 10;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 10;
			*uParam2 = 5;
			break;
		case 6:
			*uParam1 = 10;
			*uParam2 = 6;
			break;
		case 7:
			*uParam1 = 10;
			*uParam2 = 7;
			break;
	}
}

Vector3 func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 107.28f;
				case 1:
					return 0f, 0f, 26.64f;
				case 2:
					return 0f, 0f, 23.04f;
				case 3:
					return 0f, 0f, 36.72f;
				case 4:
					return 0f, 0f, -86.4f;
				case 5:
					return 0f, 0f, -92.88f;
				case 6:
					return 0f, 0f, 36.72f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_91(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	var uVar0[1];
	int iVar2[1];
	int iVar4;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(*uParam0) == iParam1)
		{
			return true;
		}
	}
	iVar2[0] = iParam1;
	iVar4 = __LIB_3__::func_510(&uVar0, &iVar2, 1, vParam2, fParam5);
	if (iVar4 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[0]) && (!bParam6 || ENTITY::IS_ENTITY_AN_OBJECT(uVar0[0])))
		{
			*uParam0 = uVar0[0];
			return true;
		}
	}
	return false;
}

void func_92()
{
	bool bVar0;
	bVar0 = ((!func_101() && !PED::_IS_PED_CARRYING(Global_35)) && !__LIB_1__::func_205(Global_35, iLocal_477, 1, 0));
	if (__LIB_0__::func_139(iLocal_289))
	{
		if (!bVar0)
		{
			__LIB_1__::func_281(&iLocal_289, 1, 1);
		}
	}
	else if (bVar0)
	{
		iLocal_289 = __LIB_1__::func_282("RE_CA_USE_TENT", joaat("INPUT_CONTEXT_Y"), vLocal_526, 2.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
	}
}

void func_94(int iParam0)
{
	iLocal_287 = iParam0;
}

bool func_97()
{
	vector3 vVar0;
	float fVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_543))
	{
		return false;
	}
	if (__LIB_0__::func_86(vLocal_523))
	{
		return false;
	}
	if (!func_221(0, "PB_IDLE"))
	{
		return false;
	}
	func_222(0, vLocal_523, 0f, 0f, (fLocal_529 + 180f));
	func_117(0, "IDLE_BOOL", 0);
	if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
	{
		vVar0 = { func_223(iLocal_466[0], 0, "MURFREE_A", "PB_IDLE") };
		fVar3 = func_224(iLocal_466[0], 0, "MURFREE_A", "PB_IDLE");
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_466[0], vVar0, fVar3, true, true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_466[0], true, true);
		__LIB_2__::func_272(iLocal_466[0], joaat("GROUP_RIFLE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		PED::SET_PED_COMBAT_RANGE(iLocal_466[0], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 277, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_466[0], true);
	}
	if (__LIB_2__::func_1(iLocal_466[1], 0, 0))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_466[1], true, true);
		__LIB_2__::func_272(iLocal_466[1], joaat("GROUP_PISTOL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		func_41(0);
		PED::SET_PED_COMBAT_RANGE(iLocal_466[1], 0);
	}
	func_226(0, "MURFREE_A", iLocal_466[0], 1);
	func_226(0, "MURFREE_B", iLocal_466[1], 1);
	func_226(0, "player", Global_35, 1);
	func_227(0, "tent", iLocal_543);
	func_228(0);
	func_118(0, "PB_IDLE", 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_466[1], false);
	return true;
}

Vector3 func_98(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { 0f, 0f, 0f };
			break;
		case 1:
			vVar0 = { 1.31689f, 5.25116f, 0f };
			break;
		case 2:
			vVar0 = { 1.52002f, 6.11224f, 0f };
			break;
		case 3:
			vVar0 = { 0.977051f, 4.30511f, 0f };
			break;
		case 4:
			vVar0 = { -1.17212f, -1.83148f, 0f };
			break;
		case 5:
			vVar0 = { -0.603027f, -1.79669f, 0f };
			break;
		case 6:
			vVar0 = { 0.448486f, -2.38184f, 0f };
			break;
		case 7:
			vVar0 = { 2.30981f, -1.37231f, 0f };
			break;
		case 8:
			vVar0 = { 0.247314f, 1.64539f, 0f };
			break;
		case 9:
			vVar0 = { 0.950928f, 2.06355f, 0f };
			break;
		case 10:
			vVar0 = { 0.397949f, -1.62032f, 0f };
			break;
		case 11:
			vVar0 = { 1.86316f, -0.637405f, 0f };
			break;
		case 12:
			vVar0 = { -0.232544f, -0.353287f, 0f };
			break;
		case 13:
			vVar0 = { 1.34546f, 0.514297f, 0f };
			break;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_20.f_51, Local_20.f_51.f_3, vVar0);
}

void func_99(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iLocal_545[iParam0]) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iLocal_545[iParam0]) };
	uVar6 = vVar3.x;
	__LIB_3__::func_924(&(iLocal_560[iParam0]), vVar0, uVar6, 0, iParam1);
}

void func_100(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iLocal_545[iParam0]) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iLocal_545[iParam0]) };
	uVar6 = vVar3.x;
	func_230(&(iLocal_560[iParam0]), vVar0, uVar6);
}

bool func_101()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_20.f_51, false) <= 1.1f)
	{
		return true;
	}
	return false;
}

bool func_116()
{
	return __LIB_0__::func_195(vLocal_523, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_523, fLocal_529, 0f, 10f, 0f), Global_36);
}

void func_117(int iParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(iLocal_482[iParam0], sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_482[iParam0], sParam1, bParam2, false);
	}
}

void func_118(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = func_298(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_482[iParam0], sParam1, bParam2);
}

bool func_119(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, int iParam6)
{
	if (__LIB_3__::func_600(iParam0, iParam1, sParam2, 0, fParam3, iParam6, 0, 0, 1, 1, bParam4, iParam5, 1, 0, 0))
	{
		iLocal_532 = 0;
		iLocal_535 = iParam0;
		func_167(0, 0);
		__LIB_2__::func_259(&uLocal_372);
		return true;
	}
	return false;
}

void func_120(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(uLocal_15[iParam0]), iParam1);
}

int func_127()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar3 = 999999.9f;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_466[iVar0]))
		{
			fVar2 = __LIB_1__::func_992(iLocal_466[iVar0], Global_36, 1);
			if (fVar2 < fVar3)
			{
				fVar3 = fVar2;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_128()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_466)
	{
		if (__LIB_2__::func_1(iLocal_466[iVar0], 0, 0))
		{
			PED::_0x78815FC52832B690(iLocal_466[iVar0], 1);
			__LIB_17__::func_865(&(iLocal_466[iVar0]), &(Local_387[iVar0 /*21*/]), &Local_430, 1, 1);
			TASK::TASK_COMBAT_PED(iLocal_466[iVar0], Global_35, 0, 0);
			__LIB_2__::func_73(iLocal_466[iVar0], &(uLocal_469[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
}

void func_131()
{
	if (!__LIB_4__::func_241(2))
	{
		if (iLocal_283 < 6 && __LIB_0__::func_94(Global_35, Local_20.f_51, 1) <= 35f)
		{
			AUDIO::START_AUDIO_SCENE("RE_AMBUSH_CAMPFIRE_AMBUSH_SCENE");
			__LIB_17__::func_464(2);
		}
	}
	else if (iLocal_283 == 12)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_AMBUSH_CAMPFIRE_AMBUSH_SCENE");
		func_47(2);
	}
	if (((iLocal_283 < 6 && (!__LIB_0__::func_899(&uLocal_339) || __LIB_1__::func_583(&uLocal_339) >= 3f)) && __LIB_0__::func_94(Global_35, Local_20.f_51, 1) <= 35f) && AUDIO::_0x714A0EA7DE1167BE("FOLIAGE", "RECA_Sounds"))
	{
		AUDIO::_PLAY_SOUND_FROM_POSITION("FOLIAGE", func_305(), "RECA_Sounds", false, 0, true, 0);
		__LIB_2__::func_259(&uLocal_339);
	}
}

int func_132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_20.f_98[0] > 76f)
	{
		if (bLocal_544 && !__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_466[0])))
		{
			__LIB_12__::func_26(1, 1);
			bLocal_544 = false;
		}
		return -1;
	}
	if (!bLocal_544)
	{
		__LIB_12__::func_26(1, 0);
		bLocal_544 = true;
	}
	iVar0 = -1;
	iVar2 = 524288 | __LIB_2__::func_340(3, 0, 0);
	__LIB_1__::func_336(&iVar2, 34816);
	__LIB_0__::func_516(&iVar2, 128);
	iVar0 = func_308(&(iLocal_466[0]), &(Local_387[0 /*21*/]), 15f, &Local_430, &(Local_20.f_192), 4f, 1, 0, "", iVar2, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = iVar0;
	if (__LIB_2__::func_341(&(Local_387[0 /*21*/])))
	{
		if (__LIB_4__::func_241(32768))
		{
			switch (Local_387[0 /*21*/].f_1)
			{
				case 0:
					__LIB_3__::func_515(&(Local_430[0 /*17*/]), 0, 0);
					__LIB_4__::func_453(&(Local_430[0 /*17*/]), 1, 1);
					break;
			}
		}
		func_167(0, 0);
	}
	return iVar1;
}

void func_134()
{
	float fVar0;
	fVar0 = ((6.5f * 2f) + 3f);
	__LIB_1__::func_216(&iLocal_476, Local_20.f_51, 0f, 0f, 0f, fVar0, fVar0, 20f);
	POPULATION::_0xB56D41A694E42E86(iLocal_476, 0, 0, 0, -1, -1, 0);
}

void func_138()
{
	if (!__LIB_4__::func_241(8192))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 1, 1);
		__LIB_17__::func_464(8192);
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	if (iLocal_531 == 0)
	{
		fVar1 = 75f;
	}
	else
	{
		fVar1 = 40f;
	}
	if (__LIB_3__::func_514(&uLocal_372, 2f))
	{
		if (__LIB_4__::func_398(0f, 1, iLocal_535, 1))
		{
			func_167(1, 1);
			__LIB_1__::func_561(&uLocal_372);
		}
	}
	func_319();
	if (func_320())
	{
		if (iLocal_531 == 0)
		{
			if (__LIB_0__::func_94(iLocal_466[iVar0], Global_36, 1) <= fVar1)
			{
				if (func_119(iLocal_466[iVar0], Global_35, func_321(0), fVar1, 0, -500314840, 0))
				{
					__LIB_2__::func_259(&uLocal_363);
					__LIB_2__::func_315(1891783641, iLocal_466[iVar0], 1);
					func_27();
					AUDIO::TRIGGER_MUSIC_EVENT("RECA_START");
					iLocal_531++;
				}
			}
		}
		else if (__LIB_0__::func_94(iLocal_466[iVar0], Global_36, 1) <= fVar1)
		{
			if (func_119(iLocal_466[iVar0], Global_35, func_321(iLocal_531), fVar1, 0, 1744022339, func_323(iLocal_531)))
			{
				__LIB_2__::func_259(&uLocal_363);
				iLocal_531++;
				if (__LIB_4__::func_241(32768))
				{
					if (!__LIB_4__::func_241(131072))
					{
						__LIB_17__::func_464(131072);
					}
				}
			}
		}
	}
}

void func_140()
{
	int iVar0;
	int iVar1;
	if (!Local_20.f_48)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_20.f_51, Global_36, true) < 15f)
		{
			__LIB_17__::func_464(1024);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iLocal_536 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
	}
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_479))
	{
		iLocal_479 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_20.f_51, 0f, 0f, 0f, 7f, 7f, 7f, "volHorseAvoidance");
		POPULATION::_0xB56D41A694E42E86(iLocal_479, 2048, 0, 0, -1, -1, 0);
	}
	if ((PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_20.f_51, Global_36, true) < 5f)
	{
		if (__LIB_8__::func_727(Global_35, Local_20.f_51, &uLocal_345, 15f, 12f, 7f, 0f, 0.1f, 1, 1, 1, iVar1, 1))
		{
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_479))
	{
		if (!__LIB_4__::func_241(128))
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_20.f_51, true) < 7f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_536))
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(iLocal_536, Local_20.f_51 + Vector(0f, 15f, 15f), 5f, 0, 524308, 1f, 50f);
					__LIB_17__::func_464(128);
				}
				if (__LIB_2__::func_1(iVar0, 0, 1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_20.f_51, 6, 20736, 7f, 3000, 0);
					__LIB_17__::func_464(128);
				}
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			func_47(128);
		}
	}
	func_146();
}

bool func_143()
{
	char* sVar0;
	switch (iLocal_533)
	{
		case 0:
			if (__LIB_0__::func_139(iLocal_289))
			{
				__LIB_1__::func_281(&iLocal_289, 1, 1);
			}
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_477);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_480))
			{
				VOLUME::_DELETE_VOLUME(iLocal_480);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_476))
			{
				VOLUME::_DELETE_VOLUME(iLocal_476);
			}
			if (func_116())
			{
				sVar0 = "PB_BREAKOUT_R";
			}
			else
			{
				sVar0 = "PB_BREAKOUT_L";
			}
			func_117(0, "IDLE_BOOL", 1);
			func_118(0, sVar0, 0);
			func_119(iLocal_466[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", -1082130432 /* Float: -1f */, 1, 1744022339, 2);
			func_120(0, 2);
			__LIB_2__::func_73(iLocal_466[0], &(uLocal_469[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 277, false);
			if (__LIB_4__::func_241(4))
			{
				__LIB_2__::func_426(&(iLocal_466[1]));
			}
			if (bLocal_544)
			{
				__LIB_12__::func_26(1, 1);
				bLocal_544 = false;
			}
			Local_20.f_46 = 1;
			__LIB_2__::func_259(&uLocal_375);
			iLocal_533++;
			break;
		case 1:
			if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
			{
				PED::_0x8ACC0506743A8A5C(iLocal_466[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			}
			if ((ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_482[0], sVar0) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_466[0], "script_re@campfire_ambush@tent_ambush", "breakout_r_thug_a", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_466[0], "script_re@campfire_ambush@tent_ambush", "breakout_r_thug_a") > 0.7f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_466[0], "script_re@campfire_ambush@tent_ambush", "breakout_l_thug_a", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_466[0], "script_re@campfire_ambush@tent_ambush", "breakout_l_thug_a") > 0.7f))
			{
				bLocal_539 = true;
			}
			if (bLocal_539 || __LIB_1__::func_583(&uLocal_375) > 2f)
			{
				PED::_0x2208438012482A1A(iLocal_466[0], true, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_466[0], Global_35, -1, false, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_466[0], joaat("MOTIONSTATE_AIMING"), false, 0, false);
				PED::_0x2208438012482A1A(iLocal_466[0], true, false);
				__LIB_2__::func_259(&uLocal_375);
				iLocal_533++;
			}
			break;
		case 2:
			if (!__LIB_2__::func_136(iLocal_466[0], 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_466[0], Global_35, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_144()
{
	int iVar0;
	int iVar1;
	if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.25f)
	{
		return false;
	}
	if (!bLocal_589)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false);
		if (iVar0 != joaat("WEAPON_UNARMED") || iVar1 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			iLocal_590 = MISC::GET_GAME_TIMER() + 1500;
		}
		bLocal_589 = true;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_590)
	{
		return false;
	}
	return true;
}

void func_145()
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	if (func_116())
	{
		sLocal_530 = "ACTION_R";
	}
	else
	{
		sLocal_530 = "ACTION_L";
	}
	bVar0 = func_101();
	if (bVar0)
	{
		vLocal_520 = { func_326() };
	}
	vVar1 = { func_223(Global_35, 0, "player", sLocal_530) };
	fVar4 = func_224(Global_35, 0, "player", sLocal_530);
	__LIB_2__::func_106(&vVar1, 1, 10, 0);
	WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_480))
	{
		VOLUME::_DELETE_VOLUME(iLocal_480);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar5);
	if (bVar0)
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_520, 1f, 20000, 1193033728 /* Float: 40000f */, 0.3f, 0);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, (0.15f - 0.05f), 4194817, fVar4);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, 1193033728 /* Float: 40000f */, (0.15f - 0.05f), 0);
	__LIB_1__::func_474(Global_35, &iVar5, 0, 0, 1, 1);
}

void func_146()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_20.f_51, false) < 6f)
	{
		if (func_116())
		{
			__LIB_3__::func_815(18, 1065353216 /* Float: 1f */);
		}
		else
		{
			__LIB_3__::func_815(17, 1065353216 /* Float: 1f */);
		}
	}
}

bool func_147()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { func_223(Global_35, 0, "player", sLocal_530) };
	fVar3 = __LIB_2__::func_709(func_224(Global_35, 0, "player", sLocal_530));
	fVar4 = __LIB_2__::func_709(ENTITY::GET_ENTITY_HEADING(Global_35));
	if (__LIB_0__::func_154(__LIB_1__::func_372(Global_35, 0)) && __LIB_0__::func_154(__LIB_1__::func_372(Global_35, 1)))
	{
		return false;
	}
	if (!__LIB_3__::func_501(Global_35, vVar0, fVar4, (0.15f + 0.15f), 7f, 0))
	{
		return false;
	}
	return true;
}

void func_148()
{
	func_117(0, "IDLE_BOOL", 1);
	func_118(0, sLocal_530, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_466[0], true);
	if (__LIB_2__::func_1(iLocal_466[0], 0, 1))
	{
		__LIB_0__::func_325(&(uLocal_469[0]));
		PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 277, false);
		PED::_0x86F0B6730C32AC14(iLocal_466[0], 1);
		PED::_0xEF371232BC6053E1(iLocal_466[0]);
		AUDIO::TRIGGER_MUSIC_EVENT("RECA_ATTACK");
		if (!__LIB_4__::func_241(2097152))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_466[0], false);
			__LIB_17__::func_464(2097152);
		}
	}
	if (__LIB_2__::func_1(iLocal_466[1], 0, 1))
	{
		PED::_0x86F0B6730C32AC14(iLocal_466[1], 1);
		PED::_0xEF371232BC6053E1(iLocal_466[1]);
	}
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 1);
		PED::_0xEF371232BC6053E1(Global_35);
	}
	__LIB_2__::func_51(&(Local_20.f_5), 1);
	__LIB_17__::func_464(262144);
	Local_20.f_44 = 1;
	__LIB_4__::func_89(&uLocal_351, 0);
}

void func_150()
{
	__LIB_4__::func_89(&uLocal_348, 0);
	if (__LIB_3__::func_514(&uLocal_348, 0.5f))
	{
		if (iLocal_588 != iLocal_466[1])
		{
			if (__LIB_1__::func_472(iLocal_466[1], 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				iLocal_588 = iLocal_466[1];
				__LIB_2__::func_298();
			}
		}
		func_333(iLocal_588, &Local_576, vLocal_585, 0, 50f, 10f, -1, 4000, 1000, 0.1f, 1, 1, 1084227584 /* Float: 5f */);
	}
}

bool func_152(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_15[iParam0], iParam1);
}

char* func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_RE@MECH_PATDOWN";
		default:
			break;
	}
	return "";
}

bool func_156(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	__LIB_17__::func_863(uParam1);
	if (Global_1935630.f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
		return true;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						__LIB_3__::func_593(0);
					}
					if (__LIB_4__::func_398(fParam4, 1, 0, 0))
					{
						__LIB_3__::func_600(iParam0, Global_35, uParam1->f_16, 0, -1082130432 /* Float: -1f */, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(Global_35, 1553520516)) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
				if (__LIB_0__::func_27(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				if (__LIB_0__::func_154(Global_1935630.f_44))
				{
					__LIB_4__::func_89(&(uParam1->f_32), 0);
				}
				else
				{
					__LIB_4__::func_87(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!__LIB_0__::func_474(609))
				{
					__LIB_0__::func_105(1);
					uParam1->f_28 = __LIB_0__::func_45("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					__LIB_0__::func_378(609, &uVar0, &uVar1);
					__LIB_2__::func_447(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && __LIB_3__::func_514(&(uParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_342(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (__LIB_0__::func_139(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					__LIB_1__::func_281(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (__LIB_2__::func_470() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630.f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && __LIB_0__::func_163(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (__LIB_4__::func_90(uParam1))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_508(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((__LIB_0__::func_27(iParam5, 16) && !__LIB_0__::func_163(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						__LIB_3__::func_593(0);
					}
					if (__LIB_4__::func_398(fParam4, 1, 0, 0))
					{
						__LIB_3__::func_600(Global_35, iParam0, uParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_281(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_346(iParam6, 1, 0, -142743235, 0);
					__LIB_2__::func_463(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(__LIB_0__::func_492(1)) * fParam2));
				if (iVar3 > 0)
				{
					__LIB_2__::func_522(iVar3, 0, 0, 1, 1);
					__LIB_2__::func_449(iVar3);
					__LIB_2__::func_55(iParam0, &iVar4);
					__LIB_2__::func_190(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						__LIB_3__::func_593(0);
					}
					if (__LIB_4__::func_398(0f, 1, iParam0, 1))
					{
						__LIB_3__::func_600(iParam0, Global_35, uParam1->f_17, 0, -1082130432 /* Float: -1f */, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_3__::func_593(0);
					}
				}
				if (uParam1->f_11)
				{
					if (__LIB_4__::func_398(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							__LIB_3__::func_600(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_4__::func_398(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_3__::func_600(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_281(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						__LIB_3__::func_593(0);
					}
					if (__LIB_4__::func_398(fParam4, 1, 0, 0))
					{
						__LIB_3__::func_600(iParam0, Global_35, uParam1->f_19, 0, -1082130432 /* Float: -1f */, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !__LIB_0__::func_163(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_157(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_466)
	{
		if (__LIB_2__::func_1(iLocal_466[iVar0], 0, 0))
		{
			PED::_SET_PED_DAMAGE_MODIFIER(iLocal_466[iVar0], fParam0);
		}
		iVar0++;
	}
}

void func_158()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_466[0], 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iLocal_466[0], true, false);
		__LIB_4__::func_453(&(Local_430[1 /*17*/]), 0, 0);
	}
	if (__LIB_2__::func_1(iLocal_466[1], 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iLocal_466[1], true, false);
	}
	iLocal_575 = PED::CREATE_GROUP(0);
	PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 279, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_466[1], 279, true);
	PED::SET_GROUP_FORMATION(iLocal_575, 0);
	__LIB_3__::func_506(&(iLocal_466[0]), &iLocal_575, 1, 1, 1, 1, 0);
	__LIB_3__::func_506(&(iLocal_466[1]), &iLocal_575, 0, 1, 1, 1, 0);
	if (__LIB_2__::func_1(iLocal_466[0], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 29568, -1082130432 /* Float: -1f */, -1, 0);
		__LIB_1__::func_474(iLocal_466[0], &iVar0, 0, 0, 1, 1);
	}
	if (__LIB_2__::func_1(iLocal_466[1], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 4608, -1082130432 /* Float: -1f */, -1, 0);
		__LIB_1__::func_474(iLocal_466[1], &iVar0, 0, 0, 1, 1);
	}
	__LIB_3__::func_593(1);
	func_119(iLocal_466[1], iLocal_466[0], func_64(3), -1082130432 /* Float: -1f */, 1, -417894478, 0);
}

void func_159()
{
	char* sVar0;
	if (__LIB_2__::func_1(iLocal_466[0], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 301, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 317, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 297, true);
	}
	if (__LIB_2__::func_1(iLocal_466[1], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_466[1], 301, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_466[1], 317, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_466[1], 297, true);
	}
	sVar0 = "RE_CA_MTN_V1_ILO_ANTAGONIZE";
	__LIB_4__::func_453(&(Local_430[1 /*17*/]), 0, 1);
	__LIB_4__::func_453(&(Local_430[0 /*17*/]), 1, 1);
	__LIB_2__::func_602(&(Local_430[1 /*17*/]), __LIB_2__::func_460(10), sVar0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_430[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_356(1, 0);
	func_356(0, 0);
}

void func_163()
{
	func_358();
	if (func_152(0, 2))
	{
		if (!func_152(0, 4))
		{
			if (__LIB_4__::func_398(3f, 1, iLocal_466[0], 1))
			{
				func_119(iLocal_466[0], Global_35, "GANG_TAUNT_GEN", -1082130432 /* Float: -1f */, 1, 1744022339, 1);
				func_120(0, 4);
			}
		}
	}
	__LIB_4__::func_89(&uLocal_366, 0);
	if (__LIB_4__::func_241(16384))
	{
		if (__LIB_3__::func_514(&uLocal_366, 4f))
		{
			func_157(1f);
			func_47(16384);
		}
	}
}

int func_165()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (!Local_20.f_48)
	{
		return -1;
	}
	iVar2 = -1;
	iVar3 = -1;
	fVar1 = 60f;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = func_308(&(iLocal_466[iVar0]), &(Local_387[iVar0 /*21*/]), fVar1, &Local_430, &(Local_20.f_192), 3f, 1, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar3 = iVar2;
		if (__LIB_2__::func_341(&(Local_387[iVar0 /*21*/])))
		{
			switch (Local_387[iVar0 /*21*/].f_1)
			{
				case 1:
					__LIB_17__::func_832(&Local_430, 1, 1);
					break;
			}
			func_167(0, 0);
		}
		switch (iVar3)
		{
			case 1:
				Jump @183; //curOff = 168
				iVar0++;
			}
			return iVar3;
		}
void func_166()
{
	func_360(0);
	func_360(1);
}

void func_167(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if ((!__LIB_1__::func_489(&(Local_430[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_430[0 /*17*/]), 4)) || bParam1)
		{
			__LIB_3__::func_515(&(Local_430[0 /*17*/]), 1, 0);
		}
		if ((!__LIB_1__::func_489(&(Local_430[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_430[1 /*17*/]), 4)) || bParam1)
		{
			__LIB_3__::func_515(&(Local_430[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if ((__LIB_1__::func_489(&(Local_430[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_430[0 /*17*/]), 4)) || bParam1)
		{
			__LIB_3__::func_515(&(Local_430[0 /*17*/]), 0, 0);
		}
		if ((__LIB_1__::func_489(&(Local_430[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_430[1 /*17*/]), 4)) || bParam1)
		{
			__LIB_3__::func_515(&(Local_430[1 /*17*/]), 0, 0);
		}
	}
}

void func_168()
{
	if (__LIB_0__::func_665(iLocal_466[0], Global_35, 1, 1) < 15f || __LIB_0__::func_665(iLocal_466[0], Global_35, 1, 1) < 15f)
	{
		if (!__LIB_0__::func_899(&uLocal_384))
		{
			__LIB_2__::func_259(&uLocal_384);
		}
		else if (__LIB_1__::func_583(&uLocal_384) > 5f)
		{
			if (__LIB_3__::func_507(&uLocal_540, 3000))
			{
				if (!Local_20.f_46)
				{
					func_33(0);
				}
			}
		}
	}
}

void func_190(int iParam0)
{
	char* sVar0;
	sVar0 = func_298(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_482[iParam0]);
}

void func_205(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = func_298(iParam0);
	if (bParam2)
	{
		iLocal_482[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 64, sParam1, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_482[iParam0], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_482[iParam0]);
}

bool func_207(int iParam0)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return false;
	}
	sVar0 = func_298(iParam0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_482[iParam0], true, false))
	{
		return false;
	}
	return true;
}

void func_208(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = func_298(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_482[iParam0], sParam1) || ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_482[iParam0], sParam1))
	{
		return;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_482[iParam0], sParam1);
}

int func_209(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_391(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_391(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_369(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_391(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_221(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = func_298(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return false;
	}
	return ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_482[iParam0], sParam1);
}

void func_222(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_482[iParam0], vParam1, vParam4, 2);
	}
}

Vector3 func_223(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	vector3 vVar0;
	vVar0 = { __LIB_3__::func_508(iParam0, iLocal_482[iParam1], sParam2, sParam3, 1) };
	return vVar0;
}

float func_224(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	return __LIB_3__::func_656(iParam0, iLocal_482[iParam1], sParam2, sParam3, 1);
}

void func_226(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_298(iParam0);
	if (bParam3)
	{
		if (!__LIB_2__::func_1(iParam2, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_482[iParam0], sParam1, iParam2, 0);
}

void func_227(int iParam0, char* sParam1, int iParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_482[iParam0], sParam1, iParam2, 0);
}

void func_228(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_482[iParam0]))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_482[iParam0]);
}

void func_230(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	iVar0 = 258;
	__LIB_2__::func_354(uParam0, vParam1, iParam4, 2, iVar0, 0);
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@beat@wilderness@campfireambush@tentone";
	}
	return "INVALID ANIM SCENE";
}

Vector3 func_305()
{
	vector3 vVar0;
	vVar0 = { __LIB_3__::func_509(ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35), MISC::GET_RANDOM_FLOAT_IN_RANGE(180f, 359f)) };
	return Global_36 + vVar0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f));
}

int func_308(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_502(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_95(iParam1, uParam3, uParam0);
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

void func_319()
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_531)
	{
		case 1:
			switch (iLocal_532)
			{
				case 0:
					if (__LIB_3__::func_514(&uLocal_363, 0.3f))
					{
						iVar0 = 1891783641;
					}
					break;
				case 1:
					if (__LIB_3__::func_514(&uLocal_363, 3.9f))
					{
						iVar0 = 1891783641;
					}
					break;
				case 2:
					if (__LIB_3__::func_514(&uLocal_363, 7f))
					{
						iVar0 = 1891783641;
					}
					break;
				case 3:
					if (__LIB_3__::func_514(&uLocal_363, 9.5f))
					{
						iVar0 = 1891783641;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_532)
			{
				case 0:
					if (__LIB_3__::func_514(&uLocal_363, 0.5f))
					{
						iVar0 = 1891783641;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_532)
			{
				case 0:
					if (__LIB_3__::func_514(&uLocal_363, 2f))
					{
						iVar0 = 1891783641;
					}
					break;
				case 1:
					if (__LIB_3__::func_514(&uLocal_363, 7.5f))
					{
						iVar0 = 1891783641;
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_532)
			{
				case 0:
					if (__LIB_3__::func_514(&uLocal_363, 0.25f))
					{
						iVar0 = 1891783641;
					}
					break;
			}
			break;
		case 5:
			switch (iLocal_532)
			{
				case 0:
					if (__LIB_3__::func_514(&uLocal_363, 0.25f))
					{
						iVar0 = 1891783641;
					}
					break;
			}
			break;
		case 6:
			switch (iLocal_532)
			{
				case 0:
					if (__LIB_3__::func_514(&uLocal_363, 0.5f))
					{
						iVar0 = 1891783641;
						bLocal_538 = true;
					}
					break;
			}
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_2__::func_315(iVar0, iLocal_466[0], 1);
		iLocal_532++;
	}
}

bool func_320()
{
	if (iLocal_531 >= __LIB_9__::func_816())
	{
		if (!MAP::DOES_BLIP_EXIST(uLocal_469[0]))
		{
			if (__LIB_4__::func_398(6f, 1, 0, 0))
			{
				__LIB_2__::func_73(iLocal_466[0], &(uLocal_469[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
			}
		}
		return false;
	}
	if (__LIB_4__::func_241(32768) && !__LIB_4__::func_241(131072))
	{
		if (!__LIB_4__::func_398(-4f, 1, 0, 0))
		{
			return false;
		}
	}
	else if (iLocal_531 >= 5)
	{
		if (!__LIB_4__::func_398(-5.5f, 1, 0, 0))
		{
			return false;
		}
	}
	else if (!__LIB_4__::func_398(5f, 1, 0, 0))
	{
		return false;
	}
	if (__LIB_4__::func_241(65536) || __LIB_2__::func_341(&(Local_387[0 /*21*/])))
	{
		return false;
	}
	return true;
}

char* func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_CA_MTN_V1_TENT_IN_C";
		case 1:
			return "RE_CA_MTN_V1_TENT_IDLE_A";
		case 2:
			return "RE_CA_MTN_V1_TENT_IN_A";
		case 3:
			return "RE_CA_MTN_V1_TENT_IDLE_B";
		case 4:
			return "RE_CA_MTN_V1_TENT_IN_B";
		case 5:
			return "RE_CA_MTN_V1_TENT_IDLE_C";
		case 6:
			return "CALLOUT_GETTING_TORN_APART";
		case 7:
			return "RE_CA_MTN_V1_TENT_IN";
		case 8:
			return "GENERIC_SHOCKED_HIGH";
		case 9:
			return "RE_CA_MTN_V1_TENT_IN";
		case 10:
			return "GENERIC_SHOCKED_HIGH";
		case 11:
			return "RE_CA_MTN_V1_TENT_IN";
		default:
			break;
	}
	return "NULL";
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		case 6:
			return 2;
		case 7:
		case 8:
		case 9:
			return 0;
		case 10:
			return 2;
		case 11:
			return 0;
	}
	return 0;
}

Vector3 func_326()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = -1;
	fVar2 = 99999.9f;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_495[iVar1 /*3*/], false);
		if (fVar3 < fVar2)
		{
			fVar2 = fVar3;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return 0f, 0f, 0f;
	}
	return vLocal_495[iVar0 /*3*/];
}

void func_333(int iParam0, float fParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(fParam1->f_3), 1))
	{
		__LIB_11__::func_82(fParam1);
		if (__LIB_3__::func_517(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_3__::func_518(fParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_342(int iParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*iParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*iParam0 = __LIB_3__::func_511(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			__LIB_2__::func_450(*iParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*iParam0 = __LIB_3__::func_512(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*iParam0 = __LIB_1__::func_282(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*iParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*iParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*iParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*iParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*iParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*iParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*iParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*iParam0))
			{
				__LIB_1__::func_281(iParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*iParam0, 1)) || (bParam17 && __LIB_0__::func_567(*iParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_2__::func_522(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_2__::func_590(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_281(iParam0, 1, 1);
		return true;
	}
	return false;
}

int func_346(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_2__::func_465(iParam0, 1);
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_346(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_4__::func_105(iParam0, iParam1);
	return 1;
}

void func_356(int iParam0, bool bParam1)
{
	__LIB_3__::func_515(&(Local_430[iParam0 /*17*/]), bParam1, !bParam1);
}

void func_358()
{
	func_550(0, 256);
	func_550(1, 512);
}

void func_360(int iParam0)
{
	bool bVar0;
	switch (iLocal_284[iParam0])
	{
		case 0:
			if (!bLocal_537)
			{
				func_551(iParam0, 1);
			}
			else
			{
				func_551(iParam0, 2);
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				if (__LIB_4__::func_398(0, 1, iLocal_466[0], 1) && __LIB_4__::func_398(0, 1, iLocal_466[1], 1))
				{
					func_119(iLocal_466[0], iLocal_466[1], func_64(3), -1082130432 /* Float: -1f */, 1, -417894478, 0);
					bVar0 = true;
				}
			}
			else if (iLocal_284[0] > 1)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_551(iParam0, 2);
			}
			break;
		case 2:
			if (__LIB_4__::func_398(0, 1, iLocal_466[0], 1) && __LIB_4__::func_398(0, 1, iLocal_466[1], 1))
			{
				switch (iParam0)
				{
					case 0:
						bVar0 = true;
						break;
					case 1:
						bVar0 = true;
						break;
				}
			}
			if (bVar0)
			{
				__LIB_3__::func_600(iLocal_466[iParam0], iLocal_466[iParam0], func_552(), "", -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_551(iParam0, 3);
			}
			break;
		case 3:
			if (__LIB_4__::func_398(0, 1, iLocal_466[iParam0], 1))
			{
				__LIB_3__::func_600(iLocal_466[iParam0], iLocal_466[iParam0], func_552(), "", -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_551(iParam0, 4);
			}
			break;
		case 4:
			if (__LIB_4__::func_398(0, 1, iLocal_466[iParam0], 1))
			{
				func_551(iParam0, 5);
			}
			break;
		case 5:
			break;
	}
}

void func_391(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_563(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_564(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

int func_502(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_2__::func_259(&(iParam1->f_13));
		}
		if (__LIB_3__::func_519(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_637(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_502(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_641(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_643(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_10__::func_927(*uParam0, iParam1, uParam3))
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
				break;
			case 4:
				if (__LIB_4__::func_395(uParam0, iParam1, fParam4, bVar6))
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
					func_648(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_643(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_641(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_4__::func_395(uParam0, iParam1, fParam4, bVar6))
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
			__LIB_10__::func_928(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_550(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iLocal_466[iParam0], 0, 1))
	{
		if (__LIB_2__::func_1(iLocal_466[iParam0], 0, 0))
		{
			PED::_0x78815FC52832B690(iLocal_466[iParam0], 1);
			TASK::TASK_COMBAT_PED(iLocal_466[iParam0], Global_35, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_466[iParam0], true);
			__LIB_17__::func_464(iParam1);
		}
	}
	else if (__LIB_4__::func_241(iParam1))
	{
		func_47(iParam1);
	}
}

void func_551(int iParam0, int iParam1)
{
	iLocal_284[iParam0] = iParam1;
}

char* func_552()
{
	return "RE_CA_MTN_V1_HAHA";
}

bool func_563(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @2967; //curOff = 2214
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @2967; //curOff = 2349
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @2967; //curOff = 2484
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @2967; //curOff = 2607
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @2967; //curOff = 2730
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @2967; //curOff = 2853
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7741; //curOff = 2967
					switch (iParam1)
					{
						case 2:
							*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
							*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
							*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
							*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 8:
							*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
							*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 9:
							*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
							*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 10:
							*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
							*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 3680
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
							*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
							*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 2:
							*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
							*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 12:
							*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
							*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 13:
							*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
							*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 14:
							*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
							*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 26:
							*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
							*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 27:
							*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
							*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
							*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
							*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
							*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 4978
					switch (iParam1)
					{
						case 5:
							*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
							*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
							*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
							*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 8:
							*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
							*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 5457
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 3:
							*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
							*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
							*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
							*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 5948
					switch (iParam1)
					{
						case 6:
							*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
							*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
							*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 15:
							*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
							*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 16:
							*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
							*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 17:
							*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
							*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 18:
							*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
							*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 19:
							*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
							*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 24:
							*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
							*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 25:
							*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
							*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
							*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
							*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
							*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
							*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
							*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 31:
							*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
							*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 32:
							*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
							*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 33:
							*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
							*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					return false;
				}
Vector3 func_564(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

bool func_637(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_9__::func_381(iParam1, uParam2, 0);
		iVar5 = func_729(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
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
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
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
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
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
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_641(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_734(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_643(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		func_738(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_9__::func_381(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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
						__LIB_2__::func_259(&(iParam1->f_18));
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

void func_648(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_738(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

int func_729(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_799(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_734(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_799(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_738(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_799(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_799(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_281(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_3__::func_511(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

