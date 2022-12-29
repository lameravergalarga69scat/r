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
	struct<7> Local_16 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	struct<62> Local_24 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1065353216, 0, 0, 0, 0, 0, -1082130432, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = -1;
	var uLocal_97 = -1;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	struct<84> Local_118 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1082130432, -1082130432, -1082130432, 1, 1050253722 } ;
	var uLocal_202 = 3000;
	var uLocal_203 = 6000;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = -1;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	bool bLocal_213 = false;
	bool bLocal_214 = false;
	bool bLocal_215 = false;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	bool bLocal_226 = false;
	vector3 vLocal_227 = { 0f, 0f, 0f };
	vector3 vLocal_230 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	vector3 vLocal_248[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_258 = 0;
	struct<11> Local_259 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24 } ;
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
	bool bLocal_367 = false;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	struct<16> Local_375 = { 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_391[7];
	struct<7> Local_448[5];
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	bool bLocal_486 = false;
	int iLocal_487 = 0;
	var uLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
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
	var uLocal_501 = -1;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 1097859072;
	var uLocal_511 = 1000;
	var uLocal_512 = 1067450368;
	var uLocal_513 = 5000;
	var uLocal_514 = 42;
	var uLocal_515 = 1103626240;
	var uLocal_516 = 1077936128;
	var uLocal_517 = 1106247680;
	var uLocal_518 = 1103101952;
	var uLocal_519 = 1097859072;
	var uLocal_520 = 1103626240;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = -1;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 1097859072;
	var uLocal_540 = 1000;
	var uLocal_541 = 1067450368;
	var uLocal_542 = 5000;
	var uLocal_543 = 42;
	var uLocal_544 = 1103626240;
	var uLocal_545 = 1077936128;
	var uLocal_546 = 1106247680;
	var uLocal_547 = 1103101952;
	var uLocal_548 = 1097859072;
	var uLocal_549 = 1103626240;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	bool bLocal_557 = false;
	bool bLocal_558 = false;
	int iLocal_559[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_567 = false;
	bool bLocal_568 = false;
	bool bLocal_569 = false;
	bool bLocal_570 = false;
	bool bLocal_571 = false;
	bool bLocal_572 = false;
	bool bLocal_573 = false;
	bool bLocal_574 = false;
	bool bLocal_575 = false;
	bool bLocal_576 = false;
	bool bLocal_577 = false;
	bool bLocal_578 = false;
	bool bLocal_579 = false;
	bool bLocal_580 = false;
	bool bLocal_581 = false;
	bool bLocal_582 = false;
	bool bLocal_583 = false;
	bool bLocal_584 = false;
	bool bLocal_585 = false;
	bool bLocal_586 = false;
	bool bLocal_587 = false;
	bool bLocal_588 = false;
	bool bLocal_589 = false;
	bool bLocal_590 = false;
	bool bLocal_591 = false;
	bool bLocal_592 = false;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	bool bLocal_596 = false;
	bool bLocal_597 = false;
	bool bLocal_598 = false;
	bool bLocal_599 = false;
	bool bLocal_600 = false;
	bool bLocal_601 = false;
	bool bLocal_602 = false;
	int iLocal_603 = 0;
	var uLocal_604 = -1;
	var uLocal_605 = 0;
	var uLocal_606 = -1;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = -1;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 1073741824;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 1;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<17> Local_624[1];
	struct<17> Local_642[1];
	bool bLocal_660 = false;
	bool bLocal_661 = false;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	vector3 vLocal_664 = { 0f, 0f, 0f };
	vector3 vLocal_667 = { 0f, 0f, 0f };
	vector3 vLocal_670 = { 0f, 0f, 0f };
	vector3 vLocal_673 = { 0f, 0f, 0f };
	vector3 vLocal_676 = { 0f, 0f, 0f };
	vector3 vLocal_679 = { 0f, 0f, 0f };
	vector3 vLocal_682 = { 0f, 0f, 0f };
	vector3 vLocal_685 = { 0f, 0f, 0f };
	var uLocal_688[5] = { 0, 0, 0, 0, 0 };
	int iLocal_694 = 0;
	bool bLocal_695 = false;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_258 = 4;
	bLocal_367 = true;
	iLocal_487 = -1;
	bLocal_589 = true;
	vLocal_664 = { 1231.581f, -1299.804f, 75.9033f };
	vLocal_667 = { 1225.505f, -1293.99f, 75.9091f };
	vLocal_670 = { 1114.631f, -1184.83f, 69.526f };
	vLocal_673 = { 899.4166f, -774.0112f, 67.3298f };
	vLocal_676 = { 0.8f, 0.54f, 1.05f };
	vLocal_679 = { 0f, 2.5f, 3.65f };
	vLocal_682 = { 0f, -3.14f, 3.82f };
	vLocal_685 = { 1281.561f, -1360.663f, 75.40409f };
	iLocal_696 = joaat("P_GLASS01X");
	iLocal_697 = joaat("P_CS_BARRAG01X");
	iLocal_698 = joaat("P_WHISKEYGLASS01X");
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
			__LIB_13__::func_98(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
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
			__LIB_0__::func_11(uParam0);
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
	__LIB_0__::func_11(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_12__::func_492(uParam0);
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
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
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
		func_106(uParam0, __LIB_0__::func_58(uParam0));
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
			__LIB_6__::func_833();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_9__::func_786(1, 1);
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
		func_138(uParam0);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
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
	__LIB_12__::func_966(uParam0, 0);
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
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 9);
	__LIB_11__::func_992(uParam0->f_174, 0f);
	__LIB_12__::func_937(uParam0, -1);
	func_189();
	func_190();
	func_191();
	if (!__LIB_0__::func_138(vLocal_233, vLocal_679))
	{
		vLocal_233 = { vLocal_679 };
	}
	__LIB_0__::func_11();
	__LIB_10__::func_780(uParam0->f_174, 0f);
	__LIB_12__::func_656(uParam0, 0f);
	__LIB_12__::func_657(uParam0, 0f);
	Local_391[0 /*8*/].f_2 = { -0.78f, 0.78f, 1.04f };
	Local_391[1 /*8*/].f_2 = { -2f, 3.6f, 1.51f };
	Local_391[2 /*8*/].f_2 = { -1.05f, -4.52f, 1.51f };
	Local_391[3 /*8*/].f_2 = { -1.17f, 0.22f, 1.51f };
	Local_391[4 /*8*/].f_2 = { 1.22f, 3.42f, 1.51f };
	Local_391[5 /*8*/].f_2 = { 1.22f, 3.42f, 1.51f };
	Local_391[6 /*8*/].f_2 = { 1.22f, 3.42f, 1.51f };
	Local_391[0 /*8*/].f_5 = 166.9534f;
	Local_391[1 /*8*/].f_5 = 147.6499f;
	Local_391[2 /*8*/].f_5 = 147.6495f;
	Local_391[3 /*8*/].f_5 = 147.6499f;
	Local_391[4 /*8*/].f_5 = 147.6495f;
	Local_391[5 /*8*/].f_5 = 147.6495f;
	Local_391[6 /*8*/].f_5 = 147.6495f;
	Local_391[0 /*8*/].f_7 = joaat("U_M_M_RHDBARTENDER_01");
	Local_391[1 /*8*/].f_7 = joaat("A_M_M_RHDUPPERCLASS_01");
	Local_391[2 /*8*/].f_7 = joaat("A_F_M_RHDUPPERCLASS_01");
	Local_391[3 /*8*/].f_7 = joaat("A_F_M_RHDUPPERCLASS_01");
	Local_391[4 /*8*/].f_7 = joaat("A_M_M_RHDUPPERCLASS_01");
	Local_391[5 /*8*/].f_7 = joaat("A_F_M_RHDUPPERCLASS_01");
	Local_391[6 /*8*/].f_7 = joaat("A_M_M_RHDUPPERCLASS_01");
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, joaat("CS_FAMOUSGUNSLINGER_03"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_M_M_RHDUPPERCLASS_01"), 2);
	__LIB_12__::func_867(uParam0, joaat("A_F_M_RHDUPPERCLASS_01"), 2);
	__LIB_12__::func_867(uParam0, joaat("U_M_M_RHDBARTENDER_01"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_GLASS01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR_PRIVATEDINING01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BARRAG01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_WHISKEYGLASS01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATESTEAMER01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATECOALCAR01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATEBOXCAR04X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATEFLATCAR01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATEBOXCAR01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("NORTHPASSENGER01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATEDINING01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("CABOOSE01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("PRIVATEPASSENGER01X"), 2);
	__LIB_12__::func_908(uParam0, 0);
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
	if (iVar0 == 0)
	{
		Var1 = { 1231.575f, -1299.946f, 75.9032f };
		Var1.f_3 = 46.3421f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1233.119f, -1299.41f, 75.9036f };
		Var1.f_3 = 161.1415f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1186.571f, -1277.575f, 75.2545f };
		Var1.f_3 = 161.1415f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1513.017f, -1544.895f, 69.4023f };
		Var1.f_3 = 161.1415f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 1218.1f, -1297.855f, 75.9018f };
		Var1.f_3 = 161.1415f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_210(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_369 > 0)
	{
		if (uParam0->f_177 == 7)
		{
			if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_220, false, false), 120f, 1, 1))
			{
				if (__LIB_0__::func_272(iLocal_220, 0))
				{
					StringCopy(&(uParam0->f_2578), "GUN3_FAIL_LEFT", 24);
					return true;
				}
				else
				{
					StringCopy(&(uParam0->f_2578), "GUN3_FAIL_DEAD", 24);
					return true;
				}
			}
		}
	}
	if (iLocal_369 == 0 && bLocal_570 == 1)
	{
		if (!__LIB_0__::func_48(Global_35, Local_375, 90f, 1) && !__LIB_0__::func_48(Global_35, Local_375.f_4[8], 90f, 1))
		{
			if (!bLocal_576)
			{
				StringCopy(&(uParam0->f_2578), "GUN3_FAIL_MISSED", 24);
				return true;
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "GUN3_FAIL_LOST", 24);
				return true;
			}
		}
	}
	if (iLocal_369 == 1)
	{
		if (!TASK::IS_PED_SPRINTING(Global_35) && !TASK::IS_PED_RUNNING(Global_35))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_375.f_4[8]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_375.f_4[9])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_375.f_4[7]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[1 /*3*/], false))
				{
					__LIB_0__::func_325(&iLocal_551);
					StringCopy(&(uParam0->f_2578), "GUN3_FAIL_LEFT", 24);
					return true;
				}
			}
		}
	}
	if (iLocal_369 < 2)
	{
		if (bLocal_569)
		{
			if (bLocal_574)
			{
				if (!__LIB_0__::func_272(iLocal_220, 0))
				{
					if (!bLocal_581 == 1)
					{
						StringCopy(&(uParam0->f_2578), "GUN3_AGGRO2", 24);
						return true;
					}
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_220, Global_35, 1, 1) || (__LIB_4__::func_172(iLocal_220, 0, 0, 0, 1) && __LIB_0__::func_272(iLocal_220, 0)))
		{
			StringCopy(&(uParam0->f_2578), "GUN3_AGGRO1", 24);
			return true;
		}
		if (bLocal_597)
		{
			StringCopy(&(uParam0->f_2578), "GUN3_AGGRO5", 24);
			return true;
		}
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_716))
			{
				__LIB_1__::func_283(&uLocal_716, 0);
			}
		}
		if (__LIB_0__::func_75(&uLocal_716))
		{
			if (__LIB_0__::func_265(&uLocal_716) > 2f)
			{
				StringCopy(&(uParam0->f_2578), "GUN3_FAIL_WANTED", 24);
				return true;
			}
		}
	}
	if (iLocal_369 == 0 && iLocal_370 < 5)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_259, Global_35, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "GUN3_AGGRO3", 24);
			return true;
		}
		if (!__LIB_0__::func_272(Local_259, 0))
		{
			StringCopy(&(uParam0->f_2578), "GUN3_AGGRO4", 24);
			return true;
		}
	}
	if (iLocal_369 == 0 && !bLocal_569)
	{
		if (!__LIB_0__::func_266(Global_35, 1230.498f, -1305.461f, 75.9071f, 100f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "GUN3_FAIL_LEAVE", 24);
			return true;
		}
	}
	if (iLocal_245 == 4)
	{
		if (!bLocal_602)
		{
			if (!__LIB_0__::func_266(iLocal_220, Global_36, 20f, 1, 1))
			{
				__LIB_12__::func_883(uParam0, "GUN3_RETUR1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_602 = true;
			}
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
	if (func_220(uParam0->f_174))
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
	if (func_229(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_234(uParam0);
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
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_274(uParam0))
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
	__LIB_13__::func_286(uParam0);
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

bool func_92(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_106(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || func_293(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		ENTITY::SET_ENTITY_COORDS(Global_35, 1231.575f, -1299.946f, 75.9032f, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, 46.3421f);
		__LIB_3__::func_820(30, 0);
		__LIB_3__::func_820(31, 0);
		__LIB_11__::func_10(1, 1, 0);
		__LIB_11__::func_10(2, 1, 0);
		__LIB_9__::func_819(30);
		__LIB_9__::func_819(31);
		__LIB_4__::func_932(31, 0);
		__LIB_4__::func_932(30, 0);
		__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, 0);
		__LIB_13__::func_105(1, 1);
		return 7;
	}
	if (iVar0 == 1)
	{
		__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
		__LIB_3__::func_820(30, 0);
		__LIB_3__::func_820(31, 0);
		__LIB_11__::func_10(1, 1, 0);
		__LIB_11__::func_10(2, 1, 0);
		__LIB_9__::func_819(30);
		__LIB_9__::func_819(31);
		__LIB_4__::func_932(31, 0);
		__LIB_4__::func_932(30, 0);
		bLocal_558 = true;
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		ENTITY::SET_ENTITY_COORDS(Global_35, 1233.119f, -1299.41f, 75.9036f, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, 161.1415f);
		__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, 0);
		__LIB_13__::func_105(1, 1);
		return 7;
	}
	if (iVar0 == 2)
	{
		if (__LIB_13__::func_666(iLocal_489, 32))
		{
			func_303();
			if (__LIB_0__::func_272(iLocal_220, 0) && func_304())
			{
				if (func_305(uParam0))
				{
					func_303();
					if (VEHICLE::_0xBD3C4A2ED509205E(Local_375))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_220, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[7], 0f, -8.71f, 1.13f), true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_220, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[7]));
						PED::_0xE4C95E0AE31C6512(iLocal_220, Local_375);
						ENTITY::SET_ENTITY_COORDS(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], vLocal_236), true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[8]));
						PED::_0xE4C95E0AE31C6512(Global_35, Local_375);
						bLocal_570 = true;
						if (func_306())
						{
							if (__LIB_0__::func_163(Local_391[1 /*8*/], -1518311320))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
								__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
								__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, 1);
								__LIB_13__::func_105(1, 1);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-9.587f, 1f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-4.8677f, 1f);
								return 7;
							}
						}
					}
				}
			}
		}
		return 2;
	}
	else if (iVar0 == 3)
	{
		if (__LIB_4__::func_511())
		{
			if (!__LIB_13__::func_666(iLocal_489, 32))
			{
				return 2;
			}
			if (__LIB_0__::func_272(iLocal_220, 0) && func_304())
			{
				if (func_305(uParam0))
				{
					func_303();
					if (VEHICLE::_0xBD3C4A2ED509205E(Local_375))
					{
						PED::_0x406CCF555B04FAD3(iLocal_220, 0, 1f);
						func_309();
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_220, 1);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						func_310();
						func_311();
						func_312(0);
						if (iLocal_247 < 3)
						{
							return 2;
						}
						ENTITY::SET_ENTITY_COORDS(iLocal_220, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[iLocal_258], vLocal_679), true, false, true, true);
						ENTITY::SET_ENTITY_COORDS(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[iLocal_258], vLocal_682), true, false, true, true);
						func_313(uParam0, 0);
						func_314(uParam0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0);
						if (!__LIB_0__::func_1(uParam0->f_172, 1))
						{
							return 2;
						}
						__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, 2);
						__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
						return 5;
					}
				}
			}
		}
		else
		{
			if (!__LIB_13__::func_666(iLocal_489, 32))
			{
				return 2;
			}
			if (__LIB_0__::func_272(iLocal_220, 0) && func_304())
			{
				if (func_305(uParam0))
				{
					func_303();
					if (VEHICLE::_0xBD3C4A2ED509205E(Local_375))
					{
						PED::_0x406CCF555B04FAD3(iLocal_220, 0, 1f);
						func_309();
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_220, 1);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						func_310();
						func_311();
						func_312(0);
						if (iLocal_247 < 3)
						{
							return 2;
						}
						ENTITY::SET_ENTITY_COORDS(iLocal_220, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[iLocal_258], vLocal_679), true, false, true, true);
						ENTITY::SET_ENTITY_COORDS(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[iLocal_258], vLocal_682), true, false, true, true);
						__LIB_9__::func_233(iLocal_220, Global_35);
						__LIB_9__::func_233(Global_35, iLocal_220);
						if (PED::_0xA0BC8FAED8CFEB3C(iLocal_220))
						{
							if (__LIB_0__::func_163(Local_391[6 /*8*/], -1518311320))
							{
								func_317(5);
								__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
								__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, 2);
								__LIB_13__::func_105(1, 1);
								return 7;
							}
						}
					}
				}
			}
			return 2;
		}
	}
	else if (iVar0 == 4)
	{
		__LIB_13__::func_105(1, 1);
		return 8;
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
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_106(uParam0, 0);
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_330(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_368)
	{
		case 0:
			if (__LIB_0__::func_272(iLocal_220, 0))
			{
				__LIB_9__::func_233(iLocal_220, Global_35);
				__LIB_9__::func_233(Global_35, iLocal_220);
				func_334(&Local_118, &Local_24);
			}
			break;
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
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

void func_106(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (func_335(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	func_337();
	func_338(uParam0);
	func_339();
	func_340();
	switch (iLocal_369)
	{
		case 0:
			func_341(uParam0);
			func_342(uParam0);
			break;
		case 1:
			func_343();
			if (func_344(uParam0))
			{
				if (!__LIB_13__::func_666(iLocal_489, 4))
				{
					func_313(uParam0, 0);
					return 5;
				}
			}
			break;
		case 2:
			func_345(uParam0);
			if (func_346(uParam0))
			{
				__LIB_13__::func_704();
				return 8;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	__LIB_13__::func_704();
	__LIB_13__::func_710(uParam0);
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
		func_383(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_138(var uParam0)
{
	__LIB_13__::func_705();
	func_394();
	__LIB_6__::func_726(&(Local_24.f_61), 0);
	__LIB_13__::func_715(&Local_118, &Local_24);
	if (__LIB_1__::func_243(4))
	{
		__LIB_1__::func_211(5, 8);
	}
}

bool func_150(var uParam0)
{
	func_417(uParam0);
	func_337();
	if (!func_418())
	{
		return false;
	}
	VEHICLE::DELETE_MISSION_TRAIN(&Local_375);
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	func_417(uParam0);
	func_419();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_FAMOUSGUNSLINGER_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_RHDUPPERCLASS_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_RHDUPPERCLASS_01"));
	__LIB_0__::func_11();
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		__LIB_0__::func_172(uLocal_688[iVar0]);
		iVar0++;
	}
	if (__LIB_2__::func_763(Local_259.f_1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_259))
		{
			AUDIO::STOP_PED_SPEAKING(Local_259, false);
		}
		__LIB_2__::func_753(Local_259.f_1, 0, 1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_2__::func_426(&(Local_391[iVar0 /*8*/]));
		iVar0++;
	}
	__LIB_2__::func_788(&iLocal_220, 1, 0, 1);
	if (bLocal_589 == 0)
	{
		__LIB_1__::func_600(1);
		VEHICLE::_0xB961DD799A837BD7();
	}
}

void func_189()
{
	vLocal_248[0 /*3*/].f_1 = "script@rcm@gun3@ig@ig4_leadin@ig4_leadin";
	vLocal_248[1 /*3*/].f_1 = "script@rcm@gun3@ig@ig1_billypanic@ig1_billypanic";
	vLocal_248[2 /*3*/].f_1 = "script@rcm@GUN3@IG@IG2_DeulDropToKnee@IG2_DeulDropToKnee";
}

void func_190()
{
	func_449();
	func_450();
}

void func_191()
{
	Local_259.f_6 = joaat("U_M_M_RHDTRAINSTATIONWORKER_01");
	Local_259.f_1 = 72;
	Local_259.f_7 = "RHO_STATWRK";
}

int func_210(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_9__::func_786(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_476(0, 0);
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

bool func_220(int iParam0)
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

int func_229(var uParam0)
{
	if (uParam0->f_177 >= 4)
	{
		if (func_510(&Local_259))
		{
			return 1;
		}
	}
	return 0;
}

void func_234(var uParam0)
{
	func_417(uParam0);
	__LIB_0__::func_325(&iLocal_551);
	__LIB_0__::func_325(&iLocal_553);
	__LIB_0__::func_325(&iLocal_554);
	__LIB_0__::func_325(&iLocal_555);
	__LIB_0__::func_325(&iLocal_552);
	__LIB_13__::func_222(uParam0, 0);
}

int func_274(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_767(uParam0);
	if (iVar0 == 0)
	{
		vLocal_670 = { 1114.631f, -1184.83f, 69.526f };
	}
	else if (iVar0 == 1)
	{
		vLocal_670 = { 1114.631f, -1184.83f, 69.526f };
	}
	else if (iVar0 == 2)
	{
		vLocal_670 = { 1278.309f, -1357.838f, 75.4161f };
	}
	else if (iVar0 == 3)
	{
		vLocal_670 = { 1513.017f, -1544.895f, 69.4023f };
	}
	if (iVar0 < 2)
	{
		if (!func_566(uParam0))
		{
			return 0;
		}
	}
	if (iVar0 < 4 && iVar0 > 1)
	{
		if (!bLocal_600)
		{
			VEHICLE::_0x4C05B42A8D937796();
			__LIB_1__::func_600(0);
			bLocal_588 = false;
			bLocal_589 = false;
			bLocal_590 = true;
			bLocal_600 = true;
		}
		if (func_304())
		{
			func_567();
			if (PROPSET::_0x8F3333F0A6900B3C(Local_375, 8))
			{
				if (func_568(uParam0))
				{
					if (func_305(uParam0))
					{
						bLocal_574 = true;
						func_303();
						__LIB_6__::func_313(&iLocal_489, 32);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (__LIB_12__::func_639(uParam0, 64))
			{
				if (func_568(uParam0))
				{
					if (func_305(uParam0))
					{
						bLocal_574 = true;
						func_303();
						__LIB_6__::func_313(&iLocal_489, 32);
						return 1;
					}
					else
					{
						return 0;
					}
				}
			}
			else
			{
				bLocal_574 = false;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_293(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_556))
	{
		iLocal_556 = MAP::_0x3E593DF9C2962EC6(-1337945352);
	}
	else
	{
		MAP::SET_BLIP_SPRITE(iLocal_556, joaat("BLIP_RC_GUNSLINGER_3"), true);
		MAP::_0x97F6F158CC5B5CA2(Local_259, iLocal_556);
	}
	if (__LIB_2__::func_364(Local_259, 0, 0, 0) && bLocal_367)
	{
		if (!__LIB_0__::func_139(Local_259.f_8))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_664, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_667, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true))
			{
				Local_259.f_8 = __LIB_1__::func_282("GUN3_C_TALK", joaat("INPUT_CONTEXT_A"), vLocal_664, 6f, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				bLocal_557 = false;
				HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(Local_259.f_8) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_259), 0);
			}
			else if (!__LIB_0__::func_627(128, 1))
			{
				if (__LIB_1__::func_305(3))
				{
					if ((Global_40.f_9146.f_4[4] != 3 || Global_40.f_9146.f_4[5] != 3) || Global_40.f_9146.f_4[6] != 3)
					{
						return false;
					}
				}
				Local_259.f_8 = __LIB_1__::func_282("GUN3_C_TALK", joaat("INPUT_CONTEXT_A"), vLocal_667, 6f, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				bLocal_557 = true;
				HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(Local_259.f_8) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_259), 0);
			}
		}
		else if (PED::IS_PED_ON_FOOT(Global_35))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_664, 2f, 1, 1) || __LIB_0__::func_266(Global_35, vLocal_667, 2f, 1, 1))
			{
				__LIB_1__::func_221(Local_259.f_8, 1, 1);
			}
			else
			{
				__LIB_1__::func_221(Local_259.f_8, 0, 1);
			}
		}
	}
	else
	{
		__LIB_1__::func_748(&(Local_259.f_8), 1, 1);
	}
	if (__LIB_2__::func_364(Local_259, 0, 0, 0) && __LIB_0__::func_567(Local_259.f_8, 1))
	{
		if (!VEHICLE::_0xF5EA41C1408695FB(1188.49f, -1270.654f, 1266.894f, -1351.299f))
		{
			VEHICLE::_0x4C05B42A8D937796();
			__LIB_1__::func_600(0);
			bLocal_588 = false;
			bLocal_589 = false;
		}
		else
		{
			iLocal_485 = __LIB_7__::func_914(vLocal_664, 0);
			iLocal_484 = __LIB_13__::func_707(iLocal_485);
			bLocal_587 = true;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_484))
			{
			}
		}
		if (__LIB_0__::func_163(Local_259, 993674639))
		{
			TASK::CLEAR_PED_TASKS(Local_259, true, false);
		}
		MAP::_0x44813684F72B563C(Local_259, iLocal_556);
		__LIB_0__::func_325(&iLocal_556);
		__LIB_11__::func_10(1, 1, 0);
		__LIB_11__::func_10(2, 1, 0);
		__LIB_4__::func_932(31, 0);
		__LIB_4__::func_932(30, 0);
		__LIB_1__::func_382(Local_259.f_8, 0, 1);
		__LIB_1__::func_748(&(Local_259.f_8), 1, 1);
		__LIB_12__::func_937(uParam0, 0);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_259, "COACHROB_HANDOVER", 0f, 0f, 0f, 0, "COACHROB");
		return true;
	}
	return false;
}

void func_303()
{
	int iVar0;
	switch (iLocal_15)
	{
		case 0:
			if (VEHICLE::_0xBD3C4A2ED509205E(Local_375))
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					if (iVar0 < 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*8*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_391[iVar0 /*8*/]))
							{
								if (iLocal_559[iVar0] == 0)
								{
									if (!__LIB_13__::func_714(Local_391[iVar0 /*8*/], 0, &uLocal_522, &uLocal_550, 0, 0))
									{
										if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], -2017877118))
										{
											if (iVar0 == 0)
											{
												if (iLocal_369 > 0 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_391[iVar0 /*8*/], vLocal_248[0 /*3*/]))
												{
													if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], 1647992574))
													{
														TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_391[iVar0 /*8*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], Local_391[iVar0 /*8*/].f_2), 7f);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[iVar0 /*8*/], true);
														PED::SET_PED_CONFIG_FLAG(Local_391[iVar0 /*8*/], 162, false);
													}
												}
											}
											else if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], -1518311320))
											{
												TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_391[iVar0 /*8*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], Local_391[iVar0 /*8*/].f_2), 3f);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[iVar0 /*8*/], true);
												PED::SET_PED_CONFIG_FLAG(Local_391[iVar0 /*8*/], 162, false);
											}
										}
									}
									else
									{
										iLocal_559[iVar0] = 1;
									}
								}
								else if (iVar0 == 0)
								{
									if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_391[iVar0 /*8*/], vLocal_248[0 /*3*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_391[iVar0 /*8*/], true, false);
										ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER_RAG", iLocal_702);
										ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER_GLASS", iLocal_699);
									}
									if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[iVar0 /*8*/], Global_35, 1, 1))
									{
										if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], 474215631))
										{
											TASK::TASK_COWER(Local_391[iVar0 /*8*/], -1, Global_35, 0);
											if (iLocal_369 < 2)
											{
												LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
											}
										}
									}
									else if (!PED::IS_PED_FLEEING(Local_391[iVar0 /*8*/]))
									{
										TASK::TASK_SMART_FLEE_PED(Local_391[iVar0 /*8*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
										if (iLocal_369 < 2)
										{
											LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
										}
									}
								}
								else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[iVar0 /*8*/], Global_35, 1, 1))
								{
									if (!PED::_0xB086C8C0F5701D14(Local_391[iVar0 /*8*/]))
									{
										PED::_0x9A77DFD295E29B09(Local_391[iVar0 /*8*/], true);
										if (iLocal_369 < 2)
										{
											LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
										}
									}
								}
								else if (!PED::IS_PED_FLEEING(Local_391[iVar0 /*8*/]))
								{
									TASK::TASK_SMART_FLEE_PED(Local_391[iVar0 /*8*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
									if (iLocal_369 < 2)
									{
										LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
									}
								}
							}
							else if (iVar0 == 0)
							{
								if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[0 /*3*/], false))
								{
									ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER_RAG", iLocal_702);
									ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER_GLASS", iLocal_699);
								}
							}
						}
					}
					else if (iVar0 >= 2 && iVar0 < 5)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*8*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_391[iVar0 /*8*/]))
							{
								if (iLocal_559[iVar0] == 0)
								{
									if (!__LIB_13__::func_714(Local_391[iVar0 /*8*/], 0, &uLocal_522, &uLocal_550, 0, 0))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[iVar0 /*8*/], true);
										PED::SET_PED_CONFIG_FLAG(Local_391[iVar0 /*8*/], 162, false);
										if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], -1518311320))
										{
											TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_391[iVar0 /*8*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[7], Local_391[iVar0 /*8*/].f_2), 5f);
											PED::_0xEEED8FAFEC331A70(Local_391[iVar0 /*8*/], 1210.2f, -1295.06f, 76.63f, 1);
										}
									}
									else
									{
										iLocal_559[iVar0] = 1;
									}
								}
								else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[iVar0 /*8*/], Global_35, 1, 1))
								{
									if (!PED::_0xB086C8C0F5701D14(Local_391[iVar0 /*8*/]))
									{
										PED::_0x9A77DFD295E29B09(Local_391[iVar0 /*8*/], true);
										if (iLocal_369 < 2)
										{
											LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
										}
									}
								}
								else if (!PED::IS_PED_FLEEING(Local_391[iVar0 /*8*/]))
								{
									TASK::TASK_SMART_FLEE_PED(Local_391[iVar0 /*8*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
									if (iLocal_369 < 2)
									{
										LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
									}
								}
							}
						}
					}
					else if (iVar0 >= 5 && iVar0 < 7)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*8*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_391[iVar0 /*8*/]))
							{
								if (iLocal_559[iVar0] == 0)
								{
									if (!__LIB_13__::func_714(Local_391[iVar0 /*8*/], 0, &uLocal_522, &uLocal_550, 0, 0))
									{
										if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], -2017877118))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[iVar0 /*8*/], true);
											PED::SET_PED_CONFIG_FLAG(Local_391[iVar0 /*8*/], 162, false);
											if (!__LIB_0__::func_163(Local_391[iVar0 /*8*/], -1518311320))
											{
												TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_391[iVar0 /*8*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[6], Local_391[iVar0 /*8*/].f_2), 5f);
											}
										}
									}
									else
									{
										iLocal_559[iVar0] = 1;
									}
								}
								else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[iVar0 /*8*/], Global_35, 1, 1))
								{
									if (!PED::_0xB086C8C0F5701D14(Local_391[iVar0 /*8*/]))
									{
										PED::_0x9A77DFD295E29B09(Local_391[iVar0 /*8*/], true);
										if (iLocal_369 < 2)
										{
											LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
										}
									}
								}
								else if (!PED::IS_PED_FLEEING(Local_391[iVar0 /*8*/]))
								{
									TASK::TASK_SMART_FLEE_PED(Local_391[iVar0 /*8*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
									if (iLocal_369 < 2)
									{
										LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
	}
}

bool func_304()
{
	int iVar0;
	int iVar1;
	if (bLocal_573)
	{
		return true;
	}
	if (!func_619())
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_375))
	{
		if (!bLocal_589)
		{
			Local_375 = VEHICLE::_CREATE_MISSION_TRAIN(1030903581, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vLocal_670), false, false, true, true);
			return false;
		}
		else if (!bLocal_572)
		{
			vLocal_670 = { vLocal_673 };
			bLocal_572 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_375))
	{
		if (!VEHICLE::_0xBD3C4A2ED509205E(Local_375))
		{
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_375))
		{
			VEHICLE::SET_TRAIN_SPEED(Local_375, 0f);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_375, 0f);
			VEHICLE::SET_VEHICLE_HANDBRAKE(Local_375, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_375, false);
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_375.f_4[iVar1]))
			{
				if (func_620(&(Local_375.f_4[iVar1]), iVar1))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(VEHICLE::_0x8DF5F6A19F99F0D5(1030903581, iVar1));
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	if (iVar0 == 10)
	{
		uLocal_492 = VEHICLE::_0x6C87F49BFA181DB5(vLocal_685);
		VEHICLE::_0x41503629D1139ABC(Local_375, uLocal_492, vLocal_685);
		bLocal_573 = true;
		return true;
	}
	return false;
}

bool func_305(var uParam0)
{
	int iVar0;
	if (bLocal_568)
	{
		return true;
	}
	iVar0 = __LIB_12__::func_767(uParam0);
	if (iVar0 > 2)
	{
		if (iLocal_491 == 0)
		{
			iLocal_491 = 2;
		}
	}
	if (iLocal_491 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_375.f_4[8]) && !ENTITY::IS_ENTITY_DEAD(Local_375.f_4[8]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_391[iLocal_491 /*8*/]))
			{
				Local_391[iLocal_491 /*8*/] = __LIB_8__::func_931(Local_391[iLocal_491 /*8*/].f_7, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], Local_391[0 /*8*/].f_2), Local_391[iLocal_491 /*8*/].f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_391[iLocal_491 /*8*/], false);
				PED::SET_PED_CONFIG_FLAG(Local_391[iLocal_491 /*8*/], 44, true);
				PED::SET_PED_CONFIG_FLAG(Local_391[iLocal_491 /*8*/], 189, true);
				__LIB_10__::func_385(Local_391[iLocal_491 /*8*/]);
				iLocal_491++;
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (iLocal_491 >= 2 && iLocal_491 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_375.f_4[7]) && !ENTITY::IS_ENTITY_DEAD(Local_375.f_4[7]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_391[iLocal_491 /*8*/]))
			{
				Local_391[iLocal_491 /*8*/] = __LIB_8__::func_931(Local_391[iLocal_491 /*8*/].f_7, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[7], -1.05f, -4.52f, 1.51f), Local_391[iLocal_491 /*8*/].f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_391[iLocal_491 /*8*/], false);
				PED::SET_PED_CONFIG_FLAG(Local_391[iLocal_491 /*8*/], 44, true);
				PED::SET_PED_CONFIG_FLAG(Local_391[iLocal_491 /*8*/], 189, true);
				__LIB_10__::func_385(Local_391[iLocal_491 /*8*/]);
				iLocal_491++;
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (iLocal_491 >= 5 && iLocal_491 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_375.f_4[6]) && !ENTITY::IS_ENTITY_DEAD(Local_375.f_4[6]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_391[iLocal_491 /*8*/]))
			{
				Local_391[iLocal_491 /*8*/] = __LIB_8__::func_931(Local_391[iLocal_491 /*8*/].f_7, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[6], 1.22f, 3.42f, 1.51f), Local_391[iLocal_491 /*8*/].f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_391[iLocal_491 /*8*/], false);
				PED::SET_PED_CONFIG_FLAG(Local_391[iLocal_491 /*8*/], 44, true);
				PED::SET_PED_CONFIG_FLAG(Local_391[iLocal_491 /*8*/], 189, true);
				__LIB_10__::func_385(Local_391[iLocal_491 /*8*/]);
				iLocal_491++;
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (iLocal_491 == 7)
	{
		bLocal_568 = true;
		return true;
	}
	return false;
}

bool func_306()
{
	int iVar0;
	iVar0 = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	if (!__LIB_0__::func_75(&uLocal_707))
	{
		__LIB_1__::func_283(&uLocal_707, 0);
	}
	if (__LIB_0__::func_264(&uLocal_707) < 15f)
	{
		if (iVar0 > 0)
		{
			return false;
		}
		else
		{
			__LIB_0__::func_37(&uLocal_707);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_707);
		return true;
	}
	return false;
}

void func_309()
{
	switch (iLocal_247)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_248[2 /*3*/]))
			{
				vLocal_248[2 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_248[2 /*3*/].f_1, 0, "pl_DrawWeapon_LH", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_248[2 /*3*/]);
				iLocal_247 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_248[2 /*3*/], true, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[2 /*3*/], "pl_DrawWeapon_LH");
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[2 /*3*/], "pl_KillBill_LongDeath_LH");
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[2 /*3*/], "pl_DissarmBilly_LH");
				iLocal_247 = 2;
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[2 /*3*/], "FAMOUSGUNSLINGER_03", iLocal_220, 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(vLocal_248[2 /*3*/], ENTITY::GET_ENTITY_COORDS(Local_375.f_4[iLocal_258], true, false), ENTITY::GET_ENTITY_ROTATION(Local_375.f_4[iLocal_258], 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(vLocal_248[2 /*3*/], Local_375.f_4[iLocal_258], -1);
			func_624(vLocal_248[2 /*3*/], "pl_DrawWeapon_LH", 0);
			iLocal_247 = 3;
			break;
	}
}

int func_310()
{
	if ((!ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[2 /*3*/], "pl_DrawWeapon_LH") || !ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[2 /*3*/], "pl_KillBill_LongDeath_LH")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[2 /*3*/], "pl_DissarmBilly_LH"))
	{
		return 0;
	}
	if ((!ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_248[2 /*3*/], "pl_DrawWeapon_LH") || !ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_248[2 /*3*/], "pl_KillBill_LongDeath_LH")) || !ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_248[2 /*3*/], "pl_DissarmBilly_LH"))
	{
		return 0;
	}
	return 1;
}

void func_311()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_375.f_4[iLocal_258]) && !ENTITY::IS_ENTITY_DEAD(Local_375.f_4[iLocal_258]))
	{
		__LIB_3__::func_775(&Local_118, 90112);
		if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
		{
			func_626(2, 1.1013f, -2.7201f, 0.1085f, 0.4294f, 0.201f, -0.0175f, 30.0057f, 1);
		}
	}
}

void func_312(bool bParam0)
{
	Local_118 = Global_35;
	Local_118.f_1 = iLocal_220;
	__LIB_4__::func_869(&Local_118, iLocal_209);
	__LIB_3__::func_830(&Local_24, &Local_118);
	func_629(&Local_118, &Local_24);
	PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, true);
	if (PED::IS_PED_MODEL(iLocal_220, joaat("CS_FAMOUSGUNSLINGER_01")))
	{
		__LIB_3__::func_459(iLocal_220, 1);
	}
	else
	{
		__LIB_3__::func_459(iLocal_220, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_16))
	{
		__LIB_3__::func_353(&Local_16, 0);
	}
	if (bParam0)
	{
		iLocal_245 = 1;
	}
}

void func_313(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_314(uParam0, func_632(), 0);
		__LIB_13__::func_465(uParam0, 0, 0, 0);
		__LIB_13__::func_59(uParam0, iLocal_220, "FAMOUSGUNSLINGER_03", 0, 0, 0);
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_206.f_348, false))
		{
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uParam0->f_206.f_348, Local_375.f_4[iLocal_258], 0);
		}
		__LIB_12__::func_981(uParam0, 96194);
		__LIB_0__::func_7(&(uParam0->f_172), 16);
	}
}

void func_314(var uParam0, vector3 vParam1, int iParam4)
{
	iLocal_368 = iParam4;
	StringCopy(&(uParam0->f_2575), func_637(uParam0), 24);
	__LIB_12__::func_779(uParam0, vParam1);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_317(int iParam0)
{
	Local_375.f_15 = iParam0;
}

int func_330(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		func_656(uParam4);
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
			func_663(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_13__::func_14(uParam4, 1))
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
				func_656(uParam4);
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

int func_334(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	EVENT::_0xB6F4825153920582();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	__LIB_0__::func_573();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DIVE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	CAM::_0x8910C24B7E0046EC();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_HOLD"), false);
	__LIB_3__::func_843(uParam1, uParam0);
	if (__LIB_0__::func_272(uParam0->f_1, 0) && PED::IS_PED_A_PLAYER(*uParam0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 25, true);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	__LIB_3__::func_807();
	switch (uParam1->f_55)
	{
		case 0:
			if (__LIB_3__::func_764(uParam1))
			{
				__LIB_0__::func_240(uParam1, 33554432);
				if (__LIB_3__::func_761(uParam0, 2))
				{
					__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
				}
			}
			if (__LIB_3__::func_764(uParam1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
			}
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				__LIB_8__::func_536(uParam0, uParam1);
			}
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				__LIB_13__::func_715(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (__LIB_0__::func_272(*uParam0, 0) && func_688(uParam0, uParam1))
			{
				__LIB_3__::func_762(uParam1, 1);
			}
			break;
		case 1:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				__LIB_8__::func_536(uParam0, uParam1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (__LIB_3__::func_767(uParam0, uParam1) && func_690(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 0);
				Global_19 = 0;
				__LIB_13__::func_701(uParam0, uParam1);
				__LIB_18__::func_641(uParam0, uParam1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_INTERESTING_MELEE_FIGHT"), uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 180f, false, false, -1, -1);
				}
				if (!__LIB_3__::func_761(uParam0, 1024))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (__LIB_3__::func_761(uParam0, 64))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, 0f, 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (__LIB_3__::func_761(uParam0, 32))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, 0f, 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, uParam0->f_42, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				PED::_0x2208438012482A1A(*uParam0, true, true);
				uParam1->f_2 = MISC::GET_GAME_TIMER();
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_1, 146, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, true);
					__LIB_0__::func_240(uParam1, 2048);
				}
				if (!__LIB_3__::func_761(uParam0, 262144))
				{
					WEAPON::_HIDE_PED_WEAPONS(*uParam0, 2, true);
					WEAPON::_HIDE_PED_WEAPONS(uParam0->f_1, 2, true);
				}
				if ((__LIB_3__::func_761(uParam0, 32) || __LIB_3__::func_761(uParam0, 2)) || (__LIB_3__::func_764(uParam1) && !__LIB_3__::func_764(uParam1)))
				{
					if (!__LIB_3__::func_761(uParam0, 1024))
					{
						__LIB_3__::func_353(&(uParam0->f_16), 0);
					}
					if (!__LIB_3__::func_764(uParam1))
					{
						__LIB_3__::func_845(uParam0, uParam1, 1);
					}
					__LIB_3__::func_762(uParam1, 7);
				}
				else
				{
					__LIB_3__::func_816(uParam1, 0);
					MAP::DISPLAY_RADAR(false);
					__LIB_3__::func_762(uParam1, 3);
				}
			}
			break;
		case 3:
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			__LIB_13__::func_701(uParam0, uParam1);
			bVar0 = __LIB_8__::func_536(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				__LIB_13__::func_715(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() > uParam1->f_2 + 1000 || __LIB_0__::func_27(uParam0->f_88, 2))
			{
				if ((__LIB_0__::func_27(uParam0->f_88, 32) || bVar0) && (__LIB_3__::func_761(uParam0, 2) || (PED::IS_PED_FACING_PED(uParam0->f_1, *uParam0, 20f) && PED::IS_PED_FACING_PED(*uParam0, uParam0->f_1, 20f))))
				{
					if (!__LIB_3__::func_761(uParam0, 2048))
					{
						LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 1);
					}
					if (!__LIB_3__::func_761(uParam0, 1024))
					{
						__LIB_3__::func_353(&(uParam0->f_16), 0);
					}
					if (__LIB_0__::func_27(uParam0->f_88, 1024))
					{
						if (__LIB_0__::func_94(uParam0->f_1, uParam0->f_45, 0) < 0.5f || __LIB_0__::func_163(uParam0->f_1, -717627678))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", &(uParam0->f_12), 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "intro_idle_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "pass_out_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							__LIB_1__::func_474(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							__LIB_3__::func_762(uParam1, 8);
						}
					}
					else
					{
						__LIB_3__::func_762(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			MAP::DISPLAY_RADAR(false);
			__LIB_13__::func_701(uParam0, uParam1);
			if (func_700(uParam0, uParam1))
			{
				__LIB_13__::func_715(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				return 1;
			}
			break;
		case 8:
			__LIB_13__::func_701(uParam0, uParam1);
			__LIB_13__::func_681(uParam0);
			if (!__LIB_0__::func_27(uParam1->f_1, 512) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, -529482553))
			{
				EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
				uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_AMUSING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
				TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, false, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
				TASK::TASK_KNOCKED_OUT(uParam0->f_1, 60f, true);
				__LIB_0__::func_7(&(uParam1->f_1), 512);
				__LIB_13__::func_715(uParam0, uParam1);
				if (!__LIB_3__::func_761(uParam0, 2048))
				{
					LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
				}
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				CAM::RENDER_SCRIPT_CAMS(false, true, 5000, true, false, 0);
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			__LIB_13__::func_715(uParam0, uParam1);
			return 1;
	}
	if (__LIB_3__::func_761(uParam0, 4))
	{
		bVar2 = true;
		iVar3 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
		if (uParam1->f_10 == -1)
		{
			uParam1->f_10 = iVar3;
		}
		else if ((iVar3 - uParam1->f_10) > 2000)
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		}
	}
	return 0;
}

bool func_335(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_458(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_337()
{
	switch (Local_375.f_15)
	{
		case 0:
			break;
		case 1:
			func_735(7f);
			break;
		case 2:
			func_735(12f);
			break;
		case 4:
			func_737(7f);
			break;
		case 5:
			func_738(8f);
			break;
	}
}

void func_338(var uParam0)
{
	switch (iLocal_374)
	{
		case 0:
			if (iLocal_369 == 0)
			{
				if (VEHICLE::_0xE887BD31D97793F6(Local_375))
				{
					__LIB_12__::func_937(uParam0, 1);
					iLocal_374 = 1;
				}
			}
			else if (iLocal_369 > 0)
			{
				iLocal_374 = 1;
			}
			break;
		case 1:
			if (iLocal_369 == 1)
			{
				__LIB_12__::func_937(uParam0, 2);
				iLocal_374 = 2;
			}
			else if (iLocal_369 > 1)
			{
				iLocal_374 = 2;
			}
			break;
		case 2:
			if (iLocal_369 == 1)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_375.f_4[5]))
				{
					if (func_739(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iLocal_220, true, false)) && !PED::IS_PED_CLIMBING(Global_35))
					{
						__LIB_12__::func_937(uParam0, 3);
						iLocal_374 = 3;
					}
				}
			}
			else if (iLocal_369 > 1)
			{
				iLocal_374 = 3;
			}
			break;
		case 3:
			if (iLocal_369 == 2)
			{
				if (!__LIB_0__::func_255(iLocal_220, 0))
				{
					__LIB_12__::func_937(uParam0, 4);
					iLocal_374 = 4;
				}
				else
				{
					iLocal_374 = 5;
				}
			}
			else if (iLocal_369 > 2)
			{
				iLocal_374 = 5;
			}
			break;
		case 4:
			if (iLocal_369 == 2)
			{
				if (__LIB_3__::func_819(&Local_118, &Local_24))
				{
					__LIB_12__::func_937(uParam0, 5);
					iLocal_374 = 5;
				}
			}
			break;
		case 5:
			if (iLocal_369 == 2)
			{
				if (__LIB_0__::func_255(iLocal_220, 0))
				{
					__LIB_12__::func_937(uParam0, 6);
					iLocal_374 = 6;
				}
			}
			break;
	}
}

void func_339()
{
	if (iLocal_369 == 0)
	{
		if (!bLocal_662)
		{
			if (__LIB_13__::func_714(iLocal_220, 0, &uLocal_493, &uLocal_521, 0, 0))
			{
				__LIB_2__::func_480(&Local_624, 1, 1, 1, 0);
				__LIB_1__::func_480(&iLocal_220);
				if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_PositionOne_Idle", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[0 /*3*/], "pl_Breakout_FirstPosition", true);
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_PositionTwo_Idle", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[0 /*3*/], "pl_Breakout_SecondPosition", true);
				}
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_220, vLocal_248[0 /*3*/]))
				{
					if (!__LIB_0__::func_163(iLocal_220, 474215631))
					{
						TASK::TASK_COWER(iLocal_220, -1, Global_35, 0);
					}
					else
					{
						bLocal_597 = true;
					}
				}
			}
		}
	}
}

void func_340()
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (__LIB_3__::func_417(Global_35))
		{
			iVar0 = __LIB_0__::func_147();
		}
		else
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
		}
	}
}

void func_341(var uParam0)
{
	if (iLocal_370 > 5)
	{
		if (bLocal_574)
		{
			func_303();
		}
	}
	if (bLocal_587)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_484))
		{
			bLocal_587 = false;
		}
	}
	if (bLocal_569 == 0)
	{
		if (!bLocal_587)
		{
			VEHICLE::_0x4C05B42A8D937796();
			__LIB_1__::func_600(0);
			bLocal_589 = false;
			bLocal_588 = false;
		}
		else
		{
			bLocal_588 = true;
		}
	}
	if (!bLocal_574)
	{
		if (func_304())
		{
			if (PROPSET::_0x8F3333F0A6900B3C(Local_375, 8))
			{
				if (func_568(uParam0))
				{
					if (func_305(uParam0))
					{
						bLocal_574 = true;
					}
				}
			}
		}
	}
	if (!bLocal_569)
	{
		if (func_304())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_699))
			{
				iLocal_699 = OBJECT::CREATE_OBJECT(iLocal_696, 1224.933f, -1311.811f, 77.61048f, false, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_699, Local_375.f_4[8], 0, 0f, 0f, 0f, 0f, 0f, 180f, false, false, false, false, 2, true, false, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_702))
			{
				iLocal_702 = OBJECT::CREATE_OBJECT(iLocal_697, 1223.719f, -1310.158f, 77.68116f, false, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_702, Local_375.f_4[8], 0, 0f, 0f, 0f, 0f, 0f, 180f, false, false, false, false, 2, true, false, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_703))
			{
				iLocal_703 = OBJECT::CREATE_OBJECT(iLocal_698, 1223.976f, -1310.888f, 77.61095f, false, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_703, Local_375.f_4[8], 0, 0f, 0f, 0f, 0f, 0f, 180f, false, false, false, false, 2, true, false, false);
			}
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_703) || !ENTITY::DOES_ENTITY_EXIST(iLocal_702)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_699))
			{
				return;
			}
			if (!bLocal_572)
			{
				func_317(1);
			}
			else
			{
				func_317(2);
			}
			bLocal_569 = true;
			func_567();
			func_745();
		}
	}
}

int func_342(var uParam0)
{
	int iVar0;
	func_746();
	if (iLocal_370 < 5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (bLocal_569)
	{
		func_747(uParam0);
	}
	if (iLocal_370 < 5 || __LIB_5__::func_463())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	}
	switch (iLocal_370)
	{
		case 0:
			if (__LIB_1__::func_187(37))
			{
				bLocal_583 = true;
			}
			if (__LIB_6__::func_843(65536))
			{
				bLocal_584 = true;
			}
			if (__LIB_0__::func_272(Local_259, 0))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_259, "COACHROB_HANDOVER", 0f, 0f, 0f, 0, "COACHROB");
				if (__LIB_0__::func_181())
				{
					__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
				}
				else
				{
					__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
				}
				__LIB_12__::func_875(uParam0, Local_259, Local_259.f_7, 1);
				if (bLocal_558)
				{
					iLocal_370 = 5;
				}
				else
				{
					Local_259 = __LIB_2__::func_965(Local_259.f_1, 0, 0, 0, 1, 1);
					iLocal_370 = 1;
				}
			}
			break;
		case 1:
			if (!bLocal_557)
			{
				if (__LIB_0__::func_266(Local_259, 1230.052f, -1298.276f, 75.9044f, 2f, 1, 1))
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(Local_259))
					{
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_259, 1230.052f, -1298.276f, 75.9044f, 2f, -1, false, false, false, false);
					}
				}
				else if (!__LIB_0__::func_163(Local_259, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_259, 1230.052f, -1298.276f, 75.9044f, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			else if (__LIB_0__::func_266(Local_259, 1226.811f, -1295.285f, 75.91219f, 2f, 1, 1))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Local_259))
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_259, 1226.811f, -1295.285f, 75.91219f, 2f, -1, false, false, false, false);
				}
			}
			else if (!__LIB_0__::func_163(Local_259, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_259, 1226.811f, -1295.285f, 75.91219f, 1f, 20000, 0.25f, 0, 40000f);
			}
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_259))
			{
				AUDIO::STOP_PED_SPEAKING(Local_259, true);
				__LIB_3__::func_820(30, 1);
				__LIB_3__::func_820(31, 1);
				if (__LIB_0__::func_181())
				{
					if (bLocal_584)
					{
						__LIB_12__::func_876(uParam0, "GUN3_BECKON2J", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "GUN3_BECKONJ", 0);
					}
				}
				else if (bLocal_583)
				{
					__LIB_12__::func_876(uParam0, "GUN3_BECKON2A", 0);
				}
				else
				{
					__LIB_12__::func_876(uParam0, "GUN3_BECKON", 0);
				}
				iLocal_370 = 2;
			}
			break;
		case 2:
			if (!bLocal_557 && __LIB_0__::func_266(Local_259, 1230.052f, -1298.276f, 75.9044f, 2f, 1, 1))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Local_259))
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_259, 1230.052f, -1298.276f, 75.9044f, 2f, -1, false, false, false, false);
				}
				iLocal_370 = 3;
			}
			else if (bLocal_557 && __LIB_0__::func_266(Local_259, 1226.811f, -1295.285f, 75.91219f, 2f, 1, 1))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Local_259))
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(Local_259, 1226.811f, -1295.285f, 75.91219f, 2f, -1, false, false, false, false);
				}
				iLocal_370 = 3;
			}
			else
			{
				if (!bLocal_585)
				{
					if (((!__LIB_6__::func_903("GUN3_BECKON2J") && !__LIB_6__::func_903("GUN3_BECKONJ")) && !__LIB_6__::func_903("GUN3_BECKON2A")) && !__LIB_6__::func_903("GUN3_BECKON"))
					{
						__LIB_12__::func_876(uParam0, "GUN3_COMING", 0);
						bLocal_585 = true;
					}
				}
				if (!__LIB_0__::func_163(Local_259, 713668775))
				{
					if (!bLocal_557)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_259, 1230.052f, -1298.276f, 75.9044f, 1f, 20000, 0.25f, 0, 40000f);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_259, 1226.811f, -1295.285f, 75.91219f, 1f, 20000, 0.25f, 0, 40000f);
					}
				}
			}
			break;
		case 3:
			if ((((!__LIB_6__::func_903("GUN3_COMING") && !__LIB_6__::func_903("GUN3_BECKON2J")) && !__LIB_6__::func_903("GUN3_BECKONJ")) && !__LIB_6__::func_903("GUN3_BECKON2A")) && !__LIB_6__::func_903("GUN3_BECKON"))
			{
				if (__LIB_0__::func_181())
				{
					if (bLocal_584)
					{
						__LIB_12__::func_876(uParam0, "GUN3_ALD_MET", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "GUN3_ALD_NOTMET", 0);
					}
				}
				else if (bLocal_583)
				{
					__LIB_12__::func_876(uParam0, "GUN3_ALD_MET", 0);
				}
				else
				{
					__LIB_12__::func_876(uParam0, "GUN3_ALD_NOTMET", 0);
				}
				iLocal_370 = 4;
			}
			break;
		case 4:
			if (!bLocal_586)
			{
				if (!__LIB_6__::func_903("GUN3_ALD_MET") && !__LIB_6__::func_903("GUN3_ALD_NOTMET"))
				{
					if (__LIB_0__::func_181())
					{
						__LIB_12__::func_876(uParam0, "GUN3_INFOJ", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "GUN3_INFO", 0);
					}
					bLocal_586 = true;
				}
			}
			if (bLocal_586)
			{
				if (!__LIB_6__::func_903("GUN3_INFOJ") && !__LIB_6__::func_903("GUN3_INFO"))
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
					__LIB_11__::func_10(1, 1, 0);
					__LIB_11__::func_10(2, 1, 0);
					__LIB_4__::func_932(31, 0);
					__LIB_4__::func_932(30, 0);
					__LIB_9__::func_819(30);
					__LIB_9__::func_819(31);
					iLocal_370 = 5;
				}
			}
			break;
		case 5:
			if (bLocal_569)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_375))
				{
					iLocal_552 = __LIB_1__::func_863(Local_375.f_4[6], -399496385, 0, 1);
					MAP::_BLIP_SET_MODIFIER(iLocal_552, joaat("BLIP_MODIFIER_TRAIN_MISSION"));
					MAP::_BLIP_SET_MODIFIER(iLocal_552, -401963276);
					if (func_756())
					{
						__LIB_12__::func_883(uParam0, "GUN3_OBJ_WAIT3", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_13__::func_89(uParam0, "GUN3_OBJ_WAIT3", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else
					{
						__LIB_12__::func_883(uParam0, "GUN3_OBJ_WAIT", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_13__::func_89(uParam0, "GUN3_OBJ_WAIT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					iLocal_370 = 6;
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
				}
			}
			else if (!bLocal_590)
			{
				__LIB_12__::func_883(uParam0, "GUN3_OBJ_WAIT2", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_13__::func_89(uParam0, "GUN3_OBJ_WAIT2", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
				bLocal_590 = true;
			}
			break;
		case 6:
			if (!bLocal_570)
			{
				if (VEHICLE::_0xE887BD31D97793F6(Local_375))
				{
				}
				else if (bLocal_576 == 1)
				{
				}
				if (VEHICLE::_0xE887BD31D97793F6(Local_375) || bLocal_576 == 1)
				{
					__LIB_0__::func_325(&iLocal_552);
					__LIB_12__::func_883(uParam0, "GUN3_OBJ_SEARCH", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_553 = __LIB_5__::func_554(1259054292, uLocal_688[2], 1);
					iLocal_554 = __LIB_5__::func_554(1259054292, uLocal_688[3], 1);
					iLocal_555 = __LIB_5__::func_554(1259054292, uLocal_688[4], 1);
					bLocal_570 = true;
				}
			}
			else if (VEHICLE::_0xE887BD31D97793F6(Local_375) || func_756())
			{
				if (__LIB_3__::func_291(Global_35, 1))
				{
					if (__LIB_0__::func_48(Global_35, Local_259, 20f, 1))
					{
						if (!__LIB_6__::func_904())
						{
							if (!bLocal_571)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_259, Global_35, 6, 0, 51, 0);
								__LIB_12__::func_876(uParam0, "GUN3_TRAINARRVE", 0);
								bLocal_571 = true;
							}
						}
					}
				}
			}
			if (PED::IS_PED_IN_ANY_TRAIN(Global_35))
			{
				if (!bLocal_588)
				{
					bLocal_576 = true;
					if (VEHICLE::_0xE887BD31D97793F6(Local_375))
					{
						if (!__LIB_0__::func_75(&uLocal_710))
						{
							__LIB_1__::func_148(&uLocal_710);
						}
						else if (__LIB_0__::func_264(&uLocal_710) > 5f)
						{
							VEHICLE::_0x787E43477746876F(Local_375);
							func_317(4);
							__LIB_0__::func_37(&uLocal_710);
						}
					}
				}
				if (__LIB_0__::func_48(Global_35, Local_375.f_4[6], 3.5f, 1))
				{
					__LIB_0__::func_325(&iLocal_554);
				}
				if (__LIB_0__::func_48(Global_35, Local_375.f_4[7], 3.5f, 1))
				{
					__LIB_0__::func_325(&iLocal_555);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_710))
			{
				__LIB_0__::func_37(&uLocal_710);
			}
			if (__LIB_1__::func_588("GUN3_OBJ_SEARCH2", 0, 0, -1, -1, 0))
			{
				__LIB_13__::func_722(uParam0, "GUN3_OBJ_SEARCH2", bLocal_662, 10, -1f);
			}
			if (!bLocal_576)
			{
				if (__LIB_0__::func_266(Local_375, vLocal_685, 200f, 1, 1))
				{
					if (Local_375.f_15 != 1)
					{
						func_317(1);
					}
				}
			}
			if (bLocal_695 || bLocal_663)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_IKnewYoudComeForMe", 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_700))
				{
					ENTITY::DETACH_ENTITY(iLocal_700, true, true);
				}
				PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "internal_loop", false, false);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_PrePickupLoop", 1))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RGUN3");
				iLocal_370 = 7;
			}
			if (bLocal_695)
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(vLocal_248[0 /*3*/], "FAMOUSGUNSLINGER_03"))
				{
					iLocal_14 = 11;
					PED::FORCE_PED_MOTION_STATE(iLocal_220, joaat("MOTIONSTATE_SPRINT"), false, 0, false);
					PED::_0x2208438012482A1A(iLocal_220, false, false);
					if (!__LIB_0__::func_163(iLocal_220, 242628503))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[7], 0f, 4.79f, 1.04f), 3f, -1, 0.25f, 1, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[7]));
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[6], 0f, 10.45f, 0.87f), 3f, -1, 0.25f, 1, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[6]));
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_220, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
				}
			}
			break;
		case 7:
			__LIB_0__::func_325(&iLocal_553);
			__LIB_0__::func_325(&iLocal_554);
			__LIB_0__::func_325(&iLocal_555);
			__LIB_0__::func_172(iLocal_694);
			__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, -1);
			return 1;
	}
	return 0;
}

void func_343()
{
	if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_PrePickupLoop", 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (__LIB_0__::func_48(Global_35, iLocal_700, 1.5f, 1))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_PrePickupLoop", 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "internal_loop", true, false);
		}
	}
}

bool func_344(var uParam0)
{
	func_345(uParam0);
	func_303();
	func_309();
	switch (iLocal_371)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			func_763();
			__LIB_12__::func_883(uParam0, "GUN3_OBJ_CHASE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_317(4);
			__LIB_13__::func_667(&iLocal_371, 3);
			__LIB_0__::func_325(&iLocal_556);
			MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
			break;
		case 1:
			func_765(uParam0);
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!bLocal_581)
			{
				__LIB_3__::func_319(vLocal_248[1 /*3*/]);
			}
			__LIB_0__::func_325(&iLocal_551);
			__LIB_13__::func_665(&iLocal_369, 4, &iLocal_371, -1);
			if (__LIB_13__::func_666(iLocal_489, 4))
			{
				func_766("GUN3_BLIP");
			}
			else if (__LIB_13__::func_666(iLocal_489, 8))
			{
				func_766("GUN3_BLIP");
			}
			else if (__LIB_13__::func_666(iLocal_489, 16))
			{
				func_767("GUN3_KILL");
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_345(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_220, 0))
	{
		switch (iLocal_372)
		{
			case 0:
				func_768();
				break;
			case 3:
				func_769(uParam0);
				break;
		}
	}
}

bool func_346(var uParam0)
{
	func_303();
	if (!bLocal_581)
	{
		if (!bLocal_578)
		{
			if (!__LIB_0__::func_163(Global_35, -717627678))
			{
				__LIB_12__::func_773(0, 0, 1, 1);
			}
			else
			{
				bLocal_578 = true;
			}
		}
	}
	if (__LIB_0__::func_255(iLocal_220, 0))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_220, 1, false);
	}
	if (ANIMSCENE::_0x1F0E401031E20146(vLocal_248[2 /*3*/], "pl_KillBill_LongDeath_LH"))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_220, 1, false);
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_248[2 /*3*/]) > 1.7f)
		{
			__LIB_1__::func_864(iLocal_220, 1, 0);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(vLocal_248[2 /*3*/], "pl_DissarmBilly_LH"))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_220, vLocal_248[2 /*3*/]))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[2 /*3*/], "s_ShootHimself", 1))
			{
				if (!bLocal_580)
				{
					if (__LIB_0__::func_399(iLocal_220, 1, 0, 0) != joaat("WEAPON_REVOLVER_CATTLEMAN"))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_220, joaat("WEAPON_REVOLVER_CATTLEMAN"), 60, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						__LIB_9__::func_410(iLocal_220, 0, 0);
						bLocal_580 = true;
					}
				}
				if (!bLocal_596)
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_220, 1);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_220);
					bLocal_596 = true;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_220, Global_35, 1, 1))
				{
					TASK::CLEAR_PED_TASKS(iLocal_220, true, false);
					ENTITY::_SET_ENTITY_HEALTH(iLocal_220, 0, 0);
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_248[2 /*3*/]) > 9.17f)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_220, 1, false);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_248[2 /*3*/]) > 11.5f)
			{
				__LIB_1__::func_864(iLocal_220, 1, 0);
			}
		}
		else
		{
			__LIB_3__::func_319(vLocal_248[2 /*3*/]);
			__LIB_1__::func_864(iLocal_220, 0, 0);
		}
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!bLocal_579)
		{
			func_772();
			bLocal_579 = true;
		}
	}
	switch (iLocal_245)
	{
		case 0:
			func_334(&Local_118, &Local_24);
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			if (!__LIB_0__::func_214(joaat("WEAPON_PISTOL_MAUSER_DRUNK")))
			{
				__LIB_0__::func_915(joaat("WEAPON_PISTOL_MAUSER_DRUNK"));
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_220, 1);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_220, true);
			__LIB_0__::func_769();
			if (bLocal_599)
			{
				if (__LIB_0__::func_27(Global_40.f_9145, 1))
				{
					__LIB_12__::func_883(uParam0, "GUN3_OBJ_DUEL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else if (__LIB_0__::func_27(Global_40.f_9145, 1))
			{
				__LIB_13__::func_89(uParam0, "GUN3_OBJ_DUEL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			iLocal_245 = 1;
			break;
		case 1:
			if (!func_773("GUN3_BLIP"))
			{
				if (__LIB_13__::func_708(&Local_118, &Local_24, 0))
				{
					if (!bLocal_577)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[2 /*3*/], false))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[2 /*3*/], "pl_DissarmBilly_LH", true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[2 /*3*/], "pl_DissarmBilly_LH", true);
							ANIMSCENE::START_ANIM_SCENE(vLocal_248[2 /*3*/]);
						}
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						bLocal_577 = true;
					}
				}
				else if (!bLocal_577)
				{
					if (__LIB_13__::func_270(&Local_118, &Local_24, 0) || __LIB_13__::func_271(&Local_118, &Local_24, 0) >= 1)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[2 /*3*/], false))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[2 /*3*/], "pl_KillBill_LongDeath_LH", true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[2 /*3*/], "pl_KillBill_LongDeath_LH", true);
							ANIMSCENE::START_ANIM_SCENE(vLocal_248[2 /*3*/]);
						}
						bLocal_577 = true;
					}
				}
			}
			else if (iLocal_245 != 3)
			{
				__LIB_13__::func_704();
			}
			break;
		case 3:
			func_777("GUN3_BLIP");
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			if (!__LIB_0__::func_272(iLocal_220, 0) && !__LIB_0__::func_270())
			{
				if (func_779("GUN3_BLIP"))
				{
					return true;
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_75(&uLocal_713))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[2 /*3*/], false))
				{
					__LIB_1__::func_148(&uLocal_713);
				}
			}
			if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[2 /*3*/], false) && !PED::IS_PED_RAGDOLL(iLocal_220)) || __LIB_0__::func_264(&uLocal_713) > 6f)
			{
				if (!bLocal_591)
				{
					if (!__LIB_0__::func_75(&uLocal_593))
					{
						__LIB_1__::func_148(&uLocal_593);
						__LIB_12__::func_883(uParam0, "GUN3_OBJ_GUN1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else if (__LIB_0__::func_264(&uLocal_593) >= 3f)
					{
						bLocal_591 = true;
					}
					if (__LIB_0__::func_48(Global_35, iLocal_220, 1.5f, 1))
					{
						bLocal_591 = true;
					}
				}
				else if (!bLocal_602)
				{
					func_780();
					if (bLocal_214)
					{
						if (!bLocal_592)
						{
							__LIB_13__::func_89(uParam0, "GUN3_OBJ_GUN1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							bLocal_592 = true;
						}
					}
					if (!__LIB_13__::func_691())
					{
						if (bLocal_214)
						{
							bLocal_214 = false;
						}
						if (bLocal_592)
						{
							bLocal_592 = false;
						}
					}
				}
				else
				{
					func_782();
					if (__LIB_0__::func_266(iLocal_220, Global_36, 20f, 1, 1))
					{
						bLocal_602 = false;
					}
				}
			}
			if (__LIB_3__::func_996(Global_35))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_220, 1f, 1))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_220, true);
				}
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_220, vLocal_248[2 /*3*/]))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_220))
				{
					PED::_0x8CB2553C559102C1(iLocal_220, 1, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_220, 524465);
				}
			}
			if (func_784(uParam0, "GUN3_BLIP", 1084227584 /* Float: 5f */))
			{
				func_419();
				return true;
			}
			break;
	}
	return false;
}

void func_383(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
					func_817(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_821(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_821(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_821(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_821(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_821(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_821(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_821(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_821(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_821(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_821(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_821(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_821(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_821(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_823();
						func_824(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_821(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_383(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_383(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_383(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_821(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_821(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_859();
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
							func_821(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_861(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_861(8, 1);
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
					__LIB_1__::func_777(iParam0, func_862(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, func_862(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, func_862(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, func_862(11), 1, 0.5f, 2, 0, 0, 1);
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
						func_863(__LIB_1__::func_613(Global_1879514.f_1));
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

void func_394()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (CAM::DOES_CAM_EXIST(Local_24.f_20[iVar0]))
		{
			CAM::STOP_CAM_POINTING(Local_24.f_20[iVar0]);
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
		iVar0++;
	}
}

void func_417(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	if (bLocal_486)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATESTEAMER01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATECOALCAR01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATEBOXCAR04X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATEFLATCAR01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATEBOXCAR01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("NORTHPASSENGER01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATEDINING01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CABOOSE01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PRIVATEPASSENGER01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_RHDUPPERCLASS_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_RHDUPPERCLASS_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_RHDBARTENDER_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_GLASS01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIR_PRIVATEDINING01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BARRAG01X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_WHISKEYGLASS01X"));
		bLocal_486 = false;
	}
	__LIB_13__::func_705();
	__LIB_3__::func_820(30, 0);
	__LIB_3__::func_820(31, 0);
	__LIB_11__::func_10(1, 0, 0);
	__LIB_11__::func_10(2, 0, 0);
	__LIB_4__::func_932(31, 1);
	__LIB_4__::func_932(30, 1);
	func_782();
	func_918(0);
	func_317(1);
	__LIB_6__::func_726(&(Local_24.f_61), 0);
	if (!ENTITY::IS_ENTITY_DEAD(Local_375.f_4[0]))
	{
		__LIB_13__::func_703(&(Local_375.f_4[0]));
	}
	__LIB_6__::func_357();
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
}

bool func_418()
{
	int iVar0;
	int iVar1;
	func_303();
	iVar0 = 1;
	if (!__LIB_12__::func_610(iLocal_220, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 0, -1082130432 /* Float: -1f */))
	{
		iVar0 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_375))
	{
		if (__LIB_0__::func_48(Local_375, Global_35, 500f, 1))
		{
			iVar0 = 0;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_375.f_4[iVar1]))
			{
				iVar0 = 0;
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_419()
{
	__LIB_0__::func_325(&iLocal_221);
	if (__LIB_0__::func_75(&uLocal_713))
	{
		__LIB_0__::func_37(&uLocal_713);
	}
}

void func_449()
{
	iLocal_210 = joaat("WEAPON_PISTOL_MAUSER_DRUNK");
	vLocal_236 = { 0.8f, -0.64f, 1.05f };
	Local_118.f_83 = 0.1f;
	StringCopy(&(Local_118.f_36), "GUN3_OBJ_DUEL", 24);
	Local_118.f_81 = 0f;
	__LIB_4__::func_869(&Local_118, 1);
}

void func_450()
{
	__LIB_4__::func_228(&uLocal_493);
	__LIB_2__::func_828(&uLocal_493, 1);
	__LIB_4__::func_228(&uLocal_522);
	__LIB_2__::func_828(&uLocal_522, 1);
}

int func_476(int iParam0, int iParam1)
{
	var uVar0;
	return func_980(&uVar0, iParam0, iParam1);
}

bool func_510(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!__LIB_0__::func_272(*iParam0, 1))
		{
			return true;
		}
		else if (((((PED::IS_PED_FLEEING(*iParam0) || PED::IS_PED_SHOOTING(Global_35)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1)) || PED::_IS_PED_LASSOED(*iParam0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 5f, true)) || __LIB_2__::func_401(*iParam0, 1, 1, 0, 0, 1))
		{
			__LIB_13__::func_472(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 0, 1, 1, 1, 0, 0);
			return true;
		}
	}
	return false;
}

bool func_566(var uParam0)
{
	if (Local_259.f_9)
	{
		return true;
	}
	if (__LIB_0__::func_29(Local_259.f_1))
	{
		Local_259 = __LIB_1__::func_334(Local_259.f_1);
		if (!__LIB_0__::func_272(Local_259, 0))
		{
			if (__LIB_12__::func_639(uParam0, 64))
			{
				if (!bLocal_582)
				{
					if (__LIB_2__::func_987(Local_259.f_1, 1, 0, 0, 0, 0))
					{
						bLocal_582 = true;
					}
				}
			}
			return false;
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(Local_259))
		{
			__LIB_0__::func_928(&(Local_259.f_10), Local_259, Local_259.f_7, 0);
			Local_259.f_9 = 1;
		}
	}
	return false;
}

void func_567()
{
	Local_448[1 /*7*/] = { func_1035(8, 0f, 14.59f, 1.12f, 1.5f, 1) };
	Local_448[2 /*7*/] = { func_1035(5, 0f, 10.45f, 0.87f, 1.5f, 2) };
	Local_448[3 /*7*/] = { func_1035(5, 0f, 3.48f, 3.72f, 1.1f, 0) };
	Local_448[4 /*7*/] = { func_1035(4, 0f, -3.8f, 3.81f, 1.1f, 3) };
}

bool func_568(var uParam0)
{
	if (bLocal_575)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_220) && ENTITY::DOES_ENTITY_EXIST(Local_375.f_4[8]))
	{
		iLocal_220 = __LIB_12__::func_885(uParam0, joaat("CS_FAMOUSGUNSLINGER_03"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], vLocal_676), (ENTITY::GET_ENTITY_HEADING(Local_375.f_4[8]) - 180f), 0, 0, 1, 1, 0, 0, 0, 0);
		PED::_0xE4C95E0AE31C6512(iLocal_220, Local_375);
	}
	if (__LIB_0__::func_272(iLocal_220, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[2 /*3*/], "FAMOUSGUNSLINGER_03", iLocal_220, 0);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(vLocal_248[2 /*3*/], ENTITY::GET_ENTITY_COORDS(Local_375.f_4[iLocal_258], true, false), ENTITY::GET_ENTITY_ROTATION(Local_375.f_4[iLocal_258], 2), 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(vLocal_248[2 /*3*/], Local_375.f_4[iLocal_258], -1);
		PED::SET_PED_CONFIG_FLAG(iLocal_220, 6, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_220, 305, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_220, 388, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_220, 189, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_220, 250, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_220, 44, true);
		__LIB_12__::func_875(uParam0, iLocal_220, "RGUN3_Slinger", 1);
		__LIB_3__::func_459(iLocal_220, 0);
		PED::_0xAE6004120C18DF97(iLocal_220, 0, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_220, 7, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_220, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_220, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_220, true, true);
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_220, joaat("WEAPON_PISTOL_MAUSER_DRUNK"), 60, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_220, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_FAMOUSGUNSLINGER_03"));
		PED::_0x406CCF555B04FAD3(iLocal_220, 1, 0.5f);
		PED::_0xAE6004120C18DF97(iLocal_220, 1, 0);
		return true;
	}
	return false;
}

bool func_619()
{
	if (!bLocal_486)
	{
		STREAMING::REQUEST_MODEL(joaat("PRIVATESTEAMER01X"), false);
		STREAMING::REQUEST_MODEL(joaat("PRIVATECOALCAR01X"), false);
		STREAMING::REQUEST_MODEL(joaat("PRIVATEBOXCAR04X"), false);
		STREAMING::REQUEST_MODEL(joaat("PRIVATEFLATCAR01X"), false);
		STREAMING::REQUEST_MODEL(joaat("PRIVATEBOXCAR01X"), false);
		STREAMING::REQUEST_MODEL(joaat("NORTHPASSENGER01X"), false);
		STREAMING::REQUEST_MODEL(joaat("PRIVATEDINING01X"), false);
		STREAMING::REQUEST_MODEL(joaat("CABOOSE01X"), false);
		STREAMING::REQUEST_MODEL(joaat("PRIVATEPASSENGER01X"), false);
		STREAMING::REQUEST_MODEL(joaat("A_M_M_RHDUPPERCLASS_01"), false);
		STREAMING::REQUEST_MODEL(joaat("A_F_M_RHDUPPERCLASS_01"), false);
		STREAMING::REQUEST_MODEL(joaat("U_M_M_RHDBARTENDER_01"), false);
		STREAMING::REQUEST_MODEL(joaat("P_GLASS01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CHAIR_PRIVATEDINING01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CS_BARRAG01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHISKEYGLASS01X"), false);
		bLocal_486 = true;
	}
	else if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("PRIVATESTEAMER01X")) && STREAMING::HAS_MODEL_LOADED(joaat("PRIVATECOALCAR01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("PRIVATEBOXCAR04X"))) && STREAMING::HAS_MODEL_LOADED(joaat("PRIVATEFLATCAR01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("PRIVATEBOXCAR01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("NORTHPASSENGER01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("PRIVATEDINING01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("CABOOSE01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("PRIVATEPASSENGER01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_RHDUPPERCLASS_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_RHDUPPERCLASS_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_RHDBARTENDER_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_GLASS01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR_PRIVATEDINING01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BARRAG01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_WHISKEYGLASS01X")))
	{
		return true;
	}
	return false;
}

bool func_620(var uParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_375))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_375))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(Local_375, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

void func_624(var uParam0, char* sParam1, int iParam2)
{
	Local_118 = Global_35;
	Local_118.f_1 = iLocal_220;
	Local_118.f_42 = { 0f, 0f, 0f };
	Local_118.f_45 = { 0f, 0f, 0f };
	Local_118.f_49 = iLocal_210;
	Local_118.f_39 = uParam0;
	Local_118.f_39.f_1 = sParam1;
	Local_118.f_39.f_2 = iParam2;
	__LIB_3__::func_775(&Local_118, 524544);
	__LIB_3__::func_775(&Local_118, 2);
}

void func_626(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
	Local_118.f_51[iParam0 /*3*/] = { vParam1 };
	Local_118.f_61[iParam0 /*3*/] = { vParam4 };
	Local_118.f_71[iParam0] = fParam7;
	Local_118.f_75[iParam0] = iParam8;
}

void func_629(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@REPOSITION@BASE");
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_65);
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_66);
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@ACTION");
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@NORMAL");
	if (!__LIB_11__::func_77(&(uParam0->f_48)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_476(268435584, 0);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_11__::func_77(&(uParam0->f_49)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_0__::func_239(uParam1, 8192))
	{
		if (uParam0->f_48 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_48, -1, 0);
		}
		if (uParam0->f_49 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_49, -1, 0);
		}
		__LIB_0__::func_240(uParam1, 8192);
	}
	if (!__LIB_3__::func_761(uParam0, 16384))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
		{
			StringCopy(&(uParam0->f_16), "DUEL_GENERAL_START", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
		{
			StringCopy(&(uParam0->f_20), "DUEL_GENERAL_DRAW", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_24)))
		{
			StringCopy(&(uParam0->f_24), "DUEL_GENERAL_CROSSHAIRS", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
		{
			StringCopy(&(uParam0->f_28), "DUEL_GENERAL_STOP", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
		{
			StringCopy(&(uParam0->f_32), "DUEL_GENERAL_END_OS", 32);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
	{
		AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_32));
	}
	HUD::_TEXT_DATABASE_REQUEST("MGDUL");
}

Vector3 func_632()
{
	return func_1115(iLocal_373);
}

void func_635(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RGUN3_S1_INT"))
	{
		func_303();
		func_317(4);
		func_337();
		if (__LIB_13__::func_14(uParam0, 1))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
	if (__LIB_13__::func_23(uParam0, "RGUN3_S1_MCS1"))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		func_310();
		func_311();
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			bLocal_599 = true;
		}
		func_312(0);
		func_317(5);
		func_337();
		func_303();
		func_310();
		PED::_0x406CCF555B04FAD3(iLocal_220, 0, 1f);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		if (!__LIB_0__::func_163(Global_35, -717627678))
		{
			__LIB_12__::func_773(0, 0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
		}
		if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
		{
			func_334(&Local_118, &Local_24);
		}
	}
}

char* func_637(var uParam0)
{
	switch (iLocal_368)
	{
		case 0:
			return "RGUN3_S1_MCS1";
		default:
			break;
	}
	return "TEMP";
}

void func_656(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_12__::func_752(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		__LIB_3__::func_120();
	}
}

void func_663(var uParam0)
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
		func_1144(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1146(uParam0);
		func_1147(uParam0);
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

bool func_688(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_27(Global_40.f_9145, 1))
	{
		__LIB_3__::func_775(uParam0, 4);
		uParam1->f_67 = 1;
		uParam0->f_89 = 3;
	}
	if (uParam0->f_89 == -1)
	{
		uParam0->f_89 = 0;
	}
	if (__LIB_0__::func_86(uParam0->f_42))
	{
		uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	}
	if (__LIB_0__::func_86(uParam0->f_45))
	{
		uParam0->f_45 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 297, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 317, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, true);
		PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, true);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 4097);
		}
		if (__LIB_3__::func_761(uParam0, 131072))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1044479);
		}
		PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, true, -1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			if (fVar0 < 28f)
			{
				__LIB_0__::func_188(2);
			}
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, true, -1, 0);
	}
	__LIB_3__::func_830(uParam1, uParam0);
	func_629(uParam0, uParam1);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	if ((iVar1 == joaat("WEAPON_UNARMED") || iVar1 != uParam0->f_48) && !__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_3__::func_809();
		__LIB_0__::func_240(uParam1, 16777216);
		__LIB_1__::func_766(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar2 = 1;
	}
	if (!__LIB_3__::func_761(uParam0, 262144))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		__LIB_1__::func_766(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, __LIB_3__::func_761(uParam0, 512), 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
	}
	__LIB_3__::func_847(uParam0->f_1);
	if (!__LIB_3__::func_358(uParam1->f_53))
	{
		uParam1->f_53 = { __LIB_3__::func_355() };
	}
	if (uParam0->f_50 == -1)
	{
		if (__LIB_3__::func_761(uParam0, 8))
		{
			if (__LIB_3__::func_761(uParam0, 512))
			{
				uParam0->f_50 = 34606;
			}
			else
			{
				uParam0->f_50 = 22798;
			}
		}
		else if (__LIB_3__::func_761(uParam0, 16))
		{
			uParam0->f_50 = 21030;
		}
	}
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_3__::func_810(uParam0, uParam1);
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_87))
	{
		uParam0->f_87 = __LIB_3__::func_776(uParam0->f_42, uParam0->f_45, 2.5f, 5f, 2f, 0);
		ITEMSET::ADD_TO_ITEMSET(uParam0->f_87, *uParam1);
	}
	return true;
}

int func_690(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_13__::func_701(uParam0, uParam1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (__LIB_3__::func_761(uParam0, 2))
	{
		return 1;
	}
	fVar0 = __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
	}
	if (!__LIB_3__::func_761(uParam0, 8388608) && !__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(uParam0->f_1, 242628503))
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
	}
	if (!__LIB_2__::func_123(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!__LIB_2__::func_123(uParam0->f_1, *uParam0, 0.99f))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) != 1)
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (__LIB_3__::func_764(uParam1))
		{
			iVar2 = __LIB_3__::func_817(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
		return 1;
	}
	if (!__LIB_0__::func_239(uParam1, 16384))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (PED::_IS_PED_CARRYING(*uParam0))
		{
			iVar4 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(*uParam0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar4, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1f, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_42, 1f, -1, 0f, 512, fVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_1, 0, -1f, -1f, -1f);
		__LIB_1__::func_474(*uParam0, &iVar3, 0, 0, 1, 1);
		__LIB_0__::func_240(uParam1, 16384);
	}
	if (!__LIB_0__::func_239(uParam1, 32768))
	{
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam0, 0, -1f, -1f, -1f);
			__LIB_1__::func_474(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		__LIB_0__::func_7(&(uParam1->f_44.f_3), 2);
		__LIB_3__::func_865(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584 /* Float: 5f */);
		__LIB_0__::func_240(uParam1, 32768);
	}
	return 0;
}

bool func_700(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	__LIB_3__::func_831(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		__LIB_13__::func_274(uParam0, uParam1);
	}
	switch (uParam1->f_56)
	{
		case 0:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
			if (__LIB_3__::func_761(uParam0, 32) || (!CAM::DOES_CAM_EXIST(uParam1->f_20[2]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[2])))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					return true;
				}
				if (!__LIB_3__::func_761(uParam0, 524288) && !TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					__LIB_13__::func_186(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
					return false;
				}
				if (TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					TASK::_0x3FEB770D8ED9047A(uParam0->f_1);
				}
				__LIB_3__::func_777(uParam0->f_89, uParam1);
				if (TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					TASK::_0x30146C25686B7836(uParam0->f_1, -1f);
					TASK::_0x59AE5CA4FFB4E378(uParam0->f_1, -1f);
				}
				TASK::_0x30146C25686B7836(*uParam0, -1f);
				TASK::_0x59AE5CA4FFB4E378(*uParam0, -1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::SET_TEXT_SCALE(0.5f, 0.5f);
				uParam1->f_69 = PAD::_0xBD629C1C4F501C80(0);
				if (uParam1->f_69)
				{
					uParam1->f_24 = __LIB_0__::func_45("DUEL_HELP_DRAW_GUNSLINGER", 10000, 0, 0, 0, 1);
				}
				else
				{
					uParam1->f_24 = __LIB_0__::func_45("DUEL_HELP_DRAW_ALT", 10000, 0, 0, 0, 1);
				}
				AUDIO::PLAY_SOUND_FRONTEND("HUD_DRAW", "HUD_DUEL_SOUNDSET", true, 0);
				if (!__LIB_3__::func_761(uParam0, 1024))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
					TASK::_0x908BB14BCE85C80E(Global_35);
					if (!__LIB_3__::func_761(uParam0, 524288))
					{
						TASK::_0x908BB14BCE85C80E(uParam0->f_1);
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, true, 50f);
					__LIB_1__::func_539();
					__LIB_1__::func_148(&(uParam1->f_35));
					uParam1->f_5 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
					if (!__LIB_3__::func_761(uParam0, 4194304))
					{
						CAM::_0x986F7A51EE3E1F92(uParam0->f_1, 1);
					}
					uParam1->f_72 = __LIB_3__::func_832(uParam0);
					PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_1, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 277, false);
					WEAPON::_0xCC9C4393523833E2(*uParam0, uParam0->f_48, WEAPON::_0xEC97101A8F311282(uParam0->f_48));
					WEAPON::SET_AMMO_IN_CLIP(*uParam0, uParam0->f_48, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, uParam0->f_48, true));
					WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar0, true, 3, false);
					if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_0xCC9C4393523833E2(*uParam0, iVar0, WEAPON::_0xEC97101A8F311282(iVar0));
						WEAPON::SET_AMMO_IN_CLIP(*uParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar0, true));
					}
				}
				__LIB_3__::func_778(uParam1, 3);
			}
			break;
		case 3:
			__LIB_3__::func_818(uParam1);
			if (__LIB_3__::func_819(uParam0, uParam1))
			{
				if (__LIB_2__::func_342(uParam1->f_24))
				{
					__LIB_0__::func_105(1);
				}
				__LIB_3__::func_833(uParam0, uParam1);
			}
			else
			{
				__LIB_3__::func_765();
				fVar1 = PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID());
				if (uParam1->f_18 < 0f)
				{
					if (uParam1->f_17 > 0.1f && (fVar1 - uParam1->f_17) == -uParam1->f_17)
					{
						uParam1->f_18 = uParam1->f_17;
					}
				}
				uParam1->f_17 = fVar1;
			}
			__LIB_3__::func_861(uParam0, uParam1);
			__LIB_19__::func_482(uParam0, uParam1);
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 33554432))
			{
				if (PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) && PLAYER::_0xCCD9B77F70D31C9D(PLAYER::PLAYER_ID()) > 1)
				{
					CAM::_0x5B637D6F3B67716A(uParam0->f_1);
					__LIB_3__::func_775(uParam0, 4194304);
				}
			}
			if (__LIB_18__::func_642(uParam0, uParam1))
			{
				EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_SEEN_PED_KILLED"), false);
				__LIB_0__::func_240(uParam1, 2097152);
				if (__LIB_0__::func_272(uParam0->f_1, 0))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
				}
				if (__LIB_2__::func_342(uParam1->f_25))
				{
					__LIB_0__::func_105(1);
				}
				switch (__LIB_3__::func_774(uParam1))
				{
					case 1:
						uParam1->f_62 = __LIB_0__::func_12();
						if (__LIB_1__::func_120(uParam1->f_62))
						{
							__LIB_3__::func_850(&(uParam0->f_1));
							__LIB_13__::func_677(uParam1->f_62);
							__LIB_3__::func_779(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
						}
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							if (__LIB_0__::func_272(uParam0->f_1, 0))
							{
								PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
								if (!__LIB_3__::func_761(uParam0, 65536))
								{
									__LIB_1__::func_864(uParam0->f_1, 0, 0);
								}
								if (!__LIB_3__::func_761(uParam0, 4194304))
								{
									CAM::_0xE3639DB78B3B5400(uParam0->f_1);
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, 30f, 30f, -1f, -1f, -1, -1);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 4);
						break;
					case 2:
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							fVar2 = 0.125f;
							if (__LIB_0__::func_272(uParam0->f_1, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (__LIB_13__::func_708(uParam0, uParam1, 0))
								{
									if (__LIB_0__::func_399(uParam0->f_1, 1, 0, 0) != joaat("WEAPON_UNARMED"))
									{
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 1, 0, 1, 0);
									}
									if (__LIB_3__::func_761(uParam0, 512))
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_left_arm");
									}
									else
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_right_arm");
									}
									fVar2 = 0.25f;
								}
								if (!__LIB_3__::func_761(uParam0, 524288))
								{
									if (TASK::_IS_PED_DUELLING(uParam0->f_1))
									{
										TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, fVar2);
									}
									else
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
									}
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							if (!__LIB_3__::func_761(uParam0, 536870912))
							{
								func_817(13, 0, 0, 0, uParam0->f_1, 0, 1065353216 /* Float: 1f */, 0);
							}
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), fVar2);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 5);
						break;
					case 3:
						__LIB_13__::func_267(uParam1);
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && (__LIB_3__::func_761(uParam0, 524288) || TASK::_IS_PED_DUELLING(uParam0->f_1)))
							{
								if (!__LIB_3__::func_761(uParam0, 524288))
								{
									TASK::_0x748D5E0D2A1A4C61(uParam0->f_1, 2f, 1);
								}
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								__LIB_0__::func_240(uParam1, 1);
								PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
								ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
								}
							}
							else
							{
								__LIB_8__::func_529(uParam0, uParam1, 4);
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									CAM::_0x5B637D6F3B67716A(uParam0->f_1);
									if (!__LIB_0__::func_27(uParam0->f_88, 128))
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
										PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
									}
								}
								__LIB_3__::func_811(uParam0, uParam1);
								__LIB_3__::func_778(uParam1, 8);
							}
						}
						else
						{
							if (__LIB_0__::func_272(Global_35, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								__LIB_13__::func_683(uParam0, uParam1);
							}
							if (!__LIB_0__::func_272(*uParam0, 9))
							{
								__LIB_3__::func_778(uParam1, 6);
							}
						}
						break;
					case 5:
						__LIB_13__::func_267(uParam1);
						if (!__LIB_3__::func_761(uParam0, 2097152))
						{
							__LIB_1__::func_864(uParam0->f_2, 0, 0);
						}
					case 4:
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), 1040187392 /* Float: 0.125f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (TASK::_IS_PED_DUELLING(uParam0->f_1))
								{
									TASK::_0xEED08A3A98B847E2(uParam0->f_1, !__LIB_3__::func_761(uParam0, 256), 1040187392 /* Float: 0.125f */);
								}
								if (!__LIB_0__::func_27(uParam0->f_88, 128))
								{
									if (__LIB_0__::func_27(uParam0->f_88, 16777216))
									{
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 0, 0, 0, 0);
										if (__LIB_0__::func_399(uParam0->f_1, 1, 0, 0) != joaat("WEAPON_MELEE_KNIFE"))
										{
											WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_1, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 4, false, 0.5f, 1f, 752097756, false, 0f, false);
										}
										if (!__LIB_0__::func_163(uParam0->f_1, joaat("SCRIPT_TASK_MELEE")))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_MELEE_KNIFE"), false, 4, true, false);
											TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 0, 0, 0);
											TASK::TASK_MELEE(uParam0->f_1, *uParam0, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
										}
									}
									else
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
								}
							}
							__LIB_0__::func_240(uParam1, 1);
							__LIB_3__::func_778(uParam1, 5);
						}
						break;
				}
			}
			break;
		case 5:
			if (__LIB_3__::func_852(uParam1, uParam0))
			{
				uParam1->f_8 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
				__LIB_3__::func_778(uParam1, 7);
			}
			break;
		case 4:
			if (__LIB_1__::func_120(uParam1->f_62))
			{
				__LIB_13__::func_677(uParam1->f_62);
			}
			if (__LIB_3__::func_291(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (__LIB_13__::func_709(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!__LIB_1__::func_120(uParam1->f_62) || __LIB_13__::func_677(uParam1->f_62)))
			{
				__LIB_3__::func_811(uParam0, uParam1);
				__LIB_3__::func_778(uParam1, 8);
				return true;
			}
			break;
		case 6:
			__LIB_3__::func_811(uParam0, uParam1);
			__LIB_3__::func_778(uParam1, 8);
			return true;
		case 7:
			__LIB_3__::func_781();
			iVar6 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_8);
			if (__LIB_3__::func_761(uParam0, 4194304) || iVar6 > 1000)
			{
				__LIB_3__::func_811(uParam0, uParam1);
				__LIB_3__::func_778(uParam1, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_735(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_375.f_4[0]) && !ENTITY::IS_ENTITY_DEAD(Local_375.f_4[0]))
	{
		VEHICLE::_0xA72B1BF3857B94D7(Local_375, 1);
		VEHICLE::SET_VEHICLE_HANDBRAKE(Local_375.f_4[0], false);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_375.f_4[0], fParam0);
		VEHICLE::_0xDD100CE1EBBF37E3(Local_375.f_4[0], 0);
		VEHICLE::_0x4182C037AA1F0091(Local_375.f_4[0], 1);
		VEHICLE::_0x160C1B5AB48AB87C(Local_375.f_4[0], 120f);
	}
}

void func_737(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_375) && !ENTITY::IS_ENTITY_DEAD(Local_375))
	{
		VEHICLE::_0xA72B1BF3857B94D7(Local_375, 1);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_375.f_4[0], fParam0);
		VEHICLE::_0x787E43477746876F(Local_375);
		VEHICLE::SET_VEHICLE_HANDBRAKE(Local_375, false);
		VEHICLE::_0xDD100CE1EBBF37E3(Local_375, 0);
		VEHICLE::_0x4182C037AA1F0091(Local_375, 0);
	}
}

void func_738(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_375) && !ENTITY::IS_ENTITY_DEAD(Local_375))
	{
		VEHICLE::_0xA72B1BF3857B94D7(Local_375, 1);
		VEHICLE::SET_TRAIN_SPEED(Local_375.f_4[0], fParam0);
		VEHICLE::_0x787E43477746876F(Local_375);
		VEHICLE::SET_VEHICLE_HANDBRAKE(Local_375, false);
		VEHICLE::_0xDD100CE1EBBF37E3(Local_375, 0);
		VEHICLE::_0x4182C037AA1F0091(Local_375, 0);
	}
}

bool func_739(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	fVar0 = MISC::ABSF((vParam0.z - vParam3.z));
	if (fVar0 <= 2f)
	{
		return true;
	}
	return false;
}

void func_745()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_375.f_4[8]))
	{
		__LIB_3__::func_573(&(uLocal_688[0]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], 0f, 3.87f, 2.13f), 0f, 0f, -45f, 2.734848f, 1.876934f, 2.420468f, "VOL_FRONT_DINNING_CART");
		__LIB_3__::func_573(&(uLocal_688[1]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], 0f, -3.92f, 2.13f), 0f, 0f, -45f, 2.734848f, 1.876934f, 2.420468f, "VOL_BACK_DINNING_CART");
		__LIB_3__::func_573(&(uLocal_688[2]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], 0f, 0f, 0f), 0f, 0f, 135.8f, 15.8f, 6f, 3f, "VOL_DINNING");
		__LIB_3__::func_573(&(uLocal_688[3]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[6], 0f, 0f, 0f), 0f, 0f, 135.8f, 15.8f, 6f, 3f, "VOL_PASSENGER_1");
		__LIB_3__::func_573(&(uLocal_688[4]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[7], 0f, 0f, 0f), 0f, 0f, 135.8f, 15.8f, 6f, 3f, "VOL_PASSENGER_2");
		PED::_0x7C00CFC48A782DC0(uLocal_688[0], Local_375.f_4[8], 0f, 4.8f, 2.13f, 0f, 0f, 0f, 2, 1);
		PED::_0x7C00CFC48A782DC0(uLocal_688[1], Local_375.f_4[8], 0f, -4.8f, 2.13f, 0f, 0f, 0f, 2, 1);
		PED::_0x7C00CFC48A782DC0(uLocal_688[2], Local_375.f_4[8], 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
		PED::_0x7C00CFC48A782DC0(uLocal_688[3], Local_375.f_4[6], 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
		PED::_0x7C00CFC48A782DC0(uLocal_688[4], Local_375.f_4[7], 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
	}
}

void func_746()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_484) && !ENTITY::IS_ENTITY_DEAD(iLocal_484))
	{
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_484, 1);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_484, 10f);
		VEHICLE::_0x787E43477746876F(iLocal_484);
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_484, false);
		VEHICLE::_0xDD100CE1EBBF37E3(iLocal_484, 0);
		VEHICLE::_0x4182C037AA1F0091(iLocal_484, 0);
	}
}

void func_747(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = __LIB_3__::func_547(iLocal_220, Global_35, 1f);
	if (iLocal_14 > 4)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		MISC::SET_BIT(&(Global_1956580.f_1), 5);
	}
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_220, true, false)) < 5f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
	}
	switch (iLocal_14)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_248[0 /*3*/]))
			{
				vLocal_248[0 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_248[0 /*3*/].f_1, 0, "pl_EnterLeft", false, true);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "FAMOUSGUNSLINGER_03", iLocal_220, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_248[0 /*3*/]);
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_248[0 /*3*/], true, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[0 /*3*/], "pl_EnterLeft");
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[0 /*3*/], "pl_EnterRight");
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[0 /*3*/], "pl_Breakout_FirstPosition");
				ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[0 /*3*/], "pl_Breakout_SecondPosition");
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_220) && bLocal_574 == 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(vLocal_248[0 /*3*/], ENTITY::GET_ENTITY_COORDS(Local_375.f_4[8], true, false), ENTITY::GET_ENTITY_ROTATION(Local_375.f_4[8], 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(vLocal_248[0 /*3*/], Local_375.f_4[8], -1);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER", Local_391[0 /*8*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER_RAG", iLocal_702, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "BARTENDER_GLASS", iLocal_699, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "GUNSLINGER_GLASS", iLocal_703, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "FAMOUSGUNSLINGER_03", iLocal_220, 0);
					if (!__LIB_0__::func_181())
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "b_PlayerArthur", true, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "ARTHUR", Global_35, 0);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "b_PlayerArthur", false, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "JOHN", Global_35, 0);
					}
					PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 1);
					iLocal_14 = 2;
				}
			}
			break;
		case 2:
			__LIB_2__::func_602(&(Local_624[0 /*17*/]), "GUN3_GREET_PROMPT", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_624[0 /*17*/]), 0, 0);
			bLocal_661 = false;
			iLocal_14 = 3;
			break;
		case 3:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[0 /*3*/], false))
			{
				if (func_1262())
				{
					if (bLocal_574)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[0 /*3*/], "Chair", iLocal_700, 0);
						ENTITY::DETACH_ENTITY(iLocal_702, true, true);
						ENTITY::DETACH_ENTITY(iLocal_699, true, true);
						ENTITY::DETACH_ENTITY(iLocal_703, true, true);
						ANIMSCENE::START_ANIM_SCENE(vLocal_248[0 /*3*/]);
					}
				}
			}
			if (bLocal_598)
			{
				iVar0 = func_1263(&iLocal_220, &iLocal_603, 4.5f, &Local_624, 0f, 3, 0, "", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			if (__LIB_0__::func_48(Global_35, iLocal_220, 4.5f, 1) && PED::IS_PED_IN_ANY_TRAIN(Global_35))
			{
				if (!bLocal_598)
				{
					__LIB_0__::func_325(&iLocal_553);
					__LIB_0__::func_325(&iLocal_554);
					__LIB_0__::func_325(&iLocal_555);
					__LIB_13__::func_692(&iLocal_551, iLocal_220, -89429847, "GUN3_BLIP");
					MAP::_BLIP_SET_MODIFIER(iLocal_551, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					if (!MAP::DOES_BLIP_EXIST(iLocal_556))
					{
						iLocal_556 = MAP::_0x3E593DF9C2962EC6(-1337945352);
						MAP::SET_BLIP_SPRITE(iLocal_556, joaat("BLIP_RC_GUNSLINGER_3"), true);
						MAP::_0x97F6F158CC5B5CA2(iLocal_220, iLocal_556);
					}
					__LIB_0__::func_769();
					func_1265(uParam0, "GUN3_OBJ_SEARCH2", 0f, 0f, 0f);
					bLocal_598 = true;
				}
				if ((!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_COVER(Global_35, false, false)) && !PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
				{
					if (!bLocal_661)
					{
						__LIB_2__::func_411(&(Local_624[0 /*17*/]), 1, 0);
						bLocal_661 = true;
					}
				}
				else if (bLocal_661)
				{
					__LIB_2__::func_411(&(Local_624[0 /*17*/]), 0, 0);
					bLocal_661 = false;
				}
			}
			else if (bLocal_661)
			{
				__LIB_2__::func_411(&(Local_624[0 /*17*/]), 0, 0);
				bLocal_661 = false;
			}
			if (iVar0 == 0)
			{
				bLocal_662 = true;
				iLocal_14 = 4;
			}
			break;
		case 4:
			__LIB_0__::func_325(&iLocal_553);
			__LIB_0__::func_325(&iLocal_554);
			__LIB_0__::func_325(&iLocal_555);
			__LIB_13__::func_692(&iLocal_551, iLocal_220, -89429847, "GUN3_BLIP");
			MAP::_BLIP_SET_MODIFIER(iLocal_551, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
			__LIB_0__::func_769();
			if (iVar1 == 3)
			{
				if (!bLocal_660)
				{
					__LIB_2__::func_480(&Local_624, 1, 1, 1, 0);
					__LIB_1__::func_480(&iLocal_220);
					bLocal_660 = true;
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_220, "RC_GUN3BARCLOSE", 0f, 0f, 0f, 0, "RGUN3");
				}
				if (__LIB_0__::func_181())
				{
					if (__LIB_12__::func_876(uParam0, "GUN3_MIDNGHT_J", 0))
					{
						iLocal_14 = 9;
					}
				}
				else if (__LIB_12__::func_876(uParam0, "GUN3_MIDNGHT_A", 0))
				{
					iLocal_14 = 9;
				}
			}
			if (iVar1 == 2)
			{
				if (!bLocal_660)
				{
					__LIB_2__::func_480(&Local_624, 1, 1, 1, 0);
					__LIB_1__::func_480(&iLocal_220);
					bLocal_660 = true;
					bLocal_663 = true;
					if (!bLocal_601)
					{
						if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
						{
							PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_220, "RC_GUN3BARCLOSE", 0f, 0f, 0f, 0, "RGUN3");
							bLocal_601 = true;
						}
					}
				}
				if (__LIB_0__::func_181())
				{
					if (__LIB_12__::func_876(uParam0, "GUN3_MIDNGHT_J", 0))
					{
						iLocal_14 = 5;
					}
				}
				else if (__LIB_12__::func_876(uParam0, "GUN3_MIDNGHT_A", 0))
				{
					iLocal_14 = 5;
				}
			}
			break;
		case 5:
			__LIB_12__::func_773(1, 1, 1, 1);
			if (!__LIB_8__::func_684("GUN3_MIDNGHT_J") && !__LIB_8__::func_684("GUN3_MIDNGHT_A"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[0 /*3*/], "pl_EnterLeft", true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "internal_loop", true, false);
				func_1265(uParam0, "GUN3_OBJ_SEARCH2", 0f, 0f, 0f);
				iLocal_14 = 6;
			}
			break;
		case 6:
			__LIB_12__::func_773(1, 1, 1, 1);
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_TurnAway", 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "internal_loop", false, false);
			}
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				if (!TASK::IS_PED_WALKING(Global_35))
				{
					if (!__LIB_2__::func_123(Global_35, iLocal_220, 0.8f))
					{
						if (!__LIB_0__::func_163(Global_35, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_220, 0, -1f, -1f, -1f);
						}
					}
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[0 /*3*/], "s_PositionTwo_Idle", 1))
			{
				bLocal_662 = false;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], vLocal_236), 1f, -1, 0.25f, 1, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[8]));
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_220, -1, 0, 51, 0);
				iLocal_14 = 8;
			}
			break;
		case 7:
			__LIB_2__::func_602(&(Local_642[0 /*17*/]), "GUN3_GREET_PROMPT", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_642[0 /*17*/]), 0, 0);
			bLocal_661 = false;
			iLocal_14 = 8;
			break;
		case 8:
			__LIB_12__::func_773(1, 1, 1, 1);
			__LIB_0__::func_769();
			ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "internal_loop", true, false);
			__LIB_2__::func_480(&Local_642, 1, 1, 1, 0);
			iLocal_14 = 9;
			break;
		case 9:
			__LIB_12__::func_773(1, 1, 1, 1);
			if (!bLocal_695)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_694))
				{
					iLocal_694 = VOLUME::_CREATE_VOLUME_BY_HASH(joaat("VOLBOX"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], 0f, 1.3f, 2.13f), 0f, 0f, -45f, 5f, 3f, 5.420468f);
				}
				else
				{
					PED::_0x7C00CFC48A782DC0(iLocal_694, Local_375.f_4[8], 0f, 1.87f, 2.13f, 0f, 0f, 0f, 2, 1);
					bLocal_695 = true;
					if (bLocal_663)
					{
						iLocal_14 = 10;
					}
				}
			}
			if (!bLocal_663)
			{
				if (!__LIB_8__::func_684("GUN3_MIDNGHT_J") && !__LIB_8__::func_684("GUN3_MIDNGHT_A"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[0 /*3*/], "pl_EnterRight", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_248[0 /*3*/], "internal_loop", true, false);
					iLocal_14 = 10;
				}
			}
			break;
		case 10:
			__LIB_12__::func_773(1, 1, 1, 1);
			if (!bLocal_601)
			{
				if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
				{
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_220, "RC_GUN3BARCLOSE", 0f, 0f, 0f, 0, "RGUN3");
					bLocal_601 = true;
				}
				else if (!__LIB_0__::func_163(Global_35, 713668775))
				{
					if (!TASK::IS_PED_WALKING(Global_35))
					{
						if (PED::IS_PED_FACING_PED(Global_35, iLocal_220, 45f))
						{
							PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_220, "RC_GUN3BARCLOSE", 0f, 0f, 0f, 0, "RGUN3");
							bLocal_601 = true;
						}
					}
				}
			}
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				if (!TASK::IS_PED_WALKING(Global_35))
				{
					if (!__LIB_2__::func_123(Global_35, iLocal_220, 0.8f))
					{
						if (!__LIB_0__::func_163(Global_35, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_220, 0, -1f, -1f, -1f);
						}
					}
				}
			}
			else if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				PED::SET_PED_DESIRED_HEADING(Global_35, __LIB_3__::func_978(Global_35, iLocal_220, 1));
			}
			break;
	}
}

bool func_756()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_375.f_4[6]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Local_375.f_4[6], 1217.83f, -1297.43f, 75.9f, 80f, 80f, 80f, false, true, 0))
	{
		return true;
	}
	return false;
}

void func_763()
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
	__LIB_13__::func_692(&iLocal_551, iLocal_220, -89429847, "GUN3_BLIP");
	MAP::_BLIP_SET_MODIFIER(iLocal_551, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	func_1277();
	__LIB_14__::func_31(0);
}

void func_765(var uParam0)
{
	func_1279();
	func_1280();
	func_313(uParam0, 0);
	if (iLocal_373 == 4 || iLocal_372 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_375.f_4[iLocal_258]))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_220, Local_375.f_4[iLocal_258]))
			{
				bLocal_567 = true;
			}
			if (bLocal_567)
			{
				if (!__LIB_0__::func_75(&uLocal_704))
				{
					__LIB_1__::func_148(&uLocal_704);
				}
				if (!ANIMSCENE::_0x1F0E401031E20146(vLocal_248[1 /*3*/], "pl_BillyEscape"))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_375.f_4[iLocal_258]))
					{
						if (func_739(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iLocal_220, true, false)) && !PED::IS_PED_CLIMBING(Global_35))
						{
							CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[1 /*3*/], false))
							{
								if (__LIB_0__::func_265(&uLocal_704) > 2.09f && __LIB_0__::func_265(&uLocal_704) <= 2.4f)
								{
									__LIB_0__::func_37(&uLocal_704);
									iLocal_372 = 3;
									__LIB_13__::func_667(&iLocal_371, 3);
								}
								else if (__LIB_0__::func_265(&uLocal_704) > 3.935f && __LIB_0__::func_265(&uLocal_704) <= 4.1f)
								{
									__LIB_0__::func_37(&uLocal_704);
									iLocal_372 = 3;
									__LIB_13__::func_667(&iLocal_371, 3);
								}
								else if (__LIB_0__::func_48(Global_35, iLocal_220, 10f, 1) && __LIB_0__::func_265(&uLocal_704) > 4.1f)
								{
									__LIB_0__::func_37(&uLocal_704);
									iLocal_372 = 3;
									__LIB_13__::func_667(&iLocal_371, 3);
								}
							}
						}
					}
				}
				else
				{
					if (!bLocal_596)
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_220, 1);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_220);
						bLocal_596 = true;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_220, Global_35, 1, 1))
					{
						TASK::CLEAR_PED_TASKS(iLocal_220, true, false);
						ENTITY::_SET_ENTITY_HEALTH(iLocal_220, 0, 0);
					}
					if (__LIB_0__::func_48(Global_35, iLocal_220, 8f, 1) && __LIB_0__::func_272(iLocal_220, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
					}
					bLocal_581 = true;
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_248[1 /*3*/]) > 7.4f)
					{
						__LIB_1__::func_864(iLocal_220, 1, 0);
					}
				}
			}
		}
	}
}

void func_766(char* sParam0)
{
	func_1281(sParam0, 1);
	iLocal_245 = 4;
}

void func_767(char* sParam0)
{
	iLocal_245 = 3;
	__LIB_13__::func_692(&iLocal_221, iLocal_220, 408396114, sParam0);
	MAP::_BLIP_SET_MODIFIER(iLocal_221, 942020339);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	if (__LIB_0__::func_272(iLocal_220, 0))
	{
		if (!__LIB_1__::func_200(86) && !__LIB_1__::func_200(85))
		{
			TASK::TASK_COMBAT_PED(iLocal_220, Global_35, 33554432, 16);
		}
	}
}

void func_768()
{
	if (iLocal_373 >= 5)
	{
		return;
	}
	else if (iLocal_373 != 0)
	{
		if (Local_448[iLocal_373 /*7*/].f_5 == 2)
		{
			if (__LIB_0__::func_163(iLocal_220, -1207763510))
			{
				func_1277();
			}
			else
			{
				func_1282();
			}
		}
		else if (Local_448[iLocal_373 /*7*/].f_5 == 3)
		{
			if (!__LIB_0__::func_163(iLocal_220, 608260166))
			{
				func_1277();
			}
		}
		else if (Local_448[iLocal_373 /*7*/].f_5 == 0)
		{
			if (__LIB_0__::func_266(iLocal_220, func_632(), Local_448[iLocal_373 /*7*/].f_4, 1, 1))
			{
				func_1277();
			}
			else if (!__LIB_0__::func_163(iLocal_220, 713668775))
			{
				func_1282();
			}
		}
		else if (Local_448[iLocal_373 /*7*/].f_5 == 1)
		{
			if (__LIB_0__::func_266(iLocal_220, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[6], 0f, 10.45f, 0.87f), 1.8f, 1, 1))
			{
				func_1277();
			}
			else if (!__LIB_0__::func_163(iLocal_220, 242628503))
			{
				func_1282();
			}
		}
	}
}

void func_769(var uParam0)
{
	if (iLocal_369 != 2)
	{
		if (iLocal_487 == -1)
		{
			if (!__LIB_6__::func_904())
			{
				iLocal_487 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_487) > 5000)
		{
			if (!__LIB_0__::func_270())
			{
				__LIB_12__::func_876(uParam0, "GUN3_WAITING", 0);
				iLocal_487 = -1;
			}
		}
	}
	else
	{
		iLocal_372 = 3;
	}
}

void func_772()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (CAM::DOES_CAM_EXIST(Local_24.f_20[iVar0]))
		{
			if (!MISC::IS_BIT_SET(iLocal_490, iVar0))
			{
				MISC::SET_BIT(&iLocal_490, iVar0);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&iLocal_490, iVar0);
		}
		iVar0++;
	}
}

bool func_773(char* sParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar1 = func_334(&Local_118, &Local_24);
		if (Local_24.f_56 == 3 && !__LIB_0__::func_75(&uLocal_222))
		{
			__LIB_1__::func_283(&uLocal_222, 0);
		}
		else if (Local_24.f_56 == 4)
		{
			__LIB_0__::func_37(&uLocal_222);
		}
	}
	bVar2 = false;
	if (bVar1)
	{
		iVar0 = __LIB_3__::func_774(&Local_24);
		if (bVar2)
		{
			iVar0 = 4;
		}
		if (iVar0 == 1)
		{
			func_766(sParam0);
			return true;
		}
		else if (iVar0 == 2)
		{
			func_1283(sParam0);
			return true;
		}
		else if (iVar0 == 4)
		{
			func_767(sParam0);
			if (bVar2)
			{
				__LIB_6__::func_726(&(Local_24.f_61), 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				__LIB_3__::func_811(&Local_118, &Local_24);
				__LIB_13__::func_715(&Local_118, &Local_24);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		else if (iVar0 == 3)
		{
			if (bVar2 || __LIB_0__::func_272(Global_35, 0))
			{
				func_767(sParam0);
				__LIB_6__::func_726(&(Local_24.f_61), 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				__LIB_3__::func_811(&Local_118, &Local_24);
				__LIB_13__::func_715(&Local_118, &Local_24);
				if (__LIB_0__::func_272(Global_35, 0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				return true;
			}
		}
	}
	return false;
}

void func_777(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_220))
	{
		__LIB_0__::func_325(&iLocal_221);
		func_1281(sParam0, 1);
		iLocal_245 = 4;
	}
}

bool func_779(char* sParam0)
{
	if (__LIB_0__::func_272(iLocal_220, 0))
	{
		if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_220, true, false), 1f) && __LIB_5__::func_621())
		{
			iLocal_245 = 6;
			return true;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_220))
	{
		func_1281(sParam0, 0);
		iLocal_245 = 4;
	}
	return false;
}

void func_780()
{
	if ((!__LIB_1__::func_25(Global_1347702[85 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1347702[86 /*49*/].f_15, 1)) && !__LIB_1__::func_25(Global_1347702[87 /*49*/].f_15, 1))
	{
		func_1288();
	}
	else if (!bLocal_214)
	{
		__LIB_0__::func_45("CAMERA_HELP", 10000, 0, 0, 0, 1);
		bLocal_214 = true;
	}
}

void func_782()
{
	func_1289();
	__LIB_13__::func_695(&uLocal_216);
	__LIB_13__::func_695(&uLocal_217);
	__LIB_13__::func_695(&uLocal_218);
	__LIB_13__::func_695(&uLocal_219);
}

bool func_784(var uParam0, char* sParam1, float fParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::DOES_ENTITY_EXIST(iLocal_220))
	{
		__LIB_13__::func_692(&iLocal_221, iLocal_220, 408396114, sParam1);
		MAP::_BLIP_SET_MODIFIER(iLocal_221, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_221, sParam1);
		if (!__LIB_0__::func_75(&uLocal_239))
		{
			if (__LIB_5__::func_621() || bLocal_226)
			{
				if (__LIB_0__::func_48(Global_35, iLocal_220, 2.5f, 1))
				{
					bLocal_226 = true;
					iVar0 = func_1291(iLocal_220, &uLocal_225);
					if (iVar0 == 2)
					{
						bLocal_226 = false;
						if (func_1292(uParam0, fParam2))
						{
							__LIB_1__::func_283(&uLocal_239, 0);
						}
					}
					else if (iVar0 == 3)
					{
						__LIB_13__::func_693(uParam0, 0, 0, 1);
						__LIB_0__::func_37(&uLocal_242);
						bLocal_226 = false;
					}
					else if (iVar0 == 0)
					{
						if (!__LIB_0__::func_75(&uLocal_242))
						{
							__LIB_1__::func_283(&uLocal_242, 0);
						}
						else if (__LIB_0__::func_265(&uLocal_242) > 3f)
						{
							__LIB_13__::func_693(uParam0, 0, 0, 1);
							__LIB_0__::func_37(&uLocal_242);
							bLocal_226 = false;
						}
					}
				}
				else
				{
					__LIB_13__::func_693(uParam0, 0, 1, 0);
					bLocal_226 = false;
				}
			}
		}
		else if ((__LIB_0__::func_265(&uLocal_239) > 1.5f && !_NAMESPACE77::_0xC5C395C60B542A3C(2)) || __LIB_0__::func_265(&uLocal_239) > 8f)
		{
			__LIB_1__::func_26(0);
			return true;
		}
	}
	return false;
}

void func_817(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_1316(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1316(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_821(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_821(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_716(28);
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
				func_1357(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			func_1366(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_821(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_821(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_821(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_821(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_821(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_821(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_821(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_716(24);
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
					func_821(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_821(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_18__::func_624(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_278(iParam0);
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
				func_821(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_823()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1403();
	func_1404();
	func_1405();
	func_1406();
	func_1407();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_824(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1410(iParam0, 1, 1, -142743235, 1);
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

void func_859()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1444(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_861(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_46(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_28())
	{
		return 0;
	}
	if (!func_1450(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_1451(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

void func_863(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!Global_1879514.f_11)
	{
		iVar0 = __LIB_1__::func_753();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (__LIB_0__::func_700(Global_1879514.f_1) == 1)
			{
				func_861(5, 1);
			}
			else if (__LIB_0__::func_700(Global_1879514.f_1) == 8 && (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 1) || __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_861(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_918(int iParam0)
{
	struct<2> Var0;
	if (iParam0 == 1)
	{
		if (!bLocal_215)
		{
			bLocal_215 = true;
			Var0 = 1;
			Var0.f_1 = joaat("WEAPON_KIT_CAMERA");
			HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
		}
	}
	else if (bLocal_215)
	{
		bLocal_215 = false;
		HUD::_0x160825DADF1B04B3();
	}
}

int func_980(var uParam0, int iParam1, int iParam2)
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
		return func_980(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

struct<7> func_1035(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	struct<7> Var0;
	Var0 = Local_375.f_4[iParam0];
	Var0.f_1 = { vParam1 };
	Var0.f_4 = fParam4;
	Var0.f_5 = iParam5;
	return Var0;
}

Vector3 func_1115(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_448[iParam0 /*7*/]))
	{
		return 0f, 0f, 0f;
	}
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_448[iParam0 /*7*/], Local_448[iParam0 /*7*/].f_1);
}

void func_1144(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1647();
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
						__LIB_0__::func_151(__LIB_0__::func_23());
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

void func_1146(var uParam0)
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
			func_1655(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1655(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1147(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1655(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1262()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	STREAMING::REQUEST_MODEL(joaat("P_CHAIR_PRIVATEDINING01X"), false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR_PRIVATEDINING01X")))
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[8], 1.71f, 2.21f, 1.38f) };
		if (PROPSET::_0x8F3333F0A6900B3C(Local_375, 8) && bLocal_574)
		{
			iLocal_701 = PROPSET::_0xCFC0BD09BB1B73FF(Local_375.f_4[8]);
			if (PROPSET::_DOES_PROPSET_EXIST(iLocal_701))
			{
				iVar4 = 0;
				iVar0 = ITEMSET::CREATE_ITEMSET(true);
				if (ITEMSET::IS_ITEMSET_VALID(iVar0))
				{
					iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_701, iVar0, joaat("P_CHAIR_PRIVATEDINING01X"), true, false);
				}
				if (iVar4 > 0)
				{
					iVar5 = 0;
					iVar5 = 0;
					while (iVar5 < iVar4)
					{
						iVar6 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
						if (ENTITY::DOES_ENTITY_EXIST(iVar6))
						{
							if (__LIB_0__::func_175(vVar1, ENTITY::GET_ENTITY_COORDS(iVar6, true, false), 1056964608 /* Float: 0.5f */, 1))
							{
								iLocal_700 = iVar6;
								ITEMSET::DESTROY_ITEMSET(iVar0);
								return true;
							}
						}
						iVar5++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar0);
					return false;
				}
			}
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	return false;
}

int func_1263(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_18__::func_643(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_1263(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_18__::func_616(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_18__::func_644(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*iParam0, iParam1, uParam3))
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_18__::func_617(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_18__::func_644(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_18__::func_616(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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

void func_1265(var uParam0, char* sParam1, vector3 vParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sParam1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_148(&(uParam0->f_2594));
		uParam0->f_2600 = { vParam2 };
		uParam0->f_746 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_2600, Global_36, true);
	}
}

void func_1277()
{
	int iVar0;
	iVar0 = iLocal_373;
	iVar0++;
	iLocal_373 = iVar0;
	if (iLocal_373 >= 5)
	{
		iLocal_373 = 4;
		__LIB_14__::func_31(1);
		return;
	}
	func_1282();
}

void func_1279()
{
	if (bLocal_581)
	{
		if (!__LIB_0__::func_272(iLocal_220, 0))
		{
			__LIB_13__::func_667(&iLocal_371, 3);
			__LIB_6__::func_313(&iLocal_489, 4);
			return;
		}
	}
}

void func_1280()
{
	switch (iLocal_246)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_248[1 /*3*/]))
			{
				vLocal_248[1 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(vLocal_248[1 /*3*/].f_1, 0, "pl_RunUp_DLG", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(vLocal_248[1 /*3*/]);
				iLocal_246 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_248[1 /*3*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_220))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(vLocal_248[1 /*3*/], ENTITY::GET_ENTITY_COORDS(Local_375.f_4[4], true, false), ENTITY::GET_ENTITY_ROTATION(Local_375.f_4[4], 2), 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_248[1 /*3*/], "FAMOUSGUNSLINGER_03", iLocal_220, 0);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(vLocal_248[1 /*3*/], Local_375.f_4[4], -1);
					ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_248[1 /*3*/], "pl_BillyEscape");
					iLocal_246 = 2;
				}
			}
			break;
		case 2:
			if (bLocal_567 == 1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_248[1 /*3*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(vLocal_248[1 /*3*/]);
					iLocal_246 = 3;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x8D81E7824B7753F7(vLocal_248[1 /*3*/], "s_Idles", 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_248[1 /*3*/]) > 22f)
				{
					WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_220, true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_248[1 /*3*/], "pl_BillyEscape", true);
					iLocal_246 = 4;
				}
			}
			break;
	}
}

void func_1281(char* sParam0, bool bParam1)
{
	__LIB_3__::func_608(iLocal_220);
	__LIB_13__::func_692(&iLocal_221, iLocal_220, 408396114, sParam0);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_221, sParam0);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_16.f_2)))
		{
			__LIB_3__::func_353(&(Local_16.f_2), 0);
		}
	}
}

void func_1282()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(Local_448[iLocal_373 /*7*/]))
	{
		return;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_448[iLocal_373 /*7*/], Local_448[iLocal_373 /*7*/].f_1) };
	vVar3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[iLocal_373]) };
	if (Local_448[iLocal_373 /*7*/].f_5 == 0)
	{
		if (!__LIB_0__::func_163(iLocal_220, -1207763510))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_220, vVar0, 2f, -1, (0.25f * 2f), 1, vVar3.z);
		}
	}
	else if (Local_448[iLocal_373 /*7*/].f_5 == 1)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_220, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_220, false);
		PED::FORCE_PED_MOTION_STATE(iLocal_220, joaat("MOTIONSTATE_SPRINT"), false, 0, false);
		PED::_0x2208438012482A1A(iLocal_220, false, false);
		if (!__LIB_0__::func_163(iLocal_220, 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar6);
			TASK::OPEN_SEQUENCE_TASK(&iVar6);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[7], 0f, 4.79f, 1.04f), 3f, -1, 0.25f, 1, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[7]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_375.f_4[6], 0f, 10.45f, 0.87f), 3f, -1, 0.25f, 1, ENTITY::GET_ENTITY_HEADING(Local_375.f_4[6]));
			TASK::CLOSE_SEQUENCE_TASK(iVar6);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_220, iVar6);
			TASK::CLEAR_SEQUENCE_TASK(&iVar6);
		}
	}
	else if (Local_448[iLocal_373 /*7*/].f_5 == 2)
	{
		TASK::TASK_CLIMB(iLocal_220, true);
	}
	else if (Local_448[iLocal_373 /*7*/].f_5 == 3)
	{
		TASK::_TASK_JUMP_2(iLocal_220, func_632(), Local_448[iLocal_373 /*7*/]);
	}
}

void func_1283(char* sParam0)
{
	func_1780(sParam0);
	if (__LIB_0__::func_272(iLocal_220, 0))
	{
		if ((!__LIB_1__::func_200(85) && !__LIB_1__::func_200(86)) && !__LIB_1__::func_200(87))
		{
			TASK::CLEAR_PED_TASKS(iLocal_220, true, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_220, 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_220, true);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	iLocal_245 = 2;
}

void func_1288()
{
	if (__LIB_13__::func_691())
	{
		iLocal_212 = 0;
		func_782();
		func_918(0);
		if (!bLocal_214)
		{
			bLocal_214 = true;
		}
	}
	else if (__LIB_8__::func_954() && Global_1935496.f_30 == joaat("WEAPON_KIT_CAMERA"))
	{
		iLocal_212 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB3", &uLocal_219);
		func_1783(3);
		func_918(1);
	}
	else if (__LIB_8__::func_954() && Global_1935496.f_30 != joaat("WEAPON_KIT_CAMERA"))
	{
		iLocal_212 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB2", &uLocal_218);
		func_1783(2);
		func_918(1);
	}
	else if (__LIB_4__::func_365())
	{
		iLocal_212 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB1", &uLocal_217);
		func_1783(1);
		func_918(0);
	}
	else if (iLocal_212 != joaat("WEAPON_KIT_CAMERA"))
	{
		__LIB_13__::func_696("CAMERA_BCRUMB0", &uLocal_216);
		func_1783(0);
		func_918(0);
	}
	else
	{
		func_782();
		func_918(0);
	}
}

void func_1289()
{
	if (bLocal_213)
	{
		__LIB_3__::func_760();
		iLocal_211 = -1;
		bLocal_213 = false;
	}
}

int func_1291(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar5;
	var uVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	if (*uParam1 == 0)
	{
		vLocal_227 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0.1f, 0f) };
		vLocal_230 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.057f, 0.1f, 0f) };
		*uParam1 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vLocal_230, vLocal_227, 0.01f, 90, Global_35, 4);
		return 0;
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam1, &iVar1, &vVar5, &uVar2, &uVar8);
		if (iVar0 == 2)
		{
			if (iVar1 > 0)
			{
				vVar9 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.057f, 0.1f, 0f) };
				vVar12.x = (vVar9.x - vLocal_230.x);
				vVar12.f_1 = (vVar9.y - vLocal_230.y);
				vVar12.f_2 = (vVar9.z - vLocal_230.z);
				fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0f, 0f), vVar5 + vVar12, true);
				if (fVar15 <= 0.2f)
				{
					if (CAM::IS_SPHERE_VISIBLE(PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0.15f, 0f), 0.01f))
					{
						*uParam1 = 0;
						return 2;
					}
					else
					{
						*uParam1 = 0;
						return 3;
					}
				}
				else
				{
					*uParam1 = 0;
					return 3;
				}
			}
			*uParam1 = 0;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1292(var uParam0, float fParam1)
{
	if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_220, true, false), 1f))
	{
		__LIB_13__::func_693(uParam0, 1, 0, 0);
		return false;
	}
	if (!__LIB_0__::func_48(Global_35, iLocal_220, fParam1, 1))
	{
		__LIB_13__::func_693(uParam0, 0, 1, 0);
		return false;
	}
	if (!CAM::IS_SPHERE_VISIBLE(PED::GET_PED_BONE_COORDS(iLocal_220, 21030, 0f, 0f, 0.125f), 0.125f))
	{
		__LIB_13__::func_693(uParam0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_1316(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_0__::func_934(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_0__::func_935(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_861(10, 1);
	}
}

int func_1357(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = func_1451(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		__LIB_1__::func_113(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	__LIB_1__::func_430(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1366(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1357(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_1357(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_1357(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_1357(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_1357(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_1357(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_1357(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_1357(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_1357(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_1357(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_1357(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_1357(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_1357(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!__LIB_1__::func_202())
			{
				func_1357(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_1357(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_1357(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_1357(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_1357(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_1357(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_1357(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_1357(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_1357(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_1357(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_1357(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_1357(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_1357(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1403()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1887(0);
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
	func_1887(1);
}

void func_1404()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_821(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1405()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1890(0);
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
	func_1890(1);
}

void func_1406()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1890(0);
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
	func_1890(1);
}

void func_1407()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_821(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_821(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1410(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1410(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1410(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1410(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1444(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1929(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_821(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1450(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_46(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			Jump @463; //curOff = 301
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			Jump @463; //curOff = 320
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			Jump @463; //curOff = 339
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			Jump @463; //curOff = 358
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			Jump @463; //curOff = 377
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			Jump @463; //curOff = 396
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			Jump @463; //curOff = 415
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			Jump @463; //curOff = 434
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			Jump @463; //curOff = 453
			return false;
			return true;
		}
int func_1451(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && __LIB_1__::func_707(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (__LIB_0__::func_144(iVar25, 0) && __LIB_0__::func_192(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1647()
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
	iVar0 = func_2031(6291456, 0);
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

void func_1655(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1655(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1655(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1780(char* sParam0)
{
	__LIB_3__::func_608(iLocal_220);
	iLocal_221 = __LIB_8__::func_778(408396114, iLocal_220, 1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_221, sParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_16.f_2)))
	{
		__LIB_3__::func_353(&(Local_16.f_2), 0);
	}
}

void func_1783(int iParam0)
{
	if (!bLocal_213)
	{
		__LIB_3__::func_834(4);
		bLocal_213 = true;
	}
	if (iLocal_211 != iParam0)
	{
		if (iLocal_211 > iParam0)
		{
			__LIB_13__::func_671();
		}
		iLocal_211 = iParam0;
		__LIB_3__::func_787(iLocal_211);
	}
}

void func_1887(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_821(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2183(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_824(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1410(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2188(Var0);
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

void func_1890(bool bParam0)
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
		func_821(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_821(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1410(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1410(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1410(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1929(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1929(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1929(iVar63, -915411861, 1, 0, 0));
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

int func_2031(int iParam0, int iParam1)
{
	var uVar0;
	return func_2242(&uVar0, iParam0, iParam1);
}

void func_2183(int iParam0)
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
	func_1410(iParam0, 1, 1, -142743235, 1);
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
		func_1410(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2188(struct<6> Param0)
{
	if (!func_2350(Param0.f_4, 1))
	{
	}
	if (!func_2350(Param0, 1))
	{
	}
	if (!func_2350(Param0.f_2, 1))
	{
	}
	if (!func_2350(Param0.f_5, 1))
	{
	}
	if (!func_2350(Param0.f_3, 1))
	{
	}
	if (!func_2350(Param0.f_1, 1))
	{
	}
}

int func_2242(var uParam0, int iParam1, int iParam2)
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
		return func_2242(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2350(int iParam0, int iParam1)
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
				if (func_2350(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2350(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2350(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2350(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

