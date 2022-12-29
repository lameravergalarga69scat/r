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
	struct<32> Local_209[1];
	struct<2> Local_242[10];
	struct<5> Local_263 = { 0, 0, 0, 0, 0 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 10;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
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
	char* sLocal_352[26] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_379[1] = { 0 };
	var uLocal_381[1] = { 0 };
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	vector3 vLocal_385 = { 0f, 0f, 0f };
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = -1;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 2;
	var uLocal_397 = 1;
	var uLocal_398 = 1;
	var uLocal_399 = 1;
	var uLocal_400 = 0;
	var uLocal_401 = 1;
	var uLocal_402 = 2;
	var uLocal_403 = 2;
	var uLocal_404 = 3;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 3;
	var uLocal_408 = 1;
	var uLocal_409 = 3;
	var uLocal_410 = 3;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	int iLocal_413 = 0;
	float fLocal_414 = 0f;
	var uLocal_415 = 0;
	int iLocal_416 = 0;
	var uLocal_417 = -1;
	var uLocal_418 = 0;
	var uLocal_419 = -1;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = -1;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 1073741824;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 1;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	struct<17> Local_437[3];
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492[3] = { 0, 0, 0 };
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
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
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	bool bLocal_539 = false;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	bool bLocal_554 = false;
	bool bLocal_555 = false;
	bool bLocal_556 = false;
	bool bLocal_557 = false;
	bool bLocal_558 = false;
	bool bLocal_559 = false;
	char* sLocal_560 = NULL;
	char* sLocal_561 = NULL;
	char* sLocal_562 = NULL;
	char* sLocal_563 = NULL;
	char* sLocal_564 = NULL;
	char* sLocal_565 = NULL;
	char* sLocal_566 = NULL;
	int iLocal_567 = 0;
	float fLocal_568 = 0f;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	float fLocal_571 = 0f;
	float fLocal_572 = 0f;
	float fLocal_573 = 0f;
	float fLocal_574 = 0f;
	float fLocal_575 = 0f;
	var uLocal_576[5] = { 0, 0, 0, 0, 0 };
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 1065353216;
	var uLocal_587 = 1065353216;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 1065353216;
	var uLocal_592 = 1065353216;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 1065353216;
	var uLocal_597 = 1065353216;
	var uLocal_598 = 0;
	var uLocal_599 = 1040187392;
	var uLocal_600 = 1040187392;
	var uLocal_601 = -1;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = -1082130432;
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
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622[3] = { 0, 0, 0 };
	var uLocal_626[3] = { 0, 0, 0 };
	vector3 vLocal_630[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_640[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_650[3] = { 0, 0, 0 };
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 1176256512;
	int iLocal_657 = 0;
	float fLocal_658 = 0f;
	float fLocal_659 = 0f;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	int iLocal_663 = 0;
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
	iLocal_490 = 3;
	iLocal_502 = 1;
	bLocal_559 = true;
	sLocal_564 = "PB_MTH_ENTER_N";
	fLocal_570 = 100f;
	fLocal_571 = 100f;
	fLocal_572 = 100f;
	fLocal_574 = 15f;
	fLocal_575 = 60f;
	iLocal_620 = __LIB_2__::func_340(3, 0, 0);
	Local_15.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_15.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4();
	}
	Local_15.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_15, 1);
	while (true)
	{
		switch (iLocal_502)
		{
			case 1:
				if (__LIB_3__::func_669(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_8();
					iLocal_502 = 0;
				}
				else if (Local_15.f_160)
				{
					func_4();
				}
				break;
			case 0:
				if (func_9())
				{
					iLocal_502 = 3;
				}
				break;
			case 3:
				if (func_10())
				{
					func_11();
					iLocal_502 = 4;
				}
				break;
			case 4:
				if (!__LIB_3__::func_466(&Local_15, &uLocal_379, iLocal_14, 0, 1, 0, 1, 0))
				{
					func_4();
				}
				func_13();
				if (func_14())
				{
					Local_15.f_50 = 1;
					func_4();
				}
				if (__LIB_3__::func_431(&Local_15, &uLocal_379, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Local_15.f_50 = 1;
					func_4();
				}
				break;
		}
		BUILTIN::WAIT(Local_15.f_158);
	}
}

void func_4()
{
	__LIB_3__::func_493(&Local_15, &uLocal_379, &uLocal_381, iLocal_14, -1, 0, 0, 1, 0, 1);
	__LIB_3__::func_524(&iLocal_499);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	if (PED::_0x91A5F9CBEBB9D936(iLocal_413))
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_413, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
	{
		OBJECT::DELETE_OBJECT(&iLocal_383);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_1__::func_727(uLocal_379[0], 1);
	__LIB_2__::func_593(&iLocal_416, &Local_437);
	if (Local_15.f_48)
	{
		__LIB_2__::func_115(114, 1, 0, 0, 0, 1, 0, 1);
	}
	__LIB_2__::func_161(Local_15.f_51, 5f, 5);
	PED::_0x24C82EF607105FAA(uLocal_379[0], joaat("NONE"));
	__LIB_2__::func_56(uLocal_379[0], 1, 1);
	MAP::DISPLAY_RADAR(true);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8()
{
	if (__LIB_1__::func_985())
	{
		iLocal_14 = 0;
	}
	else
	{
		iLocal_14 = 1;
	}
}

bool func_9()
{
	switch (iLocal_504)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_15))
			{
				func_32();
				func_33();
				func_34();
				func_35(&Local_437);
				iLocal_504 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_315(&uLocal_271))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_209))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_10()
{
	switch (iLocal_503)
	{
		case 0:
			if (__LIB_3__::func_479(Local_15.f_51, Local_15.f_51.f_3, &Local_209, &uLocal_379, 1, 0, -1, 1))
			{
				iLocal_503 = 1;
			}
			break;
		case 1:
			func_39();
			func_40();
			iLocal_503 = 6;
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_379[0]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_209[0 /*32*/].f_1);
			}
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_379[0], "Default_Curious"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_11()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { (Local_15.f_51 - 5f), (Local_15.f_51.f_1 - 5f), (Local_15.f_51.f_2 - 5f) };
	vVar3 = { (Local_15.f_51 + 5f), (Local_15.f_51.f_1 + 5f), (Local_15.f_51.f_2 + 5f) };
	vVar6 = { Local_15.f_51, Local_15.f_51.f_1, Local_15.f_51.f_2 };
	fLocal_414 = 10f;
	iLocal_413 = __LIB_5__::func_551(vVar0, vVar3, vVar6, fLocal_414, 0, 0);
}

void func_13()
{
	func_52();
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_379[0], true))
	{
		func_53(9);
	}
	if (!Local_15.f_46)
	{
		if (__LIB_3__::func_453(uLocal_379[0], 0, &(Local_15.f_5), &iLocal_505, 0, 0))
		{
			Local_15.f_46 = 1;
			TASK::_0x2E1D6D87346BB7D2(uLocal_379[0], Global_35, 0, 0);
			if (iLocal_546 == 1)
			{
				if (!func_55())
				{
					vLocal_385 = { ENTITY::GET_ENTITY_COORDS(uLocal_379[0], true, false) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_385, &(vLocal_385.f_2), false);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_263, vLocal_385, ENTITY::GET_ENTITY_ROTATION(uLocal_379[0], 2), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_263);
					func_56(uLocal_379[0], Global_35);
					func_57();
				}
				else
				{
					func_56(uLocal_379[0], Global_35);
					func_57();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_379[0]))
			{
				if (bLocal_556)
				{
					__LIB_3__::func_465(3, 0, 0, 0, uLocal_379[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_3__::func_465(2, 0, 0, 0, uLocal_379[0], 0, 1065353216 /* Float: 1f */, 0);
				}
			}
			fLocal_568 = 0f;
			fLocal_569 = 0f;
			PED::_0x58F7DB5BD8FA2288(uLocal_379[0]);
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_379[0]);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
			func_53(8);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_379[0]) && bLocal_556)
	{
		if (!bLocal_557)
		{
			__LIB_3__::func_465(4, 0, 0, "Cruel Killing", uLocal_379[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_557 = true;
		}
	}
	if (__LIB_0__::func_27(iLocal_384, 2))
	{
		Local_15.f_45 = 1;
	}
	else
	{
		Local_15.f_45 = 0;
	}
	if (bLocal_539 && !__LIB_2__::func_136(Global_35, 0))
	{
		if (!bLocal_556)
		{
			__LIB_3__::func_465(12, 0, 0, "Offered Help", uLocal_379[0], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_3__::func_459(uLocal_379[0], 0);
			bLocal_556 = true;
		}
	}
	func_55();
}

bool func_14()
{
	switch (iLocal_501)
	{
		case 0:
			func_62();
			break;
		case 1:
			func_63();
			break;
		case 2:
			func_64();
			break;
		case 3:
			func_65();
			break;
		case 4:
			func_66();
			break;
		case 5:
			func_67();
			break;
		case 6:
			func_68();
			break;
		case 7:
			func_69();
			break;
		case 8:
			func_70();
			break;
		case 9:
			PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 169, false);
			func_71();
			PED::SET_PED_KEEP_TASK(uLocal_379[0], true);
			Local_15.f_50 = 1;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_263);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_263);
			}
			if ((__LIB_2__::func_479(uLocal_379[0], &(Local_15.f_5)) || __LIB_2__::func_262(Global_35, uLocal_379[0], &(Local_15.f_5))) || __LIB_2__::func_263(Global_35, uLocal_379[0], &(Local_15.f_5)))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_379[0], Global_35, 17))
				{
					if (iLocal_547 == 0)
					{
						iLocal_547 = 1;
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 3, 320, -1082130432 /* Float: -1f */, -1, 0);
					}
				}
			}
			if (iLocal_551 == 0)
			{
				switch (iLocal_663)
				{
					case 0:
						if (func_75())
						{
							__LIB_2__::func_303(uLocal_379[0], Global_35, sLocal_352[18], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
							__LIB_1__::func_148(&uLocal_660);
							iLocal_663++;
						}
						break;
					case 1:
						if (func_75() && __LIB_0__::func_265(&uLocal_660) > 4f)
						{
							__LIB_2__::func_303(uLocal_379[0], Global_35, sLocal_352[19], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
							iLocal_551 = 1;
						}
						break;
				}
			}
			if (MAP::DOES_BLIP_EXIST(uLocal_381[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_381[0]));
			}
			if (__LIB_2__::func_118(uLocal_379[0], 1, 1) >= 100f || PED::IS_PED_DEAD_OR_DYING(uLocal_379[0], true))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_32()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			Local_209[0 /*32*/].f_1 = joaat("RE_TOWNWIDOW_FEMALES_01");
			StringCopy(&(Local_209[0 /*32*/].f_23), "TOWN_WIDOW", 64);
			Local_209[0 /*32*/].f_3 = -293772591;
			sLocal_352[0] = "RE_TWW_VAL_V1_GEN_CALLOVER";
			sLocal_352[1] = "RE_TWW_VAL_V1_GEN_WIDOW_L1";
			sLocal_352[2] = "RE_TWW_VAL_V1_GEN_WIDOW_L2";
			sLocal_352[3] = "RE_TWW_VAL_V1_GEN_WIDOW_L3";
			sLocal_352[4] = "RE_TWW_VAL_V1_GEN_NEARBY_L2";
			sLocal_352[5] = "RE_TWW_VAL_V1_GEN_CRY";
			sLocal_352[6] = "RE_TWW_VAL_V1_GEN_NEG_RESPONSE";
			sLocal_352[7] = "RE_TWW_VAL_V1_GEN_WALK_OFF";
			sLocal_352[8] = "RE_TWW_VAL_V1_GEN_AGGRO";
			sLocal_352[9] = "RE_TWW_VAL_V1_GEN_AGGRO_B";
			sLocal_352[10] = "RE_TWW_VAL_V1_GEN_AGGRO_C";
			sLocal_352[11] = "RE_TWW_VAL_V1_GEN_TOO_FAR";
			sLocal_352[12] = "RE_TWW_VAL_V1_GEN_PLYR_POS";
			sLocal_352[13] = "RE_TWW_VAL_V1_GEN_PLYR_NEG";
			sLocal_352[14] = "RE_TWW_VAL_V1_GEN_PLYR_OFFER_CASH";
			sLocal_352[15] = "RE_TWW_VAL_V1_GEN_PLYR_NEG_OFFER";
			sLocal_352[16] = "RE_TWW_VAL_V1_GEN_ACCEPT_CASH";
			sLocal_352[17] = "RE_TWW_VAL_V1_GEN_REFUSE_CASH";
			sLocal_352[18] = "RE_TWW_VAL_V1_LEAVE_ME_A";
			sLocal_352[19] = "RE_TWW_VAL_V1_LEAVE_ME_B";
			sLocal_352[20] = "RE_TWW_VAL_V1_GEN_PLAYER_POS_ILO_A";
			sLocal_352[21] = "RE_TWW_VAL_V1_GEN_PLAYER_POS_NEG_A";
			sLocal_352[23] = "RE_TWW_VAL_V1_GEN_CRY_1";
			sLocal_352[24] = "RE_TWW_VAL_V1_GEN_CRY_2";
			sLocal_352[25] = "RE_TWW_VAL_V1_GEN_CRY_3";
			break;
		case 105:
			Local_209[0 /*32*/].f_1 = joaat("RE_TOWNWIDOW_FEMALES_01");
			StringCopy(&(Local_209[0 /*32*/].f_23), "0854_A_F_M_Civ_Poor_Black_AVOID_04", 64);
			Local_209[0 /*32*/].f_3 = 1074159868;
			sLocal_352[0] = "RE_TWW_RHD_V3_CALLOVER";
			sLocal_352[1] = "RE_TWW_RHD_V3_WIDOW_A";
			sLocal_352[2] = "RE_TWW_RHD_V3_WIDOW_B";
			sLocal_352[3] = "RE_TWW_RHD_V3_WIDOW_C";
			sLocal_352[4] = "RE_TWW_RHD_V3_NEARBY";
			sLocal_352[5] = "RE_TWW_RHD_V3_CRY";
			sLocal_352[6] = "RE_TWW_RHD_V3_NEG_RESPONSE";
			sLocal_352[7] = "RE_TWW_RHD_V3_WALK_OFF";
			sLocal_352[8] = "RE_TWW_RHD_V3_AGGRO_A";
			sLocal_352[9] = "RE_TWW_RHD_V3_AGGRO_B";
			sLocal_352[10] = "RE_TWW_RHD_V3_AGGRO_C";
			sLocal_352[11] = "RE_TWW_RHD_V3_TOO_FAR";
			sLocal_352[12] = "RE_TWW_RHD_V3_PLYR_POS";
			sLocal_352[13] = "RE_TWW_RHD_V3_PLYR_NEG";
			sLocal_352[14] = "RE_TWW_RHD_V3_PLYR_OFFER_CASH";
			sLocal_352[15] = "RE_TWW_RHD_V3_GEN_PLYR_NEG_OFFER";
			sLocal_352[16] = "RE_TWW_RHD_V3_ACCEPT_CASH";
			sLocal_352[17] = "RE_TWW_RHD_V3_REFUSE_CASH";
			sLocal_352[18] = "LEAVE_ME";
			sLocal_352[19] = "LEAVE_ME";
			sLocal_352[20] = "RE_TWW_RHD_V3_GEN_PLAYER_POS_ILO_A";
			sLocal_352[21] = "RE_TWW_RHD_V3_GEN_PLAYER_POS_NEG_A";
			sLocal_352[22] = "STORM_OFF";
			sLocal_352[23] = "RE_TWW_RHD_V3_CRY_LOOP";
			sLocal_352[24] = "RE_TWW_RHD_V3_CRY_LOOP";
			sLocal_352[25] = "RE_TWW_RHD_V3_CRY_LOOP";
			break;
		case 78:
			Local_209[0 /*32*/].f_1 = joaat("RE_TOWNWIDOW_FEMALES_01");
			StringCopy(&(Local_209[0 /*32*/].f_23), "0847_A_F_M_Civ_Black_AVOID_02", 64);
			Local_209[0 /*32*/].f_3 = 254852080;
			sLocal_352[0] = "RE_TWW_ASB_V2_CALLOVER";
			sLocal_352[1] = "RE_TWW_ASB_V2_WIDOW_A";
			sLocal_352[2] = "RE_TWW_ASB_V2_WIDOW_B";
			sLocal_352[3] = "RE_TWW_ASB_V2_WIDOW_C";
			sLocal_352[4] = "RE_TWW_ASB_V2_NEARBY";
			sLocal_352[5] = "RE_TWW_ASB_V2_CRY";
			sLocal_352[6] = "RE_TWW_ASB_V2_NEG_RESPONSE";
			sLocal_352[7] = "RE_TWW_ASB_V2_WALK_OFF";
			sLocal_352[8] = "RE_TWW_ASB_V2_AGGRO_A";
			sLocal_352[9] = "RE_TWW_ASB_V2_AGGRO_B";
			sLocal_352[10] = "RE_TWW_ASB_V2_AGGRO_C";
			sLocal_352[11] = "RE_TWW_ASB_V2_TOO_FAR";
			sLocal_352[12] = "RE_TWW_ASB_V2_PLYR_POS";
			sLocal_352[13] = "RE_TWW_ASB_V2_PLYR_NEG";
			sLocal_352[14] = "RE_TWW_ASB_V2_PLYR_OFFER_CASH";
			sLocal_352[15] = "RE_TWW_ASB_V2_GEN_PLYR_NEG_OFFER";
			sLocal_352[16] = "RE_TWW_ASB_V2_ACCEPT_CASH";
			sLocal_352[17] = "RE_TWW_ASB_V2_REFUSE_CASH";
			sLocal_352[18] = "LEAVE_ME";
			sLocal_352[20] = "RE_TWW_ASB_V2_GEN_PLAYER_POS_ILO_A";
			sLocal_352[21] = "RE_TWW_ASB_V2_GEN_PLAYER_POS_NEG_A";
			sLocal_352[23] = "RE_TWW_ASB_V2_CRY_LOOP";
			sLocal_352[24] = "RE_TWW_ASB_V2_CRY_LOOP";
			sLocal_352[25] = "RE_TWW_ASB_V2_CRY_LOOP";
			break;
	}
	__LIB_3__::func_284(&Local_209);
}

void func_33()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			Local_209[0 /*32*/].f_6 = { -250.01f, 768.66f, 116.55f };
			Local_209[0 /*32*/].f_9 = 100.27f;
			break;
		case 1:
			Local_209[0 /*32*/].f_6 = { -349.09f, 740.88f, 116.43f };
			Local_209[0 /*32*/].f_9 = -66.99f;
			break;
		case 2:
			Local_209[0 /*32*/].f_6 = { -212.04f, 640.67f, 111.98f };
			Local_209[0 /*32*/].f_9 = -132.47f;
			break;
		case 3:
			Local_209[0 /*32*/].f_6 = { 2938.38f, 1320.05f, 43.23f };
			Local_209[0 /*32*/].f_9 = 71.15f;
			break;
		case 4:
			Local_209[0 /*32*/].f_6 = { 2870.76f, 1349.07f, 61.35f };
			Local_209[0 /*32*/].f_9 = 87.31f;
			break;
		case 5:
			Local_209[0 /*32*/].f_6 = { 1286.04f, -1287.2f, 74.98f };
			Local_209[0 /*32*/].f_9 = -28.49f;
			break;
		case 6:
			Local_209[0 /*32*/].f_6 = { 1366.49f, -1374.91f, 77.85f };
			Local_209[0 /*32*/].f_9 = -104.77f;
			break;
	}
}

void func_34()
{
	Local_242[0 /*2*/] = "script_re@town_widow@encounter";
	Local_242[0 /*2*/].f_1 = "callover";
	Local_242[1 /*2*/] = "script_re@town_widow@encounter";
	Local_242[1 /*2*/].f_1 = "confront";
	Local_242[9 /*2*/] = "script_re@town_widow@encounter";
	Local_242[9 /*2*/].f_1 = "to_crowd";
	Local_242[2 /*2*/] = "script_re@town_widow@encounter";
	Local_242[2 /*2*/].f_1 = "ignore";
	Local_242[5 /*2*/] = "script_re@town_widow@encounter";
	Local_242[5 /*2*/].f_1 = "positive";
	Local_242[3 /*2*/] = "script_re@town_widow@encounter";
	Local_242[3 /*2*/].f_1 = "negative";
	Local_242[6 /*2*/] = "script_re@town_widow@encounter";
	Local_242[6 /*2*/].f_1 = "positive_plyr_player";
	Local_242[4 /*2*/] = "script_re@town_widow@encounter";
	Local_242[4 /*2*/].f_1 = "negative_plyr_player";
	Local_242[7 /*2*/] = "script_re@town_widow@encounter";
	Local_242[7 /*2*/].f_1 = "taunt";
	Local_242[8 /*2*/] = "script_re@town_widow@encounter";
	Local_242[8 /*2*/].f_1 = "threat";
	switch (iLocal_14)
	{
		case 0:
			Local_263.f_4 = "scenario@randomevent@town_widow@take_money";
			break;
		case 1:
			Local_263.f_4 = "scenario@randomevent@town_widow@refuse_money";
			break;
	}
	__LIB_3__::func_318(Local_242[0 /*2*/], &uLocal_271);
}

void func_35(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], "RE_INTER_ANTAGONIZE", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_437[2 /*17*/]), "INTERACT_ROB", "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_4__::func_406(&(Local_437[2 /*17*/]), 1);
	__LIB_3__::func_362(&(Local_437[2 /*17*/]), 3f);
	__LIB_2__::func_411(&(Local_437[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_437[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_437[2 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_437[0 /*17*/]), 1);
	__LIB_3__::func_158(&(Local_437[1 /*17*/]), 1);
	__LIB_3__::func_158(&(Local_437[2 /*17*/]), 1);
}

void func_39()
{
	__LIB_3__::func_285(uLocal_379[0], &Local_15, 0);
	PED::_0xAAB050DA48B57978(uLocal_379[0], "Default_Sad", 0, -1, 4);
	__LIB_2__::func_133(uLocal_379[0], &(Local_209[0 /*32*/].f_23), 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_379[0], Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, true, false, true);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_379[0], true, 100f);
	TASK::SET_PED_PATH_AVOID_FIRE(uLocal_379[0], true);
	TASK::_0x42CFD8FD8CC8DC69(uLocal_379[0], 1);
	__LIB_3__::func_567(uLocal_379[0], 1);
	PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 297, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 130, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 317, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 315, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_379[0], true, 20f);
	PED::_0xF1C03A5352243A30(uLocal_379[0]);
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_379[0], "Default_Curious");
	__LIB_4__::func_405(uLocal_379[0], &uLocal_415, 1, 1);
}

void func_40()
{
	__LIB_2__::func_22(&(Local_15.f_5), uLocal_379[0]);
	__LIB_3__::func_230(&(Local_15.f_5), 1);
	__LIB_2__::func_51(&(Local_15.f_5), 1);
	__LIB_2__::func_180(&(Local_15.f_5), 1);
	__LIB_2__::func_715(&(Local_15.f_5), 1);
	__LIB_2__::func_111(&(Local_15.f_5), 1);
	__LIB_2__::func_110(&(Local_15.f_5), 1);
	__LIB_2__::func_105(&(Local_15.f_5), 1);
	__LIB_2__::func_50(&(Local_15.f_5), 1);
	__LIB_2__::func_182(&(Local_15.f_5), 1);
	__LIB_2__::func_595(&(Local_15.f_5), 30f);
}

void func_52()
{
	int iVar0;
	iVar0 = -1;
	iVar0 = func_190(&(uLocal_379[0]), &iLocal_416, 15f, &Local_437, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_620, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_490)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					__LIB_2__::func_411(&(Local_437[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_437[1 /*17*/]), 0, 0);
					Local_15.f_44 = 1;
					if (__LIB_4__::func_30(uLocal_379[0], 90f, 0))
					{
						TASK::TASK_PLAY_ANIM(Global_35, Local_242[6 /*2*/], Local_242[6 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
						__LIB_2__::func_303(Global_35, uLocal_379[0], sLocal_352[12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_379[0], sLocal_352[12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					sLocal_560 = Local_242[5 /*2*/];
					sLocal_561 = Local_242[5 /*2*/].f_1;
					__LIB_1__::func_148(&uLocal_515);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_379[0]);
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
					bLocal_559 = false;
					func_53(3);
					__LIB_2__::func_360(&(Local_437[0 /*17*/]), "RE_INTER_POS");
					__LIB_2__::func_360(&(Local_437[1 /*17*/]), "RE_INTER_ANTAGONIZE");
					break;
				case 1:
					__LIB_2__::func_411(&(Local_437[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_437[1 /*17*/]), 0, 0);
					Local_15.f_44 = 1;
					sLocal_560 = Local_242[3 /*2*/];
					sLocal_561 = Local_242[3 /*2*/].f_1;
					if (__LIB_4__::func_30(uLocal_379[0], 90f, 0))
					{
						TASK::TASK_PLAY_ANIM(Global_35, Local_242[4 /*2*/], Local_242[4 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
						__LIB_2__::func_303(Global_35, uLocal_379[0], sLocal_352[13], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_379[0], sLocal_352[13], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_515);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_379[0]);
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
					bLocal_559 = true;
					func_53(3);
					__LIB_2__::func_360(&(Local_437[0 /*17*/]), "RE_INTER_POS");
					__LIB_2__::func_360(&(Local_437[1 /*17*/]), "RE_INTER_ANTAGONIZE");
					break;
			}
			break;
		case 1:
			__LIB_3__::func_621(&(Local_437[2 /*17*/]), 1, 0);
			switch (iVar0)
			{
				case 2:
					__LIB_2__::func_451(&iLocal_416, 0);
					iLocal_620 = __LIB_2__::func_340(3, 0, 0);
					func_56(uLocal_379[0], Global_35);
					func_195();
					func_196();
					func_197();
					if (MAP::DOES_BLIP_EXIST(uLocal_381[0]))
					{
						MAP::REMOVE_BLIP(&(uLocal_381[0]));
					}
					__LIB_0__::func_37(&uLocal_509);
					bLocal_539 = true;
					__LIB_2__::func_411(&(Local_437[2 /*17*/]), 0, 0);
					break;
			}
			break;
		case 2:
			switch (iLocal_491)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_491 = 1;
							break;
						case 1:
							iLocal_491 = 2;
							break;
					}
					break;
				case 1:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
					if (func_199(uLocal_379[0], Global_35, "", 3f))
					{
						iLocal_491 = 3;
					}
					break;
				case 2:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
					if (func_199(uLocal_379[0], Global_35, "", 3f))
					{
						iLocal_491 = 3;
					}
					break;
				case 3:
					break;
			}
			break;
		case 3:
			__LIB_2__::func_411(&(Local_437[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_437[1 /*17*/]), 0, 0);
			break;
	}
}

void func_53(int iParam0)
{
	iLocal_501 = iParam0;
}

bool func_55()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_263, false))
		{
			fLocal_568 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_263);
			return true;
		}
	}
	return false;
}

void func_56(int iParam0, int iParam1)
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
			iLocal_489 = 0;
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_489 = 3;
		}
		else
		{
			iLocal_489 = 4;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_489 = 1;
	}
	else
	{
		iLocal_489 = 2;
	}
}

void func_57()
{
	switch (iLocal_489)
	{
		case 0:
			sLocal_566 = "PB_BRKOUT_N";
			break;
		case 4:
			sLocal_566 = "PB_BRKOUT_R";
			break;
		case 3:
			sLocal_566 = "PB_BRKOUT_L";
			break;
		case 1:
			sLocal_566 = "PB_BRKOUT_BL";
			break;
		case 2:
			sLocal_566 = "PB_BRKOUT_BR";
			break;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, sLocal_566))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_263, sLocal_566, true);
	}
}

void func_62()
{
	func_233();
	if (__LIB_3__::func_452(&Local_15, 0f, 1114636288 /* Float: 60f */, 40f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		__LIB_2__::func_165(Local_15.f_51, 5f, 0, 1, 3);
		func_53(1);
	}
}

void func_63()
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_379[0], 1f);
	__LIB_3__::func_673(uLocal_379[0], Global_35, &uLocal_388, -1, 50);
	PED::SET_PED_RESET_FLAG(uLocal_379[0], 229, true);
	if (iLocal_540 == 0)
	{
		if (func_237())
		{
			iLocal_540 = 1;
		}
	}
	else if (!bLocal_558)
	{
		PED::_0xF1C03A5352243A30(uLocal_379[0]);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_379[0], Local_242[0 /*2*/], Local_242[0 /*2*/].f_1, Global_35, -1, 8f, -8f, 603979792, 0f, false, false, -1f, 0, 1114112, -1f);
		__LIB_3__::func_673(uLocal_379[0], Global_35, &uLocal_388, 3000, 50);
		__LIB_1__::func_148(&uLocal_518);
		bLocal_558 = true;
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], Local_242[0 /*2*/], Local_242[0 /*2*/].f_1, 1) && __LIB_0__::func_265(&uLocal_518) > 1f)
	{
		func_238();
		sLocal_562 = Local_242[0 /*2*/];
		sLocal_563 = Local_242[0 /*2*/].f_1;
		__LIB_2__::func_315(1515458263, uLocal_379[0], 1);
		if (!MAP::DOES_BLIP_EXIST(uLocal_381[0]))
		{
			__LIB_2__::func_73(uLocal_379[0], &(uLocal_381[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
		__LIB_3__::func_158(&(Local_437[0 /*17*/]), 0);
		__LIB_3__::func_158(&(Local_437[1 /*17*/]), 0);
		__LIB_2__::func_411(&(Local_437[0 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_437[1 /*17*/]), 1, 0);
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), uLocal_379[0], 5f, 25f, 25f, 0f, -1f, 180f, false, false, -1, -1);
		__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		func_53(2);
	}
}

void func_64()
{
	PED::SET_PED_RESET_FLAG(uLocal_379[0], 229, true);
	func_241();
	__LIB_3__::func_673(uLocal_379[0], Global_35, &uLocal_388, -1, 30);
	__LIB_3__::func_673(Global_35, uLocal_379[0], &uLocal_388, -1, 30);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_379[0], 1f);
	if (__LIB_2__::func_118(uLocal_379[0], 1, 1) <= 20f)
	{
		if (!__LIB_0__::func_75(&uLocal_524))
		{
			__LIB_1__::func_148(&uLocal_524);
		}
		else if (__LIB_0__::func_264(&uLocal_524) <= 8f)
		{
		}
	}
	func_244();
	if (!__LIB_0__::func_27(iLocal_384, 2))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_562, sLocal_563, 1) && __LIB_2__::func_227(-4f, 1, uLocal_379[0], 1))
		{
			__LIB_2__::func_303(uLocal_379[0], Global_35, sLocal_352[1], 0, 15f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[1 /*2*/], Local_242[1 /*2*/].f_1, 1.5f, -1.5f, -1, 67108884, 0f, false, 65536, false, 0, false);
			sLocal_562 = Local_242[1 /*2*/];
			sLocal_563 = Local_242[1 /*2*/].f_1;
			__LIB_1__::func_683(&iLocal_384, 2);
		}
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], Local_242[1 /*2*/], Local_242[1 /*2*/].f_1, 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_379[0], Local_242[1 /*2*/], Local_242[1 /*2*/].f_1) >= 0.99f)
		{
			iLocal_553 = 1;
		}
	}
	if (iLocal_553 == 1)
	{
		func_247();
	}
	if (iLocal_542 == 1)
	{
		if (iLocal_541 == 0)
		{
			Local_15.f_44 = 1;
			func_53(4);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], Local_242[9 /*2*/], Local_242[9 /*2*/].f_1, 1))
		{
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_379[0], Local_242[9 /*2*/], Local_242[9 /*2*/].f_1) >= 0.99f)
			{
				Local_15.f_44 = 1;
				func_53(4);
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_384, 2))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_379[0], Local_242[1 /*2*/], Local_242[1 /*2*/].f_1) >= 0.2f)
		{
			iLocal_490 = 0;
			if (!bLocal_554)
			{
				__LIB_2__::func_360(&(Local_437[0 /*17*/]), "RE_INTER_DEFUSE");
				bLocal_554 = true;
			}
			__LIB_3__::func_158(&(Local_437[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_437[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_437[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_437[1 /*17*/]), 1, 0);
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(uLocal_379[0], Global_35, fLocal_574, fLocal_574, 5f, false, true, 0))
		{
			if (!__LIB_0__::func_27(iLocal_384, 256) && iLocal_542 == 0)
			{
				func_248();
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_379[0]);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
				__LIB_1__::func_148(&uLocal_536);
				__LIB_1__::func_683(&iLocal_384, 256);
				TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[7 /*2*/], Local_242[7 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
				__LIB_2__::func_315(1515458263, uLocal_379[0], 1);
				sLocal_562 = Local_242[7 /*2*/];
				sLocal_563 = Local_242[7 /*2*/].f_1;
			}
			else if (!__LIB_0__::func_75(&uLocal_506))
			{
				__LIB_1__::func_148(&uLocal_506);
			}
			else if (__LIB_0__::func_264(&uLocal_506) >= 7f)
			{
				func_53(4);
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_506);
		}
		if (__LIB_4__::func_426())
		{
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_379[0]);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_379[0], 1000);
			func_53(4);
		}
		if (iLocal_552 == 0)
		{
			if (__LIB_0__::func_27(iLocal_384, 256))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_379[0], Global_35, fLocal_574, fLocal_574, 5f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_562, sLocal_563, 1) && __LIB_2__::func_227(-4f, 1, uLocal_379[0], 1))
					{
						TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[1 /*2*/], Local_242[1 /*2*/].f_1, 1.5f, -1.5f, -1, 67108884, fLocal_573, false, 65536, false, 0, false);
						sLocal_562 = Local_242[1 /*2*/];
						sLocal_563 = Local_242[1 /*2*/].f_1;
						__LIB_0__::func_37(&uLocal_536);
						iLocal_552 = 1;
					}
				}
			}
		}
		if (__LIB_0__::func_264(&uLocal_536) >= 15f)
		{
			func_53(4);
		}
	}
}

void func_65()
{
	func_71();
	func_244();
	func_250();
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_242[6 /*2*/], Local_242[6 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_242[4 /*2*/], Local_242[4 /*2*/].f_1, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (iLocal_496)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_515) >= 4f)
			{
				if (bLocal_559)
				{
					__LIB_3__::func_465(2, 0, 0, 0, uLocal_379[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 169, true);
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_379[0]);
				TASK::TASK_PLAY_ANIM(uLocal_379[0], sLocal_560, sLocal_561, 1.5f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
				func_251();
				iLocal_496 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_560, sLocal_561, 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_379[0], sLocal_560, sLocal_561) >= 0.4f)
				{
					iLocal_546 = 1;
					__LIB_2__::func_507(&(Local_15.f_5), 10);
				}
			}
			vLocal_385 = { ENTITY::GET_ENTITY_COORDS(uLocal_379[0], true, false) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_385, &(vLocal_385.f_2), false);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_263, vLocal_385, ENTITY::GET_ENTITY_ROTATION(uLocal_379[0], 2), 2);
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_379[0], sLocal_560, sLocal_561) >= 0.99f || !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_560, sLocal_561, 1))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_263);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_263, "idle", false, false);
				iLocal_546 = 1;
				__LIB_2__::func_451(&iLocal_416, 0);
				iLocal_620 = __LIB_2__::func_340(2, 0, 0);
				if (func_253())
				{
					iLocal_490 = 1;
					__LIB_3__::func_158(&(Local_437[2 /*17*/]), 0);
					__LIB_2__::func_411(&(Local_437[2 /*17*/]), 1, 0);
					__LIB_2__::func_360(&(Local_437[2 /*17*/]), "RETWW_MONEY");
				}
				__LIB_1__::func_148(&uLocal_509);
				STREAMING::REMOVE_ANIM_DICT(Local_242[0 /*2*/]);
				func_53(5);
				iLocal_496 = 2;
			}
			break;
		case 2:
			break;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_263, true, false))
		{
			func_254();
		}
	}
}

void func_66()
{
	func_71();
	iLocal_543 = 1;
	__LIB_2__::func_451(&iLocal_416, 0);
	iLocal_620 = __LIB_2__::func_340(3, 0, 0);
	iLocal_490 = 3;
	__LIB_2__::func_360(&(Local_437[0 /*17*/]), "RE_INTER_POS");
	__LIB_2__::func_360(&(Local_437[1 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_2__::func_360(&(Local_437[2 /*17*/]), "INTERACT_ROB");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
	{
		OBJECT::DELETE_OBJECT(&iLocal_383);
	}
	if (!__LIB_3__::func_703(-2f))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_562, sLocal_563, 1) && __LIB_2__::func_227(-4f, 1, uLocal_379[0], 1))
		{
			if (__LIB_2__::func_303(uLocal_379[0], Global_35, sLocal_352[7], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
			{
				TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[2 /*2*/], Local_242[2 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
				func_53(6);
			}
		}
	}
	if (bLocal_555)
	{
		__LIB_2__::func_303(uLocal_379[0], Global_35, sLocal_352[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[2 /*2*/], Local_242[2 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
		func_53(6);
	}
}

void func_67()
{
	func_71();
	func_250();
	func_244();
	func_256();
	func_257();
	switch (iLocal_497)
	{
		case 0:
			func_258();
			func_259();
			if (__LIB_0__::func_264(&uLocal_509) >= 25f)
			{
				if (!func_260())
				{
					__LIB_2__::func_480(&Local_437, 1, 0, 1, 0);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PBL_EXIT");
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PBL_EXIT");
					__LIB_2__::func_451(&iLocal_416, 0);
					iLocal_620 = __LIB_2__::func_340(3, 0, 0);
					func_53(6);
				}
			}
			if (bLocal_539 == 1)
			{
				iLocal_497 = 1;
				func_261();
			}
			break;
		case 1:
			if (func_260() == 0)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(Global_35) >= 1 && ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, sLocal_564))
				{
					func_262();
					iLocal_497 = 2;
				}
			}
			break;
		case 2:
			if (((((ANIMSCENE::_0x8D81E7824B7753F7(Local_263, "N_TAKE", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_263, "L_TAKE", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_263, "R_TAKE", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_263, "REFUSE_N", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_263, "REFUSE_L", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_263, "REFUSE_R", 1))
			{
				iLocal_497 = 3;
			}
			break;
		case 3:
			func_263();
			break;
	}
}

void func_68()
{
	func_71();
	__LIB_1__::func_515(Local_15.f_162, 0);
	__LIB_1__::func_748(&(Local_15.f_162), 1, 1);
	if (MAP::DOES_BLIP_EXIST(uLocal_381[0]))
	{
		MAP::REMOVE_BLIP(&(uLocal_381[0]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PBL_EXIT"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_263, "PBL_EXIT", true);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PBL_EXIT"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_263, "PBL_EXIT", true);
		}
	}
	if (__LIB_0__::func_264(&uLocal_509) >= 5f || __LIB_2__::func_118(uLocal_379[0], 1, 1) >= 30f)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_263, "idle", true, false);
	}
	if (!func_55())
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 169, false);
		__LIB_4__::func_405(uLocal_379[0], &uLocal_415, 0, 0);
		TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_379[0], -1082130432 /* Float: -1f */, 1024, 0);
		PED::SET_PED_KEEP_TASK(uLocal_379[0], true);
		Local_15.f_50 = 1;
		Local_15.f_44 = 1;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
		{
			OBJECT::DELETE_OBJECT(&iLocal_383);
		}
		__LIB_2__::func_411(&(Local_437[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_437[1 /*17*/]), 0, 0);
		func_53(9);
	}
}

void func_69()
{
	func_71();
	func_257();
	if (!__LIB_0__::func_75(&uLocal_509))
	{
		__LIB_1__::func_148(&uLocal_509);
	}
	else if (__LIB_0__::func_264(&uLocal_509) >= 15f)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PBL_EXIT"))
			{
				OBJECT::DELETE_OBJECT(&iLocal_383);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_263, "idle", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_263, "PBL_EXIT", true);
			}
		}
	}
	if (func_266())
	{
		if (fLocal_568 >= 0.68f)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_263, "player", Global_35);
			MAP::DISPLAY_RADAR(true);
		}
	}
	else if (fLocal_568 >= 0.66f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_263, "player", Global_35);
		MAP::DISPLAY_RADAR(true);
	}
	if (MAP::DOES_BLIP_EXIST(uLocal_381[0]))
	{
		MAP::REMOVE_BLIP(&(uLocal_381[0]));
	}
	func_256();
	if (!func_55())
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 169, false);
		__LIB_4__::func_405(uLocal_379[0], &uLocal_415, 0, 0);
		TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_379[0], -1082130432 /* Float: -1f */, 1024, 0);
		PED::SET_PED_KEEP_TASK(uLocal_379[0], true);
		__LIB_2__::func_411(&(Local_437[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_437[1 /*17*/]), 0, 0);
		Local_15.f_50 = 1;
		Local_15.f_44 = 1;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
		{
			OBJECT::DELETE_OBJECT(&iLocal_383);
		}
		func_53(9);
	}
}

void func_70()
{
	char* sVar0;
	func_71();
	__LIB_2__::func_451(&iLocal_416, 0);
	iLocal_620 = __LIB_2__::func_340(3, 0, 0);
	__LIB_2__::func_344(&(uLocal_379[0]));
	__LIB_2__::func_593(&iLocal_416, &Local_437);
	__LIB_4__::func_405(uLocal_379[0], &uLocal_415, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
	{
		OBJECT::DELETE_OBJECT(&iLocal_383);
	}
	if (iLocal_505 == 8)
	{
		sVar0 = sLocal_352[10];
	}
	else
	{
		sVar0 = sLocal_352[8];
	}
	if (PED::_IS_PED_HOGTIED(uLocal_379[0]) || PED::_IS_PED_LASSOED(uLocal_379[0]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 2, 320, -1082130432 /* Float: -1f */, -1, 0);
		__LIB_2__::func_303(uLocal_379[0], Global_35, sVar0, 0, 15f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
		func_53(9);
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_379[0], 169, false);
	if (iLocal_543 == 1)
	{
		if (!PED::_IS_PED_HOGTIED(uLocal_379[0]) || !PED::_IS_PED_LASSOED(uLocal_379[0]))
		{
			if (!__LIB_0__::func_27(iLocal_384, 128))
			{
				if (iLocal_505 != 8192)
				{
					__LIB_2__::func_303(uLocal_379[0], Global_35, sVar0, 0, 20f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_384, 128);
				if (!__LIB_0__::func_163(uLocal_379[0], 242628503))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_621);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_621);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 320, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_621);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_379[0], iLocal_621);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_621);
				}
			}
			else
			{
				if (!__LIB_0__::func_163(uLocal_379[0], 242628503))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_621);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_621);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 320, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_621);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_379[0], iLocal_621);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_621);
				}
				func_53(9);
			}
		}
	}
	else if (!PED::_IS_PED_HOGTIED(uLocal_379[0]) || !PED::_IS_PED_LASSOED(uLocal_379[0]))
	{
		if (!__LIB_0__::func_27(iLocal_384, 128))
		{
			if (iLocal_505 != 8192)
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(uLocal_379[0], Global_35, sVar0, 0, 20f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_384, 128);
			if (!func_55() && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_560, sLocal_561, 1))
			{
				if ((!__LIB_2__::func_479(uLocal_379[0], &(Local_15.f_5)) && !__LIB_2__::func_262(Global_35, uLocal_379[0], &(Local_15.f_5))) && !__LIB_2__::func_263(Global_35, uLocal_379[0], &(Local_15.f_5)))
				{
					TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[8 /*2*/], Local_242[8 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
					iLocal_549 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], Local_242[8 /*2*/], Local_242[8 /*2*/].f_1, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], sLocal_560, sLocal_561, 1))
		{
			if (func_55())
			{
				if (fLocal_568 >= 0.9f || fLocal_569 >= 0.9f)
				{
					if (iLocal_549 == 1)
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 2, 320, -1082130432 /* Float: -1f */, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 2, 64, -1082130432 /* Float: -1f */, -1, 0);
					}
					func_53(9);
				}
			}
			else
			{
				if (iLocal_549 == 1)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 2, 320, -1082130432 /* Float: -1f */, -1, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_379[0], Global_35, 2, 64, -1082130432 /* Float: -1f */, -1, 0);
				}
				func_53(9);
			}
		}
	}
}

void func_71()
{
	__LIB_3__::func_673(uLocal_379[0], Global_35, &uLocal_388, -1, 10);
	__LIB_3__::func_673(Global_35, uLocal_379[0], &uLocal_388, -1, 10);
}

bool func_75()
{
	if (!__LIB_0__::func_75(&uLocal_527))
	{
		__LIB_1__::func_148(&uLocal_527);
	}
	else if (__LIB_0__::func_264(&uLocal_527) >= 4f)
	{
		if (!__LIB_0__::func_75(&uLocal_530) && __LIB_2__::func_118(uLocal_379[0], 1, 1) <= 3f)
		{
			__LIB_1__::func_148(&uLocal_530);
			iLocal_550 = 1;
		}
		if (__LIB_0__::func_264(&uLocal_530) >= 4f)
		{
			if ((__LIB_2__::func_118(uLocal_379[0], 1, 1) <= 3f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f) && iLocal_550 == 1)
			{
				return true;
			}
			else
			{
				iLocal_550 = 0;
				__LIB_0__::func_37(&uLocal_530);
				return false;
			}
		}
	}
	return false;
}

int func_190(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_388(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_195()
{
	switch (iLocal_489)
	{
		case 0:
			if (func_394(uLocal_379[0], 0f, 1f, 0f, 10f) && iLocal_492[0] == 3)
			{
				iLocal_489 = 0;
			}
			else if (func_394(uLocal_379[0], 0f, -1f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 3;
			}
			else if (func_394(uLocal_379[0], 1f, 0f, 0f, 10f) && iLocal_492[2] == 3)
			{
				iLocal_489 = 2;
			}
			else if (func_394(uLocal_379[0], -1f, 0f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 1;
			}
			else if (iLocal_489 == 0)
			{
			}
			break;
		case 1:
			if (func_394(uLocal_379[0], -1f, 0f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 1;
			}
			else if (func_394(uLocal_379[0], 0f, 1f, 0f, 10f) && iLocal_492[0] == 3)
			{
				iLocal_489 = 0;
			}
			else if (func_394(uLocal_379[0], 1f, 0f, 0f, 10f) && iLocal_492[2] == 3)
			{
				iLocal_489 = 2;
			}
			else if (func_394(uLocal_379[0], 0f, -1f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 3;
			}
			else if (iLocal_489 == 1)
			{
			}
			break;
		case 2:
			if (func_394(uLocal_379[0], 1f, 0f, 0f, 10f) && iLocal_492[2] == 3)
			{
				iLocal_489 = 2;
			}
			else if (func_394(uLocal_379[0], 0f, 1f, 0f, 10f) && iLocal_492[0] == 3)
			{
				iLocal_489 = 0;
			}
			else if (func_394(uLocal_379[0], 0f, -1f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 3;
			}
			else if (func_394(uLocal_379[0], -1f, 0f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 1;
			}
			else if (iLocal_489 == 2)
			{
			}
			break;
		case 4:
			if (func_394(uLocal_379[0], 0f, -1f, 0f, 10f) && iLocal_492[2] == 3)
			{
				iLocal_489 = 4;
			}
			else if (func_394(uLocal_379[0], -1f, 0f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 1;
			}
			else if (func_394(uLocal_379[0], 1f, 0f, 0f, 10f) && iLocal_492[2] == 3)
			{
				iLocal_489 = 2;
			}
			else if (func_394(uLocal_379[0], 0f, 1f, 0f, 10f) && iLocal_492[0] == 3)
			{
				iLocal_489 = 0;
			}
			else if (iLocal_489 == 4)
			{
			}
			break;
		case 3:
			if (func_394(uLocal_379[0], 0f, -1f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 3;
			}
			else if (func_394(uLocal_379[0], -1f, 0f, 0f, 10f) && iLocal_492[1] == 3)
			{
				iLocal_489 = 1;
			}
			else if (func_394(uLocal_379[0], 1f, 0f, 0f, 10f) && iLocal_492[2] == 3)
			{
				iLocal_489 = 2;
			}
			else if (func_394(uLocal_379[0], 0f, 1f, 0f, 10f) && iLocal_492[0] == 3)
			{
				iLocal_489 = 0;
			}
			else if (iLocal_489 == 3)
			{
			}
			break;
	}
}

void func_196()
{
	switch (iLocal_489)
	{
		case 0:
			if (func_266())
			{
				sLocal_564 = "PB_MTH_ENTER_N";
			}
			else
			{
				sLocal_564 = "PB_MTH_ENTER_N";
			}
			break;
		case 4:
			if (func_266())
			{
				sLocal_564 = "PB_MTH_ENTER_R";
			}
			else
			{
				sLocal_564 = "PB_MTH_ENTER_R";
			}
			break;
		case 3:
			if (func_266())
			{
				sLocal_564 = "PB_MTH_ENTER_L";
			}
			else
			{
				sLocal_564 = "PB_MTH_ENTER_L";
			}
			break;
		case 1:
			if (func_266())
			{
				sLocal_564 = "PB_MTH_ENTER_L";
			}
			else
			{
				sLocal_564 = "PB_MTH_ENTER_L";
			}
			break;
		case 2:
			if (func_266())
			{
				sLocal_564 = "PB_MTH_ENTER_R";
			}
			else
			{
				sLocal_564 = "PB_MTH_ENTER_R";
			}
			break;
	}
}

void func_197()
{
	STREAMING::REQUEST_MODEL(joaat("S_INV_MONEYCLIP01X"), false);
}

bool func_199(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!__LIB_0__::func_75(&uLocal_533))
	{
		__LIB_1__::func_148(&uLocal_533);
	}
	else if (__LIB_0__::func_264(&uLocal_533) > fParam3)
	{
		__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_0__::func_37(&uLocal_533);
		return true;
	}
	return false;
}

void func_233()
{
	if (iLocal_548 == 0)
	{
		iLocal_548 = 1;
		switch (Local_15.f_51.f_4)
		{
			case 0:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
			case 1:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
			case 2:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
			case 3:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
			case 4:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
			case 5:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
			case 6:
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_379[0], joaat("WORLD_HUMAN_SMOKE"), Local_209[0 /*32*/].f_6, Local_209[0 /*32*/].f_9, -1, false, true, 0, -1f, false);
				break;
		}
	}
}

bool func_237()
{
	if (__LIB_2__::func_118(uLocal_379[0], 1, 1) <= func_439() && !func_440())
	{
		TASK::TASK_LOOK_AT_ENTITY(uLocal_379[0], Global_35, -1, 0, 51, 0);
		return true;
	}
	return false;
}

void func_238()
{
	if (!__LIB_0__::func_163(uLocal_379[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		__LIB_3__::func_911(uLocal_379[0], Global_35, &uLocal_582, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 2f, 1, 256, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	}
}

void func_241()
{
	__LIB_3__::func_307(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_379[0], true, false), &uLocal_654, 1061158912 /* Float: 0.75f */, 0, 0);
	switch (iLocal_657)
	{
		case 0:
			fLocal_659 = __LIB_0__::func_665(Global_35, uLocal_379[0], 1, 1);
			iLocal_657++;
			break;
		case 1:
			fLocal_658 = __LIB_0__::func_665(Global_35, uLocal_379[0], 1, 1);
			if (fLocal_658 > (fLocal_659 + 10f))
			{
				if (__LIB_3__::func_507(&uLocal_654, 8000))
				{
					bLocal_555 = true;
					func_53(4);
				}
			}
			break;
	}
}

void func_244()
{
	if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), ENTITY::GET_ENTITY_COORDS(uLocal_379[0], true, false), 5f))
	{
		iLocal_499 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), uLocal_379[0], -1f, 40f, 30f, 0f, -1f, 180f, false, false, -1, -1);
	}
}

void func_247()
{
	int iVar0;
	int iVar1;
	iLocal_542 = 1;
	iVar0 = PED::GET_PED_NEARBY_PEDS(uLocal_379[0], &uLocal_576, -1, -1);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (__LIB_2__::func_1(uLocal_576[iVar1], 0, 1) && PED::IS_PED_HUMAN(uLocal_576[iVar1]))
			{
				if ((uLocal_576[iVar1] != Global_35 && !PED::IS_PED_ON_MOUNT(uLocal_576[iVar1])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_576[iVar1], true))
				{
					if (__LIB_0__::func_665(uLocal_576[iVar1], uLocal_379[0], 1, 1) < 8f)
					{
						iLocal_541 = 1;
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_541 == 1)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], Local_242[9 /*2*/], Local_242[9 /*2*/].f_1, 1) && __LIB_2__::func_227(-4f, 1, uLocal_379[0], 1))
		{
			TASK::TASK_PLAY_ANIM(uLocal_379[0], Local_242[9 /*2*/], Local_242[9 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
			sLocal_562 = Local_242[9 /*2*/];
			sLocal_563 = Local_242[9 /*2*/].f_1;
		}
	}
}

void func_248()
{
	float fVar0;
	fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_379[0], Local_242[1 /*2*/], Local_242[1 /*2*/].f_1);
	if (fVar0 <= 0f)
	{
		fLocal_573 = 0f;
	}
	else if (fVar0 > 0f && fVar0 <= 0.35f)
	{
		fLocal_573 = 0.35f;
	}
	else if (fVar0 >= 0.35f && fVar0 <= 0.71f)
	{
		fLocal_573 = 0.71f;
	}
	else
	{
		fLocal_573 = 0.95f;
	}
}

void func_250()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		if (func_266())
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PB_MTH_ENTER_N"))
			{
				func_447(0, __LIB_3__::func_508(Global_35, Local_263, "player", "PB_MTH_ENTER_N", 1), 1058642330 /* Float: 0.6f */);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PB_MTH_ENTER_L"))
			{
				func_447(1, __LIB_3__::func_508(Global_35, Local_263, "player", "PB_MTH_ENTER_L", 1), 1058642330 /* Float: 0.6f */);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PB_MTH_ENTER_R"))
			{
				func_447(2, __LIB_3__::func_508(Global_35, Local_263, "player", "PB_MTH_ENTER_R", 1), 1058642330 /* Float: 0.6f */);
			}
		}
		else
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PB_MTH_ENTER_N"))
			{
				func_447(0, __LIB_3__::func_508(Global_35, Local_263, "player", "PB_MTH_ENTER_N", 1), 1058642330 /* Float: 0.6f */);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PB_MTH_ENTER_L"))
			{
				func_447(1, __LIB_3__::func_508(Global_35, Local_263, "player", "PB_MTH_ENTER_L", 1), 1058642330 /* Float: 0.6f */);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, "PB_MTH_ENTER_R"))
			{
				func_447(2, __LIB_3__::func_508(Global_35, Local_263, "player", "PB_MTH_ENTER_R", 1), 1058642330 /* Float: 0.6f */);
			}
		}
	}
}

void func_251()
{
	switch (iLocal_14)
	{
		case 0:
			Local_263 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_263.f_4, 64, "MOURN_IDLE", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_263, "player", PLAYER::PLAYER_PED_ID(), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_263, "Female", uLocal_379[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_263, "MOURN_BOOL", false, false);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_263);
			break;
		case 1:
			Local_263 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_263.f_4, 64, "MOURN_IDLE", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_263, "player", PLAYER::PLAYER_PED_ID(), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_263, "Female", uLocal_379[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_263, "MOURN_BOOL", false, false);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_263);
			break;
	}
}

bool func_253()
{
	if ((iLocal_492[1] == 3 || iLocal_492[2] == 3) || iLocal_492[0] == 3)
	{
		return true;
	}
	return false;
}

void func_254()
{
	switch (iLocal_14)
	{
		case 0:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "MOURN_IDLE");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PBL_EXIT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_MTH_ENTER_N");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_MTH_ENTER_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_MTH_ENTER_R");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_BL");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_BR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_R");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_N");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_BL");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_BR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_R");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_N");
			break;
		case 1:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "MOURN_IDLE");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PBL_EXIT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_MTH_ENTER_N");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_MTH_ENTER_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_MTH_ENTER_R");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_BL");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_BR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_R");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_LOOKUP_N");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_BL");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_BR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_R");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PB_BRKOUT_N");
			break;
	}
}

void func_256()
{
	if (!__LIB_0__::func_75(&uLocal_512))
	{
		__LIB_1__::func_148(&uLocal_512);
	}
	else if (__LIB_0__::func_264(&uLocal_512) >= 6f)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_379[0]))
		{
			__LIB_2__::func_122(uLocal_379[0], "CRYING_SOFT", -417894478, Global_35, 1, 0, 0, 1);
			__LIB_1__::func_148(&uLocal_512);
		}
	}
}

void func_257()
{
	switch (iLocal_489)
	{
		case 0:
			if (func_266())
			{
				fLocal_570 = 0.25f;
				fLocal_571 = 0.5f;
				fLocal_572 = 0.69f;
			}
			else
			{
				fLocal_570 = 0.25f;
				fLocal_572 = 0.64f;
			}
			break;
		case 4:
			if (func_266())
			{
				fLocal_570 = 0.26f;
				fLocal_571 = 0.47f;
				fLocal_572 = 0.66f;
			}
			else
			{
				fLocal_570 = 0.25f;
				fLocal_572 = 0.65f;
			}
			break;
		case 3:
			if (func_266())
			{
				fLocal_570 = 0.26f;
				fLocal_571 = 0.47f;
				fLocal_572 = 0.69f;
			}
			else
			{
				fLocal_570 = 0.25f;
				fLocal_572 = 0.65f;
			}
			break;
		case 1:
			if (func_266())
			{
				fLocal_570 = 0.2f;
				fLocal_571 = 0.48f;
				fLocal_572 = 0.69f;
			}
			else
			{
				fLocal_570 = 0.25f;
				fLocal_572 = 0.65f;
			}
			break;
		case 2:
			if (func_266())
			{
				fLocal_570 = 0.26f;
				fLocal_571 = 0.47f;
				fLocal_572 = 0.66f;
			}
			else
			{
				fLocal_570 = 0.25f;
				fLocal_572 = 0.65f;
			}
			break;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_263))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_263, sLocal_564))
		{
			if (fLocal_568 >= fLocal_570)
			{
				if (iLocal_544 == 0)
				{
					iLocal_544 = 1;
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_383, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
				}
			}
			if (fLocal_568 >= fLocal_571)
			{
				if (iLocal_545 == 0)
				{
					iLocal_545 = 1;
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_383, uLocal_379[0], PED::GET_PED_BONE_INDEX(uLocal_379[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
					__LIB_1__::func_432(200, 0, 0, 1, 1);
					__LIB_2__::func_190(uLocal_379[0], 200);
				}
			}
			if (fLocal_568 >= fLocal_572)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
				{
					OBJECT::DELETE_OBJECT(&iLocal_383);
				}
			}
		}
	}
}

void func_258()
{
	if (!__LIB_0__::func_75(&uLocal_521))
	{
		__LIB_1__::func_148(&uLocal_521);
		iLocal_567 = MISC::GET_RANDOM_INT_IN_RANGE(3, 7);
	}
	else if (__LIB_0__::func_264(&uLocal_521) >= IntToFloat(iLocal_567))
	{
		func_56(uLocal_379[0], Global_35);
		switch (iLocal_489)
		{
			case 0:
				sLocal_565 = "PB_LOOKUP_N";
				break;
			case 4:
				sLocal_565 = "PB_LOOKUP_BR";
				break;
			case 3:
				sLocal_565 = "PB_LOOKUP_BL";
				break;
			case 1:
				sLocal_565 = "PB_LOOKUP_L";
				break;
			case 2:
				sLocal_565 = "PB_LOOKUP_R";
				break;
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_263, sLocal_565))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_263, sLocal_565, true);
		}
		__LIB_0__::func_37(&uLocal_521);
	}
}

void func_259()
{
	switch (iLocal_498)
	{
		case 0:
			if (__LIB_0__::func_492(1) < 200)
			{
				iLocal_498 = 3;
				__LIB_2__::func_411(&(Local_437[2 /*17*/]), 0, 0);
			}
			else
			{
				iLocal_498 = 4;
				__LIB_2__::func_411(&(Local_437[2 /*17*/]), 1, 0);
				__LIB_4__::func_406(&(Local_437[2 /*17*/]), 1);
				__LIB_3__::func_362(&(Local_437[2 /*17*/]), 3f);
			}
			break;
		case 2:
			__LIB_2__::func_411(&(Local_437[2 /*17*/]), 1, 0);
			__LIB_4__::func_406(&(Local_437[2 /*17*/]), 1);
			__LIB_3__::func_362(&(Local_437[2 /*17*/]), 3f);
			iLocal_498 = 4;
			break;
		case 1:
			__LIB_2__::func_411(&(Local_437[2 /*17*/]), 0, 0);
			iLocal_498 = 3;
			break;
		case 4:
			if (__LIB_0__::func_492(1) < 200)
			{
				iLocal_498 = 1;
			}
			break;
		case 3:
			if (__LIB_0__::func_492(1) >= 200)
			{
				iLocal_498 = 2;
			}
			break;
	}
}

bool func_260()
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], "script_re@town_widow@give_money", "lookup_back_l", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], "script_re@town_widow@give_money", "lookup_back_r", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], "script_re@town_widow@give_money", "lookup_l", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], "script_re@town_widow@give_money", "lookup_r", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_379[0], "script_re@town_widow@give_money", "lookup_n", 1))
	{
		return true;
	}
	return false;
}

void func_261()
{
	int iVar0;
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
	TASK::TASK_ENTER_ANIM_SCENE(0, Local_263, "player", sLocal_564, 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_262()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	MAP::DISPLAY_RADAR(false);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383))
	{
		iLocal_383 = OBJECT::CREATE_OBJECT(joaat("S_INV_MONEYCLIP01X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + Vector(2f, 10f, 10f), true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_263, sLocal_564, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_INV_MONEYCLIP01X"));
	}
}

void func_263()
{
	switch (iLocal_500)
	{
		case 0:
			__LIB_2__::func_461(0);
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_266())
				{
					__LIB_2__::func_303(PLAYER::PLAYER_PED_ID(), uLocal_379[0], sLocal_352[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(PLAYER::PLAYER_PED_ID(), uLocal_379[0], sLocal_352[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (func_266())
				{
					iLocal_500 = 1;
				}
				else
				{
					iLocal_500 = 2;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, 0, 0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PBL_EXIT");
				func_53(7);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_263, "PBL_EXIT");
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				func_53(7);
			}
			break;
	}
}

bool func_266()
{
	switch (iLocal_14)
	{
		case 0:
			return true;
		case 1:
			return false;
	}
	return false;
}

int func_388(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_388(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_394(int iParam0, vector3 vParam1, float fParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	var uVar5;
	var uVar8;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &fVar0, &uVar5);
	vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vParam1) };
	if (__LIB_2__::func_106(&vVar2, 50, 10, 0))
	{
		MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar2 + Vector(1f, 0f, 0f), &fVar1, &uVar8);
		fVar11 = (fVar0 - fVar1);
		fVar12 = (fVar11 / 1f);
		fVar13 = MISC::ATAN(fVar12);
		fVar14 = MISC::ABSF(fVar13);
		if (fVar14 < fParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

float func_439()
{
	float fVar0;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 == 0f)
		{
			fLocal_574 = 17f;
			fLocal_575 = 80f;
		}
		else if (fVar0 == 1f)
		{
			fLocal_574 = 23f;
			fLocal_575 = 80f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fLocal_574 = 25f;
			fLocal_575 = 80f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fLocal_574 = 25f;
			fLocal_575 = 90f;
		}
		else
		{
			fLocal_574 = 45f;
			fLocal_575 = 90f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 == 0f)
		{
			fLocal_574 = 15f;
			fLocal_575 = 80f;
		}
		else if (fVar0 == 1f)
		{
			fLocal_574 = 20f;
			fLocal_575 = 80f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fLocal_574 = 20f;
			fLocal_575 = 80f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fLocal_574 = 30f;
			fLocal_575 = 90f;
		}
		else
		{
			fLocal_574 = 35f;
			fLocal_575 = 90f;
		}
	}
	return fLocal_574;
}

bool func_440()
{
	if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_379[0], fLocal_575))
	{
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f)
		{
			return true;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_447(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	switch (iLocal_492[iParam0])
	{
		case 0:
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &(vParam1.f_2), false);
			iLocal_622[iParam0] = SHAPETEST::START_SHAPE_TEST_CAPSULE(vParam1, vParam1 + Vector(0.6f, 0f, 0f), fParam4, 18, uLocal_379[0], 4);
			iLocal_492[iParam0] = 1;
			break;
		case 1:
			iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_622[iParam0], &(uLocal_626[iParam0]), &(vLocal_630[iParam0 /*3*/]), &(vLocal_640[iParam0 /*3*/]), &(uLocal_650[iParam0]));
			if (iVar0 == 2)
			{
				if (uLocal_626[iParam0] != 0)
				{
					iLocal_492[iParam0] = 2;
				}
				else
				{
					iLocal_492[iParam0] = 3;
				}
			}
			else if (iVar0 == 0)
			{
				iLocal_492[iParam0] = 4;
			}
			else if (iVar0 == 1)
			{
				iLocal_492[iParam0] = 4;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

