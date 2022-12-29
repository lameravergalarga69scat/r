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
	char[] cLocal_15[8] = 0;
	var uLocal_16 = 1;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	vector3 vLocal_25 = { 0f, 0f, 0f };
	float fLocal_28 = 0f;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	struct<193> Local_33 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_226 = 0;
	struct<32> Local_227[3];
	struct<12> Local_324[3];
	struct<2> Local_361[1];
	struct<5> Local_364 = { 0, 0, 0, 0, 0 } ;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	struct<22> Local_372 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_394 = 3;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	var uLocal_404[3] = { 0, 0, 0 };
	var uLocal_408[3] = { 0, 0, 0 };
	int iLocal_412 = 0;
	var uLocal_413 = -89429847;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	int iLocal_422 = 0;
	float fLocal_423 = 0f;
	float fLocal_424 = 0f;
	int iLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	int iLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	vector3 vLocal_432 = { 0f, 0f, 0f };
	vector3 vLocal_435 = { 0f, 0f, 0f };
	int iLocal_438 = 0;
	int iLocal_439[2] = { 0, 0 };
	bool bLocal_442 = false;
	int iLocal_443[3] = { 0, 0, 0 };
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	struct<21> Local_467[3];
	var uLocal_531 = 2;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 570;
	var uLocal_535 = 1065353216;
	var uLocal_536 = -1082130432;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 2;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 570;
	var uLocal_552 = 1065353216;
	var uLocal_553 = -1082130432;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 2;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 2;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 570;
	var uLocal_570 = 1065353216;
	var uLocal_571 = -1082130432;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 2;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 570;
	var uLocal_587 = 1065353216;
	var uLocal_588 = -1082130432;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 2;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 2;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 570;
	var uLocal_605 = 1065353216;
	var uLocal_606 = -1082130432;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 2;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 570;
	var uLocal_622 = 1065353216;
	var uLocal_623 = -1082130432;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 2;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637[3] = { 0, 0, 0 };
	int iLocal_641[3] = { 0, 0, 0 };
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
	iLocal_14 = joaat("CART04");
	cLocal_15 = "RALLY";
	fLocal_423 = 5f;
	fLocal_424 = 3f;
	vLocal_432 = { 50f, 50f, 50f };
	iLocal_465 = joaat("WORLD_HUMAN_SIT_GROUND");
	iLocal_466 = joaat("WORLD_ANIMAL_HORSE_RESTING");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_442 = true;
	}
	if (!bLocal_442)
	{
		Local_33.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_33.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_368(&Local_33, 1);
		__LIB_2__::func_433(&(Local_33.f_5));
		__LIB_2__::func_715(&(Local_33.f_5), 1);
		__LIB_2__::func_111(&(Local_33.f_5), 1);
		__LIB_2__::func_104(&(Local_33.f_5), 1);
		__LIB_2__::func_662(&(Local_33.f_5), 1);
		__LIB_2__::func_906(&(Local_33.f_5), 30);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_442, 1177, 0);
		if (bLocal_442)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_403)
			{
				case 0:
					if (func_12())
					{
						iLocal_403 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_33, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_14(&Local_33, &uLocal_464, &uLocal_463);
						Local_33.f_51.f_3 = func_15();
						__LIB_3__::func_618(Local_33.f_51, 10f, 1, 0, 0, 0, 0);
						__LIB_2__::func_659(&uLocal_427, Local_33.f_51, 1.5f, 0, 0);
						__LIB_3__::func_867(&uLocal_430, &uLocal_431, Local_33.f_51, 0f, 0f, 0f, vLocal_432, 0, 0, 1, 0, 0);
						iLocal_403 = 3;
					}
					else if (Local_33.f_160)
					{
						func_10();
					}
					break;
				case 3:
					if (func_19())
					{
						func_20();
						if (ENTITY::DOES_ENTITY_EXIST(Local_324[0 /*12*/].f_8))
						{
							OBJECT::_MARK_OBJECT_FOR_DELETION(Local_324[0 /*12*/].f_8);
							__LIB_3__::func_285(Local_324[0 /*12*/].f_8, &Local_33, 0);
							iLocal_439[0] = VOLUME::_CREATE_VOLUME_BOX(Local_33.f_51, 0f, 0f, 0f, 3f, 1f, 0.75f);
							PATHFIND::_0x19C7567D2F2287D6(iLocal_439[0], 7);
							PED::_0x7C00CFC48A782DC0(iLocal_439[0], Local_324[0 /*12*/].f_8, 0f, 0f, 3.21f, 0f, 0f, 0f, 2, 1);
							iLocal_439[1] = VOLUME::_CREATE_VOLUME_BOX(Local_33.f_51, 0f, 0f, 0f, 1f, 5f, 0.75f);
							PATHFIND::_0x19C7567D2F2287D6(iLocal_439[1], 7);
							PED::_0x7C00CFC48A782DC0(iLocal_439[1], Local_324[0 /*12*/].f_8, 0f, 0f, 2.25f, -90f, 0f, 0f, 2, 1);
						}
						func_22();
						func_23();
						func_24();
						iLocal_403 = 4;
					}
					break;
				case 4:
					if (!func_25(&Local_33, &uLocal_404, 0, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (!Local_33.f_46)
					{
						if (func_26())
						{
							iLocal_443[0] = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), uLocal_404[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							iLocal_443[1] = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), uLocal_404[1], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							iLocal_443[2] = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), uLocal_404[2], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							__LIB_2__::func_504(uLocal_404[1], 0);
							Local_33.f_46 = 1;
							if (iLocal_402 != 5)
							{
								iLocal_402 = 5;
							}
						}
					}
					if (func_28())
					{
						Local_33.f_50 = 1;
						func_10();
					}
					if (__LIB_3__::func_431(&Local_33, &uLocal_404, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_33.f_158);
		}
	}
}

void func_10()
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (!__LIB_0__::func_27(iLocal_422, 1))
	{
		Local_33.f_45 = 0;
		__LIB_3__::func_252(&Local_33);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_404[0]))
	{
		__LIB_2__::func_353(&uLocal_426, 1);
		__LIB_2__::func_353(&uLocal_427, 1);
		__LIB_2__::func_353(&uLocal_428, 1);
		if (__LIB_2__::func_1(uLocal_404[0], 0, 1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uLocal_404[0]))
			{
				ENTITY::DETACH_ENTITY(uLocal_404[0], true, true);
			}
		}
	}
	__LIB_3__::func_525(&uLocal_430, &uLocal_431);
	if (!Local_33.f_48)
	{
		func_43();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_438))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_438);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_364))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_364);
		}
		if (__LIB_0__::func_94(Global_35, Local_33.f_51, 1) > 80f)
		{
			func_45();
		}
		else
		{
			__LIB_4__::func_284(&uLocal_404, 1);
			func_47(1);
			__LIB_4__::func_282(&uLocal_404, 1);
			Local_33.f_50 = 1;
		}
	}
	else if (!__LIB_3__::func_463(joaat("DOCUMENT_NOTE_RALLY"), 1, 0))
	{
		MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RALLY"), 300000);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_438))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_438);
	}
	func_50(&Local_33, &uLocal_404, &uLocal_408, 0, uLocal_464, uLocal_463, 0, 1, 0, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_439[0]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_439[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_439[1]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_439[1]);
	}
	__LIB_1__::func_774(__LIB_1__::func_237(0), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	__LIB_1__::func_551(__LIB_1__::func_237(0), 0);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_443[0]);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_443[1]);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_443[2]);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12()
{
	switch (iLocal_401)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_33))
			{
				func_56();
				func_57();
				func_58();
				func_59();
				func_60();
				func_61();
				STREAMING::REQUEST_MODEL(iLocal_14, false);
				func_62();
				__LIB_3__::func_314(&Local_324);
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_466, 4194304, 0, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_465, 15, 0, 0);
				iLocal_401 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_400, cLocal_15))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_16))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_324))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_14))
			{
				return false;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("RALLY_MEETING"))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_227))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_466, false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_465, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 6:
			*uParam1 = 9;
			*uParam2 = 3;
			break;
		case 7:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

float func_15()
{
	float fVar0;
	fVar0 = __LIB_0__::func_152(Local_33.f_51, Global_36, 1);
	switch (Local_33.f_51.f_4)
	{
		case 2:
			fVar0 = 0f;
			break;
		case 3:
			fVar0 = 0f;
			break;
		case 4:
			fVar0 = 0f;
			break;
		case 6:
			fVar0 = 90f;
			break;
		case 8:
			fVar0 = 270f;
			break;
		case 9:
			fVar0 = 270f;
			break;
		case 10:
			fVar0 = 270f;
			break;
	}
	return fVar0;
}

bool func_19()
{
	switch (iLocal_429)
	{
		case 0:
			iLocal_429 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_33.f_51, Local_33.f_51.f_3, &Local_227, &uLocal_404, 0, 0, -1, 1))
			{
				return false;
			}
			func_80();
			__LIB_3__::func_400(Local_33.f_51, &Local_324, Local_33.f_51.f_3, 0, 0, -1, 0);
			ENTITY::SET_ENTITY_ROTATION(Local_324[0 /*12*/].f_8, 85f, 0f, 0f, 2, true);
			func_82();
			iLocal_429 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_20()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_227[iVar0 /*32*/].f_1 != 0)
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_404[iVar0], true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_404[iVar0], joaat("REL_CRIMINALS"));
			PED::SET_PED_CONFIG_FLAG(uLocal_404[iVar0], 6, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_404[iVar0], 494, true);
			__LIB_2__::func_23(&(Local_33.f_5), uLocal_404[iVar0], 0);
			__LIB_1__::func_991(uLocal_404[iVar0], 0);
			__LIB_2__::func_133(uLocal_404[iVar0], &(Local_227[iVar0 /*32*/].f_23), 0);
			if (__LIB_1__::func_985())
			{
				__LIB_0__::func_169(uLocal_404[iVar0], 0, 1);
			}
			if (iVar0 == 1)
			{
				__LIB_2__::func_272(uLocal_404[1], joaat("GROUP_PISTOL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_272(uLocal_404[1], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_0__::func_202(uLocal_404[1], 0);
			}
			else
			{
				PED::_0xAE6004120C18DF97(uLocal_404[iVar0], 0, 0);
				ENTITY::_0x18FF3110CF47115D(uLocal_404[iVar0], 7, 0);
				__LIB_2__::func_279(uLocal_404[iVar0], 1);
			}
		}
		if (__LIB_2__::func_1(uLocal_404[iVar0], 0, 1))
		{
			PED::SET_PED_FIRING_PATTERN(uLocal_404[iVar0], joaat("FIRING_PATTERN_BURST_FIRE"));
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_227[1 /*32*/].f_11, 0, 1))
	{
		__LIB_1__::func_991(Local_227[1 /*32*/].f_11, 0);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_227[1 /*32*/].f_11, vLocal_29, fLocal_32, true, false, true);
		__LIB_2__::func_20(&(Local_33.f_5), Local_227[1 /*32*/].f_11, 0);
	}
}

void func_22()
{
	Local_364 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_364.f_4, 64, "pblDialogue", false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_364, Local_33.f_51, 0f, 0f, Local_33.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_364, "objCross", Local_324[0 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_364, "pedRallyA", uLocal_404[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_364, "pedRallyB", uLocal_404[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_364, "pedRallyLeader", uLocal_404[1], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_364);
}

void func_23()
{
	vector3 vVar0;
	if (__LIB_0__::func_86(vLocal_435))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_438))
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_25, fLocal_28, 1.7f, -0.75f, 0f) };
			__LIB_3__::func_409(&vVar0, 2f);
			vLocal_435 = { vVar0 };
		}
	}
}

void func_24()
{
	__LIB_3__::func_337(&uLocal_428, vLocal_435, 1f);
}

bool func_25(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_102(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_26()
{
	if (func_105(&uLocal_404, &(Local_33.f_5), &iLocal_425, &uLocal_447, 0, 2, 1))
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_422, 512))
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_636, 16))
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_636, 64))
	{
		return true;
	}
	if (iLocal_402 > 0)
	{
		if (__LIB_2__::func_1(uLocal_404[0], 0, 1))
		{
			if (Local_33.f_98[0] < 1f)
			{
				__LIB_1__::func_683(&iLocal_422, 32768);
				return true;
			}
		}
		if (__LIB_2__::func_1(uLocal_404[2], 0, 1))
		{
			if (Local_33.f_98[2] < 1f)
			{
				__LIB_1__::func_683(&iLocal_422, 32768);
				return true;
			}
		}
		if (__LIB_2__::func_1(uLocal_404[0], 0, 1) || __LIB_2__::func_1(uLocal_404[2], 0, 1))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_324[0 /*12*/].f_8))
			{
				__LIB_1__::func_683(&iLocal_422, 32768);
				return true;
			}
		}
	}
	return false;
}

bool func_28()
{
	if (iLocal_402 >= 1)
	{
		func_107();
		func_108(0, &uLocal_531, 1);
		func_108(1, &uLocal_566, 2);
		func_108(2, &uLocal_601, 4);
		if (iLocal_402 >= 1)
		{
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RALLY"), 1000);
		}
		if (!Local_33.f_46)
		{
			__LIB_3__::func_972(&iLocal_412, &(uLocal_408[1]), 1);
		}
	}
	func_110();
	switch (iLocal_402)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_364, true, false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_364, "pblDialogue") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_364, "pblAction"))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_364);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_364, "pblDialogue", true);
					TASK::TASK_START_SCENARIO_AT_POSITION(Local_227[1 /*32*/].f_11, iLocal_466, vLocal_29, fLocal_32, -1, false, true, 0, -1f, false);
					STREAMING::REQUEST_COLLISION_AT_COORD(Local_33.f_51);
					iLocal_402 = 1;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_364, "pblDialogue");
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_364, "pblAction");
				}
			}
			break;
		case 1:
			if (func_111(&Local_33, 3f, 80f, 55f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				if (__LIB_1__::func_149(1) == 0)
				{
					__LIB_1__::func_683(&iLocal_422, 16);
				}
				__LIB_3__::func_277(joaat("SONAR_OVERHEARD_BEAT_BIG"), Local_33.f_51, 1);
				__LIB_2__::func_303(uLocal_404[1], uLocal_404[0], "RE_KS_UNI_V1_BACKS", 0, (80f + 20f), 0, 0, 0, 1, 0, 0, 1744022339, 1, 0, 0);
				__LIB_4__::func_277(&iLocal_412, uLocal_404[1], &(uLocal_408[1]), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
				__LIB_3__::func_164(&(Local_33.f_121));
				__LIB_1__::func_148(&uLocal_448);
				iLocal_402 = 2;
			}
			break;
		case 2:
			if (func_111(&Local_33, 3f, (80f - 5f), (55f - 5f), 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				if (__LIB_2__::func_227(0, 1, uLocal_404[1], 1))
				{
					if (__LIB_0__::func_27(iLocal_422, 32) || __LIB_1__::func_149(1) == 0)
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_404[1], Local_361[0 /*2*/], "dialogue01_leader") < 0.4f)
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_364, "bAction", true, false);
							iLocal_402 = 3;
						}
					}
				}
			}
			break;
		case 3:
			func_118();
			func_119();
			if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_364, false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_364, false) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_364, "pedRallyLeader"))) || func_120())
			{
				if (!__LIB_0__::func_27(iLocal_422, 32768))
				{
					PED::_0x923583741DC87BCE(uLocal_404[1], "Rally");
					PED::_0x89F5E7ADECCCB49C(uLocal_404[1], "Rally_Sad");
					__LIB_1__::func_683(&iLocal_422, 1024);
					if (func_120() && !__LIB_0__::func_27(iLocal_636, 128))
					{
						func_121(1);
					}
					else
					{
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_404[1], -1))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "pedRallyLeader", uLocal_404[1]);
							__LIB_3__::func_319(Local_364);
							TASK::CLEAR_PED_TASKS(uLocal_404[1], true, false);
						}
						func_121(0);
					}
					__LIB_0__::func_325(&(uLocal_408[1]));
					iLocal_402 = 4;
				}
				else
				{
					iLocal_402 = 5;
				}
			}
			break;
		case 4:
			if (Local_33.f_98[1] < 5f)
			{
				__LIB_3__::func_699(&(uLocal_404[1]), 0, Global_35, 1, 0, 0, 0, 1);
			}
			if (__LIB_0__::func_27(iLocal_422, 1024))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_404[1], 1f);
			}
			if (!__LIB_0__::func_27(iLocal_422, 4))
			{
				if (func_125() && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_404[1]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_404[1], &Local_372);
					__LIB_2__::func_303(uLocal_404[1], Global_35, "RE_KS_UNI_V1_HANG_OUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_422, 4);
					fLocal_423 = 9f;
				}
			}
			else if (!__LIB_0__::func_27(iLocal_422, 16384))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_364, false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_364, false) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_364, "pedRallyLeader")))
				{
					func_121(0);
				}
			}
			else if (func_126())
			{
				__LIB_2__::func_303(uLocal_404[1], Global_35, "RE_KS_UNI_V1_HARASS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::TASK_SMART_FLEE_PED(uLocal_404[1], Global_35, 1000f, -1, 256, 3f, 0);
				PED::SET_PED_KEEP_TASK(uLocal_404[1], true);
				__LIB_1__::func_683(&iLocal_422, 1048576);
				iLocal_402 = 7;
			}
			if (__LIB_0__::func_94(Global_35, Local_33.f_51, 1) > 150f && __LIB_0__::func_665(Global_35, uLocal_404[1], 1, 1) < 50f)
			{
				if (__LIB_2__::func_1(uLocal_404[1], 0, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_404[1], false);
				}
				iLocal_402 = 7;
			}
			break;
		case 5:
			func_128();
			__LIB_2__::func_111(&(Local_33.f_5), 0);
			__LIB_3__::func_707(__LIB_3__::func_687(Local_33.f_3), 1);
			if (func_131())
			{
				func_132();
			}
			else if (!__LIB_0__::func_27(iLocal_422, 1))
			{
				func_133();
			}
			if (!__LIB_2__::func_1(uLocal_404[1], 0, 1))
			{
				__LIB_0__::func_325(&(uLocal_408[1]));
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_636, 16))
				{
				}
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_404[1], 0);
				if (!__LIB_0__::func_27(iLocal_422, 1048576))
				{
					__LIB_2__::func_73(uLocal_404[1], &(uLocal_408[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
			}
			Local_33.f_50 = 1;
			__LIB_1__::func_148(&uLocal_451);
			iLocal_402 = 6;
			break;
		case 6:
			func_135();
			if (__LIB_0__::func_27(iLocal_422, 1048576) && !__LIB_0__::func_27(iLocal_422, 2097152))
			{
				if (MAP::DOES_BLIP_EXIST(uLocal_408[1]))
				{
					__LIB_0__::func_325(&(uLocal_408[1]));
					__LIB_1__::func_683(&iLocal_422, 2097152);
				}
			}
			if (func_131())
			{
				func_132();
			}
			if (!__LIB_0__::func_27(iLocal_422, 4096))
			{
				if (((((iLocal_425 == 8192 || iLocal_425 == 2048) || iLocal_425 == 1024) || __LIB_0__::func_27(iLocal_422, 32768)) || __LIB_0__::func_27(iLocal_636, 16)) || __LIB_0__::func_27(iLocal_636, 64))
				{
					__LIB_1__::func_683(&iLocal_422, 256);
					if (func_136(0, 1))
					{
						if (iLocal_425 == 8192)
						{
							fLocal_424 = 1f;
						}
						else if (__LIB_0__::func_27(iLocal_636, 16))
						{
							fLocal_424 = 3f;
						}
						else
						{
							fLocal_424 = 0.75f;
						}
						__LIB_2__::func_788(&(Local_227[1 /*32*/].f_11), 0, 1, 0);
						__LIB_1__::func_683(&iLocal_422, 4096);
					}
				}
				else if (func_136(1, 0))
				{
					__LIB_2__::func_788(&(Local_227[1 /*32*/].f_11), 0, 1, 0);
					__LIB_1__::func_683(&iLocal_422, 4096);
				}
			}
			if (__LIB_0__::func_265(&uLocal_451) > fLocal_424 && __LIB_0__::func_27(iLocal_422, 4096))
			{
				if (__LIB_0__::func_27(iLocal_636, 16))
				{
					func_139();
				}
				else
				{
					func_140();
				}
				__LIB_4__::func_268(__LIB_4__::func_81(Local_33.f_3), 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				iLocal_402 = 7;
			}
			else
			{
				func_143();
			}
			break;
		case 7:
			func_135();
			if (func_131())
			{
				func_132();
			}
			if (Local_33.f_46)
			{
				__LIB_4__::func_288(&uLocal_404, &uLocal_408, 200f, 1, 0);
				func_140();
				func_145();
			}
			if (!Local_33.f_44)
			{
				Local_33.f_44 = 1;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_364, false) && __LIB_0__::func_665(Global_35, uLocal_404[1], 1, 1) > 50f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_43()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_324[iVar0 /*12*/].f_8));
		}
		iVar0++;
	}
}

void func_45()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_2__::func_426(&(uLocal_404[iVar0]));
		__LIB_2__::func_426(&(Local_227[iVar0 /*32*/].f_11));
		iVar0++;
	}
}

void func_47(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_227[iVar0 /*32*/].f_11))
		{
			PHYSICS::_0x0348469DAA17576C(Local_227[iVar0 /*32*/].f_11);
			TASK::TASK_SMART_FLEE_PED(Local_227[iVar0 /*32*/].f_11, Global_35, 500f, -1, 256, 3f, 0);
			if (bParam0)
			{
				PED::SET_PED_KEEP_TASK(Local_227[iVar0 /*32*/].f_11, true);
			}
			PED::_0x39A2FC5AF55A52B1(uLocal_404[iVar0], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_404[iVar0]));
		}
		iVar0++;
	}
}

void func_50(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_168(uParam0);
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

void func_56()
{
	Local_227[0 /*32*/].f_1 = joaat("RE_RALLYSETUP_MALES_01");
	StringCopy(&(Local_227[0 /*32*/].f_23), "0060_A_M_M_BlWTownfolk_01_WHITE_01", 64);
	Local_227[0 /*32*/].f_3 = -552778627;
	__LIB_3__::func_303(&(Local_227[0 /*32*/].f_22));
	__LIB_4__::func_287(&(Local_227[0 /*32*/].f_22));
	Local_227[1 /*32*/].f_1 = joaat("RE_RALLYSETUP_MALES_01");
	StringCopy(&(Local_227[1 /*32*/].f_23), "RALLY_LEADER", 64);
	Local_227[1 /*32*/].f_3 = 1455264691;
	Local_227[1 /*32*/].f_12 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	Local_227[1 /*32*/].f_15 = { -6.35f, -0.3f, 0f };
	Local_227[1 /*32*/].f_18 = 114.5f;
	Local_227[1 /*32*/].f_13 = 0;
	__LIB_3__::func_303(&(Local_227[1 /*32*/].f_22));
	__LIB_4__::func_287(&(Local_227[1 /*32*/].f_22));
	Local_227[2 /*32*/].f_1 = joaat("RE_RALLYSETUP_MALES_01");
	StringCopy(&(Local_227[2 /*32*/].f_23), "0903_A_M_M_Civ_Poor_White_AGGRESSIVE_03", 64);
	Local_227[2 /*32*/].f_3 = -1991993107;
	__LIB_3__::func_303(&(Local_227[2 /*32*/].f_22));
	__LIB_4__::func_287(&(Local_227[2 /*32*/].f_22));
}

void func_57()
{
	Local_227[0 /*32*/].f_6 = { 0.2f, 2.15f, -0.06f };
	Local_227[0 /*32*/].f_9 = 180f;
	Local_227[1 /*32*/].f_6 = { 2.044f, 1.981f, 1f };
	Local_227[1 /*32*/].f_9 = 128f;
	Local_227[2 /*32*/].f_6 = { 2.13f, 0.01f, 0.04f };
	Local_227[2 /*32*/].f_9 = 36.618f;
}

void func_58()
{
	Local_361[0 /*2*/] = "script_re@rally@cross_accident";
	__LIB_3__::func_318(Local_361[0 /*2*/], &uLocal_16);
}

void func_59()
{
	Local_364.f_4 = "script@beat@wilderness@rally@crushed";
}

void func_60()
{
	__LIB_3__::func_284(&Local_227);
}

void func_61()
{
	Local_324[0 /*12*/].f_7 = joaat("S_CROSSBURNING01X");
	Local_324[0 /*12*/] = { 0.25f, -1.85f, -0.25f };
	Local_324[0 /*12*/].f_10 = 0;
	Local_324[1 /*12*/].f_7 = joaat("P_LANTERN04X");
	Local_324[1 /*12*/] = { -1.25f, 1.8f, 0f };
	Local_324[2 /*12*/].f_7 = joaat("P_KEROSENECAN02X");
	Local_324[2 /*12*/] = { 1.6f, -1.4f, 0f };
}

void func_62()
{
	Local_372 = { 0f, 0f, 0f };
	Local_372.f_3 = Global_35;
	Local_372.f_8 = 4;
	Local_372.f_19 = 3;
	Local_372.f_21 = 3;
	Local_372.f_17 = 3;
	Local_372.f_18 = 3;
	Local_372.f_7 = 8000;
	Local_372.f_13 = 3;
}

void func_80()
{
	func_230();
	iLocal_438 = VEHICLE::CREATE_VEHICLE(iLocal_14, vLocal_25, fLocal_28, true, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_438, 0f);
	VEHICLE::_0xC399CC89FBA05DA0(iLocal_438, 1);
	__LIB_2__::func_19(iLocal_438);
}

void func_82()
{
	switch (Local_33.f_51.f_4)
	{
		case 8:
			OBJECT::DELETE_OBJECT(&(Local_324[2 /*12*/].f_8));
			break;
	}
}

void func_100(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!__LIB_0__::func_35(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (__LIB_0__::func_190())
	{
		__LIB_3__::func_180(1);
	}
	func_240(iParam2, uParam0->f_43);
	__LIB_1__::func_309(iParam2, 0, 0, 0, 0);
	if (__LIB_3__::func_181(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(__LIB_3__::func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_243(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_102(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = __LIB_3__::func_249(uParam0, bVar0);
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

bool func_105(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_2__::func_653((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

void func_107()
{
	if (Local_33.f_46)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_438))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_438, false))
		{
			__LIB_1__::func_683(&iLocal_422, 512);
		}
	}
}

void func_108(int iParam0, var uParam1, int iParam2)
{
	if (iLocal_402 <= 0 || __LIB_0__::func_27(iLocal_636, iParam2))
	{
		return;
	}
	if (iLocal_641[iParam0] > 0)
	{
		if (!__LIB_2__::func_1(uLocal_404[iParam0], 0, 1) || Local_33.f_46)
		{
			if (!__LIB_0__::func_27(iLocal_636, iParam2))
			{
				if (!__LIB_0__::func_75(&uLocal_397))
				{
					__LIB_1__::func_148(&uLocal_397);
				}
				else if ((__LIB_0__::func_265(&uLocal_397) > 4f || PED::IS_PED_IN_COMBAT(Global_35, 0)) || PED::IS_PED_IN_COMBAT(uLocal_404[iParam0], Global_35))
				{
					__LIB_2__::func_593(&(Local_467[iParam0 /*21*/]), uParam1);
					__LIB_1__::func_683(&iLocal_636, iParam2);
				}
			}
			return;
		}
	}
	if (iLocal_641[iParam0] > 0)
	{
		if (__LIB_0__::func_27(iLocal_422, 1))
		{
			iLocal_637[iParam0] = func_277(&(uLocal_404[iParam0]), &(Local_467[iParam0 /*21*/]), 20f, uParam1, &(Local_33.f_192), 0, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iLocal_637[iParam0] = func_277(&(uLocal_404[iParam0]), &(Local_467[iParam0 /*21*/]), 35f, uParam1, &(Local_33.f_192), 0, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (iLocal_641[iParam0])
	{
		case 0:
			__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(uParam1[0 /*17*/], 1, 0);
			__LIB_2__::func_411(uParam1[1 /*17*/], 1, 0);
			iLocal_641[iParam0] = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_422, 1) || __LIB_0__::func_27(iLocal_636, 8))
			{
				if (iParam0 == 0 || iParam0 == 2)
				{
					__LIB_2__::func_411(uParam1[0 /*17*/], 0, 0);
					__LIB_2__::func_411(uParam1[1 /*17*/], 0, 0);
					iLocal_641[iParam0] = 2;
				}
				else
				{
					__LIB_2__::func_411(uParam1[0 /*17*/], 0, 0);
					__LIB_3__::func_934(uParam1[0 /*17*/], 0, 1065353216 /* Float: 1f */);
					__LIB_3__::func_934(uParam1[1 /*17*/], 0, 1065353216 /* Float: 1f */);
					iLocal_641[iParam0] = 3;
				}
			}
			else
			{
				switch (iLocal_637[iParam0])
				{
					case 0:
					case 1:
						__LIB_2__::func_303(Global_35, uLocal_404[iParam0], "RE_KS_UNI_V1_ILO_CALLOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_2__::func_411(uParam1[0 /*17*/], 0, 0);
						__LIB_2__::func_411(uParam1[1 /*17*/], 0, 0);
						__LIB_1__::func_683(&iLocal_636, 8);
						__LIB_1__::func_148(&uLocal_457);
						iLocal_641[iParam0] = 2;
						break;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_636, 16))
			{
				if (__LIB_0__::func_27(iLocal_636, 8))
				{
					if (__LIB_0__::func_265(&uLocal_457) > 1f)
					{
						__LIB_1__::func_683(&iLocal_636, 16);
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_422, 1))
			{
				__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				iLocal_641[iParam0] = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_636, 16))
			{
				if (__LIB_0__::func_27(iLocal_636, 8))
				{
					if (__LIB_0__::func_265(&uLocal_457) > 1f)
					{
						__LIB_1__::func_683(&iLocal_636, 16);
					}
				}
			}
			switch (iLocal_637[iParam0])
			{
				case 0:
					break;
				case 1:
					if (!__LIB_2__::func_1(uLocal_404[2], 0, 1) || !__LIB_2__::func_1(uLocal_404[0], 0, 1))
					{
						__LIB_2__::func_303(Global_35, uLocal_404[iParam0], "RE_KS_UNI_V1_GRT_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_404[iParam0], "RE_KS_UNI_V1_ILO_INSULT_ALT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_457);
					__LIB_2__::func_411(uParam1[1 /*17*/], 0, 0);
					__LIB_1__::func_683(&iLocal_636, 128);
					iLocal_641[iParam0] = 4;
					break;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_457) > 2f)
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					__LIB_2__::func_411(uParam1[1 /*17*/], 0, 0);
					__LIB_2__::func_411(uParam1[0 /*17*/], 0, 0);
					__LIB_1__::func_683(&iLocal_636, 64);
					iLocal_641[iParam0] = 5;
				}
			}
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_110()
{
	if (__LIB_2__::func_1(uLocal_404[2], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[2], -474540600) || PED::IS_PED_RAGDOLL(uLocal_404[2]))
		{
			__LIB_1__::func_864(uLocal_404[2], 0, 0);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "pedRallyB", uLocal_404[2]);
		}
	}
	if (__LIB_2__::func_1(uLocal_404[0], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[0], -474540600) || PED::IS_PED_RAGDOLL(uLocal_404[0]))
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_404[1], 0);
			__LIB_1__::func_864(uLocal_404[0], 0, 0);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "pedRallyA", uLocal_404[0]);
		}
	}
}

bool func_111(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_3__::func_336(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_3__::func_336(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_118()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], 1384389773))
	{
		__LIB_3__::func_277(1891783641, Local_33.f_51, 1);
	}
	if (!__LIB_0__::func_27(iLocal_422, 8))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_404[1], Local_361[0 /*2*/], "sobbing_idle_a_leader", 1))
		{
			__LIB_2__::func_303(uLocal_404[1], uLocal_404[1], "RE_KS_UNI_V1_SOBBING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_422, 8);
		}
	}
}

void func_119()
{
	if (!__LIB_0__::func_27(iLocal_422, 1))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_364, "pblAction"))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_404[1], Local_361[0 /*2*/], "action_exit_leader", 1))
			{
				__LIB_1__::func_683(&iLocal_422, 1);
				func_290();
				Local_33.f_44 = 1;
			}
			if (!__LIB_2__::func_1(uLocal_404[1], 0, 1))
			{
				return;
			}
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_404[1], Local_361[0 /*2*/], "dialogue01_leader", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_404[1], Local_361[0 /*2*/], "dialogue02_leader", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_404[1], Local_361[0 /*2*/], "dialogue03_leader", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_404[1], Local_361[0 /*2*/], "dialogue04_leader", 1))
			{
				if (func_291(5f))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_364, "pblAction", true);
				}
			}
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_364, "pblAction");
		}
	}
	else if (func_131())
	{
		func_132();
	}
}

bool func_120()
{
	if ((Local_33.f_98[1] < 10f && __LIB_2__::func_123(uLocal_404[1], Global_35, 0.4f)) || Local_33.f_98[1] < 5f)
	{
		if (((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], joaat("SAFETOBREAKOUT")) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], 247110940)) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], -676255205)) || __LIB_0__::func_27(iLocal_422, 32768))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], 247110940))
			{
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], -676255205))
			{
			}
			return true;
		}
	}
	return false;
}

void func_121(bool bParam0)
{
	int iVar0;
	if (__LIB_0__::func_86(vLocal_435))
	{
		func_23();
	}
	if (bParam0)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_404[1], -1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "pedRallyLeader", uLocal_404[1]);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uLocal_404[1], true, false);
		}
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_404[1], &Local_372);
		__LIB_1__::func_683(&iLocal_422, 8192);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam0)
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_361[0 /*2*/], "breakout_stand_front_leader", Global_35, 6000, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 0, -1f);
	}
	if (!__LIB_0__::func_86(vLocal_435))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_435, 1f, -1, 2f, 0, (fLocal_28 - 90f));
		TASK::_TASK_START_SCENARIO_IN_PLACE(0, iLocal_465, -1, true, 0, -1f, false);
	}
	else
	{
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	__LIB_1__::func_474(uLocal_404[1], &iVar0, 0, 0, 1, 1);
	__LIB_1__::func_683(&iLocal_422, 16384);
}

bool func_125()
{
	if (__LIB_0__::func_27(iLocal_636, 128))
	{
		return false;
	}
	if (__LIB_0__::func_27(iLocal_422, 8192))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_404[1], -1318650840))
		{
			return true;
		}
	}
	else if (__LIB_2__::func_227(-2f, 1, 0, 0))
	{
		if (__LIB_2__::func_215(uLocal_404[1], Global_35, 1, 10f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_126()
{
	if (Local_33.f_98[1] < 5f)
	{
		if (!__LIB_0__::func_75(&uLocal_454))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(uLocal_404[1]))
			{
				__LIB_1__::func_148(&uLocal_454);
			}
		}
		else if (__LIB_0__::func_265(&uLocal_454) > fLocal_423 && PED::_0x7F9B9791D4CB71F6(uLocal_404[1], Global_35, false, 0) == 1)
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(uLocal_404[1]))
			{
				if (PED::_0xEEED8FAFEC331A70(uLocal_404[1], Global_36, 2))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_454))
	{
		__LIB_0__::func_37(&uLocal_454);
	}
	return false;
}

void func_128()
{
	int iVar0;
	int iVar1;
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_438) && !ENTITY::IS_ENTITY_DEAD(iLocal_438)) && !__LIB_0__::func_27(iLocal_422, 16384))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_438, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				TASK::TASK_SMART_FLEE_COORD(iVar1, Local_33.f_51, 50f, -1, false, 2f);
			}
			iVar0++;
		}
	}
}

bool func_131()
{
	if (Local_33.f_46)
	{
		if (__LIB_0__::func_27(iLocal_422, 65536))
		{
			return true;
		}
		if (!__LIB_0__::func_27(iLocal_422, 131072))
		{
			if ((!__LIB_2__::func_1(uLocal_404[2], 0, 1) || PED::IS_PED_RAGDOLL(uLocal_404[2])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_404[2], Global_35, 1, 1))
			{
				__LIB_1__::func_683(&iLocal_422, 65536);
				return true;
			}
		}
	}
	return false;
}

void func_132()
{
	int iVar0;
	var uVar1[3];
	if (!__LIB_0__::func_27(iLocal_422, 131072))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_324[0 /*12*/].f_8))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_364, false) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_324[0 /*12*/].f_8, -1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "objCross", Local_324[0 /*12*/].f_8);
				if (__LIB_2__::func_1(uLocal_404[0], 0, 1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "pedRallyA", uLocal_404[0]);
				}
				if (__LIB_2__::func_1(uLocal_404[2], 0, 1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_364, "pedRallyB", uLocal_404[2]);
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar0 != 1)
					{
						if (__LIB_2__::func_1(uLocal_404[iVar0], 0, 1))
						{
							if (!PED::IS_PED_RAGDOLL(uLocal_404[iVar0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_404[iVar0], Global_35, 1, 1))
							{
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(uLocal_404[iVar0], 2000, 2000, 2, ENTITY::GET_ENTITY_FORWARD_VECTOR(uLocal_404[iVar0]), Local_33.f_51.f_2, 0f, 0f, 0f, 0f, 0f, 0f);
								TASK::OPEN_SEQUENCE_TASK(&(uVar1[iVar0]));
								TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 3f, 0);
								__LIB_1__::func_474(uLocal_404[iVar0], &(uVar1[iVar0]), 2000f, 2000f, 1, 1);
							}
							else
							{
								__LIB_1__::func_864(uLocal_404[iVar0], 1, 0);
							}
						}
					}
					iVar0++;
				}
				func_290();
				PHYSICS::ACTIVATE_PHYSICS(Local_324[0 /*12*/].f_8);
				__LIB_1__::func_683(&iLocal_422, 131072);
			}
		}
	}
}

void func_133()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_364, "pblAction"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_364, "pblAction", true);
	}
	else
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_364, "pblAction");
	}
	func_290();
}

void func_135()
{
	if (__LIB_0__::func_27(iLocal_422, 1048576) && !__LIB_0__::func_27(iLocal_422, 2097152))
	{
		if (MAP::DOES_BLIP_EXIST(uLocal_408[1]))
		{
			__LIB_0__::func_325(&(uLocal_408[1]));
			__LIB_1__::func_683(&iLocal_422, 2097152);
		}
	}
}

bool func_136(bool bParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_2__::func_1(uLocal_404[1], 0, 1))
	{
		return true;
	}
	if (bParam1 && !__LIB_0__::func_27(iLocal_636, 16))
	{
		if (!__LIB_0__::func_75(&uLocal_460))
		{
			__LIB_1__::func_148(&uLocal_460);
			return false;
		}
		else if (__LIB_0__::func_265(&uLocal_460) < 1.5f)
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(uLocal_404[1]))
		{
			if (PED::_0xEEED8FAFEC331A70(uLocal_404[1], Global_36, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 3f, 0);
				__LIB_1__::func_474(uLocal_404[1], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_683(&iLocal_422, 1048576);
				return true;
			}
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_Panic", 1.75f, 0, 4);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 3f, 0);
			__LIB_1__::func_474(uLocal_404[1], &iVar0, 0, 0, 1, 1);
			__LIB_1__::func_683(&iLocal_422, 1048576);
			return true;
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_0__::func_27(iLocal_636, 16))
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 1.5f, 0, 4);
			TASK::TASK_REACT(0, uLocal_404[2], ENTITY::GET_ENTITY_COORDS(uLocal_404[2], false, false), "TaskCombat_Panic", 1.5f, 0, 4);
		}
		else if (__LIB_0__::func_27(iLocal_636, 64))
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 1.5f, 0, 4);
		}
		if (iLocal_425 != 1024)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_404[1], 92, true);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
		}
		else
		{
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		}
		__LIB_1__::func_474(uLocal_404[1], &iVar0, 0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_139()
{
	if (__LIB_0__::func_27(iLocal_422, 262144) || !__LIB_2__::func_1(uLocal_404[1], 0, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_636, 16))
	{
		if (__LIB_2__::func_227(0, 1, uLocal_404[1], 1))
		{
			__LIB_2__::func_303(uLocal_404[1], 0, "RE_KS_UNI_V1_DEAD_NO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_422, 262144);
		}
	}
}

void func_140()
{
	if (__LIB_0__::func_27(iLocal_422, 524288))
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_404[1], 0, 1) && __LIB_2__::func_227(0, 1, uLocal_404[1], 1))
	{
		if (__LIB_0__::func_27(iLocal_422, 256))
		{
			if (__LIB_0__::func_27(iLocal_636, 64) || iLocal_425 == 1024)
			{
				__LIB_2__::func_303(uLocal_404[1], Global_35, "RE_KS_UNI_V1_AGGRO_CROSS_SOLO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_303(uLocal_404[1], Global_35, "RE_KS_UNI_V1_ACCIDENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 0, 1, 1744022339, 1, 0, 0);
			}
		}
		else
		{
			__LIB_2__::func_303(uLocal_404[1], Global_35, "RE_KS_UNI_V1_FLEE_CROSS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 0, 1, 1744022339, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_422, 524288);
	}
}

void func_143()
{
	if (__LIB_2__::func_1(uLocal_404[0], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_422, 2048))
		{
			if (__LIB_0__::func_265(&uLocal_451) > 0.25f)
			{
				__LIB_2__::func_122(uLocal_404[0], "SCREAM_SHOCKED", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
				__LIB_1__::func_683(&iLocal_422, 2048);
			}
		}
	}
	if (__LIB_2__::func_1(uLocal_404[2], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_422, 128))
		{
			if (__LIB_0__::func_265(&uLocal_451) > 0.75f)
			{
				__LIB_2__::func_122(uLocal_404[2], "SCREAM_SHOCKED", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
				__LIB_1__::func_683(&iLocal_422, 128);
			}
		}
	}
}

void func_145()
{
	if (!Local_33.f_46)
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_422, 8388608))
	{
		if (__LIB_2__::func_1(uLocal_404[2], 0, 1))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_404[2], 1435919172, true) != 1 && !PED::IS_PED_RAGDOLL(uLocal_404[2])) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_404[2], -1))
			{
				__LIB_2__::func_279(uLocal_404[2], 1);
				TASK::TASK_COMBAT_PED(uLocal_404[2], Global_35, 0, 0);
				__LIB_1__::func_683(&iLocal_422, 8388608);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_422, 4194304))
	{
		if (__LIB_2__::func_1(uLocal_404[0], 0, 1))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_404[0], 1435919172, true) != 1 && !PED::IS_PED_RAGDOLL(uLocal_404[0])) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_404[0], -1))
			{
				__LIB_2__::func_279(uLocal_404[0], 1);
				TASK::TASK_COMBAT_PED(uLocal_404[0], Global_35, 0, 0);
				__LIB_1__::func_683(&iLocal_422, 4194304);
			}
		}
	}
}

void func_168(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_264(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!func_323(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

void func_230()
{
	switch (Local_33.f_51.f_4)
	{
		case 0:
			vLocal_25 = { -1472.943f, -498.2887f, 128.9895f };
			fLocal_28 = 302.392f;
			vLocal_29 = { -1469.788f, -494.8669f, 129.2494f };
			fLocal_32 = 332.9029f;
			break;
		case 1:
			vLocal_25 = { -1782.803f, 459.3776f, 111.6822f };
			fLocal_28 = 153.6579f;
			vLocal_29 = { -1782.567f, 454.1686f, 111.4194f };
			fLocal_32 = 276.8211f;
			break;
		case 2:
			vLocal_25 = { -1317.719f, 186.7557f, 74.4711f };
			fLocal_28 = 153.6579f;
			vLocal_29 = { -1323.427f, 182.9791f, 74.68687f };
			fLocal_32 = 127.2267f;
			break;
		case 3:
			vLocal_25 = { 2628.146f, -42.01053f, 51.29009f };
			fLocal_28 = 180f;
			vLocal_29 = { 2623.028f, -42.14201f, 51.31179f };
			fLocal_32 = 141.0092f;
			break;
		case 4:
			vLocal_25 = { 862.804f, -235.0388f, 98.12643f };
			fLocal_28 = 254.1847f;
			vLocal_29 = { 866.3925f, -232.672f, 98.31577f };
			fLocal_32 = 217.972f;
			break;
		case 5:
			vLocal_25 = { -577.853f, 576.5811f, 101.6848f };
			fLocal_28 = 128.4873f;
			vLocal_29 = { -576.1514f, 573.2679f, 101.4151f };
			fLocal_32 = 246.042f;
			break;
		case 6:
			vLocal_25 = { -396.3743f, -275.0595f, 87.156f };
			fLocal_28 = -52.8722f;
			vLocal_29 = { -392.8349f, -277.8338f, 87.5139f };
			fLocal_32 = 131.3853f;
			break;
		case 7:
			vLocal_25 = { 2106.953f, 62.47255f, 69.00694f };
			fLocal_28 = 167.8846f;
			vLocal_29 = { 2108.942f, 65.88663f, 69.03818f };
			fLocal_32 = 39.0928f;
			break;
		case 8:
			vLocal_25 = { 1040.832f, -195.4237f, 89.3302f };
			fLocal_28 = 343.3869f;
			vLocal_29 = { 1039.564f, -190.8579f, 89.1038f };
			fLocal_32 = 86.1946f;
			break;
		case 9:
			vLocal_25 = { 709.6362f, -894.1304f, 48.2621f };
			fLocal_28 = 227.905f;
			vLocal_29 = { 712.6879f, -897.4888f, 48.3101f };
			fLocal_32 = 266.1946f;
			break;
		case 10:
			vLocal_25 = { 1000.534f, -1226.52f, 62.015f };
			fLocal_28 = 210.8846f;
			vLocal_29 = { 996.2634f, -1225.664f, 62.0141f };
			fLocal_32 = 31.1928f;
			break;
	}
}

void func_240(int iParam0, int iParam1)
{
	float fVar0;
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (__LIB_1__::func_85(iParam0, 2))
	{
		__LIB_3__::func_255(iParam0, __LIB_3__::func_372(iParam1));
	}
	else
	{
		__LIB_3__::func_299(iParam0, __LIB_1__::func_898());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	__LIB_2__::func_212(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	__LIB_3__::func_262(iParam0, 0);
	__LIB_3__::func_196(iParam0);
	func_387(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!__LIB_1__::func_85(iParam0, 16))
	{
		__LIB_1__::func_309(iParam0, 0, 0, 0, 0);
	}
}

void func_243(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || __LIB_0__::func_1(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (__LIB_1__::func_85(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_391(2, -1, 0, 0, 0);
			}
			else
			{
				func_391(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_391(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_563(1, uParam0->f_177))
				{
					__LIB_3__::func_197(16, uParam0->f_177);
					__LIB_3__::func_198(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(__LIB_2__::func_31(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_391(8, -1, 0, 0, 0);
	}
}

int func_277(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_455(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_290()
{
	if (__LIB_2__::func_1(Local_227[1 /*32*/].f_11, 0, 1))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Local_227[1 /*32*/].f_11))
		{
			PED::_0xAAB050DA48B57978(Local_227[1 /*32*/].f_11, "Flee_Panic", 0, -1, 4);
			if (PED::_0xEEED8FAFEC331A70(Local_227[1 /*32*/].f_11, Local_33.f_51, 3))
			{
				TASK::_0x673A8779D229BA5A(Local_227[1 /*32*/].f_11, Local_33.f_51, 0, 0);
				TASK::TASK_SMART_FLEE_COORD(Local_227[1 /*32*/].f_11, Local_33.f_51, 300f, -1, false, 1077936128);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_227[1 /*32*/].f_11, false);
				PED::_0x2208438012482A1A(Local_227[1 /*32*/].f_11, false, false);
			}
		}
	}
}

bool func_291(float fParam0)
{
	if ((Local_33.f_98[1] < fParam0 || Local_33.f_98[2] < fParam0) || Local_33.f_98[0] < fParam0)
	{
		return true;
	}
	return false;
}

bool func_323(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_3__::func_373(uParam0->f_3);
		func_243(uParam0, 0, 1);
		__LIB_3__::func_404(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

int func_387(bool bParam0)
{
	if (!bParam0 && func_565(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	__LIB_0__::func_47(&Global_1393447, 1);
	func_568();
	func_569();
	__LIB_2__::func_30((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (__LIB_0__::func_485() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		__LIB_2__::func_177();
		if (iParam1 == -1)
		{
			if (__LIB_0__::func_27(iParam0, 1))
			{
				__LIB_2__::func_268(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (__LIB_0__::func_27(iParam0, 2))
			{
				__LIB_2__::func_268(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (__LIB_0__::func_27(iParam0, 4))
			{
				__LIB_2__::func_268(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			__LIB_2__::func_209(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		__LIB_1__::func_980(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		__LIB_1__::func_980((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

int func_455(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_455(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_565(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_686(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_568()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_687(iVar0, 128))
		{
			__LIB_2__::func_54(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_569()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_687(iVar0, 128) && func_687(iVar0, 1))
		{
			__LIB_2__::func_54(iVar0, 4096);
		}
		iVar0++;
	}
}

int func_686(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
			return 50;
			return 102;
			return 295;
			return 212;
			return 5;
			return 72;
			return 35;
			return 168;
			return 206;
			return 280;
			return 342;
			return 163;
			return 359;
			return 304;
			return 365;
			return 9;
			return 107;
			return 118;
			return 127;
			return 181;
			return 150;
			return 93;
			return 383;
			return 68;
			return 318;
			return 332;
			return 43;
			return 346;
			return 137;
			return 226;
			return 349;
			return 94;
			return 363;
			return 382;
			return 200;
			return 99;
			return 196;
			return 70;
			return 51;
			return 96;
			return 328;
			return 161;
			return 229;
			return 203;
			return 371;
			return 91;
			return 180;
			return 6;
			return 190;
			return 193;
			return 369;
			return 308;
			return 63;
			return 299;
			return 306;
			return 282;
			return 39;
			return 192;
			return 341;
			return 255;
			return 87;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}
bool func_687(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

