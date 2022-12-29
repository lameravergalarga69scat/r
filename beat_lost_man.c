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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	struct<2> Local_18[15];
	struct<193> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_242 = 0;
	struct<32> Local_243[1];
	int iLocal_276[1] = { 0 };
	var uLocal_278[1] = { 0 };
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 15;
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
	var uLocal_352 = 0;
	var uLocal_353 = 0;
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
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	var uLocal_409 = -1;
	var uLocal_410 = 0;
	var uLocal_411 = -1;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = -1;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 1073741824;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 1;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	struct<17> Local_429[3];
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	bool bLocal_485 = false;
	bool bLocal_486 = false;
	struct<24> Local_487 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0 } ;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = -1082130432;
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
	var uLocal_529 = 1065353216;
	var uLocal_530 = 1065353216;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 1065353216;
	var uLocal_535 = 1065353216;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 1065353216;
	var uLocal_540 = 1065353216;
	var uLocal_541 = 0;
	var uLocal_542 = 1040187392;
	var uLocal_543 = 1040187392;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = -1082130432;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	float fLocal_567 = 0f;
	float fLocal_568 = 0f;
	bool bLocal_569 = false;
	bool bLocal_570 = false;
	bool bLocal_571 = false;
	bool bLocal_572 = false;
	bool bLocal_573 = false;
	bool bLocal_574 = false;
	vector3 vLocal_575 = { 0f, 0f, 0f };
	vector3 vLocal_578 = { 0f, 0f, 0f };
	vector3 vLocal_581 = { 0f, 0f, 0f };
	vector3 vLocal_584 = { 0f, 0f, 0f };
	vector3 vLocal_587 = { 0f, 0f, 0f };
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
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
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	struct<23> Local_641 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
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
	iLocal_481 = 202;
	fLocal_567 = 9f;
	bLocal_571 = true;
	bLocal_573 = true;
	Local_49.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_49.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_420(&Local_49, 1);
	func_4();
	func_5();
	func_6();
	func_7();
	func_8();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_574 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_574, 1593, 0);
		if (bLocal_574)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_17)
			{
				case 0:
					if (func_11())
					{
						iLocal_17 = 1;
					}
					break;
				case 1:
					if (__LIB_4__::func_218(&Local_49, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_49, &iLocal_283, &uLocal_285);
						iLocal_284 = 0;
						vLocal_578 = { -1775.588f, -386.2419f, 156.0079f };
						__LIB_7__::func_894(2048);
						func_15();
						iLocal_482 = 3;
						iLocal_483 = 5;
						__LIB_2__::func_602(&(Local_429[0 /*17*/]), __LIB_2__::func_460(7), func_17(0), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_429[2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
						__LIB_2__::func_526(&Local_429, 0, 0);
						__LIB_3__::func_158(&(Local_429[2 /*17*/]), 1);
						func_21();
						PED::_0x7C00CFC48A782DC0(Local_49.f_174, iLocal_276[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						iLocal_17 = 4;
					}
					else if (Local_49.f_160)
					{
						func_9();
					}
					break;
				case 4:
					if (!func_22(&Local_49, &iLocal_276, iLocal_282, 0, 1, 0, 1, 0))
					{
						func_9();
					}
					func_23();
					if (!Local_49.f_46)
					{
						if (__LIB_4__::func_107(iLocal_276[0], 0, &(Local_49.f_5), &iLocal_407, 0, 0))
						{
							if (iLocal_407 == 256 && func_25(2))
							{
								if (!__LIB_0__::func_75(&uLocal_602) || __LIB_1__::func_285(&uLocal_602, 2f))
								{
									if (!func_28(16384))
									{
										bLocal_570 = true;
										__LIB_1__::func_148(&uLocal_635);
										__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("SHOOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										func_32(16384);
										__LIB_1__::func_148(&uLocal_602);
									}
									else if (!func_28(32768))
									{
										bLocal_570 = true;
										__LIB_1__::func_148(&uLocal_635);
										__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("SHOOT2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										func_32(32768);
										__LIB_1__::func_148(&uLocal_602);
									}
									else
									{
										Local_49.f_46 = 1;
										__LIB_2__::func_526(&Local_429, 0, 0);
										func_33();
										__LIB_3__::func_465(1, 0, 0, 0, iLocal_276[0], 0, 1065353216 /* Float: 1f */, 0);
										func_35(512);
										__LIB_4__::func_71(13);
										__LIB_0__::func_37(&uLocal_602);
									}
								}
							}
							else
							{
								__LIB_2__::func_504(iLocal_276[0], 250);
								func_33();
								if (iLocal_407 == 8 && !func_39())
								{
									if (((iLocal_16 <= 4 || iLocal_16 == 11) || iLocal_16 == 9) || iLocal_16 == 10)
									{
										if (iLocal_16 <= 4 && iLocal_564 == 0)
										{
											__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("AIM_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
										else if (!func_25(2))
										{
											__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("AIM_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
										else
										{
											__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("AIM_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
									}
									if (!func_25(8192) && __LIB_4__::func_17(58))
									{
										__LIB_3__::func_465(1, 0, 0, 0, iLocal_276[0], 0, 1065353216 /* Float: 1f */, 0);
										func_35(8192);
									}
									func_35(65536);
									PED::_0x935CF6E42BAF7F4D(iLocal_276[0]);
									TASK::_TASK_INTIMIDATED_2(iLocal_276[0], Global_35, 2, 0, 0, 0, 0, 0, 0);
								}
								Local_49.f_46 = 1;
								__LIB_4__::func_71(13);
							}
						}
					}
					if (func_41())
					{
						Local_49.f_50 = 1;
						func_9();
					}
					if (__LIB_3__::func_365(&Local_49, &iLocal_276, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0) || !__LIB_2__::func_1(iLocal_276[0], 0, 1))
					{
						Local_49.f_50 = 1;
						func_9();
					}
					break;
			}
			BUILTIN::WAIT(Local_49.f_158);
		}
	}
}

void func_4()
{
	iLocal_283 = __LIB_1__::func_898();
	iLocal_282 = __LIB_3__::func_390(Local_49.f_3, 1, 0);
}

void func_5()
{
	Local_243[0 /*32*/].f_1 = joaat("RE_LOSTMAN_MALES_01");
	Local_243[0 /*32*/] = 4;
	StringCopy(&(Local_243[0 /*32*/].f_23), "1055_A_M_M_StrFancyTourist_01_WHITE_02", 64);
	Local_243[0 /*32*/].f_3 = 23997852;
}

void func_6()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_18[iVar0 /*2*/] = "script_re@lost_man";
		iVar0++;
	}
	Local_18[0 /*2*/].f_1 = "idle";
	Local_18[1 /*2*/].f_1 = "help_anyone_there";
	Local_18[2 /*2*/].f_1 = "somebody_help_me";
	Local_18[3 /*2*/].f_1 = "hello_anybody";
	Local_18[4 /*2*/].f_1 = "oh_thank_god";
	Local_18[5 /*2*/].f_1 = "losing_my_mind";
	Local_18[6 /*2*/].f_1 = "i_ll_die_out_here";
	Local_18[7 /*2*/].f_1 = "thank_u_so_much";
	Local_18[8 /*2*/].f_1 = "neg_no_please";
	Local_18[9 /*2*/].f_1 = "u_came_back";
	Local_18[10 /*2*/].f_1 = "leave_me_be_then";
	Local_18[11 /*2*/].f_1 = "road_up_ahead";
	Local_18[12 /*2*/].f_1 = "i_made_it";
	Local_18[13 /*2*/].f_1 = "listen";
	Local_18[14 /*2*/].f_1 = "best_of_luck";
	__LIB_3__::func_318(Local_18[0 /*2*/], &uLocal_286);
}

void func_7()
{
	__LIB_2__::func_290(&(Local_49.f_5));
	__LIB_2__::func_104(&(Local_49.f_5), 1);
	__LIB_2__::func_111(&(Local_49.f_5), 1);
}

void func_8()
{
	Local_641.f_8 = 4;
	Local_641.f_4 = 21030;
	Local_641.f_3 = Global_35;
	Local_641.f_12 = 1;
	Local_641.f_9 = 0;
	Local_641.f_19 = 4;
	Local_641.f_20 = 4;
	Local_641.f_21 = 4;
	Local_641.f_22 = 4;
}

void func_9()
{
	if (iLocal_16 <= 1)
	{
		__LIB_2__::func_426(&(iLocal_276[0]));
	}
	func_33();
	__LIB_1__::func_682(Local_49.f_3);
	if (iLocal_16 < 4)
	{
		Local_49.f_45 = 0;
	}
	__LIB_7__::func_896(2048);
	func_54();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_276[0]))
	{
		__LIB_1__::func_727(iLocal_276[0], 1);
		__LIB_2__::func_603(&(iLocal_276[0]), &iLocal_408, &Local_429, 1, 1);
	}
	__LIB_0__::func_325(&(uLocal_278[0]));
	__LIB_3__::func_823(&Local_49, &iLocal_276, &uLocal_278, iLocal_282, iLocal_283, uLocal_285, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_11()
{
	switch (iLocal_15)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_49))
			{
				func_61();
				iLocal_15 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_14, "Beat Lost Man"))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_286))
			{
				return false;
			}
			if (!__LIB_3__::func_289(&(Local_243[0 /*32*/])))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_13(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
	}
}

void func_15()
{
	if (!bLocal_486 && !__LIB_7__::func_897(1024))
	{
		__LIB_2__::func_165(__LIB_3__::func_179(&Local_49), 20f, 0, 0, 6);
		bLocal_486 = true;
	}
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_LM_BGV_STR_V1_ACCEPT";
		case 1:
			return "RE_LM_BGV_STR_V1_WOREMEDOWN";
		case 2:
			return "RE_LM_BGV_STR_V1_BACKSTAY_YES";
		case 3:
			return "RE_LM_BGV_STR_V1_BACKSTAY_NO";
		case 4:
			return "RE_LM_BGV_STR_V1_ANTAGONIZE";
		case 5:
			return "RE_LM_BGV_STR_V1_ENCOURAGE";
		case 6:
			return "RE_LM_BGV_STR_V1_POST_ANT_A";
		case 7:
			return "RE_LM_BGV_STR_V1_POST_ANT_B";
		case 8:
			return "RE_LM_BGV_STR_V1_POST_ANT_C";
		case 9:
			return "RE_LM_BGV_STR_V1_DEFUSE";
		default:
			break;
	}
	return __LIB_3__::func_497(" - Invalid Index.", 0);
}

void func_21()
{
	iLocal_276[0] = __LIB_3__::func_870(Local_243[0 /*32*/].f_1, &(Local_243[0 /*32*/]), Local_49.f_51, Local_49.f_51.f_3, 1, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_276[0]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_276[0], true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_276[0], true);
		PED::_0x923583741DC87BCE(iLocal_276[0], "lost_Man");
		PED::_0x89F5E7ADECCCB49C(iLocal_276[0], "lost_man_normal");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_276[0], "TaskIntimidated_OnFoot");
	}
	__LIB_3__::func_285(iLocal_276[0], &Local_49, 0);
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
		__LIB_3__::func_335(uParam0, iParam2);
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
				__LIB_4__::func_15(uParam0, (*iParam1)[0]);
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

void func_23()
{
	if (__LIB_7__::func_897(2048))
	{
		func_15();
	}
	else
	{
		func_54();
	}
}

bool func_25(int iParam0)
{
	return __LIB_0__::func_27(iLocal_280, iParam0);
}

bool func_28(int iParam0)
{
	return __LIB_0__::func_27(iLocal_281, iParam0);
}

char* func_30(char[4] cParam0)
{
	char[] cVar0[8];
	char[] cVar1[8];
	StringCopy(&cVar0, "LM", 8);
	switch (iLocal_284)
	{
		case 0:
			StringCopy(&cVar1, "BGV_STR", 8);
			break;
	}
	return __LIB_3__::func_394(&cVar0, &cVar1, cParam0, 1);
}

void func_32(int iParam0)
{
	__LIB_1__::func_336(&iLocal_281, iParam0);
}

void func_33()
{
	if (func_25(32))
	{
		__LIB_0__::func_769();
		func_133(32);
	}
	__LIB_0__::func_325(&iLocal_563);
	__LIB_0__::func_8(&Global_1935630, 4);
}

void func_35(int iParam0)
{
	__LIB_1__::func_336(&iLocal_280, iParam0);
}

bool func_39()
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	return iVar0 == joaat("WEAPON_LASSO");
}

bool func_41()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_2__::func_1(iLocal_276[0], 0, 1))
	{
		PED::_0x8B3B71C80A29A4BB(iLocal_276[0], joaat("MOODNORMAL"), 6);
		if (PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_276[0], "DEFAULT_PANIC"))
		{
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_276[0], "DEFAULT_PANIC");
		}
	}
	if (iLocal_16 != 17)
	{
		if (!__LIB_2__::func_1(iLocal_276[0], 0, 1))
		{
			Local_49.f_44 = 1;
			__LIB_4__::func_71(17);
		}
	}
	if (__LIB_1__::func_313(&uLocal_620, 2.5f))
	{
		__LIB_2__::func_315(1891783641, iLocal_276[0], 1);
	}
	switch (iLocal_16)
	{
		case 0:
			__LIB_4__::func_71(1);
			break;
		case 1:
			if (!func_28(1) && __LIB_2__::func_118(iLocal_276[0], 1, 1) < 70f)
			{
				func_145(iLocal_276[0], Local_18[1 /*2*/], Local_18[1 /*2*/].f_1, 0, 1);
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CALL_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_32(1);
				__LIB_17__::func_867(iLocal_276[0], 5000);
				__LIB_2__::func_315(1891783641, iLocal_276[0], 1);
				__LIB_1__::func_148(&uLocal_620);
			}
			vVar0.f_2 = 1176256512;
			if (__LIB_3__::func_647(&Local_49, &vVar0, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 45f, 2000, 4f, 4f, 1, 0, 0, 7f, 1, 0, 0))
			{
				__LIB_4__::func_71(2);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 1, 0, 1);
				__LIB_1__::func_474(iLocal_276[0], &iVar3, 0, 0, 1, 1);
			}
			break;
		case 2:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_276[0], &Local_641);
			if (__LIB_2__::func_215(iLocal_276[0], Global_35, 0, 25f, 0) && __LIB_2__::func_227(0, 1, iLocal_276[0], 1))
			{
				func_151(iLocal_276[0], Global_35, &uLocal_525, 1.8f, 0, 0, -1082130432 /* Float: -1f */, 2f, 1, 128, 0, 0, 2f, -1f, 1050253722 /* Float: 0.3f */, 2f, 0, 0, -1, 1, 1.5f, -1082130432 /* Float: -1f */, 1);
				__LIB_4__::func_71(3);
				if (iLocal_564 == 0)
				{
					func_145(iLocal_276[0], Local_18[4 /*2*/], Local_18[4 /*2*/].f_1, 0, 1);
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, iLocal_276[0], 1);
				}
			}
			break;
		case 3:
			__LIB_2__::func_966(iLocal_276[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_276[0], &Local_641);
			if (!func_25(4096))
			{
				if ((__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_665(iLocal_276[0], Global_35, 1, 1) < 7f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]))
				{
					if (iLocal_564 == 0)
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ASK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_145(iLocal_276[0], Local_18[5 /*2*/], Local_18[5 /*2*/].f_1, 0, 1);
					}
					func_35(4096);
				}
			}
			else if (!func_28(134217728))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]) && __LIB_2__::func_227(-6f, 1, 0, 0))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ACCEPT_THANKS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_32(134217728);
				}
			}
			else if (((!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]) || iLocal_564 == 0) && __LIB_2__::func_227(-6f, 1, 0, 0)) && Local_49.f_48)
			{
				__LIB_2__::func_104(&(Local_49.f_5), 1);
				__LIB_2__::func_105(&(Local_49.f_5), 1);
				__LIB_1__::func_148(&uLocal_590);
				if (iLocal_564 == 0)
				{
					__LIB_2__::func_602(&(Local_429[0 /*17*/]), __LIB_2__::func_460(0), func_17(0), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
					__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				}
				else if (iLocal_564 == 1)
				{
					__LIB_2__::func_602(&(Local_429[0 /*17*/]), __LIB_2__::func_460(0), func_17(2), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
					__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				}
				__LIB_2__::func_526(&Local_429, 1, 0);
				iLocal_481 = __LIB_2__::func_340(2, 0, 0);
				__LIB_2__::func_451(&iLocal_408, 0);
				Local_49.f_44 = 1;
				__LIB_4__::func_71(4);
			}
			if (!Local_49.f_48 && __LIB_2__::func_118(iLocal_276[0], 1, 1) > 80f)
			{
				TASK::CLEAR_PED_TASKS(iLocal_276[0], true, false);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_276[0]);
				PED::_0x4FD80C3DD84B817B(iLocal_276[0]);
				PED::_0x58F7DB5BD8FA2288(iLocal_276[0]);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_276[0], Global_35, 1, 128, -1082130432 /* Float: -1f */, -1, 0);
				Local_49.f_50 = 1;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_276[0]));
				return true;
			}
			break;
		case 4:
			if (__LIB_1__::func_313(&uLocal_623, 4f))
			{
				__LIB_1__::func_148(&uLocal_590);
				func_151(iLocal_276[0], Global_35, &uLocal_525, 1.8f, 0, 0, -1082130432 /* Float: -1f */, 2f, 1, 128, 0, 0, 2f, -1f, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				iLocal_482 = 3;
				iLocal_483 = 5;
				__LIB_2__::func_602(&(Local_429[0 /*17*/]), __LIB_2__::func_460(0), func_17(1), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				__LIB_2__::func_526(&Local_429, 1, 0);
				iLocal_481 = __LIB_2__::func_340(2, 0, 0);
				__LIB_2__::func_451(&iLocal_408, 0);
			}
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_276[0], &Local_641);
			__LIB_2__::func_966(iLocal_276[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_158();
			if (__LIB_0__::func_265(&uLocal_590) > __LIB_0__::func_514(!func_28(4), 20f, 10f) || __LIB_0__::func_665(iLocal_276[0], Global_35, 1, 1) > 15f)
			{
				__LIB_2__::func_526(&Local_429, 0, 0);
				__LIB_0__::func_325(&(uLocal_278[0]));
				TASK::CLEAR_PED_TASKS(iLocal_276[0], true, false);
				iLocal_481 = __LIB_2__::func_340(3, 0, 0);
				__LIB_2__::func_451(&iLocal_408, 0);
				if (__LIB_2__::func_1(iLocal_276[0], 0, 1))
				{
					__LIB_1__::func_727(iLocal_276[0], 1);
				}
				__LIB_4__::func_71(6);
			}
			break;
		case 5:
			__LIB_2__::func_966(iLocal_276[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if ((__LIB_2__::func_227(-6f, 1, 0, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]))
			{
				if (!func_25(32))
				{
					__LIB_3__::func_662("LOST_OBJ_LEAD", 7500, 0, 0, -1, -1, 0);
					__LIB_3__::func_652(vLocal_578, &iLocal_563, 408396114, 0, "BLIP_DEST", -1878373110);
					func_35(32);
				}
				if (!func_28(16))
				{
					__LIB_3__::func_991();
					func_145(iLocal_276[0], Local_18[7 /*2*/], Local_18[7 /*2*/].f_1, 0, 1);
					func_32(16);
				}
				else
				{
					if (__LIB_0__::func_71(Global_35))
					{
						func_35(4);
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("HORSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_35(8);
					}
					__LIB_4__::func_71(7);
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-5f, 1, 0, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				switch (iLocal_564)
				{
					case 0:
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("REJECT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_145(iLocal_276[0], Local_18[8 /*2*/], Local_18[8 /*2*/].f_1, 0, 1);
						__LIB_1__::func_283(&uLocal_596, 1);
						break;
					case 1:
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("REJECT2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_145(iLocal_276[0], Local_18[10 /*2*/], Local_18[10 /*2*/].f_1, 0, 1);
						break;
					case 2:
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("REJECT3"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 3:
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("REJECT4"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
				iLocal_564++;
				func_165();
				__LIB_1__::func_148(&uLocal_605);
				__LIB_1__::func_283(&uLocal_599, 0);
				if (iLocal_564 < 4)
				{
					__LIB_4__::func_71(8);
				}
				else
				{
					__LIB_4__::func_71(17);
				}
			}
			break;
		case 7:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_276[0], 2f);
			if (((!__LIB_0__::func_75(&uLocal_611) && __LIB_2__::func_227(-6.5f, 1, 0, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]))
			{
				__LIB_1__::func_148(&uLocal_611);
			}
			if (__LIB_2__::func_118(iLocal_276[0], 1, 1) < 20f)
			{
				if (!func_25(16))
				{
					if (__LIB_1__::func_313(&uLocal_611, 0.75f))
					{
						if (func_25(4) && !func_25(8))
						{
							__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("HORSE_REJECT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_35(8);
						}
						else if (func_25(4))
						{
							iLocal_482 = 1;
							iLocal_483 = 4;
							__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(1), func_17(4), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
							__LIB_2__::func_411(&(Local_429[1 /*17*/]), 1, 0);
							__LIB_2__::func_451(&iLocal_408, 0);
							__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("FOLLOW_HORSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_35(16);
						}
						else
						{
							iLocal_482 = 1;
							iLocal_483 = 4;
							__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(1), func_17(4), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
							__LIB_2__::func_411(&(Local_429[1 /*17*/]), 1, 0);
							__LIB_2__::func_451(&iLocal_408, 0);
							__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("FOLLOW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_35(16);
						}
					}
				}
				else if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
				{
					PED::_0x4FD80C3DD84B817B(iLocal_276[0]);
					PED::_0x58F7DB5BD8FA2288(iLocal_276[0]);
					PED::_0xAAB050DA48B57978(iLocal_276[0], "DEFAULT_NERVOUS", 0, -1, 4);
					__LIB_2__::func_411(&(Local_429[1 /*17*/]), 1, 0);
					iLocal_483 = 4;
					__LIB_1__::func_148(&uLocal_611);
					__LIB_7__::func_896(2048);
					__LIB_4__::func_71(11);
				}
			}
			else
			{
				__LIB_2__::func_504(iLocal_276[0], 0);
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("WAIT_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_166();
				func_32(32);
				iLocal_482 = 1;
				iLocal_483 = 4;
				__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(1), func_17(4), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				__LIB_2__::func_411(&(Local_429[1 /*17*/]), 1, 0);
				__LIB_2__::func_451(&iLocal_408, 0);
				func_35(16);
				__LIB_1__::func_148(&uLocal_614);
				PED::_0x4FD80C3DD84B817B(iLocal_276[0]);
				PED::_0x58F7DB5BD8FA2288(iLocal_276[0]);
				PED::_0xAAB050DA48B57978(iLocal_276[0], "DEFAULT_NERVOUS", 0, -1, 4);
				__LIB_2__::func_411(&(Local_429[1 /*17*/]), 1, 0);
				iLocal_483 = 4;
				__LIB_1__::func_148(&uLocal_611);
				__LIB_7__::func_896(2048);
				__LIB_4__::func_71(11);
			}
			break;
		case 8:
			if (!func_25(256))
			{
				if (!func_28(4))
				{
					if (__LIB_1__::func_285(&uLocal_596, 10f))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						func_145(0, Local_18[3 /*2*/], Local_18[3 /*2*/].f_1, 0, 0);
						TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_587, 1073741824 /* Float: 2f */, 1f, 0, 0);
						__LIB_1__::func_474(iLocal_276[0], &iVar4, 0, 0, 1, 1);
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CALL_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_32(4);
						__LIB_1__::func_148(&uLocal_605);
						__LIB_1__::func_148(&uLocal_596);
					}
				}
				else if (__LIB_3__::func_332(vLocal_584, 1) < 5f || __LIB_2__::func_118(iLocal_276[0], 1, 1) < 8f)
				{
					if (!func_25(64) && __LIB_1__::func_285(&uLocal_596, 6f))
					{
						__LIB_0__::func_37(&uLocal_596);
						func_35(256);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_276[0], Global_35, -1, -1f, -1f, -1f);
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STAY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_4__::func_71(2);
					}
				}
				else
				{
					func_168();
				}
			}
			else
			{
				func_168();
			}
			if ((__LIB_2__::func_118(iLocal_276[0], 1, 1) > 35f && __LIB_1__::func_285(&uLocal_599, 5f)) && func_28(4))
			{
				if (!func_25(64))
				{
					if (!func_25(256))
					{
						iLocal_564++;
					}
					func_35(64);
				}
				__LIB_0__::func_37(&uLocal_599);
				PED::_0x4FD80C3DD84B817B(iLocal_276[0]);
				PED::_0x58F7DB5BD8FA2288(iLocal_276[0]);
				PED::_0xAAB050DA48B57978(iLocal_276[0], "Default_Cautious", 0, -1, 4);
				__LIB_4__::func_71(9);
			}
			break;
		case 9:
			func_169();
			POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			if (__LIB_0__::func_665(iLocal_276[0], Global_35, 1, 1) < 10f)
			{
				switch (iLocal_564)
				{
					case 2:
						__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("STALK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 3:
						__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("STALK2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
				__LIB_4__::func_71(10);
			}
			break;
		case 10:
			POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			if (((!__LIB_0__::func_75(&uLocal_611) && __LIB_2__::func_227(-5f, 1, 0, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]))
			{
				__LIB_1__::func_148(&uLocal_611);
			}
			if (!func_25(128))
			{
				if (__LIB_1__::func_313(&uLocal_611, 0.25f))
				{
					switch (iLocal_564)
					{
						case 2:
							__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STALK_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 3:
							__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STALK_RESPONSE2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					func_35(128);
				}
			}
			else if (__LIB_1__::func_313(&uLocal_611, 1f))
			{
				__LIB_1__::func_283(&uLocal_623, 0);
				switch (iLocal_564)
				{
					case 2:
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ASK4"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 3:
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ASK5"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
				__LIB_0__::func_37(&uLocal_590);
				func_32(16);
				__LIB_4__::func_71(4);
			}
			break;
		case 11:
			POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			if (func_25(16384))
			{
				if (__LIB_2__::func_118(iLocal_276[0], 1, 1) < 10f)
				{
					func_151(iLocal_276[0], Global_35, &uLocal_525, 1.8f, 0, 0, -1082130432 /* Float: -1f */, 2f, 1, 128, 0, 0, 2f, -1f, 1050253722 /* Float: 0.3f */, 2f, 0, 0, -1, 1, 1.5f, -1082130432 /* Float: -1f */, 1);
					func_133(16384);
				}
				else if (__LIB_2__::func_118(iLocal_276[0], 1, 1) > 80f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_276[0], true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_276[0]);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_276[0], Global_35, 1, 128, -1082130432 /* Float: -1f */, -1, 0);
					Local_49.f_50 = 1;
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_276[0]));
					func_33();
					__LIB_3__::func_465(1, 0, 0, 0, iLocal_276[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_71(17);
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_276[0], 1.5f);
				if (!func_28(256))
				{
					if (__LIB_0__::func_393(iLocal_276[0], __LIB_0__::func_559(26), 0, 1) && __LIB_1__::func_313(&uLocal_611, fLocal_567))
					{
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("SEETOWN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						vLocal_575 = { ENTITY::GET_ENTITY_COORDS(iLocal_276[0], true, false) };
						func_35(1024);
						__LIB_2__::func_411(&(Local_429[1 /*17*/]), 0, 0);
						func_32(256);
						__LIB_1__::func_148(&uLocal_593);
					}
					func_172();
					func_173();
					func_174(__LIB_2__::func_118(iLocal_276[0], 1, 1));
					func_175();
				}
				else if (func_176() > 25f)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_276[0]) || func_176() > 25f)
					{
						func_33();
						__LIB_3__::func_465(12, 0, 0, "RE_HONOR_HELPED_VICTIM", iLocal_276[0], 0, 1065353216 /* Float: 1f */, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_276[0], true);
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("EXIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_4__::func_71(14);
					}
				}
			}
			break;
		case 12:
			if (__LIB_2__::func_227(-6f, 1, 0, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ANT_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_165();
				func_35(512);
				func_33();
				__LIB_4__::func_71(17);
			}
			break;
		case 13:
			if (!func_25(65536) || !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if ((func_25(2) && !func_25(1024)) && !func_25(512))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("AGGRO_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("AGGRO_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_0__::func_325(&(uLocal_278[0]));
				TASK::CLEAR_PED_TASKS(iLocal_276[0], true, false);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_276[0]);
				PED::_0x58F7DB5BD8FA2288(iLocal_276[0]);
				TASK::_0x2E1D6D87346BB7D2(iLocal_276[0], Global_35, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_PANIC", 1.5f, 5f, 4);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(iLocal_276[0], &iVar5, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_276[0], true);
				__LIB_2__::func_603(&(iLocal_276[0]), &iLocal_408, &Local_429, 1, 1);
				__LIB_4__::func_71(17);
			}
			break;
		case 14:
			__LIB_2__::func_966(iLocal_276[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_28(8388608))
			{
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("REWARD"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_32(8388608);
				}
			}
			else if (!func_25(2048))
			{
				if (__LIB_2__::func_227(0, 1, iLocal_276[0], 1))
				{
					__LIB_3__::func_991();
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_578, 1f, -1, 0.25f, 1, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					__LIB_1__::func_474(iLocal_276[0], &iVar6, 0, 0, 1, 1);
					func_35(2048);
				}
			}
			else if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("REWARD_PLY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_482 = 1;
				iLocal_483 = 4;
				__LIB_2__::func_602(&(Local_429[0 /*17*/]), __LIB_2__::func_460(7), func_17(5), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(10), func_17(6), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				__LIB_2__::func_526(&Local_429, 1, 0);
				__LIB_2__::func_451(&iLocal_408, 0);
				__LIB_4__::func_71(17);
				__LIB_1__::func_148(&uLocal_632);
			}
			break;
		case 15:
			func_165();
			func_33();
			__LIB_4__::func_71(17);
			break;
		case 16:
			if (__LIB_2__::func_227(0, 1, 0, 0) && func_176() > 20f)
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STALK_EXIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar7);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_578, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				__LIB_1__::func_474(iLocal_276[0], &iVar7, 0, 0, 1, 1);
				Local_49.f_50 = 1;
				iLocal_482 = 1;
				iLocal_483 = 4;
				__LIB_2__::func_602(&(Local_429[0 /*17*/]), __LIB_2__::func_460(7), func_17(5), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				__LIB_2__::func_602(&(Local_429[1 /*17*/]), __LIB_2__::func_460(10), func_17(6), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				__LIB_2__::func_526(&Local_429, 1, 0);
				__LIB_2__::func_451(&iLocal_408, 0);
				__LIB_4__::func_71(17);
			}
			break;
		case 17:
			func_168();
			if (MAP::DOES_BLIP_EXIST(uLocal_278[0]))
			{
				__LIB_0__::func_325(&(uLocal_278[0]));
			}
			if (__LIB_2__::func_1(iLocal_276[0], 0, 1))
			{
				if (__LIB_2__::func_118(iLocal_276[0], 1, 1) > 150f)
				{
					return true;
				}
			}
			else if (__LIB_3__::func_332(Local_49.f_51, 1) > 150f)
			{
				return true;
			}
			break;
	}
	func_177();
	return false;
}

void func_54()
{
	if (bLocal_486)
	{
		__LIB_2__::func_161(__LIB_3__::func_179(&Local_49), 20f, 6);
		bLocal_486 = false;
	}
}

void func_61()
{
	__LIB_3__::func_950(&(Local_243[0 /*32*/]));
}

void func_133(int iParam0)
{
	__LIB_0__::func_516(&iLocal_280, iParam0);
}

void func_145(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4)
{
	Local_487 = 1;
	Local_487.f_1 = uParam1;
	Local_487.f_2 = uParam2;
	Local_487.f_3 = 0f;
	Local_487.f_4 = 1f;
	Local_487.f_5 = 1f;
	Local_487.f_16 = 0;
	Local_487.f_17 = 0.25f;
	Local_487.f_18 = 0.25f;
	Local_487.f_19 = -1;
	if (bParam3)
	{
		Local_487.f_20 = 1;
		Local_487.f_21 = 1;
	}
	else
	{
		Local_487.f_20 = 0;
		Local_487.f_21 = iParam4;
	}
	Local_487.f_23 = 1114112;
	TASK::TASK_SCRIPTED_ANIMATION(iParam0, &Local_487);
}

void func_151(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, float fParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = fParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, iParam10, iParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_158()
{
	float fVar0;
	if (!__LIB_2__::func_1(iLocal_276[0], 0, 1))
	{
		return;
	}
	fVar0 = __LIB_2__::func_118(iLocal_276[0], 1, 1);
	if (!func_25(1))
	{
		if (__LIB_0__::func_265(&uLocal_590) > 8f && fVar0 < 15f)
		{
			__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ASK2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_145(iLocal_276[0], Local_18[6 /*2*/], Local_18[6 /*2*/].f_1, 0, 1);
			func_35(1);
		}
	}
}

void func_165()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
	if (__LIB_0__::func_86(vLocal_587))
	{
		if (__LIB_3__::func_332(-1436.41f, -545.3f, 127.6922f, 1) < __LIB_3__::func_332(-1445.798f, -529.8782f, 130.0991f, 1))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1445.798f, -529.8782f, 130.0991f, 1f, -1, 0.25f, 0, 40000f);
			vLocal_587 = { __LIB_2__::func_116(76, 1) };
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1436.41f, -545.3f, 127.6922f, 1f, -1, 0.25f, 0, 40000f);
			vLocal_587 = { __LIB_2__::func_116(105, 1) };
		}
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_587, 1073741824 /* Float: 2f */, 1f, 0, 0);
	__LIB_1__::func_474(iLocal_276[0], &iVar0, 0, 0, 1, 1);
}

void func_166()
{
	if (!func_25(16384))
	{
		TASK::TASK_GO_TO_ENTITY(iLocal_276[0], Global_35, -1, 0.5f, 2f, 2f, 0);
		func_35(16384);
	}
}

void func_168()
{
	if (!__LIB_0__::func_75(&uLocal_605))
	{
		__LIB_1__::func_283(&uLocal_605, 0);
	}
	if (!bLocal_485)
	{
		if (((__LIB_0__::func_665(iLocal_276[0], Global_35, 1, 1) < 8f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !Local_49.f_46)
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_276[0], &Local_641);
			if (__LIB_1__::func_285(&uLocal_605, 11f))
			{
				if ((func_25(512) || !func_25(16)) && !func_25(262144))
				{
					if (!func_28(65536))
					{
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("LOITER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_32(65536);
					}
					else if (!func_28(131072))
					{
						__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("LOITER_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_32(131072);
					}
				}
				else if (!func_28(65536))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30(__LIB_0__::func_196(func_25(1024), "POST_LOITER_A", "POST_LOITER_C")), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_32(65536);
				}
				else if (!func_28(131072))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30(__LIB_0__::func_196(func_25(1024), "POST_LOITER_B", "POST_LOITER_D")), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_32(131072);
				}
				__LIB_1__::func_148(&uLocal_605);
			}
		}
		else if (func_25(1024))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]) && __LIB_1__::func_313(&uLocal_632, 12f))
			{
				if (func_25(16) && !func_25(512))
				{
					__LIB_2__::func_478(Global_35, 0, "RE_LM_BRG_STR_V1_PLY_LAST_HELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, 0, "RE_LM_BRG_STR_V1_PLY_LAST_NOHELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	else
	{
		switch (iLocal_484)
		{
			case 0:
				break;
			case 1:
				if (__LIB_1__::func_285(&uLocal_608, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_482(&(Local_429[0 /*17*/]), 1, 1);
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ENC_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_484 = 6;
					__LIB_1__::func_148(&uLocal_608);
				}
				break;
			case 2:
				if (__LIB_1__::func_285(&uLocal_608, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (func_28(2097152))
					{
						__LIB_2__::func_482(&(Local_429[0 /*17*/]), 1, 1);
						iLocal_482 = 0;
					}
					else
					{
						Local_429[0 /*17*/].f_13 = func_17(5);
						__LIB_1__::func_484(Local_429[0 /*17*/].f_6, __LIB_2__::func_460(25), 1);
						iLocal_482 = 1;
					}
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("DEF_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_484 = 6;
					__LIB_1__::func_148(&uLocal_608);
				}
				break;
			case 3:
				if (__LIB_1__::func_285(&uLocal_608, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ANT_A_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					Local_429[1 /*17*/].f_13 = func_17(7);
					iLocal_484 = 6;
					__LIB_1__::func_148(&uLocal_608);
				}
				break;
			case 4:
				if (__LIB_1__::func_285(&uLocal_608, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (func_28(4194304))
					{
						__LIB_2__::func_482(&(Local_429[0 /*17*/]), 1, 1);
					}
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ANT_B_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					Local_429[1 /*17*/].f_13 = func_17(8);
					iLocal_484 = 6;
					__LIB_1__::func_148(&uLocal_608);
				}
				break;
			case 5:
				if (__LIB_1__::func_285(&uLocal_608, 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("ANT_C_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_482(&(Local_429[1 /*17*/]), 1, 1);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_276[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_484 = 0;
				}
				break;
			case 6:
				if (__LIB_1__::func_285(&uLocal_608, 6f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]))
				{
					__LIB_2__::func_526(&Local_429, 1, 0);
					bLocal_485 = false;
					__LIB_1__::func_148(&uLocal_605);
					iLocal_484 = 0;
				}
				break;
		}
	}
}

void func_169()
{
	if (!__LIB_2__::func_1(iLocal_276[0], 0, 1))
	{
		return;
	}
	if (bLocal_569)
	{
		if (__LIB_2__::func_118(iLocal_276[0], 1, 1) < 20f)
		{
			bLocal_569 = false;
			TASK::TASK_STAND_STILL(iLocal_276[0], -1);
		}
		if (!func_25(131072))
		{
			if (__LIB_2__::func_118(iLocal_276[0], 1, 1) > 40f)
			{
				func_35(131072);
			}
		}
		else
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_276[0], 2f);
			if (__LIB_2__::func_118(iLocal_276[0], 1, 1) < 35f)
			{
				func_133(131072);
			}
		}
		if (__LIB_0__::func_94(iLocal_276[0], vLocal_581, 1) < 5f)
		{
			vLocal_581 = { Global_36 };
			TASK::_TASK_MOVE_IN_TRAFFIC_2(iLocal_276[0], vLocal_581, 1073741824 /* Float: 2f */, 1.5f, 0, 0);
		}
	}
	else if (func_371())
	{
		bLocal_569 = true;
		func_35(32768);
		vLocal_581 = { Global_36 };
		TASK::_TASK_MOVE_IN_TRAFFIC_2(iLocal_276[0], vLocal_581, 1073741824 /* Float: 2f */, 1.5f, 0, 0);
	}
	if (__LIB_0__::func_393(iLocal_276[0], __LIB_0__::func_559(26), 0, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_276[0], vLocal_578, 1.5f, -1, 0.25f, 0, 40000f);
		vLocal_575 = { ENTITY::GET_ENTITY_COORDS(iLocal_276[0], true, false) };
		__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STALK_SEETOWN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_35(262144);
		__LIB_4__::func_71(16);
	}
}

void func_172()
{
	if ((((ENTITY::GET_ENTITY_SPEED(Global_35) < 0.05f && __LIB_2__::func_118(iLocal_276[0], 1, 1) < 10f) && !bLocal_571) && !func_25(16384)) && !bLocal_570)
	{
		if (!__LIB_0__::func_75(&uLocal_614))
		{
			__LIB_1__::func_148(&uLocal_614);
		}
	}
	else if (__LIB_0__::func_75(&uLocal_614))
	{
		__LIB_0__::func_37(&uLocal_614);
	}
	if (__LIB_2__::func_227(0f, 1, iLocal_276[0], 1))
	{
		if (__LIB_1__::func_285(&uLocal_614, 10f))
		{
			if (!func_28(1024))
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STOPPED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_570 = true;
				func_32(1024);
				__LIB_1__::func_148(&uLocal_614);
			}
			else if (!func_28(2048))
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("STOPPED_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_570 = true;
				func_32(2048);
				__LIB_1__::func_148(&uLocal_614);
			}
			else
			{
				func_373(func_30("WALK_AWAY"));
			}
			__LIB_1__::func_148(&uLocal_635);
		}
	}
}

void func_173()
{
	if (iLocal_566 <= 0)
	{
		if (PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH() > 0)
		{
			iLocal_566 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
		}
		fLocal_568 = __LIB_3__::func_332(vLocal_578, 1);
		return;
	}
	if (__LIB_1__::func_285(&uLocal_626, 3f) || !__LIB_0__::func_75(&uLocal_626))
	{
		if (PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH() < iLocal_566)
		{
			bLocal_572 = false;
			iLocal_566 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
			__LIB_0__::func_37(&uLocal_629);
			__LIB_1__::func_148(&uLocal_626);
		}
		else if (__LIB_3__::func_332(vLocal_578, 1) < (fLocal_568 - 10f))
		{
			bLocal_572 = false;
			fLocal_568 = __LIB_3__::func_332(vLocal_578, 1);
			__LIB_0__::func_37(&uLocal_629);
			__LIB_1__::func_148(&uLocal_626);
		}
	}
	if (!__LIB_0__::func_75(&uLocal_629))
	{
		if (__LIB_1__::func_285(&uLocal_611, fLocal_567) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]))
		{
			if (PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH() > (iLocal_566 + __LIB_0__::func_55(bLocal_572, 10, 35)))
			{
				bLocal_572 = true;
				if (!func_28(16777216))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, "RE_LM_BGV_STR_V1_NO_RECOGNIZE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_566 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
					fLocal_568 = __LIB_3__::func_332(vLocal_578, 1);
					func_32(16777216);
				}
				else if (!func_28(33554432))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, "RE_LM_BGV_STR_WRONG_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_566 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
					fLocal_568 = __LIB_3__::func_332(vLocal_578, 1);
					func_32(33554432);
				}
				else if (!func_28(67108864))
				{
					__LIB_2__::func_478(iLocal_276[0], Global_35, "RE_LM_BGV_STR_WRONG_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_566 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
					fLocal_568 = __LIB_3__::func_332(vLocal_578, 1);
					func_32(67108864);
				}
				else
				{
					func_373("RE_LM_BGV_STR_WRONG_QUIT");
				}
				bLocal_570 = true;
				__LIB_1__::func_148(&uLocal_635);
				__LIB_1__::func_148(&uLocal_629);
			}
		}
	}
	else if (__LIB_1__::func_285(&uLocal_629, 8f))
	{
		iLocal_566 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
		fLocal_568 = __LIB_3__::func_332(vLocal_578, 1);
		__LIB_0__::func_37(&uLocal_629);
	}
}

void func_174(float fParam0)
{
	if ((fParam0 > 20f && fParam0 < 80f) && (__LIB_1__::func_285(&uLocal_638, 5f) || !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0])))
	{
		if ((__LIB_1__::func_285(&uLocal_617, 8f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 0.1f) || !__LIB_0__::func_75(&uLocal_617))
		{
			if (iLocal_565 == 10)
			{
				bLocal_573 = false;
			}
			__LIB_1__::func_148(&uLocal_617);
			if (!func_28(32))
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("WAIT_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_166();
				bLocal_570 = true;
				func_32(32);
				__LIB_1__::func_148(&uLocal_614);
			}
			else if (!func_28(64))
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("WAIT_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_166();
				bLocal_570 = true;
				func_32(64);
			}
			else if (!func_28(128))
			{
				__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("WAIT_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_166();
				bLocal_570 = true;
				func_32(128);
			}
			else
			{
				func_373(func_30("REJECT4"));
			}
			__LIB_1__::func_148(&uLocal_635);
		}
	}
}

void func_175()
{
	if (!bLocal_570)
	{
		if (func_374())
		{
			fLocal_567 = 0.3f;
			switch (iLocal_565)
			{
				case 0:
					__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("CONV_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 1:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_567 = 0.5f;
					break;
				case 2:
					__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("CONV_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 3:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 4:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_E"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_567 = 0.5f;
					break;
				case 5:
					__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("CONV_F"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 6:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_G"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_567 = 1.5f;
					break;
				case 7:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_H"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_567 = 2f;
					break;
				case 8:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_I"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 9:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("CONV_J"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 10:
					if (bLocal_573)
					{
						__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("CONV_K"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					fLocal_567 = 10f;
					break;
				case 11:
					__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("RECOGNIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
			}
			iLocal_565++;
			__LIB_1__::func_148(&uLocal_638);
		}
		else if ((!__LIB_0__::func_75(&uLocal_611) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			__LIB_1__::func_148(&uLocal_611);
		}
	}
	else if ((((((!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_276[0]) && !func_25(16384)) && !__LIB_0__::func_75(&uLocal_614)) && iLocal_565 < 12) && (!bLocal_572 || !func_28(33554432))) && (!__LIB_0__::func_75(&uLocal_602) || __LIB_1__::func_285(&uLocal_602, 7f))) && __LIB_1__::func_313(&uLocal_635, 5f))
	{
		if (iLocal_565 > 1 && iLocal_565 < 10)
		{
			__LIB_2__::func_478(iLocal_276[0], Global_35, func_30("SEGUE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		bLocal_570 = false;
		bLocal_571 = true;
		__LIB_0__::func_37(&uLocal_611);
		__LIB_0__::func_37(&uLocal_617);
		fLocal_567 = 2f;
	}
}

float func_176()
{
	float fVar0;
	if (__LIB_0__::func_86(vLocal_575))
	{
		return -1f;
	}
	fVar0 = (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_575, vLocal_578, true) - MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_276[0], true, false), vLocal_578, true));
	return fVar0;
}

void func_177()
{
	int iVar0;
	iVar0 = func_375(&(iLocal_276[0]), &iLocal_408, 15f, &Local_429, &(Local_49.f_192), 0f, 1, 0, 0, iLocal_481, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (__LIB_2__::func_456(&iLocal_408))
	{
		switch (iVar0)
		{
			case 0:
				switch (iLocal_482)
				{
					case 1:
						iLocal_484 = 1;
						__LIB_1__::func_148(&uLocal_608);
						bLocal_485 = true;
						func_32(2097152);
						break;
					case 2:
						iLocal_484 = 2;
						__LIB_1__::func_148(&uLocal_608);
						bLocal_485 = true;
						func_32(4194304);
						break;
					case 3:
						func_35(2);
						func_35(1);
						iLocal_481 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&iLocal_408, 0);
						__LIB_3__::func_152(Local_49.f_3);
						__LIB_0__::func_7(&Global_1935630, 4);
						__LIB_4__::func_71(5);
						break;
				}
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_276[0]);
				__LIB_2__::func_504(iLocal_276[0], 400);
				break;
			case 1:
				switch (iLocal_483)
				{
					case 4:
						if ((iLocal_16 == 11 || iLocal_16 == 8) || iLocal_16 == 7)
						{
							__LIB_4__::func_71(12);
						}
						else
						{
							if (!func_28(262144))
							{
								func_32(262144);
								iLocal_484 = 3;
							}
							else if (!func_28(524288))
							{
								func_32(524288);
								iLocal_484 = 4;
							}
							else if (!func_28(1048576))
							{
								func_32(1048576);
								iLocal_484 = 5;
							}
							bLocal_485 = true;
							__LIB_1__::func_148(&uLocal_608);
						}
						break;
					case 5:
						iLocal_481 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&iLocal_408, 0);
						func_35(1);
						__LIB_0__::func_325(&(uLocal_278[0]));
						TASK::CLEAR_PED_TASKS(iLocal_276[0], true, false);
						if (__LIB_2__::func_1(iLocal_276[0], 0, 1))
						{
							__LIB_1__::func_727(iLocal_276[0], 1);
						}
						if (!func_25(8192) && __LIB_4__::func_17(58))
						{
							__LIB_3__::func_465(1, 0, 0, 0, iLocal_276[0], 0, 1065353216 /* Float: 1f */, 0);
							func_35(8192);
						}
						switch (iLocal_564)
						{
							case 0:
								if (!__LIB_3__::func_582())
								{
									__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("REFUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("REFUSE_LOW_HONOR"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								vLocal_584 = { Global_36 };
								break;
							case 1:
								__LIB_2__::func_478(Global_35, iLocal_276[0], "RE_LM_BGV_STR_V1_BACKSTAY_NO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								vLocal_584 = { Global_36 };
								break;
							case 2:
								__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("REFUSE3"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 3:
								__LIB_2__::func_478(Global_35, iLocal_276[0], func_30("REFUSE4"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						__LIB_4__::func_71(6);
						break;
				}
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_276[0]);
				__LIB_2__::func_504(iLocal_276[0], 500);
				break;
		}
	}
}

bool func_371()
{
	if (__LIB_3__::func_332(vLocal_584, 1) > 8f)
	{
		if (func_25(32768))
		{
			if (__LIB_2__::func_118(iLocal_276[0], 1, 1) > 25f && (ENTITY::GET_ENTITY_SPEED(Global_35) > 3f || __LIB_2__::func_118(iLocal_276[0], 1, 1) > 40f))
			{
				return true;
			}
		}
		else if (__LIB_2__::func_118(iLocal_276[0], 1, 1) > 40f)
		{
			return true;
		}
	}
	return false;
}

void func_373(char* sParam0)
{
	__LIB_2__::func_504(iLocal_276[0], 0);
	__LIB_2__::func_478(iLocal_276[0], Global_35, sParam0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	__LIB_2__::func_526(&Local_429, 0, 0);
	func_35(512);
	__LIB_3__::func_465(1, 0, 0, 0, iLocal_276[0], 0, 1065353216 /* Float: 1f */, 0);
	__LIB_4__::func_71(15);
	__LIB_0__::func_37(&uLocal_617);
}

bool func_374()
{
	if ((iLocal_565 < 12 && __LIB_1__::func_285(&uLocal_611, fLocal_567)) && func_496())
	{
		bLocal_571 = false;
		__LIB_0__::func_37(&uLocal_611);
		return true;
	}
	return false;
}

int func_375(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_498(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_496()
{
	if (!bLocal_571)
	{
		if ((__LIB_2__::func_118(iLocal_276[0], 1, 1) > 15f || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.1f) || (bLocal_572 && !func_28(33554432)))
		{
			return false;
		}
	}
	return true;
}

int func_498(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_498(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

