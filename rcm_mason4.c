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
	int iLocal_15[3] = { 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41[3] = { 0, 0, 0 };
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<45> Local_48[3];
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 1097859072;
	var uLocal_231 = 1000;
	var uLocal_232 = 1067450368;
	var uLocal_233 = 5000;
	var uLocal_234 = 42;
	var uLocal_235 = 1103626240;
	var uLocal_236 = 1077936128;
	var uLocal_237 = 1106247680;
	var uLocal_238 = 1103101952;
	var uLocal_239 = 1097859072;
	var uLocal_240 = 1103626240;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<6> Local_252 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_258 = -1082130432;
	var uLocal_259 = 0;
	struct<4> Local_260[3];
	var uLocal_273[3] = { 0, 0, 0 };
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	float fLocal_293 = 0f;
	vector3 vLocal_294 = { 0f, 0f, 0f };
	vector3 vLocal_297 = { 0f, 0f, 0f };
	vector3 vLocal_300 = { 0f, 0f, 0f };
	vector3 vLocal_303 = { 0f, 0f, 0f };
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_309 = { 0f, 0f, 0f };
	vector3 vLocal_312 = { 0f, 0f, 0f };
	vector3 vLocal_315 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	vector3 vLocal_321 = { 0f, 0f, 0f };
	vector3 vLocal_324 = { 0f, 0f, 0f };
	vector3 vLocal_327 = { 0f, 0f, 0f };
	vector3 vLocal_330 = { 0f, 0f, 0f };
	vector3 vLocal_333 = { 0f, 0f, 0f };
	vector3 vLocal_336 = { 0f, 0f, 0f };
	vector3 vLocal_339 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	vector3 vLocal_345 = { 0f, 0f, 0f };
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_351 = { 0f, 0f, 0f };
	vector3 vLocal_354 = { 0f, 0f, 0f };
	float fLocal_357 = 0f;
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
	int iLocal_374 = 0;
	bool bLocal_375 = false;
	bool bLocal_376 = false;
	bool bLocal_377 = false;
	bool bLocal_378 = false;
	bool bLocal_379 = false;
	bool bLocal_380 = false;
	bool bLocal_381 = false;
	bool bLocal_382 = false;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	bool bLocal_386 = false;
	bool bLocal_387 = false;
	bool bLocal_388 = false;
	bool bLocal_389 = false;
	bool bLocal_390 = false;
	bool bLocal_391 = false;
	bool bLocal_392 = false;
	var uLocal_393 = 0;
	bool bLocal_394 = false;
	char* sLocal_395 = NULL;
	char* sLocal_396 = NULL;
	char* sLocal_397 = NULL;
	bool bLocal_398 = false;
	int iLocal_399 = 0;
	var uLocal_400 = 3;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 96;
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
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
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
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
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
	var uLocal_510 = 0;
	var uLocal_511 = 0;
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
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
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
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
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
	int iLocal_610 = 0;
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
	int iLocal_622 = 0;
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
	var uLocal_641 = 0;
	struct<4> Local_642[3];
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_184 = 12;
	iLocal_185 = 12;
	iLocal_186 = 12;
	iLocal_187 = 2;
	iLocal_243 = joaat("P_CS_CAMERABAG01X");
	iLocal_244 = joaat("P_CS_CAMERATRIPOD");
	iLocal_245 = joaat("P_CS_CAMERA");
	iLocal_246 = joaat("P_CAMERAFLASH01X");
	iLocal_247 = joaat("P_CS_SHUTTERRELEASE");
	iLocal_248 = joaat("ROWBOATSWAMP");
	iLocal_249 = joaat("A_C_ALLIGATOR_01");
	iLocal_250 = joaat("A_C_ALLIGATOR_01");
	iLocal_251 = joaat("A_C_BOAR_01");
	iLocal_288 = 3;
	fLocal_289 = 80f;
	fLocal_290 = 80f;
	fLocal_291 = 73.64f;
	fLocal_292 = -289.75f;
	fLocal_293 = 10000f;
	vLocal_294 = { 2381.263f, -575.597f, 39.9774f };
	vLocal_297 = { 2332.46f, -557.19f, 40.04f };
	vLocal_300 = { 2317.304f, -544.7225f, 40.36f };
	vLocal_303 = { 0.5f, -2.72f, 0.048f };
	vLocal_306 = { 0f, 4.56f, 100.02f };
	vLocal_309 = { 2388.37f, -578.15f, 40.81f };
	vLocal_312 = { 2383.01f, -576.65f, 40.53f };
	vLocal_315 = { 2373.17f, -495.2f, 40.55f };
	vLocal_318 = { 2382.45f, -493.08f, 40.61f };
	vLocal_321 = { 2382.98f, -580.51f, 42.09f };
	vLocal_324 = { 0.35f, -0.55f, -103.94f };
	vLocal_327 = { 2382.98f, -580.51f, 42.09f };
	vLocal_330 = { 0.35f, -0.55f, -103.94f };
	vLocal_333 = { 2382.98f, -580.51f, 42.09f };
	vLocal_336 = { 0.35f, -0.55f, -103.94f };
	vLocal_339 = { 2382.98f, -580.51f, 42.09f };
	vLocal_342 = { 0.35f, -0.55f, -103.94f };
	vLocal_345 = { 2382.76f, -581.15f, 40.89f };
	vLocal_348 = { 2.92f, -7.06f, -12.9f };
	vLocal_351 = { 2232.97f, -503.74f, 40.97f };
	vLocal_354 = { 2215.93f, -503.11f, 41.19f };
	fLocal_357 = 72.7735f;
	sLocal_395 = "script_rc@masn@leadin@rsc_7";
	sLocal_396 = "amb_creature_mammal@world_boar_grazing@base";
	sLocal_397 = "script_re@alligator_eats_boar";
	iLocal_665 = 512;
	iLocal_666 = 1;
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		__LIB_0__::func_7(&(Var0.f_172), 4096);
	}
	else
	{
		__LIB_0__::func_8(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_9(&Var0);
					break;
				case 3:
					func_10(&Var0);
					break;
				case 4:
					func_11(&Var0);
					break;
				case 2:
					func_12(&Var0);
					break;
				case 5:
					func_13(&Var0);
					break;
				case 6:
					func_14(&Var0);
					break;
				case 7:
					func_15(&Var0);
					break;
				case 8:
					func_16(&Var0);
					break;
				case 9:
					func_17(&Var0, 0);
					break;
				case 10:
					func_18(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_22(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_22(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (uParam0->f_174 == __LIB_10__::func_698())
	{
		bVar0 = true;
	}
	else if (__LIB_12__::func_738(uParam0))
	{
		bVar0 = true;
		__LIB_12__::func_638(uParam0, 128);
	}
	if (bVar0)
	{
		__LIB_12__::func_638(uParam0, 64);
		if (__LIB_4__::func_512())
		{
			__LIB_12__::func_638(uParam0, 128);
		}
		__LIB_0__::func_145(0, 0);
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		__LIB_12__::func_640(uParam0->f_174, 1);
		__LIB_12__::func_641(uParam0->f_174, 1);
	}
	__LIB_11__::func_196(uParam0->f_174);
	func_36(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_42(uParam0);
	__LIB_12__::func_918(uParam0, 1);
	iVar1 = __LIB_1__::func_976(uParam0);
	if (!__LIB_0__::func_1(uParam0->f_172, 8388608) && __LIB_12__::func_882(uParam0))
	{
		iVar1 = 4;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		}
	}
	__LIB_0__::func_769();
	__LIB_12__::func_837(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 16777216);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 14);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 33554432);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 15);
		}
		return;
	}
	if (func_53(uParam0))
	{
		return;
	}
	__LIB_0__::func_8(&(uParam0->f_172), 64);
	__LIB_0__::func_8(&(uParam0->f_172), 128);
	if (__LIB_0__::func_1(uParam0->f_172, 67108864))
	{
		__LIB_12__::func_868(1);
		__LIB_0__::func_8(&(uParam0->f_172), 67108864);
	}
	__LIB_12__::func_963(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 4096))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (!__LIB_0__::func_6(iVar0) || Global_1347702[uParam0->f_174 /*49*/].f_15 == iVar0)
		{
			__LIB_0__::func_8(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 8) && __LIB_12__::func_766())
	{
		if (uParam0->f_174 != 59 || !__LIB_1__::func_200(97))
		{
			if (uParam0->f_174 != 155 || !__LIB_1__::func_200(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (__LIB_12__::func_639(uParam0, 32))
			{
				if (!__LIB_12__::func_639(uParam0, 64))
				{
					if (!__LIB_0__::func_13(32768))
					{
						Var1 = { func_61(0) };
						if (func_62(&Var1))
						{
							__LIB_12__::func_791(uParam0, 32);
						}
					}
					else
					{
						__LIB_12__::func_791(uParam0, 32);
					}
				}
				else
				{
					__LIB_12__::func_791(uParam0, 32);
				}
			}
			if (func_64(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 9);
					return;
				}
			}
			else if (__LIB_0__::func_58(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 8);
					return;
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 131072))
			{
				if (!Global_1935630.f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 268435456))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1073741824 /* Float: 2f */))
			{
				__LIB_4__::func_516(1, 0);
			}
			__LIB_0__::func_11(uParam0);
		}
		else if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_12__::func_738(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
			if (func_70(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_12__::func_996(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_160(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, func_76(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_964(uParam0))
		{
		}
	}
}

void func_7(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2597)))
		{
			__LIB_1__::func_283(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_86(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_91(uParam0);
	if (__LIB_18__::func_741(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_13__::func_952(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (__LIB_12__::func_738(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		__LIB_12__::func_964(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_96(uParam0, __LIB_12__::func_767(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		__LIB_1__::func_164(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	func_99(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			__LIB_13__::func_29(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_13__::func_29(uParam0, 0);
		iVar0 = func_103(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	if (func_104(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_13__::func_178(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_107(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0[24];
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	if (uParam0->f_177 != 8)
	{
		__LIB_12__::func_837(uParam0, 8);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		__LIB_12__::func_643(uParam0, 0);
		if (__LIB_1__::func_241(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
				STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_76(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_872(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), 0);
			}
		}
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 262144))
		{
			__LIB_0__::func_496();
			__LIB_1__::func_323(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0);
		}
		__LIB_9__::func_830(uParam0->f_174, 1);
		__LIB_12__::func_869(uParam0);
		__LIB_5__::func_496(__LIB_0__::func_12(), 0);
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_5__::func_109(uParam0, 0, 1);
			if (__LIB_3__::func_736(uParam0->f_174, 128))
			{
				__LIB_3__::func_735(uParam0->f_174, 128);
			}
		}
		func_122(uParam0);
		if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				__LIB_0__::func_769();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				__LIB_5__::func_370(Global_1347702[uParam0->f_174 /*49*/].f_15);
				__LIB_5__::func_102();
				__LIB_0__::func_8(&Global_1935630, 8);
			}
			MemCopy(&cVar0, {Global_1347702[uParam0->f_174 /*49*/].f_1}, 3);
			StringConCat(&cVar0, "_obj", 24);
			if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4))
			{
				if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
					{
						__LIB_12__::func_883(uParam0, &cVar0, 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = __LIB_0__::func_513();
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				iVar4 = __LIB_12__::func_767(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = __LIB_0__::func_299(__LIB_12__::func_609(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = __LIB_12__::func_644(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = __LIB_0__::func_398(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1347702[uParam0->f_174 /*49*/].f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					__LIB_0__::func_297();
					__LIB_1__::func_140();
				}
			}
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
	{
		if (__LIB_12__::func_738(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_131();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_1__::func_837(1, 1);
			__LIB_0__::func_7(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_1__::func_954(1);
		__LIB_5__::func_116();
		__LIB_0__::func_320(6);
		__LIB_0__::func_319(4096);
	}
	func_72(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_22(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	__LIB_12__::func_837(uParam0, 9);
	if (__LIB_12__::func_644(uParam0) != 1)
	{
		__LIB_12__::func_643(uParam0, 1);
		if (__LIB_3__::func_736(uParam0->f_174, 128))
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		__LIB_0__::func_11(uParam0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	__LIB_9__::func_830(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == __LIB_10__::func_698())
		{
			__LIB_0__::func_297();
			__LIB_1__::func_140();
		}
	}
	else
	{
		bVar0 = false;
		if (__LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || __LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			if (!__LIB_0__::func_75(&(uParam0->f_2597)))
			{
				__LIB_1__::func_283(&(uParam0->f_2597), 0);
			}
			__LIB_0__::func_11(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					__LIB_1__::func_193(1, 1);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			else if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (__LIB_0__::func_1(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (__LIB_0__::func_1(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		__LIB_1__::func_611(Global_1347702[uParam0->f_174 /*49*/].f_15, iVar3, &(uParam0->f_2578), __LIB_12__::func_793(uParam0), 0, bVar0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 8);
	}
	if (__LIB_12__::func_648(&(uParam0->f_2605)))
	{
		__LIB_12__::func_768(uParam0);
	}
	__LIB_1__::func_645(Global_1347702[uParam0->f_174 /*49*/].f_15);
	bParam1 = true;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (Global_1347702[uParam0->f_174 /*49*/].f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37);
		uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
		__LIB_12__::func_613(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar1 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar1))
		{
			__LIB_0__::func_11(uParam0);
			func_22(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_22(uParam0);
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_159(uParam0);
	__LIB_3__::func_319(uParam0->f_751);
	__LIB_12__::func_739(uParam0);
	__LIB_12__::func_907(uParam0);
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_0__::func_698(2);
	iVar0 = 0;
	bVar2 = false;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		__LIB_12__::func_784(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	else
	{
		__LIB_2__::func_788(&(Global_1347702[uParam0->f_174 /*49*/].f_43), 1, 0, 1);
	}
	Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	__LIB_12__::func_652(uParam0);
	__LIB_12__::func_653(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_8__::func_993(uParam0->f_174);
	}
	if (__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		__LIB_1__::func_559(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
	}
	__LIB_13__::func_29(uParam0, 0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	if (Global_1347702[uParam0->f_174 /*49*/].f_35 != -1)
	{
		__LIB_12__::func_654(uParam0->f_174, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && __LIB_0__::func_298(0) == Global_1888801[16 /*35*/])
		{
			__LIB_4__::func_838(uParam0->f_174, 8192);
		}
	}
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 32768);
	__LIB_12__::func_949(uParam0);
	__LIB_0__::func_769();
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	__LIB_4__::func_509(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_36(var uParam0)
{
	__LIB_12__::func_658(uParam0, 1);
	__LIB_12__::func_659(uParam0, 8);
	func_187();
	if (__LIB_12__::func_936(uParam0))
	{
		__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	}
	iLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2327.858f, -551.0168f, 41.63132f, 0f, 0f, 0f, 149.4771f, 145.2213f, 13.73127f, "MASN4 Block");
	POPULATION::_0xB56D41A694E42E86(iLocal_27, 4096, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_27, 4096, 0, 0, -1, -1, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2381.175f, -574.6636f, 41.06159f, 0f, 0f, 0f, 11.46849f, 11.13567f, 6.027081f, "MASN4 cutscene");
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, iLocal_249, 2);
	__LIB_12__::func_867(uParam0, iLocal_250, 2);
	__LIB_12__::func_867(uParam0, iLocal_248, 7);
	__LIB_12__::func_867(uParam0, iLocal_243, 7);
	__LIB_12__::func_867(uParam0, iLocal_245, 7);
	__LIB_12__::func_867(uParam0, iLocal_244, 7);
	__LIB_12__::func_867(uParam0, iLocal_246, 7);
	__LIB_12__::func_867(uParam0, iLocal_247, 7);
	__LIB_12__::func_867(uParam0, iLocal_251, 2);
	__LIB_13__::func_55(uParam0, sLocal_395, 7);
	__LIB_13__::func_55(uParam0, sLocal_396, 2);
	__LIB_13__::func_55(uParam0, sLocal_397, 2);
	__LIB_12__::func_908(uParam0, 0);
	func_195();
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_53(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return true;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((__LIB_0__::func_6(iVar0) && iVar0 == Global_1347702[uParam0->f_174 /*49*/].f_15) && __LIB_0__::func_1(uParam0->f_172, 8)) && (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 134217728) || __LIB_0__::func_13(32768)))
			{
				bVar1 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, bVar1);
			break;
	}
	return false;
}

struct<4> func_61(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { 2378.169f, -575.6722f, 40.2f };
			Var1.f_3 = 61.8843f;
			break;
		case 1:
		case 2:
		case 3:
			Var1 = { 2325.241f, -557.0483f, 40.2f };
			Var1.f_3 = 43.1307f;
			break;
		case 4:
			Var1 = { 2364.552f, -561.5246f, 40.36f };
			Var1.f_3 = 264f;
			break;
		case 5:
			Var1 = { 2378.16f, -577.67f, 40.2f };
			Var1.f_3 = 160f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_205(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_14, 1) || FIRE::IS_ENTITY_ON_FIRE(iLocal_14))
	{
		__LIB_4__::func_63(iLocal_14, 0);
		StringCopy(&(uParam0->f_2578), "MASON4_F_MASN", 24);
		return true;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_26, false, false))
	{
		StringCopy(&(uParam0->f_2578), "MASON4_F_BOAT", 24);
		return true;
	}
	if (func_208(uParam0))
	{
		if (iLocal_186 == 0 || iLocal_186 == 4)
		{
			StringCopy(&(uParam0->f_2578), "MASON4_F_WARN1", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "MASON4_F_WARN2", 24);
		}
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		StringCopy(&(uParam0->f_2578), "MASON_F_LAW", 24);
		return true;
	}
	if (iLocal_284 >= 2)
	{
		switch (iLocal_191)
		{
			case 0:
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_12__::func_876(uParam0, "RMASN_4_KILLFL", 0))
				{
					iLocal_191 = 1;
				}
				break;
			case 1:
				if (!__LIB_8__::func_684("RMASN_4_KILLFL"))
				{
					StringCopy(&(uParam0->f_2578), "MASON4_F_ENDED", 24);
					return true;
				}
				break;
		}
	}
	if (iLocal_280 == 0)
	{
		if (func_214() == 0)
		{
			StringCopy(&(uParam0->f_2578), "MASON4_F_PHOTO", 24);
			return true;
		}
	}
	return false;
}

bool func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_382(64))
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	else if (__LIB_1__::func_927())
	{
		return false;
	}
	else if (Global_1310720.f_6)
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && __LIB_12__::func_769(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_12__::func_643(uParam0, 12);
			return true;
		}
	}
	if (func_217(uParam0->f_174))
	{
		__LIB_12__::func_643(uParam0, 13);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (Global_1347702[uParam0->f_174 /*49*/].f_17 * Global_1347702[uParam0->f_174 /*49*/].f_17))
		{
			__LIB_12__::func_643(uParam0, 2);
			return true;
		}
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 65536) && !__LIB_9__::func_138(uParam0->f_174))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 16384);
		__LIB_12__::func_643(uParam0, 3);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 8388608 != 0)
	{
		iVar1 = __LIB_11__::func_128(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_730(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
			else if (__LIB_3__::func_151(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_45 != -1)
	{
		if (__LIB_0__::func_730(Global_1347702[uParam0->f_174 /*49*/].f_45))
		{
			__LIB_4__::func_838(uParam0->f_174, 2048);
			__LIB_12__::func_643(uParam0, 6);
			return true;
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_46 != 0)
	{
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 268435456 == 0)
		{
			iVar2 = __LIB_2__::func_954();
			if (!__LIB_12__::func_614(iVar2, Global_1347702[uParam0->f_174 /*49*/].f_46))
			{
				__LIB_12__::func_643(uParam0, 7);
				return true;
			}
		}
	}
	if (Global_1357549.f_1614 == 1)
	{
		__LIB_12__::func_643(uParam0, 8);
		return true;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_4__::func_838(uParam0->f_174, 16384);
			__LIB_12__::func_643(uParam0, 9);
			return true;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !__LIB_12__::func_778(uParam0->f_174, 1, 1, 0, 0))
	{
		__LIB_12__::func_643(uParam0, 10);
		return true;
	}
	if (func_226(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 1024);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	if (!__LIB_0__::func_58(uParam0) && __LIB_10__::func_270(uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 8192);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	return false;
}

void func_72(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	func_231(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_74(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if ((__LIB_0__::func_1(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 256);
			__LIB_3__::func_319(uParam0->f_751);
			func_246(uParam0);
		}
		else
		{
			__LIB_12__::func_838(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (__LIB_12__::func_882(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 16))
			{
				cVar0 = { __LIB_0__::func_134() };
				Var8 = { __LIB_12__::func_665(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					__LIB_12__::func_909(&(uParam0->f_206));
					__LIB_12__::func_839(&(uParam0->f_206), &cVar0);
				}
			}
			__LIB_0__::func_7(&(uParam0->f_172), 256);
		}
	}
}

int func_76(var uParam0)
{
	return iLocal_399;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_271(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_86(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			__LIB_3__::func_727(uParam0->f_174, 128);
		}
		else
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
			{
				__LIB_7__::func_602(uParam0->f_174);
				__LIB_10__::func_822(uParam0->f_174);
			}
		}
		else
		{
			__LIB_10__::func_694(Global_1347702[uParam0->f_174 /*49*/]);
			__LIB_7__::func_602(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174), 0, "");
		}
	}
	if (!__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		if (!__LIB_0__::func_702(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			__LIB_1__::func_298(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		__LIB_1__::func_821(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_12__::func_667(uParam0);
	__LIB_0__::func_7(&(uParam0->f_172), 8);
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		__LIB_12__::func_868(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		__LIB_0__::func_112(1, 16384, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 67108864);
	}
	__LIB_5__::func_109(uParam0, 1, 0);
	__LIB_1__::func_723(1);
	__LIB_1__::func_564(1);
	__LIB_12__::func_770();
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_12__::func_898(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
	if (__LIB_12__::func_882(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 256);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8388608) || !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_12__::func_918(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(Global_1347702[uParam0->f_174 /*49*/].f_3));
	HUD::SET_MISSION_NAME(true, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_0__::func_11(uParam0);
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		if (!__LIB_0__::func_13(32768))
		{
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
			{
				__LIB_12__::func_638(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (__LIB_12__::func_871(uParam0))
	{
		iVar5 = __LIB_12__::func_767(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0, iVar5, __LIB_12__::func_639(uParam0, 64));
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_290(uParam0, 0, 0);
}

void func_91(var uParam0)
{
	func_291(uParam0, &iLocal_14, &uLocal_598, &uLocal_400, 0, 5, 20f, 3f, 5f, 0);
}

int func_96(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = true;
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	iVar1 = iParam1;
	vVar2 = { func_61(iParam1) };
	if (!func_296(uParam0))
	{
		bVar0 = false;
	}
	if (!func_297())
	{
		bVar0 = false;
	}
	if (!func_298())
	{
		bVar0 = false;
	}
	if (!func_299())
	{
		bVar0 = false;
	}
	if (!func_300())
	{
		bVar0 = false;
	}
	if (!func_301())
	{
		bVar0 = false;
	}
	iLocal_664 = 0;
	if (!bVar0)
	{
		return 2;
	}
	__LIB_3__::func_319(iLocal_286);
	if (ENTITY::_IS_ENTITY_FROZEN(iLocal_26))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_26, vVar2, fLocal_291, true, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_26);
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_35, vVar2, false, true, true);
	if (!__LIB_0__::func_75(&uLocal_192))
	{
		__LIB_1__::func_148(&uLocal_192);
	}
	if (__LIB_0__::func_264(&uLocal_192) < 2.5f)
	{
		return 2;
	}
	switch (iVar1)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_290(uParam0, 0, 0);
				}
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (!bVar0)
				{
					return 2;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_22))
				{
					func_303();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
				{
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, true);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_26, vVar2, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_26, vVar2.f_3);
				func_304(0);
				func_305(&Global_35, &iLocal_26, -1, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
				func_305(&iLocal_14, &iLocal_26, 0, 1);
				func_306(uParam0, 12);
				func_306(uParam0, 0);
				func_306(uParam0, 2);
				if (func_307(1, "pbl_idle"))
				{
					func_308();
				}
				else
				{
					return 2;
				}
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_22))
			{
				func_303();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, true);
			}
			func_304(0);
			func_305(&iLocal_14, &iLocal_26, 0, 1);
			func_305(&Global_35, &iLocal_26, -1, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
			ENTITY::SET_ENTITY_COORDS(iLocal_26, vVar2, true, false, true, true);
			func_310(uParam0, 1);
			func_306(uParam0, 12);
			func_306(uParam0, 0);
			func_306(uParam0, 2);
			__LIB_13__::func_638(&uLocal_400, 6);
			if (func_307(1, "pbl_idle"))
			{
				func_308();
			}
			else
			{
				return 2;
			}
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 2:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_22))
			{
				func_303();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, true);
			}
			func_305(&iLocal_14, &iLocal_26, 0, 1);
			func_305(&Global_35, &iLocal_26, -1, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_26, vVar2, false, true, true);
			func_310(uParam0, 2);
			func_306(uParam0, 12);
			func_306(uParam0, 0);
			func_306(uParam0, 2);
			if (func_307(1, "pbl_idle"))
			{
				func_308();
			}
			else
			{
				return 2;
			}
			__LIB_13__::func_638(&uLocal_400, 6);
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 3:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_22))
			{
				func_303();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, true);
			}
			iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2375.695f, -575.037f, 40.65823f, 0f, 0f, -20.15151f, 4.22899f, 6.990384f, 3.710475f, "Boat no-climb area");
			PED::_0x7C00CFC48A782DC0(iLocal_34, iLocal_14, 0f, 0.85f, 0f, 0f, 0f, -93f, 2, 1);
			iLocal_35 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2363.239f, -566.3253f, 41.09136f, 0f, 0f, -36.33905f, 1f, 1f, 1.518154f);
			PED::_0x7C00CFC48A782DC0(iLocal_35, iLocal_14, 0f, 0.75f, 0f, 0f, 0f, 0f, 2, 1);
			func_304(4);
			func_304(5);
			func_304(7);
			func_304(6);
			func_304(1);
			func_304(2);
			func_304(3);
			func_305(&iLocal_14, &iLocal_26, 0, 1);
			func_305(&Global_35, &iLocal_26, -1, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_26, vVar2, 270.59f, false, true);
			func_310(uParam0, 3);
			func_306(uParam0, 12);
			func_306(uParam0, 0);
			func_306(uParam0, 2);
			func_306(uParam0, 9);
			if (func_307(1, "pbl_missionsuccess_packup"))
			{
				func_308();
			}
			else
			{
				return 2;
			}
			__LIB_13__::func_638(&uLocal_400, 6);
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 4:
			if (!bVar0)
			{
				return 2;
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 16))
			{
				func_290(uParam0, 1, 1);
			}
			else if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_22))
			{
				func_303();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, true);
			}
			func_305(&iLocal_14, &iLocal_26, 0, 1);
			func_305(&Global_35, &iLocal_26, -1, 1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_26, vVar2, 250f, false, true);
			iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2375.695f, -575.037f, 40.65823f, 0f, 0f, -20.15151f, 4.22899f, 6.990384f, 3.710475f, "Boat no-climb area");
			PED::_0x7C00CFC48A782DC0(iLocal_34, iLocal_14, 0f, 0.85f, 0f, 0f, 0f, -93f, 2, 1);
			iLocal_35 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2363.239f, -566.3253f, 41.09136f, 0f, 0f, -36.33905f, 1f, 1f, 1.518154f);
			PED::_0x7C00CFC48A782DC0(iLocal_35, iLocal_14, 0f, 0.75f, 0f, 0f, 0f, 0f, 2, 1);
			func_310(uParam0, 3);
			func_306(uParam0, 12);
			func_306(uParam0, 0);
			func_306(uParam0, 2);
			func_306(uParam0, 9);
			func_306(uParam0, 11);
			__LIB_13__::func_62(uParam0, func_61(4), func_61(5), 4, 5, 0);
			return 5;
		case 5:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_22))
			{
				func_303();
			}
			func_305(&iLocal_14, &iLocal_26, -1, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_26, vVar2, false, true, true);
			if (__LIB_2__::func_343(Global_35, iLocal_26, 0))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_309, 34.4847f, true, false, true);
			func_306(uParam0, 12);
			func_306(uParam0, 0);
			func_306(uParam0, 2);
			func_306(uParam0, 9);
			func_306(uParam0, 10);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_13__::func_105(1, 1);
			return 8;
		default:
			break;
	}
	return 2;
}

bool func_98(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
		MISC::_0xA565FAC215CBC77D();
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_178(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_6(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_99(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

int func_101(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_325(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_187)
	{
		case 0:
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			func_303();
			func_308();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, true);
			}
			func_306(uParam0, 2);
			break;
		case 1:
			__LIB_13__::func_33(uParam0, -1);
			func_303();
			func_330();
			func_306(uParam0, 10);
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	int iVar0;
	bool bVar1;
	__LIB_13__::func_928();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 319, true);
	}
	if (ENTITY::_IS_ENTITY_FROZEN(iLocal_26))
	{
		if (iLocal_184 != 3)
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, false);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_26);
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_34))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_14, -1))
		{
			iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2375.695f, -575.037f, 40.65823f, 0f, 0f, -20.15151f, 4.22899f, 6.990384f, 3.710475f, "Boat no-climb area");
			PED::_0x7C00CFC48A782DC0(iLocal_34, iLocal_14, 0f, 0.85f, 0f, 0f, 0f, -93f, 2, 1);
		}
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_34, 1, 0) && !PED::IS_PED_ON_VEHICLE(Global_35, false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_35))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_14, -1))
		{
			iLocal_35 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2363.239f, -566.3253f, 41.09136f, 0f, 0f, -36.33905f, 1f, 1f, 1.518154f);
			PED::_0x7C00CFC48A782DC0(iLocal_35, iLocal_14, 0f, 0.75f, 0f, 0f, 0f, 0f, 2, 1);
		}
	}
	if (__LIB_2__::func_343(Global_35, iLocal_26, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_VEH_EXIT")) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
		{
			TASK::TASK_LEAVE_VEHICLE(Global_35, iLocal_26, 67108864, 0);
		}
	}
	func_336();
	iVar0 = 0;
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	func_337(uParam0);
	if ((iLocal_184 != 0 && iLocal_184 != 1) && !func_338())
	{
		if (!__LIB_2__::func_343(Global_35, iLocal_26, 0) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_26))
		{
			func_306(uParam0, 0);
		}
	}
	if (__LIB_2__::func_343(Global_35, iLocal_26, 1))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 200, true);
	}
	func_339();
	func_340(uParam0);
	func_341();
	if (func_342(uParam0))
	{
		return 7;
	}
	func_343(uParam0);
	func_344(uParam0);
	if (bLocal_391)
	{
	}
	switch (iLocal_184)
	{
		case 0:
			func_345(uParam0);
			break;
		case 2:
			func_346();
			if (!bLocal_366)
			{
				if (__LIB_1__::func_185(16))
				{
					bLocal_366 = true;
				}
				else if (__LIB_0__::func_45("MASON4_H_BOAT", 10000, 0, 0, 0, 1) != 0)
				{
					bLocal_366 = true;
				}
			}
			if (iLocal_280 == 0)
			{
				func_349(uParam0, 1, 0);
			}
			else if (iLocal_280 == 1)
			{
				func_349(uParam0, 2, 0);
			}
			else
			{
				func_349(uParam0, 4, 0);
			}
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (iLocal_184 == 2)
				{
					if (__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1) && !Local_48[iVar0 /*45*/].f_39)
					{
						bVar1 = false;
					}
				}
				if (func_350(uParam0, iVar0))
				{
				}
				else
				{
					iVar0++;
				}
			}
			if (bVar1)
			{
				func_306(uParam0, 9);
			}
			break;
		case 3:
			func_351(uParam0);
			break;
		case 4:
			func_352(uParam0, 0);
			break;
		case 5:
			func_353(uParam0, 1);
			break;
		case 6:
			func_352(uParam0, 1);
			break;
		case 7:
			func_353(uParam0, 2);
			break;
		case 8:
			func_352(uParam0, 2);
			break;
		case 9:
			if (func_354(uParam0))
			{
			}
			break;
		case 1:
			func_355(uParam0);
			break;
		case 10:
			return 8;
		case 11:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!__LIB_0__::func_75(&uLocal_210))
			{
				__LIB_1__::func_148(&uLocal_210);
			}
			else if (__LIB_0__::func_264(&uLocal_210) > 2.5f)
			{
				return 5;
			}
			break;
		case 12:
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	__LIB_12__::func_654(uParam0->f_174, 1);
	__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26) && VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
	{
		VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
	}
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_3__::func_727(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!__LIB_0__::func_13(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!__LIB_0__::func_113())
		{
			Global_1347702[iParam0 /*49*/].f_35 = 104;
			Global_1347702[104 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
	}
	__LIB_12__::func_969(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_12__::func_899(Global_1347702[iParam0 /*49*/].f_35);
		if (iParam1 == 1)
		{
			__LIB_4__::func_471(Global_1347702[iParam0 /*49*/].f_35, 0);
			if (__LIB_11__::func_197(iParam0))
			{
				Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43 = Global_1347702[iParam0 /*49*/].f_43;
			}
		}
	}
	else
	{
		__LIB_12__::func_628();
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1) && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 33554432))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 262144))
		{
			if (bParam5)
			{
				__LIB_10__::func_709(iParam0);
			}
			bParam5 = false;
			cVar0 = __LIB_1__::func_613(Global_1347702[iParam0 /*49*/].f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cVar0), 2);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_391(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_395(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_150(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (__LIB_0__::func_272(iLocal_14, 1))
	{
		if (__LIB_0__::func_48(Global_35, iLocal_14, 100f, 0))
		{
			bVar0 = false;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
	{
		if (__LIB_0__::func_48(Global_35, iLocal_26, 100f, 1))
		{
			bVar0 = false;
		}
	}
	if (__LIB_6__::func_904())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return true;
	}
	func_330();
	if (func_420(uParam0, &uLocal_400, 67, &iLocal_14, &uLocal_393))
	{
		return false;
	}
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (__LIB_2__::func_343(Global_35, iLocal_26, 0) || PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_26))
			{
				func_291(uParam0, &iLocal_14, &uLocal_606, &uLocal_400, 53, 55, 15f, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */, 0);
			}
			else
			{
				if (!__LIB_0__::func_163(iLocal_14, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_BOAT_MISSION(0, iLocal_26, 0, 0, 2335.41f, -563.59f, 40.57f, 4, 2f, 524419, 10f, 1180);
					TASK::TASK_BOAT_MISSION(0, iLocal_26, 0, 0, 2268.59f, -625.27f, 40.54f, 4, 2f, 524419, 10f, 1180);
					TASK::TASK_BOAT_MISSION(0, iLocal_26, 0, 0, 2209.08f, -691.15f, 40.48f, 9, 2f, 524419, 10f, 1180);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_26, 2f, 524419);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
				if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 15f && ENTITY::IS_ENTITY_IN_WATER(Global_35))
				{
					func_291(uParam0, &iLocal_14, &uLocal_602, &uLocal_400, 50, 52, 15f, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */, 0);
				}
			}
			break;
		case 11:
			__LIB_13__::func_993(&iLocal_14, &uLocal_393);
			if ((__LIB_13__::func_109(iLocal_14, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && !__LIB_6__::func_904()) && __LIB_0__::func_94(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1) > 75f)
			{
				return true;
			}
			break;
		case 1:
			if ((__LIB_13__::func_109(iLocal_14, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && !__LIB_6__::func_904()) && __LIB_0__::func_94(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1) > 75f)
			{
				return true;
			}
			break;
		case 3:
			__LIB_13__::func_995(uParam0, &uLocal_400, 75, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0);
			if ((__LIB_13__::func_109(iLocal_14, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && !__LIB_6__::func_904()) && __LIB_0__::func_94(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1) > 75f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_159(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	func_426(uParam0);
	__LIB_2__::func_788(&iLocal_14, 1, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_26, false, false) };
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_26, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_26, true);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_248);
		if (__LIB_0__::func_665(Global_35, iLocal_26, 1, 1) < 50f)
		{
			__LIB_10__::func_284(&iLocal_26);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_26);
			__LIB_1__::func_572(vVar0, 10f, 0, 0, 0, 0, 0);
		}
	}
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_21);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_21);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_22);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_22);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_23);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_24);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_24);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_25);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_25);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_251);
	PED::_0x58F7DB5BD8FA2288(Global_35);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	STREAMING::REMOVE_PTFX_ASSET();
	__LIB_0__::func_172(iLocal_32);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		__LIB_2__::func_353(&(uLocal_273[iVar3]), 1);
		iVar3++;
	}
	__LIB_2__::func_353(&uLocal_277, 1);
	__LIB_2__::func_353(&uLocal_278, 1);
	if (__LIB_3__::func_746(iLocal_279))
	{
		GRAPHICS::_0xAE7BF7CA9E4BA48D(iLocal_279);
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_395);
	STREAMING::REMOVE_ANIM_DICT(sLocal_396);
	STREAMING::REMOVE_ANIM_DICT(sLocal_397);
	__LIB_3__::func_319(iLocal_286);
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		__LIB_3__::func_319(Local_260[iVar4 /*4*/]);
		iVar4++;
	}
}

void func_187()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	__LIB_13__::func_634(&uLocal_400);
	__LIB_13__::func_919(&uLocal_400, 0, "RMASN_4_CAM");
	__LIB_13__::func_919(&uLocal_400, 1, "RMASN_4_CAM");
	__LIB_13__::func_919(&uLocal_400, 2, "RMASN_4_CAM");
	__LIB_13__::func_919(&uLocal_400, 3, "RMASN_4_CAM");
	__LIB_13__::func_919(&uLocal_400, 4, "RMASN_4_CAM");
	__LIB_13__::func_919(&uLocal_400, 5, "RMASN_4_CAM");
	if (__LIB_0__::func_181())
	{
		sVar0 = "RMSN_4_BANT1J";
	}
	else
	{
		sVar0 = "RMSN_4_BANT1";
	}
	__LIB_13__::func_919(&uLocal_400, 7, sVar0);
	if (__LIB_0__::func_181())
	{
		sVar1 = "RMSN_4_BANT2J";
	}
	else
	{
		sVar1 = "RMSN_4_BANT2";
	}
	__LIB_13__::func_919(&uLocal_400, 8, sVar1);
	if (__LIB_0__::func_181())
	{
		sVar2 = "RMSN_4_BANT3J";
	}
	else
	{
		sVar2 = "RMSN_4_BANT3";
	}
	__LIB_13__::func_919(&uLocal_400, 9, sVar2);
	if (__LIB_0__::func_181())
	{
		sVar3 = "RMSN_4_BANTF_J";
	}
	else
	{
		sVar3 = "RMSN_4_BANTF_A";
	}
	__LIB_13__::func_919(&uLocal_400, 10, sVar3);
	__LIB_13__::func_919(&uLocal_400, 14, "RMASN_RC4_PTFR2");
	__LIB_13__::func_919(&uLocal_400, 15, "RMASN_RC4_PTFR3");
	__LIB_13__::func_919(&uLocal_400, 16, "RMASN_RC4_PTFR2");
	__LIB_13__::func_919(&uLocal_400, 17, "RMASN_RC4_PTFR3");
	__LIB_13__::func_919(&uLocal_400, 18, "RMASN_RC4_PTFL1");
	__LIB_13__::func_919(&uLocal_400, 19, "RMASN_RC4_PTFL2");
	__LIB_13__::func_919(&uLocal_400, 28, "RMASN_CLSR_1");
	__LIB_13__::func_919(&uLocal_400, 29, "RMASN_CLSR_2");
	__LIB_13__::func_919(&uLocal_400, 30, "RMASN_CLSR_3");
	__LIB_13__::func_919(&uLocal_400, 31, "RMASN_CLSR_4");
	__LIB_13__::func_919(&uLocal_400, 32, "RMASN_CLSR_5");
	__LIB_13__::func_919(&uLocal_400, 33, "RMASN_CLSR_6");
	__LIB_13__::func_919(&uLocal_400, 21, "RMASN_SPT_N_TRN");
	__LIB_13__::func_919(&uLocal_400, 20, "RMASN_SPT_W_TRN");
	__LIB_13__::func_919(&uLocal_400, 22, "RMASN_4_TURN");
	__LIB_13__::func_919(&uLocal_400, 23, "RMASN_4_TURN");
	__LIB_13__::func_919(&uLocal_400, 24, "RMASN_4_TURN");
	__LIB_13__::func_919(&uLocal_400, 25, "RMASN_4_TURN");
	__LIB_13__::func_919(&uLocal_400, 26, "RMASN_4_TURN");
	__LIB_13__::func_919(&uLocal_400, 27, "RMASN_4_TURN");
	__LIB_13__::func_919(&uLocal_400, 34, "RMASN_GATR1");
	__LIB_13__::func_919(&uLocal_400, 35, "RMASN_GATR2");
	__LIB_13__::func_919(&uLocal_400, 36, "RMASN_GATR3");
	__LIB_13__::func_919(&uLocal_400, 37, "RMASN_GATR4");
	if (__LIB_0__::func_181())
	{
		sVar4 = "RMASN_SPT_S1_J";
	}
	else
	{
		sVar4 = "RMASN_SPT_S1_A";
	}
	__LIB_13__::func_919(&uLocal_400, 38, sVar4);
	__LIB_13__::func_919(&uLocal_400, 39, "RMASN_GPIC1");
	__LIB_13__::func_919(&uLocal_400, 40, "RMASN_RC4_PHOT1");
	__LIB_13__::func_919(&uLocal_400, 50, "RMSN_4_SWIM");
	__LIB_13__::func_919(&uLocal_400, 51, "RMSN_4_SWIM");
	__LIB_13__::func_919(&uLocal_400, 52, "RMSN_4_SWIM");
	__LIB_13__::func_919(&uLocal_400, 53, "RMSN_4_BOAT");
	__LIB_13__::func_919(&uLocal_400, 54, "RMSN_4_BOAT");
	__LIB_13__::func_919(&uLocal_400, 55, "RMSN_4_BOAT");
	__LIB_13__::func_919(&uLocal_400, 56, "RMASN_4_WRN1");
	__LIB_13__::func_919(&uLocal_400, 57, "RMASN_4_WRN2");
	__LIB_13__::func_919(&uLocal_400, 58, "RMASN_4_WRN3");
	__LIB_13__::func_919(&uLocal_400, 59, "RMASN_4_WRN4");
	if (__LIB_0__::func_181())
	{
		__LIB_13__::func_919(&uLocal_400, 6, "RMASN_4_DIR_J");
		__LIB_13__::func_919(&uLocal_400, 11, "RMASN_SPT_GO_J");
		__LIB_13__::func_919(&uLocal_400, 41, "RMASN_G1_GPIC3J");
		__LIB_13__::func_919(&uLocal_400, 60, "RMASN_SHORE_J");
		__LIB_13__::func_919(&uLocal_400, 42, "RMASN_G1_CALL_J");
		__LIB_13__::func_919(&uLocal_400, 43, "RMASN_G1_CALL_J");
		__LIB_13__::func_919(&uLocal_400, 44, "RMASN_G1_CALL_J");
		__LIB_13__::func_919(&uLocal_400, 45, "RMASN_G1_CALL_J");
		__LIB_13__::func_919(&uLocal_400, 46, "RMASN_G1_CHS_J");
		__LIB_13__::func_919(&uLocal_400, 47, "RMASN_G1_CHS_J");
		__LIB_13__::func_919(&uLocal_400, 48, "RMASN_G1_CHS_J");
		__LIB_13__::func_919(&uLocal_400, 64, "RMASN_4_KILL1_J");
		__LIB_13__::func_919(&uLocal_400, 65, "RMASN_4_KILL2_J");
		__LIB_13__::func_919(&uLocal_400, 66, "RMASN_4_KILL3_J");
	}
	else
	{
		__LIB_13__::func_919(&uLocal_400, 6, "RMASN_4_DIR_A");
		__LIB_13__::func_919(&uLocal_400, 11, "RMASN_SPT_GO_A");
		__LIB_13__::func_919(&uLocal_400, 41, "RMASN_G1_GPIC3A");
		__LIB_13__::func_919(&uLocal_400, 60, "RMASN_SHORE");
		__LIB_13__::func_919(&uLocal_400, 42, "RMASN_G1_CALL_A");
		__LIB_13__::func_919(&uLocal_400, 43, "RMASN_G1_CALL_A");
		__LIB_13__::func_919(&uLocal_400, 44, "RMASN_G1_CALL_A");
		__LIB_13__::func_919(&uLocal_400, 45, "RMASN_G1_CALL_A");
		__LIB_13__::func_919(&uLocal_400, 46, "RMASN_G1_CHS_A");
		__LIB_13__::func_919(&uLocal_400, 47, "RMASN_G1_CHS_A");
		__LIB_13__::func_919(&uLocal_400, 48, "RMASN_G1_CHS_A");
		__LIB_13__::func_919(&uLocal_400, 64, "RMASN_4_KILL1_A");
		__LIB_13__::func_919(&uLocal_400, 65, "RMASN_4_KILL2_A");
		__LIB_13__::func_919(&uLocal_400, 66, "RMASN_4_KILL3_A");
	}
	__LIB_13__::func_919(&uLocal_400, 49, "RMASN_G1_IN");
	__LIB_13__::func_919(&uLocal_400, 12, "RMASN_SPT_L1");
	__LIB_13__::func_919(&uLocal_400, 13, "RMASN_SPT_L2");
	__LIB_13__::func_919(&uLocal_400, 61, "RMASN_RC4_HIT1");
	__LIB_13__::func_919(&uLocal_400, 62, "RMASN_RC4_HIT2");
	__LIB_13__::func_919(&uLocal_400, 63, "RMASN_RC4_HIT3");
	__LIB_13__::func_919(&uLocal_400, 67, "RMASN_SPOOK");
	if (__LIB_0__::func_181())
	{
		sVar5 = "RMASN_NSPT_GO_J";
	}
	else
	{
		sVar5 = "RMASN_NSPT_GO_A";
	}
	__LIB_13__::func_919(&uLocal_400, 68, sVar5);
	__LIB_13__::func_919(&uLocal_400, 69, "RMASN_4_SHOT1");
	__LIB_13__::func_919(&uLocal_400, 70, "RMASN_4_SHOT2");
	__LIB_13__::func_919(&uLocal_400, 71, "RMASN_4_SHOT3");
	__LIB_13__::func_919(&uLocal_400, 72, "RMASN_4_SHOT4");
	__LIB_13__::func_919(&uLocal_400, 73, "RMASN_GPIC2");
	__LIB_13__::func_919(&uLocal_400, 74, "RMASN_SPT_S1");
	__LIB_13__::func_919(&uLocal_400, 75, "MASN_3_TOD1");
}

void func_195()
{
	Local_260[0 /*4*/].f_3 = "script@ambient@animal@alligator_ambush_boar_neck@action";
	Local_260[1 /*4*/].f_3 = "script@rcm@masn@ig@rc4_ig1_photosofgators@rc4_ig1_photosofgators";
	Local_260[2 /*4*/].f_3 = "script@rcm@masn@leadout@rc8@leadout_propsplacement";
}

int func_205(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_487(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_5__::func_119(0, vParam0, uParam3);
	return 1;
}

bool func_208(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	fVar0 = (fLocal_289 + 80f);
	fVar1 = (fLocal_289 + 40f);
	fVar2 = 80f;
	vVar3 = { vLocal_297 };
	iVar6 = 12;
	if (iLocal_184 == 1)
	{
		iVar6 = iLocal_186;
	}
	else
	{
		iVar6 = iLocal_184;
	}
	if (iVar6 == 0)
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_26, false, false) };
		fVar0 = 70f;
		fVar1 = 40f;
		fVar2 = 10f;
	}
	else if (iVar6 == 9)
	{
		vVar3 = { vLocal_294 };
		fVar0 = (fLocal_290 + 150f);
		fVar1 = (fLocal_290 + 125f);
		fVar2 = (fLocal_290 + 100f);
	}
	else if (iVar6 == 3)
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_26, false, false) };
		fVar0 = (fLocal_290 + 90f);
		fVar1 = (fLocal_290 + 60f);
		fVar2 = fLocal_290;
	}
	else if (iVar6 == 4)
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_26, false, false) };
		fVar0 = (fLocal_290 + 90f);
		fVar1 = (fLocal_290 + 60f);
		fVar2 = fLocal_290;
	}
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
	if (fVar7 >= fVar0)
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		return true;
	}
	else if (fVar7 >= fVar1)
	{
		func_306(uParam0, 1);
	}
	else if (fVar7 <= fVar2)
	{
		if (iLocal_184 == 1)
		{
			func_306(uParam0, iLocal_186);
		}
	}
	return false;
}

int func_214()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1347702[iParam0 /*49*/].f_13 & 8 != 0)
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		if (!__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
		{
			if ((!__LIB_1__::func_25(Global_1347702[8 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[67 /*74*/].f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[67 /*74*/].f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!__LIB_8__::func_779(2) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = __LIB_1__::func_293(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
		if (__LIB_0__::func_6(iVar1))
		{
			iVar0 = __LIB_0__::func_895(iVar1);
			if (!__LIB_0__::func_27(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[0 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[94 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1835011[25 /*74*/].f_1, 1)) && (__LIB_1__::func_25(Global_1835011[8 /*74*/].f_1, 1) || (__LIB_1__::func_25(Global_1347702[98 /*49*/].f_15, 1) && __LIB_0__::func_895(Global_1347702[98 /*49*/].f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!__LIB_1__::func_25(Global_1835011[34 /*74*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!__LIB_1__::func_25(Global_1347702[41 /*49*/].f_15, 1))
		{
			if (!__LIB_0__::func_315(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!__LIB_11__::func_139(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!__LIB_1__::func_25(Global_1347702[51 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (__LIB_5__::func_297(Global_1347702[iParam0 /*49*/].f_15) == 0)
		{
			if (__LIB_0__::func_342() <= 160)
			{
				return true;
			}
			else
			{
				__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 1);
			}
		}
		if (!__LIB_1__::func_187(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (__LIB_0__::func_702(Global_1835011[47 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[45 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_627(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (__LIB_0__::func_702(Global_1835011[20 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < Global_1898438)
		{
			return true;
		}
		else if (Global_1879534.f_1 || Global_1879534)
		{
			return true;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[113 /*49*/].f_42, false) && __LIB_11__::func_188())
		{
			if (__LIB_1__::func_422("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (__LIB_0__::func_702(Global_1835011[69 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	return false;
}

int func_226(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 1))
		{
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(Global_1347702[uParam0->f_174 /*49*/].f_43) || PED::IS_PED_IN_COMBAT(Global_1347702[uParam0->f_174 /*49*/].f_43, 0)) || func_521(Global_1347702[uParam0->f_174 /*49*/].f_43, 0, &uLocal_213, &uLocal_241, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_231(var uParam0)
{
	int iVar0;
	func_426(uParam0);
	if (__LIB_0__::func_272(iLocal_14, 1))
	{
		PED::_0x2B4CE170DE09F346(iLocal_14, joaat("RMASN_RIDE1"));
		switch (__LIB_12__::func_644(uParam0))
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_BOAT_MISSION(0, iLocal_26, 0, 0, 2335.41f, -563.59f, 40.57f, 4, 2f, 524419, 10f, 1180);
				TASK::TASK_BOAT_MISSION(0, iLocal_26, 0, 0, 2268.59f, -625.27f, 40.54f, 4, 2f, 524419, 10f, 1180);
				TASK::TASK_BOAT_MISSION(0, iLocal_26, 0, 0, 2209.08f, -691.15f, 40.48f, 9, 2f, 524419, 10f, 1180);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_26, 2f, 524419);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				break;
			case 11:
				if (__LIB_12__::func_876(uParam0, "RMASN_SPOOK", 0))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_14);
					TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					PED::SET_PED_KEEP_TASK(iLocal_14, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, false);
				}
				break;
			case 3:
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_14, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
				break;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_26, false);
	}
}

void func_246(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_271(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bVar0 = true;
	if (!func_296(uParam0))
	{
		bVar0 = false;
	}
	if (!func_297())
	{
		bVar0 = false;
	}
	if (!func_298())
	{
		bVar0 = false;
	}
	else
	{
		VEHICLE::_GET_ROWING_OARS(iLocal_26, &iLocal_19, &iLocal_20);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_19) || !ENTITY::DOES_ENTITY_EXIST(iLocal_20))
		{
			bVar0 = false;
		}
	}
	if (!func_575(uParam0))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BOAT_ATTACK"))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MASON_PHOTO"))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	__LIB_1__::func_206(vLocal_312, 100f, 0);
	__LIB_3__::func_730(iLocal_27, 0, 0, 1, 1, 0);
	__LIB_3__::func_730(iLocal_27, 0, 0, 0, 0, 0);
	__LIB_4__::func_212(iLocal_27, 1, 0, 0, 0);
	__LIB_4__::func_220(iLocal_27, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_312, 100f, 1, 0);
	vVar1 = { 2387.583f, -576.575f, 40.8194f };
	__LIB_3__::func_414(&(uLocal_273[0]), vVar1, 2f, 1, 32, 0);
	vVar1 = { 2384.27f, -582.97f, 41.04f };
	__LIB_3__::func_414(&(uLocal_273[1]), vVar1, 2f, 1, 32, 0);
	vVar1 = { 2382.11f, -579.44f, 40.61f };
	__LIB_3__::func_414(&(uLocal_273[2]), vVar1, 2f, 1, 32, 0);
	__LIB_13__::func_954();
	__LIB_13__::func_223(&iLocal_14);
	PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iLocal_14, &uVar4));
	ANIMSCENE::START_ANIM_SCENE(iLocal_286);
	__LIB_13__::func_923();
	__LIB_13__::func_260(uParam0, iLocal_14);
	return 1;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char cVar8[64];
	iLocal_187 = iParam1;
	switch (iLocal_187)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RMASN_RC7", 24);
			if (__LIB_0__::func_181())
			{
				if (__LIB_3__::func_736(103, 1) || __LIB_3__::func_736(102, 1))
				{
					__LIB_12__::func_944(uParam0, "rmasn_rc7_JMA", 1);
				}
				else
				{
					__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
				}
			}
			else
			{
				__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
			}
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_14, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_21, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_23, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_22, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_24, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_25, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_26, "ROWBOATSWAMP", 0);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, false);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_14, "AlbertMason", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_21, 0, 0, 0, 1);
			__LIB_12__::func_957(uParam0, iLocal_23, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_22, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_24, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_25, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_26, "ROWBOAT", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_20, "p_boat_oar_01_S", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_19, "p_boat_oar_01_S^1", 0, 0, 0);
			__LIB_13__::func_261(uParam0, &iLocal_28, 0, 0, 0, 0);
			if (__LIB_12__::func_936(uParam0))
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			if (__LIB_12__::func_936(uParam0))
			{
				if (__LIB_0__::func_181())
				{
					if (__LIB_3__::func_736(103, 1) || __LIB_3__::func_736(102, 1))
					{
						StringCopy(&cVar0, "2B-JohnIntro-NormalStart", 64);
						StringCopy(&cVar8, "2A-JohnIntro-MultiStart", 64);
						__LIB_12__::func_676(&(uParam0->f_206), &cVar8);
						__LIB_13__::func_402(&(uParam0->f_206), cVar8);
					}
					else
					{
						StringCopy(&cVar0, "1C-NormalStart", 64);
						StringCopy(&cVar8, "1B-John-MultiStart", 64);
						__LIB_12__::func_676(&(uParam0->f_206), &cVar8);
						__LIB_13__::func_402(&(uParam0->f_206), cVar8);
					}
				}
				else
				{
					StringCopy(&cVar0, "1C-NormalStart", 64);
					StringCopy(&cVar8, "1A-Arthur-MultiStart", 64);
					__LIB_12__::func_676(&(uParam0->f_206), &cVar8);
					__LIB_13__::func_402(&(uParam0->f_206), cVar8);
				}
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
			}
			else if (__LIB_0__::func_181())
			{
				if (__LIB_3__::func_736(103, 1) || __LIB_3__::func_736(102, 1))
				{
					StringCopy(&cVar0, "2B-JohnIntro-NormalStart", 64);
					StringCopy(&cVar8, "2A-JohnIntro-MultiStart", 64);
					__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
					__LIB_13__::func_402(&(uParam0->f_206), cVar8);
				}
				else
				{
					StringCopy(&cVar0, "1C-NormalStart", 64);
					StringCopy(&cVar8, "1B-John-MultiStart", 64);
					__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
					__LIB_13__::func_402(&(uParam0->f_206), cVar8);
				}
			}
			else
			{
				StringCopy(&cVar0, "1C-NormalStart", 64);
				StringCopy(&cVar8, "1A-Arthur-MultiStart", 64);
				__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
				__LIB_13__::func_402(&(uParam0->f_206), cVar8);
			}
			__LIB_13__::func_16(uParam0, 97044);
			__LIB_12__::func_981(uParam0, 97081);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RMASN_RC8", 24);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_14, "AlbertMason", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_21, 0, 0, 0, 1);
			__LIB_12__::func_957(uParam0, iLocal_23, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_22, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_26, "ROWBOAT", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_20, "p_boat_oar_01_S", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_19, "p_boat_oar_01_S^1", 0, 0, 0);
			if (iParam2 == 1 || CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_13__::func_261(uParam0, &iLocal_28, 0, 0, 0, 0);
			__LIB_13__::func_16(uParam0, 97502);
			__LIB_12__::func_981(uParam0, 97621);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

int func_291(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	iVar0 = 6;
	if (!__LIB_0__::func_75(&(iParam2->f_1)))
	{
		__LIB_1__::func_148(&(iParam2->f_1));
	}
	iVar1 = (iParam4 + *iParam2);
	if (iVar1 > uParam3->f_4)
	{
		return 3;
	}
	if (iVar1 <= iParam5 && __LIB_0__::func_264(&(iParam2->f_1)) > __LIB_13__::func_913(*iParam2, fParam7, fParam8))
	{
		iVar0 = __LIB_13__::func_980(uParam0, uParam3, iVar1, iParam1, 0, fParam6, 0, iParam9);
		if (iVar0 == 1)
		{
			__LIB_1__::func_148(&(iParam2->f_1));
			*iParam2++;
		}
	}
	return iVar0;
}

bool func_296(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { 2383.87f, -580.78f, 41.79f };
	fVar3 = 72.12f;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (__LIB_0__::func_272(iLocal_14, 1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_14, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, vVar0, fVar3, false, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_14, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_PLAYER_ALLY"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, true);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_14, 8, 0, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_14, false);
		__LIB_12__::func_875(uParam0, iLocal_14, "ALBERT_MASON", 1);
		__LIB_4__::func_228(&uLocal_213);
		__LIB_1__::func_402(&uLocal_213, 0);
		return true;
	}
	return false;
}

bool func_297()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		iLocal_21 = OBJECT::CREATE_OBJECT(iLocal_243, vLocal_345, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_21, vLocal_345, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_21, vLocal_348, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_21, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_21, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_23))
	{
		iLocal_23 = OBJECT::CREATE_OBJECT(iLocal_244, vLocal_327, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_23, vLocal_327, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_23, vLocal_330, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_23, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_23, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_23, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_244);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_22))
	{
		iLocal_22 = OBJECT::CREATE_OBJECT(iLocal_245, vLocal_321, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_22, vLocal_321, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_22, vLocal_324, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_22, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_22, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_22, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_245);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		iLocal_24 = OBJECT::CREATE_OBJECT(iLocal_246, vLocal_333, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_24, vLocal_333, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_24, vLocal_336, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_24, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_24, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_24, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		iLocal_25 = OBJECT::CREATE_OBJECT(iLocal_247, vLocal_339, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_25, vLocal_339, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_25, vLocal_342, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_25, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_25, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_25, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_247);
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_21) && ENTITY::DOES_ENTITY_EXIST(iLocal_23)) && ENTITY::DOES_ENTITY_EXIST(iLocal_22)) && ENTITY::DOES_ENTITY_EXIST(iLocal_24)) && ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_22, "base_cscamera", sLocal_395, 1f, false, true, false, 0.99f, 0);
		ENTITY::PLAY_ENTITY_ANIM(iLocal_23, "base_cscameratripod", sLocal_395, 1f, false, true, false, 0.99f, 0);
		ENTITY::PLAY_ENTITY_ANIM(iLocal_25, "base_shutterrelease", sLocal_395, 1f, false, true, false, 0.99f, 0);
		ENTITY::PLAY_ENTITY_ANIM(iLocal_21, "base_cscamerabag", sLocal_395, 1f, false, true, false, 0.99f, 0);
		return true;
	}
	return false;
}

bool func_298()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		iLocal_26 = VEHICLE::CREATE_VEHICLE(iLocal_248, vLocal_312, fLocal_291, true, true, false, false);
	}
	else
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_26, vLocal_312, fLocal_291, false, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_26, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, true);
		if (VEHICLE::DOES_EXTRA_EXIST(iLocal_26, 1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_26, 1, true);
		}
		if (VEHICLE::DOES_EXTRA_EXIST(iLocal_26, 5))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_26, 5, true);
		}
		AITRANSPORT::_0x4B6C9A43F7D9109B(iLocal_26, 0);
		return true;
	}
	return false;
}

bool func_299()
{
	vector3 vVar0[3];
	float fVar10[3];
	int iVar14;
	int iVar15;
	if (bLocal_370)
	{
		return true;
	}
	vVar0[0 /*3*/] = { vLocal_315 };
	vVar0[1 /*3*/] = { 2376.65f, -518.88f, 40.68f };
	vVar0[2 /*3*/] = { 2371.55f, -520.25f, 40.65f };
	fVar10[0] = fLocal_292;
	fVar10[1] = 54.8f;
	fVar10[2] = 128.2f;
	iVar14 = 0;
	iVar15 = 0;
	iVar14 = 0;
	while (iVar14 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar14]))
		{
			iLocal_15[iVar14] = func_627(iLocal_251, vVar0[iVar14 /*3*/], fVar10[iVar14], 1, 1, 0, 1);
		}
		if (!__LIB_3__::func_746(iLocal_45))
		{
			__LIB_13__::func_297(&iLocal_45, vLocal_315, 3.25f);
		}
		if (!__LIB_1__::func_565(&uLocal_277))
		{
			__LIB_3__::func_414(&uLocal_277, vLocal_318, 3.5f, 1, -1, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[iVar14]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_15[iVar14], true, false);
			if (iVar14 == 0)
			{
				TASK::TASK_PLAY_ANIM(iLocal_15[iVar14], sLocal_397, "base_boar", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(iLocal_15[iVar14], sLocal_396, "base", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15[iVar14], true);
			__LIB_2__::func_279(iLocal_15[iVar14], 1);
			iVar15++;
		}
		iVar14++;
	}
	if (iVar15 >= 3)
	{
		bLocal_370 = true;
		return true;
	}
	return false;
}

bool func_300()
{
	vector3 vVar0[3];
	float fVar10[3];
	int iVar14;
	int iVar15;
	int iVar16;
	if (ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*45*/]))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_29))
		{
			iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2225.399f, -499.4138f, 40.38091f, 0f, 0f, -11.0551f, 55.99589f, 30.9352f, 11.47782f, "Special gator follow area");
		}
		else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_30))
		{
			iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2239.328f, -503.8492f, 40.38091f, 0f, 0f, -12.82041f, 11.73881f, 15.1265f, 7.274924f, "Special gator photo area");
		}
	}
	if (bLocal_369)
	{
		return true;
	}
	vVar0[0 /*3*/] = { vLocal_351 };
	vVar0[1 /*3*/] = { 2369.64f, -494.14f, 40.15764f };
	vVar0[2 /*3*/] = { 2279.86f, -563.7754f, 39.8168f };
	fVar10[0] = 220.1365f;
	fVar10[1] = -127.0163f;
	fVar10[2] = 243.7118f;
	iVar14 = 0;
	iVar15 = 0;
	iVar14 = 0;
	while (iVar14 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_48[iVar14 /*45*/]))
		{
			if (iVar14 != 1)
			{
				iVar16 = iLocal_249;
			}
			else
			{
				iVar16 = iLocal_250;
			}
			Local_48[iVar14 /*45*/] = func_627(iVar16, vVar0[iVar14 /*3*/], fVar10[iVar14], 1, 1, 0, 1);
		}
		else
		{
			if (__LIB_0__::func_272(Local_48[iVar14 /*45*/], 1))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_48[iVar14 /*45*/], joaat("REL_WILD_ANIMAL"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iVar14 /*45*/], true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_48[iVar14 /*45*/], true, 0f);
				PED::SET_PED_CONFIG_FLAG(Local_48[iVar14 /*45*/], 253, true);
				PED::_0xE9B168527B337BF0(Local_48[iVar14 /*45*/], iLocal_28);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_48[iVar14 /*45*/], 512, true);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_48[iVar14 /*45*/], 16384, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iVar14 /*45*/], 58, true);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_48[iVar14 /*45*/]);
				iVar15++;
			}
			iVar14++;
		}
	}
	if (iVar15 >= 3)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[0 /*45*/].f_3))
		{
			Local_48[0 /*45*/].f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2249.267f, -504.4245f, 41.26671f, 0f, 0f, -17.02059f, 18.21288f, 24.50581f, 7.577518f, "Gator 1 Area");
			func_631(0, 1);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[0 /*45*/].f_4[0]))
		{
			Local_48[0 /*45*/].f_4[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2243.061f, -510.2519f, 44.55661f, 0f, 0f, -8.578117f, 40.08581f, 54.63602f, 6.338776f, "Gator 1 can see vol");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[1 /*45*/].f_3))
		{
			Local_48[1 /*45*/].f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2350.459f, -512.7162f, 41.38462f, 0f, 0f, -79.45654f, 21.71383f, 23.75136f, 3.824282f, "Gator 2 Area");
			func_631(1, 2);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[1 /*45*/].f_4[0]))
		{
			Local_48[1 /*45*/].f_4[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2344.962f, -511.4484f, 44.55661f, 0f, 0f, 136.0534f, 21.97699f, 43.79765f, 6.338776f, "Gator 2 can see vol 1");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[1 /*45*/].f_4[1]))
		{
			Local_48[1 /*45*/].f_4[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2392.913f, -509.0676f, 42.47475f, 0f, 0f, 0f, 54.24054f, 21.69896f, 7.579091f, "Gator 2 can see vol 2");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[2 /*45*/].f_3))
		{
			Local_48[2 /*45*/].f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2290.284f, -568.051f, 41.38462f, 0f, 0f, -146.8962f, 9.433443f, 15.08248f, 3.824282f, "Gator 3 Area");
			func_631(2, 0);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[2 /*45*/].f_4[0]))
		{
			Local_48[2 /*45*/].f_4[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2296.602f, -579.8956f, 44.55661f, 0f, 0f, 52.07415f, 39.24996f, 44.16792f, 6.338776f, "Gator 3 can see vol");
		}
		bLocal_369 = true;
		return true;
	}
	return false;
}

bool func_301()
{
	int iVar0;
	iVar0 = 1;
	if (!func_307(0, "pbl_startLoop"))
	{
		iVar0 = 0;
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_260[0 /*4*/], 2372.721f, -518.9119f, 40.6535f, 0f, 0f, 27.36f, 2);
	}
	if (!func_307(1, "pbl_idle"))
	{
		iVar0 = 0;
	}
	if (!func_307(2, ""))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_303()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_26, "sear_dside_r");
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_21, iLocal_26, iVar0, vLocal_303, vLocal_306, false, false, false, false, 2, true, false, false);
		ENTITY::PLAY_ENTITY_ANIM(iLocal_21, "base_cscamerabag", sLocal_395, 1f, false, true, false, 0.99f, 0);
	}
	ENTITY::SET_ENTITY_COLLISION(iLocal_23, false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_22, false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_24, false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_25, false, false);
}

void func_304(int iParam0)
{
	iLocal_399 = iParam0;
}

bool func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false, false))
	{
		return false;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2) != *iParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			if (iParam3 && __LIB_2__::func_424(*iParam1))
			{
				iParam2 = __LIB_2__::func_425(*iParam1);
			}
			else
			{
				return false;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*iParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, iParam2);
	}
	return true;
}

void func_306(var uParam0, int iParam1)
{
	int iVar0;
	if (iLocal_184 == iParam1)
	{
		return;
	}
	iVar0 = iLocal_184;
	switch (iLocal_184)
	{
		case 0:
			__LIB_10__::func_597("MASON4_O_BOAT");
			__LIB_10__::func_597("MASON4_O_BACK");
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
			__LIB_0__::func_325(&iLocal_37);
			break;
		case 2:
			if (iParam1 != 3)
			{
				func_636();
			}
			break;
		case 3:
			func_637(0);
			__LIB_4__::func_353();
			__LIB_0__::func_769();
			break;
		case 4:
			break;
		case 5:
			func_637(1);
			__LIB_4__::func_353();
			__LIB_0__::func_769();
			break;
		case 6:
			break;
		case 7:
			func_637(2);
			__LIB_4__::func_353();
			__LIB_0__::func_769();
			break;
		case 8:
			break;
		case 9:
			__LIB_10__::func_597("MASON4_O_GTMSN");
			__LIB_0__::func_325(&iLocal_36);
			break;
		case 1:
			__LIB_10__::func_597("MASON4_F_WARN1");
			__LIB_10__::func_597("MASON4_O_WARN2");
			__LIB_0__::func_325(&iLocal_38);
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
	iLocal_184 = iParam1;
	switch (iLocal_184)
	{
		case 0:
			if (iVar0 != 1)
			{
				iLocal_185 = iVar0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14) && !PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_26, false))
			{
				Local_260[1 /*4*/].f_2 = 0;
				Local_260[1 /*4*/].f_1 = 0;
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[1 /*4*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_260[1 /*4*/]);
				}
			}
			__LIB_5__::func_20(1, 0);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_26, false))
			{
				__LIB_2__::func_596(iLocal_14, iLocal_26, 0, 1065353216 /* Float: 1f */, 20000, 1);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_PLAYER_ALLY"));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_26, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_26, true);
				if (!MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					iLocal_37 = __LIB_8__::func_778(408396114, iLocal_26, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_37, "MASN4_B_BOAT");
				}
			}
			if (!bLocal_358)
			{
				bLocal_358 = true;
			}
			else if (!bLocal_359)
			{
				bLocal_359 = true;
			}
			break;
		case 2:
			func_641();
			__LIB_0__::func_325(&iLocal_37);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
			}
			PED::_0x1E017404784AA6A3(iLocal_14, joaat("RMASN_RIDE1"));
			AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(1, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(11, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(12, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(13, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 2, 1);
			break;
		case 3:
			func_642(0);
			__LIB_5__::func_20(1, 0);
			func_304(4);
			AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(1, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(11, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(12, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(13, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 2, 0);
			break;
		case 4:
			if (!__LIB_2__::func_343(Global_35, iLocal_26, 1) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_26))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					iLocal_37 = __LIB_8__::func_778(408396114, iLocal_26, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_37, "MASN4_B_BOAT");
				}
			}
			func_349(uParam0, 128, 0);
			break;
		case 5:
			func_642(1);
			__LIB_5__::func_20(1, 0);
			func_643(8);
			func_304(1);
			break;
		case 6:
			break;
		case 7:
			func_642(2);
			__LIB_5__::func_20(1, 0);
			func_643(8);
			func_304(6);
			break;
		case 8:
			break;
		case 9:
			bLocal_391 = true;
			if (__LIB_2__::func_343(Global_35, iLocal_26, 1))
			{
				__LIB_0__::func_325(&iLocal_37);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_35))
			{
				PED::_0x19C975B81BE53C28(iLocal_35, iLocal_14);
				PED::_0x7C00CFC48A782DC0(iLocal_35, iLocal_14, 0f, 0.25f, 0f, 0f, 0f, 0f, 2, 1);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_34))
			{
				PED::_0x19C975B81BE53C28(iLocal_34, iLocal_14);
				PED::_0x7C00CFC48A782DC0(iLocal_34, iLocal_14, 0f, 0.25f, 0f, 0f, 0f, -93f, 2, 1);
				VOLUME::_SET_VOLUME_SCALE(iLocal_34, 3.106877f, 6.789289f, 3.710475f);
			}
			PED::_0x1E017404784AA6A3(iLocal_14, joaat("RMASN_RIDE1"));
			AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(1, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(11, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(12, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(13, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 2, 1);
			break;
		case 1:
			iLocal_186 = iVar0;
			if (iLocal_186 == 0 || !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, true))
			{
				func_349(uParam0, 256, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_38))
				{
					iLocal_38 = __LIB_8__::func_778(408396114, iLocal_26, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_38, "MASN4_B_BOAT");
				}
			}
			else if (iLocal_186 == 9)
			{
				func_349(uParam0, 1024, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_38))
				{
					iLocal_38 = __LIB_5__::func_442(vLocal_294, 0);
				}
			}
			else
			{
				func_349(uParam0, 512, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_38))
				{
					func_645(&iLocal_38);
				}
			}
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
}

bool func_307(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iParam0 /*4*/]))
	{
		Local_260[iParam0 /*4*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_260[iParam0 /*4*/].f_3, 0, sParam1, false, true);
		return false;
	}
	if (!Local_260[iParam0 /*4*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_260[iParam0 /*4*/]);
		Local_260[iParam0 /*4*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_260[iParam0 /*4*/], true, false))
	{
		return false;
	}
	return true;
}

void func_308()
{
	int iVar0;
	iVar0 = 1;
	if (!func_646(iVar0))
	{
		return;
	}
	if (!Local_260[iVar0 /*4*/].f_2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_14) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_260[iVar0 /*4*/], "IG_AlbertMason", false)))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_14, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "IG_AlbertMason", iLocal_14, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cameraFlash01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cameraFlash01x", iLocal_24, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cs_camera", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cs_camera", iLocal_22, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_23) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cs_cameratripod", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cs_cameratripod", iLocal_23, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cs_shutterrelease", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cs_shutterrelease", iLocal_25, 0);
		}
	}
	if (((((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_260[iVar0 /*4*/], "IG_AlbertMason", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cameraFlash01x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cs_camera", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cs_cameratripod", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_260[iVar0 /*4*/], "p_cs_shutterrelease", false)))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_260[iVar0 /*4*/], iLocal_26, 0);
		ANIMSCENE::START_ANIM_SCENE(Local_260[iVar0 /*4*/]);
	}
	else
	{
		Local_260[iVar0 /*4*/].f_2 = 1;
	}
}

void func_310(var uParam0, int iParam1)
{
	int iVar0;
	iLocal_281 = __LIB_0__::func_895(Global_1347702[104 /*49*/].f_15);
	if (__LIB_0__::func_27(iLocal_281, 1))
	{
		func_647(uParam0, 0);
	}
	if (__LIB_0__::func_27(iLocal_281, 2))
	{
		func_647(uParam0, 1);
	}
	if (__LIB_0__::func_27(iLocal_281, 4))
	{
		func_647(uParam0, 2);
	}
	iVar0 = 0;
	while (iLocal_280 < iParam1)
	{
		if (!Local_48[iVar0 /*45*/].f_39)
		{
			func_647(uParam0, iVar0);
		}
		iVar0++;
		if (iVar0 >= 3)
		{
		}
	else
	{
		}
	}
	if (Local_48[1 /*45*/].f_39)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[0]))
		{
			__LIB_1__::func_864(iLocal_15[0], 1, 0);
		}
		func_649(1);
		func_649(2);
		bLocal_372 = true;
		bLocal_373 = true;
		func_631(1, 0);
	}
}

int func_325(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_12__::func_927(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false))
				{
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else
				{
					if (__LIB_12__::func_688(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					__LIB_12__::func_800(uParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_12__::func_909(uParam4);
				}
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (__LIB_12__::func_986(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
					{
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_678(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_12__::func_849(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_1__::func_148(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_1__::func_747(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				__LIB_12__::func_927(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_12__::func_689(uParam4) - __LIB_12__::func_685(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_12__::func_752(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_12__::func_685(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_12__::func_690(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_13__::func_9(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_12__::func_685(uParam4) <= 5000) && __LIB_12__::func_685(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_405), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_12__::func_685(uParam4) >= 5000 && __LIB_12__::func_685(uParam4) <= (__LIB_12__::func_689(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_12__::func_690(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_13__::func_9(uParam4);
				return 1;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (__LIB_12__::func_801(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_1__::func_747(uParam4, 4);
			break;
	}
	return 0;
}

void func_330()
{
	int iVar0;
	iVar0 = 2;
	if (!func_646(iVar0))
	{
		return;
	}
	if (!Local_260[iVar0 /*4*/].f_2)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cs_camera", iLocal_22, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cs_camerabag01x", iLocal_21, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "p_cs_cameratripod", iLocal_23, 0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_260[iVar0 /*4*/], iLocal_26, 0);
		ANIMSCENE::START_ANIM_SCENE(Local_260[iVar0 /*4*/]);
	}
	else
	{
		Local_260[iVar0 /*4*/].f_2 = 1;
	}
}

void func_336()
{
	if (iLocal_610 > 0)
	{
		if (!bLocal_390)
		{
			if (__LIB_0__::func_45("MASON4_H_SEARCH", 10000, 0, 0, 0, 1) != 0)
			{
				bLocal_390 = true;
			}
		}
	}
}

void func_337(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			func_724(uParam0);
		}
		func_725(iVar0);
		iVar0++;
	}
}

bool func_338()
{
	if (iLocal_184 == 3)
	{
		return true;
	}
	else if (iLocal_184 == 4)
	{
		return true;
	}
	return false;
}

void func_339()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	float fVar6;
	if (!__LIB_0__::func_272(iLocal_14, 1))
	{
		return;
	}
	if (!__LIB_2__::func_343(iLocal_14, iLocal_26, 1))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_14, iLocal_26, -1, 0, 51, 0);
		return;
	}
	iVar0 = 0;
	iVar1 = 3;
	fVar2 = 1000f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_48[iVar0 /*45*/], false, false) };
		fVar6 = __LIB_0__::func_94(iLocal_14, vVar3, 1);
		if (fVar6 < fVar2)
		{
			fVar2 = fVar6;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 < 3)
	{
		if (fVar2 < 25f)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Local_48[iVar1 /*45*/], -1, 0, 51, 0);
			return;
		}
	}
	TASK::TASK_CLEAR_LOOK_AT(iLocal_14);
}

void func_340(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 3;
	iVar1 = iLocal_184;
	if (iVar1 == 0)
	{
		iVar1 = iLocal_185;
	}
	switch (iVar1)
	{
		case 3:
			iVar0 = 0;
			break;
		case 5:
			iVar0 = 1;
			break;
		case 7:
			iVar0 = 2;
			break;
	}
	if (iVar0 == 3)
	{
		return;
	}
	iVar2 = iVar0;
	if (iVar2 == 1)
	{
	}
	if (!Local_48[iVar2 /*45*/].f_40)
	{
		if (!func_726(uParam0, iVar2))
		{
			func_727(uParam0, iVar2);
			return;
		}
		Local_48[iVar2 /*45*/].f_40 = 1;
		func_728(536870912, 1);
	}
	else if (!Local_48[iVar2 /*45*/].f_39)
	{
		if (iLocal_665 == 536870912)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_260[1 /*4*/], "s_takephoto_1", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[1 /*4*/]) > (41f / 1873f))
			{
				func_729(uParam0, iVar2);
			}
		}
		else if (iLocal_665 == 1073741824)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_260[1 /*4*/], "s_takephoto_2", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[1 /*4*/]) > (41f / 1822f))
			{
				func_729(uParam0, iVar2);
			}
		}
		else if (iLocal_665 == -2147483648)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_260[1 /*4*/], "s_takephoto_3", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[1 /*4*/]) > (37f / 1863f))
			{
				func_729(uParam0, iVar2);
			}
		}
	}
}

void func_341()
{
	int iVar0;
	iVar0 = 1;
	if ((!__LIB_3__::func_330(iLocal_14, iLocal_26, 0) || !func_646(iVar0)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false))
	{
		return;
	}
	if (iLocal_666 != 1)
	{
		if (func_732(iVar0, func_731(iLocal_666)))
		{
			func_733(iLocal_666);
			func_728(1, 0);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_260[iVar0 /*4*/], func_731(iLocal_665), true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_260[iVar0 /*4*/], "Loop_Idle", false, false);
		}
	}
	if (iLocal_665 != 512 && iLocal_665 != 268435456)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_260[iVar0 /*4*/], "s_idle", 1))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[iVar0 /*4*/]) > 0.98f)
			{
				func_728(512, 0);
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_260[iVar0 /*4*/], "s_idlesit_1", 1))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[iVar0 /*4*/]) > 0.98f)
			{
				func_728(268435456, 0);
			}
		}
	}
}

bool func_342(var uParam0)
{
	switch (iLocal_242)
	{
		case 1:
			if (VEHICLE::_0x30D86B2B7622D0EB(iLocal_26) && __LIB_2__::func_343(Global_35, iLocal_26, 1))
			{
				if (!__LIB_5__::func_463() && __LIB_12__::func_876(uParam0, "RMSN_4_STUCK", 0))
				{
					iLocal_242 = 2;
				}
				else if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(1, 0);
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_198))
			{
				__LIB_1__::func_148(&uLocal_198);
			}
			else if (__LIB_0__::func_265(&uLocal_198) > 1.5f)
			{
				__LIB_0__::func_37(&uLocal_198);
				iLocal_242 = 0;
			}
			break;
		case 2:
			if (!__LIB_5__::func_463() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
				iLocal_242 = 3;
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_242 = 4;
			}
			break;
		case 4:
			func_305(&Global_35, &iLocal_26, -1, 1);
			func_305(&iLocal_14, &iLocal_26, 0, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_26, vLocal_300, false, false, true, true);
			__LIB_0__::func_489(0, 0);
			CAM::DO_SCREEN_FADE_IN(1000);
			iLocal_242 = 5;
			break;
		case 5:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iLocal_242 = 0;
			}
			break;
		case 0:
			if (VEHICLE::_0x30D86B2B7622D0EB(iLocal_26) && __LIB_2__::func_343(Global_35, iLocal_26, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_198))
				{
					__LIB_1__::func_148(&uLocal_198);
				}
				else if (__LIB_0__::func_265(&uLocal_198) > 3f)
				{
					__LIB_0__::func_37(&uLocal_198);
					__LIB_5__::func_20(1, 0);
					iLocal_242 = 1;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&uLocal_198))
				{
					__LIB_0__::func_37(&uLocal_198);
				}
				return false;
			}
			break;
	}
	return true;
}

void func_343(var uParam0)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_48[1 /*45*/]))
	{
		return;
	}
	if (bLocal_372)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_15[0]))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false)) && !ANIMSCENE::_0x1F0E401031E20146(Local_260[0 /*4*/], "pbl_action"))
		{
			bLocal_371 = true;
		}
		else if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_260[0 /*4*/], "pbl_action")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[0 /*4*/]) <= 0.45f)
		{
			bLocal_371 = true;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[1]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15[1], Global_35, 3, 0, 300f, -1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_48[1 /*45*/]))
			{
				TASK::_0x3923EC958249657D(iLocal_15[1], Local_48[1 /*45*/], -1082130432 /* Float: -1f */);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[2]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15[2], Global_35, 3, 0, 300f, -1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_48[1 /*45*/]))
			{
				TASK::_0x3923EC958249657D(iLocal_15[2], Local_48[1 /*45*/], -1082130432 /* Float: -1f */);
			}
		}
		func_631(1, 0);
		bLocal_372 = true;
		bLocal_373 = true;
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_260[0 /*4*/]);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_33))
		{
			VOLUME::_DELETE_VOLUME(iLocal_33);
		}
		return;
	}
	if (func_735())
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_33))
		{
			iLocal_33 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2371.435f, -517.3098f, 42.15841f, 0f, 0f, 29.73112f, 7.333822f, 10.45136f, 4.222909f);
		}
		if ((Local_48[1 /*45*/].f_7 == 4 || Local_48[1 /*45*/].f_7 == 6) || Local_48[1 /*45*/].f_7 == 5)
		{
			__LIB_1__::func_864(iLocal_15[0], 1, 0);
			__LIB_2__::func_788(&(iLocal_15[0]), 1, 0, 1);
		}
		if ((__LIB_0__::func_665(iLocal_26, Local_48[1 /*45*/], 1, 1) < 8f && iLocal_184 == 5) && Local_48[1 /*45*/].f_39 == 0)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_260[0 /*4*/], "pbl_action"))
				{
					if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_26) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_26, 1.5f, -1, false);
					}
					else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ACCELERATE"), false);
					}
				}
			}
		}
		else if (__LIB_0__::func_665(iLocal_26, Local_48[1 /*45*/], 1, 1) < 25f && Local_48[1 /*45*/].f_39 == 0)
		{
			func_736(&iLocal_26, 1.25f, 2f);
			if (VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
			}
		}
		else
		{
			if (VEHICLE::_0x404527BC03DA0E6C(iLocal_26) && (iLocal_184 == 5 || iLocal_184 == 6))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[1 /*45*/], iLocal_26))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_260[0 /*4*/]);
					func_631(1, 3);
				}
			}
		}
	}
	else if ((VEHICLE::_0x404527BC03DA0E6C(iLocal_26) && iLocal_184 != 3) && iLocal_184 != 4)
	{
		VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
	}
	if (__LIB_0__::func_48(Global_35, Local_48[1 /*45*/], 32f, 1))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false)) && !ANIMSCENE::_0x1F0E401031E20146(Local_260[0 /*4*/], "pbl_action"))
		{
			if (func_737())
			{
				func_631(1, 7);
			}
		}
	}
	if (func_738())
	{
		if (!bLocal_398)
		{
			func_304(2);
			bLocal_398 = true;
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false))
		{
			fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_260[0 /*4*/]);
			if (fVar0 > 0.4f)
			{
				if (!__LIB_11__::func_764(&uLocal_400, 73))
				{
					if (!__LIB_11__::func_764(&uLocal_400, 74))
					{
						if (!Local_48[1 /*45*/].f_39)
						{
							__LIB_13__::func_995(uParam0, &uLocal_400, 74, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0);
						}
						else
						{
							__LIB_13__::func_638(&uLocal_400, 74);
						}
					}
					else if (!Local_48[1 /*45*/].f_39)
					{
						if (func_726(uParam0, 1))
						{
							__LIB_13__::func_995(uParam0, &uLocal_400, 73, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0);
						}
					}
					else
					{
						__LIB_13__::func_995(uParam0, &uLocal_400, 73, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0);
					}
				}
			}
			if (fVar0 > 0.3f)
			{
				func_649(1);
				func_649(2);
			}
			if (fVar0 > 0.45f && fVar0 < 0.96f)
			{
				bLocal_373 = true;
			}
			else
			{
				bLocal_373 = false;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_260[0 /*4*/], false))
		{
			if (Local_48[1 /*45*/].f_7 != 0)
			{
				func_631(1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_15[0]))
			{
				__LIB_1__::func_864(iLocal_15[0], 1, 0);
				PED::DELETE_PED(&(iLocal_15[0]));
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_33))
			{
				VOLUME::_DELETE_VOLUME(iLocal_33);
			}
			bLocal_373 = true;
		}
	}
	else if (Local_48[1 /*45*/].f_39)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[0]))
		{
			__LIB_1__::func_864(iLocal_15[0], 1, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_33))
		{
			VOLUME::_DELETE_VOLUME(iLocal_33);
		}
	}
}

void func_344(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (bLocal_375)
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_14))
		{
			if (func_291(uParam0, &iLocal_14, &uLocal_614, &uLocal_400, 34, 37, 1088421888 /* Float: 7f */, 0f, 0f, 0) >= 1)
			{
				bLocal_375 = false;
				bLocal_376 = false;
			}
		}
		return;
	}
	if (bLocal_376)
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_14))
		{
			iVar1 = (61 + iLocal_622);
			if (iVar1 <= 63)
			{
				if (__LIB_13__::func_980(uParam0, &uLocal_400, iVar1, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0) == 3)
				{
					iLocal_622++;
					bLocal_376 = false;
				}
			}
		}
		return;
	}
	if (!bLocal_377)
	{
		if (VEHICLE::_0x51C7694E140FAE43(iLocal_26))
		{
			if (__LIB_5__::func_469(iLocal_14, "ROWED_IN_REEDS", joaat("SPEECH_PARAMS_STANDARD"), Global_35, 1, 0, 0, 1))
			{
				__LIB_1__::func_148(&uLocal_383);
				bLocal_377 = true;
			}
		}
	}
	else if (__LIB_0__::func_264(&uLocal_383) > 10f)
	{
		bLocal_377 = false;
	}
	if (!bLocal_380)
	{
		if (!func_741())
		{
			if ((__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") && !WEAPON::_0x49E40483948AF062(__LIB_0__::func_399(Global_35, 1, 0, 0))) && __LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 7f)
			{
				bLocal_380 = true;
			}
		}
	}
	else
	{
		if (!bLocal_381)
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(1, 0);
			}
			else
			{
				bLocal_381 = __LIB_12__::func_876(uParam0, "RMASN_4_WEP", 0);
			}
		}
		if (!bLocal_382)
		{
			if (func_742())
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(1, 0);
				}
				else if (__LIB_12__::func_876(uParam0, "RMASN_4_AIM", 0))
				{
					bLocal_382 = true;
				}
			}
		}
		if ((__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED")) || WEAPON::_0x49E40483948AF062(__LIB_0__::func_399(Global_35, 1, 0, 0)))
		{
			bLocal_381 = false;
			bLocal_380 = false;
			bLocal_382 = false;
		}
	}
	if (iLocal_284 > 0 && bLocal_386 == 1)
	{
		if (iLocal_280 == 0)
		{
			if (!__LIB_11__::func_764(&uLocal_400, 64))
			{
				if (__LIB_13__::func_995(uParam0, &uLocal_400, 64, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0) == 2)
				{
					bLocal_386 = false;
				}
			}
			else
			{
				bLocal_386 = false;
			}
		}
		else if (iLocal_280 == 1)
		{
			if (!__LIB_11__::func_764(&uLocal_400, 65))
			{
				if (__LIB_13__::func_995(uParam0, &uLocal_400, 65, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0) == 2)
				{
					bLocal_386 = false;
				}
			}
			else
			{
				bLocal_386 = false;
			}
		}
		else if (iLocal_280 == 2)
		{
			if (!__LIB_11__::func_764(&uLocal_400, 66))
			{
				if (__LIB_13__::func_995(uParam0, &uLocal_400, 66, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0) == 2)
				{
					bLocal_386 = false;
				}
			}
			else
			{
				bLocal_386 = false;
			}
		}
		return;
	}
	if (iLocal_285 > 0 && bLocal_387 == 1)
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_12__::func_876(uParam0, "RMASN_4_KILLPIC", 0))
			{
				bLocal_387 = false;
			}
		}
		else
		{
			__LIB_5__::func_20(0, 0);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!Local_48[iVar0 /*45*/].f_42)
		{
		}
		else if (func_291(uParam0, &iLocal_14, &uLocal_618, &uLocal_400, 69, 72, 1088421888 /* Float: 7f */, 2f, 5f, 0) >= 1)
		{
			Local_48[iVar0 /*45*/].f_42 = 0;
		}
		iVar0++;
	}
}

void func_345(var uParam0)
{
	if (bLocal_359)
	{
		func_349(uParam0, 128, 0);
	}
	else
	{
		func_349(uParam0, 64, 0);
	}
	if (__LIB_3__::func_330(iLocal_14, iLocal_26, 0) && __LIB_3__::func_330(Global_35, iLocal_26, 0))
	{
		if (func_307(1, "pbl_idle"))
		{
			func_308();
			if (iLocal_185 == 12)
			{
				func_306(uParam0, 2);
				return;
			}
			else
			{
				func_306(uParam0, iLocal_185);
				return;
			}
		}
	}
}

void func_346()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MAP::DOES_BLIP_EXIST(Local_48[iVar0 /*45*/].f_1))
		{
		}
		else if (!__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1))
		{
		}
		else if (Local_48[iVar0 /*45*/].f_39)
		{
		}
		else if (iVar0 == 0)
		{
			if ((iLocal_188 == 4 || iLocal_188 == 3) || iLocal_188 == 8)
			{
			}
			else if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[iVar0 /*45*/].f_3))
			{
			}
			else
			{
				func_743(iVar0);
			}
			iVar0++;
		}
	}
}

int func_349(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	sVar0 = func_744(iParam1);
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_148(&uLocal_195);
		fLocal_293 = 10000f;
		if (bParam2)
		{
			__LIB_1__::func_681(&iLocal_287, iParam1);
		}
		return 0;
	}
	if (__LIB_0__::func_27(iLocal_287, iParam1))
	{
		if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
		{
			__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		return 1;
	}
	if (__LIB_0__::func_270())
	{
		return 0;
	}
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_0__::func_37(&uLocal_195);
		__LIB_1__::func_683(&iLocal_287, iParam1);
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 1:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 2:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 4:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 8:
			if (iLocal_288 >= 3)
			{
			}
			else
			{
				if (bLocal_388)
				{
					if (((((!func_750(&uLocal_400, 28) && !func_750(&uLocal_400, 29)) && !func_750(&uLocal_400, 30)) && !func_750(&uLocal_400, 31)) && !func_750(&uLocal_400, 32)) && !func_750(&uLocal_400, 33))
					{
						__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iVar1 = 1;
						bLocal_388 = false;
					}
				}
				Jump @830; //curOff = 488
				if (iLocal_288 >= 3)
				{
				}
				else
				{
					if (func_751(&uLocal_195, ENTITY::GET_ENTITY_COORDS(Local_48[iLocal_288 /*45*/], false, false), 0.9f, &iLocal_14))
					{
						__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iVar1 = 1;
					}
					Jump @830; //curOff = 557
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 587
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 617
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 647
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 677
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 707
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 737
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 767
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
					Jump @830; //curOff = 797
					__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iVar1 = 1;
				}
			}
			if (iVar1 == 1)
			{
				__LIB_0__::func_37(&uLocal_195);
				__LIB_1__::func_683(&iLocal_287, iParam1);
			}
			return 0;
			default:
				break;
	}
}

bool func_350(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (!__LIB_0__::func_272(Local_48[iParam1 /*45*/], 1))
	{
		return false;
	}
	if (Local_48[iParam1 /*45*/].f_39)
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		if (__LIB_0__::func_48(iLocal_14, Local_48[iParam1 /*45*/], (20f * 2f), 1))
		{
			if ((iLocal_188 != 4 && iLocal_188 != 3) && iLocal_188 != 8)
			{
				bVar0 = true;
			}
		}
	}
	else if (__LIB_0__::func_48(iLocal_14, Local_48[iParam1 /*45*/], 20f, 1))
	{
		bVar0 = true;
	}
	if (!__LIB_1__::func_472(Local_48[iParam1 /*45*/], 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		__LIB_1__::func_148(&(Local_48[iParam1 /*45*/].f_8));
	}
	else if (!__LIB_0__::func_75(&(Local_48[iParam1 /*45*/].f_8)))
	{
		__LIB_1__::func_148(&(Local_48[iParam1 /*45*/].f_8));
	}
	if (__LIB_0__::func_264(&(Local_48[iParam1 /*45*/].f_8)) > 5f)
	{
		if ((((iParam1 == 0 && iLocal_188 != 4) && iLocal_188 != 3) && iLocal_188 != 8) || iParam1 != 0)
		{
			bVar0 = true;
		}
	}
	if (__LIB_2__::func_215(iLocal_14, Local_48[iParam1 /*45*/], 1, 60f, 0))
	{
		if (iParam1 != 1 || bLocal_372)
		{
			func_727(uParam0, iParam1);
		}
	}
	if (!bLocal_372 && !bLocal_373)
	{
		if (!__LIB_11__::func_764(&uLocal_400, 68))
		{
			if (func_754(1))
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_13__::func_995(uParam0, &uLocal_400, 68, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0) >= 1)
				{
					iVar1 = __LIB_3__::func_112(iLocal_14, iLocal_15[0], 1060437492 /* Float: 0.707f */);
					if (iVar1 == 0)
					{
						func_728(524288, 1);
					}
					else if (iVar1 == 3)
					{
						func_728(16777216, 1);
					}
					else if (iVar1 == 2)
					{
						func_728(67108864, 1);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case 0:
				func_306(uParam0, 3);
				break;
			case 1:
				func_306(uParam0, 5);
				break;
			case 2:
				func_306(uParam0, 7);
				break;
		}
		return true;
	}
	else if (__LIB_13__::func_995(uParam0, &uLocal_400, 6, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0) == 3)
	{
		if (!__LIB_5__::func_463())
		{
			func_291(uParam0, &iLocal_14, &iLocal_610, &uLocal_400, 7, 9, 7f, 10f, 15f, 0);
		}
	}
	return false;
}

void func_351(var uParam0)
{
	char* sVar0;
	vector3 vVar1[24];
	switch (iLocal_189)
	{
		case 0:
			if (iLocal_188 == 4 || iLocal_188 == 7)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_26, false);
				iLocal_189 = 3;
			}
			else
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
				{
					iLocal_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2248.938f, -508.4746f, 41.16622f, 0f, 0f, 164.3631f, 6.73082f, 3.818163f, 1f, "Gator 1 park spot 1");
				}
				else if (!bLocal_360)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_0__::func_181())
						{
							sVar0 = "RMASN_NWSP_GO_J";
						}
						else
						{
							sVar0 = "RMASN_NWSP_GO_A";
						}
						if (__LIB_12__::func_876(uParam0, sVar0, 0))
						{
							func_756(1);
							bLocal_360 = true;
						}
					}
					else
					{
						__LIB_5__::func_20(1, 0);
					}
				}
				else if (!__LIB_5__::func_463())
				{
					if (__LIB_0__::func_181())
					{
						sVar0 = "RMASN_G1_SPOTJ";
					}
					else
					{
						sVar0 = "RMASN_G1_SPOTA";
					}
					if (__LIB_12__::func_876(uParam0, sVar0, 0))
					{
						if (!bLocal_361)
						{
							func_636();
							func_757();
							func_349(uParam0, 2048, 0);
							bLocal_361 = true;
						}
						iLocal_189 = 1;
					}
				}
				else
				{
					if (__LIB_0__::func_181())
					{
						sVar0 = "RMASN_NWSP_GO_J";
					}
					else
					{
						sVar0 = "RMASN_NWSP_GO_A";
					}
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sVar0) > 1)
					{
						if (!bLocal_361)
						{
							func_636();
							func_757();
							func_349(uParam0, 2048, 0);
							bLocal_361 = true;
						}
					}
				}
				Jump @1989; //curOff = 339
				if (func_758(0, 0, 1))
				{
					if (iLocal_188 == 4 || iLocal_188 == 7)
					{
						if (__LIB_8__::func_684("RMASN_G1_SPOTA"))
						{
							__LIB_6__::func_900("RMASN_G1_SPOTA", 0, 0);
						}
						if (__LIB_8__::func_684("RMASN_G1_SPOTJ"))
						{
							__LIB_6__::func_900("RMASN_G1_SPOTJ", 0, 0);
						}
						if (__LIB_8__::func_684("RMASN_G1_OUT_J"))
						{
							__LIB_6__::func_900("RMASN_G1_OUT_J", 0, 0);
						}
						if (__LIB_8__::func_684("RMASN_G1_OUT_A"))
						{
							__LIB_6__::func_900("RMASN_G1_OUT_A", 0, 0);
						}
						VEHICLE::SET_BOAT_ANCHOR(iLocal_26, false);
						__LIB_4__::func_353();
						__LIB_0__::func_325(&iLocal_39);
						iLocal_189 = 3;
					}
					else
					{
						if (iLocal_188 == 4 || iLocal_188 == 3)
						{
							if (!__LIB_2__::func_343(Global_35, iLocal_26, 0))
							{
								iLocal_37 = __LIB_8__::func_778(408396114, iLocal_26, 1);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_39, "MASN4_B_BOAT");
							}
						}
						if (!bLocal_363)
						{
							if (!__LIB_5__::func_463())
							{
								if (__LIB_0__::func_181())
								{
									sVar0 = "RMASN_G1_OUT_J";
								}
								else
								{
									sVar0 = "RMASN_G1_OUT_A";
								}
								bLocal_363 = __LIB_12__::func_876(uParam0, sVar0, 0);
								__LIB_4__::func_353();
							}
						}
						else
						{
							func_349(uParam0, 8192, 0);
							__LIB_0__::func_325(&iLocal_39);
							if (!MAP::DOES_BLIP_EXIST(Local_48[0 /*45*/].f_1))
							{
								if (iLocal_188 != 4 && iLocal_188 != 3)
								{
									Local_48[0 /*45*/].f_1 = __LIB_8__::func_778(joaat("BLIP_STYLE_COMPANION"), Local_48[0 /*45*/], 1);
									MAP::_BLIP_SET_MODIFIER(Local_48[0 /*45*/].f_1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
									MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[0 /*45*/].f_1, "MASON4_B_GATOR");
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false))
						{
							VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iLocal_26, 1, 0);
							VEHICLE::SET_BOAT_ANCHOR(iLocal_26, true);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_26, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, true);
							func_349(uParam0, 8192, 0);
							__LIB_0__::func_325(&iLocal_39);
							if (!MAP::DOES_BLIP_EXIST(Local_48[0 /*45*/].f_1))
							{
								if (iLocal_188 != 4 && iLocal_188 != 3)
								{
									Local_48[0 /*45*/].f_1 = __LIB_8__::func_778(joaat("BLIP_STYLE_COMPANION"), Local_48[0 /*45*/], 1);
									MAP::_BLIP_SET_MODIFIER(Local_48[0 /*45*/].f_1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
									MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[0 /*45*/].f_1, "MASON4_B_GATOR");
								}
							}
							iLocal_189 = 2;
						}
						else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false))
						{
							if (!__LIB_5__::func_463())
							{
								if (!__LIB_0__::func_75(&uLocal_207))
								{
									__LIB_1__::func_148(&uLocal_207);
								}
								else if (__LIB_0__::func_264(&uLocal_207) > 8.5f)
								{
									if (__LIB_12__::func_876(uParam0, "RMASN_G1_OUTR", 0))
									{
										__LIB_1__::func_148(&uLocal_207);
									}
								}
							}
						}
						Jump @1156; //curOff = 927
						func_760(uParam0);
						func_761();
						if (((!__LIB_8__::func_684("RMASN_G1_SPOTJ") && !__LIB_8__::func_684("RMASN_G1_SPOTA")) && !__LIB_8__::func_684("RMASN_NWSP_GO_J")) && !__LIB_8__::func_684("RMASN_NWSP_GO_A"))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
							{
								if (!func_762())
								{
									func_349(uParam0, 2048, 1);
								}
								else if (!func_763(0))
								{
									func_349(uParam0, 4096, 1);
								}
								else if (func_763(0))
								{
									func_349(uParam0, 16384, 1);
								}
							}
						}
						__LIB_0__::func_325(&(Local_48[0 /*45*/].f_1));
						if (iLocal_188 == 4 || iLocal_188 == 7)
						{
							if (__LIB_8__::func_684("RMASN_G1_SPOTA"))
							{
								__LIB_6__::func_900("RMASN_G1_SPOTA", 0, 0);
							}
							if (__LIB_8__::func_684("RMASN_G1_SPOTJ"))
							{
								__LIB_6__::func_900("RMASN_G1_SPOTJ", 0, 0);
							}
							VEHICLE::SET_BOAT_ANCHOR(iLocal_26, false);
							__LIB_0__::func_325(&iLocal_39);
							iLocal_189 = 3;
						}
						else
						{
							Jump @1989; //curOff = 1156
							if (!bLocal_379)
							{
								if (((!ENTITY::IS_ENTITY_IN_WATER(Global_35) && !PED::IS_PED_ON_VEHICLE(Global_35, false)) && !__LIB_2__::func_343(Global_35, iLocal_26, 1)) && __LIB_0__::func_665(Global_35, iLocal_26, 1, 1) > 3f)
								{
									if (iLocal_188 == 0 || iLocal_188 == 1)
									{
										if (!bLocal_379)
										{
											PED::_0x89F5E7ADECCCB49C(Global_35, "Stealth");
											bLocal_379 = true;
										}
									}
								}
							}
							else if (bLocal_379)
							{
								if (((iLocal_188 == 4 || iLocal_188 == 7) || iLocal_188 == 2) || iLocal_188 == 3)
								{
									bLocal_379 = false;
									PED::_0x58F7DB5BD8FA2288(Global_35);
								}
							}
							if (!bLocal_363)
							{
								if (!__LIB_5__::func_463())
								{
									if (__LIB_0__::func_181())
									{
										sVar0 = "RMASN_G1_OUT_J";
									}
									else
									{
										sVar0 = "RMASN_G1_OUT_A";
									}
									bLocal_363 = __LIB_12__::func_876(uParam0, sVar0, 0);
									__LIB_4__::func_353();
								}
							}
							else if (!bLocal_362)
							{
								if (!__LIB_5__::func_463())
								{
									if (!bLocal_362)
									{
										if (!__LIB_5__::func_463())
										{
											if (__LIB_0__::func_181())
											{
												sVar0 = "RMASN_G1_OUTB_J";
											}
											else
											{
												sVar0 = "RMASN_G1_OUTB_A";
											}
											bLocal_362 = __LIB_12__::func_876(uParam0, sVar0, 0);
										}
									}
								}
							}
							else if (!bLocal_364)
							{
								if (!__LIB_5__::func_463())
								{
									bLocal_364 = __LIB_12__::func_876(uParam0, "RMASN_G1_INST", 0);
								}
							}
							else if (iLocal_188 == 0 || iLocal_188 == 1)
							{
								if (!ENTITY::IS_ENTITY_IN_WATER(Global_35) && __LIB_0__::func_665(Global_35, iLocal_26, 1, 1) > 2.5f)
								{
									if (!__LIB_5__::func_463())
									{
										func_291(uParam0, &Global_35, &uLocal_634, &uLocal_400, 42, 45, 7f, 2f, 2f, 0);
									}
								}
							}
							else if (iLocal_188 >= 2)
							{
								if (__LIB_8__::func_684("RMASN_G1_INST"))
								{
									__LIB_6__::func_900("RMASN_G1_INST", 0, 0);
								}
								if (__LIB_0__::func_665(Global_35, iLocal_26, 1, 1) > 5f)
								{
									func_291(uParam0, &Global_35, &uLocal_638, &uLocal_400, 46, 48, 7f, 2f, 1f, 0);
								}
								else
								{
									__LIB_13__::func_995(uParam0, &uLocal_400, 49, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0);
								}
							}
							func_764();
							if ((iLocal_188 == 0 || iLocal_188 == 1) || iLocal_188 == 5)
							{
								if (!func_765(8192))
								{
									func_349(uParam0, 8192, 0);
								}
							}
							else if ((iLocal_188 == 4 || iLocal_188 == 3) || iLocal_188 == 2)
							{
								if (!func_765(128))
								{
									func_349(uParam0, 128, 0);
								}
							}
							if (!func_758(0, 0, 1))
							{
								__LIB_0__::func_325(&(Local_48[0 /*45*/].f_1));
								__LIB_0__::func_325(&iLocal_39);
								func_757();
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, false);
								iLocal_189 = 1;
							}
							if (Local_48[0 /*45*/].f_39)
							{
								func_756(7);
								PED::_0x58F7DB5BD8FA2288(Global_35);
								iLocal_189 = 4;
							}
							Jump @1989; //curOff = 1821
							if (!bLocal_365 && !__LIB_2__::func_343(Global_35, iLocal_26, 0))
							{
								if (__LIB_5__::func_463())
								{
									__LIB_5__::func_20(0, 0);
								}
								if (__LIB_0__::func_181())
								{
									StringCopy(&cVar1, "RMASN_G1_GOBCKJ", 24);
								}
								else
								{
									StringCopy(&cVar1, "RMASN_G1_GOBACK", 24);
								}
								bLocal_365 = __LIB_12__::func_876(uParam0, &cVar1, 0);
							}
							if (VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
							{
								VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
							}
							if (Local_48[0 /*45*/].f_39)
							{
								func_756(7);
								PED::_0x58F7DB5BD8FA2288(Global_35);
								iLocal_189 = 4;
							}
							Jump @1989; //curOff = 1938
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
							{
								VEHICLE::SET_BOAT_ANCHOR(iLocal_26, false);
								if (VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
								{
									VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
								}
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, false);
							}
							func_306(uParam0, 4);
						}
					}
				}
			}
			default:
				break;
	}
}

void func_352(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (func_766() <= 0 && iLocal_280 != 3)
	{
		func_306(uParam0, 9);
		return;
	}
	if (__LIB_2__::func_343(Global_35, iLocal_26, 1))
	{
		__LIB_0__::func_325(&iLocal_37);
	}
	if (iParam1 == 0 && !__LIB_2__::func_343(Global_35, iLocal_26, 0))
	{
		func_349(uParam0, 64, 1);
	}
	switch (iLocal_190)
	{
		case 0:
			if ((__LIB_8__::func_684(__LIB_13__::func_924(&uLocal_400, 64)) || __LIB_8__::func_684(__LIB_13__::func_924(&uLocal_400, 65))) || __LIB_8__::func_684(__LIB_13__::func_924(&uLocal_400, 66)))
			{
				return;
			}
			if ((__LIB_6__::func_903(__LIB_13__::func_924(&uLocal_400, 64)) || __LIB_6__::func_903(__LIB_13__::func_924(&uLocal_400, 65))) || __LIB_6__::func_903(__LIB_13__::func_924(&uLocal_400, 66)))
			{
				return;
			}
			switch (iLocal_280)
			{
				case 0:
					if (!bLocal_386 && !bLocal_387)
					{
						iLocal_190 = 1;
					}
					break;
				case 1:
					if (iParam1 == 1)
					{
						if (Local_48[iParam1 /*45*/].f_39 == 0)
						{
							iLocal_190 = 1;
							return;
						}
					}
					if (__LIB_0__::func_272(Local_48[iParam1 /*45*/], 1))
					{
						if (iParam1 == 0)
						{
							iVar0 = 41;
						}
						else if (iParam1 == 1)
						{
							if ((((Local_48[iParam1 /*45*/].f_7 != 4 && Local_48[iParam1 /*45*/].f_7 != 6) && Local_48[iParam1 /*45*/].f_7 != 5) && bLocal_371 == 0) && iLocal_374 == 1)
							{
								iVar0 = 38;
							}
							else
							{
								iVar0 = 40;
							}
						}
						else if (iParam1 == 2)
						{
							iVar0 = 39;
						}
						iVar1 = __LIB_13__::func_995(uParam0, &uLocal_400, iVar0, &iLocal_14, 0, 25f, 0, 0);
					}
					else
					{
						iVar1 = 3;
					}
					if (iVar1 == 3)
					{
						iLocal_190 = 1;
					}
					break;
				case 2:
					if (iParam1 == 1)
					{
						if (Local_48[iParam1 /*45*/].f_39 == 0)
						{
							iLocal_190 = 1;
							return;
						}
					}
					if (__LIB_0__::func_272(Local_48[iParam1 /*45*/], 1))
					{
						if (iParam1 == 0)
						{
							iVar0 = 41;
						}
						else if (iParam1 == 1)
						{
							if ((((Local_48[iParam1 /*45*/].f_7 != 4 && Local_48[iParam1 /*45*/].f_7 != 6) && Local_48[iParam1 /*45*/].f_7 != 5) && bLocal_371 == 0) && iLocal_374 == 1)
							{
								iVar0 = 38;
							}
							else
							{
								iVar0 = 40;
							}
						}
						else if (iParam1 == 2)
						{
							iVar0 = 39;
						}
						iVar1 = __LIB_13__::func_995(uParam0, &uLocal_400, iVar0, &iLocal_14, 0, 25f, 0, 0);
					}
					else
					{
						iVar1 = 3;
					}
					if (iVar1 == 3)
					{
						iLocal_190 = 1;
					}
					break;
				case 3:
					if (iParam1 == 1)
					{
						if (Local_48[iParam1 /*45*/].f_39 == 0)
						{
							iLocal_190 = 1;
							return;
						}
					}
					if (__LIB_0__::func_272(Local_48[iParam1 /*45*/], 1))
					{
						if (iParam1 == 0)
						{
							iVar0 = 41;
						}
						else if (iParam1 == 1)
						{
							if ((((Local_48[iParam1 /*45*/].f_7 != 4 && Local_48[iParam1 /*45*/].f_7 != 6) && Local_48[iParam1 /*45*/].f_7 != 5) && bLocal_371 == 0) && iLocal_374 == 1)
							{
								iVar0 = 38;
							}
							else
							{
								iVar0 = 40;
							}
						}
						else if (iParam1 == 2)
						{
							iVar0 = 39;
						}
						iVar1 = __LIB_13__::func_995(uParam0, &uLocal_400, iVar0, &iLocal_14, 0, 25f, 0, 0);
					}
					else
					{
						iVar1 = 3;
					}
					if (iVar1 == 3)
					{
						iLocal_190 = 1;
					}
					break;
			}
			break;
		case 1:
			bVar2 = false;
			if (!__LIB_5__::func_463() && !__LIB_6__::func_904())
			{
				if (__LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 10f)
				{
					if (iParam1 == 0)
					{
						if (func_769(1) && func_769(2))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_ESE", 0))
							{
								bVar2 = true;
							}
						}
						else if (func_769(1) && !func_769(2))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_E", 0))
							{
								bVar2 = true;
							}
						}
						else if (func_769(2) && !func_769(1))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_SE", 0))
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else if (iParam1 == 1)
					{
						if (func_769(0) && func_769(2))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_SWW", 0))
							{
								bVar2 = true;
							}
						}
						else if (func_769(0) && !func_769(2))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_W", 0))
							{
								bVar2 = true;
							}
						}
						else if (func_769(2) && !func_769(0))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_SW", 0))
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else if (iParam1 == 2)
					{
						if (func_769(0) && func_769(1))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_NWNE", 0))
							{
								bVar2 = true;
							}
						}
						else if (func_769(0) && !func_769(1))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_NW", 0))
							{
								bVar2 = true;
							}
						}
						else if (func_769(1) && !func_769(0))
						{
							if (__LIB_12__::func_876(uParam0, "RMASN_L_NE", 0))
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			if (bVar2)
			{
				iLocal_190 = 0;
				if (func_766() <= 0)
				{
					func_306(uParam0, 9);
				}
				else if (!__LIB_2__::func_343(Global_35, iLocal_26, 0))
				{
					func_306(uParam0, 0);
				}
				else
				{
					func_306(uParam0, 2);
				}
			}
			break;
	}
}

void func_353(var uParam0, int iParam1)
{
	iLocal_288 = iParam1;
	if ((!func_765(32768) || (func_765(32768) && __LIB_2__::func_123(iLocal_26, Local_48[iParam1 /*45*/], 0.9f))) && !Local_48[iParam1 /*45*/].f_39)
	{
		func_349(uParam0, 8, 0);
	}
	else if (Local_48[iParam1 /*45*/].f_39)
	{
		__LIB_4__::func_353();
		__LIB_0__::func_769();
	}
	if (iParam1 == 2)
	{
		func_291(uParam0, &iLocal_14, &uLocal_630, &uLocal_400, 12, 13, 7f, 2f, 2f, 0);
	}
	if ((!__LIB_0__::func_272(Local_48[iParam1 /*45*/], 1) && Local_48[iParam1 /*45*/].f_44) || Local_48[iParam1 /*45*/].f_39)
	{
		switch (iParam1)
		{
			case 0:
				func_306(uParam0, 4);
				break;
			case 1:
				func_306(uParam0, 6);
				break;
			case 2:
				func_306(uParam0, 8);
				break;
		}
		return;
	}
}

bool func_354(var uParam0)
{
	if (__LIB_3__::func_330(Global_35, iLocal_26, 1) && __LIB_0__::func_266(iLocal_14, vLocal_294, 10f, 1, 1))
	{
		func_290(uParam0, 1, 0);
		func_306(uParam0, 11);
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_663, 32768) && !__LIB_5__::func_463())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_260[1 /*4*/], "s_idle", 1))
		{
			func_728(32768, 1);
		}
	}
	if (__LIB_13__::func_995(uParam0, &uLocal_400, 60, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0) == 3)
	{
		if (!bLocal_394)
		{
			if (!__LIB_5__::func_463() && __LIB_0__::func_94(iLocal_26, vLocal_294, 1) <= 15f)
			{
				if (__LIB_12__::func_876(uParam0, "RMSN_4_DOCK", 0))
				{
					bLocal_394 = true;
				}
			}
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_36))
		{
			iLocal_36 = __LIB_5__::func_442(vLocal_294, 0);
			MAP::_BLIP_SET_MODIFIER(iLocal_36, 231194138);
		}
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false) || (PED::IS_PED_ON_VEHICLE(Global_35, false) && __LIB_0__::func_665(Global_35, iLocal_26, 1, 1) < 1f))
		{
			__LIB_0__::func_325(&iLocal_37);
		}
		func_349(uParam0, 32, 0);
		if (!bLocal_368)
		{
			bLocal_368 = true;
			fLocal_290 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_294, true);
		}
		__LIB_13__::func_995(uParam0, &uLocal_400, 10, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0);
	}
	return false;
}

void func_355(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_37) && __LIB_2__::func_343(Global_35, iLocal_26, 1))
	{
		__LIB_0__::func_325(&iLocal_37);
	}
	if (__LIB_2__::func_343(Global_35, iLocal_26, 0) && __LIB_2__::func_343(iLocal_14, iLocal_26, 0))
	{
		func_291(uParam0, &iLocal_14, &uLocal_626, &uLocal_400, 56, 59, 1088421888 /* Float: 7f */, 5f, 5f, 0);
	}
	if (iLocal_186 == 0 || !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, true))
	{
		func_349(uParam0, 256, 0);
	}
	else if (iLocal_186 == 9)
	{
		func_349(uParam0, 1024, 0);
	}
	else
	{
		func_349(uParam0, 512, 0);
	}
}

void func_391(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = func_796(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_797(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_806(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_806(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_806(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_806(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_806(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_806(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_806(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_806(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_806(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_806(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_806(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_806(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_806(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_808();
						func_809(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_806(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_391(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_391(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_391(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_806(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_806(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_844();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_806(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

Vector3 func_395(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_851(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_851(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

bool func_420(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	struct<28> Var0;
	var uVar28;
	int iVar29;
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		return false;
	}
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	__LIB_4__::func_228(&Var0);
	__LIB_1__::func_402(&Var0, 0);
	if (PED::IS_PED_FLEEING(*iParam3) || *uParam4)
	{
		return true;
	}
	if (func_521(*iParam3, 0, &Var0, &uVar28, 0, 0) || __LIB_12__::func_644(uParam0) == 11)
	{
		iVar29 = __LIB_13__::func_995(uParam0, uParam1, iParam2, iParam3, 1, 1097859072 /* Float: 15f */, 1, 0);
		if (iVar29 == 1 || iVar29 == 7)
		{
			__LIB_13__::func_993(iParam3, uParam4);
		}
		return true;
	}
	return false;
}

void func_426(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_325(&iLocal_37);
	__LIB_0__::func_325(&iLocal_36);
	__LIB_0__::func_325(&iLocal_38);
	__LIB_0__::func_325(&iLocal_39);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_2__::func_788(&(iLocal_15[iVar0]), 0, 1, 1);
		iVar0++;
	}
	__LIB_13__::func_310(&iLocal_45);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		__LIB_0__::func_325(&(Local_48[iVar1 /*45*/].f_1));
		__LIB_0__::func_325(&(Local_48[iVar1 /*45*/].f_2));
		__LIB_13__::func_310(&(uLocal_41[iVar1]));
		if (!__LIB_0__::func_272(Local_48[iVar1 /*45*/], 1))
		{
		}
		else
		{
			__LIB_2__::func_788(&(Local_48[iVar1 /*45*/]), 0, 1, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_48[iVar1 /*45*/]));
			__LIB_0__::func_172(Local_48[iVar1 /*45*/].f_3);
		}
		iVar1++;
	}
	if (bLocal_389)
	{
		__LIB_13__::func_994(&iLocal_27, &uLocal_40, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_28);
	}
	__LIB_0__::func_172(iLocal_27);
	__LIB_0__::func_172(iLocal_28);
	__LIB_0__::func_172(iLocal_29);
	__LIB_0__::func_172(iLocal_30);
	__LIB_0__::func_172(iLocal_31);
	__LIB_0__::func_172(iLocal_34);
	__LIB_0__::func_172(iLocal_35);
	__LIB_13__::func_921(uParam0);
	__LIB_13__::func_920();
	__LIB_13__::func_927(&Local_252);
	__LIB_4__::func_16(&(Local_252.f_5));
}

int func_487(int iParam0, int iParam1)
{
	var uVar0;
	return func_941(&uVar0, iParam0, iParam1);
}

bool func_521(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_969(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_970(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_575(var uParam0)
{
	if (__LIB_12__::func_871(uParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_286))
	{
		iLocal_286 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@masn@leadin@rsc_7@rowboatswamp", 1, 0, false, true);
		return false;
	}
	if (!bLocal_392)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_286, "rowboatswamp", iLocal_26, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_286);
			bLocal_392 = true;
		}
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_286, true, false))
	{
		return false;
	}
	return true;
}

void func_615(var uParam0)
{
	__LIB_13__::func_928();
	__LIB_3__::func_319(iLocal_286);
}

void func_617(var uParam0)
{
	__LIB_13__::func_928();
	func_299();
	func_300();
	func_301();
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_248, 47);
	if (!bLocal_389)
	{
		__LIB_13__::func_994(&iLocal_27, &uLocal_40, 1);
		bLocal_389 = true;
	}
	if (__LIB_12__::func_892(uParam0, Global_35, "Arthur", 0, 1, 1) || __LIB_12__::func_892(uParam0, Global_35, "John", 0, 1, 1))
	{
		func_305(&Global_35, &iLocal_26, -1, 1);
		PED::_0x2208438012482A1A(Global_35, false, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	}
	if (__LIB_12__::func_892(uParam0, iLocal_14, "AlbertMason", 0, 1, 1))
	{
		func_305(&iLocal_14, &iLocal_26, 0, 1);
		PED::_0x2208438012482A1A(iLocal_14, false, false);
		func_308();
	}
	if (__LIB_12__::func_892(uParam0, iLocal_26, "ROWBOATSWAMP", 0, 1, 1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_23, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_22, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_24, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_25, false, false);
		}
	}
	if (__LIB_12__::func_849(uParam0, 1))
	{
	}
	if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_23, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_22, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_24, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_25, false, false);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_305(&iLocal_14, &iLocal_26, 0, 1);
			func_305(&Global_35, &iLocal_26, -1, 1);
		}
	}
	iLocal_664 = 0;
}

void func_619(var uParam0)
{
	__LIB_13__::func_928();
	__LIB_2__::func_919(iLocal_21, 0, 1);
	__LIB_2__::func_919(iLocal_22, 0, 1);
	__LIB_2__::func_919(iLocal_24, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		OBJECT::DELETE_OBJECT(&iLocal_24);
	}
	__LIB_2__::func_919(iLocal_25, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		OBJECT::DELETE_OBJECT(&iLocal_25);
	}
	__LIB_2__::func_919(iLocal_23, 0, 1);
	func_1057(1);
	if (!__LIB_2__::func_343(iLocal_14, iLocal_26, 0))
	{
		if (func_305(&iLocal_14, &iLocal_26, -1, 1))
		{
		}
	}
}

void func_620(var uParam0)
{
	__LIB_13__::func_928();
	if (__LIB_12__::func_892(uParam0, iLocal_14, "AlbertMason", 0, 1, 1))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 2);
		if (func_305(&iLocal_14, &iLocal_26, -1, 1))
		{
		}
	}
	if (__LIB_13__::func_509(uParam0, Global_35, "Arthur", 0, 1, 1) || __LIB_13__::func_509(uParam0, Global_35, "John", 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
}

int func_627(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	if (iLocal_664 == 1 && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = __LIB_8__::func_931(iParam0, vParam1, iParam4, iParam5, fParam6, bParam7, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !CAM::IS_SCREEN_FADED_OUT())
	{
		iLocal_664 = 1;
	}
	return iVar0;
}

void func_631(int iParam0, int iParam1)
{
	if (Local_48[iParam0 /*45*/].f_7 == iParam1)
	{
		return;
	}
	if (!__LIB_0__::func_272(Local_48[iParam0 /*45*/], 1))
	{
		return;
	}
	__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_2));
	if (ENTITY::_IS_ENTITY_FROZEN(Local_48[iParam0 /*45*/]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*45*/], false);
	}
	Local_48[iParam0 /*45*/].f_7 = iParam1;
	switch (Local_48[iParam0 /*45*/].f_7)
	{
		case 0:
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 18, false);
			PED::_0xA90684ED185CCB4B(Local_48[iParam0 /*45*/], 1, 40.8f, 0f);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::TASK_ANIMAL_UNALERTED(Local_48[iParam0 /*45*/], -1, Local_48[iParam0 /*45*/].f_3, 0, 0);
			break;
		case 1:
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 18, false);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::TASK_STAND_STILL(Local_48[iParam0 /*45*/], -1);
			break;
		case 2:
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 18, false);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::TASK_STAND_STILL(Local_48[iParam0 /*45*/], -1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*45*/], true);
			break;
		case 3:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*45*/], true);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_48[iParam0 /*45*/], Global_35, 4, 0, 1000f, -1, 0);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 18, true);
			if (iParam0 == 1)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_260[0 /*4*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[0]))
				{
					__LIB_1__::func_864(iLocal_15[0], 0, 0);
				}
			}
			__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_1));
			__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_2));
			break;
		case 4:
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 9, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 12, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 16, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 4, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 32, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 54, false);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_48[iParam0 /*45*/], 74, 1f);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_48[iParam0 /*45*/], 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*45*/], 78, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*45*/], 58, true);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::TASK_COMBAT_PED(Local_48[iParam0 /*45*/], Global_35, 0, 0);
			iLocal_283++;
			Local_48[iParam0 /*45*/].f_41 = 1;
			if (Local_48[iParam0 /*45*/].f_40 == 1 && Local_48[iParam0 /*45*/].f_39 == 0)
			{
			}
			if (!MAP::DOES_BLIP_EXIST(Local_48[iParam0 /*45*/].f_2) && !MAP::_DOES_ENTITY_HAVE_BLIP(Local_48[iParam0 /*45*/]))
			{
				Local_48[iParam0 /*45*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_48[iParam0 /*45*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			else if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_48[iParam0 /*45*/]))
			{
				MAP::_0xBD62D98799A3DAF0(MAP::GET_BLIP_FROM_ENTITY(Local_48[iParam0 /*45*/]), joaat("BLIP_STYLE_ENEMY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(MAP::GET_BLIP_FROM_ENTITY(Local_48[iParam0 /*45*/]), "MASON4_B_GATOR");
			}
			else
			{
				MAP::_0xBD62D98799A3DAF0(Local_48[iParam0 /*45*/].f_2, joaat("BLIP_STYLE_ENEMY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			break;
		case 5:
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 9, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 12, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 16, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 4, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 32, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 54, false);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_48[iParam0 /*45*/], 74, 1f);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_48[iParam0 /*45*/], 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*45*/], 78, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*45*/], 58, true);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::TASK_COMBAT_PED(Local_48[iParam0 /*45*/], Global_35, 0, 0);
			iLocal_283++;
			Local_48[iParam0 /*45*/].f_41 = 1;
			if (Local_48[iParam0 /*45*/].f_40 == 1 && Local_48[iParam0 /*45*/].f_39 == 0)
			{
			}
			if (!MAP::DOES_BLIP_EXIST(Local_48[iParam0 /*45*/].f_2) && !MAP::_DOES_ENTITY_HAVE_BLIP(Local_48[iParam0 /*45*/]))
			{
				Local_48[iParam0 /*45*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_48[iParam0 /*45*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			else if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_48[iParam0 /*45*/]))
			{
				MAP::_0xBD62D98799A3DAF0(MAP::GET_BLIP_FROM_ENTITY(Local_48[iParam0 /*45*/]), joaat("BLIP_STYLE_ENEMY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(MAP::GET_BLIP_FROM_ENTITY(Local_48[iParam0 /*45*/]), "MASON4_B_GATOR");
			}
			else
			{
				MAP::_0xBD62D98799A3DAF0(Local_48[iParam0 /*45*/].f_2, joaat("BLIP_STYLE_ENEMY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			break;
		case 6:
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 9, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 12, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 16, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 4, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 32, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_48[iParam0 /*45*/], 54, false);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_48[iParam0 /*45*/], 74, 1f);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_48[iParam0 /*45*/], 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*45*/], 78, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*45*/], 58, true);
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*45*/], true, false);
			TASK::TASK_COMBAT_PED(Local_48[iParam0 /*45*/], Global_35, 0, 0);
			iLocal_283++;
			Local_48[iParam0 /*45*/].f_41 = 1;
			if (Local_48[iParam0 /*45*/].f_40 == 1 && Local_48[iParam0 /*45*/].f_39 == 0)
			{
			}
			if (!MAP::DOES_BLIP_EXIST(Local_48[iParam0 /*45*/].f_2) && !MAP::_DOES_ENTITY_HAVE_BLIP(Local_48[iParam0 /*45*/]))
			{
				Local_48[iParam0 /*45*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_48[iParam0 /*45*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			else if (MAP::_DOES_ENTITY_HAVE_BLIP(Local_48[iParam0 /*45*/]))
			{
				MAP::_0xBD62D98799A3DAF0(MAP::GET_BLIP_FROM_ENTITY(Local_48[iParam0 /*45*/]), joaat("BLIP_STYLE_ENEMY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(MAP::GET_BLIP_FROM_ENTITY(Local_48[iParam0 /*45*/]), "MASON4_B_GATOR");
			}
			else
			{
				MAP::_0xBD62D98799A3DAF0(Local_48[iParam0 /*45*/].f_2, joaat("BLIP_STYLE_ENEMY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

void func_636()
{
	int iVar0;
	__LIB_10__::func_597("MASON4_O_SEARCH");
	__LIB_10__::func_597("MASN4_O_SEARCH2");
	__LIB_10__::func_597("MASN4_O_SEARCH3");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_325(&(Local_48[iVar0 /*45*/].f_1));
		iVar0++;
	}
}

void func_637(int iParam0)
{
	__LIB_10__::func_597("MASON4_O_PHOTO");
	__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_1));
	__LIB_0__::func_325(&iLocal_39);
}

void func_641()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_325(&(Local_48[iVar0 /*45*/].f_1));
		if (!__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1))
		{
		}
		else if (Local_48[iVar0 /*45*/].f_39)
		{
		}
		else if (iVar0 == 0)
		{
			if ((iLocal_188 == 4 || iLocal_188 == 3) || iLocal_188 == 8)
			{
			}
			else if (!VOLUME::_DOES_VOLUME_EXIST(Local_48[iVar0 /*45*/].f_3))
			{
			}
			else
			{
				func_743(iVar0);
			}
			iVar0++;
		}
	}
}

void func_642(int iParam0)
{
	if (iParam0 != 0)
	{
		__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_1));
	}
	if (iParam0 == 0)
	{
	}
	else if (!MAP::DOES_BLIP_EXIST(Local_48[iParam0 /*45*/].f_1))
	{
		Local_48[iParam0 /*45*/].f_1 = __LIB_8__::func_778(408396114, Local_48[iParam0 /*45*/], 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_1, "MASON4_B_GATOR");
	}
	PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*45*/], 253, false);
}

void func_643(int iParam0)
{
	__LIB_1__::func_681(&iLocal_287, iParam0);
}

void func_645(int* iParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		__LIB_0__::func_325(iParam0);
	}
	vVar0 = { 0f, 0f, 0f };
	iVar3 = 0;
	fVar4 = 0f;
	iVar5 = 0;
	iVar6 = 0;
	iVar5 = 0;
	while (iVar5 < 3)
	{
		if (!__LIB_0__::func_272(Local_48[iVar5 /*45*/], 1))
		{
		}
		else if (Local_48[iVar5 /*45*/].f_39)
		{
		}
		else
		{
			iVar3++;
			vVar0 = { vVar0 + ENTITY::GET_ENTITY_COORDS(Local_48[iVar5 /*45*/], true, false) };
			iVar6 = 0;
			while (iVar6 < 3)
			{
				if (iVar5 == iVar6)
				{
				}
				else if (!__LIB_0__::func_272(Local_48[iVar6 /*45*/], 1))
				{
				}
				else if (Local_48[iVar6 /*45*/].f_39)
				{
				}
				else
				{
					fVar7 = __LIB_0__::func_665(Local_48[iVar5 /*45*/], Local_48[iVar6 /*45*/], 1, 1);
					if (fVar7 > fVar4)
					{
						fVar4 = fVar7;
					}
				}
				iVar6++;
			}
		}
		iVar5++;
	}
	if (iVar3 == 0)
	{
		return;
	}
	vVar0 = { vVar0 / FtoV(BUILTIN::TO_FLOAT(iVar3)) };
	if (fVar4 < 80f)
	{
		fVar4 = 80f;
	}
	fVar8 = fVar4;
	if (fVar8 > fLocal_289)
	{
		fLocal_289 = fVar8;
	}
	*iParam0 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vVar0, fVar4);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "MASON4_B_SWAMP");
}

bool func_646(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iParam0 /*4*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_260[iParam0 /*4*/], true, false))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_260[iParam0 /*4*/], false))
	{
		return false;
	}
	return true;
}

void func_647(var uParam0, int iParam1)
{
	Local_48[iParam1 /*45*/].f_39 = 1;
	iLocal_280++;
	switch (iParam1)
	{
		case 0:
			__LIB_1__::func_683(&iLocal_281, 1);
			break;
		case 1:
			__LIB_1__::func_683(&iLocal_281, 2);
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_281, 4);
			break;
	}
	__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, iLocal_281);
}

void func_649(int iParam0)
{
	if (!__LIB_0__::func_272(iLocal_15[iParam0], 1))
	{
		return;
	}
	if (__LIB_0__::func_163(iLocal_15[iParam0], 242628503) || PED::IS_PED_FLEEING(iLocal_15[iParam0]))
	{
		return;
	}
	TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15[iParam0], Local_48[1 /*45*/], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	TASK::_0x3923EC958249657D(iLocal_15[iParam0], Global_35, -1082130432 /* Float: -1f */);
}

void func_678(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_12__::func_705(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_404, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_416));
		}
		func_1093(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1095(uParam0);
		func_1096(uParam0);
		__LIB_12__::func_901(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_12__::func_853(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

void func_724(var uParam0)
{
	float fVar0;
	vector3 vVar1[24];
	if (ENTITY::IS_ENTITY_DEAD(Local_48[0 /*45*/]))
	{
		if (iLocal_188 != 8)
		{
			func_756(8);
		}
		if (iLocal_189 != 4)
		{
			iLocal_189 = 4;
		}
	}
	else if (Local_48[0 /*45*/].f_39)
	{
		if (iLocal_188 != 8 && iLocal_188 != 7)
		{
			func_756(7);
		}
	}
	switch (iLocal_188)
	{
		case 0:
		case 1:
			if (iLocal_189 > 0)
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_48[0 /*45*/], true, false), 3.5f, true) || __LIB_0__::func_665(Local_48[0 /*45*/], Global_35, 1, 1) < 9f)
				{
					if (iLocal_189 <= 1)
					{
						func_756(4);
					}
					else
					{
						func_756(2);
					}
				}
			}
			break;
		case 2:
			if (!bLocal_365)
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar1, "RMASN_G1_GOBCKJ", 24);
				}
				else
				{
					StringCopy(&cVar1, "RMASN_G1_GOBACK", 24);
				}
				bLocal_365 = __LIB_12__::func_876(uParam0, &cVar1, 0);
			}
			if (!__LIB_2__::func_343(Global_35, iLocal_26, 0))
			{
				func_349(uParam0, 128, 0);
			}
			fVar0 = __LIB_0__::func_665(Local_48[0 /*45*/], Global_35, 1, 1);
			if (fVar0 > 10f)
			{
				func_756(3);
			}
			else if (fVar0 < 4.5f)
			{
				func_756(4);
			}
			if (iLocal_188 == 2)
			{
				if (!__LIB_0__::func_75(&uLocal_201))
				{
					__LIB_1__::func_148(&uLocal_201);
				}
				else if (__LIB_1__::func_871(&uLocal_201) > 2000)
				{
					func_756(3);
				}
			}
			break;
		case 3:
			fVar0 = __LIB_0__::func_665(Local_48[0 /*45*/], Global_35, 1, 1);
			if (fVar0 <= 3f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_48[0 /*45*/], 1.5f);
			}
			if (fVar0 < 2f)
			{
				func_756(4);
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_48[0 /*45*/], true, false), 1f, true))
			{
				func_756(4);
			}
			if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_29) && !__LIB_1__::func_205(Global_35, iLocal_29, 1, 0)) && iLocal_188 == 3)
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
				__LIB_1__::func_681(&iLocal_287, 8192);
				func_756(5);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_26) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, true)) && iLocal_188 != 5)
			{
				func_756(6);
			}
			if (Local_48[0 /*45*/].f_39)
			{
				func_756(6);
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(Local_48[0 /*45*/], 780511057))
			{
				TASK::TASK_COMBAT_PED(Local_48[0 /*45*/], Global_35, 0, 0);
			}
			if (!__LIB_2__::func_343(Global_35, iLocal_26, 0))
			{
				func_349(uParam0, 128, 0);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_26) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, true)) && iLocal_188 != 5)
			{
				func_756(6);
			}
			if (Local_48[0 /*45*/].f_39)
			{
				func_756(7);
			}
			break;
		case 6:
			if (PED::IS_PED_FLEEING(Local_48[0 /*45*/]) || Local_48[0 /*45*/].f_39)
			{
				func_631(0, 3);
			}
			break;
		case 5:
			fVar0 = __LIB_0__::func_665(Local_48[0 /*45*/], Global_35, 1, 1);
			if (fVar0 < 6f && __LIB_1__::func_205(Global_35, iLocal_29, 1, 0))
			{
				__LIB_1__::func_681(&iLocal_287, 128);
				func_756(4);
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_48[0 /*45*/], true, false), 1f, true))
			{
				func_756(4);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_48[0 /*45*/], vLocal_354, 1f, 1f, 3f, false, true, 0) && iLocal_188 == 5)
			{
				func_756(0);
			}
			break;
	}
}

void func_725(int iParam0)
{
	bool bVar0;
	if (iParam0 >= 3)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_48[iParam0 /*45*/]))
	{
		if (!Local_48[iParam0 /*45*/].f_44)
		{
			if (iParam0 == 1)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[0 /*4*/], false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_260[0 /*4*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_15[0]))
				{
					__LIB_1__::func_864(iLocal_15[0], 0, 0);
				}
			}
			if (!Local_48[iParam0 /*45*/].f_39)
			{
				iLocal_284++;
				bLocal_386 = true;
			}
			else
			{
				iLocal_285++;
				bLocal_387 = true;
			}
			if (__LIB_4__::func_68("MASN4_O_ROT", 1) || __LIB_4__::func_68("MASN4_O_PHOTO", 1))
			{
				__LIB_4__::func_353();
			}
			__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_1));
			__LIB_0__::func_325(&(Local_48[iParam0 /*45*/].f_2));
			Local_48[iParam0 /*45*/].f_44 = 1;
		}
		return;
	}
	bVar0 = false;
	if (((func_1170(&(Local_48[iParam0 /*45*/])) && iLocal_184 != 1) && iLocal_184 != 2) && func_1171(iParam0))
	{
		bVar0 = true;
		Local_48[iParam0 /*45*/].f_42 = 1;
	}
	if ((__LIB_0__::func_665(Global_35, Local_48[iParam0 /*45*/], 1, 1) < 4.75f && !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false)) && iParam0 != 0)
	{
		bVar0 = true;
		Local_48[iParam0 /*45*/].f_42 = 1;
	}
	if (Local_48[iParam0 /*45*/].f_39)
	{
		if (Local_48[iParam0 /*45*/].f_7 != 3 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_48[iParam0 /*45*/], -1))
		{
			func_631(iParam0, 3);
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[iParam0 /*45*/], Global_35, 1, 1) || __LIB_0__::func_48(Local_48[iParam0 /*45*/], iLocal_26, 2f, 1))
	{
		if (((Local_48[iParam0 /*45*/].f_7 != 3 && Local_48[iParam0 /*45*/].f_7 != 4) && Local_48[iParam0 /*45*/].f_7 != 5) && Local_48[iParam0 /*45*/].f_7 != 7)
		{
			if (iLocal_283 == 0)
			{
				func_631(iParam0, 4);
			}
			else
			{
				func_631(iParam0, 6);
			}
		}
	}
	else if (((bVar0 && Local_48[iParam0 /*45*/].f_7 != 4) && Local_48[iParam0 /*45*/].f_7 != 6) && Local_48[iParam0 /*45*/].f_7 != 5)
	{
		if (iLocal_283 == 0)
		{
			if (iParam0 == 0)
			{
				func_756(4);
			}
			else
			{
				func_631(iParam0, 4);
			}
		}
		else if (iParam0 == 0)
		{
			func_756(4);
		}
		else
		{
			func_631(iParam0, 6);
		}
	}
	if ((Local_48[iParam0 /*45*/].f_7 == 4 || Local_48[iParam0 /*45*/].f_7 == 6) || Local_48[iParam0 /*45*/].f_7 == 5)
	{
		if (PED::IS_PED_RAGDOLL(iLocal_14) || __LIB_0__::func_48(Local_48[iParam0 /*45*/], iLocal_14, 5f, 1))
		{
			bLocal_375 = true;
		}
	}
	else if (Local_48[iParam0 /*45*/].f_7 != 3)
	{
		if (__LIB_0__::func_48(Local_48[iParam0 /*45*/], iLocal_14, 3f, 1))
		{
			bLocal_376 = true;
		}
	}
	if (iLocal_184 >= 9)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_294, 30f, 1, 1))
		{
			func_631(iParam0, 3);
		}
	}
	switch (Local_48[iParam0 /*45*/].f_7)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (PED::IS_PED_RAGDOLL(iLocal_14) || PED::IS_PED_RAGDOLL(Global_35))
			{
				func_631(iParam0, 3);
			}
			else
			{
				if (((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iParam0 /*45*/], Global_35) && ENTITY::DOES_ENTITY_EXIST(iLocal_26)) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false)) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_26)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iParam0 /*45*/], iLocal_26)))
				{
					if (func_1172(&(Local_48[iParam0 /*45*/])))
					{
						func_728(8, 0);
					}
					else
					{
						func_728(4, 0);
					}
				}
				Jump @1076; //curOff = 978
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iParam0 /*45*/], Global_35) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_26)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iParam0 /*45*/], iLocal_26)))
				{
					if (func_1172(&(Local_48[iParam0 /*45*/])))
					{
						func_728(8, 0);
					}
					else
					{
						func_728(4, 0);
					}
				}
				Jump @1076; //curOff = 1067
			}
			default:
				break;
	}
}

bool func_726(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (VEHICLE::_0x30D86B2B7622D0EB(iLocal_26))
	{
		return false;
	}
	if (iLocal_242 >= 2)
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (!bLocal_373)
		{
			return false;
		}
		if (!__LIB_0__::func_48(iLocal_14, Local_48[iParam1 /*45*/], 25f, 1))
		{
			return false;
		}
	}
	else if (iParam1 == 0)
	{
		if (iLocal_189 >= 2 && __LIB_1__::func_205(Local_48[iParam1 /*45*/], iLocal_30, 1, 0))
		{
			return true;
		}
		else if ((iLocal_189 == 3 && __LIB_0__::func_48(iLocal_14, Local_48[iParam1 /*45*/], 15f, 1)) && __LIB_2__::func_123(iLocal_26, Local_48[iParam1 /*45*/], 0.9f))
		{
			return true;
		}
	}
	else if (!__LIB_0__::func_48(iLocal_14, Local_48[iParam1 /*45*/], 15f, 1))
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (!__LIB_2__::func_123(iLocal_26, Local_48[iParam1 /*45*/], 0.9f))
	{
		if (!bLocal_367)
		{
			if (__LIB_0__::func_45("MASON4_H_TURN", 10000, 0, 0, 0, 1) != 0)
			{
				bLocal_367 = true;
			}
		}
		func_349(uParam0, 32768, 1);
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_14, Local_48[iParam1 /*45*/], 1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_22) * Vector(-6f, -6f, -6f) };
	if (!ENTITY::_0x0C9DBF48C6BA6E4C(iLocal_14, vVar0, 1))
	{
		return false;
	}
	return true;
}

void func_727(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 0)
	{
		if (iLocal_184 == 3 || iLocal_184 == 4)
		{
			return;
		}
	}
	iVar2 = __LIB_3__::func_112(iLocal_14, Local_48[iParam1 /*45*/], 1060437492 /* Float: 0.707f */);
	if (!func_754(iParam1))
	{
		return;
	}
	else if (iParam1 == 2)
	{
		__LIB_13__::func_995(uParam0, &uLocal_400, 11, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0);
	}
	if (iParam1 == 1)
	{
		if (!__LIB_11__::func_764(&uLocal_400, 74) && !bLocal_371)
		{
			return;
		}
	}
	else if (iParam1 == 2)
	{
		if (!__LIB_11__::func_764(&uLocal_400, 13))
		{
			return;
		}
	}
	switch (iVar2)
	{
		case 0:
			if (!func_1173(iParam1))
			{
				iVar0 = (14 + iParam1 * 2);
				iVar1 = (14 + iParam1 * 2 + 1);
				if (func_291(uParam0, &iLocal_14, &(Local_642[iParam1 /*4*/]), &uLocal_400, iVar0, iVar1, 1088421888 /* Float: 7f */, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */, 0) == 1)
				{
					if (func_1172(&(Local_48[iParam1 /*45*/])))
					{
						func_728(524288, 0);
					}
					else
					{
						func_728(65536, 0);
					}
				}
			}
			else if (func_291(uParam0, &iLocal_14, &uLocal_655, &uLocal_400, 28, 33, 1088421888 /* Float: 7f */, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */, 0) == 1)
			{
				bLocal_388 = true;
			}
			break;
		case 1:
			break;
		case 2:
			if (iParam1 == 1)
			{
				if (!__LIB_11__::func_764(&uLocal_400, 21))
				{
					if (__LIB_13__::func_995(uParam0, &uLocal_400, 21, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0) >= 1)
					{
						func_728(33554432, 0);
					}
				}
				else if (func_291(uParam0, &iLocal_14, &uLocal_659, &uLocal_400, 22, 27, 7f, 2f, 2f, 0) >= 1)
				{
					func_728(33554432, 0);
				}
			}
			else if (iParam1 == 2)
			{
				if (!__LIB_11__::func_764(&uLocal_400, 20))
				{
					if (__LIB_13__::func_995(uParam0, &uLocal_400, 20, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0) >= 1)
					{
						func_728(33554432, 0);
					}
				}
				else if (func_291(uParam0, &iLocal_14, &uLocal_659, &uLocal_400, 22, 27, 7f, 2f, 2f, 0) >= 1)
				{
					func_728(33554432, 0);
				}
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				if (!__LIB_11__::func_764(&uLocal_400, 21))
				{
					if (__LIB_13__::func_995(uParam0, &uLocal_400, 21, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0) >= 1)
					{
						func_728(4194304, 0);
					}
				}
				else if (func_291(uParam0, &iLocal_14, &uLocal_659, &uLocal_400, 22, 27, 7f, 2f, 2f, 0) >= 1)
				{
					func_728(4194304, 0);
				}
			}
			else if (iParam1 == 2)
			{
				if (!__LIB_11__::func_764(&uLocal_400, 20))
				{
					if (__LIB_13__::func_995(uParam0, &uLocal_400, 20, &iLocal_14, 0, 1097859072 /* Float: 15f */, 0, 0) >= 1)
					{
						func_728(4194304, 0);
					}
				}
				else if (func_291(uParam0, &iLocal_14, &uLocal_659, &uLocal_400, 22, 27, 7f, 2f, 2f, 0) >= 1)
				{
					func_728(4194304, 0);
				}
			}
			break;
	}
}

void func_728(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		iLocal_666 = 1;
		return;
	}
	if ((iLocal_666 != 1 && iParam1 == 0) || (iLocal_665 == iParam0 && iParam1 == 0))
	{
		return;
	}
	else if (iLocal_666 != 1 && iParam1 == 1)
	{
	}
	else if (iLocal_665 == iParam0 && iParam1 == 1)
	{
	}
	iLocal_666 = iParam0;
	if (__LIB_0__::func_27(iLocal_663, iParam0))
	{
		switch (iParam0)
		{
			case 16:
				iLocal_666 = 16;
				if (!__LIB_0__::func_27(iLocal_663, 32))
				{
					iLocal_666 = 32;
				}
				break;
			case 65536:
				iLocal_666 = 65536;
				if (!__LIB_0__::func_27(iLocal_663, 131072))
				{
					iLocal_666 = 131072;
				}
				else if (!__LIB_0__::func_27(iLocal_663, 262144))
				{
					iLocal_666 = 262144;
				}
				break;
			case 524288:
				iLocal_666 = 524288;
				if (!__LIB_0__::func_27(iLocal_663, 1048576))
				{
					iLocal_666 = 1048576;
				}
				else if (!__LIB_0__::func_27(iLocal_663, 2097152))
				{
					iLocal_666 = 2097152;
				}
				break;
			case 4194304:
				iLocal_666 = 4194304;
				if (!__LIB_0__::func_27(iLocal_663, 8388608))
				{
					iLocal_666 = 8388608;
				}
				else if (!__LIB_0__::func_27(iLocal_663, 16777216))
				{
					iLocal_666 = 16777216;
				}
				break;
			case 33554432:
				iLocal_666 = 33554432;
				if (!__LIB_0__::func_27(iLocal_663, 67108864))
				{
					iLocal_666 = 67108864;
				}
				else if (!__LIB_0__::func_27(iLocal_663, 134217728))
				{
					iLocal_666 = 134217728;
				}
				break;
			case 536870912:
				iLocal_666 = 536870912;
				if (!__LIB_0__::func_27(iLocal_663, 1073741824 /* Float: 2f */))
				{
					iLocal_666 = 1073741824; /* Float: 2f */
				}
				else if (!__LIB_0__::func_27(iLocal_663, -2147483648))
				{
					iLocal_666 = -2147483648;
				}
				break;
		}
	}
}

void func_729(var uParam0, int iParam1)
{
	func_1174();
	iLocal_280++;
	Local_48[iParam1 /*45*/].f_39 = 1;
	if (iParam1 == 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[0 /*4*/]) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_260[0 /*4*/], false))
		{
			iLocal_374 = 1;
		}
	}
	switch (iParam1)
	{
		case 0:
			__LIB_1__::func_683(&iLocal_281, 1);
			func_304(5);
			break;
		case 1:
			__LIB_1__::func_683(&iLocal_281, 2);
			func_304(3);
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_281, 4);
			func_304(7);
			break;
	}
	__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, iLocal_281);
	__LIB_4__::func_353();
	switch (iLocal_280)
	{
		case 1:
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			break;
		case 2:
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			break;
		case 3:
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			break;
	}
}

char* func_731(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "pbl_boathit_general";
		case 4:
			return "pbl_boathit_L_1";
		case 8:
			return "pbl_boathit_R_1";
		case 16:
			return "pbl_disturbgator_1";
		case 32:
			return "pbl_disturbgator_2";
		case 64:
			return "pbl_enter";
		case 128:
			return "pbl_exit";
		case 256:
			return "pbl_Exit_SitIdle";
		case 512:
			return "pbl_idle";
		case 1024:
			return "pbl_idle_checkarthur";
		case 2048:
			return "pbl_idle_flies";
		case 4096:
			return "pbl_idle_lookaround";
		case 8192:
			return "pbl_idle_sweat";
		case 16384:
			return "pbl_missionfail_1";
		case 32768:
			return "pbl_missionsuccess_packup";
		case 65536:
			return "pbl_point_fl_1";
		case 131072:
			return "pbl_point_fl_2";
		case 262144:
			return "pbl_point_fl_3";
		case 524288:
			return "pbl_point_fr_1";
		case 1048576:
			return "pbl_point_fr_2";
		case 2097152:
			return "pbl_point_fr_3";
		case 4194304:
			return "pbl_point_l_1";
		case 8388608:
			return "pbl_point_l_2";
		case 16777216:
			return "pbl_point_l_3";
		case 33554432:
			return "pbl_point_r_1";
		case 67108864:
			return "pbl_point_r_2";
		case 134217728:
			return "pbl_point_r_3";
		case 268435456:
			return "pbl_SitIdle";
		case 536870912:
			return "pbl_takephoto_1";
		case 1073741824:
			return "pbl_takephoto_2";
		case -2147483648:
			return "pbl_takephoto_3";
		default:
			break;
	}
	return "";
}

bool func_732(int iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_260[iParam0 /*4*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_260[iParam0 /*4*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_260[iParam0 /*4*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_260[iParam0 /*4*/], sParam1))
		{
		}
	}
	return false;
}

void func_733(int iParam0)
{
	iLocal_665 = iParam0;
	__LIB_1__::func_683(&iLocal_663, iLocal_665);
}

bool func_735()
{
	int iVar0;
	iVar0 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iVar0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false))
	{
		return true;
	}
	if (!func_646(iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*45*/]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_15[0]))
	{
		return false;
	}
	if (!Local_260[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(iLocal_15[0], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "BOAR", iLocal_15[0], 0);
		}
		if (__LIB_0__::func_272(Local_48[1 /*45*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_260[iVar0 /*4*/], "alligator", Local_48[1 /*45*/], 0);
		}
	}
	if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_260[iVar0 /*4*/], "BOAR", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_260[iVar0 /*4*/], "alligator", false)))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_260[iVar0 /*4*/]);
		Local_260[iVar0 /*4*/].f_2 = 1;
		func_1175(76, 0f, 0f, 0f, -1);
		return true;
	}
	return false;
}

void func_736(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	if (__LIB_4__::func_257(*iParam0))
	{
		return;
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(*iParam0);
	if (fVar0 < fParam1)
	{
		return;
	}
	VEHICLE::_0x104D9A7B1C0D0783(*iParam0, fParam1);
	fParam2 = MISC::ABSF(fParam2);
	fParam2 = __LIB_0__::func_251(fParam2, 0f, 100f);
	fParam2 = (fParam2 / 100f);
	fVar0 = __LIB_0__::func_251((fVar0 - (fVar0 * fParam2)), fParam1, fVar0);
	if (fParam1 == 0f && fVar0 < 0.75f)
	{
		fVar0 = 0f;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(*iParam0)))
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*iParam0, -fParam2);
	}
	else
	{
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(*iParam0, fVar0);
	}
}

bool func_737()
{
	int iVar0;
	iVar0 = 0;
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iVar0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_260[iVar0 /*4*/], "pbl_action"))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iVar0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_260[iVar0 /*4*/], "pbl_action") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_260[iVar0 /*4*/], "pbl_action"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_260[iVar0 /*4*/], "bStopLoop", true, false);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_260[iVar0 /*4*/], "pbl_action", true);
			func_1178(76, 1);
			func_1179(76, 2383.904f, -489.4015f, 40.4992f, 1);
			return true;
		}
	}
	return false;
}

bool func_738()
{
	int iVar0;
	iVar0 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iVar0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_260[iVar0 /*4*/], false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_260[iVar0 /*4*/], "pbl_action") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_260[iVar0 /*4*/], false))
		{
			return true;
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_260[iVar0 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_260[iVar0 /*4*/], false))
	{
		return true;
	}
	return false;
}

bool func_741()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1))
		{
		}
		else if ((Local_48[iVar0 /*45*/].f_7 == 4 || Local_48[iVar0 /*45*/].f_7 == 6) || Local_48[iVar0 /*45*/].f_7 == 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_742()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1))
		{
		}
		else if (__LIB_2__::func_138(Local_48[iVar0 /*45*/], 1, 0, 0, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_743(int iParam0)
{
	Local_48[iParam0 /*45*/].f_1 = MAP::_0xA6EF0C54A3443E70(-308585968, Local_48[iParam0 /*45*/].f_3);
	if (MAP::DOES_BLIP_EXIST(Local_48[iParam0 /*45*/].f_1))
	{
		MAP::_BLIP_SET_MODIFIER(Local_48[iParam0 /*45*/].f_1, 231194138);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[iParam0 /*45*/].f_1, "MASON4_B_SWAMP");
	}
}

char* func_744(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MASN4_O_SEARCH";
		case 2:
			return "MASN4_O_SEARCH2";
		case 4:
			return "MASN4_O_SEARCH3";
		case 8:
			return "MASN4_O_PHOTO";
		case 32:
			return "MASN4_O_SHORE";
		case 64:
			return "MASN4_O_BOAT";
		case 128:
			return "MASN4_O_BACK";
		case 256:
			return "MASN4_O_WARN1";
		case 512:
			return "MASN4_O_WARN2";
		case 1024:
			return "MASN4_O_WARN3";
		case 2048:
			return "MASN4_O_PARK";
		case 4096:
			return "MASN4_O_ROTATE";
		case 8192:
			return "MASN4_O_CLOSER";
		case 16384:
			return "MASN4_O_STOP";
		case 32768:
			return "MASN4_O_ROT";
	}
	return "";
}

bool func_750(var uParam0, int iParam1)
{
	char* sVar0;
	sVar0 = __LIB_13__::func_924(uParam0, iParam1);
	if (__LIB_6__::func_903(sVar0) || __LIB_8__::func_684(sVar0))
	{
		return true;
	}
	return false;
}

bool func_751(var uParam0, vector3 vParam1, float fParam4, var uParam5)
{
	if (!__LIB_1__::func_374(*uParam5, vParam1, fParam4))
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		if (func_1186(uParam0, 1092616192 /* Float: 10f */))
		{
			__LIB_0__::func_37(uParam0);
			return true;
		}
	}
	else if (__LIB_0__::func_75(uParam0))
	{
		__LIB_0__::func_37(uParam0);
	}
	return false;
}

bool func_754(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_26) && VOLUME::_DOES_VOLUME_EXIST(Local_48[iParam0 /*45*/].f_4[iVar0])) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_26, Local_48[iParam0 /*45*/].f_4[iVar0], true, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_756(int iParam0)
{
	int iVar0;
	switch (iLocal_188)
	{
		case 0:
			break;
		case 2:
			__LIB_0__::func_37(&uLocal_201);
			break;
	}
	iLocal_188 = iParam0;
	switch (iLocal_188)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(Local_48[0 /*45*/], true, false);
			TASK::TASK_STAND_STILL(Local_48[0 /*45*/], -1);
			break;
		case 1:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_48[0 /*45*/], vLocal_354, 2f, 60000, 0.25f, 0, 40000f);
			break;
		case 2:
			PED::SET_PED_USING_ACTION_MODE(Local_48[0 /*45*/], true, -1, 0);
			Local_48[0 /*45*/].f_14.f_3 = Global_35;
			Local_48[0 /*45*/].f_14.f_21 = 0;
			Local_48[0 /*45*/].f_14.f_22 = 0;
			Local_48[0 /*45*/].f_14.f_19 = 0;
			Local_48[0 /*45*/].f_14.f_20 = 0;
			Local_48[0 /*45*/].f_14.f_7 = -1;
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_48[0 /*45*/], &(Local_48[0 /*45*/].f_14));
			__LIB_0__::func_325(&(Local_48[0 /*45*/].f_1));
			if (!MAP::DOES_BLIP_EXIST(Local_48[0 /*45*/].f_2))
			{
				Local_48[0 /*45*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_48[0 /*45*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_37) && !ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				iLocal_37 = __LIB_8__::func_778(408396114, iLocal_26, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_37, "MASN4_B_BOAT");
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_48[0 /*45*/], Global_35, 3000, -1f, -1f, -1f);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_48[0 /*45*/], "SNORT", false);
			bLocal_363 = true;
			bLocal_362 = true;
			break;
		case 3:
			__LIB_0__::func_325(&(Local_48[0 /*45*/].f_1));
			if (!MAP::DOES_BLIP_EXIST(Local_48[0 /*45*/].f_2))
			{
				Local_48[0 /*45*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_48[0 /*45*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[0 /*45*/].f_2, "MASON4_B_GATOR");
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_37) && !ENTITY::IS_ENTITY_DEAD(iLocal_26))
			{
				iLocal_37 = __LIB_8__::func_778(408396114, iLocal_26, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_37, "MASN4_B_BOAT");
			}
			TASK::TASK_GO_TO_ENTITY(Local_48[0 /*45*/], Global_35, -1, 0.25f, 2f, 0f, 1);
			break;
		case 4:
			__LIB_0__::func_325(&(Local_48[0 /*45*/].f_1));
			if ((!MAP::DOES_BLIP_EXIST(iLocal_37) && !ENTITY::IS_ENTITY_DEAD(iLocal_26)) && !__LIB_2__::func_343(Global_35, iLocal_26, 0))
			{
				iLocal_37 = __LIB_8__::func_778(408396114, iLocal_26, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_37, "MASN4_B_BOAT");
			}
			bLocal_363 = true;
			bLocal_362 = true;
			func_631(0, 5);
			break;
		case 6:
			__LIB_0__::func_325(&iLocal_37);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2236.7f, -504f, 40.58f, 2f, 20000, 0.25f, 0, 40000f);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_48[0 /*45*/], iVar0);
			break;
		case 7:
			__LIB_0__::func_325(&(Local_48[0 /*45*/].f_1));
			__LIB_0__::func_325(&(Local_48[0 /*45*/].f_2));
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_48[0 /*45*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			break;
		case 5:
			__LIB_0__::func_325(&iLocal_37);
			__LIB_0__::func_325(&(Local_48[0 /*45*/].f_2));
			Local_48[0 /*45*/].f_1 = __LIB_8__::func_778(joaat("BLIP_STYLE_COMPANION"), Local_48[0 /*45*/], 1);
			MAP::_BLIP_SET_MODIFIER(Local_48[0 /*45*/].f_1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_48[0 /*45*/].f_1, "MASON4_B_GATOR");
			TASK::CLEAR_PED_TASKS(Local_48[0 /*45*/], true, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_48[0 /*45*/], vLocal_354, 1.5f, 80000, 0.25f, 0, 40000f);
			break;
	}
}

void func_757()
{
	iLocal_39 = __LIB_8__::func_775(408396114, iLocal_31, 1);
}

bool func_758(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		if (!func_762())
		{
			if (bParam0)
			{
			}
			iVar0 = 0;
		}
		if (iVar0 == 1 && iParam2 == 1)
		{
			if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_26, 1.5f, -1, false);
				if (__LIB_4__::func_68("MASN4_O_PARK", 1))
				{
					__LIB_4__::func_353();
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ACCELERATE"), false);
			}
		}
		else if (iVar0 == 0 && iParam2 == 1)
		{
			if (VEHICLE::_0x404527BC03DA0E6C(iLocal_26))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_26);
			}
		}
		if (!func_763(bParam0))
		{
			if (bParam0)
			{
			}
			iVar0 = 0;
		}
		else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_26, false) && iVar0 == 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		}
		if (bParam1)
		{
			fVar1 = ENTITY::GET_ENTITY_SPEED(iLocal_26);
			if (fVar1 > 0.1f)
			{
				if (bParam0)
				{
				}
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_760(var uParam0)
{
	float fVar0;
	float fVar1;
	if (!__LIB_0__::func_75(&uLocal_204))
	{
		__LIB_1__::func_148(&uLocal_204);
	}
	else if (__LIB_0__::func_264(&uLocal_204) > 10f)
	{
		if (!__LIB_5__::func_463())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
			{
				if (!func_762())
				{
					return;
				}
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_26);
				if (fVar0 < 0f)
				{
					fVar0 = (fVar0 + 180f);
				}
				fVar1 = (fVar0 - func_1190());
				if (fVar1 > 35f && fVar1 <= 110f)
				{
					if (!bLocal_378)
					{
						if (__LIB_12__::func_876(uParam0, "RMASN_G1_INPOS", 0))
						{
							bLocal_378 = true;
							__LIB_1__::func_148(&uLocal_204);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RMASN_G1_SPINAG", 0))
					{
						__LIB_1__::func_148(&uLocal_204);
					}
					return;
				}
				else if (fVar1 < -35f && fVar1 >= -150f)
				{
					if (!bLocal_378)
					{
						if (__LIB_12__::func_876(uParam0, "RMASN_G1_INPOS", 0))
						{
							bLocal_378 = true;
							__LIB_1__::func_148(&uLocal_204);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RMASN_G1_SPINAG", 0))
					{
						__LIB_1__::func_148(&uLocal_204);
					}
					return;
				}
				else if (fVar1 > 35f && fVar1 < -35f)
				{
					if (!bLocal_378)
					{
						if (__LIB_12__::func_876(uParam0, "RMASN_G1_INPOS", 0))
						{
							bLocal_378 = true;
							__LIB_1__::func_148(&uLocal_204);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RMASN_G1_SPINAG", 0))
					{
						__LIB_1__::func_148(&uLocal_204);
					}
					return;
				}
			}
		}
	}
}

void func_761()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_39))
	{
		iLocal_39 = __LIB_8__::func_775(408396114, iLocal_31, 1);
	}
}

bool func_762()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_32))
		{
			iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2246.491f, -508.0571f, 41.16622f, 0f, 0f, 164.3631f, 16.2667f, 11.86411f, 4.217501f, "Mason 4 boat park check");
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_26, iLocal_32, true, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_763(bool bParam0)
{
	float fVar0;
	if (iLocal_282 == -1)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_26);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 180f);
		}
		if (bParam0)
		{
		}
		if ((fVar0 - func_1190()) > 23f || (fVar0 - func_1190()) < -23f)
		{
			return false;
		}
	}
	return true;
}

void func_764()
{
	float fVar0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_26) && __LIB_0__::func_665(Global_35, iLocal_26, 1, 1) > 4f)
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_26);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 180f);
		}
		fVar1 = (fVar0 - fLocal_357);
		if (fVar1 > 2.5f || fVar1 < -2.5f)
		{
			if (fVar1 > 2.5f)
			{
				fVar0 = (fVar0 - 0.5f);
				VEHICLE::SET_BOAT_ANCHOR(iLocal_26, false);
				ENTITY::SET_ENTITY_HEADING(iLocal_26, fVar0);
			}
			else if (fVar1 < -2.5f)
			{
				fVar0 = (fVar0 + 0.5f);
				VEHICLE::SET_BOAT_ANCHOR(iLocal_26, false);
				ENTITY::SET_ENTITY_HEADING(iLocal_26, fVar0);
			}
		}
		else
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_26, true);
		}
	}
}

bool func_765(int iParam0)
{
	char* sVar0;
	sVar0 = func_744(iParam0);
	if (__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		return true;
	}
	return false;
}

int func_766()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_0__::func_272(Local_48[iVar0 /*45*/], 1))
		{
		}
		else if (!Local_48[iVar0 /*45*/].f_39)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_769(int iParam0)
{
	if (Local_48[iParam0 /*45*/].f_39)
	{
		return false;
	}
	if (!__LIB_0__::func_272(Local_48[iParam0 /*45*/], 0))
	{
		return false;
	}
	return true;
}

int func_796(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = __LIB_0__::func_700(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = __LIB_0__::func_909(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
					return joaat("CSTAG_FLOW_FUD1_POST");
					return joaat("CSTAG_FLOW_GRY1_POST");
					return joaat("CSTAG_FLOW_CRN1_POST");
					return joaat("CSTAG_FLOW_BRT1_POST");
					return joaat("CSTAG_FLOW_GRY2_POST");
					return joaat("CSTAG_FLOW_BRT2_POST");
					return joaat("CSTAG_FLOW_TRE1_POST");
					return joaat("CSTAG_FLOW_DST3_POST");
					return joaat("CSTAG_FLOW_MUD5_POST");
					return joaat("CSTAG_FLOW_GRY3_POST");
					return joaat("CSTAG_FLOW_BRT3_POST");
					return joaat("CSTAG_FLOW_MOB1_POST");
					return joaat("CSTAG_FLOW_MOB2_POST");
					return joaat("CSTAG_FLOW_MOB3_POST");
					return joaat("CSTAG_FLOW_MOB4_POST");
					return joaat("CSTAG_FLOW_MOB5_POST");
					return joaat("CSTAG_FLOW_ODR4_POST");
					return joaat("CSTAG_FLOW_IND1_POST");
					return joaat("CSTAG_FLOW_IND3_POST");
					return joaat("CSTAG_FLOW_SUS1_POST");
					return joaat("CSTAG_FLOW_MRY3_POST");
					return joaat("CSTAG_FLOW_SDN1_POST");
					return joaat("CSTAG_FLOW_GUA1_POST");
					return joaat("CSTAG_FLOW_GUA2_POST");
					return joaat("CSTAG_FLOW_FUS1_POST");
					return joaat("CSTAG_FLOW_FUS2_POST");
					return joaat("CSTAG_FLOW_SMG2_POST");
					return joaat("CSTAG_FLOW_GUA3_POST");
					return joaat("CSTAG_FLOW_GNG1_POST");
					return joaat("CSTAG_FLOW_GNG2_POST");
					return joaat("CSTAG_FLOW_GNG3_POST");
					return joaat("CSTAG_FLOW_DST5_POST");
					return joaat("CSTAG_FLOW_NTV1_POST");
					return joaat("CSTAG_FLOW_NTV2_POST");
					return joaat("CSTAG_FLOW_NTS1_POST");
					return joaat("CSTAG_FLOW_NTS2_POST");
					return joaat("CSTAG_FLOW_NTS3_POST");
					return joaat("CSTAG_FLOW_TRN1_POST");
					return joaat("CSTAG_FLOW_TRN2_POST");
					return joaat("CSTAG_FLOW_TRN3_POST");
					return joaat("CSTAG_FLOW_TRN4_POST");
					return joaat("CSTAG_FLOW_NTV3_POST");
					return joaat("CSTAG_FLOW_FIN1_POST");
					return joaat("CSTAG_FLOW_MAR1_POST");
					return joaat("CSTAG_FLOW_MAR5_POST");
					return joaat("CSTAG_FLOW_MR52_POST");
					return joaat("CSTAG_FLOW_MR53_POST");
					return joaat("CSTAG_FLOW_LAR1_POST");
					return joaat("CSTAG_FLOW_MAR2_POST");
					return joaat("CSTAG_FLOW_MAR4_POST");
					return joaat("CSTAG_FLOW_AB21_POST");
					return joaat("CSTAG_FLOW_BE22_POST");
					return joaat("CSTAG_FLOW_SAD2_POST");
					return joaat("CSTAG_FLOW_SAD3_POST");
					return joaat("CSTAG_FLOW_SAD4_POST");
					return joaat("CSTAG_FLOW_SAD5_POST");
					return joaat("CSTAG_FLOW_MAR6_POST");
					return joaat("CSTAG_FLOW_MAR7_POST");
					return joaat("CSTAG_FLOW_MAR8_POST");
					return joaat("CSTAG_FLOW_FIN2_POST");
					Jump @1941; //curOff = 1190
					iVar2 = __LIB_0__::func_76(iParam0);
					switch (iVar2)
					{
						case 120:
							return joaat("CSTAG_FLOW_RPRSN_POST");
						case 0:
							return joaat("CSTAG_FLOW_RABI1_POST");
						case 63:
							return joaat("CSTAG_FLOW_RDST2_POST");
						case 97:
							return joaat("CSTAG_FLOW_RMARY1_POST");
						case 98:
							return joaat("CSTAG_FLOW_RMARY2_POST");
						case 94:
							return joaat("CSTAG_FLOW_RHMR0_POST");
						case 59:
							return joaat("CSTAG_FLOW_RDOWN1_POST");
						case 61:
							return joaat("CSTAG_FLOW_RDOWN2_POST");
						case 62:
							return joaat("CSTAG_FLOW_RDOWN3_POST");
						case 112:
							return joaat("CSTAG_FLOW_RMUD31_POST");
						case 113:
							return joaat("CSTAG_FLOW_RMUD32_POST");
						case 114:
							return joaat("CSTAG_FLOW_RMUD33_POST");
						case 66:
							*uParam1 = -2060316038;
							return joaat("CSTAG_FLOW_RDTC1_POST");
						case 76:
							return joaat("CSTAG_FLOW_RXCF1_POST");
						case 134:
							return joaat("CSTAG_FLOW_RSAD1_POST");
						case 3:
							return joaat("CSTAG_FLOW_RBNP10_POST");
						case 5:
							return joaat("CSTAG_FLOW_RBNP12_POST");
						case 21:
							return joaat("CSTAG_FLOW_RBRT0_POST");
						case 37:
							return joaat("CSTAG_FLOW_RCHRB_POST");
						case 138:
							return joaat("CSTAG_FLOW_RSTR1_POST");
						case 67:
							*uParam1 = -2060316038;
							return joaat("CSTAG_FLOW_RDTC2_POST");
						case 106:
							return joaat("CSTAG_FLOW_RMOB01_POST");
						case 107:
							return joaat("CSTAG_FLOW_RMOB02_POST");
						case 115:
							return joaat("CSTAG_FLOW_RNATV1_POST");
						case 116:
							return joaat("CSTAG_FLOW_RNATV2_POST");
						case 22:
							return joaat("CSTAG_FLOW_RCLDN1_POST");
						case 23:
							return joaat("CSTAG_FLOW_RCLDN2_POST");
						case 82:
							return joaat("CSTAG_FLOW_RGNG01_POST");
						case 68:
							*uParam1 = -2060316038;
							return joaat("CSTAG_FLOW_RDCH3_POST");
						case 140:
							return joaat("CSTAG_FLOW_RSTR31_POST");
						case 142:
							return joaat("CSTAG_FLOW_RSTR33_POST");
						case 58:
							return joaat("CSTAG_FLOW_RDOPN_POST");
						case 64:
							return joaat("CSTAG_FLOW_RDST61_POST");
						case 65:
							return joaat("CSTAG_FLOW_RDST62_POST");
						case 108:
							return joaat("CSTAG_FLOW_RMNR1_POST");
						case 8:
							return joaat("CSTAG_FLOW_RBCH11_POST");
						case 10:
							return joaat("CSTAG_FLOW_RBCH21_POST");
						case 2:
							return joaat("CSTAG_FLOW_RABI3_POST");
						case 96:
							return joaat("CSTAG_FLOW_RJCK2_POST");
						case 52:
							return joaat("CSTAG_FLOW_RCTAX2_POST");
						default:
							break;
					}
					Jump @1941; //curOff = 1793
					iVar3 = __LIB_0__::func_76(iParam0);
					switch (iVar3)
					{
						case joaat("HAI_FISHING_01"):
							return joaat("CSTAG_FLOW_CA_FS01_POST");
						case joaat("HAI_HOME_ROBBERY_01"):
							return joaat("CSTAG_FLOW_CA_HR01_POST");
						case joaat("HAI_COACH_ROBBERY_01"):
							return joaat("CSTAG_FLOW_CA_CR02_POST");
						case joaat("HAI_COACH_ROBBERY_02"):
							return joaat("CSTAG_FLOW_CA_CR03_POST");
						case joaat("HAI_FISHING_02"):
							return joaat("CSTAG_FLOW_CA_FS02_POST");
						case joaat("HAI_HUNTING_06"):
							return joaat("CSTAG_FLOW_CA_HT06_POST");
						case joaat("HAI_BANK_ROBBERY_01"):
							return joaat("CSTAG_FLOW_CA_BR01_POST");
						case joaat("HAI_COACH_ROBBERY_03"):
							return joaat("CSTAG_FLOW_CA_CR01_POST");
						case joaat("HAI_COACH_ROBBERY_04"):
							return joaat("CSTAG_FLOW_CA_CR04_POST");
						default:
							break;
					}
					return 176656832;
				}
int func_797(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			__LIB_1__::func_28(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_806(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_806(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_10__::func_706(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_10__::func_706(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_13__::func_10(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_629(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_630(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_631(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_632(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_12__::func_633(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_806(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_806(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_806(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_806(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_806(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_806(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_806(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_13__::func_10(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_806(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_806(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_13__::func_135(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_164(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_806(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_808()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1303();
	func_1304();
	func_1305();
	func_1306();
	func_1307();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_809(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1310(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_844()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1339(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

Vector3 func_851(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1353();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1354(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

int func_941(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_941(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_969(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
			return false;
		}
bool func_970(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = __LIB_0__::func_485();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

void func_1057(int iParam0)
{
	__LIB_3__::func_319(Local_260[iParam0 /*4*/]);
}

void func_1093(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*uParam0, 4) && !__LIB_0__::func_1(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*uParam0, 8192))
	{
		func_1525();
	}
	if (!__LIB_0__::func_1(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_9__::func_23(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1095(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_1533(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1533(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1096(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1533(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1170(var uParam0)
{
	struct<28> Var0;
	var uVar28;
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	__LIB_2__::func_828(&Var0, 1);
	__LIB_2__::func_830(&Var0, 1);
	__LIB_1__::func_401(&Var0, 1);
	__LIB_1__::func_413(&Var0, 1);
	__LIB_1__::func_402(&Var0, 1);
	__LIB_1__::func_397(&Var0, 0);
	__LIB_1__::func_398(&Var0, 0);
	__LIB_2__::func_595(&Var0, 30f);
	__LIB_1__::func_975(&Var0, 20f);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
		return true;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_26) && !ENTITY::IS_ENTITY_DEAD(iLocal_26)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam0, iLocal_26))
	{
		return true;
	}
	if (func_521(*uParam0, 0, &Var0, &uVar28, 0, 0))
	{
		return true;
	}
	if (__LIB_2__::func_875(Global_35, *uParam0, &Var0))
	{
		return true;
	}
	return false;
}

bool func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_184 == 3)
			{
				return true;
			}
			break;
		case 1:
			if (iLocal_184 == 5)
			{
				return true;
			}
			break;
		case 2:
			if (iLocal_184 == 7)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1172(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false) };
	vVar6 = { ENTITY::_0x935A30AA88FB1014(iLocal_14) };
	vVar9 = { vVar0 - vVar3 };
	if (__LIB_1__::func_95(vVar6, vVar9) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_1173(int iParam0)
{
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_665(iLocal_14, Local_48[iParam0 /*45*/], 1, 1) > 25f && __LIB_0__::func_665(iLocal_14, Local_48[iParam0 /*45*/], 1, 1) < (25f + 10f))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_665(iLocal_14, Local_48[iParam0 /*45*/], 1, 1) > 15f && __LIB_0__::func_665(iLocal_14, Local_48[iParam0 /*45*/], 1, 1) < (15f + 10f))
	{
		return true;
	}
	return false;
}

void func_1174()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CAMERA_CLICK", iLocal_14, "MASON_PHOTO_SOUNDSET", false, 0, 0);
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CAMERA_FLASH", iLocal_14, "MASON_PHOTO_SOUNDSET", false, 0, 0);
	}
}

void func_1175(int iParam0, vector3 vParam1, int iParam4)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_1__::func_446(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, 0);
	__LIB_4__::func_338(iParam0, 1, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_2++;
	Global_32074.f_2697.f_1++;
	if (iParam4 != -1 && iParam4 < 4)
	{
		Global_1415419.f_9721[iParam4 /*8*/].f_4 = { vParam1 };
	}
}

void func_1178(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_1__::func_446(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, 0);
	if (bParam1)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_7 = (Global_1415419.f_7 + 50000);
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_8 = (Global_1415419.f_8 + 50000);
		}
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_3++;
	Global_32074.f_2697.f_3++;
}

void func_1179(int iParam0, vector3 vParam1, bool bParam4)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_1__::func_446(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7, 0, 0, 0, 0);
	if (bParam4)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_7 = (Global_1415419.f_7 + 120000);
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_8 = (Global_1415419.f_8 + 120000);
		}
	}
	__LIB_4__::func_338(iParam0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 2), 0, 0);
	__LIB_2__::func_873(iParam0);
	__LIB_2__::func_866(iParam0, vParam1);
	Global_32074.f_2697.f_6[iParam0 /*6*/]++;
	Global_32074.f_2697.f_2++;
}

bool func_1186(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
	if (__LIB_0__::func_264(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

float func_1190()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_32))
	{
		return __LIB_0__::func_152(VOLUME::_GET_VOLUME_COORDS(iLocal_32), vLocal_351, 1);
	}
	return fLocal_357;
}

void func_1303()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1730(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1730(1);
}

void func_1304()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_806(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1305()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1733(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1733(1);
}

void func_1306()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1733(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1733(1);
}

void func_1307()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_806(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_806(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_1310(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1310(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_1310(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_0__::func_937(iParam0, 1);
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
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1310(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
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
	__LIB_12__::func_934(iParam0, iParam1);
	return 1;
}

int func_1339(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1765(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_806(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1353()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1773(8);
		}
	}
	return 0;
}

bool func_1354(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1774(iParam0));
}

void func_1525()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1854(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

void func_1533(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1533(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1533(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1730(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_806(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1967(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_809(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1310(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1973(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1733(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_806(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_806(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1310(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1310(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1310(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_1765(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1765(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1765(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_1773(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			Jump @9445; //curOff = 1571
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			Jump @9445; //curOff = 1959
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			Jump @9445; //curOff = 2480
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			Jump @9445; //curOff = 2919
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			Jump @9445; //curOff = 3514
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9445; //curOff = 4297
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			Jump @9445; //curOff = 4381
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9445; //curOff = 4472
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9445; //curOff = 5583
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9445; //curOff = 6026
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9445; //curOff = 6715
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9445; //curOff = 7287
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9445; //curOff = 8874
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1774(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1854(int iParam0, int iParam1)
{
	var uVar0;
	return func_2024(&uVar0, iParam0, iParam1);
}

void func_1967(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_1310(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_1310(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1973(struct<6> Param0)
{
	if (!func_2097(Param0.f_4, 1))
	{
	}
	if (!func_2097(Param0, 1))
	{
	}
	if (!func_2097(Param0.f_2, 1))
	{
	}
	if (!func_2097(Param0.f_5, 1))
	{
	}
	if (!func_2097(Param0.f_3, 1))
	{
	}
	if (!func_2097(Param0.f_1, 1))
	{
	}
}

int func_2024(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2024(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2097(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_2097(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2097(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2097(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2097(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

