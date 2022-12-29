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
	struct<32> Local_14[4];
	struct<162> Local_143 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 1;
	var uLocal_310 = 1;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = -1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 1;
	var uLocal_328 = -1;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	var uLocal_342[4] = { 0, 0, 0, 0 };
	var uLocal_347 = 4;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
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
	bool bLocal_366 = false;
	vector3 vLocal_367 = { 0f, 0f, 0f };
	vector3 vLocal_370 = { 0f, 0f, 0f };
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
	Local_143.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_143.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	iLocal_353 = __LIB_3__::func_390(Local_143.f_3, 3, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_366 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_366, 452, 0);
		if (bLocal_366)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_339)
			{
				case 0:
					if (func_6())
					{
						iLocal_339 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_143, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_8(&Local_143, &uLocal_352, &(Local_143.f_51.f_4));
						__LIB_3__::func_503(&Local_143, uLocal_352, 1274);
						__LIB_3__::func_352(&Local_143, 3);
						__LIB_2__::func_165(Local_143.f_51, 5f, 0, 0, 6);
						iLocal_339 = 3;
					}
					else if (Local_143.f_160)
					{
						func_4();
					}
					break;
				case 3:
					if (func_13())
					{
						func_14();
						if (iLocal_353 != 1)
						{
						}
						else
						{
							func_15(512);
						}
						iLocal_339 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_143, &uLocal_342, iLocal_353, 0, 1, 0, 1, 0))
					{
						func_4();
					}
					if (!Local_143.f_46)
					{
						if (func_17(&uLocal_342, &(Local_143.f_5), &uLocal_364, &uLocal_365, 0, 3, 1))
						{
							Local_143.f_46 = 1;
						}
					}
					if (func_18())
					{
						Local_143.f_50 = 1;
						func_4();
					}
					if (__LIB_3__::func_431(&Local_143, &uLocal_342, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_143.f_50 = 1;
						func_4();
					}
					break;
			}
			BUILTIN::WAIT(Local_143.f_158);
		}
	}
}

void func_4()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_341))
	{
		if (iLocal_337 < 2 && (!func_22(16) || __LIB_1__::func_285(&uLocal_379, 20f)))
		{
			func_24(&iLocal_341, 0);
			__LIB_2__::func_426(&(uLocal_342[0]));
			__LIB_2__::func_426(&(uLocal_342[1]));
		}
		else
		{
			if (!func_22(128))
			{
				vLocal_370 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_341, -7.5f, 18f, 0f) };
				__LIB_2__::func_106(&vLocal_370, 50, 10, 0);
				TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(iLocal_341, vLocal_370, 10f, 0, 524308, 2f, 50f);
			}
			VEHICLE::_0xC399CC89FBA05DA0(iLocal_341, 1);
			func_24(&iLocal_341, 1);
			__LIB_2__::func_115(56, 1, 0, 30, 2, 0, 0, 1);
		}
	}
	__LIB_2__::func_161(Local_143.f_51, 20f, 6);
	__LIB_17__::func_882(&Local_143, &uLocal_342, &uLocal_347, iLocal_353, -1, 0, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6()
{
	switch (iLocal_338)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_143))
			{
				STREAMING::REQUEST_MODEL(joaat("WAGON05X"), false);
				func_32();
				__LIB_4__::func_462();
				func_34();
				PROPSET::_REQUEST_PROPSET_2(joaat("PG_RE_SAVAGEWAGON01X"));
				iLocal_338 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_449(&Local_14))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("WAGON05X")))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_RE_SAVAGEWAGON01X")))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_355))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 4;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 4;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 4;
			*uParam2 = 5;
			break;
		case 6:
			*uParam1 = 4;
			*uParam2 = 6;
			break;
		case 7:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 12;
			*uParam2 = 1;
			break;
		case 9:
			*uParam1 = 12;
			*uParam2 = 2;
			break;
		case 10:
			*uParam1 = 12;
			*uParam2 = 3;
			break;
		case 11:
			*uParam1 = 12;
			*uParam2 = 4;
			break;
	}
}

Vector3 func_9(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -62.64f;
				case 1:
					return 0f, 0f, -113.04f;
				case 2:
					return 0f, 0f, -90.72f;
				case 3:
					return 0f, 0f, -51.12f;
				case 4:
					return 0f, 0f, -62.64f;
				case 5:
					return 0f, 0f, -141.84f;
				case 6:
					return 0f, 0f, 241.2f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -96.48f;
				case 1:
					return 0f, 0f, -70.56f;
				case 2:
					return 0f, 0f, -45.36f;
				case 3:
					return 0f, 0f, 255.6f;
				case 4:
					return 0f, 0f, -54f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_13()
{
	switch (iLocal_340)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_143), __LIB_3__::func_526(&Local_143), &Local_14, &uLocal_342, 0, 0, -1, 1))
			{
				iLocal_340 = 1;
			}
			break;
		case 1:
			if (!func_47())
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_14()
{
	if (__LIB_2__::func_1(uLocal_342[0], 0, 1))
	{
		__LIB_3__::func_285(uLocal_342[0], &Local_143, 0);
	}
	if (__LIB_2__::func_1(uLocal_342[1], 0, 1))
	{
		__LIB_3__::func_285(uLocal_342[1], &Local_143, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_341))
	{
		PED::SET_PED_INTO_VEHICLE(uLocal_342[0], iLocal_341, -1);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_342[1]))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_342[1], iLocal_341, -2);
		}
	}
}

void func_15(int iParam0)
{
	__LIB_1__::func_683(&iLocal_354, iParam0);
}

bool func_17(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_4__::func_334((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_18()
{
	func_64(0, 256, func_63(0));
	if (iLocal_353 != 1)
	{
		func_64(1, 512, func_63(1));
	}
	if (__LIB_0__::func_75(&uLocal_379) || !func_22(16))
	{
		if (__LIB_2__::func_118(iLocal_341, 1, 1) < 125f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_341))
		{
			func_15(16);
			__LIB_0__::func_37(&uLocal_379);
		}
	}
	else if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_341))
	{
		__LIB_1__::func_283(&uLocal_379, 0);
	}
	switch (iLocal_337)
	{
		case 0:
			if (!__LIB_0__::func_75(&uLocal_373))
			{
				__LIB_1__::func_283(&uLocal_373, 0);
			}
			if (__LIB_1__::func_285(&uLocal_373, 0.75f))
			{
				if (!func_22(2))
				{
					func_69();
					func_70();
					func_15(2);
					__LIB_1__::func_864(uLocal_342[0], 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_342[1]))
					{
						__LIB_1__::func_864(uLocal_342[1], 1, 1);
					}
					__LIB_1__::func_148(&uLocal_373);
				}
				else
				{
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), iLocal_341, 0f, 25f, 25f, -1f, -1f, 180f, false, false, -1, -1);
					TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(iLocal_341, __LIB_2__::func_116(38, 1), 10f, 0, 524308, 2f, 20f);
					__LIB_0__::func_37(&uLocal_373);
					__LIB_1__::func_283(&uLocal_376, 0);
					AUDIO::PREPARE_MUSIC_EVENT("RESWA_START");
					func_74(1);
				}
			}
			break;
		case 1:
			if (!func_22(64))
			{
				if (__LIB_1__::func_285(&uLocal_376, 30f))
				{
					return true;
				}
				if (!func_22(32) && __LIB_2__::func_118(iLocal_341, 1, 1) < 60f)
				{
					func_75();
					func_15(32);
				}
				if (__LIB_3__::func_452(&Local_143, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 20f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && (__LIB_2__::func_118(iLocal_341, 1, 1) <= 8f || func_77(1)))
				{
					Local_143.f_44 = 1;
					func_75();
					__LIB_1__::func_148(&uLocal_373);
					func_15(64);
				}
			}
			else if (__LIB_1__::func_285(&uLocal_373, 2f))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RESWA_START");
				vLocal_370 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_341, -7.5f, 18f, 0f) };
				__LIB_2__::func_106(&vLocal_370, 50, 10, 0);
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(iLocal_341, vLocal_370, 10f, 2f, 524308);
				__LIB_1__::func_283(&uLocal_382, 0);
				func_15(128);
				func_74(2);
			}
			break;
		case 2:
			if ((ENTITY::GET_ENTITY_SPEED(iLocal_341) == 0f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_341)) || __LIB_1__::func_285(&uLocal_382, 7f))
			{
				TASK::_0x141BC64C8D7C5529(iLocal_341);
				func_75();
				func_74(3);
			}
			break;
		case 3:
			if ((iLocal_353 != 1 && !func_22(1024)) && ENTITY::GET_ENTITY_SPEED(iLocal_341) <= 0.1f)
			{
				AITRANSPORT::_0x8886D83A430537FD(uLocal_342[1], 64);
				PED::SET_PED_TO_RAGDOLL(uLocal_342[1], 10000, 10000, 0, false, true, false);
				func_15(1024);
			}
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_341) || __LIB_2__::func_118(iLocal_341, 1, 1) > 80f) || (func_22(256) && func_22(512)))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_22(int iParam0)
{
	return __LIB_0__::func_27(iLocal_354, iParam0);
}

void func_24(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_83(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_32()
{
	switch (iLocal_353)
	{
		case 0:
			Local_14[0 /*32*/].f_1 = joaat("RE_SAVAGEWAGON_MALES_01");
			Local_14[0 /*32*/].f_3 = -1866920474;
			Local_14[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_14[1 /*32*/].f_1 = joaat("RE_SAVAGEWAGON_FEMALES_01");
			Local_14[1 /*32*/].f_3 = -1866920474;
			Local_14[1 /*32*/].f_6 = { 0f, 0f, 0f };
			break;
		case 1:
			Local_14[0 /*32*/].f_1 = joaat("RE_SAVAGEWAGON_MALES_01");
			Local_14[0 /*32*/].f_3 = -1637177015;
			Local_14[0 /*32*/].f_6 = { 0f, 0f, 0f };
			break;
		case 2:
			Local_14[0 /*32*/].f_1 = joaat("RE_SAVAGEWAGON_MALES_01");
			Local_14[0 /*32*/].f_3 = -940475302;
			Local_14[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_14[1 /*32*/].f_1 = joaat("RE_SAVAGEWAGON_FEMALES_01");
			Local_14[1 /*32*/].f_3 = -1637177015;
			Local_14[1 /*32*/].f_6 = { 0f, 0f, 0f };
			break;
	}
	Local_14[2 /*32*/].f_1 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
	Local_14[2 /*32*/].f_6 = { 0f, 0f, 0f };
	Local_14[2 /*32*/] = 28;
	Local_14[2 /*32*/].f_14 = 0;
	Local_14[3 /*32*/].f_1 = joaat("A_C_HORSE_NOKOTA_BLUEROAN");
	Local_14[3 /*32*/].f_6 = { 0f, 0f, 0f };
	Local_14[3 /*32*/] = 28;
	Local_14[3 /*32*/].f_14 = 0;
}

void func_34()
{
	__LIB_3__::func_318("SCRIPT_RE@SAVAGE_WAGON", &uLocal_355);
}

bool func_47()
{
	vector3 vVar0;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(&Local_143), __LIB_3__::func_526(&Local_143), 0f, 2f, 0f) };
	iLocal_341 = __LIB_3__::func_531(joaat("WAGON05X"), vVar0, __LIB_3__::func_526(&Local_143), 0, 0, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_341, 0f);
	PROPSET::_0xD80FAF919A2E56EA(iLocal_341, joaat("PG_RE_SAVAGEWAGON01X"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_341))
	{
		__LIB_4__::func_137(uLocal_342[2], 1088421888 /* Float: 7f */, 0, 0);
		VEHICLE::_0x316CDB5B6E8F4110(uLocal_342[2], iLocal_341, 0);
		__LIB_3__::func_285(iLocal_341, &Local_143, 0);
		return true;
	}
	return false;
}

int func_63(int iParam0)
{
	switch (iLocal_353)
	{
		case 0:
			return 598839699;
		case 1:
			return 1272347095;
		case 2:
			if (iParam0 == 0)
			{
				return -117285247;
			}
			else
			{
				return 1272347095;
			}
			break;
	}
	return 0;
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (!func_22(iParam1) && iParam2 != 0)
	{
		if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uLocal_342[iParam0]) <= 0.25f)
		{
			__LIB_3__::func_566(&(uLocal_342[iParam0]), iParam2);
			func_15(iParam1);
		}
	}
}

void func_69()
{
	PED::APPLY_PED_DAMAGE_PACK(uLocal_342[2], "PD_Savage_Wagon_Horse_Arrow_Wounds", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_342[3], "PD_Savage_Wagon_Horse_Arrow_Wounds", 0f, 1f);
	PED::_SET_PED_BODY_COMPONENT(uLocal_342[3], -1413962767);
	PED::_0xA2B8E47442C76CEC(uLocal_342[3], -1758176869);
	PED::_UPDATE_PED_VARIATION(uLocal_342[3], false, true, true, true, false);
	PED::_SET_PED_BODY_COMPONENT(uLocal_342[2], -1413962767);
	PED::_0xA2B8E47442C76CEC(uLocal_342[2], -1758176869);
	PED::_UPDATE_PED_VARIATION(uLocal_342[2], false, true, true, true, false);
}

int func_70()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_342[3]))
	{
		switch (Local_143.f_51.f_4)
		{
			case 0:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1743.567f, -1285.517f, 91.08173f, 0f, false, false, true);
				break;
			case 1:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1205.528f, -1501.335f, 77.4559f, 180f, false, false, true);
				break;
			case 2:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1313.082f, -1250.984f, 82.0318f, -90f, false, false, true);
				break;
			case 3:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1242.217f, -1710.745f, 78.0827f, 150f, false, false, true);
				break;
			case 4:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -986.6113f, -1824.257f, 61.968f, -67f, false, false, true);
				break;
			case 5:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1400.365f, -1410.214f, 93.042f, 0f, false, false, true);
				break;
			case 6:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1207.971f, -1824.055f, 60.8198f, -120f, false, false, true);
				break;
			case 7:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1844.924f, -1683.493f, 105.3695f, 90f, false, false, true);
				break;
			case 8:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1981.568f, -1390.41f, 115.7545f, -90f, false, false, true);
				break;
			case 9:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1619.356f, -1979.972f, 49.9398f, 135f, false, false, true);
				break;
			case 10:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1770.729f, -1731.605f, 93.345f, 45f, false, false, true);
				break;
			case 11:
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_342[3], -1890.409f, -1341.764f, 100.1928f, 115f, false, false, true);
				break;
		}
		__LIB_1__::func_864(uLocal_342[3], 0, 0);
		return 1;
	}
	return 0;
}

void func_74(int iParam0)
{
	iLocal_337 = iParam0;
}

void func_75()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_342[2], "FEAR", false);
			break;
		case 1:
			AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_342[2], "AGITATED", false);
			break;
		case 2:
			AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_342[2], "WHINNY_LONG", false);
			break;
		case 3:
			AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_342[2], "WHINNY_SHORT", false);
			break;
	}
}

bool func_77(bool bParam0)
{
	if (!__LIB_0__::func_86(vLocal_367))
	{
		if (__LIB_2__::func_118(iLocal_341, 1, 1) > __LIB_3__::func_332(vLocal_367, 1))
		{
			if (__LIB_2__::func_118(iLocal_341, 1, 1) < 20f || !bParam0)
			{
				return true;
			}
		}
	}
	vLocal_367 = { ENTITY::GET_ENTITY_COORDS(iLocal_341, false, false) };
	return false;
}

void func_83(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_208(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

void func_208(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_208(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_208(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

