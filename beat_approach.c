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
	char* sLocal_14 = NULL;
	char* sLocal_15[21] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_37[5] = { NULL, NULL, NULL, NULL, NULL };
	struct<193> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 1073741824;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	struct<17> Local_260[3];
	struct<5> Local_312 = { 0, 0, 0, 0, 0 } ;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	struct<18> Local_329 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = -1;
	var uLocal_351 = -1;
	var uLocal_352 = -1;
	var uLocal_353 = -1;
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
	struct<10> Local_366 = { 0, 1097859072, 0, 1120403456, 1, 0, 1, 0, 1073741824, 0 } ;
	var uLocal_376 = 1113325568;
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
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 1;
	var uLocal_397 = 1;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 1105014447;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	int iLocal_409 = 0;
	float fLocal_410 = 0f;
	float fLocal_411 = 0f;
	var uLocal_412 = 0;
	bool bLocal_413 = false;
	bool bLocal_414 = false;
	bool bLocal_415 = false;
	bool bLocal_416 = false;
	bool bLocal_417 = false;
	bool bLocal_418 = false;
	bool bLocal_419 = false;
	bool bLocal_420 = false;
	bool bLocal_421 = false;
	bool bLocal_422 = false;
	int iLocal_423 = 0;
	bool bLocal_424 = false;
	bool bLocal_425 = false;
	bool bLocal_426 = false;
	bool bLocal_427 = false;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
	bool bLocal_432 = false;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	bool bLocal_440 = false;
	bool bLocal_441 = false;
	bool bLocal_442 = false;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450[1] = { 0 };
	var uLocal_452[1] = { 0 };
	struct<32> Local_454[1];
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	float fLocal_490 = 0f;
	int iLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
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
	fLocal_410 = 0f;
	fLocal_411 = 0f;
	Local_43.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_43.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	__LIB_4__::func_414(&Local_43, 1);
	func_5();
	func_6();
	func_7(&Local_366);
	func_8(&Local_454);
	func_9(&Local_329);
	Local_329.f_9 = 1;
	__LIB_3__::func_302(&(Local_43.f_5), 0);
	__LIB_2__::func_51(&(Local_43.f_5), 1);
	__LIB_2__::func_50(&(Local_43.f_5), 1);
	__LIB_2__::func_105(&(Local_43.f_5), 1);
	__LIB_2__::func_104(&(Local_43.f_5), 1);
	__LIB_2__::func_634(&(Local_43.f_5), 1);
	__LIB_2__::func_182(&(Local_43.f_5), 1);
	__LIB_2__::func_595(&(Local_43.f_5), 30f);
	Local_312 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_312.f_4, 64, "PBL_BASE", false, true);
	while (true)
	{
		switch (iLocal_445)
		{
			case 0:
				if (func_18())
				{
					if (Local_43.f_161)
					{
					}
					else
					{
						iLocal_445 = 1;
					}
				}
				break;
			case 1:
				if (__LIB_3__::func_669(&Local_43, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_20(&Local_43, &iLocal_491, &iLocal_489);
					func_21();
					iLocal_445 = 4;
				}
				else if (Local_43.f_160)
				{
					func_3();
				}
				break;
			case 4:
				if (!func_22(&Local_43, &iLocal_450, iLocal_237, 0, 0, 0, 1, 0))
				{
					func_3();
				}
				if (!Local_43.f_46)
				{
					if (__LIB_4__::func_499(iLocal_450[0], 0, &(Local_43.f_5), &uLocal_328, 0, 0) || (uLocal_321 && __LIB_4__::func_451(&uLocal_321)))
					{
						func_25();
					}
				}
				if (func_26())
				{
					Local_43.f_50 = 1;
					func_3();
				}
				if ((__LIB_3__::func_450(&Local_43, &iLocal_450, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0) || uLocal_412) && !__LIB_0__::func_75(&uLocal_504))
				{
					func_3();
				}
				break;
		}
		BUILTIN::WAIT(Local_43.f_158);
	}
}

void func_3()
{
	if (bLocal_432)
	{
		AUDIO::_0x05D6195FB4D428F4(-503388274);
	}
	__LIB_4__::func_441(&uLocal_321, 1);
	if (!Local_43.f_44 && Local_43.f_48)
	{
		Local_43.f_45 = iLocal_423;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_443))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(iLocal_443, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_450[0]))
	{
		__LIB_2__::func_645(iLocal_450[0], 0, 15f, 0);
	}
	__LIB_2__::func_788(&(iLocal_450[0]), 1, 1, 1);
	func_32(&Local_43, &iLocal_450, &uLocal_452, iLocal_237, iLocal_491, iLocal_489, 0, 1, 0, 1);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_487);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_488);
	if (MAP::DOES_BLIP_EXIST(iLocal_444))
	{
		MAP::REMOVE_BLIP(&iLocal_444);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_325))
	{
		VOLUME::_DELETE_VOLUME(iLocal_325);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5()
{
	iLocal_237 = 0;
	sLocal_14 = "SCRIPT_RE@APPROACH@MALE";
	Local_312.f_4 = "script@beat@wilderness@approach@leaning";
	sLocal_37[0] = "PBL_BASE";
	sLocal_37[1] = "PBL_CALLOUT_B";
	sLocal_37[2] = "PBL_CALLOUT_F";
	sLocal_37[3] = "PBL_CALLOUT_L";
	sLocal_37[4] = "PBL_CALLOUT_R";
}

void func_6()
{
	iLocal_320 = __LIB_3__::func_283();
	switch (iLocal_320)
	{
		case 0:
		case 1:
			sLocal_15[0] = "RE_AP_MTN_V1_CALL";
			sLocal_15[1] = "RE_AP_MTN_V1_STRANDED";
			sLocal_15[2] = "RE_AP_MTN_V1_CALLOUT";
			sLocal_15[3] = "RE_AP_MTN_V1_REFUSE";
			sLocal_15[4] = "RE_AP_MTN_V1_REFUSE_FINAL";
			sLocal_15[5] = "RE_AP_MTN_V1_INTRODUCTIONS";
			sLocal_15[6] = "RE_AP_MTN_V1_NUMBSKULL";
			sLocal_15[7] = "RE_AP_MTN_V1_ROB_INTRO";
			sLocal_15[8] = "RE_AP_MTN_V1_ROB_HANDS_UP";
			sLocal_15[9] = "RE_AP_MTN_V1_ROB_HORSE";
			sLocal_15[10] = "RE_AP_MTN_V1_ROB_MONEY";
			sLocal_15[11] = "RE_AP_MTN_V1_CAMEBACK";
			sLocal_15[12] = "RE_AP_MTN_V1_AGGRO";
			sLocal_15[13] = "RE_AP_MTN_V1_BUCKED_OFF";
			sLocal_15[14] = "RE_AP_MTN_V1_SMALL_TALK";
			sLocal_15[18] = "SCARED_HELP";
			sLocal_15[19] = "PLAYER_FOLLOWING";
			sLocal_15[15] = "RE_AP_MTN_V1_PL_ACCEPT";
			sLocal_15[16] = "RE_AP_MTN_V1_PL_DECLINE";
			sLocal_15[17] = "RE_AP_MTN_V1_PL_DECLINE_AGAIN";
			sLocal_15[20] = "RE_AP_MTN_V1_THATSMINE";
			break;
		case 2:
		case 3:
		default:
			sLocal_15[0] = "RE_AP_SWM_V1_CALL";
			sLocal_15[1] = "RE_AP_SWM_V1_STRANDED";
			sLocal_15[2] = "RE_AP_SWM_V1_CALLOUT";
			sLocal_15[3] = "RE_AP_SWM_V1_REFUSE";
			sLocal_15[4] = "RE_AP_SWM_V1_REFUSE_FINAL";
			sLocal_15[5] = "RE_AP_SWM_V1_INTRODUCTIONS";
			sLocal_15[6] = "RE_AP_SWM_V1_NUMBSKULL";
			sLocal_15[7] = "RE_AP_SWM_V1_ROB_INTRO";
			sLocal_15[8] = "RE_AP_SWM_V1_ROB_HANDS_UP";
			sLocal_15[9] = "RE_AP_SWM_V1_ROB_HORSE";
			sLocal_15[10] = "RE_AP_SWM_V1_ROB_MONEY";
			sLocal_15[11] = "RE_AP_SWM_V1_CAMEBACK";
			sLocal_15[12] = "RE_AP_SWM_V1_AGGRO";
			sLocal_15[13] = "RE_AP_SWM_V1_BUCKED_OFF";
			sLocal_15[14] = "RE_AP_SWM_V1_ROB_INTRO";
			sLocal_15[18] = "PANIC_HELP";
			sLocal_15[19] = "DONT_BE_STUPID";
			sLocal_15[15] = "RE_AP_SWM_V1_PL_ACCEPT";
			sLocal_15[16] = "RE_AP_SWM_V1_PL_DECLINE";
			sLocal_15[17] = "RE_AP_SWM_V1_PL_DECLINE_AGAIN";
			sLocal_15[20] = "RE_AP_SWM_V1_THATSMINE";
			break;
	}
	iLocal_238 = MISC::GET_HASH_KEY(sLocal_15[0]);
}

void func_7(var uParam0)
{
	uParam0->f_39 = 0;
	uParam0->f_28 = 0;
	uParam0->f_1 = 15f;
	uParam0->f_3 = 50f;
	uParam0->f_2 = 1;
	uParam0->f_8 = 1f;
	StringCopy(&(uParam0->f_11), sLocal_15[0], 64);
	uParam0->f_32 = 1;
}

void func_8(var uParam0)
{
	switch (__LIB_3__::func_283())
	{
		case 0:
		case 1:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_APPROACH_MALES_01");
			(uParam0[0 /*32*/])->f_3 = -128013111;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "0897_A_M_M_Civ_Poor_Hispanic_AVOID_02", 64);
			break;
		case 2:
		case 3:
		default:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_APPROACH_MALES_01");
			(uParam0[0 /*32*/])->f_3 = -840869937;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "0130_G_M_M_UniCriminals_01_WHITE_01", 64);
			break;
	}
	(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
	(uParam0[0 /*32*/])->f_9 = 90f;
	__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
	__LIB_3__::func_284(uParam0);
}

void func_9(var uParam0)
{
	uParam0->f_17 = sLocal_15[9];
	uParam0->f_18 = sLocal_15[10];
	uParam0->f_10 = 1;
	uParam0->f_11 = 1;
}

bool func_18()
{
	switch (iLocal_448)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_43))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_14);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_312);
				iLocal_448 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_454))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_14))
			{
				return false;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_312, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_312, true, false))
				{
					if (!func_49())
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_20(var uParam0, int iParam1, int iParam2)
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
			*iParam1 = 1;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 1;
			*iParam2 = 1;
			break;
		case 4:
			*iParam1 = 1;
			*iParam2 = 2;
			break;
		case 5:
			*iParam1 = 1;
			*iParam2 = 3;
			break;
		case 6:
			*iParam1 = 1;
			*iParam2 = 4;
			break;
		case 7:
			*iParam1 = 1;
			*iParam2 = 5;
			break;
		case 8:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 2;
			*iParam2 = 1;
			break;
		case 10:
			*iParam1 = 3;
			*iParam2 = 0;
			break;
		case 11:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 12:
			*iParam1 = 4;
			*iParam2 = 1;
			break;
		case 13:
			*iParam1 = 4;
			*iParam2 = 2;
			break;
		case 14:
			*iParam1 = 7;
			*iParam2 = 0;
			break;
		case 15:
			*iParam1 = 7;
			*iParam2 = 1;
			break;
		case 16:
			*iParam1 = 7;
			*iParam2 = 2;
			break;
		case 17:
			*iParam1 = 10;
			*iParam2 = 0;
			break;
		case 18:
			*iParam1 = 10;
			*iParam2 = 1;
			break;
		case 19:
			*iParam1 = 10;
			*iParam2 = 2;
			break;
		case 20:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
		case 21:
			*iParam1 = 11;
			*iParam2 = 1;
			break;
		case 22:
			*iParam1 = 11;
			*iParam2 = 2;
			break;
	}
}

void func_21()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_450[iVar0] = __LIB_3__::func_422(Local_454[iVar0 /*32*/].f_1, &(Local_454[iVar0 /*32*/]), Local_43.f_51 + Local_454[iVar0 /*32*/].f_6, Local_454[iVar0 /*32*/].f_9, 1, 0, 1, 0, 1);
		iVar0++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_454[0 /*32*/].f_23)))
	{
		__LIB_2__::func_133(iLocal_450[0], &(Local_454[0 /*32*/].f_23), 0);
	}
	__LIB_3__::func_285(iLocal_450[0], &Local_43, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_450[0], true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_450[0], joaat("WEAPON_UNARMED"), true, 0, false, false);
	__LIB_3__::func_873(iLocal_450[0], 4);
	PED::SET_PED_CONFIG_FLAG(iLocal_450[0], 148, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_450[0], 448, true);
	__LIB_2__::func_272(iLocal_450[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_450[0], true, 0f);
	PED::_0x89F5E7ADECCCB49C(iLocal_450[0], "INJURED_GENERAL");
	__LIB_2__::func_190(iLocal_450[0], 100);
	__LIB_3__::func_937(iLocal_450[0]);
}

bool func_22(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_62(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
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
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
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
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
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
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
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

void func_25()
{
	Local_43.f_46 = 1;
	Local_43.f_44 = 1;
	__LIB_4__::func_441(&uLocal_321, 1);
	__LIB_2__::func_645(iLocal_450[0], 0, 15f, 0);
	if (iLocal_449 != 10)
	{
		iLocal_449 = 10;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_450[0]))
	{
		if (bLocal_430)
		{
			__LIB_2__::func_478(iLocal_450[0], Global_35, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		TASK::CLEAR_PED_SECONDARY_TASK(iLocal_450[0]);
		TASK::TASK_COMBAT_PED(iLocal_450[0], Global_35, 0, 0);
		__LIB_2__::func_73(iLocal_450[0], &(uLocal_452[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		__LIB_2__::func_526(&Local_260, 0, 0);
	}
}

bool func_26()
{
	float fVar0;
	var uVar1;
	float fVar2;
	struct<16> Var3;
	struct<16> Var20;
	func_106();
	func_107();
	func_108();
	func_109();
	func_110();
	func_111();
	__LIB_2__::func_527(&Local_329);
	if ((((bLocal_425 && iLocal_449 != 5) && iLocal_449 != 12) && iLocal_449 != 10) && iLocal_449 != 7)
	{
		func_114(&(iLocal_450[0]), &iLocal_239, 15f, &Local_260, &(Local_43.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if ((__LIB_2__::func_1(iLocal_450[0], 0, 1) && iLocal_449 < 6) && iLocal_449 >= 2)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_450[0], 0, 1) < 50f)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_450[0], Global_35, 50, 0, 51, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_450[0]) && iLocal_449 <= 5)
	{
		PED::SET_PED_RESET_FLAG(iLocal_450[0], 314, true);
	}
	switch (iLocal_449)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_43))
			{
				func_117();
				bLocal_425 = true;
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_312, Local_43.f_51, func_118(iLocal_491, iLocal_489), 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_312, "Ped", iLocal_450[0], 0);
				ANIMSCENE::START_ANIM_SCENE(Local_312);
				iLocal_449 = 1;
			}
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::_0xF60165E1D2C5370B(PED::GET_MOUNT(Global_35), &uVar1, &fVar2) && fVar2 >= 1.25f)
				{
					fVar0 = 40f;
				}
				else
				{
					fVar0 = 25f;
				}
			}
			else
			{
				fVar0 = 25f;
			}
			if (func_119(&Local_43, 1f, 1114636288 /* Float: 60f */, fVar0, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 1))
			{
				switch (__LIB_3__::func_112(iLocal_450[0], Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 3:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_312, sLocal_37[3], true);
						break;
					case 2:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_312, sLocal_37[4], true);
						break;
					case 0:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_312, sLocal_37[2], true);
						break;
					case 1:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_312, sLocal_37[1], true);
						break;
				}
				iLocal_449 = 2;
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_450[0], Local_312))
			{
				__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(iLocal_450[0], true, false), 1);
				if (!MAP::DOES_BLIP_EXIST(uLocal_452[0]))
				{
					__LIB_2__::func_73(iLocal_450[0], &(uLocal_452[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
				}
				iLocal_449 = 3;
			}
			break;
		case 3:
			iLocal_449 = 4;
			break;
		case 4:
			if (Local_366.f_9 && iLocal_487 == 0)
			{
				__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(iLocal_450[0], true, false), 1);
				iLocal_487 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), iLocal_450[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				Local_43.f_44 = 1;
			}
			if (func_122(iLocal_450[0], Global_35, &iLocal_444, &uLocal_327, &Local_366, &Local_43, &bLocal_413, &(Local_43.f_47), 1093664768 /* Float: 11f */, 1099956224 /* Float: 18f */, 0, 0))
			{
				if (bLocal_413)
				{
					iLocal_423 = 1;
					iLocal_449 = 5;
				}
				else
				{
					TASK::TASK_PLAY_ANIM(iLocal_450[0], sLocal_14, "LINE_07", 4f, -4f, -1, 16, 0f, false, 65536, false, 0, false);
					TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_450[0], Global_35, 1f, 128, 0);
					__LIB_1__::func_148(&uLocal_501);
					__LIB_2__::func_451(&iLocal_239, 0);
					iLocal_449 = 12;
				}
			}
			break;
		case 5:
			func_125();
			if (func_126())
			{
				__LIB_0__::func_325(&(uLocal_452[0]));
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_450[0], Global_35, 1, 524672, 10000f, -1, 0);
				PED::_0x89F5E7ADECCCB49C(iLocal_450[0], "INJURED_GENERAL");
				__LIB_1__::func_148(&uLocal_501);
				__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				iLocal_449 = 12;
			}
			break;
		case 6:
			if (bLocal_414)
			{
				if (!bLocal_426 && PED::IS_PED_ON_MOUNT(iLocal_450[0]))
				{
					TASK::_0x2E1D6D87346BB7D2(iLocal_450[0], Global_35, 0, 0);
					bLocal_426 = true;
				}
				if (__LIB_0__::func_396(iLocal_450[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_450[0], true, false);
					TASK::TASK_SMART_FLEE_PED(iLocal_450[0], Global_35, 1000f, -1, 0, 2.001f, 0);
					TASK::TASK_PLAY_ANIM(iLocal_450[0], sLocal_14, "LINE_05", 4f, -4f, -1, 16, 0f, false, 65536, false, 0, false);
					__LIB_2__::func_73(iLocal_450[0], &(uLocal_452[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					Local_43.f_44 = 1;
					iLocal_449 = 7;
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_450[0], 1, 1) > 30f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_450[0], true, false);
					TASK::TASK_WANDER_STANDARD(iLocal_450[0], 40000f, 0);
					__LIB_0__::func_325(&(uLocal_452[0]));
					bLocal_414 = false;
					if (!bLocal_417 && !bLocal_434)
					{
						__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_434 = true;
					}
					else
					{
						__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						return true;
					}
					func_130();
					__LIB_1__::func_148(&uLocal_501);
					__LIB_2__::func_451(&iLocal_239, 0);
					iLocal_449 = 12;
				}
				else
				{
					func_131();
				}
			}
			else
			{
				__LIB_4__::func_441(&uLocal_321, 0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "LINE_06", 1) && __LIB_2__::func_227(0, 1, iLocal_450[0], 1))
				{
					__LIB_3__::func_443(iLocal_450[0]);
					bLocal_430 = true;
					__LIB_2__::func_73(iLocal_450[0], &(uLocal_452[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_450[0], joaat("REL_PLAYER_DISLIKE"));
					PED::SET_PED_CONFIG_FLAG(iLocal_450[0], 6, true);
					__LIB_2__::func_526(&Local_260, 0, 0);
					fLocal_411 = (IntToFloat(__LIB_0__::func_492(1)) * 0.05f);
					Var3.f_6 = 1;
					Var3.f_14 = 1;
					Var3.f_4 = -1;
					Var3.f_15 = 1;
					Var3 = Global_35;
					TASK::TASK_SHOOT_WITH_WEAPON(iLocal_450[0], &Var3);
					__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[8], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_645(iLocal_450[0], 1, 15f, 0);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
					__LIB_1__::func_148(&uLocal_507);
					iLocal_488 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), iLocal_450[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					iLocal_449 = 8;
				}
			}
			break;
		case 8:
			if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				__LIB_2__::func_645(iLocal_450[0], 0, 15f, 0);
				iLocal_449 = 9;
			}
			else if (__LIB_1__::func_313(&uLocal_507, 10f) || PED::_0x7F9B9791D4CB71F6(iLocal_450[0], Global_35, false, 0) == 0)
			{
				func_25();
			}
			break;
		case 9:
			if (!PED::IS_PED_IN_COMBAT(iLocal_450[0], Global_35) && !bLocal_440)
			{
				if (__LIB_2__::func_227(0, 1, iLocal_450[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					__LIB_2__::func_478(iLocal_450[0], Global_35, Local_329.f_17, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_440 = true;
				}
			}
			if (func_136(iLocal_450[0], &Local_329, 0.05f, 0, 0, 98, 0, 0, 0, -1, 1, 0))
			{
				bLocal_436 = true;
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_450[0]))
				{
					PED::_0x58F7DB5BD8FA2288(iLocal_450[0]);
				}
				if (Local_329.f_1 || PED::IS_PED_IN_COMBAT(iLocal_450[0], Global_35))
				{
					Local_43.f_44 = 1;
					return true;
				}
				else if (__LIB_2__::func_1(iLocal_450[0], 0, 1))
				{
					__LIB_2__::func_190(iLocal_450[0], BUILTIN::CEIL(fLocal_411) + 100);
					iLocal_443 = PED::_GET_LAST_MOUNT(Global_35);
					if (__LIB_2__::func_1(iLocal_443, 0, 1) && __LIB_0__::func_665(iLocal_450[0], iLocal_443, 0, 1) < 50f)
					{
						AITRANSPORT::_0x67F7CEAC2391E114(iLocal_443, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_326);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_443, -1, -1, 2f, 8, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, Global_35, 100000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_326);
						__LIB_4__::func_441(&uLocal_321, 1);
						PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_450[0], iLocal_326);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_326);
						iLocal_449 = 10;
					}
					else
					{
						__LIB_4__::func_441(&uLocal_321, 1);
						__LIB_3__::func_286(iLocal_450[0]);
						TASK::TASK_SMART_FLEE_PED(iLocal_450[0], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						iLocal_449 = 10;
					}
				}
				else
				{
					return true;
				}
			}
			else if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_3__::func_286(iLocal_450[0]);
				if (__LIB_2__::func_1(iLocal_450[0], 0, 1))
				{
					TASK::TASK_COMBAT_PED(iLocal_450[0], Global_35, 0, 0);
					iLocal_449 = 10;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "LINE_05", 1))
			{
				if (__LIB_2__::func_1(iLocal_450[0], 0, 1))
				{
					if (!__LIB_0__::func_163(iLocal_450[0], 518218985))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_35))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_450[0], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						}
					}
				}
				iLocal_449 = 10;
			}
			break;
		case 10:
			if (!PED::IS_PED_ON_MOUNT(iLocal_450[0]))
			{
				func_114(&(iLocal_450[0]), &iLocal_239, 15f, &Local_260, &(Local_43.f_192), 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			}
			if ((ENTITY::IS_ENTITY_DEAD(iLocal_450[0]) || !__LIB_0__::func_48(Global_35, iLocal_450[0], 100f, 1)) && !__LIB_0__::func_75(&uLocal_504))
			{
				return true;
			}
			break;
		case 12:
			fLocal_490 = __LIB_0__::func_232(Global_35, iLocal_450[0], 1);
			if (fLocal_490 < 100f)
			{
				if (__LIB_0__::func_33(&uLocal_501))
				{
					__LIB_2__::func_112(&uLocal_501);
				}
			}
			else if (!__LIB_0__::func_33(&uLocal_501))
			{
				__LIB_2__::func_113(&uLocal_501);
			}
			if (__LIB_1__::func_313(&uLocal_501, 7f))
			{
				if (!bLocal_427)
				{
					Var20 = Global_35;
					Var20.f_6 = 1;
					Var20.f_4 = 9000;
					Var20.f_15 = 1;
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_450[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, true, false);
					TASK::TASK_SHOOT_WITH_WEAPON(iLocal_450[0], &Var20);
					__LIB_1__::func_148(&uLocal_498);
					__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[19], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_449 = 13;
					bLocal_427 = true;
				}
				else
				{
					func_25();
				}
			}
			if (__LIB_2__::func_1(Global_35, 0, 1) && __LIB_2__::func_1(iLocal_450[0], 0, 1))
			{
				func_125();
				fLocal_410 = __LIB_0__::func_665(Global_35, iLocal_450[0], 1, 1);
				if (bLocal_424 && __LIB_1__::func_285(&uLocal_495, 3f))
				{
					bLocal_424 = false;
					__LIB_0__::func_37(&uLocal_495);
					bLocal_417 = true;
					__LIB_3__::func_286(iLocal_450[0]);
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_131();
						bLocal_414 = true;
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_450[0], sLocal_14, "LINE_06", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 65536, -1f);
					}
					PED::SET_PED_CONFIG_FLAG(iLocal_450[0], 6, true);
					iLocal_449 = 6;
					return false;
				}
				else if (fLocal_410 > 100f)
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case 13:
			if (__LIB_1__::func_313(&uLocal_498, 8f))
			{
				if (__LIB_0__::func_232(Global_35, iLocal_450[0], 1) > fLocal_490 || !PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_450[0], true, false), 0f))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_450[0], Global_35, 1, 524672, 10000f, -1, 0);
					__LIB_1__::func_148(&uLocal_501);
					__LIB_2__::func_451(&iLocal_239, 0);
					iLocal_449 = 12;
				}
				else
				{
					func_25();
				}
			}
			break;
	}
	return false;
}

void func_32(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_62(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_164(uParam0->f_3, uParam0->f_185);
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
		func_165(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_49()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!ANIMSCENE::_0xDF7B5144E25CD3FE(Local_312, sLocal_37[iVar1]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_62(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_164(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_106()
{
	if (Local_43.f_46)
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_450[0], -1655026794))
	{
		if (!MAP::DOES_BLIP_EXIST(uLocal_452[0]))
		{
			__LIB_2__::func_73(iLocal_450[0], &(uLocal_452[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
	}
	if (bLocal_418 && !__LIB_0__::func_27(iLocal_409, 1))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_450[0]))
		{
			__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[13], 0, 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_409, 1);
		}
	}
}

void func_107()
{
	if (!bLocal_415)
	{
		if (__LIB_0__::func_394(iLocal_450[0], __LIB_0__::func_398(7), 0))
		{
			bLocal_415 = true;
			__LIB_1__::func_538(0);
		}
	}
	else
	{
		if (!bLocal_416)
		{
			__LIB_1__::func_538(0);
		}
		if (__LIB_0__::func_394(iLocal_450[0], __LIB_0__::func_398(7), 1))
		{
			bLocal_416 = true;
		}
		if (!PED::IS_PED_ON_MOUNT(iLocal_450[0]))
		{
			if (!bLocal_418)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_450[0]);
				TASK::CLEAR_PED_TASKS(iLocal_450[0], true, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_450[0], Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				bLocal_415 = false;
				bLocal_418 = true;
				iLocal_449 = 10;
			}
		}
	}
}

void func_108()
{
	int iVar0;
	if (bLocal_419)
	{
		return;
	}
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (__LIB_0__::func_394(iLocal_450[0], iVar0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_450[0], 138, true);
			bLocal_419 = true;
		}
	}
}

void func_109()
{
	if (iLocal_449 > 4)
	{
		if (!__LIB_0__::func_75(&uLocal_492))
		{
			if (__LIB_0__::func_163(iLocal_450[0], 1868526510))
			{
				__LIB_1__::func_148(&uLocal_492);
			}
		}
		else if (__LIB_1__::func_285(&uLocal_492, 13f))
		{
			if (!bLocal_442 && PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_1__::func_148(&uLocal_492);
			}
			if (__LIB_0__::func_396(Global_35))
			{
				bLocal_442 = true;
				if ((__LIB_0__::func_163(iLocal_450[0], 1868526510) && !PED::IS_PED_JACKING(iLocal_450[0])) && !PED::IS_PED_ON_MOUNT(iLocal_450[0]))
				{
					if (!bLocal_434)
					{
						__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_434 = true;
					}
					func_130();
					TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_450[0], Global_35, 1f, 128, 0);
					PED::_0x89F5E7ADECCCB49C(iLocal_450[0], "INJURED_GENERAL");
					__LIB_0__::func_325(&(uLocal_452[0]));
					__LIB_0__::func_37(&uLocal_492);
					__LIB_1__::func_148(&uLocal_501);
					__LIB_2__::func_360(&(Local_260[0 /*17*/]), "RE_INTER_POS");
					__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
					iLocal_449 = 12;
				}
			}
			else
			{
				bLocal_442 = false;
			}
		}
	}
}

void func_110()
{
	if (bLocal_439)
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_504))
	{
		if (bLocal_436 || bLocal_432)
		{
			if (__LIB_2__::func_901(iLocal_450[0], Global_35))
			{
				__LIB_1__::func_148(&uLocal_504);
			}
		}
	}
	else if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_1__::func_313(&uLocal_504, 1.5f))
	{
		__LIB_2__::func_478(Global_35, 0, sLocal_15[20], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		bLocal_439 = true;
	}
}

void func_111()
{
	if (bLocal_441)
	{
		return;
	}
	if (AUDIO::_0x4A98E228A936DBCC(iLocal_450[0]) != iLocal_238 && AUDIO::_0x6BFFB7C276866996(iLocal_450[0]) == iLocal_238)
	{
		bLocal_441 = true;
	}
}

int func_114(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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

void func_117()
{
	__LIB_2__::func_451(&iLocal_239, 0);
	__LIB_3__::func_157(&(Local_260[0 /*17*/]), "RE_INTER_POS", sLocal_15[15], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_15[16], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_260[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_260[2 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_260[2 /*17*/]), 1);
	__LIB_1__::func_471(&(Local_260[0 /*17*/]), 6);
}

Vector3 func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 194.4f;
				case 1:
					return 0f, 0f, 62.64f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 14.4f;
				case 1:
					return 0f, 0f, 37.2f;
				case 2:
					return 0f, 0f, 263.52f;
				case 3:
					return 0f, 0f, 169.92f;
				case 4:
					return 0f, 0f, -65.52f;
				case 5:
					return 0f, 0f, 93.6f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -2.88f;
				case 1:
					return 0f, 0f, -17.28f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 160.56f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 60.48f;
				case 1:
					return 0f, 0f, -150.48f;
				case 2:
					return 0f, 0f, 194.4f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -26.64f;
				case 1:
					return 0f, 0f, -36.72f;
				case 2:
					return 0f, 0f, -52.56f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -108f;
				case 1:
					return 0f, 0f, 192.96f;
				case 2:
					return 0f, 0f, 58.32f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 58.32f;
				case 1:
					return 0f, 0f, -137.92f;
				case 2:
					return 0f, 0f, 92.88f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_119(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
				STATS::_0xB2A38826E5886E83(func_164(uParam0->f_3, uParam0->f_185), 0);
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
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_164(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_122(int iParam0, int iParam1, int* iParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, float fParam8, float fParam9, bool bParam10, float fParam11)
{
	float fVar0;
	int iVar1;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam1, 0, 1))
	{
		return true;
	}
	if (fParam8 > (fParam9 - 7f))
	{
	}
	if (__LIB_4__::func_252(iParam0, iParam1, uParam4, fParam11))
	{
		uParam4->f_9 = 1;
		__LIB_2__::func_478(iParam0, iParam1, &(uParam4->f_11), &(uParam4->f_20), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (MAP::DOES_BLIP_EXIST(*iParam2))
		{
			__LIB_0__::func_325(iParam2);
		}
		if (bParam10)
		{
			if (uParam4->f_42)
			{
				__LIB_3__::func_719(uParam5, iParam0, 1515458263, 0, 1123024896 /* Float: 120f */, 0, -1, 1);
			}
			else
			{
				*iParam2 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iParam0);
			}
		}
		if (uParam4->f_39)
		{
			if (uParam4->f_40)
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (uParam4->f_40)
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, uParam4->f_36, uParam4->f_37, Global_35, uParam4->f_41, 8f, -4f, 0, 0f, false, true, -1f, 0, 0, -1f);
			}
			else
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, uParam4->f_36, uParam4->f_37, Global_35, uParam4->f_41, 8f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
			}
			if (uParam4->f_7)
			{
				TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, uParam4->f_8, (fParam8 + 2f), 0);
			}
			else
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iParam1, 0f, fParam8, 0.5f, uParam4->f_8, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!uParam5->f_48)
		{
			__LIB_3__::func_426(uParam5, &(uParam5->f_48), uParam5->f_3, &(uParam5->f_51.f_6));
		}
	}
	switch (*uParam3)
	{
		case 0:
			if (!uParam4->f_2 || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < uParam4->f_3)
			{
				__LIB_0__::func_19(uParam3, 1);
			}
			break;
		case 1:
			uParam4->f_29 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
			TASK::_0x42CFD8FD8CC8DC69(iParam0, 1);
			PED::_0xF1C03A5352243A30(iParam0);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 5000, 0, 51, 0);
			if (uParam4->f_28)
			{
				PED::_0x89F5E7ADECCCB49C(iParam0, "INJURED_RIGHT_LEG");
			}
			else if (uParam4->f_38)
			{
				PED::_0x89F5E7ADECCCB49C(iParam0, uParam4->f_35);
			}
			if (uParam4->f_30)
			{
				if (uParam4->f_33)
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, Global_36, fParam8, 3f, 16, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, 3f, 2f, 0);
				}
				__LIB_0__::func_19(uParam3, 2);
			}
			else
			{
				TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, uParam4->f_8, 2f, 0);
				if (uParam4->f_31)
				{
					__LIB_0__::func_19(uParam3, 3);
				}
				else
				{
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_472(iParam0, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < 60f)
			{
				if (uParam4->f_28)
				{
					PED::_0x89F5E7ADECCCB49C(iParam0, "INJURED_RIGHT_LEG");
				}
				else if (uParam4->f_38)
				{
					PED::_0x89F5E7ADECCCB49C(iParam0, uParam4->f_35);
				}
				if (uParam4->f_33)
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, Global_36, fParam8, 3f, 16, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, fParam8, uParam4->f_8, 2f, 0);
				}
				if (uParam4->f_31)
				{
					__LIB_0__::func_19(uParam3, 3);
				}
				else
				{
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 3:
			if (uParam4->f_9)
			{
				if (uParam4->f_39)
				{
					__LIB_0__::func_19(uParam3, 4);
				}
				else if (__LIB_1__::func_472(iParam0, (fParam9 * 2f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < (fParam9 + 7f))
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, (fParam8 * 0.25f), uParam4->f_8, 2f, 0);
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, uParam4->f_36, uParam4->f_37, 1))
			{
				if (__LIB_1__::func_472(iParam0, (fParam9 * 2f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) < (fParam9 + 7f))
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam1, -1, (fParam8 * 0.5f), uParam4->f_8, 2f, 0);
					__LIB_0__::func_19(uParam3, 5);
				}
			}
			break;
		case 5:
			if (PED::IS_PED_ON_MOUNT(iParam1))
			{
				fVar0 = (fParam9 + ENTITY::GET_ENTITY_SPEED(iParam1));
			}
			else
			{
				fVar0 = ((fParam9 - 7f) + ENTITY::GET_ENTITY_SPEED(iParam1));
			}
			if (uParam4->f_5)
			{
				if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) < uParam4->f_10)
				{
					__LIB_0__::func_19(uParam3, 6);
					*bParam6 = 1;
					return true;
				}
			}
			else if (__LIB_1__::func_472(iParam0, (fVar0 + 1.5f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_2__::func_215(iParam0, iParam1, 0, 4.5f, 0))
			{
				if (uParam4->f_4)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 8000, 0, 51, 0);
					__LIB_2__::func_45(iParam0, iParam1, -1);
				}
				*uParam7 = 1;
				*bParam6 = 1;
				TASK::_0x42CFD8FD8CC8DC69(iParam0, 0);
				__LIB_0__::func_19(uParam3, 6);
				return true;
			}
			break;
		case 6:
			return true;
	}
	if (*uParam3 > 1 && *uParam3 < 6)
	{
		if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) > (uParam4->f_29 + uParam4->f_1))
		{
			TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			TASK::_0x42CFD8FD8CC8DC69(iParam0, 0);
			return true;
		}
	}
	return false;
}

void func_125()
{
	int iVar0;
	if (bLocal_425)
	{
		if (!bLocal_424 && iLocal_449 != 12)
		{
			iVar0 = func_114(&(iLocal_450[0]), &iLocal_239, 15f, &Local_260, &(Local_43.f_192), 0f, 1, 0, 0, 1, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iVar0 = func_114(&(iLocal_450[0]), &iLocal_239, 15f, &Local_260, &(Local_43.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
		if (iVar0 == 0)
		{
			__LIB_2__::func_526(&Local_260, 0, 0);
			__LIB_3__::func_465(11, 0, 0, "HONOR_EVENT_OFFERED_HELP", iLocal_450[0], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_451(&iLocal_239, 0);
			Local_43.f_44 = 1;
			bLocal_424 = true;
			bLocal_433 = true;
			bLocal_437 = true;
			__LIB_1__::func_148(&uLocal_495);
		}
		else if (iVar0 == 1)
		{
			Local_43.f_44 = 1;
			if (!bLocal_429)
			{
				__LIB_3__::func_157(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_15[17], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
				bLocal_429 = true;
			}
			else
			{
				bLocal_424 = true;
				bLocal_435 = true;
				__LIB_1__::func_148(&uLocal_495);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
			}
			bLocal_422 = true;
		}
	}
}

bool func_126()
{
	float fVar0;
	if (__LIB_2__::func_1(Global_35, 0, 1) && __LIB_2__::func_1(iLocal_450[0], 0, 1))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iLocal_450[0], 1, 1);
		if (fVar0 < 5f || (bLocal_424 && __LIB_1__::func_285(&uLocal_495, 3f)))
		{
			if (__LIB_2__::func_227(0, 1, iLocal_450[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				bLocal_424 = false;
				__LIB_0__::func_37(&uLocal_495);
				__LIB_3__::func_286(iLocal_450[0]);
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					func_131();
					bLocal_414 = true;
				}
				else
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_450[0], sLocal_14, "LINE_06", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 65536, -1f);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_450[0], 6, true);
				PED::_0x89F5E7ADECCCB49C(iLocal_450[0], "INJURED_GENERAL");
				iLocal_449 = 6;
				return false;
			}
		}
		else if (fVar0 > 35f)
		{
			if (!bLocal_428)
			{
				if (iLocal_446 != 3)
				{
					__LIB_3__::func_286(iLocal_450[0]);
					iLocal_446 = 3;
					iLocal_447 = 0;
					__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
					bLocal_428 = true;
				}
			}
		}
		else if (bLocal_441)
		{
			if ((!bLocal_420 && fVar0 < 25f) && fVar0 > 8f)
			{
				TASK::TASK_GO_TO_ENTITY(iLocal_450[0], Global_35, -1, (fVar0 - 2f), 1f, 2f, 0);
				bLocal_420 = true;
			}
		}
	}
	if (!bLocal_424)
	{
		switch (iLocal_447)
		{
			case 0:
				if (__LIB_2__::func_227(0, 1, iLocal_450[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					switch (iLocal_446)
					{
						case 0:
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_450[0], sLocal_14, "LINE_02", Global_35, -1, 4f, -4f, 16, 0f, false, true, -1f, 0, 65536, -1f);
							break;
						case 1:
							TASK::TASK_PLAY_ANIM(iLocal_450[0], sLocal_14, "LINE_03", 4f, -4f, -1, 16, 0f, false, 65536, false, 0, false);
							break;
						case 2:
							TASK::TASK_PLAY_ANIM(iLocal_450[0], sLocal_14, "LINE_04", 4f, -4f, -1, 16, 0f, false, 65536, false, 0, false);
							break;
						case 3:
							TASK::TASK_PLAY_ANIM(iLocal_450[0], sLocal_14, "LINE_07", 4f, -4f, -1, 16, 0f, false, 65536, false, 0, false);
							__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
							break;
					}
					bLocal_422 = false;
					iLocal_447 = 1;
				}
				break;
			case 1:
				if (__LIB_2__::func_227(0, 1, iLocal_450[0], 1))
				{
					switch (iLocal_446)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "LINE_02", 1))
							{
								__LIB_2__::func_360(&(Local_260[0 /*17*/]), "RE_INTER_OFFER_RIDE");
								__LIB_1__::func_471(&(Local_260[0 /*17*/]), 8);
								__LIB_1__::func_471(&(Local_260[1 /*17*/]), 8);
								__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
								if (iLocal_320 != 3 && iLocal_320 != 2)
								{
									__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
								}
								bLocal_425 = true;
								func_327();
								iLocal_446 = 1;
								iLocal_447 = 2;
							}
							break;
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "LINE_03", 1))
							{
								__LIB_2__::func_360(&(Local_260[0 /*17*/]), "BEAT_GRT_POS");
								__LIB_2__::func_360(&(Local_260[1 /*17*/]), "BEAT_GRT_NEG");
								__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
								__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
								func_327();
								iLocal_446 = 2;
								iLocal_447 = 2;
							}
							break;
						case 2:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "LINE_04", 1))
							{
								func_327();
								if (!bLocal_424)
								{
									__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
								}
								iLocal_446 = 3;
								iLocal_447 = 2;
							}
							break;
						case 3:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "LINE_07", 1))
							{
								return true;
							}
							break;
					}
				}
				break;
			case 2:
				if (!func_328() || (bLocal_422 && __LIB_2__::func_227(0, 1, Global_35, 1)))
				{
					bLocal_420 = false;
					iLocal_447 = 0;
				}
				break;
		}
	}
	return false;
}

void func_130()
{
	if (bLocal_437 && !bLocal_438)
	{
		__LIB_3__::func_465(1, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		bLocal_438 = true;
	}
}

void func_131()
{
	if (__LIB_2__::func_1(iLocal_450[0], 0, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			iLocal_443 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_443))
			{
				if (!bLocal_435)
				{
					if (!bLocal_421 && __LIB_2__::func_227(0, 1, iLocal_450[0], 1))
					{
						if (__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							bLocal_421 = true;
						}
					}
				}
				if (!bLocal_432 && (PED::IS_PED_JACKING(iLocal_450[0]) || AITRANSPORT::_0x619E63980BFC0096(iLocal_450[0], iLocal_443, 1)))
				{
					__LIB_2__::func_603(&(iLocal_450[0]), &iLocal_239, &Local_260, 1, 1);
					bLocal_432 = true;
					__LIB_2__::func_73(iLocal_450[0], &(uLocal_452[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					if (bLocal_435)
					{
						if (!bLocal_421 && __LIB_2__::func_227(0, 1, iLocal_450[0], 1))
						{
							if (__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								bLocal_421 = true;
							}
						}
					}
					if (!bLocal_431)
					{
						AUDIO::_0x05D6195FB4D428F4(666964094);
						bLocal_431 = true;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_443) && !__LIB_0__::func_163(iLocal_450[0], 1868526510))
				{
					__LIB_0__::func_325(&(uLocal_452[0]));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_450[0], joaat("REL_PLAYER_DISLIKE"));
					PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
					AITRANSPORT::_0x67F7CEAC2391E114(iLocal_443, 1);
					TASK::TASK_MOUNT_ANIMAL(iLocal_450[0], iLocal_443, -1, -1, 2f, 8, 0, 0);
					bLocal_430 = true;
					__LIB_2__::func_526(&Local_260, 0, 0);
					if ((bLocal_433 && !bLocal_421) && __LIB_2__::func_227(0, 1, iLocal_450[0], 1))
					{
						__LIB_2__::func_478(iLocal_450[0], Global_35, sLocal_15[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_421 = true;
					}
				}
			}
		}
	}
}

bool func_136(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_527(uParam1);
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_16, 0, -1082130432 /* Float: -1f */, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
					__LIB_1__::func_283(&(uParam1->f_32), 0);
				}
				else
				{
					__LIB_2__::func_462(&(uParam1->f_32), 0.5f, 0);
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
			if (((!uParam1->f_12 && !uParam1->f_13) && __LIB_1__::func_285(&(uParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (__LIB_3__::func_273(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
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
					__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
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
			else if (__LIB_2__::func_518(uParam1))
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_478(Global_35, iParam0, uParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_344(iParam6, 1, 0, -142743235, 0);
					__LIB_2__::func_463(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(__LIB_0__::func_492(1)) * fParam2));
				if (iVar3 > 0)
				{
					__LIB_1__::func_432(iVar3, 0, 0, 1, 1);
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(0f, 1, iParam0, 1))
					{
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_17, 0, -1082130432 /* Float: -1f */, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
						__LIB_2__::func_461(0);
					}
				}
				if (uParam1->f_11)
				{
					if (__LIB_2__::func_227(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							__LIB_2__::func_478(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_19, 0, -1082130432 /* Float: -1f */, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

int func_164(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
				Jump @3260; //curOff = 2157
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3260; //curOff = 2190
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3260; //curOff = 2223
				return 1602493990;
				Jump @3260; //curOff = 2234
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
				Jump @3260; //curOff = 2323
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
				Jump @3260; //curOff = 2370
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
				Jump @3260; //curOff = 2417
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
				Jump @3260; //curOff = 2464
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
				Jump @3260; //curOff = 2511
				return 1762656414;
				Jump @3260; //curOff = 2522
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
				Jump @3260; //curOff = 2583
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
				Jump @3260; //curOff = 2644
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
				Jump @3260; //curOff = 2691
				return -2018341642;
				Jump @3260; //curOff = 2702
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3260; //curOff = 2735
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3260; //curOff = 2768
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
				Jump @3260; //curOff = 2815
				return -1618254924;
				Jump @3260; //curOff = 2826
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
				Jump @3260; //curOff = 2873
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
				Jump @3260; //curOff = 2920
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3260; //curOff = 2953
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
				Jump @3260; //curOff = 3000
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
				Jump @3260; //curOff = 3047
				return -2137572125;
				Jump @3260; //curOff = 3058
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
				Jump @3260; //curOff = 3105
				return -774894224;
				Jump @3260; //curOff = 3116
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
				Jump @3260; //curOff = 3163
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
				Jump @3260; //curOff = 3224
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
			}
			else if (iParam0 >= 75 && iParam0 <= 118)
			{
				switch (iParam0)
				{
					case 75:
						return -346537584;
					case 76:
						switch (iParam1)
						{
							case 0:
								return -550739017;
							default:
								break;
						}
						return -1829585536;
					case 77:
						switch (iParam1)
						{
							case 0:
								return -609376390;
							case 1:
								return -311112952;
							case 2:
								return -682765316;
							case 3:
								return -2127446978;
							default:
								break;
						}
						return 1338777472;
					case 78:
						switch (iParam1)
						{
							case 0:
								return 581221752;
							case 1:
								return 20416722;
							default:
								break;
						}
						return 1293249792;
					case 79:
						switch (iParam1)
						{
							case 0:
								return -1786500412;
							default:
								break;
						}
						return 235904384;
					case 80:
						return -334565466;
					case 81:
						switch (iParam1)
						{
							case 0:
								return 31964051;
							case 1:
								return 245875704;
							default:
								break;
						}
						return 1046770304;
					case 82:
						switch (iParam1)
						{
							case 0:
								return 48921735;
							case 1:
								return 1062398415;
							default:
								break;
						}
						return -2047991552;
					case 83:
						return -1752276745;
					case 84:
						switch (iParam1)
						{
							case 0:
								return 418356694;
							case 1:
								return -1090928636;
							default:
								break;
						}
						return -1021157760;
					case 85:
						switch (iParam1)
						{
							case 0:
								return 278246928;
							case 1:
								return 1092461253;
							default:
								break;
						}
						return 900051136;
					case 86:
						return 1417655457;
					case 87:
						switch (iParam1)
						{
							case 0:
								return 188835226;
							case 1:
								return 220332139;
							default:
								break;
						}
						return 1359760512;
					case 88:
						switch (iParam1)
						{
							case 0:
								return -1638860831;
							case 1:
								return -812497188;
							default:
								break;
						}
						return 1616003072;
					case 89:
						return -69702063;
					case 90:
						switch (iParam1)
						{
							case 0:
								return -479871262;
							default:
								break;
						}
						return -1670654720;
					case 91:
						return -331264815;
					case 92:
						return -1217205534;
					case 93:
						switch (iParam1)
						{
							case 0:
								return -1662432355;
							case 1:
								return -368935814;
							default:
								break;
						}
						return -1021345856;
					case 94:
						switch (iParam1)
						{
							case 0:
								return -735413614;
							case 1:
								return -972169639;
							case 2:
								return -673250821;
							case 3:
								return 161473916;
							default:
								break;
						}
						return -1329933952;
					case 95:
						switch (iParam1)
						{
							case 0:
								return -1645068573;
							default:
								break;
						}
						return 1248360320;
					case 96:
						switch (iParam1)
						{
							case 0:
								return 884363685;
							case 1:
								return 368673822;
							case 2:
								return 578628915;
							case 3:
								return 689154642;
							case 4:
								return 471198511;
							case 5:
								return 967199063;
							case 6:
								return -38616787;
							case 7:
								return -1294637989;
							default:
								break;
						}
						return -84111088;
					case 97:
						switch (iParam1)
						{
							case 0:
								return -1639179308;
							case 1:
								return -436408638;
							default:
								break;
						}
						return 1995021696;
					case 98:
						switch (iParam1)
						{
							case 0:
								return 1464772696;
							case 1:
								return 6449957;
							default:
								break;
						}
						return -1853564800;
					case 99:
						switch (iParam1)
						{
							case 0:
								return 803309489;
							case 1:
								return -31873580;
							case 2:
								return -1922690045;
							case 3:
								return 515105064;
							default:
								break;
						}
						return -1759022208;
					case 100:
						return -307424281;
					case 101:
						switch (iParam1)
						{
							case 0:
								return 1006898715;
							case 1:
								return 1573993134;
							default:
								break;
						}
						return -1402545280;
					case 102:
						return -1979014350;
					case 103:
						return 2096137174;
					case 104:
						switch (iParam1)
						{
							case 0:
								return -861435303;
							case 1:
								return 2076430727;
							case 2:
								return -1266577036;
							default:
								break;
						}
						return 493009408;
					case 105:
						return 1152564685;
					case 106:
						switch (iParam1)
						{
							case 0:
								return 2036836823;
							case 1:
								return 2046057828;
							case 2:
								return -526712830;
							case 3:
								return -242317110;
							case 4:
								return 1729814355;
							case 5:
								return 1868875718;
							case 6:
								return -785635151;
							case 7:
								return 1586170447;
							case 8:
								return -291036947;
							default:
								break;
						}
						return -832026176;
					case 107:
						switch (iParam1)
						{
							case 0:
								return -981210833;
							case 1:
								return 875440489;
							default:
								break;
						}
						return -508430848;
					case 108:
						switch (iParam1)
						{
							case 0:
								return 1491780341;
							case 1:
								return 1920169067;
							default:
								break;
						}
						return -227796128;
					case 109:
						switch (iParam1)
						{
							case 0:
								return -1255044808;
							case 1:
								return -1012076841;
							default:
								break;
						}
						return -871899648;
					case 110:
						switch (iParam1)
						{
							case 0:
								return 792345848;
							case 1:
								return 121209110;
							default:
								break;
						}
						return 14115413;
					case 111:
						switch (iParam1)
						{
							case 0:
								return -1152301466;
							case 1:
								return -1113682855;
							case 2:
								return -1801389871;
							case 3:
								return -180725957;
							case 4:
								return 1811628790;
							default:
								break;
						}
						return 2016864128;
					case 112:
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
					case 113:
						return 1487351956;
					case 114:
						switch (iParam1)
						{
							case 0:
								return 1955914312;
							case 1:
								return 1685893021;
							case 2:
								return -711771194;
							case 3:
								return 146337879;
							default:
								break;
						}
						return 205846784;
					case 115:
						switch (iParam1)
						{
							case 0:
								return -775876869;
							case 1:
								return -39469638;
							default:
								break;
						}
						return 1483441280;
					case 116:
						switch (iParam1)
						{
							case 0:
								return 2113065035;
							case 1:
								return -2101774133;
							default:
								break;
						}
						return -815072896;
					case 117:
						return -689015496;
					case 118:
						switch (iParam1)
						{
							case 0:
								return -18903616;
							case 1:
								return -1607469655;
							default:
								break;
						}
						return -640409664;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}
void func_165(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (__LIB_0__::func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_327()
{
	if (bLocal_422)
	{
		bLocal_422 = false;
		return;
	}
	switch (iLocal_446)
	{
		case 0:
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_450[0], sLocal_14, "IDLE_02", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 65536, -1f);
			break;
		case 1:
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_450[0], sLocal_14, "IDLE_03", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 65536, -1f);
			break;
		case 2:
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_450[0], sLocal_14, "IDLE_04", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 65536, -1f);
			break;
	}
}

bool func_328()
{
	return (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "IDLE_01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "IDLE_02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "IDLE_03", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_450[0], sLocal_14, "IDLE_04", 1));
	return false;
}

int func_344(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_344(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

