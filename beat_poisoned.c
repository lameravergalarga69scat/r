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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	char[] cLocal_19[8] = 0;
	char* sLocal_20 = NULL;
	var uLocal_21[2] = { 0, 0 };
	int iLocal_24 = 0;
	struct<31> Local_25 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58[1] = { 0 };
	var uLocal_60[1] = { 0 };
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<193> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<2> Local_262[1];
	var uLocal_265 = 6;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
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
	struct<32> Local_314[1];
	struct<12> Local_347[1];
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 1176256512;
	struct<21> Local_363[1];
	struct<17> Local_385[3];
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	struct<9> Local_439[1];
	int iLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
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
	var uLocal_473[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_479[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_495[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_502 = { 0f, 0f, 0f };
	vector3 vLocal_505 = { 0f, 0f, 0f };
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	struct<4> Local_511 = { 0, 0, 0, 0 } ;
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
	int iLocal_535 = 0;
	struct<23> Local_536[2];
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	vector3 vLocal_586 = { 0f, 0f, 0f };
	int iLocal_589 = 0;
	float fLocal_590 = 0f;
	float fLocal_591 = 0f;
	bool bLocal_592 = false;
	bool bLocal_593 = false;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = -1;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 2;
	var uLocal_603 = 1;
	var uLocal_604 = 1;
	var uLocal_605 = 1;
	var uLocal_606 = 0;
	var uLocal_607 = 1;
	var uLocal_608 = 2;
	var uLocal_609 = 2;
	var uLocal_610 = 3;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 3;
	var uLocal_614 = 1;
	var uLocal_615 = 3;
	var uLocal_616 = 3;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	bool bLocal_619 = false;
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
	cLocal_19 = "Beat Poisoned";
	iLocal_24 = joaat("WB_HERB_OLEANDER_SAGE_SINGLE");
	iLocal_437 = __LIB_2__::func_340(3, 0, 0) | 8;
	iLocal_438 = -1;
	vLocal_586 = { 20f, 20f, 20f };
	fLocal_590 = 40f;
	fLocal_591 = 40f;
	Local_68.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_619 = true;
	}
	if (!bLocal_619)
	{
		Local_68.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		uLocal_62 = uLocal_62;
		__LIB_3__::func_368(&Local_68, 1);
		func_5(&iLocal_67);
		__LIB_2__::func_433(&(Local_68.f_5));
		__LIB_2__::func_507(&(Local_68.f_5), 700);
		__LIB_2__::func_104(&(Local_68.f_5), 0);
		__LIB_2__::func_105(&(Local_68.f_5), 1);
		__LIB_2__::func_662(&(Local_68.f_5), 1);
		__LIB_2__::func_111(&(Local_68.f_5), 1);
		__LIB_2__::func_180(&(Local_68.f_5), 1);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_619, 1283, 0);
		if (bLocal_619)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_65)
			{
				case 0:
					if (func_15())
					{
						iLocal_65 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_68, &vScriptParam_0, 0, 0, 0, 1, 0, 0))
					{
						func_17(&Local_68, &iLocal_508, &iLocal_509);
						Local_68.f_51.f_4 = iLocal_509;
						__LIB_3__::func_455(&Local_68, iLocal_508, 2073);
						func_20(&Local_314, iLocal_508, iLocal_509);
						func_21(&Local_385, &(Local_363[0 /*21*/]));
						func_22(&Local_385, 0);
						func_23();
						func_24(iLocal_67, iLocal_508, iLocal_509, &vLocal_479, &vLocal_495, &vLocal_502);
						iLocal_65 = 3;
					}
					else if (Local_68.f_160)
					{
						func_13();
					}
					break;
				case 3:
					if (func_25())
					{
						func_26();
						__LIB_3__::func_400(Local_68.f_51, &Local_347, 0, 0, 0, -1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_347[0 /*12*/].f_8))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_347[0 /*12*/].f_8, false);
						}
						func_28();
						func_29(&uLocal_594);
						func_30(2, &vLocal_495, &uLocal_21, iLocal_24);
						iLocal_17 = __LIB_2__::func_528(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 0, 0);
						iLocal_65 = 4;
					}
					break;
				case 4:
					if (!__LIB_2__::func_1(uLocal_58[0], 0, 1) || !__LIB_17__::func_887(&Local_68, &uLocal_58, iLocal_67, 0, 1, 0, 1, 1))
					{
						if (iLocal_67 != 0)
						{
							func_13();
						}
					}
					if (!Local_68.f_46)
					{
						if (__LIB_3__::func_646(uLocal_58[0], 0, &(Local_68.f_5), &iLocal_460, 0, 0) || ENTITY::_0x3EC28DA1FFAC9DDD(Local_314[0 /*32*/].f_11, Global_35, 1, 1))
						{
							__LIB_3__::func_552(uLocal_58[0]);
							if (__LIB_4__::func_241(4))
							{
								switch (iLocal_460)
								{
									case 2:
									case 2048:
										func_37(0, 1);
										Local_68.f_46 = 1;
										__LIB_1__::func_864(uLocal_58[0], 0, 0);
										__LIB_1__::func_649(&iLocal_64, 6);
										break;
									default:
										break;
								}
							}
							else
							{
								func_37(0, 1);
								Local_68.f_46 = 1;
								__LIB_1__::func_649(&iLocal_64, 4);
							}
						}
					}
					if (func_40())
					{
						func_13();
					}
					if (__LIB_3__::func_431(&Local_68, &uLocal_58, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_68.f_50 = 1;
						func_13();
					}
					func_42();
					break;
			}
			BUILTIN::WAIT(Local_68.f_158);
		}
	}
}

void func_5(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_390(48, 1, 0);
	*iParam0 = iVar0;
	*iParam0 = 0;
}

void func_13()
{
	int iVar0;
	__LIB_3__::func_525(&uLocal_584, &uLocal_585);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_589);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_2__::func_353(&(uLocal_473[iVar0]), 1);
		iVar0++;
	}
	func_53();
	PED::_0x39A2FC5AF55A52B1(uLocal_58[0], -1);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_58[0]));
	if (__LIB_2__::func_1(Local_314[0 /*32*/].f_11, 0, 1))
	{
		PED::_0x39A2FC5AF55A52B1(Local_314[0 /*32*/].f_11, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_314[0 /*32*/].f_11));
	}
	if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		PED::_0xBBF6D1D07C02D00A(uLocal_58[0], 5);
	}
	__LIB_0__::func_325(&(uLocal_60[0]));
	func_55();
	__LIB_4__::func_72(Global_35);
	__LIB_3__::func_493(&Local_68, &uLocal_58, &uLocal_60, iLocal_67, iLocal_508, iLocal_509, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_15()
{
	switch (iLocal_63)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_68))
			{
				func_60();
				func_61();
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_24, 15, 0, 0);
				func_62(&Local_347);
				__LIB_3__::func_314(&Local_347);
				func_64(&Local_262, &uLocal_265);
				func_65(&iLocal_449);
				iLocal_63 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_62, cLocal_19))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_265))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_347))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_24, false))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_314))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_449, true, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_17(var uParam0, int iParam1, int iParam2)
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
		case 2:
			*iParam1 = 10;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 10;
			*iParam2 = 1;
			break;
		case 4:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 11;
			*iParam2 = 1;
			break;
		case 6:
			*iParam1 = 11;
			*iParam2 = 2;
			break;
		case 7:
			*iParam1 = 11;
			*iParam2 = 3;
			break;
		case 8:
			*iParam1 = 11;
			*iParam2 = 4;
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			(iParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			switch (iParam2)
			{
				case 0:
					(iParam0[0 /*32*/])->f_15 = { 4.29f, 3.04f, 0.95f };
					(iParam0[0 /*32*/])->f_18 = 0f;
					break;
				case 1:
					(iParam0[0 /*32*/])->f_15 = { 4.29f, 5.04f, 0.95f };
					(iParam0[0 /*32*/])->f_18 = 180f;
					break;
			}
			break;
		case 10:
			(iParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			switch (iParam2)
			{
				case 0:
					(iParam0[0 /*32*/])->f_15 = { 2.58f, -4.6f, 1.11f };
					(iParam0[0 /*32*/])->f_18 = 112.52f;
					break;
				case 1:
					(iParam0[0 /*32*/])->f_15 = { 5.6f, 4.73f, 1.77f };
					(iParam0[0 /*32*/])->f_18 = 132.78f;
					break;
				case 2:
					(iParam0[0 /*32*/])->f_6 = { 6.15f, 1.5f, 0.77f };
					(iParam0[0 /*32*/])->f_15 = { 8.16f, 5.87f, 2.32f };
					(iParam0[0 /*32*/])->f_18 = -89.92f;
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 0:
					(iParam0[0 /*32*/])->f_6 = { -1.91f, -9.75f, -0.76f };
					(iParam0[0 /*32*/])->f_15 = { -0.69f, -5.8f, -0.61f };
					(iParam0[0 /*32*/])->f_18 = 33.89f;
					break;
				case 1:
					(iParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
					(iParam0[0 /*32*/])->f_15 = { 9.99f, -6.11f, -0.77f };
					(iParam0[0 /*32*/])->f_18 = -54.93f;
					break;
				case 2:
					(iParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
					(iParam0[0 /*32*/])->f_15 = { -3.55f, -3.29f, 1.1f };
					(iParam0[0 /*32*/])->f_18 = -37.24f;
					break;
				case 3:
					(iParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
					(iParam0[0 /*32*/])->f_15 = { 5.98f, -3.97f, 0.88f };
					(iParam0[0 /*32*/])->f_18 = 33.53f;
					break;
				case 4:
					(iParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
					(iParam0[0 /*32*/])->f_15 = { 7.39f, -3.8f, -0.61f };
					(iParam0[0 /*32*/])->f_18 = 33.89f;
					break;
			}
			break;
	}
}

void func_21(var uParam0, var uParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(uParam0[2 /*17*/], __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_621(uParam0[2 /*17*/], 1, 0);
	func_78(uParam1, uParam0);
	__LIB_3__::func_158(uParam0[2 /*17*/], 1);
}

void func_22(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_80(uParam0[iVar0 /*17*/], bParam1))
		{
		}
		iVar0++;
	}
}

void func_23()
{
	switch (iLocal_508)
	{
		case 0:
			StringCopy(&(Local_314[0 /*32*/].f_23), "BROKE_MAN", 64);
			break;
		case 10:
			StringCopy(&(Local_314[0 /*32*/].f_23), "0759_A_M_M_EmRFarmHand_01_WHITE_01", 64);
			break;
		default:
			StringCopy(&(Local_314[0 /*32*/].f_23), "BROKE_MAN", 64);
			break;
	}
}

void func_24(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*(uParam3[0 /*3*/]) = { 1910.382f, -946.9562f, 42.25608f };
							*(uParam3[1 /*3*/]) = { 1901.65f, -941.0818f, 41.66986f };
							*(uParam3[2 /*3*/]) = { 1903.681f, -933.4089f, 41.88094f };
							*(uParam3[3 /*3*/]) = { 1886.052f, -942.337f, 41.69016f };
							*(uParam3[4 /*3*/]) = { 1899.771f, -938.6382f, 41.62571f };
							*(uParam4[0 /*3*/]) = { 1885.479f, -923.6439f, 41.42876f };
							*(uParam4[1 /*3*/]) = { 1898.872f, -930.2759f, 41.56585f };
							*uParam5 = { 1894.921f, -941.3691f, 41.59118f };
							break;
						case 1:
							*(uParam4[0 /*3*/]) = { 2054.267f, -1037.766f, 42.3483f };
							*uParam5 = { 2062.989f, -1048.897f, 42.3269f };
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 0:
							*(uParam4[0 /*3*/]) = { 2471.132f, 973.7073f, 93.52923f };
							*(uParam4[1 /*3*/]) = { 2472.519f, 970.8387f, 93.42715f };
							*uParam5 = { 2476.331f, 975.501f, 93.3968f };
							break;
						case 1:
							*(uParam3[0 /*3*/]) = { 2571.126f, 508.6737f, 66.63366f };
							*(uParam4[0 /*3*/]) = { 2582.321f, 475.2478f, 65.64431f };
							*(uParam4[1 /*3*/]) = { 2584.312f, 460.0063f, 65.04598f };
							*uParam5 = { 2589.725f, 467.8037f, 65.4894f };
							break;
						case 2:
							*(uParam3[0 /*3*/]) = { 2223.146f, 1483.775f, 89.84225f };
							*(uParam3[1 /*3*/]) = { 2223.928f, 1487.902f, 90.00401f };
							*(uParam4[0 /*3*/]) = { 2236.502f, 1488.502f, 92.07675f };
							*(uParam4[1 /*3*/]) = { 2233.208f, 1496.29f, 91.59969f };
							*uParam5 = { 2221.776f, 1486.165f, 89.96157f };
							break;
					}
					break;
				case 11:
					switch (iParam2)
					{
						case 0:
							*(uParam4[0 /*3*/]) = { 1454.594f, -754.294f, 53.49437f };
							*(uParam4[1 /*3*/]) = { 1457.625f, -755.0406f, 53.03484f };
							*uParam5 = { 1466.441f, -770.625f, 51.03603f };
							break;
						case 1:
							*(uParam4[0 /*3*/]) = { 1092.512f, -474.603f, 85.87717f };
							*(uParam4[1 /*3*/]) = { 1082.251f, -481.0385f, 87.12666f };
							*uParam5 = { 1075.944f, -475.3768f, 87.80677f };
							break;
						case 2:
							*(uParam4[0 /*3*/]) = { 1640.386f, -512.387f, 47.91596f };
							*(uParam4[1 /*3*/]) = { 1638f, -507.5019f, 47.27369f };
							*uParam5 = { 1646.24f, -501.9102f, 46.19837f };
							break;
						case 3:
							*(uParam4[0 /*3*/]) = { 1098.534f, -882.674f, 67.0222f };
							*(uParam4[1 /*3*/]) = { 1105.636f, -880.7816f, 67.386f };
							*uParam5 = { 1108.091f, -899.2719f, 66.0209f };
							break;
						case 4:
							*(uParam4[0 /*3*/]) = { 2017.743f, -1493.785f, 41.2337f };
							*(uParam4[1 /*3*/]) = { 2025.939f, -1485.223f, 40.77231f };
							*uParam5 = { 2013.114f, -1484.946f, 42.275f };
							break;
					}
					break;
			}
			break;
	}
}

bool func_25()
{
	switch (iLocal_66)
	{
		case 0:
			iLocal_66 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_68.f_51, 0f, &Local_314, &uLocal_58, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_66 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_26()
{
	if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		if (PED::_0xA0BC8FAED8CFEB3C(uLocal_58[0]))
		{
			__LIB_4__::func_239(uLocal_58[0]);
		}
		__LIB_3__::func_178(uLocal_58[0], &Local_439);
		__LIB_1__::func_991(uLocal_58[0], 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_58[0], true, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_58[0], true);
		__LIB_4__::func_490(uLocal_58[0]);
		__LIB_2__::func_190(uLocal_58[0], __LIB_4__::func_211(joaat("REWARD_BEAT_SMALL"), 0, -1));
		__LIB_2__::func_463(uLocal_58[0], joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 1, 0);
		PED::APPLY_DAMAGE_TO_PED(uLocal_58[0], 45, 0, 14411, 0);
		PED::SET_PED_RESET_FLAG(uLocal_58[0], 53, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_58[0], 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_58[0], 77, true);
		TASK::TASK_TURN_PED_TO_FACE_COORD(uLocal_58[0], vLocal_502, 0);
		PED::_0x89F5E7ADECCCB49C(uLocal_58[0], "Very_Drunk");
		PED::SET_PED_CONFIG_FLAG(uLocal_58[0], 315, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_58[0], 130, true);
		PED::_0xC163DAC52AC975D3(uLocal_58[0], 5);
		ENTITY::_0x18FF3110CF47115D(uLocal_58[0], 0, 0);
		ENTITY::_0x18FF3110CF47115D(uLocal_58[0], 1, 0);
	}
	__LIB_3__::func_867(&uLocal_584, &uLocal_585, Local_68.f_51, 0f, 0f, 0f, vLocal_586, 0, 0, 1, 0, 0);
	PED::_0x7C00CFC48A782DC0(uLocal_584, uLocal_58[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	__LIB_2__::func_967(&(Local_68.f_5), uLocal_58[0], Local_314[0 /*32*/].f_11, 0);
	Local_536[0 /*23*/].f_1[0] = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
	Local_536[0 /*23*/].f_12[0] = 1;
	Local_536[0 /*23*/] = 1;
	Local_536[1 /*23*/].f_1[0] = joaat("CONSUMABLE_GIN");
	Local_536[1 /*23*/].f_1[1] = joaat("CONSUMABLE_APPLE");
	Local_536[1 /*23*/].f_12[0] = 1;
	Local_536[1 /*23*/].f_12[1] = 1;
	Local_536[1 /*23*/] = 2;
	ENTITY::_0xA88E215CEB0435C0(Local_314[0 /*32*/].f_11, &(Local_536[0 /*23*/]), 205298116, 128, 2, 0);
	ENTITY::_0xA88E215CEB0435C0(Local_314[0 /*32*/].f_11, &(Local_536[1 /*23*/]), 205298116, 128, 2, 1);
	iLocal_589 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), uLocal_58[0], 0f, fLocal_590, fLocal_591, -1f, -1f, 180f, false, false, -1, -1);
	__LIB_3__::func_285(uLocal_58[0], &Local_68, 0);
	if (__LIB_2__::func_1(Local_314[0 /*32*/].f_11, 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(Local_314[0 /*32*/].f_11, 178, true);
		__LIB_2__::func_344(&(Local_314[0 /*32*/].f_11));
	}
}

void func_28()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_0__::func_86(vLocal_479[iVar0 /*3*/]))
		{
			__LIB_2__::func_659(&(uLocal_473[iVar0]), vLocal_479[iVar0 /*3*/], 3f, 0, 0);
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 2;
	uParam0->f_21 = 2;
	uParam0->f_17 = 2;
	uParam0->f_18 = 2;
	uParam0->f_7 = 0;
}

void func_30(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
		{
			(*uParam2)[iVar0] = TASK::CREATE_SCENARIO_POINT(iParam3, *(uParam1[iVar0 /*3*/]), 0, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_ACTIVE((*uParam2)[iVar0], true);
		}
		iVar0++;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		__LIB_3__::func_465(3, joaat("HONOR_EVENT_LOOT_INNOCENT"), 0, 0, uLocal_58[0], 0, 1065353216 /* Float: 1f */, 0);
		return;
	}
	if (bLocal_592 && !bParam1)
	{
		return;
	}
	if (bLocal_593 && !bParam1)
	{
		__LIB_3__::func_465(4, 0, 0, 0, uLocal_58[0], 0, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_3__::func_465(3, 0, 0, 0, uLocal_58[0], 0, 1065353216 /* Float: 1f */, 0);
	}
	bLocal_592 = true;
}

bool func_40()
{
	if (iLocal_64 < 6)
	{
		func_144();
	}
	if (iLocal_64 > 1)
	{
		func_145();
	}
	switch (iLocal_64)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_64, 1);
			break;
		case 1:
			__LIB_1__::func_649(&iLocal_64, 2);
			break;
		case 2:
			if (func_146())
			{
				if (func_147(1, 1, 1))
				{
					func_148(4096);
				}
				__LIB_1__::func_649(&iLocal_64, 3);
			}
			break;
		case 3:
			if (func_149())
			{
				if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
				{
					if (__LIB_2__::func_227(0, 1, uLocal_58[0], 1))
					{
						func_151(262144);
						func_151(524288);
						func_152(&(Local_363[0 /*21*/]), &Local_385, iLocal_508, &iLocal_437, 7, 0, 1, 0, 1);
						__LIB_1__::func_649(&iLocal_64, 6);
					}
				}
				else
				{
					__LIB_1__::func_649(&iLocal_64, 6);
				}
			}
			break;
		case 4:
			func_153();
			__LIB_2__::func_461(0);
			__LIB_3__::func_286(uLocal_58[0]);
			func_55();
			__LIB_4__::func_72(Global_35);
			__LIB_3__::func_525(&uLocal_584, &uLocal_585);
			__LIB_0__::func_325(&(uLocal_60[0]));
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			if (__LIB_0__::func_104())
			{
				__LIB_0__::func_105(1);
			}
			if (!MISC::IS_STRING_NULL(sLocal_20))
			{
				__LIB_1__::func_390(sLocal_20, 1);
			}
			if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
			{
				__LIB_1__::func_148(&uLocal_461);
				__LIB_2__::func_279(uLocal_58[0], 1);
				if (__LIB_4__::func_241(2))
				{
					func_161(uLocal_58[0], Global_35, 1048576, 1, 0, -1073741824 /* Float: -2f */);
				}
				else
				{
					func_161(uLocal_58[0], Global_35, 524288, 1, 0, -1073741824 /* Float: -2f */);
				}
				if (__LIB_4__::func_241(32768))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_58[0], Global_35, 5, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_58[0], Global_35, 3, 0, -1f, -1, Local_314[0 /*32*/].f_11);
				}
				func_148(256);
				__LIB_1__::func_649(&iLocal_64, 5);
			}
			else
			{
				__LIB_1__::func_649(&iLocal_64, 6);
			}
			break;
		case 5:
			if (__LIB_4__::func_241(32768))
			{
				if (func_162())
				{
					__LIB_1__::func_864(uLocal_58[0], 0, 0);
					__LIB_1__::func_649(&iLocal_64, 6);
				}
			}
			else if ((!__LIB_2__::func_1(uLocal_58[0], 0, 1) || __LIB_0__::func_396(uLocal_58[0])) || __LIB_0__::func_94(uLocal_58[0], Local_68.f_51, 1) > 35f)
			{
				func_165(1);
				__LIB_1__::func_649(&iLocal_64, 6);
			}
			break;
		case 6:
			if (!__LIB_4__::func_241(128))
			{
				if (__LIB_3__::func_578(uLocal_58[0]))
				{
					func_37(1, 0);
					func_148(128);
				}
			}
			if ((__LIB_4__::func_241(67108864) && !__LIB_4__::func_241(1024)) && !Local_68.f_46)
			{
				if (func_167())
				{
					if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
					{
						if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_58[0], true))
						{
							func_55();
							func_165(6);
						}
						else
						{
							return false;
						}
					}
				}
			}
			else if (!__LIB_4__::func_241(1073741824 /* Float: 2f */))
			{
				PED::_0x5AF24CA9C974E51A(Global_35, uLocal_58[0]);
				func_148(1073741824 /* Float: 2f */);
			}
			if (__LIB_3__::func_332(vLocal_495[0 /*3*/], 1) > 55f || (__LIB_4__::func_241(512) && !__LIB_2__::func_1(uLocal_58[0], 0, 0)))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_42()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_241(512))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = __LIB_2__::func_528(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 0, 0);
	if (iLocal_17 > iVar2)
	{
		iLocal_17 = iVar2;
		return;
	}
	else if (iLocal_17 < iVar2)
	{
		iLocal_17 = iVar2;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_21[iVar0]))
			{
				iVar1++;
				if (__LIB_3__::func_332(TASK::_GET_SCENARIO_POINT_COORDS(uLocal_21[iVar0], true), 1) < 2f)
				{
					iLocal_16++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		return;
	}
	if (iLocal_16 >= iVar1)
	{
		func_148(512);
	}
}

void func_53()
{
	int iVar0;
	if (!__LIB_2__::func_1(uLocal_58[0], 0, 0))
	{
		return;
	}
	if (__LIB_2__::func_1(Local_314[0 /*32*/].f_11, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_MOUNT_ANIMAL(0, Local_314[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
		TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.25f, 0, 0);
		__LIB_1__::func_474(uLocal_58[0], &iVar0, 0, 0, 1, 1);
		func_148(67108864);
	}
	else
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_58[0], Global_35, 1f, 0, 0);
	}
}

void func_55()
{
	if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		__LIB_2__::func_603(&(uLocal_58[0]), &(Local_363[0 /*21*/]), &Local_385, 1, 1);
		PED::_0xE737D5F14304A2EC(uLocal_58[0], PLAYER::PLAYER_ID(), 120000);
	}
}

void func_60()
{
	Local_314[0 /*32*/].f_1 = joaat("RE_POISONED_MALES_01");
	switch (__LIB_1__::func_898())
	{
		case 10:
			Local_314[0 /*32*/].f_3 = 1825205111;
			break;
		case 0:
		case 11:
			Local_314[0 /*32*/].f_3 = 1584189116;
			break;
		default:
			Local_314[0 /*32*/].f_3 = 1584189116;
			break;
	}
	Local_314[0 /*32*/] = 4;
	Local_314[0 /*32*/].f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_314[0 /*32*/].f_13 = 0;
}

void func_61()
{
	__LIB_3__::func_445(&Local_314);
}

void func_62(var uParam0)
{
	(uParam0[0 /*12*/])->f_7 = joaat("S_INV_MEDICINE01X");
	*(uParam0[0 /*12*/]) = { 0f, 0f, -10f };
}

void func_64(var uParam0, var uParam1)
{
	(*uParam0)[0 /*2*/] = "script_re@poisoned@victim";
	(uParam0[0 /*2*/])->f_1 = "thank_you_vic";
	__LIB_3__::func_318((*uParam0)[0 /*2*/], uParam1);
}

void func_65(int iParam0)
{
	iParam0->f_4 = "script@beat@wilderness@poisoned@plant";
	*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 64, 0, false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
}

void func_78(var uParam0, var uParam1)
{
	(uParam1[2 /*17*/])->f_5 = "REPO_GIVE_MEDS";
	__LIB_2__::func_451(uParam0, 0);
}

bool func_80(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(iParam0, 0))
		{
			if (!__LIB_4__::func_240(iParam0, 0))
			{
				__LIB_2__::func_411(iParam0, 1, 0);
				return true;
			}
		}
	}
	else if (__LIB_1__::func_489(iParam0, 0))
	{
		__LIB_2__::func_411(iParam0, 0, 0);
		return true;
	}
	return false;
}

void func_144()
{
	if (!__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		func_55();
		return;
	}
	if (__LIB_4__::func_241(65536))
	{
		func_329(&Local_385, uLocal_58[0], &bLocal_18, __LIB_4__::func_241(64), 7f);
		func_80(&(Local_385[2 /*17*/]), bLocal_18);
	}
	if (__LIB_2__::func_456(&(Local_363[0 /*21*/])) && iLocal_438 != -1)
	{
		switch (iLocal_438)
		{
			case 0:
				if (__LIB_4__::func_241(16))
				{
					func_148(134217728);
					__LIB_2__::func_478(Global_35, uLocal_58[0], func_331(134217728, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_148(2048);
					__LIB_2__::func_478(Global_35, uLocal_58[0], func_331(33554432, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_148(262144);
				func_22(&Local_385, 0);
				break;
			case 2:
				__LIB_3__::func_609(8, 3);
				func_148(2);
				func_148(16);
				func_22(&Local_385, 0);
				break;
			case 1:
				func_153();
				if (__LIB_4__::func_241(65536))
				{
					__LIB_2__::func_478(Global_35, uLocal_58[0], func_334(iLocal_508, func_147(1, 1, 1)), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_148(2048);
					func_148(32);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_58[0], "RE_PO_BAY_V1_GREET_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_148(524288);
				}
				func_22(&Local_385, 0);
				break;
		}
	}
}

void func_145()
{
	iLocal_438 = func_335(&(uLocal_58[0]), &(Local_363[0 /*21*/]), 25f, &Local_385, &(Local_68.f_192), 0, 1, 0, 0, iLocal_437, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
}

bool func_146()
{
	float fVar0;
	if (!__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		return false;
	}
	switch (iLocal_459)
	{
		case 0:
			if (func_336())
			{
				iLocal_459 = 1;
			}
			break;
		case 1:
			fVar0 = 35f;
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				fVar0 = 45f;
			}
			if (__LIB_17__::func_888(&Local_68, &uLocal_360, 1f, 60f, fVar0, 1000, 1f, 1f, 1, 0, 0, 2f, 1, 0, 0))
			{
				if (!__LIB_4__::func_241(16777216))
				{
					func_148(32768);
					__LIB_3__::func_277(1891783641, Local_68.f_51, 1);
					PED::APPLY_PED_DAMAGE_PACK(uLocal_58[0], "PD_Vomit", 1f, 1f);
					func_161(uLocal_58[0], Global_35, 1, 1, 1, -1073741824 /* Float: -2f */);
					func_148(16777216);
				}
				vLocal_505 = { vLocal_502 };
				func_339();
				TASK::TASK_ENTER_ANIM_SCENE(uLocal_58[0], iLocal_449, "VICTIM", func_340(0), 1f, 1, 27, 20000, -1082130432 /* Float: -1f */);
				iLocal_459 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_94(uLocal_58[0], vLocal_502, 1) < 4f)
			{
				func_161(uLocal_58[0], Global_35, 4, 1, 0, -1073741824 /* Float: -2f */);
				__LIB_2__::func_315(1891783641, uLocal_58[0], 1);
				iLocal_459 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 && __LIB_2__::func_528(joaat("CONSUMABLE_MEDICINE"), 0, 0) > 0)
	{
		return true;
	}
	else if (bParam1 && __LIB_2__::func_528(joaat("CONSUMABLE_MEDICINE_USED"), 0, 0) > 0)
	{
		return true;
	}
	else if (bParam2 && __LIB_2__::func_528(joaat("CONSUMABLE_POTENT_MEDICINE"), 0, 0) > 0)
	{
		return true;
	}
	return false;
}

void func_148(int iParam0)
{
	if (!__LIB_4__::func_241(iParam0))
	{
		__LIB_1__::func_683(&iLocal_14, iParam0);
	}
}

bool func_149()
{
	var uVar0;
	switch (iLocal_458)
	{
		case 0:
			if (func_336())
			{
				__LIB_1__::func_649(&iLocal_458, 1);
			}
			break;
		case 1:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_449, func_340(8));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_449, func_340(1));
			__LIB_1__::func_649(&iLocal_458, 2);
			break;
		case 2:
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_58[0], iLocal_449) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_449) >= 0.3f)
			{
				__LIB_1__::func_649(&iLocal_458, 3);
			}
			break;
		case 3:
			if (__LIB_17__::func_888(&Local_68, &uLocal_360, 1f, 40f, 20f, 1000, 1f, 1f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_58[0], iLocal_449))
			{
				__LIB_2__::func_73(uLocal_58[0], &(uLocal_60[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(8), true);
				__LIB_2__::func_73(uLocal_58[0], &(uLocal_60[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_80(&(Local_385[0 /*17*/]), 1);
					func_80(&(Local_385[1 /*17*/]), 1);
				}
				__LIB_1__::func_649(&iLocal_458, 7);
			}
			break;
		case 4:
			if (__LIB_0__::func_665(uLocal_58[0], Global_35, 0, 1) <= 10f && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_58[0], iLocal_449))
			{
				__LIB_2__::func_73(uLocal_58[0], &(uLocal_60[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_80(&(Local_385[0 /*17*/]), 1);
					func_80(&(Local_385[1 /*17*/]), 1);
				}
				__LIB_1__::func_649(&iLocal_458, 7);
			}
			break;
		case 7:
			func_345(8, 0);
			func_345(16, 0);
			func_345(32, 0);
			func_345(64, 0);
			if (__LIB_4__::func_241(65536))
			{
				if (!__LIB_4__::func_241(1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_346(&iLocal_437, 1);
					if (!__LIB_4__::func_241(262144))
					{
						Local_385[0 /*17*/].f_5 = __LIB_2__::func_460(24);
					}
					__LIB_3__::func_374(&(uLocal_58[0]), &(Local_363[0 /*21*/]), &Local_385, 25f, iLocal_437, 0, 2, -1082130432 /* Float: -1f */);
					__LIB_3__::func_158(&(Local_385[2 /*17*/]), 0);
					func_80(&(Local_385[0 /*17*/]), !__LIB_4__::func_241(262144));
					func_80(&(Local_385[1 /*17*/]), 1);
					func_80(&(Local_385[2 /*17*/]), 1);
					func_148(1);
					__LIB_0__::func_37(&uLocal_470);
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_449) > 6.4f)
			{
				func_148(65536);
			}
			__LIB_4__::func_113(Global_35, uLocal_58[0], 3f, &uLocal_583, 0, 1, 0);
			_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_58[0], &uLocal_594);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_58[0], -1742247323))
			{
				__LIB_2__::func_315(1891783641, uLocal_58[0], 1);
			}
			if (__LIB_4__::func_241(262144))
			{
				if (!__LIB_4__::func_241(268435456))
				{
					if (!__LIB_8__::func_332(16))
					{
						if (func_351("bentOver"))
						{
							if (__LIB_4__::func_241(536870912))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(func_352(uLocal_58[0], &uVar0, 17, 19, 21, 1060437492 /* Float: 0.707f */)), true);
							}
							else
							{
								func_80(&(Local_385[0 /*17*/]), !__LIB_4__::func_241(262144));
								func_80(&(Local_385[1 /*17*/]), 1);
								func_80(&(Local_385[2 /*17*/]), bLocal_18);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(func_352(uLocal_58[0], &uVar0, 16, 18, 20, 1060437492 /* Float: 0.707f */)), true);
							}
							func_148(268435456);
						}
					}
					else if (!__LIB_8__::func_332(32))
					{
						if (func_351("bentOver"))
						{
							if (__LIB_4__::func_241(536870912))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(6), true);
							}
							else
							{
								func_80(&(Local_385[0 /*17*/]), !__LIB_4__::func_241(262144));
								func_80(&(Local_385[1 /*17*/]), 1);
								func_80(&(Local_385[2 /*17*/]), bLocal_18);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(5), true);
							}
							func_148(268435456);
						}
					}
					else
					{
						if (!__LIB_4__::func_241(536870912))
						{
							func_80(&(Local_385[0 /*17*/]), !__LIB_4__::func_241(262144));
							func_80(&(Local_385[1 /*17*/]), 1);
							func_80(&(Local_385[2 /*17*/]), bLocal_18);
						}
						func_148(268435456);
					}
				}
			}
			else if (__LIB_4__::func_241(524288))
			{
				if (!__LIB_4__::func_241(536870912))
				{
					if (!__LIB_8__::func_332(64))
					{
						if (func_351("bentOver"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(7), true);
							if (!__LIB_4__::func_241(268435456))
							{
								func_80(&(Local_385[0 /*17*/]), !__LIB_4__::func_241(262144));
								func_80(&(Local_385[2 /*17*/]), bLocal_18);
							}
							func_148(536870912);
							func_151(524288);
						}
					}
					else
					{
						if (!__LIB_4__::func_241(268435456))
						{
							func_80(&(Local_385[0 /*17*/]), !__LIB_4__::func_241(262144));
							func_80(&(Local_385[2 /*17*/]), bLocal_18);
						}
						func_148(536870912);
						func_151(524288);
					}
				}
			}
			if (!__LIB_4__::func_241(2048))
			{
				if (__LIB_4__::func_360(&(Local_439[0 /*9*/]), 20f, 1082130432 /* Float: 4f */, 0, 0, 0, 0))
				{
					if (__LIB_3__::func_280(&Local_439, 1, 12f))
					{
						func_80(&(Local_385[1 /*17*/]), 0);
						func_148(2048);
					}
				}
			}
			if (__LIB_4__::func_241(16))
			{
				__LIB_4__::func_72(Global_35);
				__LIB_1__::func_649(&iLocal_458, 8);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_58[0], joaat("ENDSINDEATH")) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_58[0], Local_262[0 /*2*/], "BASE_VIC", 1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(10), true);
				func_148(4);
				func_148(64);
				__LIB_2__::func_603(&(uLocal_58[0]), &(Local_363[0 /*21*/]), &Local_385, 1, 1);
				__LIB_4__::func_72(Global_35);
				__LIB_3__::func_609(8, 1);
				__LIB_1__::func_649(&iLocal_458, 13);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_449) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_58[0], iLocal_449))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_449);
				func_165(1);
				__LIB_0__::func_325(&(uLocal_60[0]));
				__LIB_1__::func_649(&iLocal_458, 14);
			}
			break;
		case 8:
			func_153();
			func_151(32768);
			ENTITY::_0x18FF3110CF47115D(uLocal_58[0], 0, 1);
			ENTITY::_0x18FF3110CF47115D(uLocal_58[0], 1, 1);
			__LIB_0__::func_325(&(uLocal_60[0]));
			__LIB_3__::func_524(&iLocal_589);
			iLocal_535 = func_352(uLocal_58[0], &iLocal_510, 12, 13, 14, 1060437492 /* Float: 0.707f */);
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_449, "player", &Local_511, true, func_340(iLocal_535), 2);
			__LIB_3__::func_623(&Local_25);
			Local_25.f_1 = Global_35;
			__LIB_1__::func_336(&(Local_25.f_23), 1);
			__LIB_1__::func_336(&(Local_25.f_23), 16);
			__LIB_1__::func_336(&(Local_25.f_23), 512);
			__LIB_1__::func_336(&(Local_25.f_23), 8192);
			Local_25.f_8 = { Local_511 };
			Local_25.f_19 = Local_511.f_3.f_2;
			Local_25.f_18 = 0.15f;
			Local_25.f_17 = 0.1f;
			Local_25.f_20 = 10f;
			Local_25.f_25 = iLocal_449;
			StringCopy(&(Local_25.f_26), func_340(iLocal_535), 32);
			StringCopy(&(Local_25.f_30), "player", 24);
			Local_25.f_21 = 1.5f;
			func_355(&Local_25, 106);
			__LIB_1__::func_649(&iLocal_458, 9);
			break;
		case 9:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_0__::func_48(PED::_GET_LAST_MOUNT(Global_35), Global_35, 5f, 1))
				{
					if (!__LIB_4__::func_241(2097152))
					{
						TASK::_TASK_FLEE_FROM_PED(PED::_GET_LAST_MOUNT(Global_35), Global_35, 0f, 0f, 0f, 5.5f, -1, 18688, 1f, 0);
						func_148(2097152);
					}
				}
			}
			if (func_355(&Local_25, 106))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_449, "player", Global_35, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_449, func_340(iLocal_535), true);
				ENTITY::SET_ENTITY_VISIBLE(Local_347[0 /*12*/].f_8, true);
				func_22(&Local_385, 0);
				__LIB_3__::func_158(&(Local_385[2 /*17*/]), 1);
				if (func_147(1, 0, 0))
				{
					func_357(joaat("CONSUMABLE_MEDICINE"), 1, 0, -142743235, 0);
				}
				else if (func_147(0, 1, 0))
				{
					func_357(joaat("CONSUMABLE_MEDICINE_USED"), 1, 0, -142743235, 0);
				}
				else if (func_147(0, 0, 1))
				{
					func_357(joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0, -142743235, 0);
				}
				__LIB_1__::func_649(&iLocal_458, 10);
			}
			break;
		case 10:
			if (__LIB_4__::func_241(32))
			{
				func_161(Global_35, uLocal_58[0], 1024, 0, 0, -1073741824 /* Float: -2f */);
			}
			else
			{
				func_161(Global_35, uLocal_58[0], 512, 0, 0, -1073741824 /* Float: -2f */);
			}
			if (func_359(func_358(), 1065353216 /* Float: 1f */) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_360();
				func_80(&(Local_385[0 /*17*/]), 0);
				func_80(&(Local_385[1 /*17*/]), 0);
				func_346(&iLocal_437, 0);
				__LIB_3__::func_374(&(uLocal_58[0]), &(Local_363[0 /*21*/]), &Local_385, 25f, iLocal_437, 0, 2, -1082130432 /* Float: -1f */);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_449, "PLAYER", Global_35);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
			{
				if (((func_359(func_361(), 1f) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_449, "victim")) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_449)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_58[0], iLocal_449))
				{
					TASK::_0x2E1D6D87346BB7D2(uLocal_58[0], Global_35, 1, 0);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_449, "victim", uLocal_58[0]);
					TASK::TASK_PLAY_ANIM(uLocal_58[0], Local_262[0 /*2*/], Local_262[0 /*2*/].f_1, 2f, -2f, -1, 67108880, func_362(), false, 0, false, 0, false);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_58[0], Global_35, -1, -1f, -1f, -1f);
					PED::_0xBBF6D1D07C02D00A(uLocal_58[0], 5);
					__LIB_1__::func_649(&iLocal_458, 11);
				}
			}
			break;
		case 11:
			func_345(2048, 1);
			func_345(4096, 1);
			if (__LIB_0__::func_27(iLocal_15, 2048) && !__LIB_4__::func_241(134217728))
			{
				func_148(134217728);
				func_80(&(Local_385[0 /*17*/]), 0);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_58[0], Local_262[0 /*2*/], Local_262[0 /*2*/].f_1, 1) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_58[0], Local_262[0 /*2*/], Local_262[0 /*2*/].f_1) > 0.7302f)
			{
				if (!__LIB_4__::func_241(256))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_58[0]);
					func_53();
				}
				else
				{
					PED::SET_PED_KEEP_TASK(uLocal_58[0], true);
				}
				__LIB_1__::func_649(&iLocal_458, 12);
			}
			break;
		case 12:
			if (__LIB_0__::func_27(iLocal_15, 16384))
			{
				if (!(__LIB_0__::func_27(iLocal_15, 262144) || __LIB_0__::func_27(iLocal_15, 131072)))
				{
					if (__LIB_2__::func_227(-3.5f, 1, uLocal_58[0], 1))
					{
						if (!__LIB_0__::func_75(&uLocal_470))
						{
							__LIB_1__::func_283(&uLocal_470, 0);
						}
						else if (__LIB_1__::func_285(&uLocal_470, 1f))
						{
							if (__LIB_2__::func_407(0) && iLocal_508 != 10)
							{
								__LIB_2__::func_478(Global_35, uLocal_58[0], func_331(131072, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_15, 131072);
							}
							else
							{
								__LIB_2__::func_478(Global_35, uLocal_58[0], func_331(262144, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_15, 262144);
							}
						}
					}
				}
				else if (__LIB_2__::func_227(-4.5f, 1, Global_35, 1) && __LIB_2__::func_227(-4.5f, 1, Global_35, 0))
				{
					if (__LIB_0__::func_27(iLocal_15, 262144))
					{
						if (iLocal_508 == 10)
						{
							__LIB_2__::func_478(uLocal_58[0], Global_35, func_331(32768, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_58[0], Global_35, func_331(32768, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					__LIB_1__::func_649(&iLocal_458, 14);
				}
			}
			else if (__LIB_2__::func_227(0, 1, uLocal_58[0], 1))
			{
				__LIB_2__::func_478(uLocal_58[0], Global_35, func_331(16384, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_15, 16384);
			}
			break;
		case 13:
			if (func_359(0.848f, 1f) || !__LIB_2__::func_1(uLocal_58[0], 0, 1))
			{
				if (__LIB_2__::func_118(uLocal_58[0], 1, 1) < 45f)
				{
					func_153();
				}
				if (__LIB_4__::func_241(2048) && __LIB_4__::func_241(4096))
				{
					func_37(0, 0);
				}
				__LIB_1__::func_864(uLocal_58[0], 0, 0);
				__LIB_0__::func_325(&(uLocal_60[0]));
				__LIB_1__::func_649(&iLocal_458, 14);
			}
			break;
		case 14:
			return true;
	}
	return false;
}

void func_151(int iParam0)
{
	if (__LIB_4__::func_241(iParam0))
	{
		__LIB_1__::func_681(&iLocal_14, iParam0);
	}
}

void func_152(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	(uParam1[0 /*17*/])->f_5 = __LIB_2__::func_460(iParam4);
	(uParam1[1 /*17*/])->f_5 = __LIB_2__::func_460(10);
	(uParam1[2 /*17*/])->f_5 = __LIB_2__::func_460(12);
	switch (iParam2)
	{
		case 10:
			(uParam1[0 /*17*/])->f_13 = "RE_PO_ROA_V1_GREET_POS";
			(uParam1[1 /*17*/])->f_13 = "RE_PO_ROA_V1_GREET_NEG2";
			break;
		default:
			(uParam1[0 /*17*/])->f_13 = "RE_PO_BAY_V1_GREET_POS";
			(uParam1[1 /*17*/])->f_13 = "RE_PO_BAY_V1_GREET_NEG2";
			break;
	}
	if (bParam8)
	{
		__LIB_2__::func_451(uParam0, 0);
	}
	func_80(uParam1[0 /*17*/], bParam5);
	func_80(uParam1[1 /*17*/], bParam5);
	func_80(uParam1[2 /*17*/], bParam7);
	__LIB_2__::func_526(uParam1, bParam5, 0);
	if (!bParam6)
	{
		*iParam3 = 202;
	}
	__LIB_2__::func_451(uParam0, 0);
}

void func_153()
{
	Local_68.f_44 = 1;
	if (__LIB_4__::func_241(16))
	{
		if (iLocal_508 == 10)
		{
			__LIB_3__::func_666(48, 1, 1, 0, 0);
		}
		else
		{
			__LIB_3__::func_666(48, 0, 1, 0, 0);
		}
	}
	else if (iLocal_508 == 10)
	{
		__LIB_3__::func_666(48, 1, 2, 0, 0);
	}
	else
	{
		__LIB_3__::func_666(48, 0, 2, 0, 0);
	}
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	iVar0 = 291934926;
	if (__LIB_0__::func_27(iLocal_15, iParam2) || !__LIB_2__::func_1(iParam0, 0, 0))
	{
		return;
	}
	if (bParam3 || __LIB_2__::func_227(fParam5, 1, 0, 0))
	{
		if (bParam3)
		{
			__LIB_2__::func_461(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam1, 0);
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam1, 0);
		}
		if (bParam4)
		{
			iVar0 = -500314840;
		}
		__LIB_2__::func_478(iParam0, iParam1, func_331(iParam2, iLocal_508, iLocal_67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, iVar0, 1, 0, 0);
		__LIB_1__::func_683(&iLocal_15, iParam2);
	}
}

bool func_162()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_58[0]))
	{
		return true;
	}
	if (__LIB_4__::func_241(8192))
	{
		if (!PED::_IS_PED_HOGTIED(uLocal_58[0]))
		{
			func_165(1);
			__LIB_2__::func_113(&uLocal_464);
			__LIB_1__::func_148(&uLocal_461);
			func_151(8192);
			return false;
		}
	}
	else if (PED::_IS_PED_HOGTIED(uLocal_58[0]))
	{
		__LIB_2__::func_113(&uLocal_461);
		__LIB_1__::func_148(&uLocal_464);
		func_148(8192);
		return false;
	}
	if (__LIB_4__::func_241(16384))
	{
		if (!PED::_IS_PED_LASSOED(uLocal_58[0]))
		{
			__LIB_2__::func_113(&uLocal_467);
			__LIB_1__::func_148(&uLocal_461);
			func_151(16384);
		}
	}
	else if (PED::_IS_PED_LASSOED(uLocal_58[0]))
	{
		__LIB_2__::func_113(&uLocal_461);
		__LIB_1__::func_148(&uLocal_467);
		func_148(16384);
	}
	if (!__LIB_4__::func_241(8192) && !__LIB_4__::func_241(16384))
	{
		if (__LIB_1__::func_313(&uLocal_461, 3f))
		{
			return true;
		}
	}
	if (__LIB_0__::func_264(&uLocal_464) > 13f)
	{
		return true;
	}
	if (__LIB_0__::func_264(&uLocal_467) > 10f)
	{
		return true;
	}
	return false;
}

void func_165(int iParam0)
{
	if (!__LIB_2__::func_1(uLocal_58[0], 0, 0))
	{
		return;
	}
	if (__LIB_4__::func_241(256))
	{
		func_148(1024);
	}
	else
	{
		TASK::SET_PED_PATH_AVOID_FIRE(uLocal_58[0], true);
		TASK::_0x8BB283A7888AD1AD(uLocal_58[0], 1, 50f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_58[0], true, 50f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_58[0], false);
		__LIB_4__::func_386(uLocal_58[0], 2);
		__LIB_3__::func_580(uLocal_58[0], func_380(iLocal_508, iLocal_509));
		if (iParam0 != 6)
		{
			__LIB_3__::func_535(uLocal_58[0], iParam0, Global_35, 0);
		}
		else
		{
			TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_58[0], Global_35, 1f, 0, 0);
		}
		func_148(1024);
		__LIB_3__::func_525(&uLocal_584, &uLocal_585);
	}
}

bool func_167()
{
	if (!__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		if (!__LIB_4__::func_241(1048576))
		{
			PED::_0x5AF24CA9C974E51A(Global_35, uLocal_58[0]);
			func_148(1048576);
			func_148(33554432);
			func_55();
		}
		return true;
	}
	if (__LIB_4__::func_241(1048576))
	{
		if (!__LIB_4__::func_241(33554432))
		{
			if (__LIB_2__::func_227(-4.5f, 1, 0, 0) && (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, uLocal_58[0], 1)))
			{
				func_55();
				func_148(33554432);
			}
		}
		else
		{
			return true;
		}
	}
	else if (__LIB_4__::func_241(262144) || __LIB_4__::func_241(524288))
	{
		if (__LIB_2__::func_227(-4.5f, 1, 0, 0) && (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, uLocal_58[0], 1)))
		{
			if (__LIB_2__::func_122(uLocal_58[0], func_383(iLocal_508, __LIB_4__::func_241(262144)), 1744022339, 0, 1, &(Local_314[0 /*32*/].f_23), func_384(iLocal_508, __LIB_4__::func_241(262144)), 1))
			{
				func_148(1048576);
			}
		}
		return false;
	}
	else if (__LIB_2__::func_456(&(Local_363[0 /*21*/])))
	{
		func_22(&Local_385, 0);
		switch (iLocal_438)
		{
			case 0:
				func_148(262144);
				break;
			default:
				func_148(524288);
				break;
		}
		return false;
	}
	else if (__LIB_2__::func_227(-4.5f, 1, 0, 0) && (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, uLocal_58[0], 1)))
	{
		func_22(&Local_385, 1);
	}
	return false;
}

void func_329(var uParam0, int iParam1, bool bParam2, bool bParam3, float fParam4)
{
	if (!__LIB_2__::func_1(iParam1, 0, 1))
	{
		return;
	}
	if (!func_147(1, 1, 1))
	{
		if (*bParam2)
		{
			func_80(uParam0[2 /*17*/], 0);
			*bParam2 = 0;
		}
		return;
	}
	if (bParam3)
	{
		if (*bParam2)
		{
			func_80(uParam0[2 /*17*/], 0);
			*bParam2 = 0;
		}
		return;
	}
	if (*bParam2)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_80(uParam0[2 /*17*/], 0);
			*bParam2 = 0;
			return;
		}
		else if (__LIB_2__::func_118(iParam1, 1, 1) > fParam4)
		{
			func_80(uParam0[2 /*17*/], 0);
			*bParam2 = 0;
			return;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
		{
			func_80(uParam0[2 /*17*/], 0);
			*bParam2 = 0;
			return;
		}
	}
	else if (func_147(1, 1, 1))
	{
		if ((__LIB_2__::func_118(iParam1, 1, 1) <= fParam4 && !PED::IS_PED_ON_MOUNT(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
		{
			func_80(uParam0[2 /*17*/], 1);
			*bParam2 = 1;
		}
	}
}

char* func_331(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			return "RE_PO_BAY_V1_CALL_IDLE";
		case 1:
			return __LIB_3__::func_394("PO", func_517(iParam1), "CALL", __LIB_3__::func_384(iParam2));
		case 4:
			return __LIB_3__::func_394("PO", func_517(iParam1), "YELL", __LIB_3__::func_384(iParam2));
		case 8:
			return __LIB_3__::func_394("PO", func_517(iParam1), "HELP", __LIB_3__::func_384(iParam2));
		case 16:
			return __LIB_3__::func_394("PO", func_517(iParam1), "ATE", __LIB_3__::func_384(iParam2));
		case 32:
			return __LIB_3__::func_394("PO", func_517(iParam1), "BURNS", __LIB_3__::func_384(iParam2));
		case 64:
			return __LIB_3__::func_394("PO", func_517(iParam1), "WATCH", __LIB_3__::func_384(iParam2));
		case 128:
			return __LIB_3__::func_394("PO", func_517(iParam1), "GOING", __LIB_3__::func_384(iParam2));
		case 256:
			return "RE_PO_BAY_V1_NO_MEDS";
		case 512:
			return __LIB_3__::func_394("PO", func_517(iParam1), "HERE", __LIB_3__::func_384(iParam2));
		case 1024:
			return __LIB_3__::func_394("PO", func_517(iParam1), "JOKING", __LIB_3__::func_384(iParam2));
		case 2048:
			return __LIB_3__::func_394("PO", func_517(iParam1), "THANK", __LIB_3__::func_384(iParam2));
		case 4096:
			return __LIB_3__::func_394("PO", func_517(iParam1), "PLANT", __LIB_3__::func_384(iParam2));
		case 32768:
			switch (iParam1)
			{
				case 10:
					return "RESPONSE_GENERIC";
				default:
					break;
			}
			return "RE_PO_BAY_V1_TRUE_THAT";
		case 65536:
			return __LIB_3__::func_394("PO", func_517(iParam1), "RECKON", __LIB_3__::func_384(iParam2));
		case 8192:
			return __LIB_3__::func_394("PO", func_517(iParam1), "FLOWER", __LIB_3__::func_384(iParam2));
		case 131072:
			return __LIB_3__::func_394("PO", func_517(iParam1), "WELCOME", __LIB_3__::func_384(iParam2));
		case 16384:
			return "RE_PO_BAY_V1_THANKS_BYE";
		case 262144:
			return __LIB_3__::func_394("PO", func_517(iParam1), "WLCOM", __LIB_3__::func_384(iParam2));
		case 524288:
			return __LIB_3__::func_394("PO", func_517(iParam1), "AGGRO", __LIB_3__::func_384(iParam2));
		case 1048576:
			return __LIB_3__::func_394("PO", func_517(iParam1), "MONSTER", __LIB_3__::func_384(iParam2));
		case 2097152:
			return __LIB_3__::func_394("PO", func_517(iParam1), "VOMIT", __LIB_3__::func_384(iParam2));
		case 4194304:
			return __LIB_3__::func_394("PO", func_517(iParam1), "WHIMPER", __LIB_3__::func_384(iParam2));
		case 8388608:
			return __LIB_3__::func_394("PO", func_517(iParam1), "CRY", __LIB_3__::func_384(iParam2));
		case 16777216:
			return __LIB_3__::func_394("PO", func_517(iParam1), "GAG", __LIB_3__::func_384(iParam2));
		case 33554432:
			return __LIB_3__::func_394("PO", func_517(iParam1), "GREET_QUESTION", __LIB_3__::func_384(iParam2));
		case 67108864:
			return __LIB_3__::func_394("PO", func_517(iParam1), "GREET_QUESTION_B", __LIB_3__::func_384(iParam2));
		case 134217728:
			return __LIB_3__::func_394("PO", func_517(iParam1), "GREET_RECOVERY", __LIB_3__::func_384(iParam2));
	}
	return "INVALID DIALOGUE STRING";
}

char* func_334(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
		case 11:
			if (bParam1)
			{
				return "RE_PO_BAY_V1_GREET_REFUSE";
			}
			else
			{
				return "RE_PO_BAY_V1_GREET_REFUSE_ALT";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "RE_PO_ROA_V1_GREET_REFUSE";
			}
			else
			{
				return "RE_PO_ROA_V1_GREET_REFUSE_ALT";
			}
			break;
	}
	return "RE_PO_ROA_V1_GREET_REFUSE";
}

int func_335(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_522(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_336()
{
	switch (iLocal_457)
	{
		case 0:
			iLocal_457 = 1;
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_449, true, false))
			{
				return false;
			}
			else
			{
				iLocal_457 = 2;
			}
			break;
		case 2:
			func_526(1);
			func_526(0);
			func_526(5);
			func_526(6);
			func_526(7);
			func_526(8);
			func_526(9);
			func_526(10);
			func_526(12);
			func_526(13);
			func_526(14);
			func_526(16);
			func_526(17);
			func_526(20);
			func_526(21);
			func_526(18);
			func_526(19);
			iLocal_457 = 3;
			break;
		case 3:
			if ((((((((((((((((!func_527(1) || !func_527(0)) || !func_527(5)) || !func_527(6)) || !func_527(7)) || !func_527(8)) || !func_527(9)) || !func_527(10)) || !func_527(12)) || !func_527(13)) || !func_527(14)) || !func_527(16)) || !func_527(17)) || !func_527(20)) || !func_527(21)) || !func_527(18)) || !func_527(19))
			{
				return false;
			}
			iLocal_457 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_339()
{
	float fVar0;
	vector3 vVar1;
	fVar0 = ENTITY::GET_ENTITY_HEADING(uLocal_58[0]);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(uLocal_58[0], true, false) };
	__LIB_2__::func_106(&vVar1, 50, 10, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_449, vLocal_505, 0f, 0f, fVar0, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_449, "VICTIM", uLocal_58[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_449, "PLAYER", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_449, "MEDS", Local_347[0 /*12*/].f_8, 0);
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_449, "victim", &uLocal_523, true, func_340(9), 2);
}

char* func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "INTRO_WALK";
		case 1:
			return "INTRO_STANDING";
		case 2:
			return "DIALOGUE_01";
		case 3:
			return "DIALOGUE_02";
		case 4:
			return "DIALOGUE_02_ALT";
		case 5:
			return "DIALOGUE_03";
		case 6:
			return "DIALOGUE_03_ALT";
		case 7:
			return "DIALOGUE_04";
		case 8:
			return "DIALOGUE_FULL";
		case 9:
			return "DIALOGUE_FULL_INTRO";
		case 10:
			return "Dead";
		case 11:
			return "IDLE_LOOP";
		case 12:
			return "GIVE_MED_L";
		case 13:
			return "GIVE_MED_R";
		case 14:
			return "GIVE_MED_N";
		case 15:
			return "THANKS";
		case 16:
			return "PB_ILO_POS_L";
		case 17:
			return "PB_ILO_POS_L_ALT";
		case 18:
			return "PB_ILO_POS_R";
		case 19:
			return "PB_ILO_POS_R_ALT";
		case 20:
			return "PB_ILO_POS_N";
		case 21:
			return "PB_ILO_POS_N_ALT";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

void func_345(int iParam0, bool bParam1)
{
	if (__LIB_8__::func_332(iParam0) || !__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_58[0], func_530(iParam0)))
	{
		if (bParam1)
		{
			func_161(uLocal_58[0], Global_35, iParam0, 0, 0, -1073741824 /* Float: -2f */);
		}
		__LIB_18__::func_228(iParam0);
	}
}

var func_346(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		*iParam0 = __LIB_2__::func_340(2, 0, 0) | 2 | 8;
	}
	else
	{
		*iParam0 = __LIB_2__::func_340(3, 0, 0) | 2 | 8;
	}
	return *iParam0;
}

bool func_351(char* sParam0)
{
	if (__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		return ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_58[0], MISC::GET_HASH_KEY(sParam0));
	}
	return false;
}

int func_352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*iParam1 = __LIB_3__::func_112(iParam0, Global_35, iParam5);
	switch (*iParam1)
	{
		case 0:
			return iParam4;
		case 1:
			return iParam2;
		case 3:
			return iParam2;
		case 2:
			return iParam3;
		default:
			break;
	}
	return iParam4;
}

bool func_355(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_3__::func_663(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_3__::func_670(uParam0, iParam1))
				{
					__LIB_17__::func_875();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_3__::func_670(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_3__::func_664(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_3__::func_665(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_357(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_357(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_4__::func_105(iParam0, iParam1);
	return 1;
}

float func_358()
{
	switch (iLocal_510)
	{
		case 0:
			return 0.3678f;
		case 1:
			return 0.3402f;
		case 3:
			return 0.3402f;
		case 2:
			return 0.4302f;
		default:
			break;
	}
	return 0.9f;
}

bool func_359(float fParam0, float fParam1)
{
	float fVar0;
	if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_449) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_449, false)) || !__LIB_2__::func_1(uLocal_58[0], 0, 1))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_449);
	if (fVar0 > fParam0 && fVar0 < fParam1)
	{
		return true;
	}
	return false;
}

void func_360()
{
	if (bLocal_593)
	{
		return;
	}
	__LIB_3__::func_465(12, 0, 0, 0, uLocal_58[0], 0, 1065353216 /* Float: 1f */, 0);
	bLocal_593 = true;
}

float func_361()
{
	switch (iLocal_510)
	{
		case 0:
			return 0.939f;
		case 1:
			return 0.8317f;
		case 3:
			return 0.8317f;
		case 2:
			return 0.8368f;
		default:
			break;
	}
	return 0.9f;
}

float func_362()
{
	switch (iLocal_510)
	{
		case 0:
			return 0f;
		case 1:
			return 0.0764f;
		case 3:
			return 0.0764f;
		case 2:
			return 0.0764f;
		default:
			break;
	}
	return 0.0764f;
}

int func_380(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 11:
			return 105;
		case 10:
			return 105;
		default:
			break;
	}
	return 5;
}

char* func_383(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 10:
			if (bParam1)
			{
				return "GENERIC_THANKS";
			}
			else
			{
				return "SHAME_ON_YOU";
			}
			break;
		default:
			if (bParam1)
			{
				return "RE_PO_BAY_V1_GREET_POS";
			}
			else
			{
				return "RE_PO_BAY_V1_GREET_NEG";
			}
			break;
	}
	return "GOING_WELL";
}

int func_384(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 10:
			if (bParam1)
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		default:
			if (bParam1)
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 0;
}

char* func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 11:
			return "BAY";
		case 10:
			return "ROA";
		default:
			break;
	}
	return "INVALID";
}

int func_522(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_522(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_526(int iParam0)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_449, func_340(iParam0));
}

bool func_527(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_449))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_449, func_340(iParam0)))
	{
		return true;
	}
	return false;
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2020996765;
		case 4:
			return -1742808132;
		case 8:
			return 1593432860;
		case 16:
			return -1688767896;
		case 32:
			return 955594062;
		case 64:
			return 1231545641;
		case 128:
			return 724491042;
		case 512:
			return -1321041388;
		case 1024:
			return -1321041388;
		case 2048:
			return -1617468667;
		case 4096:
			return 1381893420;
		case 65536:
			return 1162149253;
		case 8192:
			return 637225765;
		case 131072:
			return 1971540094;
		case 262144:
			return 1986650537;
		case 524288:
			return -796249021;
		case 1048576:
			return -879222870;
		case 2097152:
			return 1341956964;
		case 4194304:
			return 1633974757;
		case 8388608:
			return 894224947;
		case 16777216:
			return 945048090;
		case 268435456:
			return -1742247323;
		default:
			break;
	}
	return -1;
}

