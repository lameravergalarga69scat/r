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
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	struct<18> Local_18 = { 0, -1474589744, 391506844, -294392875, 0, 0, 0, 0, 0, 0, 1050253722, 1036831949, 1090519040, 1092616192, 1065353216, 1065353216, 1073741824, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1097859072;
	var uLocal_54 = 1000;
	var uLocal_55 = 1067450368;
	var uLocal_56 = 5000;
	var uLocal_57 = 42;
	var uLocal_58 = 1103626240;
	var uLocal_59 = 1077936128;
	var uLocal_60 = 1106247680;
	var uLocal_61 = 1103101952;
	var uLocal_62 = 1097859072;
	var uLocal_63 = 1103626240;
	var uLocal_64 = 0;
	struct<4> Local_65 = { 0, 0, 0, 0 } ;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<4> Local_77 = { 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<4> Local_89 = { 0, 0, 0, 0 } ;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<4> Local_113 = { 0, 0, 0, 0 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<4> Local_125 = { 0, 0, 0, 0 } ;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	bool bLocal_143 = false;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	bool bLocal_153 = false;
	bool bLocal_154 = false;
	bool bLocal_155 = false;
	bool bLocal_156 = false;
	bool bLocal_157 = false;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	bool bLocal_167 = false;
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	bool bLocal_170 = false;
	bool bLocal_171 = false;
	int iLocal_172[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_179[2] = { 0, 0 };
	int iLocal_182 = 0;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	struct<22> Local_198 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_220 = 3;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	struct<22> Local_223 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	struct<22> Local_248 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_270 = 3;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282[2] = { 0, 0 };
	int iLocal_285[5] = { 0, 0, 0, 0, 0 };
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310[2] = { 0, 0 };
	int iLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 1073741824;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 1;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1106247680;
	var uLocal_340 = 1067450368;
	var uLocal_341 = 0;
	var uLocal_342 = 1092616192;
	var uLocal_343 = 1112014848;
	var uLocal_344 = 1106247680;
	var uLocal_345 = 1101529088;
	var uLocal_346 = 1101004800;
	var uLocal_347 = 1084227584;
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
	struct<17> Local_374[1];
	int iLocal_392 = 0;
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = -1;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 1073741824;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 1106247680;
	var uLocal_419 = 1067450368;
	var uLocal_420 = 0;
	var uLocal_421 = 1092616192;
	var uLocal_422 = 1112014848;
	var uLocal_423 = 1106247680;
	var uLocal_424 = 1101529088;
	var uLocal_425 = 1101004800;
	var uLocal_426 = 1084227584;
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
	struct<17> Local_453[1];
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	char* sLocal_479 = NULL;
	char* sLocal_480 = NULL;
	char* sLocal_481 = NULL;
	char* sLocal_482 = NULL;
	char* sLocal_483 = NULL;
	char* sLocal_484 = NULL;
	char* sLocal_485 = NULL;
	char* sLocal_486 = NULL;
	char* sLocal_487 = NULL;
	char* sLocal_488 = NULL;
	char* sLocal_489 = NULL;
	char* sLocal_490 = NULL;
	char* sLocal_491 = NULL;
	char* sLocal_492 = NULL;
	char* sLocal_493 = NULL;
	char* sLocal_494 = NULL;
	char* sLocal_495 = NULL;
	char* sLocal_496 = NULL;
	char* sLocal_497 = NULL;
	char* sLocal_498 = NULL;
	char* sLocal_499 = NULL;
	char* sLocal_500 = NULL;
	char* sLocal_501 = NULL;
	char* sLocal_502 = NULL;
	char* sLocal_503 = NULL;
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
	var uLocal_561[2] = { 0, 0 };
	vector3 vLocal_564 = { 0f, 0f, 0f };
	float fLocal_567 = 0f;
	vector3 vLocal_568 = { 0f, 0f, 0f };
	float fLocal_571 = 0f;
	vector3 vLocal_572 = { 0f, 0f, 0f };
	vector3 vLocal_575 = { 0f, 0f, 0f };
	float fLocal_578 = 0f;
	vector3 vLocal_579 = { 0f, 0f, 0f };
	float fLocal_582 = 0f;
	vector3 vLocal_583 = { 0f, 0f, 0f };
	float fLocal_586 = 0f;
	vector3 vLocal_587 = { 0f, 0f, 0f };
	float fLocal_590 = 0f;
	vector3 vLocal_591 = { 0f, 0f, 0f };
	vector3 vLocal_594 = { 0f, 0f, 0f };
	float fLocal_597 = 0f;
	vector3 vLocal_598 = { 0f, 0f, 0f };
	float fLocal_601 = 0f;
	vector3 vLocal_602 = { 0f, 0f, 0f };
	vector3 vLocal_605 = { 0f, 0f, 0f };
	float fLocal_608 = 0f;
	vector3 vLocal_609 = { 0f, 0f, 0f };
	float fLocal_612 = 0f;
	vector3 vLocal_613[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_620[2] = { 0f, 0f };
	vector3 vLocal_623[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_642[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_649[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_668[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_675 = { 0f, 0f, 0f };
	vector3 vLocal_678 = { 0f, 0f, 0f };
	vector3 vLocal_681 = { 0f, 0f, 0f };
	vector3 vLocal_684 = { 0f, 0f, 0f };
	float fLocal_687 = 0f;
	vector3 vLocal_688 = { 0f, 0f, 0f };
	vector3 vLocal_691 = { 0f, 0f, 0f };
	float fLocal_694 = 0f;
	vector3 vLocal_695 = { 0f, 0f, 0f };
	float fLocal_698 = 0f;
	vector3 vLocal_699 = { 0f, 0f, 0f };
	float fLocal_702 = 0f;
	vector3 vLocal_703 = { 0f, 0f, 0f };
	vector3 vLocal_706 = { 0f, 0f, 0f };
	vector3 vLocal_709 = { 0f, 0f, 0f };
	vector3 vLocal_712 = { 0f, 0f, 0f };
	vector3 vLocal_715 = { 0f, 0f, 0f };
	vector3 vLocal_718 = { 0f, 0f, 0f };
	vector3 vLocal_721 = { 0f, 0f, 0f };
	vector3 vLocal_724 = { 0f, 0f, 0f };
	vector3 vLocal_727 = { 0f, 0f, 0f };
	vector3 vLocal_730 = { 0f, 0f, 0f };
	vector3 vLocal_733 = { 0f, 0f, 0f };
	vector3 vLocal_736 = { 0f, 0f, 0f };
	vector3 vLocal_739 = { 0f, 0f, 0f };
	vector3 vLocal_742 = { 0f, 0f, 0f };
	vector3 vLocal_745 = { 0f, 0f, 0f };
	vector3 vLocal_748 = { 0f, 0f, 0f };
	vector3 vLocal_751 = { 0f, 0f, 0f };
	vector3 vLocal_754 = { 0f, 0f, 0f };
	vector3 vLocal_757 = { 0f, 0f, 0f };
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	char* sLocal_815[3] = { NULL, NULL, NULL };
	int iLocal_819[3] = { 0, 0, 0 };
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	struct<9> Local_825[11];
	float fLocal_925 = 0f;
	struct<6> Local_926[13];
	bool bLocal_1005 = false;
	bool bLocal_1006 = false;
	vector3 vLocal_1007 = { 0f, 0f, 0f };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	bool bLocal_1014 = false;
	bool bLocal_1015 = false;
	bool bLocal_1016 = false;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	vector3 vLocal_1019 = { 0f, 0f, 0f };
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	int iLocal_1025 = 0;
	bool bLocal_1026 = false;
	bool bLocal_1027 = false;
	float fLocal_1028 = 0f;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	bool bLocal_1032 = false;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	bool bLocal_1036 = false;
	int iLocal_1037 = 0;
	vector3 vLocal_1038 = { 0f, 0f, 0f };
	int iLocal_1041 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	bLocal_161 = true;
	bLocal_167 = true;
	fLocal_185 = 0f;
	fLocal_187 = 1000f;
	iLocal_273 = joaat("P_FISHINGPOLE01X");
	iLocal_274 = joaat("P_FISHINGPOLE02X");
	iLocal_275 = joaat("P_STICK02X");
	iLocal_276 = joaat("P_CS_SOCK01X");
	iLocal_277 = joaat("P_CS_FLOWERNECKLACE");
	iLocal_278 = joaat("S_INV_YARROW01CX");
	iLocal_279 = joaat("S_INV_YARROW01X");
	iLocal_280 = joaat("P_CS_BOOK03X");
	iLocal_281 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
	sLocal_479 = "NULL";
	sLocal_480 = "NULL";
	sLocal_481 = "p_cs_flowernecklace";
	sLocal_482 = "P_CS_FLOWERS01X";
	sLocal_483 = "s_inv_yarrow01cx";
	sLocal_484 = "p_fishingpole01x";
	sLocal_485 = "P_STICK02X";
	sLocal_486 = "P_CS_SOCK01X";
	sLocal_490 = "mini_games@fishing@shore_child";
	sLocal_491 = "script_rc@abi1@ig@rabi1_bait_rod_jack_child";
	sLocal_492 = "base_2h_2_idle";
	sLocal_493 = "base_2h_idle_a";
	sLocal_494 = "bait_rod_jack_child_ig_jackmarston";
	sLocal_495 = "bait_rod_jack_child_p_fishingpole01x";
	sLocal_496 = "idle_2_base_2h";
	sLocal_497 = "cast_intro";
	sLocal_498 = "cast_action";
	sLocal_499 = "base_reel_idle_a";
	sLocal_500 = "base_reel_idle_c";
	sLocal_501 = "base_reel_idle_d";
	sLocal_502 = "base_reel_idle_e";
	sLocal_503 = "reel_in";
	vLocal_564 = { -147.8866f, -14.662f, 95.3018f };
	fLocal_567 = 96.3018f;
	vLocal_568 = { -121.3928f, -15.9465f, 95.1901f };
	fLocal_571 = 164.8433f;
	vLocal_572 = { -148.3965f, -14.4253f, 95.4101f };
	vLocal_575 = { -151.3511f, -17.5629f, 95.2518f };
	fLocal_578 = 311.6641f;
	vLocal_579 = { -166.702f, -34.8575f, 93.8508f };
	fLocal_582 = 267.9794f;
	vLocal_583 = { -131.2237f, -31.2469f, 95.1752f };
	fLocal_586 = 209.4253f;
	vLocal_587 = { -472.1521f, 200.4329f, 41.0107f };
	fLocal_590 = 227.3212f;
	vLocal_591 = { 2f, 0f, 0f };
	vLocal_594 = { -110.6658f, -24.1952f, 94.7146f };
	fLocal_597 = 298.6764f;
	vLocal_598 = { -116.7768f, -21.0371f, 94.9108f };
	fLocal_601 = 26.3152f;
	vLocal_602 = { -465.4346f, 187.5489f, 40.5736f };
	vLocal_605 = { -467.3456f, 202.6058f, 41.4f };
	fLocal_608 = 0f;
	vLocal_609 = { -468.628f, 190.187f, 41.2516f };
	fLocal_612 = 17.8276f;
	vLocal_675 = { -468.2877f, 188.7003f, 40.4181f };
	vLocal_678 = { -455.052f, 203.816f, 42.72f };
	vLocal_684 = { -114.63f, -18.7636f, 94.9146f };
	fLocal_687 = 75.3856f;
	vLocal_688 = { -468.128f, 202.924f, 41.43834f };
	vLocal_691 = { -115.1909f, -18.3412f, 94.9308f };
	fLocal_694 = 72.8093f;
	vLocal_695 = { -108.3717f, -34.1668f, 94.9754f };
	fLocal_698 = 338.3777f;
	vLocal_699 = { -106.8982f, -34.3779f, 94.9737f };
	fLocal_702 = 342.2831f;
	vLocal_703 = { 0f, 0f, 0f };
	vLocal_706 = { 0f, 0f, 0f };
	vLocal_709 = { 0f, 0f, 0f };
	vLocal_712 = { 0f, 0f, 0f };
	vLocal_715 = { 0f, -0.08f, -0.254f };
	vLocal_718 = { 0f, 0f, 0f };
	vLocal_721 = { 0.29f, -0.022f, -0.078f };
	vLocal_724 = { 75.996f, 0f, -2.8f };
	vLocal_727 = { -118.61f, -16.68f, 95.16f };
	vLocal_730 = { 6.42f, -23.01f, -158.2f };
	vLocal_733 = { -118.786f, -25.294f, 97.227f };
	vLocal_736 = { 0f, 0f, 150f };
	vLocal_739 = { 19f, 25f, 5f };
	vLocal_742 = { -458.917f, 183.647f, 40.418f };
	vLocal_745 = { 22f, 8f, 14f };
	vLocal_748 = { -455.204f, 182.101f, 40.418f };
	vLocal_751 = { 30f, 8f, 14f };
	vLocal_754 = { 0f, 0f, 157.4f };
	vLocal_757 = { -147.8866f, -14.662f, 95.3018f };
	fLocal_1028 = 8f;
	vLocal_1038 = { -168.8901f, -38.2667f, 92.8671f };
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
			func_68(uParam0);
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
	__LIB_0__::func_11(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_9__::func_816(uParam0);
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
	int iVar0;
	__LIB_12__::func_656(uParam0, 3f);
	__LIB_12__::func_657(uParam0, 5f);
	__LIB_12__::func_658(uParam0, 4);
	__LIB_12__::func_659(uParam0, 12);
	func_189();
	func_190();
	iLocal_282[0] = joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
	iLocal_282[1] = joaat("A_C_HORSE_ANDALUSIAN_DARKBAY");
	iLocal_172[0] = 0;
	iLocal_172[1] = 0;
	iLocal_172[2] = 0;
	iLocal_179[0] = 0;
	iLocal_179[1] = 0;
	func_191();
	iLocal_285[0] = joaat("A_C_FISHBLUEGIL_01_SM");
	iLocal_285[1] = joaat("A_C_FISHCHAINPICKEREL_01_SM");
	iLocal_285[2] = joaat("A_C_FISHPERCH_01_SM");
	iLocal_285[3] = joaat("A_C_FISHROCKBASS_01_SM");
	iLocal_285[4] = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
	if (__LIB_6__::func_547(0))
	{
		iLocal_781 = 0;
	}
	else
	{
		iLocal_781 = 1;
	}
	sLocal_815[0] = "RAB1_RESTART_2";
	sLocal_815[1] = "RAB1_RESTART_3";
	sLocal_815[2] = "RAB1_RESTART_4";
	vLocal_613[0 /*3*/] = { -446.7768f, 196.5367f, 42.9604f };
	fLocal_620[0] = 62.4146f;
	vLocal_613[1 /*3*/] = { -448.353f, 198.1722f, 43.4099f };
	fLocal_620[1] = 71.2796f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_819[iVar0] = 0;
		iVar0++;
	}
}

void func_42(var uParam0)
{
	int iVar0;
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_273, 7);
	__LIB_12__::func_867(uParam0, iLocal_274, 2);
	__LIB_12__::func_867(uParam0, iLocal_275, 7);
	__LIB_12__::func_867(uParam0, iLocal_276, 2);
	__LIB_12__::func_867(uParam0, iLocal_282[0], 2);
	__LIB_12__::func_867(uParam0, iLocal_282[1], 2);
	__LIB_12__::func_867(uParam0, iLocal_278, 2);
	__LIB_12__::func_867(uParam0, iLocal_279, 2);
	__LIB_12__::func_867(uParam0, iLocal_277, 2);
	__LIB_12__::func_867(uParam0, iLocal_280, 1);
	__LIB_12__::func_867(uParam0, iLocal_281, 7);
	__LIB_13__::func_55(uParam0, sLocal_490, 2);
	__LIB_13__::func_55(uParam0, sLocal_491, 2);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sLocal_815[iVar0]);
		iVar0++;
	}
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
	func_191();
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_623[0 /*3*/] };
			Var1.f_3 = fLocal_642[0];
			break;
		case 1:
			Var1 = { vLocal_623[1 /*3*/] };
			Var1.f_3 = fLocal_642[1];
			break;
		case 2:
			Var1 = { vLocal_623[2 /*3*/] };
			Var1.f_3 = fLocal_642[2];
			break;
		case 3:
			Var1 = { vLocal_623[3 /*3*/] };
			Var1.f_3 = fLocal_642[3];
			break;
		case 4:
			Var1 = { vLocal_623[4 /*3*/] };
			Var1.f_3 = fLocal_642[4];
			break;
		case 5:
			Var1 = { vLocal_623[4 /*3*/] };
			Var1.f_3 = fLocal_642[4];
			break;
		case 6:
			Var1 = { vLocal_623[5 /*3*/] };
			Var1.f_3 = fLocal_642[5];
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_207(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_13__::func_203(uParam0, iLocal_301))
	{
		StringCopy(&(uParam0->f_2578), "RABI1_JACKHARM", 24);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if ((((!__LIB_0__::func_272(iLocal_306, 65) || ENTITY::IS_ENTITY_DEAD(iLocal_306)) || PED::IS_PED_SWIMMING(iLocal_306)) || (bLocal_152 && !PED::IS_PED_ON_MOUNT(iLocal_301))) || (__LIB_14__::func_124(25) && !func_211()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				__LIB_1__::func_864(iLocal_306, 1, 0);
			}
			__LIB_12__::func_798(uParam0);
			StringCopy(&(uParam0->f_2578), "RABI1_HRSDEAD", 24);
			return true;
		}
		if (!__LIB_0__::func_75(&uLocal_1033))
		{
			if (PED::IS_PED_FALLING(iLocal_306) || PED::IS_PED_RAGDOLL(iLocal_306))
			{
				__LIB_1__::func_148(&uLocal_1033);
			}
		}
		else if (__LIB_0__::func_265(&uLocal_1033) > 2f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				__LIB_1__::func_864(iLocal_306, 1, 0);
			}
		}
	}
	if ((iLocal_785 < 12 && iLocal_785 > 4) && iLocal_785 != 7)
	{
		func_216(0, vLocal_675, "RABI1_FAILWARN", 120f);
		if (iLocal_819[0] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABANFISH", 24);
			return true;
		}
	}
	if (iLocal_785 == 4 || iLocal_785 == 14)
	{
		func_216(2, ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false), Local_825[4 /*9*/].f_2, 60f);
		if (iLocal_819[2] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JACKABAN", 24);
			return true;
		}
	}
	if (iLocal_785 == 15)
	{
		func_216(1, vLocal_684, "RABI1_RETCAMP", 100f);
		if (iLocal_819[1] == 3)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABANCAMP", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_300) && bLocal_158)
	{
		if (!__LIB_0__::func_272(iLocal_300, 65))
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABIDEAD", 24);
			return true;
		}
		else if (bLocal_157)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_ABIAGGRO", 24);
			return true;
		}
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "RABI1_WANTED", 24);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		if (__LIB_14__::func_124(4) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 10f))
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JKANNOY", 24);
			return true;
		}
		if (__LIB_0__::func_665(Global_35, iLocal_301, 0, 1) > 100f)
		{
			StringCopy(&(uParam0->f_2578), "RABI1_JACKABAN", 24);
			return true;
		}
	}
	return false;
}

void func_68(var uParam0)
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		func_219();
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	POPULATION::_0xF45E46DEECF7DF6E(256, 0, 0, -1, -1);
	PED::_0xBA0980B5C0A11924(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0x28CB6391ACEDD9DB(0f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
	{
		PED::SET_PED_RESET_FLAG(iLocal_306, 280, true);
		PED::SET_PED_RESET_FLAG(iLocal_306, 252, true);
	}
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
	if (func_222(uParam0->f_174))
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
	if (__LIB_18__::func_615(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_18__::func_604(uParam0);
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
			func_251(uParam0);
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_275(uParam0))
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
	func_289(uParam0);
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
	__LIB_14__::func_181(uParam0);
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

void func_87(var uParam0)
{
	func_294(uParam0, 0);
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
		if (uParam0->f_171 != 0 || func_295(uParam0))
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
	char[] cVar1[8];
	bool bVar2;
	iVar0 = iParam1;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!func_298())
	{
		return 2;
	}
	switch (iVar0)
	{
		case 0:
			switch (iLocal_814)
			{
				case 0:
					if (((((((func_299(vLocal_649[0 /*3*/], fLocal_668[0], 1) && func_300()) && func_301(&(Local_926[1 /*6*/]))) && func_302()) && func_303()) && func_298()) && func_304()) && func_305())
					{
						__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
						if (__LIB_12__::func_936(uParam0))
						{
							__LIB_0__::func_8(&(uParam0->f_172), 16);
							iLocal_814 = 1;
						}
						else
						{
							iLocal_814 = 2;
						}
					}
					break;
				case 1:
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						if (func_307(uParam0, vLocal_564, fLocal_567))
						{
							cVar1 = func_308();
							__LIB_12__::func_676(&(uParam0->f_206), cVar1);
							__LIB_0__::func_88(&(uParam0->f_206), 33554432);
							__LIB_0__::func_88(&(uParam0->f_206), 134217728);
							__LIB_12__::func_839(&(uParam0->f_206), cVar1);
							func_294(uParam0, 0);
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
					{
						return 5;
					}
					break;
				case 2:
					func_311();
					func_312(9, 0);
					func_313(uParam0);
					func_314(1, 1);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_579, fLocal_582, true, false, true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (!__LIB_1__::func_502(&(Local_453[0 /*17*/])))
					{
						__LIB_2__::func_602(&(Local_453[0 /*17*/]), "RABI1_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					}
					func_317(1);
					__LIB_13__::func_89(uParam0, Local_825[0 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_319(uParam0, 0, 2);
					__LIB_1__::func_774(13, 0, 1, 0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					iLocal_172[0] = 0;
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					return 7;
			}
			break;
		case 1:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, vLocal_623[1 /*3*/], fLocal_642[1]) && func_299(vLocal_649[1 /*3*/], fLocal_668[1], 1)) && func_322(1, 1)) && func_323(vLocal_623[1 /*3*/], 0f, 0f, 0f, 0)) && func_302()) && func_298())
					{
						__LIB_5__::func_548(1);
						func_311();
						func_313(uParam0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_306, vLocal_623[1 /*3*/], fLocal_642[1], true, false, true);
						func_325();
						func_312(9, 0);
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_306, -1, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
					}
					if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_301))
					{
						__LIB_18__::func_765(25);
						bLocal_152 = true;
						func_327(vLocal_678, 1);
						iLocal_792 = 3;
						__LIB_13__::func_89(uParam0, Local_825[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_814 = 2;
					}
					break;
				case 2:
					if (func_328(1))
					{
						AUDIO::TRIGGER_MUSIC_EVENT(sLocal_815[0]);
						__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
						func_319(uParam0, 0, 8);
						func_329(1);
						func_330();
						func_331();
						iLocal_814 = 0;
						return 7;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, vLocal_623[2 /*3*/], fLocal_642[2]) && func_299(vLocal_649[2 /*3*/], fLocal_668[2], 1)) && func_322(1, 1)) && func_323(vLocal_623[2 /*3*/], 0f, 0f, 0f, 0)) && func_302()) && func_298())
					{
						__LIB_5__::func_548(1);
						func_311();
						func_312(9, 0);
						func_313(uParam0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_306, vLocal_623[2 /*3*/], fLocal_642[2], true, false, true);
						func_325();
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (!MAP::DOES_BLIP_EXIST(iLocal_137))
					{
						func_327(vLocal_678, 1);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_306, -1, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
					}
					if ((PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_301)) && MAP::DOES_BLIP_EXIST(iLocal_137))
					{
						__LIB_18__::func_765(25);
						__LIB_0__::func_568(Global_36, 50f, 0);
						bLocal_152 = true;
						iLocal_792 = 3;
						AUDIO::TRIGGER_MUSIC_EVENT(sLocal_815[1]);
						iLocal_814 = 2;
					}
					break;
				case 2:
					if (func_328(1))
					{
						__LIB_13__::func_89(uParam0, Local_825[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_12__::func_997(uParam0, func_61(2), func_61(4), 2, 4, 0);
						func_319(uParam0, 0, 8);
						func_330();
						func_329(1);
						func_331();
						iLocal_814 = 0;
						return 7;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_814)
			{
				case 0:
					if (((((func_321(uParam0, vLocal_678, 0) && func_299(vLocal_649[3 /*3*/], fLocal_668[3], 1)) && func_302()) && func_322(1, 1)) && func_323(vLocal_623[3 /*3*/], 0f, 0f, 0f, 1)) && func_298())
					{
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (func_328(1))
					{
						func_311();
						__LIB_5__::func_548(1);
						func_333(17);
						func_313(uParam0);
						func_317(0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_306, vLocal_678, fLocal_590, true, false, true);
						func_334(1, 1);
						func_319(uParam0, iLocal_785, 10);
						__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
						func_312(9, 0);
						iLocal_792 = 3;
						AUDIO::TRIGGER_MUSIC_EVENT(sLocal_815[1]);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_330();
						func_329(1);
						func_331();
						return 7;
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_814)
			{
				case 0:
					__LIB_0__::func_202(Global_35, 1);
					if (((func_321(uParam0, vLocal_587, fLocal_590) && func_299(vLocal_649[4 /*3*/], fLocal_668[4], 1)) && func_322(1, 1)) && func_298())
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
						{
							func_313(uParam0);
						}
						iLocal_814 = 1;
					}
					break;
				case 1:
					bVar2 = true;
					if (!bLocal_138)
					{
						func_294(uParam0, 1);
						bVar2 = false;
					}
					__LIB_0__::func_568(vLocal_587, 3f, 0);
					if (bLocal_138 && !__LIB_0__::func_1(uParam0->f_172, 1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						iLocal_814 = 2;
					}
					break;
				case 2:
					if (func_328(1))
					{
						__LIB_5__::func_548(1);
						func_336();
						func_312(11, 0);
						func_311();
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_306, vLocal_587, fLocal_590, true, false, true);
						__LIB_12__::func_997(uParam0, func_61(4), func_61(6), 4, 6, 0);
						AUDIO::TRIGGER_MUSIC_EVENT(sLocal_815[2]);
						__LIB_1__::func_658(1);
						__LIB_0__::func_105(1);
						__LIB_1__::func_646(0);
						__LIB_1__::func_666(0);
						__LIB_1__::func_668(0);
						__LIB_1__::func_669(0);
						__LIB_1__::func_670(0);
						__LIB_12__::func_623(1);
						__LIB_12__::func_624(0);
						func_329(1);
						func_319(uParam0, iLocal_785, 14);
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 5;
					}
					break;
			}
			break;
		case 5:
			switch (iLocal_814)
			{
				case 0:
					if (((func_321(uParam0, vLocal_587, fLocal_590) && func_299(vLocal_649[4 /*3*/], fLocal_668[4], 1)) && func_322(1, 1)) && func_298())
					{
						func_312(12, 0);
						__LIB_0__::func_202(Global_35, 1);
						func_311();
						iLocal_814 = 1;
					}
					break;
				case 1:
					if (func_328(1))
					{
						__LIB_5__::func_548(1);
						func_346(uParam0);
						func_330();
						func_329(1);
						func_331();
						return 7;
					}
					break;
			}
			break;
		case 6:
			if ((((((func_299(vLocal_649[0 /*3*/], fLocal_668[0], 1) && func_347(1)) && func_303()) && func_348(uParam0, 1, iLocal_306)) && __LIB_0__::func_1(uParam0->f_172, 1)) && func_322(1, 1)) && __LIB_14__::func_142(Global_1347702[uParam0->f_174 /*49*/].f_15))
			{
				__LIB_2__::func_919(iLocal_291, 0, 1);
				__LIB_1__::func_951(&iLocal_291);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
				{
					POPULATION::_0xF74E134F40192884(iLocal_306, 2);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_306, vLocal_691, fLocal_694, true, false, true);
					if (!__LIB_0__::func_491(iLocal_306, -982327190))
					{
						TASK::TASK_STAND_STILL(iLocal_306, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
				{
					func_313(uParam0);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_301, vLocal_649[5 /*3*/], fLocal_668[5], false, false, true);
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				__LIB_13__::func_59(uParam0, iLocal_306, "HORSE_01", 0, 0, 0);
				return 5;
			}
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
		if (!__LIB_0__::func_0(uParam0))
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
	return func_366(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	switch (iLocal_789)
	{
		case 0:
			if (bLocal_143)
			{
				func_312(6, 30);
				__LIB_1__::func_774(13, 0, 1, 0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				iLocal_172[0] = 0;
				func_370(uParam0);
				func_319(uParam0, iLocal_785, 2);
				return 7;
			}
			else
			{
				func_370(uParam0);
				return 7;
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			func_346(uParam0);
			return 7;
		case 2:
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_926[5 /*6*/]);
			func_371(0, 1, 0);
			__LIB_0__::func_745(14);
			__LIB_5__::func_305(14);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
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
		if (func_374(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	vector3 vVar0;
	var uVar3;
	int iVar4;
	if (!__LIB_14__::func_124(26))
	{
		__LIB_1__::func_723(0);
		__LIB_9__::func_546(__LIB_9__::func_552(43, vLocal_688), 1);
		__LIB_18__::func_765(26);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_306, 31, 2, 1);
	}
	func_378();
	func_379();
	func_380();
	if (iLocal_785 < 14)
	{
		func_381();
		func_382();
		if (iLocal_785 >= 9)
		{
			if (STREAMING::_0x8A3945405B31048F() > 0.85f)
			{
				__LIB_5__::func_521(0.85f);
			}
		}
	}
	if (func_384(17))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (__LIB_14__::func_124(25))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_306, 2.001f);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 395, true);
		}
	}
	else
	{
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 395, false);
		}
	}
	func_385();
	func_386(uParam0);
	func_387();
	if ((iLocal_785 == 9 || iLocal_785 == 10) || iLocal_785 == 11)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 1, 1);
	}
	else
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
	}
	if (__LIB_0__::func_12() == 71)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	}
	switch (iLocal_785)
	{
		case 2:
			__LIB_1__::func_538(0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (!bLocal_143)
			{
				func_389();
				func_390(uParam0);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (!func_391())
			{
			}
			if (!__LIB_14__::func_124(10))
			{
				func_347(1);
			}
			func_392(uParam0);
			break;
		case 3:
			__LIB_14__::func_131();
			if (!bLocal_143)
			{
				func_389();
				func_390(uParam0);
			}
			func_394(uParam0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_762))
			{
				__LIB_1__::func_822(&vVar0, &uVar3);
				iLocal_762 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 5f, 5f, 5f, "mJackHorseVol");
			}
			if (iLocal_793 != 2)
			{
				iLocal_793 = 2;
			}
			if (iLocal_812 == 3)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_775))
				{
					__LIB_11__::func_579(&iLocal_477, iLocal_775, 0);
					VOLUME::_DELETE_VOLUME(iLocal_775);
				}
				func_397();
				__LIB_13__::func_89(uParam0, Local_825[4 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				TASK::CLEAR_PED_TASKS(iLocal_301, true, false);
				TASK::TASK_STAND_STILL(iLocal_301, -1);
				func_371(0, 1, 0);
				iLocal_792 = 3;
				func_319(uParam0, iLocal_785, 4);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
				__LIB_1__::func_538(0);
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_926[iLocal_191 /*6*/]) < 0.83f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			break;
		case 4:
			func_394(uParam0);
			__LIB_1__::func_538(0);
			func_398(uParam0);
			func_399();
			if (func_211())
			{
				__LIB_5__::func_548(1);
				__LIB_18__::func_765(25);
				__LIB_13__::func_89(uParam0, Local_825[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_400();
				func_317(1);
				__LIB_11__::func_124(10);
				func_402();
				func_319(uParam0, iLocal_785, 5);
			}
			else
			{
				if (!bLocal_143)
				{
					func_389();
					func_390(uParam0);
				}
				func_403(&(Local_825[4 /*9*/]), 0, 0);
			}
			break;
		case 5:
			func_394(uParam0);
			__LIB_1__::func_538(0);
			func_399();
			if (func_211())
			{
				func_402();
				if (iLocal_807 == 2)
				{
					func_404(5);
					func_319(uParam0, iLocal_785, 6);
				}
				else
				{
					func_403(&(Local_825[5 /*9*/]), 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_325(&iLocal_137);
				__LIB_13__::func_89(uParam0, Local_825[4 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_319(uParam0, iLocal_785, 4);
			}
			break;
		case 6:
			func_399();
			__LIB_1__::func_538(0);
			if (bLocal_152)
			{
				if (func_322(1, 0))
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_ASETOFFC", 0))
					{
						func_330();
						__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
						func_317(0);
						func_327(vLocal_678, 1);
						__LIB_13__::func_89(uParam0, Local_825[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_319(uParam0, 2, 8);
					}
				}
			}
			else
			{
				func_402();
			}
			break;
		case 7:
			func_407();
			func_408(uParam0, 1);
			if (func_409())
			{
				__LIB_18__::func_766(2);
				func_317(0);
				func_327(vLocal_681, 0);
				__LIB_1__::func_390("RABI1_RETHORSE", 1);
				__LIB_13__::func_89(uParam0, Local_825[iLocal_805 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_319(uParam0, iLocal_785, iLocal_786);
			}
			else if (!__LIB_14__::func_124(2))
			{
				if (iLocal_786 != 15)
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_LOST", 0))
					{
						__LIB_18__::func_765(2);
					}
				}
				else
				{
					__LIB_18__::func_765(2);
				}
			}
			else if (!__LIB_6__::func_903("ABI1_LOST") && !__LIB_14__::func_124(1))
			{
				__LIB_1__::func_422("RABI1_RETHORSE", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_18__::func_765(1);
			}
			else if (!__LIB_4__::func_68("RABI1_RETHORSE", 1))
			{
				func_415(uParam0);
			}
			break;
		case 8:
			func_407();
			func_408(uParam0, 1);
			func_416();
			if (func_417())
			{
				PED::SET_PED_RESET_FLAG(iLocal_306, 53, true);
				func_319(uParam0, iLocal_785, 9);
			}
			break;
		case 9:
			func_418();
			func_416();
			func_402();
			if (!__LIB_0__::func_75(&uLocal_513))
			{
				if (!__LIB_6__::func_904())
				{
					if (PED::IS_PED_STOPPED(iLocal_306) || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_306) <= (1f + 0.01f))
					{
						if (!bLocal_154)
						{
							func_420(14);
							__LIB_18__::func_767(8, 14, 1);
							__LIB_0__::func_45("RABI1_COMIC", 7000, 0, 0, 0, 1);
							bLocal_154 = true;
						}
						if (__LIB_12__::func_876(uParam0, "ABI1_ARRIVE", 0))
						{
							__LIB_18__::func_765(3);
							__LIB_1__::func_283(&uLocal_513, 0);
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							TASK::CLEAR_PED_TASKS(iLocal_306, true, false);
							TASK::TASK_STAND_STILL(iLocal_306, -1);
							PED::SET_PED_RESET_FLAG(iLocal_306, 53, true);
						}
					}
				}
				else
				{
					__LIB_5__::func_20(1, 0);
				}
			}
			else if ((iLocal_808 == 4 && func_302()) && func_322(1, 1))
			{
				func_317(0);
				__LIB_18__::func_766(25);
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 262144, 0, 0, 0, 0);
				}
				func_333(17);
				TASK::CLEAR_PED_TASKS(iLocal_306, true, false);
				__LIB_0__::func_37(&uLocal_513);
				__LIB_0__::func_325(&iLocal_137);
				func_319(uParam0, iLocal_785, 10);
			}
			break;
		case 10:
			__LIB_12__::func_625();
			if (!__LIB_6__::func_903("ABI1_ARRIVE"))
			{
				if (__LIB_12__::func_876(uParam0, "ABI1_WHEREGO", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306, true, false);
						TASK::TASK_STAND_STILL(iLocal_306, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
					}
					func_327(vLocal_675, 1);
					func_425();
					iLocal_192 = func_426(0);
					iLocal_193 = iLocal_192;
					__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
					__LIB_13__::func_89(uParam0, Local_825[8 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_18__::func_766(22);
					__LIB_12__::func_600();
					func_319(uParam0, iLocal_785, 11);
				}
			}
			break;
		case 11:
			__LIB_12__::func_625();
			func_428(uParam0);
			func_429();
			__LIB_1__::func_538(0);
			if (func_302())
			{
				func_430(uParam0);
			}
			if (__LIB_1__::func_647())
			{
				func_319(uParam0, iLocal_785, 12);
			}
			break;
		case 12:
			func_428(uParam0);
			func_432();
			func_429();
			if (!bLocal_138)
			{
				func_294(uParam0, 1);
			}
			__LIB_1__::func_538(0);
			if (func_302())
			{
				func_430(uParam0);
			}
			if (func_433())
			{
				__LIB_12__::func_623(1);
				__LIB_12__::func_624(1);
				__LIB_14__::func_190(0);
				__LIB_1__::func_646(0);
				__LIB_1__::func_666(0);
				__LIB_1__::func_668(0);
				__LIB_1__::func_669(0);
				__LIB_1__::func_670(0);
				__LIB_0__::func_105(1);
				__LIB_12__::func_846(&(uParam0->f_206));
				if (__LIB_4__::func_68("RABI1_GOJACK", 1))
				{
					__LIB_1__::func_390("RABI1_GOJACK", 1);
				}
				__LIB_1__::func_951(&iLocal_294);
				iLocal_803 = 9;
				func_319(uParam0, iLocal_785, 14);
				return 5;
			}
			break;
		case 14:
			func_408(uParam0, 1);
			func_399();
			func_436();
			__LIB_1__::func_538(1);
			func_389();
			__LIB_14__::func_131();
			if (func_211())
			{
				func_402();
			}
			switch (iLocal_778)
			{
				case 0:
					if (func_211())
					{
						__LIB_5__::func_20(1, 0);
						__LIB_0__::func_37(&uLocal_534);
						func_400();
						__LIB_18__::func_765(25);
						bLocal_159 = true;
						__LIB_13__::func_89(uParam0, Local_825[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_778 = 1;
					}
					else
					{
						if (__LIB_0__::func_491(iLocal_301, 1056466932))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(Global_35) || func_437() > (fLocal_925 + 10f))
							{
								TASK::TASK_STAND_STILL(iLocal_301, -1);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_WATER(Global_35) && func_437() < (fLocal_925 + 10f))
						{
							if (!__LIB_0__::func_491(iLocal_301, 1056466932))
							{
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
							}
						}
						if (!__LIB_14__::func_124(14))
						{
							if (__LIB_12__::func_876(uParam0, "ABI1_GETHOME", 0))
							{
								__LIB_18__::func_765(14);
							}
						}
						else if (!__LIB_0__::func_75(&uLocal_534))
						{
							if (!__LIB_6__::func_904())
							{
								__LIB_1__::func_148(&uLocal_534);
							}
						}
						else if (__LIB_0__::func_264(&uLocal_534) > 6f)
						{
							if (__LIB_12__::func_876(uParam0, "ABI1_DAWDLEJ", 0))
							{
								__LIB_0__::func_37(&uLocal_534);
							}
						}
						func_403(&(Local_825[4 /*9*/]), 0, 0);
					}
					break;
				case 1:
					if (func_211())
					{
						func_403(&(Local_825[5 /*9*/]), 0, 0);
						if (bLocal_152)
						{
							vLocal_1019 = { Global_36 };
							func_327(vLocal_684, 0);
							func_371(0, 0, 0);
							__LIB_13__::func_89(uParam0, Local_825[3 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_319(uParam0, iLocal_785, 15);
						}
					}
					else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[3 /*6*/], false))
					{
						__LIB_13__::func_89(uParam0, Local_825[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_778 = 0;
					}
					break;
			}
			break;
		case 15:
			func_407();
			func_389();
			func_408(uParam0, 0);
			if (func_409())
			{
				func_439(uParam0);
				func_403(&(Local_825[3 /*9*/]), 0, 0);
				if (func_348(uParam0, 0, __LIB_2__::func_825(Global_35)))
				{
					if ((ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_926[6 /*6*/], false) && ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[6 /*6*/], "LEadin")) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_926[6 /*6*/], "Horse_01", &Local_65, true, "LEadin", 2))
					{
						vLocal_691 = { Local_65 };
						fLocal_694 = Local_65.f_3.f_2;
					}
					POPULATION::_0xF74E134F40192884(Global_35, 0);
					POPULATION::_0xF74E134F40192884(iLocal_306, 2);
					POPULATION::_0xF74E134F40192884(iLocal_301, 0);
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_763))
					{
						iLocal_763 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-112.8483f, -18.32166f, 96.7937f, 0f, 0f, -31.48123f, 4.428669f, 5.874272f, 2.208711f, "Leadin Trigger");
					}
					__LIB_1__::func_694(Global_35, vLocal_684, 0, 30f, 20f, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_763, false, 0) || __LIB_14__::func_124(8))
					{
						__LIB_18__::func_765(8);
						if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "cautious") > 0f)
						{
							PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "cautious", 0f, -1);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
						if (!__LIB_14__::func_124(7))
						{
							if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
							}
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_691, 1f, 10000, 0.25f, 0, fLocal_694);
							TASK::TASK_ACHIEVE_HEADING(0, fLocal_694, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_300, 0f, 0f, 0f, true, 6000, 2000, 2000, 0);
							}
							__LIB_13__::func_59(uParam0, __LIB_2__::func_825(Global_35), "HORSE_01", 0, 0, 0);
							__LIB_18__::func_765(7);
						}
						else if (func_443())
						{
							if (__LIB_5__::func_463())
							{
								__LIB_5__::func_20(1, 0);
							}
							else
							{
								__LIB_1__::func_345();
								func_314(6, 7);
								func_319(uParam0, iLocal_785, 16);
							}
						}
					}
				}
			}
			else
			{
				if (__LIB_14__::func_124(8) || __LIB_14__::func_124(7))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					__LIB_1__::func_345();
					__LIB_18__::func_765(8);
					__LIB_18__::func_765(7);
				}
				if (__LIB_4__::func_68("RABI1_RETCAMP", 1))
				{
					__LIB_1__::func_390("RABI1_RETCAMP", 1);
				}
				func_446(uParam0, 3);
			}
			break;
		case 16:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[6 /*6*/], false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_926[6 /*6*/]) >= 0.95f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
				bLocal_152 = false;
				__LIB_0__::func_325(&iLocal_137);
				__LIB_18__::func_766(25);
				return 5;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	__LIB_13__::func_483(553, 1, 0, 0, 1);
	__LIB_11__::func_124(10);
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
		func_481(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_138(var uParam0)
{
	if (!__LIB_14__::func_124(21))
	{
		if (func_322(0, 1))
		{
			__LIB_18__::func_765(21);
		}
	}
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!__LIB_14__::func_124(21))
		{
			if (func_322(1, 1))
			{
				__LIB_18__::func_765(21);
			}
		}
		else
		{
			return true;
		}
	}
	if (__LIB_12__::func_644(uParam0) == 11)
	{
		return true;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
	func_508();
	__LIB_14__::func_190(1);
	__LIB_2__::func_353(&uLocal_776, 1);
	__LIB_5__::func_547(1);
	func_511(1);
	func_512();
	func_513(1);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	func_400();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
	{
		func_371(0, 1, 0);
		__LIB_0__::func_745(14);
		__LIB_5__::func_305(14);
		func_514();
	}
	__LIB_2__::func_919(iLocal_291, 1, 1);
	__LIB_2__::func_788(&iLocal_1018, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_1017, 1, 0, 1);
	__LIB_0__::func_325(&iLocal_137);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_278);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_279);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_277);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_280);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_273);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_274);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_275);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_276);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_282[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_282[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_281);
	__LIB_2__::func_426(&iLocal_304);
	__LIB_2__::func_426(&iLocal_305);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_2__::func_426(&(iLocal_310[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	func_381();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (func_515(1))
	{
		__LIB_0__::func_105(1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_761))
	{
		__LIB_11__::func_579(&iLocal_471, iLocal_761, 0);
		VOLUME::_DELETE_VOLUME(iLocal_761);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_767))
	{
		__LIB_11__::func_579(&iLocal_472, iLocal_767, 0);
		VOLUME::_DELETE_VOLUME(iLocal_767);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_771))
	{
		__LIB_11__::func_579(&iLocal_474, iLocal_771, 0);
		VOLUME::_DELETE_VOLUME(iLocal_771);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_773))
	{
		__LIB_11__::func_579(&iLocal_475, iLocal_773, 0);
		VOLUME::_DELETE_VOLUME(iLocal_773);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
	{
		__LIB_11__::func_579(&iLocal_476, iLocal_774, 0);
		VOLUME::_DELETE_VOLUME(iLocal_774);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_775))
	{
		__LIB_11__::func_579(&iLocal_477, iLocal_775, 0);
		VOLUME::_DELETE_VOLUME(iLocal_775);
	}
	__LIB_0__::func_172(iLocal_762);
	__LIB_0__::func_172(iLocal_766);
	__LIB_0__::func_172(iLocal_768);
	__LIB_0__::func_172(iLocal_764);
	__LIB_0__::func_172(iLocal_763);
	__LIB_1__::func_774(13, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (__LIB_0__::func_699(14))
	{
		__LIB_4__::func_705(14, 0);
		__LIB_1__::func_774(14, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	__LIB_1__::func_774(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (PED::GET_PED_CONFIG_FLAG(iLocal_306, 300, true))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, false);
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 395, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 395, false);
	}
	__LIB_2__::func_788(&iLocal_306, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_309, 1, 0, 1);
	__LIB_1__::func_951(&iLocal_293);
	__LIB_1__::func_951(&iLocal_292);
	__LIB_1__::func_951(&iLocal_291);
	__LIB_11__::func_124(10);
	STREAMING::REMOVE_ANIM_DICT(sLocal_490);
	STREAMING::REMOVE_ANIM_DICT(sLocal_491);
}

void func_189()
{
	Local_926[0 /*6*/].f_3 = "script@rcm@ABI1@LEADIN@RSC1@base_callovers_leadin";
	Local_926[1 /*6*/].f_3 = "script@rcm@abi1@ig@rsc_ig_1_jackplaymud@rsc_ig_1_jackplaymud";
	Local_926[2 /*6*/].f_3 = "script@rcm@abi1@ig@rsc_ig_2_jackgetsfishgear@rsc_ig_2_jackgetsfishgear_jack_get_gear";
	Local_926[3 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_7_JackDismountWithGear@RSC_IG_7_JackMountWithGear";
	Local_926[4 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_7_JackDismountWithGear@RSC_IG_7_JackDismountWithGear";
	Local_926[5 /*6*/].f_3 = "script@rcm@ABI1@LEADIN@RSC4@Base";
	Local_926[6 /*6*/].f_3 = "script@rcm@ABI1@LEADIN@RSC4@Leadin";
	Local_926[7 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@rsc_ig_2_jackgetsfishgear_Arthur";
	Local_926[8 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Left";
	Local_926[9 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Front";
	Local_926[10 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_2_JackGetsFishGear@RSC_IG_2_JackGetsFishGear_Right";
	Local_926[11 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_12_FishingSureIsBoring@RSC_IG_12_FishingSureIsBoring";
	Local_926[12 /*6*/].f_3 = "script@rcm@ABI1@IG@RSC_IG_13_JackPickYarrow@RSC_IG_13_JackPicksYarrow";
	Local_926[0 /*6*/].f_4 = "ABI LEAD_IN";
	Local_926[1 /*6*/].f_4 = "JACK IDLE";
	Local_926[2 /*6*/].f_4 = "JACK GET GEAR";
	Local_926[3 /*6*/].f_4 = "MOUNT WITH GEAR";
	Local_926[4 /*6*/].f_4 = "DISMOUNT WITH GEAR";
	Local_926[5 /*6*/].f_4 = "AGIGAIL BASE";
	Local_926[6 /*6*/].f_4 = "OUTRO LEADIN";
	Local_926[7 /*6*/].f_4 = "ARTHUR UPPER";
	Local_926[8 /*6*/].f_4 = "JACK GEAR LEFT";
	Local_926[9 /*6*/].f_4 = "JACK GEAR CENTRE";
	Local_926[10 /*6*/].f_4 = "JACK GEAR RIGHT";
	Local_926[11 /*6*/].f_4 = "FISHING_BORING";
	Local_926[12 /*6*/].f_4 = "PICK YARROW";
}

void func_190()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Local_825[iVar0 /*9*/] = 0;
		Local_825[iVar0 /*9*/].f_1 = 0;
		iVar0++;
	}
	Local_825[0 /*9*/].f_2 = "RABI1_GOJACK";
	Local_825[1 /*9*/].f_2 = "RABI1_GOFISH";
	Local_825[2 /*9*/].f_2 = "RABI1_PICKFLOWER";
	Local_825[3 /*9*/].f_2 = "RABI1_RETCAMP";
	Local_825[4 /*9*/].f_2 = "RABI1_GOMOUNT";
	Local_825[5 /*9*/].f_2 = "RABI1_WAITJK";
	Local_825[6 /*9*/].f_2 = "RABI1_RETJACK";
	Local_825[7 /*9*/].f_2 = "RABI1_RETHORSE";
	Local_825[8 /*9*/].f_2 = "RABI1_GORIVER";
	Local_825[9 /*9*/].f_2 = "RABI1_RETFISH";
	Local_825[10 /*9*/].f_2 = "RABI1_FISHCLOSE";
}

void func_191()
{
	vLocal_623[0 /*3*/] = { -115.2755f, -42.8305f, 94.5858f };
	fLocal_642[0] = 351.688f;
	vLocal_649[0 /*3*/] = { -124.5507f, -32.4855f, 94.7828f };
	fLocal_668[0] = 203.77f;
	vLocal_623[1 /*3*/] = { -108.0446f, -14.7239f, 94.7822f };
	fLocal_642[1] = 353.1612f;
	vLocal_649[1 /*3*/] = { 109.0446f, -15.7239f, 94.7822f };
	fLocal_668[1] = 353.1612f;
	vLocal_623[2 /*3*/] = { -318.5669f, 385.8517f, 53.2584f };
	fLocal_642[2] = 114.5595f;
	vLocal_649[2 /*3*/] = { -317.5669f, 386.8517f, 53.7584f };
	fLocal_668[2] = 61.3485f;
	vLocal_623[3 /*3*/] = { -453.2686f, 199.6056f, 42.1735f };
	fLocal_642[3] = 171.3511f;
	vLocal_649[3 /*3*/] = { -454.1484f, 202.5942f, 42.5257f };
	fLocal_668[3] = 209.7911f;
	vLocal_623[4 /*3*/] = { -468.2877f, 188.7003f, 40.4181f };
	fLocal_642[4] = 15.9698f;
	vLocal_649[4 /*3*/] = { -468.9155f, 192.2223f, 40.6252f };
	fLocal_668[4] = 304.651f;
	vLocal_623[5 /*3*/] = { -115.4912f, -20.3122f, 94.9003f };
	fLocal_642[5] = 54.1943f;
	vLocal_649[5 /*3*/] = { -116.9991f, -19.9179f, 94.9597f };
	fLocal_668[5] = 112.5979f;
}

int func_207(vector3 vParam0, var uParam3)
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
		iVar0 = func_567(0, 0);
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

bool func_211()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_2__::func_825(Global_35) == iLocal_306)
		{
			__LIB_10__::func_597("RABI1_GOMOUNT");
			return true;
		}
	}
	return false;
}

void func_216(int iParam0, vector3 vParam1, char* sParam4, float fParam5)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vParam1, 0);
	switch (iLocal_819[iParam0])
	{
		case 0:
			fLocal_187 = fVar0;
			fLocal_185 = (fVar0 + fParam5);
			__LIB_1__::func_148(&uLocal_522);
			iLocal_819[iParam0] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_522) > 10f)
			{
				if (fVar0 < fLocal_187)
				{
					__LIB_0__::func_37(&uLocal_522);
					iLocal_819[iParam0] = 0;
				}
				else if (fVar0 > fLocal_185)
				{
					__LIB_1__::func_422(sParam4, 7500, 1, 0, 0, 0, -1, -1, 0);
					fLocal_186 = fVar0;
					__LIB_1__::func_148(&uLocal_522);
					iLocal_819[iParam0] = 2;
				}
				else
				{
					__LIB_1__::func_148(&uLocal_522);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_522) > 7.5f)
			{
				if (fVar0 > fLocal_186)
				{
					iLocal_819[iParam0] = 3;
				}
				else
				{
					fLocal_185 = fVar0;
					__LIB_1__::func_148(&uLocal_522);
					iLocal_819[iParam0] = 1;
				}
			}
			break;
		case 3:
			break;
	}
}

void func_219()
{
	if (!bLocal_141)
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK2"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK2")))
		{
			uLocal_561[0] = __LIB_0__::func_45("RABI1_NOGUNS", 7000, 0, 0, 0, 1);
			bLocal_141 = true;
		}
	}
	else if (!bLocal_142)
	{
		if (!func_515(0))
		{
			if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK2"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK2")))
			{
				uLocal_561[0] = __LIB_0__::func_45("RABI1_NOGUNS", 7000, 0, 0, 0, 1);
				bLocal_142 = true;
			}
		}
	}
}

bool func_222(int iParam0)
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

void func_251(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_275(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
		{
			iLocal_297 = OBJECT::CREATE_OBJECT(iLocal_280, vLocal_572, false, true, false, false, true);
			bVar0 = false;
		}
		if (func_307(uParam0, vLocal_564, fLocal_567))
		{
			if (!__LIB_12__::func_936(uParam0))
			{
				func_652();
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!func_299(vLocal_594, fLocal_597, 0))
		{
			bVar0 = false;
		}
		if (!func_305())
		{
			bVar0 = false;
		}
	}
	else if (!func_653())
	{
		bVar0 = false;
	}
	if (bVar0 && func_302())
	{
		if (__LIB_12__::func_639(uParam0, 64) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[0 /*6*/], false))
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
			__LIB_12__::func_615();
			return 1;
		}
	}
	return 0;
}

void func_289(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return;
	}
	else if (__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
		{
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			func_671(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_294(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iLocal_789 = 0;
			StringCopy(&(uParam0->f_2575), "RABI1_RSC_1", 24);
			__LIB_12__::func_779(uParam0, vLocal_757);
			__LIB_13__::func_59(uParam0, iLocal_300, "AbigailRoberts", 0, 0, 0);
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_297, 0, 0, 0, 0);
			func_681(uParam0, __LIB_1__::func_440(uParam0->f_174), "LAUNCH_RESTRICT");
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_760))
			{
				iLocal_473 = PED::_0x4C39C95AE5DB1329(iLocal_760, false, 15);
			}
			__LIB_13__::func_16(uParam0, 102951);
			__LIB_12__::func_981(uParam0, 103004);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vLocal_609, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295))
			{
				iLocal_295 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_609, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_296))
			{
				iLocal_296 = OBJECT::CREATE_OBJECT(iLocal_277, vLocal_605, true, true, false, false, true);
			}
			if ((((func_686(uParam0, 0) && func_686(uParam0, 1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_291)) && ENTITY::DOES_ENTITY_EXIST(iLocal_295)) && ENTITY::DOES_ENTITY_EXIST(iLocal_296))
			{
				iLocal_789 = 1;
				StringCopy(&(uParam0->f_2575), "RABI1_RSC2", 24);
				__LIB_12__::func_779(uParam0, vLocal_675);
				__LIB_12__::func_957(uParam0, iLocal_291, sLocal_484, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_295, sLocal_483, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_296, sLocal_481, 0, 0, 0);
				__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_301, 0, 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_304, "EdgarRoss", 0, joaat("CS_EDGARROSS"), 0);
				__LIB_13__::func_59(uParam0, iLocal_305, "MiltonAndrews", 0, joaat("CS_MILTONANDREWS"), 0);
				__LIB_13__::func_59(uParam0, iLocal_310[0], "Horse_01", 0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 0);
				__LIB_13__::func_59(uParam0, iLocal_310[1], "Horse_01^1", 0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 0);
				__LIB_12__::func_981(uParam0, 103004);
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_0__::func_7(&(uParam0->f_172), 16);
				func_681(uParam0, vLocal_675, "FISHING_RESTRICT");
				bLocal_138 = true;
			}
			break;
		case 2:
			iLocal_789 = 2;
			StringCopy(&(uParam0->f_2575), "RABI1_RSC4", 24);
			__LIB_12__::func_779(uParam0, vLocal_568);
			__LIB_12__::func_909(&(uParam0->f_206));
			if (__LIB_14__::func_124(13))
			{
				__LIB_18__::func_766(13);
			}
			__LIB_0__::func_568(vLocal_684, 10f, 0);
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_300, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_301, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_307, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_291, sLocal_484, 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			func_681(uParam0, vLocal_568, "OUTRO_RESTRICT");
			__LIB_12__::func_981(uParam0, 103004);
			break;
	}
}

bool func_295(var uParam0)
{
	char[] cVar0[8];
	if (!func_687(uParam0))
	{
		return false;
	}
	cVar0 = func_308();
	if (!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_569(__LIB_12__::func_665(&(uParam0->f_206))), cVar0))
	{
		__LIB_12__::func_676(&(uParam0->f_206), cVar0);
		__LIB_0__::func_88(&(uParam0->f_206), 33554432);
		__LIB_12__::func_839(&(uParam0->f_206), cVar0);
	}
	if (BUILTIN::VDIST(Global_36, -150.6659f, -16.8569f, 95.28f) < 2f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	}
	if (func_652())
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_301, vLocal_594, true, false, true, true);
		return true;
	}
	else
	{
		func_689();
		func_690();
		if (bLocal_150)
		{
			__LIB_11__::func_733(&iLocal_300, &iLocal_313, &Local_374, 4f, -1082130432 /* Float: -1f */, 0);
		}
	}
	return false;
}

bool func_298()
{
	int iVar0;
	if (func_694(4))
	{
		return true;
	}
	iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), -164.0416f, -34.3493f, 94.0192f) < 5f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vLocal_609) < 5f)
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, 771.0912f, 289.6954f, 114.2774f, true, false, true, true);
			func_695(4);
			return true;
		}
		else
		{
			func_695(4);
			return true;
		}
	}
	else
	{
		func_695(4);
		return true;
	}
	return false;
}

bool func_299(vector3 vParam0, float fParam3, bool bParam4)
{
	if (iLocal_172[1])
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		iLocal_301 = func_696(14, 1, 1, 0f, 0f, 0f, 0f, bParam4, 1, 0, 0, 1, 1, 178615350, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (__LIB_0__::func_272(iLocal_301, 257))
	{
		PED::_0xF7EA250B9A919E03(27283314, iLocal_301);
		PED::_0xF7EA250B9A919E03(327177806, iLocal_301);
		if (PED::_0x854BC9B1A1CCD034(27283314, iLocal_301) && PED::_0x854BC9B1A1CCD034(327177806, iLocal_301))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_301, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_301, true, true);
			}
			if (bParam4)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_301, vParam0, fParam3, true, false, true);
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_301, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_301, joaat("REL_GANG_DUTCHS"));
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 259, true);
			func_511(0);
			__LIB_1__::func_296(14, 1, 1, 1);
			__LIB_4__::func_705(14, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 307, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_301, 344, true);
			iLocal_172[1] = 1;
			return true;
		}
	}
	return false;
}

bool func_300()
{
	if (bLocal_139)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_292))
	{
		iLocal_292 = OBJECT::CREATE_OBJECT(iLocal_275, vLocal_594, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_292))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_275);
		bLocal_139 = true;
		return true;
	}
	return false;
}

bool func_301(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 1, "base", false, true);
		return false;
	}
	else if (!uParam0->f_1)
	{
		if ((func_299(vLocal_594, fLocal_597, 1) && func_300()) && func_323(vLocal_727, vLocal_730, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_485, iLocal_292, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_484, iLocal_291, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return false;
		}
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

bool func_302()
{
	if (bLocal_160)
	{
		return true;
	}
	if (!__LIB_1__::func_565(&uLocal_776))
	{
		uLocal_776 = GRAPHICS::_0xFA50F79257745E74(-466.4861f, 202.383f, 41.3731f, 1.5f, 1, 4, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_770))
	{
		iLocal_770 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_678, 0f, 0f, 61f, 15f, 15f, 10f, "DISMOUNT_VOL");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_764))
	{
		iLocal_764 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_742, vLocal_754, vLocal_745, "WATERS_EDGE_SMALL");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_765))
	{
		iLocal_765 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_748, vLocal_754, vLocal_751, "WATER_EDGE_LARGE");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_767))
	{
		iLocal_767 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-464.467f, 187.957f, 42.912f, 0f, 0f, 57f, 32f, 57f, 5f, "FISH_BLOCK_VOL");
		return false;
	}
	if (iLocal_472 == 0)
	{
		__LIB_0__::func_566(iLocal_767, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_767, 73728, 512, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_767, 73728, 512, 0, -1, -1, 2);
		iLocal_472 = PED::_0x4C39C95AE5DB1329(iLocal_767, false, 15);
		return false;
	}
	bLocal_160 = true;
	return true;
}

bool func_303()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_761))
	{
		iLocal_761 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-113.7305f, -17.88992f, 96.04501f, 0f, 0f, -18.3f, 6.504865f, 5.977349f, 2.698479f, "RABI1_HitchBlockingVol");
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_766))
	{
		iLocal_766 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_733, vLocal_736, vLocal_739, "CLEAR_VOL");
		return false;
	}
	if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_761) && VOLUME::_DOES_VOLUME_EXIST(iLocal_766)) && !__LIB_14__::func_124(13))
	{
		iLocal_471 = __LIB_11__::func_807(iLocal_761, 0, 0, 0);
		__LIB_3__::func_730(iLocal_766, 0, 0, 0, 0, 0);
		__LIB_18__::func_765(13);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_308))
	{
		iLocal_308 = func_702(0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_303))
	{
		iLocal_303 = func_702(1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_308))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_308, vLocal_695, fLocal_698, false, false, true);
		if (!__LIB_0__::func_491(iLocal_308, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_308, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_308, 48, true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_303, vLocal_699, fLocal_702, false, false, true);
		if (!__LIB_0__::func_491(iLocal_303, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_303, -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_303, 48, true);
		}
	}
	return true;
}

bool func_304()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_775))
	{
		iLocal_775 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-113.791f, -27.893f, 95.064f, 0f, 0f, 0f, 6f, 6f, 3f, "JACK_PLAY");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_775))
	{
		if (iLocal_477 == 0)
		{
			iLocal_477 = __LIB_11__::func_807(iLocal_775, 0, 0, 0);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_305()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_773))
	{
		iLocal_773 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-164.0416f, -34.3493f, 93.0192f, 0f, 0f, 0f, 5f, 4f, 5f, "ROCK_BLOCK");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_773))
	{
		if (iLocal_475 == 0)
		{
			iLocal_475 = __LIB_11__::func_807(iLocal_773, 0, 0, 0);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_307(var uParam0, vector3 vParam1, float fParam4)
{
	if (iLocal_172[0])
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
	{
		iLocal_300 = func_696(13, 1, 1, vParam1.x, vParam1.y, vParam1.z, fParam4, 1, 1, 0, 0, 0, 1, -922193456, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && __LIB_0__::func_272(iLocal_300, 257))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_300, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_300, true, true);
		}
		if (!__LIB_1__::func_410(ENTITY::GET_ENTITY_COORDS(iLocal_300, false, false), vParam1, 1f, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_300, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_300, vParam1, fParam4, true, false, true);
		}
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_300, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_300, joaat("REL_GANG_DUTCHS"));
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 153, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 301, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_300, 130, true);
		func_704();
		__LIB_12__::func_875(uParam0, iLocal_300, "ABIGAIL", 1);
		iLocal_172[0] = 1;
		return true;
	}
	return false;
}

char* func_308()
{
	char* sVar0;
	if (func_705())
	{
		if (__LIB_3__::func_411(Global_35, joaat("HATS"), 0))
		{
			sVar0 = "2-NightVersion-PlayerWearingHat";
		}
		else
		{
			sVar0 = "3-NightVersion-PlayerNotWearingHat";
		}
		bLocal_143 = true;
	}
	else
	{
		sVar0 = "1-DayVersion";
	}
	return sVar0;
}

void func_311()
{
	if (!__LIB_14__::func_124(9))
	{
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), false, true, true, 60f, false);
		__LIB_18__::func_765(9);
	}
}

void func_312(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) != iParam0)
	{
		__LIB_0__::func_467(&iVar0, iParam0);
		__LIB_0__::func_468(&iVar0, iParam1);
		__LIB_0__::func_469(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
	}
}

void func_313(var uParam0)
{
	if (!__LIB_14__::func_124(18))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
		{
			__LIB_12__::func_875(uParam0, iLocal_301, "JACK", 1);
			__LIB_18__::func_765(18);
		}
	}
}

void func_314(int iParam0, int iParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[iParam0 /*6*/]))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[iParam0 /*6*/], true, false))
		{
			return;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[iParam0 /*6*/], false))
		{
			switch (iParam0)
			{
				case 1:
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[iParam0 /*6*/], "base");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_301))
						{
							return;
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_301, true, true);
					}
					break;
				case 5:
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[iParam0 /*6*/], "pblBase");
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
					{
						return;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[iParam0 /*6*/], "AbigailRoberts", iLocal_300, 0);
						TASK::CLEAR_PED_TASKS(iLocal_300, true, false);
					}
					break;
				case 6:
					break;
			}
			ANIMSCENE::START_ANIM_SCENE(Local_926[iParam0 /*6*/]);
		}
		if (Local_926[iParam0 /*6*/].f_5 == iParam1)
		{
			return;
		}
		Local_926[iParam0 /*6*/].f_5 = iParam1;
		switch (Local_926[iParam0 /*6*/].f_5)
		{
			case 1:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[iParam0 /*6*/], "base"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[iParam0 /*6*/], "base", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[iParam0 /*6*/], "Internal_Loop", false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[iParam0 /*6*/], "Exit");
				}
				break;
			case 2:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[iParam0 /*6*/], "Exit"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[iParam0 /*6*/], "Exit", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[iParam0 /*6*/], "Internal_Loop", true, false);
				}
				break;
			case 6:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[iParam0 /*6*/], "pblBase"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[iParam0 /*6*/], "pblBase", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[iParam0 /*6*/], "InternalLoop", false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[iParam0 /*6*/], "Leadin");
				}
				break;
			case 7:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[iParam0 /*6*/], "Leadin"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[iParam0 /*6*/], "Leadin", true);
					AUDIO::START_PRELOADED_CONVERSATION("ABI1_RSC4_LEAD");
				}
				break;
			case 8:
				break;
		}
	}
}

void func_317(bool bParam0)
{
	__LIB_4__::func_705(14, 0);
	if (bParam0)
	{
		__LIB_0__::func_900(14);
	}
	else
	{
		__LIB_0__::func_745(14);
	}
}

void func_319(var uParam0, int iParam1, int iParam2)
{
	__LIB_12__::func_937(uParam0, iParam2);
	iLocal_785 = iParam2;
}

bool func_321(var uParam0, vector3 vParam1, int iParam4)
{
	if (__LIB_14__::func_53(uParam0, &iLocal_306, vParam1, iParam4, 1, 1, 1, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_306, 300, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 300, true);
			PED::_SET_PED_SCALE(iLocal_306, 1f);
			return true;
		}
	}
	return false;
}

bool func_322(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		bParam1 = true;
	}
	if (bParam0)
	{
		func_736(bParam1);
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
		{
			__LIB_1__::func_564(0);
			return true;
		}
	}
	else
	{
		func_737(1);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
		{
			return true;
		}
	}
	return false;
}

bool func_323(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vParam0, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
	{
		if (__LIB_0__::func_138(vParam3, vLocal_727))
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_291, vLocal_730, 2, true);
		}
		if (bParam6)
		{
			__LIB_18__::func_765(5);
		}
		return true;
	}
	return false;
}

void func_325()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (func_384(18))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
			{
				ENTITY::DETACH_ENTITY(iLocal_291, false, true);
				func_738(18);
			}
		}
		if (!func_384(19))
		{
			if (PED::_GET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInLeftHand"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInLeftHand", false, -1);
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInRightHand"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInRightHand", false, -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_291, iLocal_306, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245), vLocal_721, vLocal_724, false, false, false, false, 2, true, false, false);
			__LIB_18__::func_766(5);
			func_333(19);
		}
	}
}

void func_327(vector3 vParam0, bool bParam3)
{
	__LIB_0__::func_325(&iLocal_137);
	if (!bParam3)
	{
		iLocal_137 = __LIB_4__::func_983(408396114, vParam0, 1);
		if (MAP::DOES_BLIP_EXIST(iLocal_137))
		{
			if (__LIB_0__::func_175(vParam0, vLocal_684, 1056964608 /* Float: 0.5f */, 1))
			{
				if (bLocal_161)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_768))
					{
						PATHFIND::_0xF2A2177AC848B3A8(iLocal_768, 0, 1);
					}
				}
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_CBLIP");
			}
		}
	}
	else if (__LIB_0__::func_175(vParam0, vLocal_675, 1056964608 /* Float: 0.5f */, 1))
	{
		if (bLocal_168)
		{
			iLocal_137 = __LIB_8__::func_775(1259054292, iLocal_764, 1);
		}
		else
		{
			iLocal_137 = __LIB_8__::func_775(1259054292, iLocal_765, 1);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
	}
	else if (__LIB_0__::func_175(vParam0, vLocal_678, 1056964608 /* Float: 0.5f */, 1))
	{
		iLocal_137 = __LIB_8__::func_775(-308585968, iLocal_770, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_137))
	{
		if (BUILTIN::VDIST(Global_36, MAP::GET_BLIP_COORDS(iLocal_137)) > 40f)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_137, -1878373110);
		}
		if (__LIB_0__::func_175(vParam0, vLocal_675, 1056964608 /* Float: 0.5f */, 1))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_137, "RABI1_FBLIP");
		}
	}
	vLocal_681 = { vParam0 };
}

bool func_328(bool bParam0)
{
	int iVar0;
	iVar0 = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	if (bParam0)
	{
		if (!func_742())
		{
			return false;
		}
	}
	if (!__LIB_0__::func_75(&uLocal_516))
	{
		__LIB_1__::func_283(&uLocal_516, 0);
	}
	if (__LIB_0__::func_264(&uLocal_516) < 15f)
	{
		if (iVar0 > 0)
		{
			return false;
		}
		else
		{
			__LIB_0__::func_37(&uLocal_516);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_516);
		return true;
	}
	return false;
}

void func_329(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 297, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 315, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 130, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 331, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 330, bParam0);
}

void func_330()
{
	iLocal_189 = __LIB_0__::func_645(joaat("KILLS"), joaat("WILD_ANIMAL"));
	iLocal_190 = __LIB_0__::func_645(joaat("KILLS"), joaat("TRAMPLE"));
}

void func_331()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_333(int iParam0)
{
	if (!func_384(iParam0))
	{
		MISC::SET_BIT(&iLocal_195, iParam0);
	}
}

void func_334(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (func_384(19))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_291))
			{
				ENTITY::DETACH_ENTITY(iLocal_291, false, true);
				func_738(19);
			}
		}
		if (ENTITY::_IS_ENTITY_FROZEN(iLocal_291))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, false);
		}
		func_744(bParam0);
		if (bParam0)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 37709), vLocal_703, vLocal_706, false, false, false, false, 2, true, false, false);
		}
		else
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 7966), vLocal_709, vLocal_712, false, false, false, false, 2, true, false, false);
		}
		if (!bParam1)
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, false);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
			__LIB_18__::func_765(5);
		}
		func_333(18);
	}
}

void func_336()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_310[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_310[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_310[iVar0], true);
				PED::_0xC9151483CC06A414(iLocal_310[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_346(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "cautious") <= 0f)
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "cautious", 1f, -1);
	}
	func_313(uParam0);
	func_738(17);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_773))
	{
		__LIB_11__::func_579(&iLocal_475, iLocal_773, 0);
		VOLUME::_DELETE_VOLUME(iLocal_773);
	}
	func_323(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 0f, 0f, 0f, 1);
	func_334(1, 1);
	__LIB_18__::func_765(5);
	func_371(1, 1, 0);
	if (!__LIB_0__::func_491(iLocal_301, 1056466932))
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
	}
	func_317(0);
	__LIB_12__::func_623(1);
	__LIB_1__::func_646(0);
	__LIB_1__::func_666(0);
	TASK::CLEAR_PED_TASKS(iLocal_306, true, false);
	TASK::TASK_STAND_STILL(iLocal_306, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
	fLocal_925 = func_437();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_310[0]))
	{
		__LIB_2__::func_426(&(iLocal_310[0]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_310[1]))
	{
		__LIB_2__::func_426(&(iLocal_310[1]));
	}
	__LIB_1__::func_951(&iLocal_296);
	__LIB_1__::func_951(&iLocal_294);
	__LIB_1__::func_951(&iLocal_295);
	HUD::_0x160825DADF1B04B3();
	func_397();
	__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
	__LIB_13__::func_89(uParam0, Local_825[4 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	func_319(uParam0, iLocal_785, 14);
}

bool func_347(bool bParam0)
{
	if (__LIB_14__::func_124(10))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (__LIB_12__::func_637(&iLocal_306, vLocal_684, fLocal_687, 1, 1, 1, 1))
		{
			POPULATION::_0xF74E134F40192884(iLocal_306, 2);
			if (bParam0)
			{
				PHYSICS::_0x06AADE17334F7A40(iLocal_306, -116.5877f, -17.9793f, 95.3f);
			}
			__LIB_18__::func_765(10);
			return true;
		}
	}
	return false;
}

bool func_348(var uParam0, bool bParam1, int iParam2)
{
	if (__LIB_14__::func_124(0))
	{
		return true;
	}
	if (!func_748())
	{
		return false;
	}
	if (__LIB_0__::func_94(Global_35, vLocal_568, 0) < 150f || bParam1)
	{
		if (func_303())
		{
			if (!func_749())
			{
				return false;
			}
			if (!func_307(uParam0, vLocal_568, fLocal_571))
			{
				return false;
			}
			if (!func_750())
			{
				return false;
			}
			if (!func_751(&(Local_926[5 /*6*/])))
			{
				return false;
			}
			if (!func_752(&(Local_926[6 /*6*/]), iParam2))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_307))
			{
				func_314(5, 6);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_307, vLocal_583, fLocal_586, true, false, true);
				__LIB_1__::func_473(iLocal_307, joaat("PROP_HUMAN_SEAT_CHAIR_READING"), -1, 0, 0, -1082130432 /* Float: -1f */);
				if (!__LIB_0__::func_491(iLocal_307, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_307, -1);
				}
				__LIB_18__::func_765(0);
				func_294(uParam0, 2);
				return true;
			}
		}
	}
	return false;
}

int func_366(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_784(uParam4);
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
				func_791(uParam4);
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
					func_792(&(uParam4->f_405), 0);
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
				func_791(uParam4);
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

void func_370(var uParam0)
{
	func_797();
	func_313(uParam0);
	func_347(1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_308))
	{
		TASK::TASK_STAND_STILL(iLocal_308, -1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		TASK::TASK_STAND_STILL(iLocal_303, -1);
	}
	if (!__LIB_1__::func_502(&(Local_453[0 /*17*/])))
	{
		__LIB_2__::func_602(&(Local_453[0 /*17*/]), "RABI1_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	}
	func_317(1);
	PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_301, "RABI1_ANTI_GRIEF", vLocal_594, 0, 0);
	__LIB_13__::func_89(uParam0, Local_825[0 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	bLocal_156 = true;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_760))
	{
		__LIB_11__::func_579(&iLocal_473, iLocal_760, 0);
		VOLUME::_DELETE_VOLUME(iLocal_760);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[1 /*6*/], false))
	{
		func_314(1, 1);
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	func_319(uParam0, iLocal_785, 2);
}

void func_371(bool bParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
	{
		if (bParam0)
		{
			if (!__LIB_0__::func_866(14, 0))
			{
				__LIB_1__::func_551(14, bParam1);
			}
			if (bParam2)
			{
				__LIB_0__::func_705(14, 1);
				func_800(14, 10);
			}
		}
		else
		{
			if (__LIB_0__::func_866(14, 0))
			{
				__LIB_1__::func_640(14);
			}
			if (!__LIB_0__::func_491(iLocal_301, -982327190))
			{
				TASK::TASK_STAND_STILL(iLocal_301, -1);
			}
		}
	}
}

bool func_374(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_13__::func_917(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
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
				__LIB_13__::func_532(uParam0);
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

void func_378()
{
	switch (iLocal_792)
	{
		case 0:
			func_843();
			iLocal_792 = 3;
			break;
		case 1:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_301, &Local_198);
			break;
		case 2:
			if (__LIB_4__::func_149(0) && __LIB_1__::func_673(0))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_301, &Local_198);
			}
			break;
		case 3:
			break;
	}
}

void func_379()
{
	switch (iLocal_793)
	{
		case 0:
			func_846();
			iLocal_793 = 3;
			break;
		case 1:
			if (PED::_0x550CB89DD7F4FA3D(Global_35, iLocal_300))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_248);
			}
			break;
		case 2:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_223);
			break;
	}
}

void func_380()
{
	if (!func_694(5))
	{
		if (bLocal_152)
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				PED::_SET_PED_SCALE(iLocal_301, 0.85f);
				func_695(5);
			}
		}
	}
	else if (!bLocal_152 || !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		PED::_SET_PED_SCALE(iLocal_301, 1f);
		func_847(5);
	}
}

void func_381()
{
	if (__LIB_14__::func_124(9))
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		__LIB_18__::func_766(9);
	}
}

void func_382()
{
	if (BUILTIN::VDIST(vLocal_605, Global_36) < 3f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), false);
	}
}

bool func_384(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_195, iParam0))
	{
		return true;
	}
	return false;
}

void func_385()
{
	if (iLocal_785 < 9)
	{
		func_849(10);
	}
	else if (iLocal_785 == 12 || iLocal_785 == 13)
	{
		func_849(11);
	}
	else
	{
		func_849(12);
	}
}

void func_386(var uParam0)
{
	switch (iLocal_813)
	{
		case 0:
			if (iLocal_785 >= 12)
			{
				func_850(iLocal_813, 4);
			}
			else if ((((func_409() && !__LIB_6__::func_904()) && !__LIB_0__::func_270()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN())
			{
				if (__LIB_12__::func_876(uParam0, "ABI1_OUTBNT1", 0))
				{
					func_850(iLocal_813, 1);
				}
			}
			break;
		case 1:
			if (!__LIB_6__::func_903("ABI1_OUTBNT1"))
			{
				func_695(3);
				func_850(iLocal_813, 4);
			}
			else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("ABI1_OUTBNT1") >= 19)
			{
				if (!bLocal_154)
				{
					func_420(14);
					__LIB_18__::func_767(8, 14, 1);
					__LIB_0__::func_45("RABI1_COMIC", 7000, 0, 0, 0, 1);
					bLocal_154 = true;
				}
				func_850(iLocal_813, 3);
			}
			break;
		case 2:
			if ((func_852() && AUDIO::_0xD89504D9D7D5057D("ABI1_OUTBNT1")) && AUDIO::_0xF01C570E0A0A1E67("ABI1_OUTBNT1"))
			{
				AUDIO::RESTART_SCRIPTED_CONVERSATION("ABI1_OUTBNT1");
				func_850(iLocal_813, 1);
			}
			break;
		case 3:
			if (!__LIB_6__::func_903("ABI1_OUTBNT1"))
			{
				func_695(3);
				func_850(iLocal_813, 4);
			}
			break;
	}
}

void func_387()
{
	switch (iLocal_1041)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				if (__LIB_14__::func_124(5))
				{
					iLocal_1041 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_14__::func_124(5))
			{
				func_853(iLocal_301, iLocal_291);
			}
			else
			{
				func_508();
				iLocal_1041 = 0;
			}
			break;
	}
}

void func_389()
{
	float fVar0;
	switch (iLocal_811)
	{
		case 0:
			func_855(iLocal_811, 1);
			break;
		case 1:
			__LIB_4__::func_228(&uLocal_36);
			bLocal_158 = true;
			func_855(iLocal_811, 2);
			break;
		case 2:
			if (bLocal_156)
			{
				func_855(iLocal_811, 3);
			}
			break;
		case 3:
			fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false), vLocal_575);
			if (fVar0 < 1.2f)
			{
				__LIB_2__::func_915(iLocal_300, joaat("WORLD_HUMAN_POCKET_MIRROR"), vLocal_575, fLocal_578, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
				func_855(iLocal_811, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_12() != 71 || iLocal_785 > 14)
			{
				bLocal_158 = false;
				func_855(iLocal_811, 6);
			}
			else if (__LIB_12__::func_626(iLocal_300, 0, &uLocal_36, &uLocal_64, 0, 0) || __LIB_12__::func_626(iLocal_309, 0, &uLocal_36, &uLocal_64, 0, 0))
			{
				__LIB_6__::func_900("ABI1_ABDWDLE", 0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_300, Global_35, 1, 65536, -1082130432 /* Float: -1f */, -1, 0);
				bLocal_157 = true;
				func_855(iLocal_811, 6);
			}
			break;
		case 6:
			__LIB_1__::func_774(13, 0, 1, 0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			iLocal_172[0] = 0;
			func_855(iLocal_811, 7);
			break;
		case 7:
			break;
	}
}

void func_390(var uParam0)
{
	switch (iLocal_824)
	{
		case 0:
			if (iLocal_811 == 4)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_772))
				{
					iLocal_772 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_300, 0f, 4f, 0f), 0f, 0f, 0f, 8f, 8f, 3f);
				}
				else
				{
					iLocal_824 = 1;
				}
			}
			break;
		case 1:
			if (func_859())
			{
				__LIB_1__::func_148(&uLocal_549);
				iLocal_824 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_549) > 3f)
			{
				if (func_859())
				{
					TASK::_0xE7FA07624574B79A(iLocal_300, Global_35, 2, 1, -1f, 1, 0, 0, 0);
					iLocal_824 = 3;
				}
				else
				{
					__LIB_0__::func_37(&uLocal_549);
					iLocal_824 = 1;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_549) > 4f)
			{
				if (func_859())
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_ABDWDLE", 0))
					{
						__LIB_0__::func_37(&uLocal_549);
						iLocal_824 = 4;
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_549);
					TASK::_0x541E5B41DCA45828(iLocal_300, 1, 0);
					iLocal_824 = 1;
				}
			}
			break;
		case 4:
			if (!__LIB_6__::func_903("ABI1_ABDWDLE"))
			{
				TASK::_0x541E5B41DCA45828(iLocal_300, 1, 0);
				iLocal_197++;
				if (iLocal_197 >= 3)
				{
					__LIB_0__::func_172(iLocal_772);
					iLocal_824 = 5;
				}
				else
				{
					iLocal_824 = 1;
				}
			}
			break;
	}
}

bool func_391()
{
	int iVar0;
	iVar0 = 1;
	if (!func_860(&(Local_926[8 /*6*/])))
	{
		iVar0 = 0;
	}
	if (!func_860(&(Local_926[9 /*6*/])))
	{
		iVar0 = 0;
	}
	if (!func_860(&(Local_926[10 /*6*/])))
	{
		iVar0 = 0;
	}
	if (!func_860(&(Local_926[7 /*6*/])))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_392(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_301) };
	vVar0 = { __LIB_0__::func_173(vVar0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false) };
	iVar6 = -1;
	func_653();
	func_304();
	if (!bLocal_143)
	{
		func_389();
		func_390(uParam0);
	}
	if (__LIB_0__::func_94(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 1) < (9f + 2f))
	{
		__LIB_14__::func_131();
	}
	if (iLocal_790 == 0)
	{
		if (__LIB_1__::func_588(Local_825[0 /*9*/].f_2, 0, 0, -1, -1, 0))
		{
			func_403(&(Local_825[0 /*9*/]), 0, 0);
		}
		iLocal_191 = -1;
		iVar6 = func_863(&iLocal_301, &iLocal_392, 9f, &Local_453, 0f, 3, 1, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (!__LIB_6__::func_904())
		{
			if ((func_864(vVar3, 9f, vVar0, -25f, 60f, 255, 0, 0) || func_864(vVar3, 9f, vVar0, 60f, 145f, 0, 255, 0)) || func_864(vVar3, 9f, vVar0, -145f, -25f, 0, 0, 255))
			{
				if (!__LIB_2__::func_466(&(Local_453[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_453[0 /*17*/]), 1, 0);
				}
				if (iVar6 == 0)
				{
					__LIB_2__::func_480(&Local_453, 1, 1, 1, 0);
					__LIB_1__::func_480(&iLocal_301);
					func_329(1);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
					func_404(0);
					if (func_864(vVar3, 9f, vVar0, -25f, 60f, 255, 0, 0))
					{
						func_314(9, 0);
						iLocal_191 = 9;
						iLocal_790 = 1;
						sLocal_488 = "RSC_ABI1_CENTRE";
					}
					if (func_864(vVar3, 9f, vVar0, 60f, 145f, 0, 255, 0))
					{
						func_314(8, 0);
						iLocal_191 = 8;
						iLocal_790 = 2;
						sLocal_488 = "RSC_ABI1_LEFT";
					}
					if (func_864(vVar3, 9f, vVar0, -145f, -25f, 0, 0, 255))
					{
						iLocal_790 = 3;
						func_314(10, 0);
						iLocal_191 = 10;
						sLocal_488 = "RSC_ABI1_RIGHT";
					}
					if (iLocal_790 != 0)
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_301, sLocal_488, vLocal_594, 0, 0);
						func_314(7, 0);
						if (__LIB_4__::func_68("RABI1_GOJACK", 1))
						{
							__LIB_1__::func_390("RABI1_GOJACK", 1);
						}
						__LIB_0__::func_325(&iLocal_137);
					}
				}
			}
			else if (__LIB_2__::func_466(&(Local_453[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_411(&(Local_453[0 /*17*/]), 0, 0);
			}
		}
		else if (__LIB_2__::func_466(&(Local_453[0 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(Local_453[0 /*17*/]), 0, 0);
		}
	}
	else
	{
		__LIB_1__::func_538(0);
		if (iLocal_191 != -1 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[iLocal_191 /*6*/], false))
		{
			iLocal_792 = 1;
			func_319(uParam0, iLocal_785, 3);
		}
	}
}

void func_394(var uParam0)
{
	func_870(uParam0);
	switch (iLocal_812)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[2 /*6*/]))
			{
				Local_926[2 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_926[2 /*6*/].f_3, 0, 0, false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_926[2 /*6*/]);
				func_871(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[2 /*6*/], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[2 /*6*/], sLocal_484, iLocal_291, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[2 /*6*/], "JackMarston", iLocal_301, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[2 /*6*/], "ARTHUR", Global_35, 0);
				func_871(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_926[2 /*6*/], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_926[2 /*6*/], "JackMarston", &Local_89, false, 0, 2))
				{
					vLocal_598 = { Local_89 };
					fLocal_601 = Local_89.f_3.f_2;
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_926[iLocal_191 /*6*/], "JackMarston"))
					{
						if (!ENTITY::_IS_ENTITY_FROZEN(iLocal_291))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, true);
						}
						func_329(1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_598, 1.5f, -1, 0.25f, 0, fLocal_601);
						iLocal_792 = 3;
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
						func_317(0);
						func_871(3);
					}
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[iLocal_191 /*6*/]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[iLocal_191 /*6*/], false))
			{
				func_872();
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[2 /*6*/], false))
			{
				if (__LIB_0__::func_94(iLocal_301, vLocal_598, 0) < 2f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 713668775, true) == 8)
					{
						if (ENTITY::_IS_ENTITY_FROZEN(iLocal_291))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, false);
						}
						ANIMSCENE::START_ANIM_SCENE(Local_926[2 /*6*/]);
					}
				}
				else if (!__LIB_0__::func_491(iLocal_301, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_598, 1.5f, -1, 0.25f, 0, fLocal_601);
				}
			}
			else
			{
				func_744(1);
				func_871(5);
			}
			break;
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 1369124074, true) == 8)
			{
				func_871(5);
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_926[2 /*6*/], "JackMarston"))
				{
					func_334(1, 1);
				}
			}
			if (ANIMSCENE::_0xF94692EB9DC15D74(Local_926[2 /*6*/], 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_926[2 /*6*/]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_291))
				{
					bLocal_159 = true;
					iLocal_792 = 1;
					func_871(6);
				}
			}
			break;
		case 6:
			break;
	}
}

void func_397()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		__LIB_1__::func_718(7);
		__LIB_1__::func_643();
	}
}

void func_398(var uParam0)
{
	switch (iLocal_788)
	{
		case 0:
			if (iLocal_812 == 6)
			{
				if (!func_211())
				{
					if (!__LIB_5__::func_463())
					{
						if (!__LIB_0__::func_75(&uLocal_510))
						{
							__LIB_1__::func_148(&uLocal_510);
						}
						else if (__LIB_0__::func_264(&uLocal_510) > 7f)
						{
							if (__LIB_0__::func_665(Global_35, iLocal_301, 0, 1) > 15f)
							{
								if (__LIB_12__::func_876(uParam0, "ABI1_JBORE1", 0))
								{
									__LIB_0__::func_37(&uLocal_510);
								}
							}
							else if (__LIB_0__::func_665(Global_35, iLocal_301, 0, 1) < 2f)
							{
								if (__LIB_12__::func_876(uParam0, "ABI1_ARTFOLLO", 0))
								{
									__LIB_0__::func_37(&uLocal_510);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "ABI1_JBORE2", 0))
							{
								__LIB_0__::func_37(&uLocal_510);
							}
						}
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_510);
					__LIB_5__::func_20(1, 0);
					iLocal_788 = 1;
				}
			}
			break;
		case 1:
			break;
	}
}

void func_399()
{
	switch (iLocal_807)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[3 /*6*/]))
			{
				Local_926[3 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_926[3 /*6*/].f_3, 0, "pl_IG7_Mount_Left", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_926[3 /*6*/]);
				func_876(iLocal_807, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[3 /*6*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !ENTITY::IS_ENTITY_DEAD(iLocal_291))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[3 /*6*/], "JackMarston", iLocal_301, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[3 /*6*/], "p_fishingpole01x", iLocal_291, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[3 /*6*/], "ARTHUR", Global_35, 0);
					func_876(iLocal_807, 3);
				}
			}
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[3 /*6*/], "pl_IG7_Mount_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[3 /*6*/], "pl_IG7_Mount_Right");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[3 /*6*/], "pl_IG7_Mount_Left") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[3 /*6*/], "pl_IG7_Mount_Right"))
			{
				if (func_211() && bLocal_159)
				{
					func_402();
					iLocal_792 = 1;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, func_877(), 1.5f, -1, 0.25f, 0, (ENTITY::GET_ENTITY_HEADING(Global_35) + 180f));
					func_876(iLocal_807, 4);
				}
			}
			break;
		case 4:
			func_402();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
			{
				if (__LIB_0__::func_94(iLocal_301, Global_36, 0) < 4f && TASK::IS_PED_STILL(iLocal_306))
				{
					TASK::TASK_STAND_STILL(iLocal_306, -1);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_926[3 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_306, 2), 2);
					func_876(iLocal_807, 5);
				}
				else if (!__LIB_0__::func_491(iLocal_301, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, func_877(), 1.5f, -1, 0.25f, 0, (ENTITY::GET_ENTITY_HEADING(Global_35) + 180f));
				}
			}
			break;
		case 5:
			func_402();
			if (func_878())
			{
				if (func_879(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), &iLocal_306))
				{
					vLocal_1007 = { Local_113 };
					uLocal_1010 = Local_113.f_3.f_2;
				}
				else
				{
					vLocal_1007 = { Local_101 };
					uLocal_1010 = Local_101.f_3.f_2;
				}
				if (!func_880(vLocal_1007))
				{
					vLocal_1007 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false) };
				}
				bLocal_1005 = false;
				bLocal_1006 = false;
				func_876(iLocal_807, 2);
			}
			break;
		case 2:
			func_402();
			if (((!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !PED::IS_PED_RAGDOLL(iLocal_301)) && !TASK::IS_PED_GETTING_UP(iLocal_301)) && !PED::_IS_PED_FALLING_2(iLocal_301))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_926[3 /*6*/], 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_926[3 /*6*/], iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245));
				__LIB_0__::func_37(&uLocal_1011);
				if (func_879(ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), &iLocal_306))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[3 /*6*/], "pl_IG7_Mount_Right", true);
					TASK::TASK_ENTER_ANIM_SCENE(iLocal_301, Local_926[3 /*6*/], "JackMarston", "pl_IG7_Mount_Right", 1f, 1, 576, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[3 /*6*/], "pl_IG7_Mount_Left", true);
					TASK::TASK_ENTER_ANIM_SCENE(iLocal_301, Local_926[3 /*6*/], "JackMarston", "pl_IG7_Mount_Left", 1f, 1, 576, 20000, -1082130432 /* Float: -1f */);
				}
				func_876(iLocal_807, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_926[3 /*6*/]) > 3.6f)
			{
				func_325();
			}
			if (__LIB_14__::func_124(5))
			{
				if (__LIB_0__::func_94(iLocal_301, vLocal_1007, 0) < 1f)
				{
					iLocal_792 = 3;
					__LIB_18__::func_766(5);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 543713790))
			{
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[3 /*6*/], false) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 543713790))
			{
				bLocal_159 = false;
				iLocal_792 = 3;
				iLocal_793 = 3;
				func_371(0, 1, 0);
				if (!PED::IS_PED_ON_MOUNT(iLocal_301))
				{
					PED::_SET_PED_ON_MOUNT(iLocal_301, iLocal_306, 1, true);
				}
				bLocal_152 = true;
				func_876(iLocal_807, 7);
			}
			else
			{
				func_402();
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[3 /*6*/], false))
			{
				ANIMSCENE::RESET_ANIM_SCENE(Local_926[3 /*6*/], 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_926[3 /*6*/]);
				func_876(iLocal_807, 0);
			}
			break;
		case 8:
			break;
	}
}

void func_400()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		__LIB_1__::func_721(7);
	}
}

void func_402()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
}

void func_403(var uParam0, float fParam1, float fParam2)
{
	if (*uParam0 != 2)
	{
		if (!uParam0->f_1)
		{
			if (__LIB_5__::func_352(uParam0->f_2))
			{
				if (__LIB_0__::func_75(&(uParam0->f_3)))
				{
					__LIB_0__::func_37(&(uParam0->f_3));
				}
				uParam0->f_1 = 1;
				*uParam0 = 2;
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_1__::func_148(&(uParam0->f_3));
			uParam0->f_6 = { Global_36 };
			*uParam0 = 1;
			break;
		case 1:
			if (__LIB_0__::func_265(&(uParam0->f_3)) > fParam1)
			{
				if (fParam2 > 0f)
				{
					if (BUILTIN::VDIST(uParam0->f_6, Global_36) < fParam2)
					{
						__LIB_1__::func_422(uParam0->f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
					}
				}
				else
				{
					__LIB_1__::func_422(uParam0->f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				uParam0->f_1 = 1;
				*uParam0 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_404(int iParam0)
{
	__LIB_0__::func_769();
	__LIB_10__::func_597(Local_825[iParam0 /*9*/].f_2);
}

void func_407()
{
	if (iLocal_785 < 16)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_301, Global_35, 1, 1))
		{
			__LIB_18__::func_765(4);
		}
		if (!__LIB_0__::func_75(&uLocal_1022))
		{
			if ((iLocal_785 != 14 && bLocal_152) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_926[3 /*6*/], false))
			{
				if (PED::IS_PED_FALLING(iLocal_306))
				{
					__LIB_1__::func_148(&uLocal_1022);
				}
			}
		}
		else if (__LIB_0__::func_265(&uLocal_1022) > 3f || !PED::IS_PED_FALLING(iLocal_306))
		{
			if (!__LIB_0__::func_272(iLocal_306, 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				__LIB_18__::func_765(4);
			}
		}
	}
}

void func_408(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	sVar0 = "NULL";
	func_882();
	if (((!__LIB_4__::func_68("RABI1_GOFISH", 1) && !__LIB_4__::func_68("RABI1_RETHORSE", 1)) && !__LIB_4__::func_68("RABI1_GOMOUNT", 1)) && iLocal_813 == 4)
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_DANGEROUS_ANIMAL"), Global_36, 30f))
		{
			if (func_883(1))
			{
				sVar0 = "ABI1_JRDANGER";
			}
		}
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false);
		if ((__LIB_11__::func_3() && WEAPON::_0x705BE297EEBDB95D(iVar1)) && iVar1 != joaat("WEAPON_FISHINGROD"))
		{
			if (!__LIB_14__::func_124(11))
			{
				if (func_883(5))
				{
					sVar0 = "ABI1_JRGUNOUT";
				}
			}
		}
		else if (__LIB_14__::func_124(11))
		{
			__LIB_18__::func_766(11);
		}
		if (PED::_0x285D36C5C72B0569(Global_35) < 2f && !__LIB_4__::func_207(iLocal_301, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
		{
			if (func_883(6))
			{
				sVar0 = "ABI1_JRFIRE";
			}
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (__LIB_0__::func_645(joaat("KILLS"), joaat("WILD_ANIMAL")) > iLocal_189 || __LIB_0__::func_645(joaat("KILLS"), joaat("TRAMPLE")) > iLocal_190)
			{
				if (func_883(7))
				{
					sVar0 = "ABI1_RUNOVER_AN";
				}
			}
		}
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PED_SHOT"), Global_36, 30f))
		{
			if (func_883(8))
			{
				sVar0 = "ABI1_JRPSHOT";
			}
		}
		if (__LIB_4__::func_207(iLocal_301, 45f, 45f, 1097859072 /* Float: 15f */, 0) && PED::_0x285D36C5C72B0569(Global_35) < 2f)
		{
			if (func_883(10))
			{
				sVar0 = "ABI1_JRFIREJ";
			}
		}
		if (!MISC::ARE_STRINGS_EQUAL(sVar0, "NULL"))
		{
			if (!__LIB_5__::func_463())
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_479) || MISC::ARE_STRINGS_EQUAL(sVar0, "ABI1_JRFIREJ"))
				{
					__LIB_0__::func_37(&uLocal_519);
					__LIB_0__::func_37(&uLocal_504);
					if (__LIB_12__::func_876(uParam0, sVar0, 0))
					{
						if (MISC::ARE_STRINGS_EQUAL(sVar0, "ABI1_JRGUNOUT"))
						{
							if (!__LIB_14__::func_124(11))
							{
								__LIB_18__::func_765(11);
							}
						}
						sLocal_479 = sVar0;
						func_330();
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Global_35);
						iLocal_791 = 0;
					}
				}
			}
			else
			{
				func_330();
			}
		}
		else
		{
			func_886(uParam0);
			if (bParam1)
			{
				func_887(uParam0);
			}
			if (!__LIB_0__::func_75(&uLocal_519))
			{
				__LIB_1__::func_148(&uLocal_519);
			}
			else if (__LIB_0__::func_265(&uLocal_519) > 20f)
			{
				__LIB_0__::func_37(&uLocal_519);
				iLocal_791 = 0;
				sLocal_479 = "NULL";
			}
		}
	}
}

bool func_409()
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::IS_PED_ON_MOUNT(iLocal_301))
	{
		return false;
	}
	else
	{
		iVar0 = __LIB_2__::func_825(Global_35);
		iVar1 = __LIB_2__::func_825(iLocal_301);
		if ((iVar0 == iVar1 && iLocal_809 != 3) && iLocal_810 != 3)
		{
			__LIB_10__::func_597("RABI1_RETJACK");
			__LIB_18__::func_766(1);
			return true;
		}
	}
	return false;
}

void func_415(var uParam0)
{
	if ((!func_409() && __LIB_0__::func_665(Global_35, iLocal_301, 0, 1) < 15f) && __LIB_0__::func_94(Global_35, vLocal_675, 0) > 25f)
	{
		if (!__LIB_5__::func_463())
		{
			if (!__LIB_0__::func_75(&uLocal_504))
			{
				if (!func_892(0.5f))
				{
					__LIB_1__::func_148(&uLocal_504);
				}
			}
			else if (__LIB_0__::func_265(&uLocal_504) > 15f)
			{
				if (!func_892(0.5f))
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_NOHORSE", 0))
					{
						__LIB_0__::func_37(&uLocal_504);
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_504);
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_504);
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_504);
	}
}

void func_416()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_0__::func_94(Global_35, vLocal_678, 0) < (15f + 10f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		}
	}
	__LIB_1__::func_694(Global_35, vLocal_678, 0, (15f + 20f), (15f + 10f), 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
}

bool func_417()
{
	func_418();
	if (func_302())
	{
		if (__LIB_2__::func_157(iLocal_770, Global_36))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(PED::GET_MOUNT(Global_35)))
			{
				func_513(0);
				return true;
			}
		}
	}
	return false;
}

void func_418()
{
	switch (iLocal_808)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[4 /*6*/]))
			{
				Local_926[4 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_926[4 /*6*/].f_3, 0, "pl_IG7_Dismont_Left", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_926[4 /*6*/]);
				iLocal_808 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[4 /*6*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[4 /*6*/], "JackMarston", iLocal_301, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_291))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[4 /*6*/], "p_fishingpole01x", iLocal_291, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[4 /*6*/], "ARTHUR", Global_35, 0);
				iLocal_808 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_75(&uLocal_513) && !__LIB_6__::func_904())
			{
				func_402();
				iLocal_792 = 3;
				TASK::TASK_STAND_STILL(iLocal_306, -1);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_926[4 /*6*/], 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_926[4 /*6*/], iLocal_306, PED::GET_PED_BONE_INDEX(iLocal_306, 29245));
				bLocal_152 = false;
				ANIMSCENE::START_ANIM_SCENE(Local_926[4 /*6*/]);
				iLocal_808 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_926[4 /*6*/]) > 5f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_291, true);
				func_744(1);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[4 /*6*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_926[4 /*6*/]))
			{
				func_334(1, 1);
				__LIB_18__::func_765(5);
				if (PED::IS_PED_ON_MOUNT(iLocal_301))
				{
					AITRANSPORT::_0x8886D83A430537FD(iLocal_301, 2097152);
				}
				func_371(0, 1, 0);
				func_894(4);
				iLocal_808 = 4;
			}
			else
			{
				func_402();
			}
			break;
		case 4:
			break;
	}
}

void func_420(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar3;
	var uVar4;
	switch (iParam0)
	{
		case 14:
			iVar0 = 1;
			break;
		case 23:
			iVar0 = 24;
			break;
		case 11:
			iVar0 = 29;
			break;
		case 18:
			iVar0 = 26;
			break;
		case 7:
			iVar0 = 5;
			break;
		case 17:
			iVar0 = 11;
			break;
		case 22:
			iVar0 = 16;
			break;
	}
	if (Global_40.f_4283.f_335[iVar0] == 0)
	{
		__LIB_5__::func_933(&uVar1, iVar0);
		__LIB_0__::func_45("REQ_TITHE", 10000, 0, 0, 0, 1);
		uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar4, __LIB_4__::func_73(iVar0 + 4));
		Global_1357549.f_1726[iVar0 + 4 /*3*/] = uVar3;
		Global_1357549.f_1726[iVar0 + 4 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "label", MISC::GET_HASH_KEY(&uVar1));
		Global_1357549.f_1726[iVar0 + 4 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "value", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, iVar0 + 4, "camp_item", uVar3);
		Global_40.f_4283.f_335[iVar0] = 1;
	}
}

void func_425()
{
	__LIB_8__::func_600(0, 1);
}

int func_426(int iParam0)
{
	return Global_1900073.f_220[iParam0];
}

void func_428(var uParam0)
{
	func_909();
	func_910();
	switch (iLocal_787)
	{
		case 0:
			if (!PED::IS_PED_ON_MOUNT(iLocal_301) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				Global_40.f_11184[0] = 0;
				__LIB_1__::func_646(0);
				__LIB_1__::func_666(0);
				__LIB_1__::func_668(0);
				__LIB_1__::func_669(0);
				__LIB_1__::func_670(0);
				func_425();
				__LIB_1__::func_290(14, 0, 0);
				func_371(0, 1, 0);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
				func_912(iLocal_787, 1);
			}
			break;
		case 1:
			func_913(uParam0, 0);
			if (!bLocal_166)
			{
				if (func_914())
				{
					if (__LIB_1__::func_647())
					{
						vLocal_602 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, vLocal_754.z, vLocal_591) };
						TASK::CLEAR_PED_TASKS(iLocal_301, true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_602, 1f, -1, 0.5f, 0, vLocal_754.z);
						bLocal_166 = true;
					}
				}
				else if (!__LIB_6__::func_903("ABI1_WHEREGO") && !__LIB_6__::func_903("ABI1_WAITSPOT"))
				{
					if (!__LIB_0__::func_75(&uLocal_1029))
					{
						__LIB_1__::func_148(&uLocal_1029);
					}
					else if (__LIB_0__::func_264(&uLocal_1029) > 3f)
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false)) < 10f)
						{
							if (__LIB_12__::func_876(uParam0, "ABI1_WAITSPOT", 0))
							{
								__LIB_0__::func_37(&uLocal_1029);
							}
						}
					}
				}
			}
			else if (__LIB_0__::func_94(iLocal_301, vLocal_602, 0) < 1f)
			{
				func_333(10);
				func_912(iLocal_787, 3);
			}
			else if (BUILTIN::VDIST(Global_36, vLocal_602) < 1f)
			{
				if (bLocal_166)
				{
					bLocal_166 = false;
				}
			}
			break;
		case 3:
			func_913(uParam0, 0);
			if (func_915() || func_916())
			{
				if ((!__LIB_6__::func_904() && !func_917()) && (iLocal_780 == 12 || iLocal_780 == 11))
				{
					__LIB_0__::func_37(&uLocal_552);
					bLocal_162 = true;
					func_912(iLocal_787, 4);
				}
			}
			break;
		case 4:
			func_913(uParam0, 0);
			if (!__LIB_6__::func_904())
			{
				if (!__LIB_14__::func_124(16))
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_JNECKL1", 0))
					{
						__LIB_18__::func_765(16);
						iLocal_792 = 2;
					}
				}
				else if (!__LIB_6__::func_903("ABI1_JNECKL1"))
				{
					func_333(8);
					if (func_384(9))
					{
						func_334(0, 1);
						func_371(0, 1, 0);
						if (__LIB_12__::func_876(uParam0, "ABI1_JPICYRW", 0))
						{
							func_912(iLocal_787, 5);
						}
					}
				}
			}
			break;
		case 5:
			func_913(uParam0, 1);
			func_918();
			if (func_384(9))
			{
				if (!__LIB_6__::func_903("ABI1_JPICYRW"))
				{
					bLocal_164 = true;
					__LIB_18__::func_766(16);
					func_912(iLocal_787, 6);
				}
			}
			break;
		case 6:
			func_913(uParam0, 1);
			func_918();
			if (iLocal_823 >= 6 || !bLocal_164)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 713668775, true) == 8)
				{
					if (!bLocal_168)
					{
						bLocal_168 = true;
					}
					func_919(iLocal_803, 4);
					func_912(iLocal_787, 7);
				}
			}
			break;
		case 7:
			func_913(uParam0, 1);
			break;
		case 8:
			break;
	}
}

void func_429()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
	{
		if (__LIB_1__::func_647() || iLocal_785 == 13)
		{
			if (!func_211())
			{
				if (__LIB_0__::func_94(iLocal_306, vLocal_587, 0) > 3f)
				{
					if (!__LIB_0__::func_491(iLocal_306, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_306, vLocal_587, 0.101f, -1, 0.25f, 0, fLocal_590);
					}
				}
				else if (!__LIB_0__::func_491(iLocal_306, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_306, -1);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
				}
			}
		}
	}
}

void func_430(var uParam0)
{
	if (func_914())
	{
		__LIB_18__::func_765(22);
		__LIB_10__::func_597(Local_825[8 /*9*/].f_2);
		__LIB_10__::func_597(Local_825[9 /*9*/].f_2);
		__LIB_0__::func_325(&iLocal_137);
		__LIB_1__::func_646(1);
		__LIB_1__::func_666(1);
		__LIB_1__::func_668(1);
		__LIB_1__::func_669(1);
		__LIB_1__::func_670(1);
		__LIB_1__::func_651(0, 0);
	}
	else
	{
		__LIB_1__::func_646(0);
		__LIB_1__::func_666(0);
		__LIB_1__::func_668(0);
		__LIB_1__::func_669(0);
		__LIB_1__::func_670(0);
		__LIB_1__::func_651(0, 1);
		if (!MAP::DOES_BLIP_EXIST(iLocal_137))
		{
			func_327(vLocal_675, 1);
		}
		if (!__LIB_14__::func_124(22))
		{
			if (!__LIB_1__::func_588(Local_825[8 /*9*/].f_2, 0, 0, -1, -1, 0))
			{
				__LIB_13__::func_89(uParam0, Local_825[8 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else
			{
				func_403(&(Local_825[8 /*9*/]), 0, 0);
			}
		}
		else if (bLocal_168 && __LIB_2__::func_157(iLocal_765, Global_36))
		{
			if (!__LIB_1__::func_588(Local_825[10 /*9*/].f_2, 0, 0, -1, -1, 0))
			{
				__LIB_13__::func_89(uParam0, Local_825[10 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else
			{
				func_403(&(Local_825[10 /*9*/]), 0, 0);
			}
		}
		else if (!__LIB_1__::func_588(Local_825[9 /*9*/].f_2, 0, 0, -1, -1, 0))
		{
			__LIB_13__::func_89(uParam0, Local_825[9 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		else
		{
			func_403(&(Local_825[9 /*9*/]), 0, 0);
		}
	}
}

void func_432()
{
	if (!__LIB_8__::func_608(0))
	{
		if (__LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false), 0f))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_301, 0, 1) < 15f)
			{
				if (iLocal_793 != 2)
				{
					iLocal_793 = 2;
				}
			}
			else if (iLocal_793 != 3)
			{
				iLocal_793 = 3;
			}
		}
		else if (iLocal_793 != 3)
		{
			iLocal_793 = 3;
		}
	}
	else if (iLocal_793 != 3)
	{
		iLocal_793 = 3;
	}
}

bool func_433()
{
	if (((iLocal_803 == 9 && func_916()) && !__LIB_8__::func_608(0)) && !__LIB_12__::func_611(0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		return true;
	}
	return false;
}

int func_436()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_768))
	{
		return 1;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_768))
	{
		iLocal_768 = VOLUME::_CREATE_VOLUME_CYLINDER(-404.017f, 338.872f, 66.16f, 0f, 0f, 0f, 132.75f, 109.25f, 34f);
	}
	return 0;
}

float func_437()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	return BUILTIN::VDIST(vVar0, vVar3);
}

void func_439(var uParam0)
{
	if (iLocal_188 < 1 && iLocal_785 == 15)
	{
		if (!__LIB_6__::func_904())
		{
			if (!__LIB_0__::func_75(&uLocal_507))
			{
				__LIB_1__::func_148(&uLocal_507);
			}
			else if (__LIB_0__::func_265(&uLocal_507) > 3f || __LIB_0__::func_94(Global_35, vLocal_1019, 0) > 5f)
			{
				switch (iLocal_188)
				{
					case 0:
						if (__LIB_12__::func_876(uParam0, "ABI1_BKTOCAMP", 0))
						{
							__LIB_0__::func_37(&uLocal_507);
							iLocal_188++;
						}
						break;
				}
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_507);
		}
	}
}

bool func_443()
{
	if (__LIB_0__::func_94(iLocal_306, vLocal_691, 0) < 3f)
	{
		if (ENTITY::GET_ENTITY_HEADING(iLocal_306) < (fLocal_694 + 15f) && ENTITY::GET_ENTITY_HEADING(iLocal_306) > (fLocal_694 - 15f))
		{
			return true;
		}
	}
	return false;
}

void func_446(var uParam0, int iParam1)
{
	iLocal_792 = 1;
	__LIB_0__::func_325(&iLocal_137);
	func_397();
	iLocal_786 = iLocal_785;
	iLocal_805 = iParam1;
	__LIB_13__::func_89(uParam0, Local_825[7 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	func_319(uParam0, iLocal_785, 7);
}

void func_481(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_964(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_964(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_964(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_964(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_964(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_964(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_964(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_964(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_964(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_964(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_964(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_964(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_964(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_966();
						func_967(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_964(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_481(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_974(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_481(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_481(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_964(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_964(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1002();
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
							func_964(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_508()
{
	if (Local_18 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_3);
	if (PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
	{
		PHYSICS::DELETE_ROPE(&(Local_18.f_8));
	}
	if (PHYSICS::DOES_ROPE_EXIST(Local_18.f_9))
	{
		PHYSICS::DELETE_ROPE(&(Local_18.f_9));
	}
	__LIB_1__::func_951(&(Local_18.f_5));
	__LIB_1__::func_951(&(Local_18.f_6));
	__LIB_1__::func_951(&(Local_18.f_7));
	func_1038(0);
}

void func_511(bool bParam0)
{
	if (!bParam0)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 262144);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_301, 262144);
	}
}

void func_512()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		func_894(iVar0);
		iVar0++;
	}
}

void func_513(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { -472.811f, 172.223f, 40.386f };
	vVar3 = { 0f, 0f, 56f };
	vVar6 = { 17f, 93f, 5f };
	if (bParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_769))
		{
			PATHFIND::_0xD17672447692478E(iLocal_769, 0);
		}
		__LIB_0__::func_172(iLocal_769);
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_769))
		{
			iLocal_769 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "RIVER_NODE_BLKR");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_769))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_769, 0, 0, 0);
		}
	}
}

void func_514()
{
	__LIB_4__::func_705(14, 1);
}

bool func_515(int iParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == uLocal_561[iParam0] && iVar0 != 0)
	{
		return true;
	}
	return false;
}

int func_567(int iParam0, int iParam1)
{
	var uVar0;
	return func_1075(&uVar0, iParam0, iParam1);
}

bool func_652()
{
	int iVar0;
	iVar0 = -1;
	switch (iLocal_784)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[0 /*6*/]))
			{
				Local_926[0 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_926[0 /*6*/].f_3, 0, "pl_leadin", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_926[0 /*6*/]);
				func_1130(iLocal_784, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[0 /*6*/], true, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_297) && !ENTITY::IS_ENTITY_DEAD(iLocal_300))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[0 /*6*/], "p_cs_book03x", iLocal_297, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[0 /*6*/], "AbigailRoberts", iLocal_300, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[0 /*6*/], "ARTHUR", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(Local_926[0 /*6*/]);
					PED::_0x2208438012482A1A(iLocal_300, false, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[0 /*6*/], "s_greet");
					MISC::_0xFC6ECB9170145ECE();
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_300, "RABI1_ANTI_GRIEF", ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false), 0, 0);
					func_1130(iLocal_784, 2);
				}
			}
			break;
		case 2:
			func_1131();
			if (iLocal_806 > 0)
			{
				iVar0 = func_863(&iLocal_300, &iLocal_313, 4f, &Local_374, 0f, 3, 1, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar0 == 0)
				{
					func_311();
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
					if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					}
					bLocal_150 = true;
					func_1130(iLocal_784, 6);
				}
			}
			break;
		case 6:
			func_1131();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			if (!PED::IS_PED_FACING_PED(Global_35, iLocal_300, 90f))
			{
				if (!__LIB_0__::func_491(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_300, 0, -1f, -1f, -1f);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[0 /*6*/]))
			{
				if (((ANIMSCENE::_0x1F0E401031E20146(Local_926[0 /*6*/], "s_postgreetleadin") && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_926[0 /*6*/]) >= 3.1f) || ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_926[0 /*6*/]) >= 14.2f) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[0 /*6*/], false))
				{
					func_1130(iLocal_784, 7);
					return true;
				}
			}
			break;
		case 7:
			return true;
	}
	return false;
}

bool func_653()
{
	if (iLocal_172[2])
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_302))
	{
		iLocal_302 = func_696(1, 1, 1, 3750f, 156.3f, 50.33f, 0f, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (__LIB_0__::func_272(iLocal_302, 1) && !iLocal_172[2])
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_302, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_302, true, true);
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_302, 3750f, 156.3f, 50.33f, true, false, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_302, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_302, false);
		TASK::CLEAR_PED_TASKS(iLocal_302, true, false);
		TASK::TASK_STAND_STILL(iLocal_302, -1);
		__LIB_4__::func_705(1, 1);
		iLocal_172[2] = 1;
		return true;
	}
	return false;
}

int func_671(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_1151(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

void func_681(var uParam0, vector3 vParam1, char* sParam4)
{
	__LIB_0__::func_172(iLocal_760);
	iLocal_760 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 4f, 4f, 3f, sParam4);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_760))
	{
		__LIB_13__::func_261(uParam0, &iLocal_760, 0, 0, 0, 0);
	}
}

void func_682(var uParam0)
{
	__LIB_2__::func_480(&Local_374, 1, 1, 1, 0);
	__LIB_1__::func_480(&iLocal_300);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
}

void func_684(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RABI1_RSC_1"))
	{
		__LIB_12__::func_604(10, 1);
		if (!bLocal_170)
		{
			__LIB_13__::func_483(266, 1, 0, 0, 1);
			__LIB_13__::func_483(8, 1, 0, 0, 1);
			bLocal_170 = true;
		}
		func_303();
		func_347(1);
		func_894(0);
		func_389();
		func_1162();
		func_1163();
		func_298();
		func_653();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		if (func_299(vLocal_594, fLocal_597, 1) && func_301(&(Local_926[1 /*6*/])))
		{
			if (bLocal_143)
			{
				if (!bLocal_169)
				{
					func_314(1, 1);
					bLocal_169 = true;
				}
			}
		}
		if (__LIB_13__::func_193(uParam0, iLocal_300, 0, 0, 1, 1))
		{
			if (!bLocal_156)
			{
				func_797();
				bLocal_156 = true;
			}
		}
		if (bLocal_143)
		{
			if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
		}
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (!bLocal_156)
				{
					func_797();
					bLocal_156 = true;
				}
				if (bLocal_143)
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				}
			}
		}
		if (func_303())
		{
		}
	}
	if (__LIB_13__::func_23(uParam0, "RABI1_RSC2"))
	{
		__LIB_0__::func_202(Global_35, 1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
		if (!__LIB_14__::func_124(20))
		{
			if (!__LIB_0__::func_75(&uLocal_531))
			{
				__LIB_1__::func_148(&uLocal_531);
			}
			else if (__LIB_0__::func_265(&uLocal_531) > 1f)
			{
				func_336();
				__LIB_18__::func_765(20);
			}
		}
		else if (!func_694(7))
		{
			if (__LIB_0__::func_264(&uLocal_531) > 35f)
			{
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
				}
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
				}
				func_695(7);
				__LIB_0__::func_37(&uLocal_531);
			}
		}
		func_429();
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				TASK::CLEAR_PED_TASKS(iLocal_306, true, false);
				if (__LIB_0__::func_94(iLocal_306, vLocal_587, 0) > 3f)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_306, vLocal_587, fLocal_590, true, false, true);
					TASK::TASK_STAND_STILL(iLocal_306, -1);
				}
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_306, 48, true);
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
				}
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
				}
			}
		}
	}
	if (__LIB_13__::func_23(uParam0, "RABI1_RSC4"))
	{
		if (!bLocal_171)
		{
			__LIB_13__::func_483(58, 1, 0, 0, 1);
			bLocal_171 = true;
		}
		__LIB_2__::func_919(iLocal_291, 1, 1);
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (PED::IS_PED_ON_MOUNT(iLocal_301))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iLocal_301, true, false);
		}
		if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
			if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
			}
		}
		if (__LIB_13__::func_193(uParam0, iLocal_300, 0, 0, 1, 1))
		{
			if (__LIB_0__::func_699(13))
			{
				__LIB_1__::func_774(13, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_14(uParam0, 1))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		__LIB_14__::func_142(Global_1347702[0 /*49*/].f_15);
	}
}

int func_686(var uParam0, int iParam1)
{
	if (iLocal_179[iParam1])
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_310[iParam1]))
	{
		iLocal_310[iParam1] = __LIB_12__::func_885(uParam0, iLocal_282[iParam1], vLocal_613[iParam1 /*3*/], fLocal_620[iParam1], 1, 1, 0, 1, 1, 1, 1, 0);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_310[iParam1]))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(iLocal_310[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_310[iParam1], false);
		}
		PED::_0xCAC43D060099EA72(iLocal_310[iParam1]);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_310[iParam1], false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_310[iParam1], Global_35, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_310[iParam1], 8, false);
		if (!__LIB_0__::func_491(iLocal_310[iParam1], -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_310[iParam1], -1);
		}
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_310[iParam1], 48, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_310[iParam1], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_282[iParam1]);
		iLocal_179[iParam1] = 1;
		return 1;
	}
	return 0;
}

bool func_687(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (bLocal_1036)
	{
		return true;
	}
	sVar0 = "1-DayVersion";
	sVar1 = "2-NightVersion-PlayerWearingHat";
	sVar2 = "3-NightVersion-PlayerNotWearingHat";
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false))
	{
		return false;
	}
	if ((!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar0) || !ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar2)) || !ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar1))
	{
		return false;
	}
	if ((!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar0) || !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar2)) || !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar1))
	{
		return false;
	}
	bLocal_1036 = true;
	return true;
}

void func_689()
{
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false)) < 4f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		if (iLocal_793 != 1)
		{
			iLocal_793 = 1;
		}
	}
}

void func_690()
{
	int iVar0;
	if (__LIB_0__::func_665(iLocal_301, iLocal_300, 0, 1) < 5f && !func_694(6))
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1037))
		{
			iLocal_1037 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_1038, joaat("WORLD_CAMP_JACK_THROWS_ROCKS_CASUAL"), 1.5f, 0, false);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1037))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1038, 1.5f, -1, 0.25f, 8193, 40000f);
			TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1037, 0, 0, true, false, 0, false, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_695(6);
		}
	}
}

bool func_694(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_196, iParam0))
	{
		return true;
	}
	return false;
}

void func_695(int iParam0)
{
	if (!func_694(iParam0))
	{
		MISC::SET_BIT(&iLocal_196, iParam0);
	}
}

int func_696(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_1183(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_1189(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_702(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1195(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_704()
{
	Local_248 = { 0f, 0f, 0f };
	Local_248.f_4 = 21030;
	Local_248.f_3 = iLocal_300;
	Local_248.f_8 = 4;
	Local_248.f_19 = 4;
	Local_248.f_21 = 4;
	Local_248.f_17 = 4;
	Local_248.f_18 = 4;
	Local_248.f_7 = 0;
}

bool func_705()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) >= 6 && __LIB_0__::func_41(iVar0) < 18)
	{
		return false;
	}
	return true;
}

void func_736(bool bParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		func_964(joaat("WEAPON_FISHINGROD"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

void func_737(bool bParam0)
{
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		func_1214(joaat("WEAPON_FISHINGROD"), 1, bParam0, -142743235, 0);
	}
}

void func_738(int iParam0)
{
	if (func_384(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_195, iParam0);
	}
}

bool func_742()
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_306) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_306)) && PED::_0xA0BC8FAED8CFEB3C(iLocal_306))
	{
		return true;
	}
	return false;
}

void func_744(bool bParam0)
{
	if (bParam0)
	{
		if (!PED::_GET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInLeftHand"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInLeftHand", true, -1);
		}
	}
	else if (!PED::_GET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInRightHand"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInRightHand", true, -1);
	}
}

bool func_748()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
	{
		iLocal_774 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-130.873f, -31.644f, 95.866f, 0f, 0f, 84f, 5f, 6f, 3f, "DUTCH_TENT");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
	{
		if (iLocal_476 == 0)
		{
			iLocal_476 = __LIB_11__::func_807(iLocal_774, 0, 0, 0);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_749()
{
	if (iLocal_172[3])
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_307))
	{
		iLocal_307 = func_696(0, 1, 1, vLocal_583.x, vLocal_583.y, vLocal_583.z, fLocal_586, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if (__LIB_0__::func_272(iLocal_307, 1))
	{
		iLocal_172[3] = 1;
	}
	return true;
}

bool func_750()
{
	if (bLocal_140)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293))
	{
		iLocal_293 = OBJECT::CREATE_OBJECT(iLocal_276, vLocal_594 - Vector(10f, 0f, 0f), true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_293))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_293, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_276);
		bLocal_140 = true;
		return true;
	}
	return false;
}

bool func_751(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 1, 0, false, true);
		return false;
	}
	if (!uParam0->f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "AbigailRoberts", iLocal_300, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_486, iLocal_293, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return false;
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

bool func_752(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 2, 0, false, true);
		return false;
	}
	if (!uParam0->f_1)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_301) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "AbigailRoberts", iLocal_300, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "Horse_01", iParam1, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "arthur", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_486, iLocal_293, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return false;
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

void func_784(var uParam0)
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
			func_1248(&(uParam0->f_416));
		}
		func_1249(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1251(uParam0);
		func_1252(uParam0);
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

void func_791(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_792(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_792(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		func_1266(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1267(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_797()
{
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(-154.2044f, -25.8951f, 94.8997f);
	TASK::TASK_EXTEND_ROUTE(-153.3487f, -19.4153f, 95.1742f);
	TASK::TASK_EXTEND_ROUTE(vLocal_575);
	TASK::TASK_FOLLOW_POINT_ROUTE(iLocal_300, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
}

void func_800(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_31(iParam0))
	{
		iVar0 = __LIB_0__::func_271(iParam0);
		if (__LIB_0__::func_272(iVar0, 0))
		{
			if (PED::IS_PED_IN_GROUP(iVar0))
			{
				__LIB_0__::func_495(&iVar1, iParam1);
				COMPANION::_0x1740E3DEE0AE4D27(iVar0, iVar1);
			}
		}
	}
}

void func_843()
{
	Local_198 = { 0f, 0f, 0f };
	Local_198.f_3 = Global_35;
	Local_198.f_4 = 21030;
	Local_198.f_8 = 4;
	Local_198.f_19 = 4;
	Local_198.f_21 = 4;
	Local_198.f_17 = 4;
	Local_198.f_18 = 4;
	Local_198.f_7 = 0;
}

void func_846()
{
	Local_223 = { 0f, 0f, 0f };
	Local_223.f_3 = iLocal_301;
	Local_223.f_4 = 21030;
	Local_223.f_8 = 4;
	Local_223.f_19 = 4;
	Local_223.f_21 = 4;
	Local_223.f_17 = 4;
	Local_223.f_18 = 4;
	Local_223.f_7 = 0;
}

void func_847(int iParam0)
{
	if (func_694(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_196, iParam0);
	}
}

void func_849(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) < iParam0)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	else
	{
		__LIB_9__::func_827(iParam0, 0, 0, 0);
	}
}

void func_850(int iParam0, int iParam1)
{
	iLocal_813 = iParam1;
}

bool func_852()
{
	if ((func_409() && __LIB_14__::func_124(23)) && !__LIB_8__::func_684("ABI1_FOUND"))
	{
		return true;
	}
	return false;
}

void func_853(int iParam0, int iParam1)
{
	switch (Local_18)
	{
		case 0:
			if (((__LIB_0__::func_2() != 0 && ENTITY::DOES_ENTITY_EXIST(iParam1)) && func_1330()) && func_1331(iParam1))
			{
				func_1038(1);
			}
			break;
		case 1:
			break;
		case 2:
			if (func_1332(iParam0))
			{
				func_1038(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (func_1333())
			{
				func_1038(1);
			}
			break;
		case 5:
			func_508();
			break;
	}
	if (((Local_18 == 1 || Local_18 == 2) || Local_18 == 3) || Local_18 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_18.f_5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_18.f_6);
		}
	}
}

void func_855(int iParam0, int iParam1)
{
	iLocal_811 = iParam1;
}

bool func_859()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_772, true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_300))
	{
		return true;
	}
	return false;
}

bool func_860(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, 0, 0, false, true);
		return false;
	}
	if (!uParam0->f_1)
	{
		if (func_323(vLocal_727, vLocal_730, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JackMarston", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "arthur", Global_35, 0);
			if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_4, "ARTHUR UPPER"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_484, iLocal_291, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sLocal_485, iLocal_292, 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			uParam0->f_1 = 1;
			return false;
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

int func_863(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	int iVar9;
	int iVar10;
	bool bVar11;
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
		__LIB_11__::func_733(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
					if (__LIB_9__::func_838(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_863(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					__LIB_1__::func_491(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!__LIB_0__::func_163(Global_35, -828834893) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar10 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_6__::func_789(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!func_1381(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_1__::func_148(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								__LIB_2__::func_526(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_6__::func_835(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_864(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vVar0 = { __LIB_3__::func_509(vParam4, fParam7) };
	vVar3 = { __LIB_3__::func_509(vParam4, fParam8) };
	vVar6 = { __LIB_4__::func_83(vVar0, 0) };
	vVar9 = { __LIB_4__::func_83(vVar3, 0) };
	if (!__LIB_0__::func_266(Global_35, vParam0, fParam3, 1, 1))
	{
		return false;
	}
	vVar12 = { Global_36 - vParam0 };
	if (__LIB_2__::func_977(vVar12, vVar6) >= 0f)
	{
		if (__LIB_2__::func_977(vVar12, vVar9) < 0f)
		{
			return true;
		}
	}
	return false;
}

void func_870(var uParam0)
{
	if (!func_694(2))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[7 /*6*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[7 /*6*/], false))
			{
				func_894(7);
				func_695(2);
			}
		}
	}
	else if (!func_211())
	{
		if (!func_694(1))
		{
			if (__LIB_12__::func_876(uParam0, "ABI1_MOUNTUP", 0))
			{
				func_695(1);
			}
		}
	}
}

void func_871(int iParam0)
{
	iLocal_812 = iParam0;
}

void func_872()
{
	func_894(1);
	func_894(9);
	func_894(8);
	func_894(10);
}

void func_876(int iParam0, int iParam1)
{
	iLocal_807 = iParam1;
}

Vector3 func_877()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vVar0 = { -2f, 1f, 0f };
	vVar3 = { 2f, 1f, 0f };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, vVar0) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, vVar3) };
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false) };
	if (BUILTIN::VDIST(vVar6, vVar12) < BUILTIN::VDIST(vVar9, vVar12))
	{
		return vVar6;
	}
	return vVar9;
}

bool func_878()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_926[3 /*6*/], false))
	{
		if (!bLocal_1005)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_926[3 /*6*/], "JackMarston", &Local_101, true, "pl_IG7_Mount_Left", 2))
			{
				bLocal_1005 = true;
			}
		}
		if (!bLocal_1006)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_926[3 /*6*/], "JackMarston", &Local_113, true, "pl_IG7_Mount_Right", 2))
			{
				bLocal_1006 = true;
			}
		}
		if (bLocal_1005 && bLocal_1006)
		{
			return true;
		}
	}
	return false;
}

bool func_879(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { -1.5f, 0f, 0f };
	vVar3 = { 1.5f, 0f, 0f };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam3, vVar0) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam3, vVar3) };
	if (BUILTIN::VDIST(vParam0, vVar9) < BUILTIN::VDIST(vParam0, vVar6))
	{
		return true;
	}
	return false;
}

bool func_880(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { (vParam0.x - 0.25f), (vParam0.y - 0.25f), (vParam0.z - 0.25f) };
	vVar3 = { (vParam0.x + 0.25f), (vParam0.y + 0.25f), (vParam0.z + 0.25f) };
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam0);
	if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar3, vVar0))
	{
		return true;
	}
	return false;
}

void func_882()
{
	switch (iLocal_804)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -543.8303f, 202.0431f, 40.2648f, false) < 100f)
			{
				iLocal_804 = 1;
			}
			break;
		case 1:
			break;
	}
}

bool func_883(int iParam0)
{
	if (iParam0 > iLocal_791)
	{
		iLocal_791 = iParam0;
		__LIB_0__::func_37(&uLocal_504);
		return true;
	}
	return false;
}

void func_886(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	int iVar13;
	int iVar14;
	if (((!__LIB_14__::func_124(15) && !__LIB_0__::func_270()) && !__LIB_12__::func_605()) && !__LIB_0__::func_75(&uLocal_525))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(iLocal_301, &iVar2, -1, -1);
		if (iVar0 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar2[iVar0]) && MISC::ARE_STRINGS_EQUAL(sLocal_480, "NULL"))
				{
					iVar13 = ENTITY::GET_ENTITY_MODEL(iVar2[iVar0]);
					if (((func_1398(iVar13) && ENTITY::IS_ENTITY_ON_SCREEN(iVar2[iVar0])) && !ENTITY::IS_ENTITY_OCCLUDED(iVar2[iVar0])) && __LIB_0__::func_665(Global_35, iVar2[iVar0], 1, 1) < 40f)
					{
						iVar14 = iVar0;
						switch (iVar13)
						{
							case joaat("A_C_DEER_01"):
								iVar1 = 0;
								sLocal_480 = "ABI1_DEER";
								break;
							case joaat("A_C_BUCK_01"):
								iVar1 = 1;
								sLocal_480 = "ABI1_BUCK";
								break;
							case joaat("A_C_BOAR_01"):
								iVar1 = 2;
								sLocal_480 = "ABI1_BOAR";
								break;
							case joaat("A_C_FOX_01"):
								iVar1 = 3;
								sLocal_480 = "ABI1_FOX";
								break;
							case joaat("A_C_SQUIRREL_01"):
								iVar1 = 4;
								sLocal_480 = "ABI1_SQUIR";
								break;
							case joaat("A_C_EAGLE_01"):
								iVar1 = 5;
								sLocal_480 = "ABI1_EAGLE";
								break;
							case joaat("A_C_RABBIT_01"):
								iVar1 = 6;
								sLocal_480 = "ABI1_RABB";
								break;
							case joaat("A_C_COYOTE_01"):
								iVar1 = 7;
								sLocal_480 = "ABI1_COYOTE";
								break;
						}
					}
				}
				iVar0++;
			}
		}
		if ((((((ENTITY::DOES_ENTITY_EXIST(iVar2[iVar14]) && !MISC::ARE_STRINGS_EQUAL(sLocal_480, "NULL")) && ENTITY::IS_ENTITY_ON_SCREEN(iVar2[iVar14])) && !ENTITY::IS_ENTITY_OCCLUDED(iVar2[iVar14])) && __LIB_0__::func_665(Global_35, iVar2[iVar14], 1, 1) < 40f) && !iLocal_794[iVar1]) && !__LIB_5__::func_463())
		{
			if (__LIB_12__::func_876(uParam0, sLocal_480, 0))
			{
				__LIB_0__::func_37(&uLocal_504);
				iLocal_794[iVar1] = 1;
				__LIB_18__::func_765(15);
			}
		}
		else
		{
			sLocal_480 = "NULL";
		}
	}
	else if (!__LIB_0__::func_75(&uLocal_528))
	{
		if (!__LIB_6__::func_903(sLocal_480) && !__LIB_12__::func_605())
		{
			__LIB_1__::func_148(&uLocal_528);
		}
	}
	else if (__LIB_0__::func_265(&uLocal_528) > 10f)
	{
		sLocal_480 = "NULL";
		__LIB_18__::func_766(15);
		__LIB_0__::func_37(&uLocal_528);
	}
}

void func_887(var uParam0)
{
	int iVar0;
	if (((((((func_409() && __LIB_0__::func_94(iLocal_301, vLocal_594, 0) > 15f) && __LIB_0__::func_94(iLocal_301, vLocal_678, 0) > 75f) && !__LIB_14__::func_124(15)) && !__LIB_14__::func_124(3)) && !__LIB_0__::func_270()) && !__LIB_12__::func_605()) && !__LIB_0__::func_75(&uLocal_525))
	{
		if (!bLocal_153)
		{
			if (!bLocal_155)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					iLocal_777 = func_1399();
					bLocal_155 = true;
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_543))
			{
				__LIB_1__::func_148(&uLocal_543);
			}
			else if (__LIB_0__::func_265(&uLocal_543) > 4f)
			{
				iVar0 = func_1399();
				if (iVar0 == iLocal_777)
				{
					sLocal_487 = func_1400(iVar0);
					if (!MISC::ARE_STRINGS_EQUAL(sLocal_487, "NULL"))
					{
						bLocal_153 = true;
					}
				}
				else
				{
					bLocal_155 = false;
					__LIB_0__::func_37(&uLocal_543);
				}
			}
		}
		else if (__LIB_12__::func_876(uParam0, sLocal_487, 0))
		{
			iLocal_777 = iVar0;
			bLocal_155 = false;
			bLocal_153 = false;
			__LIB_0__::func_37(&uLocal_543);
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_543);
	}
}

bool func_892(float fParam0)
{
	int iVar0;
	iVar0 = __LIB_2__::func_825(iLocal_301);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (PED::_0xF60165E1D2C5370B(iVar0, &fLocal_183, &fLocal_184))
		{
			if (fLocal_183 >= fParam0 || fLocal_184 >= fParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_894(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[iParam0 /*6*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_926[iParam0 /*6*/]);
	}
}

void func_909()
{
	switch (iLocal_803)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[11 /*6*/]))
			{
				Local_926[11 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_926[11 /*6*/].f_3, 0, "PBL_Enter", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_926[11 /*6*/]);
				func_919(iLocal_803, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[11 /*6*/], true, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_296))
				{
					iLocal_296 = OBJECT::CREATE_OBJECT(iLocal_277, vLocal_605, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_294))
				{
					iLocal_294 = OBJECT::CREATE_OBJECT(iLocal_278, vLocal_605, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295))
				{
					iLocal_295 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_605, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
				{
					iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_273, vLocal_605, true, true, false, false, true);
				}
				if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_296) && !ENTITY::IS_ENTITY_DEAD(iLocal_294)) && !ENTITY::IS_ENTITY_DEAD(iLocal_295)) && !ENTITY::IS_ENTITY_DEAD(iLocal_291)) && !ENTITY::IS_ENTITY_DEAD(iLocal_301)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_278);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[11 /*6*/], "JackMarston", iLocal_301, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[11 /*6*/], "arthur", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[11 /*6*/], sLocal_484, iLocal_291, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[11 /*6*/], sLocal_481, iLocal_296, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_296, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[11 /*6*/], sLocal_482, iLocal_294, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_294, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[11 /*6*/], sLocal_483, iLocal_295, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_295, false);
					func_919(iLocal_803, 2);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_926[11 /*6*/], false))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[11 /*6*/], "PBL_Enter"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_926[11 /*6*/], "JackMarston", &Local_77, true, "PBL_Enter", 2))
					{
						if (__LIB_0__::func_175(vLocal_609, Local_77, 1.5f, 1))
						{
							vLocal_609 = { Local_77 };
							fLocal_612 = Local_77.f_3.f_2;
						}
					}
				}
			}
			__LIB_18__::func_765(17);
			func_919(iLocal_803, 3);
			break;
		case 3:
			break;
		case 4:
			func_1413();
			__LIB_18__::func_766(5);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_294, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_296, true);
			ANIMSCENE::START_ANIM_SCENE(Local_926[11 /*6*/]);
			func_919(iLocal_803, 6);
			break;
		case 6:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[11 /*6*/], "PBL_Base");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[11 /*6*/], "PBL_Base"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_926[11 /*6*/], "S_Base", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[11 /*6*/], "PBL_Base", true);
					func_919(iLocal_803, 7);
				}
			}
			break;
		case 7:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[11 /*6*/], "PBL_Conversation");
			if (!__LIB_14__::func_124(24))
			{
				if (func_1414())
				{
					__LIB_18__::func_765(24);
				}
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[11 /*6*/], "PBL_Conversation") && __LIB_14__::func_124(24))
			{
				__LIB_5__::func_20(0, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[11 /*6*/], "Loop", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[11 /*6*/], "PBL_Conversation", true);
				func_425();
				func_919(iLocal_803, 8);
			}
			break;
		case 8:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[11 /*6*/], "PBL_Base");
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_926[11 /*6*/], "S_Base", 1) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[11 /*6*/], "PBL_Base"))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_926[11 /*6*/], "Loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[11 /*6*/], "Loop", false, false);
				}
				__LIB_18__::func_766(24);
				func_1415();
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[11 /*6*/], "PBL_Base", true);
				func_919(iLocal_803, 9);
			}
			break;
		case 9:
			break;
	}
}

void func_910()
{
	if (!bLocal_1032)
	{
		if (func_1416(0.3f))
		{
			if (__LIB_0__::func_491(iLocal_301, 1056466932))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
				{
					TASK::TASK_STAND_STILL(iLocal_301, -1);
				}
			}
			bLocal_1032 = true;
		}
	}
	else if (!func_1416(0.3f))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_301, true, false)) < 10f && !__LIB_0__::func_491(iLocal_301, 1056466932))
		{
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_301, Global_35, 1.5f, -0.5f, 0f, 1f, -1, 0.5f, 1, 1, 0, 1, 1);
		}
		bLocal_1032 = false;
	}
}

void func_912(int iParam0, int iParam1)
{
	iLocal_787 = iParam1;
}

void func_913(var uParam0, bool bParam1)
{
	func_1420(uParam0);
	func_1421();
	func_1422();
	func_1423();
	func_1424();
	switch (iLocal_780)
	{
		case 0:
			func_1425(iLocal_780, 1);
			break;
		case 1:
			if (func_914())
			{
				if (!__LIB_0__::func_75(&uLocal_558))
				{
					__LIB_1__::func_148(&uLocal_558);
				}
				if (!__LIB_1__::func_647())
				{
					if (!__LIB_14__::func_124(6))
					{
						if (!__LIB_0__::func_75(&uLocal_537))
						{
							__LIB_1__::func_148(&uLocal_537);
						}
						else if (__LIB_0__::func_264(&uLocal_537) > 5f)
						{
							if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, "ABI1_FISH0", 0))
							{
								__LIB_0__::func_37(&uLocal_537);
								__LIB_18__::func_765(6);
							}
						}
					}
					else if (!__LIB_6__::func_903("ABI1_FISH0"))
					{
						__LIB_18__::func_766(6);
					}
				}
				else if (!func_1426())
				{
					if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, "ABI1_JFISH1", 0))
					{
						__LIB_0__::func_37(&uLocal_537);
						func_1425(iLocal_780, 2);
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_537);
					func_1425(iLocal_780, 3);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_647())
			{
				if (func_1426())
				{
					if (!__LIB_6__::func_903("ABI1_JFISH1") && !__LIB_6__::func_903("ABI1_NOFISHN"))
					{
						if (__LIB_12__::func_876(uParam0, "ABI1_JFISH1A", 0))
						{
							func_1425(iLocal_780, 3);
						}
					}
				}
				else if (!__LIB_14__::func_124(6))
				{
					if (!__LIB_0__::func_75(&uLocal_537))
					{
						__LIB_1__::func_148(&uLocal_537);
					}
					else if (__LIB_0__::func_264(&uLocal_537) > fLocal_1028)
					{
						if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, "ABI1_NOFISHN", 0))
						{
							__LIB_0__::func_37(&uLocal_537);
							__LIB_18__::func_765(6);
						}
					}
				}
				else if (!__LIB_6__::func_903("ABI1_NOFISHN"))
				{
					__LIB_18__::func_766(6);
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_647())
			{
				if (func_1426() && !__LIB_6__::func_903("ABI1_JFISH1A"))
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_AFISH2", 0))
					{
						__LIB_0__::func_37(&uLocal_537);
						func_1425(iLocal_780, 4);
					}
				}
			}
			else
			{
				iLocal_793 = 3;
				__LIB_0__::func_37(&uLocal_537);
				func_1425(iLocal_780, 1);
			}
			break;
		case 4:
			if (__LIB_4__::func_149(0) && func_1427(0))
			{
				func_333(14);
				func_333(6);
				func_1425(iLocal_780, 7);
			}
			else if (!__LIB_6__::func_903("ABI1_AFISH2") && !func_384(0))
			{
				if (!__LIB_14__::func_124(6))
				{
					if (!__LIB_0__::func_75(&uLocal_537))
					{
						__LIB_1__::func_148(&uLocal_537);
					}
					else if (__LIB_0__::func_264(&uLocal_537) > 5f)
					{
						if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, "ABI1_NOFISHN", 0))
						{
							__LIB_0__::func_37(&uLocal_537);
							__LIB_18__::func_765(6);
						}
					}
				}
				else if (!__LIB_6__::func_903("ABI1_NOFISHN"))
				{
					__LIB_18__::func_766(6);
				}
			}
			break;
		case 7:
			if (func_384(7))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_JFISH2", 0))
					{
						func_425();
						bLocal_145 = true;
						func_1425(iLocal_780, 8);
					}
				}
			}
			break;
		case 8:
			if (!__LIB_6__::func_904())
			{
				iLocal_792 = 3;
				if (__LIB_12__::func_876(uParam0, "ABI1_JFISH3", 0))
				{
					func_1425(iLocal_780, 9);
				}
			}
			break;
		case 9:
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "ABI1_JFISH5", 0))
				{
					func_1425(iLocal_780, 10);
				}
			}
			break;
		case 10:
			if (!__LIB_6__::func_903("ABI1_JFISH5"))
			{
				func_1415();
				__LIB_0__::func_37(&uLocal_537);
				__LIB_1__::func_148(&uLocal_552);
				func_1425(iLocal_780, 12);
			}
			break;
		case 12:
			if (!func_1426())
			{
				func_1425(iLocal_780, 11);
				return;
			}
			if (!__LIB_8__::func_608(0) && !__LIB_14__::func_124(24))
			{
				func_1428();
			}
			if (!__LIB_6__::func_904())
			{
				if (!bLocal_165)
				{
					if (__LIB_4__::func_149(0))
					{
						if (!bLocal_145)
						{
							if (func_1427(0))
							{
								bLocal_145 = true;
								if (!__LIB_14__::func_124(16) && !__LIB_14__::func_124(24))
								{
									func_1425(iLocal_780, 13);
								}
								return;
							}
						}
						if (((!bLocal_144 && !bLocal_163) && !__LIB_14__::func_124(16)) && __LIB_12__::func_611(0))
						{
							bLocal_144 = true;
							if (!__LIB_14__::func_124(16) && !__LIB_14__::func_124(24))
							{
								__LIB_5__::func_20(0, 0);
								func_1425(iLocal_780, 14);
							}
							return;
						}
						if (!bLocal_148 && func_1429(0))
						{
							bLocal_144 = true;
							bLocal_148 = true;
							if (!__LIB_14__::func_124(16) && !__LIB_14__::func_124(24))
							{
								__LIB_5__::func_20(0, 0);
								func_1425(iLocal_780, 15);
							}
							return;
						}
						if (!bLocal_149 && __LIB_8__::func_627(0))
						{
							if (!__LIB_14__::func_124(19))
							{
								__LIB_18__::func_765(19);
							}
							bLocal_144 = false;
							bLocal_148 = false;
							bLocal_149 = true;
							if (!__LIB_14__::func_124(16) && !__LIB_14__::func_124(24))
							{
								__LIB_5__::func_20(0, 0);
								func_1425(iLocal_780, 18);
							}
							return;
						}
						if (!bLocal_147)
						{
							if (bLocal_146 && !__LIB_6__::func_903("ABI1_JFISH12"))
							{
								if ((((((__LIB_1__::func_675(0) && !__LIB_14__::func_186(0)) && !__LIB_8__::func_627(0)) && !__LIB_1__::func_673(0)) && !__LIB_14__::func_124(16)) && !__LIB_14__::func_124(24)) && !bLocal_165)
								{
									if (__LIB_12__::func_876(uParam0, "ABI1_JFISH13", 0))
									{
										bLocal_147 = true;
									}
								}
							}
						}
					}
					func_1433(uParam0, bParam1);
				}
			}
			break;
		case 11:
			func_1433(uParam0, bParam1);
			if (func_1426())
			{
				func_1425(iLocal_780, 12);
			}
			break;
		case 20:
			if (!__LIB_6__::func_904() && !__LIB_14__::func_124(24))
			{
				func_1415();
				__LIB_0__::func_37(&uLocal_537);
				func_1425(iLocal_780, 12);
			}
			break;
		case 13:
			if (!__LIB_6__::func_904() && !__LIB_14__::func_124(24))
			{
				if (__LIB_12__::func_876(uParam0, "ABI1_JFISH4", 0))
				{
					__LIB_0__::func_37(&uLocal_537);
					func_1425(iLocal_780, 12);
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_537);
				func_1425(iLocal_780, 12);
			}
			break;
		case 14:
			if (__LIB_12__::func_876(uParam0, "ABI1_JFISH8", 0))
			{
				func_1425(iLocal_780, 15);
			}
			break;
		case 15:
			if (!__LIB_6__::func_904())
			{
				if ((__LIB_1__::func_675(0) && !__LIB_8__::func_627(0)) && !__LIB_14__::func_124(24))
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_JFISH7", 0))
					{
						__LIB_0__::func_37(&uLocal_540);
						if ((!bLocal_163 && !__LIB_14__::func_124(16)) || bLocal_167)
						{
							func_1425(iLocal_780, 16);
						}
						else
						{
							func_1425(iLocal_780, 12);
						}
					}
				}
				else if (!__LIB_0__::func_75(&uLocal_540))
				{
					__LIB_1__::func_148(&uLocal_540);
				}
				else if (!__LIB_12__::func_611(0))
				{
					if (__LIB_0__::func_265(&uLocal_540) > 2f)
					{
						__LIB_0__::func_37(&uLocal_540);
						bLocal_144 = false;
						func_1425(iLocal_780, 18);
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_540);
				}
			}
			break;
		case 16:
			if (!__LIB_6__::func_903("ABI1_JFISH7"))
			{
				if ((__LIB_1__::func_675(0) && !__LIB_8__::func_627(0)) || __LIB_1__::func_673(0))
				{
					if (!bLocal_163 && !__LIB_14__::func_124(16))
					{
						if (__LIB_12__::func_876(uParam0, "ABI1_JFISH10", 0))
						{
							if (!bLocal_146)
							{
								func_1425(iLocal_780, 17);
							}
							else
							{
								__LIB_0__::func_37(&uLocal_537);
								func_1425(iLocal_780, 12);
							}
						}
					}
					else if (!bLocal_146)
					{
						func_1425(iLocal_780, 17);
					}
					else
					{
						__LIB_0__::func_37(&uLocal_537);
						func_1425(iLocal_780, 12);
					}
				}
				else
				{
					func_1425(iLocal_780, 18);
				}
			}
			break;
		case 17:
			if (!__LIB_6__::func_903("ABI1_JFISH10"))
			{
				if (!__LIB_8__::func_627(0))
				{
					if (__LIB_1__::func_675(0))
					{
						if (__LIB_14__::func_186(0))
						{
							if (__LIB_12__::func_876(uParam0, "ABI1_JFISH12", 0))
							{
								__LIB_0__::func_37(&uLocal_537);
								bLocal_146 = true;
								func_1425(iLocal_780, 12);
							}
						}
					}
					else if (bLocal_165)
					{
						__LIB_0__::func_37(&uLocal_537);
						func_1425(iLocal_780, 12);
					}
				}
				else
				{
					func_1425(iLocal_780, 18);
				}
			}
			break;
		case 18:
			if (!__LIB_12__::func_611(0))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_JFISH6", 0))
					{
						func_1425(iLocal_780, 19);
					}
				}
			}
			else
			{
				func_1425(iLocal_780, 15);
			}
			break;
		case 19:
			if (!__LIB_12__::func_611(0))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_JFISH9", 0))
					{
						__LIB_0__::func_37(&uLocal_537);
						bLocal_149 = false;
						func_1425(iLocal_780, 12);
					}
				}
			}
			else
			{
				__LIB_6__::func_900("ABI1_JFISH6", 0, 0);
				func_1425(iLocal_780, 15);
			}
			break;
		case 21:
			if (!__LIB_14__::func_124(16))
			{
				func_1425(iLocal_780, 12);
			}
			break;
	}
}

bool func_914()
{
	if (bLocal_168)
	{
		if (__LIB_2__::func_157(iLocal_764, Global_36))
		{
			return true;
		}
	}
	else if (__LIB_2__::func_157(iLocal_765, Global_36) && !func_1416(0.3f))
	{
		return true;
	}
	return false;
}

bool func_915()
{
	if (bLocal_162)
	{
		return true;
	}
	if (!bLocal_162)
	{
		if (__LIB_0__::func_75(&uLocal_552))
		{
			if (__LIB_0__::func_264(&uLocal_552) > 45f)
			{
				__LIB_0__::func_37(&uLocal_552);
				bLocal_162 = true;
				return true;
			}
		}
	}
	return false;
}

bool func_916()
{
	if ((func_426(0) - iLocal_193) > 0)
	{
		return true;
	}
	return false;
}

bool func_917()
{
	if (__LIB_8__::func_608(0))
	{
		if (__LIB_1__::func_675(0))
		{
			return true;
		}
		if (__LIB_1__::func_673(0) || __LIB_12__::func_611(0))
		{
			return true;
		}
	}
	return false;
}

void func_918()
{
	switch (iLocal_823)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_926[12 /*6*/]))
			{
				Local_926[12 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_926[12 /*6*/].f_3, 0, 0, false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_926[12 /*6*/]);
				func_1434(iLocal_823, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_926[12 /*6*/], true, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_298))
				{
					iLocal_298 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_605, false, true, true, true, false);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299))
				{
					iLocal_299 = OBJECT::CREATE_OBJECT(iLocal_278, vLocal_605, false, true, true, true, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[12 /*6*/], "JackMarston", iLocal_301, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[12 /*6*/], "p_fishingpole01x", iLocal_291, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[12 /*6*/], "s_inv_yarrow01x", iLocal_298, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_926[12 /*6*/], "s_inv_yarrow01cx", iLocal_299, 0);
					func_1434(iLocal_823, 2);
				}
			}
			break;
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[12 /*6*/], "Pl_IG13_JackPickYarrow_YarrowPlantStartPose");
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_926[12 /*6*/], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_926[12 /*6*/], "JackMarston", &Local_125, false, 0, 2))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[12 /*6*/], "Pl_IG13_JackPickYarrow_YarrowPlantStartPose"))
					{
						vLocal_605 = { Local_125 };
						fLocal_608 = Local_125.f_3.f_2;
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[12 /*6*/], "Pl_IG13_JackPickYarrow_YarrowPlantStartPos", true);
						ANIMSCENE::START_ANIM_SCENE(Local_926[12 /*6*/]);
						func_1434(iLocal_823, 3);
					}
				}
			}
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[12 /*6*/], "Pl_IG13_JackPickYarrow");
			if (bLocal_164)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_605, 1.5f, -1, 0.25f, 0, fLocal_608);
				bLocal_163 = true;
				func_1434(iLocal_823, 4);
			}
			break;
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_301, 713668775, false) == 8)
			{
				__LIB_18__::func_766(5);
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_301, Local_926[12 /*6*/], "JackMarston", "Pl_IG13_JackPickYarrow", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				func_1434(iLocal_823, 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_926[12 /*6*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_926[12 /*6*/]))
			{
				func_1413();
				func_334(1, 1);
				__LIB_18__::func_765(5);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_609, 1f, -1, 0.25f, 0, fLocal_612);
				bLocal_163 = false;
				func_1434(iLocal_823, 6);
			}
			break;
		case 6:
			func_894(12);
			func_1434(iLocal_823, 8);
			break;
	}
}

void func_919(int iParam0, int iParam1)
{
	iLocal_803 = iParam1;
}

bool func_964(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_1478(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1479(iParam0, &iVar0, iParam1))
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
				func_964(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1499(28);
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
					if (__LIB_0__::func_708(0) && func_1151(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_1151(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_1505(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_1507(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_1508(iParam0);
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
						func_964(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_964(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_964(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_964(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_964(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_964(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_964(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1499(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_1266(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_1151(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_1266(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_964(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_964(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!func_1543(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_1544(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1545(iParam0);
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
				func_964(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_966()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1558();
	func_1559();
	func_1560();
	func_1561();
	func_1562();
	func_1563();
	__LIB_0__::func_376();
}

void func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1214(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		func_1566(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_1567(iParam0), 1);
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

int func_974(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1577(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_1266(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_1002()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1592(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_1038(int iParam0)
{
	if (Local_18 != iParam0)
	{
		Local_18 = iParam0;
	}
}

int func_1075(var uParam0, int iParam1, int iParam2)
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
		return func_1075(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1130(int iParam0, int iParam1)
{
	iLocal_784 = iParam1;
}

void func_1131()
{
	if (bLocal_150)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		if (!bLocal_151)
		{
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_926[0 /*6*/], "s_greet", 1))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_926[0 /*6*/], "s_postgreetidle", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[0 /*6*/], "Loop_PostGreetIdle", true, false);
					bLocal_151 = true;
					func_1680(iLocal_806, 5);
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_926[0 /*6*/], "s_base", 1))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[0 /*6*/], "s_postgreetleadin");
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[0 /*6*/], "Loop_PostGreetIdle", true, false);
					bLocal_151 = true;
					__LIB_1__::func_148(&uLocal_546);
					func_1680(iLocal_806, 4);
				}
			}
		}
	}
	switch (iLocal_806)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_300))
			{
				if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_300, true, false)) < 4f)
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_300, 301, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_300, 130, false);
					__LIB_2__::func_602(&(Local_374[0 /*17*/]), "RABI1_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_6__::func_736(&iLocal_313, &Local_374, 0, Global_1347702[0 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[0 /*6*/], "Loop_Base", true, false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[0 /*6*/], "s_postgreetleadin");
					func_1680(iLocal_806, 1);
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_926[0 /*6*/], "s_postgreetidle", 1))
			{
				__LIB_1__::func_148(&uLocal_546);
				func_1680(iLocal_806, 2);
			}
			break;
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[0 /*6*/], "s_base");
			if (__LIB_0__::func_264(&uLocal_546) > 10f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_926[0 /*6*/], "Loop_Base", false, false);
				__LIB_0__::func_37(&uLocal_546);
				func_1680(iLocal_806, 3);
			}
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[0 /*6*/], "s_base");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[0 /*6*/], "s_base"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[0 /*6*/], "s_base", true);
				func_1680(iLocal_806, 5);
			}
			break;
		case 4:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_926[0 /*6*/], "s_postgreetleadin");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_926[0 /*6*/], "s_postgreetleadin") && ANIMSCENE::_0x1F0E401031E20146(Local_926[0 /*6*/], "s_postgreetleadin"))
			{
				func_1680(iLocal_806, 5);
			}
			else if (__LIB_0__::func_265(&uLocal_546) > 4f)
			{
				__LIB_0__::func_37(&uLocal_546);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_926[0 /*6*/], "s_postgreetleadin", true);
				func_1680(iLocal_806, 5);
			}
			break;
	}
}

bool func_1151(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_1577(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1696((386 + iVar28), 1);
			if (func_1697(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

int func_1162()
{
	if (bLocal_1014)
	{
		return 1;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_771))
	{
		iLocal_771 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-108.707f, -4.126f, 95.134f, 0f, 0f, 66f, 17f, 17f, 6f, "OUT_OF_CAMP_SBI");
		return 0;
	}
	if (iLocal_474 == 0)
	{
		__LIB_0__::func_566(iLocal_771, 0);
		__LIB_3__::func_729(iLocal_771, 0, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_771, 67552, 8192, 0, -1, -1, 0);
		iLocal_474 = __LIB_11__::func_807(iLocal_771, 0, 0, 67552);
		return 0;
	}
	if (iLocal_474 != 0)
	{
		bLocal_1014 = true;
	}
	return 1;
}

int func_1163()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { -96.3437f, -21.5586f, 94.9232f };
	vVar3 = { -92.4576f, -19.825f, 94.9256f };
	if (bLocal_1015 && bLocal_1016)
	{
		return 1;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_771))
	{
		if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_CHARLES"))))
		{
			iLocal_1017 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_CHARLES")));
		}
		if (!bLocal_1015)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1017))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1017, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1017, false, true);
				}
				else if (__LIB_1__::func_205(iLocal_1017, iLocal_771, 1, 0))
				{
					if (__LIB_0__::func_94(iLocal_1017, vVar0, 0) < 2f)
					{
						if (!__LIB_0__::func_491(iLocal_1017, 713668775))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1017, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1017, vVar0, 0.55f, -1, 0.25f, 0, 40000f);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_1017, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1017, 48, true);
						bLocal_1015 = true;
					}
				}
			}
		}
		if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_HOSEA"))))
		{
			iLocal_1018 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_HOSEA")));
		}
		if (!bLocal_1016)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1018))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1018, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1018, false, true);
				}
				else if (__LIB_1__::func_205(iLocal_1018, iLocal_771, 1, 0))
				{
					if (__LIB_0__::func_94(iLocal_1018, vVar3, 0) < 2f)
					{
						if (!__LIB_0__::func_491(iLocal_1018, 713668775))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1018, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1018, vVar3, 0.55f, -1, 0.25f, 0, 40000f);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_1018, -1);
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1018, 48, true);
						bLocal_1016 = true;
					}
				}
			}
		}
	}
	if (!bLocal_1015 || !bLocal_1015)
	{
		return 0;
	}
	return 1;
}

void func_1183(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1183(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1183(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1189(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_671(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_671(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

int func_1195(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_1758(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_1214(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1214(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!func_1772(iParam0, iParam1, iParam3, bParam2, bParam4))
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

void func_1248(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_1266(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1249(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1816();
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

void func_1251(var uParam0)
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
			func_1183(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1183(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1252(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1183(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1266(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1577(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1835(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1267(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1577(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

bool func_1330()
{
	STREAMING::REQUEST_MODEL(Local_18.f_1, false);
	STREAMING::REQUEST_MODEL(Local_18.f_2, false);
	STREAMING::REQUEST_MODEL(Local_18.f_3, false);
	if ((STREAMING::HAS_MODEL_LOADED(Local_18.f_1) && STREAMING::HAS_MODEL_LOADED(Local_18.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_18.f_3))
	{
		return true;
	}
	return false;
}

bool func_1331(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_18.f_4))
	{
		Local_18.f_4 = "line_attach";
	}
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, Local_18.f_4);
	vVar1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - Local_18.f_10);
		Local_18.f_5 = OBJECT::CREATE_OBJECT(Local_18.f_1, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_15);
		ENTITY::_0x978AA2323ED32209(Local_18.f_5, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_5, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - (Local_18.f_10 + Local_18.f_11));
		Local_18.f_6 = OBJECT::CREATE_OBJECT(Local_18.f_2, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_15);
		ENTITY::_0x978AA2323ED32209(Local_18.f_6, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_6, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5) && ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
		{
			vVar4 = { vVar1 };
			Local_18.f_8 = PHYSICS::_ADD_ROPE_2(vVar4, 0f, 0f, 0f, Local_18.f_12, 8, false, -1, -1f);
			PHYSICS::_0xD699E688B49C0FD2(Local_18.f_8, 0.5f, Local_18.f_10, Local_18.f_10, 1);
			PHYSICS::_0x462FF2A432733A44(Local_18.f_8, iParam0, Local_18.f_5, 0f, 0f, 0f, 0f, 0f, 0f, Local_18.f_4, "rod_attach");
			PHYSICS::_0x3C6490D940FF5D0B(Local_18.f_8, 0, 0, -1082130432 /* Float: -1f */, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_18.f_8, 1, 1, 1, 0);
			PHYSICS::_0x423C6B1F3786D28B(Local_18.f_8, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_18.f_8, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_18.f_8, 2f);
			PHYSICS::_0x1D97DA8ACB5D2582(Local_18.f_8, 15);
		}
		if (!PHYSICS::DOES_ROPE_EXIST(Local_18.f_9))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_5, true, false) };
			Local_18.f_9 = PHYSICS::_ADD_ROPE_2(vVar4, 0f, 0f, 0f, Local_18.f_11, 10, false, -1, -1f);
			PHYSICS::_0xD699E688B49C0FD2(Local_18.f_9, 0.5f, Local_18.f_11, Local_18.f_11, 1);
			PHYSICS::_0x462FF2A432733A44(Local_18.f_9, Local_18.f_5, Local_18.f_6, 0f, 0f, 0f, 0f, 0f, 0f, "hook_attach", "fishingLine_bone");
			PHYSICS::_0x3C6490D940FF5D0B(Local_18.f_9, 0, 0, -1082130432 /* Float: -1f */, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_18.f_9, 1, 1, 1, 0);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_18.f_9, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_18.f_9, 0f);
		}
	}
	return (PHYSICS::DOES_ROPE_EXIST(Local_18.f_8) && PHYSICS::DOES_ROPE_EXIST(Local_18.f_9));
}

bool func_1332(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
	{
		return false;
	}
	if (Local_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_18.f_8, Local_18.f_13);
		PHYSICS::START_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 1;
		func_1900(iParam0);
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_18.f_8) >= Local_18.f_12)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 0;
		return true;
	}
	return false;
}

bool func_1333()
{
	if ((!PHYSICS::DOES_ROPE_EXIST(Local_18.f_8) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		return false;
	}
	if (Local_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_18.f_8, Local_18.f_14);
		PHYSICS::START_ROPE_WINDING(Local_18.f_8);
		Local_18.f_17 = 1;
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_18.f_8) <= Local_18.f_10)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 0;
		PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_15);
		PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_15);
		return true;
	}
	return false;
}

bool func_1381(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1963())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || func_1963()) || bVar1)
		{
			if (bVar1)
			{
				func_1964();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

bool func_1398(int iParam0)
{
	if (((((((iParam0 == joaat("A_C_DEER_01") || iParam0 == joaat("A_C_BUCK_01")) || iParam0 == joaat("A_C_BOAR_01")) || iParam0 == joaat("A_C_FOX_01")) || iParam0 == joaat("A_C_SQUIRREL_01")) || iParam0 == joaat("A_C_EAGLE_01")) || iParam0 == joaat("A_C_RABBIT_01")) || iParam0 == joaat("A_C_COYOTE_01"))
	{
		return true;
	}
	return false;
}

int func_1399()
{
	int iVar0;
	if (func_892(2.3f))
	{
		if (!bLocal_1027)
		{
			if (iLocal_1025 > 0)
			{
				bLocal_1027 = true;
			}
		}
		iVar0 = 0;
	}
	else if (func_892(0.5f))
	{
		iVar0 = 1;
	}
	else if (!func_892(0.1f))
	{
		iVar0 = 2;
	}
	return iVar0;
}

char* func_1400(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "NULL";
			break;
		case 1:
			if (iLocal_1025 == 0)
			{
				sVar0 = "ABI1_JAKFAST1";
			}
			else if (!bLocal_1026 && bLocal_1027)
			{
				sVar0 = "ABI1_JAKFAST2";
				bLocal_1026 = true;
			}
			else
			{
				sVar0 = "ABI1_RDFASTER";
			}
			iLocal_1025++;
			break;
		case 2:
			sVar0 = "ABI1_JRSLOWRD";
			break;
	}
	return sVar0;
}

void func_1413()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_291))
		{
			ENTITY::DETACH_ENTITY(iLocal_291, false, true);
		}
		if (PED::_GET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInLeftHand"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInLeftHand", false, -1);
		}
		if (PED::_GET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInRightHand"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iLocal_301, "FishingRodInRightHand", false, -1);
		}
	}
}

bool func_1414()
{
	if (__LIB_5__::func_463())
	{
		return false;
	}
	if (bLocal_165)
	{
		return false;
	}
	if (__LIB_12__::func_611(0))
	{
		return false;
	}
	if (__LIB_1__::func_673(0))
	{
		return false;
	}
	if (__LIB_1__::func_675(0))
	{
		return false;
	}
	return true;
}

void func_1415()
{
	__LIB_8__::func_600(0, 0);
}

bool func_1416(float fParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		vVar0 = { Global_36 + Vector(10f, 0f, 0f) };
		vVar3 = { Global_36 };
		if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar0, 0, &(vVar0.f_2)) == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), false);
			fVar6 = (vVar0.z - vVar3.z);
			if (fVar6 > fParam0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

void func_1420(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_75(&uLocal_558))
	{
		if (__LIB_0__::func_265(&uLocal_558) <= 90f)
		{
			if (func_426(0) > iLocal_192)
			{
				__LIB_12__::func_967(uParam0, joaat("RABI1_QUICKFISH"));
				__LIB_0__::func_37(&uLocal_558);
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_558);
		}
	}
	switch (iLocal_779)
	{
		case 0:
			if (func_426(0) > iLocal_192)
			{
				if (!__LIB_6__::func_904())
				{
					iVar0 = __LIB_0__::func_453(0);
					if (iVar0 == 0)
					{
						sLocal_489 = "ABI1_1STCATCH";
					}
					else if (iVar0 == 2)
					{
						sLocal_489 = "ABI1_1STCATCH_C";
					}
					else if (iVar0 == 12)
					{
						sLocal_489 = "ABI1_1STCATCH_S";
					}
					else if (iVar0 == 11)
					{
						sLocal_489 = "ABI1_1STCATCH_R";
					}
					else if (iVar0 == 9)
					{
						sLocal_489 = "ABI1_1STCATCH_P";
					}
					else if (iVar0 == 10)
					{
						sLocal_489 = "ABI1_1STCTCH_RP";
					}
					else
					{
						sLocal_489 = "";
					}
					iLocal_182 = iVar0;
					bLocal_165 = true;
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489) || __LIB_14__::func_124(24))
					{
						iLocal_192 = func_426(0);
						func_1971(iLocal_779, 1);
					}
					else if (__LIB_12__::func_876(uParam0, sLocal_489, 0))
					{
						iLocal_192 = func_426(0);
						func_1971(iLocal_779, 1);
					}
				}
			}
			break;
		case 1:
			if (!__LIB_6__::func_904() || MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489))
			{
				if (!__LIB_14__::func_124(24))
				{
					if (__LIB_12__::func_876(uParam0, "ABI1_THROBACK", 0))
					{
						func_1971(iLocal_779, 2);
					}
				}
				else
				{
					func_1971(iLocal_779, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_904() || MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489))
			{
				if (func_1972())
				{
					if (func_1973(0) || __LIB_14__::func_124(24))
					{
						if (__LIB_12__::func_876(uParam0, "ABI1_DEADFISH", 0))
						{
							func_1971(iLocal_779, 3);
						}
					}
					else
					{
						bLocal_165 = false;
						func_1971(iLocal_779, 4);
					}
				}
			}
			break;
		case 3:
			if (!__LIB_6__::func_904())
			{
				bLocal_165 = false;
				func_1971(iLocal_779, 4);
			}
			break;
		case 4:
			if (func_426(0) > iLocal_192)
			{
				if (!__LIB_6__::func_904())
				{
					iVar0 = __LIB_0__::func_453(0);
					if (iVar0 == 0)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_B2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_B";
						}
					}
					else if (iVar0 == 2)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_C2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_C";
						}
					}
					else if (iVar0 == 12)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_S2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_S";
						}
					}
					else if (iVar0 == 11)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_R2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_R";
						}
					}
					else if (iVar0 == 9)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTCH_P2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCATCH_P";
						}
					}
					else if (iVar0 == 10)
					{
						if (iVar0 == iLocal_182)
						{
							sLocal_489 = "ABI1_2NDCTH_RP2";
						}
						else
						{
							sLocal_489 = "ABI1_2NDCTCH_RP";
						}
					}
					else
					{
						sLocal_489 = "";
					}
					if (!bLocal_165)
					{
						bLocal_165 = true;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489) || __LIB_14__::func_124(24))
					{
						iLocal_192 = func_426(0);
						func_1428();
						func_1971(iLocal_779, 5);
					}
					else if (__LIB_12__::func_876(uParam0, sLocal_489, 0))
					{
						iLocal_192 = func_426(0);
						func_1428();
						func_1971(iLocal_779, 5);
					}
				}
			}
			break;
		case 5:
			if (!__LIB_6__::func_904() || MISC::IS_STRING_NULL_OR_EMPTY(sLocal_489))
			{
				if (func_1972())
				{
					if (func_1973(0) && !__LIB_14__::func_124(24))
					{
						if (__LIB_12__::func_876(uParam0, "ABI1_DEADFISH", 0))
						{
							func_1971(iLocal_779, 7);
						}
					}
					else
					{
						bLocal_165 = false;
						func_1971(iLocal_779, 8);
					}
				}
			}
			break;
		case 7:
			if (!__LIB_6__::func_904())
			{
				bLocal_165 = false;
				func_1971(iLocal_779, 8);
			}
			break;
	}
}

void func_1421()
{
	switch (iLocal_782)
	{
		case 0:
			if (iLocal_792 != 1)
			{
				iLocal_792 = 1;
			}
			if (func_384(10))
			{
				if (func_1974())
				{
					if (func_384(2))
					{
						if (!__LIB_0__::func_75(&uLocal_555))
						{
							__LIB_1__::func_148(&uLocal_555);
						}
						else if (__LIB_0__::func_265(&uLocal_555) > 1.2f)
						{
							__LIB_0__::func_37(&uLocal_555);
							func_333(13);
							iLocal_792 = 3;
							TASK::TASK_PLAY_ANIM(iLocal_301, sLocal_491, sLocal_494, 4f, -4f, -1, 67108868, 0f, false, 32768, false, 0, false);
							ENTITY::PLAY_ENTITY_ANIM(iLocal_291, sLocal_495, sLocal_491, 4f, false, false, false, 0f, 0);
							func_1975(iLocal_782, 1);
						}
					}
				}
				else if (!func_1416(0.3f))
				{
					vLocal_602 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, vLocal_754.z, vLocal_591) };
					if (!__LIB_0__::func_491(iLocal_301, 713668775))
					{
						iLocal_792 = 3;
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_602, 1f, -1, 0.25f, 0, vLocal_754.z);
					}
				}
			}
			break;
		case 1:
			if (!func_384(3))
			{
				if (!__LIB_0__::func_491(iLocal_301, -2017877118))
				{
					func_334(1, 1);
					iLocal_792 = 1;
					func_333(3);
				}
				else if (!func_384(15))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_301, sLocal_491, sLocal_494) > 0.5f)
					{
						func_1976(iLocal_301);
						func_333(15);
					}
				}
			}
			else
			{
				func_738(13);
				func_1975(iLocal_782, 2);
			}
			break;
		case 2:
			if (func_1974())
			{
				iLocal_792 = 1;
				if (func_384(0))
				{
					if (!__LIB_0__::func_75(&uLocal_555))
					{
						__LIB_1__::func_148(&uLocal_555);
					}
					else if (__LIB_0__::func_264(&uLocal_555) > 1f)
					{
						iLocal_792 = 3;
						__LIB_0__::func_37(&uLocal_555);
						func_333(13);
						func_1977();
						TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
						TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_496, 2f, -2f, -1, 67108868, 0f, false, 32768, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_493, 2f, -8f, -1, 67108869, 0f, false, 32768, false, 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
						func_1975(iLocal_782, 3);
					}
				}
			}
			else
			{
				iLocal_792 = 3;
				vLocal_602 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, vLocal_754.z, vLocal_591) };
				if (!__LIB_0__::func_491(iLocal_301, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_301, vLocal_602, 1f, -1, 0.25f, 0, vLocal_754.z);
				}
			}
			break;
		case 3:
			if (!func_384(1))
			{
				if (!__LIB_0__::func_491(iLocal_301, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iLocal_301) > 0)
				{
					func_333(1);
				}
			}
			else
			{
				func_738(13);
				iLocal_792 = 1;
				func_1975(iLocal_782, 4);
			}
			break;
		case 4:
			if (func_384(4))
			{
				if (!__LIB_0__::func_75(&uLocal_555))
				{
					__LIB_1__::func_148(&uLocal_555);
				}
				else if (__LIB_0__::func_264(&uLocal_555) > 1.2f)
				{
					iLocal_792 = 3;
					__LIB_0__::func_37(&uLocal_555);
					func_333(13);
					TASK::TASK_PLAY_ANIM(iLocal_301, sLocal_490, sLocal_497, 8f, -8f, -1, 6, 0f, false, 0, false, 0, false);
					func_1975(iLocal_782, 5);
				}
			}
			break;
		case 5:
			if (!func_384(5))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_301, sLocal_490, sLocal_497) > 0.9f)
				{
					func_333(5);
				}
			}
			else
			{
				iLocal_792 = 1;
				func_738(13);
				func_1975(iLocal_782, 6);
			}
			break;
		case 6:
			if (func_384(6))
			{
				if (!__LIB_0__::func_75(&uLocal_555))
				{
					__LIB_1__::func_148(&uLocal_555);
				}
				else if (__LIB_0__::func_264(&uLocal_555) > 0f)
				{
					__LIB_0__::func_37(&uLocal_555);
					func_333(13);
					iLocal_792 = 3;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_498, 8f, -8f, -1, 4, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_499, 8f, -8f, -1, 5, 0f, false, 0, false, 0, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
					func_333(14);
					func_1975(iLocal_782, 7);
				}
			}
			break;
		case 7:
			if (!func_384(7))
			{
				if (!func_384(16))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_301, sLocal_490, sLocal_498) > 0.1f || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_301, 463717823))
					{
						func_1978();
						func_333(16);
					}
				}
				if (Local_18 == 3)
				{
					func_333(7);
				}
			}
			else
			{
				iLocal_792 = 3;
				func_738(13);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
				TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_500, 4f, -8f, -1, 4, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_501, 8f, -8f, -1, 4, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_502, 8f, -8f, -1, 4, 0f, false, 0, false, 0, false);
				TASK::SET_SEQUENCE_TO_REPEAT(iLocal_478, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
				func_1975(iLocal_782, 8);
			}
			break;
		case 8:
			if (func_384(8))
			{
				func_333(13);
				TASK::TASK_PLAY_ANIM(iLocal_301, sLocal_490, sLocal_503, 4f, -8f, -1, 5, 0f, false, 0, false, 0, false);
				func_1979();
				func_1975(iLocal_782, 9);
			}
			break;
		case 9:
			if (!func_384(9))
			{
				if (Local_18 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_493, 8f, -8f, -1, 4, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_490, sLocal_492, 8f, -8f, -1, 5, 0f, false, 0, false, 0, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_478);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
					func_333(9);
				}
			}
			else
			{
				func_1975(iLocal_782, 10);
			}
			break;
	}
}

void func_1422()
{
	if (!func_384(0))
	{
		if (func_1980(0))
		{
			func_333(0);
		}
	}
}

void func_1423()
{
	if (!func_384(4))
	{
		if (__LIB_12__::func_607(0))
		{
			func_333(4);
		}
	}
}

void func_1424()
{
	if (!func_384(2))
	{
		if (func_1982(0))
		{
			func_333(2);
		}
	}
}

void func_1425(int iParam0, int iParam1)
{
	iLocal_780 = iParam1;
}

bool func_1426()
{
	int iVar0;
	iVar0 = __LIB_8__::func_609(0);
	if (iVar0 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		return true;
	}
	return false;
}

bool func_1427(int iParam0)
{
	return __LIB_1__::func_672(iParam0, 64);
}

void func_1428()
{
	if (bLocal_144)
	{
		bLocal_144 = false;
	}
	if (bLocal_145)
	{
		bLocal_145 = false;
	}
	if (bLocal_148)
	{
		bLocal_148 = false;
	}
	if (bLocal_149)
	{
		bLocal_149 = false;
	}
}

bool func_1429(int iParam0)
{
	return __LIB_1__::func_672(iParam0, 4);
}

void func_1433(var uParam0, bool bParam1)
{
	if ((((((iLocal_780 == 12 && !bLocal_163) && !__LIB_12__::func_611(0)) && !__LIB_1__::func_673(0)) && !__LIB_6__::func_904()) && !__LIB_14__::func_124(16)) && !__LIB_14__::func_124(24))
	{
		if (!__LIB_0__::func_75(&uLocal_537))
		{
			__LIB_1__::func_148(&uLocal_537);
		}
		else if (__LIB_0__::func_264(&uLocal_537) > 7f)
		{
			if (!bParam1)
			{
				switch (iLocal_781)
				{
					case 0:
						if (__LIB_12__::func_876(uParam0, "ABI1_TROUSERS", 0))
						{
							func_425();
							iLocal_781 = 1;
							func_1425(iLocal_780, 20);
						}
						break;
					case 1:
						if (__LIB_12__::func_876(uParam0, "ABI1_FISHTALK1", 0))
						{
							func_425();
							iLocal_781 = 2;
							func_1425(iLocal_780, 20);
						}
						break;
					case 2:
						if (__LIB_12__::func_876(uParam0, "ABI1_FISHTALK2", 0))
						{
							func_425();
							iLocal_781 = 3;
							func_1425(iLocal_780, 20);
						}
						break;
					case 3:
						if (__LIB_12__::func_876(uParam0, "ABI1_FISHTALK3", 0))
						{
							func_425();
							iLocal_781 = 4;
							func_1425(iLocal_780, 20);
						}
						break;
					case 4:
						if (__LIB_12__::func_876(uParam0, "ABI1_FISHTALK4", 0))
						{
							func_425();
							iLocal_781 = 5;
							func_1425(iLocal_780, 20);
						}
						break;
					case 5:
						if (__LIB_12__::func_876(uParam0, "ABI1_FISHTALK5", 0))
						{
							func_425();
							iLocal_781 = 6;
							func_1425(iLocal_780, 20);
						}
						break;
				}
			}
			else if (iLocal_803 != 7)
			{
				switch (iLocal_783)
				{
					case 0:
						if (__LIB_12__::func_876(uParam0, "ABI1_NECKL1", 0))
						{
							func_425();
							iLocal_783 = 1;
							func_1425(iLocal_780, 20);
						}
						break;
					case 1:
						if (__LIB_12__::func_876(uParam0, "ABI1_NECKL2", 0))
						{
							func_425();
							iLocal_783 = 2;
							func_1425(iLocal_780, 20);
						}
						break;
					case 2:
						if (func_916())
						{
							if (__LIB_12__::func_876(uParam0, "ABI1_NECKL3", 0))
							{
								func_425();
								iLocal_783 = 3;
								func_1425(iLocal_780, 20);
							}
						}
						else
						{
							iLocal_783 = 3;
						}
						break;
					case 3:
						if ((__LIB_4__::func_149(0) && !__LIB_1__::func_675(0)) && func_1984())
						{
							if (__LIB_12__::func_876(uParam0, "ABI1_JFISH11", 0))
							{
								func_425();
								func_1425(iLocal_780, 20);
							}
						}
						else
						{
							__LIB_0__::func_37(&uLocal_537);
						}
						break;
				}
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_537))
	{
		__LIB_0__::func_37(&uLocal_537);
	}
}

void func_1434(int iParam0, int iParam1)
{
	iLocal_823 = iParam1;
}

bool func_1478(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_2002(iParam0))
		{
			__LIB_1__::func_695(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_1479(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_1577(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (func_2007(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1499(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_2024(iParam0);
}

bool func_1505(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!func_2007(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_1__::func_695(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_1151(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_1151(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_1151(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					func_1151(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1151(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!func_1151(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1151(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1151(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_1507(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1543(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1508(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_2029(Global_35, iParam0, &uVar0))
		{
			func_1266(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

bool func_1543(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1577(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_2065(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1544(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_1266(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1499(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_1151(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1545(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_2073(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_2073(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_2073(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_2073(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_2073(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_2073(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_2073(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_2073(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_2073(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_2073(-1, iParam0);
	}
}

void func_1558()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2083(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_2084();
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
	func_2083(1);
}

void func_1559()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_964(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1560()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2086(0);
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
	func_2086(1);
}

void func_1561()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2086(0);
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
	func_2086(1);
}

void func_1562()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_964(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_964(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1214(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1214(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_1563()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { __LIB_1__::func_605() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_1151(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_2091(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_2091(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_2091(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_2091(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_2091(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_2091(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_2091(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_2091(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_2091(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_2091(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_2091(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_2091(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_2091(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_2091(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !__LIB_0__::func_91())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (__LIB_0__::func_154(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (__LIB_0__::func_293(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((__LIB_0__::func_293(24) && __LIB_0__::func_154(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!__LIB_0__::func_154(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (__LIB_0__::func_293(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_1566(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_2092(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_2092(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_2092(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_2092(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_2092(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_2092(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_1567(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_1577(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

struct<5> func_1577(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1697(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1697(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1592(var uParam0, int iParam1, int iParam2, int iParam3)
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
	Var5 = { func_1577(iVar0, 0, 1) };
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
	iVar11 = (func_2118(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_964(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1680(int iParam0, int iParam1)
{
	iLocal_806 = iParam1;
}

int func_1696(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_1697(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1758(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_12__::func_619(iParam0, vVar0, fParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_1183(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_12__::func_620(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

bool func_1772(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1577(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1816()
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
			func_671(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2267(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_671(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

bool func_1835(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_1577(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1900(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_5, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 0f, 10f, 0f) };
	vVar7 = { __LIB_0__::func_173(vVar4 - vVar0) };
	fVar10 = 1f;
	fVar11 = 0f;
	__LIB_12__::func_608(&fVar10, &fVar11, 45f);
	vVar12 = { __LIB_0__::func_173(vVar7.x, vVar7.y, fVar11) };
	vVar15 = { vVar12 * FtoV((Local_18.f_12 * 5f)) };
	PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_16);
	PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_16);
	ENTITY::APPLY_FORCE_TO_ENTITY(Local_18.f_5, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::APPLY_FORCE_TO_ENTITY(Local_18.f_6, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_5, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_6, true);
}

int func_1963()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_3__::func_907(iVar0))
	{
		return 0;
	}
	iVar1 = func_1567(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

int func_1964()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_1567(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_2326(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
	return 1;
}

void func_1971(int iParam0, int iParam1)
{
	iLocal_779 = iParam1;
}

bool func_1972()
{
	if (__LIB_8__::func_608(0))
	{
		return true;
	}
	if (__LIB_1__::func_676(0) || __LIB_1__::func_677(0))
	{
		return true;
	}
	return false;
}

bool func_1973(int iParam0)
{
	return __LIB_1__::func_672(iParam0, 131072);
}

bool func_1974()
{
	if (!func_2335() && !func_2336())
	{
		if (__LIB_2__::func_955(iLocal_301, vLocal_754.z, 1106247680 /* Float: 30f */))
		{
			if (!__LIB_0__::func_491(iLocal_301, 713668775))
			{
				if (!__LIB_0__::func_491(iLocal_301, 242628503))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_1975(int iParam0, int iParam1)
{
	iLocal_782 = iParam1;
}

void func_1976(int iParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_6)) || ENTITY::DOES_ENTITY_EXIST(Local_18.f_7))
	{
		return;
	}
	STREAMING::REQUEST_MODEL(Local_18.f_3, false);
	if (!STREAMING::HAS_MODEL_LOADED(Local_18.f_3))
	{
		return;
	}
	Local_18.f_7 = OBJECT::CREATE_OBJECT(Local_18.f_3, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), false, true, false, false, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_18.f_7, Local_18.f_6, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_18.f_6, "lure_bone"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_7, true);
}

void func_1977()
{
	func_1413();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_291))
		{
			ENTITY::DETACH_ENTITY(iLocal_291, false, true);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_291, iLocal_301, PED::GET_PED_BONE_INDEX(iLocal_301, 37709), vLocal_715, vLocal_718, false, false, false, false, 2, true, false, false);
	}
}

void func_1978()
{
	if (Local_18 == 1)
	{
		func_1038(2);
	}
}

void func_1979()
{
	if (Local_18 == 3)
	{
		func_1038(4);
	}
}

bool func_1980(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/] == 2;
}

bool func_1982(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/] == 13;
}

bool func_1984()
{
	int iVar0;
	vector3 vVar1;
	int iVar4[10];
	float fVar15;
	int iVar16;
	iVar0 = PED::GET_PED_NEARBY_PEDS(iLocal_301, &iVar4, -1, -1);
	if (iVar0 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			iVar16 = ENTITY::GET_ENTITY_MODEL(iVar4[iVar0]);
			if (func_2338(iVar16))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar4[iVar0], false, false) };
				WATER::GET_WATER_HEIGHT_NO_WAVES(vVar1, &fVar15);
				if ((fVar15 - vVar1.z) > 0f)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_2002(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_2007(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_2007(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!func_1697(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_1697(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_2347(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_2024(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						func_1543(iVar0, 1, 752097756);
					}
					func_1266(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1543(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1543(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_1543(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1543(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1543(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_1543(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_2380();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_2029(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1567(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_549(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_2065(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_2007(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_2073(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2404(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2404(iParam1, 1);
		func_2405(iParam0);
	}
}

void func_2083(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_964(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_2084();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2410(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_967(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1214(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2415(Var0);
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
				func_2420(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_2084()
{
	if (!func_2421(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_2421(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2086(bool bParam0)
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
		func_964(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_964(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1214(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1214(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1214(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
				func_2420(iVar0, iVar4);
			}
			iVar0++;
		}
		func_2084();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_2091(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param1, iParam5, &Var5, 0))
	{
		__LIB_0__::func_939(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_2065(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

int func_2092(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_2427(iParam0, 1);
	return 1;
}

int func_2118(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2118(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2118(iVar63, -915411861, 1, 0, 0));
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

int func_2267(int iParam0, int iParam1)
{
	var uVar0;
	return func_2485(&uVar0, iParam0, iParam1);
}

void func_2326(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = func_1567(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_6__::func_107(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_6__::func_107(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_6__::func_107(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_2335()
{
	float fVar0;
	if (func_384(13))
	{
		return false;
	}
	fVar0 = __LIB_1__::func_348(Global_35, iLocal_301);
	if (fVar0 < (2f - 0.5f))
	{
		func_738(12);
		return true;
	}
	return false;
}

bool func_2336()
{
	float fVar0;
	if (func_384(13))
	{
		return false;
	}
	fVar0 = __LIB_1__::func_348(Global_35, iLocal_301);
	if (fVar0 > (2f + 0.5f))
	{
		func_738(12);
		return true;
	}
	return false;
}

bool func_2338(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam0 == iLocal_285[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2347(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_1577(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1696((386 + iVar29), 1);
		if (func_1697(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

void func_2380()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_2532();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_1543(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_1543(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_2404(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1499(50);
			}
			else
			{
				func_1499(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1499(51);
			}
			else
			{
				func_1499(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_1499(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_2405(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_2541();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_2541();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_2543();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_2543();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_2544();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_2544();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_2410(int iParam0)
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
	func_1214(iParam0, 1, 1, -142743235, 1);
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
	func_1566(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_1214(uVar18[iVar36], 1, 1, -142743235, 1);
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
		func_1566(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_1567(uVar18[iVar36]), 1);
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
				func_1566(__LIB_0__::func_998(iVar35), 1, 1);
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

void func_2415(struct<6> Param0)
{
	if (!func_2566(Param0.f_4, 1))
	{
	}
	if (!func_2566(Param0, 1))
	{
	}
	if (!func_2566(Param0.f_2, 1))
	{
	}
	if (!func_2566(Param0.f_5, 1))
	{
	}
	if (!func_2566(Param0.f_3, 1))
	{
	}
	if (!func_2566(Param0.f_1, 1))
	{
	}
}

int func_2420(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!func_2065(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_2421(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&Var7);
					if (func_2065(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							__LIB_1__::func_556(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_2427(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1577(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

int func_2485(var uParam0, int iParam1, int iParam2)
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
		return func_2485(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2532()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_3__::func_150(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_2611(0);
	func_2612(7);
	func_2613(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_2613(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_2613(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_2541()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1543(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_2543()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1543(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_2544()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1543(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_2566(int iParam0, int iParam1)
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
	if (!func_2628(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
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
				if (func_2566(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2566(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2566(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2566(iVar21, 1))
				{
				}
			}
		}
		func_2632();
		return true;
	}
	return false;
}

void func_2611(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_1566(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_2612(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_2644(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_2427(iVar2, 0))
		{
			func_1267(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_2613(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_2646(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2646(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2646(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2646(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2646(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2646(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_2648(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_2648(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_2648(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1267(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

bool func_2628(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = __LIB_0__::func_357(iParam1);
		iVar5 = __LIB_0__::func_857(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_1577(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { __LIB_0__::func_429(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = __LIB_0__::func_162(0);
			Var37 = { func_1577(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { __LIB_0__::func_429(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = __LIB_0__::func_357(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (__LIB_0__::func_814(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

int func_2632()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { func_1577(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

void func_2644(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_2671(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_2646(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_2427(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_2644(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_2648(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1577(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

void func_2671(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_1567(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

