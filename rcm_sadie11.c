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
	struct<4> Local_18 = { 0, 0, 0, 0 } ;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[2] = { 0, 0 };
	int iLocal_35 = 0;
	int iLocal_36[5] = { 0, 0, 0, 0, 0 };
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	bool bLocal_68 = false;
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	bool bLocal_73 = false;
	int iLocal_74[2] = { 0, 0 };
	int iLocal_77[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	int iLocal_102[2] = { 0, 0 };
	int iLocal_105[2] = { 0, 0 };
	int iLocal_108[2] = { 0, 0 };
	vector3 vLocal_111 = { 1,305485E-32f, NaNf, 0,01937466f };
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116[5] = { 0, 0, 0, 0, 0 };
	var uLocal_122[2] = { 0, 0 };
	var uLocal_125 = 0;
	int iLocal_126[5] = { 0, 0, 0, 0, 0 };
	int iLocal_132[5] = { 0, 0, 0, 0, 0 };
	int iLocal_138[2] = { 0, 0 };
	int iLocal_141[2] = { 0, 0 };
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150[2] = { 0f, 0f };
	float fLocal_153[2] = { 0f, 0f };
	float fLocal_156[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_162[2] = { 0f, 0f };
	float fLocal_165[2] = { 0f, 0f };
	float fLocal_168[2] = { 0f, 0f };
	float fLocal_171 = 0f;
	float fLocal_172[2] = { 0f, 0f };
	float fLocal_175 = 0f;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
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
	int iLocal_198 = 0;
	int iLocal_199[2] = { 0, 0 };
	int iLocal_202 = 0;
	var uLocal_203[2] = { 0, 0 };
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	struct<22> Local_211 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_233 = 3;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	struct<22> Local_236 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_258 = 3;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<22> Local_261 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_283 = 3;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	struct<22> Local_286 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_308 = 3;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	struct<22> Local_311 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_333 = 3;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336[2] = { 0, 0 };
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_380[2] = { 0, 0 };
	int iLocal_383[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399[3] = { 0, 0, 0 };
	int iLocal_403[3] = { 0, 0, 0 };
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412[2] = { 0, 0 };
	int iLocal_415[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431[2] = { 0, 0 };
	int iLocal_434[2] = { 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438[2] = { 0, 0 };
	int iLocal_441 = 0;
	int iLocal_442[2] = { 0, 0 };
	int iLocal_445[5] = { 0, 0, 0, 0, 0 };
	int iLocal_451[5] = { 0, 0, 0, 0, 0 };
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459[2] = { 0, 0 };
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	var uLocal_464 = -1;
	var uLocal_465 = 0;
	var uLocal_466 = -1;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 1073741824;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 1;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 1106247680;
	var uLocal_490 = 1067450368;
	var uLocal_491 = 0;
	var uLocal_492 = 1092616192;
	var uLocal_493 = 1112014848;
	var uLocal_494 = 1106247680;
	var uLocal_495 = 1101529088;
	var uLocal_496 = 1101004800;
	var uLocal_497 = 1084227584;
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
	struct<17> Local_524[1];
	int iLocal_542 = 0;
	var uLocal_543 = -1;
	var uLocal_544 = 0;
	var uLocal_545 = -1;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = -1;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 1073741824;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 1;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 1106247680;
	var uLocal_569 = 1067450368;
	var uLocal_570 = 0;
	var uLocal_571 = 1092616192;
	var uLocal_572 = 1112014848;
	var uLocal_573 = 1106247680;
	var uLocal_574 = 1101529088;
	var uLocal_575 = 1101004800;
	var uLocal_576 = 1084227584;
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
	struct<17> Local_603[1];
	var uLocal_621[3] = { 0, 0, 0 };
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637[2] = { 0, 0 };
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	char* sLocal_642 = NULL;
	char[] cLocal_643[8] = 0;
	char* sLocal_644 = NULL;
	char* sLocal_645 = NULL;
	char* sLocal_646 = NULL;
	char* sLocal_647 = NULL;
	char* sLocal_648 = NULL;
	char* sLocal_649 = NULL;
	char* sLocal_650 = NULL;
	char* sLocal_651 = NULL;
	char* sLocal_652 = NULL;
	char* sLocal_653[2] = { NULL, NULL };
	char* sLocal_656[2] = { NULL, NULL };
	char* sLocal_659[2] = { NULL, NULL };
	char* sLocal_662[2] = { NULL, NULL };
	char* sLocal_665[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_671[4] = { NULL, NULL, NULL, NULL };
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	vector3 vLocal_685[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_692[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
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
	var uLocal_719 = 0;
	vector3 vLocal_720[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	vector3 vLocal_762 = { 0f, 0f, 0f };
	float fLocal_765 = 0f;
	vector3 vLocal_766 = { 0f, 0f, 0f };
	float fLocal_769 = 0f;
	vector3 vLocal_770 = { 0f, 0f, 0f };
	float fLocal_773 = 0f;
	vector3 vLocal_774 = { 0f, 0f, 0f };
	float fLocal_777 = 0f;
	vector3 vLocal_778 = { 0f, 0f, 0f };
	float fLocal_781 = 0f;
	vector3 vLocal_782 = { 0f, 0f, 0f };
	vector3 vLocal_785[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_792[2] = { 0f, 0f };
	vector3 vLocal_795[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_802[2] = { 0f, 0f };
	vector3 vLocal_805[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_812[18] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_867[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_883[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_889 = { 0f, 0f, 0f };
	vector3 vLocal_892[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_908[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_914[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_930[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_946[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_952 = { 0f, 0f, 0f };
	float fLocal_955 = 0f;
	vector3 vLocal_956 = { 0f, 0f, 0f };
	float fLocal_959 = 0f;
	vector3 vLocal_960 = { 0f, 0f, 0f };
	vector3 vLocal_963 = { 0f, 0f, 0f };
	vector3 vLocal_966 = { 0f, 0f, 0f };
	float fLocal_969 = 0f;
	vector3 vLocal_970 = { 0f, 0f, 0f };
	vector3 vLocal_973 = { 0f, 0f, 0f };
	vector3 vLocal_976 = { 0f, 0f, 0f };
	vector3 vLocal_979 = { 0f, 0f, 0f };
	vector3 vLocal_982 = { 0f, 0f, 0f };
	vector3 vLocal_985 = { 0f, 0f, 0f };
	vector3 vLocal_988 = { 0f, 0f, 0f };
	vector3 vLocal_991 = { 0f, 0f, 0f };
	vector3 vLocal_994 = { 0f, 0f, 0f };
	vector3 vLocal_997 = { 0f, 0f, 0f };
	vector3 vLocal_1000 = { 0f, 0f, 0f };
	vector3 vLocal_1003 = { 0f, 0f, 0f };
	vector3 vLocal_1006 = { 0f, 0f, 0f };
	float fLocal_1009 = 0f;
	vector3 vLocal_1010[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1023[4] = { 0f, 0f, 0f, 0f };
	vector3 vLocal_1028 = { 0f, 0f, 0f };
	vector3 vLocal_1031[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1038[2] = { 0f, 0f };
	vector3 vLocal_1041[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1048[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1070[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_1078[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1100[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_1108 = { 0f, 0f, 0f };
	vector3 vLocal_1111 = { 0f, 0f, 0f };
	float fLocal_1114 = 0f;
	vector3 vLocal_1115 = { 0f, 0f, 0f };
	vector3 vLocal_1118 = { 0f, 0f, 0f };
	float fLocal_1121 = 0f;
	vector3 vLocal_1122 = { 0f, 0f, 0f };
	vector3 vLocal_1125 = { 0f, 0f, 0f };
	vector3 vLocal_1128 = { 0f, 0f, 0f };
	vector3 vLocal_1131 = { 0f, 0f, 0f };
	vector3 vLocal_1134 = { 0f, 0f, 0f };
	vector3 vLocal_1137 = { 0f, 0f, 0f };
	vector3 vLocal_1140 = { 0f, 0f, 0f };
	vector3 vLocal_1143 = { 0f, 0f, 0f };
	vector3 vLocal_1146 = { 0f, 0f, 0f };
	vector3 vLocal_1149 = { 0f, 0f, 0f };
	vector3 vLocal_1152 = { 0f, 0f, 0f };
	vector3 vLocal_1155 = { 0f, 0f, 0f };
	vector3 vLocal_1158 = { 0f, 0f, 0f };
	vector3 vLocal_1161 = { 0f, 0f, 0f };
	vector3 vLocal_1164 = { 0f, 0f, 0f };
	vector3 vLocal_1167 = { 0f, 0f, 0f };
	vector3 vLocal_1170 = { 0f, 0f, 0f };
	vector3 vLocal_1173 = { 0f, 0f, 0f };
	vector3 vLocal_1176 = { 0f, 0f, 0f };
	vector3 vLocal_1179 = { 0f, 0f, 0f };
	vector3 vLocal_1182 = { 0f, 0f, 0f };
	vector3 vLocal_1185 = { 0f, 0f, 0f };
	vector3 vLocal_1188 = { 0f, 0f, 0f };
	vector3 vLocal_1191 = { 0f, 0f, 0f };
	vector3 vLocal_1194 = { 0f, 0f, 0f };
	vector3 vLocal_1197 = { 0f, 0f, 0f };
	vector3 vLocal_1200 = { 0f, 0f, 0f };
	vector3 vLocal_1203 = { 0f, 0f, 0f };
	vector3 vLocal_1206 = { 0f, 0f, 0f };
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	var uLocal_1218[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1224[2] = { 0, 0 };
	int iLocal_1227 = 0;
	int iLocal_1228[2] = { 0, 0 };
	int iLocal_1231 = 0;
	int iLocal_1232 = 0;
	int iLocal_1233 = 0;
	int iLocal_1234 = 0;
	int iLocal_1235 = 0;
	int iLocal_1236 = 0;
	int iLocal_1237 = 0;
	int iLocal_1238 = 0;
	int iLocal_1239 = 0;
	int iLocal_1240 = 0;
	int iLocal_1241 = 0;
	int iLocal_1242 = 0;
	int iLocal_1243 = 0;
	int iLocal_1244 = 0;
	int iLocal_1245 = 0;
	int iLocal_1246 = 0;
	int iLocal_1247 = 0;
	int iLocal_1248 = 0;
	int iLocal_1249 = 0;
	int iLocal_1250 = 0;
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	int iLocal_1253 = 0;
	int iLocal_1254[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1260[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1266[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1272[5] = { 0f, 0f, 0f, 0f, 0f };
	int iLocal_1278[2] = { 0, 0 };
	int iLocal_1281[2] = { 0, 0 };
	int iLocal_1284 = 0;
	int iLocal_1285 = 0;
	int iLocal_1286[2] = { 0, 0 };
	int iLocal_1289 = 0;
	int iLocal_1290 = 0;
	int iLocal_1291 = 0;
	int iLocal_1292[2] = { 0, 0 };
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297[2] = { 0, 0 };
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	int iLocal_1303 = 0;
	int iLocal_1304[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340[3] = { 0, 0, 0 };
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	int iLocal_1346 = 0;
	struct<9> Local_1347[12];
	bool bLocal_1456 = false;
	bool bLocal_1457 = false;
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
	bLocal_51 = true;
	iLocal_144 = joaat("DOOR_RHO_TRAIN_BOOTHS");
	fLocal_171 = 2f;
	fLocal_175 = 1f;
	iLocal_182 = 1;
	iLocal_184 = joaat("PG_RC_SADDIESUPPLIES01X");
	iLocal_185 = joaat("PG_RC_SADDIESUPPLIES00X");
	iLocal_206 = joaat("WEAPON_REPEATER_CARBINE");
	iLocal_207 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iLocal_208 = joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE");
	iLocal_209 = joaat("WEAPON_MELEE_KNIFE_SADIE");
	iLocal_345 = joaat("WAGON02X");
	iLocal_346 = joaat("CS_MRSADLER");
	iLocal_347 = joaat("P_CS_RT_LETTERL_DBL");
	iLocal_348 = joaat("P_CS_RT_ENVELOPE01X");
	iLocal_349 = joaat("RCSP_SADIE1_MALES_01");
	iLocal_350 = joaat("P_CLEAVER01X");
	iLocal_351 = joaat("P_CS_RAG01X");
	iLocal_352 = joaat("P_CS_TOWEL02X");
	iLocal_353 = joaat("P_GLASSTALLBEER01X");
	iLocal_354 = joaat("P_CS_TREEFALLEN01X");
	iLocal_355 = joaat("P_KNIFE03X");
	iLocal_356 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_357 = joaat("P_CS_LETTER01A_X");
	iLocal_358 = joaat("P_CARROT02X");
	iLocal_359 = joaat("P_CRATE14X");
	iLocal_360 = joaat("P_CS_BARRAG01X");
	iLocal_361 = joaat("P_CS_CARROTSLICE01X");
	iLocal_362 = joaat("P_CS_MEATSTEW01X");
	iLocal_363 = joaat("P_CUTTINGBOARD01X");
	iLocal_364 = joaat("S_MEATBIT_CHUNCK_MEDIUM01X");
	iLocal_365 = joaat("P_AMB_CLIPBOARD_01");
	iLocal_366 = joaat("P_CRATE03X");
	iLocal_367 = joaat("P_PACKAGE13X");
	iLocal_368 = joaat("P_PEN01X");
	iLocal_369 = joaat("P_SACK04X");
	sLocal_642 = "rcm_sadie1_wpt3";
	cLocal_643 = "BLOCK_DEF_VOL";
	sLocal_644 = "rcm_sadie_camp_approach_short";
	sLocal_645 = "rcm_sadie_camp_approach_long";
	sLocal_646 = "rcm_sadie_store_approach_1";
	sLocal_647 = "rcm_sadie_store_approach_2";
	sLocal_648 = "rcm_sadie_store_approach_3";
	vLocal_762 = { 678.0542f, -1254.856f, 43.0152f };
	fLocal_765 = 256.4357f;
	vLocal_766 = { 1315.801f, -1293.926f, 75.3f };
	fLocal_769 = 182.1853f;
	vLocal_770 = { 920.2375f, -1145.369f, 51.9651f };
	fLocal_773 = 261.4211f;
	vLocal_774 = { 686.1996f, -1226.632f, 43.5325f };
	fLocal_777 = 303.9723f;
	vLocal_778 = { 1317.298f, -1291.436f, 76.0864f };
	fLocal_781 = -10.65f;
	vLocal_782 = { 1317.26f, -1292.37f, 74.8f };
	vLocal_952 = { 928.6031f, -1137.23f, 53.0116f };
	fLocal_955 = 225f;
	vLocal_956 = { 923.8962f, -1142.978f, 52.1299f };
	fLocal_959 = 205f;
	vLocal_960 = { 1317.296f, -1290.534f, 75.5443f };
	vLocal_963 = { 1321.396f, -1282.32f, 75.4598f };
	vLocal_966 = { 1226.733f, -1295.025f, 75.9054f };
	fLocal_969 = 45.0338f;
	vLocal_970 = { 695.0864f, -1243.891f, 43.4984f };
	vLocal_973 = { 907.1832f, -1134.689f, 50.6571f };
	vLocal_976 = { 1193.446f, -1215.329f, 73.9439f };
	vLocal_982 = { 680.9285f, -1248.872f, 43.1141f };
	vLocal_985 = { 909.4023f, -1145.292f, 51.8f };
	vLocal_988 = { 0f, -5f, 8f };
	vLocal_991 = { __LIB_1__::func_440(134) };
	vLocal_994 = { 677.6942f, -1252.388f, 43.0152f };
	vLocal_997 = { 694.529f, -1246.356f, 43.2858f };
	vLocal_1000 = { 0f, 0f, 76f };
	vLocal_1003 = { 16f, 13f, 6f };
	vLocal_1006 = { 1329.745f, -1294.337f, 76.0091f };
	fLocal_1009 = 62.2477f;
	vLocal_1028 = { 1320.647f, -1290.835f, 75.2662f };
	vLocal_1108 = { 1319.714f, -1287.146f, 75.2748f };
	vLocal_1111 = { 968.237f, -1201.101f, 61.866f };
	fLocal_1114 = 353.3973f;
	vLocal_1115 = { 973.4834f, -1182.737f, 61.2004f };
	vLocal_1118 = { 937.846f, -1143.048f, 54.59f };
	fLocal_1121 = 85f;
	vLocal_1122 = { 1319.83f, -1285.545f, 76.932f };
	vLocal_1125 = { 0f, 0f, 64f };
	vLocal_1128 = { 11f, 7f, 5f };
	vLocal_1131 = { 1183.347f, -1201.963f, 76.719f };
	vLocal_1134 = { 0f, 0f, 35f };
	vLocal_1137 = { 10f, 14f, 7f };
	vLocal_1140 = { 698.342f, -1246.279f, 44.499f };
	vLocal_1143 = { 0f, 0f, 12f };
	vLocal_1146 = { 13f, 28f, 5f };
	vLocal_1149 = { 674.036f, -1253.237f, 43.806f };
	vLocal_1152 = { 0f, 0f, 55f };
	vLocal_1155 = { 9f, 5f, 2f };
	vLocal_1158 = { 676.651f, -1251.834f, 43.806f };
	vLocal_1161 = { 0f, 0f, 65f };
	vLocal_1164 = { 3f, 2.5f, 2f };
	vLocal_1167 = { 677.697f, -1253.338f, 43.5f };
	vLocal_1170 = { 0f, 0f, 41f };
	vLocal_1173 = { 3f, 6f, 3f };
	vLocal_1176 = { 1226.215f, -1273.165f, 76.36083f };
	vLocal_1179 = { 0f, 0f, -75.05753f };
	vLocal_1182 = { 11.18121f, 10.0021f, 5.295205f };
	vLocal_1185 = { 1306.635f, -1381.975f, 75.1824f };
	vLocal_1188 = { 1185.727f, -1270.415f, 75.3635f };
	vLocal_1191 = { 1228.172f, -1296.832f, 75.9049f };
	iLocal_1211 = 44;
	iLocal_1212 = 19;
	iLocal_1250 = 1;
	iLocal_1284 = 1;
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
		func_4(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&Var0);
	while (true)
	{
		func_6(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_8(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_10(&Var0);
					break;
				case 3:
					func_11(&Var0);
					break;
				case 4:
					func_12(&Var0);
					break;
				case 2:
					func_13(&Var0);
					break;
				case 5:
					func_14(&Var0);
					break;
				case 6:
					func_15(&Var0);
					break;
				case 7:
					func_16(&Var0);
					break;
				case 8:
					func_17(&Var0);
					break;
				case 9:
					func_18(&Var0, 0);
					break;
				case 10:
					func_19(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_23(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_4(var uParam0)
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
			func_17(uParam0);
		}
		else
		{
			func_18(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_23(uParam0);
}

void func_5(var uParam0)
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
	func_39(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_45(uParam0);
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

void func_6(var uParam0)
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
	if (func_56(uParam0))
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
						Var1 = { func_64(0) };
						if (func_65(&Var1))
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
			if (func_67(uParam0))
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
			if (func_72(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_23(uParam0);
					return;
				}
				func_74(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_12__::func_996(uParam0);
			}
			func_76(uParam0);
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

void func_8(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_18(uParam0, 0);
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
				func_74(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_10(var uParam0)
{
	if (func_87(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_88(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_89(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_11(var uParam0)
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
				func_88(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_12(var uParam0)
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
	func_93(uParam0);
	if (func_94(uParam0))
	{
		func_88(uParam0);
		iVar0 = __LIB_9__::func_816(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
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
			func_15(uParam0);
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

void func_13(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_98(uParam0, __LIB_12__::func_767(uParam0)));
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
		__LIB_8__::func_710(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_14(var uParam0)
{
	if (func_100(uParam0))
	{
		func_15(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	func_101(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_103(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_105(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_105(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_16(var uParam0)
{
	int iVar0;
	if (func_106(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		func_108(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_109(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
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
		func_15(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_17(var uParam0)
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
		__LIB_0__::func_11(uParam0);
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
			func_130(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
			__LIB_13__::func_467();
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
	func_74(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_23(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_18(var uParam0, bool bParam1)
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
		func_140(uParam0);
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
		func_74(uParam0);
	}
	if (bParam1)
	{
		func_23(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_19(var uParam0)
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
			func_23(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_23(uParam0);
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		if (func_152(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_161(uParam0);
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

void func_39(var uParam0)
{
	int iVar0;
	func_188(uParam0, 1);
	func_189();
	iLocal_196 = __LIB_0__::func_647(joaat("CASH_REGISTERS_ROBBED"));
	__LIB_4__::func_932(30, 0);
	__LIB_4__::func_932(31, 0);
	__LIB_12__::func_658(uParam0, 3);
	__LIB_12__::func_659(uParam0, 28);
	iLocal_380[0] = joaat("G_M_Y_UNIEXCONFEDS_01");
	iLocal_380[1] = joaat("G_M_O_UNIEXCONFEDS_01");
	vLocal_785[0 /*3*/] = { 1247.734f, -1167.475f, 78.1139f };
	fLocal_792[0] = 146.0882f;
	vLocal_785[1 /*3*/] = { 1246.224f, -1166f, 78.2141f };
	fLocal_792[1] = 137.8316f;
	fLocal_165[0] = 9999.9f;
	fLocal_165[1] = 9999.9f;
	fLocal_168[0] = 1f;
	fLocal_168[1] = 1f;
	iLocal_1281[0] = 0;
	iLocal_1281[1] = 0;
	sLocal_659[0] = "rcm_sadie_left_attacker";
	sLocal_659[1] = "rcm_sadie_right_attacker";
	vLocal_805[0 /*3*/] = { -4f, 2.5f, 0f };
	vLocal_805[1 /*3*/] = { 5f, 3f, 0f };
	iLocal_199[0] = -1;
	iLocal_199[1] = -1;
	iLocal_108[iLocal_181] = 0;
	iLocal_108[iLocal_182] = 0;
	iLocal_74[0] = 0;
	iLocal_74[1] = 0;
	sLocal_653[0] = "RSAD1_TAUNT0";
	sLocal_653[1] = "RSAD1_TAUNT1";
	fLocal_172[0] = 0.5f;
	fLocal_172[1] = 1.5f;
	func_194();
	func_195();
	vLocal_867[0 /*3*/] = { 915.8184f, -1110.825f, 52.7583f };
	fLocal_883[0] = 341.5358f;
	vLocal_867[1 /*3*/] = { 911.2047f, -1176.788f, 51.1268f };
	fLocal_883[1] = 341.5358f;
	vLocal_867[2 /*3*/] = { 929.0062f, -1166.63f, 53.7681f };
	fLocal_883[2] = 14.3691f;
	vLocal_867[3 /*3*/] = { 929.0062f, -1166.63f, 53.7681f };
	fLocal_883[3] = 19.2121f;
	vLocal_867[4 /*3*/] = { 946.0284f, -1182.446f, 55.046f };
	fLocal_883[4] = 24.3833f;
	PED::ADD_RELATIONSHIP_GROUP("Attackers", &iLocal_627);
	PED::ADD_RELATIONSHIP_GROUP("HitGuy", &iLocal_628);
	vLocal_812[0 /*3*/] = { 1172.603f, -1148.661f, 70.8137f };
	vLocal_812[2 /*3*/] = { 1159.734f, -1144.62f, 69.6617f };
	vLocal_812[4 /*3*/] = { 1148.84f, -1142.622f, 69.2087f };
	vLocal_812[6 /*3*/] = { 1137.725f, -1142.269f, 69.0129f };
	vLocal_812[8 /*3*/] = { 1128.152f, -1139.245f, 68.5956f };
	vLocal_812[5 /*3*/] = { 1117.436f, -1140.891f, 68.0497f };
	vLocal_812[10 /*3*/] = { 1100.35f, -1144.744f, 67.2086f };
	vLocal_812[12 /*3*/] = { 1084.037f, -1151.45f, 67.1749f };
	vLocal_812[14 /*3*/] = { 1069.33f, -1157.326f, 65.3878f };
	vLocal_812[3 /*3*/] = { 1114.585f, -1171.573f, 69.059f };
	vLocal_812[5 /*3*/] = { 1101.63f, -1183.257f, 69.4125f };
	vLocal_812[7 /*3*/] = { 1088.958f, -1188.441f, 69.4884f };
	vLocal_812[9 /*3*/] = { 1076.148f, -1192.694f, 68.8939f };
	vLocal_812[11 /*3*/] = { 1061.474f, -1194.782f, 67.5842f };
	vLocal_812[13 /*3*/] = { 1048.064f, -1200.839f, 66.9065f };
	vLocal_812[15 /*3*/] = { 1029.789f, -1199.171f, 63.5636f };
	vLocal_812[17 /*3*/] = { 1010.734f, -1197.254f, 64.1971f };
	sLocal_662[0] = "ATT_0_VOL";
	vLocal_795[0 /*3*/] = { 933.767f, -1136.706f, 54.799f };
	fLocal_802[0] = 100f;
	iLocal_138[0] = 1;
	iLocal_141[0] = 3;
	sLocal_662[1] = "ATT_1_VOL";
	vLocal_795[1 /*3*/] = { 937.785f, -1146.487f, 54.635f };
	fLocal_802[1] = 79f;
	iLocal_138[1] = 0;
	iLocal_141[1] = 3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iLocal_1286[iVar0] = 0;
		iLocal_1297[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_1326[iVar0] = 0;
		switch (iVar0)
		{
			case 0:
				fLocal_156[iVar0] = 75f;
				break;
			case 1:
				fLocal_156[iVar0] = 55f;
				break;
			case 2:
				fLocal_156[iVar0] = 50f;
				break;
			case 3:
				fLocal_156[iVar0] = 30f;
				break;
			case 4:
				fLocal_156[iVar0] = 40f;
				break;
		}
		if (iVar0 == 0 || iVar0 == 1)
		{
			iLocal_96[iVar0] = 1;
		}
		else
		{
			iLocal_96[iVar0] = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iLocal_102[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_1254[iVar0] = 0;
		fLocal_1260[iVar0] = 999f;
		fLocal_1266[iVar0] = 0f;
		iVar0++;
	}
	sLocal_665[0] = "SEC_VOL_0";
	vLocal_892[0 /*3*/] = { 924.8577f, -1081.474f, 55.1004f };
	fLocal_908[0] = 177.123f;
	vLocal_914[0 /*3*/] = { 915.8184f, -1110.825f, 52.7583f };
	vLocal_930[0 /*3*/] = { 915.141f, -1115.617f, 53.275f };
	fLocal_946[0] = 167.738f;
	iLocal_126[0] = 2;
	iLocal_132[0] = 3;
	sLocal_665[1] = "SEC_VOL_1";
	vLocal_892[1 /*3*/] = { 915.2155f, -1201.608f, 50.611f };
	fLocal_908[1] = 20.4302f;
	vLocal_914[1 /*3*/] = { 911.2047f, -1176.788f, 51.1268f };
	vLocal_930[1 /*3*/] = { 910.914f, -1170.025f, 52.113f };
	fLocal_946[1] = 97f;
	iLocal_126[1] = 0;
	iLocal_132[1] = 3;
	sLocal_665[2] = "SEC_VOL_2";
	vLocal_892[2 /*3*/] = { 946.0284f, -1182.446f, 55.046f };
	fLocal_908[2] = 23.91f;
	vLocal_914[2 /*3*/] = { 926.7543f, -1160.692f, 53.6549f };
	vLocal_930[2 /*3*/] = { 925.763f, -1160.633f, 54.315f };
	fLocal_946[2] = 43f;
	iLocal_126[2] = 2;
	iLocal_132[2] = 1;
	sLocal_665[3] = "SEC_VOL_3";
	vLocal_892[3 /*3*/] = { 907.0936f, -1173.876f, 51.167f };
	fLocal_908[3] = 12.1549f;
	vLocal_914[3 /*3*/] = { 896.946f, -1166.129f, 52.752f };
	vLocal_930[3 /*3*/] = { 896.946f, -1166.129f, 52.752f };
	fLocal_946[3] = 148f;
	iLocal_126[3] = 0;
	iLocal_132[3] = 3;
	sLocal_665[4] = "SEC_VOL_4";
	vLocal_892[4 /*3*/] = { 946.0284f, -1182.446f, 55.046f };
	fLocal_908[4] = 28.6544f;
	vLocal_914[4 /*3*/] = { 927.3097f, -1160.67f, 53.7695f };
	vLocal_930[4 /*3*/] = { 931.213f, -1156.752f, 53.679f };
	fLocal_946[4] = 55f;
	iLocal_126[4] = 0;
	iLocal_132[4] = 0;
	sLocal_656[0] = "RSAD1_ENEMY1";
	sLocal_656[1] = "RSAD1_ENEMY2";
	vLocal_1010[0 /*3*/] = { 1328.247f, -1293.577f, 76.0075f };
	fLocal_1023[0] = 236.7722f;
	vLocal_1010[1 /*3*/] = { 1325.942f, -1289.881f, 76.0075f };
	fLocal_1023[1] = 77.3249f;
	vLocal_1010[2 /*3*/] = { 1325.161f, -1292.57f, 76.0075f };
	fLocal_1023[2] = 150.7889f;
	vLocal_1010[3 /*3*/] = { 1329.474f, -1290.771f, 76.0075f };
	fLocal_1023[3] = 325.6832f;
	iLocal_1292[0] = 0;
	iLocal_1292[1] = 0;
	vLocal_1031[0 /*3*/] = { 1247.353f, -1289.38f, 74.8848f };
	fLocal_1038[0] = 86.9305f;
	vLocal_1031[1 /*3*/] = { 1246.496f, -1288.35f, 74.8882f };
	fLocal_1038[1] = 258.0014f;
	vLocal_1041[0 /*3*/] = { 1285.482f, -1285.294f, 74.5978f };
	vLocal_1041[1 /*3*/] = { 1293.611f, -1290.314f, 75.4163f };
	iLocal_336[0] = -1653926122;
	iLocal_336[1] = -1269633375;
	iLocal_1278[iLocal_181] = 0;
	iLocal_1278[iLocal_182] = 0;
	iLocal_370[0] = joaat("P_SACK04X");
	iLocal_370[1] = joaat("P_CRATE03X");
	iLocal_370[2] = joaat("P_CS_RAG01X");
	iLocal_370[3] = joaat("P_GLASSTALLBEER01X");
	iLocal_370[4] = joaat("P_GLASSTALLBEER01X");
	iLocal_370[5] = joaat("P_GLASSTALLBEER01X");
	iLocal_370[6] = joaat("P_PACKAGE13X");
	iLocal_370[7] = joaat("P_PACKAGE13X");
	iLocal_370[8] = joaat("P_BUYSELLBOX02X");
	uLocal_621[0] = PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_CHARLES"));
	uLocal_621[1] = PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_DUTCH"));
	uLocal_621[2] = PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_COMP_HORSE_BILL"));
	__LIB_2__::func_810(2, 16777216);
	__LIB_10__::func_702(8, joaat("TSTAG_RHD_SADIE1_ACTIVE"), 1, 977356591, -1);
}

void func_45(var uParam0)
{
	int iVar0;
	__LIB_12__::func_908(uParam0, "SAD11AU");
	__LIB_12__::func_867(uParam0, iLocal_346, 7);
	__LIB_12__::func_867(uParam0, iLocal_345, 7);
	__LIB_12__::func_867(uParam0, iLocal_380[0], 2);
	__LIB_12__::func_867(uParam0, iLocal_380[1], 2);
	__LIB_12__::func_867(uParam0, iLocal_356, 2);
	__LIB_12__::func_867(uParam0, iLocal_347, 2);
	__LIB_12__::func_867(uParam0, iLocal_348, 7);
	__LIB_12__::func_867(uParam0, iLocal_350, 7);
	__LIB_12__::func_867(uParam0, iLocal_355, 7);
	__LIB_12__::func_867(uParam0, iLocal_351, 2);
	__LIB_12__::func_867(uParam0, iLocal_353, 2);
	__LIB_12__::func_867(uParam0, iLocal_354, 7);
	__LIB_12__::func_867(uParam0, iLocal_349, 2);
	__LIB_12__::func_867(uParam0, iLocal_357, 2);
	__LIB_12__::func_867(uParam0, iLocal_358, 1);
	__LIB_12__::func_867(uParam0, iLocal_359, 1);
	__LIB_12__::func_867(uParam0, iLocal_360, 1);
	__LIB_12__::func_867(uParam0, iLocal_361, 1);
	__LIB_12__::func_867(uParam0, iLocal_362, 1);
	__LIB_12__::func_867(uParam0, iLocal_363, 1);
	__LIB_12__::func_867(uParam0, iLocal_364, 1);
	__LIB_12__::func_867(uParam0, iLocal_365, 2);
	__LIB_12__::func_867(uParam0, iLocal_366, 2);
	__LIB_12__::func_867(uParam0, iLocal_367, 2);
	__LIB_12__::func_867(uParam0, iLocal_368, 2);
	__LIB_12__::func_867(uParam0, iLocal_369, 2);
	__LIB_13__::func_15(uParam0, sLocal_642, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_659[0], 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_659[1], 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_644, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_645, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_646, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_647, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_648, 2, -1, 2);
	PROPSET::_REQUEST_PROPSET(iLocal_184);
	PROPSET::_REQUEST_PROPSET(iLocal_185);
	AUDIO::_0xD9130842D7226045("RSAD1_Sounds", 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_12__::func_867(uParam0, iLocal_370[iVar0], 2);
		iVar0++;
	}
}

bool func_56(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_18(uParam0, 0);
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

struct<4> func_64(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { 702.9058f, -1243.732f, 44.0355f };
			Var1.f_3 = 352.8549f;
			break;
		case 1:
			Var1 = { 1311.836f, -1291.403f, 74.793f };
			Var1.f_3 = 80.3677f;
			break;
		case 2:
			Var1 = { 1228.035f, -1290.406f, 75.9024f };
			Var1.f_3 = 223.8101f;
			break;
		case 3:
			Var1 = { 1306.466f, -1283.805f, 74.9935f };
			Var1.f_3 = 150.2092f;
			break;
		case 4:
			Var1 = { 909.0626f, -1133.01f, 50.7485f };
			Var1.f_3 = 219.1555f;
			break;
		case 5:
			Var1 = { 909.447f, -1181.318f, 51.7298f };
			Var1.f_3 = 209.9596f;
			break;
		case 6:
			Var1 = { 704.9708f, -1242.231f, 44.1081f };
			Var1.f_3 = 81.3775f;
			break;
		case 7:
			Var1 = { 704.9708f, -1242.231f, 44.1081f };
			Var1.f_3 = 81.3775f;
			break;
	}
	return Var1;
}

bool func_65(var uParam0)
{
	return func_211(*uParam0, uParam0->f_3);
}

bool func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	var uVar6;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_430))
	{
		if ((!__LIB_0__::func_272(iLocal_430, 65) || FIRE::IS_ENTITY_ON_FIRE(iLocal_430)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_430, true, false), 3f))
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILSADIE", 24);
			func_213(iLocal_429);
			return true;
		}
		if ((((__LIB_0__::func_665(Global_35, iLocal_430, 0, 1) > 120f && iLocal_1284 != 5) && iLocal_1284 != 6) && iLocal_1284 != 11) && iLocal_1284 != 12)
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILABAND", 24);
			return true;
		}
		if (iLocal_1284 == 6)
		{
			func_215(3, vLocal_766, Local_1347[4 /*9*/].f_2, 50f);
			if (iLocal_1254[3] == 3)
			{
				StringCopy(&(uParam0->f_2578), "SAD1_FAILABAND", 24);
				return true;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_462))
			{
				if (((ENTITY::IS_ENTITY_DEAD(iLocal_462) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_462, true, false), 2f, true)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_462, joaat("WEAPON_UNARMED"), 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_462, Global_35, 1, 1))
				{
					StringCopy(&(uParam0->f_2578), "SAD1_FAILAGGRO", 24);
					return true;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_429))
	{
		if (!__LIB_0__::func_272(iLocal_429, 65))
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILPEARSON", 24);
			func_213(iLocal_430);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		if (!__LIB_11__::func_29(iLocal_760) || func_217(&iLocal_760, 1.5f))
		{
			if (__LIB_11__::func_21(iLocal_1304[0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1304[0]);
			}
			StringCopy(&(uParam0->f_2578), "SAD1_FAILWAGON", 24);
			return true;
		}
		else if (__LIB_13__::func_559(&iLocal_760))
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILSTUCK", 24);
		}
	}
	iVar1 = __LIB_0__::func_647(joaat("CASH_REGISTERS_ROBBED"));
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) || iVar1 > iLocal_196)
	{
		StringCopy(&(uParam0->f_2578), "SAD1_FAILWANT", 24);
		if (!PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
		{
			func_213(iLocal_430);
		}
		return true;
	}
	if (iLocal_1284 == 8)
	{
		if (!func_221(4) && !bLocal_58)
		{
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				if (!PED::IS_PED_IN_COMBAT(Global_35, iLocal_431[0]) && !PED::IS_PED_IN_COMBAT(Global_35, iLocal_431[1]))
				{
					StringCopy(&(uParam0->f_2578), "SAD1_FAILAGGRO", 24);
					return true;
				}
			}
		}
	}
	if (__LIB_14__::func_140(&Var2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_464(11, 0), __LIB_0__::func_67(Var2)))
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILCAMP", 24);
			return true;
		}
	}
	if ((iLocal_1284 <= 8 && !func_221(4)) && !bLocal_58)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[iLocal_181]))
		{
			if (PED::_0xB086C8C0F5701D14(iLocal_442[iLocal_181]) || func_225(2, 30, &uVar6, 0))
			{
				StringCopy(&(uParam0->f_2578), "SAD1_FAILAGGRO", 24);
				return true;
			}
		}
		if (((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_DEATH"), vLocal_960, 100f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), vLocal_960, 100f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_DEATH"), vLocal_966, 100f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), vLocal_966, 100f))
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILAGGRO", 24);
			return true;
		}
	}
	if (iLocal_1284 == 5)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar7, true, 0, false);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[iVar0]))
			{
				if ((((!__LIB_0__::func_272(iLocal_442[iVar0], 65) || PED::IS_PED_INJURED(iLocal_442[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_442[iVar0], Global_35, 0, 1)) || PED::_0x3BDFCF25B58B0415(iLocal_442[iVar0])) || PED::_0x29FCE825613FEFCA(iLocal_442[iVar0], 1000))
				{
					if (iVar0 == 0)
					{
						StringCopy(&(uParam0->f_2578), "SAD1_F_AGG_POST", 24);
					}
					else
					{
						StringCopy(&(uParam0->f_2578), "SAD1_F_AGG_SHOP", 24);
					}
					return true;
				}
				else if (__LIB_2__::func_401(iLocal_442[iVar0], 1, 1, 1, 0, 0))
				{
					if (iVar7 != joaat("WEAPON_FISHINGROD") && iVar7 != joaat("WEAPON_UNARMED"))
					{
						if (!LAW::_0x0EAF918F751F27BA(iLocal_442[iVar0]))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_442[iVar0], 146, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_442[iVar0], 148, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_442[iVar0], 44, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_442[iVar0], 190, true);
							LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_HASSLE"), 50, 0, 0, 0, 0, 0, 0);
							LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_HASSLE"), iLocal_442[iVar0]);
							LAW::_0xF0B67BAD53C35BD9(iLocal_442[iVar0], Global_35, iLocal_442[iVar0], Global_36, joaat("CRIME_HASSLE"));
							PED::_0xEEED8FAFEC331A70(iLocal_442[iVar0], Global_36, 3);
							TASK::TASK_SMART_FLEE_PED(iLocal_442[iVar0], Global_35, 100f, -1, 0, 1077936128 /* Float: 3f */, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_442[iVar0], false);
							if (iVar0 == 0)
							{
								StringCopy(&(uParam0->f_2578), "SAD1_F_AGG_POST", 24);
							}
							else
							{
								StringCopy(&(uParam0->f_2578), "SAD1_F_AGG_SHOP", 24);
							}
							return true;
						}
					}
				}
			}
			iVar0++;
		}
		func_215(1, vLocal_966, Local_1347[1 /*9*/].f_2, 100f);
		if (iLocal_1254[1] == 3)
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILPOST", 24);
			return true;
		}
	}
	if (iLocal_1284 == 2)
	{
		func_215(0, vLocal_960, Local_1347[0 /*9*/].f_2, 100f);
		if (iLocal_1254[0] == 3)
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILRHOD", 24);
			return true;
		}
	}
	if (iLocal_1284 == 14)
	{
		func_215(4, vLocal_970, Local_1347[10 /*9*/].f_2, 120f);
		if (iLocal_1254[4] == 3)
		{
			StringCopy(&(uParam0->f_2578), "SAD1_FAILGOCAMP", 24);
			return true;
		}
	}
	return false;
}

bool func_72(var uParam0)
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
	if (func_228(uParam0->f_174))
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
	if (func_237(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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

void func_74(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	func_242(uParam0);
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

void func_76(var uParam0)
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
			func_257(uParam0);
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

bool func_87(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_14__::func_6(uParam0) && func_282(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_88(var uParam0)
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
		__LIB_16__::func_436(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
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
			Var1 = { func_64(0) };
			if (!func_65(&Var1))
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
		__LIB_12__::func_997(uParam0, func_64(0), func_64(1), 0, 1, 0);
	}
}

void func_89(var uParam0)
{
	func_301(uParam0, 0);
}

void func_93(var uParam0)
{
	func_302();
	if (!__LIB_0__::func_1(uParam0->f_172, 256))
	{
	}
}

bool func_94(var uParam0)
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
		func_108(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_303(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	func_306();
	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			switch (iLocal_1289)
			{
				case 0:
					func_194();
					func_195();
					if (__LIB_12__::func_936(uParam0))
					{
						iLocal_1284 = 1;
					}
					else
					{
						iLocal_1284 = 2;
					}
					func_308();
					func_309();
					iLocal_1289 = 1;
					break;
				case 1:
					if (func_310(1, 1) && func_311(1, 1))
					{
						__LIB_1__::func_572(vLocal_963, 5f, 0, 0, 0, 0, 0);
						PED::_0x9851DE7AEC10B4E1(vLocal_973, 100f, 1, 0);
						func_313();
						func_314(0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_760, vLocal_1078[0 /*3*/], fLocal_1100[0], true, false, true);
							__LIB_0__::func_326(2);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_430))
							{
								if (!__LIB_12__::func_936(uParam0))
								{
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, vLocal_1048[0 /*3*/], fLocal_1070[0], true, false, true);
									__LIB_11__::func_28(&Global_35, &iLocal_760, -1, 1);
									__LIB_11__::func_28(&iLocal_430, &iLocal_760, 0, 1);
								}
								WEAPON::_0x94A3C1B804D291EC(iLocal_430, 0, 0, 0, 0);
								WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
							}
							__LIB_12__::func_997(uParam0, func_64(0), func_64(1), 0, 1, 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_760, Global_35, 0);
							iLocal_177 = 3;
							iLocal_1289 = 2;
						}
					}
					break;
				case 2:
					if (func_317())
					{
						if (__LIB_12__::func_936(uParam0))
						{
							if (!__LIB_0__::func_1(uParam0->f_172, 16))
							{
								if (func_318(uParam0))
								{
									if (func_319())
									{
										func_301(uParam0, 0);
									}
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
							{
								func_320(uParam0);
								return 5;
							}
						}
						else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
						{
							func_321(vLocal_960, 1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							func_322();
							func_323(1);
							if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							func_324(uParam0, 0, 2);
							__LIB_13__::func_89(uParam0, Local_1347[0 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							return 7;
						}
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_1289)
			{
				case 0:
					if (__LIB_3__::func_339(31))
					{
						__LIB_4__::func_932(31, 0);
					}
					else if (!__LIB_3__::func_339(30))
					{
						__LIB_4__::func_932(30, 1);
					}
					else if (func_327() && func_328())
					{
						func_194();
						func_195();
						PERSCHAR::_0xB173599D61FAEB31();
						func_324(uParam0, 0, 5);
						func_329(15);
						func_309();
						func_314(0);
						__LIB_4__::func_932(28, 0);
						__LIB_18__::func_764(30);
						func_331(uParam0);
						iLocal_1289 = 1;
					}
					break;
				case 1:
					if (func_310(1, 1) && func_311(1, 0))
					{
						func_308();
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, false);
						PED::_0x9851DE7AEC10B4E1(vLocal_973, 100f, 1, 0);
						__LIB_12__::func_997(uParam0, func_64(1), func_64(2), 1, 2, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_430))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, vLocal_1048[1 /*3*/], fLocal_1070[1], true, false, true);
						}
						func_332();
						iLocal_1289 = 2;
					}
					break;
				case 2:
					func_323(1);
					__LIB_13__::func_89(uParam0, Local_1347[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					return 7;
			}
			break;
		case 2:
			if (iLocal_1284 != 6)
			{
				func_324(uParam0, 0, 6);
			}
			func_333(uParam0);
			if (__LIB_14__::func_124(11))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
				{
				}
			}
			switch (iLocal_1289)
			{
				case 0:
					func_309();
					func_314(0);
					func_194();
					func_195();
					VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_760, iLocal_430, 0);
					PED::_0x9851DE7AEC10B4E1(vLocal_973, 100f, 1, 0);
					iLocal_1289 = 1;
					break;
				case 1:
					if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_430) && func_335()) && func_336()) && func_310(1, 0)) && func_311(1, 0)) && func_337())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
						{
						}
						__LIB_12__::func_997(uParam0, func_64(2), func_64(3), 2, 3, 0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, vLocal_1048[2 /*3*/], fLocal_1070[2], true, false, true);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, true);
						func_332();
						iLocal_1289 = 2;
					}
					break;
				case 2:
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
					{
					}
					func_338();
					func_339(uParam0, 0, 0);
					func_323(1);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_329(26);
					__LIB_13__::func_89(uParam0, Local_1347[3 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_1289 = 0;
					return 7;
			}
			break;
		case 3:
			iLocal_1284 = 8;
			switch (iLocal_1289)
			{
				case 0:
					func_309();
					func_194();
					func_195();
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_642))
					{
						func_314(0);
						func_340(0);
						iLocal_1289 = 1;
					}
					break;
				case 1:
					if (func_310(1, 0) && func_311(1, 0))
					{
						__LIB_12__::func_997(uParam0, func_64(3), func_64(4), 3, 4, 0);
						__LIB_1__::func_572(vLocal_973, 5f, 0, 0, 0, 0, 0);
						PED::_0x9851DE7AEC10B4E1(vLocal_973, 100f, 1, 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_760, false);
						if (TASK::_0xE62754D09354F6CF(iLocal_760) != -1)
						{
							TASK::_0x4BA972D0E5AD8122(iLocal_760, -1);
						}
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_760, iLocal_430, 0);
						__LIB_11__::func_28(&iLocal_430, &iLocal_760, -1, 1);
						__LIB_11__::func_28(&Global_35, &iLocal_760, 0, 1);
						if (!func_221(26))
						{
							func_329(26);
						}
						WEAPON::_0x94A3C1B804D291EC(iLocal_430, 0, 0, 0, 0);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_430, 270, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_430, 2, true);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_430, false);
						POPULATION::_0xC6DCC2A3A8825C85(1);
						func_341();
						func_342();
						iLocal_1289 = 2;
					}
					break;
				case 2:
					if ((!ENTITY::IS_ENTITY_DEAD(iLocal_760) && func_317()) && !ENTITY::IS_ENTITY_DEAD(iLocal_430))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false))
						{
							func_323(1);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_430, iLocal_760, sLocal_642, 524311, 7, 4194304, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
							iLocal_179 = 7;
							func_324(uParam0, 0, 8);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							bLocal_51 = true;
							if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							__LIB_13__::func_89(uParam0, Local_1347[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							iLocal_1289 = 0;
							return 7;
						}
					}
					break;
			}
			break;
		case 4:
			func_343(uParam0);
			switch (iLocal_1289)
			{
				case 0:
					iLocal_1284 = 11;
					if (!func_221(4))
					{
						func_329(4);
					}
					func_194();
					func_195();
					func_344(uParam0, 1);
					if (func_345())
					{
						iLocal_1289 = 1;
					}
					break;
				case 1:
					func_309();
					if (func_346(uParam0, vLocal_956, fLocal_959))
					{
						iLocal_1303 = 6;
						if (!func_221(14))
						{
							func_329(14);
						}
						__LIB_1__::func_572(vLocal_973, 5f, 0, 0, 0, 0, 0);
						VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_760, iLocal_430, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_760, vLocal_1078[4 /*3*/], fLocal_1100[4], true, false, true);
						iLocal_1289 = 2;
					}
					break;
				case 2:
					if ((func_317() && func_310(1, 0)) && func_311(1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_430))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, vLocal_1048[4 /*3*/], fLocal_1070[4], true, false, true);
						}
						__LIB_12__::func_997(uParam0, func_64(4), func_64(5), 4, 5, 0);
						func_323(1);
						if (!func_221(4))
						{
							func_329(4);
						}
						if (!__LIB_14__::func_124(8))
						{
							__LIB_18__::func_765(8);
						}
						func_339(uParam0, 0, 0);
						func_324(uParam0, 0, 11);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						__LIB_1__::func_422(Local_1347[7 /*9*/].f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
						iLocal_1289 = 0;
						return 7;
					}
					break;
			}
			break;
		case 5:
			iLocal_1284 = 14;
			switch (iLocal_1289)
			{
				case 0:
					if (func_346(uParam0, vLocal_956, fLocal_959) && func_349(uParam0))
					{
						func_194();
						func_195();
						__LIB_1__::func_864(iLocal_437, 1, 0);
						func_309();
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_760, vLocal_1078[5 /*3*/], fLocal_1100[5], true, false, true);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, true);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_430))
						{
							__LIB_11__::func_28(&iLocal_430, &iLocal_760, -1, 1);
							WEAPON::_0x94A3C1B804D291EC(iLocal_430, 0, 0, 0, 0);
						}
						__LIB_11__::func_28(&Global_35, &iLocal_760, 0, 1);
						iLocal_1289 = 1;
					}
					break;
				case 1:
					if (func_310(1, 0) && func_311(1, 0))
					{
						__LIB_12__::func_997(uParam0, func_64(5), func_64(6), 5, 6, 0);
						__LIB_1__::func_572(vLocal_970, 5f, 0, 0, 0, 0, 0);
						__LIB_1__::func_572(vLocal_973, 5f, 0, 0, 0, 0, 0);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						func_351();
						func_321(vLocal_970, 1);
						__LIB_1__::func_148(&uLocal_705);
						__LIB_11__::func_818(2, 1);
						iLocal_1289 = 2;
					}
					break;
				case 2:
					if (((PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false)) && func_317()) && __LIB_0__::func_265(&uLocal_705) > 4f)
					{
						func_323(1);
						__LIB_0__::func_37(&uLocal_705);
						func_329(26);
						func_329(31);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_324(uParam0, 0, 14);
						func_354();
						iLocal_1289 = 0;
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (TASK::_0xE62754D09354F6CF(iLocal_760) != 0)
						{
							TASK::_0xE01F55B2896F6B37(iLocal_760, 0);
						}
						if (!AITRANSPORT::_0xF382C92CCC1CCDBC(iLocal_760, 7, 1))
						{
							AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 1);
						}
						PED::SET_PED_CONFIG_FLAG(iLocal_430, 65, true);
						__LIB_0__::func_326(2);
						__LIB_13__::func_89(uParam0, Local_1347[10 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 1);
						return 7;
					}
					break;
			}
			break;
		case 6:
			func_194();
			func_195();
			func_301(uParam0, 1);
			if (!__LIB_14__::func_142(Global_1347702[uParam0->f_174 /*49*/].f_15))
			{
				return 2;
			}
			func_309();
			if ((func_356(uParam0) && func_310(1, 0)) && func_311(1, 0))
			{
				func_323(1);
				__LIB_12__::func_997(uParam0, func_64(6), func_64(7), 6, 7, 0);
				return 5;
			}
			break;
		case 7:
			if (!__LIB_14__::func_142(Global_1347702[uParam0->f_174 /*49*/].f_15))
			{
				return 2;
			}
			if (func_310(1, 0) && func_311(1, 0))
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				return 8;
			}
			break;
	}
	return 2;
}

bool func_100(var uParam0)
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
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_87(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_89(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_108(uParam0, 0);
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

void func_101(var uParam0)
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
		__LIB_12__::func_997(uParam0, func_64(0), func_64(1), 0, 1, 1);
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

int func_103(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_369(Var0, &(uParam0->f_206), uParam0);
}

int func_105(var uParam0)
{
	switch (iLocal_1290)
	{
		case 0:
			__LIB_11__::func_124(9);
			bLocal_48 = false;
			__LIB_6__::func_815(&iLocal_463, iLocal_430);
			__LIB_6__::func_815(&iLocal_542, iLocal_429);
			__LIB_12__::func_997(uParam0, func_64(0), func_64(1), 0, 1, 0);
			func_322();
			__LIB_1__::func_951(&iLocal_396);
			func_376();
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			func_323(1);
			func_378();
			TASK::CLEAR_PED_TASKS(iLocal_429, true, false);
			__LIB_1__::func_774(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, true);
			AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_760, Global_35, 0);
			return 7;
		case 1:
			if (__LIB_12__::func_876(uParam0, "RSAD1_NICEPANTS", 0))
			{
				__LIB_0__::func_8(&(uParam0->f_172), 16);
				func_381();
				func_382(vLocal_111.x, vLocal_111.z, 1120952528, 2, 1, 1, 0);
				func_383();
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, false);
				func_384();
				func_323(0);
				__LIB_0__::func_698(2);
				__LIB_12__::func_997(uParam0, func_64(6), func_64(7), 6, 7, 0);
				if (func_221(10))
				{
					func_385(10);
				}
				__LIB_0__::func_37(&uLocal_699);
				__LIB_14__::func_125();
				PED::SET_PED_CLOTH_PACKAGE_INDEX(Global_35, 1);
				return 8;
			}
			break;
	}
	return 7;
}

bool func_106(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_87(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_89(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_64(0), func_64(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

void func_108(var uParam0, bool bParam1)
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
		if (func_387(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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

int func_109(var uParam0)
{
	int iVar0;
	func_389(uParam0);
	func_390(uParam0);
	func_344(uParam0, 0);
	func_306();
	func_391();
	func_392();
	func_393();
	func_394();
	func_395();
	if (!func_221(0))
	{
		__LIB_1__::func_600(0);
		func_329(0);
	}
	switch (iLocal_1284)
	{
		case 1:
			if (func_310(0, 1) && func_311(0, 1))
			{
				func_313();
				func_314(0);
				PED::_0x9851DE7AEC10B4E1(vLocal_963, 7.5f, 1, 0);
				func_321(vLocal_960, 1);
				__LIB_13__::func_89(uParam0, Local_1347[0 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_12__::func_652(uParam0);
				__LIB_12__::func_653(uParam0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_630, false);
				func_324(uParam0, iLocal_1284, 2);
			}
			break;
		case 2:
			func_397();
			__LIB_3__::func_229(72);
			func_399();
			func_400();
			if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_SADIE1")))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_SADIE1"), true);
			}
			func_401();
			func_402();
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
			{
				func_403(uParam0);
				func_404(0);
				if (func_405() && iLocal_1317 == 6)
				{
					TASK::REMOVE_WAYPOINT_RECORDING(sLocal_646);
					TASK::REMOVE_WAYPOINT_RECORDING(sLocal_647);
					TASK::REMOVE_WAYPOINT_RECORDING(sLocal_648);
					__LIB_14__::func_144(1);
					func_329(10);
					func_329(15);
					__LIB_4__::func_932(30, 1);
					__LIB_5__::func_20(0, 0);
					__LIB_12__::func_997(uParam0, func_64(1), func_64(2), 1, 2, 0);
					func_408();
					func_329(1);
					func_324(uParam0, iLocal_1284, 3);
				}
				else
				{
					func_409(&(Local_1347[0 /*9*/]), 0, 0);
				}
			}
			else
			{
				__LIB_5__::func_20(0, 0);
				__LIB_0__::func_325(&iLocal_31);
				if (__LIB_4__::func_68("SAD1_GOSTORE", 1))
				{
					__LIB_1__::func_390("SAD1_GOSTORE", 1);
				}
				if (iLocal_1317 == 5)
				{
					__LIB_1__::func_951(&iLocal_394);
					__LIB_1__::func_951(&iLocal_393);
					__LIB_14__::func_145(iLocal_1304[0]);
					iLocal_1317 = 6;
				}
				if (func_221(10))
				{
					func_385(10);
				}
				iLocal_1333 = 0;
				iLocal_1285 = iLocal_1284;
				func_324(uParam0, iLocal_1284, 4);
			}
			break;
		case 3:
			func_402();
			func_328();
			func_331(uParam0);
			func_414(uParam0);
			if (__LIB_3__::func_339(31))
			{
				__LIB_4__::func_932(31, 0);
			}
			if (iLocal_1318 == 4 && func_327())
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 10f);
				__LIB_14__::func_125();
				func_383();
				func_311(0, 0);
				__LIB_13__::func_89(uParam0, Local_1347[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, false);
				PERSCHAR::_0xB173599D61FAEB31();
				__LIB_4__::func_193(72);
				func_332();
				__LIB_4__::func_932(28, 0);
				func_324(uParam0, iLocal_1284, 5);
			}
			break;
		case 4:
			if (func_416(uParam0))
			{
				if (func_221(1))
				{
					func_385(1);
				}
				__LIB_0__::func_325(&iLocal_30);
				if ((iLocal_1285 != 7 && iLocal_1285 != 8) && iLocal_1285 != 13)
				{
					func_321(vLocal_979, iLocal_44);
				}
				if (iLocal_1333 != 12)
				{
					Local_1347[iLocal_1333 /*9*/] = 0;
					__LIB_13__::func_89(uParam0, Local_1347[iLocal_1333 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				if (iLocal_1285 == 8)
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_430, iLocal_760, sLocal_642, 524311, 1, 4194304, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_760, 0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iLocal_760);
				}
				func_324(uParam0, iLocal_1284, iLocal_1285);
			}
			else if (iLocal_1285 == 13)
			{
				func_417(uParam0);
			}
			break;
		case 5:
			func_328();
			func_331(uParam0);
			func_418();
			if (__LIB_3__::func_339(31))
			{
				__LIB_4__::func_932(31, 0);
			}
			if (__LIB_4__::func_434(-156591884))
			{
				if (func_420(&iLocal_761, vLocal_1185, 1))
				{
					if (__LIB_0__::func_94(iLocal_761, vLocal_1188, 1) > 20f)
					{
						VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_761, 10f);
					}
					else if (__LIB_0__::func_94(iLocal_761, vLocal_1188, 1) <= 20f)
					{
						VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_761, 0f);
						bLocal_60 = true;
					}
				}
			}
			if (bLocal_60 && __LIB_0__::func_94(Global_35, vLocal_1191, 1) < 20f)
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_761, 8f);
			}
			func_422();
			func_423(uParam0);
			func_414(uParam0);
			func_333(uParam0);
			if (func_424(uParam0))
			{
				if (func_425(1) && func_426())
				{
					__LIB_12__::func_997(uParam0, func_64(2), func_64(3), 2, 3, 0);
					__LIB_1__::func_390("SAD1_POSTHELP2", 1);
					__LIB_1__::func_390("SAD1_POSTHELP3", 1);
					__LIB_0__::func_325(&iLocal_31);
					func_340(0);
					func_339(uParam0, 0, 0);
					TASK::CLEAR_PED_TASKS(iLocal_430, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, vLocal_766, fLocal_769, true, false, true);
					VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_760, iLocal_430, 0);
					func_329(26);
					__LIB_1__::func_473(iLocal_430, joaat("WORLD_HUMAN_STAND_WAITING"), -1, 0, 0, -1082130432 /* Float: -1f */);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_760, vLocal_778, fLocal_781, true, false, true);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, true);
					func_428();
					func_338();
					__LIB_13__::func_89(uParam0, Local_1347[3 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_324(uParam0, iLocal_1284, 6);
				}
			}
			else
			{
				func_328();
				func_331(uParam0);
				func_409(&(Local_1347[1 /*9*/]), 0, 0);
			}
			break;
		case 6:
			func_429();
			func_430();
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_10__::func_19(Global_35, 1315.436f, -1295.468f, 75.3f, &uLocal_736, 50f, 40f, 20f, 6f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			}
			if (__LIB_1__::func_588(Local_1347[4 /*9*/].f_2, 0, 0, -1, -1, 0))
			{
				func_409(&(Local_1347[4 /*9*/]), 0, 0);
			}
			else if (__LIB_1__::func_588(Local_1347[3 /*9*/].f_2, 0, 0, -1, -1, 0))
			{
				func_409(&(Local_1347[3 /*9*/]), 0, 0);
				if (__LIB_6__::func_693(Global_35, iLocal_760, 0))
				{
					func_329(10);
					__LIB_0__::func_172(iLocal_1245);
					__LIB_0__::func_325(&iLocal_30);
					func_339(uParam0, 1, 0);
					__LIB_13__::func_89(uParam0, Local_1347[9 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else if (!__LIB_14__::func_124(12))
				{
					if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false)) < 15f)
					{
						__LIB_12__::func_883(uParam0, Local_1347[3 /*9*/].f_2, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_18__::func_765(12);
					}
				}
			}
			else if (__LIB_1__::func_588(Local_1347[9 /*9*/].f_2, 0, 0, -1, -1, 0))
			{
				func_409(&(Local_1347[9 /*9*/]), 0, 0);
			}
			if (func_333(uParam0))
			{
				__LIB_0__::func_769();
				__LIB_13__::func_89(uParam0, Local_1347[5 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_324(uParam0, iLocal_1284, 7);
			}
			break;
		case 7:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_642) && !__LIB_5__::func_463())
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_430, iLocal_760, sLocal_642, 524311, 1, 4194304, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_760, false);
					if (func_221(5))
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_430, false);
						func_385(5);
					}
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_430, true);
					if (func_221(10))
					{
						func_385(10);
					}
					iLocal_1323 = 0;
					func_324(uParam0, iLocal_1284, 8);
				}
			}
			else
			{
				iLocal_1285 = 7;
				iLocal_1333 = 5;
				iLocal_1284 = 4;
			}
			break;
		case 8:
			func_436(uParam0);
			func_437();
			func_438(uParam0);
			func_439();
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
			{
				if (iLocal_1323 == 4)
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_GOGOGO", 0))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_430, iLocal_760, sLocal_642, 0, TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(iLocal_760), 4194304, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
						__LIB_13__::func_89(uParam0, Local_1347[6 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_440();
						if (!func_221(3))
						{
							func_329(3);
						}
						if (func_221(10))
						{
							func_385(10);
						}
						CAM::SET_CINEMATIC_MODE_ACTIVE(false);
						func_324(uParam0, iLocal_1284, 9);
					}
				}
			}
			else
			{
				iLocal_1285 = iLocal_1284;
				iLocal_1333 = 5;
				func_324(uParam0, iLocal_1284, 4);
			}
			break;
		case 9:
			func_437();
			func_441(uParam0);
			func_343(uParam0);
			func_409(&(Local_1347[6 /*9*/]), 0, 0);
			__LIB_1__::func_991(Global_35, joaat("HONOR_EVENT_KILL_HORSE"));
			if (__LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 50f)
			{
				if (__LIB_0__::func_491(iLocal_430, -2117564886))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_430);
				}
				if (!func_221(8))
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_12__::func_876(uParam0, "RSAD1_CRASH", 0))
					{
						func_329(8);
					}
				}
				if (__LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 20f)
				{
					func_324(uParam0, iLocal_1284, 10);
				}
			}
			else
			{
				func_444(uParam0);
			}
			break;
		case 10:
			func_441(uParam0);
			func_343(uParam0);
			func_437();
			__LIB_1__::func_991(Global_35, joaat("HONOR_EVENT_KILL_HORSE"));
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_760, 0) && !TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_760))
			{
				if (__LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 6f)
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_760);
				}
			}
			if ((TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_760) || __LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 3f) || (__LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 10f && VEHICLE::IS_VEHICLE_STOPPED(iLocal_760)))
			{
				if (__LIB_2__::func_343(iLocal_430, iLocal_760, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(iLocal_430, iLocal_760, 131137, 0);
				}
				if (__LIB_2__::func_343(Global_35, iLocal_760, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(Global_35, iLocal_760, 64, 0);
					__LIB_12__::func_876(uParam0, "RSAD1_WISH", 0);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, false);
				__LIB_13__::func_89(uParam0, Local_1347[7 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (!__LIB_14__::func_124(8))
				{
					__LIB_18__::func_765(8);
				}
				ENTITY::SET_ENTITY_COLLISION(iLocal_437, true, false);
				__LIB_12__::func_997(uParam0, func_64(4), func_64(5), 4, 5, 0);
				func_324(uParam0, iLocal_1284, 11);
			}
			else
			{
				func_446();
				if (__LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 10f)
				{
				}
			}
			break;
		case 11:
			func_447();
			func_448(uParam0);
			func_343(uParam0);
			__LIB_1__::func_991(Global_35, joaat("HONOR_EVENT_KILL_HORSE"));
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_642))
			{
				TASK::REMOVE_WAYPOINT_RECORDING(sLocal_642);
			}
			if (!__LIB_14__::func_124(21))
			{
				if (!__LIB_0__::func_75(&uLocal_745))
				{
					__LIB_1__::func_148(&uLocal_745);
					__LIB_18__::func_765(21);
				}
			}
			if (!func_449(&iVar0))
			{
				if (__LIB_0__::func_75(&uLocal_745))
				{
					if (__LIB_0__::func_264(&uLocal_745) <= 60f)
					{
						__LIB_12__::func_967(uParam0, joaat("RSAD1_QUICKSHOOTOUT"));
					}
					__LIB_0__::func_37(&uLocal_745);
				}
				if (!func_221(11))
				{
					func_329(11);
				}
				else if (!__LIB_0__::func_75(&uLocal_676) && !__LIB_6__::func_904())
				{
					__LIB_1__::func_148(&uLocal_676);
				}
				else if (__LIB_0__::func_264(&uLocal_676) > 2.5f)
				{
					if (func_453(uParam0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_430, true, false);
						func_454(iLocal_1300, 3);
						if (bLocal_59)
						{
							__LIB_13__::func_89(uParam0, Local_1347[8 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						else
						{
							__LIB_13__::func_89(uParam0, Local_1347[3 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						func_324(uParam0, iLocal_1284, 12);
					}
				}
			}
			else
			{
				func_409(&(Local_1347[7 /*9*/]), 0f, 10f);
				if (!func_221(27))
				{
					if ((iVar0 <= 3 && !__LIB_6__::func_904()) && __LIB_12__::func_876(uParam0, "RSAD1_FEWLEFT", 0))
					{
						func_329(27);
					}
				}
			}
			break;
		case 12:
			func_448(uParam0);
			func_343(uParam0);
			if (!__LIB_6__::func_904())
			{
				if (iLocal_1325 < 4)
				{
					func_409(&(Local_1347[8 /*9*/]), 0, 0);
				}
				if (iLocal_1325 < 4)
				{
					func_417(uParam0);
				}
				if (iLocal_1300 == 5)
				{
					if (iLocal_1325 == 7 || !bLocal_59)
					{
						if (__LIB_12__::func_876(uParam0, "RSAD1_IDRIVE", 0))
						{
							func_455(&iLocal_430, 1);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_760, true);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, true);
							__LIB_0__::func_37(&uLocal_699);
							__LIB_12__::func_997(uParam0, func_64(5), func_64(6), 5, 6, 0);
							func_338();
							if (!VEHICLE::_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(iLocal_760, iLocal_430, &iLocal_187))
							{
								VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_760, iLocal_430, iLocal_187);
							}
							iLocal_1333 = 12;
							iLocal_1285 = 13;
							func_329(26);
							func_329(20);
							func_324(uParam0, iLocal_1284, 4);
						}
					}
				}
			}
			break;
		case 13:
			if (!__LIB_0__::func_75(&uLocal_705))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_PLYRDRI", 0))
					{
						if (VEHICLE::_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(iLocal_760, iLocal_430, &iLocal_187))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
							{
								VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_760, 0, 0);
							}
						}
						iLocal_177 = 0;
						func_385(1);
						func_329(10);
						__LIB_1__::func_283(&uLocal_705, 0);
						AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 1);
					}
				}
				else
				{
					iLocal_1285 = iLocal_1284;
					func_324(uParam0, iLocal_1284, 4);
				}
			}
			else if (__LIB_0__::func_265(&uLocal_705) > 4f)
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
				func_329(26);
				if (TASK::_0xE62754D09354F6CF(iLocal_760) != 0)
				{
					AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 0);
					TASK::_0xE01F55B2896F6B37(iLocal_760, 0);
					func_329(10);
					AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 1);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_430, 65, true);
				func_351();
				__LIB_13__::func_89(uParam0, Local_1347[10 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_818(2, 1);
				func_321(vLocal_970, 1);
				__LIB_0__::func_37(&uLocal_705);
				func_385(1);
				func_354();
				__LIB_0__::func_326(2);
				if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_760) == Global_35)
				{
					AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 1);
					func_385(10);
					func_324(uParam0, iLocal_1284, 14);
				}
			}
			break;
		case 14:
			__LIB_14__::func_142(Global_1347702[uParam0->f_174 /*49*/].f_15);
			func_397();
			func_456();
			if (func_356(uParam0))
			{
				func_457();
				func_458();
			}
			POPULATION::_0xF74E134F40192884(Global_35, 0);
			func_459();
			func_460();
			if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_SADIE1")))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_SADIE1"), false);
			}
			if (!func_221(13))
			{
				if (((PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, 0) == Global_35) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, -1) == iLocal_430)
				{
					func_403(uParam0);
					func_461(uParam0);
					func_404(10);
					if (func_462())
					{
						func_463();
						__LIB_5__::func_20(1, 0);
						func_329(10);
						func_383();
						__LIB_0__::func_325(&iLocal_31);
						__LIB_14__::func_144(1);
						func_329(13);
					}
					else
					{
						func_409(&(Local_1347[10 /*9*/]), 0, 0);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_4__::func_68("SAD1_GOCAMP", 1))
					{
						__LIB_1__::func_390("SAD1_GOCAMP", 1);
					}
					iLocal_1285 = iLocal_1284;
					iLocal_1333 = 10;
					func_324(uParam0, iLocal_1284, 4);
				}
			}
			else
			{
				if (bLocal_54)
				{
					if (!bLocal_55)
					{
						if (!__LIB_0__::func_491(iLocal_430, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(iLocal_430, iLocal_760, 131137, 0);
							bLocal_55 = true;
						}
					}
					if (!bLocal_56)
					{
						if (!__LIB_0__::func_491(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, iLocal_760, 262209, 0);
							bLocal_56 = true;
						}
					}
				}
				if (iLocal_1321 == 4)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_430, joaat("WEAPON_UNARMED"), true, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
					if (__LIB_3__::func_751(16))
					{
						__LIB_9__::func_832(16, 0, 0);
					}
					return 5;
				}
			}
			break;
	}
	return 7;
}

void func_130(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		func_499(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_140(var uParam0)
{
	int iVar0;
	if (bLocal_48)
	{
		__LIB_11__::func_124(9);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_442[iVar0]))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_442[iVar0]);
		}
		iVar0++;
	}
	if (__LIB_0__::func_94(iLocal_760, vLocal_774, 0) < 3f)
	{
		if (!func_221(23))
		{
			func_329(23);
		}
	}
}

bool func_152(var uParam0)
{
	int iVar0;
	if (__LIB_12__::func_644(uParam0) == 11)
	{
		if (!__LIB_0__::func_272(iLocal_430, 0))
		{
			if (!__LIB_0__::func_272(iLocal_429, 0))
			{
				return true;
			}
			else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_429) && !__LIB_0__::func_266(iLocal_429, Global_36, 100f, 0, 1))
			{
				return true;
			}
		}
		else if (!__LIB_0__::func_272(iLocal_429, 0))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_430) && !__LIB_0__::func_266(iLocal_430, Global_36, 100f, 0, 1))
			{
				return true;
			}
		}
		else if (((ENTITY::IS_ENTITY_OCCLUDED(iLocal_429) && !__LIB_0__::func_266(iLocal_429, Global_36, 100f, 0, 1)) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_430)) && !__LIB_0__::func_266(iLocal_430, Global_36, 100f, 0, 1))
		{
			return true;
		}
		return false;
	}
	else if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_528();
		iVar0 = __LIB_0__::func_23();
		if (!__LIB_1__::func_652() || __LIB_0__::func_41(iVar0) >= iLocal_189)
		{
			return true;
		}
		return false;
	}
	else if (__LIB_12__::func_644(uParam0) == 1)
	{
		return true;
	}
	return true;
}

void func_161(var uParam0)
{
	int iVar0;
	func_532(uParam0);
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(945));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(946));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(947));
	__LIB_3__::func_820(28, 0);
	__LIB_3__::func_820(30, 0);
	__LIB_1__::func_774(11, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	__LIB_1__::func_774(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370[iVar0]);
		__LIB_4__::func_866(&(iLocal_383[iVar0]), 1, 1);
		iVar0++;
	}
	func_536(&vLocal_111, 1, 0);
}

void func_188(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1215))
		{
			iLocal_1215 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_1167, vLocal_1170, vLocal_1173, "RSAD1_IntroRestrict");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1215))
		{
			__LIB_13__::func_261(uParam0, &iLocal_1215, 0, 0, 0, 0);
			if (iLocal_632 == 0)
			{
				iLocal_632 = __LIB_11__::func_807(iLocal_1215, 0, 0, 0);
			}
		}
		__LIB_12__::func_656(uParam0, 0.5f);
		__LIB_12__::func_657(uParam0, 0.5f);
	}
	else
	{
		__LIB_11__::func_579(&iLocal_632, iLocal_1215, 0);
		__LIB_0__::func_172(iLocal_1215);
		__LIB_12__::func_652(uParam0);
		__LIB_12__::func_653(uParam0);
	}
}

void func_189()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_1347[iVar0 /*9*/] = 0;
		Local_1347[iVar0 /*9*/].f_1 = 0;
		iVar0++;
	}
	Local_1347[0 /*9*/].f_2 = "SAD1_GOSTORE";
	Local_1347[1 /*9*/].f_2 = "SAD1_GOPOSTOFF";
	Local_1347[2 /*9*/].f_2 = "SAD1_GETON";
	Local_1347[3 /*9*/].f_2 = "SAD1_BACKON";
	Local_1347[4 /*9*/].f_2 = "SAD1_GOSADIE";
	Local_1347[5 /*9*/].f_2 = "SAD1_ACCOMPANY";
	Local_1347[6 /*9*/].f_2 = "SAD1_FENDOFF";
	Local_1347[7 /*9*/].f_2 = "SAD1_DEALWITH";
	Local_1347[8 /*9*/].f_2 = "SAD1_GOBANDIT";
	Local_1347[9 /*9*/].f_2 = "SAD1_WAITSAD";
	Local_1347[10 /*9*/].f_2 = "SAD1_GOCAMP";
	Local_1347[11 /*9*/].f_2 = "SAD1_DROPPOST";
}

void func_194()
{
	vLocal_1048[0 /*3*/] = { 708.9265f, -1242.698f, 44.1798f };
	fLocal_1070[0] = 61.3009f;
	vLocal_1048[1 /*3*/] = { 1328.247f, -1293.577f, 76.0075f };
	fLocal_1070[1] = 236.7722f;
	vLocal_1048[2 /*3*/] = { 1314.823f, -1295.376f, 75.0734f };
	fLocal_1070[2] = 182.1853f;
	vLocal_1048[3 /*3*/] = { 1299.186f, -1293.855f, 75.4311f };
	fLocal_1070[3] = 322.2938f;
	vLocal_1048[4 /*3*/] = { 908.9174f, -1139.972f, 50.6282f };
	fLocal_1070[4] = 205.9105f;
	vLocal_1048[5 /*3*/] = { 908.9174f, -1139.972f, 50.6282f };
	fLocal_1070[5] = 205.9105f;
	vLocal_1048[6 /*3*/] = { 703.6219f, -1239.584f, 44.1111f };
	fLocal_1070[6] = 124.8567f;
}

void func_195()
{
	vLocal_1078[0 /*3*/] = { 686.1996f, -1226.632f, 43.5325f };
	fLocal_1100[0] = 303.9723f;
	vLocal_1078[1 /*3*/] = { 1317.968f, -1290.421f, 75.3475f };
	fLocal_1100[1] = 328.9825f;
	vLocal_1078[2 /*3*/] = { 1317.298f, -1291.436f, 76.0864f };
	fLocal_1100[2] = -10.65f;
	vLocal_1078[3 /*3*/] = { 1301.808f, -1291.744f, 74.6414f };
	fLocal_1100[3] = 46.388f;
	vLocal_1078[4 /*3*/] = { 902.1508f, -1133.593f, 50.8936f };
	fLocal_1100[4] = 82.5351f;
	vLocal_1078[5 /*3*/] = { 902.1508f, -1133.593f, 50.8936f };
	fLocal_1100[5] = 82.5351f;
	vLocal_1078[6 /*3*/] = { 700.3224f, -1243.359f, 43.9381f };
	fLocal_1100[6] = 123.8375f;
}

int func_211(vector3 vParam0, var uParam3)
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
		iVar0 = func_607(0, 0);
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

void func_213(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		PED::SET_PED_KEEP_TASK(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	}
}

void func_215(int iParam0, vector3 vParam1, char* sParam4, float fParam5)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vParam1, 0);
	switch (iLocal_1254[iParam0])
	{
		case 0:
			fLocal_1260[iParam0] = fVar0;
			fLocal_1266[iParam0] = (fVar0 + fParam5);
			__LIB_1__::func_148(&uLocal_739);
			iLocal_1254[iParam0] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_739) > 6f)
			{
				if (fVar0 < fLocal_1260[iParam0])
				{
					__LIB_0__::func_37(&uLocal_739);
					iLocal_1254[iParam0] = 0;
				}
				else if (fVar0 > fLocal_1266[iParam0])
				{
					__LIB_1__::func_422(sParam4, 7500, 0, 1, 0, 0, -1, -1, 0);
					fLocal_1272[iParam0] = fVar0;
					iLocal_1254[iParam0] = 2;
				}
				else
				{
					__LIB_1__::func_148(&uLocal_739);
				}
			}
			break;
		case 2:
			if (!__LIB_4__::func_68(sParam4, 1))
			{
				if (fVar0 > fLocal_1272[iParam0])
				{
					iLocal_1254[iParam0] = 3;
				}
				else
				{
					fLocal_1266[iParam0] = fVar0;
					__LIB_1__::func_148(&uLocal_739);
					iLocal_1254[iParam0] = 1;
				}
			}
			break;
		case 3:
			break;
	}
}

bool func_217(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
		vVar3 = { vVar0 + Vector(10f, 0f, 0f) };
		vVar6 = { vVar0 };
		if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar3, 0, &(vVar3.f_2)) == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6, &(vVar6.f_2), false);
			fVar9 = (vVar3.z - vVar6.z);
			if (fVar9 > fParam1)
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

bool func_221(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_192, iParam0))
	{
		return true;
	}
	return false;
}

int func_225(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_917(iParam1))
	{
		*uParam2 = 0;
		return 1;
	}
	if (!__LIB_3__::func_339(iParam1))
	{
		*uParam2 = 3;
		return 1;
	}
	if (__LIB_2__::func_805(iParam1))
	{
		return 0;
	}
	if (__LIB_11__::func_171(iParam1))
	{
		return 0;
	}
	if (__LIB_13__::func_214(iParam1))
	{
		*uParam2 = 6;
		return 1;
	}
	if (__LIB_14__::func_126(iParam1, 1))
	{
		return 0;
	}
	if (iParam0 == 8 && !__LIB_0__::func_293(29))
	{
		*uParam2 = 4;
		return 1;
	}
	if (!__LIB_4__::func_922(iParam0, 16384) || bParam3)
	{
		if (__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			if (!__LIB_2__::func_767(Global_1914319.f_3[iParam0 /*446*/].f_21, 0))
			{
				if (!__LIB_2__::func_804(iParam0, -2147483648))
				{
					__LIB_7__::func_899(Global_1914319.f_3[iParam0 /*446*/].f_21);
					__LIB_0__::func_267(1);
					LAW::_0x710448D44A64C213(true);
					if (__LIB_14__::func_741(__LIB_0__::func_118(Global_1914319.f_3[iParam0 /*446*/].f_21)))
					{
						__LIB_6__::func_78(__LIB_0__::func_560(__LIB_0__::func_12(), iParam0), 16);
					}
					Global_20710.f_1938[iParam1] = __LIB_0__::func_23();
					__LIB_1__::func_446(&(Global_20710.f_1938[iParam1]), 0, 0, 0, 5, 0, 0, 0);
					__LIB_2__::func_810(iParam0, -2147483648);
					__LIB_14__::func_742(iParam1);
				}
				else
				{
					iVar0 = __LIB_6__::func_677(Global_1914319.f_3[iParam0 /*446*/].f_21);
					iVar1 = (24 - __LIB_0__::func_41(iVar0));
					if (iVar1 < 0)
					{
						iVar1 = 0;
					}
					__LIB_1__::func_446(&iVar0, 0, 0, iVar1, 1, 0, 0, 0);
					if (__LIB_1__::func_426(iVar0, 1) && PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21)))
					{
						PERSCHAR::_0x49A8C2CD97815215(__LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21));
						__LIB_1__::func_943(iParam0, -2147483648);
					}
				}
				*uParam2 = 10;
				return 1;
			}
		}
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_4 != -15 && !__LIB_1__::func_426(Global_1914319.f_3[iParam0 /*446*/].f_4, 1))
	{
		*uParam2 = 11;
		return 1;
	}
	if (__LIB_16__::func_109(iParam0, iParam1, &iVar2))
	{
		if (__LIB_4__::func_922(iParam0, 16384) && !bParam3)
		{
			switch (iVar2)
			{
				case 1:
					*uParam2 = 9;
					return 1;
				case 2:
				case 3:
				case 4:
					*uParam2 = 2;
					return 1;
				default:
					break;
			}
		}
		else
		{
			switch (iVar2)
			{
				case 3:
					*uParam2 = 8;
					return 1;
				case 1:
					*uParam2 = 9;
					return 1;
				case 5:
				case 6:
					*uParam2 = 5;
					return 1;
				default:
					*uParam2 = 2;
					return 1;
			}
		}
	}
	if (!__LIB_10__::func_716(iParam0, iParam1))
	{
		*uParam2 = 1;
		return 1;
	}
	if (__LIB_14__::func_743(iParam0))
	{
		*uParam2 = 12;
		return 1;
	}
	if (iParam1 == 39 && __LIB_1__::func_200(58))
	{
		*uParam2 = 11;
		return 1;
	}
	if ((iParam0 == 9 && __LIB_1__::func_185(43)) && !__LIB_1__::func_185(44))
	{
		*uParam2 = 11;
		return 1;
	}
	if ((iParam0 == 9 && (__LIB_14__::func_213(1, 0) || __LIB_14__::func_213(8, 0))) && !__LIB_2__::func_774(15))
	{
		*uParam2 = 11;
		return 1;
	}
	*uParam2 = 0;
	return 0;
}

bool func_228(int iParam0)
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
				func_130(113, 1, 0, 1, 1, 1, 0);
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

int func_237(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_430))
	{
		if (!__LIB_0__::func_272(iLocal_430, 65))
		{
			func_213(iLocal_429);
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(iLocal_430) || PED::IS_PED_IN_COMBAT(iLocal_430, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_430, Global_35, 1, 1))
		{
			func_213(iLocal_430);
			func_213(iLocal_429);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_429))
	{
		if (!__LIB_0__::func_272(iLocal_429, 65))
		{
			func_213(iLocal_430);
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(iLocal_429) || PED::IS_PED_IN_COMBAT(iLocal_429, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_429, Global_35, 1, 1))
		{
			func_213(iLocal_430);
			func_213(iLocal_429);
			return 1;
		}
	}
	if (__LIB_14__::func_124(11) && ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		if (!__LIB_11__::func_29(iLocal_760))
		{
			return 1;
		}
	}
	return 0;
}

void func_242(var uParam0)
{
	int iVar0;
	func_665();
	func_532(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_528();
		iVar0 = __LIB_0__::func_23();
		iLocal_189 = __LIB_0__::func_41(iVar0);
		iLocal_189 += 2;
	}
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		func_329(23);
	}
	if (__LIB_12__::func_644(uParam0) != 0 && __LIB_12__::func_644(uParam0) != 1)
	{
		__LIB_3__::func_319(iLocal_1304[8]);
		__LIB_1__::func_951(&iLocal_396);
		__LIB_1__::func_951(&iLocal_395);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_13__::func_484(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
	}
	else
	{
		__LIB_13__::func_484(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	}
}

void func_257(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_89(uParam0);
	}
}

bool func_282(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = __LIB_12__::func_767(uParam0);
	bVar1 = true;
	if (func_718(iVar0))
	{
		if (!func_318(uParam0))
		{
			bVar1 = false;
		}
	}
	if (iVar0 >= 2)
	{
		iVar2 = 1205492208;
	}
	else
	{
		iVar2 = 0;
	}
	if (!__LIB_1__::func_22(11))
	{
		iLocal_430 = func_719(11, 1, 1, vLocal_762.x, vLocal_762.y, vLocal_762.z, fLocal_765, 1, 1, 0, 0, 1, 0, iVar2, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		bVar1 = false;
	}
	if (!func_722(uParam0, func_720(iVar0), func_721(iVar0), iVar0))
	{
		bVar1 = false;
	}
	if (!func_723())
	{
		bVar1 = false;
	}
	if (!func_724())
	{
		bVar1 = false;
	}
	if (iLocal_634 == 0)
	{
		iLocal_634 = __LIB_9__::func_173(vLocal_782, 1.5f, 1.5f, 2f);
		bVar1 = false;
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_429) || !func_319())
		{
			bVar1 = false;
		}
	}
	if (STREAMING::_IS_IMAP_ACTIVE(126970802))
	{
		STREAMING::_REMOVE_IMAP(126970802);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_430) && !ENTITY::IS_ENTITY_DEAD(iLocal_430))
	{
		if (iVar0 >= 2)
		{
			if (!func_426())
			{
				bVar1 = false;
			}
		}
		else
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_430, true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_430, joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_430, joaat("WEAPON_UNARMED"), true, 1, false, false);
		}
	}
	else
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_430))
		{
			if (iVar2 == 1205492208)
			{
				PED::_SET_PED_BODY_COMPONENT(iLocal_430, 1598276604);
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iLocal_430, joaat("META_OUTFIT_WARM_WEATHER"));
			}
			PED::_UPDATE_PED_VARIATION(iLocal_430, false, true, true, true, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_430, joaat("PLAYER"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_430, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_430, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 27, false);
			if (!__LIB_12__::func_639(uParam0, 64))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, vLocal_762, fLocal_765, true, false, true);
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_430, 8, true);
			func_726();
			iLocal_191 = ENTITY::GET_ENTITY_HEALTH(iLocal_430);
			__LIB_12__::func_875(uParam0, iLocal_430, "SADIE_ADLER", 0);
		}
		else
		{
			bVar1 = false;
		}
	}
	else
	{
		bVar1 = false;
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(945));
	PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(946));
	PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(947));
	return bVar1;
}

void func_301(var uParam0, int iParam1)
{
	char cVar0[64];
	switch (iParam1)
	{
		case 0:
			iLocal_1290 = 0;
			StringCopy(&(uParam0->f_2575), "RSAD1_RSC1", 24);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_430, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_429, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_760, "wagon02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_396, "p_knife03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_395, "P_CLEAVER01X", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_409, "p_carrot02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_410, "p_cs_barrag01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_411, "p_cs_towel02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_425, "p_cuttingboard01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_426, "s_meatbit_chunck_medium01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_412[0], "p_cs_carrotSlice01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_412[1], "p_cs_carrotSlice01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[0], "p_cs_meatstew01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[1], "p_cs_meatstew01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[2], "p_cs_meatstew01x^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[3], "p_cs_meatstew01x^3", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[4], "p_cs_meatstew01x^4", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[5], "p_cs_meatstew01x^5", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[6], "p_cs_meatstew01x^6", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[7], "p_cs_meatstew01x^7", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_415[8], "p_cs_meatstew01x^8", 0, 0, 0);
			__LIB_12__::func_981(uParam0, 129421);
			StringCopy(&cVar0, "Multistart", 64);
			__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
			__LIB_12__::func_846(&(uParam0->f_206));
			__LIB_13__::func_16(uParam0, 129838);
			__LIB_0__::func_7(&(uParam0->f_206.f_404), 8192);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			iLocal_1290 = 1;
			StringCopy(&(uParam0->f_2575), "RSAD1_RSC4", 24);
			__LIB_12__::func_779(uParam0, vLocal_970);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[0]))
			{
				__LIB_13__::func_59(uParam0, iLocal_459[0], "Horse_01", 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[1]))
			{
				__LIB_13__::func_59(uParam0, iLocal_459[1], "Horse_01^1", 0, 0, 0);
			}
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_430, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_429, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_760, "WAGON02X", 0, 0, 0);
			__LIB_12__::func_981(uParam0, 129421);
			if (iLocal_635 == 0)
			{
				iLocal_635 = __LIB_9__::func_173(682.1854f, -1252.783f, 43.1837f, 3f, 3f, 2f);
			}
			__LIB_12__::func_846(&(uParam0->f_206));
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			if (!func_221(22))
			{
				func_329(22);
			}
			break;
	}
}

void func_302()
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_11__::func_21(iLocal_1304[8]))
	{
		if (!bLocal_65)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_1304[8], "pbl_dialogue"))
			{
				if (func_759())
				{
					func_760(8);
					bVar0 = true;
				}
				if (func_761())
				{
					bVar0 = true;
				}
				if (func_762())
				{
					bVar0 = true;
				}
				if (func_763())
				{
					bVar0 = true;
				}
				if (func_764())
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(iLocal_1304[8], 30f);
					bLocal_65 = true;
				}
			}
		}
		else
		{
			if ((((!func_759() && !func_761()) && !func_762()) && !func_763()) && !func_764())
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1304[8], "pbl_dialogue"))
			{
				bVar0 = true;
			}
			if (bVar0 && ANIMSCENE::_0x1F0E401031E20146(iLocal_1304[8], "pbl_dialogue"))
			{
				ANIMSCENE::FADE_ANIM_SCENE_AUDIO_IN(iLocal_1304[8], 30f);
				bLocal_65 = false;
			}
		}
	}
}

bool func_303(var uParam0)
{
	func_765();
	if (bLocal_61)
	{
		__LIB_14__::func_141(&iLocal_430, &iLocal_463, &Local_524, 8f, -1082130432 /* Float: -1f */, 0);
	}
	if (bLocal_62)
	{
		__LIB_14__::func_141(&iLocal_429, &iLocal_542, &Local_603, 8f, -1082130432 /* Float: -1f */, 0);
	}
	if (func_767())
	{
		__LIB_5__::func_591(1, 0, 0);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		__LIB_14__::func_145(iLocal_1304[8]);
		__LIB_14__::func_145(iLocal_1304[9]);
		func_320(uParam0);
		__LIB_10__::func_843(105, 0, 350);
		return true;
	}
	return false;
}

void func_306()
{
	if (!func_221(7))
	{
		func_329(7);
	}
	switch (iLocal_1284)
	{
		case 1:
		case 2:
		case 3:
			func_772(0.7f, 0);
			break;
		case 4:
		case 5:
		case 6:
			func_772(0.2f, 0);
			break;
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			func_772(0f, 1);
			break;
		case 14:
			func_772(0.5f, 0);
			break;
	}
}

void func_308()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) < 6 || (__LIB_0__::func_41(iVar0) > 16 && __LIB_0__::func_42(iVar0) > 59))
	{
		__LIB_0__::func_467(&iVar0, 9);
		__LIB_0__::func_468(&iVar0, 0);
		__LIB_0__::func_469(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
		iLocal_1336 = 2;
	}
}

void func_309()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_430) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_430, false))
	{
		PED::_0xE0B61ED8BB37712F(iLocal_430);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		PED::_0xE0B61ED8BB37712F(Global_35);
	}
}

bool func_310(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_781(4))
		{
			return true;
		}
		if (!__LIB_1__::func_707(joaat("DOCUMENT_RSAD_PEARSONS_LETTER"), 1, 0))
		{
			func_783(joaat("DOCUMENT_RSAD_PEARSONS_LETTER"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			func_760(4);
			return true;
		}
	}
	else
	{
		if (func_781(5))
		{
			return true;
		}
		if (__LIB_1__::func_707(joaat("DOCUMENT_RSAD_PEARSONS_LETTER"), 1, 0))
		{
			func_784(joaat("DOCUMENT_RSAD_PEARSONS_LETTER"), 1, bParam0, -142743235, 0);
		}
		else
		{
			func_760(5);
			return true;
		}
	}
	return false;
}

bool func_311(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_781(6))
		{
			return true;
		}
		if (!__LIB_1__::func_707(joaat("DOCUMENT_RSAD_SHOP_LIST"), 1, 0))
		{
			func_783(joaat("DOCUMENT_RSAD_SHOP_LIST"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			func_760(6);
			return true;
		}
	}
	else
	{
		if (func_781(7))
		{
			return true;
		}
		if (__LIB_1__::func_707(joaat("DOCUMENT_RSAD_SHOP_LIST"), 1, 0))
		{
			if (bParam0)
			{
				func_784(joaat("DOCUMENT_RSAD_SHOP_LIST"), 1, bParam0, -142743235, 0);
			}
			else
			{
				func_784(joaat("DOCUMENT_RSAD_SHOP_LIST"), 1, bParam0, -1387038764, 0);
			}
		}
		else
		{
			func_760(7);
			return true;
		}
	}
	return false;
}

void func_313()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1233))
	{
		iLocal_1233 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_1122, vLocal_1125, vLocal_1128, "ARRIVE_BLOCKER");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1233))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_1233, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1233, 0, 0, 0, -1, -1, 0);
		if (iLocal_630 == 0)
		{
			iLocal_630 = PED::_0x4C39C95AE5DB1329(iLocal_1233, false, 15);
		}
		__LIB_0__::func_566(iLocal_1233, 0);
		if (!__LIB_1__::func_565(&uLocal_1209))
		{
			__LIB_3__::func_414(&uLocal_1209, vLocal_963, (3f + 4f), 1, iLocal_1211, 0);
		}
		if (!__LIB_1__::func_565(&uLocal_1210))
		{
			__LIB_3__::func_414(&uLocal_1210, vLocal_963, (3f + 4f), 2, iLocal_1212, 0);
		}
	}
}

void func_314(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { 1315.874f, -1284.294f, 75.827f };
	vVar3 = { 0f, 0f, 56f };
	vVar6 = { 7f, 12f, 2f };
	if (bParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1239))
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_1239, 4, 0);
		}
		__LIB_0__::func_172(iLocal_1239);
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1239))
		{
			iLocal_1239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "STORE_ARRIVE_BLOCKER");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1239))
		{
			MISC::_0x2FCD528A397E5C88(iLocal_1239, 1048576);
			PATHFIND::_0xB03944057FD735BA(iLocal_1239, 4, 0);
		}
	}
}

bool func_317()
{
	int iVar0;
	iVar0 = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
	if (!__LIB_0__::func_75(&uLocal_708))
	{
		__LIB_1__::func_283(&uLocal_708, 0);
	}
	if (__LIB_0__::func_264(&uLocal_708) < 15f)
	{
		if (iVar0 > 0)
		{
			return false;
		}
		else
		{
			__LIB_0__::func_37(&uLocal_708);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_708);
		return true;
	}
	return false;
}

bool func_318(var uParam0)
{
	if (__LIB_14__::func_124(19))
	{
		return true;
	}
	if (!__LIB_1__::func_22(17))
	{
		iLocal_429 = func_719(17, 1, 1, 677.2375f, -1251.618f, 43.0152f, 62.9074f, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_429) && PED::_0xA0BC8FAED8CFEB3C(iLocal_429))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_429, joaat("META_OUTFIT_WARM_WEATHER"));
		PED::_UPDATE_PED_VARIATION(iLocal_429, false, true, true, true, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_429, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_429, true);
		__LIB_12__::func_875(uParam0, iLocal_429, "PEARSON", 1);
		__LIB_18__::func_765(19);
		return true;
	}
	return false;
}

bool func_319()
{
	bool bVar0;
	int iVar1;
	if (bLocal_64)
	{
		return true;
	}
	bVar0 = true;
	iVar1 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395))
	{
		iLocal_395 = OBJECT::CREATE_OBJECT(iLocal_350, vLocal_991, true, true, false, false, true);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_396))
	{
		iLocal_396 = OBJECT::CREATE_OBJECT(iLocal_355, vLocal_991, true, true, false, false, true);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_409))
	{
		iLocal_409 = OBJECT::CREATE_OBJECT(iLocal_358, vLocal_991, false, true, true, true, false);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_410))
	{
		iLocal_410 = OBJECT::CREATE_OBJECT(iLocal_360, vLocal_991, false, true, true, true, false);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		iLocal_411 = OBJECT::CREATE_OBJECT(iLocal_352, vLocal_991, false, true, true, true, false);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_425))
	{
		iLocal_425 = OBJECT::CREATE_OBJECT(iLocal_363, vLocal_991, false, true, true, true, false);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_426))
	{
		iLocal_426 = OBJECT::CREATE_OBJECT(iLocal_364, vLocal_991, false, true, true, true, false);
		bVar0 = false;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_412[iVar1]))
		{
			iLocal_412[iVar1] = OBJECT::CREATE_OBJECT(iLocal_361, vLocal_991, false, true, true, true, false);
			bVar0 = false;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415[iVar1]))
		{
			iLocal_415[iVar1] = OBJECT::CREATE_OBJECT(iLocal_362, vLocal_991, false, true, true, true, false);
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		bLocal_64 = true;
	}
	return bVar0;
}

void func_320(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (func_790(iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "BOOL_TIMELAPSE_EARLY", true, false);
		MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), false, false, true, 30f, false);
	}
	else if (func_791(iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "BOOL_TIMELAPSE_LATE", true, false);
		MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), false, false, true, 30f, false);
	}
	else if (func_792(iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_206.f_348, "BOOL_TIMELAPSE_NIGHT", true, false);
		MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), false, false, true, 30f, false);
	}
}

void func_321(vector3 vParam0, bool bParam3)
{
	__LIB_0__::func_325(&iLocal_31);
	if (!MAP::DOES_BLIP_EXIST(iLocal_31))
	{
		if (bParam3)
		{
			if (__LIB_0__::func_175(vParam0, vLocal_970, 1056964608 /* Float: 0.5f */, 1))
			{
				func_794();
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1248))
				{
					iLocal_31 = __LIB_8__::func_775(-308585968, iLocal_1248, 1);
				}
			}
			else if (__LIB_0__::func_175(vParam0, vLocal_960, 1056964608 /* Float: 0.5f */, 1))
			{
				func_796();
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1247))
				{
					iLocal_31 = __LIB_8__::func_775(-308585968, iLocal_1247, 1);
				}
			}
			iLocal_44 = 1;
		}
		else
		{
			iLocal_31 = __LIB_4__::func_983(408396114, vParam0, 1);
		}
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_31))
	{
		if (__LIB_0__::func_138(vParam0, vLocal_960))
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_31, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_31, "SAD1_BLPSTORE");
		}
		if (__LIB_0__::func_138(vParam0, vLocal_970))
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_31, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_31, "SAD1_BLPCAMP");
		}
		if (BUILTIN::VDIST(Global_36, vParam0) > 40f)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_31, -1878373110);
			bLocal_52 = true;
		}
	}
	vLocal_979 = { vParam0 };
}

void func_322()
{
	if (!__LIB_14__::func_124(2))
	{
		PED::_0x1E017404784AA6A3(iLocal_430, joaat("RSAD1_RIDE1"));
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
		__LIB_18__::func_765(2);
	}
}

void func_323(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_430, 297, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_430, 315, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_430, 130, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_430, 331, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_430, 330, bParam0);
}

void func_324(var uParam0, int iParam1, int iParam2)
{
	__LIB_12__::func_937(uParam0, iParam2);
	iLocal_1284 = iParam2;
}

bool func_327()
{
	if (!__LIB_14__::func_127(30))
	{
		__LIB_19__::func_499(2, 30, 105);
		return false;
	}
	else if (!__LIB_9__::func_950(30))
	{
		__LIB_14__::func_133(30, 1);
		return false;
	}
	else if (__LIB_14__::func_127(30) && __LIB_9__::func_950(30))
	{
		return true;
	}
	return false;
}

bool func_328()
{
	int iVar0;
	iVar0 = __LIB_0__::func_120(72);
	if (PERSCHAR::_0xEB98B38CA60742D7(iVar0))
	{
		if (PERSCHAR::_0x49A8C2CD97815215(iVar0))
		{
			PERSCHAR::_0x0CADC3A977997472(iVar0, 1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_329(int iParam0)
{
	if (!func_221(iParam0))
	{
		MISC::SET_BIT(&iLocal_192, iParam0);
	}
}

void func_331(var uParam0)
{
	if (!iLocal_108[iLocal_181])
	{
		iLocal_442[iLocal_181] = __LIB_1__::func_334(72);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[iLocal_181]))
		{
			__LIB_12__::func_875(uParam0, iLocal_442[iLocal_181], "RHO_STATWRK", 0);
			__LIB_3__::func_820(30, 1);
			iLocal_108[iLocal_181] = 1;
		}
	}
}

void func_332()
{
	__LIB_1__::func_948(iLocal_144, 1, 0f, 0, 0, 0, 0, 0);
	OBJECT::_0x7F458B543006C8FE(iLocal_144, 16);
	bLocal_63 = true;
}

bool func_333(var uParam0)
{
	func_807();
	switch (iLocal_1319)
	{
		case 0:
			if (func_808(11, 0, 0, 0))
			{
				func_809(iLocal_1319, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[11], true, false))
			{
				if (func_810())
				{
					func_809(iLocal_1319, 2);
				}
			}
			break;
		case 2:
			if (iLocal_1284 > 5)
			{
				if (func_811(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_760))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "CS_MrsAdler", iLocal_430, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "A_M_M_RHDTOWNFOLK_01", iLocal_462, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_pen01x", iLocal_428, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_amb_clipboard_01", iLocal_427, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_crate03x", iLocal_149, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_sack04x", iLocal_148, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[11], "wagon02x", iLocal_760, 0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_430, Local_18, Local_18.f_3.f_2, true, false, true);
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", false, false);
						}
						func_809(iLocal_1319, 3);
					}
				}
			}
			break;
		case 3:
			if (func_812())
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[11], "pbl_BoxMove", true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[11]);
				func_809(iLocal_1319, 4);
			}
			break;
		case 4:
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", false, false);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[11], "S_Base", 1))
			{
				if (func_813())
				{
					__LIB_5__::func_20(0, 0);
					func_384();
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", true, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[11], "pbl_Action_P1", true);
					func_809(iLocal_1319, 5);
				}
				else if (!__LIB_14__::func_124(4))
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_RSC3_DIA1", 0))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", true, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[11], "pbl_Dialogue_1", true);
						func_809(iLocal_1319, 6);
					}
				}
				else if (!__LIB_14__::func_124(5))
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_RSC3_DIA2", 0))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", true, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[11], "pbl_Dialogue_2", true);
						func_809(iLocal_1319, 7);
					}
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[11], "S_Base", 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", false, false);
				}
				if (!__LIB_6__::func_903("RSAD1_RSC3_DIA1"))
				{
					__LIB_18__::func_765(4);
					func_809(iLocal_1319, 4);
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[11], "S_Base", 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", false, false);
				}
				if (!__LIB_6__::func_903("RSAD1_RSC3_DIA2"))
				{
					__LIB_18__::func_765(5);
					func_809(iLocal_1319, 4);
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1304[11], "A_M_M_RHDTOWNFOLK_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[11], "A_M_M_RHDTOWNFOLK_01"))
			{
				if (!__LIB_0__::func_491(iLocal_462, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_641);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1010[0 /*3*/], 1f, -1, 0.5f, 512, fLocal_1023[0]);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_641);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_462, iLocal_641);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_641);
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[11], "s_Action_Loop", 1) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1304[11]) > 0.99f)
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", false, false);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[11], "pbl_Action_Loop", true);
				func_809(iLocal_1319, 8);
			}
			break;
		case 8:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1304[11], "A_M_M_RHDTOWNFOLK_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[11], "A_M_M_RHDTOWNFOLK_01"))
			{
				if (!__LIB_0__::func_491(iLocal_462, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_641);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1010[0 /*3*/], 1f, -1, 0.5f, 512, fLocal_1023[0]);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_641);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_462, iLocal_641);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_641);
				}
			}
			if (func_815(uParam0) && !__LIB_6__::func_904())
			{
				__LIB_12__::func_876(uParam0, "RSAD1_IG8_P2", 0);
				func_809(iLocal_1319, 9);
			}
			break;
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1304[11]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[11], false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_sack04x", iLocal_148);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_148))
				{
					ENTITY::DELETE_ENTITY(&iLocal_148);
				}
				func_816(&iLocal_145, 1);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_crate03x", iLocal_149);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_149))
				{
					ENTITY::DELETE_ENTITY(&iLocal_149);
				}
				func_816(&iLocal_146, 1);
				__LIB_14__::func_145(iLocal_1304[11]);
				func_809(iLocal_1319, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_335()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (__LIB_14__::func_124(13))
	{
		return true;
	}
	vVar0 = { 1314.351f, -1282.238f, 75.974f };
	vVar3 = { 0f, 0f, 65f };
	vVar6 = { 22f, 19f, 8f };
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1216))
	{
		iLocal_1216 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "MIDTRO_CUT_RESTRICT");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1216))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_1216, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1216, 0, 0, 0, -1, -1, 0);
		__LIB_3__::func_730(iLocal_1216, 0, 0, 1, 1, 0);
		__LIB_3__::func_729(iLocal_1216, 0, 0);
		if (iLocal_631 == 0)
		{
			iLocal_631 = PED::_0x4C39C95AE5DB1329(iLocal_1216, false, 15);
		}
		__LIB_18__::func_765(13);
		return true;
	}
	return false;
}

bool func_336()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1245))
	{
		iLocal_1245 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1316.706f, -1294.017f, 75.3f, 0f, 0f, 80f, 1f, 1.5f, 2f);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1245))
	{
		VOLUME::_0xBE551C2CC421185D(iLocal_1245, 1);
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_1245, 1);
		return true;
	}
	return false;
}

bool func_337()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1246))
	{
		iLocal_1246 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1320.3f, -1294.123f, 75.266f, 0f, 0f, 0f, 2f, 2f, 3f, "SHOP_BLOCKER");
		return false;
	}
	if (iLocal_633 == 0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1246))
		{
			__LIB_0__::func_566(iLocal_1246, 0);
			POPULATION::_0xB56D41A694E42E86(iLocal_1246, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_1246, 0, 0, 0, -1, -1, 0);
			if (iLocal_633 == 0)
			{
				iLocal_633 = PED::_0x4C39C95AE5DB1329(iLocal_1246, false, 15);
			}
		}
		return false;
	}
	return true;
}

void func_338()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_30))
	{
		iLocal_30 = __LIB_8__::func_778(408396114, iLocal_760, 1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_30))
	{
		MAP::SET_BLIP_SPRITE(iLocal_30, joaat("BLIP_AMBIENT_COACH"), true);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_30, "SAD1_BLPWAGON");
	}
}

void func_339(var uParam0, bool bParam1, bool bParam2)
{
	__LIB_4__::func_705(11, 0);
	if (bParam1)
	{
		__LIB_0__::func_900(11);
	}
	else
	{
		__LIB_0__::func_745(11);
	}
	if (bParam2)
	{
		__LIB_13__::func_89(uParam0, Local_1347[9 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
}

void func_340(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vVar0 = { 1324.693f, -1306.725f, 75.827f };
	vVar3 = { 0f, 0f, 159f };
	vVar6 = { 4f, 12f, 2f };
	vVar9 = { 1227.315f, -1228.551f, 75.827f };
	vVar12 = { 0f, 0f, 159f };
	vVar15 = { 16f, 18f, 7f };
	if (bParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240))
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_1240, 4, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1241))
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_1241, 4, 0);
		}
		__LIB_0__::func_172(iLocal_1240);
		__LIB_0__::func_172(iLocal_1241);
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240))
		{
			iLocal_1240 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "STORE_FRONT_BLOCKER");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1241))
		{
			iLocal_1241 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar9, vVar12, vVar15, "MAIN_STREET_BLOCKER");
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240))
		{
			MISC::_0x2FCD528A397E5C88(iLocal_1240, 1048576);
			PATHFIND::_0xB03944057FD735BA(iLocal_1240, 4, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1241))
		{
			MISC::_0x2FCD528A397E5C88(iLocal_1241, 1048576);
			PATHFIND::_0xB03944057FD735BA(iLocal_1241, 4, 0);
		}
	}
}

void func_341()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1213))
	{
		iLocal_1213 = VOLUME::_CREATE_VOLUME_BOX(vLocal_1131, vLocal_1134, vLocal_1137);
	}
}

void func_342()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { 1273.051f, -1273.169f, 75.827f };
	vVar3 = { 0f, 0f, 144f };
	vVar6 = { 103f, 19f, 7f };
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1214))
	{
		iLocal_1214 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, vVar3, vVar6);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1214))
	{
		__LIB_3__::func_730(iLocal_1214, 1, 0, 1, 1, 1);
	}
}

void func_343(var uParam0)
{
	switch (iLocal_1325)
	{
		case 0:
			if (func_808(4, 0, "pbl_StabbedIdles", 0))
			{
				iLocal_1325 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[4], true, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_437))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[4], "MrsAdler", iLocal_430, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[4], "G_M_M_UNICRIMINALS_01", iLocal_437, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[4], "ARTHUR", Global_35, 0);
				iLocal_1325 = 2;
			}
			break;
		case 2:
			if (iLocal_1303 == 6)
			{
				__LIB_14__::func_145(iLocal_1304[3]);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[4]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[4], "PBL_Base");
				iLocal_1325 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[4], "PBL_Base"))
			{
				if (iLocal_1300 == 5)
				{
					if (bLocal_59)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[4], "PBL_Base", true);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[4], "pbl_StabBandit");
						iLocal_1325 = 4;
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[4], "PBL_Base", true);
						__LIB_1__::func_864(iLocal_437, 1, 0);
						iLocal_1325 = 6;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[4], "pbl_StabBandit"))
			{
				if ((__LIB_0__::func_665(Global_35, iLocal_430, 0, 1) < 30f && !__LIB_6__::func_903("RSAD1_COME")) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_430))
				{
					if (__LIB_4__::func_68("SAD1_GOBANDIT", 1))
					{
						__LIB_1__::func_390("SAD1_GOBANDIT", 1);
					}
					ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_430, iLocal_191);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[4], "bStabIdle", true, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[4], "pbl_StabBandit", true);
					iLocal_1325 = 5;
				}
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_437))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_1304[4]) >= 12f)
				{
					PED::_0x6569F31A01B4C097(iLocal_437, 0, 1);
					PED::_0x6569F31A01B4C097(iLocal_437, 1, 1);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
					__LIB_1__::func_864(iLocal_437, 1, 0);
				}
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[4], "MrsAdler"))
			{
				if (__LIB_0__::func_399(iLocal_430, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					if (!__LIB_0__::func_491(iLocal_430, 716706914))
					{
						WEAPON::_0x94A3C1B804D291EC(iLocal_430, 0, 0, 0, 0);
						TASK::TASK_SWAP_WEAPON(iLocal_430, 0, 0, 0, 0);
					}
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_430, iLocal_760, -1, -1, 1f, 131073, 0);
					func_339(uParam0, 0, 0);
					iLocal_1325 = 6;
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[4], false) || !bLocal_59)
			{
				__LIB_14__::func_145(iLocal_1304[4]);
				iLocal_1325 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_344(var uParam0, bool bParam1)
{
	int iVar0;
	if (iLocal_1326[iVar0] != 8 && iLocal_1326[iVar0] != 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
		{
			if (PED::_IS_PED_HOGTIED(iLocal_445[iVar0]))
			{
				iLocal_1326[iVar0] = 8;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iLocal_1326[iVar0])
		{
			case 0:
				if (func_221(4))
				{
					if (func_822(uParam0, iVar0, bParam1))
					{
						if (iLocal_96[iVar0])
						{
							func_823(iVar0, iLocal_1326[iVar0], 1);
						}
						else
						{
							func_823(iVar0, iLocal_1326[iVar0], 2);
						}
					}
				}
				break;
			case 1:
				if (func_824(uParam0, iVar0))
				{
					func_823(iVar0, iLocal_1326[iVar0], 2);
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
				{
					if (func_825() < fLocal_156[iVar0])
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_36[iVar0]))
						{
							iLocal_36[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_445[iVar0]);
							MAP::_BLIP_SET_MODIFIER(iLocal_36[iVar0], -1034486097);
						}
						if (iLocal_96[iVar0])
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_445[iVar0], vLocal_914[iVar0 /*3*/], 2.5f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
							func_823(iVar0, iLocal_1326[iVar0], 3);
						}
						else
						{
							if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_445[iVar0]))
							{
								PED::_SET_PED_CROUCH_MOVEMENT(iLocal_445[iVar0], false, 0, false);
							}
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_445[iVar0], vLocal_930[iVar0 /*3*/], 3f, -1, 0.25f, 0, 40000f);
							func_823(iVar0, iLocal_1326[iVar0], 5);
						}
					}
				}
				else
				{
					func_823(iVar0, iLocal_1326[iVar0], 8);
				}
				break;
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
				{
					if (__LIB_0__::func_94(iLocal_445[iVar0], vLocal_914[iVar0 /*3*/], 0) < 10f)
					{
						if (PED::IS_PED_ON_MOUNT(iLocal_445[iVar0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_451[iVar0]))
							{
								TASK::TASK_HORSE_ACTION(iLocal_451[iVar0], 3, 0, 0);
							}
							func_826(&(iLocal_445[iVar0]), vLocal_930[iVar0 /*3*/]);
							func_823(iVar0, iLocal_1326[iVar0], 4);
						}
						else
						{
							func_823(iVar0, iLocal_1326[iVar0], 4);
						}
					}
				}
				else
				{
					func_823(iVar0, iLocal_1326[iVar0], 8);
				}
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_445[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_451[iVar0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_451[iVar0], false);
							if (!__LIB_0__::func_491(iLocal_451[iVar0], 518218985))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_451[iVar0], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
							}
						}
						func_823(iVar0, iLocal_1326[iVar0], 5);
					}
				}
				else
				{
					func_823(iVar0, iLocal_1326[iVar0], 8);
				}
				break;
			case 5:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
				{
					if (__LIB_0__::func_94(iLocal_445[iVar0], vLocal_930[iVar0 /*3*/], 0) < fLocal_171)
					{
						if (func_827(&(uLocal_116[iVar0]), &(vLocal_930[iVar0 /*3*/]), &(fLocal_946[iVar0]), iLocal_132[iVar0], iLocal_126[iVar0], &(uLocal_1218[iVar0]), sLocal_665[iVar0]))
						{
							func_828(&(iLocal_445[iVar0]), &(uLocal_1218[iVar0]), &(uLocal_116[iVar0]));
							if (iVar0 == iLocal_188)
							{
								__LIB_1__::func_283(&uLocal_727, 0);
							}
							func_823(iVar0, iLocal_1326[iVar0], 6);
						}
					}
				}
				else
				{
					func_823(iVar0, iLocal_1326[iVar0], 8);
				}
				break;
			case 6:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
				{
					if (func_221(21))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_445[iVar0], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						func_823(iVar0, iLocal_1326[iVar0], 8);
					}
					else if (iVar0 == iLocal_188)
					{
						if (!bLocal_57)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_445[iVar0], Global_35, 1, 1) || __LIB_1__::func_996(iLocal_445[iVar0], 1, 1, 1, 0))
							{
								bLocal_57 = true;
							}
						}
					}
				}
				else
				{
					func_823(iVar0, iLocal_1326[iVar0], 8);
				}
				break;
			case 7:
				if (ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
				{
					func_823(iVar0, iLocal_1326[iVar0], 8);
				}
				break;
			case 8:
				__LIB_0__::func_325(&(iLocal_36[iVar0]));
				__LIB_2__::func_788(&(iLocal_445[iVar0]), 1, 0, 1);
				__LIB_2__::func_788(&(iLocal_451[iVar0]), 1, 0, 1);
				func_823(iVar0, iLocal_1326[iVar0], 9);
				break;
			case 9:
				break;
		}
		iVar0++;
	}
}

bool func_345()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iLocal_1326[iVar0] > 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 5)
	{
		return true;
	}
	return false;
}

bool func_346(var uParam0, vector3 vParam1, float fParam4)
{
	var uVar0;
	if (bLocal_53)
	{
		return true;
	}
	vParam1.f_2 = (vParam1.z + 10f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, false);
	vParam1.f_2 = uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_437))
	{
		iLocal_437 = __LIB_12__::func_885(uParam0, iLocal_380[0], vParam1, fParam4, 0, 1, 1, 0, 0, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_437) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_437))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_437, vParam1, fParam4, true, false, true);
		PED::_0x9851DE7AEC10B4E1(vLocal_956, 2f, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 297, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 130, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_437, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_437, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_437, false, 0f);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_437, false);
		PED::_0x6569F31A01B4C097(iLocal_437, 0, 0);
		PED::_0x6569F31A01B4C097(iLocal_437, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 6, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 69, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 186, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 153, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 73, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 305, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_437, iLocal_628);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_628);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_628, joaat("PLAYER"));
		PED::SET_PED_CONFIG_FLAG(iLocal_437, 286, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_437, iLocal_760, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_437, iLocal_430, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_437, Global_35, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_437, iLocal_459[0], false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_437, iLocal_459[1], false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_760, iLocal_437, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_430, iLocal_437, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_437, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[0], iLocal_437, false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[1], iLocal_437, false);
		ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_437, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_437, 8, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_437, 1, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_437, 4, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_437, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_437, 2);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_437, 2);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_437, 32);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_437, 262144);
		TASK::TASK_STAND_STILL(iLocal_437, -1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_437, true, true);
		bLocal_53 = true;
		return true;
	}
	return false;
}

bool func_349(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_445[iVar0]))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			iLocal_445[iVar0] = __LIB_12__::func_885(uParam0, iLocal_380[iVar1], vLocal_930[iVar0 /*3*/], fLocal_946[iVar0], 1, 1, 0, 1, 1, 1, 1, 0);
			return false;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
		{
			if (__LIB_1__::func_985())
			{
				__LIB_1__::func_766(iLocal_445[iVar0], iLocal_206, 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			else
			{
				__LIB_1__::func_766(iLocal_445[iVar0], iLocal_207, 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[iVar0], true);
			ENTITY::_0x18FF3110CF47115D(iLocal_445[iVar0], 1, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_445[iVar0], 186, true);
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
			{
				__LIB_1__::func_864(iLocal_445[iVar0], 1, 0);
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_351()
{
	if (!__LIB_14__::func_124(3))
	{
		PED::_0x1E017404784AA6A3(iLocal_430, joaat("RSAD1_RIDE3"));
		AUDIO::_0x0D7FD6A55FD63AEF(8, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(26, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(10, 3, 0);
		__LIB_18__::func_765(3);
	}
}

void func_354()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1235))
	{
		iLocal_1235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_1140, vLocal_1143, vLocal_1146, "out_block");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1235))
	{
		if (iLocal_636 == 0)
		{
			iLocal_636 = __LIB_11__::func_807(iLocal_1235, 0f, 0, 0);
			func_833();
		}
	}
}

bool func_356(var uParam0)
{
	if (!__LIB_1__::func_22(17))
	{
		iLocal_429 = func_719(17, 1, 1, 682.1854f, -1252.783f, 43.1837f, 157.0417f, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iLocal_429))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_429, joaat("META_OUTFIT_WARM_WEATHER"));
		PED::_UPDATE_PED_VARIATION(iLocal_429, false, true, true, true, false);
		AUDIO::STOP_PED_SPEAKING(iLocal_429, true);
		if (!func_221(22))
		{
			func_301(uParam0, 1);
		}
		return true;
	}
	return false;
}

int func_369(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_858(uParam4);
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

void func_376()
{
	__LIB_0__::func_172(iLocal_1215);
	__LIB_0__::func_172(iLocal_1236);
	__LIB_0__::func_172(iLocal_1237);
	__LIB_0__::func_172(iLocal_1238);
	__LIB_0__::func_172(iLocal_1242);
	__LIB_0__::func_172(iLocal_1243);
}

void func_378()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(__LIB_0__::func_271(iVar0));
		iVar0++;
	}
}

void func_381()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0) + 2;
	if (iVar1 == 23)
	{
		iVar1 = 1;
	}
	if (iVar1 == 24)
	{
		iVar1 = 2;
	}
	__LIB_0__::func_467(&iVar0, iVar1);
	vLocal_111.x = joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST");
	vLocal_111.f_2 = joaat("CSTP_NEXT_VISIT");
	vLocal_111.f_1 = iVar0;
}

int func_382(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
						func_536(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
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

void func_383()
{
	int iVar0;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[iVar0]))
			{
				if (!__LIB_0__::func_491(iLocal_459[iVar0], -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_459[iVar0], -1);
				}
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_459[iVar0], 48, true);
			}
			iVar0++;
		}
	}
}

void func_384()
{
	__LIB_0__::func_745(11);
	__LIB_5__::func_305(11);
	__LIB_4__::func_705(11, 1);
}

void func_385(int iParam0)
{
	if (func_221(iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_192, iParam0);
	}
}

bool func_387(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
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
				__LIB_12__::func_983(uParam0);
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
			func_922(uParam0, Param1, iParam5);
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

void func_389(var uParam0)
{
	int iVar0;
	func_932();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_933(uParam0, iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
		{
			if (!PED::GET_PED_CONFIG_FLAG(iLocal_431[iVar0], 143, true))
			{
				uLocal_203[iVar0] = __LIB_1__::func_372(iLocal_431[iVar0], 0);
				if (uLocal_203[iVar0] == joaat("WEAPON_REVOLVER_SCHOFIELD"))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_431[iVar0], 143, true);
				}
			}
			if (iLocal_1286[iVar0] != 9 && iLocal_1286[1] != 8)
			{
				if (PED::_IS_PED_HOGTIED(iLocal_431[iVar0]))
				{
					iLocal_1286[iVar0] = 8;
				}
			}
		}
		switch (iLocal_1286[iVar0])
		{
			case 0:
				if (!__LIB_14__::func_124(8))
				{
					if (iLocal_1284 == 8)
					{
						func_934(iVar0, iLocal_1286[iVar0], 1);
					}
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 2);
				}
				break;
			case 1:
				if (func_935(uParam0, iVar0))
				{
					func_329(10);
					func_934(iVar0, iLocal_1286[iVar0], 3);
				}
				break;
			case 2:
				if (!__LIB_14__::func_124(8))
				{
					if (!__LIB_0__::func_75(&(vLocal_692[iVar0 /*3*/])))
					{
						__LIB_1__::func_283(&(vLocal_692[iVar0 /*3*/]), 0);
						fLocal_153[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 8f);
					}
					else if (__LIB_0__::func_265(&(vLocal_692[iVar0 /*3*/])) > fLocal_153[iVar0])
					{
						if (func_936(uParam0, iVar0))
						{
							func_937(iVar0, 1);
							__LIB_0__::func_37(&(vLocal_692[iVar0 /*3*/]));
							func_934(iVar0, iLocal_1286[iVar0], 4);
						}
					}
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 8);
				}
				break;
			case 3:
				if (func_938(iVar0) || func_221(4))
				{
					if (__LIB_6__::func_903("RSAD_BANT1"))
					{
						__LIB_6__::func_900("RSAD_BANT1", 0, 0);
					}
					if (!func_221(4))
					{
						func_329(4);
					}
					__LIB_0__::func_172(iLocal_1232);
					func_940(iVar0);
					func_934(iVar0, iLocal_1286[iVar0], 4);
				}
				else
				{
					func_941();
				}
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
				{
					if (PED::_0x0455546F23FF08E4(iLocal_176) && PED::IS_PED_GROUP_MEMBER(iLocal_431[iVar0], iLocal_176, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_431[iVar0]);
					}
					if (!__LIB_0__::func_491(iLocal_434[iVar0], 1041577989))
					{
						TASK::CLEAR_PED_TASKS(iLocal_431[iVar0], true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_431[iVar0], false);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_627, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_627);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_627, joaat("REL_GANG_DUTCHS"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), iLocal_627);
						if (func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1))
						{
							PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 41, 6f);
						}
						TASK::TASK_COMBAT_PED(iLocal_431[iVar0], Global_35, 0, 0);
						func_934(iVar0, iLocal_1286[iVar0], 5);
					}
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 8);
				}
				break;
			case 5:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
				{
					if (!__LIB_14__::func_124(8))
					{
						if (__LIB_0__::func_665(iLocal_431[iVar0], Global_35, 0, 1) > 120f)
						{
							func_934(iVar0, iLocal_1286[iVar0], 8);
						}
					}
					if (__LIB_0__::func_94(iLocal_431[iVar0], vLocal_973, 0) < 50f)
					{
						if (__LIB_0__::func_71(iLocal_431[iVar0]))
						{
							if (func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1))
							{
								PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 41, 50f);
							}
							if (!__LIB_0__::func_491(iLocal_431[iVar0], 501393341))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_434[iVar0]))
								{
									TASK::TASK_HORSE_ACTION(iLocal_434[iVar0], 3, 0, 0);
								}
								TASK::CLEAR_PED_TASKS(iLocal_431[iVar0], true, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_431[iVar0], true);
								TASK::TASK_DISMOUNT_ANIMAL(iLocal_431[iVar0], 805306368, 0, 0, 0, 0);
								func_934(iVar0, iLocal_1286[iVar0], 6);
							}
						}
						else
						{
							__LIB_11__::func_430(iLocal_434[iVar0], Global_35);
							func_934(iVar0, iLocal_1286[iVar0], 6);
						}
					}
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 8);
				}
				break;
			case 6:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
				{
					if (!__LIB_0__::func_71(iLocal_431[iVar0]))
					{
						if (!__LIB_0__::func_491(iLocal_431[iVar0], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_431[iVar0], vLocal_795[iVar0 /*3*/], 3f, -1, 0.25f, 0, 40000f);
						}
						else if (__LIB_0__::func_94(iLocal_431[iVar0], vLocal_795[iVar0 /*3*/], 0) < fLocal_171)
						{
							if (func_827(&(uLocal_122[iVar0]), &(vLocal_795[iVar0 /*3*/]), &(fLocal_802[iVar0]), iLocal_141[iVar0], iLocal_138[iVar0], &(uLocal_1224[iVar0]), sLocal_662[iVar0]))
							{
								func_828(&(iLocal_431[iVar0]), &(uLocal_1224[iVar0]), &(uLocal_122[iVar0]));
								func_934(iVar0, iLocal_1286[iVar0], 7);
							}
						}
					}
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 8);
				}
				break;
			case 7:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
				{
					if (!__LIB_0__::func_71(iLocal_431[iVar0]))
					{
						if (!iLocal_74[iVar0])
						{
							__LIB_11__::func_430(iLocal_434[iVar0], Global_35);
							iLocal_74[iVar0] = 1;
						}
						if (func_221(21))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 5, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 17, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 0, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 12, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 44, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 57, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 71, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 115, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iVar0], 50, false);
							func_934(iVar0, iLocal_1286[iVar0], 8);
						}
					}
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 8);
				}
				break;
			case 8:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]) && !PED::_IS_PED_HOGTIED(iLocal_431[iVar0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_431[iVar0], true, false);
					TASK::TASK_SMART_FLEE_PED(iLocal_431[iVar0], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				__LIB_0__::func_172(uLocal_1224[iVar0]);
				__LIB_2__::func_788(&(iLocal_431[iVar0]), 1, 0, 1);
				__LIB_0__::func_325(&(iLocal_32[iVar0]));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_434[iVar0]))
				{
					__LIB_13__::func_586(&(iLocal_434[iVar0]), &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 0, 1, 1, 1, 0, 0);
				}
				__LIB_2__::func_788(&(iLocal_434[iVar0]), 1, 0, 1);
				if (__LIB_14__::func_124(8))
				{
					func_934(iVar0, iLocal_1286[iVar0], 9);
				}
				else
				{
					func_934(iVar0, iLocal_1286[iVar0], 2);
				}
				break;
			case 9:
				break;
		}
		iVar0++;
	}
}

void func_390(var uParam0)
{
	if (iLocal_1332 != 7 && iLocal_1332 != 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_457) && PED::_IS_PED_HOGTIED(iLocal_457))
		{
			iLocal_1332 = 7;
		}
	}
	switch (iLocal_1332)
	{
		case 0:
			if (iLocal_1284 > 8 && iLocal_1284 < 12)
			{
				if (func_946(uParam0))
				{
					if (func_947(uParam0))
					{
						if (!PED::IS_PED_ON_MOUNT(iLocal_457))
						{
							PED::_SET_PED_ON_MOUNT(iLocal_457, iLocal_458, -1, true);
						}
						func_948(iLocal_1332, 1);
					}
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
			{
				if (func_825() < 130f)
				{
					if (func_221(4))
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_42))
						{
							iLocal_42 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_457);
							MAP::_BLIP_SET_MODIFIER(iLocal_42, -1034486097);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_458))
						{
							TASK::CLEAR_PED_TASKS(iLocal_458, true, false);
						}
						if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_457, iLocal_206, 0, false))
						{
							__LIB_1__::func_766(iLocal_457, iLocal_206, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_457, iLocal_627);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(iLocal_457, vLocal_1115, Global_36, 2.001f, true, 30f, 2f, true, 0, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						func_948(iLocal_1332, 2);
					}
				}
			}
			else
			{
				iLocal_1332 = 7;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
			{
				if (func_825() < __LIB_0__::func_94(iLocal_457, vLocal_973, 0))
				{
					TASK::TASK_COMBAT_PED(iLocal_457, Global_35, 0, 0);
					func_948(iLocal_1332, 3);
				}
			}
			else
			{
				func_948(iLocal_1332, 7);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
			{
				if (__LIB_0__::func_94(iLocal_457, vLocal_973, 0) < 50f)
				{
					if (__LIB_0__::func_71(iLocal_457))
					{
						if (!__LIB_0__::func_491(iLocal_457, 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(iLocal_457, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						__LIB_11__::func_430(iLocal_458, Global_35);
						__LIB_2__::func_788(&iLocal_458, 1, 0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_457, vLocal_1118, 3f, -1, 0.25f, 0, 40000f);
						func_948(iLocal_1332, 4);
					}
				}
				else if (!__LIB_0__::func_491(iLocal_457, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_457, vLocal_1118, 3f, -1, 0.25f, 0, 40000f);
				}
			}
			else
			{
				func_948(iLocal_1332, 7);
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
			{
				if (__LIB_0__::func_94(iLocal_457, vLocal_1118, 0) < 3f)
				{
					if (func_827(&uLocal_125, &vLocal_1118, &fLocal_1121, 3, 1, &iLocal_1227, cLocal_643))
					{
						func_828(&iLocal_457, &iLocal_1227, &uLocal_125);
						func_948(iLocal_1332, 5);
					}
				}
			}
			else
			{
				func_948(iLocal_1332, 7);
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
			{
				if (func_221(21))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_457, 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_457, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_457, 115, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_457, 50, false);
					func_948(iLocal_1332, 6);
				}
			}
			else
			{
				func_948(iLocal_1332, 7);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
			{
				TASK::CLEAR_PED_TASKS(iLocal_457, true, false);
				if (!PED::_IS_PED_HOGTIED(iLocal_457))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_457, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					func_948(iLocal_1332, 7);
				}
			}
			else
			{
				func_948(iLocal_1332, 7);
			}
			break;
		case 7:
			__LIB_11__::func_750(iLocal_458, Global_35, 1);
			__LIB_11__::func_430(iLocal_458, Global_35);
			__LIB_0__::func_325(&iLocal_42);
			__LIB_2__::func_788(&iLocal_457, 1, 0, 1);
			func_948(iLocal_1332, 8);
			break;
		case 8:
			break;
	}
}

void func_391()
{
	if (func_221(10))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 104, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 104, true);
	}
}

void func_392()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (iLocal_1336 != 6)
	{
		if (iLocal_1284 > 5)
		{
			func_950(iLocal_1336, 5);
		}
	}
	switch (iLocal_1336)
	{
		case 0:
			if (__LIB_0__::func_41(iVar0) >= 20 || __LIB_0__::func_41(iVar0) < 5)
			{
				func_950(iLocal_1336, 1);
			}
			if (__LIB_0__::func_41(iVar0) >= 5 && __LIB_0__::func_41(iVar0) < 6)
			{
				func_950(iLocal_1336, 1);
			}
			if (__LIB_0__::func_41(iVar0) >= 6 && __LIB_0__::func_41(iVar0) < 17)
			{
				func_950(iLocal_1336, 2);
			}
			if (__LIB_0__::func_41(iVar0) >= 17 && __LIB_0__::func_41(iVar0) < 20)
			{
				func_950(iLocal_1336, 2);
			}
			break;
		case 1:
			if (__LIB_0__::func_41(iVar0) < 6)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(1000);
			}
			else
			{
				func_950(iLocal_1336, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_41(iVar0) < 16 && __LIB_0__::func_42(iVar0) < 59)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			}
			else
			{
				func_950(iLocal_1336, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_707(joaat("DOCUMENT_RSAD_PEARSONS_LETTER"), 1, 0))
			{
				__LIB_9__::func_96(16, 59, 0, 1);
			}
			else
			{
				func_950(iLocal_1336, 5);
			}
			break;
		case 5:
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			func_950(iLocal_1336, 6);
			break;
		case 6:
			break;
	}
}

void func_393()
{
	if (!bLocal_45)
	{
		if ((__LIB_0__::func_12() != 98 && iLocal_1284 >= 2) && ((iLocal_1284 <= 8 && !func_221(4)) && !bLocal_58))
		{
			__LIB_0__::func_267(1);
			LAW::_0x4B52BF96E225D230(1);
			bLocal_45 = true;
		}
	}
	else
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_HASSLE"), 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_LOITERING"), 0, 0, -1);
		if ((iLocal_1284 > 7 && iLocal_1284 != 4) || __LIB_0__::func_12() == 98)
		{
			if ((func_221(4) || bLocal_58) || __LIB_0__::func_12() == 98)
			{
				__LIB_0__::func_267(0);
				bLocal_45 = false;
			}
		}
	}
}

void func_394()
{
	if (iLocal_1284 >= 6)
	{
		if (STREAMING::_0x8A3945405B31048F() > 0.9f)
		{
			__LIB_5__::func_521(0.9f);
		}
	}
}

void func_395()
{
	if (iLocal_1284 != 4)
	{
		if (iLocal_1284 >= 5 && iLocal_1284 < 7)
		{
			if (!__LIB_3__::func_339(26))
			{
				__LIB_4__::func_932(26, 1);
			}
		}
		else if (__LIB_3__::func_339(26))
		{
			__LIB_4__::func_932(26, 0);
		}
	}
}

void func_397()
{
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false))
	{
		if (__LIB_0__::func_12() == 98)
		{
			if (!bLocal_66)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 6f);
				bLocal_66 = true;
			}
		}
		else if (bLocal_66)
		{
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 50f);
			bLocal_66 = false;
		}
	}
}

void func_399()
{
	__LIB_3__::func_229(111);
	__LIB_3__::func_229(112);
	__LIB_3__::func_229(113);
	__LIB_3__::func_229(114);
}

void func_400()
{
	switch (iLocal_1344)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, 1069.029f, -1132.643f, 66.2821f, 1) < 150f)
			{
				if (__LIB_11__::func_412(28, 1069.029f, -1132.643f, 66.2821f, 0f, 0f, -15.12f, 1, 0, 0, 0, 0, 0, 2))
				{
					iLocal_1344 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, 1144.956f, -1135.43f, 72.335f, 1) < 60f)
			{
				if (__LIB_11__::func_412(102, 1144.956f, -1135.43f, 72.335f, 0f, 0f, -177.84f, 1, 0, 1, 0, 0, 0, -1))
				{
					iLocal_1344 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_94(Global_35, 1266.529f, -1234.9f, 78.9031f, 1) < 125f)
			{
				if (__LIB_11__::func_412(7, 1265.529f, -1234.9f, 78.9031f, 0f, 0f, 97.2f, 1, 0, 1, 0, 0, 0, -1))
				{
					iLocal_1344 = 4;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_94(Global_35, 1304.35f, -1281.556f, 74.8753f, 1) < 115f)
			{
				if (__LIB_11__::func_412(38, 1304.35f, -1281.556f, 74.8753f, 0f, 0f, 128.16f, 1, 0, 1, 0, 0, 0, -1))
				{
					iLocal_1344 = 4;
				}
			}
			break;
		case 4:
			return;
	}
}

void func_401()
{
	switch (iLocal_1317)
	{
		case 0:
			if (func_808(0, 0, 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[0], "MrsAdler", iLocal_430, 0);
				func_956(iLocal_1317, 1);
			}
			break;
		case 1:
			if (!func_781(10))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_393))
				{
					iLocal_393 = OBJECT::CREATE_OBJECT(iLocal_348, vLocal_774, true, true, false, false, true);
				}
				else if (TXD::_DOES_STREAMED_TXD_EXIST(joaat("UI_LETTER_SADIE_ENVELOPE")))
				{
					if (TXD::_HAS_STREAMED_TXD_LOADED(joaat("UI_LETTER_SADIE_ENVELOPE")))
					{
						OBJECT::_SET_APPLY_OBJECT_TXD(iLocal_393, joaat("UI_LETTER_SADIE_ENVELOPE"), 0, 0);
						func_760(10);
					}
					else
					{
						TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_SADIE_ENVELOPE"), false);
					}
				}
				else
				{
					TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_SADIE_ENVELOPE"), false);
				}
			}
			if (!func_781(9))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_394))
				{
					iLocal_394 = OBJECT::CREATE_OBJECT(iLocal_347, vLocal_774, true, true, false, false, true);
				}
				else if (TXD::_DOES_STREAMED_TXD_EXIST(joaat("UI_LETTER_SADIE")))
				{
					if (TXD::_HAS_STREAMED_TXD_LOADED(joaat("UI_LETTER_SADIE")))
					{
						OBJECT::_SET_APPLY_OBJECT_TXD(iLocal_394, joaat("UI_LETTER_SADIE"), 0, 0);
						func_760(9);
					}
					else
					{
						TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_SADIE"), false);
					}
				}
				else
				{
					TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_SADIE"), false);
				}
			}
			if (func_781(10) && func_781(10))
			{
				func_956(iLocal_1317, 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[0], true, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_394) && ENTITY::DOES_ENTITY_EXIST(iLocal_393))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[0], "P_CS_RT_LETTERL_DBL", iLocal_394, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[0], "p_cs_RT_envelope01x", iLocal_393, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[0], "arthur", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[0], "wagon", iLocal_760, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_348);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_347);
					func_956(iLocal_1317, 3);
				}
			}
			break;
		case 3:
			if (((!ENTITY::IS_ENTITY_DEAD(iLocal_760) && __LIB_2__::func_343(Global_35, iLocal_760, 0)) && iLocal_1284 > 1) && BUILTIN::VDIST(Global_36, vLocal_774) > 10f)
			{
				if (!func_221(10))
				{
					func_329(10);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_1304[0], 0f, 0f, 0f, 0f, 0f, 0f, 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_1304[0], iLocal_760, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_760, "seat_front"));
					func_956(iLocal_1317, 4);
				}
			}
			break;
		case 4:
			if (!__LIB_4__::func_68("SAD1_GOSTORE", 1))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[0]);
				func_956(iLocal_1317, 5);
			}
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PREV_WEAPON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_WEAPON"), false);
			if (((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[0], false) || func_221(15)) || !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false)) || !PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
			{
				__LIB_1__::func_951(&iLocal_394);
				__LIB_1__::func_951(&iLocal_393);
				__LIB_14__::func_145(iLocal_1304[0]);
				if (func_221(10))
				{
					func_385(10);
				}
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
				func_956(iLocal_1317, 6);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			}
			break;
		case 6:
			break;
	}
}

void func_402()
{
	float fVar0;
	switch (iLocal_1318)
	{
		case 0:
			if (func_808(1, 0, "PBL_ACTION", 1))
			{
				func_957(iLocal_1318, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[1], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[1], "arthur", Global_35, 0);
				func_957(iLocal_1318, 2);
			}
			break;
		case 2:
			if (func_221(15))
			{
				__LIB_14__::func_144(1);
				__LIB_0__::func_325(&iLocal_31);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_760, true);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_1304[1], iLocal_760, -1);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_1304[1], 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[1]);
				func_957(iLocal_1318, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[1], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_760, false);
				__LIB_14__::func_125();
				__LIB_14__::func_145(iLocal_1304[1]);
				if (func_221(10))
				{
					func_385(10);
				}
				func_957(iLocal_1318, 4);
			}
			else
			{
				func_958();
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1304[1]);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				if (!bLocal_70)
				{
					if (fVar0 > 0.75f)
					{
						__LIB_14__::func_125();
						bLocal_70 = true;
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_403(var uParam0)
{
	int iVar0;
	func_959();
	if (((!__LIB_6__::func_904() && !__LIB_11__::func_21(iLocal_1304[0])) && !__LIB_0__::func_270()) && !ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		if (!__LIB_0__::func_75(&uLocal_682))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_760);
			if (iVar0 < (iLocal_178 - 5))
			{
				if (__LIB_12__::func_876(uParam0, "RSAD1_DMAGE", 0))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_760);
				}
				iLocal_178 = iVar0;
				__LIB_1__::func_148(&uLocal_682);
			}
		}
		else if (__LIB_0__::func_265(&uLocal_682) > 8f)
		{
			__LIB_0__::func_37(&uLocal_682);
		}
	}
}

void func_404(int iParam0)
{
	if (!__LIB_0__::func_75(&uLocal_748))
	{
		if (func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1))
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_760) <= 0f)
			{
				__LIB_1__::func_148(&uLocal_748);
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_748);
		}
	}
	else if (func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1) && ENTITY::GET_ENTITY_SPEED(iLocal_760) <= 0f)
	{
		if (__LIB_0__::func_264(&uLocal_748) > 30f)
		{
			__LIB_1__::func_422(Local_1347[iParam0 /*9*/].f_2, 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_0__::func_37(&uLocal_748);
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_748);
	}
}

bool func_405()
{
	float fVar0;
	func_961();
	switch (iLocal_1324)
	{
		case 0:
			fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), vLocal_960);
			if (fVar0 <= 10f)
			{
				iLocal_1324 = 1;
			}
			else if (fVar0 <= 20f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 5f);
			}
			else if (fVar0 <= 40f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 7f);
			}
			else if (fVar0 <= 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 10f);
			}
			break;
		case 1:
			fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), vLocal_963);
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 2f);
			if ((fVar0 < (2f + 4f) && __LIB_6__::func_142(0, 2f, 3, 1056964608 /* Float: 0.5f */)) || (fVar0 < (2f + 8f) && ENTITY::GET_ENTITY_SPEED(iLocal_760) <= 0f))
			{
				iLocal_1324 = 2;
			}
			else if (__LIB_0__::func_265(&uLocal_714) > 10f)
			{
				iLocal_1324 = 2;
			}
			break;
		case 2:
			__LIB_5__::func_782(0);
			if (__LIB_0__::func_75(&uLocal_714))
			{
				__LIB_0__::func_37(&uLocal_714);
			}
			if (__LIB_0__::func_491(Global_35, 1435919172))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
	}
	return false;
}

void func_408()
{
	if (__LIB_14__::func_124(2))
	{
		PED::_0x2B4CE170DE09F346(iLocal_430, joaat("RSAD1_RIDE1"));
		AUDIO::_0x660A8F876DF1D4F8(21);
		__LIB_18__::func_766(2);
	}
}

void func_409(var uParam0, float fParam1, float fParam2)
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
			if (__LIB_0__::func_265(&(uParam0->f_3)) > fParam2)
			{
				if (fParam1 > 0f)
				{
					if (BUILTIN::VDIST(uParam0->f_6, Global_36) < fParam1)
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

void func_414(var uParam0)
{
	int iVar0;
	func_968();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (iLocal_1292[iVar0])
		{
			case 0:
				if (func_221(15))
				{
					if (func_969(uParam0, iVar0))
					{
						iLocal_1292[iVar0] = 1;
					}
				}
				break;
			case 1:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_438[iVar0]))
				{
					if (func_970())
					{
						if (iVar0 == 0)
						{
							if (func_971())
							{
								iLocal_1292[iVar0] = 2;
							}
						}
						if (iVar0 == 1)
						{
							if (func_972())
							{
								func_973(iLocal_438[0]);
								iLocal_1292[iVar0] = 2;
							}
						}
					}
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_438[iVar0]))
				{
					if (iVar0 == 1)
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_438[1], &Local_211);
					}
					if (iVar0 == 0)
					{
						if (__LIB_0__::func_48(Global_35, iLocal_438[iVar0], 18f, 1))
						{
							if (__LIB_12__::func_876(uParam0, "RSAD1_PACKTALK", 0))
							{
								bLocal_1456 = true;
								iLocal_1292[iVar0] = 4;
							}
						}
					}
					else
					{
						iLocal_1292[iVar0] = 4;
					}
				}
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_438[iVar0]))
				{
					if (iVar0 == 1)
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_438[1], &Local_211);
					}
					if (bLocal_1456)
					{
						if (__LIB_6__::func_903("RSAD1_PACKTALK"))
						{
							if (!__LIB_0__::func_48(Global_35, iLocal_438[0], 20f, 1) || PED::_0x947E43F544B6AB34(iLocal_438[iVar0], PLAYER::PLAYER_ID(), 10, 400))
							{
								__LIB_6__::func_900("RSAD1_PACKTALK", 1, 0);
							}
						}
						if (!__LIB_0__::func_491(iLocal_438[iVar0], iLocal_637[iVar0]) || !__LIB_0__::func_48(Global_35, iLocal_438[iVar0], 50f, 1))
						{
							TASK::TASK_WANDER_STANDARD(iLocal_438[iVar0], 40000f, 1);
							PED::SET_PED_KEEP_TASK(iLocal_438[iVar0], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_438[iVar0]));
							iLocal_1292[iVar0] = 6;
						}
					}
				}
				break;
			case 6:
				break;
		}
		iVar0++;
	}
}

bool func_416(var uParam0)
{
	func_975(uParam0);
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (!func_221(28))
	{
		func_385(28);
	}
	if (!func_221(26))
	{
		if (((PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, -1) == Global_35) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, 0) == iLocal_430)
		{
			iLocal_1335 = 0;
			__LIB_0__::func_37(&uLocal_679);
			return true;
		}
	}
	else if (((PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, 0) == Global_35) && PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, -1) == iLocal_430)
	{
		iLocal_1335 = 0;
		__LIB_0__::func_37(&uLocal_679);
		return true;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_760, 0) && !TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_760))
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_760);
	}
	if (!PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
	{
		if (!__LIB_0__::func_491(iLocal_430, -1794415470))
		{
			if (!func_221(26))
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_430, iLocal_760, -1, 0, 1.5f, 1, 0);
			}
			else
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_430, iLocal_760, -1, -1, 1.5f, 1, 0);
			}
		}
	}
	else if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
	{
		if (iLocal_1285 == 13 || iLocal_1285 == 14)
		{
			func_976();
		}
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
	{
		if (__LIB_4__::func_68("SAD1_BACKON", 1))
		{
			__LIB_1__::func_390("SAD1_BACKON", 1);
		}
		if (iLocal_1254[2] != 0)
		{
			iLocal_1254[2] = 0;
		}
	}
	else
	{
		func_215(2, ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), "SAD1_BACKON", 75f);
		if (MAP::DOES_BLIP_EXIST(iLocal_31))
		{
			__LIB_0__::func_325(&iLocal_31);
		}
	}
	return false;
}

void func_417(var uParam0)
{
	switch (iLocal_1249)
	{
		case 0:
			if (!__LIB_6__::func_904() && !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				if (__LIB_3__::func_996(Global_35) && !bLocal_43)
				{
					__LIB_0__::func_37(&uLocal_757);
					if (__LIB_12__::func_876(uParam0, "RSAD1_LOOTER", 0))
					{
						bLocal_43 = true;
					}
				}
				else if (!__LIB_0__::func_75(&uLocal_757))
				{
					__LIB_1__::func_148(&uLocal_757);
				}
				else if (__LIB_0__::func_264(&uLocal_757) > 4f)
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_SKEDADDLE", 0))
					{
						__LIB_0__::func_37(&uLocal_757);
						iLocal_202++;
						if (iLocal_202 >= 3)
						{
							iLocal_1249 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_418()
{
	switch (iLocal_1345)
	{
		case 0:
			iLocal_1345 = 1;
			break;
		case 1:
			return;
	}
}

bool func_420(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!__LIB_0__::func_27(iLocal_198, 0) && !ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_1__::func_683(&iLocal_198, 0);
		*iParam0 = VEHICLE::_CREATE_MISSION_TRAIN(-156591884, vParam1, bParam4, false, true, true);
		return false;
	}
	else if (!__LIB_0__::func_27(iLocal_198, 1))
	{
		if (VEHICLE::_0xBD3C4A2ED509205E(*iParam0))
		{
			__LIB_1__::func_683(&iLocal_198, 1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(*iParam0, 0f);
			return true;
		}
		return false;
	}
	return true;
}

void func_422()
{
	float fVar0;
	if (MAP::DOES_BLIP_EXIST(iLocal_31))
	{
		fVar0 = BUILTIN::VDIST(Global_36, vLocal_966);
		if (bLocal_52)
		{
			if (fVar0 < 20f)
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_31, -1878373110);
				bLocal_52 = false;
			}
		}
		else if (fVar0 >= 20f)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_31, -1878373110);
			bLocal_52 = true;
		}
	}
}

void func_423(var uParam0)
{
	func_979(uParam0, 74, iLocal_182);
	if (!__LIB_14__::func_124(18))
	{
		if (__LIB_14__::func_124(17))
		{
			if (!__LIB_0__::func_75(&uLocal_730))
			{
				__LIB_1__::func_148(&uLocal_730);
			}
			else if (__LIB_0__::func_264(&uLocal_730) > 4f)
			{
				__LIB_3__::func_820(28, 0);
				__LIB_4__::func_932(28, 1);
				__LIB_18__::func_765(18);
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_430, false))
	{
		switch (iLocal_1296)
		{
			case 0:
				if (__LIB_0__::func_399(iLocal_430, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					if (!__LIB_0__::func_491(iLocal_430, 716706914))
					{
						WEAPON::_0x94A3C1B804D291EC(iLocal_430, 0, 0, 0, 0);
						TASK::TASK_SWAP_WEAPON(iLocal_430, 0, 0, 0, 0);
					}
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_430, vLocal_1010[iLocal_180 /*3*/], 1f, -1, 0.5f, 512, fLocal_1023[iLocal_180]);
					func_980(iLocal_1296, 1);
				}
				break;
			case 1:
				if (__LIB_0__::func_94(iLocal_430, vLocal_1010[iLocal_180 /*3*/], 0) < 0.75f)
				{
					if (!__LIB_0__::func_491(iLocal_430, 713668775))
					{
						if (__LIB_14__::func_147(Global_35, "room_lower") && !PED::_0x3BDFCF25B58B0415(iLocal_442[iLocal_182]))
						{
							if (!__LIB_6__::func_904())
							{
								if (__LIB_12__::func_876(uParam0, "RSAD1_SKPR", 0))
								{
									func_980(iLocal_1296, 2);
								}
							}
						}
					}
				}
				else if (!__LIB_0__::func_491(iLocal_430, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_430, vLocal_1010[iLocal_180 /*3*/], 1f, -1, 0.5f, 512, fLocal_1023[iLocal_180]);
				}
				break;
			case 2:
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_430, &Local_261);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_442[iLocal_182], &Local_286);
				if (PED::_0x3BDFCF25B58B0415(iLocal_442[iLocal_182]))
				{
					__LIB_5__::func_20(0, 0);
					func_982();
					func_980(iLocal_1296, 5);
				}
				if (!__LIB_6__::func_903("RSAD1_SKPR"))
				{
					__LIB_18__::func_765(17);
					func_982();
					func_980(iLocal_1296, 5);
				}
				break;
			case 3:
				if (func_983(uParam0))
				{
					if (__LIB_0__::func_94(iLocal_430, vLocal_1010[iLocal_180 /*3*/], 0) < 0.75f)
					{
						__LIB_1__::func_148(&uLocal_702);
						func_980(iLocal_1296, 4);
					}
				}
				break;
			case 4:
				if (func_983(uParam0))
				{
					if (__LIB_0__::func_265(&uLocal_702) > 7f)
					{
						__LIB_0__::func_37(&uLocal_702);
						func_982();
						func_980(iLocal_1296, 5);
					}
				}
				break;
			case 5:
				if (func_983(uParam0))
				{
					if (__LIB_0__::func_94(iLocal_430, vLocal_1010[iLocal_180 /*3*/], 0) < 0.75f)
					{
						__LIB_1__::func_148(&uLocal_702);
						func_980(iLocal_1296, 6);
					}
				}
				break;
			case 6:
				if (func_983(uParam0))
				{
					if (__LIB_0__::func_265(&uLocal_702) > 10f)
					{
						if (BUILTIN::VDIST(Global_36, vLocal_1010[0 /*3*/]) > 2f)
						{
							iLocal_180 = 0;
							__LIB_0__::func_37(&uLocal_702);
							__LIB_2__::func_915(iLocal_430, joaat("WORLD_HUMAN_SHOP_BROWSE"), vLocal_1010[iLocal_180 /*3*/], fLocal_1023[iLocal_180], -1, 1, 0, 0, -1082130432 /* Float: -1f */);
							func_980(iLocal_1296, 3);
						}
						else
						{
							func_980(iLocal_1296, 4);
						}
					}
				}
				break;
		}
	}
}

bool func_424(var uParam0)
{
	func_985();
	if (!bLocal_72)
	{
		if (func_986() || __LIB_4__::func_852(2))
		{
			if (__LIB_12__::func_876(uParam0, "RSAD1_LPOST", 0))
			{
				bLocal_72 = true;
			}
		}
	}
	switch (iLocal_1291)
	{
		case 0:
			if (!__LIB_0__::func_396(Global_35))
			{
				iLocal_1291 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_588(Local_1347[1 /*9*/].f_2, 0, 0, -1, -1, 0))
			{
				if (__LIB_14__::func_147(Global_35, "room_station"))
				{
					__LIB_0__::func_769();
				}
				else
				{
					func_409(&(Local_1347[1 /*9*/]), 0, 0);
				}
			}
			else if (!__LIB_14__::func_147(Global_35, "room_station"))
			{
				__LIB_13__::func_89(uParam0, Local_1347[1 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			if (__LIB_4__::func_852(2))
			{
				__LIB_1__::func_390("SAD1_POSTHELP2", 1);
				__LIB_1__::func_390("SAD1_POSTHELP3", 1);
				__LIB_0__::func_105(1);
				iLocal_1291 = 2;
			}
			break;
		case 2:
			if ((func_335() && func_337()) && !__LIB_4__::func_852(2))
			{
				if (!__LIB_1__::func_707(joaat("DOCUMENT_RSAD_PEARSONS_LETTER"), 1, 0))
				{
					func_990();
					iLocal_1291 = 4;
				}
				else
				{
					__LIB_0__::func_45("SAD1_BLIPHLP3", 7500, 0, 0, 0, 1);
					iLocal_1291 = 1;
				}
			}
			break;
		case 4:
			if (func_336())
			{
				if (__LIB_8__::func_684("RSAD1_LPOST"))
				{
					__LIB_6__::func_900("RSAD1_LPOST", 1, 0);
				}
				else if (__LIB_12__::func_876(uParam0, "RSAD1_LTHANKS", 0))
				{
					return true;
				}
			}
			break;
		case 3:
			break;
	}
	return false;
}

bool func_425(bool bParam0)
{
	bool bVar0;
	if (__LIB_14__::func_124(0))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		return false;
	}
	bVar0 = true;
	if (__LIB_14__::func_124(1))
	{
		PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_760);
		__LIB_18__::func_766(1);
	}
	if (!PROPSET::_REQUEST_PROPSET(iLocal_184))
	{
		bVar0 = false;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_184))
	{
		bVar0 = false;
	}
	if (PROPSET::_HAS_PROPSET_LOADED(iLocal_184))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_760, iLocal_184);
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_760))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (bParam0)
		{
			if (!func_992())
			{
				bVar0 = false;
			}
			else
			{
				func_816(&iLocal_146, 0);
				func_816(&iLocal_145, 0);
				AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_760, 0, 1, -1);
				__LIB_18__::func_765(0);
			}
		}
		else
		{
			AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_760, 0, 1, -1);
			__LIB_18__::func_765(0);
		}
	}
	return bVar0;
}

bool func_426()
{
	__LIB_1__::func_288(11, 1205492208, 1);
	PED::_SET_PED_BODY_COMPONENT(iLocal_430, 1598276604);
	PED::_UPDATE_PED_VARIATION(iLocal_430, false, true, true, true, false);
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_430, iLocal_208, 0, false))
	{
		iLocal_208 = WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_430, iLocal_208, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		return false;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_430, iLocal_209, 0, false))
	{
		iLocal_209 = WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_430, iLocal_209, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		return false;
	}
	return true;
}

void func_428()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[iLocal_182]) && __LIB_0__::func_117(74, 1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_442[iLocal_182], true))
		{
			__LIB_2__::func_753(74, 0, 1, 0, 0);
		}
	}
}

void func_429()
{
	switch (iLocal_1346)
	{
		case 0:
			if (__LIB_11__::func_412(7, 1304.868f, -1297.963f, 75.4219f, 0f, 0f, 228.96f, 1, 0, 1, 0, 0, 0, -1))
			{
				iLocal_1346 = 1;
			}
			break;
		case 1:
			if (__LIB_11__::func_412(2, 1304.35f, -1278.41f, 74.91f, 0f, 0f, -35.28f, 1, 0, 1, 0, 0, 0, -1))
			{
				iLocal_1346 = 2;
			}
			break;
		case 2:
			return;
	}
}

void func_430()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1244))
	{
		iLocal_1244 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_1176, vLocal_1179, vLocal_1182, "TRAIN_STATION_BLOCKER");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1244))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_1244, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1244, 0, 0, 0, -1, -1, 0);
		__LIB_0__::func_566(iLocal_1244, 0);
	}
}

void func_436(var uParam0)
{
	switch (iLocal_1323)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[1]))
			{
				if (func_808(2, 0, 0, 0))
				{
					iLocal_1323 = 1;
				}
			}
			break;
		case 1:
			if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[2], true, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_431[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_431[1]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[2], "G_M_M_UNICRIMINALS_01^1", iLocal_431[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[2], "G_M_M_UNICRIMINALS_01", iLocal_431[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[2], "MrsAdler", iLocal_430, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[2], "arthur", Global_35, 0);
				iLocal_1323 = 2;
			}
			break;
		case 2:
			if (!func_221(4))
			{
				if (func_221(16))
				{
					iLocal_210 = __LIB_0__::func_399(Global_35, 1, 0, 0);
					if (iLocal_210 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						bLocal_73 = true;
					}
					if (__LIB_6__::func_903("RSAD_BANT1"))
					{
						__LIB_6__::func_900("RSAD_BANT1", 0, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_1304[2], ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_760, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(iLocal_1304[2], iLocal_760, -1);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1304[2]);
					iLocal_1323 = 3;
				}
			}
			else
			{
				iLocal_1323 = 3;
			}
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (__LIB_11__::func_21(iLocal_1304[2]))
			{
				if (!func_221(17))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_1304[2]) >= 26f)
					{
						TASK::TASK_HORSE_ACTION(iLocal_434[1], 1, Global_35, 0);
						func_329(17);
					}
				}
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1304[2]) || func_221(4)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1304[2]) > 0.91f)
			{
				__LIB_14__::func_145(iLocal_1304[2]);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_430);
				iLocal_1323 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_437()
{
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_760) && !ENTITY::IS_ENTITY_DEAD(iLocal_430)) && __LIB_0__::func_491(iLocal_430, -235832601)) && !TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_760))
	{
		if (iLocal_1284 == 8)
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_760, 3f);
		}
		else if (iLocal_1284 == 9)
		{
			if (__LIB_0__::func_94(iLocal_760, vLocal_973, 0) < 20f)
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_760, 3f);
			}
			else
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_760, 11f);
			}
		}
		else if (iLocal_1284 == 10)
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_760, 3f);
		}
		func_999();
	}
}

void func_438(var uParam0)
{
	switch (iLocal_1338)
	{
		case 0:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				if (!bLocal_51)
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_ADVI", 0))
					{
						iLocal_1338 = 1;
					}
				}
				else
				{
					iLocal_1338 = 1;
				}
			}
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true) && !__LIB_6__::func_904())
			{
				if (!__LIB_0__::func_75(&uLocal_714))
				{
					__LIB_1__::func_148(&uLocal_714);
				}
				else if (__LIB_0__::func_264(&uLocal_714) > 0.5f)
				{
					if (__LIB_12__::func_876(uParam0, "RSAD_BANT1", 0))
					{
						__LIB_0__::func_37(&uLocal_714);
						iLocal_1338 = 2;
					}
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				if (__LIB_6__::func_903("RSAD_BANT1"))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RSAD_BANT1") >= 11)
					{
						__LIB_18__::func_767(17, 11, 1);
						iLocal_1338 = 4;
					}
				}
			}
			else
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION("RSAD_BANT1", true, false, false, false);
				iLocal_1338 = 3;
			}
			break;
		case 3:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true) && AUDIO::_0xD89504D9D7D5057D("RSAD_BANT1"))
			{
				if (AUDIO::_0xF01C570E0A0A1E67("RSAD_BANT1"))
				{
					AUDIO::RESTART_SCRIPTED_CONVERSATION("RSAD_BANT1");
					iLocal_1338 = 2;
				}
			}
			break;
	}
}

void func_439()
{
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
	{
		if (!func_221(28))
		{
			if ((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_LR")) == 0f && PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_UD")) == 0f) && !func_221(16))
			{
				if (!CAM::IS_CINEMATIC_CAM_RENDERING())
				{
					if (!__LIB_0__::func_75(&uLocal_733))
					{
						__LIB_1__::func_148(&uLocal_733);
					}
					else if (__LIB_0__::func_264(&uLocal_733) > 2.5f)
					{
						__LIB_0__::func_37(&uLocal_733);
						if (!CAM::IS_CINEMATIC_CAM_RENDERING())
						{
							CAM::SET_CINEMATIC_MODE_ACTIVE(true);
						}
					}
				}
			}
			else
			{
				func_329(28);
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			}
		}
	}
}

void func_440()
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		if (bLocal_73)
		{
			iVar1 = iLocal_210;
		}
		else
		{
			iVar1 = func_1001(128, 0);
		}
		if (iVar1 != 0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, false, 0, false, false);
		}
		else
		{
			iVar1 = func_1002(128);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, false, 0, false, false);
		}
	}
}

void func_441(var uParam0)
{
	switch (iLocal_1303)
	{
		case 0:
			if (__LIB_0__::func_94(iLocal_760, vLocal_952, 0) < 120f && func_346(uParam0, vLocal_952, fLocal_955))
			{
				iLocal_1303 = 1;
			}
			break;
		case 1:
			if (func_808(3, 0, "pbl_Start", 0))
			{
				iLocal_1303 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_437))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[3], true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[3], "G_M_M_UNICRIMINALS_01", iLocal_437, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1304[3]);
					iLocal_1303 = 3;
				}
			}
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[3], "pbl_action");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[3], "pbl_action"))
			{
				if (__LIB_0__::func_665(iLocal_760, iLocal_437, 0, 1) < 75f)
				{
					iLocal_35 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_437);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[3], "pbl_action", true);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[3], "pbl_Hit");
					iLocal_1303 = 4;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[3], "pbl_Hit"))
			{
				if (__LIB_0__::func_665(iLocal_760, iLocal_437, 0, 1) < 30f)
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_437, false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[3], "Internal_loop", true, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[3], "pbl_Hit", true);
					iLocal_1303 = 5;
				}
			}
			break;
		case 5:
			if (!__LIB_14__::func_124(9))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), ENTITY::GET_ENTITY_COORDS(iLocal_437, true, false)) < 15f)
				{
					__LIB_11__::func_361(iLocal_437, "GENERIC_FRIGHTENED_HIGH", joaat("SPEECH_PARAMS_SHOUTED"), iLocal_430, 0, "0178_G_M_Y_UniExConfeds_01_WHITE_02", 0, 1);
					__LIB_18__::func_765(9);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[3], false))
			{
				__LIB_0__::func_325(&iLocal_35);
				iLocal_1303 = 6;
			}
			break;
		case 6:
			break;
	}
}

void func_444(var uParam0)
{
	func_1005();
	if (iLocal_177 < 3)
	{
		if ((!func_1006() && !__LIB_14__::func_124(8)) && !func_221(8))
		{
			if (!__LIB_0__::func_75(&uLocal_676))
			{
				__LIB_1__::func_148(&uLocal_676);
			}
			else if (__LIB_0__::func_265(&uLocal_676) > 2f)
			{
				if (func_1005() || !func_1007())
				{
					switch (iLocal_177)
					{
						case 0:
							if (!bLocal_58)
							{
								if (__LIB_12__::func_876(uParam0, "RSAD1_ABAN1", 0))
								{
									__LIB_0__::func_37(&uLocal_676);
									iLocal_177++;
								}
							}
							else
							{
								__LIB_0__::func_37(&uLocal_676);
								iLocal_177++;
							}
							break;
						case 1:
							if (__LIB_12__::func_876(uParam0, "RSAD1_ABAN3", 0))
							{
								__LIB_0__::func_37(&uLocal_676);
								iLocal_177++;
							}
							break;
					}
				}
				else if (func_1007())
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_AIDLE", 0))
					{
						__LIB_0__::func_37(&uLocal_676);
					}
				}
			}
		}
	}
}

void func_446()
{
	int iVar0;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[iVar0]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_459[iVar0], 53, true);
				PED::SET_PED_RESET_FLAG(iLocal_459[iVar0], 49, true);
				PED::SET_PED_RESET_FLAG(iLocal_459[iVar0], 95, true);
				if (!iLocal_102[iVar0])
				{
					PED::_0x2EB75FB86C41F026(iLocal_459[iVar0], 3, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_459[iVar0], 284, true);
					iLocal_102[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_447()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, -1);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false))
	{
		if (iVar3 == joaat("GROUP_PISTOL") && iVar3 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, -1))
			{
				iVar1 = (iVar2 + iVar0);
				if (iVar1 <= 0)
				{
				}
			}
		}
	}
}

void func_448(var uParam0)
{
	switch (iLocal_1300)
	{
		case 0:
			if (PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
			{
				if (!__LIB_0__::func_491(iLocal_430, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_641);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_760, 64, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_985, 1f, -1, 0.5f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_641);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_430, iLocal_641);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_641);
				}
			}
			else if (func_1008())
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_760, true);
				WEAPON::_0xA769D753922B031B(iLocal_430, 0.85f, 0.95f);
				func_339(uParam0, 0, 0);
				func_454(iLocal_1300, 2);
			}
			break;
		case 2:
			func_1009(uParam0);
			if (__LIB_5__::func_484(&uLocal_742, 20f))
			{
				__LIB_5__::func_553(iLocal_430, 1);
			}
			else
			{
				__LIB_5__::func_553(iLocal_430, 0);
			}
			if (!bLocal_50)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1228[0], true, 0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_430, false);
					PED::_0xFC3DB99C8144CD81(iLocal_430, iLocal_1228[1], 1, 0, 0);
					bLocal_50 = true;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1228[1], true, 0))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_430, false);
				PED::_0xFC3DB99C8144CD81(iLocal_430, iLocal_1228[0], 1, 0, 0);
				bLocal_50 = false;
			}
			if (!__LIB_0__::func_491(iLocal_430, -2117564886))
			{
				TASK::TASK_COMBAT_HATED_TARGETS(iLocal_430, -1f);
			}
			break;
		case 3:
			__LIB_0__::func_37(&uLocal_727);
			if (__LIB_0__::func_399(iLocal_430, 1, 0, 0) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_430, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			func_455(&iLocal_430, 0);
			ENTITY::_SET_ENTITY_HEALTH(iLocal_430, iLocal_191, 0);
			ENTITY::_SET_ENTITY_HEALTH(iLocal_430, PED::GET_PED_MAX_HEALTH(iLocal_430), 0);
			PED::SET_PED_USING_ACTION_MODE(iLocal_430, false, -1, 0);
			if (bLocal_59)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_430, vLocal_770, 1.5f, -1, 0.25f, 0, fLocal_773);
				func_454(iLocal_1300, 4);
			}
			else
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_430, iLocal_760, -1, -1, 1f, 131073, 0);
				func_454(iLocal_1300, 5);
			}
			break;
		case 4:
			if (__LIB_0__::func_399(iLocal_430, 1, 0, 0) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_430, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			if (__LIB_0__::func_94(iLocal_430, vLocal_770, 0) < 7f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_430, 1f);
			}
			iLocal_640 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_430, 713668775, true);
			if (iLocal_640 == 8)
			{
				func_454(iLocal_1300, 5);
			}
			break;
		case 5:
			break;
	}
}

bool func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!func_345())
	{
		return true;
	}
	func_1012();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]) && !PED::_IS_PED_HOGTIED(iLocal_431[iVar0])) && !TASK::IS_PED_IN_WRITHE(iLocal_431[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]) && !PED::_IS_PED_HOGTIED(iLocal_445[iVar0])) && !TASK::IS_PED_IN_WRITHE(iLocal_445[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_457) && !PED::_IS_PED_HOGTIED(iLocal_457)) && !TASK::IS_PED_IN_WRITHE(iLocal_457))
	{
		iVar1++;
	}
	if (!func_221(21))
	{
		if (iVar1 < 3)
		{
			func_329(21);
		}
	}
	if (!func_221(30))
	{
		if (iVar1 < 4)
		{
			func_1013();
			func_329(30);
		}
	}
	if (iVar1 > 0)
	{
		*iParam0 = iVar1;
		return true;
	}
	return false;
}

bool func_453(var uParam0)
{
	if (__LIB_14__::func_124(10))
	{
		if (__LIB_12__::func_876(uParam0, "RSAD1_COME", 0))
		{
			return true;
		}
	}
	else if (__LIB_12__::func_876(uParam0, "RSAD1_COME_ALT", 0))
	{
		return true;
	}
	return false;
}

void func_454(int iParam0, int iParam1)
{
	iLocal_1300 = iParam1;
}

void func_455(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 262144);
	}
	else
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 262144);
	}
}

void func_456()
{
	switch (iLocal_1301)
	{
		case 0:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_644))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_644, 0, &vLocal_1203))
				{
					__LIB_14__::func_128(1);
				}
			}
			break;
		case 1:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_645))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_645, 0, &vLocal_1206))
				{
					__LIB_14__::func_128(2);
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false))
				{
					if (BUILTIN::VDIST(Global_36, vLocal_1203) < 5f)
					{
						sLocal_650 = sLocal_644;
						PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
						__LIB_14__::func_128(3);
					}
					if (BUILTIN::VDIST(Global_36, vLocal_1206) < 5f)
					{
						PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
						sLocal_650 = sLocal_645;
						__LIB_14__::func_128(3);
					}
				}
			}
			break;
		case 3:
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_650, 1, 2f, 1f, 0);
			break;
	}
}

void func_457()
{
	switch (iLocal_1320)
	{
		case 0:
			if (func_808(5, 1, 0, 0))
			{
				iLocal_1320 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_397))
			{
				iLocal_397 = OBJECT::CREATE_OBJECT(iLocal_351, ENTITY::GET_ENTITY_COORDS(iLocal_429, true, false), true, true, false, false, true);
			}
			if (((!ENTITY::IS_ENTITY_DEAD(iLocal_429) && !ENTITY::IS_ENTITY_DEAD(iLocal_397)) && func_1019()) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[5], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[5], "p_glasstallbeer01x", iLocal_399[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[5], "p_glasstallbeer01x^1", iLocal_399[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[5], "p_glasstallbeer01x^2", iLocal_399[2], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[5], "p_cs_rag01x", iLocal_397, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[5], "MrPearson", iLocal_429, 0);
				iLocal_1320 = 2;
			}
			break;
		case 2:
			ANIMSCENE::START_ANIM_SCENE(iLocal_1304[5]);
			iLocal_1320 = 3;
			break;
		case 3:
			if (func_221(13))
			{
				__LIB_3__::func_319(iLocal_1304[5]);
				__LIB_1__::func_951(&(iLocal_399[0]));
				__LIB_1__::func_951(&(iLocal_399[1]));
				__LIB_1__::func_951(&(iLocal_399[2]));
				__LIB_1__::func_951(&iLocal_397);
				iLocal_1320 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_458()
{
	switch (iLocal_1321)
	{
		case 0:
			if (func_808(6, 0, 0, 0))
			{
				iLocal_1321 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_398))
			{
				iLocal_398 = OBJECT::CREATE_OBJECT(iLocal_351, ENTITY::GET_ENTITY_COORDS(iLocal_429, true, false), true, true, false, false, true);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_398) && func_1020()) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[6], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[6], "p_cs_rag01x", iLocal_398, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[6], "p_glasstallbeer01x", iLocal_403[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[6], "p_glasstallbeer01x^1", iLocal_403[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[6], "p_glasstallbeer01x^2", iLocal_403[2], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[6], "MrPearson", iLocal_429, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[6], "MrsAdler", iLocal_430, 0);
				iLocal_1321 = 2;
			}
			break;
		case 2:
			if (func_221(13) && !__LIB_6__::func_904())
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[6]);
				iLocal_1321 = 3;
			}
			break;
		case 3:
			if (!bLocal_54)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1304[6]) > 0.7f)
				{
					TASK::_0x4161648394262FDF(681.7018f, -1249.703f, 43.9026f, 1f);
					bLocal_54 = true;
				}
			}
			if ((!__LIB_11__::func_21(iLocal_1304[6]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[6], false)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1304[6]) > 0.9f)
			{
				iLocal_1321 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_459()
{
	int iVar0;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[iVar0]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_459[iVar0], 219, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_459[iVar0], 72, true);
				POPULATION::_0xF74E134F40192884(iLocal_459[iVar0], 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_459[iVar0], true);
			}
			iVar0++;
		}
	}
}

void func_460()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1231))
	{
		iLocal_1231 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_997, vLocal_1000, vLocal_1003, "OUT_TRIGGER");
	}
	else if (!__LIB_14__::func_124(6))
	{
		__LIB_0__::func_566(iLocal_1231, 0);
		__LIB_18__::func_765(6);
	}
	if (!__LIB_14__::func_124(7))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1235))
		{
			__LIB_0__::func_566(iLocal_1235, 0);
			__LIB_18__::func_765(7);
		}
	}
}

void func_461(var uParam0)
{
	vector3 vVar0;
	switch (iLocal_1251)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_760) && !__LIB_6__::func_903("RSAD1_PLYRDRI"))
			{
				vLocal_889 = { ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false) };
				__LIB_1__::func_148(&uLocal_751);
				iLocal_1251 = 1;
			}
			break;
		case 1:
			if (func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false) };
				if (__LIB_0__::func_264(&uLocal_751) > 3f || BUILTIN::VDIST(vVar0, vLocal_889) > 3f)
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_PATT1", 0))
					{
						__LIB_0__::func_37(&uLocal_751);
						if (!__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
						{
							iLocal_186 = func_1021();
							if (iLocal_186 == 0)
							{
								sLocal_651 = "RSAD1_PATT2";
							}
							else if (iLocal_186 < 2)
							{
								sLocal_651 = "RSAD1_PATT3";
							}
							else
							{
								sLocal_651 = "RSAD1_PATT4";
							}
						}
						else
						{
							sLocal_651 = "RSAD1_PATT5";
						}
						iLocal_1251 = 2;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_903("RSAD1_PATT1"))
			{
				if (!__LIB_0__::func_75(&uLocal_751))
				{
					__LIB_1__::func_148(&uLocal_751);
				}
				else if (__LIB_0__::func_264(&uLocal_751) > 2f && func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1))
				{
					if (__LIB_12__::func_876(uParam0, sLocal_651, 0))
					{
						__LIB_0__::func_37(&uLocal_751);
						iLocal_1251 = 5;
					}
				}
			}
			break;
	}
}

bool func_462()
{
	float fVar0;
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), vLocal_970);
	if (fVar0 <= 55f)
	{
		if (fVar0 < 10f && __LIB_0__::func_94(iLocal_760, 686.44f, -1253.04f, 43.35f, 0) > 5f)
		{
			return true;
		}
		else if (fVar0 <= 15f)
		{
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 2f);
		}
		else if (fVar0 <= 25f)
		{
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 5f);
		}
		else
		{
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_760, 7f);
		}
	}
	return false;
}

void func_463()
{
	if (__LIB_14__::func_124(3))
	{
		PED::_0x2B4CE170DE09F346(iLocal_430, joaat("RSAD1_RIDE3"));
		AUDIO::_0x660A8F876DF1D4F8(8);
		AUDIO::_0x660A8F876DF1D4F8(26);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(10);
		__LIB_18__::func_766(3);
	}
}

void func_499(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1046();
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
		iVar9 = func_1051(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_382(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_1052(__LIB_0__::func_76(iParam0), &iVar11);
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
					__LIB_10__::func_525(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_783(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_783(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_783(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_783(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_783(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_783(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_783(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_783(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_783(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_783(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_783(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_783(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_783(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1061();
						func_1062(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_783(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_499(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_499(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_499(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_783(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_783(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1094();
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
							func_783(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_528()
{
	switch (iLocal_1322)
	{
		case 0:
			if (func_808(7, 0, 0, 0))
			{
				func_1132(iLocal_1322, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[7], true, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[1]))
				{
					iLocal_383[1] = OBJECT::CREATE_OBJECT(iLocal_370[1], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[2]))
				{
					iLocal_383[2] = OBJECT::CREATE_OBJECT(iLocal_370[2], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[3]))
				{
					iLocal_383[3] = OBJECT::CREATE_OBJECT(iLocal_370[3], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[4]))
				{
					iLocal_383[4] = OBJECT::CREATE_OBJECT(iLocal_370[4], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[5]))
				{
					iLocal_383[5] = OBJECT::CREATE_OBJECT(iLocal_370[5], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[6]))
				{
					iLocal_383[6] = OBJECT::CREATE_OBJECT(iLocal_370[6], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[7]))
				{
					iLocal_383[7] = OBJECT::CREATE_OBJECT(iLocal_370[7], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[0]))
				{
					iLocal_383[0] = OBJECT::CREATE_OBJECT(iLocal_370[0], vLocal_982, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_383[8]))
				{
					iLocal_383[8] = OBJECT::CREATE_OBJECT(iLocal_370[8], vLocal_982, true, true, false, false, true);
				}
				if ((((((((((ENTITY::DOES_ENTITY_EXIST(iLocal_429) && ENTITY::DOES_ENTITY_EXIST(iLocal_430)) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[3])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[4])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[5])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[6])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[7])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_383[8]))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "MrPearson", iLocal_429, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "MrsAdler", iLocal_430, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "p_crate03x", iLocal_383[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "p_cs_rag01x", iLocal_383[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "p_glasstallbeer01x", iLocal_383[3], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "p_glasstallbeer01x^1", iLocal_383[4], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "p_glasstallbeer01x^2", iLocal_383[5], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "P_PACKAGE13X", iLocal_383[6], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "P_PACKAGE13X^1", iLocal_383[7], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "P_SACK04X", iLocal_383[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[7], "p_buysellbox02x", iLocal_383[8], 0);
					func_1132(iLocal_1322, 2);
				}
			}
			break;
		case 2:
			if (func_221(24))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[7]);
				func_1132(iLocal_1322, 3);
			}
			break;
		case 3:
			if (__LIB_11__::func_21(iLocal_1304[7]))
			{
				if (!bLocal_67)
				{
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[7], "MrsAdler"))
					{
						__LIB_1__::func_774(11, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						bLocal_67 = true;
					}
				}
				if (!bLocal_68)
				{
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[7], "MrPearson"))
					{
						__LIB_1__::func_774(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						bLocal_68 = true;
					}
				}
			}
			if (!__LIB_11__::func_21(iLocal_1304[7]) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1304[7]))
			{
				__LIB_14__::func_145(iLocal_1304[7]);
				func_1132(iLocal_1322, 4);
			}
			break;
		case 4:
			break;
	}
}

void func_532(var uParam0)
{
	int iVar0;
	__LIB_14__::func_125();
	AUDIO::STOP_PED_SPEAKING(iLocal_429, false);
	if (__LIB_14__::func_129(2, 0))
	{
		__LIB_11__::func_818(2, 0);
	}
	if (__LIB_11__::func_21(iLocal_1304[8]))
	{
		ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(iLocal_1304[8], 300f);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		AITRANSPORT::_0x5639FBEA922788DA(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	__LIB_1__::func_943(2, 16777216);
	__LIB_0__::func_698(2);
	if (__LIB_4__::func_635(16384))
	{
		__LIB_0__::func_698(16384);
	}
	func_1135();
	func_665();
	if (!__LIB_3__::func_339(26))
	{
		__LIB_4__::func_932(26, 1);
	}
	if (!__LIB_3__::func_339(30))
	{
		__LIB_4__::func_932(30, 1);
	}
	if (!__LIB_3__::func_339(28))
	{
		__LIB_4__::func_932(28, 1);
	}
	if (!__LIB_3__::func_339(31))
	{
		__LIB_4__::func_932(31, 1);
	}
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	if (PED::GET_PED_CONFIG_FLAG(iLocal_430, 297, false))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_430, 297, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iLocal_429, 297, false))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_429, 297, false);
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_430, 8, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 104, false);
	__LIB_2__::func_353(&uLocal_1209, 1);
	__LIB_2__::func_353(&uLocal_1210, 1);
	__LIB_1__::func_951(&iLocal_394);
	__LIB_1__::func_951(&iLocal_393);
	if (PED::DOES_GROUP_EXIST(iLocal_176))
	{
		PED::REMOVE_GROUP(iLocal_176);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_627);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_628);
	func_463();
	func_408();
	if (func_221(0))
	{
		VEHICLE::SET_RANDOM_TRAINS(true);
		__LIB_1__::func_600(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_761))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_761);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	if (func_221(23))
	{
		func_309();
		func_1138();
	}
	else
	{
		__LIB_10__::func_284(&iLocal_760);
	}
	if (iLocal_629 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_629, false);
	}
	if (iLocal_630 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_630, false);
	}
	if (iLocal_635 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_635, false);
	}
	if (iLocal_634 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_634, false);
	}
	if (iLocal_633 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_633, false);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_SADIE1")))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_SADIE1"), false);
	}
	func_1140();
	func_314(1);
	func_340(1);
	func_188(uParam0, 0);
	func_1141();
	__LIB_0__::func_172(iLocal_1213);
	__LIB_0__::func_172(iLocal_1214);
	__LIB_0__::func_172(iLocal_1232);
	__LIB_0__::func_172(iLocal_1233);
	__LIB_0__::func_172(iLocal_1234);
	__LIB_0__::func_172(iLocal_1231);
	__LIB_0__::func_172(iLocal_1215);
	__LIB_0__::func_172(iLocal_1248);
	__LIB_0__::func_172(iLocal_1239);
	__LIB_0__::func_172(iLocal_1240);
	__LIB_0__::func_172(iLocal_1241);
	__LIB_0__::func_172(iLocal_1244);
	__LIB_0__::func_172(iLocal_1245);
	__LIB_0__::func_172(iLocal_1246);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_346);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_380[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_380[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_348);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_347);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_350);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_355);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_351);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_353);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_354);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_349);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_357);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_358);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_359);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_360);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_361);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_362);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_363);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_364);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_365);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_366);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_367);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_368);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
	POPULATION::_0xBC90BDF4E5228EA1();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_760) && PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_760))
	{
		if (iLocal_625 != 0)
		{
			PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_760);
		}
		else if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_760))
		{
			PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_760);
		}
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_642);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_2__::func_788(&(iLocal_438[iVar0]), 1, 0, 1);
		iVar0++;
	}
	__LIB_2__::func_788(&iLocal_441, 1, 0, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_659[iVar0]);
		__LIB_2__::func_788(&(iLocal_431[iVar0]), 1, 0, 1);
		__LIB_2__::func_788(&(iLocal_434[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_325(&(iLocal_36[iVar0]));
		__LIB_2__::func_788(&(iLocal_445[iVar0]), 1, 0, 1);
		__LIB_2__::func_788(&(iLocal_451[iVar0]), 1, 0, 1);
		__LIB_0__::func_172(uLocal_1218[iVar0]);
		iVar0++;
	}
	__LIB_2__::func_788(&iLocal_437, 1, 0, 1);
	__LIB_4__::func_866(&iLocal_407, 1, 1);
	if (bLocal_63)
	{
		OBJECT::_0x0C0A373D181BF900(iLocal_144);
	}
	func_428();
	func_1142();
	__LIB_11__::func_124(9);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_206.f_348, "p_cleaver01x"))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_206.f_348, "p_cleaver01x", iLocal_395);
			}
		}
		ENTITY::DETACH_ENTITY(iLocal_395, true, true);
		OBJECT::DELETE_OBJECT(&iLocal_395);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_396))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_206.f_348, "p_knife03x"))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_206.f_348, "p_knife03x", iLocal_396);
			}
		}
		ENTITY::DETACH_ENTITY(iLocal_396, true, true);
		OBJECT::DELETE_OBJECT(&iLocal_396);
	}
}

void func_536(int iParam0, bool bParam1, bool bParam2)
{
	if (*iParam0 == 176656832)
	{
		return;
	}
	__LIB_1__::func_28(*iParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			__LIB_0__::func_345(2, *iParam0);
		}
		else
		{
			__LIB_0__::func_346(2, *iParam0);
		}
	}
	func_1144(iParam0);
}

int func_607(int iParam0, int iParam1)
{
	var uVar0;
	return func_1188(&uVar0, iParam0, iParam1);
}

void func_665()
{
	int iVar0;
	iVar0 = 0;
	MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, -1, -1);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	func_990();
	func_384();
	__LIB_0__::func_325(&iLocal_30);
	__LIB_0__::func_325(&iLocal_31);
	__LIB_0__::func_325(&iLocal_35);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_325(&(iLocal_32[iVar0]));
		iVar0++;
	}
}

bool func_718(int iParam0)
{
	if (iParam0 <= 0 || iParam0 > 4)
	{
		return true;
	}
	return false;
}

int func_719(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_1260(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
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

Vector3 func_720(int iParam0)
{
	vector3 vVar0;
	func_195();
	switch (iParam0)
	{
		case 0:
			vVar0 = { vLocal_1078[0 /*3*/] };
			break;
		case 1:
			vVar0 = { vLocal_1078[1 /*3*/] };
			break;
		case 2:
			vVar0 = { vLocal_1078[2 /*3*/] };
			break;
		case 3:
			vVar0 = { vLocal_1078[3 /*3*/] };
			break;
		case 4:
			vVar0 = { vLocal_1078[4 /*3*/] };
			break;
		case 5:
			vVar0 = { vLocal_1078[5 /*3*/] };
			break;
		case 6:
			vVar0 = { vLocal_1078[6 /*3*/] };
			break;
		case 7:
			vVar0 = { vLocal_1078[6 /*3*/] };
			break;
		default:
			vVar0 = { vLocal_774 };
			break;
	}
	return vVar0;
}

float func_721(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = fLocal_1100[0];
			break;
		case 1:
			fVar0 = fLocal_1100[1];
			break;
		case 2:
			fVar0 = fLocal_1100[2];
			break;
		case 3:
			fVar0 = fLocal_1100[3];
			break;
		case 4:
			fVar0 = fLocal_1100[4];
			break;
		case 5:
			fVar0 = fLocal_1100[5];
			break;
		case 6:
			fVar0 = fLocal_1100[6];
			break;
		case 7:
			fVar0 = fLocal_1100[6];
			break;
		default:
			fVar0 = fLocal_777;
			break;
	}
	return fVar0;
}

bool func_722(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (__LIB_14__::func_124(11))
	{
		return true;
	}
	if (__LIB_1__::func_44(Global_1835011[19 /*74*/].f_1))
	{
		return false;
	}
	bVar0 = func_1268(iParam5);
	bVar1 = func_1269(iParam5);
	bVar2 = __LIB_12__::func_639(uParam0, 64);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		if (bVar2)
		{
			if (!func_1270())
			{
				iLocal_760 = VEHICLE::CREATE_VEHICLE(iLocal_345, vParam1, fParam4, false, true, false, false);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_760, vParam1, fParam4, true, false, true);
			}
		}
		else
		{
			iLocal_760 = VEHICLE::CREATE_VEHICLE(iLocal_345, vParam1, fParam4, false, true, false, false);
		}
		return false;
	}
	if (!__LIB_11__::func_29(iLocal_760))
	{
		return false;
	}
	if (!func_1271())
	{
		return false;
	}
	if (bVar0)
	{
		if (!func_425(bVar1))
		{
			return false;
		}
	}
	else if (!func_1272())
	{
		return false;
	}
	func_459();
	func_1273();
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_459[0], true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_459[1], true);
	VEHICLE::_0x226C6A4E3346D288(iLocal_760, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_760, 2, false);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_760, 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_760, 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_760, 3, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_760, vParam1, fParam4, true, false, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_760, 0f);
	VEHICLE::_0xE1A83D4A3B5D7938(iLocal_760);
	iLocal_178 = ENTITY::GET_ENTITY_HEALTH(iLocal_760);
	VEHICLE::SET_VEHICLE_STRONG(iLocal_760, true);
	VEHICLE::_0x4C60C333F9CCA2B6(iLocal_760, 1);
	VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_760, 0, 0);
	if (TASK::_0xE62754D09354F6CF(iLocal_760) != -1)
	{
		TASK::_0x4BA972D0E5AD8122(iLocal_760, -1);
	}
	AITRANSPORT::_0xBA8818212633500A(iLocal_760, 7, 0);
	if (!bVar2)
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_760, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
	__LIB_18__::func_765(11);
	if (bVar0)
	{
	}
	return true;
}

bool func_723()
{
	int iVar0;
	if (bLocal_47)
	{
		return true;
	}
	if (!bLocal_47)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_642))
		{
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_642, &iVar0);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_642, (iVar0 - 1), &vLocal_973);
			bLocal_47 = true;
			return true;
		}
	}
	return false;
}

bool func_724()
{
	int iVar0;
	iVar0 = 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_407))
	{
		iLocal_407 = OBJECT::CREATE_OBJECT(iLocal_354, vLocal_985, false, true, true, true, false);
		iVar0 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_407))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_407, vLocal_985, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_407, vLocal_988, 2, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_354);
	}
	return iVar0;
}

void func_726()
{
	Local_236 = { 0f, 0f, 0f };
	Local_236.f_3 = Global_35;
	Local_236.f_4 = 21030;
	Local_236.f_8 = 4;
	Local_236.f_19 = 4;
	Local_236.f_21 = 4;
	Local_236.f_17 = 4;
	Local_236.f_18 = 4;
	Local_236.f_7 = 0;
}

void func_754(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RSAD1_RSC1"))
	{
		__LIB_14__::func_145(iLocal_1304[8]);
		__LIB_14__::func_145(iLocal_1304[9]);
		func_401();
		if (__LIB_14__::func_12(uParam0, Global_35, 0, 0, 1, 1))
		{
			__LIB_11__::func_28(&Global_35, &iLocal_760, -1, 1);
			PED::_0x2208438012482A1A(Global_35, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (__LIB_13__::func_521(uParam0, iLocal_430, 0, 0, 1, 1) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_430, iLocal_760, 0);
					PED::_0x2208438012482A1A(iLocal_430, false, false);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_396))
		{
			if (__LIB_13__::func_521(uParam0, iLocal_396, 0, 0, 1, 1))
			{
				func_1302(uParam0, &iLocal_396, "p_knife03x");
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_395))
		{
			if (__LIB_13__::func_521(uParam0, iLocal_395, 0, 0, 1, 1))
			{
				func_1302(uParam0, &iLocal_395, "P_CLEAVER01X");
			}
		}
	}
	if (__LIB_13__::func_23(uParam0, "RSAD1_RSC4"))
	{
		func_1303();
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			PED::_0xE0B61ED8BB37712F(Global_35);
		}
		if (iLocal_625 != 0)
		{
			PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_760);
		}
		func_528();
		if (__LIB_13__::func_521(uParam0, iLocal_430, 0, 0, 1, 1) && __LIB_13__::func_521(uParam0, iLocal_429, 0, 0, 1, 1))
		{
			if (!func_221(24))
			{
				func_329(24);
			}
		}
	}
}

void func_756(var uParam0)
{
	__LIB_2__::func_480(&Local_524, 1, 1, 1, 0);
	__LIB_1__::func_480(&iLocal_430);
	__LIB_2__::func_480(&Local_603, 1, 1, 1, 0);
	__LIB_1__::func_480(&iLocal_429);
}

bool func_759()
{
	if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")))
	{
		return true;
	}
	return false;
}

void func_760(int iParam0)
{
	if (!func_781(iParam0))
	{
		MISC::SET_BIT(&iLocal_193, iParam0);
	}
}

bool func_761()
{
	float fVar0;
	if (__LIB_0__::func_702(Global_1835011[16 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[16 /*74*/].f_1))
	{
		fVar0 = BUILTIN::VDIST(Global_36, Global_1835011[16 /*74*/].f_18);
		if (fVar0 < 14f)
		{
			return true;
		}
	}
	return false;
}

bool func_762()
{
	float fVar0;
	if (__LIB_0__::func_702(Global_1835011[24 /*74*/].f_1))
	{
		fVar0 = BUILTIN::VDIST(Global_36, Global_1835011[24 /*74*/].f_18);
		if (fVar0 < 14f)
		{
			return true;
		}
	}
	return false;
}

bool func_763()
{
	float fVar0;
	if (__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1))
	{
		fVar0 = BUILTIN::VDIST(Global_36, 626.5818f, -1252.741f, 40.7644f);
		if (fVar0 < 5f)
		{
			return true;
		}
	}
	return false;
}

bool func_764()
{
	if (__LIB_1__::func_44(Global_1347702[138 /*49*/].f_15))
	{
		return true;
	}
	return false;
}

void func_765()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1242))
	{
		iLocal_1242 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(672.441f, -1259.943f, 43.92f, 0f, 0f, 0f, 2f, 2f, 2f, "CAMP_FIRE");
	}
	if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_1236) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1236, true, 0)) || (VOLUME::_DOES_VOLUME_EXIST(iLocal_1242) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1242, true, 0)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
	}
}

bool func_767()
{
	int iVar0;
	int iVar1;
	func_1314();
	iVar0 = -1;
	iVar1 = -1;
	switch (iLocal_1337)
	{
		case 0:
			if (func_808(9, 0, "pbl_Arthur_Interrupts", 0))
			{
				func_1315(iLocal_1337, 1);
			}
			break;
		case 1:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1238))
			{
				iLocal_1238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_1158, vLocal_1161, vLocal_1164, "SCENE_START");
			}
			else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1237))
			{
				iLocal_1237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_1158, vLocal_1161, (vLocal_1164.x + 1f), (vLocal_1164.y + 1f), vLocal_1164.z, "INTERPT_START");
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[9], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[9], "player_zero", Global_35, 0);
				func_1315(iLocal_1337, 2);
			}
			break;
		case 2:
			if (iLocal_1334 == 8)
			{
				__LIB_2__::func_602(&(Local_524[0 /*17*/]), "SAD1_INTERRUPT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_603[0 /*17*/]), "SAD1_INTERRUPT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_6__::func_736(&iLocal_463, &Local_524, 0, Global_1347702[134 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				__LIB_6__::func_736(&iLocal_542, &Local_603, 0, Global_1347702[134 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				func_1315(iLocal_1337, 3);
			}
			break;
		case 3:
			if (iLocal_1334 == 8 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1243, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
				iVar0 = func_1318(&iLocal_430, &iLocal_463, 8f, &Local_524, 0f, 3, 0, "", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				iVar1 = func_1318(&iLocal_429, &iLocal_542, 8f, &Local_603, 0f, 3, 0, "", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar0 == 0)
				{
					bLocal_61 = true;
					__LIB_14__::func_131();
					func_1320(&iLocal_430);
					func_1315(iLocal_1337, 4);
				}
				if (iVar1 == 0)
				{
					bLocal_62 = true;
					__LIB_14__::func_131();
					func_1320(&iLocal_429);
					func_1315(iLocal_1337, 4);
				}
				if ((((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[8], "s_Dialogue", 1) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_1304[8]) > 16.5f) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[8], "s_end", 1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1304[8])) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[8], false))
				{
					__LIB_6__::func_789(&iLocal_463, &iLocal_430);
					func_1320(&iLocal_430);
					__LIB_14__::func_131();
					bLocal_61 = true;
					func_1315(iLocal_1337, 4);
				}
			}
			break;
		case 4:
			__LIB_14__::func_131();
			func_323(1);
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_311);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (bLocal_61)
			{
				if (!PED::IS_PED_FACING_PED(Global_35, iLocal_430, 90f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_430, 0, -1f, -1f, -1f);
				}
			}
			else if (!PED::IS_PED_FACING_PED(Global_35, iLocal_429, 90f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_429, 0, -1f, -1f, -1f);
			}
			ANIMSCENE::START_ANIM_SCENE(iLocal_1304[9]);
			__LIB_1__::func_148(&uLocal_717);
			func_1321(iLocal_1334, 7);
			func_1315(iLocal_1337, 5);
			break;
		case 5:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_311);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			__LIB_14__::func_131();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1304[9]))
			{
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[9], false) || ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_1304[9]) > 2.2f) || __LIB_0__::func_265(&uLocal_717) > 10f)
			{
				if (__LIB_0__::func_265(&uLocal_717) > 10f)
				{
				}
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
				func_1315(iLocal_1337, 6);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_772(float fParam0, bool bParam1)
{
	PED::_0xC0258742B034DFAF(fParam0);
	PED::_0xAB0D553FE20A6E25(fParam0);
	PED::_0xBA0980B5C0A11924(fParam0);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam0);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam0);
	if (bParam1)
	{
		POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
	}
}

bool func_781(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_193, iParam0))
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_783(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_72(28);
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
						func_783(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_783(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_783(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_783(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_783(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_783(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_783(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_72(24);
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
					func_783(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_783(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_116(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_157(iParam0);
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
				func_783(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

int func_784(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_784(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

bool func_790(int iParam0)
{
	int iVar0;
	iVar0 = (__LIB_0__::func_41(iParam0) * 100 + __LIB_0__::func_42(iParam0));
	if (iVar0 >= 1700 && iVar0 < 1900)
	{
		return true;
	}
	return false;
}

bool func_791(int iParam0)
{
	int iVar0;
	iVar0 = (__LIB_0__::func_41(iParam0) * 100 + __LIB_0__::func_42(iParam0));
	if (iVar0 >= 1900 && iVar0 < 2115)
	{
		return true;
	}
	return false;
}

bool func_792(int iParam0)
{
	int iVar0;
	iVar0 = (__LIB_0__::func_41(iParam0) * 100 + __LIB_0__::func_42(iParam0));
	if (iVar0 >= 2015 || iVar0 < 500)
	{
		return true;
	}
	return false;
}

void func_794()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1248))
	{
		iLocal_1248 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_970, 0f, 0f, 0f, 10f, 10f, 1f);
	}
}

void func_796()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1247))
	{
		iLocal_1247 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_960, 0f, 0f, 0f, 10f, 10f, 10f, "STORE_BLIP_VOL");
	}
}

void func_807()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1304[11], false))
	{
		if (!func_781(23))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1304[11], "p_sack04x") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[11], "p_sack04x"))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_sack04x", iLocal_148);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_148))
				{
					ENTITY::DELETE_ENTITY(&iLocal_148);
				}
				func_816(&iLocal_145, 1);
				func_760(23);
			}
		}
		if (!func_781(24))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1304[11], "p_crate03x") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1304[11], "p_crate03x"))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_1304[11], "p_crate03x", iLocal_149);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_149))
				{
					ENTITY::DELETE_ENTITY(&iLocal_149);
				}
				func_816(&iLocal_146, 1);
				func_760(24);
			}
		}
	}
}

bool func_808(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1304[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_1304[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1439(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1304[iParam0]))
		{
			if (bParam3)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[iParam0], "MrsAdler", iLocal_430, 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1304[iParam0]);
		}
	}
	return false;
}

void func_809(int iParam0, int iParam1)
{
	iLocal_1319 = iParam1;
}

bool func_810()
{
	if (((((!ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[11], "pbl_action_P1") || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[11], "pbl_action_P2")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[11], "pbl_action_Loop")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[11], "pbl_BoxMove")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[11], "pbl_Dialogue_1")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[11], "pbl_Dialogue_2"))
	{
		return false;
	}
	if (((((!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[11], "pbl_action_P1") || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[11], "pbl_action_P2")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[11], "pbl_action_Loop")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[11], "pbl_BoxMove")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[11], "pbl_Dialogue_1")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[11], "pbl_Dialogue_2"))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_1304[11], false))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_1304[11], false))
	{
		if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1304[11], "CS_MrsAdler", &Local_18, true, "pbl_action_P1", 2))
		{
			return false;
		}
	}
	return true;
}

bool func_811(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!func_1440(uParam0))
	{
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_427))
	{
		iLocal_427 = OBJECT::CREATE_OBJECT(iLocal_365, vLocal_1028, false, true, true, true, false);
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_428))
	{
		iLocal_428 = OBJECT::CREATE_OBJECT(iLocal_368, vLocal_1028, false, true, true, true, false);
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_149))
	{
		iLocal_149 = OBJECT::CREATE_OBJECT(iLocal_366, vLocal_1028, false, true, true, true, false);
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148))
	{
		iLocal_148 = OBJECT::CREATE_OBJECT(iLocal_369, vLocal_1028, false, true, true, true, false);
		iVar0 = 0;
	}
	return iVar0;
}

bool func_812()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vLocal_1028, 0);
	if (fVar0 < 85f)
	{
		return true;
	}
	if ((!__LIB_14__::func_147(Global_35, "room_station") && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_760)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_430))
	{
		return true;
	}
	return false;
}

bool func_813()
{
	if (((BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_430, true, false)) < 15f && !PED::IS_PED_FALLING(Global_35)) && !TASK::IS_PED_GETTING_UP(Global_35)) && PED::IS_PED_ON_FOOT(Global_35))
	{
		return true;
	}
	if (AITRANSPORT::_0xFFEC4B0A1A3ED515(iLocal_760, 0) == Global_35)
	{
		return true;
	}
	else if (__LIB_0__::func_665(Global_35, iLocal_760, 0, 1) < 7f)
	{
		return true;
	}
	return false;
}

bool func_815(var uParam0)
{
	if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1304[11], "pbl_Action_Loop"))
	{
		if (AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_760, 1) || AITRANSPORT::_0xFFEC4B0A1A3ED515(iLocal_760, 0) == Global_35)
		{
			func_329(10);
			if (!__LIB_6__::func_904())
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1304[11], "Internal_Loop", true, false);
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[11], "pbl_Action_P2", true);
				return true;
			}
		}
		else if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_430, true, false)) < 10f)
		{
			if (!__LIB_0__::func_75(&uLocal_754))
			{
				if (!__LIB_6__::func_903("RSAD1_GETON"))
				{
					__LIB_1__::func_148(&uLocal_754);
				}
			}
			else if (__LIB_0__::func_264(&uLocal_754) > fLocal_175)
			{
				if (!__LIB_14__::func_124(15))
				{
					if (__LIB_12__::func_876(uParam0, "RSAD1_GETON", 0))
					{
						if (fLocal_175 == 1f)
						{
							fLocal_175 = 5f;
						}
						__LIB_18__::func_765(15);
						__LIB_0__::func_37(&uLocal_754);
					}
				}
				else if (__LIB_12__::func_876(uParam0, "RSAD1_DAWD", 0))
				{
					__LIB_0__::func_37(&uLocal_754);
				}
			}
		}
		else if (__LIB_0__::func_75(&uLocal_754))
		{
			__LIB_0__::func_37(&uLocal_754);
		}
	}
	return false;
}

void func_816(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_COLLISION_DISABLED(*iParam0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
			}
			if (ENTITY::_IS_ENTITY_FROZEN(*iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(*iParam0, true);
		}
		else
		{
			if (!ENTITY::_IS_ENTITY_FROZEN(*iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
			}
			ENTITY::SET_ENTITY_VISIBLE(*iParam0, false);
			if (!ENTITY::GET_ENTITY_COLLISION_DISABLED(*iParam0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, false, true);
			}
		}
	}
}

bool func_822(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_445[iParam1]))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		iLocal_445[iParam1] = __LIB_12__::func_885(uParam0, iLocal_380[iVar0], vLocal_892[iParam1 /*3*/], fLocal_908[iParam1], 1, 1, 0, 1, 1, 1, 1, 0);
		return false;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iParam1]) && PED::_0xA0BC8FAED8CFEB3C(iLocal_445[iParam1]))
	{
		if (__LIB_1__::func_985())
		{
			__LIB_1__::func_766(iLocal_445[iParam1], iLocal_206, bParam2, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_766(iLocal_445[iParam1], iLocal_207, bParam2, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam1], 6, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam1], 297, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam1], 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam1], 130, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[iParam1], true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_445[iParam1], true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_445[iParam1], true, 0f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[iParam1], 54, false);
		PED::SET_PED_ACCURACY(iLocal_445[iParam1], 20);
		PED::SET_PED_COMBAT_ABILITY(iLocal_445[iParam1], 1);
		PED::SET_PED_SHOOT_RATE(iLocal_445[iParam1], MISC::GET_RANDOM_INT_IN_RANGE(40, 55));
		PED::SET_PED_FIRING_PATTERN(iLocal_445[iParam1], joaat("FIRING_PATTERN_BURST_SINGLE_SHOT"));
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[iParam1], 27, false);
		WEAPON::_0xA769D753922B031B(iLocal_445[iParam1], MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.6f));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_445[iParam1], iLocal_627);
		ENTITY::_0x18FF3110CF47115D(iLocal_445[iParam1], 1, 0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_627, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_627);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_627, joaat("REL_GANG_DUTCHS"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), iLocal_627);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[iParam1], 186, true);
		if (!iLocal_96[iParam1])
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_445[iParam1], true, 0, true);
		}
		return true;
	}
	return false;
}

void func_823(int iParam0, var uParam1, int iParam2)
{
	iLocal_1326[iParam0] = iParam2;
}

bool func_824(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_451[iParam1]))
	{
		iLocal_451[iParam1] = __LIB_12__::func_885(uParam0, iLocal_356, vLocal_892[iParam1 /*3*/], fLocal_908[iParam1], 1, 1, 0, 1, 1, 1, 1, 0);
		return false;
	}
	else if ((!ENTITY::IS_ENTITY_DEAD(iLocal_451[iParam1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_445[iParam1])) && PED::_0xA0BC8FAED8CFEB3C(iLocal_451[iParam1]))
	{
		if (!PED::IS_PED_ON_MOUNT(iLocal_445[iParam1]))
		{
			PED::_SET_PED_ON_MOUNT(iLocal_445[iParam1], iLocal_451[iParam1], -1, true);
			return false;
		}
		else
		{
			__LIB_11__::func_750(iLocal_451[iParam1], Global_35, 0);
			__LIB_11__::func_430(iLocal_451[iParam1], Global_35);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_451[iParam1], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[0], iLocal_451[iParam1], false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[1], iLocal_451[iParam1], false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_451[iParam1], true);
			TASK::TASK_STAND_STILL(iLocal_451[iParam1], -1);
			TASK::TASK_STAND_STILL(iLocal_445[iParam1], -1);
			return true;
		}
	}
	return false;
}

float func_825()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iLocal_760, vLocal_973, 0);
	return fVar0;
}

void func_826(var uParam0, vector3 vParam1)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_DISMOUNT_ANIMAL(0, 1, 0, 0, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 3f, -1, 0.25f, 0, 40000f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

bool func_827(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, char* sParam6)
{
	float fVar0;
	fVar0 = 0f;
	MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &fVar0, false);
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam5))
	{
		*iParam5 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, *fParam2, 2f, 2f, 2f, sParam6);
		return false;
	}
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(*uParam0))
	{
		if (fVar0 == 0f)
		{
			*uParam0 = TASK::ADD_COVER_POINT(*uParam1, *fParam2, iParam3, iParam4, 0, true);
		}
		else
		{
			*uParam0 = TASK::ADD_COVER_POINT(*uParam1, uParam1->f_1, fVar0, *fParam2, iParam3, iParam4, 0, true);
		}
		return false;
	}
	return true;
}

void func_828(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 44, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, true);
	TASK::_0x50AA09A0DA64E73C(*iParam0, VOLUME::_GET_VOLUME_COORDS(*iParam1), vLocal_973);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, VOLUME::_GET_VOLUME_COORDS(*iParam1), 2f, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 248, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 397, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_COMBAT_FLOAT(*iParam0, 0, 0.25f);
	PED::SET_COMBAT_FLOAT(*iParam0, 1, 3f);
	PED::SET_COMBAT_FLOAT(*iParam0, 2, 70f);
	PED::SET_COMBAT_FLOAT(*iParam0, 3, 1.25f);
	PED::SET_COMBAT_FLOAT(*iParam0, 4, 4f);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam0, VOLUME::_GET_VOLUME_COORDS(*iParam1), -1, 1, 0f, 1, 0, *uParam2, 1, 0, 0);
	TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*iParam0, 500f);
}

void func_833()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(uLocal_621[iVar0]))
		{
			PERSCHAR::_0x7B204F88F6C3D287(uLocal_621[iVar0]);
			PERSCHAR::_0xFCC6DB8DBE709BC8(uLocal_621[iVar0]);
		}
		iVar0++;
	}
}

void func_858(var uParam0)
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
		func_1469(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1471(uParam0);
		func_1472(uParam0);
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

void func_922(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	__LIB_12__::func_713(uParam0, 4);
	if (func_1549(uParam0, &uParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

void func_932()
{
	vector3 vVar0[6];
	int iVar19;
	if (bLocal_46)
	{
		return;
	}
	vVar0[0 /*3*/] = { 926.36f, -1154.5f, 53.81f };
	vVar0[1 /*3*/] = { 937.46f, -1148.35f, 54.93f };
	vVar0[2 /*3*/] = { 913.38f, -1168.13f, 52.32f };
	vVar0[3 /*3*/] = { 908.22f, -1165.21f, 51.59f };
	vVar0[4 /*3*/] = { 902.78f, -1160.53f, 51.16f };
	vVar0[5 /*3*/] = { 892.32f, -1165.15f, 54.01f };
	iVar19 = 0;
	while (iVar19 < 6)
	{
		TASK::ADD_COVER_BLOCKING_AREA(vVar0[iVar19 /*3*/] - Vector(1.5f, 1.5f, 1.5f), vVar0[iVar19 /*3*/] + Vector(1.5f, 1.5f, 1.5f), true, true, true, false);
		iVar19++;
	}
	bLocal_46 = true;
}

void func_933(var uParam0, int iParam1)
{
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam1]) && !func_221(8)) && func_221(3))
	{
		if (!__LIB_0__::func_75(&(vLocal_685[iParam1 /*3*/])))
		{
			fLocal_150[iParam1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
			__LIB_1__::func_148(&(vLocal_685[iParam1 /*3*/]));
		}
		else if (__LIB_0__::func_265(&(vLocal_685[iParam1 /*3*/])) > fLocal_150[iParam1])
		{
			if (__LIB_0__::func_48(iLocal_431[iParam1], Global_35, (25f + 10f), 1))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, sLocal_653[iParam1], 0))
					{
						__LIB_0__::func_37(&(vLocal_685[iParam1 /*3*/]));
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&(vLocal_685[iParam1 /*3*/]));
			}
		}
	}
	else
	{
		if (__LIB_6__::func_903(sLocal_653[iParam1]))
		{
			__LIB_6__::func_900(sLocal_653[iParam1], 0, 0);
		}
		__LIB_0__::func_37(&(vLocal_685[iParam1 /*3*/]));
	}
}

void func_934(int iParam0, var uParam1, int iParam2)
{
	iLocal_1286[iParam0] = iParam2;
}

bool func_935(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_434[iParam1]))
	{
		iLocal_434[iParam1] = __LIB_12__::func_885(uParam0, iLocal_356, vLocal_785[iParam1 /*3*/], fLocal_792[iParam1], 0, 1, 1, 1, 1, 1, 0, 0);
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_431[iParam1]))
	{
		iLocal_431[iParam1] = __LIB_12__::func_885(uParam0, iLocal_380[iParam1], vLocal_785[iParam1 /*3*/], fLocal_792[iParam1], 1, 1, 0, 1, 1, 1, 1, 0);
		return false;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_434[iParam1]))
	{
		if (iParam1 == 0)
		{
			if (!func_781(19))
			{
				iLocal_344 = PED::_REQUEST_METAPED_OUTFIT(iLocal_380[0], -693085022);
				func_760(19);
			}
			if (!func_781(21))
			{
				if (PED::_0x610438375E5D1801(iLocal_344))
				{
					PED::_SET_PED_BODY_COMPONENT(iLocal_431[0], -693085022);
					PED::_UPDATE_PED_VARIATION(iLocal_431[0], false, true, true, true, false);
					func_760(21);
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (!func_781(20))
			{
				iLocal_343 = PED::_REQUEST_METAPED_OUTFIT(iLocal_380[1], 282886208);
				func_760(20);
			}
			if (!func_781(22))
			{
				if (PED::_0x610438375E5D1801(iLocal_343))
				{
					PED::_SET_PED_BODY_COMPONENT(iLocal_431[1], 282886208);
					PED::_UPDATE_PED_VARIATION(iLocal_431[1], false, true, true, true, false);
					func_760(22);
				}
				else
				{
					return false;
				}
			}
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_431[iParam1], "RSAD1_LEMOYNE_RAIDERS_MIXGROUP", 0f);
		PED::_SET_PED_ON_MOUNT(iLocal_431[iParam1], iLocal_434[iParam1], -1, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_434[iParam1], true);
		func_937(iParam1, 0);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[0], iLocal_434[iParam1], false);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[1], iLocal_434[iParam1], false);
		WEAPON::_HIDE_PED_WEAPONS(iLocal_431[iParam1], 2, true);
		TASK::TASK_STAND_STILL(iLocal_434[iParam1], -1);
		TASK::TASK_STAND_STILL(iLocal_431[iParam1], -1);
		__LIB_12__::func_875(uParam0, iLocal_431[iParam1], sLocal_656[iParam1], 0);
		return true;
	}
	return false;
}

bool func_936(var uParam0, int iParam1)
{
	if (iLocal_199[iParam1] == -1)
	{
		iLocal_199[iParam1] = func_1561(iParam1);
	}
	if (iLocal_199[iParam1] > -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_431[iParam1]))
		{
			iLocal_431[iParam1] = __LIB_12__::func_885(uParam0, iLocal_380[iParam1], vLocal_812[iLocal_199[iParam1] /*3*/], ENTITY::GET_ENTITY_HEADING(iLocal_760), 1, 1, 0, 1, 1, 1, 1, 0);
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_434[iParam1]))
		{
			iLocal_434[iParam1] = __LIB_13__::func_200(uParam0, iLocal_431[iParam1]);
			return false;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_434[iParam1]))
			{
				if (!PED::IS_PED_ON_MOUNT(iLocal_431[iParam1]))
				{
					PED::_SET_PED_ON_MOUNT(iLocal_431[iParam1], iLocal_434[iParam1], -1, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_434[iParam1], true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[0], iLocal_434[iParam1], false);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[1], iLocal_434[iParam1], false);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_434[iParam1], false, 0f);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_434[iParam1], false);
				__LIB_1__::func_991(iLocal_431[iParam1], 0);
				iLocal_77[iLocal_199[iParam1]] = 1;
				iLocal_199[iParam1] = -1;
				__LIB_12__::func_875(uParam0, iLocal_431[iParam1], sLocal_656[iParam1], 0);
				return true;
			}
		}
	}
	return false;
}

void func_937(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
	{
		if (__LIB_1__::func_985())
		{
			iLocal_206 = __LIB_1__::func_766(iLocal_431[iParam0], iLocal_206, 0, 1, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			iLocal_207 = __LIB_1__::func_766(iLocal_431[iParam0], iLocal_207, 0, 1, 2, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_431[iParam0], 6, true);
		__LIB_1__::func_991(iLocal_431[iParam0], 0);
		if (!bParam1)
		{
			__LIB_2__::func_279(iLocal_431[iParam0], 1);
		}
		else if (__LIB_1__::func_985())
		{
			__LIB_2__::func_279(iLocal_431[iParam0], 1);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_431[iParam0], true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_431[iParam0], true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[iParam0], true, 0f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iParam0], 54, false);
		PED::SET_PED_ACCURACY(iLocal_431[iParam0], 20);
		PED::SET_PED_COMBAT_ABILITY(iLocal_431[iParam0], 1);
		PED::SET_PED_SHOOT_RATE(iLocal_431[iParam0], MISC::GET_RANDOM_INT_IN_RANGE(40, 55));
		PED::SET_PED_FIRING_PATTERN(iLocal_431[iParam0], joaat("FIRING_PATTERN_BURST_SINGLE_SHOT"));
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[iParam0], 27, false);
		WEAPON::_0xA769D753922B031B(iLocal_431[iParam0], MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f));
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_431[iParam0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_431[iParam0], iLocal_627);
		PED::SET_PED_CONFIG_FLAG(iLocal_431[iParam0], 186, true);
		ENTITY::_0x18FF3110CF47115D(iLocal_431[iParam0], 1, 0);
		if (func_221(4))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_627, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_627);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_627, joaat("REL_GANG_DUTCHS"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), iLocal_627);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_627, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_627);
		}
		if (bParam1)
		{
			func_940(iParam0);
		}
	}
}

bool func_938(int iParam0)
{
	if (bLocal_58)
	{
		return true;
	}
	if ((((ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[iParam0], Global_35, 0, 1)) || __LIB_2__::func_401(iLocal_431[iParam0], 1, 1, 0, 0, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_431[iParam0], true, false), 4f)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_431[iParam0], true, false), joaat("WEAPON_THROWN_DYNAMITE"), 10f, false))
	{
		bLocal_58 = true;
		return true;
	}
	return false;
}

void func_940(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_32[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
		{
			iLocal_32[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_431[iParam0]);
			MAP::_BLIP_SET_MODIFIER(iLocal_32[iParam0], -1034486097);
		}
	}
}

void func_941()
{
	int iVar0;
	if (!func_221(12))
	{
		if (!PED::DOES_GROUP_EXIST(iLocal_176))
		{
			iLocal_176 = PED::CREATE_GROUP(2);
		}
		if (PED::DOES_GROUP_EXIST(iLocal_176))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_430, 279, true);
			PED::SET_PED_AS_GROUP_LEADER(iLocal_430, iLocal_176, false);
			PED::SET_GROUP_FORMATION(iLocal_176, 5);
			PED::_0x97C475212B327666(iLocal_176, 1);
			if (!func_221(12))
			{
				func_329(12);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
		{
			switch (iLocal_1297[iVar0])
			{
				case 0:
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1232))
					{
						iLocal_1232 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iLocal_760, true, false), 0f, 0f, 0f, 5f, 5f, 5f, "WAGON_VOL");
					}
					if (__LIB_0__::func_94(iLocal_760, vLocal_976, 0) < 85f && func_942(&Global_35, 1, 0, 0, 1065353216 /* Float: 1f */, -1))
					{
						if (!func_221(10))
						{
							func_329(10);
						}
						else if (!__LIB_0__::func_491(iLocal_431[iVar0], 658540077))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_431[iVar0], sLocal_659[iVar0], 0, 4194304, -1, 0, 0, -1);
						}
						else
						{
							if (iVar0 == 1)
							{
								PED::_0x7C00CFC48A782DC0(iLocal_1232, iLocal_760, 2f, 0f, 0f, 0f, 0f, 0f, 2, 1);
							}
							iLocal_1297[iVar0] = 1;
						}
					}
					break;
				case 1:
					if (!func_221(4))
					{
						if ((__LIB_0__::func_393(iLocal_431[1], iLocal_1232, 0, 1) || __LIB_0__::func_393(iLocal_434[1], iLocal_1232, 0, 1)) || func_221(16))
						{
							if (!func_221(16))
							{
								func_329(16);
							}
							if (iVar0 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_431[0], false);
								PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_176, vLocal_805[0 /*3*/], 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_431[0], 279, true);
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_431[0], iLocal_176);
								PED::SET_PED_CONFIG_FLAG(iLocal_431[0], 280, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_431[0], 256, false);
								PED::_0x97C475212B327666(iLocal_176, 1);
								TASK::CLEAR_PED_TASKS(iLocal_431[0], true, false);
								PED::_0x0E9E95FDEDCC9D35(iLocal_431[0], 0, 0);
								iLocal_1297[0] = 2;
							}
							else if (PED::IS_PED_GROUP_MEMBER(iLocal_431[0], iLocal_176, 0))
							{
								PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_176, vLocal_805[1 /*3*/], 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_431[1], false);
								PED::SET_PED_CONFIG_FLAG(iLocal_431[1], 279, true);
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_431[1], iLocal_176);
								PED::SET_PED_CONFIG_FLAG(iLocal_431[1], 280, true);
								PED::_0x97C475212B327666(iLocal_176, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_431[1], 256, false);
								TASK::CLEAR_PED_TASKS(iLocal_431[1], true, false);
								PED::_0x0E9E95FDEDCC9D35(iLocal_431[1], 1, 0);
								iLocal_1297[1] = 2;
							}
						}
						else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_431[iVar0], 0))
						{
							if (!func_221(29))
							{
								if (__LIB_0__::func_94(iLocal_760, vLocal_976, 0) < 65f)
								{
									func_329(29);
								}
							}
							else if (!__LIB_0__::func_75(&(vLocal_720[iVar0 /*3*/])))
							{
								__LIB_1__::func_148(&(vLocal_720[iVar0 /*3*/]));
							}
							else if (__LIB_0__::func_265(&(vLocal_720[iVar0 /*3*/])) > fLocal_172[iVar0])
							{
								if (!func_1566(iVar0))
								{
									if (iVar0 == 1)
									{
										func_1567(iLocal_1281[iVar0], iVar0, 1);
									}
									else if (func_1568())
									{
										func_1567(iLocal_1281[iVar0], iVar0, 1);
									}
								}
								__LIB_0__::func_37(&(vLocal_720[iVar0 /*3*/]));
							}
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_431[iVar0], fLocal_168[iVar0], 0, -1082130432 /* Float: -1f */, 0);
						}
					}
					break;
				case 2:
					if (iLocal_1323 == 4)
					{
						if (!func_221(4))
						{
							func_329(4);
						}
						TASK::REMOVE_WAYPOINT_RECORDING(sLocal_659[iVar0]);
						iLocal_1297[iVar0] = 3;
					}
					break;
				case 3:
					break;
			}
		}
		iVar0++;
	}
}

bool func_942(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, int iParam5)
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, bParam1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(*uParam0, true);
		if (iVar0 == iLocal_760)
		{
			if (__LIB_6__::func_693(*uParam0, iLocal_760, -1) || __LIB_6__::func_693(*uParam0, iLocal_760, 0))
			{
				return true;
			}
		}
	}
	else if (bParam2)
	{
		if (!__LIB_0__::func_491(*uParam0, -1794415470))
		{
			if (bParam3)
			{
				TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_760, iParam5, 0, fParam4, 1, 0);
			}
			else
			{
				TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_760, iParam5, -1, fParam4, 1, 0);
			}
		}
	}
	return false;
}

bool func_946(var uParam0)
{
	if (func_221(25))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_457))
	{
		iLocal_457 = __LIB_12__::func_885(uParam0, iLocal_380[MISC::GET_RANDOM_INT_IN_RANGE(0, 2)], vLocal_1111, fLocal_1114, 1, 1, 0, 1, 1, 1, 1, 0);
		return false;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_457, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_457, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_457, true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_457, 6, true);
		PED::SET_PED_ACCURACY(iLocal_457, 20);
		PED::SET_PED_COMBAT_ABILITY(iLocal_457, 1);
		PED::SET_PED_SHOOT_RATE(iLocal_457, MISC::GET_RANDOM_INT_IN_RANGE(40, 55));
		PED::SET_PED_FIRING_PATTERN(iLocal_457, joaat("FIRING_PATTERN_BURST_SINGLE_SHOT"));
		WEAPON::_0xA769D753922B031B(iLocal_457, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f));
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_457, 54, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_457, 27, false);
		ENTITY::_0x18FF3110CF47115D(iLocal_457, 1, 0);
		__LIB_2__::func_279(iLocal_457, 1);
		TASK::TASK_STAND_STILL(iLocal_457, -1);
		func_329(25);
		return true;
	}
	return false;
}

bool func_947(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_458))
		{
			iLocal_458 = __LIB_13__::func_200(uParam0, iLocal_457);
			return false;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_458))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_458, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[0], iLocal_458, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_459[1], iLocal_458, false);
			TASK::TASK_STAND_STILL(iLocal_458, -1);
			return true;
		}
	}
	return false;
}

void func_948(int iParam0, int iParam1)
{
	iLocal_1332 = iParam1;
}

void func_950(int iParam0, int iParam1)
{
	iLocal_1336 = iParam1;
}

void func_956(int iParam0, int iParam1)
{
	iLocal_1317 = iParam1;
}

void func_957(int iParam0, int iParam1)
{
	iLocal_1318 = iParam1;
}

void func_958()
{
	if (bLocal_70)
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_430, &Local_236);
		if (__LIB_0__::func_94(Global_35, vLocal_1108, 0) < 7f)
		{
			if (__LIB_0__::func_94(iLocal_430, vLocal_1108, 0) < 7f && __LIB_0__::func_94(iLocal_430, Global_36, 0) > 2f)
			{
				if (!__LIB_0__::func_491(iLocal_430, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_430, Global_36, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			else if (__LIB_0__::func_491(iLocal_430, 713668775))
			{
				if (!__LIB_0__::func_491(iLocal_430, -875674219) && !PED::IS_PED_FACING_PED(iLocal_430, Global_35, 100f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_430, Global_35, -1, 3f, 0.25f, -1f);
				}
			}
		}
	}
}

void func_959()
{
	if (!func_221(9) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_760, 3, 3000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_760, 2, 3000))
		{
			__LIB_0__::func_45("SAD1_REVHELP", 7500, 0, 0, 0, 1);
			func_329(9);
		}
	}
}

void func_961()
{
	switch (iLocal_1302)
	{
		case 0:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_646))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_646, 0, &vLocal_1194))
				{
					iLocal_1302 = 1;
				}
			}
			break;
		case 1:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_647))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_647, 0, &vLocal_1197))
				{
					iLocal_1302 = 2;
				}
			}
			break;
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_648))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_648, 0, &vLocal_1200))
				{
					iLocal_1302 = 3;
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, false))
				{
					if (!bLocal_1457)
					{
						if (BUILTIN::VDIST(Global_36, vLocal_1194) < 5f)
						{
							sLocal_649 = sLocal_646;
							bLocal_1457 = true;
						}
						else if (BUILTIN::VDIST(Global_36, vLocal_1197) < 5f)
						{
							sLocal_649 = sLocal_647;
							bLocal_1457 = true;
						}
						else if (BUILTIN::VDIST(Global_36, vLocal_1200) < 5f)
						{
							sLocal_649 = sLocal_648;
							bLocal_1457 = true;
						}
					}
					else
					{
						if (CAM::IS_CINEMATIC_CAM_RENDERING())
						{
							CAM::SET_CINEMATIC_MODE_ACTIVE(false);
						}
						PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
						iLocal_1302 = 4;
					}
				}
			}
			break;
		case 4:
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_649, 1, 2f, 1f, 0);
			break;
	}
}

void func_968()
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { 1234.209f, -1296.728f, 75.9027f };
	fVar3 = 308.8199f;
	switch (iLocal_1252)
	{
		case 0:
			if (iLocal_1292[0] > 0 && iLocal_1292[1] > 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_441))
				{
					iLocal_441 = __LIB_8__::func_931(iLocal_349, vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_408))
				{
					iLocal_408 = OBJECT::CREATE_OBJECT(iLocal_357, vVar0, false, true, true, false, false);
				}
				if (!func_781(14))
				{
					iLocal_342 = PED::_REQUEST_METAPED_OUTFIT(iLocal_349, 987299617);
					func_760(14);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_441) && ENTITY::DOES_ENTITY_EXIST(iLocal_408))
				{
					if (!func_781(18))
					{
						if (PED::_0x610438375E5D1801(iLocal_342))
						{
							PED::_SET_PED_BODY_COMPONENT(iLocal_441, 987299617);
							PED::_UPDATE_PED_VARIATION(iLocal_441, false, true, true, true, false);
							func_760(18);
						}
					}
					else
					{
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_441, false);
						func_1579(1);
					}
				}
			}
			break;
		case 1:
			if (func_808(10, 0, "pbl_Action", 0))
			{
				func_1579(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1304[10], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[10], "p_cs_letter01a_x", iLocal_408, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[10], "A_M_M_RHDTOWNFOLK_02", iLocal_441, 0);
				func_1579(3);
			}
			break;
		case 3:
			if (__LIB_1__::func_410(Global_36, vVar0, 20f, 1))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_1304[10]);
				func_1579(4);
			}
			break;
		case 4:
			if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1304[10], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1304[10])) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1304[10], "A_M_M_RHDTOWNFOLK_02"))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_441, 40000f, 1);
				OBJECT::DELETE_OBJECT(&iLocal_408);
				PED::SET_PED_CONFIG_FLAG(iLocal_441, 297, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_441, 315, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_441, 130, false);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_441, true);
				__LIB_2__::func_788(&iLocal_441, 1, 1, 1);
				func_1579(5);
			}
			break;
	}
}

bool func_969(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_438[iParam1]))
	{
		iLocal_438[iParam1] = __LIB_12__::func_885(uParam0, iLocal_349, vLocal_1031[iParam1 /*3*/], fLocal_1038[iParam1], 0, 1, 0, 1, 1, 1, 1, 0);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_438[iParam1]))
	{
		if (iParam1 == 0)
		{
			if (!func_781(12))
			{
				iLocal_340 = PED::_REQUEST_METAPED_OUTFIT(iLocal_349, iLocal_336[0]);
				func_760(12);
				return false;
			}
			if (!func_781(16))
			{
				if (PED::_0x610438375E5D1801(iLocal_340))
				{
					PED::_SET_PED_BODY_COMPONENT(iLocal_438[0], iLocal_336[0]);
					PED::_UPDATE_PED_VARIATION(iLocal_438[0], false, true, true, true, false);
					func_760(16);
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (!func_781(13))
			{
				iLocal_341 = PED::_REQUEST_METAPED_OUTFIT(iLocal_349, iLocal_336[1]);
				func_760(13);
				return false;
			}
			if (!func_781(17))
			{
				if (PED::_0x610438375E5D1801(iLocal_341))
				{
					PED::_SET_PED_BODY_COMPONENT(iLocal_438[1], iLocal_336[1]);
					PED::_UPDATE_PED_VARIATION(iLocal_438[1], false, true, true, true, false);
					func_760(17);
				}
				else
				{
					return false;
				}
			}
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_438[iParam1], 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_438[iParam1], 315, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_438[iParam1], 130, false);
		if (iParam1 == 0)
		{
			__LIB_12__::func_875(uParam0, iLocal_438[0], "RSAD1_Man2", 0);
		}
		else
		{
			__LIB_12__::func_875(uParam0, iLocal_438[1], "RSAD1_Man1", 0);
		}
		return true;
	}
	return false;
}

bool func_970()
{
	if (__LIB_0__::func_266(Global_35, vLocal_1031[0 /*3*/], 60f, 1, 1) || __LIB_0__::func_266(Global_35, vLocal_1031[1 /*3*/], 60f, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_971()
{
	if (!__LIB_0__::func_491(iLocal_438[0], -1305324945))
	{
		TASK::TASK_FLUSH_ROUTE();
		TASK::TASK_EXTEND_ROUTE(vLocal_1041[0 /*3*/]);
		TASK::TASK_EXTEND_ROUTE(1292.797f, -1289.6f, 75.2252f);
		TASK::TASK_EXTEND_ROUTE(1302.067f, -1296.967f, 75.4405f);
		TASK::TASK_EXTEND_ROUTE(1317.401f, -1308.878f, 75.4298f);
		TASK::TASK_EXTEND_ROUTE(1337.832f, -1314.187f, 75.6958f);
		TASK::TASK_EXTEND_ROUTE(1333.171f, -1341.628f, 76.9037f);
		TASK::TASK_EXTEND_ROUTE(1363.696f, -1354.975f, 77.3657f);
		TASK::TASK_FOLLOW_POINT_ROUTE(iLocal_438[0], 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	}
	else
	{
		iLocal_637[0] = -1305324945;
		return true;
	}
	return false;
}

bool func_972()
{
	if (!__LIB_0__::func_491(iLocal_438[1], 1056466932))
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_438[1], iLocal_438[0], -0.5f, -0.5f, 0f, 1f, -1, 0.25f, 1, 0, 0, 1, 1);
	}
	else
	{
		iLocal_637[1] = 1056466932;
		return true;
	}
	return false;
}

void func_973(var uParam0)
{
	Local_211 = { 0f, 0f, 0f };
	Local_211.f_3 = uParam0;
	Local_211.f_4 = 21030;
	Local_211.f_8 = 4;
	Local_211.f_19 = 4;
	Local_211.f_21 = 4;
	Local_211.f_17 = 4;
	Local_211.f_18 = 4;
	Local_211.f_7 = 10000;
}

void func_975(var uParam0)
{
	switch (iLocal_1335)
	{
		case 0:
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				func_338();
				__LIB_13__::func_89(uParam0, Local_1347[3 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_1581(iLocal_1335, 1);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				func_409(&(Local_1347[3 /*9*/]), 5f, 15f);
			}
			else
			{
				__LIB_0__::func_325(&iLocal_30);
				func_1581(iLocal_1335, 2);
			}
			break;
		case 2:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
				{
					func_339(uParam0, 1, 0);
					__LIB_13__::func_89(uParam0, Local_1347[9 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_1581(iLocal_1335, 3);
				}
			}
			else
			{
				func_1581(iLocal_1335, 0);
			}
			break;
		case 3:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_760, true))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_430, iLocal_760, false))
				{
					func_409(&(Local_1347[9 /*9*/]), 0, 0);
				}
			}
			else
			{
				func_1581(iLocal_1335, 0);
			}
			break;
	}
}

void func_976()
{
	if (__LIB_0__::func_94(iLocal_430, Global_36, 1) < 25f)
	{
		if (!__LIB_0__::func_75(&uLocal_679))
		{
			if (!func_221(6))
			{
				if (!__LIB_6__::func_904() && !__LIB_0__::func_270())
				{
					AUDIO::_0x1E6F9A9FE1A99F36("AUD_SPEECH_EVENT_VEH_EXIT_WAGON");
					func_329(6);
				}
				__LIB_1__::func_148(&uLocal_679);
			}
		}
		else if (__LIB_0__::func_265(&uLocal_679) > 10f)
		{
			AUDIO::_0x1E6F9A9FE1A99F36("AUD_SPEECH_EVENT_PLAYER_IS_OFF_WAGON_TOO_LONG");
			__LIB_0__::func_37(&uLocal_679);
		}
	}
	else
	{
		__LIB_5__::func_20(1, 0);
		if (__LIB_0__::func_75(&uLocal_679))
		{
			__LIB_0__::func_37(&uLocal_679);
		}
	}
}

void func_979(var uParam0, int iParam1, int iParam2)
{
	switch (iLocal_1278[iParam2])
	{
		case 0:
			if (__LIB_2__::func_987(iParam1, 1, 0, 0, 0, 0))
			{
				iLocal_1278[iParam2] = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_442[iParam2]))
			{
				iLocal_442[iParam2] = __LIB_2__::func_965(iParam1, 1, 0, 0, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_442[iParam2]))
			{
				if (!iLocal_105[iParam2])
				{
					if (iParam2 == iLocal_181)
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_442[iLocal_181], vLocal_966, fLocal_969, true, false, true);
						if (!iLocal_108[iLocal_181])
						{
							__LIB_12__::func_875(uParam0, iLocal_442[iLocal_181], "RHO_STATWRK", 0);
							__LIB_3__::func_820(30, 1);
							iLocal_108[iLocal_181] = 1;
						}
						iLocal_105[iParam2] = 1;
					}
					else
					{
						if (!__LIB_0__::func_491(iLocal_442[iLocal_182], 1647992574))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_442[iLocal_182], vLocal_1006, fLocal_1009, true, false, true);
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_442[iLocal_182], vLocal_1006, 1f, 0, false, false, false, false);
						}
						if (!iLocal_108[iLocal_182])
						{
							__LIB_12__::func_875(uParam0, iLocal_442[iParam2], "RHD_BLK_General_Store", 0);
							__LIB_3__::func_820(28, 1);
							iLocal_108[iLocal_182] = 1;
						}
						iLocal_105[iParam2] = 1;
					}
				}
				else
				{
					iLocal_1278[iParam2] = 2;
				}
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_442[iParam2]))
			{
				iLocal_442[iParam2] = __LIB_1__::func_334(iParam1);
			}
			break;
	}
}

void func_980(int iParam0, int iParam1)
{
	iLocal_1296 = iParam1;
}

void func_982()
{
	iLocal_180 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	__LIB_2__::func_915(iLocal_430, joaat("WORLD_HUMAN_SHOP_BROWSE"), vLocal_1010[iLocal_180 /*3*/], fLocal_1023[iLocal_180], -1, 1, 0, 0, -1082130432 /* Float: -1f */);
}

bool func_983(var uParam0)
{
	if (iLocal_1250 != 4)
	{
		if (!func_1585())
		{
			__LIB_0__::func_37(&uLocal_679);
			iLocal_1250 = 4;
		}
	}
	else if (func_1585())
	{
		if (!bLocal_71)
		{
			iLocal_1250 = 0;
			bLocal_71 = true;
		}
	}
	switch (iLocal_1250)
	{
		case 0:
			if (iLocal_108[iLocal_182])
			{
				func_1586();
				func_1587();
				iLocal_1250 = 1;
			}
			break;
		case 1:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_430, &Local_236);
			if (PED::IS_PED_FACING_PED(iLocal_430, Global_35, 130f))
			{
				if (__LIB_12__::func_876(uParam0, "RSAD1_REM", 0))
				{
					iLocal_1250 = 2;
				}
			}
			break;
		case 2:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_430, &Local_236);
			if (!__LIB_6__::func_903("RSAD1_REM"))
			{
				__LIB_1__::func_148(&uLocal_679);
				iLocal_1250 = 3;
			}
			break;
		case 3:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_430, &Local_236);
			if (__LIB_0__::func_264(&uLocal_679) > 6f)
			{
				__LIB_0__::func_37(&uLocal_679);
				bLocal_71 = false;
				iLocal_1250 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_985()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { 1224.679f, -1288.609f, 79.855f };
	vVar3 = { 0f, 0f, 48f };
	vVar6 = { 24f, 18f, 9f };
	switch (iLocal_1295)
	{
		case 0:
			uLocal_1340[0] = __LIB_0__::func_45("SAD1_BLIPHLP1", 10000, 0, 0, 0, 1);
			iLocal_1295 = 1;
			break;
		case 1:
			if (!func_1588(0))
			{
				uLocal_1340[1] = __LIB_0__::func_45("SAD1_BLIPHLP2", 10000, 0, 0, 0, 1);
				iLocal_1295 = 2;
			}
			break;
		case 2:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1217))
			{
				iLocal_1217 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "HELP_TEXT_VOL");
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1217, true, 0) && !func_1588(0))
			{
				__LIB_0__::func_45("SAD1_BLIPHLP3", 7500, 0, 0, 0, 1);
				__LIB_0__::func_172(iLocal_1217);
				iLocal_1295 = 3;
			}
			break;
		case 3:
			break;
	}
}

bool func_986()
{
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iLocal_147, false, false))
	{
		if (iLocal_147 == __LIB_0__::func_17(__LIB_1__::func_334(72)))
		{
			return true;
		}
	}
	return false;
}

void func_990()
{
	__LIB_14__::func_133(30, 0);
	func_1590(30);
}

bool func_992()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		return false;
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_760))
	{
		return false;
	}
	if (!PROPSET::_DOES_PROPSET_EXIST(iLocal_625))
	{
		iLocal_625 = PROPSET::_GET_VEHICLE_PROPSET(iLocal_760);
		return false;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_625, iVar3, 0, false, false);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3);
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == iLocal_369)
			{
				iLocal_145 = iVar1;
			}
			if (iVar2 == iLocal_366)
			{
				iLocal_146 = iVar1;
			}
		}
		iVar5++;
	}
	return true;
}

void func_999()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_760, 0))
		{
			iLocal_179 = TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_760);
			if (iLocal_179 != iLocal_195)
			{
				iLocal_195 = iLocal_179;
			}
		}
	}
}

int func_1001(int iParam0, int iParam1)
{
	var uVar0;
	return func_1604(&uVar0, iParam0, iParam1);
}

int func_1002(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1188(&uVar0, iParam0, 0);
	iVar9 = func_1604(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

bool func_1005()
{
	int iVar0;
	int iVar1;
	if (bLocal_49)
	{
		return true;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[iVar1], Global_35, 0, 1) || __LIB_2__::func_401(iLocal_431[iVar1], 1, 1, 0, 0, 0))
			{
				bLocal_49 = true;
				return true;
			}
		}
		iVar1++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		bLocal_49 = true;
		return true;
	}
	return false;
}

bool func_1006()
{
	if ((((__LIB_6__::func_903("RSAD1_ABAN1") || __LIB_6__::func_903("RSAD1_ABAN2")) || __LIB_6__::func_903("RSAD1_ABAN3")) || __LIB_6__::func_903("RSAD1_AIDLE")) || __LIB_6__::func_903("RSAD1_GOGOGO"))
	{
		return true;
	}
	return false;
}

bool func_1007()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]) && __LIB_0__::func_94(iLocal_445[iVar0], Global_36, 0) < 25f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1008()
{
	if (func_1607())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 12, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 44, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 57, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 43, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 42, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_430, 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_430, 1024, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_430, 0, true);
		TASK::_0x1A7D63CB1B0BB223(iLocal_430);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_430, 500f);
		TASK::TASK_COMBAT_HATED_TARGETS(iLocal_430, 3f);
		return true;
	}
	return false;
}

void func_1009(var uParam0)
{
	sLocal_671[0] = "RSAD1_BEHIND1";
	sLocal_671[1] = "RSAD1_SO_BANT1";
	sLocal_671[2] = "RSAD1_SO_BANT2";
	sLocal_671[3] = "RSAD1_SO_BANT3";
	switch (iLocal_1253)
	{
		case 0:
			if (__LIB_0__::func_75(&uLocal_727))
			{
				if (__LIB_0__::func_264(&uLocal_727) > 4f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iLocal_188]) && !bLocal_57)
					{
						if (__LIB_12__::func_876(uParam0, sLocal_671[iLocal_190], 0))
						{
							__LIB_0__::func_37(&uLocal_727);
							iLocal_190++;
							iLocal_1253 = 1;
						}
					}
					else
					{
						iLocal_190++;
						iLocal_1253 = 1;
					}
				}
			}
			break;
		case 1:
			if (!__LIB_6__::func_904())
			{
				if (!__LIB_0__::func_75(&uLocal_727))
				{
					__LIB_1__::func_148(&uLocal_727);
				}
				else if (__LIB_0__::func_264(&uLocal_727) > 4f)
				{
					if (__LIB_12__::func_876(uParam0, sLocal_671[iLocal_190], 0))
					{
						__LIB_0__::func_37(&uLocal_727);
						iLocal_190++;
						if (iLocal_190 >= 4)
						{
							iLocal_1253 = 2;
						}
					}
				}
			}
			break;
	}
}

void func_1012()
{
	int iVar0;
	if (!__LIB_14__::func_124(10))
	{
		if (!__LIB_14__::func_124(16))
		{
			iLocal_197 = __LIB_0__::func_645(joaat("KILLS"), joaat("HUMAN"));
			__LIB_18__::func_765(16);
		}
		else
		{
			iVar0 = (__LIB_0__::func_645(joaat("KILLS"), joaat("HUMAN")) - iLocal_197);
			if (iVar0 > 2)
			{
				__LIB_18__::func_765(10);
			}
		}
	}
}

void func_1013()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
		{
			PED::SET_PED_SHOOT_RATE(iLocal_431[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(60, 80));
			PED::SET_PED_FIRING_PATTERN(iLocal_431[iVar0], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
			WEAPON::_0xA769D753922B031B(iLocal_431[iVar0], MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.65f));
			PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 0, 0.4f);
			PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 1, 5f);
			PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 2, 70f);
			PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 3, 1f);
			PED::SET_COMBAT_FLOAT(iLocal_431[iVar0], 4, 3f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_445[iVar0]))
		{
			PED::SET_PED_SHOOT_RATE(iLocal_445[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(60, 80));
			PED::SET_PED_FIRING_PATTERN(iLocal_445[iVar0], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
			WEAPON::_0xA769D753922B031B(iLocal_445[iVar0], MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.6f, 0.7f));
			PED::SET_COMBAT_FLOAT(iLocal_445[iVar0], 0, 0.4f);
			PED::SET_COMBAT_FLOAT(iLocal_445[iVar0], 1, 5f);
			PED::SET_COMBAT_FLOAT(iLocal_445[iVar0], 2, 70f);
			PED::SET_COMBAT_FLOAT(iLocal_445[iVar0], 3, 1f);
			PED::SET_COMBAT_FLOAT(iLocal_445[iVar0], 4, 3f);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_457))
	{
		PED::SET_PED_SHOOT_RATE(iLocal_457, MISC::GET_RANDOM_INT_IN_RANGE(60, 80));
		PED::SET_PED_FIRING_PATTERN(iLocal_457, joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
		WEAPON::_0xA769D753922B031B(iLocal_457, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.6f, 0.7f));
		PED::SET_COMBAT_FLOAT(iLocal_457, 0, 0.4f);
		PED::SET_COMBAT_FLOAT(iLocal_457, 1, 5f);
		PED::SET_COMBAT_FLOAT(iLocal_457, 2, 70f);
		PED::SET_COMBAT_FLOAT(iLocal_457, 3, 1f);
		PED::SET_COMBAT_FLOAT(iLocal_457, 4, 3f);
	}
}

bool func_1019()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_399[iVar0]))
		{
			iLocal_399[iVar0] = OBJECT::CREATE_OBJECT(iLocal_353, ENTITY::GET_ENTITY_COORDS(iLocal_429, true, false), true, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_399[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return true;
	}
	return false;
}

bool func_1020()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_403[iVar0]))
		{
			iLocal_403[iVar0] = OBJECT::CREATE_OBJECT(iLocal_353, ENTITY::GET_ENTITY_COORDS(iLocal_429, true, false), true, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_403[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return true;
	}
	return false;
}

int func_1021()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_1__::func_25(Global_1347702[76 /*49*/].f_15, 1))
	{
		iVar0++;
	}
	if (__LIB_1__::func_25(Global_1835011[18 /*74*/].f_1, 1))
	{
		iVar0++;
	}
	if (__LIB_1__::func_25(Global_1835011[17 /*74*/].f_1, 1))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1046()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (__LIB_0__::func_31(iVar17))
		{
			iVar18 = __LIB_0__::func_271(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	__LIB_0__::func_37(&(Global_1359489.f_55));
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		func_1625(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

int func_1051(int iParam0, var uParam1, int iParam2)
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
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			Jump @2357; //curOff = 1606
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
			Jump @2357; //curOff = 2209
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
int func_1052(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

void func_1061()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1642();
	func_1643();
	func_1644();
	func_1645();
	func_1646();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_1062(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_784(iParam0, 1, 1, -142743235, 1);
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

void func_1094()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1672(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_1132(int iParam0, int iParam1)
{
	iLocal_1322 = iParam1;
}

void func_1135()
{
	int iVar0;
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_172(uLocal_1218[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uLocal_1224[iVar0]);
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_1227);
}

void func_1138()
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, 1255.453f, -1318.903f, 75.2025f, 311.589f, true, false, true);
	}
}

void func_1140()
{
	if (iLocal_636 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_636, false);
	}
	func_1713();
	__LIB_0__::func_172(iLocal_1235);
}

void func_1141()
{
	if (iLocal_631 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_631, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1216))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1216);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1216);
	}
	__LIB_0__::func_172(iLocal_1216);
}

void func_1142()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(uLocal_621[iVar0]) && !PERSCHAR::_0x4AFC7288C77238B3(uLocal_621[iVar0]))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(uLocal_621[iVar0]);
		}
		iVar0++;
	}
}

void func_1144(int iParam0)
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
}

int func_1188(var uParam0, int iParam1, int iParam2)
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
		return func_1188(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1260(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_17(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_1260(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1260(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1268(int iParam0)
{
	if (iParam0 >= 2 && iParam0 < 6)
	{
		return 1;
	}
	return 0;
}

int func_1269(int iParam0)
{
	if (iParam0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_1270()
{
	int iVar0;
	iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_MODEL(iVar0, iLocal_345))
	{
		if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true, false) && !ENTITY::IS_ENTITY_DEAD(__LIB_3__::func_568(iVar0, 0))) && !ENTITY::IS_ENTITY_DEAD(__LIB_3__::func_568(iVar0, 1))) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && !ENTITY::IS_ENTITY_ON_SCREEN(__LIB_3__::func_568(iVar0, 0))) && !ENTITY::IS_ENTITY_ON_SCREEN(__LIB_3__::func_568(iVar0, 1)))
		{
			iLocal_760 = iVar0;
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_760))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_760, true, false);
			}
			return true;
		}
		else
		{
			func_1138();
		}
	}
	return false;
}

bool func_1271()
{
	if (__LIB_3__::func_320(iLocal_760) < 2)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_459[0]))
	{
		iLocal_459[0] = __LIB_3__::func_568(iLocal_760, 0);
		return false;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_459[0]))
	{
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_459[1]))
	{
		iLocal_459[1] = __LIB_3__::func_568(iLocal_760, 1);
		return false;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_459[1]))
	{
		return false;
	}
	return true;
}

bool func_1272()
{
	bool bVar0;
	if (__LIB_14__::func_124(1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		return false;
	}
	bVar0 = true;
	if (__LIB_14__::func_124(0))
	{
		if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_760))
		{
			PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_760);
			__LIB_18__::func_766(0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_760))
	{
		bVar0 = false;
	}
	if (!PROPSET::_REQUEST_PROPSET(iLocal_185))
	{
		bVar0 = false;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_185))
	{
		bVar0 = false;
	}
	if (PROPSET::_HAS_PROPSET_LOADED(iLocal_185))
	{
		if (!PROPSET::_DOES_PROPSET_EXIST(iLocal_626))
		{
			iLocal_626 = PROPSET::_CREATE_PROPSET_3(iLocal_185, 0f, 0f, 0f, iLocal_760, 0f, false, 1, false);
		}
	}
	if (!PROPSET::_DOES_PROPSET_EXIST(iLocal_626))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		__LIB_18__::func_765(1);
	}
	return bVar0;
}

void func_1273()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_459[iVar0], joaat("PLAYER"));
		}
		iVar0++;
	}
}

void func_1302(var uParam0, int* iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_348, sParam2, true);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		__LIB_1__::func_951(iParam1);
	}
}

void func_1303()
{
	int iVar0;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_459[iVar0]))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_459[iVar0], false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_459[iVar0], false);
				PED::SET_PED_RESET_FLAG(iLocal_459[iVar0], 90, true);
			}
			iVar0++;
		}
	}
}

void func_1314()
{
	if (func_221(2))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 31, 1);
	}
	switch (iLocal_1334)
	{
		case 0:
			if ((func_808(8, 0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_395)) && ENTITY::DOES_ENTITY_EXIST(iLocal_396))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "CS_MrsAdler", iLocal_430, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "CS_MrPearson", iLocal_429, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cleaver01x", iLocal_395, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], __LIB_0__::func_743(iLocal_396), iLocal_396, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_carrot02x", iLocal_409, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_barrag01x", iLocal_410, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_carrotSlice01x", iLocal_412[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_carrotSlice01x^1", iLocal_412[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_cuttingboard01x", iLocal_425, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x", iLocal_415[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^1", iLocal_415[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^2", iLocal_415[2], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^3", iLocal_415[3], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^4", iLocal_415[4], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^5", iLocal_415[5], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^6", iLocal_415[6], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^7", iLocal_415[7], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "p_cs_meatstew01x^8", iLocal_415[8], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1304[8], "s_meatbit_chunck_medium01x", iLocal_426, 0);
				__LIB_4__::func_712(iLocal_1304[8], 10000, 0, -1, 0);
				__LIB_12__::func_604(9, 1);
				bLocal_48 = true;
				func_1321(iLocal_1334, 1);
			}
			break;
		case 1:
			if (__LIB_5__::func_297(Global_1347702[134 /*49*/].f_15) == 1)
			{
				sLocal_652 = "pbl_chopping_01";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[8], sLocal_652);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[8], sLocal_652))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[8], sLocal_652, true);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1304[8]);
					__LIB_18__::func_765(20);
					func_1321(iLocal_1334, 2);
				}
			}
			else if (func_1856())
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[8], "pbl_Bickering");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[8], "pbl_Bickering"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[8], "pbl_Bickering", true);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1304[8]);
					func_1321(iLocal_1334, 4);
				}
			}
			break;
		case 2:
			if (!func_1857())
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[8], "s_Chopping_Base", 1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sLocal_652, "pbl_Chopping_01"))
					{
						sLocal_652 = "pbl_Chopping_02";
					}
					else if (MISC::ARE_STRINGS_EQUAL(sLocal_652, "pbl_Chopping_02"))
					{
						sLocal_652 = "pbl_Chopping_03";
					}
					else
					{
						sLocal_652 = "pbl_Chopping_01";
					}
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[8], sLocal_652);
					func_1321(iLocal_1334, 3);
				}
			}
			else
			{
				func_1321(iLocal_1334, 5);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[8], sLocal_652))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[8], sLocal_652, true);
				func_1321(iLocal_1334, 2);
			}
			break;
		case 4:
			if (!func_1857())
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[8], "pbl_Chopping_01");
				sLocal_652 = "pbl_Chopping_01";
				if (__LIB_5__::func_297(Global_1347702[134 /*49*/].f_15) != 1)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_1304[8]) > 20.5f)
					{
						__LIB_7__::func_448(Global_1347702[134 /*49*/].f_15, 1);
					}
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[8], "s_Chopping_Base", 1) || func_781(8))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[8], sLocal_652))
					{
						__LIB_18__::func_765(20);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[8], sLocal_652, true);
						func_1321(iLocal_1334, 2);
					}
				}
			}
			else
			{
				func_1321(iLocal_1334, 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1304[8], "pbl_dialogue"))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_430, "RSC_SADIE1", vLocal_994, 0, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1304[8], "pbl_dialogue", true);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[8], "pbl_end");
				func_329(2);
				func_1321(iLocal_1334, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_1304[8]) > 8f || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[8], "s_end", 1))
			{
				func_1321(iLocal_1334, 8);
			}
			break;
		case 8:
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1304[8], "s_end", 1))
			{
				func_1321(iLocal_1334, 8);
			}
			else
			{
				ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(iLocal_1304[8], 30f);
				func_1321(iLocal_1334, 8);
			}
			break;
	}
}

void func_1315(int iParam0, int iParam1)
{
	iLocal_1337 = iParam1;
}

int func_1318(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
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
		bVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		__LIB_14__::func_141(iParam0, iParam1, uParam3, fParam2, bVar8, sParam7);
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
					if (__LIB_13__::func_892(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, bVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_1318(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !bVar8 <= (fParam2 + 5f))
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
					if (__LIB_14__::func_139(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_10__::func_577(iParam1, uParam3, bVar8);
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
					__LIB_14__::func_139(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
					else if (!__LIB_10__::func_482(iParam1))
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
					__LIB_14__::func_139(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				__LIB_10__::func_577(iParam1, uParam3, bVar8);
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

void func_1320(int iParam0)
{
	Local_311 = { 0f, 0f, 0f };
	Local_311.f_3 = *iParam0;
	Local_311.f_4 = 21030;
	Local_311.f_8 = 4;
	Local_311.f_19 = 4;
	Local_311.f_21 = 4;
	Local_311.f_17 = 4;
	Local_311.f_18 = 4;
	Local_311.f_7 = -1;
}

void func_1321(int iParam0, int iParam1)
{
	iLocal_1334 = iParam1;
}

char* func_1439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@SAD1@IG@RSC2_IG1_ReadLetter@ReadLetter";
		case 1:
			return "script@rcm@SAD1@ig@rsc2_ig2_checkthemail@checkthemail";
		case 2:
			return "script@rcm@SAD1@IG@RSC3_IG4_ShootBandit@shootbandit";
		case 3:
			return "script@rcm@sad1@ig@rsc3_ig7_bandit_rundown@bandit_rundown";
		case 4:
			return "script@rcm@sad1@ig@rsc3_ig5_stabbandit@stabbandit";
		case 5:
			return "script@rcm@SAD1@Leadin@RSC4@base";
		case 6:
			return "script@rcm@SAD1@Leadin@RSC4@leadin";
		case 7:
			return "script@rcm@SAD1@Leadout@RSC4@Leadout";
		case 8:
			return "script@rcm@sad1@ig@rsc2_ig0_int@rsc2_ig0_int";
		case 9:
			return "script@rcm@SAD1@IG@RSC2_IG0_INT@rsc2_ig0_INT_Arthur";
		case 10:
			return "script@rcm@SAD1@IG@RSC3_IG6_ManExitsPostOffice@IG6_ManExitsPostOffice";
		case 11:
			return "script@rcm@sad1@ig@rsc3_ig_8_loading_wagon@rsc3_ig_8_loading_wagon";
		default:
			break;
	}
	return "";
}

bool func_1440(var uParam0)
{
	if (bLocal_69)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_462))
	{
		iLocal_462 = __LIB_8__::func_931(iLocal_349, vLocal_1028, 0f, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!func_781(11))
	{
		iLocal_339 = PED::_REQUEST_METAPED_OUTFIT(iLocal_349, 1723545634);
		func_760(11);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_462))
	{
		if (!func_781(15))
		{
			if (PED::_0x610438375E5D1801(iLocal_339))
			{
				PED::_SET_PED_BODY_COMPONENT(iLocal_462, 1723545634);
				PED::_UPDATE_PED_VARIATION(iLocal_462, false, true, true, true, false);
				func_760(15);
			}
			else
			{
				return false;
			}
		}
		__LIB_12__::func_875(uParam0, iLocal_462, "RSAD1_Clerk", 0);
		PED::_0xAE6004120C18DF97(iLocal_462, 0, 0);
		func_455(&iLocal_462, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_462, 169, true);
		bLocal_69 = true;
		return true;
	}
	return false;
}

void func_1469(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_2017();
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

void func_1471(var uParam0)
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
			func_1260(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1260(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1472(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1260(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1549(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	struct<8> Var20;
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1785);
	if (!bVar0)
	{
		uParam0->f_1785 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1785);
	if (!bVar1)
	{
		return false;
	}
	__LIB_12__::func_761(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_12__::func_655(uParam0, 16384))
	{
		__LIB_12__::func_708(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_12__::func_729(uParam0, iVar18);
		if (__LIB_12__::func_730(uParam0, 0))
		{
			if (__LIB_12__::func_731(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_912[iVar16 /*41*/].f_27 = 0;
					__LIB_12__::func_732(uParam0, 1, &(uParam0->f_912[iVar16 /*41*/].f_1));
					__LIB_12__::func_732(uParam0, 2, &(uParam0->f_912[iVar16 /*41*/].f_1.f_1));
					__LIB_12__::func_732(uParam0, 3, &(uParam0->f_912[iVar16 /*41*/].f_1.f_2));
					__LIB_12__::func_732(uParam0, 4, &(uParam0->f_912[iVar16 /*41*/].f_11));
					__LIB_12__::func_732(uParam0, 5, &(uParam0->f_912[iVar16 /*41*/].f_12));
					__LIB_12__::func_732(uParam0, 6, &(uParam0->f_912[iVar16 /*41*/].f_13));
					__LIB_12__::func_732(uParam0, 7, &(uParam0->f_912[iVar16 /*41*/].f_4));
					__LIB_12__::func_732(uParam0, 8, &(uParam0->f_912[iVar16 /*41*/].f_4.f_1));
					__LIB_12__::func_732(uParam0, 9, &(uParam0->f_912[iVar16 /*41*/].f_4.f_2));
					__LIB_12__::func_732(uParam0, 10, &(uParam0->f_912[iVar16 /*41*/].f_7));
					__LIB_12__::func_732(uParam0, 11, &(uParam0->f_912[iVar16 /*41*/].f_7.f_1));
					__LIB_12__::func_732(uParam0, 12, &(uParam0->f_912[iVar16 /*41*/].f_7.f_2));
					__LIB_12__::func_732(uParam0, 13, &(uParam0->f_912[iVar16 /*41*/].f_10));
					__LIB_12__::func_732(uParam0, 14, &(uParam0->f_912[iVar16 /*41*/].f_14));
					__LIB_12__::func_732(uParam0, 15, &(uParam0->f_912[iVar16 /*41*/].f_15));
					if (__LIB_12__::func_731(uParam0, 16, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/] = iVar17;
					}
					__LIB_12__::func_732(uParam0, 19, &(uParam0->f_912[iVar16 /*41*/].f_16));
					__LIB_12__::func_732(uParam0, 20, &(uParam0->f_912[iVar16 /*41*/].f_17));
					__LIB_12__::func_732(uParam0, 31, &(uParam0->f_912[iVar16 /*41*/].f_18));
					if (__LIB_12__::func_733(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_912[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_12__::func_733(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_912[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_12__::func_731(uParam0, 23, &(uParam0->f_912[iVar16 /*41*/].f_25));
					__LIB_12__::func_862(uParam0, &(uParam0->f_912[iVar16 /*41*/].f_27));
					if (__LIB_12__::func_733(uParam0, 35, &(uParam0->f_912[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_12__::func_731(uParam0, 39, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_912[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_12__::func_732(uParam0, 40, &(uParam0->f_912[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_912[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar16 /*41*/].f_30)))
					{
						uParam0->f_912[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_912[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1791 == -1 || uParam0->f_912[uParam0->f_1791 /*41*/].f_17 < uParam0->f_912[iVar16 /*41*/].f_17)
					{
						uParam0->f_1791 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_912[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_912[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1796 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_912[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_912[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_1796 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 45))
				{
					if (__LIB_12__::func_731(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 2);
							__LIB_12__::func_733(uParam0, 46, &(uParam0->f_1418[iVar16 /*10*/]));
							if (__LIB_12__::func_734(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_12__::func_731(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 27)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 50))
				{
					if (__LIB_12__::func_731(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_12__::func_731(uParam0, 43, &(Var2.f_3));
					if (__LIB_12__::func_733(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_12__::func_732(uParam0, 53, &(Var2.f_8));
					if (__LIB_12__::func_731(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_12__::func_734(uParam0, 55, &(Var2.f_11));
					__LIB_12__::func_734(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (__LIB_12__::func_762(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 27)
						{
							uParam0->f_3[iVar32 /*13*/].f_3 = Var2.f_3;
							uParam0->f_3[iVar32 /*13*/].f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32 /*13*/].f_8 = Var2.f_8;
							uParam0->f_3[iVar32 /*13*/].f_10 = Var2.f_10;
							uParam0->f_3[iVar32 /*13*/].f_11 = Var2.f_11;
							uParam0->f_3[iVar32 /*13*/].f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (__LIB_4__::func_649(Var2.f_1))
							{
								__LIB_12__::func_693(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_12__::func_729(uParam0, iVar18);
			if (__LIB_12__::func_730(uParam0, 82))
			{
				if (__LIB_12__::func_733(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_355), {Var20}, 4);
				}
				__LIB_12__::func_733(uParam0, 84, &(uParam0->f_355.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355.f_4)))
				{
					if (uParam0->f_355.f_15 == 1)
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_355.f_15 == 2)
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 57))
				{
					if (__LIB_12__::func_731(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_371[iVar16 /*18*/].f_8 = 0;
							__LIB_12__::func_731(uParam0, 58, &(uParam0->f_371[iVar16 /*18*/]));
							if (__LIB_12__::func_731(uParam0, 59, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_12__::func_731(uParam0, 60, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_12__::func_731(uParam0, 61, &(uParam0->f_371[iVar16 /*18*/].f_3));
							__LIB_12__::func_732(uParam0, 67, &(uParam0->f_371[iVar16 /*18*/].f_10));
							__LIB_12__::func_732(uParam0, 70, &(uParam0->f_371[iVar16 /*18*/].f_11));
							__LIB_12__::func_732(uParam0, 68, &(uParam0->f_371[iVar16 /*18*/].f_9));
							__LIB_12__::func_731(uParam0, 72, &(uParam0->f_371[iVar16 /*18*/].f_5));
							__LIB_12__::func_732(uParam0, 77, &(uParam0->f_371[iVar16 /*18*/].f_12));
							__LIB_12__::func_731(uParam0, 78, &(uParam0->f_371[iVar16 /*18*/].f_13));
							__LIB_12__::func_731(uParam0, 79, &(uParam0->f_371[iVar16 /*18*/].f_14));
							if (__LIB_12__::func_731(uParam0, 73, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_12__::func_731(uParam0, 75, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_12__::func_732(uParam0, 80, &(uParam0->f_371[iVar16 /*18*/].f_15));
							if (__LIB_12__::func_734(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_12__::func_734(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_12__::func_734(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_12__::func_734(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_12__::func_734(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_12__::func_734(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_12__::func_734(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_12__::func_734(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_12__::func_734(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_371[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_371[iVar16 /*18*/].f_4 = uParam0->f_371[iVar16 /*18*/].f_3;
								uParam0->f_371[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_371[iVar16 /*18*/].f_16 = uParam0->f_371[iVar16 /*18*/].f_2;
							uParam0->f_371[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1790 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 85))
				{
					__LIB_12__::func_731(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_12__::func_734(uParam0, 87, &(uParam0->f_1241[iVar18 /*22*/]));
						__LIB_12__::func_733(uParam0, 96, &(uParam0->f_1241[iVar18 /*22*/].f_2));
						__LIB_12__::func_733(uParam0, 97, &(uParam0->f_1241[iVar18 /*22*/].f_10));
						__LIB_12__::func_732(uParam0, 93, &(uParam0->f_1241[iVar18 /*22*/].f_18));
						__LIB_12__::func_732(uParam0, 94, &(uParam0->f_1241[iVar18 /*22*/].f_19));
						__LIB_12__::func_731(uParam0, 95, &(uParam0->f_1241[iVar18 /*22*/].f_20));
						uParam0->f_1241[iVar18 /*22*/].f_1 = 0;
						__LIB_12__::func_830(uParam0, &(uParam0->f_1241[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 98))
				{
					if (__LIB_12__::func_731(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1529[iVar16 /*15*/].f_10 = 0;
							func_2093(uParam0, 99, &(uParam0->f_1529[iVar16 /*15*/]));
							func_2093(uParam0, 100, &(uParam0->f_1529[iVar16 /*15*/].f_6));
							func_2093(uParam0, 101, &(uParam0->f_1529[iVar16 /*15*/].f_3));
							if (__LIB_12__::func_731(uParam0, 102, &iVar17))
							{
								uParam0->f_1529[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_12__::func_862(uParam0, &(uParam0->f_1529[iVar16 /*15*/].f_10));
							uParam0->f_1529[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1785);
			__LIB_12__::func_693(uParam0, 1);
			__LIB_12__::func_693(uParam0, 16384);
			__LIB_12__::func_831(uParam0);
			return true;
		}
	}
}

int func_1561(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	iLocal_199[iParam0] = -1;
	fVar2 = 100f;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!iLocal_77[iVar0])
		{
			fVar1 = __LIB_0__::func_94(Global_35, vLocal_812[iVar0 /*3*/], 1);
			if (fVar1 > 30f)
			{
				if (fVar1 < 100f)
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_356, vLocal_812[iVar0 /*3*/], true))
					{
						if (fVar1 < fVar2)
						{
							fVar2 = fVar1;
							iLocal_199[iParam0] = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iLocal_199[iParam0];
}

bool func_1566(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		fLocal_162[iParam0] = __LIB_0__::func_665(iLocal_431[iParam0], iLocal_760, 0, 1);
		if (fLocal_162[iParam0] <= fLocal_165[iParam0])
		{
			fLocal_165[iParam0] = fLocal_162[iParam0];
			return true;
		}
	}
	return false;
}

void func_1567(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				fLocal_168[iParam1] = 1f;
				func_2102(iLocal_1281[iParam1], 1, iParam1);
			}
			break;
		case 1:
			if (bParam2)
			{
				fLocal_168[iParam1] = 1.001f;
				func_2102(iLocal_1281[iParam1], 2, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1f;
				func_2102(iLocal_1281[iParam1], 0, iParam1);
			}
			break;
		case 2:
			if (bParam2)
			{
				fLocal_168[iParam1] = 1.25f;
				func_2102(iLocal_1281[iParam1], 3, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1f;
				func_2102(iLocal_1281[iParam1], 1, iParam1);
			}
			break;
		case 3:
			if (bParam2)
			{
				fLocal_168[iParam1] = 1.5f;
				func_2102(iLocal_1281[iParam1], 4, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1.001f;
				func_2102(iLocal_1281[iParam1], 2, iParam1);
			}
			break;
		case 4:
			if (bParam2)
			{
				fLocal_168[iParam1] = 1.501f;
				func_2102(iLocal_1281[iParam1], 5, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1.25f;
				func_2102(iLocal_1281[iParam1], 3, iParam1);
			}
			break;
		case 5:
			if (bParam2)
			{
				fLocal_168[iParam1] = 1.75f;
				func_2102(iLocal_1281[iParam1], 6, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1.5f;
				func_2102(iLocal_1281[iParam1], 4, iParam1);
			}
			break;
		case 6:
			if (bParam2)
			{
				fLocal_168[iParam1] = 2f;
				func_2102(iLocal_1281[iParam1], 7, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1.501f;
				func_2102(iLocal_1281[iParam1], 5, iParam1);
			}
			break;
		case 7:
			if (bParam2)
			{
				fLocal_168[iParam1] = 2.001f;
				func_2102(iLocal_1281[iParam1], 8, iParam1);
			}
			else
			{
				fLocal_168[iParam1] = 1.75f;
				func_2102(iLocal_1281[iParam1], 6, iParam1);
			}
			break;
		case 8:
			if (!bParam2)
			{
				fLocal_168[iParam1] = 2f;
				func_2102(iLocal_1281[iParam1], 7, iParam1);
			}
			break;
	}
}

bool func_1568()
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	fVar1 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_760))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
		{
			fVar1 = __LIB_0__::func_665(iLocal_431[1], iLocal_760, 0, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
		{
			fVar0 = __LIB_0__::func_665(iLocal_431[0], iLocal_760, 0, 1);
		}
	}
	if (fVar1 < fVar0)
	{
		if (iLocal_1281[1] > iLocal_1281[0])
		{
			return true;
		}
	}
	return false;
}

void func_1579(int iParam0)
{
	iLocal_1252 = iParam0;
}

void func_1581(int iParam0, int iParam1)
{
	iLocal_1335 = iParam1;
}

bool func_1585()
{
	if (!__LIB_14__::func_147(Global_35, "room_lower") || !__LIB_14__::func_147(iLocal_430, "room_lower"))
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_36, vLocal_1010[iLocal_180 /*3*/]) < 2f || BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_430, true, false)) < 2f)
	{
		return true;
	}
	return false;
}

void func_1586()
{
	Local_261 = { 0f, 0f, 0f };
	Local_261.f_3 = iLocal_442[iLocal_182];
	Local_261.f_4 = 21030;
	Local_261.f_8 = 4;
	Local_261.f_19 = 4;
	Local_261.f_21 = 4;
	Local_261.f_17 = 4;
	Local_261.f_18 = 4;
	Local_261.f_7 = -1;
}

void func_1587()
{
	Local_286 = { 0f, 0f, 0f };
	Local_286.f_3 = iLocal_442[iLocal_182];
	Local_286.f_4 = 21030;
	Local_286.f_8 = 4;
	Local_286.f_19 = 4;
	Local_286.f_21 = 4;
	Local_286.f_17 = 4;
	Local_286.f_18 = 4;
	Local_286.f_7 = -1;
}

bool func_1588(int iParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == uLocal_1340[iParam0] && iVar0 != 0)
	{
		return true;
	}
	return false;
}

void func_1590(int iParam0)
{
	__LIB_9__::func_945(&(Global_1914319.f_15936[iParam0 /*6*/]), 0);
	Global_1914319.f_15936[iParam0 /*6*/] = -1;
}

int func_1604(var uParam0, int iParam1, int iParam2)
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
		return func_1604(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1607()
{
	int iVar0;
	char* sVar1[2];
	vector3 vVar4[2];
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1228[0]) && VOLUME::_DOES_VOLUME_EXIST(iLocal_1228[1]))
	{
		return true;
	}
	sVar1[0] = "SAD_DEF_VOL_0";
	sVar1[1] = "SAD_DEF_VOL_1";
	vVar4[0 /*3*/] = { -2f, 1f, 0f };
	vVar4[1 /*3*/] = { 2f, 1f, 0f };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1228[iVar0]))
		{
			iLocal_1228[iVar0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_985, vLocal_988, 3.5f, 3f, 3f, sVar1[iVar0]);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1228[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_407))
			{
				PED::_0x7C00CFC48A782DC0(iLocal_1228[iVar0], iLocal_407, vVar4[iVar0 /*3*/], 0f, 0f, 0f, 2, 1);
			}
			if (iVar0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_430))
				{
					PED::_0xFC3DB99C8144CD81(iLocal_430, iLocal_1228[iVar0], 1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_1625(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_536(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1642()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2162(0);
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
	func_2162(1);
}

void func_1643()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_783(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1644()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2165(0);
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
	func_2165(1);
}

void func_1645()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2165(0);
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
	func_2165(1);
}

void func_1646()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_783(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_783(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_784(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_784(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1672(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2193(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_783(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1713()
{
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_1"))))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_1")));
	}
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_2"))))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_2")));
	}
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_3"))))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_3")));
	}
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_4"))))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_4")));
	}
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_5"))))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(PERSCHAR::_0x112DDF56300BC6E5(joaat("PERSCHAR_CAMP_CHICKEN_5")));
	}
}

bool func_1856()
{
	if (((__LIB_1__::func_44(Global_1347702[66 /*49*/].f_15) || __LIB_1__::func_44(Global_1835011[16 /*74*/].f_1)) || __LIB_1__::func_44(Global_1835011[24 /*74*/].f_1)) || __LIB_1__::func_44(Global_1347702[138 /*49*/].f_15))
	{
		return false;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	return true;
}

bool func_1857()
{
	int iVar0;
	iVar0 = 0;
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1304[8], "pbl_dialogue");
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1243))
	{
		iLocal_1243 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(670.651f, -1261.62f, 43.654f, 0f, 1f, 44f, 5f, 2f, 2f, "FIRETRAP_VOL");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1236))
	{
		iLocal_1236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_1149, vLocal_1152, vLocal_1155, "ARGUE_START");
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1236, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1243, true, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_430) && !ENTITY::IS_ENTITY_DEAD(iLocal_429))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_430) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_429))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_430, joaat("INTERRUPT")))
				{
					iVar0 = 1;
				}
				if (__LIB_14__::func_124(20))
				{
					iVar0 = 1;
				}
				if (iVar0 == 1)
				{
					if (!__LIB_4__::func_635(16384))
					{
						__LIB_0__::func_326(16384);
					}
				}
			}
		}
	}
	return iVar0;
}

void func_2017()
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
	iVar0 = func_1001(6291456, 0);
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

bool func_2093(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	uParam0->f_1785.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_1785));
	return bVar0;
}

void func_2102(var uParam0, int iParam1, int iParam2)
{
	iLocal_1281[iParam2] = iParam1;
}

void func_2162(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_783(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2473(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1062(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_784(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2479(Var0);
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

void func_2165(bool bParam0)
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
		func_783(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_783(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_784(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_784(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_784(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2193(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2193(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2193(iVar63, -915411861, 1, 0, 0));
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

void func_2473(int iParam0)
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
	func_784(iParam0, 1, 1, -142743235, 1);
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
		func_784(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2479(struct<6> Param0)
{
	if (!func_2611(Param0.f_4, 1))
	{
	}
	if (!func_2611(Param0, 1))
	{
	}
	if (!func_2611(Param0.f_2, 1))
	{
	}
	if (!func_2611(Param0.f_5, 1))
	{
	}
	if (!func_2611(Param0.f_3, 1))
	{
	}
	if (!func_2611(Param0.f_1, 1))
	{
	}
}

bool func_2611(int iParam0, int iParam1)
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
				if (func_2611(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2611(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2611(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2611(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

