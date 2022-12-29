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
	struct<162> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 1;
	var uLocal_181 = 1;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	struct<32> Local_208[4];
	struct<12> Local_337[1];
	int iLocal_350 = 0;
	var uLocal_351[4] = { 0, 0, 0, 0 };
	int iLocal_356 = 0;
	vector3 vLocal_357 = { 0f, 0f, 0f };
	vector3 vLocal_360 = { 0f, 0f, 0f };
	vector3 vLocal_363 = { 0f, 0f, 0f };
	float fLocal_366 = 0f;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
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
	var uLocal_383 = -1;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 1097859072;
	var uLocal_393 = 1000;
	var uLocal_394 = 1067450368;
	var uLocal_395 = 5000;
	var uLocal_396 = 42;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 1077936128;
	var uLocal_399 = 1106247680;
	var uLocal_400 = 1103101952;
	var uLocal_401 = 1097859072;
	var uLocal_402 = 1103626240;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = -1;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 1097859072;
	var uLocal_421 = 1000;
	var uLocal_422 = 1067450368;
	var uLocal_423 = 5000;
	var uLocal_424 = 42;
	var uLocal_425 = 1103626240;
	var uLocal_426 = 1077936128;
	var uLocal_427 = 1106247680;
	var uLocal_428 = 1103101952;
	var uLocal_429 = 1097859072;
	var uLocal_430 = 1103626240;
	int iLocal_431 = 0;
	bool bLocal_432 = false;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	bool bLocal_440 = false;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
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
	var uLocal_455 = 4;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
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
	vLocal_360 = { Vector(92.82582f, 179.7823f, -123.603f) - Vector(97.8585f, 214.15f, -100.095f) };
	vLocal_363 = { Vector(102.4513f, 257.4113f, -85.42538f) - Vector(97.8585f, 214.15f, -100.095f) };
	iLocal_372 = 1;
	Local_14.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(1);
	}
	Local_14.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	uLocal_369 = uLocal_369;
	__LIB_3__::func_368(&Local_14, 1);
	__LIB_3__::func_302(&(Local_14.f_5), 0);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_104(&(Local_14.f_5), 1);
	__LIB_2__::func_634(&(Local_14.f_5), 1);
	__LIB_3__::func_302(&uLocal_375, 0);
	__LIB_2__::func_613(&uLocal_375, 1);
	__LIB_3__::func_333(&uLocal_375, 1);
	__LIB_3__::func_407(&uLocal_375, 30f);
	__LIB_3__::func_302(&uLocal_403, 0);
	__LIB_2__::func_50(&uLocal_403, 1);
	__LIB_2__::func_52(&uLocal_403, 1);
	__LIB_2__::func_105(&uLocal_403, 1);
	__LIB_2__::func_634(&uLocal_403, 1);
	iLocal_367 = __LIB_3__::func_390(43, 4, 0);
	func_17();
	func_18();
	__LIB_0__::func_11();
	while (true)
	{
		switch (iLocal_372)
		{
			case 1:
				if (__LIB_3__::func_669(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_431 = __LIB_0__::func_979(Local_14.f_51);
					func_22(&Local_14, &iLocal_431, &(Local_14.f_51.f_4));
					__LIB_3__::func_455(&Local_14, iLocal_431, 3271);
					func_25();
					__LIB_2__::func_165(Local_208[0 /*32*/].f_6, 40f, 0, 0, 5);
					__LIB_1__::func_572(Local_14.f_51, 150f, 0, 1, 0, 0, 0);
					MISC::CLEAR_AREA(Local_14.f_51, 150f, 1179656);
					bLocal_432 = true;
					STREAMING::REQUEST_COLLISION_AT_COORD(Local_14.f_51);
					iLocal_372 = 0;
				}
				else if (Local_14.f_160)
				{
					func_2(0);
				}
				break;
			case 0:
				if (func_28())
				{
					iLocal_372 = 3;
				}
				break;
			case 3:
				if (func_29())
				{
					iLocal_372 = 4;
				}
				break;
			case 4:
				if (!__LIB_3__::func_466(&Local_14, &uLocal_351, iLocal_367, 0, 0, 0, 1, 0))
				{
					func_2(0);
				}
				if (!Local_14.f_46)
				{
					if (__LIB_4__::func_334(uLocal_351[1], 0, &uLocal_403, &uLocal_374, 0, 0))
					{
						PED::_0x802092B07E3B1EEA(uLocal_351[0], Global_36, 3);
						TASK::TASK_COMBAT_PED(uLocal_351[0], Global_35, 0, 0);
						Local_14.f_46 = 1;
					}
					func_32();
				}
				if (func_33())
				{
					Local_14.f_50 = 1;
					func_2(0);
				}
				if (__LIB_3__::func_431(&Local_14, &uLocal_351, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_2(1);
				}
				break;
		}
		BUILTIN::WAIT(Local_14.f_158);
	}
}

void func_2(bool bParam0)
{
	int iVar0;
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_442);
	if (bParam0 && iLocal_371 != 5)
	{
		func_35();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_350))
		{
			VEHICLE::_0xC399CC89FBA05DA0(iLocal_350, 1);
		}
		Local_14.f_50 = 1;
	}
	if (bLocal_432)
	{
		__LIB_2__::func_161(Local_208[0 /*32*/].f_6, 40f, 5);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[iVar0]))
		{
			__LIB_2__::func_788(&(uLocal_351[iVar0]), 1, 1, 1);
		}
		iVar0++;
	}
	__LIB_17__::func_882(&Local_14, &uLocal_351, &uLocal_455, iLocal_367, iLocal_431, Local_14.f_51.f_4, 0, 1, 0, 1);
	__LIB_4__::func_333(&Local_14);
	if (Local_14.f_44)
	{
	}
	if (MAP::DOES_BLIP_EXIST(Local_14.f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(Local_14.f_51.f_6));
	}
	__LIB_0__::func_172(iLocal_462);
	__LIB_0__::func_172(iLocal_461);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_350))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_350);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_17()
{
	bool bVar0;
	int iVar1;
	Local_208[0 /*32*/].f_1 = joaat("RE_OUTLAWLOOTER_MALES_01");
	if ((__LIB_3__::func_657(43) % 2) == 0)
	{
		StringCopy(&(Local_208[0 /*32*/].f_23), "0130_G_M_M_UNICRIMINALS_01_WHITE_01", 64);
	}
	else
	{
		StringCopy(&(Local_208[0 /*32*/].f_23), "0131_G_M_M_UNICRIMINALS_01_WHITE_02", 64);
	}
	Local_208[1 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iVar1 = __LIB_3__::func_168(__LIB_1__::func_898());
	if (__LIB_4__::func_177(43, iVar1) > 0)
	{
		bVar0 = true;
	}
	switch (iLocal_367)
	{
		case 0:
			Local_208[3 /*32*/].f_1 = joaat("A_M_M_UNICORPSE_01");
			Local_208[2 /*32*/].f_1 = joaat("A_F_M_UNICORPSE_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = -346838721;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = -589558704;
					}
					Local_208[3 /*32*/].f_3 = -120266635;
					Local_208[2 /*32*/].f_3 = -120266635;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = 224785123;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 1776526941;
					}
					Local_208[3 /*32*/].f_3 = -1313156546;
					Local_208[2 /*32*/].f_3 = 1526539460;
					break;
				case 5:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = -1014964434;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = -1313916021;
					}
					Local_208[3 /*32*/].f_3 = -1990295382;
					Local_208[2 /*32*/].f_3 = 1220706383;
					break;
			}
			iLocal_356 = joaat("STAGECOACH001X");
			break;
		case 1:
			iLocal_356 = joaat("CART06");
			iLocal_368 = joaat("PG_VEH_CART06_2");
			Local_208[2 /*32*/].f_1 = joaat("A_M_M_UNICORPSE_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = 456984869;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 1316614046;
					}
					Local_208[2 /*32*/].f_3 = 1526539460;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = -1361955403;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = -1669099240;
					}
					Local_208[2 /*32*/].f_3 = -1906832519;
					break;
				case 5:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = -318198111;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 1413611698;
					}
					Local_208[2 /*32*/].f_3 = 684572554;
					break;
			}
			break;
		case 2:
			iLocal_356 = joaat("WAGON06X");
			iLocal_368 = joaat("PG_VEH_WAGON06X_1");
			Local_208[3 /*32*/].f_1 = joaat("A_M_M_UNICORPSE_01");
			Local_208[2 /*32*/].f_1 = joaat("A_M_M_UNICORPSE_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = 278819816;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 41277335;
					}
					Local_208[3 /*32*/].f_3 = 1220706383;
					Local_208[2 /*32*/].f_3 = 1178434377;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = -1965593124;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 1996572208;
					}
					Local_208[3 /*32*/].f_3 = 2086791053;
					Local_208[2 /*32*/].f_3 = 1792296050;
					break;
				case 5:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = 1219519983;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 919290405;
					}
					Local_208[3 /*32*/].f_3 = -158344433;
					Local_208[2 /*32*/].f_3 = 71890561;
					break;
			}
			break;
		case 3:
			Local_208[2 /*32*/].f_1 = joaat("A_M_M_UNICORPSE_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = 1494025392;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = -1824163552;
					}
					Local_208[2 /*32*/].f_3 = 872175303;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = 761344753;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = 460853023;
					}
					Local_208[2 /*32*/].f_3 = -1146002097;
					break;
				case 5:
					if (bVar0)
					{
						Local_208[0 /*32*/].f_3 = -1437357772;
					}
					else
					{
						Local_208[0 /*32*/].f_3 = -803474236;
					}
					Local_208[2 /*32*/].f_3 = -769519052;
					break;
			}
			break;
	}
	__LIB_3__::func_478(&(Local_208[0 /*32*/].f_22));
}

void func_18()
{
	if (__LIB_2__::func_117(128))
	{
		Local_337[0 /*12*/].f_7 = joaat("S_INTERACT_LANTERN02X");
	}
}

void func_22(var uParam0, int iParam1, var uParam2)
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
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*iParam1 = 4;
			*uParam2 = 1;
			break;
		case 4:
			*iParam1 = 6;
			*uParam2 = 0;
			break;
		case 5:
			*iParam1 = 6;
			*uParam2 = 1;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 7:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 8:
			*iParam1 = 9;
			*uParam2 = 2;
			break;
		case 9:
			*iParam1 = 9;
			*uParam2 = 3;
			break;
		case 10:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 11:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 12:
			*iParam1 = 10;
			*uParam2 = 2;
			break;
		case 13:
			*iParam1 = 10;
			*uParam2 = 3;
			break;
		case 14:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 15:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 16:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 17:
			*iParam1 = 13;
			*uParam2 = 0;
			break;
		case 18:
			*iParam1 = 13;
			*uParam2 = 1;
			break;
		case 19:
			*iParam1 = 14;
			*uParam2 = 0;
			break;
		case 20:
			*iParam1 = 14;
			*uParam2 = 1;
			break;
		case 21:
			*iParam1 = 14;
			*uParam2 = 2;
			break;
		case 22:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
		case 23:
			*iParam1 = 15;
			*uParam2 = 1;
			break;
		case 24:
			*iParam1 = 15;
			*uParam2 = 2;
			break;
		case 25:
			*iParam1 = 16;
			*uParam2 = 0;
			break;
		case 26:
			*iParam1 = 16;
			*uParam2 = 1;
			break;
	}
}

Vector3 func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -78.48f;
				case 1:
					return 0f, 0f, -177.84f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 92.16f;
				case 1:
					return 0f, 0f, -300.24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -237.6f;
				case 1:
					return 0f, 0f, -55.44f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -18.72f;
				case 1:
					return 0f, 0f, 263.52f;
				case 2:
					return 0f, 0f, -81.36f;
				case 3:
					return 0f, 0f, -174.96f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -109.44f;
				case 1:
					return 0f, 0f, 112.32f;
				case 2:
					return 0f, 0f, -183.6f;
				case 3:
					return 0f, 0f, -87.12f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -84.24f;
				case 1:
					return 0f, 0f, -32.4f;
				case 2:
					return 0f, 0f, -203.76f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 204.26f;
				case 1:
					return 0f, 0f, -66.96f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -49.68f;
				case 1:
					return 0f, 0f, 10.08f;
				case 2:
					return 0f, 0f, 58.32f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 52.56f;
				case 1:
					return 0f, 0f, -84.24f;
				case 2:
					return 0f, 0f, 112.32f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -78.48f;
				case 1:
					return 0f, 0f, -234.72f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	Local_208[0 /*32*/].f_6 = { 2.50479f, -1.84608f, 1.09423f };
	Local_208[0 /*32*/].f_9 = 284.4f;
	Local_208[1 /*32*/].f_6 = { -1.1744f, -7.52913f, 0.144394f };
	Local_208[1 /*32*/].f_9 = 195.4219f;
	if (iLocal_367 == 1)
	{
		vLocal_357 = { Vector(99.2379f, 210.6038f, -94.4028f) - Vector(97.8585f, 214.15f, -100.095f) };
		fLocal_366 = 10f;
		Local_208[1 /*32*/].f_6 = { -1.1744f, -7.52913f, 0.144394f };
		Local_208[1 /*32*/].f_9 = 159.13f;
	}
	else
	{
		if (iLocal_367 == 2)
		{
			Local_208[3 /*32*/].f_6 = { Vector(98.4197f, 207.5725f, -97.6618f) - Vector(97.8585f, 214.15f, -100.095f) };
			Local_208[1 /*32*/].f_6 = { -1.1744f, -7.52913f, 0.144394f };
			Local_208[1 /*32*/].f_9 = 195.4219f;
		}
		else if (iLocal_367 == 3)
		{
			vLocal_360 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, vLocal_360) };
			vLocal_363 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, vLocal_363) };
			if (__LIB_1__::func_992(Global_35, vLocal_360, 1) > __LIB_1__::func_992(Global_35, vLocal_363, 1))
			{
				PATHFIND::GET_CLOSEST_VEHICLE_NODE(vLocal_360, &(Local_208[0 /*32*/].f_6), 1, 3f, 0f);
				Local_208[1 /*32*/].f_6 = { Local_208[0 /*32*/].f_6 };
			}
			else
			{
				PATHFIND::GET_CLOSEST_VEHICLE_NODE(vLocal_363, &(Local_208[0 /*32*/].f_6), 1, 3f, 0f);
				Local_208[1 /*32*/].f_6 = { Local_208[0 /*32*/].f_6 };
			}
			vVar1 = { Global_36 - Local_208[0 /*32*/].f_6 };
			vVar1.f_2 = 0f;
			vVar1 = { __LIB_0__::func_173(vVar1) };
			vVar4 = { -BUILTIN::SIN(fVar0), BUILTIN::COS(fVar0), 0f };
			if (__LIB_2__::func_977(vVar1, vVar4) < 0f)
			{
				fVar0 = (fVar0 + 180f);
			}
			Local_208[0 /*32*/].f_9 = fVar0;
			Local_208[1 /*32*/].f_9 = Local_208[0 /*32*/].f_9;
		}
		else
		{
			Local_208[3 /*32*/].f_6 = { 4.69632f, -2.40771f, 1.22749f };
			Local_208[1 /*32*/].f_6 = { -1.1744f, -7.52913f, 0.144394f };
			Local_208[1 /*32*/].f_9 = 195.4219f;
		}
		vLocal_357 = { 6.44497f, -3.58025f, 1.41759f };
		fLocal_366 = 350.0283f;
	}
	Local_208[3 /*32*/].f_9 = 349.3997f;
	Local_208[2 /*32*/].f_6 = { Vector(98.9893f, 212.5371f, -97.009f) - Vector(97.8585f, 214.15f, -100.095f) };
	Local_208[2 /*32*/].f_9 = 0.001856f;
}

bool func_28()
{
	switch (iLocal_370)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				if (iLocal_356 != 0)
				{
					STREAMING::REQUEST_MODEL(iLocal_356, false);
				}
				if (iLocal_367 == 1 || iLocal_367 == 2)
				{
					PROPSET::_REQUEST_PROPSET(iLocal_368);
				}
				__LIB_2__::func_312(joaat("SC_WORLD_HUMAN_WILDERNESS_LOOTER"), 1, 0, 0);
				__LIB_4__::func_435();
				__LIB_3__::func_284(&Local_208);
				__LIB_3__::func_314(&Local_337);
				iLocal_370 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_208))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_337))
			{
				return false;
			}
			if (iLocal_356 != 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_356))
				{
					return false;
				}
			}
			if (iLocal_367 == 1 || iLocal_367 == 2)
			{
				if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_368))
				{
					return false;
				}
			}
			if (!__LIB_4__::func_435())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_29()
{
	bool bVar0;
	switch (iLocal_460)
	{
		case 0:
			bVar0 = true;
			if (iLocal_356 != 0)
			{
				iLocal_350 = VEHICLE::CREATE_VEHICLE(iLocal_356, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, vLocal_357), (fLocal_366 + Local_14.f_51.f_3), true, true, bVar0, false);
				if (iLocal_367 == 1 || iLocal_367 == 2)
				{
					PROPSET::_0xD80FAF919A2E56EA(iLocal_350, iLocal_368);
				}
			}
			iLocal_460 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_14.f_51, Local_14.f_51.f_3, &Local_208, &uLocal_351, 0, 0, -1, 1))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[0]))
			{
				PED::SET_PED_HEARING_RANGE(uLocal_351[0], 10f);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[1]))
				{
					PED::_0x931B241409216C1F(uLocal_351[0], uLocal_351[1], 0);
					func_78();
					PED::SET_PED_CONFIG_FLAG(uLocal_351[1], 297, true);
				}
				PED::SET_PED_CONFIG_FLAG(uLocal_351[0], 6, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_351[0], 297, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_351[0], 146, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_351[0], 130, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_351[0], 458, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_351[0], 54, true);
				PED::_0xB8B6430EAD2D2437(uLocal_351[0], -589962661);
				PED::_0x24C82EF607105FAA(uLocal_351[0], joaat("SCRIPTEDOUTLAW"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_351[0], false);
				PED::SET_PED_KEEP_TASK(uLocal_351[0], true);
				ENTITY::_0x8C03CD6B5E0E85E8(uLocal_351[0], joaat("OUTLAW_LOOTER"));
				WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_351[0], true, true);
				WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_351[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 500, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_351[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, true, false);
				__LIB_1__::func_991(uLocal_351[0], 0);
			}
			if (iLocal_367 == 0)
			{
				__LIB_4__::func_437(uLocal_351[2], 1, 1060320051 /* Float: 0.7f */, 0, 0);
			}
			else
			{
				__LIB_4__::func_437(uLocal_351[2], 1, 1060320051 /* Float: 0.7f */, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[2]))
			{
				PED::SET_PED_RESET_FLAG(uLocal_351[2], 29, true);
			}
			if (iLocal_367 != 3)
			{
				__LIB_4__::func_178(uLocal_351[3], 0f);
				__LIB_1__::func_864(uLocal_351[3], 0, 0);
			}
			if (iLocal_367 == 3)
			{
				iLocal_461 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(uLocal_351[2], true, false), 0f, 0f, 0f, 6.5f, 6.5f, 5f);
				iLocal_462 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(uLocal_351[2], true, false), 0f, 0f, 0f, 10.5f, 10.5f, 5f);
			}
			else
			{
				iLocal_461 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_351[0], 0f, -2f, 0f), 0f, 0f, 0f, 6.5f, 6.5f, 5f);
				iLocal_462 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_351[0], 0f, -2.5f, 0f), 0f, 0f, 0f, 10.5f, 10.5f, 5f);
			}
			VOLUME::_0xD52DF30355EA7C8E(iLocal_461, uLocal_351[0], 1);
			VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_461, 0, 1);
			iLocal_460 = 6;
			break;
		case 6:
			__LIB_3__::func_542(&Local_14, 1);
			__LIB_3__::func_285(uLocal_351[0], &Local_14, 0);
			func_85();
			if (iLocal_367 == 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_351[1]))
				{
					PED::_SET_PED_ON_MOUNT(uLocal_351[0], uLocal_351[1], -1, true);
					ENTITY::SET_ENTITY_COORDS(uLocal_351[1], Local_208[0 /*32*/].f_6, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_351[1], Local_208[0 /*32*/].f_9);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[3]))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_351[3], iLocal_350, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[2]))
			{
				PED::SET_PED_RESET_FLAG(uLocal_351[2], 29, true);
			}
			return true;
	}
	return false;
}

void func_32()
{
	if (bLocal_433)
	{
		return;
	}
	if (func_125(uLocal_351[0], &uLocal_375, &uLocal_374, 0))
	{
		TASK::_0xE7FA07624574B79A(uLocal_351[0], Global_35, 2, 1, 2f, 1, 0, 0, 0);
		bLocal_433 = true;
	}
}

bool func_33()
{
	int iVar0;
	func_126();
	func_127();
	func_128();
	func_129();
	if (__LIB_1__::func_313(&uLocal_449, 10f))
	{
		AUDIO::_0x05D6195FB4D428F4(1697879553);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]))
	{
		if (!__LIB_0__::func_75(&uLocal_452))
		{
			if (__LIB_0__::func_396(uLocal_351[0]))
			{
				__LIB_1__::func_148(&uLocal_452);
			}
		}
		if (!__LIB_1__::func_285(&uLocal_452, 3f))
		{
			PED::SET_PED_RESET_FLAG(uLocal_351[0], 216, true);
		}
		PED::SET_PED_RESET_FLAG(uLocal_351[0], 42, true);
		if (__LIB_0__::func_232(Global_35, uLocal_351[0], 1) < 125f)
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_351[0], Global_35, 20, 0, 51, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[2]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_351[2], 29, true);
	}
	switch (iLocal_371)
	{
		case 0:
			iLocal_442 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Local_14.f_51, 0f, 50f, 50f, 0f, -1f, -1, -1);
			ENTITY::_0x9587913B9E772D29(uLocal_351[2], 0);
			ENTITY::_0x9587913B9E772D29(uLocal_351[3], 0);
			if (iLocal_367 != 3)
			{
				__LIB_1__::func_473(uLocal_351[0], joaat("SC_WORLD_HUMAN_WILDERNESS_LOOTER"), -1, 0, 0, -1082130432 /* Float: -1f */);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]))
			{
				AUDIO::STOP_PED_SPEAKING(uLocal_351[0], true);
			}
			iLocal_371 = 1;
			break;
		case 1:
			if (iLocal_367 != 3 && !bLocal_435)
			{
				bLocal_435 = true;
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[2]) && ENTITY::IS_ENTITY_DEAD(uLocal_351[2]))
				{
					__LIB_4__::func_276(uLocal_351[2], 1, 0);
					PED::_0x6569F31A01B4C097(uLocal_351[2], 4, 0);
				}
				else
				{
					bLocal_435 = false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[3]) && ENTITY::IS_ENTITY_DEAD(uLocal_351[3]))
				{
					__LIB_4__::func_276(uLocal_351[3], 1, 0);
					PED::_0x6569F31A01B4C097(uLocal_351[3], 4, 0);
				}
				else
				{
					bLocal_435 = false;
				}
			}
			if (iLocal_367 == 3 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_351[0], 0))
			{
				if (__LIB_1__::func_992(Global_35, Local_14.f_51, 1) < 4900f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_ENTITY(0, uLocal_351[2], 20000, 4f, 1.25f, 2f, 0);
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
						TASK::TASK_GO_TO_ENTITY(0, uLocal_351[2], -1, 0.75f, 1f, 2f, 0);
						__LIB_1__::func_473(0, joaat("SC_WORLD_HUMAN_WILDERNESS_LOOTER"), -1, 1, 0, -1082130432 /* Float: -1f */);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_351[0], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						iLocal_371 = 2;
					}
				}
			}
			else if (__LIB_3__::func_452(&Local_14, 2f, 1114636288 /* Float: 60f */, 35f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				AUDIO::_0x05D6195FB4D428F4(467735613);
				__LIB_1__::func_148(&uLocal_449);
				Local_14.f_44 = 1;
				__LIB_1__::func_148(&uLocal_443);
				iLocal_371 = 2;
			}
			break;
		case 2:
			if (!Local_14.f_44)
			{
				if (PED::_0xA454D234E45BB6E5(uLocal_351[0], PLAYER::PLAYER_ID()) || PED::_0x9337183FDA2E9035(uLocal_351[0], PLAYER::PLAYER_ID()))
				{
					Local_14.f_44 = 1;
				}
			}
			if (PED::_0x331550B212014B92(uLocal_351[0], Global_35))
			{
				bLocal_439 = true;
				Local_14.f_44 = 1;
				iLocal_371 = 3;
			}
			if (__LIB_1__::func_313(&uLocal_443, 6f))
			{
				func_35();
				iLocal_371 = 5;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]))
			{
				if (!PED::_0x331550B212014B92(uLocal_351[0], Global_35))
				{
					func_35();
					__LIB_0__::func_172(iLocal_461);
					__LIB_0__::func_172(iLocal_462);
					iLocal_371 = 5;
				}
			}
			else
			{
				iLocal_371 = 5;
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_351[0]))
			{
				iLocal_371 = 5;
			}
			break;
		case 5:
			if ((PED::_0x331550B212014B92(uLocal_351[0], Global_35) && __LIB_0__::func_163(uLocal_351[0], 993674639)) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_351[0], 242628503, true) == 0)
			{
				__LIB_0__::func_172(iLocal_461);
				__LIB_0__::func_172(iLocal_462);
				TASK::CLEAR_PED_TASKS(uLocal_351[0], true, false);
				iLocal_371 = 3;
			}
			if (!bLocal_440 && !bLocal_439)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]) && __LIB_0__::func_232(uLocal_351[0], Global_35, 1) < 100f)
				{
					__LIB_2__::func_478(uLocal_351[0], Global_35, "HEADS_UP_THREATEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_351[0], Global_35, 2300, 0, 51, 0);
					bLocal_440 = true;
				}
			}
			if (!__LIB_4__::func_176(Global_35, &uLocal_351, &uLocal_441, 2500f))
			{
				Local_14.f_44 = 1;
				return true;
			}
			break;
	}
	return false;
}

void func_35()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[1]))
	{
		TASK::TASK_MOUNT_ANIMAL(0, uLocal_351[1], -1, -1, 1f, 1, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.25f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_351[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_78()
{
	var uVar0[1];
	uVar0[0] = Global_35;
	PED::_0x34EDDD59364AD74A(uLocal_351[1], &uVar0);
}

void func_85()
{
	if (Local_337[0 /*12*/].f_7 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[1]))
		{
			Local_337[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_337[0 /*12*/].f_7, Local_14.f_51, true, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_337[0 /*12*/].f_8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_337[0 /*12*/].f_8, uLocal_351[1], PED::GET_PED_BONE_INDEX(uLocal_351[1], 62111), -0.32f, 0.05f, -0.22f, 0f, 53f, 0f, false, false, false, false, 2, true, true, false);
		}
	}
}

bool func_125(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_270(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_3__::func_488(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_126()
{
	if (iLocal_371 < 4)
	{
		if (__LIB_1__::func_992(Global_35, Local_14.f_51, 0) < 10000f)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
	}
}

void func_127()
{
	if (!bLocal_434)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_351[0], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[2]))
			{
				__LIB_4__::func_276(uLocal_351[2], 1, 0);
				PED::_0x6569F31A01B4C097(uLocal_351[2], 4, 0);
			}
			bLocal_434 = true;
		}
	}
}

void func_128()
{
	if (iLocal_367 != 3)
	{
		return;
	}
	if ((!bLocal_436 && !bLocal_437) && __LIB_0__::func_232(uLocal_351[0], uLocal_351[2], 1) < 225f)
	{
		__LIB_2__::func_122(uLocal_351[0], "WHOA", 291934926, 0, 1, 0, 0, 1);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]))
		{
			AUDIO::STOP_PED_SPEAKING(uLocal_351[0], false);
		}
		bLocal_436 = true;
	}
	if (!bLocal_437 && (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_461, true, 0) || func_279(PLAYER::PLAYER_ID(), &(uLocal_351[0]))))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_351[0]))
		{
			AUDIO::STOP_PED_SPEAKING(uLocal_351[0], false);
		}
		bLocal_437 = true;
	}
}

void func_129()
{
	if (bLocal_438)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_462, true, 0))
	{
		if (!__LIB_0__::func_75(&uLocal_446))
		{
			__LIB_1__::func_148(&uLocal_446);
		}
		else if (__LIB_0__::func_33(&uLocal_446))
		{
			__LIB_2__::func_462(&uLocal_446, __LIB_0__::func_265(&uLocal_446), 0);
		}
	}
	else if (__LIB_0__::func_75(&uLocal_446))
	{
		__LIB_2__::func_113(&uLocal_446);
	}
	if (__LIB_1__::func_313(&uLocal_446, 3f))
	{
		VOLUME::_0xD52DF30355EA7C8E(iLocal_462, uLocal_351[0], 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_462, 0, 1);
		bLocal_438 = true;
	}
}

bool func_279(int iParam0, var uParam1)
{
	var uVar0;
	uVar0 = *uParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, 0, 0))
	{
		return true;
	}
	return false;
}

