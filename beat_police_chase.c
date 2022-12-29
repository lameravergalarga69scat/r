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
	char* sLocal_14[16] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	vector3 vLocal_31 = { 0f, 0f, 0f };
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_37 = { 0f, 0f, 0f };
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = -1;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 2;
	var uLocal_57 = 1;
	var uLocal_58 = 1;
	var uLocal_59 = 1;
	var uLocal_60 = 0;
	var uLocal_61 = 1;
	var uLocal_62 = 2;
	var uLocal_63 = 2;
	var uLocal_64 = 3;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 3;
	var uLocal_68 = 1;
	var uLocal_69 = 3;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	struct<32> Local_73[2];
	struct<193> Local_138 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	struct<5> Local_332 = { 0, 0, 0, 0, 0 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341[2] = { 0, 0 };
	int iLocal_344 = 0;
	var uLocal_345 = -1;
	var uLocal_346 = 0;
	var uLocal_347 = -1;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = -1;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 1073741824;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 1;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	struct<17> Local_365[2];
	int iLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = -1;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 1073741824;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 1;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	struct<17> Local_421[2];
	char[] cLocal_456[8] = 0;
	var uLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	bool bLocal_468 = false;
	bool bLocal_469 = false;
	bool bLocal_470 = false;
	bool bLocal_471 = false;
	bool bLocal_472 = false;
	bool bLocal_473 = false;
	var uLocal_474 = 0;
	bool bLocal_475 = false;
	bool bLocal_476 = false;
	bool bLocal_477 = false;
	bool bLocal_478 = false;
	bool bLocal_479 = false;
	bool bLocal_480 = false;
	bool bLocal_481 = false;
	bool bLocal_482 = false;
	bool bLocal_483 = false;
	bool bLocal_484 = false;
	bool bLocal_485 = false;
	bool bLocal_486 = false;
	bool bLocal_487 = false;
	bool bLocal_488 = false;
	bool bLocal_489 = false;
	bool bLocal_490 = false;
	bool bLocal_491 = false;
	bool bLocal_492 = false;
	bool bLocal_493 = false;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
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
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	var uLocal_508 = 0;
	int iLocal_509 = 0;
	float fLocal_510 = 0f;
	float fLocal_511 = 0f;
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
	int iLocal_533 = 0;
	var uLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 1176256512;
	int iLocal_542 = 0;
	var uLocal_543[2] = { 0, 0 };
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	vector3 vVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_37 = { 2506.272f, -1304.348f, 47.9537f };
	vLocal_40 = { 2545.366f, -1227.941f, 52.3107f };
	cLocal_456 = "TB";
	iLocal_533 = __LIB_2__::func_340(1, 0, 0);
	Local_138.f_3 = __LIB_0__::func_81(&uScriptParam_0);
	Local_138.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4();
	}
	__LIB_3__::func_420(&Local_138, 1);
	__LIB_2__::func_111(&(Local_138.f_5), 1);
	__LIB_3__::func_620(&(Local_138.f_5), 1);
	__LIB_2__::func_50(&(Local_138.f_5), 1);
	__LIB_2__::func_104(&(Local_138.f_5), 0);
	__LIB_2__::func_52(&(Local_138.f_5), 1);
	__LIB_2__::func_51(&(Local_138.f_5), 1);
	__LIB_3__::func_333(&(Local_138.f_5), 0);
	__LIB_2__::func_179(&(Local_138.f_5), 1);
	__LIB_3__::func_553(&(Local_138.f_5), 1);
	__LIB_2__::func_52(&(Local_138.f_5), 1);
	__LIB_2__::func_182(&(Local_138.f_5), 1);
	__LIB_2__::func_110(&(Local_138.f_5), 1);
	__LIB_2__::func_180(&(Local_138.f_5), 0);
	__LIB_2__::func_613(&(Local_138.f_5), 1);
	__LIB_2__::func_595(&(Local_138.f_5), 20f);
	__LIB_2__::func_906(&(Local_138.f_5), 100);
	__LIB_2__::func_507(&(Local_138.f_5), 1000);
	while (true)
	{
		switch (iLocal_537)
		{
			case 0:
				if (__LIB_3__::func_669(&Local_138, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_23(&Local_138, &iLocal_546, &iLocal_548);
					vVar0 = { func_24(iLocal_546, iLocal_548) };
					Local_138.f_51.f_3 = vVar0.z;
					func_25(&Local_138, &iLocal_546, &iLocal_548);
					iLocal_537 = 1;
				}
				else if (Local_138.f_160)
				{
					func_4();
				}
				break;
			case 1:
				if (func_26())
				{
					func_27();
					func_28();
					__LIB_3__::func_889(&Local_365);
					func_30(&Local_421);
					func_25(&Local_138, &iLocal_546, &(Local_138.f_51.f_4));
					iLocal_537 = 3;
				}
				break;
			case 3:
				if (func_31())
				{
					func_32();
					func_33();
					func_34();
					func_35();
					iLocal_537 = 4;
				}
				break;
			case 4:
				func_36();
				if (!__LIB_3__::func_466(&Local_138, &uLocal_341, 0, 0, 1, 0, 1, 0))
				{
					func_4();
				}
				if (!Local_138.f_46 && iLocal_538 > 1)
				{
					if ((func_38() || func_39()) || __LIB_3__::func_649(Global_35, uLocal_341[1]))
					{
						Local_138.f_46 = 1;
						iLocal_538 = 5;
					}
				}
				if (!bLocal_472)
				{
					if (PED::_IS_PED_LASSOED(uLocal_341[1]) || bLocal_482)
					{
						iLocal_538 = 3;
						bLocal_472 = true;
					}
				}
				if (func_41())
				{
					Local_138.f_50 = 1;
					func_4();
				}
				if (__LIB_3__::func_431(&Local_138, &uLocal_341, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_4();
				}
				break;
		}
		BUILTIN::WAIT(Local_138.f_158);
	}
}

void func_4()
{
	PED::SET_PED_CONFIG_FLAG(uLocal_341[0], 315, false);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_459))
	{
		PATHFIND::_0xD17672447692478E(iLocal_459, 0);
	}
	__LIB_3__::func_524(&iLocal_496);
	__LIB_3__::func_524(&iLocal_497);
	__LIB_3__::func_524(&iLocal_498);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_460))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_460, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_461))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_461, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_462))
	{
		__LIB_0__::func_172(iLocal_462);
	}
	__LIB_3__::func_493(&Local_138, &uLocal_341, &uLocal_543, 0, iLocal_546, uLocal_508, 0, 1, 0, 1);
	if (!bLocal_481)
	{
		Local_138.f_45 = 0;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 0;
			*iParam2 = 1;
			break;
	}
}

Vector3 func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
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

void func_25(var uParam0, int iParam1, int iParam2)
{
	switch (*iParam1)
	{
		case 0:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2648.2f, -1213.325f, 52.225f, 0f, 0f, 0f, 48.9f, 12f, 17f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2643.1f, -1227.5f, 53.2f, 0f, 0f, 0f, 2.8f, 10f, 6.1f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2645.4f, -1179.9f, 53.3f, 0f, 0f, 0f, 16.25f, 12f, 10f);
					break;
				case 1:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2774.8f, -1230.7f, 48.4f, 0f, 0f, 63.36f, 3.9f, 7f, 17.1f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2726.7f, -1209.6f, 55.7f, 0f, 0f, 0f, 22.875f, 18.775f, 14.2f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2754.3f, -1207.7f, 49.5f, 0f, 0f, -27.14f, 11.45f, 69.125f, 10f);
					break;
			}
			break;
	}
}

bool func_26()
{
	int iVar0;
	switch (iLocal_535)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_138))
			{
				func_56();
				func_57();
				func_58();
				iLocal_535 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_534, cLocal_456))
			{
				return false;
			}
			if (!func_60())
			{
				return false;
			}
			if (!func_61())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Local_73[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_73[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!__LIB_3__::func_449(&Local_73))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_27()
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			Local_73[0 /*32*/].f_6 = { 2648.34f, -1194.34f, 53.56f };
			Local_73[0 /*32*/].f_9 = 170.22f;
			Local_73[1 /*32*/].f_6 = { 2648.69f, -1206.31f, 53.34f };
			Local_73[1 /*32*/].f_9 = 170.22f;
			vLocal_31 = { 2648.09f, -1211.27f, 52.29f };
			vLocal_34 = { __LIB_10__::func_45(5) };
			break;
		case 1:
			Local_73[0 /*32*/].f_6 = { 2753.7f, -1218.7f, 49.6f };
			Local_73[0 /*32*/].f_9 = 57.9882f;
			Local_73[1 /*32*/].f_6 = { 2753.7f, -1218.7f, 49.6f };
			Local_73[1 /*32*/].f_9 = 57.9882f;
			vLocal_31 = { 2747.33f, -1216.92f, 48.46f };
			vLocal_34 = { 2714.463f, -1149.472f, 49.3194f };
			vLocal_43 = { 2753.83f, -1218.51f, 48.57f };
			bLocal_47 = true;
			break;
	}
}

void func_28()
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			__LIB_3__::func_139(&uLocal_457, 2648.736f, -1213.636f, 52.3577f, 0f, 0f, 0f, 26f, 15f, 50f, "HardLimitVol");
			ENTITY::CREATE_MODEL_HIDE(2642.21f, -1233.35f, 52.18f, 1f, joaat("P_POT_FLOWERARNG19X"), false);
			__LIB_3__::func_557(&iLocal_458, 2643.004f, -1225.142f, 53.45945f, 0f, 0f, 0f, 3f, 19f, 5f, "vClearAlly");
			__LIB_3__::func_557(&iLocal_459, 2642.022f, -1213.189f, 54.24951f, 0f, 0f, 0f, 46f, 9f, 9f, "vTurnOffAllyNodes");
			__LIB_3__::func_557(&iLocal_463, 2622.073f, -1214.593f, 54.57856f, 0f, 0f, 0f, 14f, 12f, 5f, "volTriggerOutskirts");
			__LIB_3__::func_557(&iLocal_464, 2639.015f, -1230.675f, 52.05724f, 0f, 0f, 0f, 8f, 21f, 8f, "volBackRight");
			__LIB_3__::func_557(&iLocal_465, 2648.559f, -1230.675f, 52.05724f, 0f, 0f, 0f, 11f, 21f, 8f, "volBackLeft");
			__LIB_3__::func_557(&iLocal_466, 2638.64f, -1247.125f, 51.65228f, 0f, 0f, 0f, 10f, 12f, 14f, "volRight");
			__LIB_3__::func_557(&iLocal_467, 2650.166f, -1247.125f, 51.65228f, 0f, 0f, 0f, 10f, 12f, 14f, "volLeft");
			break;
		case 1:
			__LIB_3__::func_139(&uLocal_457, 2754.273f, -1216.086f, 48.86789f, 0f, 0f, 0f, 17f, 15f, 20f, "HardLimitVol");
			__LIB_3__::func_557(&uLocal_340, 2746.314f, -1216.186f, 48.8263f, 0f, 0f, -28f, 3f, 5f, 5f, "volRemoveBlockade");
			__LIB_3__::func_557(&iLocal_458, 2763.431f, -1224.116f, 50.10824f, 0f, 0f, -27f, 29f, 5f, 9f, "vClearAlly");
			__LIB_3__::func_557(&iLocal_459, 2748.38f, -1218.231f, 50.49495f, 0f, 0f, -27f, 4f, 38f, 12f, "vTurnOffAllyNodes");
			__LIB_3__::func_557(&iLocal_463, 2739.31f, -1240.328f, 52.4886f, 0f, 0f, -27f, 17f, 12f, 9f, "volTriggerOutskirts");
			break;
	}
}

void func_30(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(24), func_68(29), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

bool func_31()
{
	int iVar0;
	switch (iLocal_536)
	{
		case 0:
			if (__LIB_3__::func_449(&Local_73))
			{
				iLocal_536 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_138), __LIB_3__::func_526(&Local_138), &Local_73, &uLocal_341, 0, 0, -1, 1))
			{
				iLocal_536 = 2;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (__LIB_2__::func_1(uLocal_341[iVar0], 0, 1))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_341[iVar0], Local_73[iVar0 /*32*/].f_6, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_341[iVar0], Local_73[iVar0 /*32*/].f_9);
				}
				iVar0++;
			}
			iLocal_536 = 5;
			break;
		case 5:
			if (func_73())
			{
				iLocal_536 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_32()
{
	__LIB_3__::func_285(uLocal_341[0], &Local_138, 0);
	__LIB_3__::func_285(uLocal_341[1], &Local_138, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_341[0], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_341[1], true, true);
	__LIB_3__::func_459(uLocal_341[1], 0);
}

void func_33()
{
	func_76();
	switch (Local_138.f_51.f_4)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_332, "COP", uLocal_341[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_332, "CRIMINAL", uLocal_341[1], 0);
			fLocal_46 = 0.405999f;
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_332, "COP", uLocal_341[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_332, "CRIMINAL", uLocal_341[1], 0);
			__LIB_3__::func_730(uLocal_340, 0, 0, 0, 0, 0);
			__LIB_4__::func_220(uLocal_340, 0);
			fLocal_46 = 0.450783f;
			break;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_332, "START_BOOL", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_332, "INT_BOOL", false, false);
	ANIMSCENE::START_ANIM_SCENE(Local_332);
}

void func_34()
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			__LIB_3__::func_566(&(uLocal_341[0]), -210225995);
			__LIB_3__::func_566(&(uLocal_341[1]), 1773174030);
			break;
		case 1:
			__LIB_3__::func_566(&(uLocal_341[0]), 96688455);
			__LIB_3__::func_566(&(uLocal_341[1]), 275729025);
			break;
	}
}

void func_35()
{
	__LIB_2__::func_761(Local_138.f_51, 10f, 0, 0);
	iLocal_462 = VOLUME::_CREATE_VOLUME_SPHERE(Local_138.f_51, 0f, 0f, 0f, 5f, 5f, 5f);
	uLocal_460 = __LIB_1__::func_391(iLocal_462, 0, 0, 0);
	__LIB_1__::func_572(Local_138.f_51, 20f, 0, 0, 0, 0, 0);
	uLocal_461 = __LIB_1__::func_391(iLocal_458, 0, 0, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_458, 0, 0, 0, -1, -1, 0);
}

void func_36()
{
	if (iLocal_538 < 5 && iLocal_538 > 1)
	{
		if (__LIB_2__::func_1(uLocal_341[0], 0, 1))
		{
			PED::SET_PED_RESET_FLAG(uLocal_341[0], 12, true);
		}
		if (__LIB_2__::func_1(uLocal_341[1], 0, 1))
		{
			PED::SET_PED_RESET_FLAG(uLocal_341[1], 12, true);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_332, false))
		{
			fLocal_510 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_332);
		}
		if ((((((((((ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[2]) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[3])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[4])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[5])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[6])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[7])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[8])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[9])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[10])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[11])) || ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[12]))
		{
			fLocal_511 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_332);
			if (!bLocal_471)
			{
				bLocal_471 = true;
			}
		}
		switch (Local_138.f_51.f_4)
		{
			case 0:
				if (fLocal_510 >= 0.773814f && fLocal_510 < 0.785172f)
				{
					bLocal_477 = true;
				}
				if (fLocal_510 > 0.78f)
				{
				}
				break;
			case 1:
				if (fLocal_510 >= 0.773814f && fLocal_510 < 0.785172f)
				{
					bLocal_477 = true;
				}
				if (fLocal_510 > 0.84f)
				{
				}
				break;
		}
		if (bLocal_471)
		{
			if (!bLocal_479)
			{
				if (fLocal_511 > 0.384875f)
				{
					ENTITY::_0x18FF3110CF47115D(uLocal_341[1], 0, 0);
					bLocal_479 = true;
				}
			}
			if (!bLocal_476)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[1], joaat("KNOCKOUT")) || fLocal_511 > 0.543739f)
				{
					ENTITY::_0x18FF3110CF47115D(uLocal_341[1], 0, 0);
					bLocal_476 = true;
				}
			}
		}
		else
		{
			if (!bLocal_479)
			{
				if (fLocal_510 > 0.422f)
				{
					bLocal_479 = true;
				}
			}
			if (!bLocal_476)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[1], joaat("KNOCKOUT")) || fLocal_511 > 0.660218f)
				{
					ENTITY::_0x18FF3110CF47115D(uLocal_341[1], 0, 0);
					bLocal_476 = true;
				}
			}
		}
		switch (Local_138.f_51.f_4)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[1], -1937917129))
				{
					__LIB_2__::func_315(1891783641, uLocal_341[1], 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[1], 270297573))
				{
					__LIB_2__::func_315(1891783641, uLocal_341[1], 1);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_459))
				{
					if (fLocal_510 > 0.184f)
					{
						PATHFIND::_0xC1799FAFD2FDF52B(iLocal_459, 0, 0, 0);
						PATHFIND::_0xD17672447692478E(iLocal_459, 0);
						VOLUME::_DELETE_VOLUME(iLocal_459);
						iLocal_497 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_341[1], -1f, -1f, -1f, -1f, -1f, 180f, false, true, -1, -1);
					}
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[1], 1265617745))
				{
					__LIB_2__::func_315(1891783641, uLocal_341[1], 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[1], 897644425))
				{
					__LIB_2__::func_315(1891783641, uLocal_341[0], 1);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_459))
				{
					if (fLocal_510 > 0.2f)
					{
						PATHFIND::_0xC1799FAFD2FDF52B(iLocal_459, 0, 0, 0);
						PATHFIND::_0xD17672447692478E(iLocal_459, 0);
						VOLUME::_DELETE_VOLUME(iLocal_459);
						iLocal_497 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_341[1], -1f, -1f, -1f, -1f, -1f, 180f, false, true, -1, -1);
					}
				}
				break;
		}
	}
	switch (Local_138.f_51.f_4)
	{
		case 0:
			if (__LIB_1__::func_205(Global_35, iLocal_464, 1, 0))
			{
				iLocal_547 = 1;
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_465, 1, 0))
			{
				iLocal_547 = 0;
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_466, 1, 0))
			{
				iLocal_547 = 2;
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_467, 1, 0))
			{
				iLocal_547 = 3;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_341[0], joaat("KNOCKOUT")))
	{
		if (!bLocal_476)
		{
			bLocal_476 = true;
		}
	}
}

int func_38()
{
	if (__LIB_3__::func_453(uLocal_341[0], 0, &(Local_138.f_5), &iLocal_542, 0, 0) || PED::_0x29FCE825613FEFCA(uLocal_341[0], 5000))
	{
		if ((iLocal_542 == 2 || iLocal_542 == 4) || iLocal_542 == 8)
		{
			bLocal_468 = true;
		}
		return 1;
	}
	return 0;
}

int func_39()
{
	if (__LIB_3__::func_453(uLocal_341[1], 0, &(Local_138.f_5), &iLocal_542, 0, 0) && !bLocal_469)
	{
		if ((iLocal_542 == 4 || iLocal_542 == 8) || iLocal_542 == 1)
		{
			if (!Local_138.f_44)
			{
				Local_138.f_44 = 1;
			}
			bLocal_472 = true;
			bLocal_482 = false;
			return 1;
		}
		else if (!bLocal_482)
		{
			bLocal_482 = true;
		}
	}
	return 0;
}

bool func_41()
{
	if ((__LIB_2__::func_1(uLocal_341[1], 0, 1) && !__LIB_0__::func_272(uLocal_341[1], 8)) && !__LIB_0__::func_272(uLocal_341[1], 8))
	{
		if (iLocal_538 >= 5)
		{
			if (!__LIB_0__::func_491(uLocal_341[1], 518218985))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_341[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
	}
	func_97();
	if (iLocal_538 > 1)
	{
		if ((iLocal_538 != 5 && !bLocal_493) && !Local_138.f_46)
		{
			func_98();
		}
		func_99();
	}
	switch (iLocal_538)
	{
		case 0:
			WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_341[0], joaat("WEAPON_REPEATER_CARBINE"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			iLocal_538 = 1;
			break;
		case 1:
			if (__LIB_4__::func_391(&Local_138, &uLocal_539, 0f, 1114636288 /* Float: 60f */, 25f, 1000, 4f, 1065353216 /* Float: 1f */, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0) || func_101())
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_341[1], 146, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_341[0], joaat("REL_COP"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_341[1], joaat("REL_CRIMINALS"));
				PED::SET_PED_AS_COP(uLocal_341[0], true);
				__LIB_2__::func_104(&(Local_138.f_5), 1);
				AUDIO::_PLAY_SOUND_FROM_ENTITY("POLICE_WHISTLE_SINGLE", uLocal_341[0], "NBD1_Sounds", false, 0, 0);
				__LIB_2__::func_315(-805893667, uLocal_341[0], 1);
				__LIB_1__::func_148(&uLocal_521);
				PATHFIND::_0xC1799FAFD2FDF52B(iLocal_459, 0, 0, 0);
				iLocal_538 = 2;
			}
			break;
		case 2:
			if (!bLocal_475)
			{
				if (__LIB_0__::func_265(&uLocal_521) > 3f)
				{
					iLocal_496 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), uLocal_341[1], -1f, -1f, -1f, -1f, -1f, 180f, false, true, -1, -1);
					AUDIO::_PLAY_SOUND_FROM_ENTITY("POLICE_WHISTLE_SINGLE", uLocal_341[0], "NBD1_Sounds", false, 0, 0);
					__LIB_2__::func_315(-805893667, uLocal_341[0], 1);
					bLocal_475 = true;
				}
			}
			if (func_104() || uLocal_474)
			{
				__LIB_2__::func_111(&(Local_138.f_5), 1);
				iLocal_538 = 4;
			}
			break;
		case 3:
			if (func_105())
			{
				iLocal_538 = 4;
			}
			break;
		case 4:
			if (func_106())
			{
				iLocal_538 = 6;
			}
			break;
		case 5:
			if (func_107())
			{
				iLocal_538 = 6;
			}
			break;
		case 6:
			if ((!__LIB_2__::func_1(uLocal_341[0], 0, 1) && !__LIB_2__::func_1(uLocal_341[1], 0, 1)) || (__LIB_0__::func_94(uLocal_341[0], vLocal_34, 1) < 5f && !__LIB_3__::func_649(uLocal_341[0], uLocal_341[1])))
			{
				return true;
			}
			if (__LIB_0__::func_665(Global_35, uLocal_341[0], 1, 1) > 20f && __LIB_0__::func_665(Global_35, uLocal_341[1], 1, 1) > 20f)
			{
				PED::SET_PED_KEEP_TASK(uLocal_341[0], true);
				return true;
			}
			break;
	}
	return false;
}

void func_56()
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			Local_73[0 /*32*/].f_1 = joaat("RE_POLICECHASE_MALES_01");
			Local_73[0 /*32*/] = 4;
			StringCopy(&(Local_73[0 /*32*/].f_23), "1007_S_M_M_DispatchPolice_White_03", 64);
			Local_73[0 /*32*/].f_3 = -210225995;
			Local_73[1 /*32*/].f_1 = joaat("RE_POLICECHASE_MALES_01");
			Local_73[1 /*32*/] = 4;
			StringCopy(&(Local_73[1 /*32*/].f_23), "0133_G_M_M_UniCriminals_01_BLACK_02", 64);
			Local_73[1 /*32*/].f_3 = 1773174030;
			break;
		case 1:
			Local_73[0 /*32*/].f_1 = joaat("RE_POLICECHASE_MALES_01");
			Local_73[0 /*32*/] = 4;
			StringCopy(&(Local_73[0 /*32*/].f_23), "1005_S_M_M_DispatchPolice_White_01", 64);
			Local_73[0 /*32*/].f_3 = 96688455;
			Local_73[1 /*32*/].f_1 = joaat("RE_POLICECHASE_MALES_01");
			Local_73[1 /*32*/] = 4;
			StringCopy(&(Local_73[1 /*32*/].f_23), "1061_G_M_M_UniCriminals_01_WHITE_08", 64);
			Local_73[1 /*32*/].f_3 = 275729025;
			break;
	}
}

void func_57()
{
	__LIB_3__::func_445(&Local_73);
}

void func_58()
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			Local_332.f_4 = "script@beat@town@policechase@knockedout";
			sLocal_14[0] = "PB_ACTION_ALL";
			sLocal_14[1] = "PB_ACTION_ALL";
			sLocal_14[2] = "PB_BRKOUT_BACK";
			sLocal_14[3] = "PB_BRKOUT_LEFT";
			sLocal_14[4] = "PB_BRKOUT_RIGHT";
			sLocal_14[5] = "PB_ILO_MOUNT_BACKLEFT";
			sLocal_14[6] = "PB_ILO_MOUNT_BACKRIGHT";
			sLocal_14[7] = "PB_ILO_MOUNT_LEFT";
			sLocal_14[8] = "PB_ILO_MOUNT_RIGHT";
			sLocal_14[9] = "PB_ILO_STAND_BACKLEFT";
			sLocal_14[10] = "PB_ILO_STAND_BACKRIGHT";
			sLocal_14[11] = "PB_ILO_STAND_LEFT";
			sLocal_14[12] = "PB_ILO_STAND_RIGHT";
			Local_332 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_332.f_4, 0, sLocal_14[0], false, true);
			break;
		case 1:
			Local_332.f_4 = "script@beat@town@policechase@wallgrab";
			sLocal_14[0] = "PB_ACTION";
			sLocal_14[15] = "PB_ACTION";
			sLocal_14[2] = "PB_BRK_BACK";
			sLocal_14[3] = "PB_BRK_FRONT";
			sLocal_14[4] = "PB_BRK_RIGHT";
			sLocal_14[9] = "PB_ILO_BACKLEFT";
			sLocal_14[10] = "PB_BRK_BACKRIGHT";
			sLocal_14[5] = "PB_ILO_MOUNT_BACKLEFT";
			sLocal_14[7] = "PB_ILO_MOUNT_LEFT";
			sLocal_14[13] = "PB_WALL_BRKOUT_L";
			sLocal_14[14] = "PB_ILO_MOUNT_RIGHT";
			Local_332 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_332.f_4, 0, sLocal_14[0], false, true);
			break;
	}
}

bool func_60()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_332, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_332, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_332);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_61()
{
	int iVar0;
	bool bVar1;
	switch (Local_138.f_51.f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_332, sLocal_14[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_332, sLocal_14[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_332, sLocal_14[iVar0]);
					}
					bVar1 = false;
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_332, sLocal_14[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_332, sLocal_14[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_332, sLocal_14[iVar0]);
					}
					bVar1 = false;
				}
				iVar0++;
			}
			break;
	}
	return !bVar1;
	return false;
}

char* func_68(int iParam0)
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			switch (iParam0)
			{
				case 8:
					return "GUN";
				case 10:
					return "GENERIC_ANGRY_REACTION";
				case 15:
					return "GREET_PLAYER_CAPTURED_BOUNTY";
				case 16:
					return "RE_PC_SD_V1_THANK_B";
				case 17:
					return "RE_PC_SD_V1_INITIAL_CALLOUT";
				case 18:
					return "RE_PC_SD_V1_INTERACT_A";
				case 19:
					return "LAW_INTERACT_MOVE_ALONG";
				case 20:
					return "PEDTYPE_WON_FIGHT";
				case 21:
					return "RE_PC_SD_V1_INTERACT_D";
				case 22:
					return "WHATS_YOUR_PROBLEM";
				case 23:
					return "LAW_INTERACT_CONFRONT";
				case 24:
					return "GENERIC_ANGRY_SHOUT";
				case 25:
					return "RE_PC_SD_V1_INTERACT_E";
				case 26:
					return "RE_PC_SD_V1_INTERACT_F";
				case 27:
					return "RE_PC_SD_V1_INTERVEN_A";
				case 29:
					return "RE_PC_SD_V1_INTERACT_THIEF_A";
				case 30:
					return "RE_PC_SD_V1_INTERACT_THIEF_B";
				case 31:
					return "LEAVE_NOW";
				case 32:
					return "";
				case 33:
					return "GENERIC_ANGRY_REACTION";
				case 34:
					return "GENERIC_THANKS_SHOUTED";
				case 35:
					return "RE_PC_SD_V1_DEFUSE_A";
				case 36:
					return "DISMISSIVE_REACT";
				case 37:
					return "RE_PC_SD_V1_DEFUSE_B";
				case 38:
					return "DEFUSE_RESPONSE";
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 8:
					return "GUN";
				case 10:
					return "GENERIC_ANGRY_REACTION";
				case 15:
					return "GREET_PLAYER_CAPTURED_BOUNTY";
				case 16:
					return "RE_PC_SD_V2_THANK_B";
				case 17:
					return "RE_PC_SD_V2_INITIAL_CALLOUT";
				case 18:
					return "RE_PC_SD_V2_INTERACT_A";
				case 19:
					return "LAW_RESPONSE_TO_TATTLE";
				case 20:
					return "PEDTYPE_WON_FIGHT";
				case 21:
					return "RE_PC_SD_V2_INTERACT_D";
				case 22:
					return "LAW_INTERACT_CONFRONT";
				case 23:
					return "LAW_INTERACT_CONFRONT";
				case 24:
					return "FIGHT";
				case 25:
					return "RE_PC_SD_V2_INTERACT_E";
				case 26:
					return "RE_PC_SD_V2_INTERACT_F";
				case 27:
					return "RE_PC_SD_V2_INTERVEN_A";
				case 29:
					return "RE_PC_SD_V2_INTERACT_THIEF_A";
				case 30:
					return "RE_PC_SD_V2_INTERACT_THIEF_B";
				case 31:
					return "LAW_TAKE_IT_FROM_HERE";
				case 32:
					return "";
				case 33:
					return "TAUNT_GEN_NEUTRAL";
				case 34:
					return "GET_LOST";
				case 35:
					return "RE_PC_SD_V2_DEFUSE_A";
				case 36:
					return "DISMISSIVE_REACT";
				case 37:
					return "RE_PC_SD_V2_DEFUSE_B";
				case 38:
					return "DEFUSE_RESPONSE";
			}
			break;
	}
	return "RERC_ODR_V1_END_A";
}

bool func_73()
{
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[0], "Default_Curious");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[0], "Default_Angry");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[0], "Flee_Human_PotentialThreat");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[0], "TaskCombat_High");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[1], "Default_Curious");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[1], "Default_Angry");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[1], "Flee_Human_PotentialThreat");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[1], "TaskCombat_High");
	if (((((PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_341[0], "Default_Curious") && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_341[0], "Default_Angry")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_341[0], "TaskCombat_High")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_341[1], "Default_Curious")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_341[1], "Default_Angry")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_341[1], "TaskCombat_High"))
	{
		return true;
	}
	return false;
}

void func_76()
{
	switch (Local_138.f_51.f_4)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_332, 2642.064f, -1221.661f, 53.236f, 0f, 0f, 0f, 2);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_332, 2753.7f, -1218.7f, 49.6f, 0f, 0f, 0f, 2);
			break;
	}
}

void func_97()
{
	if (Local_138.f_48 && !Local_138.f_46)
	{
		switch (Local_138.f_51.f_4)
		{
			case 0:
				switch (iLocal_506)
				{
					case 0:
						if ((bLocal_471 && __LIB_0__::func_265(&uLocal_515) > 2f) || func_225())
						{
							if (fLocal_510 >= 0.405999f)
							{
								iLocal_506++;
							}
						}
						break;
					case 1:
						if (fLocal_510 <= 0.650001f)
						{
							bLocal_473 = true;
							if (iLocal_547 == 1)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[9], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 0)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[10], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 3)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[12], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 2)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[11], true);
								iLocal_506++;
							}
						}
						else if (fLocal_510 >= 0.773814f && fLocal_510 < 0.785172f)
						{
							bLocal_473 = true;
							if (iLocal_547 == 1)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[5], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 0)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[5], true);
								iLocal_506 = (iLocal_506 + 1);
							}
							else if (iLocal_547 == 3)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[8], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 2)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[7], true);
								iLocal_506++;
							}
						}
						break;
					case 2:
						if (__LIB_2__::func_227(-7f, 1, uLocal_341[0], 0))
						{
							switch (Local_138.f_51.f_4)
							{
								case 0:
									__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(31), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									break;
								case 1:
									__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(31), "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									break;
							}
							iLocal_506++;
						}
						break;
					case 3:
						iLocal_499 = 2;
						bLocal_473 = false;
						iLocal_506++;
						break;
					case 4:
						break;
				}
				break;
			case 1:
				iLocal_547 = __LIB_3__::func_547(uLocal_341[0], Global_35, 0.707f);
				switch (iLocal_506)
				{
					case 0:
						if (bLocal_471 || func_225())
						{
							if (fLocal_510 >= 0.450783f)
							{
								iLocal_506++;
							}
						}
						break;
					case 1:
						if (fLocal_510 <= 0.663497f)
						{
							bLocal_473 = true;
							if (iLocal_547 == 1 || iLocal_547 == 0)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[9], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 2)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[9], true);
								iLocal_506++;
							}
							else if (iLocal_547 == 3)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[9], true);
								iLocal_506++;
							}
						}
						else if (fLocal_510 >= 0.773814f && fLocal_510 < 0.785172f)
						{
							bLocal_473 = true;
							if (iLocal_547 == 1)
							{
							}
							if (iLocal_547 == 0)
							{
							}
							if (iLocal_547 == 2)
							{
							}
							if ((iLocal_547 == 1 || iLocal_547 == 0) || iLocal_547 == 2)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[5], true);
								iLocal_506++;
							}
							if (iLocal_547 == 3 || iLocal_547 == 0)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_332, sLocal_14[7], true);
								iLocal_506++;
							}
						}
						break;
					case 2:
						iLocal_506++;
						break;
					case 3:
						if (bLocal_476 && !__LIB_0__::func_491(uLocal_341[1], 1313215416))
						{
							__LIB_3__::func_524(&iLocal_498);
							TASK::TASK_KNOCKED_OUT(uLocal_341[1], 120f, true);
						}
						if (fLocal_510 >= 0.98f)
						{
							bLocal_473 = false;
							iLocal_506++;
						}
						break;
					case 4:
						break;
				}
				break;
		}
	}
}

void func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_502 = func_229(&(uLocal_341[0]), &iLocal_344, 15f, &Local_365, &(Local_138.f_192), 0f, 1, 0, "", iLocal_533, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (!bLocal_483)
	{
		if (!bLocal_469)
		{
			if (!bLocal_477)
			{
				switch (iLocal_503)
				{
					case 0:
						__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
						iLocal_503++;
						break;
					case 1:
						if (iLocal_502 == 1)
						{
							__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
							if (!Local_138.f_44)
							{
								Local_138.f_44 = 1;
							}
							__LIB_1__::func_148(&uLocal_515);
							iLocal_503++;
						}
						if (bLocal_480)
						{
							iLocal_503 = 3;
						}
						break;
					case 2:
						if (__LIB_0__::func_265(&uLocal_515) > 2f)
						{
							__LIB_2__::func_360(&(Local_365[1 /*17*/]), __LIB_2__::func_460(10));
							__LIB_2__::func_451(&iLocal_344, 0);
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
							__LIB_1__::func_148(&uLocal_515);
							iLocal_503++;
						}
						break;
					case 3:
						if (iLocal_502 == 1)
						{
							__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
							if (!Local_138.f_44)
							{
								Local_138.f_44 = 1;
							}
							bLocal_471 = true;
							__LIB_1__::func_148(&uLocal_515);
							iLocal_503++;
						}
						break;
					case 4:
						if (__LIB_0__::func_265(&uLocal_515) > 1f)
						{
							__LIB_4__::func_242(uLocal_341[0], Global_35, &uLocal_48, 0, 3);
							TASK::TASK_LOOK_AT_ENTITY(uLocal_341[0], Global_35, 2000, 0, 51, 0);
							__LIB_1__::func_148(&uLocal_515);
							iLocal_503++;
						}
						break;
					case 5:
						if (__LIB_0__::func_265(&uLocal_515) > 1f && __LIB_2__::func_227(-7f, 1, uLocal_341[0], 0))
						{
							if (!bLocal_480)
							{
							}
							iLocal_503++;
						}
						break;
					case 6:
						bLocal_477 = true;
						break;
				}
			}
			else
			{
				__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
			}
		}
		else
		{
			if (!bLocal_478)
			{
				if (!bLocal_486)
				{
					__LIB_2__::func_360(&(Local_365[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_365[0 /*17*/]), __LIB_2__::func_460(24));
					__LIB_2__::func_411(&(Local_365[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
					__LIB_2__::func_451(&iLocal_344, 0);
					bLocal_486 = true;
				}
				if (iLocal_502 == 0)
				{
					__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_515);
					__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
					bLocal_478 = true;
					bLocal_489 = true;
					__LIB_1__::func_148(&uLocal_515);
					iLocal_504 = 3;
				}
				if (iLocal_502 == 1)
				{
					__LIB_1__::func_148(&uLocal_515);
					__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
					bLocal_478 = true;
					bLocal_489 = false;
					__LIB_1__::func_148(&uLocal_515);
					iLocal_504 = 5;
				}
			}
			switch (iLocal_504)
			{
				case 0:
					switch (iLocal_505)
					{
						case 0:
							if (__LIB_0__::func_665(Global_35, uLocal_341[0], 1, 1) < 5f && __LIB_2__::func_123(uLocal_341[0], Global_35, 0))
							{
								iLocal_505++;
							}
							break;
						case 1:
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_341[0], Global_35, -1, -1f, -1f, -1f);
							__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_518);
							iLocal_505++;
							break;
						case 2:
							if (__LIB_0__::func_265(&uLocal_518) > 1f && __LIB_2__::func_227(-7f, 1, uLocal_341[0], 0))
							{
								switch (Local_138.f_51.f_4)
								{
									case 0:
										__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(20), "", 100f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										break;
									case 1:
										__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(20), "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										break;
								}
								__LIB_1__::func_148(&uLocal_518);
								iLocal_505++;
							}
							break;
						case 3:
							if (__LIB_0__::func_265(&uLocal_518) > 2f || !__LIB_2__::func_136(uLocal_341[0], 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								if (!__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
								{
									TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uLocal_341[1]);
								}
								if (bLocal_47)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_43, 1f, -1, 0.25f, 4194304, 40000f);
								}
								TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_341[1], vLocal_37, 1f, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_40, 1f, -1, 0.25f, 4194320, 40000f);
								__LIB_1__::func_474(uLocal_341[0], &iVar0, 0, 0, 1, 1);
								__LIB_3__::func_524(&iLocal_496);
								__LIB_3__::func_524(&iLocal_497);
								iLocal_504++;
							}
							break;
					}
					if (iLocal_505 == 0)
					{
						if (__LIB_0__::func_265(&uLocal_518) > 10f)
						{
							iLocal_504++;
						}
					}
					break;
				case 1:
					__LIB_2__::func_411(&(Local_365[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
					break;
				case 3:
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_341[0], Global_35, 3000, 0, 51, 1);
						switch (Local_138.f_51.f_4)
						{
							case 0:
								__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(19), "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 1:
								__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(19), "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						__LIB_1__::func_148(&uLocal_515);
						iLocal_504++;
					}
					break;
				case 4:
					if (__LIB_0__::func_265(&uLocal_515) > 2f)
					{
						__LIB_1__::func_148(&uLocal_515);
						iLocal_504 = 10;
					}
					break;
				case 5:
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						if (__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
						{
							func_236(uLocal_341[0], "Default_Angry");
						}
						switch (Local_138.f_51.f_4)
						{
							case 0:
								__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(22), "", 100f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 1:
								__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(22), "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						__LIB_1__::func_148(&uLocal_515);
						iLocal_504 = 10;
					}
					break;
				case 10:
					if (__LIB_0__::func_265(&uLocal_515) > 4f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
						{
							TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uLocal_341[1]);
						}
						if (bLocal_47)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_43, 1f, -1, 0.25f, 4194304, 40000f);
						}
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_341[1], vLocal_37, 1f, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_40, 1f, -1, 0.25f, 4194320, 40000f);
						__LIB_1__::func_474(uLocal_341[0], &iVar1, 0, 0, 1, 1);
						__LIB_3__::func_524(&iLocal_496);
						__LIB_3__::func_524(&iLocal_497);
						if (bLocal_478)
						{
							iLocal_504++;
						}
						else
						{
							iLocal_504 = 1;
						}
					}
					break;
				case 11:
					if (!__LIB_2__::func_136(uLocal_341[0], 0))
					{
						if (!bLocal_487)
						{
							if (bLocal_489)
							{
								__LIB_2__::func_360(&(Local_365[0 /*17*/]), __LIB_2__::func_460(7));
							}
							else
							{
								__LIB_2__::func_360(&(Local_365[0 /*17*/]), __LIB_2__::func_460(8));
							}
							__LIB_2__::func_360(&(Local_365[1 /*17*/]), __LIB_2__::func_460(10));
							__LIB_2__::func_451(&iLocal_344, 0);
							if (bLocal_489)
							{
								__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
							}
							else
							{
								__LIB_2__::func_411(&(Local_365[0 /*17*/]), 1, 0);
							}
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
							bLocal_487 = true;
						}
						if (iLocal_502 == 1)
						{
							__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_515);
							bLocal_490 = false;
							iLocal_504++;
						}
						if (!bLocal_489)
						{
							if (iLocal_502 == 0)
							{
								__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
								__LIB_1__::func_148(&uLocal_515);
								bLocal_490 = true;
								iLocal_504++;
							}
						}
					}
					break;
				case 12:
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_341[0], Global_35, 3000, 2, 51, 1);
						if (!bLocal_490)
						{
							bLocal_491 = true;
							__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(23), "", 100f, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(36), "", 100f, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
							bLocal_491 = false;
						}
						iLocal_504++;
					}
					break;
				case 13:
					if (!__LIB_2__::func_136(uLocal_341[0], 0))
					{
						if (!bLocal_488)
						{
							if (bLocal_491 || bLocal_490)
							{
								__LIB_2__::func_360(&(Local_365[0 /*17*/]), __LIB_2__::func_460(8));
							}
							else
							{
								__LIB_2__::func_360(&(Local_365[0 /*17*/]), __LIB_2__::func_460(7));
							}
							__LIB_2__::func_360(&(Local_365[1 /*17*/]), __LIB_2__::func_460(10));
							__LIB_2__::func_451(&iLocal_344, 0);
							if (bLocal_491)
							{
								__LIB_2__::func_411(&(Local_365[0 /*17*/]), 1, 0);
							}
							else
							{
								__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
							}
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
							bLocal_488 = true;
						}
						if (iLocal_502 == 1)
						{
							__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_515);
							__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_515);
							iLocal_504++;
						}
						if (bLocal_491)
						{
							if (iLocal_502 == 0)
							{
								__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_148(&uLocal_515);
								__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
								iLocal_504 = 20;
							}
						}
					}
					break;
				case 14:
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						PED::_0x789DABD18E9024DB(uLocal_341[0], 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 2f, 60f, 4);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_341[1], ENTITY::GET_ENTITY_COORDS(uLocal_341[0], true, false), 2f, 8);
						TASK::TASK_CONFRONT(0, Global_35, 2);
						TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 0);
						__LIB_1__::func_474(uLocal_341[0], &iVar2, 0, 0, 1, 1);
						__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(24), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_504++;
					}
					break;
				case 15:
					if (!__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
					{
						__LIB_2__::func_603(&(uLocal_341[0]), &iLocal_344, &Local_365, 1, 1);
						__LIB_2__::func_593(&iLocal_344, &Local_365);
						__LIB_2__::func_603(&(uLocal_341[0]), &iLocal_400, &Local_421, 1, 1);
						__LIB_2__::func_593(&iLocal_400, &Local_421);
						if (!MAP::DOES_BLIP_EXIST(uLocal_543[0]))
						{
							__LIB_2__::func_73(uLocal_341[0], &(uLocal_543[0]), -118010418, 580546400, 0, 0);
						}
						if (!bLocal_492)
						{
							bLocal_492 = true;
						}
						__LIB_1__::func_148(&uLocal_512);
						if (!bLocal_493)
						{
							iLocal_501 = 2;
							iLocal_538 = 5;
							bLocal_493 = true;
						}
					}
					break;
				case 20:
					if (__LIB_0__::func_265(&uLocal_515) > 2f && !__LIB_2__::func_136(Global_35, 0))
					{
						__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(38), "", 100f, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_341[0], Global_35, 3000, 2, 51, 1);
						__LIB_1__::func_148(&uLocal_515);
						iLocal_504++;
					}
					break;
				case 21:
					if (__LIB_0__::func_265(&uLocal_515) > 2f)
					{
						__LIB_2__::func_360(&(Local_365[0 /*17*/]), __LIB_2__::func_460(8));
						__LIB_2__::func_360(&(Local_365[1 /*17*/]), __LIB_2__::func_460(10));
						__LIB_2__::func_451(&iLocal_344, 0);
						__LIB_2__::func_411(&(Local_365[1 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
						iLocal_504++;
					}
					break;
				case 22:
					if (iLocal_502 == 1)
					{
						__LIB_2__::func_303(Global_35, uLocal_341[0], func_68(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_515);
						__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
						iLocal_504 = 14;
					}
					break;
				case 100:
					iLocal_538 = 6;
					break;
			}
		}
	}
	else
	{
		__LIB_2__::func_411(&(Local_365[1 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_365[0 /*17*/]), 0, 0);
	}
}

void func_99()
{
	iLocal_495 = func_229(&(uLocal_341[1]), &iLocal_400, 14f, &Local_421, &(Local_138.f_192), 0f, 1, 0, 0, iLocal_533, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if ((!bLocal_469 && !bLocal_470) && __LIB_2__::func_1(uLocal_341[1], 0, 1))
	{
		switch (iLocal_494)
		{
			case 0:
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[1], "Default_Angry");
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_341[1], "Default_Curious");
				__LIB_2__::func_411(&(Local_421[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_421[1 /*17*/]), 0, 0);
				iLocal_494++;
				break;
			case 1:
				if (iLocal_495 == 0)
				{
					__LIB_2__::func_411(&(Local_421[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_421[1 /*17*/]), 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_341[1], Global_35, 2000, 1024, 51, 1);
					iLocal_494++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					__LIB_2__::func_303(uLocal_341[1], Global_35, func_68(30), "", -1f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_494++;
				}
				break;
			case 3:
				bLocal_470 = true;
				break;
		}
	}
	else
	{
		__LIB_2__::func_411(&(Local_421[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_421[1 /*17*/]), 0, 0);
		__LIB_2__::func_344(&(uLocal_341[1]));
	}
}

int func_101()
{
	if (!__LIB_3__::func_291(Global_35, 1))
	{
		if (!__LIB_0__::func_75(&uLocal_527))
		{
			__LIB_1__::func_148(&uLocal_527);
		}
		else if (__LIB_0__::func_265(&uLocal_527) > 15f)
		{
			if ((CAM::IS_SPHERE_VISIBLE(vLocal_31, 2f) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_31 + Vector(1.5f, 0f, 0f), 17)) && __LIB_0__::func_94(Global_35, vLocal_31, 1) < 30f)
			{
				func_245();
				return 1;
			}
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_463, true, 0) && CAM::IS_SPHERE_VISIBLE(vLocal_31, 2f))
		{
			bLocal_484 = true;
		}
		else
		{
			bLocal_484 = false;
			iLocal_509 = 0;
		}
		if (bLocal_484)
		{
			switch (iLocal_509)
			{
				case 0:
					__LIB_1__::func_148(&uLocal_527);
					iLocal_509++;
					break;
				case 1:
					if (__LIB_0__::func_265(&uLocal_527) > 7f)
					{
						iLocal_509++;
					}
					break;
				case 2:
					func_245();
					return 1;
			}
		}
	}
	return 0;
}

int func_104()
{
	if (!__LIB_0__::func_75(&uLocal_524))
	{
		__LIB_1__::func_148(&uLocal_524);
	}
	if (!bLocal_473)
	{
		switch (iLocal_499)
		{
			case 0:
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_332, "START_BOOL", true, false);
				__LIB_1__::func_148(&uLocal_524);
				iLocal_499++;
				break;
			case 1:
				if (fLocal_510 > fLocal_46 || fLocal_511 > fLocal_46)
				{
					if (!bLocal_485)
					{
						__LIB_2__::func_315(1891783641, uLocal_341[0], 1);
						bLocal_485 = true;
					}
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_341[0]) || __LIB_0__::func_265(&uLocal_524) > 30f)
					{
						bLocal_481 = true;
						if (!Local_138.f_44 && ENTITY::IS_ENTITY_ON_SCREEN(uLocal_341[0]))
						{
							Local_138.f_44 = 1;
						}
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_332, "INT_BOOL", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_332, "IDLE_BOOL", true, false);
						bLocal_480 = true;
						iLocal_499++;
					}
				}
				break;
			case 2:
				switch (Local_138.f_51.f_4)
				{
					case 0:
						if ((fLocal_510 > 0.78f || fLocal_511 > 0.54f) || bLocal_476)
						{
							__LIB_3__::func_524(&iLocal_498);
							TASK::TASK_KNOCKED_OUT(uLocal_341[1], 120f, true);
							iLocal_499++;
						}
						break;
					case 1:
						if (fLocal_510 > 0.84f || bLocal_476)
						{
							__LIB_3__::func_524(&iLocal_498);
							TASK::TASK_KNOCKED_OUT(uLocal_341[1], 120f, true);
							iLocal_499++;
						}
						break;
				}
				break;
			case 3:
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_332, sLocal_14[0]) || fLocal_510 > 0.98f)
				{
					return 1;
				}
				break;
		}
	}
	return 0;
}

bool func_105()
{
	switch (iLocal_507)
	{
		case 0:
			__LIB_2__::func_303(uLocal_341[1], Global_35, func_68(32), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_341[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_341[1], true);
			TASK::TASK_COMBAT_PED(uLocal_341[0], uLocal_341[1], 68157440, 0);
			__LIB_1__::func_148(&uLocal_530);
			iLocal_507++;
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_530) > 2f)
			{
				__LIB_1__::func_148(&uLocal_530);
				iLocal_507++;
			}
			break;
		case 2:
			if ((!__LIB_2__::func_1(uLocal_341[1], 0, 1) || PED::_IS_PED_HOGTIED(uLocal_341[1])) || __LIB_0__::func_665(uLocal_341[0], uLocal_341[1], 1, 1) > 20f)
			{
				__LIB_1__::func_148(&uLocal_530);
				iLocal_507++;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_530) > 1f)
			{
				if (__LIB_0__::func_665(uLocal_341[0], Global_35, 1, 1) < 20f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_341[0], Global_35, 0, -1f, -1f, -1f);
					__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(15), "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_530);
					iLocal_507++;
				}
				else
				{
					__LIB_1__::func_148(&uLocal_530);
					iLocal_507++;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_530) > 2f)
			{
				__LIB_1__::func_148(&uLocal_530);
				iLocal_507++;
			}
			break;
		case 5:
			bLocal_483 = true;
			return true;
	}
	return false;
}

bool func_106()
{
	int iVar0;
	switch (iLocal_500)
	{
		case 0:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uLocal_341[1]);
			if (bLocal_47)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_43, 1f, -1, 0.25f, 4194304, 40000f);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_37, 1f, -1, 0.25f, 4194320, 40000f);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_341[1], vLocal_37, 1f, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_40, 1f, -1, 0.25f, 4194320, 40000f);
			__LIB_1__::func_474(uLocal_341[0], &iVar0, 0, 0, 1, 1);
			__LIB_1__::func_148(&uLocal_518);
			bLocal_469 = true;
			iLocal_500++;
			break;
		case 1:
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_498);
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_497);
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_496);
			iLocal_500++;
			break;
		case 2:
			if (((!__LIB_2__::func_1(uLocal_341[0], 0, 1) && !__LIB_2__::func_1(uLocal_341[1], 0, 1)) || (__LIB_0__::func_665(Global_35, uLocal_341[0], 1, 1) > 20f && __LIB_0__::func_665(Global_35, uLocal_341[1], 1, 1) > 20f)) || __LIB_0__::func_94(uLocal_341[0], vLocal_34, 1) < 5f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_107()
{
	int iVar0;
	int iVar1;
	switch (iLocal_501)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(uLocal_341[0], 315, true);
			__LIB_2__::func_603(&(uLocal_341[0]), &iLocal_344, &Local_365, 1, 1);
			__LIB_2__::func_603(&(uLocal_341[0]), &iLocal_400, &Local_421, 1, 1);
			PED::_0x24C82EF607105FAA(uLocal_341[0], joaat("AGGRESSIVE"));
			PED::SET_PED_AS_COP(uLocal_341[0], true);
			if (iLocal_542 != 256)
			{
				LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
				LAW::_REPORT_CRIME(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, true);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
			if (!Local_138.f_44)
			{
				Local_138.f_44 = 1;
			}
			Local_138.f_46 = 1;
			iLocal_501++;
			break;
		case 1:
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_332, "COP", uLocal_341[0]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_332, "CRIMINAL", uLocal_341[1]);
			if (__LIB_2__::func_1(uLocal_341[0], 0, 1) && !PED::IS_PED_IN_COMBAT(uLocal_341[0], Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (bLocal_468)
				{
					if (__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_341[1], ENTITY::GET_ENTITY_COORDS(uLocal_341[0], true, false), 2f, 8);
					}
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Panic", 0.5f, 0f, 4);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				}
				else
				{
					if (__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_341[1], ENTITY::GET_ENTITY_COORDS(uLocal_341[0], true, false), 2f, 8);
					}
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_High", 0.5f, 0f, 4);
					TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 2f, 1, 0);
				}
				__LIB_1__::func_474(uLocal_341[0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_341[0], true);
			}
			if (!bLocal_479)
			{
				if (__LIB_2__::func_1(uLocal_341[1], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Flee_Human_PotentialThreat", 0.5f, 1f, 4);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_1__::func_474(uLocal_341[1], &iVar1, 0, 0, 1, 1);
					if (!bLocal_472)
					{
						if (__LIB_2__::func_1(uLocal_341[1], 0, 1) && !bLocal_476)
						{
							__LIB_2__::func_303(uLocal_341[1], Global_35, func_68(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(uLocal_341[1], Global_35, 2000, 0, 51, 1);
						}
					}
					__LIB_2__::func_788(&(uLocal_341[1]), 1, 0, 1);
				}
			}
			else if (bLocal_476)
			{
			}
			else
			{
				PED::SET_PED_TO_RAGDOLL(uLocal_341[1], 1000, 1000, 0, false, false, false);
				if (!bLocal_472)
				{
					if (__LIB_2__::func_1(uLocal_341[1], 0, 1))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_341[1], Global_35, 2000, 0, 51, 1);
					}
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_341[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(uLocal_341[1], true);
			}
			__LIB_1__::func_148(&uLocal_512);
			if (!MAP::DOES_BLIP_EXIST(uLocal_543[0]))
			{
				__LIB_2__::func_73(uLocal_341[0], &(uLocal_543[0]), -118010418, 580546400, 0, 0);
			}
			if (!bLocal_492)
			{
				bLocal_492 = true;
			}
			if (!__LIB_3__::func_649(uLocal_341[0], uLocal_341[1]))
			{
				if (PED::IS_PED_IN_COMBAT(uLocal_341[0], Global_35) || __LIB_0__::func_491(uLocal_341[0], joaat("SCRIPT_TASK_GRAPPLE")))
				{
					iLocal_501++;
				}
			}
			break;
		case 2:
			if (!bLocal_468)
			{
				if (__LIB_0__::func_265(&uLocal_512) > 1f && !__LIB_2__::func_136(uLocal_341[0], 0))
				{
					if (iLocal_542 == 8)
					{
						__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(8), "", -1f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						switch (Local_138.f_51.f_4)
						{
							case 0:
								__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(33), "", -1f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								break;
							case 1:
								__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(33), "", -1f, 3, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
					PED::SET_PED_KEEP_TASK(uLocal_341[0], true);
					__LIB_1__::func_148(&uLocal_512);
					iLocal_501++;
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(uLocal_341[0], Global_35, 0, 0);
				PED::SET_PED_KEEP_TASK(uLocal_341[0], true);
				__LIB_2__::func_303(uLocal_341[0], Global_35, func_68(10), "", -1f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_512);
				iLocal_501++;
			}
			break;
		case 3:
			PED::SET_PED_CONFIG_FLAG(uLocal_341[0], 315, true);
			PED::_0x24C82EF607105FAA(uLocal_341[0], joaat("AGGRESSIVE"));
			__LIB_2__::func_603(&(uLocal_341[0]), &iLocal_344, &Local_365, 1, 1);
			PED::SET_PED_AS_COP(uLocal_341[0], true);
			__LIB_1__::func_148(&uLocal_512);
			iLocal_501++;
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_225()
{
	if (__LIB_3__::func_722(uLocal_341[0], &(Local_138.f_5), &iLocal_542, 0))
	{
		if (iLocal_542 == 131072 || iLocal_542 == 262144)
		{
			if (__LIB_0__::func_665(Global_35, uLocal_341[0], 1, 1) < 5f)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_229(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_393(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_236(int iParam0, int iParam1)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	__LIB_2__::func_45(0, Global_35, 0);
	TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), iParam1, 0f, 60f, 4);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_245()
{
	__LIB_3__::func_426(&Local_138, &(Local_138.f_48), 105, &(Local_138.f_51.f_6));
}

int func_393(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_393(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

