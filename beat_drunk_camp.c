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
	var uLocal_14 = 0;
	struct<193> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_208 = 0;
	int iLocal_209 = 0;
	struct<36> Local_210 = { 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1080033280, 0, 0, 1 } ;
	int iLocal_246 = 0;
	bool bLocal_247 = false;
	bool bLocal_248 = false;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	char* sLocal_252 = NULL;
	char* sLocal_253[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_300[26] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	int iLocal_329[1] = { 0 };
	struct<8> Local_331 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 1065353216;
	struct<2> Local_342 = { 0, 1065353216 } ;
	var uLocal_344 = 0;
	var uLocal_345 = 1065353216;
	struct<21> Local_346[1];
	struct<17> Local_368[2];
	int iLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = -1;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 2;
	var uLocal_434 = 1;
	var uLocal_435 = 1;
	var uLocal_436 = 1;
	var uLocal_437 = 0;
	var uLocal_438 = 1;
	var uLocal_439 = 2;
	var uLocal_440 = 2;
	var uLocal_441 = 3;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 3;
	var uLocal_445 = 1;
	var uLocal_446 = 3;
	var uLocal_447 = 3;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	struct<22> Local_450 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_472 = 3;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	float fLocal_501 = 0f;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	bool bLocal_505 = false;
	bool bLocal_506 = false;
	int iLocal_507 = 0;
	bool bLocal_508 = false;
	bool bLocal_509 = false;
	bool bLocal_510 = false;
	bool bLocal_511 = false;
	bool bLocal_512 = false;
	bool bLocal_513 = false;
	bool bLocal_514 = false;
	bool bLocal_515 = false;
	bool bLocal_516 = false;
	bool bLocal_517 = false;
	bool bLocal_518 = false;
	bool bLocal_519 = false;
	bool bLocal_520 = false;
	bool bLocal_521 = false;
	bool bLocal_522 = false;
	bool bLocal_523 = false;
	bool bLocal_524 = false;
	bool bLocal_525 = false;
	var uLocal_526[1] = { 0 };
	struct<32> Local_528[1];
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	bool bLocal_569 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_249 = joaat("PROP_PLAYER_RE_DRUNK_CAMP_SIT");
	iLocal_251 = joaat("PG_DRUNKCAMP01X");
	sLocal_252 = "PROP_PLAYER_RE_DRUNK_CAMP_SIT";
	sLocal_327 = "script_re@drunk_camp";
	sLocal_328 = "DIALOGUE_PLEASE_MISTER_DRUNK";
	iLocal_492 = 26;
	iLocal_493 = 30;
	fLocal_501 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_525 = true;
	}
	if (!bLocal_525)
	{
		Local_15.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_15.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_420(&Local_15, 1);
		func_4(&Local_528);
		func_5(&Local_528);
		__LIB_4__::func_402(&uLocal_425);
		func_7();
		func_8();
		__LIB_3__::func_302(&(Local_15.f_5), 0);
		__LIB_2__::func_104(&(Local_15.f_5), 1);
		__LIB_2__::func_105(&(Local_15.f_5), 1);
		__LIB_2__::func_50(&(Local_15.f_5), 1);
		__LIB_2__::func_51(&(Local_15.f_5), 1);
		__LIB_2__::func_634(&(Local_15.f_5), 1);
		__LIB_3__::func_333(&(Local_15.f_5), 1);
		__LIB_2__::func_111(&(Local_15.f_5), 1);
		__LIB_2__::func_182(&(Local_15.f_5), 0);
		__LIB_2__::func_180(&(Local_15.f_5), 1);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_525, 2982, 0);
		if (bLocal_525)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_490)
			{
				case 0:
					OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_15.f_51, 10f);
					if (func_21())
					{
						iLocal_490 = 1;
					}
					break;
				case 1:
					OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_15.f_51, 10f);
					switch (iLocal_491)
					{
						case 0:
							if (__LIB_3__::func_669(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
							{
								func_23(&Local_15, &iLocal_567, &(Local_15.f_51.f_4));
								__LIB_3__::func_455(&Local_15, iLocal_567, 4120);
								func_26();
								__LIB_1__::func_266(&iLocal_475, Local_15.f_51, 0f, 0f, 0f, 15f, 15f, 15f);
								POPULATION::_0xB56D41A694E42E86(iLocal_475, 2230271, 16384, 0, -1, -1, 2);
								POPULATION::_0x18262CAFEBB5FBE1(iLocal_475, 4288, 16384, 0, -1, -1, 2);
								iLocal_566 = VOLUME::_CREATE_VOLUME_CYLINDER(Local_15.f_51, 0f, 0f, 0f, 6f, 6f, 5f);
								__LIB_3__::func_710(iLocal_566, 1);
								if (iLocal_567 == 1)
								{
									iVar0 = __LIB_0__::func_120(882);
									if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_963(882)) && !ENTITY::IS_ENTITY_ON_SCREEN(__LIB_2__::func_963(882)))
										{
											__LIB_3__::func_229(882);
											PERSCHAR::_0xFCC6DB8DBE709BC8(iVar0);
										}
									}
								}
								iLocal_250 = PROPSET::_CREATE_PROPSET(iLocal_251, Local_15.f_51, 1, Local_15.f_51.f_3, 1200f, false, true);
								iLocal_250 = iLocal_250;
								iLocal_491 = 1;
							}
							else if (Local_15.f_160)
							{
								func_19();
							}
							break;
						case 1:
							if (PROPSET::_IS_PROPSET_VALID(iLocal_250) && func_32())
							{
								if (func_33())
								{
									func_34();
									OBJECT::_0xFFB99FFD17F65889(iLocal_246, 0f);
									func_35();
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_329[0]))
									{
										PED::SET_PED_CONFIG_FLAG(iLocal_329[0], 448, true);
									}
									ANIMSCENE::START_ANIM_SCENE(Local_331);
									iLocal_490 = 4;
								}
							}
							else if (!PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_DRUNKCAMP01X")))
							{
								PROPSET::_REQUEST_PROPSET_2(joaat("PG_DRUNKCAMP01X"));
							}
							else if (!PROPSET::_DOES_PROPSET_EXIST(iLocal_250))
							{
								iLocal_250 = PROPSET::_CREATE_PROPSET(iLocal_251, Local_15.f_51, 1, Local_15.f_51.f_3, 1200f, false, true);
							}
							break;
					}
					break;
				case 4:
					func_36(&uLocal_495, ENTITY::GET_ENTITY_COORDS(iLocal_480, true, false), 4, -1082130432 /* Float: -1f */);
					if (!__LIB_3__::func_645(&Local_15, &iLocal_329, iLocal_209, 0, 0, 0, 1, 0))
					{
						func_19();
					}
					func_38();
					if (!Local_15.f_46 && iLocal_488 < 7)
					{
						if (!func_39())
						{
							bVar1 = false;
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_246) && !bLocal_524)
							{
								bVar1 = true;
								iLocal_403 = 2048;
							}
							if (PED::IS_PED_RAGDOLL(iLocal_329[0]))
							{
								if (!PED::GET_PED_CONFIG_FLAG(iLocal_329[0], 11, true))
								{
									__LIB_2__::func_603(&(iLocal_329[0]), &(Local_346[0 /*21*/]), &Local_368, 1, 1);
									PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_329[0], 3, 2, 1);
									PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_329[0], 4, 2, 1);
									func_41(iLocal_329[0], Global_35, sLocal_253[29], 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1, 0, 1);
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_329[0]);
									Local_15.f_46 = 1;
									iLocal_488 = 5;
								}
							}
							else if (__LIB_3__::func_453(iLocal_329[0], 0, &(Local_15.f_5), &iLocal_403, 0, 0) || bVar1)
							{
								bVar2 = false;
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_329[0]);
								if (iLocal_403 == 2048)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_329[0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_329[0], Global_35, 1, 1))
									{
										if (!__LIB_0__::func_75(&uLocal_407))
										{
											__LIB_1__::func_148(&uLocal_407);
											bVar2 = true;
										}
										else if (!__LIB_1__::func_285(&uLocal_407, 3f))
										{
											bVar2 = true;
										}
									}
								}
								if (!bVar2 || iLocal_403 != 2048)
								{
									if (!bLocal_521 && iLocal_403 == 2048)
									{
										__LIB_2__::func_478(iLocal_329[0], Global_35, "CUT_THAT_OUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										__LIB_1__::func_148(&uLocal_419);
										bLocal_521 = true;
									}
									else if ((__LIB_1__::func_285(&uLocal_419, 6f) && __LIB_2__::func_227(0, 1, iLocal_329[0], 1)) || iLocal_403 != 2048)
									{
										func_48(bVar1);
										__LIB_3__::func_953(&iLocal_568, 1);
										__LIB_2__::func_603(&(iLocal_329[0]), &(Local_346[0 /*21*/]), &Local_368, 1, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_329[0], 3, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_329[0], 4, 2, 1);
										Local_15.f_46 = 1;
										iLocal_488 = 5;
									}
								}
							}
							else if (__LIB_0__::func_75(&uLocal_407) && __LIB_0__::func_232(Global_35, iLocal_329[0], 0) > 1f)
							{
								__LIB_0__::func_37(&uLocal_407);
							}
						}
					}
					if (func_52())
					{
						Local_15.f_50 = 1;
						func_19();
					}
					if (__LIB_3__::func_365(&Local_15, &iLocal_329, 0, iLocal_488 < 7, 1, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_15.f_50 = 1;
						bLocal_525 = true;
					}
					break;
			}
			BUILTIN::WAIT(Local_15.f_158);
		}
	}
}

void func_4(var uParam0)
{
	(uParam0[0 /*32*/])->f_6 = { 1.7f, -5.01f, 0.37f };
	(uParam0[0 /*32*/])->f_9 = 100.2543f;
}

void func_5(var uParam0)
{
	StringCopy(&((uParam0[0 /*32*/])->f_23), "DRUNK_TRAVELER_2", 64);
	sLocal_253[0] = "RE_DC_MTN_V1_TOHELL";
	sLocal_253[1] = "RE_DC_MTN_V1_TOHELL_B";
	sLocal_253[2] = "RE_DC_MTN_V1_ISHITICRY";
	sLocal_253[3] = "RE_DC_MTN_V1_ISHITICRY_B";
	sLocal_253[4] = "RE_DC_MTN_V1_FORGETWET";
	sLocal_253[5] = "RE_DC_MTN_V1_FORGETWET_B";
	sLocal_253[6] = "RE_DC_MTN_V1_BLAMEMOTHER";
	sLocal_253[7] = "RE_DC_MTN_V1_BLAMEMOTHER_B";
	sLocal_253[8] = "RE_DC_MTN_V1_JOINME";
	sLocal_253[9] = "RE_DC_MTN_V1_LENDEAR";
	sLocal_253[10] = "RE_DC_MTN_V1_BONEDRY";
	sLocal_253[11] = "RE_DC_MTN_V1_SINSICARRY";
	sLocal_253[12] = "RE_DC_MTN_V1_FIREWATER";
	sLocal_253[18] = "RE_DC_MTN_V1_JOINME_B";
	sLocal_253[19] = "RE_DC_MTN_V1_JOINME_C";
	sLocal_253[14] = "RE_DC_MTN_V1_FEWDROPS";
	sLocal_253[15] = "RE_DC_MTN_V1_ALLINEED";
	sLocal_253[16] = "RE_DC_MTN_V1_JUSTASIP";
	sLocal_253[13] = "RE_DC_MTN_V1_SOMEWHISKEY";
	sLocal_253[17] = "RE_DC_MTN_V1_POURHEART";
	sLocal_253[20] = "RE_DC_MTN_V1_DEVILSBREW";
	sLocal_253[21] = "RE_DC_MTN_V1_FORTRIGGS";
	sLocal_253[22] = "RE_DC_MTN_V1_WEKILLED";
	sLocal_253[23] = "RE_DC_MTN_V1_PAIDWELL";
	sLocal_253[24] = "RE_DC_MTN_V1_PAIDWELL_B";
	sLocal_253[25] = "RE_DC_MTN_V1_SLEEPBETTER";
	sLocal_253[26] = "RE_DC_MTN_V1_LEAVE";
	sLocal_253[27] = "RE_DC_MTN_V1_PASSOUT";
	sLocal_253[28] = "RE_DC_MTN_V1_SLEEP";
	sLocal_253[29] = "RE_DC_MTN_V1_AGGRO";
	sLocal_253[30] = "RE_DC_MTN_V1_SORRY";
	sLocal_253[31] = "RE_DC_MTN_V1_NOTIME";
	sLocal_253[32] = "RE_DC_MTN_V1_ONMYWAY";
	sLocal_253[33] = "RE_DC_ALL_V1_HAVE_HEARD";
	sLocal_253[34] = "RE_DC_ALL_V1_NOT_HEARD";
	sLocal_253[35] = "RE_DC_ALL_V1_PL_SYMPATHIZE";
	sLocal_253[40] = "RE_DC_ALL_V1_INIT_GREET";
	sLocal_253[41] = "RE_DC_ALL_V1_INIT_ANTAGONIZE";
	sLocal_253[36] = "RE_DC_ALL_V1_SIT_GREET";
	sLocal_253[37] = "RE_DC_ALL_V1_SIT_ANTAGONIZE";
	sLocal_253[38] = "RE_DC_ALL_V1_SIT_ANTAGONIZE_2";
	sLocal_253[39] = "RE_DC_ALL_V1_BEG_ANTAGONIZE_2";
	sLocal_253[42] = "RE_DC_ALL_V1_END_ENCOURAGE";
	sLocal_253[43] = "RE_DC_ALL_V1_END_ANTAGONIZE";
	sLocal_253[44] = "RE_DC_ALL_V1_BEG_ANTAGONIZE_1";
	sLocal_253[45] = "RE_DC_ALL_V1_BEG_ANTAGONIZE_2";
}

void func_7()
{
	Local_450 = { 0f, 0f, 0.5f };
	Local_450.f_3 = Global_35;
	Local_450.f_8 = 4;
	Local_450.f_19 = 4;
	Local_450.f_21 = 4;
	Local_450.f_17 = 4;
	Local_450.f_18 = 4;
	Local_450.f_7 = 0;
	__LIB_1__::func_683(&(Local_450.f_5), 1);
}

void func_8()
{
	sLocal_300[0] = "PIDLE";
	sLocal_300[1] = "PSING";
	sLocal_300[2] = "PCFL";
	sLocal_300[3] = "PCFR";
	sLocal_300[4] = "PCFN";
	sLocal_300[5] = "PCNL";
	sLocal_300[6] = "PCNBL";
	sLocal_300[7] = "PCNR";
	sLocal_300[8] = "PCNBR";
	sLocal_300[9] = "PCNN";
	sLocal_300[10] = "PDROP";
	sLocal_300[11] = "PSTORY";
	sLocal_300[12] = "PBL_STORY_TRANS_A";
	sLocal_300[13] = "PBL_STORY_TRANS_B";
	sLocal_300[14] = "PBL_STORY_TRANS_C";
	sLocal_300[15] = "PBREAK";
	sLocal_300[16] = "PBL_AGGRO_BRKOUT_02";
	sLocal_300[17] = "PBL_AGGRO_BRKOUT_02_NB";
	sLocal_300[18] = "PBL_BRKOUT_F";
	sLocal_300[19] = "PBL_BRKOUT_L";
	sLocal_300[20] = "PBL_BRKOUT_B";
	sLocal_300[21] = "PBL_BRKOUT_F_NB";
	sLocal_300[22] = "PBL_BRKOUT_L_NB";
	sLocal_300[23] = "PBL_BRKOUT_B_NB";
	sLocal_300[24] = "PQBREAK";
	sLocal_300[25] = "PQBREAKNB";
	Local_331.f_4 = "script@beat@wilderness@drunkCamp@mainScene";
	Local_331 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_331.f_4, 0, sLocal_300[0], false, true);
	iLocal_339 = 0;
	ANIMSCENE::LOAD_ANIM_SCENE(Local_331);
	func_57(&uLocal_340, 0.3f, 1f);
	func_57(&Local_342, 0.75f, 1f);
	func_57(&uLocal_344, 0.9f, 1f);
}

void func_19()
{
	int iVar0;
	if (Local_15.f_48 && !Local_15.f_44)
	{
		Local_15.f_45 = iLocal_507;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_475))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_475);
		POPULATION::_0xA1CFB35069D23C23(iLocal_475);
		VOLUME::_DELETE_VOLUME(iLocal_475);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	__LIB_0__::func_172(iLocal_476);
	__LIB_0__::func_172(iLocal_477);
	__LIB_0__::func_172(iLocal_478);
	if (iLocal_567 == 1)
	{
		iVar0 = __LIB_0__::func_120(882);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
	}
	__LIB_3__::func_380(Local_331);
	__LIB_3__::func_711(&uLocal_495, 106);
	__LIB_3__::func_953(&iLocal_568, 1);
	__LIB_0__::func_172(iLocal_565);
	__LIB_0__::func_172(iLocal_566);
	if (iLocal_486 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_486, false);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_250))
	{
		if (bLocal_525 && !Local_15.f_48)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_329[0]))
			{
				__LIB_2__::func_56(iLocal_329[0], 1, 1);
				PED::_0x39A2FC5AF55A52B1(iLocal_329[0], -1);
				PED::_0x06D26A96CA1BCA75(iLocal_329[0], 10, 0f, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_329[0], Global_35, -1f, -1, 384, 1f, 0);
			}
			PROPSET::_DELETE_PROPSET(iLocal_250, true, true);
		}
		else
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_250);
		}
	}
	__LIB_2__::func_788(&(iLocal_329[0]), 1, 1, 1);
	__LIB_4__::func_152(&Local_15, &iLocal_329, &uLocal_526, iLocal_209, iLocal_567, Local_15.f_51.f_4, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_21()
{
	switch (iLocal_487)
	{
		case 0:
			if (func_73() && func_74(&Local_15))
			{
				func_75(&Local_528);
				__LIB_3__::func_284(&Local_528);
				func_77();
				func_78();
				STREAMING::REQUEST_ANIM_DICT(sLocal_327);
				PROPSET::_REQUEST_PROPSET(iLocal_251);
				if (!__LIB_2__::func_312(iLocal_249, 15, 0, 0))
				{
					func_19();
				}
				func_80();
				STREAMING::REQUEST_MODEL(joaat("P_STOOLFOLDING01X"), false);
				iLocal_487 = 1;
			}
			break;
		case 1:
			if (!func_81())
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_251))
			{
				return false;
			}
			if (!func_82())
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_528))
			{
				return false;
			}
			if (!__LIB_2__::func_313(iLocal_249))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_STOOLFOLDING01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_327))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_23(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 2;
			*uParam2 = 0;
			break;
		case 3:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 4;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 4;
			*uParam2 = 2;
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
			*iParam1 = 9;
			*uParam2 = 4;
			break;
		case 11:
			*iParam1 = 9;
			*uParam2 = 5;
			break;
		case 12:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 13:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 14:
			*iParam1 = 10;
			*uParam2 = 2;
			break;
		case 15:
			*iParam1 = 10;
			*uParam2 = 3;
			break;
		case 16:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 17:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 18:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

Vector3 func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 201.6f;
				case 1:
					return 0f, 0f, 110.88f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					return 0f, 0f, -69.12f;
				case 4:
					return 0f, 0f, 57.6f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 3:
					return 0f, 0f, 181.44f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -56.88f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_26()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_329[iVar0] = __LIB_3__::func_422(Local_528[iVar0 /*32*/].f_1, &(Local_528[iVar0 /*32*/]), Local_15.f_51 + Local_528[iVar0 /*32*/].f_6, (Local_15.f_51.f_3 + Local_528[iVar0 /*32*/].f_9), 1, 0, 1, 0, 1);
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_329[0]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_329[0], true, true);
		__LIB_2__::func_190(iLocal_329[0], __LIB_4__::func_211(joaat("REWARD_BEAT_SMALL"), 0, -1));
		PED::SET_PED_CONFIG_FLAG(iLocal_329[0], 138, true);
		PED::_0x06D26A96CA1BCA75(iLocal_329[0], 10, 1f, 0);
		PED::_0xA1EB5D029E0191D3(iLocal_329[0], 10, 0f);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_329[0], 1024, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_329[0], 318, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_329[0], 169, true);
		__LIB_2__::func_463(iLocal_329[0], joaat("PROVISION_NATIVE_AMERICAN_RING"), 1, 0);
	}
	__LIB_0__::func_11(iLocal_329[0], Local_528[0 /*32*/]);
	__LIB_3__::func_712(iLocal_329[0], &(Local_15.f_121));
	PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_329[0]);
}

bool func_32()
{
	if (!func_103(&iLocal_246, joaat("P_CHAIRFOLDING02X")))
	{
		return false;
	}
	if (!func_103(&iLocal_479, joaat("P_STOOLFOLDING01X")))
	{
		return false;
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_479, true);
	}
	if (!func_103(&iLocal_480, joaat("P_CAMPFIRECHAR01X")))
	{
		return false;
	}
	else
	{
		if (!func_36(&uLocal_495, ENTITY::GET_ENTITY_COORDS(iLocal_480, true, false), 4, -1082130432 /* Float: -1f */))
		{
			return false;
		}
		iLocal_476 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 0.4f, 0.4f, 2f);
		PED::_0x7C00CFC48A782DC0(iLocal_476, iLocal_480, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		iLocal_477 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_15.f_51, Local_15.f_51.f_3, 0.6644f, -2.5785f, -0.9983f), 0f, 0f, 0f, 0.4f, 0.4f, 2f);
		iLocal_478 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_15.f_51, Local_15.f_51.f_3, 0.3109f, -2.5056f, -0.99f), 0f, 0f, 0f, 0.4f, 0.4f, 2f);
	}
	return true;
}

bool func_33()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_485))
	{
		iLocal_485 = TASK::_0xD508FA229F1C4900(iLocal_479, 0f, 0f, 0f, iLocal_249, 3f);
		TASK::SET_SCENARIO_TYPE_ENABLED(sLocal_252, false);
		return false;
	}
	return true;
}

void func_34()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_331, "PED_DRUNK", iLocal_329[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_331, "OBJ_CHAIR", iLocal_246, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_331, ENTITY::GET_ENTITY_COORDS(iLocal_246, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_246), 2);
}

void func_35()
{
	__LIB_6__::func_694(&uLocal_561, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_15.f_51, Local_15.f_51.f_3, -1.318f, 2.729f, 0f), 2.36f, 1, -1, iLocal_250);
	__LIB_6__::func_694(&uLocal_562, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_15.f_51, Local_15.f_51.f_3, -0.634f, -2.026f, 0f), 1.5f, 1, -1, iLocal_250);
	__LIB_6__::func_694(&uLocal_563, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_15.f_51, Local_15.f_51.f_3, -1.621f, 2.538f, 0f), 2.36f, 2, 258, iLocal_250);
	__LIB_6__::func_694(&uLocal_564, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_15.f_51, Local_15.f_51.f_3, -0.228f, -2.034f, 0f), 1.5f, 2, 258, iLocal_250);
}

bool func_36(var uParam0, vector3 vParam1, int iParam4, var uParam5)
{
	char* sVar0;
	if (__LIB_0__::func_27(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (__LIB_0__::func_27(uParam0->f_1, 16))
			{
				__LIB_4__::func_114(uParam0, vParam1, iParam4, uParam5);
			}
			else
			{
				__LIB_4__::func_245(uParam0, vParam1, iParam4, uParam5);
			}
		}
		return true;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (!__LIB_0__::func_27(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = __LIB_3__::func_965(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = __LIB_3__::func_965(__LIB_3__::func_713(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = __LIB_3__::func_714(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, __LIB_3__::func_715(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (__LIB_1__::func_874(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					__LIB_1__::func_336(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				__LIB_1__::func_336(&(uParam0->f_1), 1);
				return true;
			}
		}
	}
	return false;
}

void func_38()
{
	int iVar0;
	vector3 vVar1;
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (bLocal_506)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!__LIB_0__::func_394(Global_35, iVar0, 0))
			{
				TASK::_TASK_FLEE_FROM_PED(iVar0, iLocal_329[0], 0f, 0f, 0f, 8f, -1, 0, 1f, 0);
				bLocal_506 = false;
			}
		}
		return;
	}
	if (__LIB_2__::func_1(iLocal_329[0], 0, 1) && !func_39())
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && __LIB_3__::func_112(Global_35, iLocal_329[0], 1060437492 /* Float: 0.707f */) == 0)
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_329[0], true, false) };
			__LIB_1__::func_694(Global_35, vVar1, 0, 18f, 14f, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
	}
}

bool func_39()
{
	if (((iLocal_339 == 15 && func_126(Local_331, Local_342)) || iLocal_339 == 16) || iLocal_339 == 17)
	{
		return true;
	}
	return false;
}

void func_41(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= fParam4)
	{
		__LIB_2__::func_478(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, 291934926, 1, 0, 0);
		func_130(iParam0, iParam1, &uLocal_425, 5000);
	}
}

void func_48(bool bParam0)
{
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_329[0], -1))
	{
		return;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(Local_331, "SBREAK", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_329[0], "script_re@drunk_camp", "leave_story_early_drunk") > 0.7f)
	{
		return;
	}
	__LIB_2__::func_504(iLocal_329[0], 0);
	func_41(iLocal_329[0], Global_35, sLocal_253[29], 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1, 0, 1);
	if (PED::_IS_PED_LASSOED(iLocal_329[0]) || PED::_IS_PED_HOGTIED(iLocal_329[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_329[0], false);
		iLocal_488 = 6;
		bLocal_569 = true;
	}
	else
	{
		if (bParam0)
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_331, "OBJ_BOTTLE", false)) && !ENTITY::IS_ENTITY_ATTACHED(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_331, "2ND_BOTTLE", false)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[25], true);
			}
			else
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[24], true);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_331, "OBJ_BOTTLE", false)) && !ENTITY::IS_ENTITY_ATTACHED(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_331, "2ND_BOTTLE", false)))
			{
				switch (__LIB_3__::func_112(iLocal_329[0], Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 3:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[22], true);
						break;
					case 2:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[21], true);
						break;
					case 0:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[21], true);
						break;
					case 1:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[23], true);
						break;
				}
			}
			else
			{
				switch (__LIB_3__::func_112(iLocal_329[0], Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 3:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[19], true);
						break;
					case 2:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[18], true);
						break;
					case 0:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[18], true);
						break;
					case 1:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[20], true);
						break;
				}
			}
			TASK::_0x2E1D6D87346BB7D2(iLocal_329[0], Global_35, 0, 0);
		}
		__LIB_2__::func_603(&(iLocal_329[0]), &(Local_346[0 /*21*/]), &Local_368, 1, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_329[0], 3, 2, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_329[0], 4, 2, 1);
		iLocal_488 = 5;
		iLocal_492 = 29;
	}
}

bool func_52()
{
	bool bVar0;
	func_171();
	if (iLocal_488 < 7)
	{
		func_172();
		func_173();
		func_174();
	}
	if (!bLocal_523 && PED::GET_PED_CONFIG_FLAG(iLocal_329[0], 11, false))
	{
		AUDIO::_0xD47D47EFBF103FB8(iLocal_329[0], 6);
		bLocal_523 = true;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 364, true))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
		}
	}
	else if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_485) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_329[0]) && iLocal_488 < 5) && __LIB_0__::func_94(Global_35, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_485, true), 1) > 1f)
	{
		if (!__LIB_3__::func_587(iLocal_568, 1, 1))
		{
			iLocal_565 = VOLUME::_CREATE_VOLUME_CYLINDER(Local_15.f_51, 0f, 0f, 0f, 5f, 5f, 5f);
			iLocal_568 = __LIB_3__::func_721(iLocal_329[0], iLocal_565, 132);
		}
	}
	else
	{
		__LIB_3__::func_953(&iLocal_568, 1);
	}
	if (!bLocal_518)
	{
		bLocal_518 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_329[0], "script_re@drunk_camp", "dialogue_the_sins_drunk", 1);
	}
	switch (iLocal_488)
	{
		case 0:
			if (func_178())
			{
				func_179();
				PED::_0xAE6004120C18DF97(iLocal_329[0], 0, 0);
				iLocal_488 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, Local_15.f_51, 0) < 80f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[1], true);
				func_180(1);
				iLocal_488 = 2;
			}
			break;
		case 2:
			if (func_182(&(iLocal_329[0]), &(Local_346[0 /*21*/]), 20f, &Local_368, &(Local_15.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 128), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0) != -1)
			{
				__LIB_2__::func_526(&Local_368, 0, 0);
				bLocal_508 = true;
				bLocal_509 = true;
			}
			if (func_184())
			{
				__LIB_2__::func_526(&Local_368, 0, 0);
				iLocal_488 = 3;
			}
			break;
		case 3:
			func_185();
			func_186();
			func_187();
			if (func_188())
			{
				__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
				iLocal_488 = 4;
			}
			break;
		case 4:
			func_185();
			func_186();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], -771635453))
			{
				__LIB_2__::func_478(Global_35, iLocal_329[0], sLocal_253[35], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (!bLocal_510)
			{
				if (iLocal_489 == 1 && ANIMSCENE::_0x8D81E7824B7753F7(Local_331, "SIDLE", 1))
				{
					__LIB_1__::func_148(&uLocal_422);
					__LIB_1__::func_991(iLocal_329[0], joaat("HONOR_EVENT_AMBIENT_KILL"));
					func_191();
					bLocal_510 = true;
				}
			}
			if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_1__::func_313(&uLocal_422, 6f))
			{
				bLocal_524 = true;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_331, "FLAG_LOOP", true, false);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_331, "SBREAK", 1))
			{
				__LIB_2__::func_526(&Local_368, 0, 0);
			}
			if (bLocal_520 && ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_331, "FLAG_LOOP") == 1)
			{
				if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_331, "SIDLE", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_331, "FLAG_LOOP", false, false);
				}
			}
			if (__LIB_3__::func_138(Global_35, iLocal_249) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				bVar0 = true;
				if ((ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_331, "FLAG_LOOP") == 0 && !bLocal_520) && __LIB_2__::func_227(0, 1, iLocal_329[0], 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_331, "FLAG_LOOP", true, false);
					__LIB_2__::func_526(&Local_368, 0, 0);
					bLocal_520 = true;
				}
				if (iLocal_489 == 0)
				{
					if (bLocal_515)
					{
						if (!bLocal_516)
						{
							func_194();
							bLocal_516 = true;
						}
					}
				}
			}
			else if (bLocal_515)
			{
				if (bLocal_516)
				{
					__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
					bLocal_516 = false;
				}
			}
			if (func_195(bVar0))
			{
				iLocal_488 = 6;
			}
			break;
		case 5:
			func_185();
			if (func_196())
			{
				iLocal_488 = 6;
			}
			break;
		case 6:
			__LIB_1__::func_748(&(Local_15.f_162), 1, 1);
			if (bLocal_569)
			{
				return true;
			}
			if (!Local_15.f_46)
			{
				func_185();
				func_186();
			}
			if (func_198())
			{
				__LIB_3__::func_462(&Local_368, 1);
				__LIB_2__::func_451(&(Local_346[0 /*21*/]), 0);
				iLocal_488 = 7;
			}
			break;
		case 7:
			if (func_201())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_57(var uParam0, float fParam1, float fParam2)
{
	*uParam0 = fParam1;
	uParam0->f_1 = fParam2;
}

int func_73()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_331, true, false))
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_169(uParam0->f_3);
	iVar1 = __LIB_1__::func_149(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_75(var uParam0)
{
	(uParam0[0 /*32*/])->f_1 = joaat("RE_DRUNKCAMP_MALES_01");
	switch (__LIB_1__::func_898())
	{
		case 1:
		case 6:
		case 7:
		case 12:
			(uParam0[0 /*32*/])->f_3 = -1845953577;
			break;
		case 4:
		case 9:
			(uParam0[0 /*32*/])->f_3 = 1153589631;
			break;
		case 0:
		case 2:
		case 11:
			(uParam0[0 /*32*/])->f_3 = -396744528;
			break;
		case 3:
		case 10:
			(uParam0[0 /*32*/])->f_3 = 863059677;
			break;
	}
	__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
}

void func_77()
{
	STREAMING::REQUEST_MODEL(joaat("P_STOOLFOLDING01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CHAIRFOLDING02X"), false);
}

void func_78()
{
	Local_210.f_4 = joaat("CONSUMABLE_WHISKEY");
	Local_210.f_35 = 0;
	Local_210.f_6 = __LIB_0__::func_776(Local_210.f_4);
}

void func_80()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_331, sLocal_300[iVar0]);
		iVar0++;
	}
}

bool func_81()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (iVar0 != 0 && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_331, sLocal_300[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_82()
{
	return (STREAMING::HAS_MODEL_LOADED(joaat("P_STOOLFOLDING01X")) && STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIRFOLDING02X")));
}

bool func_103(int iParam0, int iParam1)
{
	*iParam0 = func_273(iParam1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	return true;
}

bool func_126(int iParam0, struct<2> Param1)
{
	return (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) >= Param1 && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) <= Param1.f_1);
}

void func_130(int iParam0, int iParam1, var uParam2, int iParam3)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam2);
}

void func_171()
{
	if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_485) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			CAM::_0x1CFB749AD4317BDE();
		}
	}
}

void func_172()
{
	if (iLocal_488 >= 2)
	{
		if (__LIB_0__::func_232(Global_35, iLocal_329[0], 1) > 22500f)
		{
			__LIB_0__::func_325(&(uLocal_526[0]));
		}
	}
}

void func_173()
{
	if (!__LIB_0__::func_27(iLocal_502, 4))
	{
		if (AUDIO::_0x6BFFB7C276866996(iLocal_329[0]) == joaat("RE_DC_MTN_V1_JOINME") && AUDIO::_0x4A98E228A936DBCC(iLocal_329[0]) != joaat("RE_DC_MTN_V1_JOINME"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED(sLocal_252, true);
			func_373();
			__LIB_1__::func_683(&iLocal_502, 4);
			__LIB_1__::func_148(&uLocal_410);
		}
	}
}

void func_174()
{
	if (iLocal_489 == 1)
	{
		return;
	}
	if (!bLocal_515)
	{
		if (AUDIO::_0x6BFFB7C276866996(iLocal_329[0]) == joaat("RE_DC_MTN_V1_SINSICARRY_B") && AUDIO::_0x4A98E228A936DBCC(iLocal_329[0]) != joaat("RE_DC_MTN_V1_SINSICARRY_B"))
		{
			func_194();
			bLocal_515 = true;
			bLocal_516 = true;
		}
	}
}

bool func_178()
{
	__LIB_1__::func_148(&uLocal_0);
	return true;
}

void func_179()
{
	__LIB_3__::func_157(&(Local_368[0 /*17*/]), "RE_INTER_POS", sLocal_253[40], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[41], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_158(&(Local_368[0 /*17*/]), 0);
	__LIB_3__::func_158(&(Local_368[1 /*17*/]), 0);
	__LIB_2__::func_411(&(Local_368[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_368[1 /*17*/]), 1, 0);
	__LIB_1__::func_471(&(Local_368[0 /*17*/]), 8);
	__LIB_1__::func_471(&(Local_368[1 /*17*/]), 8);
}

void func_180(int iParam0)
{
	iLocal_339 = iParam0;
	switch (iLocal_339)
	{
		case 15:
			PED::_0xAE6004120C18DF97(iLocal_329[0], 0, 0);
			break;
		case 16:
		case 17:
			__LIB_2__::func_461(0);
			func_41(iLocal_329[0], Global_35, sLocal_253[iLocal_492], 0, 15f, 0, 0, 0, 1, 0, 1);
			if (MAP::DOES_BLIP_EXIST(uLocal_526[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_526[0]));
			}
			PED::_0xAE6004120C18DF97(iLocal_329[0], 0, 0);
			iLocal_339 = 0;
			break;
		case 0:
			break;
	}
}

int func_182(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_381(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_184()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], 1384389773))
	{
		__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), iLocal_329[0], 1);
	}
	if (!Local_15.f_48)
	{
		if (__LIB_0__::func_94(Global_35, Local_15.f_51, 0) < 150f)
		{
			__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
	}
	if (!bLocal_508)
	{
		PED::SET_PED_RESET_FLAG(iLocal_329[0], 42, true);
		if ((__LIB_0__::func_232(Global_35, iLocal_329[0], 0) < 100f && __LIB_3__::func_112(iLocal_329[0], Global_35, 1060437492 /* Float: 0.707f */) != 1) && __LIB_3__::func_722(iLocal_329[0], &(Local_15.f_5), &iLocal_403, 0))
		{
			bLocal_508 = true;
		}
	}
	if ((bLocal_508 && (bLocal_509 || __LIB_2__::func_227(0, 1, iLocal_329[0], 1))) && __LIB_2__::func_227(0, 1, Global_35, 1))
	{
		func_387();
		iLocal_507 = 1;
		if (__LIB_3__::func_564(16, 0) == 1)
		{
			Local_15.f_44 = 1;
		}
		else
		{
			__LIB_3__::func_461(16, 0, 1);
		}
		return true;
	}
	else
	{
		func_390();
	}
	return false;
}

void func_185()
{
	struct<13> Var0;
	if (iLocal_488 == 6 || Local_15.f_46)
	{
		return;
	}
	func_391();
	if (__LIB_2__::func_1(iLocal_329[0], 0, 1))
	{
		if (!bLocal_517)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_331, "SDROP2", 1) && __LIB_2__::func_227(0, 1, iLocal_329[0], 1))
			{
				func_41(iLocal_329[0], Global_35, "RE_DC_MTN_V1_SINSICARRY_B", 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1, 0, 1);
				TASK::TASK_PLAY_ANIM(iLocal_329[0], sLocal_327, sLocal_328, 8f, -8f, -1, 16, 0f, false, 0, false, 0, false);
				bLocal_517 = true;
				__LIB_1__::func_148(&uLocal_410);
				fLocal_501 = 15f;
				iLocal_504++;
			}
		}
		if (((iLocal_503 <= 3 && iLocal_504 <= 5) && !bLocal_513) && iLocal_489 != 1)
		{
			if ((__LIB_2__::func_227(0, 1, iLocal_329[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && (__LIB_1__::func_285(&uLocal_410, fLocal_501) || __LIB_1__::func_313(&uLocal_413, 0.5f)))
			{
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					iLocal_494 = (12 + iLocal_503);
					if (iLocal_494 == 12)
					{
						fLocal_501 = 8f;
						__LIB_1__::func_148(&uLocal_410);
						iLocal_503++;
						return;
					}
					else if (iLocal_494 == 13)
					{
						fLocal_501 = 20f;
						__LIB_1__::func_148(&uLocal_410);
						iLocal_503++;
						iLocal_494 = 18;
					}
					else if (iLocal_494 == 14)
					{
						fLocal_501 = 23f;
						__LIB_1__::func_148(&uLocal_410);
						iLocal_503++;
						iLocal_494 = 19;
					}
					else if (iLocal_494 == 15)
					{
						__LIB_1__::func_148(&uLocal_410);
						iLocal_503++;
						return;
					}
					func_41(iLocal_329[0], Global_35, sLocal_253[iLocal_494], 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1, 0, 1);
					if (bLocal_512)
					{
						if (!bLocal_522)
						{
							__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[38], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
						}
						else
						{
							__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[39], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
						}
					}
					else if (bLocal_522)
					{
						__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[38], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
					}
				}
				else if (bLocal_517)
				{
					iLocal_494 = (11 + iLocal_504);
					__LIB_1__::func_148(&uLocal_410);
					iLocal_504++;
					fLocal_501 = 20f;
					if (iLocal_494 == 17)
					{
						return;
					}
					func_41(iLocal_329[0], Global_35, sLocal_253[iLocal_494], 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1, 0, 1);
					if (bLocal_247)
					{
						__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[45], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[44], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
					}
				}
				if (!bLocal_248)
				{
					if (!(__LIB_3__::func_138(Global_35, iLocal_249) && !bLocal_517))
					{
						__LIB_2__::func_411(&(Local_368[1 /*17*/]), 1, 0);
						bLocal_248 = true;
					}
				}
				else if (bLocal_247 && !bLocal_511)
				{
					__LIB_2__::func_411(&(Local_368[1 /*17*/]), 1, 0);
					bLocal_511 = true;
				}
			}
		}
		else if (iLocal_489 != 1)
		{
			if ((__LIB_2__::func_227(0, 1, iLocal_329[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && (__LIB_1__::func_313(&uLocal_410, fLocal_501) || __LIB_1__::func_313(&uLocal_416, 0.5f)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[17], true);
				Local_15.f_44 = 1;
				__LIB_0__::func_325(&(uLocal_526[0]));
				func_180(17);
				MISC::_0xE98D55C5983F2509(iLocal_329[0]);
				iLocal_492 = 26;
				iLocal_488 = 6;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], -1111031550))
		{
			func_392();
			iLocal_493 = 32;
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1379952618))
		{
			func_393(joaat("CONSUMABLE_WHISKEY"), 1, 0, -1387038764, 0);
			Var0.f_1 = 10;
			Var0.f_12 = 10;
			Var0 = 1;
			Var0.f_1[0] = joaat("CONSUMABLE_WHISKEY_USED");
			Var0.f_12[0] = 1;
			ENTITY::_0xA88E215CEB0435C0(iLocal_329[0], &Var0, 536905469, 2, 2, 0);
		}
	}
}

void func_186()
{
	if (__LIB_0__::func_27(iLocal_502, 8) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_331, "player"))
	{
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_485, "", 0, false, true, 0, false, -1f, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
		__LIB_1__::func_681(&iLocal_502, 8);
	}
}

void func_187()
{
	int iVar0;
	func_391();
	iVar0 = func_182(&(iLocal_329[0]), &(Local_346[0 /*21*/]), 15f, &Local_368, &(Local_15.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 128), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar0 == 1)
	{
		if (!bLocal_515)
		{
			__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
		}
		__LIB_2__::func_411(&(Local_368[1 /*17*/]), 0, 0);
		__LIB_1__::func_148(&uLocal_413);
		__LIB_1__::func_148(&uLocal_416);
		if (iLocal_494 < 18)
		{
			bLocal_522 = true;
		}
		if (__LIB_0__::func_27(iLocal_502, 4))
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				if (bLocal_248 && !bLocal_247)
				{
					bLocal_247 = true;
				}
				else if (bLocal_511 && !bLocal_513)
				{
					bLocal_513 = true;
				}
			}
			else if (bLocal_248 && !bLocal_512)
			{
				bLocal_512 = true;
			}
			else if (bLocal_511 && !bLocal_514)
			{
				bLocal_514 = true;
			}
		}
	}
	else if (iVar0 == 0)
	{
		__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_368[1 /*17*/]), 0, 0);
	}
}

bool func_188()
{
	if (__LIB_2__::func_1(iLocal_329[0], 0, 1))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_329[0], &Local_450);
	}
	if ((TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		__LIB_1__::func_471(&(Local_368[1 /*17*/]), 9);
		__LIB_1__::func_471(&(Local_368[0 /*17*/]), 9);
	}
	if (__LIB_3__::func_138(Global_35, iLocal_249) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		__LIB_1__::func_148(&uLocal_404);
		fLocal_501 = 8f;
		__LIB_2__::func_526(&Local_368, 0, 0);
		return true;
	}
	if (__LIB_0__::func_27(iLocal_502, 2))
	{
		__LIB_4__::func_208(&uLocal_481, &uLocal_404, 8f, 1);
	}
	if (bLocal_505)
	{
		if (__LIB_0__::func_665(iLocal_329[0], Global_35, 1, 1) > (15f + 10f))
		{
			func_396(26, 17);
			return false;
		}
	}
	else if (__LIB_0__::func_665(iLocal_329[0], Global_35, 1, 1) <= 15f)
	{
		bLocal_505 = true;
	}
	return false;
}

void func_191()
{
	__LIB_3__::func_157(&(Local_368[0 /*17*/]), "RE_INTER_POS", sLocal_253[42], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[43], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_368, 0);
	__LIB_2__::func_526(&Local_368, 1, 0);
}

void func_194()
{
	__LIB_2__::func_451(&(Local_346[0 /*21*/]), 0);
	__LIB_3__::func_157(&(Local_368[0 /*17*/]), "GIVE_BOOZE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_158(&(Local_368[0 /*17*/]), 0);
	if (bLocal_247)
	{
		__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[45], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[44], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
	if (__LIB_2__::func_591(joaat("CONSUMABLE_WHISKEY"), 1, 0))
	{
		__LIB_2__::func_411(&(Local_368[0 /*17*/]), 1, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
	}
	__LIB_2__::func_411(&(Local_368[1 /*17*/]), 1, 0);
	bLocal_248 = true;
}

bool func_195(bool bParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_329[0]))
	{
		return true;
	}
	func_391();
	switch (iLocal_489)
	{
		case 0:
			if (bParam0)
			{
				bLocal_519 = true;
				if (bLocal_515)
				{
					iVar0 = func_182(&(iLocal_329[0]), &(Local_346[0 /*21*/]), 15f, &Local_368, &(Local_15.f_192), 0f, 1, 0, 0, 1, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					iVar0 = func_182(&(iLocal_329[0]), &(Local_346[0 /*21*/]), 15f, &Local_368, &(Local_15.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 128), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				}
				if (iVar0 == 1)
				{
					if (bLocal_248 && !bLocal_247)
					{
						__LIB_1__::func_148(&uLocal_413);
						__LIB_1__::func_148(&uLocal_416);
						bLocal_247 = true;
						__LIB_2__::func_411(&(Local_368[0 /*17*/]), 1, 0);
					}
					else if (bLocal_511 && !bLocal_513)
					{
						__LIB_1__::func_148(&uLocal_413);
						__LIB_1__::func_148(&uLocal_416);
						__LIB_2__::func_526(&Local_368, 0, 0);
						__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
						bLocal_513 = true;
					}
					__LIB_2__::func_411(&(Local_368[1 /*17*/]), 0, 0);
				}
				else if (iVar0 == 0)
				{
					__LIB_2__::func_411(&(Local_368[0 /*17*/]), 0, 0);
					__LIB_2__::func_451(&(Local_346[0 /*21*/]), 0);
					bLocal_515 = false;
					__LIB_1__::func_683(&iLocal_502, 16);
					__LIB_1__::func_683(&iLocal_502, 8);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_331, "player", Global_35, 0);
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("PBL_STORY_TRANS_A")))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[12], true);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("PBL_STORY_TRANS_B")))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[13], true);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("PBL_STORY_TRANS_C")))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[14], true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[11], true);
					}
					__LIB_0__::func_325(&(uLocal_526[0]));
					__LIB_1__::func_748(&(Local_15.f_162), 1, 1);
					__LIB_0__::func_37(&uLocal_404);
					__LIB_2__::func_526(&Local_368, 0, 0);
					Local_15.f_44 = 1;
					iLocal_493 = 31;
					iLocal_489 = 1;
				}
			}
			else if (!__LIB_3__::func_138(Global_35, iLocal_249) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				if (bLocal_519)
				{
					__LIB_1__::func_748(&(Local_15.f_162), 1, 1);
					if (__LIB_2__::func_227(0, 1, iLocal_329[0], 0) && __LIB_0__::func_665(iLocal_329[0], Global_35, 1, 1) > 10f)
					{
						func_396(26, 17);
					}
				}
			}
			break;
		case 1:
			func_182(&(iLocal_329[0]), &(Local_346[0 /*21*/]), 15f, &Local_368, &(Local_15.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_0__::func_27(iLocal_502, 8))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), false);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			}
			if ((!bLocal_510 && __LIB_0__::func_665(iLocal_329[0], Global_35, 1, 1) > 10f) && !iLocal_492 == 27)
			{
				func_396(26, 15);
			}
			else if (PED::GET_PED_CONFIG_FLAG(iLocal_329[0], 11, true))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_196()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_329[0]) || __LIB_2__::func_118(iLocal_329[0], 1, 1) > 200f)
	{
		return true;
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_331, "PED_DRUNK") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_331, "PED_DRUNK"))
	{
		TASK::_TASK_FLEE_FROM_PED(iLocal_329[0], Global_35, 0f, 0f, 0f, 999999f, -1, 256, 1.75f, 0);
		PED::_0xAE6004120C18DF97(iLocal_329[0], 0, 1);
		return true;
	}
	return false;
}

bool func_198()
{
	if (!__LIB_3__::func_138(Global_35, iLocal_249) && ((MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_51, true) > 90f || !__LIB_2__::func_1(iLocal_329[0], 0, 1)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_329[0], -1)))
	{
		__LIB_0__::func_325(&(uLocal_526[0]));
		return true;
	}
	return false;
}

bool func_201()
{
	if (bLocal_510 || __LIB_0__::func_232(Global_35, iLocal_329[0], 1) > 2500f)
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_329[0]))
	{
		__LIB_4__::func_268(2, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, iLocal_329[0], 0, 1065353216 /* Float: 1f */, 0);
		return true;
	}
	return false;
}

int func_273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_250, iVar0, iParam0, false, false);
	if (iVar1 == 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return 0;
	}
	iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam1, iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2);
}

void func_373()
{
	__LIB_3__::func_157(&(Local_368[0 /*17*/]), "RE_INTER_POS", sLocal_253[36], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_368[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_253[37], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_368, 0);
	__LIB_2__::func_526(&Local_368, 1, 0);
}

int func_381(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_381(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_387()
{
	char* sVar0;
	switch (__LIB_3__::func_112(iLocal_329[0], Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 0:
			sVar0 = sLocal_300[9];
			break;
		case 2:
			switch (__LIB_3__::func_112(iLocal_329[0], Global_35, 0f))
			{
				case 0:
					sVar0 = sLocal_300[7];
					break;
				case 1:
					sVar0 = sLocal_300[8];
					break;
			}
			break;
		case 3:
			switch (__LIB_3__::func_112(iLocal_329[0], Global_35, 0f))
			{
				case 0:
					sVar0 = sLocal_300[5];
					break;
				case 1:
					sVar0 = sLocal_300[6];
					break;
			}
			break;
		case 1:
			switch (__LIB_3__::func_112(iLocal_329[0], Global_35, 1f))
			{
				case 3:
					sVar0 = sLocal_300[6];
					break;
				case 2:
					sVar0 = sLocal_300[8];
					break;
			}
			break;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sVar0, true);
	func_180(10);
	__LIB_1__::func_683(&iLocal_502, 1);
	__LIB_2__::func_73(iLocal_329[0], &(uLocal_526[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
}

void func_390()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_329[0]))
	{
		return;
	}
	if (((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("RE_DC_MTN_V1_TOHELL")) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("RE_DC_MTN_V1_ISHITICRY"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("RE_DC_MTN_V1_FORGETWET"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_329[0], joaat("RE_DC_MTN_V1_BLAMEMOTHER")))
	{
		__LIB_3__::func_719(&Local_15, iLocal_329[0], 1515458263, 4, 1123024896 /* Float: 120f */, 0, 3, 1);
	}
}

void func_391()
{
	if (__LIB_12__::func_605() || !__LIB_2__::func_227(0, 1, iLocal_329[0], 1))
	{
		__LIB_1__::func_471(&(Local_368[1 /*17*/]), 9);
	}
}

void func_392()
{
	if (iLocal_209 == 0)
	{
		__LIB_8__::func_83(3, 65536);
		__LIB_8__::func_82(3, 134217728);
	}
}

int func_393(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_393(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_396(int iParam0, int iParam1)
{
	__LIB_2__::func_478(iLocal_329[0], Global_35, sLocal_253[iParam0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_331, sLocal_300[iParam1], true);
	__LIB_0__::func_325(&(uLocal_526[0]));
	iLocal_492 = iParam0;
	iLocal_488 = 6;
}

