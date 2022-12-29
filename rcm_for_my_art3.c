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
	int iLocal_16[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_25[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	float fLocal_54 = 0f;
	var uLocal_55 = 0;
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
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = -1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 1097859072;
	var uLocal_91 = 1000;
	var uLocal_92 = 1067450368;
	var uLocal_93 = 5000;
	var uLocal_94 = 42;
	var uLocal_95 = 1103626240;
	var uLocal_96 = 1077936128;
	var uLocal_97 = 1106247680;
	var uLocal_98 = 1103101952;
	var uLocal_99 = 1097859072;
	var uLocal_100 = 1103626240;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = -1;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 1097859072;
	var uLocal_120 = 1000;
	var uLocal_121 = 1067450368;
	var uLocal_122 = 5000;
	var uLocal_123 = 42;
	var uLocal_124 = 1103626240;
	var uLocal_125 = 1077936128;
	var uLocal_126 = 1106247680;
	var uLocal_127 = 1103101952;
	var uLocal_128 = 1097859072;
	var uLocal_129 = 1103626240;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = -1;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 1097859072;
	var uLocal_149 = 1000;
	var uLocal_150 = 1067450368;
	var uLocal_151 = 5000;
	var uLocal_152 = 42;
	var uLocal_153 = 1103626240;
	var uLocal_154 = 1077936128;
	var uLocal_155 = 1106247680;
	var uLocal_156 = 1103101952;
	var uLocal_157 = 1097859072;
	var uLocal_158 = 1103626240;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<21> Local_176[1];
	struct<17> Local_198[1];
	struct<22> Local_216 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_238 = 3;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	struct<4> Local_241[8];
	vector3 vLocal_274[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	struct<7> Local_338[16];
	var uLocal_451 = 3;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 96;
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
	vector3 vLocal_561 = { 0f, 0f, 0f };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
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
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	char* sLocal_595 = NULL;
	char* sLocal_596 = NULL;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_54 = 1000f;
	iLocal_324 = joaat("CS_FRENCHARTIST");
	iLocal_325 = joaat("A_M_M_NBXUPPERCLASS_01");
	iLocal_326 = joaat("RCSP_FORMYART_MALES_01");
	iLocal_327 = joaat("RCSP_FORMYART_FEMALES_01");
	iLocal_328 = joaat("CS_FORMYARTBIGWOMAN");
	iLocal_329 = 1;
	iLocal_330 = 4;
	iLocal_331 = 8;
	iLocal_333 = 1;
	iLocal_334 = 1;
	iLocal_335 = 1;
	iLocal_336 = 1;
	sLocal_595 = "rcm_for_my_art_3_walkntalk";
	sLocal_596 = "rcm_for_my_art_3_assist";
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
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = func_93(uParam0);
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
		__LIB_19__::func_279(uParam0, __LIB_0__::func_58(uParam0));
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
		__LIB_13__::func_580(uParam0);
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
	__LIB_12__::func_658(uParam0, 15);
	__LIB_12__::func_659(uParam0, 16);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 3.5f);
	func_189();
	func_190();
	func_191();
	Local_216.f_3 = Global_35;
	Local_216.f_4 = 21030;
	Local_216.f_7 = 0;
	Local_216.f_8 = 4;
	Local_216.f_13 = 1;
	Local_216.f_17 = 3;
	Local_216.f_18 = 2;
	Local_216.f_19 = 3;
	Local_216.f_21 = 3;
	Local_216.f_16 = 3;
	Local_216.f_11 = 0;
	Local_216.f_12 = 0;
	iLocal_72 = TASK::ADD_COVER_POINT(2698.44f, -1198.239f, 55.4694f, 177.8566f, 0, 1, 0, false);
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_324, 1);
	__LIB_12__::func_867(uParam0, iLocal_325, 1);
	__LIB_12__::func_867(uParam0, iLocal_326, 1);
	__LIB_12__::func_867(uParam0, iLocal_327, 1);
	__LIB_12__::func_867(uParam0, iLocal_328, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_12__::func_867(uParam0, func_196(iVar0), 1);
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		__LIB_12__::func_867(uParam0, func_197(iVar1), 1);
		iVar1++;
	}
	__LIB_13__::func_15(uParam0, sLocal_595, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_596, 2, -1, 7);
	AUDIO::PREPARE_MUSIC_EVENT("FMA3_RESTART_3");
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
			Var1 = { func_208(19) };
			Var1.f_3 = func_209(19);
			break;
		case 1:
			Var1 = { func_208(20) };
			Var1.f_3 = func_209(20);
			break;
		case 2:
			Var1 = { func_208(21) };
			Var1.f_3 = func_209(21);
			break;
		case 3:
			Var1 = { func_208(22) };
			Var1.f_3 = func_209(22);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_210(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	int iVar0;
	if (func_211(&iLocal_14))
	{
		StringCopy(&(uParam0->f_2578), "FMA4_F_ART", 24);
		return true;
	}
	if (func_212())
	{
		StringCopy(&(uParam0->f_2578), "FMA4_F_DIST", 24);
		return true;
	}
	if (iLocal_330 == 0)
	{
		if (func_213())
		{
			if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1))
			{
				StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
				return true;
			}
			else if (PED::IS_PED_SHOOTING(Global_35))
			{
				StringCopy(&(uParam0->f_2578), "FMA4_F_PATRO", 24);
				return true;
			}
			if ((((__LIB_2__::func_401(iLocal_14, 1, 1, 0, 0, 0) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_14, false)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 5f, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_14, Global_35, 1, 1)) || PED::_0x29FCE825613FEFCA(iLocal_14, 5000))
			{
				StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
				return true;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_338[iVar0 /*7*/]))
				{
				}
				else
				{
					__LIB_1__::func_401(&uLocal_131, 1);
					__LIB_2__::func_828(&uLocal_131, 1);
					__LIB_2__::func_829(&uLocal_131, 1);
					__LIB_1__::func_398(&uLocal_131, 1);
					__LIB_2__::func_830(&uLocal_131, 1);
					__LIB_1__::func_413(&uLocal_131, 0);
					__LIB_1__::func_402(&uLocal_131, 0);
					__LIB_1__::func_406(&uLocal_131, 0);
					if (((((__LIB_2__::func_401(Local_338[iVar0 /*7*/], 1, 1, 0, 0, 0) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), Local_338[iVar0 /*7*/], false)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_338[iVar0 /*7*/], true, false), 5f, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_338[iVar0 /*7*/], Global_35, 1, 1)) || PED::_0x29FCE825613FEFCA(Local_338[iVar0 /*7*/], 5000)) || __LIB_13__::func_641(Local_338[iVar0 /*7*/], 0, &uLocal_131, &uLocal_159, 0, 0))
					{
						if (__LIB_0__::func_272(Local_338[iVar0 /*7*/], 0) && !__LIB_0__::func_163(Local_338[iVar0 /*7*/], 518218985))
						{
							TASK::TASK_SMART_FLEE_PED(Local_338[iVar0 /*7*/], Global_35, 150f, -1, 0, 1077936128 /* Float: 3f */, 0);
						}
						func_227();
						StringCopy(&(uParam0->f_2578), "FMA4_F_PATRO", 24);
						return true;
					}
				}
				iVar0++;
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iLocal_14, 17))
			{
				if ((((WEAPON::_0xCB690F680A3EA971(Global_35, 1) && WEAPON::_0xCB690F680A3EA971(Global_35, 4)) && WEAPON::_0xCB690F680A3EA971(Global_35, 2)) && __LIB_11__::func_775(ENTITY::GET_ENTITY_COORDS(iLocal_14, false, false), 1120403456 /* Float: 100f */, 4f)) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_14, false))
				{
					StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
					return true;
				}
			}
			if (((((((__LIB_2__::func_401(iLocal_15, 1, 1, 0, 0, 0) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_15, false)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_15, true, false), 5f, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_15, Global_35, 1, 1)) || PED::_0x29FCE825613FEFCA(iLocal_15, 5000)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_35, true, 0)) || __LIB_0__::func_27(iLocal_51, 4)) || __LIB_13__::func_641(iLocal_15, 0, &uLocal_73, &uLocal_101, 0, 0))
			{
				StringCopy(&(uParam0->f_2578), "FMA4_F_DOORMAN", 24);
				return true;
			}
			if (func_230())
			{
				StringCopy(&(uParam0->f_2578), "FMA4_F_PATRO", 24);
				return true;
			}
		}
	}
	if (iLocal_330 == 2)
	{
		if (func_231() || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 5f, true))
		{
			func_232();
			__LIB_5__::func_20(0, 0);
			TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			StringCopy(&(uParam0->f_2578), "FMA4_F_SCAR", 24);
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
	if (func_236(uParam0->f_174))
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
	if (func_245(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_250(uParam0);
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

int func_76(var uParam0)
{
	return iLocal_323;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_290(uParam0))
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_91(var uParam0)
{
	__LIB_0__::func_11(uParam0);
	if (__LIB_1__::func_205(Global_35, iLocal_34, 1, 0))
	{
		__LIB_18__::func_627(uParam0, &uLocal_451, 0, &iLocal_15, 1, 1097859072 /* Float: 15f */, 0, 0, 0);
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
		__LIB_19__::func_279(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_312(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	func_314(uParam0, 0, 1, 1);
	return 7;
}

int func_96(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bVar0 = true;
	iVar4 = iParam1;
	PED::_0x9851DE7AEC10B4E1(func_208(20), 50f, 1, 0);
	switch (iVar4)
	{
		case 0:
			if (!bVar0)
			{
				return 2;
			}
			if (__LIB_4__::func_545())
			{
				return 2;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[11 /*7*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[12 /*7*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[10 /*7*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[13 /*7*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[2 /*7*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[3 /*7*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_338[7 /*7*/]))
			{
			}
			if (!__LIB_0__::func_75(&uLocal_590))
			{
				__LIB_1__::func_148(&uLocal_590);
			}
			else if (__LIB_0__::func_265(&uLocal_590) > 5f)
			{
				__LIB_2__::func_426(&(Local_338[14 /*7*/]));
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_208(19), func_209(19), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, func_208(2), func_209(2), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[11 /*7*/], 2700.709f, -1191.839f, 56.0908f, -90f, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[12 /*7*/], 2700.854f, -1192.862f, 56.09f, 5.12f, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[10 /*7*/], 2699.072f, -1205.703f, 56.4753f, -90f, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[13 /*7*/], 2699.064f, -1204.964f, 56.4753f, -90f, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[2 /*7*/], 2693.093f, -1205.443f, 56.4632f, -121.95f, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[3 /*7*/], 2692.808f, -1200.572f, 56.4626f, -80.85f, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[7 /*7*/], 2693.259f, -1201.429f, 56.4626f, -73.29f, false, true);
				LAW::_0x710448D44A64C213(false);
				func_318();
				func_319();
				func_320();
				func_321();
				func_322();
				func_323(uParam0);
				bLocal_64 = true;
				func_314(uParam0, 0, 1, 1);
				__LIB_0__::func_37(&uLocal_590);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!bVar0)
			{
				return 2;
			}
			if (__LIB_4__::func_545())
			{
				return 2;
			}
			if (!__LIB_0__::func_75(&uLocal_590))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_208(20), func_209(20), true, false, true);
				ENTITY::_0x9587913B9E772D29(Global_35, 0);
				__LIB_1__::func_148(&uLocal_590);
			}
			else if (__LIB_0__::func_265(&uLocal_590) > 5f)
			{
				bLocal_64 = true;
				ENTITY::SET_ENTITY_COORDS(iLocal_14, 2698.262f, -1198.096f, 55.4694f, true, false, true, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_15, func_208(16), func_209(16), false, true);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_14, 2698.44f, -1198.239f, 55.4694f, -1, 1, 0, 0, 0, 0, 0, 0, 0);
				func_325(2, 0);
				if (__LIB_0__::func_272(iLocal_15, 0) && !PED::_0xB086C8C0F5701D14(iLocal_15))
				{
					TASK::TASK_COWER(iLocal_15, -1, 0, 0);
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[0 /*7*/], func_208(7), func_209(7), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[1 /*7*/], func_208(8), func_209(8), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[2 /*7*/], func_208(9), func_209(9), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[4 /*7*/], func_208(11), func_209(11), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[5 /*7*/], func_208(12), func_209(12), false, true);
				__LIB_2__::func_426(&(Local_338[11 /*7*/]));
				__LIB_2__::func_426(&(Local_338[10 /*7*/]));
				__LIB_2__::func_426(&(Local_338[12 /*7*/]));
				__LIB_2__::func_426(&(Local_338[13 /*7*/]));
				__LIB_2__::func_426(&(Local_338[3 /*7*/]));
				__LIB_2__::func_426(&(Local_338[7 /*7*/]));
				__LIB_2__::func_426(&(Local_338[8 /*7*/]));
				__LIB_2__::func_426(&(Local_338[9 /*7*/]));
				__LIB_2__::func_426(&(Local_338[14 /*7*/]));
				__LIB_2__::func_426(&(Local_338[15 /*7*/]));
				__LIB_2__::func_426(&(Local_338[6 /*7*/]));
				TASK::CLEAR_PED_TASKS(Local_338[1 /*7*/], true, false);
				PED::_0x789DABD18E9024DB(Local_338[4 /*7*/], 12, 0);
				TASK::TASK_GRAPPLE(Local_338[4 /*7*/], Local_338[1 /*7*/], 0, 1, 1.5f, 1, 0);
				func_314(uParam0, 0, 1, 0);
				func_314(uParam0, 1, 1, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
				LAW::_0x710448D44A64C213(false);
				if (iLocal_323 != 1)
				{
					iLocal_323 = 1;
				}
				func_323(uParam0);
				func_326(uParam0, 4, 0);
				__LIB_0__::func_565("FMA4_O_PROT", 7500, 0, 0, 0, 1);
				__LIB_0__::func_37(&uLocal_590);
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 2:
			if (!func_328(6, "pl_Action") || !func_328(7, "pl_Dialogue_01"))
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				return 2;
			}
			if (__LIB_4__::func_545())
			{
				return 2;
			}
			if (!__LIB_0__::func_75(&uLocal_590))
			{
				__LIB_1__::func_148(&uLocal_590);
			}
			else if (__LIB_0__::func_265(&uLocal_590) > 5f)
			{
				bLocal_64 = true;
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_208(21), func_209(21), true, false, true);
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 1f, 2f, 0f) };
				ENTITY::_0x9587913B9E772D29(Global_35, 0);
				__LIB_3__::func_409(&vVar1, 1f);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_14, vVar1, __LIB_0__::func_152(Global_36, vVar1, 1), false, true);
				ENTITY::_0x9587913B9E772D29(iLocal_14, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_15, func_208(16), func_209(16), false, true);
				if (!__LIB_0__::func_163(iLocal_15, 474215631))
				{
					TASK::TASK_COWER(iLocal_15, -1, 0, 0);
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[0 /*7*/], func_208(7), func_209(7), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[1 /*7*/], func_208(8), func_209(8), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[2 /*7*/], func_208(9), func_209(9), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[4 /*7*/], func_208(11), func_209(11), false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_338[5 /*7*/], func_208(12), func_209(12), false, true);
				func_323(uParam0);
				__LIB_2__::func_426(&(Local_338[11 /*7*/]));
				__LIB_2__::func_426(&(Local_338[10 /*7*/]));
				__LIB_2__::func_426(&(Local_338[12 /*7*/]));
				__LIB_2__::func_426(&(Local_338[13 /*7*/]));
				__LIB_2__::func_426(&(Local_338[3 /*7*/]));
				__LIB_2__::func_426(&(Local_338[7 /*7*/]));
				__LIB_2__::func_426(&(Local_338[8 /*7*/]));
				__LIB_2__::func_426(&(Local_338[9 /*7*/]));
				__LIB_2__::func_426(&(Local_338[14 /*7*/]));
				__LIB_2__::func_426(&(Local_338[15 /*7*/]));
				__LIB_1__::func_864(Local_338[0 /*7*/], 1, 0);
				__LIB_1__::func_864(Local_338[1 /*7*/], 1, 0);
				__LIB_1__::func_864(Local_338[2 /*7*/], 1, 0);
				__LIB_1__::func_864(Local_338[3 /*7*/], 1, 0);
				__LIB_1__::func_864(Local_338[4 /*7*/], 1, 0);
				__LIB_1__::func_864(Local_338[5 /*7*/], 1, 0);
				__LIB_2__::func_426(&(Local_338[6 /*7*/]));
				AUDIO::TRIGGER_MUSIC_EVENT("FMA3_RESTART_3");
				if (!MAP::DOES_BLIP_EXIST(iLocal_32))
				{
					iLocal_32 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_14);
					MAP::_BLIP_SET_MODIFIER(iLocal_32, -546708623);
					MAP::_BLIP_SET_MODIFIER(iLocal_32, 231194138);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_32, "FMA3_BLIP_C");
				}
				func_314(uParam0, 2, 1, 0);
				func_325(3, 0);
				__LIB_0__::func_37(&uLocal_590);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 3:
			if (!bVar0)
			{
				return 2;
			}
			func_323(uParam0);
			LAW::_0x710448D44A64C213(true);
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
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_19__::func_279(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_338(uParam0))
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
	return func_344(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	int iVar0;
	switch (iLocal_329)
	{
		case 0:
			func_314(uParam0, 1, 0, 0);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Mans_Drink", iLocal_25[1]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Womans_Drink", iLocal_25[2]);
			__LIB_3__::func_319(Local_241[2 /*4*/]);
			__LIB_3__::func_319(Local_241[3 /*4*/]);
			__LIB_3__::func_319(Local_241[4 /*4*/]);
			__LIB_3__::func_319(Local_241[5 /*4*/]);
			iVar0 = 0;
			while (iVar0 < 8)
			{
				__LIB_4__::func_866(&(iLocal_16[iVar0]), 1, 0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				__LIB_4__::func_866(&(iLocal_25[iVar0]), 1, 0);
				iVar0++;
			}
			func_349();
			if (iLocal_323 != 1)
			{
				iLocal_323 = 1;
			}
			return 7;
		case 1:
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

int func_107(var uParam0)
{
	__LIB_13__::func_642(-1, 0, 0);
	func_353();
	func_354(uParam0);
	func_355(uParam0);
	switch (iLocal_330)
	{
		case 0:
			func_356();
			if (__LIB_0__::func_181())
			{
				if (__LIB_3__::func_736(78, 1))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_36, 1, 0) && __LIB_0__::func_665(Global_35, iLocal_14, 1, 1) < 8f)
					{
						func_359(uParam0, 0);
					}
				}
				else
				{
					func_359(uParam0, 0);
				}
			}
			else
			{
				func_359(uParam0, 0);
			}
			if (!__LIB_0__::func_27(iLocal_51, 16))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_36, true, 0))
				{
					__LIB_1__::func_683(&iLocal_51, 16);
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_14, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				}
			}
			if (!bLocal_64)
			{
				if (__LIB_1__::func_205(Global_35, iLocal_48, 1, 0))
				{
					if (!bLocal_63)
					{
						TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_596, 1, 1065353216 /* Float: 1f */, 1f, 1);
						AUDIO::STOP_PED_SPEAKING(Global_35, true);
						bLocal_63 = true;
					}
				}
				else if (bLocal_63)
				{
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_596, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
					AUDIO::STOP_PED_SPEAKING(Global_35, false);
					bLocal_64 = true;
				}
			}
			func_361();
			func_362();
			func_363();
			func_364();
			func_365();
			func_366();
			if (func_367(uParam0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[5 /*4*/], "Purse", iLocal_25[5]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[5 /*4*/], "CIGAR", iLocal_25[4]);
				__LIB_1__::func_951(&(iLocal_25[5]));
				__LIB_1__::func_951(&(iLocal_25[4]));
				__LIB_5__::func_20(0, 0);
				__LIB_1__::func_345();
				__LIB_0__::func_325(&iLocal_33);
				return 5;
			}
			break;
		case 1:
			if (func_371())
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_32))
				{
					iLocal_32 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_14);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_32, "FMA3_BLIP_C");
					MAP::_BLIP_SET_MODIFIER(iLocal_32, -546708623);
					MAP::_BLIP_SET_MODIFIER(iLocal_32, 231194138);
				}
				func_372();
				if (!__LIB_0__::func_48(Global_35, iLocal_14, 7f, 1))
				{
					func_326(uParam0, 1, 1);
					if (!bLocal_65)
					{
						if (__LIB_0__::func_181())
						{
							if (__LIB_12__::func_876(uParam0, "RFMA_3_JCALL", 0))
							{
								bLocal_65 = true;
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RFMA_3_ACALL", 0))
						{
							bLocal_65 = true;
						}
					}
					else
					{
						func_375(uParam0, &iLocal_14, &uLocal_557, &uLocal_451, 5, 8, 20f, 1f, 4f);
					}
				}
				else if (func_328(6, "pl_Action") && func_328(7, "pl_Dialogue_01"))
				{
					if (iLocal_323 != 2)
					{
						iLocal_323 = 2;
					}
					func_314(uParam0, 2, 0, 0);
				}
				else
				{
					Jump @896; //curOff = 637
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
					__LIB_1__::func_538(0);
					if (__LIB_0__::func_272(Local_338[0 /*7*/], 0) && __LIB_4__::func_417(Local_338[0 /*7*/]))
					{
						if (PED::GET_PED_CONFIG_FLAG(Local_338[0 /*7*/], 138, true) == 0)
						{
							PED::SET_PED_CONFIG_FLAG(Local_338[0 /*7*/], 138, true);
						}
					}
					func_326(uParam0, 4, 0);
					if (!bLocal_68)
					{
						if (bLocal_66)
						{
							__LIB_0__::func_565("FMA4_O_PROT", 7500, 0, 0, 0, 1);
							bLocal_68 = true;
						}
					}
					func_375(uParam0, &iLocal_14, &uLocal_553, &uLocal_451, 2, 4, 1088421888 /* Float: 7f */, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */);
					Jump @1201; //curOff = 896
					if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, 3f, 3f, 1f, false, true, 0) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iLocal_14, 17))
					{
						if (__LIB_18__::func_627(uParam0, &uLocal_451, 9, &iLocal_14, 1, 1097859072 /* Float: 15f */, 0, 0, 0) == 2)
						{
							func_325(3, 0);
						}
					}
					func_326(uParam0, 8, 0);
					func_378();
					if (__LIB_0__::func_266(iLocal_14, func_208(3), 5f, 1, 1))
					{
						func_314(uParam0, 3, 1, 0);
					}
					else if ((((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[7 /*4*/], false) && !__LIB_1__::func_205(iLocal_14, iLocal_39, 1, 0)) && !__LIB_1__::func_205(iLocal_14, iLocal_40, 1, 0)) && !__LIB_1__::func_205(iLocal_14, iLocal_41, 1, 0)) && !__LIB_1__::func_205(iLocal_14, iLocal_42, 1, 0))
					{
						func_380(uParam0);
					}
					Jump @1201; //curOff = 1096
					if (__LIB_0__::func_266(iLocal_14, func_208(3), 0.7f, 1, 1))
					{
						func_232();
						func_381();
						if (iLocal_323 != 3)
						{
							iLocal_323 = 2;
						}
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[6 /*4*/], false))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_14, &Local_216);
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_241[6 /*4*/], false))
					{
						__LIB_1__::func_948(iLocal_594, 1, 0f, 0, 0, 0, 0, 0);
						return 8;
					}
				}
				return 7;
			}
			default:
				break;
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
		func_417(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	float fVar0;
	fVar0 = 30f;
	if (!__LIB_12__::func_610(iLocal_14, -1f, fVar0, 0, 0, -1082130432 /* Float: -1f */))
	{
		if (OBJECT::_0x6E2AA80BB0C03728(iLocal_594, 40))
		{
			func_446(uParam0);
		}
		return false;
	}
	else
	{
		__LIB_2__::func_426(&iLocal_14);
	}
	__LIB_1__::func_941(iLocal_594);
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_448(uParam0);
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_45))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_45);
	}
	__LIB_0__::func_172(iLocal_34);
	__LIB_0__::func_172(iLocal_35);
	__LIB_0__::func_172(iLocal_36);
	__LIB_0__::func_172(iLocal_38);
	__LIB_0__::func_172(iLocal_39);
	__LIB_0__::func_172(iLocal_40);
	__LIB_0__::func_172(iLocal_41);
	__LIB_0__::func_172(iLocal_42);
	__LIB_0__::func_172(iLocal_37);
	__LIB_0__::func_172(iLocal_43);
	__LIB_0__::func_172(iLocal_45);
	__LIB_0__::func_172(iLocal_46);
	__LIB_0__::func_172(iLocal_47);
	__LIB_0__::func_172(iLocal_48);
	__LIB_0__::func_172(iLocal_49);
	__LIB_0__::func_172(iLocal_50);
	__LIB_2__::func_788(&iLocal_15, 1, 0, 1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		__LIB_0__::func_325(&(Local_338[iVar1 /*7*/].f_1));
		if (ENTITY::DOES_ENTITY_EXIST(Local_338[iVar1 /*7*/]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_338[iVar1 /*7*/], false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_338[iVar1 /*7*/], false);
		}
		__LIB_2__::func_788(&(Local_338[iVar1 /*7*/]), 0, 0, 1);
		iVar1++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		__LIB_3__::func_319(Local_241[iVar2 /*4*/]);
		iVar2++;
	}
	__LIB_1__::func_941(iLocal_593);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_595))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_595);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_596))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_596);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_564);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_565);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_324);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_327);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_328);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_196(iVar0));
		__LIB_4__::func_866(&(iLocal_16[iVar0]), 1, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_197(iVar0));
		__LIB_4__::func_866(&(iLocal_25[iVar0]), 1, 1);
		iVar0++;
	}
}

void func_189()
{
	__LIB_13__::func_634(&uLocal_451);
	__LIB_13__::func_635(&uLocal_451, 0, "FMA_3_DOOR_0");
	__LIB_13__::func_635(&uLocal_451, 1, "FMA_3_DOORARM");
	__LIB_13__::func_635(&uLocal_451, 2, "FMA_3_HELP1");
	__LIB_13__::func_635(&uLocal_451, 3, "FMA_3_HELP2");
	__LIB_13__::func_635(&uLocal_451, 4, "FMA_3_HELP3");
	__LIB_13__::func_635(&uLocal_451, 5, "FMA_3_FIND1");
	__LIB_13__::func_635(&uLocal_451, 6, "FMA_3_FIND2");
	__LIB_13__::func_635(&uLocal_451, 7, "FMA_3_FIND3");
	__LIB_13__::func_635(&uLocal_451, 8, "FMA_3_FIND4");
	__LIB_13__::func_635(&uLocal_451, 9, "FMA_3_LEAVE");
	if (__LIB_0__::func_181())
	{
		__LIB_13__::func_635(&uLocal_451, 10, "FMA_3_DOORILOJ");
	}
	else
	{
		__LIB_13__::func_635(&uLocal_451, 10, "FMA_3_DOORILOA");
	}
}

void func_190()
{
	PED::ADD_RELATIONSHIP_GROUP("RelGroupCrowd", &iLocal_564);
	PED::ADD_RELATIONSHIP_GROUP("RelGroupArtist", &iLocal_565);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_565);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_565, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("PLAYER"), iLocal_564);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_564, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_565, iLocal_564);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_564, iLocal_565);
}

void func_191()
{
	Local_241[0 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig11_artist_flees@rc4_ig11_artist_flees";
	Local_241[1 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig1_doorman_ushers@ig1_doorman_ushers";
	Local_241[2 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig2_couple_in_foyer@ig2_couple_in_foyer";
	Local_241[3 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig3_couple_look_at_statue@ig3_couple_look_at_statue";
	Local_241[4 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig4_man_studies_painting@ig4_man_studies_painting";
	Local_241[5 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig5_mable_and_husband@ig5_mable_and_husband";
	Local_241[6 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig12@rc4_ig12";
	Local_241[7 /*4*/].f_3 = "script@rcm@fma@ig@rc4_ig12@rc4_ig12_walkntalk";
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CIGARETTE_CS01X");
		case 1:
			return joaat("P_CIGARETTE_CS01X");
		case 2:
			return joaat("P_GLASS03X");
		case 3:
			return joaat("P_GLASS03X");
		case 4:
			return joaat("P_GLASS03X");
		case 5:
			return joaat("P_GLASS03X");
		case 6:
			return joaat("P_GLASS03X");
		case 7:
			return joaat("S_PURSEFANCY01X");
		default:
			break;
	}
	return 0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_NEWSPAPER_02X");
		case 1:
			return joaat("P_GLASS03X");
		case 2:
			return joaat("P_GLASS03X");
		case 3:
			return joaat("P_GLASS03X");
		case 4:
			return joaat("P_CIGAR01X");
		case 5:
			return joaat("S_PURSEFANCY02X");
		default:
			break;
	}
	return 0;
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2700.68f, -1194.16f, 56.09f;
		case 1:
			return 2699.24f, -1200.78f, 56.47f;
		case 2:
			return 2685.693f, -1204.83f, 56.4528f;
		case 3:
			return 2741.576f, -1174.902f, 49.418f;
		case 4:
			return 2698.901f, -1182.358f, 53.4925f;
		case 5:
			return 2690.958f, -1202.552f, 55.4692f;
		case 6:
			return 2687.562f, -1203.466f, 56.46922f;
		case 7:
			return 2691.861f, -1202.847f, 56.4311f;
		case 8:
			return 2685.77f, -1203.666f, 56.4657f;
		case 9:
			return 2689.476f, -1203.979f, 56.4659f;
		case 10:
			return 2692.412f, -1201.318f, 56.46922f;
		case 11:
			return 2689.289f, -1204.242f, 56.4657f;
		case 12:
			return 2686.32f, -1204.185f, 56.4667f;
		case 13:
			return 2693.582f, -1203.071f, 56.46922f;
		case 14:
			return 2690.719f, -1205.233f, 56.46922f;
		case 15:
			return 2688.433f, -1200.673f, 56.46922f;
		case 16:
			return 2696.621f, -1186.907f, 55.0906f;
		case 17:
			return 2743.133f, -1170.804f, 51.7193f;
		case 18:
			return 2740.921f, -1176.545f, 48.2339f;
		case 19:
			return 2699.642f, -1197.378f, 55.4693f;
		case 20:
			return 2693.351f, -1203.012f, 56.4695f;
		case 21:
			return 2700.083f, -1194.123f, 55.0931f;
		case 22:
			return 2740.16f, -1180.12f, 48.214f;
	}
	return 0f, 0f, 0f;
}

float func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -70.68f;
		case 1:
			return -148.56f;
		case 2:
			return -48.82531f;
		case 3:
			return 326.7408f;
		case 4:
			return 207.8859f;
		case 5:
			return 108.1834f;
		case 6:
			return -48.82531f;
		case 7:
			return -111.86f;
		case 8:
			return -103.21f;
		case 9:
			return 151.58f;
		case 10:
			return 136.0796f;
		case 11:
			return 151.58f;
		case 12:
			return 55.82f;
		case 13:
			return -88.56817f;
		case 14:
			return -49.64425f;
		case 15:
			return -84.55791f;
		case 16:
			return 34.6544f;
		case 17:
			return 51.9648f;
		case 18:
			return 150.3957f;
		case 19:
			return 96.2043f;
		case 20:
			return 86.85f;
		case 21:
			return 358.9339f;
		case 22:
			return 187.4501f;
	}
	return 0f;
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
		iVar0 = func_496(0, 0);
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

bool func_211(int iParam0)
{
	struct<28> Var0;
	var uVar28;
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
	__LIB_1__::func_413(&Var0, 0);
	__LIB_2__::func_829(&Var0, 1);
	__LIB_1__::func_402(&Var0, 0);
	__LIB_1__::func_401(&Var0, 0);
	__LIB_2__::func_830(&Var0, 0);
	__LIB_1__::func_399(&Var0, 0);
	__LIB_1__::func_404(&Var0, 0);
	__LIB_1__::func_398(&Var0, 0);
	__LIB_1__::func_403(&Var0, 0);
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
	{
		return true;
	}
	if (__LIB_2__::func_901(*iParam0, Global_35))
	{
		return true;
	}
	if (__LIB_13__::func_641(*iParam0, 0, &Var0, &uVar28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_212()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iLocal_14, Global_36, 1);
	if (fVar0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_213()
{
	if (__LIB_1__::func_205(Global_35, iLocal_37, 1, 0))
	{
		return true;
	}
	return false;
}

void func_227()
{
	if (__LIB_0__::func_272(Local_338[10 /*7*/], 1) && __LIB_0__::func_272(Local_338[13 /*7*/], 1))
	{
		if (__LIB_0__::func_163(Local_338[10 /*7*/], 518218985) && !__LIB_0__::func_163(Local_338[13 /*7*/], 518218985))
		{
			func_537(3);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Mans_Drink", iLocal_25[1]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Womans_Drink", iLocal_25[2]);
			__LIB_4__::func_866(&(iLocal_25[1]), 1, 1);
			__LIB_4__::func_866(&(iLocal_25[2]), 1, 1);
			func_538(Local_338[13 /*7*/]);
		}
		else if (__LIB_0__::func_163(Local_338[13 /*7*/], 518218985) && !__LIB_0__::func_163(Local_338[10 /*7*/], 518218985))
		{
			func_537(3);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Mans_Drink", iLocal_25[1]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Womans_Drink", iLocal_25[2]);
			__LIB_4__::func_866(&(iLocal_25[1]), 1, 1);
			__LIB_4__::func_866(&(iLocal_25[2]), 1, 1);
			func_538(Local_338[10 /*7*/]);
		}
	}
	if (__LIB_0__::func_272(Local_338[11 /*7*/], 1) && __LIB_0__::func_272(Local_338[12 /*7*/], 1))
	{
		if (__LIB_0__::func_163(Local_338[11 /*7*/], 518218985) && !__LIB_0__::func_163(Local_338[12 /*7*/], 518218985))
		{
			func_537(2);
			func_538(Local_338[12 /*7*/]);
		}
		else if (__LIB_0__::func_163(Local_338[12 /*7*/], 518218985) && !__LIB_0__::func_163(Local_338[11 /*7*/], 518218985))
		{
			func_537(2);
			func_538(Local_338[11 /*7*/]);
		}
	}
}

bool func_230()
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_274[iVar0 /*3*/].f_1))
		{
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(vLocal_274[iVar0 /*3*/].f_1, true, false), func_541(iVar0));
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_274[iVar0 /*3*/].f_1, Global_35, 1, 1) || fVar1 > 0.2f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_231()
{
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 500))
		{
			return true;
		}
		else if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_232()
{
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		__LIB_1__::func_726(iLocal_14, 1);
	}
	__LIB_1__::func_727(Global_35, 1);
	__LIB_5__::func_438(&uLocal_160);
}

bool func_236(int iParam0)
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

int func_245(var uParam0)
{
	int iVar0;
	if (bLocal_69)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_14))
		{
			if (!func_569(&iLocal_14, &uLocal_102, &uLocal_130, 1, 0, 0))
			{
				return 1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (__LIB_0__::func_272(Local_338[iVar0 /*7*/], 0))
			{
				if (!func_569(&(Local_338[iVar0 /*7*/]), &uLocal_131, &uLocal_159, 1, 0, 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_250(var uParam0)
{
	func_448(uParam0);
	__LIB_13__::func_222(uParam0, 1);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		LAW::_0x710448D44A64C213(true);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_1__::func_408(439465264, 1, 0);
		__LIB_6__::func_765(23, 1);
	}
}

int func_290(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_12__::func_767(uParam0);
	if (!bLocal_71)
	{
		__LIB_1__::func_408(1609506757, 1, 0);
		bLocal_71 = true;
	}
	bVar1 = true;
	if (__LIB_4__::func_545())
	{
		return 0;
	}
	if (!func_626(uParam0))
	{
		bVar1 = false;
	}
	if (!func_627(uParam0))
	{
		bVar1 = false;
	}
	if (!func_628(uParam0))
	{
		bVar1 = false;
	}
	if (iVar0 < 2)
	{
		if (!func_629())
		{
			bVar1 = false;
		}
		if (!func_630())
		{
			bVar1 = false;
		}
		if (((((!func_328(0, "pbl_Action01") || !func_328(1, "pbl_Stand_Idle_01")) || !func_328(2, "pbl_Idle_02")) || !func_328(3, "pbl_Idle_01")) || !func_328(4, "pbl_Idle_01")) || !func_328(5, "pbl_Idle_01"))
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (__LIB_8__::func_783(207))
		{
		}
		if (__LIB_8__::func_783(305))
		{
		}
		if (__LIB_8__::func_783(306))
		{
		}
		func_632(uParam0, 1106247680 /* Float: 30f */);
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_34))
		{
			iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2700.418f, -1187.394f, 56.556f, 0f, 0f, 0f, 3.471948f, 4.745501f, 2.973951f, "Gallery Reception");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_35))
		{
			iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2696.945f, -1188.067f, 56.57f, 0f, 0f, 0f, 3f, 3f, 3f, "m_volumeDoormanRoom");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_36))
		{
			iLocal_36 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.419f, -1203.231f, 57.16209f, 0f, 0f, 0f, 9.770851f, 6.54096f, 3.41165f, "Easel Room");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
		{
			iLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volumeGallery");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_38))
		{
			iLocal_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2735.363f, -1172.759f, 48.89742f, 0f, 0f, -1.328936f, 13.04647f, 13.535f, 6.216202f, "Artist Safe");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_39))
		{
			iLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2698.22f, -1188.137f, 51.755f, 0f, 0f, 0f, 5f, 5f, 5f, "m_volumeWalkNTalk01");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_40))
		{
			iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2709.862f, -1181.085f, 52.078f, 0f, 0f, 0f, 7f, 8f, 5f, "m_volumeWalkNTalk02");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2722.885f, -1172.086f, 50.97f, 0f, 0f, 0f, 12f, 5f, 6f, "m_volumeWalkNTalk03");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
		{
			iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2736.26f, -1175.113f, 49.175f, 0f, 0f, -29.444f, 5f, 5f, 5f, "m_volumeWalkNTalk04");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
		{
			iLocal_43 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volumeBalcony");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_45))
		{
			iLocal_45 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2698.494f, -1192.515f, 55.99f, 0f, 0f, 0f, 1.3f, 1.3f, 2f, "m_volumeCigarTable");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_47))
		{
			iLocal_47 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2698.671f, -1203.001f, 56.826f, 0f, 0f, 0f, 6f, 10f, 5f, "m_volumeCoupleStatue");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_48))
		{
			iLocal_48 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2700.139f, -1190.394f, 56.514f, 0f, 0f, -7.111f, 1.5f, 4.5f, 3f, "m_volumeAssist");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_49))
		{
			iLocal_49 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2699.045f, -1185.935f, 51.886f, 0f, 0f, -2.34f, 2f, 5f, 2f, "m_volumeDownStairs");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_50))
		{
			iLocal_50 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2701.78f, -1192.433f, 55.754f, 0f, 0f, 1.322f, 2f, 1.5f, 1.5f, "m_volumeCoupleFoyer");
		}
		iLocal_593 = 1707768866;
		iLocal_594 = -205734570;
		__LIB_1__::func_948(iLocal_593, 0, 0, 0, 1, 0, 0, 0);
		if (iVar0 < 0)
		{
			func_318();
			func_319();
			func_320();
			func_321();
			func_322();
			func_634();
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
		{
			VOLUME::_0x39816F6F94F385AD(iLocal_37, 2698.088f, -1194.634f, 56.826f, 0f, 0f, 0f, 8f, 26f, 4f);
			VOLUME::_0x39816F6F94F385AD(iLocal_37, 2689.767f, -1201.612f, 57.245f, 0f, 0f, 0f, 12f, 12f, 4f);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
		{
			VOLUME::_0x39816F6F94F385AD(iLocal_43, 2703.106f, -1201.789f, 56.828f, 0f, 0f, 0f, 1.8f, 5.9f, 3f);
			VOLUME::_0x39816F6F94F385AD(iLocal_43, 2692.837f, -1208.53f, 56.89f, 0f, 0f, 0f, 11.5f, 1.8f, 3f);
			VOLUME::_0x39816F6F94F385AD(iLocal_43, 2691.738f, -1194.63f, 56.823f, 0f, 0f, 0f, 7f, 1.8f, 3f);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_37, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_37, 0, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_37, false, 15);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_43, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_43, 0, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_43, false, 15);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_45))
		{
			PATHFIND::_0x19C7567D2F2287D6(iLocal_45, 7);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_39))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_39, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_39, 0, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_39, false, 15);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_40))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_40, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_40, 0, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_40, false, 15);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_41, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_41, 0, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_41, false, 15);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_42, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_42, 0, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_42, false, 15);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_50))
		{
			PED::_0x4C39C95AE5DB1329(iLocal_50, false, 15);
		}
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK03X", false);
		bLocal_69 = true;
		return 1;
	}
	return 0;
}

bool func_312(var uParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_34, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_43, true, 0))
	{
		func_323(uParam0);
		return true;
	}
	return false;
}

void func_314(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iLocal_330 == iParam1 && !bParam2)
	{
		return;
	}
	switch (iLocal_330)
	{
		case 0:
			break;
		case 1:
			func_372();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
	iLocal_330 = iParam1;
	switch (iLocal_330)
	{
		case 0:
			if (bParam3)
			{
				func_326(uParam0, 2, 0);
				__LIB_0__::func_565(func_661(2), 7500, 0, 0, 0, 1);
				if (!MAP::DOES_BLIP_EXIST(iLocal_33))
				{
					iLocal_33 = __LIB_8__::func_775(408396114, iLocal_37, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_33, "FMA4_BLIP_GALLERY");
				}
			}
			else
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_32))
				{
					iLocal_32 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_14);
					MAP::_BLIP_SET_MODIFIER(iLocal_32, -546708623);
					MAP::_BLIP_SET_MODIFIER(iLocal_32, 231194138);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_32, "FMA3_BLIP_C");
				}
				MAP::_BLIP_SET_MODIFIER(iLocal_32, -546708623);
			}
			break;
		case 1:
			func_663();
			__LIB_0__::func_325(&iLocal_32);
			Local_338[1 /*7*/].f_5 = 5;
			Local_338[5 /*7*/].f_5 = 1;
			Local_338[4 /*7*/].f_5 = 2;
			Local_338[2 /*7*/].f_5 = 4;
			func_664(&(Local_338[0 /*7*/]), 1, 0);
			func_664(&(Local_338[1 /*7*/]), 1, 0);
			func_664(&(Local_338[2 /*7*/]), 1, 0);
			func_664(&(Local_338[4 /*7*/]), 1, 0);
			func_664(&(Local_338[5 /*7*/]), 1, 0);
			func_664(&(Local_338[7 /*7*/]), 2, 0);
			func_664(&(Local_338[8 /*7*/]), 2, 0);
			func_664(&(Local_338[9 /*7*/]), 2, 0);
			func_664(&(Local_338[3 /*7*/]), 2, 0);
			func_664(&(Local_338[11 /*7*/]), 2, 0);
			func_664(&(Local_338[10 /*7*/]), 2, 0);
			func_664(&(Local_338[12 /*7*/]), 2, 0);
			func_664(&(Local_338[13 /*7*/]), 2, 0);
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			break;
		case 2:
			__LIB_1__::func_948(iLocal_594, 1, 0f, 0, 0, 0, 0, 0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_44))
			{
				iLocal_44 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2747.735f, -1171.029f, 48.2359f, 0f, 0f, -28.936f, 2f, 2f, 5f);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_46))
			{
				iLocal_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2747.729f, -1168.285f, 48.717f, 0f, 0f, -28.936f, 9f, 7f, 5f, "m_volumeClearSafehouse Room");
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_46))
			{
				POPULATION::_0xB56D41A694E42E86(iLocal_46, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_46, 0, 0, 0, -1, -1, 0);
				__LIB_0__::func_568(2747.735f, -1171.029f, 48.2359f, 10f, 0);
				PED::_0x4C39C95AE5DB1329(iLocal_46, false, 15);
			}
			func_666(iLocal_14, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_318()
{
	int iVar0;
	iVar0 = 1;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(iLocal_15, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "DOORMAN", iLocal_15, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "Newspaper", iLocal_25[0], 0);
		}
		if (!__LIB_0__::func_181())
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[iVar0 /*4*/], "Is_Arthur", true, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "ARTHUR", Global_35, 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[iVar0 /*4*/], "Is_Arthur", false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "JOHN", Global_35, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
	}
	else
	{
		Local_241[iVar0 /*4*/].f_2 = 1;
	}
}

void func_319()
{
	int iVar0;
	iVar0 = 2;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Local_338[11 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "man", Local_338[11 /*7*/], 0);
		}
		if (__LIB_0__::func_272(Local_338[12 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "WOMAN", Local_338[12 /*7*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
	}
	else
	{
		Local_241[iVar0 /*4*/].f_2 = 1;
	}
}

void func_320()
{
	int iVar0;
	iVar0 = 3;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Local_338[10 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "man", Local_338[10 /*7*/], 0);
		}
		if (__LIB_0__::func_272(Local_338[13 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "WOMAN", Local_338[13 /*7*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[1]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "Mans_Drink", iLocal_25[1], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[2]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "Womans_Drink", iLocal_25[2], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
	}
	else
	{
		Local_241[iVar0 /*4*/].f_2 = 1;
	}
}

void func_321()
{
	int iVar0;
	iVar0 = 4;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Local_338[2 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "A_M_M_NBXUPPERCLASS_01^4", Local_338[2 /*7*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[3]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "p_glass03x^3", iLocal_25[3], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
	}
	else
	{
		Local_241[iVar0 /*4*/].f_2 = 1;
	}
}

void func_322()
{
	int iVar0;
	iVar0 = 5;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Local_338[3 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "A_M_M_NBXUPPERCLASS_01^6", Local_338[3 /*7*/], 0);
		}
		if (__LIB_0__::func_272(Local_338[7 /*7*/], 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "A_F_M_NbxUpperClass_01", Local_338[7 /*7*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[4]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "p_cigar01x", iLocal_25[4], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[5]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "s_pursefancy02x", iLocal_25[5], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
	}
	else
	{
		Local_241[iVar0 /*4*/].f_2 = 1;
	}
}

void func_323(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_12__::func_767(uParam0);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (__LIB_0__::func_272(Local_338[iVar0 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_338[iVar0 /*7*/], false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_338[iVar0 /*7*/], false);
		}
		iVar0++;
	}
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_14, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_14, false);
	}
	if (__LIB_0__::func_272(iLocal_15, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_15, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_15, false);
	}
	if (iVar1 < 1)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 7, 0, 1);
	}
}

void func_325(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_272(iLocal_14, 1))
	{
		return;
	}
	if (iLocal_331 == iParam0 && !bParam1)
	{
		return;
	}
	iLocal_331 = iParam0;
	switch (iLocal_331)
	{
		case 0:
			__LIB_1__::func_473(iLocal_14, joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_14, "cautious", 1f, -1);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_208(4), 1.5f, -1, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 4:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
			break;
		case 5:
			func_670();
			break;
		case 6:
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
			break;
		case 7:
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_14, func_208(3), 1f, -1, 0.25f, 0, 40000f);
			break;
		case 8:
			break;
	}
}

int func_326(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_27(iLocal_52, iParam1))
	{
		return 1;
	}
	if (__LIB_0__::func_270())
	{
		return 0;
	}
	sVar0 = func_661(iParam1);
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_0__::func_37(&uLocal_566);
		__LIB_1__::func_683(&iLocal_52, iParam1);
		return 0;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_148(&uLocal_566);
		fLocal_54 = __LIB_0__::func_665(Global_35, iLocal_14, 1, 1);
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 4:
			if (func_674(&uLocal_566, &uLocal_55))
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 1:
			if (bParam2)
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			else if (__LIB_18__::func_626(&uLocal_566, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &fLocal_54))
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 2:
			if (bParam2)
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			else if (__LIB_18__::func_626(&uLocal_566, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &fLocal_54))
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
		case 8:
			if (__LIB_13__::func_649(&uLocal_566, &iLocal_14, &fLocal_54, 15f))
			{
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
			}
			break;
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_37(&uLocal_566);
		__LIB_1__::func_683(&iLocal_52, iParam1);
	}
	return 0;
}

bool func_328(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_241[iParam0 /*4*/]))
	{
		Local_241[iParam0 /*4*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_241[iParam0 /*4*/].f_3, 0, sParam1, false, true);
		return false;
	}
	if (!Local_241[iParam0 /*4*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_241[iParam0 /*4*/]);
		Local_241[iParam0 /*4*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_241[iParam0 /*4*/], true, false))
	{
		return false;
	}
	return true;
}

bool func_338(var uParam0)
{
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	return true;
}

int func_344(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_700(uParam4);
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

void func_349()
{
	int iVar0;
	iVar0 = 0;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(iLocal_15, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "DOORMAN", iLocal_15, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "Artist", iLocal_14, 0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
		func_325(1, 1);
	}
	else
	{
		Local_241[iVar0 /*4*/].f_2 = 1;
	}
}

void func_353()
{
	int iVar0;
	if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_38, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_14, 1f);
	}
	switch (iLocal_331)
	{
		case 0:
			break;
		case 1:
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_241[0 /*4*/], "Artist"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 2698.262f, -1198.096f, 55.4694f, 1.5f, 0, false, 524419, -1f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 2698.44f, -1198.239f, 55.4694f, -1, 1, 0, 0, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				func_325(2, 0);
			}
			break;
		case 2:
			break;
		case 3:
			if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 5f, true))
			{
				func_232();
				func_325(6, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_14, func_208(4), 1f, 1f, 1f, false, true, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, 1.5f, 1.5f, 1f, false, true, 0) || __LIB_1__::func_205(Global_35, iLocal_49, 1, 0))
				{
					func_325(5, 0);
				}
				else
				{
					func_325(4, 0);
				}
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, 1.5f, 1.5f, 1f, false, true, 0) || __LIB_1__::func_205(Global_35, iLocal_49, 1, 0))
			{
				func_325(5, 0);
			}
			break;
		case 5:
			if (__LIB_1__::func_205(iLocal_14, iLocal_39, 1, 0))
			{
				if (!bLocal_60)
				{
					if (func_746("pl_Dialogue_01"))
					{
						PED::_0x411189E51B8020BA(iLocal_14, "Cautious");
						bLocal_60 = true;
					}
				}
			}
			if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 5f, true))
			{
				func_232();
				func_325(6, 0);
			}
			break;
	}
}

void func_354(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = __LIB_12__::func_767(uParam0);
	if (!__LIB_0__::func_272(iLocal_15, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_51, 4))
	{
		return;
	}
	if (iLocal_330 == 1)
	{
		if (((((__LIB_2__::func_401(iLocal_15, 1, 1, 0, 0, 0) || __LIB_4__::func_207(iLocal_15, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) || __LIB_13__::func_641(iLocal_15, 0, &uLocal_73, &uLocal_101, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_15, Global_35, 1, 1)) || PED::_0x29FCE825613FEFCA(iLocal_15, 5000)) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_241[0 /*4*/], "DOORMAN"))
		{
			__LIB_1__::func_683(&iLocal_51, 4);
			TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_208(16), 2f, -1, 0.25f, 0, 40000f);
			TASK::TASK_COWER(0, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_15, iVar2);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		func_748();
	}
	else if (iVar1 < 2)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_34, 1, 0) && !__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
		{
			__LIB_18__::func_627(uParam0, &uLocal_451, 1, &iLocal_15, 1, 1097859072 /* Float: 15f */, 0, 0, 0);
		}
		if (((((__LIB_2__::func_401(iLocal_15, 1, 1, 0, 0, 0) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_15, false)) || __LIB_13__::func_641(iLocal_15, 0, &uLocal_73, &uLocal_101, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_15, Global_35, 1, 1)) || PED::_0x29FCE825613FEFCA(iLocal_15, 5000)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_35, true, 0))
		{
			__LIB_1__::func_683(&iLocal_51, 4);
			func_537(1);
			TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_HANDS_UP(0, 10000, 0, -1, false);
			TASK::TASK_COWER(0, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_15, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
		else if (__LIB_1__::func_205(Global_35, iLocal_34, 1, 0))
		{
			__LIB_18__::func_627(uParam0, &uLocal_451, 0, &iLocal_15, 1, 1097859072 /* Float: 15f */, 0, 0, 0);
			func_750(uParam0);
			if (!bLocal_61)
			{
				iVar0 = func_751(&iLocal_15, &(Local_176[0 /*21*/]), 10f, &Local_198, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar0 == 0)
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_15, &Local_216);
					func_748();
					bLocal_61 = true;
				}
			}
			else if (__LIB_18__::func_627(uParam0, &uLocal_451, 10, &iLocal_15, 1, 1097859072 /* Float: 15f */, 0, 0, 0) != 3)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_15, &Local_216);
			}
		}
	}
}

void func_355(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!__LIB_0__::func_272(Local_338[iVar0 /*7*/], 1))
		{
		}
		else
		{
			switch (Local_338[iVar0 /*7*/].f_4)
			{
				case 0:
					if (Local_338[iVar0 /*7*/].f_6 < 11)
					{
						__LIB_18__::func_627(uParam0, &uLocal_451, Local_338[iVar0 /*7*/].f_6, &(Local_338[iVar0 /*7*/]), 0, 2.125f, 0, 0, 0);
					}
					break;
				case 1:
					iVar1 = Local_338[iVar0 /*7*/].f_5;
					if (func_752())
					{
						if (!bLocal_67)
						{
							if (!PED::IS_PED_IN_COMBAT(Local_338[iVar0 /*7*/], Global_35))
							{
								if (!PED::IS_PED_FLEEING(Local_338[iVar0 /*7*/]))
								{
									PED::REGISTER_TARGET(Local_338[iVar0 /*7*/], Global_35, 1);
									TASK::TASK_COMBAT_PED(Local_338[iVar0 /*7*/], Global_35, 0, 0);
								}
							}
							else if (!__LIB_0__::func_75(&uLocal_587))
							{
								__LIB_1__::func_148(&uLocal_587);
							}
							else if (__LIB_0__::func_265(&uLocal_587) > 2f)
							{
								if (!PED::IS_PED_PERFORMING_MELEE_ACTION(Local_338[iVar0 /*7*/], 1, 0) && !PED::_0x3BDFCF25B58B0415(Local_338[iVar0 /*7*/]))
								{
									if (!PED::IS_PED_FLEEING(Local_338[iVar0 /*7*/]))
									{
										__LIB_0__::func_325(&(Local_338[iVar0 /*7*/].f_1));
										TASK::TASK_SMART_FLEE_PED(Local_338[iVar0 /*7*/], Global_35, 1000f, -1, 256, 1077936128 /* Float: 3f */, 0);
										__LIB_0__::func_37(&uLocal_587);
										bLocal_67 = true;
									}
								}
							}
						}
					}
					else if ((iVar1 < 7 && iVar0 != 0) && iVar0 != 6)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_338[iVar0 /*7*/], Global_35, 1, 1))
						{
							if (WEAPON::_0x9E2D5D6BC97A5F1E(Local_338[iVar0 /*7*/], joaat("WEAPON_UNARMED"), 5000))
							{
								TASK::CLEAR_PED_TASKS(Local_338[iVar0 /*7*/], true, false);
								__LIB_3__::func_689(Local_338[iVar0 /*7*/]);
								Local_338[iVar0 /*7*/].f_5 = 16;
								func_664(&(Local_338[iVar0 /*7*/]), 1, 1);
							}
						}
						else if (!__LIB_0__::func_272(Local_338[iVar1 /*7*/], 9))
						{
							Local_338[iVar0 /*7*/].f_5 = func_754(&(Local_338[iVar0 /*7*/]));
							func_664(&(Local_338[iVar0 /*7*/]), 1, 1);
						}
					}
					else if (((Local_338[iVar0 /*7*/].f_5 == 16 && iVar0 != 0) && iVar0 != 6) && !func_752())
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_338[iVar0 /*7*/], joaat("REL_CIVMALE"));
						Local_338[iVar0 /*7*/].f_5 = func_754(&(Local_338[iVar0 /*7*/]));
						func_664(&(Local_338[iVar0 /*7*/]), 1, 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_356()
{
	int iVar0;
	if (iLocal_53 == 16)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(vLocal_274[iVar0 /*3*/].f_1))
		{
			if (vLocal_274[iVar0 /*3*/].f_2 == 0)
			{
				vLocal_274[iVar0 /*3*/].f_2 = ENTITY::_0x6F3068258A499E52(func_755(iVar0), func_541(iVar0), 7);
			}
			else if (ENTITY::_0x1FF441D7954F8709(vLocal_274[iVar0 /*3*/].f_2))
			{
				vLocal_274[iVar0 /*3*/].f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(vLocal_274[iVar0 /*3*/].f_2));
				iLocal_53++;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_359(var uParam0, int iParam1)
{
	char cVar0[64];
	if (iLocal_329 == iParam1)
	{
		return;
	}
	iLocal_329 = iParam1;
	__LIB_1__::func_681(&iLocal_51, 8);
	switch (iLocal_329)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RFMA_RC4", 24);
			__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 0);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, "Arthur", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_14, "cs_frenchartist", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[8 /*7*/], "A_F_M_NBXUPPERCLASS_01^1", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[9 /*7*/], "A_F_M_NBXUPPERCLASS_01^2", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[6 /*7*/], "A_M_M_NBXUPPERCLASS_01", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[0 /*7*/], "A_M_M_NBXUPPERCLASS_01^1", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[5 /*7*/], "A_M_M_NBXUPPERCLASS_01^2", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[1 /*7*/], "A_M_M_NBXUPPERCLASS_01^3", 0);
			__LIB_12__::func_956(&(uParam0->f_753), Local_338[4 /*7*/], "A_M_M_NBXUPPERCLASS_01^5", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[0], "p_cigarette_cs01x", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[1], "p_cigarette_cs01x^1", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[2], "p_glass03x", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[3], "p_glass03x^1", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[4], "p_glass03x^2", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[5], "p_glass03x^4", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[6], "p_glass03x^5", 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_16[7], "s_purseFancy01x", 0);
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_14, "cs_frenchartist", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[7 /*7*/], "A_F_M_NBXUPPERCLASS_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[8 /*7*/], "A_F_M_NBXUPPERCLASS_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[9 /*7*/], "A_F_M_NBXUPPERCLASS_01^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[0 /*7*/], "A_M_M_NBXUPPERCLASS_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[5 /*7*/], "A_M_M_NBXUPPERCLASS_01^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[1 /*7*/], "A_M_M_NBXUPPERCLASS_01^3", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[2 /*7*/], "A_M_M_NBXUPPERCLASS_01^4", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[4 /*7*/], "A_M_M_NBXUPPERCLASS_01^5", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_338[3 /*7*/], "A_M_M_NBXUPPERCLASS_01^6", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[0], "p_cigarette_cs01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[1], "p_cigarette_cs01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[2], "p_glass03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[3], "p_glass03x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[4], "p_glass03x^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[5], "p_glass03x^4", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[6], "p_glass03x^5", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_16[7], "s_purseFancy01x", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 120935);
			__LIB_12__::func_981(uParam0, 121033);
			__LIB_12__::func_982(uParam0, 121554);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false));
			__LIB_12__::func_846(&(uParam0->f_206));
			if (!__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "1-Standard-Normal", 64);
				__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
				StringCopy(&cVar0, "1-Standard-Multi", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			else if (__LIB_3__::func_736(78, 1))
			{
				StringCopy(&cVar0, "2-JohnIntro-Multi", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
				__LIB_12__::func_693(&(uParam0->f_753), 131072);
				__LIB_0__::func_88(&(uParam0->f_206), 33554432);
				__LIB_0__::func_88(&(uParam0->f_206), 268435456);
			}
			else
			{
				StringCopy(&cVar0, "1-Standard-Normal", 64);
				__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
				StringCopy(&cVar0, "1-Standard-Multi", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			__LIB_13__::func_17(&(uParam0->f_206), &cVar0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

void func_361()
{
	if (!__LIB_0__::func_272(iLocal_15, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_51, 4))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_34, true, 0))
	{
		if (__LIB_0__::func_75(&uLocal_569))
		{
			__LIB_0__::func_37(&uLocal_569);
		}
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[1 /*4*/], false))
	{
		return;
	}
	switch (iLocal_332)
	{
		case 0:
			if (func_771(1, "pbl_usher_player_whilst_stood"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[1 /*4*/]) > 8.2f && __LIB_13__::func_181(Local_241[1 /*4*/], "pbl_usher_player_whilst_stood"))
				{
					iLocal_332 = 2;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_75(&uLocal_569))
			{
				__LIB_1__::func_148(&uLocal_569);
			}
			else if (__LIB_0__::func_265(&uLocal_569) > 12f)
			{
				if (func_771(1, "pbl_Transition_to_Read_Paper"))
				{
					__LIB_0__::func_37(&uLocal_569);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[1 /*4*/], "Internal_Loop", true, false);
					iLocal_332 = 2;
				}
			}
			break;
		case 2:
			if (func_771(1, "pbl_Transition_to_Read_Paper"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[1 /*4*/]) > 17.13f)
				{
					if (__LIB_13__::func_181(Local_241[1 /*4*/], "pbl_Transition_to_Read_Paper"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[1 /*4*/], "Internal_Loop", false, false);
						iLocal_332 = 3;
					}
				}
			}
			break;
		case 3:
			break;
	}
}

void func_362()
{
	if (!__LIB_0__::func_272(Local_338[11 /*7*/], 1) || !__LIB_0__::func_272(Local_338[12 /*7*/], 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_34, true, 0))
	{
		if (iLocal_333 == 1 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[2 /*4*/], false))
		{
			func_771(2, "pbl_DIALG_01_Wait_Till_You_See_His_Work");
		}
		if (__LIB_0__::func_75(&uLocal_572))
		{
			__LIB_0__::func_37(&uLocal_572);
		}
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[2 /*4*/], false))
	{
		return;
	}
	if (!__LIB_0__::func_48(Global_35, Local_338[11 /*7*/], 4f, 1))
	{
		if (__LIB_0__::func_75(&uLocal_572))
		{
			__LIB_0__::func_37(&uLocal_572);
		}
		return;
	}
	else if (!__LIB_0__::func_75(&uLocal_572))
	{
		__LIB_1__::func_148(&uLocal_572);
	}
	switch (iLocal_333)
	{
		case 0:
			if (__LIB_0__::func_264(&uLocal_572) > 10f)
			{
				if (!bLocal_56)
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_241[2 /*4*/], "pbl_DIALG_04_So_Flustered"))
					{
						if (func_771(2, "pbl_Idle_01"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[2 /*4*/]) >= 8.17f && __LIB_13__::func_181(Local_241[2 /*4*/], "pbl_Idle_01"))
							{
								__LIB_1__::func_148(&uLocal_572);
								bLocal_56 = true;
							}
						}
					}
					else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[2 /*4*/], "pbl_Idle_01"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[2 /*4*/]) >= 4.23f && func_771(2, "pbl_Idle_01"))
						{
							if (__LIB_13__::func_181(Local_241[2 /*4*/], "pbl_Idle_01"))
							{
								__LIB_1__::func_148(&uLocal_572);
								bLocal_56 = true;
							}
						}
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[2 /*4*/], "pbl_Idle_04"))
				{
					if (func_771(2, "pbl_Idle_04"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[2 /*4*/]) >= 6.97f && __LIB_13__::func_181(Local_241[2 /*4*/], "pbl_Idle_04"))
						{
							__LIB_1__::func_148(&uLocal_572);
							bLocal_56 = false;
						}
					}
				}
			}
			break;
		case 1:
			if (func_771(2, "pbl_DIALG_01_Wait_Till_You_See_His_Work"))
			{
				if (__LIB_13__::func_181(Local_241[2 /*4*/], "pbl_DIALG_01_Wait_Till_You_See_His_Work"))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[2 /*4*/], "pbl_Idle_01");
					__LIB_1__::func_148(&uLocal_572);
					iLocal_333 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_572) > 2f)
			{
				if (func_771(2, "pbl_DIALG_02_MISS_THE_PARTY"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[2 /*4*/]) >= 30.4f && __LIB_13__::func_181(Local_241[2 /*4*/], "pbl_DIALG_02_MISS_THE_PARTY"))
					{
						__LIB_1__::func_148(&uLocal_572);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[2 /*4*/], "pbl_DIALG_01_Wait_Till_You_See_His_Work");
						iLocal_333 = 3;
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_572) > 2f)
			{
				if (func_771(2, "pbl_DIALG_03_Hurry_Up"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[2 /*4*/]) >= 9.1f && __LIB_13__::func_181(Local_241[2 /*4*/], "pbl_DIALG_03_Hurry_Up"))
					{
						__LIB_1__::func_148(&uLocal_572);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[2 /*4*/], "pbl_DIALG_02_MISS_THE_PARTY");
						iLocal_333 = 4;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_264(&uLocal_572) > 2f)
			{
				if (func_771(2, "pbl_DIALG_04_So_Flustered"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[2 /*4*/]) >= 7.93f && __LIB_13__::func_181(Local_241[2 /*4*/], "pbl_DIALG_04_So_Flustered"))
					{
						__LIB_1__::func_148(&uLocal_572);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[2 /*4*/], "pbl_DIALG_03_Hurry_Up");
						iLocal_333 = 0;
					}
				}
			}
			break;
		case 5:
			break;
	}
}

void func_363()
{
	if (!__LIB_0__::func_272(Local_338[10 /*7*/], 1) || !__LIB_0__::func_272(Local_338[13 /*7*/], 1))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[3 /*4*/], false))
	{
		return;
	}
	if (!__LIB_1__::func_205(Global_35, iLocal_47, 1, 0))
	{
		if (__LIB_0__::func_75(&uLocal_575))
		{
			__LIB_0__::func_37(&uLocal_575);
		}
		return;
	}
	else
	{
		if (iLocal_334 == 1 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[3 /*4*/], false))
		{
			func_771(3, "pbl_DIALG_01_I_think_its_Greek_or_Roman");
		}
		if (!__LIB_0__::func_75(&uLocal_575))
		{
			__LIB_1__::func_148(&uLocal_575);
		}
	}
	switch (iLocal_334)
	{
		case 0:
			if (__LIB_0__::func_264(&uLocal_575) > 10f)
			{
				if (!bLocal_57)
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_241[3 /*4*/], "pbl_DIALG_03_Someone_from_Blackwater"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[3 /*4*/]) >= 17.2f && func_771(3, "pbl_Idle_02"))
						{
							if (__LIB_13__::func_181(Local_241[3 /*4*/], "pbl_Idle_02"))
							{
								__LIB_1__::func_148(&uLocal_575);
								bLocal_57 = true;
							}
						}
					}
					else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[3 /*4*/], "pbl_Idle_02"))
					{
						if (func_771(3, "pbl_Idle_02"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[3 /*4*/]) >= 22.2f && __LIB_13__::func_181(Local_241[3 /*4*/], "pbl_Idle_02"))
							{
								__LIB_1__::func_148(&uLocal_575);
								bLocal_57 = true;
							}
						}
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[3 /*4*/], "pbl_Idle_03"))
				{
					if (func_771(3, "pbl_Idle_03"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[3 /*4*/]) >= 22.43f && __LIB_13__::func_181(Local_241[3 /*4*/], "pbl_Idle_03"))
						{
							__LIB_1__::func_148(&uLocal_575);
							bLocal_57 = false;
						}
					}
				}
			}
			break;
		case 1:
			if (func_771(3, "pbl_DIALG_01_I_think_its_Greek_or_Roman"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[3 /*4*/]) >= 5.57f && __LIB_13__::func_181(Local_241[3 /*4*/], "pbl_DIALG_01_I_think_its_Greek_or_Roman"))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[3 /*4*/], "pbl_Idle_01");
					__LIB_1__::func_148(&uLocal_575);
					iLocal_334 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_575) > 2f)
			{
				if (func_771(3, "pbl_DIALG_02_Italian_most_likely"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[3 /*4*/]) >= 23.1f && __LIB_13__::func_181(Local_241[3 /*4*/], "pbl_DIALG_02_Italian_most_likely"))
					{
						__LIB_1__::func_148(&uLocal_575);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[3 /*4*/], "pbl_DIALG_01_I_think_its_Greek_or_Roman");
						iLocal_334 = 3;
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_575) > 2f)
			{
				if (func_771(3, "pbl_DIALG_03_Someone_from_Blackwater"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[3 /*4*/]) >= 11.63f && __LIB_13__::func_181(Local_241[3 /*4*/], "pbl_DIALG_03_Someone_from_Blackwater"))
					{
						__LIB_1__::func_148(&uLocal_575);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[3 /*4*/], "pbl_DIALG_02_Italian_most_likely");
						iLocal_334 = 0;
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_364()
{
	if (!__LIB_0__::func_272(Local_338[2 /*7*/], 1))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[4 /*4*/], false))
	{
		return;
	}
	if (!__LIB_0__::func_48(Global_35, Local_338[2 /*7*/], 2.125f, 1))
	{
		if (__LIB_0__::func_75(&uLocal_578))
		{
			__LIB_0__::func_37(&uLocal_578);
		}
		return;
	}
	else if (!__LIB_0__::func_75(&uLocal_578))
	{
		__LIB_1__::func_148(&uLocal_578);
	}
	switch (iLocal_335)
	{
		case 0:
			if (__LIB_0__::func_264(&uLocal_578) > 10f)
			{
				if (!bLocal_58)
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_241[4 /*4*/], "pbl_Dialogue_04_Disgusting"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 18.8f && func_771(4, "pbl_Idle_03"))
						{
							if (__LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Idle_03"))
							{
								__LIB_1__::func_148(&uLocal_578);
								bLocal_58 = true;
							}
						}
					}
					else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[4 /*4*/], "pbl_Idle_03"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 6.83f && func_771(4, "pbl_Idle_03"))
						{
							if (__LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Idle_03"))
							{
								__LIB_1__::func_148(&uLocal_578);
								bLocal_58 = true;
							}
						}
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[4 /*4*/], "pbl_Idle_06"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 9.1f && func_771(4, "pbl_Idle_06"))
					{
						if (__LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Idle_06"))
						{
							__LIB_1__::func_148(&uLocal_578);
							bLocal_58 = false;
						}
					}
				}
			}
			break;
		case 1:
			if (func_771(4, "pbl_Dialogue_01_The_Man_Simply_Cant_Paint"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 5.8f && __LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Dialogue_01_The_Man_Simply_Cant_Paint"))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[4 /*4*/], "pbl_Idle_01");
					__LIB_1__::func_148(&uLocal_578);
					iLocal_335 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_578) > 2f)
			{
				if (func_771(4, "pbl_Dialogue_02_Hmm_v01"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 18.37f && __LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Dialogue_02_Hmm_v01"))
					{
						__LIB_1__::func_148(&uLocal_578);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[4 /*4*/], "pbl_Dialogue_01_The_Man_Simple_Cant_Paint");
						iLocal_335 = 3;
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_578) > 2f)
			{
				if (func_771(4, "pbl_Dialogue_03_Hmm_v02"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 16.83f && __LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Dialogue_03_Hmm_v02"))
					{
						__LIB_1__::func_148(&uLocal_578);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[4 /*4*/], "pbl_Dialogue_02_Hmm_v01");
						iLocal_335 = 4;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_264(&uLocal_578) > 2f)
			{
				if (func_771(4, "pbl_Dialogue_04_Disgusting"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[4 /*4*/]) >= 16.1f && __LIB_13__::func_181(Local_241[4 /*4*/], "pbl_Dialogue_04_Disgusting"))
					{
						__LIB_1__::func_148(&uLocal_578);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_241[4 /*4*/], "pbl_Dialogue_03_Hmm_v02");
						iLocal_335 = 0;
					}
				}
			}
			break;
		case 5:
			break;
	}
}

void func_365()
{
	if (!__LIB_0__::func_272(Local_338[7 /*7*/], 1) || !__LIB_0__::func_272(Local_338[3 /*7*/], 1))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[5 /*4*/], false))
	{
		return;
	}
	if (!__LIB_0__::func_48(Global_35, Local_338[3 /*7*/], 2.125f, 1) && !__LIB_0__::func_48(Global_35, Local_338[7 /*7*/], 2.125f, 1))
	{
		if (__LIB_0__::func_75(&uLocal_581))
		{
			__LIB_0__::func_37(&uLocal_581);
		}
		return;
	}
	else if (!__LIB_0__::func_75(&uLocal_581))
	{
		__LIB_1__::func_148(&uLocal_581);
	}
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_264(&uLocal_581) > 10f)
			{
				if (!bLocal_59)
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_241[5 /*4*/], "pbl_Dialg_Mixed_Company"))
					{
						if (func_771(5, "pbl_Idle_02"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[5 /*4*/]) >= 23.2f && __LIB_13__::func_181(Local_241[5 /*4*/], "pbl_Idle_02"))
							{
								__LIB_1__::func_148(&uLocal_581);
								bLocal_59 = true;
							}
						}
					}
					else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[5 /*4*/], "pbl_Idle_02"))
					{
						if (func_771(5, "pbl_Idle_02"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[5 /*4*/]) >= 24.93f && __LIB_13__::func_181(Local_241[5 /*4*/], "pbl_Idle_02"))
							{
								__LIB_1__::func_148(&uLocal_581);
								bLocal_59 = true;
							}
						}
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[5 /*4*/], "pbl_Idle_05"))
				{
					if (func_771(5, "pbl_Idle_05"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_241[5 /*4*/]) >= 8.3f && __LIB_13__::func_181(Local_241[5 /*4*/], "pbl_Idle_5"))
						{
							__LIB_1__::func_148(&uLocal_581);
							bLocal_59 = false;
						}
					}
				}
			}
			break;
		case 1:
			if (func_771(5, "pbl_Dialg_Making_Me_Blush"))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[5 /*4*/], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[5 /*4*/], "pbl_Dialg_Making_Me_Blush"))
					{
						__LIB_13__::func_181(Local_241[5 /*4*/], "pbl_Dialg_Making_Me_Blush");
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_241[5 /*4*/], "s_idle_04", 1))
					{
						iLocal_336 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_771(5, "pbl_Dialg_Brushwork_Baffling"))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[5 /*4*/], "pbl_Dialg_Brushwork_Baffling"))
				{
					__LIB_13__::func_181(Local_241[5 /*4*/], "pbl_Dialg_Brushwork_Baffling");
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_241[5 /*4*/], "s_idle_04", 1))
				{
					iLocal_336 = 3;
				}
			}
			break;
		case 3:
			if (func_771(5, "pbl_Dialg_Mixed_Company"))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_241[5 /*4*/], "pbl_Dialg_Mixed_Company"))
				{
					__LIB_13__::func_181(Local_241[5 /*4*/], "pbl_Dialg_Mixed_Company");
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_241[5 /*4*/], "s_idle_04", 1))
				{
					__LIB_1__::func_148(&uLocal_581);
					iLocal_336 = 0;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_366()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_34, true, 0) && __LIB_0__::func_48(Global_35, Local_338[11 /*7*/], 4f, 1))
	{
		if (__LIB_0__::func_272(Local_338[14 /*7*/], 0))
		{
			if (!__LIB_0__::func_163(Local_338[14 /*7*/], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2690.955f, -1188.111f, 51.9544f, 1f, -1, 0.25f, 1, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_338[14 /*7*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_2__::func_788(&(Local_338[14 /*7*/]), 1, 0, 1);
			}
		}
	}
	else if (__LIB_0__::func_48(Global_35, Local_338[10 /*7*/], 3f, 1) || __LIB_0__::func_266(Global_35, 2695.504f, -1203.119f, 55.4694f, 2f, 1, 1))
	{
		if (__LIB_0__::func_272(Local_338[15 /*7*/], 0))
		{
			if (!__LIB_0__::func_163(Local_338[15 /*7*/], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2695.405f, -1197.024f, 55.4693f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2700.548f, -1187.657f, 55.0908f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2690.955f, -1188.111f, 51.9544f, 1f, -1, 0.25f, 1, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_338[15 /*7*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_2__::func_788(&(Local_338[15 /*7*/]), 1, 0, 1);
			}
		}
	}
	else if (__LIB_0__::func_266(Global_35, 2692.483f, -1199.522f, 55.4696f, 2f, 1, 1))
	{
		if (__LIB_0__::func_272(Local_338[15 /*7*/], 0))
		{
			if (!__LIB_0__::func_163(Local_338[15 /*7*/], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2695.504f, -1203.119f, 55.4694f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2700.548f, -1187.657f, 55.0908f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2690.955f, -1188.111f, 51.9544f, 1f, -1, 0.25f, 1, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_338[15 /*7*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_2__::func_788(&(Local_338[15 /*7*/]), 1, 0, 1);
			}
		}
	}
}

bool func_367(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_18__::func_628(&(uParam0->f_753), uParam0->f_2581, 0, 0);
		if (__LIB_12__::func_670(&(uParam0->f_753)))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 262144);
			__LIB_2__::func_426(&(Local_338[6 /*7*/]));
			return true;
		}
	}
	return false;
}

bool func_371()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		if (Local_338[iVar2 /*7*/].f_4 != 1)
		{
		}
		else
		{
			iVar0++;
			if (!__LIB_0__::func_272(Local_338[iVar2 /*7*/], 9))
			{
				__LIB_0__::func_325(&(Local_338[iVar2 /*7*/].f_1));
				iVar1++;
			}
			else if (PED::IS_PED_FLEEING(Local_338[iVar2 /*7*/]) || PED::_IS_PED_HOGTIED(Local_338[iVar2 /*7*/]))
			{
				__LIB_0__::func_325(&(Local_338[iVar2 /*7*/].f_1));
				iVar1++;
			}
		}
		iVar2++;
	}
	if (iVar1 >= iVar0)
	{
		return true;
	}
	return false;
}

void func_372()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 249, true) == 1)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
			PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
			ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
			PED::_0x949B2F9ED2917F5D(Global_35, 18);
			PED::_0x949B2F9ED2917F5D(Global_35, 31);
		}
	}
}

int func_375(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	iVar0 = 6;
	if (!__LIB_0__::func_75(&(uParam2->f_1)))
	{
		__LIB_1__::func_148(&(uParam2->f_1));
	}
	iVar1 = (iParam4 + *uParam2);
	if (iVar1 > uParam3->f_4)
	{
		return 0;
	}
	if (iVar1 <= iParam5 && __LIB_0__::func_264(&(uParam2->f_1)) > __LIB_13__::func_913(*uParam2, fParam7, fParam8))
	{
		iVar0 = __LIB_13__::func_648(uParam0, uParam3, iVar1, iParam1, 0, fParam6, 0, 0, 0);
		if (iVar0 == 1)
		{
			__LIB_1__::func_148(&(uParam2->f_1));
			*uParam2++;
		}
	}
	return iVar0;
}

void func_378()
{
	if (!__LIB_0__::func_272(iLocal_14, 0))
	{
		return;
	}
	if (!bLocal_60)
	{
		return;
	}
	switch (iLocal_337)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_241[7 /*4*/], false))
			{
				ANIMSCENE::RESET_ANIM_SCENE(Local_241[7 /*4*/], 0);
				Local_241[7 /*4*/].f_2 = 0;
				Local_241[7 /*4*/].f_1 = 0;
				iLocal_337 = 1;
			}
			break;
		case 1:
			if (func_328(7, "pl_Dialogue_02"))
			{
				if (__LIB_1__::func_205(iLocal_14, iLocal_40, 1, 0))
				{
					if (func_746("pl_Dialogue_02"))
					{
						iLocal_337 = 2;
					}
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_241[7 /*4*/], false))
			{
				ANIMSCENE::RESET_ANIM_SCENE(Local_241[7 /*4*/], 0);
				Local_241[7 /*4*/].f_2 = 0;
				Local_241[7 /*4*/].f_1 = 0;
				iLocal_337 = 3;
			}
			break;
		case 3:
			if (func_328(7, "pl_Dialogue_03"))
			{
				if (__LIB_1__::func_205(iLocal_14, iLocal_41, 1, 0))
				{
					if (func_746("pl_Dialogue_03"))
					{
						iLocal_337 = 4;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_241[7 /*4*/], false))
			{
				ANIMSCENE::RESET_ANIM_SCENE(Local_241[7 /*4*/], 0);
				Local_241[7 /*4*/].f_2 = 0;
				Local_241[7 /*4*/].f_1 = 0;
				iLocal_337 = 5;
			}
			break;
		case 5:
			if (func_328(7, "pl_Dialogue_04"))
			{
				if (__LIB_1__::func_205(iLocal_14, iLocal_42, 1, 0))
				{
					if (func_746("pl_Dialogue_04"))
					{
						iLocal_337 = 6;
					}
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_241[7 /*4*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_241[7 /*4*/]);
				iLocal_337 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_380(var uParam0)
{
	if (!bLocal_70)
	{
		if (__LIB_1__::func_348(iLocal_14, Global_35) > 1.5f)
		{
			if (__LIB_0__::func_75(&uLocal_584) && !__LIB_6__::func_904())
			{
				if (__LIB_0__::func_265(&uLocal_584) > 1f)
				{
					if (!__LIB_0__::func_270())
					{
						if (__LIB_12__::func_876(uParam0, "RFMA_3_SLOW", 0))
						{
							bLocal_70 = true;
						}
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_584);
			}
		}
	}
}

void func_381()
{
	int iVar0;
	iVar0 = 6;
	if (!func_668(iVar0))
	{
		return;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "FrenchArtist", iLocal_14, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "p_doornbd6panelfqg01x", __LIB_3__::func_136(iLocal_594, 0), 0);
		if (__LIB_0__::func_181())
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[iVar0 /*4*/], "b_PlayerArthur", false, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[iVar0 /*4*/], "b_PlayerArthur", true, false);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_241[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
	}
}

void func_417(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = func_811(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_812(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
							func_417(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_417(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_417(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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

void func_446(var uParam0)
{
	if (__LIB_1__::func_348(iLocal_14, Global_35) < 6f)
	{
		if (__LIB_0__::func_75(&uLocal_584) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_265(&uLocal_584) > MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "RFMA_3_DOOR", 0))
					{
						__LIB_1__::func_148(&uLocal_584);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_584);
		}
	}
}

void func_448(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
	ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
	PED::_0x949B2F9ED2917F5D(Global_35, 18);
	PED::_0x949B2F9ED2917F5D(Global_35, 31);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 1, 1);
	Global_1934765.f_271 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_274[iVar0 /*3*/].f_1))
		{
			if (ENTITY::_0x1FF441D7954F8709(vLocal_274[iVar0 /*3*/].f_2))
			{
				ENTITY::_0xD2B9C78537ED5759(vLocal_274[iVar0 /*3*/].f_2);
			}
		}
		iVar0++;
	}
	if (vLocal_561.z)
	{
		func_899(&vLocal_561, &(vLocal_561.f_1), 0, 1);
		__LIB_0__::func_172(vLocal_561.x);
		vLocal_561.f_2 = 0;
	}
	__LIB_13__::func_645(iLocal_14, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
	__LIB_13__::func_636(uParam0);
	func_372();
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(207));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(305));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(306));
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK03X", true);
	PED::_0x411189E51B8020BA(iLocal_14, "Cautious");
	TASK::REMOVE_COVER_POINT(iLocal_72);
	func_232();
	func_748();
	__LIB_0__::func_325(&iLocal_32);
	__LIB_0__::func_325(&iLocal_33);
	__LIB_0__::func_172(iLocal_44);
	__LIB_1__::func_408(1609506757, 0, 0);
}

int func_496(int iParam0, int iParam1)
{
	var uVar0;
	return func_950(&uVar0, iParam0, iParam1);
}

void func_537(int iParam0)
{
	__LIB_3__::func_319(Local_241[iParam0 /*4*/]);
}

void func_538(int iParam0)
{
	int iVar0;
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 2698.265f, -1188.516f, 51.0845f, 2f, 0, false, 524419, -1f);
	TASK::TASK_SMART_FLEE_PED(0, Global_35, 150f, -1, 0, 1077936128 /* Float: 3f */, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

Vector3 func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2693.757f, -1206.008f, 56.3468f;
		case 1:
			return 2691.144f, -1206.48f, 56.3429f;
		case 2:
			return 2688.237f, -1206.48f, 56.3399f;
		case 3:
			return 2685.307f, -1205.73f, 56.5999f;
		case 4:
			return 2685.487f, -1200.501f, 56.5793f;
		case 5:
			return 2687.96f, -1199.934f, 56.3448f;
		case 6:
			return 2690.427f, -1199.914f, 56.3462f;
		case 7:
			return 2694.234f, -1200.947f, 56.3468f;
		case 8:
			return 2693.757f, -1206.008f, 55.4693f;
		case 9:
			return 2691.151f, -1206.472f, 55.4693f;
		case 10:
			return 2688.085f, -1206.472f, 55.4693f;
		case 11:
			return 2685.344f, -1205.715f, 55.4692f;
		case 12:
			return 2685.507f, -1200.534f, 55.4692f;
		case 13:
			return 2687.943f, -1199.921f, 55.4693f;
		case 14:
			return 2690.409f, -1199.921f, 55.4693f;
		case 15:
			return 2694.228f, -1200.932f, 55.4693f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_569(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_641(*iParam0, 0, uParam1, uParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_472(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

bool func_626(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_51, 1))
	{
		return true;
	}
	vVar0 = { func_208(2) };
	fVar3 = func_209(2);
	if (__LIB_13__::func_643(uParam0, &iLocal_14, iLocal_324, vVar0, fVar3, 0, 1))
	{
		__LIB_13__::func_630(&iLocal_14, vVar0, fVar3);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_14, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, iLocal_565);
		__LIB_8__::func_776(iLocal_14, 200);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_14, 16896, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 93, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 4, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 10, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 81, false);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_14, 2);
		PED::SET_PED_COMBAT_ABILITY(iLocal_14, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 24, true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_14, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_14, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_14, true);
		func_325(0, 1);
		__LIB_12__::func_875(uParam0, iLocal_14, "RFMA_ARTIST", 0);
		__LIB_1__::func_683(&iLocal_51, 1);
		return true;
	}
	return false;
}

bool func_627(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_51, 2))
	{
		return true;
	}
	vVar0 = { 2698.232f, -1187.539f, 55.0907f };
	fVar3 = 275.5197f;
	if (__LIB_13__::func_643(uParam0, &iLocal_15, iLocal_325, vVar0, fVar3, 0, 1))
	{
		PED::_0xFFA1594703ED27CA(iLocal_15, 10);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_15, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, joaat("REL_PLAYER_ALLY"));
		TASK::TASK_LOOK_AT_ENTITY(iLocal_15, Global_35, -1, 0, 51, 0);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_15, false);
		__LIB_2__::func_828(&uLocal_73, 1);
		__LIB_1__::func_413(&uLocal_73, 0);
		__LIB_2__::func_829(&uLocal_73, 1);
		__LIB_1__::func_402(&uLocal_73, 1);
		__LIB_1__::func_401(&uLocal_73, 1);
		__LIB_0__::func_169(iLocal_15, 0, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_15, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_15, true);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_15, 0, 1);
		__LIB_12__::func_875(uParam0, iLocal_15, "RFMA_DOORMAN", 1);
		__LIB_1__::func_683(&iLocal_51, 2);
		return true;
	}
	return false;
}

bool func_628(var uParam0)
{
	vector3 vVar0[16];
	float fVar49[16];
	int iVar66[16];
	int iVar83;
	int iVar84;
	int iVar85;
	vVar0[0 /*3*/] = { 2688.18f, -1201.75f, 56.47f };
	vVar0[1 /*3*/] = { 2688.3f, -1205.05f, 56.46f };
	vVar0[2 /*3*/] = { 2693.093f, -1205.443f, 56.4632f };
	vVar0[3 /*3*/] = { 2692.808f, -1200.572f, 56.4626f };
	vVar0[4 /*3*/] = { 2691.39f, -1204.85f, 56.46f };
	vVar0[5 /*3*/] = { 2686.24f, -1202.22f, 56.47f };
	vVar0[6 /*3*/] = { 2689.08f, -1201.78f, 56.46f };
	vVar0[7 /*3*/] = { 2693.259f, -1201.429f, 56.4626f };
	vVar0[8 /*3*/] = { 2691.39f, -1204.85f, 56.46f };
	vVar0[9 /*3*/] = { 2686.86f, -1201.78f, 56.46f };
	vVar0[11 /*3*/] = { 2700.709f, -1191.839f, 56.0908f };
	vVar0[10 /*3*/] = { 2699.072f, -1205.703f, 56.4753f };
	vVar0[12 /*3*/] = { 2700.854f, -1192.862f, 56.09f };
	vVar0[13 /*3*/] = { 2699.064f, -1204.964f, 56.4753f };
	vVar0[14 /*3*/] = { 2692.517f, -1199.718f, 55.4696f };
	vVar0[15 /*3*/] = { 2688.968f, -1205.116f, 55.4693f };
	fVar49[0] = -10.42f;
	fVar49[1] = 163.53f;
	fVar49[2] = -121.95f;
	fVar49[3] = -80.85f;
	fVar49[4] = 163.53f;
	fVar49[5] = 32.13f;
	fVar49[6] = 32.13f;
	fVar49[7] = -73.29f;
	fVar49[8] = 163.53f;
	fVar49[9] = 69.77f;
	fVar49[14] = 350.3916f;
	fVar49[15] = 145.9254f;
	fVar49[11] = -90f;
	fVar49[10] = -90f;
	fVar49[12] = 5.12f;
	fVar49[13] = -90f;
	iVar66[0] = 1;
	iVar66[1] = 3;
	iVar66[2] = 4;
	iVar66[6] = 0;
	iVar66[7] = 0;
	iVar66[3] = 6;
	iVar66[4] = 5;
	iVar66[8] = 1;
	iVar66[9] = 2;
	iVar66[5] = 2;
	iVar66[11] = 7;
	iVar66[10] = 11;
	iVar66[12] = 3;
	iVar66[13] = 4;
	iVar66[14] = 9;
	iVar66[15] = 5;
	Local_338[0 /*7*/].f_3 = "RFMA_M1";
	Local_338[1 /*7*/].f_3 = "RFMA_M2";
	Local_338[2 /*7*/].f_3 = "RFMA_M3";
	Local_338[3 /*7*/].f_3 = "RFMA_M4";
	Local_338[4 /*7*/].f_3 = "RFMA_M5";
	Local_338[5 /*7*/].f_3 = "";
	Local_338[6 /*7*/].f_3 = "";
	Local_338[7 /*7*/].f_3 = "RFMA_W1";
	Local_338[8 /*7*/].f_3 = "RFMA_W2";
	Local_338[9 /*7*/].f_3 = "RFMA_W3";
	Local_338[11 /*7*/].f_3 = "";
	Local_338[10 /*7*/].f_3 = "";
	Local_338[12 /*7*/].f_3 = "RFMA_W4";
	Local_338[13 /*7*/].f_3 = "RFMA_W5";
	Local_338[14 /*7*/].f_3 = "";
	Local_338[15 /*7*/].f_3 = "";
	Local_338[5 /*7*/].f_6 = 11;
	Local_338[6 /*7*/].f_6 = 11;
	Local_338[11 /*7*/].f_6 = 11;
	Local_338[10 /*7*/].f_6 = 11;
	__LIB_1__::func_683(&(Local_338[7 /*7*/].f_2), 2);
	__LIB_1__::func_683(&(Local_338[8 /*7*/].f_2), 2);
	__LIB_1__::func_683(&(Local_338[9 /*7*/].f_2), 2);
	__LIB_1__::func_683(&(Local_338[12 /*7*/].f_2), 2);
	__LIB_1__::func_683(&(Local_338[13 /*7*/].f_2), 2);
	__LIB_1__::func_683(&(Local_338[15 /*7*/].f_2), 2);
	iVar84 = 0;
	iVar85 = 0;
	iVar85 = 0;
	while (iVar85 < 16)
	{
		if (__LIB_0__::func_27(Local_338[iVar85 /*7*/].f_2, 1))
		{
			iVar84++;
		}
		else
		{
			iVar83 = iLocal_326;
			if (__LIB_0__::func_27(Local_338[iVar85 /*7*/].f_2, 2))
			{
				if (iVar85 == 7)
				{
					iVar83 = iLocal_328;
				}
				else
				{
					iVar83 = iLocal_327;
				}
			}
			if (__LIB_13__::func_643(uParam0, &(Local_338[iVar85 /*7*/]), iVar83, vVar0[iVar85 /*3*/], fVar49[iVar85], 1, 0))
			{
				PED::_0xFFA1594703ED27CA(Local_338[iVar85 /*7*/], iVar66[iVar85]);
				__LIB_8__::func_776(Local_338[iVar85 /*7*/], 60);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_338[iVar85 /*7*/], false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_338[iVar85 /*7*/], 46, true);
				PED::SET_COMBAT_FLOAT(Local_338[iVar85 /*7*/], 7, 0.1f);
				PED::SET_PED_COMBAT_ABILITY(Local_338[iVar85 /*7*/], 0);
				__LIB_8__::func_776(Local_338[iVar85 /*7*/], 60);
				func_1049(iVar85);
				func_664(&(Local_338[iVar85 /*7*/]), 0, 1);
				__LIB_2__::func_56(Local_338[iVar85 /*7*/], 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_338[iVar85 /*7*/], true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_338[iVar85 /*7*/], true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_338[iVar85 /*7*/].f_3))
				{
					__LIB_12__::func_875(uParam0, Local_338[iVar85 /*7*/], Local_338[iVar85 /*7*/].f_3, 1);
				}
				__LIB_1__::func_683(&(Local_338[iVar85 /*7*/].f_2), 1);
			}
		}
		iVar85++;
	}
	if (iVar84 >= 16)
	{
		return true;
	}
	return false;
}

bool func_629()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 1;
	iVar1 = 0;
	vVar2 = { 2686f, -1201.03f, 55.47f };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_16[iVar1]))
		{
		}
		else
		{
			iVar0 = 0;
			if (iVar1 == 0 || iVar1 == 1)
			{
				vVar2 = { 2685.28f, -1203.78f, 55.47f };
			}
			else
			{
				vVar2 = { 2686.3f, -1205.56f, 55.47f };
			}
			iLocal_16[iVar1] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_196(iVar1), vVar2, true, true, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_196(iVar1));
		}
		iVar1++;
	}
	return iVar0;
}

bool func_630()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[iVar1]))
		{
		}
		else
		{
			iVar0 = 0;
			if (iVar1 == 0)
			{
				vVar2 = { 2698.232f, -1187.539f, 55.0907f };
			}
			else if (iVar1 == 1)
			{
				vVar2 = { 2699.072f, -1205.703f, 56.4753f };
			}
			else if (iVar1 == 2)
			{
				vVar2 = { 2699.064f, -1204.964f, 56.4753f };
			}
			else
			{
				vVar2 = { 2693.96f, -1201.64f, 55.47f };
			}
			iLocal_25[iVar1] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_197(iVar1), vVar2, true, true, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_197(iVar1));
		}
		iVar1++;
	}
	return iVar0;
}

void func_632(var uParam0, int iParam1)
{
	__LIB_13__::func_631(Global_1347702[uParam0->f_174 /*49*/].f_24, iParam1);
}

void func_634()
{
	__LIB_2__::func_602(&(Local_198[0 /*17*/]), "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

char* func_661(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FMA4_O_GOTO";
		case 2:
			return "FMA4_O_SEARCH";
		case 4:
			return "FMA4_O_PROT";
		case 8:
			return "FMA4_O_LEAVE";
	}
	return "";
}

void func_663()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		func_1090();
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), false);
		ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
		PED::_0xB8DE69D9473B7593(Global_35, 18);
		PED::_0xB8DE69D9473B7593(Global_35, 31);
	}
}

void func_664(var uParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return;
	}
	if (uParam0->f_4 == iParam1 && !bParam2)
	{
		return;
	}
	uParam0->f_4 = iParam1;
	switch (uParam0->f_4)
	{
		case 0:
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
				MAP::_BLIP_SET_MODIFIER(uParam0->f_1, 231194138);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 233, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
			__LIB_1__::func_991(*uParam0, 0);
			__LIB_12__::func_973(uParam0, 0);
			switch (uParam0->f_5)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					PED::REGISTER_TARGET(*uParam0, Local_338[uParam0->f_5 /*7*/], 1);
					TASK::TASK_COMBAT_PED(*uParam0, Local_338[uParam0->f_5 /*7*/], 16777216, 0);
					break;
				case 7:
				case 8:
				case 9:
				case 16:
					PED::REGISTER_TARGET(*uParam0, Global_35, 1);
					TASK::CLEAR_PED_TASKS(*uParam0, true, false);
					TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
					break;
			}
			break;
		case 2:
			TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 1.5f, 0);
			break;
		case 3:
			break;
	}
}

void func_666(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	if (!PED::IS_PED_GROUP_MEMBER(iParam0, iParam1, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, iParam1);
	}
}

bool func_668(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_241[iParam0 /*4*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_241[iParam0 /*4*/], true, false))
	{
		return false;
	}
	return true;
}

void func_670()
{
	struct<27> Var0;
	struct<27> Var38;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	Var38.f_4 = 1065353216;
	Var38.f_5 = 1065353216;
	Var38.f_9 = 1065353216;
	Var38.f_10 = 1065353216;
	Var38.f_14 = 1065353216;
	Var38.f_15 = 1065353216;
	Var38.f_17 = 1040187392;
	Var38.f_18 = 1040187392;
	Var38.f_19 = -1;
	Var38.f_26 = -1082130432;
	__LIB_3__::func_895(&Var0);
	__LIB_3__::func_895(&Var38);
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		__LIB_9__::func_175(iLocal_14, Global_35, &Var38, 0f, 0f, 0f, sLocal_595, 9224, 1, 3f, 1f, 1073069561, 1.2f, 1092616192 /* Float: 10f */, 1, 1, 0, 0, 0, 1);
		__LIB_3__::func_898(Global_35, iLocal_14, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, 1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
		__LIB_1__::func_731(&uLocal_160);
	}
}

bool func_674(var uParam0, var uParam1)
{
	if (*uParam1)
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
		*uParam1 = 1;
		return false;
	}
	if (__LIB_13__::func_640(uParam0))
	{
		__LIB_0__::func_37(uParam0);
		return true;
	}
	return false;
}

void func_700(var uParam0)
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
		func_1123(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1125(uParam0);
		func_1126(uParam0);
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

bool func_746(char* sParam0)
{
	int iVar0;
	iVar0 = 7;
	if (!func_668(iVar0))
	{
		return false;
	}
	if (!Local_241[iVar0 /*4*/].f_2)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "FrenchArtist", iLocal_14, 0);
		if (__LIB_0__::func_181())
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[iVar0 /*4*/], "b_PlayerArthur", false, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_241[iVar0 /*4*/], "PlayerZero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_241[iVar0 /*4*/], "b_PlayerArthur", true, false);
		}
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_241[iVar0 /*4*/], sParam0))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_241[iVar0 /*4*/], sParam0);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_241[iVar0 /*4*/], sParam0, true);
		ANIMSCENE::START_ANIM_SCENE(Local_241[iVar0 /*4*/]);
		return true;
	}
	return false;
}

void func_748()
{
	__LIB_1__::func_480(&iLocal_15);
	__LIB_2__::func_480(&Local_198, 0, 0, 1, 0);
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_750(var uParam0)
{
	if (__LIB_0__::func_75(&uLocal_584) && !__LIB_6__::func_904())
	{
		if (__LIB_0__::func_265(&uLocal_584) > 3f)
		{
			if (!__LIB_0__::func_270())
			{
				if (__LIB_12__::func_876(uParam0, "FMA_3_DOORHANG", 0))
				{
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_584);
	}
}

int func_751(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_10__::func_887(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_751(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_752()
{
	int iVar0;
	int iVar1;
	if (bLocal_62)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((iVar0 < 6 && __LIB_0__::func_272(Local_338[iVar0 /*7*/], 0)) && MAP::DOES_BLIP_EXIST(Local_338[iVar0 /*7*/].f_1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 2)
	{
		bLocal_62 = true;
		return true;
	}
	return false;
}

int func_754(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 >= 7)
		{
			return 16;
		}
		if (iVar0 == 3)
		{
		}
		else if (!__LIB_0__::func_272(Local_338[iVar0 /*7*/], 1))
		{
		}
		else if (Local_338[iVar0 /*7*/] == *uParam0)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return 16;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_FRAME04X");
		case 1:
			return joaat("P_CS_FRAME08X");
		case 2:
			return joaat("P_CS_FRAME05X");
		case 3:
			return joaat("P_CS_FRAME07X");
		case 4:
			return joaat("P_CS_FRAME02X");
		case 5:
			return joaat("P_CS_FRAME01X");
		case 6:
			return joaat("P_CS_FRAME03X");
		case 7:
			return joaat("P_CS_FRAME09X");
		case 8:
			return joaat("P_CS_EASEL01X");
		case 9:
			return joaat("P_CS_EASEL01X");
		case 10:
			return joaat("P_CS_EASEL01X");
		case 11:
			return joaat("P_CS_EASEL02X");
		case 12:
			return joaat("P_CS_EASEL02X");
		case 13:
			return joaat("P_CS_EASEL01X");
		case 14:
			return joaat("P_CS_EASEL01X");
		case 15:
			return joaat("P_CS_EASEL01X");
		default:
			break;
	}
	return 0;
}

void func_761(var uParam0)
{
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Mans_Drink", iLocal_25[1]);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[3 /*4*/], "Womans_Drink", iLocal_25[2]);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_241[4 /*4*/], "p_glass03x^3", iLocal_25[3]);
	__LIB_3__::func_319(Local_241[4 /*4*/]);
	__LIB_3__::func_319(Local_241[5 /*4*/]);
}

void func_763(var uParam0)
{
	if (__LIB_13__::func_218(uParam0, iLocal_14, "cs_frenchartist", 0, 1, 1))
	{
		func_349();
	}
	if (__LIB_13__::func_218(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		if (!__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, Local_338[0 /*7*/], 0, 0, 1000f, 1, 1048576);
			PED::_0x2208438012482A1A(Global_35, false, false);
		}
	}
	if (__LIB_13__::func_218(uParam0, Local_338[0 /*7*/], "A_M_M_NBXUPPERCLASS_01^1", 0, 1, 1))
	{
		if (!__LIB_0__::func_163(Local_338[0 /*7*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_338[0 /*7*/], Global_35, 0, 0, 1000f, 1, 1048576);
			PED::_0x2208438012482A1A(Local_338[0 /*7*/], false, false);
		}
	}
	if (__LIB_13__::func_218(uParam0, Local_338[1 /*7*/], "A_M_M_NBXUPPERCLASS_01^3", 0, 1, 1))
	{
		if (!__LIB_0__::func_163(Local_338[1 /*7*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_338[1 /*7*/], Local_338[5 /*7*/], 0, 0, 1000f, 1, 1048576);
			PED::_0x2208438012482A1A(Local_338[1 /*7*/], false, false);
		}
	}
	if (__LIB_13__::func_218(uParam0, Local_338[5 /*7*/], "A_M_M_NBXUPPERCLASS_01^2", 0, 1, 1))
	{
		if (!__LIB_0__::func_163(Local_338[5 /*7*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_338[5 /*7*/], Local_338[1 /*7*/], 0, 0, 1000f, 1, 1048576);
			PED::_0x2208438012482A1A(Local_338[5 /*7*/], false, false);
		}
	}
	if (__LIB_13__::func_218(uParam0, Local_338[2 /*7*/], "A_M_M_NBXUPPERCLASS_01^4", 0, 1, 1))
	{
		if (!__LIB_0__::func_163(Local_338[2 /*7*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Local_338[2 /*7*/], Local_338[4 /*7*/], joaat("AR_GRAPPLE_BACK_FROM_BACK"), 0, 0, 0, 16777216);
			PED::_0x2208438012482A1A(Local_338[2 /*7*/], false, false);
		}
	}
	if (__LIB_13__::func_218(uParam0, Local_338[4 /*7*/], "A_M_M_NBXUPPERCLASS_01^5", 0, 1, 1))
	{
		if (!__LIB_0__::func_163(Local_338[4 /*7*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Local_338[4 /*7*/], Local_338[2 /*7*/], joaat("AR_GRAPPLE_BACK_DEFEND"), 0, 0, 0, 16777216);
			PED::_0x2208438012482A1A(Local_338[4 /*7*/], false, false);
		}
	}
}

int func_765(var uParam0)
{
	bLocal_66 = true;
	return 1;
}

bool func_771(int iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_241[iParam0 /*4*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_241[iParam0 /*4*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_241[iParam0 /*4*/], sParam1) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_241[iParam0 /*4*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_241[iParam0 /*4*/], sParam1))
		{
		}
	}
	return false;
}

int func_811(int iParam0, var uParam1, int iParam2)
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
			Jump @2291; //curOff = 1540
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
			Jump @2291; //curOff = 2143
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
int func_812(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
			func_1304(iParam0);
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
			func_1306(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1308(iParam0, 0, 0, 0);
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
	func_1346();
	func_1347();
	func_1348();
	func_1349();
	func_1350();
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
	func_1353(iParam0, 1, 1, -142743235, 1);
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1382(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_899(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	struct<4> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	__LIB_7__::func_465(*uParam0, &Var0);
	if (bParam2)
	{
		*uParam1 = __LIB_1__::func_391(*uParam0, 0, 0, 14592);
		__LIB_3__::func_730(*uParam0, 0, 0, 0, 0, 0);
		if (bParam3)
		{
			PATHFIND::SET_ROADS_IN_AREA(Var0, Var0.f_3, 0, 1, 0);
		}
		POPULATION::_0xB56D41A694E42E86(*uParam0, 10208, 0, 0, -1, -1, 2);
		PED::_0x4C39C95AE5DB1329(*uParam0, false, 15);
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, 0, 0, 0, -1, -1, 0);
	}
	else
	{
		if (PED::_0x91A5F9CBEBB9D936(*uParam1))
		{
			__LIB_0__::func_484(uParam1, *uParam0, 0);
		}
		if (bParam3)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 0, 1);
		}
	}
}

int func_950(var uParam0, int iParam1, int iParam2)
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
		return func_950(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1049(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1152867454);
	}
	else if (iParam0 == 1)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1732485526);
	}
	else if (iParam0 == 2)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1482556363);
	}
	else if (iParam0 == 3)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], -1966118739);
	}
	else if (iParam0 == 4)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 229895796);
	}
	else if (iParam0 == 5)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 812135392);
	}
	else if (iParam0 == 6)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 555128125);
	}
	else if (iParam0 == 10)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1405483675);
	}
	else if (iParam0 == 11)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], -412605991);
	}
	else if (iParam0 == 14)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], -203830412);
	}
	else if (iParam0 == 8)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1152867454);
	}
	else if (iParam0 == 9)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1732485526);
	}
	else if (iParam0 == 12)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 1482556363);
	}
	else if (iParam0 == 13)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], -1966118739);
	}
	else if (iParam0 == 15)
	{
		__LIB_0__::func_862(Local_338[iParam0 /*7*/], 229895796);
	}
}

void func_1090()
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
}

void func_1123(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1540();
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

void func_1125(var uParam0)
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
			func_1548(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1548(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1126(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1548(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1304(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_1728(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_1728(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_1728(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_1728(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_1728(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1306(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			func_1729(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			func_1729(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			func_1729(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			func_1729(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			func_1729(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1308(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1737(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1738(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1346()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1765(0);
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
	func_1765(1);
}

void func_1347()
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

void func_1348()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1768(0);
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
	func_1768(1);
}

void func_1349()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1768(0);
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
	func_1768(1);
}

void func_1350()
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
				func_1353(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1353(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1353(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1353(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1776(iParam0, iParam1);
	return 1;
}

int func_1382(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1800(iVar0, iVar1, 1, 0, 0) * iVar2);
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

void func_1540()
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
	iVar0 = func_1886(6291456, 0);
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

void func_1548(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1548(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1548(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_1728(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			Jump @714; //curOff = 301
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			Jump @714; //curOff = 506
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar0))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar2))
				{
					*sParam2++;
				}
				if ((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2))
				{
					return true;
				}
			}
			else
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar2))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar3))
				{
					*sParam2++;
				}
				if (((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2)) && __LIB_1__::func_768(iVar3))
				{
					return true;
				}
			}
			return false;
		}
void func_1729(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

void func_1737(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_1728(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_1__::func_832(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1738(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_1728(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_1765(bool bParam0)
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
		func_2011(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_824(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1353(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2017(Var0);
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

void func_1768(bool bParam0)
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
		func_1353(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1353(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1353(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1776(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_2033(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_1308(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1800(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1800(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1800(iVar63, -915411861, 1, 0, 0));
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

int func_1886(int iParam0, int iParam1)
{
	var uVar0;
	return func_2062(&uVar0, iParam0, iParam1);
}

void func_2011(int iParam0)
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
	func_1353(iParam0, 1, 1, -142743235, 1);
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
		func_1353(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2017(struct<6> Param0)
{
	if (!func_2139(Param0.f_4, 1))
	{
	}
	if (!func_2139(Param0, 1))
	{
	}
	if (!func_2139(Param0.f_2, 1))
	{
	}
	if (!func_2139(Param0.f_5, 1))
	{
	}
	if (!func_2139(Param0.f_3, 1))
	{
	}
	if (!func_2139(Param0.f_1, 1))
	{
	}
}

void func_2033(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_1729(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_1729(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_1729(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_1729(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_1729(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_2062(var uParam0, int iParam1, int iParam2)
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
		return func_2062(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2139(int iParam0, int iParam1)
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
				if (func_2139(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2139(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2139(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2139(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

