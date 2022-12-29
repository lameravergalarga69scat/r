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
	struct<193> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	char* sLocal_210 = NULL;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	struct<2> Local_213[2];
	int iLocal_218[1] = { 0 };
	int iLocal_220[1] = { 0 };
	var uLocal_222[1] = { 0 };
	var uLocal_224 = 2;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	struct<12> Local_241[1];
	int iLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = -1;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = -1;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1073741824;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 1;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	struct<17> Local_275[3];
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	struct<4> Local_330 = { -1, -1, -1, 0 } ;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 100;
	var uLocal_340 = -1082130432;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 5;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	bool bLocal_356 = false;
	bool bLocal_357 = false;
	bool bLocal_358 = false;
	bool bLocal_359 = false;
	bool bLocal_360 = false;
	bool bLocal_361 = false;
	bool bLocal_362 = false;
	bool bLocal_363 = false;
	bool bLocal_364 = false;
	bool bLocal_365 = false;
	bool bLocal_366 = false;
	bool bLocal_367 = false;
	bool bLocal_368 = false;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	bool bLocal_371 = false;
	bool bLocal_372 = false;
	bool bLocal_373 = false;
	bool bLocal_374 = false;
	int iLocal_375 = 0;
	bool bLocal_376 = false;
	char* sLocal_377 = NULL;
	char* sLocal_378 = NULL;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	struct<32> Local_383[1];
	struct<32> Local_416[1];
	var uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	int iLocal_468 = 0;
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
	sLocal_210 = "SCRIPT_RE@FRIENDLY_OUTDOORSMAN@BREAKOUTS";
	sLocal_377 = "Beat Friendly Outdoorsman";
	iLocal_379 = 1;
	Local_14.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_14.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(1);
	}
	__LIB_3__::func_420(&Local_14, 1);
	__LIB_3__::func_302(&(Local_14.f_5), 0);
	__LIB_2__::func_104(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 1);
	__LIB_2__::func_180(&(Local_14.f_5), 1);
	__LIB_2__::func_634(&(Local_14.f_5), 1);
	__LIB_2__::func_182(&(Local_14.f_5), 1);
	__LIB_2__::func_662(&(Local_14.f_5), 1);
	__LIB_3__::func_232(&(Local_14.f_5), 1);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_3__::func_884(&(Local_14.f_5), 0.75f);
	__LIB_3__::func_900(&(Local_14.f_5), 3500);
	func_19();
	while (true)
	{
		switch (iLocal_379)
		{
			case 1:
				if (__LIB_3__::func_669(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_21(&Local_14, &uLocal_458, &uLocal_457);
					func_22(&Local_383, &Local_416);
					if (!func_23())
					{
						func_3(0);
					}
					__LIB_3__::func_414(&uLocal_449, Local_14.f_51, 5.5f, 1, 61, 0);
					iLocal_450 = VOLUME::_CREATE_VOLUME_SPHERE(Local_14.f_51, 0f, 0f, 0f, 10f, 10f, 10f);
					POPULATION::_0xB56D41A694E42E86(iLocal_450, 2234591, 16384, 0, -1, -1, 2);
					iLocal_379 = 0;
				}
				else if (Local_14.f_160)
				{
					func_3(0);
				}
				break;
			case 0:
				if (func_25())
				{
					iLocal_379 = 3;
				}
				break;
			case 3:
				if (func_26())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
					{
						PED::SET_PED_RESET_FLAG(iLocal_218[0], 29, true);
					}
					iLocal_379 = 4;
				}
				break;
			case 4:
				if (!__LIB_3__::func_645(&Local_14, &iLocal_218, 0, 0, 1, 0, 1, 0))
				{
					func_3(0);
				}
				if (iLocal_382 > 1)
				{
				}
				if (!bLocal_368)
				{
					if (__LIB_2__::func_901(iLocal_218[0], Global_35))
					{
						__LIB_3__::func_537(20, 0, 1);
						bLocal_368 = true;
						iLocal_382 = 8;
					}
				}
				if (!Local_14.f_46)
				{
					bLocal_358 = (PED::IS_PED_ON_MOUNT(Global_35) && PED::GET_MOUNT(Global_35) == iLocal_220[0]);
					if (((__LIB_3__::func_822(iLocal_218[0], 0, &(Local_14.f_5), &iLocal_329, 0, 0) || __LIB_3__::func_822(iLocal_220[0], 0, &(Local_14.f_5), &iLocal_329, 0, 0)) || bLocal_358 == 1) || __LIB_1__::func_313(&uLocal_462, 2f))
					{
						iLocal_375 = 1;
						if (__LIB_0__::func_181())
						{
							__LIB_3__::func_537(20, 3, 1);
						}
						else
						{
							__LIB_3__::func_537(20, 1, 1);
						}
						if (bLocal_374)
						{
							PED::_0x24C82EF607105FAA(iLocal_218[0], joaat("TIMID"));
							__LIB_2__::func_478(iLocal_218[0], Global_35, "RE_FO_ALL_ALL_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_218[0], Local_330.f_1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218[0], Global_35, 1, 1))
						{
							func_34();
							if (MAP::DOES_BLIP_EXIST(uLocal_222[0]))
							{
								__LIB_0__::func_325(&(uLocal_222[0]));
							}
							if (!bLocal_374)
							{
								func_36();
							}
							else
							{
								EVENT::_0x7C511E91738A0828(iLocal_218[0], Global_35, 41, 0);
							}
							iLocal_382 = 8;
						}
						else if (!bLocal_361)
						{
							func_34();
							bLocal_361 = true;
						}
						Local_14.f_46 = 1;
						__LIB_3__::func_953(&iLocal_468, 1);
						__LIB_2__::func_603(&(iLocal_218[0]), &iLocal_254, &Local_275, 1, 1);
					}
				}
				func_39();
				if (!Local_14.f_46)
				{
					func_40();
					func_41();
					func_42(&Local_330, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]) && __LIB_0__::func_232(Global_35, iLocal_218[0], 1) < 100f)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_218[0], Global_35, 50, 0, 51, 0);
				}
				if (func_44())
				{
					Local_14.f_50 = 1;
					func_3(0);
				}
				if (__LIB_3__::func_365(&Local_14, &iLocal_218, iLocal_382 < 5, 0, iLocal_382 >= 5, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Local_14.f_50 = 1;
					func_3(1);
				}
				break;
		}
		BUILTIN::WAIT(Local_14.f_158);
	}
}

void func_3(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	func_46();
	__LIB_2__::func_353(&uLocal_449, 1);
	Local_14.f_45 = iLocal_375;
	if (Local_14.f_44 && __LIB_0__::func_181())
	{
		iVar0 = __LIB_3__::func_674(20, 2) + 1;
		__LIB_3__::func_537(20, 2, iVar0);
	}
	if (bLocal_369)
	{
		TASK::_0x5758B1EE0C3FD4AC(uLocal_452, 0);
	}
	TASK::_0x5758B1EE0C3FD4AC(uLocal_453, 0);
	TASK::_0x5758B1EE0C3FD4AC(uLocal_454, 0);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!PED::IS_PED_ON_MOUNT(iLocal_218[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_220[0]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_220[0], 20000, -1, 1f, 1, 0, 0);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.75f, 8192, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_218[0], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			__LIB_2__::func_56(iLocal_218[0], 1, 1);
		}
	}
	__LIB_2__::func_788(&(iLocal_218[0]), 1, 1, 1);
	__LIB_2__::func_788(&(iLocal_220[0]), 1, 1, 1);
	func_51(&Local_14, &iLocal_218, &uLocal_222, 0, uLocal_458, uLocal_457, 0, 1, 0, 1);
	__LIB_3__::func_953(&iLocal_468, 1);
	fVar2 = (30f * 0.5f);
	__LIB_9__::func_336(&iLocal_328, -fVar2, -fVar2, -fVar2, fVar2, fVar2, fVar2, 0, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_19()
{
	if (__LIB_2__::func_117(128))
	{
		Local_241[0 /*12*/].f_7 = joaat("S_INTERACT_LANTERN02X");
	}
}

void func_21(var uParam0, var uParam1, var uParam2)
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
			*uParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 3;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 3;
			*uParam2 = 1;
			break;
		case 7:
			*uParam1 = 3;
			*uParam2 = 2;
			break;
		case 8:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 11:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 12:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 13:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 14:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 15:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 16:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
	}
}

void func_22(var uParam0, var uParam1)
{
	func_68(uParam0, uParam1);
	(uParam0[0 /*32*/])->f_1 = joaat("RE_FRIENDLYOUTDOORSMAN_MALES_01");
	(*uParam0)[0 /*32*/] = 4;
	(uParam0[0 /*32*/])->f_3 = -1437250717;
	StringCopy(&((uParam0[0 /*32*/])->f_23), "FRIENDLY_MAN", 64);
	(uParam1[0 /*32*/])->f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

bool func_23()
{
	if (__LIB_3__::func_564(20, 1) == 1)
	{
		__LIB_1__::func_683(&iLocal_209, 1);
	}
	if (__LIB_3__::func_564(20, 2) == 1)
	{
		__LIB_1__::func_683(&iLocal_209, 2);
	}
	if (__LIB_3__::func_564(20, 3) == 1)
	{
		__LIB_1__::func_683(&iLocal_209, 4);
	}
	if (__LIB_3__::func_674(20, 0) == 1 && !Local_14.f_161)
	{
		return false;
	}
	iLocal_208 = __LIB_3__::func_564(20, 0);
	switch (__LIB_0__::func_979(Local_14.f_51))
	{
		case 1:
			if (!__LIB_0__::func_27(iLocal_209, 1))
			{
				iLocal_212 = 20;
			}
			else if (!__LIB_0__::func_27(iLocal_209, 2))
			{
				iLocal_212 = 3;
			}
			else if (!__LIB_0__::func_27(iLocal_209, 4))
			{
				iLocal_212 = 7;
			}
			else if (Local_14.f_161)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iLocal_212 = 20;
						break;
					case 1:
						iLocal_212 = 3;
						break;
					case 2:
						iLocal_212 = 7;
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 9:
			if (!__LIB_0__::func_27(iLocal_209, 1))
			{
				iLocal_212 = 20;
			}
			else if (!__LIB_0__::func_27(iLocal_209, 2))
			{
				iLocal_212 = 3;
			}
			else if (Local_14.f_161)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_212 = 20;
						break;
					case 1:
						iLocal_212 = 3;
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(iLocal_209, 2) || Local_14.f_161)
			{
				iLocal_212 = 3;
			}
			else
			{
				return false;
			}
			break;
		case 11:
			if (!__LIB_0__::func_27(iLocal_209, 1))
			{
				iLocal_212 = 20;
			}
			else if (!__LIB_0__::func_27(iLocal_209, 2))
			{
				iLocal_212 = 3;
			}
			else if (Local_14.f_161)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_212 = 20;
						break;
					case 1:
						iLocal_212 = 3;
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_209, 1))
			{
				iLocal_212 = 20;
			}
			else if (!__LIB_0__::func_27(iLocal_209, 2))
			{
				iLocal_212 = 3;
			}
			else if (!__LIB_0__::func_27(iLocal_209, 4))
			{
				iLocal_212 = 7;
			}
			else if (Local_14.f_161)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iLocal_212 = 20;
						break;
					case 1:
						iLocal_212 = 3;
						break;
					case 2:
						iLocal_212 = 7;
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 10:
			if (!__LIB_0__::func_27(iLocal_209, 1) || Local_14.f_161)
			{
				iLocal_212 = 20;
			}
			else
			{
				return false;
			}
			break;
		default:
			return false;
	}
	if (iLocal_212 != 0)
	{
		return true;
	}
	return false;
}

bool func_25()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	int iVar7;
	switch (iLocal_381)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				func_75();
				__LIB_3__::func_284(&Local_383);
				__LIB_3__::func_284(&Local_416);
				__LIB_3__::func_314(&Local_241);
				STREAMING::REQUEST_ANIM_DICT(sLocal_210);
				STREAMING::REQUEST_ANIM_DICT(Local_213[1 /*2*/]);
				if (iLocal_212 == 20)
				{
					iLocal_455 = joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_INTERACTABLE_DEF");
					iLocal_456 = joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF");
				}
				else if (iLocal_212 == 3)
				{
					iLocal_455 = joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_INTERACTABLE_DEF");
					iLocal_456 = joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF");
				}
				else
				{
					iLocal_455 = joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_INTERACTABLE_DEF");
					iLocal_456 = joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF");
				}
				TASK::_0x73F0D0327BFA0812(iLocal_455);
				TASK::_0x73F0D0327BFA0812(iLocal_456);
				if (!func_80(&Local_330, 16449, 16599))
				{
					func_3(0);
				}
				else
				{
					vVar0 = { Local_14.f_51 };
					fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
					vVar4 = { Local_14.f_51 };
					__LIB_2__::func_106(&vVar4, 50, 10, 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_330.f_1, vVar4, 0f, 0f, fVar3, 2);
				}
				PROPSET::_REQUEST_PROPSET(-444001408);
				iLocal_381 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_315(&uLocal_224))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_383))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_416))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_241))
			{
				return false;
			}
			if (!TASK::_0x5E5D96BE25E9DF68(iLocal_455))
			{
				return false;
			}
			if (!TASK::_0x5E5D96BE25E9DF68(iLocal_456))
			{
				return false;
			}
			if (!bLocal_369)
			{
				iVar7 = 0;
				uLocal_452 = TASK::_0x5B4BBE80AD5972DC(iLocal_455, Local_14.f_51, 0f, 0, &iVar7, -1);
				bLocal_369 = true;
			}
			if (!__LIB_3__::func_633(&Local_330))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_210))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(-444001408))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_26()
{
	struct<2> Var0[7];
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_218[0]))
	{
		iLocal_218[0] = __LIB_3__::func_422(Local_383[0 /*32*/].f_1, &(Local_383[0 /*32*/]), Local_14.f_51 + Local_383[0 /*32*/].f_6, Local_14.f_51.f_3, 1, 0, 1, 0, 1);
		__LIB_3__::func_615(iLocal_218[0], 2);
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_220[0]))
	{
		iLocal_220[0] = __LIB_3__::func_422(Local_416[0 /*32*/].f_1, &(Local_416[0 /*32*/]), Local_14.f_51 + Local_416[0 /*32*/].f_6, __LIB_2__::func_709((Local_14.f_51.f_3 + Local_416[0 /*32*/].f_9)), 1, 0, 1, 0, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
		{
			PED::_0x931B241409216C1F(iLocal_218[0], iLocal_220[0], 0);
			ENTITY::_0x18FF3110CF47115D(iLocal_220[0], 9, 0);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_383[0 /*32*/].f_23)))
	{
		__LIB_2__::func_133(iLocal_218[0], &(Local_383[0 /*32*/].f_23), 0);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_218[0], true, true);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
	{
		if (iLocal_212 != 20)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_218[0], joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_218[0], 2097152, true);
		if (iLocal_212 == 20)
		{
			__LIB_2__::func_463(iLocal_218[0], joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 2, 0);
		}
		else if (iLocal_212 == 7)
		{
			__LIB_2__::func_463(iLocal_218[0], joaat("CONSUMABLE_HERB_BURDOCK_ROOT"), 2, 0);
		}
		else if (iLocal_212 == 3)
		{
			__LIB_2__::func_463(iLocal_218[0], joaat("CONSUMABLE_HERB_GINSENG"), 2, 0);
		}
	}
	iLocal_211 = PROPSET::_CREATE_PROPSET_3(-444001408, 0f, 0f, 0f, iLocal_220[0], 0f, true, 1, false);
	__LIB_3__::func_285(iLocal_220[0], &Local_14, 0);
	__LIB_3__::func_542(&Local_14, 1);
	__LIB_3__::func_873(iLocal_218[0], 31);
	__LIB_3__::func_873(Global_35, 31);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "PED_FRIEND", iLocal_218[0], 0);
	TASK::_0x96C6ED22FB742C3E(uLocal_452, &Var0);
	if (iLocal_212 == 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0[0 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Stem", Var0[0 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[1 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf4", Var0[1 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[2 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf2", Var0[2 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[3 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf3", Var0[3 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[4 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf5", Var0[4 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[5 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Branch", Var0[5 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[6 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf1", Var0[6 /*2*/], 0);
		}
	}
	else if (iLocal_212 == 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0[2 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Branch", Var0[2 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[3 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Root1", Var0[3 /*2*/], 0);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0[2 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Branch", Var0[2 /*2*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var0[3 /*2*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_330.f_1, "Root1", Var0[3 /*2*/], 0);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_330.f_1, "FLAG_LOOP", false, false);
	ANIMSCENE::START_ANIM_SCENE(Local_330.f_1);
	__LIB_2__::func_967(&(Local_14.f_5), iLocal_218[0], iLocal_220[0], 0);
	iLocal_451 = VOLUME::_CREATE_VOLUME_CYLINDER(0f, 0f, 0f, 0f, 0f, 0f, 4f, 4f, 4f);
	iLocal_468 = __LIB_3__::func_721(iLocal_218[0], iLocal_451, 1156);
	return true;
}

void func_34()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_330.f_1, false))
	{
		bLocal_376 = true;
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "PED_FRIEND", iLocal_218[0]);
		if (iLocal_212 != 20)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Branch", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Branch", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Root1", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Root1", false));
		}
		else
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf1", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Leaf1", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf2", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Leaf2", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf3", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Leaf3", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf4", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Leaf4", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Leaf5", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Leaf5", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Stem", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Stem", false));
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_330.f_1, "Branch", ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_330.f_1, "Branch", false));
		}
	}
}

void func_36()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
	{
		if (!bLocal_359)
		{
			if (bLocal_358)
			{
				__LIB_2__::func_478(iLocal_218[0], Global_35, "RE_FO_ALL_ALL_HORSE_JACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_218[0], Global_35, "RE_FO_ALL_ALL_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
			}
			if (bLocal_358 && __LIB_2__::func_1(iLocal_220[0], 0, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_220[0], -1, -1, 2f, 8, 0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, iLocal_220[0]);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_218[0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iLocal_382 = 6;
			}
			else
			{
				if (bLocal_363)
				{
					if ((__LIB_2__::func_1(iLocal_220[0], 0, 1) && !PED::IS_PED_RAGDOLL(iLocal_220[0])) && !TASK::IS_PED_IN_WRITHE(iLocal_220[0]))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_218[0], Global_35, 3, 524544, -1082130432 /* Float: -1f */, -1, iLocal_220[0]);
					}
					else
					{
						PED::_0xBCC76708E5677E1D(iLocal_220[0], 0);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_218[0], Global_35, 3, 524289, -1082130432 /* Float: -1f */, -1, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[0]))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_220[0], Global_35, 3, 524288, -1082130432 /* Float: -1f */, -1, 0);
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(iLocal_220[0]))
					{
						TASK::_0xE8F1A5B4CED3725A(iLocal_218[0], ENTITY::GET_ENTITY_COORDS(iLocal_220[0], false, false), -1082130432 /* Float: -1f */);
					}
				}
				else
				{
					if ((__LIB_2__::func_1(iLocal_220[0], 0, 1) && !PED::IS_PED_RAGDOLL(iLocal_220[0])) && !TASK::IS_PED_IN_WRITHE(iLocal_220[0]))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_218[0], Global_35, 3, 524288, -1082130432 /* Float: -1f */, -1, iLocal_220[0]);
					}
					else
					{
						PED::_0xBCC76708E5677E1D(iLocal_220[0], 0);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_218[0], Global_35, 3, 524289, -1082130432 /* Float: -1f */, -1, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[0]))
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_220[0], Global_35, 3, 524288, -1082130432 /* Float: -1f */, -1, 0);
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(iLocal_220[0]))
					{
						TASK::_0xE8F1A5B4CED3725A(iLocal_218[0], ENTITY::GET_ENTITY_COORDS(iLocal_220[0], false, false), -1082130432 /* Float: -1f */);
					}
				}
				iLocal_382 = 8;
			}
			bLocal_359 = true;
			__LIB_1__::func_148(&uLocal_459);
			PED::SET_PED_KEEP_TASK(iLocal_218[0], true);
		}
	}
	else if (!__LIB_0__::func_394(Global_35, iLocal_220[0], 1))
	{
		func_143();
	}
}

void func_39()
{
	if (bLocal_359)
	{
		return;
	}
	if (bLocal_361)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_218[0], Local_330.f_1))
		{
			switch (__LIB_3__::func_112(iLocal_218[0], Global_35, 1060437492 /* Float: 0.707f */))
			{
				case 0:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -224501103))
					{
						sLocal_378 = "BREAKOUT_N02_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], 1017554299))
					{
						sLocal_378 = "BREAKOUT_N_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -1105426107))
					{
						sLocal_378 = "BREAKOUT_IDLE_MALE";
						func_150();
					}
					break;
				case 1:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -224501103))
					{
						sLocal_378 = "BREAKOUT_BACK02_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], 1017554299))
					{
						sLocal_378 = "BREAKOUT_BACK_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -1105426107))
					{
						sLocal_378 = "BREAKOUT_IDLE_MALE";
						func_150();
					}
					break;
				case 3:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -224501103))
					{
						sLocal_378 = "BREAKOUT_L02_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], 1017554299))
					{
						sLocal_378 = "BREAKOUT_L_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -1105426107))
					{
						sLocal_378 = "BREAKOUT_IDLE_MALE";
						func_150();
					}
					break;
				case 2:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -224501103))
					{
						sLocal_378 = "BREAKOUT_R02_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], 1017554299))
					{
						sLocal_378 = "BREAKOUT_R_MALE";
						func_150();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -1105426107))
					{
						sLocal_378 = "BREAKOUT_IDLE_MALE";
						func_150();
					}
					break;
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(uLocal_222[0]))
			{
				__LIB_0__::func_325(&(uLocal_222[0]));
			}
			Local_14.f_46 = 1;
			if (ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
			{
				bLocal_359 = true;
			}
			iLocal_382 = 5;
			func_34();
		}
	}
	else if (bLocal_362)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_218[0], sLocal_210, sLocal_378, 1))
		{
			bLocal_362 = false;
		}
	}
}

void func_40()
{
	if (iLocal_382 == 0)
	{
		return;
	}
	if (!bLocal_357)
	{
		if (__LIB_3__::func_347(__LIB_3__::func_960(iLocal_212), 0, 0) > iLocal_353)
		{
			if (__LIB_1__::func_992(Global_35, Local_14.f_51, 1) < 64f)
			{
				func_154();
			}
			iLocal_353++;
			bLocal_364 = true;
			if (((ENTITY::IS_ENTITY_DEAD(iLocal_218[0]) || __LIB_0__::func_232(Global_35, iLocal_218[0], 1) > 100f) || iLocal_380 != 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_218[0], "SCRIPT_RE@FRIENDLY_OUTDOORSMAN@BURDOCK", "BEST_OF_LUCK_MALE", 1))
			{
				return;
			}
			if (__LIB_2__::func_227(0, 1, iLocal_218[0], 1))
			{
				__LIB_2__::func_478(iLocal_218[0], Global_35, "RE_FO_ALL_ALL_SPIRIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_357 = true;
			}
		}
	}
}

void func_41()
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -1858705663))
	{
		if ((!__LIB_0__::func_181() && __LIB_3__::func_674(20, 1) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_674(20, 3) == 1))
		{
			sVar0 = "RE_FO_ALL_ALL_CALL_AGGROED";
		}
		else
		{
			if (__LIB_0__::func_181())
			{
				iVar1 = __LIB_3__::func_674(20, 2);
			}
			else
			{
				iVar1 = __LIB_3__::func_657(20);
			}
			switch (iVar1)
			{
				case 0:
					if (bLocal_371)
					{
						sVar0 = "RE_FO_ALL_ALL_FIRST_GREET";
					}
					else if (bLocal_370)
					{
						sVar0 = "RE_FO_ALL_ALL_FIRST_ANTAGONIZE";
					}
					else
					{
						sVar0 = "RE_FO_ALL_ALL_CALLOUT1";
					}
					break;
				case 1:
					if (bLocal_371)
					{
						sVar0 = "RE_FO_ALL_ALL_SECOND_GREET";
					}
					else if (bLocal_370)
					{
						sVar0 = "RE_FO_ALL_ALL_SECOND_ANTAGONIZE";
					}
					else
					{
						sVar0 = "RE_FO_ALL_ALL_CALL_SECOND";
					}
					break;
				case 2:
				default:
					if (bLocal_371)
					{
						sVar0 = "RE_FO_ALL_ALL_THIRD_GREET";
					}
					else if (bLocal_370)
					{
						sVar0 = "RE_FO_ALL_ALL_THIRD_ANTAGONIZE";
					}
					else
					{
						sVar0 = "RE_FO_ALL_ALL_CALL_THIRD";
					}
					break;
			}
		}
		__LIB_2__::func_478(iLocal_218[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_157();
		bLocal_356 = true;
	}
	if (((!bLocal_356 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_218[0])) && __LIB_2__::func_227(2f, 1, 0, 0)) && iLocal_382 == 1)
	{
		if (iLocal_351 < 3)
		{
			if (iLocal_212 == 20)
			{
				switch (iLocal_351)
				{
					case 0:
						sVar2 = "RE_FO_ALL_ALL_IDLE_A1";
						break;
					case 1:
						sVar2 = "RE_FO_ALL_ALL_IDLE_A2";
						break;
					case 2:
						sVar2 = "RE_FO_ALL_ALL_IDLE_A3";
						break;
				}
			}
			else if (iLocal_212 == 3)
			{
				switch (iLocal_351)
				{
					case 0:
						sVar2 = "RE_FO_ALL_ALL_IDLE_B1";
						break;
					case 1:
						sVar2 = "RE_FO_ALL_ALL_IDLE_B2";
						break;
					case 2:
						sVar2 = "RE_FO_ALL_ALL_IDLE_B3";
						break;
				}
			}
			else
			{
				switch (iLocal_351)
				{
					case 0:
						sVar2 = "RE_FO_ALL_ALL_IDLE_C1";
						break;
					case 1:
						sVar2 = "RE_FO_ALL_ALL_IDLE_C2";
						break;
					case 2:
						sVar2 = "RE_FO_ALL_ALL_IDLE_C3";
						break;
				}
			}
			if (__LIB_2__::func_478(iLocal_218[0], Global_35, sVar2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
			{
				MAP::_TRIGGER_SONAR_BLIP_2(1891783641, iLocal_218[0]);
				iLocal_351++;
			}
		}
	}
	switch (iLocal_212)
	{
		case 3:
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 1024, 1771779138, "RE_FO_ALL_V1_GREET_GI", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, -417894478))
			{
				__LIB_2__::func_526(&Local_275, 0, 0);
			}
			func_158(iLocal_218[0], Global_35, &iLocal_352, 4096, -299930451, "RE_FO_ALL_V1_GINSENG", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 8192, -1501410059, "RE_FO_ALL_V1_HEALTH", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926))
			{
				__LIB_7__::func_832(3, 1);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 2, joaat("CONSUMABLE_HERB_AMERICAN_GINSENG"));
				func_161();
			}
			if (((!bLocal_373 && __LIB_0__::func_232(Global_35, iLocal_218[0], 1) < 100f) && AUDIO::_0x6BFFB7C276866996(iLocal_218[0]) == joaat("RE_FO_ALL_V1_HEALTH")) && AUDIO::_0x4A98E228A936DBCC(iLocal_218[0]) != joaat("RE_FO_ALL_V1_HEALTH"))
			{
				__LIB_2__::func_478(Global_35, iLocal_218[0], "RE_FO_ALL_V1_PL_EXPLAIN_GREET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_373 = true;
			}
			func_158(iLocal_218[0], Global_35, &iLocal_352, 32768, -840403163, "RE_FO_ALL_V1_NEIGHBORLY", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			func_158(iLocal_218[0], Global_35, &iLocal_352, 4194304, -1297578428, "RE_FO_ALL_V1_GOODBYE", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			break;
		case 7:
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 65536, -1666917296, "RE_FO_ALL_V2_GREET_BUR", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926))
			{
				__LIB_2__::func_526(&Local_275, 0, 0);
			}
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 262144, 290210549, "RE_FO_ALL_V2_BURDOCK", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926))
			{
				PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 2, joaat("CONSUMABLE_HERB_BURDOCK_ROOT"));
				__LIB_7__::func_832(7, 1);
				func_161();
			}
			func_158(iLocal_218[0], Global_35, &iLocal_352, 524288, -2001435329, "RE_FO_ALL_V2_SUCCESS", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			if (((!bLocal_373 && __LIB_0__::func_232(Global_35, iLocal_218[0], 1) < 100f) && AUDIO::_0x6BFFB7C276866996(iLocal_218[0]) == joaat("RE_FO_ALL_V2_BURDOCK")) && AUDIO::_0x4A98E228A936DBCC(iLocal_218[0]) != joaat("RE_FO_ALL_V2_BURDOCK"))
			{
				__LIB_2__::func_478(Global_35, iLocal_218[0], "RE_FO_ALL_V2_PL_EXPLAIN_GREET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_373 = true;
			}
			func_158(iLocal_218[0], Global_35, &iLocal_352, 2097152, 196409859, "RE_FO_ALL_V2_FRIENDLY", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 4194304, -174791931, "RE_FO_ALL_V2_GOODBYE", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926))
			{
				__LIB_1__::func_148(&uLocal_465);
				func_162();
			}
			break;
		case 20:
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 8388608, 2137023724, "RE_FO_ALL_V3_GREET_TOB", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926))
			{
				__LIB_2__::func_526(&Local_275, 0, 0);
			}
			func_158(iLocal_218[0], Global_35, &iLocal_352, 33554432, 924964604, "RE_FO_ALL_V3_GIFT", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			if (func_158(iLocal_218[0], Global_35, &iLocal_352, 134217728, 1250612888, "RE_FO_ALL_V3_WHY_BUY", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926))
			{
				__LIB_7__::func_832(20, 1);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 2, joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"));
				func_161();
			}
			if (((!bLocal_373 && __LIB_0__::func_232(Global_35, iLocal_218[0], 1) < 100f) && AUDIO::_0x6BFFB7C276866996(iLocal_218[0]) == joaat("RE_FO_ALL_V3_GIFT")) && AUDIO::_0x4A98E228A936DBCC(iLocal_218[0]) != joaat("RE_FO_ALL_V3_GIFT"))
			{
				__LIB_2__::func_478(Global_35, iLocal_218[0], "RE_FO_ALL_V3_PL_EXPLAIN_GREET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_373 = true;
			}
			func_158(iLocal_218[0], Global_35, &iLocal_352, 268435456, -2077272946, "RE_FO_ALL_V3_TOBACCO", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			func_158(iLocal_218[0], Global_35, &iLocal_352, 4194304, -1097851356, "RE_FO_ALL_V3_GOODBYE", 0, 1, 1077936128 /* Float: 3f */, 0, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 291934926);
			break;
	}
}

void func_42(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_3__::func_902(uParam0, iVar0, 1))
			{
				if (!func_164(uParam0, iVar0))
				{
					func_165(uParam0, uParam0->f_15[iVar0]);
					if (!__LIB_4__::func_311(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (__LIB_3__::func_902(uParam0, 1, 1))
	{
		if (__LIB_3__::func_642(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || func_164(uParam0, 1))
			{
				__LIB_3__::func_903(uParam0, 1);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || func_164(uParam0, 0))
			{
				__LIB_3__::func_903(uParam0, 0);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 2, 1))
	{
		if (__LIB_3__::func_636(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || func_164(uParam0, 2))
			{
				__LIB_3__::func_903(uParam0, 2);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || func_164(uParam0, 3))
			{
				__LIB_3__::func_903(uParam0, 3);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 4, 1))
	{
		if (func_164(uParam0, 4))
		{
			__LIB_3__::func_903(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			__LIB_3__::func_437(uParam0);
		}
	}
}

bool func_44()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_218[0], -1))
		{
			PED::SET_PED_RESET_FLAG(iLocal_218[0], 29, true);
		}
	}
	func_172();
	func_173();
	if (__LIB_0__::func_394(Global_35, iLocal_220[0], 1) && !__LIB_0__::func_163(iLocal_220[0], 1041577989))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_218[0]) || __LIB_0__::func_232(Global_35, iLocal_218[0], 1) > 49f)
		{
			TASK::TASK_HORSE_ACTION(iLocal_220[0], 2, 0, 0);
		}
	}
	switch (iLocal_382)
	{
		case 0:
			func_175();
			switch (__LIB_3__::func_657(20))
			{
				case 0:
					sVar0 = "RE_FO_ALL_ALL_PL_FIRST_GREET";
					sVar1 = "RE_FO_ALL_ALL_PL_FIRST_ANTAGONIZE";
					break;
				case 1:
					sVar0 = "RE_FO_ALL_ALL_PL_SECOND_GREET";
					sVar1 = "RE_FO_ALL_ALL_PL_SECOND_ANTAGONIZE";
					break;
				case 2:
				default:
					sVar0 = "RE_FO_ALL_ALL_PL_THIRD_GREET";
					sVar1 = "RE_FO_ALL_ALL_PL_THIRD_ANTAGONIZE";
					break;
			}
			__LIB_2__::func_602(&(Local_275[0 /*17*/]), "RE_INTER_POS", sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_275[1 /*17*/]), "RE_INTER_ANTAGONIZE", sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_3__::func_158(&(Local_275[2 /*17*/]), 1);
			iLocal_382 = 1;
			break;
		case 1:
			if (!bLocal_366)
			{
				func_178();
				bLocal_366 = true;
			}
			else if (!bLocal_365 && func_179())
			{
				bLocal_365 = true;
			}
			if (bLocal_365)
			{
				iVar2 = func_181(&(iLocal_218[0]), &iLocal_254, 30f, &Local_275, &(Local_14.f_192), 1.5f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				if (iVar2 == 0)
				{
					bLocal_371 = true;
					__LIB_2__::func_526(&Local_275, 0, 0);
					MISC::_0xE98D55C5983F2509(iLocal_218[0]);
					Local_14.f_44 = 1;
				}
				else if (iVar2 == 1)
				{
					bLocal_370 = true;
					__LIB_2__::func_526(&Local_275, 0, 0);
					MISC::_0xE98D55C5983F2509(iLocal_218[0]);
					Local_14.f_44 = 1;
				}
				if (bLocal_367)
				{
					if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -818650136) && __LIB_2__::func_227(0, 1, iLocal_218[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
					{
						func_182();
						__LIB_1__::func_471(&(Local_275[0 /*17*/]), 8);
						__LIB_1__::func_471(&(Local_275[1 /*17*/]), 8);
						__LIB_2__::func_526(&Local_275, 0, 0);
						iLocal_382 = 2;
					}
				}
				else if (iVar2 != -1 || (__LIB_0__::func_232(Global_35, iLocal_218[0], 1) < 625f && __LIB_3__::func_452(&Local_14, 1.4f, 1114636288 /* Float: 60f */, 12f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0)))
				{
					if (!Local_14.f_48)
					{
						__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
					}
					iLocal_375 = 1;
					bLocal_367 = true;
				}
			}
			break;
		case 2:
			if (bLocal_356)
			{
				if (func_185())
				{
					iLocal_382 = 3;
				}
			}
			break;
		case 3:
			if (func_186())
			{
				Local_14.f_44 = 1;
				PED::_0xE737D5F14304A2EC(iLocal_218[0], PLAYER::PLAYER_ID(), 360000);
				iLocal_382 = 4;
			}
			break;
		case 4:
			if (iLocal_212 != 7)
			{
				func_162();
			}
			if (func_187())
			{
				func_188();
				if (__LIB_0__::func_181())
				{
					__LIB_3__::func_537(20, 3, 0);
				}
				else
				{
					__LIB_3__::func_537(20, 1, 0);
				}
				__LIB_0__::func_325(&(uLocal_222[0]));
				iLocal_382 = 8;
			}
			break;
		case 5:
			if (func_189())
			{
				if (!bLocal_358 && !bLocal_359)
				{
					iLocal_382 = 8;
				}
			}
			break;
		case 6:
			func_190();
			if (!bLocal_359 && (PED::IS_PED_ON_MOUNT(Global_35) && PED::GET_MOUNT(Global_35) == iLocal_220[0]))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_218[0], 1, 1) > 20f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_218[0], true, false);
					TASK::TASK_PLAY_ANIM(iLocal_218[0], Local_213[1 /*2*/], "LINE_07", 8f, -8f, -1, 67108864, 0f, false, 65536, false, 0, false);
					iLocal_382 = 7;
				}
			}
			else
			{
				iLocal_382 = 8;
			}
			break;
		case 7:
			func_190();
			if (bLocal_358 && __LIB_2__::func_1(iLocal_218[0], 0, 1))
			{
				if (!__LIB_0__::func_163(iLocal_218[0], -2017877118))
				{
					TASK::CLEAR_PED_TASKS(iLocal_218[0], true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_218[0]);
					TASK::TASK_SMART_FLEE_PED(iLocal_218[0], Global_35, 1000f, -1, 0, 1f, 0);
					iLocal_382 = 8;
				}
			}
			break;
		case 8:
			if (__LIB_1__::func_313(&uLocal_459, 0.3f))
			{
				func_46();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
			{
				func_190();
			}
			else
			{
				func_143();
			}
			if (__LIB_0__::func_94(Global_35, Local_14.f_51, 0) > 100f)
			{
				if (!__LIB_3__::func_933(iLocal_218[0], 1088421888 /* Float: 7f */, 1, 0))
				{
					return false;
				}
				return true;
			}
			break;
	}
	return false;
}

void func_46()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
	{
		__LIB_3__::func_437(&Local_330);
	}
}

void func_51(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
				__LIB_17__::func_854((*iParam1)[iVar0], bVar3);
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
							__LIB_3__::func_416((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
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
		__LIB_3__::func_468(uParam0);
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

void func_68(var uParam0, var uParam1)
{
	(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
	(uParam1[0 /*32*/])->f_6 = { 3f, 0f, 0f };
	if (iLocal_212 == 7)
	{
		(uParam1[0 /*32*/])->f_6 = { (uParam1[0 /*32*/])->f_6 + Vector(0f, -1.92f, -1.58f) };
	}
	switch (__LIB_1__::func_898())
	{
		case 10:
			(uParam1[0 /*32*/])->f_6 = { 3f, -2f, 0f };
			break;
		case 1:
			if (Local_14.f_51.f_4 != 3)
			{
				(uParam1[0 /*32*/])->f_9 = 180f;
			}
			(uParam1[0 /*32*/])->f_6 = { -3f, 2f, 0f };
			break;
		case 4:
			(uParam1[0 /*32*/])->f_6 = { -3f, 5f, 0f };
			break;
		case 11:
			(uParam1[0 /*32*/])->f_6 = { 2f, -4f, 0f };
			break;
		case 9:
			(uParam1[0 /*32*/])->f_6 = { 2f, -4f, 0f };
			break;
	}
}

void func_75()
{
	switch (iLocal_212)
	{
		case 3:
			Local_213[0 /*2*/] = "SCRIPT_RE@FRIENDLY_OUTDOORSMAN@GINSENG";
			Local_213[0 /*2*/].f_1 = "HELP_URSELF_MALE";
			break;
		case 7:
			Local_213[0 /*2*/] = "SCRIPT_RE@FRIENDLY_OUTDOORSMAN@BURDOCK";
			Local_213[0 /*2*/].f_1 = "FRIENDLY_TIP_MALE";
			break;
		case 20:
			Local_213[0 /*2*/] = "SCRIPT_RE@FRIENDLY_OUTDOORSMAN@TABACCO";
			Local_213[0 /*2*/].f_1 = "KEEP_MOVING_MALE";
			break;
		default:
			return;
	}
	Local_213[1 /*2*/] = "SCRIPT_RE@APPROACH@MALE";
	Local_213[1 /*2*/].f_1 = "LINE_07";
	__LIB_3__::func_318(Local_213[0 /*2*/], &uLocal_224);
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BEGIN";
		case 1:
			return "PBL_CALL_N";
		case 2:
			return "PBL_CALL_B";
		case 3:
			return "PBL_CALL_L";
		case 4:
			return "PBL_CALL_R";
		case 5:
			return "PBL_INFORM";
		case 6:
			return "PBL_INFORM_N";
		case 7:
			return "PBL_INFORM_B";
		case 8:
			return "PBL_INFORM_L";
		case 9:
			return "PBL_INFORM_R";
		default:
			break;
	}
	return "";
}

int func_80(var uParam0, int iParam1, int iParam2)
{
	switch (iLocal_212)
	{
		case 3:
			return __LIB_3__::func_936(uParam0, "script@beat@wilderness@friendlyOutdoorsman@ginseng", iParam1, iParam2, 0, 66, 0, 0, 0);
		case 7:
			return __LIB_3__::func_936(uParam0, "script@beat@wilderness@friendlyOutdoorsman@burdock", iParam1, iParam2, 0, 66, 0, 0, 0);
		case 20:
			return __LIB_3__::func_936(uParam0, "script@beat@wilderness@friendlyOutdoorsman@tobacco", iParam1, iParam2, 0, 66, 0, 0, 0);
		default:
			break;
	}
	return 0;
}

void func_143()
{
	if ((__LIB_2__::func_1(iLocal_220[0], 0, 1) && !__LIB_0__::func_163(iLocal_220[0], 518218985)) && !__LIB_0__::func_394(Global_35, iLocal_220[0], 1))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_220[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		PED::SET_PED_KEEP_TASK(iLocal_220[0], true);
	}
}

void func_150()
{
	TASK::TASK_PLAY_ANIM(iLocal_218[0], sLocal_210, sLocal_378, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	bLocal_361 = false;
	bLocal_362 = true;
	bLocal_363 = true;
	if (MAP::DOES_BLIP_EXIST(uLocal_222[0]))
	{
		__LIB_0__::func_325(&(uLocal_222[0]));
	}
	Local_14.f_46 = 1;
	iLocal_382 = 5;
	func_34();
}

void func_154()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_6__::func_847(iLocal_212);
	TELEMETRY::_TELEMETRY_HERB_PICKED(iVar0);
	COMPENDIUM::COMPENDIUM_HERB_PICKED(iVar0, Local_14.f_51);
	if (!__LIB_6__::func_115(iLocal_212))
	{
		__LIB_17__::func_868(iLocal_212, 0, 1);
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			iVar1 = __LIB_9__::func_495(iLocal_212);
			if (iVar1 != -1)
			{
				__LIB_1__::func_240(iVar1, 1);
			}
		}
	}
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("PICK"), iVar0), 1);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HERBS_PICKED_TOTAL")), 1);
}

void func_157()
{
	__LIB_2__::func_315(1891783641, iLocal_218[0], 1);
	if (!MAP::DOES_BLIP_EXIST(uLocal_222[0]))
	{
		__LIB_2__::func_73(iLocal_218[0], &(uLocal_222[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
	}
}

bool func_158(int iParam0, int iParam1, int* iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	bVar0 = false;
	if (bParam12)
	{
		bVar0 = MISC::IS_BIT_SET(*iParam2, iParam3);
	}
	else
	{
		bVar0 = __LIB_0__::func_1(*iParam2, iParam3);
	}
	if (!bVar0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam4))
	{
		if (!__LIB_2__::func_227(fParam8, 1, 0, 0))
		{
			if (bParam7)
			{
				__LIB_2__::func_461(0);
			}
			else
			{
				return false;
			}
		}
		if (bParam9)
		{
			AUDIO::PLAY_PAIN(iParam0, iParam10, 0f, bParam11, false);
		}
		if (!bParam13)
		{
			__LIB_2__::func_478(iParam0, iParam1, sParam5, iParam6, fParam14, 0, 0, 0, 1, 1, bParam15, iParam16, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_122(iParam0, sParam5, joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
		}
		if (!bParam12)
		{
			__LIB_1__::func_336(iParam2, iParam3);
		}
		else
		{
			MISC::SET_BIT(iParam2, iParam3);
		}
		return true;
	}
	return false;
}

void func_161()
{
	switch (iLocal_212)
	{
		case 20:
			__LIB_3__::func_461(20, 1, 1);
			break;
		case 7:
			__LIB_3__::func_461(20, 3, 1);
			break;
		case 3:
			__LIB_3__::func_461(20, 2, 1);
			break;
	}
}

void func_162()
{
	char* sVar0;
	char* sVar1;
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_218[0], 242628503, true) == 8 && !bLocal_372)
	{
		switch (iLocal_212)
		{
			case 3:
				sVar0 = "RE_FO_ALL_V1_PL_GOODBYE";
				sVar1 = "RE_FO_ALL_V1_PL_END_ANTAGONIZE";
				break;
			case 7:
				sVar0 = "RE_FO_ALL_V2_PL_GOODBYE";
				sVar1 = "RE_FO_ALL_V2_PL_END_ANTAGONIZE";
				break;
			case 20:
				sVar0 = "RE_FO_ALL_V3_PL_GOODBYE";
				sVar1 = "RE_FO_ALL_V3_PL_END_ANTAGONIZE";
				break;
		}
		__LIB_2__::func_602(&(Local_275[0 /*17*/]), "RE_INTER_POS", sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_275[1 /*17*/]), "RE_INTER_ANTAGONIZE", sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		__LIB_3__::func_158(&(Local_275[0 /*17*/]), 0);
		__LIB_3__::func_158(&(Local_275[1 /*17*/]), 0);
		bLocal_372 = true;
	}
}

var func_164(var uParam0, int iParam1)
{
	return func_385(uParam0, uParam0->f_15[iParam1]);
}

var func_165(var uParam0, var uParam1)
{
	char* sVar0;
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
}

void func_172()
{
	var uVar0;
	if (TASK::_0xDF56A2B50C04DEA4(uLocal_452, &uVar0))
	{
		if (!bLocal_376)
		{
			MISC::_0x082C043C7AFC3747(uLocal_452, 0);
			MISC::_0x40D72189F46D2E15(uLocal_452, 0);
		}
	}
}

void func_173()
{
	int iVar0;
	int iVar1;
	if ((bLocal_374 || Local_14.f_46) || bLocal_358)
	{
		return;
	}
	if (iLocal_382 == 4 || iLocal_382 == 8)
	{
		iVar0 = func_181(&(iLocal_218[0]), &iLocal_254, 25f, &Local_275, &(Local_14.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 != -1)
		{
			Local_14.f_44 = 1;
			if (iVar0 == 1)
			{
				__LIB_2__::func_526(&Local_275, 0, 0);
			}
			else if (iVar0 == 0)
			{
				__LIB_2__::func_526(&Local_275, 0, 0);
			}
			else if (iVar0 == 2)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218[0], false);
				__LIB_2__::func_603(&(iLocal_218[0]), &iLocal_254, &Local_275, 1, 1);
				bLocal_374 = true;
				__LIB_1__::func_148(&uLocal_462);
				iLocal_382 = 5;
			}
		}
	}
	else if (iLocal_382 >= 2)
	{
		iVar1 = func_181(&(iLocal_218[0]), &iLocal_254, 25f, &Local_275, &(Local_14.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar1 != -1)
		{
			if (iVar1 != 2)
			{
				__LIB_2__::func_526(&Local_275, 0, 0);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218[0], false);
				__LIB_2__::func_603(&(iLocal_218[0]), &iLocal_254, &Local_275, 1, 1);
				bLocal_374 = true;
				__LIB_1__::func_148(&uLocal_462);
				iLocal_382 = 5;
			}
		}
	}
}

void func_175()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	fVar0 = (30f * 0.5f);
	iLocal_328 = func_389(-fVar0, -fVar0, -fVar0, fVar0, fVar0, fVar0, Local_14.f_51, 30f, 0, 0);
	iLocal_353 = __LIB_3__::func_347(__LIB_3__::func_960(iLocal_212), 0, 0);
	Local_330.f_3 = 1;
	vVar1 = { Local_14.f_51 + Vector(0f, 2f, -0.5f) };
	vVar4 = { Local_14.f_51 + Vector(0f, -1.15f, 1.28f) };
	__LIB_2__::func_106(&vVar1, 50, 10, 0);
	__LIB_2__::func_106(&vVar4, 50, 10, 0);
	iVar7 = 0;
	uLocal_453 = TASK::_0x5B4BBE80AD5972DC(iLocal_456, vVar1, 0f, 0, &iVar7, -1);
	uLocal_454 = TASK::_0x5B4BBE80AD5972DC(iLocal_456, vVar4, 0f, 0, &iVar7, -1);
}

void func_178()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_CALL_N");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_CALL_B");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_CALL_L");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_CALL_R");
	if (iLocal_212 == 3)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_INFORM_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_INFORM_B");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_INFORM_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_INFORM_R");
	}
	else
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_330.f_1, "PBL_INFORM");
	}
}

bool func_179()
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_CALL_N"))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_CALL_B"))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_CALL_L"))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_CALL_R"))
	{
		return false;
	}
	if (iLocal_212 == 3)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_INFORM_N"))
		{
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_INFORM_B"))
		{
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_INFORM_L"))
		{
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_INFORM_R"))
		{
			return false;
		}
	}
	else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_330.f_1, "PBL_INFORM"))
	{
		return false;
	}
	return true;
}

int func_181(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_399(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_182()
{
	switch (__LIB_3__::func_112(iLocal_218[0], Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_CALL_N", true);
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_CALL_B", true);
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_CALL_L", true);
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_CALL_R", true);
			}
			break;
	}
}

bool func_185()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_218[0], -818650136) && __LIB_2__::func_227(0, 1, iLocal_218[0], 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_330.f_1, "FLAG_LOOP", true, false);
		switch (iLocal_212)
		{
			case 20:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_INFORM", true);
				return true;
			case 7:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_INFORM", true);
				return true;
			case 3:
				func_402();
				return true;
		}
	}
	return false;
}

bool func_186()
{
	if (__LIB_0__::func_232(Global_35, iLocal_218[0], 1) > 400f)
	{
		__LIB_2__::func_504(iLocal_218[0], 500);
		return true;
	}
	if (!ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_330.f_1) == 1f)
	{
		return false;
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_327);
	__LIB_2__::func_45(0, Global_35, 0);
	TASK::TASK_PLAY_ANIM(0, Local_213[0 /*2*/], Local_213[0 /*2*/].f_1, 8f, -8f, -1, 67108864, 0f, false, 65536, false, 0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_327);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_218[0], iLocal_327);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_327);
	return true;
}

bool func_187()
{
	if (Local_14.f_46)
	{
		return true;
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_218[0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_218[0], 255, true);
		}
		switch (iLocal_380)
		{
			case 0:
				__LIB_2__::func_104(&(Local_14.f_5), 0);
				if (iLocal_212 == 20)
				{
					if (!__LIB_0__::func_163(iLocal_218[0], 242628503))
					{
						func_405();
						__LIB_1__::func_562(iLocal_218[0], iLocal_220[0], 0, 1065353216 /* Float: 1f */, -1);
						iLocal_380 = 2;
					}
				}
				else if (iLocal_212 == 7)
				{
					if (!__LIB_0__::func_163(iLocal_218[0], 242628503))
					{
						__LIB_1__::func_562(iLocal_218[0], iLocal_220[0], 0, 1065353216 /* Float: 1f */, -1);
						iLocal_380 = 1;
					}
				}
				else if (iLocal_212 == 3)
				{
					if (!__LIB_0__::func_163(iLocal_218[0], 242628503))
					{
						func_405();
						__LIB_1__::func_562(iLocal_218[0], iLocal_220[0], 0, 1065353216 /* Float: 1f */, -1);
						iLocal_380 = 2;
					}
				}
				break;
			case 1:
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_218[0], true))
				{
					TASK::TASK_PLAY_ANIM(iLocal_218[0], "SCRIPT_RE@FRIENDLY_OUTDOORSMAN@BURDOCK", "BEST_OF_LUCK_MALE", 8f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
					func_405();
					iLocal_380 = 2;
				}
				break;
			case 2:
				if (iLocal_212 == 20 || iLocal_212 == 3)
				{
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_218[0], true))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_218[0], Global_35, 1.25f, 6664, 0);
						Local_14.f_50 = 1;
						return true;
					}
				}
				else if (__LIB_1__::func_313(&uLocal_465, 1f) || (__LIB_0__::func_27(iLocal_352, 4194304) && __LIB_2__::func_227(0, 1, iLocal_218[0], 1)))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_218[0], Global_35, 1.25f, 6664, 0);
					Local_14.f_50 = 1;
					return true;
				}
				break;
		}
	}
	return false;
}

void func_188()
{
	if (Local_14.f_46)
	{
		iLocal_208 = 0;
	}
	else if (iLocal_208 < 2)
	{
		iLocal_208++;
	}
	__LIB_3__::func_461(20, 0, iLocal_208);
}

bool func_189()
{
	if (__LIB_1__::func_313(&uLocal_459, 0.3f))
	{
		func_46();
	}
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_218[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218[0], Global_35, 1, 1)) || (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_218[0], -1) && !__LIB_0__::func_163(iLocal_218[0], -2017877118)))
	{
		if (!bLocal_374)
		{
			func_36();
		}
		else
		{
			EVENT::_0x7C511E91738A0828(iLocal_218[0], Global_35, 41, 0);
		}
		__LIB_0__::func_325(&(uLocal_222[0]));
		return true;
	}
	return false;
}

void func_190()
{
	if (!bLocal_360 && !__LIB_0__::func_163(iLocal_218[0], 518218985))
	{
		if (__LIB_3__::func_822(iLocal_218[0], 0, &(Local_14.f_5), &iLocal_329, 0, 0))
		{
			if (iLocal_329 != 1024)
			{
				TASK::CLEAR_PED_TASKS(iLocal_218[0], true, false);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_218[0]);
				TASK::TASK_SMART_FLEE_PED(iLocal_218[0], Global_35, 1000f, -1, 0, 3f, 0);
				bLocal_360 = true;
				PED::SET_PED_KEEP_TASK(iLocal_218[0], true);
				if (bLocal_358 && __LIB_0__::func_394(Global_35, iLocal_220[0], 0))
				{
					__LIB_2__::func_478(iLocal_218[0], Global_35, "RE_FO_ALL_ALL_HORSE_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
				}
			}
		}
	}
}

bool func_385(var uParam0, var uParam1)
{
	char* sVar0;
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0);
}

int func_389(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { __LIB_2__::func_66(vParam0, vParam3, iParam10) };
	vVar4 = { __LIB_2__::func_67(vParam0, vParam3, iParam10) };
	__LIB_0__::func_568(vParam6, iParam9, uParam11);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, uParam11, 15);
	return iVar0;
}

int func_399(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_399(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_402()
{
	switch (__LIB_3__::func_112(iLocal_218[0], Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_INFORM_N", true);
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_INFORM_B", true);
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_INFORM_L", true);
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_330.f_1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_330.f_1, "PBL_INFORM_R", true);
			}
			break;
	}
}

void func_405()
{
	if (__LIB_3__::func_657(20) < 1 && !bLocal_364)
	{
		__LIB_0__::func_45("REFO_HERB_HELP", 10000, 0, 0, 0, 1);
	}
}

