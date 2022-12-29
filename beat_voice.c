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
	struct<193> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_208 = 0;
	struct<32> Local_209[4];
	struct<2> Local_338[4];
	var uLocal_347 = 4;
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
	vector3 vLocal_380 = { 0f, 0f, 0f };
	float fLocal_383 = 0f;
	var uLocal_384[4] = { 0, 0, 0, 0 };
	var uLocal_389[4] = { 0, 0, 0, 0 };
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = -1;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 1073741824;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 1;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	struct<17> Local_418[3];
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = -1;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 2;
	var uLocal_479 = 1;
	var uLocal_480 = 1;
	var uLocal_481 = 1;
	var uLocal_482 = 0;
	var uLocal_483 = 1;
	var uLocal_484 = 2;
	var uLocal_485 = 2;
	var uLocal_486 = 3;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 3;
	var uLocal_490 = 1;
	var uLocal_491 = 3;
	var uLocal_492 = 3;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	struct<5> Local_495 = { 0, 0, 0, 0, 0 } ;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	struct<12> Local_503[1];
	vector3 vLocal_516[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_526[3] = { 0f, 0f, 0f };
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538[2] = { 0, 0 };
	int iLocal_541[3] = { 0, 0, 0 };
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	bool bLocal_551 = false;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	float fLocal_559 = 0f;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 1065353216;
	var uLocal_576 = 1119092736;
	var uLocal_577 = 1092616192;
	var uLocal_578 = 1085276160;
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
	int iLocal_596 = 0;
	var uLocal_597 = 0;
	int iLocal_598 = 0;
	struct<8> Local_599[20];
	vector3 vLocal_760[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_767[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_774[2] = { 0f, 0f };
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
	iLocal_565 = 1;
	iLocal_596 = __LIB_2__::func_340(2, 0, 0);
	Local_15.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_15.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_15, 1);
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_551 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_551, 538, 0);
		if (bLocal_551)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_565)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_9(&Local_15, &uLocal_595, &uLocal_594);
						iLocal_565 = 0;
					}
					else if (Local_15.f_160)
					{
						func_6();
					}
					break;
				case 0:
					if (func_10())
					{
						iLocal_565 = 3;
					}
					break;
				case 3:
					if (func_11())
					{
						iLocal_565 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_15, &uLocal_384, 0, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					func_13();
					if (func_14())
					{
						Local_15.f_50 = 1;
						func_6();
					}
					if (__LIB_3__::func_431(&Local_15, &uLocal_384, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_15.f_158);
		}
	}
}

void func_6()
{
	int iVar0;
	__LIB_3__::func_493(&Local_15, &uLocal_384, &uLocal_389, 0, uLocal_595, uLocal_594, 0, 1, 0, 1);
	__LIB_0__::func_105(1);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_394, 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_395, 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_396, 1);
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_557))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_557);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_558))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_558);
	}
	__LIB_1__::func_682(69);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_384[0]))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uLocal_384[0]);
	}
	if (!Local_15.f_45 || (((__LIB_2__::func_118(uLocal_384[1], 1, 0) > 80f && __LIB_2__::func_118(uLocal_384[2], 1, 0) > 80f) && __LIB_2__::func_118(uLocal_384[3], 1, 0) > 80f) && __LIB_2__::func_118(uLocal_384[0], 1, 0) > 80f))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_3__::func_475(uLocal_384[iVar0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			OBJECT::DELETE_OBJECT(&(Local_503[iVar0 /*12*/].f_8));
			iVar0++;
		}
	}
	__LIB_3__::func_480(&Local_503);
	__LIB_2__::func_593(&iLocal_397, &Local_418);
	__LIB_2__::func_56(uLocal_384[0], 1, 1);
	__LIB_2__::func_56(uLocal_384[1], 1, 1);
	__LIB_2__::func_56(uLocal_384[2], 1, 1);
	__LIB_2__::func_56(uLocal_384[3], 1, 1);
	if (PERSCHAR::_0x800DF3FC913355F3(iLocal_564))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_564);
	}
	if (Local_15.f_44)
	{
		if (!__LIB_1__::func_187(56))
		{
			__LIB_4__::func_471(56, 1);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(var uParam0, var uParam1, var uParam2)
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
	}
}

bool func_10()
{
	switch (iLocal_567)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_15))
			{
				func_35();
				func_36();
				func_37();
				func_38();
				func_39();
				func_40();
				iLocal_567 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_209))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_503))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_11()
{
	switch (iLocal_568)
	{
		case 0:
			if (__LIB_3__::func_479(Local_15.f_51, Local_15.f_51.f_3, &Local_209, &uLocal_384, 1, 0, -1, 1))
			{
				iLocal_568 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_400(Local_15.f_51, &Local_503, Local_15.f_51.f_3, 0, 0, -1, 0);
			func_45();
			func_46();
			func_47();
			iLocal_568 = 6;
			break;
		case 6:
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_384[3], "Default_Panic"))
			{
				return false;
			}
			if (func_48())
			{
				func_49();
			}
			else
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_13()
{
	func_60();
	func_61();
	__LIB_0__::func_11();
	if (iLocal_546 == 0)
	{
		iLocal_564 = __LIB_0__::func_120(927);
		if (PERSCHAR::_0x800DF3FC913355F3(iLocal_564))
		{
			iLocal_546 = 1;
			PERSCHAR::_0x7B204F88F6C3D287(iLocal_564);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_495))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_495, false))
		{
			fLocal_559 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_495);
		}
	}
}

bool func_14()
{
	switch (iLocal_566)
	{
		case 0:
			func_64();
			break;
		case 1:
			func_65();
			break;
		case 2:
			func_66();
			break;
		case 3:
			func_67();
			break;
		case 4:
			PED::SET_PED_KEEP_TASK(uLocal_384[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_384[1], true);
			PED::SET_PED_KEEP_TASK(uLocal_384[2], true);
			PED::SET_PED_KEEP_TASK(uLocal_384[3], true);
			Local_15.f_50 = 1;
			return true;
		case 5:
			PED::SET_PED_KEEP_TASK(uLocal_384[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_384[1], true);
			PED::SET_PED_KEEP_TASK(uLocal_384[2], true);
			PED::SET_PED_KEEP_TASK(uLocal_384[3], true);
			Local_15.f_44 = 1;
			return true;
	}
	return false;
}

void func_35()
{
	Local_209[0 /*32*/].f_1 = joaat("RE_VOICE_FEMALES_01");
	StringCopy(&(Local_209[0 /*32*/].f_23), "SWAMP_GANG_1", 64);
	Local_209[0 /*32*/].f_3 = -894179008;
	Local_209[1 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	StringCopy(&(Local_209[1 /*32*/].f_23), "SWAMP_GANG_3", 64);
	Local_209[1 /*32*/].f_3 = 890482708;
	Local_209[2 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	StringCopy(&(Local_209[2 /*32*/].f_23), "SWAMP_GANG_3", 64);
	Local_209[2 /*32*/].f_3 = 1613203003;
	Local_209[3 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	StringCopy(&(Local_209[3 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_209[3 /*32*/].f_3 = -1850152611;
	__LIB_3__::func_284(&Local_209);
}

void func_36()
{
	Local_338[1 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_338[1 /*2*/].f_1 = "tree_idle";
	Local_338[2 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_338[2 /*2*/].f_1 = "jump_left_run";
	Local_338[3 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_338[3 /*2*/].f_1 = "jump_backright_run";
	__LIB_3__::func_318(Local_338[1 /*2*/], &uLocal_347);
}

void func_37()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			vLocal_380 = { 2407.89f, -720.9f, 40.68f };
			fLocal_383 = 163.75f;
			Local_209[0 /*32*/].f_6 = { vLocal_380 };
			Local_209[1 /*32*/].f_6 = { 2390.06f, -733.21f, 40.6f };
			Local_209[2 /*32*/].f_6 = { 2407.17f, -733.47f, 40.57f };
			Local_209[3 /*32*/].f_6 = { 2419.94f, -731.66f, 41.06f };
			break;
		case 1:
			vLocal_380 = { 2356.18f, -617.96f, 40.65f };
			fLocal_383 = 158.76f;
			Local_209[0 /*32*/].f_6 = { vLocal_380 };
			Local_209[1 /*32*/].f_6 = { 2349.86f, -633.12f, 40.4f };
			Local_209[2 /*32*/].f_6 = { 2336.49f, -616.25f, 40.27f };
			Local_209[3 /*32*/].f_6 = { 2333.27f, -630.84f, 39.98f };
			break;
		case 2:
			vLocal_380 = { 2239.67f, -875.49f, 40.6f };
			fLocal_383 = -79.42f;
			Local_209[0 /*32*/].f_6 = { vLocal_380 };
			Local_209[1 /*32*/].f_6 = { 2246.56f, -869.6f, 40.56f };
			Local_209[2 /*32*/].f_6 = { 2251.1f, -872.57f, 40.56f };
			Local_209[3 /*32*/].f_6 = { 2248.2f, -879.18f, 40.58f };
			break;
		case 3:
			vLocal_380 = { 2117.661f, -468.6407f, 40.569f };
			fLocal_383 = -109.42f;
			Local_209[0 /*32*/].f_6 = { vLocal_380 };
			Local_209[1 /*32*/].f_6 = { 2126.563f, -474.1263f, 40.9428f };
			Local_209[2 /*32*/].f_6 = { 2116.695f, -454.7521f, 40.8045f };
			Local_209[3 /*32*/].f_6 = { 2137.377f, -463.2974f, 40.4571f };
			break;
		case 4:
			vLocal_380 = { 2175.363f, -777.6237f, 40.5395f };
			fLocal_383 = 247.859f;
			Local_209[0 /*32*/].f_6 = { vLocal_380 };
			Local_209[1 /*32*/].f_6 = { 2178.835f, -801.1137f, 40.7757f };
			Local_209[2 /*32*/].f_6 = { 2185f, -782.3f, 42f };
			Local_209[3 /*32*/].f_6 = { 2185.1f, -788.4f, 42f };
			break;
	}
}

void func_38()
{
	__LIB_2__::func_602(&(Local_418[0 /*17*/]), "RE_INTER_POS", func_126(0), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_418[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_126(1), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_418[2 /*17*/]), "BERRY_CON_HELP", "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_621(&(Local_418[2 /*17*/]), 1, 0);
	__LIB_3__::func_158(&(Local_418[0 /*17*/]), 0);
	__LIB_3__::func_158(&(Local_418[1 /*17*/]), 0);
	__LIB_3__::func_158(&(Local_418[2 /*17*/]), 0);
	__LIB_4__::func_406(&(Local_418[2 /*17*/]), 1);
	__LIB_3__::func_362(&(Local_418[2 /*17*/]), 3f);
}

void func_39()
{
	Local_495.f_4 = "script@beat@wilderness@voice@interaction";
}

void func_40()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			Local_503[0 /*12*/].f_7 = joaat("S_INTERACT_TORCH");
			Local_503[0 /*12*/] = { 2404.93f, -721.16f, 40.64f };
			Local_503[0 /*12*/].f_4 = { 0f, 90f, 0f };
			Local_503[0 /*12*/].f_10 = 0;
			break;
		case 1:
			Local_503[0 /*12*/].f_7 = joaat("S_INTERACT_TORCH");
			Local_503[0 /*12*/] = { 2352.92f, -620.04f, 40.55f };
			Local_503[0 /*12*/].f_4 = { 0f, 90f, 0f };
			Local_503[0 /*12*/].f_10 = 0;
			break;
		case 2:
			Local_503[0 /*12*/].f_7 = joaat("S_INTERACT_TORCH");
			Local_503[0 /*12*/] = { 2238.81f, -879.3f, 40.97f };
			Local_503[0 /*12*/].f_4 = { 0f, 90f, 0f };
			Local_503[0 /*12*/].f_10 = 0;
			break;
		case 3:
			Local_503[0 /*12*/].f_7 = joaat("S_INTERACT_TORCH");
			Local_503[0 /*12*/] = { 2119.519f, -472.1702f, 40.3409f };
			Local_503[0 /*12*/].f_4 = { 0f, 90f, 0f };
			Local_503[0 /*12*/].f_10 = 0;
			break;
		case 4:
			Local_503[0 /*12*/].f_7 = joaat("S_INTERACT_TORCH");
			Local_503[0 /*12*/] = { 2175.363f, -773.6237f, 40.85f };
			Local_503[0 /*12*/].f_4 = { 0f, 90f, 0f };
			Local_503[0 /*12*/].f_10 = 0;
			break;
	}
	STREAMING::REQUEST_MODEL(joaat("P_TORCH01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_TORCH_02X"), false);
	__LIB_3__::func_314(&Local_503);
}

void func_45()
{
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[0], vLocal_380, 0f, true, true, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[1], Local_209[1 /*32*/].f_6 + Vector(-5f, 0f, 0f), 0f, true, true, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[2], Local_209[2 /*32*/].f_6 + Vector(-5f, 0f, 0f), 0f, true, true, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[3], Local_209[3 /*32*/].f_6 + Vector(-5f, 0f, 0f), 0f, true, true, true);
	ENTITY::SET_ENTITY_COORDS(Local_503[0 /*12*/].f_8, Local_503[0 /*12*/], true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[2], true);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[3], true);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[1], false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[2], false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[3], false);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_384[1], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_384[2], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_384[3], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_384[0], true, true);
	__LIB_2__::func_231(uLocal_384[1], joaat("WEAPON_MELEE_HATCHET_MELEEONLY"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_2__::func_231(uLocal_384[2], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_2__::func_231(uLocal_384[3], joaat("WEAPON_MELEE_MACHETE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_2__::func_133(uLocal_384[0], &(Local_209[0 /*32*/].f_23), 0);
	__LIB_2__::func_133(uLocal_384[1], &(Local_209[1 /*32*/].f_23), 0);
	__LIB_2__::func_133(uLocal_384[2], &(Local_209[2 /*32*/].f_23), 0);
	__LIB_2__::func_133(uLocal_384[3], &(Local_209[3 /*32*/].f_23), 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[1], 92, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[2], 92, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[3], 92, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[1], 51, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[2], 51, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[3], 51, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[1], 98, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[2], 98, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_384[3], 98, true);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_384[0], 1);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_384[1], 1);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_384[2], 1);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_384[3], 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_384[1], vLocal_380, 50f, 0, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_384[2], vLocal_380, 50f, 0, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_384[3], vLocal_380, 50f, 0, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_384[0], vLocal_380, 50f, 0, 0, 0);
	PED::_0x57F35552E771BE9D(uLocal_384[1], 12);
	PED::_0x57F35552E771BE9D(uLocal_384[2], 12);
	PED::_0x57F35552E771BE9D(uLocal_384[3], 12);
	PED::_0x57F35552E771BE9D(uLocal_384[0], 12);
	PED::SET_PED_CONFIG_FLAG(uLocal_384[0], 1, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_384[0], 169, true);
	__LIB_3__::func_478(&(Local_209[0 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_384[0], 146, true);
	__LIB_3__::func_478(&(Local_209[1 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_384[1], 146, true);
	__LIB_3__::func_478(&(Local_209[2 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_384[2], 146, true);
	__LIB_3__::func_478(&(Local_209[3 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_384[3], 146, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_384[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_384[1], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_384[2], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_384[3], 6, true);
	__LIB_1__::func_991(uLocal_384[0], 0);
	__LIB_1__::func_991(uLocal_384[1], 0);
	__LIB_1__::func_991(uLocal_384[2], 0);
	__LIB_1__::func_991(uLocal_384[3], 0);
	__LIB_3__::func_285(uLocal_384[0], &Local_15, 0);
	__LIB_2__::func_190(uLocal_384[0], 1);
	__LIB_2__::func_463(uLocal_384[0], joaat("PROVISION_SILVERTOOTH"), 1, 0);
	__LIB_2__::func_463(uLocal_384[0], joaat("CONSUMABLE_APPLE"), 1, 0);
	__LIB_2__::func_463(uLocal_384[2], joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"), 1, 0);
	uLocal_395 = GRAPHICS::_0xFA50F79257745E74(vLocal_380, 3f, 1, 319, 0);
	ENTITY::_SET_ENTITY_HEALTH(uLocal_384[0], (ENTITY::GET_ENTITY_HEALTH(uLocal_384[0]) / 3), 0);
	PED::_0xF7EA250B9A919E03(joaat("DEFAULT_PANIC"), uLocal_384[3]);
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_384[3], "Default_Panic");
}

void func_46()
{
	__LIB_2__::func_51(&(Local_15.f_5), 1);
	__LIB_2__::func_180(&(Local_15.f_5), 1);
	__LIB_2__::func_110(&(Local_15.f_5), 1);
	__LIB_2__::func_105(&(Local_15.f_5), 1);
	__LIB_2__::func_50(&(Local_15.f_5), 1);
	__LIB_2__::func_182(&(Local_15.f_5), 1);
	__LIB_2__::func_111(&(Local_15.f_5), 0);
}

void func_47()
{
	Local_495 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_495.f_4, 64, "PBL_BASE", false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_495, vLocal_380, 0f, 0f, fLocal_383, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_495, "player", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_495, "swamp", uLocal_384[0], 0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_495, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_495);
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_495, "base bool", false, false);
}

bool func_48()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_495, "PBL_BASE"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_495, "PBL_BASE", true);
	}
	else
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_495, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_495, false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_495);
		return true;
	}
	return false;
}

void func_49()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_ACTION_B");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_ACTION_F");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_ACTION_L");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_ACTION_R");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_AWAY_F");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_AWAY_L");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_AWAY_R");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_AWAY_LB");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_AWAY_RB");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_BREAKOUT");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_COWER_F");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_COWER_L");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_COWER_R");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_COWER_LB");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, "PBL_COWER_RB");
}

void func_60()
{
	int iVar0;
	float fVar1;
	iVar0 = -1;
	fVar1 = 45f;
	if (iLocal_530 == 0)
	{
		fVar1 = 50f;
	}
	if (iLocal_566 != 3)
	{
		iVar0 = func_186(&(uLocal_384[0]), &iLocal_397, fVar1, &Local_418, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_596, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_530)
	{
		case 0:
			switch (iLocal_531)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_531 = 3;
							break;
						case 1:
							iLocal_531 = 3;
							break;
						case 2:
							func_187(2);
							iLocal_530 = 6;
							iLocal_531 = 0;
							break;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_411(&(Local_418[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_418[1 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_418[2 /*17*/]), 1, 0);
						__LIB_3__::func_158(&(Local_418[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_418[1 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_418[2 /*17*/]), 0);
						Local_418[0 /*17*/].f_13 = func_126(2);
						Local_418[1 /*17*/].f_13 = func_126(3);
						iLocal_530 = 1;
						iLocal_531 = 0;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_531)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_531 = 3;
							break;
						case 1:
							iLocal_531 = 3;
							break;
						case 2:
							func_187(2);
							iLocal_530 = 6;
							iLocal_531 = 0;
							break;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_411(&(Local_418[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_418[1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_418[2 /*17*/]), 0, 0);
						__LIB_3__::func_158(&(Local_418[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_418[1 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_418[2 /*17*/]), 0);
						Local_418[0 /*17*/].f_13 = func_126(22);
						Local_418[1 /*17*/].f_13 = func_126(24);
						iLocal_530 = 5;
						iLocal_531 = 0;
					}
					break;
			}
			break;
		case 2:
			if (iLocal_549 == 0)
			{
				if (__LIB_2__::func_118(uLocal_384[0], 1, 1) < 70f)
				{
					__LIB_2__::func_411(&(Local_418[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_418[1 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_418[2 /*17*/]), 1, 0);
					iLocal_549 = 1;
				}
			}
			switch (iLocal_531)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_531 = 3;
							break;
						case 1:
							iLocal_531 = 3;
							break;
						case 2:
							func_187(2);
							iLocal_530 = 6;
							iLocal_531 = 0;
							break;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						__LIB_2__::func_303(uLocal_384[0], Global_35, func_126(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_418[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_418[1 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_418[2 /*17*/]), 1, 0);
						Local_418[0 /*17*/].f_13 = func_126(23);
						Local_418[1 /*17*/].f_13 = func_126(25);
						iLocal_530 = 3;
						iLocal_531 = 0;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_531)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							__LIB_2__::func_411(&(Local_418[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_418[1 /*17*/]), 0, 0);
							iLocal_531 = 3;
							break;
						case 1:
							__LIB_2__::func_411(&(Local_418[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_418[1 /*17*/]), 0, 0);
							iLocal_531 = 3;
							break;
						case 2:
							func_187(2);
							iLocal_530 = 6;
							iLocal_531 = 0;
							break;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						__LIB_2__::func_303(uLocal_384[0], Global_35, func_126(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_530 = 4;
						__LIB_2__::func_411(&(Local_418[2 /*17*/]), 1, 0);
						iLocal_531 = 0;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 2:
					func_187(2);
					iLocal_530 = 6;
					iLocal_531 = 0;
					break;
			}
			break;
		case 5:
			break;
		case 6:
			__LIB_3__::func_158(&(Local_418[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_418[1 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_418[2 /*17*/]), 1);
			break;
	}
}

void func_61()
{
	int iVar0[6];
	vector3 vVar7[5];
	switch (Local_15.f_51.f_4)
	{
		case 0:
			vVar7[0 /*3*/] = { 2477.9f, -602.53f, 40.4f };
			vVar7[1 /*3*/] = { 2462.31f, -617.66f, 41.01f };
			vVar7[2 /*3*/] = { 2448.25f, -632.34f, 44.11f };
			vVar7[3 /*3*/] = { 2426.78f, -661.02f, 42.09f };
			vVar7[4 /*3*/] = { 2402.86f, -687.03f, 41f };
			break;
		case 1:
			vVar7[0 /*3*/] = { 2374.1f, -445.35f, 40.34f };
			vVar7[1 /*3*/] = { 2373.92f, -487.4f, 39.7f };
			vVar7[2 /*3*/] = { 2370.57f, -517.82f, 40.3f };
			vVar7[3 /*3*/] = { 2368.22f, -544.04f, 40.38f };
			vVar7[4 /*3*/] = { 2358.5f, -568.66f, 39.77f };
			break;
	}
	switch (iLocal_14)
	{
		case 0:
			iVar0[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar7[0 /*3*/], 0f, 0f, 0f, 25f, 25f, 4f, "Animal blocking 0");
			MISC::_0x2FCD528A397E5C88(iVar0[0], 2442122);
			__LIB_13__::func_899(iVar0[0], 0);
			iLocal_14 = 1;
			return;
		case 1:
			iVar0[1] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar7[1 /*3*/], 0f, 0f, 0f, 25f, 25f, 4f, "Animal blocking 1");
			MISC::_0x2FCD528A397E5C88(iVar0[1], 2442122);
			__LIB_13__::func_899(iVar0[1], 0);
			iLocal_14 = 2;
			return;
		case 2:
			iVar0[2] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar7[2 /*3*/], 0f, 0f, 0f, 25f, 25f, 4f, "Animal blocking 2");
			MISC::_0x2FCD528A397E5C88(iVar0[2], 2442122);
			__LIB_13__::func_899(iVar0[2], 0);
			iLocal_14 = 3;
			return;
		case 3:
			iVar0[3] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar7[3 /*3*/], 0f, 0f, 0f, 25f, 25f, 4f, "Animal blocking 3");
			MISC::_0x2FCD528A397E5C88(iVar0[3], 2442122);
			__LIB_13__::func_899(iVar0[3], 0);
			iLocal_14 = 4;
			return;
		case 4:
			iVar0[4] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar7[4 /*3*/], 0f, 0f, 0f, 25f, 25f, 4f, "Animal blocking 4");
			MISC::_0x2FCD528A397E5C88(iVar0[4], 2442122);
			__LIB_13__::func_899(iVar0[4], 0);
			iLocal_14 = 5;
			return;
		case 5:
			iVar0[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_380, 0f, 0f, 0f, 25f, 25f, 4f, "Animal blocking 5");
			MISC::_0x2FCD528A397E5C88(iVar0[5], 2442122);
			__LIB_13__::func_899(iVar0[5], 0);
			iLocal_14 = 7;
			return;
		case 7:
			break;
	}
}

void func_64()
{
	if (__LIB_3__::func_332(Local_15.f_51, 1) <= func_194())
	{
		__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_384[0], false);
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uLocal_384[0], 0);
		func_187(1);
	}
}

void func_65()
{
	func_195("revc_tracked_path_0", ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_380);
	func_196();
	func_197();
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		__LIB_17__::func_896(uLocal_384[0], &uLocal_570, 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, 1000, 3000, 3000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
	}
	func_199();
	func_200();
	if (ENTITY::IS_ENTITY_DEAD(uLocal_384[0]))
	{
		PED::DELETE_PED(&(uLocal_384[1]));
		PED::DELETE_PED(&(uLocal_384[2]));
		PED::DELETE_PED(&(uLocal_384[3]));
		func_201();
		func_187(4);
	}
	if (__LIB_0__::func_665(Global_35, uLocal_384[0], 1, 1) <= 5f)
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
}

void func_66()
{
	int iVar0;
	int iVar1;
	iVar0 = 5000;
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
	}
	switch (iLocal_532)
	{
		case 0:
			__LIB_2__::func_279(uLocal_384[0], 0);
			func_203(uLocal_384[0], Global_35, 1);
			func_204();
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[2], func_205(), Local_209[2 /*32*/].f_9, true, true, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[3], func_206(), Local_209[3 /*32*/].f_9, true, true, true);
			if (__LIB_2__::func_118(uLocal_384[0], 1, 1) > 3f && __LIB_2__::func_118(uLocal_384[0], 1, 1) <= 5f)
			{
				iVar0 = 3000;
			}
			else if (__LIB_2__::func_118(uLocal_384[0], 1, 1) >= 2f && __LIB_2__::func_118(uLocal_384[0], 1, 1) <= 3f)
			{
				iVar0 = 3000;
			}
			else if (__LIB_2__::func_118(uLocal_384[0], 1, 1) >= 0f && __LIB_2__::func_118(uLocal_384[0], 1, 1) < 2f)
			{
				iVar0 = 2000;
			}
			__LIB_2__::func_303(Global_35, uLocal_384[0], func_126(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			CAM::STOP_GAMEPLAY_HINT(false);
			CAM::SET_GAMEPLAY_HINT_FOV(60f);
			CAM::SET_GAMEPLAY_PED_HINT(func_207(), 0f, 0f, 0f, true, iVar0, iVar0, iVar0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[1], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[2], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[3], true);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, Local_495, "player", func_208(), 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar1);
			iLocal_557 = GRAPHICS::CREATE_TRACKED_POINT();
			iLocal_558 = GRAPHICS::CREATE_TRACKED_POINT();
			__LIB_2__::func_214(uLocal_384[3], Global_35, "SWAMP4_CALLOUT_CLICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
			iLocal_532 = 1;
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, false) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(Global_35) >= 1)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_495, func_208()))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_384[0], joaat("WEAPON_MELEE_KNIFE"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						fLocal_559 = 0f;
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_495, "base bool", true, false);
						TASK::_0x2E1D6D87346BB7D2(uLocal_384[0], Global_35, 0, 0);
						__LIB_2__::func_214(uLocal_384[2], Global_35, "SWAMP3_CALLOUT_CLICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
						iLocal_532 = 2;
					}
				}
			}
			else
			{
				iLocal_532 = 2;
			}
			break;
		case 2:
			func_210();
			func_211();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_384[0], -521500383) || fLocal_559 >= 0.999f)
			{
				ENTITY::_SET_ENTITY_HEALTH(Global_35, 100, 0);
				PED::APPLY_DAMAGE_TO_PED(Global_35, 60, 1, 64986, 0);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_ODR6_Duster_Slash_Belly", 0f, 1f);
				__LIB_2__::func_504(uLocal_384[0], 0);
				__LIB_2__::func_303(uLocal_384[0], Global_35, func_126(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_214(uLocal_384[1], Global_35, "SWAMP3_CALLOUT_CLICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				func_187(3);
				iLocal_532 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_67()
{
	__LIB_3__::func_673(uLocal_384[1], Global_35, &uLocal_470, -1, 50);
	__LIB_3__::func_673(uLocal_384[2], Global_35, &uLocal_470, -1, 50);
	__LIB_3__::func_673(uLocal_384[3], Global_35, &uLocal_470, -1, 50);
	if (iLocal_532 == 0)
	{
		func_200();
	}
	if (iLocal_532 >= 3)
	{
		func_210();
		func_211();
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, 1);
	}
	switch (iLocal_536)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(uLocal_389[1]))
			{
				__LIB_2__::func_73(uLocal_384[1], &(uLocal_389[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
			if (!MAP::DOES_BLIP_EXIST(uLocal_389[2]))
			{
				__LIB_2__::func_73(uLocal_384[2], &(uLocal_389[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
			if (!MAP::DOES_BLIP_EXIST(uLocal_389[3]))
			{
				__LIB_2__::func_73(uLocal_384[3], &(uLocal_389[3]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uLocal_384[0]);
			PED::SET_PED_USING_ACTION_MODE(uLocal_384[1], true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(uLocal_384[2], true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(uLocal_384[3], true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(uLocal_384[0], true, -1, 0);
			Local_15.f_46 = 1;
			__LIB_2__::func_344(&(uLocal_384[0]));
			__LIB_2__::func_593(&iLocal_397, &Local_418);
			__LIB_1__::func_148(&uLocal_591);
			iLocal_536 = 1;
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[1]))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_560);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_560);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 2f, 3f, 2f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_560);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_384[1], iLocal_560);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_560);
			}
			if (iLocal_532 >= 3)
			{
				Local_15.f_50 = 1;
				iLocal_536 = 2;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[3]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_562);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_562);
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 2f, 2f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_562);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_384[3], iLocal_562, 0.8f, 0.8f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_562);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[2]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_561);
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 2f, 2f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_561);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_384[2], iLocal_561, 0.5f, 0.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
				}
				__LIB_2__::func_214(uLocal_384[3], Global_35, "SWAMP4_CALLOUT_CLICK", 0, -1082130432 /* Float: -1f */, 7, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				iLocal_536 = 3;
			}
			break;
		case 2:
			func_217();
			func_218();
			if (iLocal_553 == 0)
			{
				if (iLocal_552 == 0)
				{
					__LIB_2__::func_303(Global_35, uLocal_384[0], func_126(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_552 = 1;
				}
			}
			if ((fLocal_559 >= 0.99f || ANIMSCENE::_0x005E6F28DD7ED58D(Local_495, "swamp")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_384[0], Local_495))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_384[0], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_2__::func_214(uLocal_384[2], Global_35, "SWAMP3_CALLOUT_CLICK", 0, -1082130432 /* Float: -1f */, 7, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				__LIB_2__::func_214(uLocal_384[1], Global_35, "SWAMP3_CALLOUT_CLICK", 0, -1082130432 /* Float: -1f */, 7, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				iLocal_536 = 3;
			}
			break;
		case 3:
			func_217();
			func_218();
			func_219();
			if (iLocal_553 == 1)
			{
				if (!__LIB_0__::func_75(&uLocal_591))
				{
					__LIB_1__::func_148(&uLocal_591);
				}
				else if (__LIB_0__::func_264(&uLocal_591) > 2f)
				{
					if (iLocal_552 == 0)
					{
						__LIB_2__::func_303(Global_35, uLocal_384[0], func_126(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_552 = 1;
					}
				}
			}
			if (iLocal_532 >= 3)
			{
				if (((ENTITY::IS_ENTITY_DEAD(uLocal_384[1]) || PED::_IS_PED_HOGTIED(uLocal_384[1])) && (ENTITY::IS_ENTITY_DEAD(uLocal_384[2]) || PED::_IS_PED_HOGTIED(uLocal_384[2]))) && (ENTITY::IS_ENTITY_DEAD(uLocal_384[3]) || PED::_IS_PED_HOGTIED(uLocal_384[3])))
				{
					__LIB_2__::func_303(Global_35, uLocal_384[0], func_126(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_187(5);
				}
			}
			if (func_222() && iLocal_566 != 5)
			{
				__LIB_2__::func_303(Global_35, uLocal_384[0], func_126(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_187(5);
			}
			if (__LIB_3__::func_332(Local_15.f_51, 1) > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[1]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_560);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_560);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_560);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_384[1], iLocal_560, 1f, 10f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_560);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[3]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_562);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_562);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_562);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_384[3], iLocal_562, 1f, 10f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_562);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[2]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_561);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_561);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_384[2], iLocal_561, 1f, 10f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_384[0]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_563);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_563);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_563);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_384[0], iLocal_563, 1f, 10f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_563);
				}
				__LIB_2__::func_303(Global_35, uLocal_384[0], func_126(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_187(5);
			}
			break;
	}
}

char* func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_VC_LWL_V1_INITIAL_B";
		case 1:
			return "RE_VC_LWL_V1_INITIAL_B_NEG";
		case 2:
			return "RE_VC_LWL_V1_LOCATION1_B";
		case 3:
			return "RE_VC_LWL_V1_LOCATION1_B_NEG";
		case 4:
			return "RE_VC_LWL_V1_INITIAL_A";
		case 5:
			return "RE_VC_LWL_V1_INITIAL_B";
		case 6:
			return "RE_VC_LWL_V1_INITIAL_C";
		case 7:
			return "RE_VC_LWL_V1_INITIAL_D";
		case 8:
			return "RE_VC_LWL_V1_INITIAL_E";
		case 9:
			return "RE_VC_LWL_V1_LOCATION1_A";
		case 10:
			return "RE_VC_LWL_V1_LOCATION1_B";
		case 11:
			return "RE_VC_LWL_V1_LOCATION1_C";
		case 12:
			return "RE_VC_LWL_V1_LOCATION1_D";
		case 13:
			return "RE_VC_LWL_V1_FINAL_LOCATION_A";
		case 14:
			return "RE_VC_LWL_V1_FINAL_LOCATION_B";
		case 15:
			return "RE_VC_LWL_V1_FINAL_LOCATION_C";
		case 16:
			return "RE_VC_LWL_V1_FINAL_LOCATION_D";
		case 17:
			return "RE_VC_LWL_V1_FINAL_LOCATION_E";
		case 18:
			return "RE_VC_LWL_V1_FINAL_LOCATION_F";
		case 19:
			return "RE_VC_LWL_V1_FINAL_LOCATION_G";
		case 20:
			return "RE_VC_LWL_V1_FINAL_LOCATION_H";
		case 21:
			return "RE_VC_LWL_V1_ATTACK_A";
		case 22:
			return "RE_VC_LWL_V1_POSITIVE_PLAYER_A";
		case 23:
			return "RE_VC_LWL_V1_POSITIVE_PLAYER_B";
		case 24:
			return "RE_VC_LWL_V1_NEGATIVE_PLAYER_A";
		case 25:
			return "RE_VC_LWL_V1_NEGATIVE_PLAYER_B";
		case 26:
			return "RE_VC_LWL_HELP";
		case 27:
			return "RE_VC_LWL_V1_REVEAL";
		case 28:
			return "RE_VC_LWL_V1_PLYFINAL";
		case 29:
			return "RE_VC_LWL_V1_ILO_REPLY_A";
		case 30:
			return "RE_VC_LWL_V1_ILO_REPLY_B";
		default:
			break;
	}
	return "";
}

int func_186(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_344(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_187(int iParam0)
{
	iLocal_566 = iParam0;
}

float func_194()
{
	float fVar0;
	fVar0 = 140f;
	switch (Local_15.f_51.f_4)
	{
		case 0:
			fVar0 = 140f;
			break;
		case 1:
			fVar0 = 140f;
			break;
		case 2:
			fVar0 = 200f;
			break;
		case 3:
			fVar0 = 200f;
			break;
	}
	return fVar0;
}

int func_195(char* sParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	switch (iLocal_537)
	{
		case 0:
			if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
			{
				iLocal_537 = 1;
			}
			break;
		case 1:
			uLocal_597 = PATHFIND::_0x348F211CA2404039(Global_35, vParam1, vParam4, 0);
			iLocal_537 = 3;
			break;
		case 3:
			if (PATHFIND::_0x3A0F82F6EE2291C8(uLocal_597) == 1)
			{
				iLocal_598 = PATHFIND::_0xD470725E0703D22F(uLocal_597);
				iLocal_537 = 4;
			}
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_598)
			{
				Local_599[iVar0 /*8*/] = { PATHFIND::_0x430F8319AE56C8A9(uLocal_597, iVar0) };
				iVar0++;
			}
			PATHFIND::_0x661BB1E1FF77742D(uLocal_597);
			iLocal_537 = 5;
			break;
		case 5:
			if (TASK::_0x5C885E0978B6AD60(sParam0, &Local_599, iLocal_598, 0))
			{
				iLocal_537 = 6;
			}
			break;
		case 6:
			if (ENTITY::_0x29BA9F78321E5A6C(uLocal_384[0], sParam0, 1, 0.762f, 0.4f, 1, 0, 0, 0, 0, 0, 1))
			{
				iLocal_537 = 7;
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_196()
{
	switch (iLocal_555)
	{
		case 0:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				__LIB_3__::func_673(Global_35, uLocal_384[0], &uLocal_470, 4000, 200);
				iLocal_555++;
			}
			break;
		case 1:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 3:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 4:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 5:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], uLocal_384[0], func_126(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 6:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 7:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 8:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 9:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 10:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 11:
			if ((__LIB_2__::func_227(0f, 1, uLocal_384[0], 1) && iLocal_531 != 3) && iLocal_554 == 0)
			{
				__LIB_2__::func_303(uLocal_384[0], 0, func_126(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_350();
				iLocal_555++;
			}
			break;
		case 12:
			if (!__LIB_0__::func_75(&uLocal_582))
			{
				__LIB_1__::func_148(&uLocal_582);
				iLocal_556 = MISC::GET_RANDOM_INT_IN_RANGE(4, 8);
			}
			else if (__LIB_0__::func_264(&uLocal_582) >= IntToFloat(iLocal_556))
			{
				if (iLocal_554 == 0)
				{
					__LIB_2__::func_303(uLocal_384[0], 0, func_126(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					func_350();
				}
				__LIB_0__::func_37(&uLocal_582);
			}
			break;
	}
}

void func_197()
{
	if (iLocal_548 == 0)
	{
		if (__LIB_2__::func_269(uLocal_384[0], 20f))
		{
			Local_418[0 /*17*/].f_13 = func_126(22);
			Local_418[1 /*17*/].f_13 = func_126(24);
			iLocal_530 = 2;
			iLocal_531 = 0;
			iLocal_548 = 1;
		}
	}
}

void func_199()
{
	switch (iLocal_534)
	{
		case 0:
			if (func_358(uLocal_384[0], 0, &(Local_15.f_5), &iLocal_569, 0, 0))
			{
			}
			break;
		case 1:
			if (!func_359() && iLocal_535 == 0)
			{
				func_203(uLocal_384[0], Global_35, 1);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_495, func_360()))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_495, func_360(), true);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_495, func_360());
					__LIB_2__::func_411(&(Local_418[2 /*17*/]), 0, 0);
					iLocal_534 = 2;
				}
			}
			break;
		case 2:
			if (!func_359())
			{
				__LIB_2__::func_411(&(Local_418[2 /*17*/]), 1, 0);
				__LIB_3__::func_237(&(Local_15.f_5), &iLocal_569);
				iLocal_534 = 0;
			}
			break;
	}
}

void func_200()
{
	switch (iLocal_535)
	{
		case 0:
			func_201();
			if (__LIB_2__::func_118(uLocal_384[0], 1, 1) <= 30f)
			{
				if (func_358(uLocal_384[0], 0, &(Local_15.f_5), &iLocal_569, 0, 0))
				{
					if (iLocal_569 == 4 || iLocal_569 == 16)
					{
						iLocal_535 = 1;
					}
				}
			}
			if (__LIB_2__::func_118(uLocal_384[0], 1, 1) <= 30f && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, uLocal_384[0], 17) || PED::IS_PED_FACING_PED(Global_35, uLocal_384[0], 60f)))
			{
				if (!__LIB_0__::func_75(&uLocal_585))
				{
					__LIB_1__::func_148(&uLocal_585);
				}
				else if (__LIB_0__::func_264(&uLocal_585) >= 35f)
				{
					iLocal_553 = 1;
					iLocal_535 = 1;
				}
			}
			if ((PED::_IS_PED_LASSOED(uLocal_384[0]) || PED::_IS_PED_HOGTIED(uLocal_384[0])) || PED::IS_PED_RAGDOLL(uLocal_384[0]))
			{
				iLocal_535 = 2;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_384[0], Global_35, 1, 1))
			{
				iLocal_535 = 1;
			}
			break;
		case 1:
			func_201();
			if (!func_359())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_495, "PBL_BREAKOUT"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_495, "PBL_BREAKOUT", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_495, "base bool", true, false);
				}
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_384[0], 0))
				{
					PED::_0x802092B07E3B1EEA(uLocal_384[0], ENTITY::GET_ENTITY_COORDS(uLocal_384[0], false, false), 3);
				}
				__LIB_3__::func_158(&(Local_418[0 /*17*/]), 1);
				__LIB_3__::func_158(&(Local_418[1 /*17*/]), 1);
				__LIB_3__::func_158(&(Local_418[2 /*17*/]), 1);
				__LIB_2__::func_504(uLocal_384[0], 0);
				__LIB_2__::func_303(uLocal_384[0], Global_35, func_126(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_554 = 1;
				func_362();
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[1], func_363(vLocal_516[0 /*3*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fLocal_526[0]), __LIB_3__::func_978(uLocal_384[1], Global_35, 1), true, true, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[2], func_363(vLocal_516[1 /*3*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fLocal_526[1]), __LIB_3__::func_978(uLocal_384[2], Global_35, 1), true, true, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[3], func_363(vLocal_516[2 /*3*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fLocal_526[2]), __LIB_3__::func_978(uLocal_384[3], Global_35, 1), true, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[1], false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[2], false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[3], false);
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[1], true);
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[2], true);
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[3], true);
				__LIB_2__::func_279(uLocal_384[0], 0);
				WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_384[0], joaat("WEAPON_MELEE_KNIFE"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				func_187(3);
				iLocal_535 = 3;
			}
			if ((PED::_IS_PED_LASSOED(uLocal_384[0]) || PED::_IS_PED_HOGTIED(uLocal_384[0])) || PED::IS_PED_RAGDOLL(uLocal_384[0]))
			{
				iLocal_535 = 2;
			}
			break;
		case 2:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_384[0], Global_35, func_126(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_362();
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[1], func_363(vLocal_516[0 /*3*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fLocal_526[0]), __LIB_3__::func_978(uLocal_384[1], Global_35, 1), true, true, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[2], func_363(vLocal_516[1 /*3*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fLocal_526[1]), __LIB_3__::func_978(uLocal_384[2], Global_35, 1), true, true, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[3], func_363(vLocal_516[2 /*3*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fLocal_526[2]), __LIB_3__::func_978(uLocal_384[3], Global_35, 1), true, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[1], false);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[2], false);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[3], false);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[1], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[2], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_384[3], true);
			__LIB_2__::func_279(uLocal_384[0], 0);
			__LIB_3__::func_158(&(Local_418[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_418[1 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_418[2 /*17*/]), 1);
			WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_384[0], joaat("WEAPON_MELEE_KNIFE"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			func_187(3);
			iLocal_535 = 3;
			break;
		case 3:
			if (((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_384[0], Local_495) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_495, "swamp")) || ENTITY::IS_ENTITY_DEAD(uLocal_384[0])) || !ANIMSCENE::_0x1F0E401031E20146(Local_495, "PBL_BREAKOUT"))
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_389[0]))
				{
					__LIB_2__::func_73(uLocal_384[0], &(uLocal_389[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
				__LIB_2__::func_303(uLocal_384[0], Global_35, "SWAMP4_CHARGE_HISS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::TASK_COMBAT_PED(uLocal_384[0], Global_35, 33554432, 16);
				PED::_0x2208438012482A1A(uLocal_384[0], false, false);
				iLocal_535 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_201()
{
	if (iLocal_547 == 0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_384[0], Global_35, 1, 1) || ENTITY::IS_ENTITY_DEAD(uLocal_384[0]))
		{
			iLocal_547 = 1;
			__LIB_3__::func_465(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_203(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * FtoV((ENTITY::GET_ENTITY_SPEED(iParam1) * 0f)) };
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = __LIB_1__::func_507(vVar6, vVar9);
	fVar13 = 0.707f;
	if (MISC::ABSF(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_533 = 0;
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_533 = 1;
		}
		else
		{
			iLocal_533 = 2;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_533 = 3;
	}
	else
	{
		iLocal_533 = 4;
	}
	if (bParam2)
	{
	}
}

void func_204()
{
	var uVar0;
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[1 /*32*/].f_6 = { 2415.67f, -719.16f, 40.53f };
				break;
			case 1:
				Local_209[1 /*32*/].f_6 = { 2369.02f, -609.37f, 40.52f };
				break;
			case 2:
				Local_209[1 /*32*/].f_6 = { 2225.77f, -862.75f, 40.61f };
				break;
			case 3:
				Local_209[1 /*32*/].f_6 = { 2126.563f, -474.1263f, 40.9428f };
				break;
			case 4:
				Local_209[1 /*32*/].f_6 = { 2178.835f, -801.1137f, 40.7757f };
				break;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[1 /*32*/].f_6 = { 2406.32f, -732.86f, 40.62f };
				break;
			case 1:
				Local_209[1 /*32*/].f_6 = { 2350.1f, -633.54f, 40.43f };
				break;
			case 2:
				Local_209[1 /*32*/].f_6 = { 2253.42f, -882.71f, 40.65f };
				break;
			case 3:
				Local_209[1 /*32*/].f_6 = { 2126.563f, -474.1263f, 40.9428f };
				break;
			case 4:
				Local_209[1 /*32*/].f_6 = { 2178.835f, -801.1137f, 40.7757f };
				break;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[1 /*32*/].f_6 = { 2402.98f, -710.9f, 40.52f };
				break;
			case 1:
				Local_209[1 /*32*/].f_6 = { 2352.49f, -608.49f, 40.52f };
				break;
			case 2:
				Local_209[1 /*32*/].f_6 = { 2253.42f, -882.71f, 40.65f };
				break;
			case 3:
				Local_209[1 /*32*/].f_6 = { 2126.563f, -474.1263f, 40.9428f };
				break;
			case 4:
				Local_209[1 /*32*/].f_6 = { 2178.835f, -801.1137f, 40.7757f };
				break;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[1 /*32*/].f_6 = { 2416.11f, -719.97f, 40.56f };
				break;
			case 1:
				Local_209[1 /*32*/].f_6 = { 2369.43f, -609.92f, 40.52f };
				break;
			case 2:
				Local_209[1 /*32*/].f_6 = { 2225.77f, -862.75f, 40.61f };
				break;
			case 3:
				Local_209[1 /*32*/].f_6 = { 2126.563f, -474.1263f, 40.9428f };
				break;
			case 4:
				Local_209[1 /*32*/].f_6 = { 2178.835f, -801.1137f, 40.7757f };
				break;
		}
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[1], Local_209[1 /*32*/].f_6, __LIB_3__::func_978(uLocal_384[1], Global_35, 1), true, true, true);
	uVar0 = uLocal_384[1];
	ENTITY::_0x9587913B9E772D29(uVar0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[1], false);
}

Vector3 func_205()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2411.57f, -707.66f, 45.98f;
			case 1:
				return 2361.89f, -605.56f, 49.38f;
			case 2:
				return 2271.2f, -849.1f, 45.97f;
			case 3:
				return 2116.502f, -454.8858f, 45.8086f;
			case 4:
				return 2185.5f, -782.3f, 45.5f;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2401.56f, -729.45f, 44.6f;
			case 1:
				return 2358.67f, -625.73f, 45f;
			case 2:
				return 2271.2f, -849.1f, 45.97f;
			case 3:
				return 2116.502f, -454.8858f, 45.8086f;
			case 4:
				return 2185.5f, -782.3f, 45.5f;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2399.88f, -716.16f, 49.11f;
			case 1:
				return 2350.12f, -614.46f, 47.12f;
			case 2:
				return 2271.2f, -849.1f, 45.97f;
			case 3:
				return 2116.502f, -454.8858f, 45.8086f;
			case 4:
				return 2185.5f, -782.3f, 45.5f;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2415.106f, -724.8667f, 46.7419f;
			case 1:
				return 2362.74f, -624.49f, 47.96f;
			case 2:
				return 2241.4f, -861.16f, 48.34f;
			case 3:
				return 2116.502f, -454.8858f, 45.8086f;
			case 4:
				return 2185.5f, -782.3f, 45.5f;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_206()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2403.69f, -711.24f, 46.42f;
			case 1:
				return 2353.54f, -609.71f, 45.82f;
			case 2:
				return 2249.5f, -844.4f, 46.94f;
			case 3:
				return 2137.343f, -463.3394f, 45.4566f;
			case 4:
				return 2184.1f, -788.4f, 45.5f;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2415.52f, -729.59f, 45.92f;
			case 1:
				return 2351.66f, -622.71f, 45.55f;
			case 2:
				return 2249.5f, -844.4f, 46.94f;
			case 3:
				return 2137.343f, -463.3394f, 45.4566f;
			case 4:
				return 2184.1f, -788.4f, 45.5f;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2402f, -722.83f, 46.05f;
			case 1:
				return 2346.61f, -622.28f, 45.37f;
			case 2:
				return 2249.5f, -844.4f, 46.94f;
			case 3:
				return 2137.343f, -463.3394f, 45.4566f;
			case 4:
				return 2184.1f, -788.4f, 45.5f;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2415.75f, -729.46f, 46.78f;
			case 1:
				return 2371.01f, -615.77f, 48.37f;
			case 2:
				return 2232.35f, -861.45f, 45.25f;
			case 3:
				return 2137.343f, -463.3394f, 45.4566f;
			case 4:
				return 2184.1f, -788.4f, 45.5f;
		}
	}
	return 0f, 0f, 0f;
}

var func_207()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return uLocal_384[2];
			case 1:
				return uLocal_384[2];
			case 2:
				return uLocal_384[0];
			case 3:
				return uLocal_384[0];
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return uLocal_384[1];
			case 1:
				return uLocal_384[1];
			case 2:
				return uLocal_384[2];
			case 3:
				return uLocal_384[0];
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return uLocal_384[2];
			case 1:
				return uLocal_384[2];
			case 2:
				return uLocal_384[0];
			case 3:
				return uLocal_384[0];
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return uLocal_384[2];
			case 1:
				return uLocal_384[3];
			case 2:
				return uLocal_384[3];
			case 3:
				return uLocal_384[0];
		}
	}
	return uLocal_384[3];
}

char* func_208()
{
	switch (iLocal_533)
	{
		case 0:
			return "PBL_ACTION_F";
		case 2:
			return "PBL_ACTION_B";
		case 1:
			return "PBL_ACTION_B";
		case 3:
			return "PBL_ACTION_L";
		case 4:
			return "PBL_ACTION_R";
	}
	return "PBL_ACTION_F";
}

void func_210()
{
	vector3 vVar0;
	switch (iLocal_538[1])
	{
		case 0:
			func_203(uLocal_384[0], Global_35, 1);
			func_372();
			vVar0 = { func_205() };
			GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_557, vVar0, 1f);
			if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_557))
			{
				TASK::TASK_PLAY_ANIM(uLocal_384[2], Local_338[1 /*2*/], Local_338[1 /*2*/].f_1, 8f, -1.5f, -1, 1, 0f, false, 0, false, 0, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[2], vVar0, Local_209[2 /*32*/].f_9, true, true, true);
				vLocal_760[1 /*3*/] = { func_205() };
				vLocal_767[1 /*3*/] = { func_373() };
				fLocal_774[1] = func_374();
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[2], false);
				PED::SET_PED_USING_ACTION_MODE(uLocal_384[2], true, -1, 0);
				iLocal_538[1] = 2;
			}
			break;
		case 2:
			vLocal_760[1 /*3*/] = { __LIB_1__::func_367(vLocal_760[1 /*3*/], vLocal_767[1 /*3*/], (fLocal_774[1] * BUILTIN::TIMESTEP())) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_384[2], vLocal_760[1 /*3*/], true, false, true);
			if (vLocal_760[1 /*3*/].f_2 <= (vLocal_767[1 /*3*/].f_2 + 0.5f))
			{
				TASK::TASK_PLAY_ANIM(uLocal_384[2], Local_338[3 /*2*/], Local_338[3 /*2*/].f_1, 8f, -1.5f, -1, 1056900, 0f, false, 1, false, 0, false);
				iLocal_538[1] = 3;
			}
			break;
		case 3:
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_384[2], Local_338[3 /*2*/], Local_338[3 /*2*/].f_1) >= 0.3f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_561);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_561);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_384[2], iLocal_561);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_561);
				__LIB_2__::func_214(uLocal_384[2], Global_35, "SWAMP3_CHARGE_HISS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				iLocal_538[1] = 6;
			}
			break;
	}
}

void func_211()
{
	vector3 vVar0;
	switch (iLocal_538[0])
	{
		case 0:
			func_203(uLocal_384[0], Global_35, 1);
			func_376();
			vVar0 = { func_206() };
			GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_558, vVar0, 1f);
			if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_558))
			{
				TASK::TASK_PLAY_ANIM(uLocal_384[3], Local_338[1 /*2*/], Local_338[1 /*2*/].f_1, 8f, -1.5f, -1, 1, 0f, false, 0, false, 0, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_384[3], vVar0, Local_209[3 /*32*/].f_9, true, true, true);
				vLocal_760[0 /*3*/] = { func_206() };
				vLocal_767[0 /*3*/] = { func_377() };
				fLocal_774[0] = func_374();
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_384[3], false);
				PED::SET_PED_USING_ACTION_MODE(uLocal_384[3], true, -1, 0);
				iLocal_538[0] = 2;
			}
			break;
		case 2:
			vLocal_760[0 /*3*/] = { __LIB_1__::func_367(vLocal_760[0 /*3*/], vLocal_767[0 /*3*/], (fLocal_774[0] * BUILTIN::TIMESTEP())) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_384[3], vLocal_760[0 /*3*/], true, false, true);
			if (vLocal_760[0 /*3*/].f_2 <= (vLocal_767[0 /*3*/].f_2 + 0.5f))
			{
				TASK::TASK_PLAY_ANIM(uLocal_384[3], Local_338[2 /*2*/], Local_338[2 /*2*/].f_1, 8f, -1.5f, -1, 1056900, 0f, false, 1, false, 0, false);
				iLocal_538[0] = 3;
			}
			break;
		case 3:
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_384[3], Local_338[2 /*2*/], Local_338[2 /*2*/].f_1) >= 0.3f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_562);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_562);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_562);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_384[3], iLocal_562);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_562);
				__LIB_2__::func_214(uLocal_384[3], Global_35, "SWAMP4_CHARGE_HISS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				iLocal_538[0] = 6;
			}
			break;
	}
}

void func_217()
{
	switch (iLocal_541[0])
	{
		case 0:
			if (__LIB_0__::func_665(uLocal_384[1], Global_35, 1, 1) <= 6f)
			{
				iLocal_541[0] = 1;
			}
			break;
		case 1:
			TASK::TASK_MELEE(uLocal_384[1], Global_35, 0, 1, 0, 3f, 0, -1082130432 /* Float: -1f */);
			iLocal_541[0] = 2;
			break;
		case 2:
			break;
	}
	if (iLocal_532 < 3)
	{
		switch (iLocal_541[2])
		{
			case 0:
				if (__LIB_0__::func_665(uLocal_384[3], Global_35, 1, 1) <= 8f)
				{
					iLocal_541[2] = 1;
				}
				break;
			case 1:
				TASK::TASK_MELEE(uLocal_384[3], Global_35, 0, 1, 0, 3f, 0, -1082130432 /* Float: -1f */);
				__LIB_2__::func_214(uLocal_384[3], Global_35, "SWAMP4_MELEE_TAKE_THAT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				iLocal_541[2] = 2;
				break;
			case 2:
				break;
		}
		switch (iLocal_541[1])
		{
			case 0:
				if (__LIB_0__::func_665(uLocal_384[2], Global_35, 1, 1) <= 7f)
				{
					iLocal_541[1] = 1;
				}
				break;
			case 1:
				TASK::TASK_MELEE(uLocal_384[2], Global_35, 0, 1, 1, 3f, 0, -1082130432 /* Float: -1f */);
				__LIB_2__::func_214(uLocal_384[2], Global_35, "SWAMP3_MELEE_TAKE_THAT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
				iLocal_541[1] = 2;
				break;
			case 2:
				break;
		}
	}
}

void func_218()
{
	int iVar0;
	if (iLocal_532 >= 3)
	{
		switch (iLocal_545)
		{
			case 0:
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (((__LIB_2__::func_0(uLocal_384[iVar0], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) || ENTITY::IS_ENTITY_ON_SCREEN(uLocal_384[iVar0])) && uLocal_384[iVar0] != uLocal_384[0]) && func_381() == uLocal_384[iVar0])
					{
						__LIB_1__::func_148(&uLocal_588);
						PED::_0xB8DE69D9473B7593(uLocal_384[iVar0], 12);
						iLocal_545 = 1;
					}
					else
					{
						iVar0++;
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_264(&uLocal_588) >= 8f)
				{
					PED::_0xB8DE69D9473B7593(uLocal_384[1], 12);
					PED::_0xB8DE69D9473B7593(uLocal_384[2], 12);
					PED::_0xB8DE69D9473B7593(uLocal_384[3], 12);
					__LIB_0__::func_37(&uLocal_588);
					iLocal_545 = 2;
				}
				break;
			case 2:
				break;
		}
	}
	else
	{
		switch (iLocal_545)
		{
			case 0:
				PED::_0xB8DE69D9473B7593(uLocal_384[0], 12);
				__LIB_1__::func_148(&uLocal_588);
				iLocal_545 = 1;
				break;
			case 1:
				if (__LIB_0__::func_264(&uLocal_588) >= 4f)
				{
					PED::_0xB8DE69D9473B7593(uLocal_384[1], 12);
					PED::_0xB8DE69D9473B7593(uLocal_384[2], 12);
					PED::_0xB8DE69D9473B7593(uLocal_384[3], 12);
					__LIB_0__::func_37(&uLocal_588);
					iLocal_545 = 2;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_219()
{
	if (iLocal_550 == 0)
	{
		if ((ENTITY::IS_ENTITY_DEAD(uLocal_384[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_384[1])) || ENTITY::IS_ENTITY_DEAD(uLocal_384[0]))
		{
			__LIB_2__::func_214(uLocal_384[3], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
			iLocal_550 = 1;
		}
	}
}

bool func_222()
{
	if (((ENTITY::IS_ENTITY_DEAD(uLocal_384[0]) && ENTITY::IS_ENTITY_DEAD(uLocal_384[1])) && ENTITY::IS_ENTITY_DEAD(uLocal_384[2])) && ENTITY::IS_ENTITY_DEAD(uLocal_384[3]))
	{
		return true;
	}
	return false;
}

int func_344(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_344(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_350()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_380, true) >= 30f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_380, true) < 140f)
	{
		__LIB_3__::func_277(1891783641, vLocal_380, 1);
	}
}

bool func_358(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
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
			if (func_489(iParam0, iParam2))
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
				if (func_493(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
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
				if (func_498(iParam0, iParam2))
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
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
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
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
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

bool func_359()
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_384[0], "script_re@voice", "cower_f_swamp", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_384[0], "script_re@voice", "cower_l_swamp", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_384[0], "script_re@voice", "cower_lb_swamp", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_384[0], "script_re@voice", "cower_r_swamp", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_384[0], "script_re@voice", "cower_rb_swamp", 1))
	{
		return true;
	}
	return false;
}

char* func_360()
{
	switch (iLocal_533)
	{
		case 0:
			return "PBL_COWER_F";
		case 2:
			return "PBL_COWER_RB";
		case 1:
			return "PBL_COWER_LB";
		case 3:
			return "PBL_COWER_L";
		case 4:
			return "PBL_COWER_R";
	}
	return "PBL_COWER_F";
}

void func_362()
{
	func_203(uLocal_384[0], Global_35, 0);
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				vLocal_516[0 /*3*/] = { 2403.9f, -712.28f, 40.52f };
				fLocal_526[0] = 1.8f;
				vLocal_516[1 /*3*/] = { 2411.22f, -708.32f, 40.52f };
				fLocal_526[1] = 1.4f;
				vLocal_516[2 /*3*/] = { 2420.62f, -708.7f, 41.11f };
				fLocal_526[2] = 1.2f;
				break;
			case 1:
				vLocal_516[0 /*3*/] = { 2366.56f, -611.21f, 40.52f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2353.88f, -610.15f, 40.52f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2360.92f, -606.35f, 40.6f };
				fLocal_526[2] = 2f;
				break;
			case 2:
				vLocal_516[0 /*3*/] = { 2249.7f, -843.55f, 40.92f };
				fLocal_526[0] = 2f;
				vLocal_516[1 /*3*/] = { 2270.32f, -849.56f, 40.76f };
				fLocal_526[1] = 1.6f;
				vLocal_516[2 /*3*/] = { 2263.56f, -883.6f, 40.67f };
				fLocal_526[2] = 1.85f;
				break;
			case 3:
				vLocal_516[0 /*3*/] = { 2125.371f, -473.4287f, 40.8777f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2116.661f, -456.001f, 40.7906f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2136.879f, -463.4711f, 40.4539f };
				fLocal_526[2] = 2f;
				break;
			case 4:
				vLocal_516[0 /*3*/] = { 2184.8f, -781.6f, 41.1f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2182.6f, -759.3f, 41.1f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2199.9f, -800.1f, 41.7f };
				fLocal_526[2] = 2f;
				break;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				vLocal_516[0 /*3*/] = { 2414.81f, -728.59f, 41.04f };
				fLocal_526[0] = 1.9f;
				vLocal_516[1 /*3*/] = { 2406.55f, -731.64f, 40.71f };
				fLocal_526[1] = 1.35f;
				vLocal_516[2 /*3*/] = { 2402.2f, -728.89f, 40.85f };
				fLocal_526[2] = 1.5f;
				break;
			case 1:
				vLocal_516[0 /*3*/] = { 2351.23f, -630.63f, 40.5f };
				fLocal_526[0] = 2.5f;
				vLocal_516[1 /*3*/] = { 2358.12f, -624.98f, 40.87f };
				fLocal_526[1] = 1.55f;
				vLocal_516[2 /*3*/] = { 2347.31f, -621.8f, 40.66f };
				fLocal_526[2] = 1.8f;
				break;
			case 2:
				vLocal_516[0 /*3*/] = { 2249.7f, -843.55f, 40.92f };
				fLocal_526[0] = 2f;
				vLocal_516[1 /*3*/] = { 2270.32f, -849.56f, 40.76f };
				fLocal_526[1] = 1.6f;
				vLocal_516[2 /*3*/] = { 2263.56f, -883.6f, 40.67f };
				fLocal_526[2] = 1.85f;
				break;
			case 3:
				vLocal_516[0 /*3*/] = { 2125.371f, -473.4287f, 40.8777f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2116.661f, -456.001f, 40.7906f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2136.879f, -463.4711f, 40.4539f };
				fLocal_526[2] = 2f;
				break;
			case 4:
				vLocal_516[0 /*3*/] = { 2184.8f, -781.6f, 41.1f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2182.6f, -759.3f, 41.1f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2199.9f, -800.1f, 41.7f };
				fLocal_526[2] = 2f;
				break;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				vLocal_516[0 /*3*/] = { 2403.98f, -712.35f, 40.52f };
				fLocal_526[0] = 1.75f;
				vLocal_516[1 /*3*/] = { 2400.61f, -716.25f, 40.66f };
				fLocal_526[1] = 1.45f;
				vLocal_516[2 /*3*/] = { 2402.99f, -722.23f, 40.65f };
				fLocal_526[2] = 1.75f;
				break;
			case 1:
				vLocal_516[0 /*3*/] = { 2353.89f, -610.29f, 40.53f };
				fLocal_526[0] = 1.75f;
				vLocal_516[1 /*3*/] = { 2347.41f, -622.11f, 40.66f };
				fLocal_526[1] = 1.85f;
				vLocal_516[2 /*3*/] = { 2350.68f, -614.66f, 40.53f };
				fLocal_526[2] = 1.8f;
				break;
			case 2:
				vLocal_516[0 /*3*/] = { 2249.7f, -843.55f, 40.92f };
				fLocal_526[0] = 2f;
				vLocal_516[1 /*3*/] = { 2270.32f, -849.56f, 40.76f };
				fLocal_526[1] = 1.6f;
				vLocal_516[2 /*3*/] = { 2263.56f, -883.6f, 40.67f };
				fLocal_526[2] = 1.85f;
				break;
			case 3:
				vLocal_516[0 /*3*/] = { 2125.371f, -473.4287f, 40.8777f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2116.661f, -456.001f, 40.7906f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2136.879f, -463.4711f, 40.4539f };
				fLocal_526[2] = 2f;
				break;
			case 4:
				vLocal_516[0 /*3*/] = { 2184.8f, -781.6f, 41.1f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2182.6f, -759.3f, 41.1f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2199.9f, -800.1f, 41.7f };
				fLocal_526[2] = 2f;
				break;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				vLocal_516[0 /*3*/] = { 2414.22f, -719.63f, 40.56f };
				fLocal_526[0] = 1.75f;
				vLocal_516[1 /*3*/] = { 2414.15f, -724.6f, 40.89f };
				fLocal_526[1] = 1.4f;
				vLocal_516[2 /*3*/] = { 2414.81f, -728.59f, 41.04f };
				fLocal_526[2] = 1.9f;
				break;
			case 1:
				vLocal_516[0 /*3*/] = { 2362.02f, -623.51f, 40.84f };
				fLocal_526[0] = 1.8f;
				vLocal_516[1 /*3*/] = { 2358.23f, -624.9f, 40.86f };
				fLocal_526[1] = 1.45f;
				vLocal_516[2 /*3*/] = { 2369.9f, -616f, 40.52f };
				fLocal_526[2] = 1.8f;
				break;
			case 2:
				vLocal_516[0 /*3*/] = { 2241.12f, -862.33f, 40.55f };
				fLocal_526[0] = 2f;
				vLocal_516[1 /*3*/] = { 2232.74f, -862.3f, 40.53f };
				fLocal_526[1] = 1.4f;
				vLocal_516[2 /*3*/] = { 2254.81f, -862.15f, 40.91f };
				fLocal_526[2] = 2.25f;
				break;
			case 3:
				vLocal_516[0 /*3*/] = { 2125.371f, -473.4287f, 40.8777f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2116.661f, -456.001f, 40.7906f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2136.879f, -463.4711f, 40.4539f };
				fLocal_526[2] = 2f;
				break;
			case 4:
				vLocal_516[0 /*3*/] = { 2184.8f, -781.6f, 41.1f };
				fLocal_526[0] = 2.85f;
				vLocal_516[1 /*3*/] = { 2182.6f, -759.3f, 41.1f };
				fLocal_526[1] = 1.95f;
				vLocal_516[2 /*3*/] = { 2199.9f, -800.1f, 41.7f };
				fLocal_526[2] = 2f;
				break;
		}
	}
}

Vector3 func_363(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vVar0 = { __LIB_0__::func_173(vParam3 - vParam0) };
	return vParam0 - vVar0 * Vector(fParam6, fParam6, fParam6);
}

void func_372()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[2 /*32*/].f_9 = 147.52f;
				break;
			case 1:
				Local_209[2 /*32*/].f_9 = 141.9f;
				break;
			case 2:
				Local_209[2 /*32*/].f_9 = 120f;
				break;
			case 3:
				Local_209[2 /*32*/].f_9 = 180f;
				break;
			case 4:
				Local_209[2 /*32*/].f_9 = 42f;
				break;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[2 /*32*/].f_9 = -31.22f;
				break;
			case 1:
				Local_209[2 /*32*/].f_9 = 26.19f;
				break;
			case 2:
				Local_209[2 /*32*/].f_9 = 120f;
				break;
			case 3:
				Local_209[2 /*32*/].f_9 = 180f;
				break;
			case 4:
				Local_209[2 /*32*/].f_9 = 42f;
				break;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[2 /*32*/].f_9 = -114.02f;
				break;
			case 1:
				Local_209[2 /*32*/].f_9 = -92.29f;
				break;
			case 2:
				Local_209[2 /*32*/].f_9 = 120f;
				break;
			case 3:
				Local_209[2 /*32*/].f_9 = 180f;
				break;
			case 4:
				Local_209[2 /*32*/].f_9 = 42f;
				break;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[2 /*32*/].f_9 = 85.28f;
				break;
			case 1:
				Local_209[2 /*32*/].f_9 = 26.8f;
				break;
			case 2:
				Local_209[2 /*32*/].f_9 = 175.82f;
				break;
			case 3:
				Local_209[2 /*32*/].f_9 = 180f;
				break;
			case 4:
				Local_209[2 /*32*/].f_9 = 42f;
				break;
		}
	}
}

Vector3 func_373()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2411.57f, -707.66f, 42.3f;
			case 1:
				return 2361.89f, -605.56f, 42.3f;
			case 2:
				return 2271.2f, -849.1f, 42.8f;
			case 3:
				return 2116.502f, -454.8858f, 42.2f;
			case 4:
				return 2185.5f, -782.3f, 42.5f;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2401.56f, -729.45f, 43f;
			case 1:
				return 2358.53f, -625.74f, 42.8f;
			case 2:
				return 2271.2f, -849.1f, 42.8f;
			case 3:
				return 2116.502f, -454.8858f, 42.2f;
			case 4:
				return 2185.5f, -782.3f, 42.5f;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2399.88f, -716.16f, 42.8f;
			case 1:
				return 2350.12f, -614.46f, 42.8f;
			case 2:
				return 2271.2f, -849.1f, 42.8f;
			case 3:
				return 2116.502f, -454.8858f, 42.2f;
			case 4:
				return 2185.5f, -782.3f, 42.5f;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2415.106f, -724.8667f, 42.8f;
			case 1:
				return 2362.7f, -624.47f, 42.9f;
			case 2:
				return 2241.42f, -861.27f, 43.1f;
			case 3:
				return 2116.502f, -454.8858f, 42.2f;
			case 4:
				return 2185.5f, -782.3f, 42.5f;
		}
	}
	return 0f, 0f, 0f;
}

float func_374()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 1f;
			case 1:
				return 1f;
			case 2:
				return 1f;
			case 3:
				return 1f;
			case 4:
				return 1f;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 0.8f;
			case 1:
				return 0.8f;
			case 2:
				return 0.9f;
			case 3:
				return 1f;
			case 4:
				return 1f;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 1f;
			case 1:
				return 0.8f;
			case 2:
				return 1f;
			case 3:
				return 1f;
			case 4:
				return 1f;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 0.9f;
			case 1:
				return 1f;
			case 2:
				return 0.8f;
			case 3:
				return 1f;
			case 4:
				return 1f;
		}
	}
	return 0.5f;
}

void func_376()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[3 /*32*/].f_9 = -161.56f;
				break;
			case 1:
				Local_209[3 /*32*/].f_9 = -155.79f;
				break;
			case 2:
				Local_209[3 /*32*/].f_9 = 122.48f;
				break;
			case 3:
				Local_209[3 /*32*/].f_9 = 95f;
				break;
			case 4:
				Local_209[3 /*32*/].f_9 = 42f;
				break;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[3 /*32*/].f_9 = 43.73f;
				break;
			case 1:
				Local_209[3 /*32*/].f_9 = -41.57f;
				break;
			case 2:
				Local_209[3 /*32*/].f_9 = 122.48f;
				break;
			case 3:
				Local_209[3 /*32*/].f_9 = 95f;
				break;
			case 4:
				Local_209[3 /*32*/].f_9 = 42f;
				break;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[3 /*32*/].f_9 = -75.79f;
				break;
			case 1:
				Local_209[3 /*32*/].f_9 = -69.65f;
				break;
			case 2:
				Local_209[3 /*32*/].f_9 = 122.48f;
				break;
			case 3:
				Local_209[3 /*32*/].f_9 = 95f;
				break;
			case 4:
				Local_209[3 /*32*/].f_9 = 42f;
				break;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				Local_209[3 /*32*/].f_9 = 52.76f;
				break;
			case 1:
				Local_209[3 /*32*/].f_9 = 98.65f;
				break;
			case 2:
				Local_209[3 /*32*/].f_9 = -149.4f;
				break;
			case 3:
				Local_209[3 /*32*/].f_9 = 95f;
				break;
			case 4:
				Local_209[3 /*32*/].f_9 = 42f;
				break;
		}
	}
}

Vector3 func_377()
{
	if (iLocal_533 == 0)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2403.62f, -711.24f, 42.3f;
			case 1:
				return 2353.41f, -609.38f, 42.5f;
			case 2:
				return 2249.5f, -844.4f, 43.2f;
			case 3:
				return 2137.343f, -463.3394f, 42.2f;
			case 4:
				return 2184.1f, -788.4f, 43f;
		}
	}
	else if (iLocal_533 == 1 || iLocal_533 == 2)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2415.72f, -729.65f, 43f;
			case 1:
				return 2351.66f, -622.71f, 42.8f;
			case 2:
				return 2249.5f, -844.4f, 43.2f;
			case 3:
				return 2137.343f, -463.3394f, 42.2f;
			case 4:
				return 2184.1f, -788.4f, 43f;
		}
	}
	else if (iLocal_533 == 3)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2402.29f, -722.56f, 42.3f;
			case 1:
				return 2346.34f, -622.29f, 42.7f;
			case 2:
				return 2249.5f, -844.4f, 43.2f;
			case 3:
				return 2137.343f, -463.3394f, 42.2f;
			case 4:
				return 2184.1f, -788.4f, 43f;
		}
	}
	else if (iLocal_533 == 4)
	{
		switch (Local_15.f_51.f_4)
		{
			case 0:
				return 2415.73f, -729.48f, 44.1f;
			case 1:
				return 2371.01f, -615.77f, 42.8f;
			case 2:
				return 2232.58f, -861.75f, 42.61f;
			case 3:
				return 2137.343f, -463.3394f, 42.2f;
			case 4:
				return 2184.1f, -788.4f, 43f;
		}
	}
	return 0f, 0f, 0f;
}

int func_381()
{
	if (__LIB_2__::func_118(uLocal_384[1], 1, 1) < __LIB_2__::func_118(uLocal_384[2], 1, 1) && __LIB_2__::func_118(uLocal_384[1], 1, 1) < __LIB_2__::func_118(uLocal_384[3], 1, 1))
	{
		return uLocal_384[1];
	}
	if (__LIB_2__::func_118(uLocal_384[2], 1, 1) < __LIB_2__::func_118(uLocal_384[1], 1, 1) && __LIB_2__::func_118(uLocal_384[2], 1, 1) < __LIB_2__::func_118(uLocal_384[3], 1, 1))
	{
		return uLocal_384[2];
	}
	if (__LIB_2__::func_118(uLocal_384[3], 1, 1) < __LIB_2__::func_118(uLocal_384[1], 1, 1) && __LIB_2__::func_118(uLocal_384[3], 1, 1) < __LIB_2__::func_118(uLocal_384[2], 1, 1))
	{
		return uLocal_384[3];
	}
	return uLocal_384[1];
}

bool func_489(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_615(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_616(iParam0, iVar2) <= __LIB_2__::func_88(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_493(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_615(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > __LIB_2__::func_92(iParam1)
		{
			fVar3 = __LIB_2__::func_90(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_498(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_615(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = __LIB_1__::func_998(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (__LIB_1__::func_356(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (__LIB_2__::func_125(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_126(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_127(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_615(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = __LIB_1__::func_363(iParam2);
	}
	else
	{
		iVar1 = __LIB_1__::func_362(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = __LIB_1__::func_363(iParam0);
	}
	else
	{
		iVar0 = __LIB_1__::func_362(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			if (iVar2 == iVar3)
			{
				return true;
			}
			return false;
		}
float func_616(int iParam0, int iParam1)
{
	return __LIB_0__::func_665(iParam0, iParam1, 1, 1);
}

