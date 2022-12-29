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
	struct<32> Local_14[3];
	struct<193> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313[3] = { 0, 0, 0 };
	int iLocal_317[3] = { 0, 0, 0 };
	char* sLocal_321 = NULL;
	vector3 vLocal_322[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_332[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	vector3 vLocal_345 = { 0f, 0f, 0f };
	vector3 vLocal_348 = { 0f, 0f, 0f };
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = -1;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 2;
	var uLocal_361 = 1;
	var uLocal_362 = 1;
	var uLocal_363 = 1;
	var uLocal_364 = 0;
	var uLocal_365 = 1;
	var uLocal_366 = 2;
	var uLocal_367 = 2;
	var uLocal_368 = 3;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 3;
	var uLocal_372 = 1;
	var uLocal_373 = 3;
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	int iLocal_377[2] = { 0, 0 };
	int iLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	struct<21> Local_384[3];
	struct<17> Local_448[3];
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	var uLocal_510 = 0;
	int iLocal_511 = 0;
	float fLocal_512 = 0f;
	float fLocal_513 = 0f;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	bool bLocal_519 = false;
	bool bLocal_520 = false;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	int iLocal_524 = 0;
	bool bLocal_525 = false;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	bool bLocal_528 = false;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
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
	iLocal_508 = 1;
	fLocal_512 = 1f;
	fLocal_513 = 1f;
	Local_111.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_111.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_420(&Local_111, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_528 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_528, 412, 0);
		if (bLocal_528)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_313[2]))
			{
				_NAMESPACE29::_0x0EABF182FBB63D72(uLocal_313[2], 5, 1);
			}
			switch (iLocal_508)
			{
				case 1:
					if (__LIB_4__::func_218(&Local_111, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_7(&Local_111, &uLocal_505, &uLocal_504);
						iLocal_508 = 0;
					}
					else if (Local_111.f_160)
					{
						func_4();
					}
					break;
				case 0:
					if (func_8())
					{
						iLocal_508 = 3;
					}
					break;
				case 3:
					if (func_9())
					{
						AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RETP_Area", true, true);
						AUDIO::_0x3743CE6948194349("AZ_RETP_Area", Local_111.f_51, 0f);
						iLocal_508 = 4;
					}
					break;
				case 4:
					if (!__LIB_17__::func_890(&Local_111, &uLocal_313, 0, 0, 1, 0, 1, 0))
					{
						func_4();
					}
					func_11();
					if (func_12())
					{
						func_4();
					}
					if (__LIB_3__::func_431(&Local_111, &uLocal_313, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_4();
					}
					break;
			}
			BUILTIN::WAIT(Local_111.f_158);
		}
	}
}

void func_4()
{
	__LIB_3__::func_493(&Local_111, &uLocal_313, &iLocal_317, 0, uLocal_505, uLocal_504, 0, 1, 0, 1);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_321);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_351, 1);
	if (__LIB_2__::func_1(uLocal_313[0], 0, 1))
	{
		PED::_0x58F7DB5BD8FA2288(uLocal_313[0]);
	}
	__LIB_2__::func_593(&(Local_384[0 /*21*/]), &Local_448);
	__LIB_2__::func_593(&(Local_384[1 /*21*/]), &Local_448);
	__LIB_2__::func_56(uLocal_313[0], 1, 1);
	__LIB_2__::func_56(uLocal_313[1], 1, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RETP_Area", false, true);
	if (PERSCHAR::_0x800DF3FC913355F3(iLocal_540))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_540);
	}
	if (Local_111.f_44)
	{
		if (!__LIB_1__::func_187(56))
		{
			__LIB_4__::func_471(56, 1);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(var uParam0, var uParam1, var uParam2)
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
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 2;
			*uParam2 = 1;
			break;
	}
}

bool func_8()
{
	switch (iLocal_507)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_111))
			{
				func_29();
				func_30();
				__LIB_0__::func_11();
				func_32();
				__LIB_4__::func_402(&uLocal_352);
				func_34();
				iLocal_507 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_449(&Local_14))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_9()
{
	switch (iLocal_506)
	{
		case 0:
			if (__LIB_3__::func_479(Local_111.f_51, Local_111.f_51.f_3, &Local_14, &uLocal_313, 1, 0, -1, 1))
			{
				iLocal_506 = 1;
			}
			break;
		case 1:
			func_37();
			func_38();
			func_39();
			iLocal_506 = 6;
			break;
		case 6:
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_313[0], "Default_Shocked"))
			{
				return false;
			}
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_313[1], "Default_Shocked"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_11()
{
	func_50();
	if (Local_111.f_48 == 0)
	{
		__LIB_3__::func_452(&Local_111, 1f, 150f, 70f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0);
	}
	if (Local_111.f_45 == 0)
	{
		if (__LIB_2__::func_118(uLocal_313[1], 1, 1) <= 30f || __LIB_2__::func_118(uLocal_313[0], 1, 1) <= 30f)
		{
			Local_111.f_45 = 1;
		}
	}
	if (iLocal_518 == 0)
	{
		iLocal_540 = __LIB_0__::func_120(927);
		if (PERSCHAR::_0x800DF3FC913355F3(iLocal_540))
		{
			iLocal_518 = 1;
			PERSCHAR::_0x7B204F88F6C3D287(iLocal_540);
		}
	}
}

bool func_12()
{
	switch (iLocal_500)
	{
		case 0:
			func_54();
			break;
		case 1:
			func_55();
			break;
		case 2:
			func_56();
			break;
		case 3:
			func_57();
			break;
		case 4:
			func_58();
			break;
		case 5:
			Local_111.f_160 = 1;
			return true;
		case 6:
			Local_111.f_50 = 1;
			Local_111.f_44 = 1;
			PED::SET_PED_KEEP_TASK(uLocal_313[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_313[1], true);
			return true;
	}
	return false;
}

void func_29()
{
	Local_14[0 /*32*/] = 22;
	Local_14[1 /*32*/] = 22;
	switch (Local_111.f_51.f_4)
	{
		case 0:
			Local_14[0 /*32*/].f_6 = { 2405.61f, -710.31f, 40.1f };
			Local_14[0 /*32*/].f_9 = 170.54f;
			Local_14[1 /*32*/].f_6 = { 2403.57f, -710.03f, 40.02f };
			Local_14[1 /*32*/].f_9 = 170.54f;
			Local_14[2 /*32*/].f_6 = { 2406.67f, -712.77f, 40.1f };
			Local_14[2 /*32*/].f_9 = 308.0568f;
			vLocal_342 = { 2397.99f, -720.35f, 40.96f };
			vLocal_348 = { 2347.32f, -711.76f, 40.99f };
			vLocal_345 = { 2267.29f, -766.95f, 41.36f };
			break;
		case 1:
			Local_14[0 /*32*/].f_6 = { 2411.36f, -632.47f, 41.19f };
			Local_14[0 /*32*/].f_9 = 55.07f;
			Local_14[1 /*32*/].f_6 = { 2412.57f, -631.22f, 41.12f };
			Local_14[1 /*32*/].f_9 = 55.07f;
			Local_14[2 /*32*/].f_6 = { 2362.41f, -602.37f, 40.57f };
			Local_14[2 /*32*/].f_9 = 308.0568f;
			vLocal_342 = { 2347.06f, -604.78f, 40.84f };
			vLocal_348 = { 2393.47f, -665.77f, 41.09f };
			vLocal_345 = { 2267.29f, -766.95f, 41.36f };
			break;
		case 2:
			Local_14[0 /*32*/].f_6 = { 2142.822f, -775.8514f, 40.52f };
			Local_14[0 /*32*/].f_9 = -120.07f;
			Local_14[1 /*32*/].f_6 = { 2143.161f, -775.4011f, 40.52f };
			Local_14[1 /*32*/].f_9 = -120.07f;
			Local_14[2 /*32*/].f_6 = { 2143.89f, -777.31f, 40.57f };
			Local_14[2 /*32*/].f_9 = 308.0568f;
			vLocal_342 = { 2117.937f, -788.4661f, 40.5201f };
			vLocal_348 = { 2317.283f, -926.4427f, 41.0396f };
			vLocal_345 = { 2267.29f, -766.95f, 41.36f };
			break;
		case 3:
			Local_14[0 /*32*/].f_6 = { 2189.216f, -379.6338f, 40.8348f };
			Local_14[0 /*32*/].f_9 = -45.07f;
			Local_14[1 /*32*/].f_6 = { 2188.875f, -378.6358f, 40.6047f };
			Local_14[1 /*32*/].f_9 = -45.07f;
			Local_14[2 /*32*/].f_6 = { 2189.17f, -380.59f, 40.57f };
			Local_14[2 /*32*/].f_9 = 308.0568f;
			vLocal_342 = { 2244.959f, -355.2034f, 41.3488f };
			vLocal_348 = { 2420.955f, -310.3199f, 40.6879f };
			vLocal_345 = { 2267.29f, -766.95f, 41.36f };
			break;
		case 4:
			Local_14[0 /*32*/].f_6 = { 2495.016f, -246.3338f, 41.1532f };
			Local_14[0 /*32*/].f_9 = 95.07f;
			Local_14[1 /*32*/].f_6 = { 2494.612f, -245.3792f, 41.1532f };
			Local_14[1 /*32*/].f_9 = 95.07f;
			Local_14[2 /*32*/].f_6 = { 2494.97f, -247.29f, 41.1532f };
			Local_14[2 /*32*/].f_9 = 95.07f;
			vLocal_342 = { 2244.959f, -355.2034f, 41.3488f };
			vLocal_348 = { 2222.103f, -373.9659f, 41.12809f };
			vLocal_345 = { 2267.29f, -766.95f, 41.36f };
			break;
	}
}

void func_30()
{
	Local_14[0 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_14[0 /*32*/].f_10 = 1;
	Local_14[0 /*32*/].f_4 = 788161705;
	Local_14[1 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_14[1 /*32*/].f_10 = 1;
	Local_14[1 /*32*/].f_4 = 788161705;
	Local_14[2 /*32*/].f_1 = joaat("A_F_M_LAGTOWNFOLK_01");
	Local_14[2 /*32*/].f_10 = 1;
	Local_14[2 /*32*/].f_4 = 788161705;
	switch (Local_111.f_51.f_4)
	{
		case 0:
			sLocal_321 = "retp_killer_walking_v1";
			break;
		case 1:
			sLocal_321 = "retp_killer_walking_v2";
			break;
		case 2:
			sLocal_321 = "retp_killer_walking_v4";
			break;
		case 3:
			sLocal_321 = "retp_killer_walking_v3";
			break;
		case 4:
			sLocal_321 = "retp_killer_walking_v5";
			break;
	}
	TASK::REQUEST_WAYPOINT_RECORDING("retp_killer_walking_v1");
	TASK::REQUEST_WAYPOINT_RECORDING("retp_killer_walking_v2");
	TASK::REQUEST_WAYPOINT_RECORDING("retp_killer_walking_v3");
	TASK::REQUEST_WAYPOINT_RECORDING("retp_killer_walking_v4");
	TASK::REQUEST_WAYPOINT_RECORDING("retp_killer_walking_v5");
	__LIB_3__::func_445(&Local_14);
}

void func_32()
{
	Local_305.f_4 = "script@beat@wilderness@torchprocession@action";
	Local_305.f_5 = "script@beat@wilderness@torchprocession@action_b";
}

void func_34()
{
	__LIB_2__::func_602(&(Local_448[0 /*17*/]), "RE_INTER_POS", func_114(6), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_448[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_114(8), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_448[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_448[1 /*17*/]), 1, 0);
}

void func_37()
{
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_313[0], Local_14[0 /*32*/].f_6, Local_14[0 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_313[1], Local_14[1 /*32*/].f_6, Local_14[1 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_313[2], Local_14[2 /*32*/].f_6, Local_14[2 /*32*/].f_9, true, false, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[0], 146, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[0], 35, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[0], 168, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[1], 146, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[1], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[1], 35, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_313[1], 168, true);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_313[0], false, 1f);
	TASK::_0x9DE63896B176EA94(uLocal_313[0], 1);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_313[1], false, 1f);
	TASK::_0x9DE63896B176EA94(uLocal_313[1], 1);
	ENTITY::_0x18FF3110CF47115D(uLocal_313[2], 7, 1);
	TASK::TASK_CARRIABLE(uLocal_313[2], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_313[2], 2), uLocal_313[0], 0, 0);
	AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_313[0], "SWAMP_GANG_4");
	AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_313[1], "SWAMP_GANG_3");
	__LIB_3__::func_285(uLocal_313[0], &Local_111, 0);
	__LIB_3__::func_285(uLocal_313[1], &Local_111, 0);
	__LIB_3__::func_285(uLocal_313[2], &Local_111, 0);
	PED::_0xAAB050DA48B57978(uLocal_313[0], "Angry", 0, -1, 4);
	PED::_0x923583741DC87BCE(uLocal_313[1], "Murfree");
	PED::_0x89F5E7ADECCCB49C(uLocal_313[1], "Cautious");
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_313[0], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_313[1], true, true);
	WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_313[1], joaat("WEAPON_MELEE_TORCH"), 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	__LIB_2__::func_272(uLocal_313[1], joaat("WEAPON_BOW"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_272(uLocal_313[0], joaat("WEAPON_MELEE_MACHETE"), 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[0], 22, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[1], 22, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[0], 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[1], 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[0], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[1], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[0], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[1], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[0], 98, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_313[1], 98, true);
	PED::SET_PED_FLEE_ATTRIBUTES(uLocal_313[0], 1048576, true);
	PED::SET_PED_FLEE_ATTRIBUTES(uLocal_313[1], 1048576, true);
	PED::ADD_RELATIONSHIP_GROUP("RETP_BADDIES", &iLocal_380);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_313[0], iLocal_380);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_313[1], iLocal_380);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_380, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
	ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_313[0], 100);
	ENTITY::_SET_ENTITY_HEALTH(uLocal_313[0], 100, 0);
	ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_313[1], 100);
	ENTITY::_SET_ENTITY_HEALTH(uLocal_313[1], 100, 0);
	uLocal_351 = GRAPHICS::_0xFA50F79257745E74(vLocal_342, 20f, 1, 4, 0);
	iLocal_377[0] = VOLUME::_CREATE_VOLUME_BOX(2245.52f, -756.9f, 42.38f, 0f, 0f, 0f, 0.5f, 0.5f, 1f);
	iLocal_377[1] = VOLUME::_CREATE_VOLUME_BOX(2245.59f, -758.6f, 42.41f, 0f, 0f, 0f, 0.5f, 0.5f, 1f);
	PED::_0xF1C03A5352243A30(uLocal_313[0]);
	PED::_0xF1C03A5352243A30(uLocal_313[1]);
	PED::_0x4C39C95AE5DB1329(iLocal_377[0], 0, 15);
	PED::_0x4C39C95AE5DB1329(iLocal_377[1], 0, 15);
	__LIB_1__::func_991(uLocal_313[0], 0);
	__LIB_1__::func_991(uLocal_313[1], 0);
	__LIB_1__::func_991(uLocal_313[2], 0);
	__LIB_2__::func_190(uLocal_313[0], 200);
	__LIB_2__::func_463(uLocal_313[0], joaat("PROVISION_POCKET_WATCH_SILVER"), 1, 0);
	__LIB_2__::func_463(uLocal_313[1], joaat("PROVISION_NECKLACE"), 1, 0);
	__LIB_2__::func_463(uLocal_313[1], joaat("PROVISION_WEDDING_RING"), 1, 0);
	PED::APPLY_DAMAGE_TO_PED(uLocal_313[2], 5, 1, 64986, 0);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_313[2], "PD_Animal_attack_blood_body_upper_right", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_313[2], "PD_Blood_Spray_FRONT_V1", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_313[2], "PD_Victim_Dead_Knife_Wounds1", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_313[2], "PD_Blood_Spray_Right_V2", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_313[2], "PD_Blood_throat_chest", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_313[2], "PD_Blood_face_right", 0f, 1f);
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_313[0], "Default_Shocked");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_313[1], "Default_Shocked");
}

void func_38()
{
	__LIB_2__::func_51(&(Local_111.f_5), 1);
	__LIB_2__::func_180(&(Local_111.f_5), 1);
	__LIB_2__::func_111(&(Local_111.f_5), 1);
	__LIB_2__::func_110(&(Local_111.f_5), 1);
	__LIB_2__::func_105(&(Local_111.f_5), 1);
	__LIB_2__::func_50(&(Local_111.f_5), 1);
	__LIB_2__::func_182(&(Local_111.f_5), 1);
	__LIB_2__::func_104(&(Local_111.f_5), 1);
	__LIB_2__::func_715(&(Local_111.f_5), 1);
	__LIB_3__::func_230(&(Local_111.f_5), 1);
	__LIB_2__::func_52(&(Local_111.f_5), 0);
}

void func_39()
{
	Local_305 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_305.f_4, 64, 0, false, true);
	Local_305.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_305.f_5, 64, 0, false, true);
	func_131();
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_305.f_1, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_305);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_305.f_1, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_305.f_1);
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_305, "BOOL_IDLE", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_305.f_1, "BOOL_IDLE", false, false);
	func_132();
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_305, "PBL_ENTER"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_305, "PBL_ENTER", true);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_305.f_1, "PBL_ENTER"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_305.f_1, "PBL_ENTER", true);
	}
}

void func_50()
{
	int iVar0;
	int iVar1;
	if (iLocal_500 != 4)
	{
		iVar0 = func_171(&(uLocal_313[1]), &(Local_384[0 /*21*/]), 35f, &Local_448, &(Local_111.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar1 = func_171(&(uLocal_313[0]), &(Local_384[1 /*21*/]), 35f, &Local_448, &(Local_111.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_501)
	{
		case 0:
			switch (iLocal_502)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_502 = 1;
							__LIB_3__::func_673(uLocal_313[0], Global_35, &uLocal_352, -1, 50);
							__LIB_3__::func_673(uLocal_313[1], Global_35, &uLocal_352, -1, 50);
							break;
						case 1:
							iLocal_502 = 2;
							__LIB_3__::func_673(uLocal_313[0], Global_35, &uLocal_352, -1, 50);
							__LIB_3__::func_673(uLocal_313[1], Global_35, &uLocal_352, -1, 50);
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_502 = 1;
							break;
						case 1:
							iLocal_502 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_313[1], 0);
						iLocal_502 = 3;
						func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
						func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
						func_175(4);
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_313[1], 0);
						iLocal_502 = 3;
						func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
						func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
						func_175(4);
					}
					break;
				case 3:
					break;
			}
			break;
		case 1:
			switch (iLocal_502)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_502 = 1;
							__LIB_3__::func_673(uLocal_313[0], Global_35, &uLocal_352, -1, 50);
							__LIB_3__::func_673(uLocal_313[1], Global_35, &uLocal_352, -1, 50);
							break;
						case 1:
							iLocal_502 = 2;
							__LIB_3__::func_673(uLocal_313[0], Global_35, &uLocal_352, -1, 50);
							__LIB_3__::func_673(uLocal_313[1], Global_35, &uLocal_352, -1, 50);
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_502 = 1;
							break;
						case 1:
							iLocal_502 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_313[1], 0);
						func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
						func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
						func_175(4);
						iLocal_502 = 3;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_313[1], 0);
						func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
						func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
						func_175(4);
						iLocal_502 = 3;
					}
					break;
				case 3:
					break;
			}
			break;
		case 2:
			__LIB_2__::func_411(&(Local_448[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_448[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_448[2 /*17*/]), 0, 0);
			break;
	}
}

void func_54()
{
	Local_111.f_45 = 0;
	if (__LIB_3__::func_452(&Local_111, 1f, 150f, 150f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		if (func_178(&uLocal_535))
		{
			if (func_179())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_305, "PBL_ENTER"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_305, "PBL_ENTER", true);
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_305.f_1, "PBL_ENTER"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_305.f_1, "PBL_ENTER", true);
				}
				func_175(1);
			}
		}
	}
}

void func_55()
{
	func_180();
	func_181();
	func_182();
	if (func_183())
	{
		func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
		func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
		func_175(4);
	}
	if ((__LIB_2__::func_118(uLocal_313[1], 1, 1) <= 60f && !ENTITY::IS_ENTITY_AT_COORD(uLocal_313[0], vLocal_322[0 /*3*/], 5f, 5f, 3f, false, true, 0)) && iLocal_515 == 0)
	{
		iLocal_515 = 1;
		__LIB_2__::func_315(1515458263, uLocal_313[0], 1);
		func_174(uLocal_313[1], Global_35, "SWAMP3_CALLOUT_CLICK");
	}
	if (ENTITY::IS_ENTITY_AT_COORD(uLocal_313[0], vLocal_322[0 /*3*/], 3f, 3f, 5f, false, true, 0) && iLocal_514 == 0)
	{
		iLocal_514 = 1;
		func_174(uLocal_313[0], Global_35, "SWAMP4_CALLOUT_CLICK");
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(uLocal_313[0], 1f);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(uLocal_313[1], 1f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_313[0], vLocal_322[0 /*3*/], 1f, 20000, 0.25f, 0, vLocal_332[0 /*3*/].f_2);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_313[1], vLocal_322[1 /*3*/], 1f, 20000, 0.25f, 0, vLocal_332[1 /*3*/].f_2);
		func_175(2);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	func_181();
	__LIB_3__::func_673(uLocal_313[0], uLocal_313[2], &uLocal_352, -1, 15);
	__LIB_3__::func_673(uLocal_313[1], uLocal_313[2], &uLocal_352, -1, 15);
	if (func_183())
	{
		func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
		func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
		func_175(4);
	}
	if (bLocal_519 == 0)
	{
		if (!__LIB_0__::func_163(uLocal_313[0], 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_538);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_538);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_313[2], vLocal_322[0 /*3*/], 1f, 0);
			TASK::TASK_LOOK_AT_ENTITY(0, uLocal_313[2], 1000, 0, 51, 0);
			TASK::TASK_PAUSE(0, 500);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_538);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_313[0], iLocal_538);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_538);
			bLocal_519 = true;
		}
	}
	if (bLocal_520 == 0)
	{
		if (!__LIB_0__::func_163(uLocal_313[1], 242628503))
		{
			bLocal_520 = true;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	if (!__LIB_0__::func_163(uLocal_313[0], 242628503) && bLocal_519)
	{
		iVar0 = 1;
	}
	if (!__LIB_0__::func_163(uLocal_313[1], 242628503) && bLocal_520)
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		Local_448[0 /*17*/].f_13 = func_114(7);
		Local_448[1 /*17*/].f_13 = func_114(9);
		iLocal_501 = 1;
		iLocal_502 = 0;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_313[0], false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_313[1], false);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_313[0]);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_313[1]);
		func_175(3);
	}
}

void func_57()
{
	func_181();
	if (!__LIB_0__::func_75(&uLocal_381))
	{
		__LIB_1__::func_283(&uLocal_381, 0);
	}
	else if (__LIB_0__::func_265(&uLocal_381) > 7f)
	{
	}
	if (iLocal_526 == 0)
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_313[0], 1f, 2048, 0);
		iLocal_526 = 1;
	}
	if (iLocal_527 == 0)
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_313[1], uLocal_313[0], 0.9f, 0f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		iLocal_527 = 1;
	}
}

void func_58()
{
	float fVar0;
	float fVar1;
	switch (iLocal_503)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_317[0]))
			{
				iLocal_317[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_313[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_317[1]))
			{
				iLocal_317[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_313[1]);
			}
			PED::_0x935CF6E42BAF7F4D(uLocal_313[0]);
			PED::_0x935CF6E42BAF7F4D(uLocal_313[1]);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_313[0], joaat("WEAPON_MELEE_MACHETE"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_313[1], joaat("WEAPON_BOW"), false, 0, false, false);
			Local_111.f_45 = 1;
			iLocal_503 = 1;
			break;
		case 1:
			__LIB_1__::func_148(&uLocal_532);
			if (iLocal_509 == 0)
			{
				fVar0 = 1f;
				fVar1 = 0.5f;
			}
			else
			{
				fVar0 = 0.5f;
				fVar1 = 0f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_538);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_538);
			if ((((iLocal_509 == 4 || iLocal_509 == 256) || iLocal_509 == 1) || iLocal_509 == 16) || iLocal_509 == 2)
			{
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 1f, 0, 4);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			}
			if (PED::_IS_PED_CARRYING(uLocal_313[0]))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_313[2], ENTITY::GET_ENTITY_COORDS(uLocal_313[0], true, false), 1f, 9);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_538);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_313[0], iLocal_538, fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_538);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_539);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_539);
			if ((((iLocal_509 == 4 || iLocal_509 == 256) || iLocal_509 == 1) || iLocal_509 == 16) || iLocal_509 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_539);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_313[1], iLocal_539, fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_539);
			__LIB_2__::func_411(&(Local_448[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_448[1 /*17*/]), 0, 0);
			iLocal_503 = 5;
			break;
		case 5:
			__LIB_3__::func_673(uLocal_313[0], Global_35, &uLocal_352, -1, 15);
			__LIB_3__::func_673(uLocal_313[1], Global_35, &uLocal_352, -1, 15);
			func_190();
			if (func_191())
			{
				func_175(6);
			}
			break;
	}
}

char* func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_TP_BAY_V1_INITIAL_A";
		case 1:
			return "RE_TP_BAY_V1_DUMP_A";
		case 2:
			return "RE_TP_BAY_V1_WARN_A";
		case 3:
			return "RE_TP_BAY_V1_WARN_B";
		case 4:
			return "RE_TP_BAY_V1_AGGRO_A";
		case 5:
			return "RE_TP_BAY_V1_AGGRO_B";
		case 6:
			return "RE_TP_BAY_V1_POSITIVE_PLAYER_A";
		case 8:
			return "RE_TP_BAY_V1_NEGATIVE_PLAYER_A";
		case 7:
			return "RE_TP_BAY_V1_POSITIVE_PLAYER_B";
		case 9:
			return "RE_TP_BAY_V1_NEGATIVE_PLAYER_B";
		default:
			break;
	}
	return "";
}

void func_131()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_305, "CORPSE", uLocal_313[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_305, "MALE_A", uLocal_313[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_305.f_1, "MALE_B", uLocal_313[1], 0);
}

void func_132()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_305, "PBL_ENTER");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_305.f_1, "PBL_ENTER");
}

int func_171(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_310(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_403(iParam1, uParam3, uParam0);
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

void func_174(int iParam0, int iParam1, char* sParam2)
{
	__LIB_2__::func_214(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 1, 0, 0);
}

void func_175(int iParam0)
{
	iLocal_500 = iParam0;
}

bool func_178(var uParam0)
{
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_313[0], 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(uLocal_313[0], sLocal_321, -1f, 0, 25600, -1, 0);
		__LIB_1__::func_148(uParam0);
	}
	else if (__LIB_3__::func_135(uParam0) > 100)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_313[1], sLocal_321, 0, 25600, -1, 0, 0, -1);
		return true;
	}
	return false;
}

bool func_179()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_321))
	{
		if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_321, &iVar0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_321, (iVar0 - 2), &vVar1))
			{
				vLocal_322[0 /*3*/] = { vVar1 };
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_321, (iVar0 - 1), &vVar4))
				{
					fVar7 = __LIB_0__::func_152(vVar1, vVar4, 1);
					vLocal_332[0 /*3*/].f_2 = fVar7;
					vLocal_332[1 /*3*/].f_2 = (fVar7 + 10f);
					vLocal_322[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_322[0 /*3*/], fVar7, 0.9f, 0f, 0f) };
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_305, vLocal_322[0 /*3*/], vLocal_332[0 /*3*/], 2);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_305.f_1, vLocal_322[1 /*3*/], vLocal_332[1 /*3*/], 2);
					return true;
				}
			}
		}
	}
	return false;
}

void func_180()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_313[0], 0))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_321, ENTITY::GET_ENTITY_COORDS(uLocal_313[0], true, false), &iVar0);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_321, ENTITY::GET_ENTITY_COORDS(uLocal_313[1], true, false), &iVar1);
		if (iVar0 > iVar1)
		{
			fLocal_513 = 1f;
			fLocal_512 = 0.5f;
		}
		else
		{
			fLocal_513 = 0.5f;
			fLocal_512 = 1f;
		}
	}
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_313[0], fLocal_512, 1, -1f, 0);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_313[1], fLocal_513, 1, -1f, 0);
}

int func_181()
{
	if (func_319(uLocal_313[0]))
	{
		iLocal_516 = 1;
	}
	if (iLocal_516 == 0)
	{
		if (__LIB_3__::func_822(uLocal_313[0], 0, &(Local_111.f_5), &iLocal_509, 0, 0))
		{
			func_175(4);
			func_174(uLocal_313[0], Global_35, "SWAMP4_CHARGE_HISS");
			return 1;
		}
	}
	if (func_319(uLocal_313[1]))
	{
		iLocal_517 = 1;
	}
	if (iLocal_517 == 0)
	{
		if (__LIB_3__::func_822(uLocal_313[1], 0, &(Local_111.f_5), &iLocal_509, 0, 0))
		{
			func_174(uLocal_313[1], Global_35, "SWAMP3_CHARGE_HISS");
			func_175(4);
			return 1;
		}
	}
	return 0;
}

void func_182()
{
	if (!__LIB_0__::func_75(&uLocal_521))
	{
		__LIB_1__::func_283(&uLocal_521, 0);
	}
	else if (__LIB_0__::func_264(&uLocal_521) > IntToFloat(iLocal_524))
	{
		if (bLocal_525 == 0)
		{
			func_174(uLocal_313[0], Global_35, "SWAMP4_CALLOUT_CLICK");
		}
		else
		{
			func_174(uLocal_313[1], Global_35, "SWAMP3_CALLOUT_CLICK");
		}
		__LIB_1__::func_148(&uLocal_521);
		bLocal_525 = !bLocal_525;
		iLocal_524 = MISC::GET_RANDOM_INT_IN_RANGE(5, 15);
	}
}

bool func_183()
{
	float fVar0;
	vector3 vVar1;
	if (func_319(uLocal_313[0]) || func_319(uLocal_313[1]))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vVar1 = { 0f, 0f, 0f };
		PED::SET_PED_SEEING_RANGE(uLocal_313[0], 4f);
		PED::SET_PED_SEEING_RANGE(uLocal_313[1], 4f);
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		vVar1 = { 16f, 16f, 10f };
	}
	else
	{
		vVar1 = { 10f, 10f, 10f };
	}
	if (((__LIB_0__::func_665(uLocal_313[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_313[0], PLAYER::PLAYER_PED_ID(), 17)) || (__LIB_0__::func_665(uLocal_313[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_313[1], PLAYER::PLAYER_PED_ID(), 17))) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_313[0], true, false), vVar1, false, true, 0))
	{
		Local_111.f_44 = 1;
		Local_111.f_45 = 1;
		return true;
	}
	return false;
}

void func_190()
{
	if (!__LIB_0__::func_75(&uLocal_529))
	{
		__LIB_1__::func_148(&uLocal_529);
	}
	switch (iLocal_511)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_265(&uLocal_529) >= 1.5f)
			{
				func_174(uLocal_313[1], Global_35, "SWAMP3_COMBAT_HISS");
				iLocal_511++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				func_174(uLocal_313[0], Global_35, "SWAMP4_COMBAT_GRUNT");
				iLocal_511++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, uLocal_313[0], 1) && __LIB_2__::func_227(0, 1, uLocal_313[1], 1))
			{
				func_174(uLocal_313[1], Global_35, "SWAMP3_COMBAT_GRUNT");
				iLocal_511++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, uLocal_313[0], 1) && __LIB_2__::func_227(0, 1, uLocal_313[1], 1))
			{
				func_174(uLocal_313[0], Global_35, "SWAMP4_COMBAT_HISS");
				iLocal_511++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, uLocal_313[0], 1) && __LIB_2__::func_227(0, 1, uLocal_313[1], 1))
			{
				func_174(uLocal_313[1], Global_35, "SWAMP3_COMBAT_GRUNT");
				iLocal_511++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				func_174(uLocal_313[0], Global_35, "SWAMP4_COMBAT_GRUNT");
				iLocal_511++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0, 1, uLocal_313[0], 1) && __LIB_2__::func_227(0, 1, uLocal_313[1], 1))
			{
				func_174(uLocal_313[1], Global_35, "SWAMP3_COMBAT_HISS");
				iLocal_511++;
			}
			break;
	}
}

bool func_191()
{
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_313[0], true) && PED::IS_PED_DEAD_OR_DYING(uLocal_313[1], true))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_313[0], true) && PED::_IS_PED_HOGTIED(uLocal_313[1]))
	{
		MAP::REMOVE_BLIP(&(iLocal_317[1]));
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_313[1], true) && PED::_IS_PED_HOGTIED(uLocal_313[0]))
	{
		MAP::REMOVE_BLIP(&(iLocal_317[0]));
		return true;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_313[0]) && PED::_IS_PED_HOGTIED(uLocal_313[1]))
	{
		MAP::REMOVE_BLIP(&(iLocal_317[0]));
		MAP::REMOVE_BLIP(&(iLocal_317[1]));
		return true;
	}
	return false;
}

int func_310(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_310(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_319(int iParam0)
{
	if ((PED::GET_PED_CONFIG_FLAG(iParam0, 11, true) || PED::GET_PED_CONFIG_FLAG(iParam0, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
	{
		return true;
	}
	return false;
}

