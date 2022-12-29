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
	char[] cLocal_14[8] = 0;
	var uLocal_15 = 14;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	struct<2> Local_128[14];
	int iLocal_157[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_163[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_179 = 5;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	vector3 vLocal_197 = { 0f, 0f, 0f };
	vector3 vLocal_200 = { 0f, 0f, 0f };
	vector3 vLocal_203 = { 0f, 0f, 0f };
	vector3 vLocal_206 = { 0f, 0f, 0f };
	float fLocal_209 = 0f;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	struct<13> Local_212 = { 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	struct<193> Local_228 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_421 = 0;
	struct<32> Local_422[1];
	int iLocal_455 = 0;
	bool bLocal_456 = false;
	int iLocal_457 = 0;
	struct<23> Local_458 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	int iLocal_483 = 0;
	var uLocal_484[1] = { 0 };
	var uLocal_486[1] = { 0 };
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 1065353216;
	var uLocal_499 = 1065353216;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 1065353216;
	var uLocal_504 = 1065353216;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 1065353216;
	var uLocal_509 = 1065353216;
	var uLocal_510 = 0;
	var uLocal_511 = 1040187392;
	var uLocal_512 = 1040187392;
	var uLocal_513 = -1;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = -1082130432;
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
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
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
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	struct<21> Local_592[1];
	struct<17> Local_614[2];
	int iLocal_649 = 0;
	vector3 vLocal_650 = { 0f, 0f, 0f };
	vector3 vLocal_653 = { 0f, 0f, 0f };
	float fLocal_656 = 0f;
	float fLocal_657 = 0f;
	float fLocal_658 = 0f;
	float fLocal_659 = 0f;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	bool bLocal_670 = false;
	bool bLocal_671 = false;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	var uLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	bool bLocal_685 = false;
	char* sLocal_686 = NULL;
	int iLocal_687 = 0;
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
	cLocal_14 = "CALL";
	fLocal_209 = 0f;
	iLocal_483 = 3;
	iLocal_493 = -1;
	fLocal_656 = 25f;
	fLocal_657 = 15f;
	iLocal_667 = 4;
	iLocal_677 = 1;
	iLocal_680 = 1;
	iLocal_681 = 1;
	Local_228.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_673 = 1;
		bLocal_685 = true;
	}
	if (!bLocal_685)
	{
		Local_228.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_228.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		func_3();
		func_4();
		__LIB_3__::func_368(&Local_228, 1);
		__LIB_2__::func_433(&(Local_228.f_5));
		uLocal_532 = uLocal_532;
		if (__LIB_1__::func_149(1) > 0)
		{
			__LIB_1__::func_683(&iLocal_661, 2048);
		}
		func_9();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_685, 1389, 0);
		if (bLocal_685)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (bLocal_195 == 0 && bLocal_196 == 0)
			{
				func_12();
			}
			switch (iLocal_536)
			{
				case 0:
					if (func_13())
					{
						iLocal_536 = 1;
					}
					break;
				case 1:
					if (func_14(&Local_228, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						iLocal_536 = 3;
					}
					else if (Local_228.f_160)
					{
						func_10();
					}
					break;
				case 3:
					if (func_15())
					{
						func_16(&Local_228, &iLocal_649, &(Local_228.f_51.f_4));
						__LIB_3__::func_455(&Local_228, iLocal_649, 2816);
						func_19();
						func_20();
						iLocal_536 = 4;
					}
					else if (Local_228.f_160)
					{
						iLocal_673 = 1;
						func_10();
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_228, &uLocal_484, iLocal_227, 0, 0, 0, 1, 0))
					{
						iLocal_673 = 1;
						func_10();
					}
					func_22();
					if (__LIB_1__::func_313(&uLocal_575, 8f))
					{
						__LIB_0__::func_37(&uLocal_575);
					}
					if (!Local_228.f_46)
					{
						if ((__LIB_4__::func_107(uLocal_484[0], 0, &(Local_228.f_5), &iLocal_537, 0, 0) || PED::IS_PED_RAGDOLL(uLocal_484[0])) || __LIB_0__::func_264(&uLocal_581) > 7.5f)
						{
							if ((PED::IS_PED_RAGDOLL(uLocal_484[0]) || PED::_0x29FCE825613FEFCA(uLocal_484[0], 250)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_484[0], Global_35, 1, 1))
							{
								TASK::CLEAR_PED_TASKS(uLocal_484[0], true, false);
								TASK::CLEAR_PED_SECONDARY_TASK(uLocal_484[0]);
							}
							iLocal_677 = 0;
							if (iLocal_537 == 8 && __LIB_0__::func_75(&uLocal_575))
							{
							}
							else
							{
								if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455))
								{
									PED::_0x4FD80C3DD84B817B(uLocal_484[0]);
									PED::_0x58F7DB5BD8FA2288(uLocal_484[0]);
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 3f);
									iLocal_680 = 0;
									iLocal_681 = 0;
									__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
								}
								Local_228.f_46 = 1;
								Local_228.f_44 = 1;
								__LIB_3__::func_264(&Local_228);
								__LIB_3__::func_658(iLocal_493, 1);
								iLocal_535 = 5;
							}
						}
					}
					if (__LIB_2__::func_1(uLocal_484[0], 0, 1))
					{
						PED::SET_PED_RESET_FLAG(uLocal_484[0], 134, true);
					}
					if (func_32())
					{
						Local_228.f_50 = 1;
						func_10();
					}
					if (__LIB_3__::func_431(&Local_228, &uLocal_484, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						iLocal_673 = 1;
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_228.f_158);
		}
	}
}

void func_3()
{
	iLocal_226 = __LIB_3__::func_390(Local_228.f_3, 2, 0);
	iLocal_227 = iLocal_226;
	switch (__LIB_3__::func_168(__LIB_1__::func_898()))
	{
		case 1:
			if (__LIB_4__::func_177(37, 1) >= 1)
			{
				iLocal_227 = 1;
			}
			else
			{
				iLocal_227 = 0;
			}
			break;
		case 3:
			if (__LIB_4__::func_177(37, 3) >= 1)
			{
				iLocal_227 = 1;
			}
			else
			{
				iLocal_227 = 0;
			}
			break;
	}
	iLocal_457 = 0;
	if (__LIB_5__::func_681(-1) != -1 && __LIB_5__::func_681(-1) != 4)
	{
		bLocal_456 = true;
	}
	switch (iLocal_227)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_4()
{
	Local_458 = { 0f, 0f, 0f };
	Local_458.f_3 = Global_35;
	Local_458.f_8 = 4;
	Local_458.f_4 = 21030;
	Local_458.f_19 = 4;
	Local_458.f_20 = 4;
	Local_458.f_21 = 4;
	Local_458.f_22 = 4;
	Local_458.f_17 = 4;
	Local_458.f_18 = 4;
	Local_458.f_7 = 0;
}

void func_9()
{
	func_12();
	if (!Local_228.f_161)
	{
		if (bLocal_195 && __LIB_3__::func_564(37, 4) == 2)
		{
			iLocal_673 = 1;
			__LIB_3__::func_300(37, 9);
			func_10();
		}
		else if (bLocal_196 && __LIB_3__::func_564(37, 7) == 2)
		{
			iLocal_673 = 1;
			__LIB_3__::func_300(37, 11);
			__LIB_3__::func_300(37, 0);
			__LIB_3__::func_300(37, 2);
			func_10();
		}
		else
		{
			if (bLocal_195)
			{
			}
			if (bLocal_196)
			{
			}
		}
	}
}

void func_10()
{
	if (iLocal_675 == 0)
	{
		iLocal_675 = 1;
		if (MISC::_0x0D0AE5081F88CFE1(joaat("A_M_M_SKPPRISONLINE_01")))
		{
			MISC::_0x154340E87D8CC178(joaat("A_M_M_SKPPRISONLINE_01"));
		}
		__LIB_1__::func_390("PRIS_SHOOT_CHAIN", 1);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_491))
		{
			VOLUME::_DELETE_VOLUME(iLocal_491);
		}
		MAP::ALLOW_SONAR_BLIPS(false);
		__LIB_3__::func_953(&iLocal_493, 1);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_210))
		{
			PATHFIND::_0xD17672447692478E(iLocal_210, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_211))
		{
			PATHFIND::_0xD17672447692478E(iLocal_211, 0);
		}
		__LIB_3__::func_524(&iLocal_669);
		__LIB_2__::func_353(&uLocal_538, 1);
		if ((Local_228.f_46 == 0 && !__LIB_0__::func_27(iLocal_661, 32)) && !__LIB_0__::func_27(iLocal_661, 32768))
		{
			Local_228.f_45 = 0;
			__LIB_3__::func_252(&Local_228);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_490))
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_490);
			POPULATION::_0xA1CFB35069D23C23(iLocal_490);
			VOLUME::_DELETE_VOLUME(iLocal_490);
		}
		func_59();
		if (__LIB_2__::func_1(uLocal_484[0], 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 137, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 169, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 170, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 370, false);
			ENTITY::_0x4B436BAC8CBE9B07(uLocal_484[0], -1, 0);
			if (__LIB_0__::func_665(Global_35, uLocal_484[0], 1, 1) > 80f && ENTITY::IS_ENTITY_OCCLUDED(uLocal_484[0]))
			{
				PED::DELETE_PED(&(uLocal_484[0]));
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_484[0], Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
				PED::_0x39A2FC5AF55A52B1(uLocal_484[0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_484[0]));
				Local_228.f_50 = 1;
			}
		}
		__LIB_19__::func_113(Local_212.f_12, 1);
	}
	func_59();
	if (iLocal_673 == 1)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_492))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_492);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_484[0]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_484[0], true))
			{
				PED::_0x39A2FC5AF55A52B1(uLocal_484[0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_484[0]));
			}
		}
		__LIB_3__::func_493(&Local_228, &uLocal_484, &uLocal_486, iLocal_227, iLocal_649, Local_228.f_51.f_4, 0, 1, 0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_12()
{
	switch (__LIB_1__::func_898())
	{
		case 1:
		case 4:
		case 9:
			bLocal_195 = true;
			break;
		case 0:
		case 2:
		case 11:
			bLocal_196 = true;
			break;
		default:
			break;
	}
}

bool func_13()
{
	int iVar0;
	switch (iLocal_533)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_228))
			{
				func_65();
				func_66();
				func_67();
				AUDIO::_0xD9130842D7226045(__LIB_3__::func_607(), 0);
				AUDIO::_0xD9130842D7226045(__LIB_3__::func_607(), 0);
				iLocal_533 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_532, cLocal_14))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_15))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_422[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (!__LIB_3__::func_449(&Local_422))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("RELP_Sounds", 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_14(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_73(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

bool func_15()
{
	switch (iLocal_534)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_228), __LIB_3__::func_526(&Local_228), &Local_422, &uLocal_484, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_16(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 2;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 2;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 9;
			*uParam2 = 2;
			break;
		case 8:
			*iParam1 = 9;
			*uParam2 = 3;
			break;
		case 9:
			*iParam1 = 9;
			*uParam2 = 4;
			break;
		case 10:
			*iParam1 = 9;
			*uParam2 = 5;
			break;
		case 11:
			*iParam1 = 9;
			*uParam2 = 6;
			break;
		case 12:
			*iParam1 = 9;
			*uParam2 = 7;
			break;
		case 13:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 14:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 15:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 16:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
		case 17:
			*iParam1 = 11;
			*uParam2 = 4;
			break;
		case 18:
			*iParam1 = 11;
			*uParam2 = 5;
			break;
		case 19:
			*iParam1 = 11;
			*uParam2 = 6;
			break;
	}
}

Vector3 func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -158.4f;
				case 1:
					return 0f, 0f, 79f;
				case 2:
					return 0f, 0f, -130f;
				case 4:
					return 0f, 0f, -117.94f;
				case 5:
					return 0f, 0f, 12.24f;
				case 6:
					return 0f, 0f, 2.25f;
				case 7:
					return 0f, 0f, -149.3313f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -41.08f;
				case 1:
					return 0f, 0f, 130.62f;
				case 2:
					return 0f, 0f, 132.527f;
				case 3:
					return 0f, 0f, 174.2f;
				case 4:
					return 0f, 0f, -48.42f;
				case 5:
					return 0f, 0f, -57.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_19()
{
	if (__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		__LIB_3__::func_285(uLocal_484[0], &Local_228, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_484[0], true, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 137, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 169, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 170, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 370, true);
		__LIB_1__::func_991(uLocal_484[0], 0);
		DECORATOR::DECOR_SET_BOOL(uLocal_484[0], "bIsCriminal", true);
		PED::_0x923583741DC87BCE(uLocal_484[0], "lone_prisoner");
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 1.5f);
		TASK::_0x3AD8EFF9703BE657(uLocal_484[0], 0f);
		__LIB_3__::func_579(uLocal_484[0]);
		__LIB_2__::func_190(uLocal_484[0], 1);
		iLocal_455 = iLocal_455;
		__LIB_3__::func_685(&iLocal_490, ENTITY::GET_ENTITY_COORDS(uLocal_484[0], true, false), 0f, 0f, 0f, 5f, 5f, 5f);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_490, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_490, 0, 0, 0, -1, -1, 0);
		PED::_0x7C00CFC48A782DC0(iLocal_490, uLocal_484[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		PED::_0xC17A94CC8FC3C61A(uLocal_484[0], 45454, 0.7f, 1f, 1f);
		PED::_0xC17A94CC8FC3C61A(uLocal_484[0], 33646, 0.7f, 1f, 1f);
		PED::_0xC17A94CC8FC3C61A(uLocal_484[0], 55120, 0.8f, 0.8f, 1f);
		PED::_0xC17A94CC8FC3C61A(uLocal_484[0], 43312, 0.8f, 0.8f, 1f);
		iLocal_455 = PHYSICS::ADD_ROPE(0f, 0f, 1f, 0f, 0f, 0f, 0.32f, 7, -1f, 0.2f, 0.2f, false, true, false, 1.25f, true, 0, true);
		PHYSICS::_0xDEDE679ED29DD4E7(iLocal_455, 0);
		PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_455, uLocal_484[0], uLocal_484[0], 0.3f, 0f, 0.095f, 0.3f, 0f, -0.095f, 0.32f, 0, 0, "", "", 0, 55120, 43312, 0, 0, 1, 1);
		PHYSICS::_0xFB9153A54AC713E8(iLocal_455, 1);
		TASK::TASK_SET_CROUCH_MOVEMENT(uLocal_484[0], true, 0, false);
		__LIB_3__::func_696(&(uLocal_484[0]), 1);
		PED::ADD_RELATIONSHIP_GROUP("Beat_Prisoner", &iLocal_590);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_484[0], iLocal_590);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -646092206 /* GXTEntry: "Prisoner" */);
		AUDIO::_0xBF4DC1784BE94DFA(uLocal_484[0], true, MISC::GET_HASH_KEY("RELP_FOOTSTEP_SWEETENER_Soundset"));
		__LIB_3__::func_895(&uLocal_494);
	}
}

void func_20()
{
	__LIB_3__::func_157(&(Local_614[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_614[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
}

void func_22()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_661, 262144))
	{
		return;
	}
	iVar0 = 0;
	if (__LIB_2__::func_1(uLocal_484[0], 0, 0))
	{
		if (PED::_IS_PED_LASSOED(uLocal_484[0]) || PED::_IS_PED_HOGTIED(uLocal_484[0]))
		{
			iVar0 = 1;
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_484[0], Global_35, 1, 1) || iVar0 == 1)
	{
		if (!__LIB_2__::func_1(uLocal_484[0], 0, 1) || iVar0 == 1)
		{
			if (bLocal_195)
			{
				__LIB_3__::func_666(Local_228.f_3, 0, 2, 0, 0);
			}
			else if (bLocal_196)
			{
				__LIB_3__::func_666(Local_228.f_3, 1, 2, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_661, 262144);
		}
		__LIB_3__::func_608(uLocal_484[0]);
	}
}

bool func_32()
{
	func_142();
	func_143();
	func_144();
	if (__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		if (iLocal_684 == 0)
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_484[0], 1, 1);
		}
		if (((Local_228.f_46 == 0 && bLocal_670 == 1) && !__LIB_0__::func_27(iLocal_661, 1)) && __LIB_2__::func_118(uLocal_484[0], 1, 1) < 5f)
		{
			PED::SET_PED_RESET_FLAG(uLocal_484[0], 36, true);
			PED::SET_PED_RESET_FLAG(uLocal_484[0], 31, true);
			PED::SET_PED_RESET_FLAG(Global_35, 36, true);
			PED::SET_PED_RESET_FLAG(Global_35, 31, true);
		}
	}
	if (Local_228.f_46 == 0)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 1.5f);
	}
	if (iLocal_678 == 0)
	{
		if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455))
		{
			iLocal_678 = 1;
			PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, false);
			PED::_0x4FD80C3DD84B817B(uLocal_484[0]);
			PED::_0x58F7DB5BD8FA2288(uLocal_484[0]);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 3f);
			AUDIO::_0xBF4DC1784BE94DFA(uLocal_484[0], false, MISC::GET_HASH_KEY("RELP_FOOTSTEP_SWEETENER_Soundset"));
			ENTITY::_0x4B436BAC8CBE9B07(uLocal_484[0], -1, 0);
			iLocal_680 = 0;
			iLocal_681 = 0;
			__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
		}
	}
	if (iLocal_677 == 1)
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_484[0], false);
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_484[0], &Local_458);
	}
	switch (iLocal_535)
	{
		case 0:
			func_146();
			func_147();
			bLocal_670 = true;
			func_148();
			iLocal_535 = 1;
			break;
		case 1:
			if (func_149())
			{
				iLocal_535 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_661, 128))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]) && __LIB_0__::func_27(iLocal_661, 16))
				{
					__LIB_2__::func_411(&(Local_614[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_614[1 /*17*/]), 1, 0);
					iLocal_680 = 1;
					iLocal_681 = 1;
					iLocal_682 = 1;
					__LIB_1__::func_683(&iLocal_661, 128);
					iLocal_483 = 0;
				}
			}
			if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455))
			{
				if (Local_228.f_44 == 0)
				{
					Local_228.f_44 = 1;
				}
				iLocal_665 = MISC::GET_GAME_TIMER();
				iLocal_687 = 1;
				if (!__LIB_0__::func_27(iLocal_661, 4096))
				{
					__LIB_3__::func_465(12, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_484[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_683(&iLocal_661, 4096);
					__LIB_3__::func_552(uLocal_484[0]);
					__LIB_1__::func_991(uLocal_484[0], joaat("HONOR_EVENT_SCARE"));
					__LIB_3__::func_686(uLocal_484[0], 3);
				}
				PED::_0x4FD80C3DD84B817B(uLocal_484[0]);
				PED::_0x58F7DB5BD8FA2288(uLocal_484[0]);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 3f);
				iLocal_535 = 4;
			}
			func_153();
			if (iLocal_683 == 1)
			{
				iLocal_535 = 4;
			}
			if (__LIB_2__::func_118(uLocal_484[0], 1, 1) < (fLocal_657 + 5f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				func_154();
				if ((__LIB_0__::func_264(&uLocal_563) > 2f && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
				{
					if (!__LIB_0__::func_27(iLocal_661, 4194304))
					{
						__LIB_1__::func_683(&iLocal_661, 4194304);
						fLocal_657 = (fLocal_657 + 1f);
						return false;
					}
				}
				if (((__LIB_0__::func_27(iLocal_661, 4194304) && __LIB_0__::func_264(&uLocal_563) > 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
				{
					func_154();
					iLocal_491 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(uLocal_484[0], true, false), 0f, 0f, 0f, 3f, 3f, 5f);
					PED::_0x7C00CFC48A782DC0(iLocal_491, uLocal_484[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					iLocal_493 = __LIB_3__::func_721(uLocal_484[0], iLocal_491, 28);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_590, joaat("REL_COP"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), iLocal_590);
					iLocal_535 = 4;
				}
			}
			break;
		case 4:
			if (iLocal_683 == 0)
			{
				__LIB_2__::func_966(uLocal_484[0], Global_35, 1, 1, 0, 0, 0, 1, 0, 1, 1);
				func_157();
				func_158();
				func_159();
				func_154();
				func_160();
				func_161();
				iLocal_687 = 1;
				if (!__LIB_3__::func_703(-2f) || PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455))
				{
					if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455))
					{
						if (Local_228.f_44 == 0)
						{
							Local_228.f_44 = 1;
						}
						if (!__LIB_0__::func_27(iLocal_661, 4096))
						{
							__LIB_3__::func_465(12, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_484[0], 0, 1065353216 /* Float: 1f */, 0);
							__LIB_1__::func_683(&iLocal_661, 4096);
							__LIB_3__::func_552(uLocal_484[0]);
							__LIB_1__::func_991(uLocal_484[0], joaat("HONOR_EVENT_SCARE"));
							__LIB_3__::func_686(uLocal_484[0], 3);
						}
						PED::_0x4FD80C3DD84B817B(uLocal_484[0]);
						PED::_0x58F7DB5BD8FA2288(uLocal_484[0]);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 3f);
						func_163();
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 277, true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_484[0], false, 0f);
						if (!__LIB_0__::func_27(iLocal_661, 1))
						{
							__LIB_2__::func_504(uLocal_484[0], 50);
							AUDIO::_PLAY_SOUND_FROM_POSITION("SHOOT_LOCK", vLocal_650, "RELP_Sounds", false, 0, true, 0);
							__LIB_9__::func_276(49);
						}
						if (!__LIB_0__::func_75(&uLocal_548) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							if (iLocal_227 == 0)
							{
								__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_EASY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_EASY_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
						iLocal_680 = 0;
						iLocal_681 = 0;
						__LIB_1__::func_390("PRIS_SHOOT_CHAIN", 1);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
						TASK::CLEAR_PED_SECONDARY_TASK(uLocal_484[0]);
						if (__LIB_0__::func_27(iLocal_661, 1))
						{
							TASK::TASK_PLAY_ANIM(0, Local_128[10 /*2*/], Local_128[10 /*2*/].f_1, 2f, -2f, -1, 0, 0.27f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, Local_128[10 /*2*/], Local_128[10 /*2*/].f_1, 8f, -2f, -1, 0, 0f, false, 0, false, 0, false);
						}
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[11 /*2*/], Local_128[11 /*2*/].f_1, Global_35, 1633, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						__LIB_1__::func_474(uLocal_484[0], &iLocal_488, 0, 0, 1, 1);
						PED::SET_PED_RESET_FLAG(uLocal_484[0], 4, false);
						bLocal_670 = false;
						__LIB_2__::func_526(&Local_614, 0, 0);
						__LIB_2__::func_451(&(Local_592[0 /*21*/]), 0);
						if (__LIB_0__::func_27(iLocal_661, 1))
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_661, 64);
						}
						BUILTIN::SETTIMERA(0);
						iLocal_483 = 2;
						__LIB_0__::func_37(&uLocal_560);
						__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
						iLocal_535 = 6;
					}
					else
					{
						if (iLocal_683 == 0 && Local_228.f_46 == 0)
						{
							func_153();
						}
						if (((((func_171(uLocal_484[0], &iLocal_665, 35000) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && iLocal_660 == 0) || __LIB_0__::func_27(iLocal_661, 1)) || iLocal_683 == 1)
						{
							__LIB_2__::func_104(&(Local_228.f_5), 1);
							__LIB_2__::func_105(&(Local_228.f_5), 1);
							__LIB_3__::func_608(uLocal_484[0]);
							PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
							if (!__LIB_0__::func_27(iLocal_661, 1))
							{
								__LIB_1__::func_683(&iLocal_661, 1);
								__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_FORGET_IT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_173();
							__LIB_3__::func_157(&(Local_614[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
							__LIB_2__::func_451(&(Local_592[0 /*21*/]), 0);
							__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
							iLocal_680 = 1;
							iLocal_681 = 1;
							iLocal_483 = 2;
							PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, false);
							iLocal_535 = 8;
						}
						Jump @4494; //curOff = 2074
						func_174();
						if (!__LIB_0__::func_27(iLocal_661, 8192))
						{
							if ((((__LIB_0__::func_163(uLocal_484[0], 242628503) && TASK::GET_SEQUENCE_PROGRESS(uLocal_484[0]) >= 1) || (__LIB_0__::func_75(&uLocal_548) && (!__LIB_0__::func_163(uLocal_484[0], 1435919172) || __LIB_0__::func_163(uLocal_484[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED"))))) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[11 /*2*/], Local_128[11 /*2*/].f_1, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
							{
								__LIB_2__::func_51(&(Local_228.f_5), 1);
								__LIB_1__::func_683(&iLocal_661, 8192);
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_484[0], true);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 137, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 169, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 170, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 370, false);
								__LIB_2__::func_104(&(Local_228.f_5), 1);
								__LIB_2__::func_105(&(Local_228.f_5), 1);
								__LIB_2__::func_51(&(Local_228.f_5), 1);
							}
						}
						if (__LIB_0__::func_27(iLocal_661, 524288) && __LIB_0__::func_27(iLocal_661, 1))
						{
							PED::_0x89F5E7ADECCCB49C(uLocal_484[0], "normal");
							func_173();
							__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
							iLocal_483 = 2;
							PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, false);
							iLocal_535 = 8;
						}
						func_159();
						if (func_158())
						{
							__LIB_3__::func_608(uLocal_484[0]);
							PED::_0x89F5E7ADECCCB49C(uLocal_484[0], "normal");
							__LIB_1__::func_683(&iLocal_661, 4);
							func_173();
							__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
							PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, false);
							iLocal_483 = 2;
							iLocal_535 = 8;
						}
						Jump @4494; //curOff = 2529
						__LIB_2__::func_480(&Local_614, 1, 1, 1, 0);
						__LIB_2__::func_593(&(Local_592[0 /*21*/]), &Local_614);
						__LIB_1__::func_727(uLocal_484[0], 0);
						TASK::CLEAR_PED_SECONDARY_TASK(uLocal_484[0]);
						PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
						PED::_0x463803429297117C(uLocal_484[0], Global_36, 3, 0);
						iLocal_687 = 3;
						if (bLocal_670)
						{
							PED::SET_PED_FLEE_ATTRIBUTES(uLocal_484[0], 262144, true);
							PED::_0x89F5E7ADECCCB49C(uLocal_484[0], "chain_gang_legs");
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_484[0], Global_35, 2, 524320, -1082130432 /* Float: -1f */, -1, 0);
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_484[0], Global_35, 2, 524320, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 137, false);
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 169, false);
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 170, false);
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, false);
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 370, false);
						PED::SET_PED_KEEP_TASK(uLocal_484[0], true);
						__LIB_2__::func_504(uLocal_484[0], 0);
						__LIB_1__::func_283(&uLocal_572, 0);
						__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
						__LIB_3__::func_608(uLocal_484[0]);
						PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, false);
						iLocal_535 = 8;
						Jump @4494; //curOff = 2845
						if (iLocal_678 == 0 && Local_228.f_46 == 1)
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 1.5f);
						}
						if (__LIB_2__::func_1(uLocal_484[0], 0, 0))
						{
							func_181();
							if (__LIB_1__::func_313(&uLocal_572, 0.5f))
							{
								if (!__LIB_0__::func_27(iLocal_661, -2147483648))
								{
									if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_484[0], Global_35, 1, 1))
									{
										__LIB_2__::func_461(0);
										__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									else
									{
										__LIB_2__::func_461(0);
										__LIB_2__::func_478(uLocal_484[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									__LIB_1__::func_683(&iLocal_661, -2147483648);
								}
							}
							if (((!__LIB_0__::func_27(iLocal_661, 268435456) && __LIB_0__::func_27(iLocal_661, 134217728)) && !__LIB_0__::func_27(iLocal_661, 33554432)) && !__LIB_0__::func_27(iLocal_661, 67108864))
							{
								if ((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0])) && Local_228.f_46 == 0)
								{
									if (iLocal_227 == 0)
									{
										__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRISONER_POST_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									else
									{
										__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRISONER_POST_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									__LIB_1__::func_683(&iLocal_661, 268435456);
								}
							}
							__LIB_1__::func_727(uLocal_484[0], 0);
							if (iLocal_674 == 0)
							{
								iLocal_674 = 1;
								TASK::CLEAR_PED_SECONDARY_TASK(uLocal_484[0]);
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_484[0], true);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 277, false);
								__LIB_2__::func_104(&(Local_228.f_5), 1);
								__LIB_2__::func_105(&(Local_228.f_5), 1);
								__LIB_2__::func_51(&(Local_228.f_5), 1);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 137, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 169, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 170, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 370, false);
								if (Local_228.f_46 == 0)
								{
									iLocal_677 = 0;
									func_183();
									iLocal_492 = __LIB_3__::func_408(joaat("WORLD_HUMAN_SIT_GROUND"), vLocal_206, fLocal_209, 0, 0, 1);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
									if (__LIB_0__::func_27(iLocal_661, 1))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2250, -1f, -1f, 0.52f);
										__LIB_2__::func_462(&uLocal_569, -3f, 0);
									}
									else if (__LIB_0__::func_27(iLocal_661, 8))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 550, -1f, -1f, 0.52f);
										__LIB_1__::func_283(&uLocal_569, 0);
									}
									else
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, 0.52f);
										__LIB_1__::func_283(&uLocal_569, 0);
									}
									if (__LIB_0__::func_94(uLocal_484[0], vLocal_206, 1) > 7f)
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_203, 1.5f, -1, 5f, 0, 40000f);
									}
									TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_492, 0, 0, true, false, 0, false, -1f, false);
									__LIB_1__::func_474(uLocal_484[0], &iLocal_488, 0, 0, 1, 1);
									PED::SET_PED_KEEP_TASK(uLocal_484[0], true);
									if (iLocal_683 == 0)
									{
										iLocal_680 = 1;
										iLocal_681 = 1;
									}
									TASK::_0x3AD8EFF9703BE657(uLocal_484[0], 1.2f);
								}
							}
							else if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
							{
								if (__LIB_1__::func_313(&uLocal_569, 5f))
								{
									if (__LIB_0__::func_75(&uLocal_548))
									{
										__LIB_1__::func_681(&iLocal_661, 33554432);
										__LIB_1__::func_681(&iLocal_661, 67108864);
										__LIB_2__::func_411(&(Local_614[0 /*17*/]), 1, 0);
										__LIB_2__::func_411(&(Local_614[1 /*17*/]), 1, 0);
										iLocal_680 = 1;
										iLocal_681 = 1;
									}
								}
							}
							func_188();
							if ((__LIB_0__::func_27(iLocal_661, 1) && bLocal_670 == 1) && !__LIB_0__::func_75(&uLocal_548))
							{
								if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455))
								{
									if (Local_228.f_44 == 0)
									{
										Local_228.f_44 = 1;
									}
									PED::_0x4FD80C3DD84B817B(uLocal_484[0]);
									PED::_0x58F7DB5BD8FA2288(uLocal_484[0]);
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_484[0], 3f);
									if (((Local_228.f_46 == 0 && __LIB_2__::func_1(uLocal_484[0], 0, 1)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_484[0], Global_35, 1, 1)) && !PED::_IS_PED_LASSOED(uLocal_484[0]))
									{
										func_163();
										if (!__LIB_0__::func_27(iLocal_661, 4096))
										{
											__LIB_3__::func_465(12, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_484[0], 0, 1065353216 /* Float: 1f */, 0);
											__LIB_1__::func_683(&iLocal_661, 4096);
											__LIB_3__::func_552(uLocal_484[0]);
											__LIB_1__::func_991(uLocal_484[0], joaat("HONOR_EVENT_SCARE"));
											__LIB_3__::func_686(uLocal_484[0], 3);
										}
										__LIB_2__::func_461(0);
										Local_228.f_46 = 0;
										AUDIO::_PLAY_SOUND_FROM_POSITION("SHOOT_LOCK", vLocal_650, "RELP_Sounds", false, 0, true, 0);
										__LIB_9__::func_276(49);
										TASK::TASK_REACT(uLocal_484[0], Global_35, 0f, 0f, 0f, "DEFAULT_PANIC", 2f, 0, 4);
										__LIB_1__::func_283(&uLocal_548, 0);
										bLocal_670 = false;
										switch (__LIB_3__::func_168(__LIB_1__::func_898()))
										{
											case 1:
												__LIB_3__::func_666(Local_228.f_3, 0, 3, 0, 0);
												break;
											case 3:
												__LIB_3__::func_666(Local_228.f_3, 1, 3, 0, 0);
												break;
										}
										__LIB_2__::func_104(&(Local_228.f_5), 0);
										__LIB_2__::func_105(&(Local_228.f_5), 0);
										__LIB_2__::func_51(&(Local_228.f_5), 0);
									}
								}
							}
							if (__LIB_1__::func_285(&uLocal_548, 2.5f))
							{
								if (Local_228.f_46 == 0)
								{
									iLocal_674 = 0;
									iLocal_535 = 4;
									__LIB_1__::func_148(&uLocal_548);
									__LIB_2__::func_113(&uLocal_548);
									__LIB_1__::func_681(&iLocal_661, 33554432);
									__LIB_1__::func_681(&iLocal_661, 67108864);
									__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
								}
							}
							if ((__LIB_2__::func_1(uLocal_484[0], 0, 1) && __LIB_2__::func_118(uLocal_484[0], 1, 1) > 100f) && ENTITY::IS_ENTITY_OCCLUDED(uLocal_484[0]))
							{
								if (__LIB_2__::func_1(uLocal_484[0], 0, 1))
								{
									PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 137, false);
									PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 169, false);
									PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 170, false);
									PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 370, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_484[0]))
								{
									if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_484[0], true))
									{
										PED::_0x39A2FC5AF55A52B1(uLocal_484[0], -1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_484[0]));
									}
								}
								return true;
							}
						}
						else
						{
							return true;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

void func_59()
{
	if (__LIB_0__::func_255(uLocal_484[0], 1) || Local_228.f_46 == 1)
	{
		iLocal_673 = 1;
		if (bLocal_195)
		{
			if (__LIB_3__::func_993(Local_228.f_3, 0) != 2 && __LIB_0__::func_27(iLocal_661, 64))
			{
				if (iLocal_227 == 0)
				{
					__LIB_3__::func_461(37, 4, 1);
					__LIB_3__::func_666(Local_228.f_3, 0, 3, 0, 0);
				}
				else
				{
					__LIB_3__::func_461(37, 4, 2);
					__LIB_3__::func_666(Local_228.f_3, 0, 3, 0, 0);
				}
				if (iLocal_666 >= 3 && (__LIB_0__::func_27(iLocal_661, 32) || __LIB_0__::func_27(iLocal_661, 32768)))
				{
					Local_228.f_44 = 1;
					__LIB_3__::func_461(37, 5, 1);
				}
			}
		}
		else if (bLocal_196)
		{
			if (__LIB_3__::func_993(Local_228.f_3, 1) != 2 && __LIB_0__::func_27(iLocal_661, 64))
			{
				if (iLocal_227 == 0)
				{
					__LIB_3__::func_461(37, 7, 1);
					__LIB_3__::func_666(Local_228.f_3, 1, 3, 0, 0);
				}
				else
				{
					__LIB_3__::func_461(37, 7, 2);
					__LIB_3__::func_666(Local_228.f_3, 1, 3, 0, 0);
				}
				if (iLocal_666 >= 3 && (__LIB_0__::func_27(iLocal_661, 32) || __LIB_0__::func_27(iLocal_661, 32768)))
				{
					Local_228.f_44 = 1;
					__LIB_3__::func_461(37, 6, 1);
				}
			}
		}
		if ((Local_228.f_46 == 1 || __LIB_0__::func_27(iLocal_661, 32)) || __LIB_0__::func_27(iLocal_661, 32768))
		{
			Local_228.f_44 = 1;
		}
		return;
	}
	if ((__LIB_2__::func_1(uLocal_484[0], 0, 1) && __LIB_2__::func_118(uLocal_484[0], 1, 1) > 115f) && !__LIB_2__::func_269(uLocal_484[0], 1114636288 /* Float: 60f */))
	{
		if (__LIB_0__::func_27(iLocal_661, 64))
		{
			switch (__LIB_3__::func_168(__LIB_1__::func_898()))
			{
				case 1:
					if (iLocal_227 == 0)
					{
						__LIB_3__::func_461(37, 4, 1);
						__LIB_3__::func_666(Local_228.f_3, 0, 3, 0, 0);
					}
					else
					{
						__LIB_3__::func_461(37, 4, 2);
						__LIB_3__::func_666(Local_228.f_3, 0, 3, 0, 0);
					}
					break;
				case 3:
					if (iLocal_227 == 0)
					{
						__LIB_3__::func_461(37, 7, 1);
						__LIB_3__::func_666(Local_228.f_3, 1, 3, 0, 0);
					}
					else
					{
						__LIB_3__::func_461(37, 7, 2);
						__LIB_3__::func_666(Local_228.f_3, 1, 3, 0, 0);
					}
					break;
			}
		}
		if (iLocal_666 >= 3 && (__LIB_0__::func_27(iLocal_661, 32) || __LIB_0__::func_27(iLocal_661, 32768)))
		{
			Local_228.f_44 = 1;
			if (!__LIB_0__::func_181())
			{
				switch (__LIB_3__::func_168(__LIB_1__::func_898()))
				{
					case 1:
						__LIB_3__::func_461(37, 5, 1);
						break;
					case 3:
						__LIB_3__::func_461(37, 6, 1);
						break;
				}
			}
		}
		iLocal_673 = 1;
		return;
	}
}

void func_65()
{
	switch (__LIB_1__::func_898())
	{
		case 1:
		case 4:
		case 9:
			Local_422[0 /*32*/].f_1 = joaat("RE_LONEPRISONER_MALES_01");
			Local_422[0 /*32*/].f_3 = 629490500;
			StringCopy(&(Local_422[0 /*32*/].f_23), "1057_G_M_M_UniCriminals_01_WHITE_04", 64);
			break;
		case 0:
		case 2:
		case 11:
			Local_422[0 /*32*/].f_1 = joaat("RE_LONEPRISONER_MALES_01");
			Local_422[0 /*32*/].f_3 = 937486331;
			StringCopy(&(Local_422[0 /*32*/].f_23), "1056_G_M_M_UniCriminals_01_WHITE_03", 64);
			break;
	}
	Local_422[0 /*32*/] = 4;
	__LIB_3__::func_303(&(Local_422[0 /*32*/].f_22));
	func_238(Local_228.f_3);
}

void func_66()
{
	Local_128[1 /*2*/] = "script_re@lone_prisoner";
	Local_128[1 /*2*/].f_1 = "callout_idle";
	Local_128[2 /*2*/] = "script_re@lone_prisoner";
	Local_128[2 /*2*/].f_1 = "callout_far";
	Local_128[3 /*2*/] = "script_re@lone_prisoner";
	Local_128[3 /*2*/].f_1 = "please_mister";
	Local_128[4 /*2*/] = "script_re@lone_prisoner";
	Local_128[4 /*2*/].f_1 = "ive_been_on_the_run";
	Local_128[5 /*2*/] = "script_re@lone_prisoner";
	Local_128[5 /*2*/].f_1 = "dialogue_idle";
	Local_128[6 /*2*/] = "script_re@lone_prisoner";
	Local_128[6 /*2*/].f_1 = "free_enter";
	Local_128[7 /*2*/] = "script_re@lone_prisoner";
	Local_128[7 /*2*/].f_1 = "free_idle";
	Local_128[8 /*2*/] = "script_re@lone_prisoner";
	Local_128[8 /*2*/].f_1 = "cmon_now";
	Local_128[9 /*2*/] = "script_re@lone_prisoner";
	Local_128[9 /*2*/].f_1 = "shoot_damn_things";
	Local_128[10 /*2*/] = "script_re@lone_prisoner";
	Local_128[10 /*2*/].f_1 = "free_ped";
	Local_128[11 /*2*/] = "script_re@lone_prisoner";
	Local_128[11 /*2*/].f_1 = "free_ped_upper";
	Local_128[12 /*2*/] = "script_re@lone_prisoner";
	Local_128[12 /*2*/].f_1 = "ah";
	Local_128[13 /*2*/] = "script_re@lone_prisoner";
	Local_128[13 /*2*/].f_1 = "aim_at_ped";
	__LIB_3__::func_318(Local_128[2 /*2*/], &uLocal_15);
}

void func_67()
{
	__LIB_3__::func_445(&Local_422);
	__LIB_3__::func_449(&Local_422);
}

int func_73(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_243(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_243(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_369(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_243(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_142()
{
	if (__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		if (iLocal_227 == 0)
		{
			if (iLocal_649 == 9)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -2028378164))
				{
					__LIB_2__::func_51(&(Local_228.f_5), 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
					__LIB_2__::func_104(&(Local_228.f_5), 0);
					__LIB_2__::func_105(&(Local_228.f_5), 0);
					ENTITY::_0x4B436BAC8CBE9B07(uLocal_484[0], 1, 0);
				}
				if (!__LIB_0__::func_27(iLocal_661, 256))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -420486889))
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("GOT_TO_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_661, 256);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 2020835214))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
					__LIB_1__::func_683(&iLocal_661, 16);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1332120064))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
					__LIB_1__::func_283(&uLocal_563, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -2028307303))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ON_RUN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(249295937, uLocal_484[0], 1);
					__LIB_1__::func_683(&iLocal_661, 32);
					__LIB_2__::func_51(&(Local_228.f_5), 0);
					__LIB_2__::func_104(&(Local_228.f_5), 0);
					__LIB_2__::func_105(&(Local_228.f_5), 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -131692014))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 512);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -560083606))
				{
					if (!__LIB_3__::func_628(0))
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_661, 1024);
						if (__LIB_0__::func_27(iLocal_661, 8388608))
						{
							__LIB_1__::func_683(&iLocal_661, 536870912);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1266346729))
				{
					if (__LIB_3__::func_628(0))
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_661, 1024);
						if (__LIB_0__::func_27(iLocal_661, 8388608))
						{
							__LIB_1__::func_683(&iLocal_661, 536870912);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -264929638))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_SHACKLES"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -544853791))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 64);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -2146471051))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("HR_NO_PAY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_104(&(Local_228.f_5), 1);
					__LIB_2__::func_105(&(Local_228.f_5), 1);
				}
			}
			else
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 18861647))
				{
					__LIB_2__::func_51(&(Local_228.f_5), 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
					__LIB_2__::func_104(&(Local_228.f_5), 0);
					__LIB_2__::func_105(&(Local_228.f_5), 0);
				}
				if (!__LIB_0__::func_27(iLocal_661, 256))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 238912189))
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("GOT_TO_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_661, 256);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1140740474))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
					__LIB_1__::func_683(&iLocal_661, 16);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1632412321))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
					__LIB_1__::func_283(&uLocal_563, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 429969869))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ON_RUN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(249295937, uLocal_484[0], 1);
					__LIB_1__::func_683(&iLocal_661, 32);
					__LIB_2__::func_51(&(Local_228.f_5), 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
					__LIB_2__::func_104(&(Local_228.f_5), 0);
					__LIB_2__::func_105(&(Local_228.f_5), 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1843392261))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 512);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -560083606))
				{
					if (!__LIB_3__::func_628(0))
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_661, 1024);
						if (__LIB_0__::func_27(iLocal_661, 8388608))
						{
							__LIB_1__::func_683(&iLocal_661, 536870912);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1149542874))
				{
					if (__LIB_3__::func_628(0))
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_661, 1024);
						if (__LIB_0__::func_27(iLocal_661, 8388608))
						{
							__LIB_1__::func_683(&iLocal_661, 536870912);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1779172406))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_SHACKLES"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1096541137))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 64);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1914467392))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("HR_NO_PAY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_104(&(Local_228.f_5), 1);
					__LIB_2__::func_105(&(Local_228.f_5), 1);
				}
			}
		}
		else if (iLocal_649 == 9)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1605908301))
			{
				__LIB_2__::func_51(&(Local_228.f_5), 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
				__LIB_2__::func_104(&(Local_228.f_5), 0);
				__LIB_2__::func_105(&(Local_228.f_5), 0);
			}
			if (!__LIB_0__::func_27(iLocal_661, 256))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -420486889))
				{
					if (__LIB_3__::func_564(37, 4) >= 1)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("GOT_TO_HELP_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("GOT_TO_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_661, 256);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -909163493))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_CALLOVER_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
				__LIB_1__::func_683(&iLocal_661, 16);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1236773819))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_HELP_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
				__LIB_1__::func_283(&uLocal_563, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -122228321))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ON_RUN_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(249295937, uLocal_484[0], 1);
				__LIB_1__::func_683(&iLocal_661, 32768);
				__LIB_2__::func_51(&(Local_228.f_5), 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
				__LIB_2__::func_104(&(Local_228.f_5), 0);
				__LIB_2__::func_105(&(Local_228.f_5), 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 480436118))
			{
				if (__LIB_3__::func_564(37, 4) >= 1)
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_661, 512);
				if (__LIB_0__::func_27(iLocal_661, 8388608))
				{
					__LIB_1__::func_683(&iLocal_661, 536870912);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1110040269))
			{
				if (!__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 1024);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -25133812))
			{
				if (__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_SICK_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 1024);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 674893095))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_SHACKLES_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -793076794))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("THANKS_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_661, 64);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 2115711258))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("HR_NO_PAY_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_104(&(Local_228.f_5), 1);
				__LIB_2__::func_105(&(Local_228.f_5), 1);
			}
		}
		else
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1066143374))
			{
				__LIB_2__::func_51(&(Local_228.f_5), 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
				__LIB_2__::func_104(&(Local_228.f_5), 0);
				__LIB_2__::func_105(&(Local_228.f_5), 0);
			}
			if (!__LIB_0__::func_27(iLocal_661, 256))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 238912189))
				{
					if (__LIB_3__::func_564(37, 7) >= 1)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("GOT_TO_HELP_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("GOT_TO_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_661, 256);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1175149287))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_CALLOVER_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
				__LIB_1__::func_683(&iLocal_661, 16);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1880587081))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_HELP_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, uLocal_484[0], 1);
				__LIB_1__::func_283(&uLocal_563, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -815641095))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ON_RUN_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(249295937, uLocal_484[0], 1);
				__LIB_1__::func_683(&iLocal_661, 32768);
				__LIB_2__::func_51(&(Local_228.f_5), 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_484[0], 220, true);
				__LIB_2__::func_104(&(Local_228.f_5), 0);
				__LIB_2__::func_105(&(Local_228.f_5), 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -390119130))
			{
				if (__LIB_3__::func_564(37, 7) >= 1)
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_661, 512);
				if (__LIB_0__::func_27(iLocal_661, 8388608))
				{
					__LIB_1__::func_683(&iLocal_661, 536870912);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], 1110040269))
			{
				if (!__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 1024);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1486203918))
			{
				if (__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_SICK_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 1024);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -2119958604))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_SHACKLES_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -1187377914))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("THANKS_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_661, 64);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], -108754809))
			{
				__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("HR_NO_PAY_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_104(&(Local_228.f_5), 1);
				__LIB_2__::func_105(&(Local_228.f_5), 1);
			}
		}
	}
}

void func_143()
{
	switch (iLocal_687)
	{
		case 0:
			PED::_0x8B3B71C80A29A4BB(uLocal_484[0], joaat("MOODDEFUSE"), 6);
			break;
		case 1:
			PED::_0x8B3B71C80A29A4BB(uLocal_484[0], joaat("MOODHAPPY"), 6);
			break;
		case 2:
			PED::_0x8B3B71C80A29A4BB(uLocal_484[0], joaat("MOODNORMAL"), 6);
			break;
		case 3:
			PED::_0x8B3B71C80A29A4BB(uLocal_484[0], joaat("MOODSCARED"), 6);
			break;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	if (Local_228.f_46 == 1)
	{
		return;
	}
	func_357();
	iVar0 = __LIB_2__::func_340(1, 0, 0) | 64 | 256;
	iVar1 = -1;
	iVar1 = func_359(&(uLocal_484[0]), &(Local_592[0 /*21*/]), 50f, &Local_614, &(Local_228.f_192), 0f, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar1 == 0)
	{
		switch (iLocal_483)
		{
			case 0:
				if (__LIB_0__::func_75(&uLocal_551))
				{
					__LIB_1__::func_148(&uLocal_551);
				}
				if (iLocal_227 == 1)
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_RUN_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_RUN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_483 = 3;
				break;
			case 1:
				func_360(1);
				if (__LIB_0__::func_75(&uLocal_551))
				{
					__LIB_1__::func_148(&uLocal_551);
				}
				break;
			case 2:
				__LIB_2__::func_504(uLocal_484[0], 100);
				__LIB_1__::func_683(&iLocal_661, 33554432);
				if (iLocal_227 == 0)
				{
					if (bLocal_670 == 1)
					{
						__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_REFUSED_POS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_SHOT_POS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (bLocal_670 == 1)
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_REFUSED_POS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_SHOT_POS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_560);
				break;
		}
		iLocal_680 = 0;
		iLocal_681 = 0;
		__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
	}
	else if (iVar1 == 1)
	{
		switch (iLocal_483)
		{
			case 0:
				if (__LIB_0__::func_75(&uLocal_551))
				{
					__LIB_1__::func_148(&uLocal_551);
				}
				if (iLocal_227 == 1)
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_RUN_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_RUN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_483 = 3;
				break;
			case 1:
				func_360(0);
				if (__LIB_0__::func_75(&uLocal_551))
				{
					__LIB_1__::func_148(&uLocal_551);
				}
				break;
			case 2:
				__LIB_1__::func_683(&iLocal_661, 67108864);
				__LIB_2__::func_504(uLocal_484[0], 100);
				if (iLocal_227 == 0)
				{
					if (bLocal_670 == 1)
					{
						__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_REFUSED_NEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_SHOT_NEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (bLocal_670 == 1)
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_REFUSED_NEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("ILO_SHOT_NEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_560);
				break;
		}
		iLocal_680 = 0;
		iLocal_681 = 0;
		__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
	}
	if (iLocal_684 == 1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
		{
		}
		else
		{
			iLocal_684 = 0;
		}
	}
	if (__LIB_0__::func_264(&uLocal_560) > 1f && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		switch (iLocal_483)
		{
			case 0:
				__LIB_2__::func_461(0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[13 /*2*/], Local_128[13 /*2*/].f_1, 1))
				{
					if (iLocal_227 == 0)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_BEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_BEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				if (__LIB_0__::func_27(iLocal_661, 2))
				{
					iLocal_684 = 1;
				}
				iLocal_676 = 0;
				__LIB_0__::func_37(&uLocal_560);
				if (__LIB_0__::func_75(&uLocal_551))
				{
					__LIB_1__::func_148(&uLocal_551);
				}
				break;
			case 2:
				if (__LIB_0__::func_27(iLocal_661, 33554432))
				{
					if (iLocal_227 == 0)
					{
						if (bLocal_670 == 1)
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_REFUSED_POS_A_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_SHOT_POS_A_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (bLocal_670 == 1)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_REFUSED_POS_B_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_SHOT_POS_B_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_0__::func_27(iLocal_661, 67108864))
				{
					if (iLocal_227 == 0)
					{
						if (bLocal_670 == 1)
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_REFUSED_NEG_A_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_SHOT_NEG_A_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (bLocal_670 == 1)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_REFUSED_NEG_B_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("ILO_SHOT_NEG_B_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_0__::func_37(&uLocal_560);
				break;
		}
	}
}

void func_146()
{
	switch (__LIB_0__::func_979(Local_228.f_51))
	{
		case 0:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_197 = { 1713.679f, -1120.712f, 41.122f };
					break;
				case 1:
					vLocal_197 = { 2365.039f, -931.7798f, 41.4982f };
					vLocal_200 = { 2171.185f, -966.7826f, 41.82555f };
					break;
				case 2:
					vLocal_197 = { 2072.094f, -1048.942f, 42.356f };
					vLocal_200 = { 2077.46f, -1019.626f, 41.51051f };
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_197 = { 2644.413f, -82.83192f, 47.41694f };
					break;
				case 1:
					vLocal_197 = { 2557.971f, -177.5724f, 41.597f };
					vLocal_200 = { 2541.458f, -179.3519f, 42.49059f };
					break;
				default:
					break;
			}
			break;
		case 9:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_197 = { -622.5079f, 380.6365f, 92.54277f };
					break;
				case 1:
					vLocal_197 = { 741.786f, -338.8518f, 93.08791f };
					break;
				case 2:
					vLocal_197 = { 891.0523f, -160.2484f, 99.53157f };
					break;
				case 3:
					vLocal_197 = { -287.6456f, -268.206f, 91.3143f };
					break;
				case 4:
					vLocal_197 = { 136.0936f, 442.3375f, 131.8214f };
					break;
				case 5:
					vLocal_197 = { -922.8821f, 82.7797f, 49.88802f };
					break;
				case 6:
					vLocal_197 = { 463.0813f, -319.845f, 142.0286f };
					break;
				case 7:
					vLocal_197 = { -1088.46f, 33.9605f, 54.0591f };
					break;
				default:
					break;
			}
			break;
		case 11:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_197 = { 1400.497f, -1655.37f, 66.51974f };
					break;
				case 1:
					vLocal_197 = { 1589.827f, -1727.852f, 54.1198f };
					break;
				case 2:
					vLocal_197 = { 817.0289f, -919.5341f, 49.64819f };
					vLocal_200 = { 848.1838f, -976.0979f, 53.66334f };
					break;
				case 3:
					vLocal_197 = { 1106.875f, -915.4334f, 65.58105f };
					break;
				case 4:
					vLocal_197 = { 1644.365f, -1584.365f, 55.72828f };
					break;
				case 5:
					vLocal_197 = { 1508.117f, -1985.855f, 42.99917f };
					vLocal_200 = { 1474.311f, -1971.674f, 44.83749f };
					break;
				case 6:
					vLocal_197 = { 1120.943f, -2121.345f, 50.93906f };
					break;
				default:
					break;
			}
			break;
	}
}

void func_147()
{
	if (bLocal_456 && iLocal_457 == 0)
	{
		if (bLocal_195)
		{
			iLocal_591 = func_362(-1);
		}
		else if (bLocal_196)
		{
			iLocal_591 = func_362(-1);
			if (!__LIB_4__::func_264(0))
			{
				iLocal_591 = 0;
			}
		}
		switch (iLocal_591)
		{
			case 2:
				if (bLocal_195)
				{
					sLocal_686 = "RE_LP_PLN_V1_HR_CATFISH";
					iLocal_663 = -1036780588;
				}
				else if (bLocal_196)
				{
					sLocal_686 = "RE_LP_LWL_V1_HR_CATFISH";
					iLocal_663 = 931211526;
				}
				break;
			case 0:
				if (bLocal_195)
				{
					sLocal_686 = "RE_LP_PLN_V1_HR_ABERDEEN";
					iLocal_663 = joaat("RE_LP_PLN_V1_HR_ABERDEEN");
				}
				else if (bLocal_196)
				{
					sLocal_686 = "RE_LP_LWL_V1_HR_ABERDEEN";
					iLocal_663 = joaat("RE_LP_LWL_V1_HR_ABERDEEN");
				}
				break;
			case 3:
				if (bLocal_195)
				{
					sLocal_686 = "RE_LP_PLN_V1_HR_CHEZ";
					iLocal_663 = 2108405319;
				}
				else if (bLocal_196)
				{
					sLocal_686 = "RE_LP_LWL_V1_HR_CHEZ";
					iLocal_663 = 395678469;
				}
				break;
			case 6:
				if (bLocal_195)
				{
					sLocal_686 = "RE_LP_PLN_V1_HR_ROCKY";
					iLocal_663 = 1287376569;
				}
				else if (bLocal_196)
				{
					sLocal_686 = "RE_LP_LWL_V1_HR_ROCKY";
					iLocal_663 = 2010705574;
				}
				break;
			case 7:
				if (bLocal_195)
				{
					sLocal_686 = "RE_LP_PLN_V1_HR_WATSON";
					iLocal_663 = -1302753288;
				}
				else if (bLocal_196)
				{
					sLocal_686 = "RE_LP_LWL_V1_HR_WATSON";
					iLocal_663 = 1847749714;
				}
				break;
			case 4:
				if (bLocal_195)
				{
					sLocal_686 = "RE_LP_PLN_V1_HR_LONNIES";
				}
				else if (bLocal_196)
				{
					sLocal_686 = "RE_LP_LWL_V1_HR_LONNIES";
				}
				break;
			default:
				__LIB_1__::func_683(&iLocal_661, 8);
				if (bLocal_195)
				{
					if (iLocal_227 == 0)
					{
						sLocal_686 = "RE_LP_PLN_V1_NO_TIP_THANKS_A";
						iLocal_663 = 2003419497;
					}
					else
					{
						sLocal_686 = "RE_LP_PLN_V1_NO_TIP_THANKS_B";
						iLocal_663 = 1087099970;
					}
				}
				else if (bLocal_196)
				{
					if (iLocal_227 == 0)
					{
						sLocal_686 = "RE_LP_LWL_V1_NO_TIP_THANKS_A";
						iLocal_663 = 438324916;
					}
					else
					{
						sLocal_686 = "RE_LP_LWL_V1_NO_TIP_THANKS_B";
						iLocal_663 = 592797982;
					}
				}
				break;
		}
	}
}

void func_148()
{
	if (!__LIB_0__::func_86(vLocal_197))
	{
		iLocal_210 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_197, 0f, 0f, 0f, 8f, 8f, 8f, "RoadNodeVol");
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_210))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_210, 0, 0, 0);
		}
	}
	if (!__LIB_0__::func_86(vLocal_200))
	{
		iLocal_211 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_200, 0f, 0f, 0f, 8f, 8f, 8f, "RoadNodeVol2");
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_211))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_211, 0, 0, 0);
		}
	}
}

bool func_149()
{
	if (!__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		return false;
	}
	switch (iLocal_666)
	{
		case 0:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_484[0], Global_35, -1, -1f, -1f, -1f);
			iLocal_666++;
			break;
		case 1:
			if (__LIB_2__::func_118(uLocal_484[0], 1, 1) < 40f)
			{
				PED::_0x89F5E7ADECCCB49C(uLocal_484[0], "chain_gang_legs");
				TASK::TASK_SET_CROUCH_MOVEMENT(uLocal_484[0], false, 0, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 6f, 1.5f, 4f, 0);
				__LIB_1__::func_474(uLocal_484[0], &iLocal_488, 0, 0, 1, 1);
				iLocal_669 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), uLocal_484[0], 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				iLocal_666++;
			}
			break;
		case 2:
			if (__LIB_2__::func_118(uLocal_484[0], 1, 1) < 40f && __LIB_3__::func_452(&Local_228, 3f, 45f, 45f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_2__::func_73(uLocal_484[0], &(uLocal_486[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[2 /*2*/], Local_128[2 /*2*/].f_1, Global_35, 2500, 8f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 6f, 1.5f, 4f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, 0.52f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_488);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_484[0], iLocal_488);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
				iLocal_666++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_153()
{
	if (__LIB_2__::func_118(uLocal_484[0], 1, 1) > 45f)
	{
		iLocal_683 = 1;
	}
	if (__LIB_0__::func_94(uLocal_484[0], Local_228.f_51, 1) > 50f)
	{
		if (!__LIB_0__::func_27(iLocal_661, 32) && !__LIB_0__::func_27(iLocal_661, 32768))
		{
			iLocal_683 = 1;
		}
		else if (fLocal_656 != 15f)
		{
			fLocal_656 = 15f;
		}
	}
}

void func_154()
{
	if (__LIB_0__::func_27(iLocal_661, 2))
	{
		return;
	}
	switch (iLocal_664)
	{
		case 0:
			if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[3 /*2*/], Local_128[3 /*2*/].f_1, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[2 /*2*/], Local_128[2 /*2*/].f_1, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && (!__LIB_0__::func_75(&uLocal_551) || (__LIB_0__::func_75(&uLocal_551) && __LIB_0__::func_264(&uLocal_551) > 2f)))
			{
				TASK::TASK_PLAY_ANIM(uLocal_484[0], Local_128[3 /*2*/], Local_128[3 /*2*/].f_1, 2f, -2f, 5833, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
				iLocal_664++;
			}
			break;
		case 1:
			if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[3 /*2*/], Local_128[3 /*2*/].f_1, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_0__::func_27(iLocal_661, 4194304))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[4 /*2*/], Local_128[4 /*2*/].f_1, Global_35, 8500, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, 0.52f);
				__LIB_1__::func_474(uLocal_484[0], &iLocal_488, 0, 0, 1, 1);
				__LIB_1__::func_283(&uLocal_578, 0);
				iLocal_664++;
			}
			break;
		case 2:
			if ((__LIB_3__::func_990(uLocal_484[0]) >= 1 && __LIB_0__::func_264(&uLocal_578) > 8.5f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				iLocal_682 = 1;
				iLocal_664++;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[1 /*2*/], Local_128[1 /*2*/].f_1, 1))
			{
				func_369(uLocal_484[0], Global_35, &uLocal_494, -1082130432 /* Float: -1f */, 0, 0, 3f, 3f, 1, 8, 0, 0, 3f, 3f, 1050253722 /* Float: 0.3f */, 4f, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				__LIB_2__::func_966(uLocal_484[0], Global_35, 1, 1, 0, 0, 0, 1, 0, 1, 1);
				__LIB_1__::func_283(&uLocal_551, 0);
				iLocal_664++;
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iLocal_661, 32768) || __LIB_0__::func_27(iLocal_661, 32))
			{
				if (((__LIB_0__::func_264(&uLocal_551) > 7f && !__LIB_0__::func_27(iLocal_661, 2)) && !__LIB_2__::func_136(uLocal_484[0], 0)) && !__LIB_2__::func_136(Global_35, 0))
				{
					if (iLocal_676 == 1)
					{
						__LIB_1__::func_148(&uLocal_551);
					}
					if (iLocal_227 == 0)
					{
						TASK::TASK_PLAY_ANIM(uLocal_484[0], Local_128[5 /*2*/], Local_128[5 /*2*/].f_1, 2f, -2f, 3500, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
						iLocal_664++;
					}
					else if (iLocal_227 == 1)
					{
						if (__LIB_0__::func_27(iLocal_661, 4194304))
						{
							TASK::TASK_PLAY_ANIM(uLocal_484[0], Local_128[5 /*2*/], Local_128[5 /*2*/].f_1, 2f, -2f, 3500, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
							iLocal_664++;
						}
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_551);
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[5 /*2*/], Local_128[5 /*2*/].f_1, 1))
			{
				__LIB_1__::func_148(&uLocal_551);
				iLocal_664++;
			}
			break;
		case 6:
			if (((__LIB_0__::func_264(&uLocal_551) > 9f && !__LIB_0__::func_27(iLocal_661, 2)) && !__LIB_0__::func_27(iLocal_661, 512)) && !__LIB_0__::func_27(iLocal_661, 1))
			{
				if (iLocal_227 == 0)
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_661, 512);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
				else
				{
					if (__LIB_3__::func_564(37, 4) >= 1)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("CMON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_661, 512);
					if (__LIB_0__::func_27(iLocal_661, 8388608))
					{
						__LIB_1__::func_683(&iLocal_661, 536870912);
					}
				}
				iLocal_664++;
			}
			break;
	}
}

void func_157()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	if (!__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_661, 4) && (__LIB_0__::func_27(iLocal_661, 32) || __LIB_0__::func_27(iLocal_661, 32768)))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			__LIB_1__::func_683(&iLocal_661, 4);
			iLocal_483 = 1;
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_2__::func_411(&(Local_614[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_614[1 /*17*/]), 1, 0);
			}
			iLocal_680 = 1;
			iLocal_681 = 1;
		}
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
	{
		if ((iVar1 != joaat("WEAPON_UNARMED") && iVar1 != joaat("WEAPON_MELEE_KNIFE")) && __LIB_2__::func_1(uLocal_484[0], 0, 1))
		{
			if (__LIB_0__::func_665(Global_35, uLocal_484[0], 1, 1) < 3f)
			{
				bVar0 = true;
				if (iLocal_672 == 0)
				{
					iLocal_672 = 1;
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, bVar0);
				}
			}
			else
			{
				bVar0 = false;
				if (iLocal_672 == 1)
				{
					iLocal_672 = 0;
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, bVar0);
				}
			}
		}
		else
		{
			bVar0 = false;
			if (iLocal_672 == 1)
			{
				iLocal_672 = 0;
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, bVar0);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_661, 2) && __LIB_0__::func_27(iLocal_661, 4))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((iVar1 != joaat("WEAPON_UNARMED") && __LIB_2__::func_401(uLocal_484[0], 1, 1, 1, 0, 0)) && PED::GET_PED_RESET_FLAG(Global_35, 0) == 1)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[8 /*2*/], Local_128[8 /*2*/].f_1, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[9 /*2*/], Local_128[9 /*2*/].f_1, 1))
				{
					__LIB_3__::func_286(uLocal_484[0]);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[6 /*2*/], Local_128[6 /*2*/].f_1, Global_35, 800, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, 5000, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					if (!__LIB_0__::func_27(iLocal_661, 512))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[8 /*2*/], Local_128[8 /*2*/].f_1, Global_35, 1266, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					}
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, 5000, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					if (!__LIB_0__::func_27(iLocal_661, 1024))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[9 /*2*/], Local_128[9 /*2*/].f_1, Global_35, 3366, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					}
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, -1, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_488);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_484[0], iLocal_488);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uLocal_484[0], 0);
					__LIB_1__::func_683(&iLocal_661, 2);
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_661, 4))
	{
		switch (iLocal_660)
		{
			case 0:
				func_374();
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[5 /*2*/], Local_128[5 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_484[0], Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_539))
					{
						__LIB_1__::func_283(&uLocal_539, 0);
					}
					iLocal_660++;
				}
				break;
			case 1:
				func_374();
				if (__LIB_4__::func_207(uLocal_484[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) && PED::GET_PED_RESET_FLAG(Global_35, 0) == 1)
				{
					__LIB_1__::func_148(&uLocal_539);
					if (!__LIB_0__::func_75(&uLocal_542))
					{
						__LIB_1__::func_283(&uLocal_542, 0);
					}
				}
				iVar2 = 0;
				if (PED::GET_PED_RESET_FLAG(Global_35, 0) == 1 && __LIB_2__::func_401(uLocal_484[0], 1, 1, 1, 0, 0))
				{
					iVar2 = 1;
				}
				if (((iVar2 == 0 || (iVar2 == 1 && __LIB_0__::func_264(&uLocal_542) > 35f)) || __LIB_0__::func_27(iLocal_661, 8388608)) || iLocal_668 >= iLocal_667)
				{
					if (((__LIB_0__::func_265(&uLocal_539) > fLocal_656 || (iVar2 == 1 && __LIB_0__::func_264(&uLocal_542) > 35f)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0])) || iLocal_668 >= iLocal_667)
					{
						if (!__LIB_0__::func_27(iLocal_661, 1))
						{
							__LIB_1__::func_683(&iLocal_661, 1);
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_FORGET_IT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_283(&uLocal_575, 0);
						Local_228.f_44 = 1;
						__LIB_3__::func_658(iLocal_493, 1);
						iLocal_660++;
					}
				}
				break;
			case 2:
				break;
		}
	}
}

bool func_158()
{
	int iVar0;
	iLocal_663 = iLocal_663;
	switch (iLocal_662)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_661, 64))
			{
				iLocal_662++;
			}
			break;
		case 1:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				if (iLocal_227 == 0)
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_WELCOME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("WELCOME_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (MISC::IS_STRING_NULL(sLocal_686))
				{
					func_147();
				}
				if (bLocal_456 == 0 || (bLocal_195 == 0 && bLocal_196 == 0))
				{
					iLocal_662 = 5;
				}
				else
				{
					iLocal_662++;
				}
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				if (!__LIB_0__::func_27(iLocal_661, 8))
				{
					__LIB_2__::func_461(0);
					if (iLocal_227 == 0)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("HR_NO_PAY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("HR_NO_PAY_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_283(&uLocal_587, 0);
				iLocal_662++;
			}
			break;
		case 3:
			iVar0 = 0;
			if ((!__LIB_0__::func_163(uLocal_484[0], 1435919172) || __LIB_0__::func_163(uLocal_484[0], -875674219)) && __LIB_0__::func_264(&uLocal_587) > 8f)
			{
				iVar0 = 1;
			}
			if (((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0])) && (((TASK::GET_SCRIPT_TASK_STATUS(uLocal_484[0], 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(uLocal_484[0]) > 3) || __LIB_0__::func_163(uLocal_484[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED"))) || iVar0 == 1)) && __LIB_0__::func_27(iLocal_661, 8192))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_484[0], Global_35, sLocal_686, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_283(&uLocal_545, 0);
				iLocal_687 = 2;
				iLocal_662++;
			}
			if (func_376())
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_484[0], Global_35, sLocal_686, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_283(&uLocal_545, 0);
				iLocal_662++;
			}
			break;
		case 4:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				if (bLocal_456)
				{
					__LIB_17__::func_876(iLocal_591);
				}
				__LIB_1__::func_683(&iLocal_661, 524288);
				if (iLocal_227 == 0)
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_POST_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLAYER_POST_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_3__::func_658(iLocal_493, 1);
				__LIB_3__::func_608(uLocal_484[0]);
				__LIB_1__::func_683(&iLocal_661, 134217728);
				return true;
			}
			break;
		case 5:
			fLocal_658 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_484[0], Local_128[12 /*2*/], Local_128[12 /*2*/].f_1);
			if ((fLocal_658 > 0.97f || __LIB_0__::func_163(uLocal_484[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED"))) || (bLocal_456 == 0 || (bLocal_195 == 0 && bLocal_196 == 0)))
			{
				if (bLocal_456 == 0 || (bLocal_195 == 0 && bLocal_196 == 0))
				{
					if (iLocal_227 == 0)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("NO_TIP_THANKS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("NO_TIP_THANKS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_661, 8);
				}
				iLocal_687 = 2;
				__LIB_3__::func_658(iLocal_493, 1);
				__LIB_3__::func_608(uLocal_484[0]);
				iLocal_662++;
			}
			break;
		case 6:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				if (__LIB_0__::func_27(iLocal_661, 8))
				{
					if (iLocal_227 == 0)
					{
						__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("NO_TIP_THANKS_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("NO_TIP_THANKS_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				return true;
			}
			break;
	}
	return false;
}

void func_159()
{
	if (__LIB_0__::func_27(iLocal_661, 4194304) || __LIB_0__::func_27(iLocal_661, 32))
	{
		if (__LIB_0__::func_264(&uLocal_557) > 1f)
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_0__::func_37(&uLocal_557);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_484[0], iLocal_489);
			}
		}
	}
}

void func_160()
{
	if (!__LIB_2__::func_1(uLocal_484[0], 0, 1) || iLocal_664 < 5)
	{
		return;
	}
	if (__LIB_2__::func_118(uLocal_484[0], 1, 1) < fLocal_657)
	{
		if (bLocal_671)
		{
			bLocal_671 = false;
		}
	}
	else if (!bLocal_671)
	{
		func_369(uLocal_484[0], Global_35, &uLocal_494, -1082130432 /* Float: -1f */, 0, 0, 3f, -1f, 1, 8, 0, 0, 3f, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 4f, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
		__LIB_2__::func_966(uLocal_484[0], Global_35, 1, 1, 0, 0, 0, 1, 0, 1, 1);
		bLocal_671 = true;
		if (__LIB_0__::func_27(iLocal_661, 2))
		{
			__LIB_1__::func_681(&iLocal_661, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_661, 131072))
	{
		if (bLocal_671 == 0)
		{
			func_369(uLocal_484[0], Global_35, &uLocal_494, -1082130432 /* Float: -1f */, 0, 0, 3f, -1f, 1, 8, 0, 0, 3f, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 4f, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			__LIB_2__::func_966(uLocal_484[0], Global_35, 1, 1, 0, 0, 0, 1, 0, 1, 1);
			bLocal_671 = true;
			__LIB_1__::func_683(&iLocal_661, 131072);
		}
	}
}

void func_161()
{
	if (iLocal_668 >= iLocal_667)
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_566))
	{
		__LIB_1__::func_283(&uLocal_566, 0);
	}
	if (__LIB_0__::func_264(&uLocal_566) > 1.3f)
	{
		if ((PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), uLocal_484[0], 1000) && !PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_455)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
		{
			__LIB_2__::func_504(uLocal_484[0], 0);
			switch (iLocal_668)
			{
				case 0:
					__LIB_2__::func_122(uLocal_484[0], "GENERIC_SHOCKED_MED", 1808677283, Global_35, 1, &(Local_422[0 /*32*/].f_23), 1, 1);
					break;
				case 1:
					__LIB_2__::func_122(uLocal_484[0], "GENERIC_SHOCKED_MED", 1808677283, Global_35, 1, &(Local_422[0 /*32*/].f_23), 2, 1);
					break;
				case 2:
					__LIB_2__::func_122(uLocal_484[0], "GENERIC_SHOCKED_HIGH", 1808677283, Global_35, 1, &(Local_422[0 /*32*/].f_23), 1, 1);
					break;
				case 3:
					__LIB_2__::func_122(uLocal_484[0], "GENERIC_SHOCKED_HIGH", 1808677283, Global_35, 1, &(Local_422[0 /*32*/].f_23), 2, 1);
					break;
			}
			iLocal_668++;
			__LIB_1__::func_148(&uLocal_566);
			if (iLocal_668 >= iLocal_667)
			{
				fLocal_656 = 5f;
			}
		}
	}
}

void func_163()
{
	if (!__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		return;
	}
	vLocal_653 = { ENTITY::GET_ENTITY_COORDS(uLocal_484[0], true, false) };
	fLocal_659 = ENTITY::GET_ENTITY_HEADING(uLocal_484[0]);
	vLocal_650 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_653, fLocal_659, 0f, 0.1f, -0.9f) };
}

char* func_166(char* sParam0)
{
	int iVar0;
	if (iLocal_227 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_227 == 1)
	{
		iVar0 = 1;
	}
	if (bLocal_195 == 1)
	{
		return __LIB_3__::func_394("LP", "PLN", sParam0, iVar0);
	}
	else if (bLocal_196 == 1)
	{
		return __LIB_3__::func_394("LP", "LWL", sParam0, iVar0);
	}
	return "INVALID";
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	if (*iParam1 == 0)
	{
		*iParam1 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - *iParam1) > iParam2)
	{
		return true;
	}
	if (__LIB_2__::func_118(iParam0, 0, 1) > 30f)
	{
		return true;
	}
	return false;
}

void func_173()
{
	__LIB_3__::func_157(&(Local_614[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_3__::func_157(&(Local_614[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
}

void func_174()
{
	if (!__LIB_2__::func_1(uLocal_484[0], 0, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_661, 65536))
	{
		return;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_484[0], 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(uLocal_484[0]) > 2) || iLocal_662 >= 3)
	{
		func_369(uLocal_484[0], Global_35, &uLocal_494, -1082130432 /* Float: -1f */, 0, 0, 3f, -1f, 1, 8, 0, 0, 3f, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 4f, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
		__LIB_2__::func_966(uLocal_484[0], Global_35, 1, 1, 0, 0, 0, 1, 0, 1, 1);
		__LIB_1__::func_683(&iLocal_661, 65536);
	}
}

void func_181()
{
	if (__LIB_2__::func_1(uLocal_484[0], 0, 1) && Local_228.f_46 == 0)
	{
		if (!__LIB_0__::func_75(&uLocal_554))
		{
			__LIB_1__::func_283(&uLocal_554, 0);
		}
		if (!__LIB_0__::func_27(iLocal_661, 16384))
		{
			if (__LIB_0__::func_264(&uLocal_554) > 15f && (__LIB_0__::func_94(uLocal_484[0], vLocal_206, 1) < 7f && __LIB_0__::func_665(uLocal_484[0], Global_35, 1, 1) < 7f))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
				{
					if (iLocal_227 == 0)
					{
						if (bLocal_670 == 0)
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_HELP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
						}
					}
					else if (bLocal_670 == 0)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_HELP_AGAIN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_AGAIN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
					}
					__LIB_1__::func_148(&uLocal_554);
					__LIB_1__::func_683(&iLocal_661, 16384);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_661, 1073741824 /* Float: 2f */))
		{
			if (__LIB_0__::func_264(&uLocal_554) > 10f && __LIB_0__::func_665(uLocal_484[0], Global_35, 1, 1) < 7f)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
				{
					if (iLocal_227 == 0)
					{
						if (bLocal_670 == 0)
						{
							__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_HELP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
						}
					}
					else if (bLocal_670 == 0)
					{
						__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_HELP_AGAIN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_LOITER_AGAIN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
					}
					__LIB_1__::func_683(&iLocal_661, 1073741824 /* Float: 2f */);
				}
			}
		}
	}
}

void func_183()
{
	switch (__LIB_1__::func_898())
	{
		case 0:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_203 = { 1632.03f, -1110.862f, 40.6939f };
					vLocal_206 = { 1630.628f, -1121.575f, 40.5898f };
					break;
				case 1:
					vLocal_203 = { 2407.729f, -900.7478f, 40.5824f };
					vLocal_206 = { 2414.649f, -897.47f, 40.52f };
					break;
				case 2:
					vLocal_203 = { 2055.894f, -1042.369f, 42.3775f };
					vLocal_206 = { 2054.956f, -1037.932f, 42.3301f };
					break;
			}
			break;
		case 2:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_203 = { 2642.96f, -58.50701f, 50.478f };
					vLocal_206 = { 2640.759f, -45.3321f, 51.04005f };
					break;
				case 1:
					vLocal_203 = { 2533.364f, -147.9176f, 43.7039f };
					vLocal_206 = { 2529.169f, -147.249f, 44.0081f };
					break;
			}
			break;
		case 9:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_203 = { -687.9272f, 412.71f, 98.66336f };
					vLocal_206 = { -710.8405f, 451.6134f, 94.98848f };
					break;
				case 1:
					vLocal_203 = { 903.3109f, -424.8628f, 88.32035f };
					vLocal_206 = { 910.0642f, -424.3267f, 88.35102f };
					break;
				case 2:
					vLocal_203 = { 946.8609f, -213.2397f, 85.35766f };
					vLocal_206 = { 965.8708f, -212.3302f, 85.82827f };
					break;
				case 3:
					vLocal_203 = { -357.1713f, -252.6874f, 88.6817f };
					vLocal_206 = { -375.7354f, -243.0887f, 86.91199f };
					break;
				case 4:
					vLocal_203 = { 143.6904f, 380.8997f, 132.001f };
					vLocal_206 = { 148.3968f, 372.2151f, 129.8873f };
					break;
				case 5:
					vLocal_203 = { -945.4099f, 13.84173f, 43.90493f };
					vLocal_206 = { -943.0068f, 9.60885f, 43.72855f };
					break;
				case 6:
					vLocal_203 = { 468.8319f, -141.9995f, 129.8876f };
					vLocal_206 = { 443.9678f, -138.3549f, 126.7788f };
					break;
				case 7:
					vLocal_203 = { -1169.193f, 88.2286f, 43.9652f };
					vLocal_206 = { -1172.697f, 86.98732f, 43.87589f };
					fLocal_209 = 155.7f;
					break;
			}
			break;
		case 11:
			switch (Local_228.f_51.f_4)
			{
				case 0:
					vLocal_203 = { 1412.281f, -1767.941f, 65.99601f };
					vLocal_206 = { 1410.965f, -1776.486f, 65.7568f };
					break;
				case 1:
					vLocal_203 = { 1626.353f, -1646.089f, 56.0254f };
					vLocal_206 = { 1635.917f, -1634.206f, 55.4468f };
					break;
				case 2:
					vLocal_203 = { 698.1766f, -958.5251f, 54.14296f };
					vLocal_206 = { 690.8494f, -958.3961f, 53.87256f };
					break;
				case 3:
					vLocal_203 = { 1016.652f, -929.9427f, 65.21865f };
					vLocal_206 = { 991.0938f, -947.2551f, 62.12177f };
					break;
				case 4:
					vLocal_203 = { 1665.567f, -1704.891f, 51.86849f };
					vLocal_206 = { 1667.712f, -1710.304f, 51.60739f };
					break;
				case 5:
					vLocal_203 = { 1452.886f, -2116.361f, 48.50421f };
					vLocal_206 = { 1452.305f, -2130.583f, 47.96158f };
					break;
				case 6:
					vLocal_203 = { 1196.989f, -2190.116f, 54.16475f };
					vLocal_206 = { 1196.903f, -2196.279f, 54.21175f };
					break;
			}
			break;
	}
}

void func_188()
{
	if (PED::_IS_PED_HOGTIED(uLocal_484[0]))
	{
		if (!__LIB_0__::func_27(iLocal_661, 2097152))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_484[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
				if (iLocal_678 == 1)
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_HOGTIE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("PRIS_HOGTIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_661, 2097152);
			}
		}
	}
}

void func_238(var uParam0)
{
	uParam0 = uParam0;
	Local_422[0 /*32*/].f_6 = { 0f, 0f, 0f };
	Local_422[0 /*32*/].f_9 = 90f;
}

void func_243(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_438(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_439(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

void func_357()
{
	if (__LIB_0__::func_75(&uLocal_584))
	{
		if ((__LIB_0__::func_264(&uLocal_584) > 1f && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
		{
			if (!__LIB_0__::func_27(iLocal_661, 1024) && !__LIB_0__::func_27(iLocal_661, 2))
			{
				if (!__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_484[0], Global_35, func_166("SHOOT_DAMN_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_661, 1024);
			}
			__LIB_0__::func_37(&uLocal_584);
		}
	}
	if ((iLocal_662 >= 3 && !__LIB_0__::func_27(iLocal_661, 268435456)) && !__LIB_0__::func_27(iLocal_661, 8))
	{
		return;
	}
	if (iLocal_483 == 3)
	{
		return;
	}
	if ((AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) || (iLocal_664 > 0 && iLocal_483 == 0))
	{
		if (iLocal_682 == 1)
		{
			iLocal_682 = 0;
			__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
		}
	}
	else if (iLocal_682 == 0 && __LIB_0__::func_27(iLocal_661, 4))
	{
		iLocal_682 = 1;
		if (iLocal_680 == 1)
		{
			__LIB_2__::func_411(&(Local_614[0 /*17*/]), 1, 0);
		}
		if (iLocal_681 == 1)
		{
			__LIB_2__::func_411(&(Local_614[1 /*17*/]), 1, 0);
		}
	}
}

int func_359(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_526(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_360(int iParam0)
{
	int iVar0;
	iLocal_676 = 1;
	__LIB_2__::func_461(0);
	if (iLocal_227 == 0)
	{
		if (iParam0 == 1)
		{
			__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLY_QUESTION_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLY_REFUSE_TO_HELP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (iLocal_227 == 1)
	{
		if (iParam0 == 1)
		{
			__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLY_QUESTION_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(Global_35, uLocal_484[0], func_166("PLY_REFUSE_TO_HELP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	__LIB_1__::func_683(&iLocal_661, 8388608);
	__LIB_1__::func_148(&uLocal_539);
	__LIB_1__::func_148(&uLocal_560);
	if (__LIB_0__::func_75(&uLocal_551))
	{
		__LIB_1__::func_148(&uLocal_551);
	}
	__LIB_2__::func_411(&(Local_614[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_614[1 /*17*/]), 0, 0);
	__LIB_2__::func_451(&(Local_592[0 /*21*/]), 0);
	if (iLocal_649 == 9)
	{
		__LIB_3__::func_461(37, 2, 1);
	}
	else if ((iLocal_649 == 11 || iLocal_649 == 2) || iLocal_649 == 0)
	{
		__LIB_3__::func_461(37, 3, 1);
	}
	if (__LIB_0__::func_27(iLocal_661, 2))
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_484[0], Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, -1, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
		iVar0 = 7500;
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_489);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_489);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, iVar0, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
		if (__LIB_0__::func_27(iLocal_661, 1024) && __LIB_0__::func_27(iLocal_661, 512))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, -1, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			iLocal_660 = 1;
			fLocal_656 = 2f;
		}
		else if (__LIB_0__::func_27(iLocal_661, 512))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[9 /*2*/], Local_128[9 /*2*/].f_1, Global_35, 3366, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, -1, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[8 /*2*/], Local_128[8 /*2*/].f_1, Global_35, 1266, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, 5000, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[9 /*2*/], Local_128[9 /*2*/].f_1, Global_35, 3366, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, -1, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_489);
		__LIB_1__::func_283(&uLocal_557, 0);
	}
	else
	{
		__LIB_1__::func_283(&uLocal_584, 0);
		iLocal_660 = 1;
	}
	if (iLocal_664 == 5)
	{
		if (__LIB_0__::func_75(&uLocal_551))
		{
			__LIB_1__::func_148(&uLocal_551);
		}
	}
}

int func_362(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	int iVar16;
	vVar0 = { __LIB_4__::func_55(2) };
	vVar3 = { __LIB_4__::func_55(0) };
	vVar6 = { __LIB_4__::func_55(3) };
	vVar9 = { __LIB_4__::func_55(6) };
	vVar12 = { __LIB_4__::func_55(7) };
	fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar0, true);
	fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar3, true);
	fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar6, true);
	fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar9, true);
	fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar12, true);
	vLocal_163[0 /*3*/] = { vVar0 };
	vLocal_163[1 /*3*/] = { vVar3 };
	vLocal_163[2 /*3*/] = { vVar6 };
	vLocal_163[3 /*3*/] = { vVar9 };
	vLocal_163[4 /*3*/] = { vVar12 };
	iLocal_157[0] = 2;
	iLocal_157[1] = 0;
	iLocal_157[2] = 3;
	iLocal_157[3] = 6;
	iLocal_157[4] = 7;
	func_532(&vLocal_163, 5, Local_228.f_51, &uLocal_179);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[0 /*3*/], vVar0, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar0, true);
		iLocal_157[0] = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[0 /*3*/], vVar3, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar3, true);
		iLocal_157[0] = 0;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[0 /*3*/], vVar6, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar6, true);
		iLocal_157[0] = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[0 /*3*/], vVar9, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar9, true);
		iLocal_157[0] = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[0 /*3*/], vVar12, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar12, true);
		iLocal_157[0] = 7;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[1 /*3*/], vVar0, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar0, true);
		iLocal_157[1] = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[1 /*3*/], vVar3, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar3, true);
		iLocal_157[1] = 0;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[1 /*3*/], vVar6, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar6, true);
		iLocal_157[1] = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[1 /*3*/], vVar9, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar9, true);
		iLocal_157[1] = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[1 /*3*/], vVar12, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar12, true);
		iLocal_157[1] = 7;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[2 /*3*/], vVar0, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar0, true);
		iLocal_157[2] = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[2 /*3*/], vVar3, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar3, true);
		iLocal_157[2] = 0;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[2 /*3*/], vVar6, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar6, true);
		iLocal_157[2] = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[2 /*3*/], vVar9, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar9, true);
		iLocal_157[2] = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[2 /*3*/], vVar12, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar12, true);
		iLocal_157[2] = 7;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[3 /*3*/], vVar0, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar0, true);
		iLocal_157[3] = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[3 /*3*/], vVar3, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar3, true);
		iLocal_157[3] = 0;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[3 /*3*/], vVar6, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar6, true);
		iLocal_157[3] = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[3 /*3*/], vVar9, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar9, true);
		iLocal_157[3] = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[3 /*3*/], vVar12, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar12, true);
		iLocal_157[3] = 7;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[4 /*3*/], vVar0, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar0, true);
		iLocal_157[4] = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[4 /*3*/], vVar3, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar3, true);
		iLocal_157[4] = 0;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[4 /*3*/], vVar6, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar6, true);
		iLocal_157[4] = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[4 /*3*/], vVar9, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar9, true);
		iLocal_157[4] = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_163[4 /*3*/], vVar12, true) < 1f)
	{
		fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228.f_51, vVar12, true);
		iLocal_157[4] = 7;
	}
	iVar16 = 0;
	while (iVar16 < 5)
	{
		if (!__LIB_4__::func_264(iLocal_157[iVar16]) && iParam0 != iLocal_157[iVar16])
		{
			return iLocal_157[iVar16];
		}
		iVar16++;
		if (iVar16 == 5)
		{
		}
	}
	return -1;
}

void func_369(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		Var0.f_5 = iParam20;
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, iParam10, iParam11, fParam12, fParam13);
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

void func_374()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	vVar6 = { PED::GET_PED_BONE_COORDS(uLocal_484[0], 56200, 0.2f, 0.11f, 0f) };
	vVar3 = { PED::GET_PED_BONE_COORDS(uLocal_484[0], 21030, 0f, 0f, 0f) };
	PLAYER::_0x3DAABE78A23694BC(PLAYER::GET_PLAYER_INDEX(), &vVar0);
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar6, true);
	iVar11 = 0;
	vVar12 = { __LIB_1__::func_384(0) };
	vVar15 = { __LIB_0__::func_173(vVar3 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	fVar18 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar15.x, vVar15.y, vVar12.x, vVar12.y));
	fVar19 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar15.y, vVar15.z, vVar12.y, vVar12.z));
	if (fVar18 < 4f)
	{
		if (fVar19 < 4f)
		{
			iVar11 = 1;
		}
	}
	if ((__LIB_2__::func_401(uLocal_484[0], 1, 1, 1, 0, 0) || iVar11 == 1) && PED::GET_PED_RESET_FLAG(Global_35, 0) == 1)
	{
		if ((fVar9 < 0.3f || fVar10 < 0.3f) || iVar11 == 1)
		{
			if (!__LIB_0__::func_75(&uLocal_581))
			{
				__LIB_1__::func_283(&uLocal_581, 0);
			}
			if (__LIB_0__::func_264(&uLocal_581) > 7.5f && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]))
			{
			}
		}
		else if (__LIB_0__::func_75(&uLocal_581))
		{
			__LIB_0__::func_37(&uLocal_581);
		}
		if (__LIB_0__::func_27(iLocal_661, 1048576))
		{
			return;
		}
		if (fVar9 < 0.3f || fVar10 < 0.3f)
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_484[0]) && __LIB_0__::func_264(&uLocal_581) > 0.75f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_488);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[13 /*2*/], Local_128[13 /*2*/].f_1, Global_35, 7166, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, 5000, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				if (!__LIB_0__::func_27(iLocal_661, 512))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[8 /*2*/], Local_128[8 /*2*/].f_1, Global_35, 1266, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, 5000, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				}
				if (!__LIB_0__::func_27(iLocal_661, 1024))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[9 /*2*/], Local_128[9 /*2*/].f_1, Global_35, 3366, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				}
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_128[7 /*2*/], Local_128[7 /*2*/].f_1, Global_35, -1, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_488);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_484[0], iLocal_488);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_488);
				__LIB_1__::func_683(&iLocal_661, 1048576);
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_581))
	{
		__LIB_0__::func_37(&uLocal_581);
	}
}

bool func_376()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], func_550(14)) && iLocal_591 == 2)
	{
		return true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_484[0], func_550(22)) && iLocal_591 == 0)
	{
		return true;
	}
	return false;
}

bool func_438(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			Jump @7867; //curOff = 3093
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			Jump @7867; //curOff = 3806
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			Jump @7867; //curOff = 5104
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			Jump @7867; //curOff = 5583
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			Jump @7867; //curOff = 6074
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			return false;
		}
Vector3 func_439(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

int func_526(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_526(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_532(var uParam0, int iParam1, vector3 vParam2, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		*(uParam5[iVar0 /*3*/]) = { *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam2, *(uParam5[iVar0 /*3*/]), true);
		iVar1 = 0;
		while (iVar1 < iParam1)
		{
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam2, *(uParam5[iVar1 /*3*/]), true);
			if (fVar4 <= fVar3)
			{
				fVar3 = fVar4;
				*(uParam0[iVar0 /*3*/]) = { *(uParam5[iVar1 /*3*/]) };
				iVar2 = iVar1;
			}
			iVar1++;
		}
		if (iVar2 >= 0)
		{
			*(uParam5[iVar2 /*3*/]) = { 9999f, 9999f, 0f };
		}
		iVar1 = 0;
		iVar2 = -1;
		iVar0++;
	}
}

int func_550(int iParam0)
{
	switch (__LIB_1__::func_898())
	{
		case 4:
		case 9:
			switch (iLocal_227)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1135338196;
						case 1:
							return 1622818786;
						case 2:
							return 1332120064;
						case 3:
							return -482813695;
						case 4:
							return -2028307303;
						case 5:
							return -122228321;
						case 6:
							return -756921409;
						case 7:
							return 2011894734;
						case 8:
							return 664384371;
						case 9:
							return 1690219055;
						case 10:
							return -1308628249;
						case 11:
							return -544853791;
						case 12:
							return -2146471051;
						case 13:
							return -108185610;
						case 14:
							return joaat("RE_LP_PLN_V1_HR_CATFISH");
						case 15:
							return joaat("RE_LP_PLN_V1_HR_CHEZ");
						case 16:
							return joaat("RE_LP_PLN_V1_HR_ROCKY");
						case 17:
							return joaat("RE_LP_PLN_V1_HR_WATSON");
						case 18:
							return 1816675293;
						case 19:
							return 1816675293;
						case 20:
							return 632896217;
						case 21:
							return 799422712;
						case 22:
							return joaat("RE_LP_PLN_V1_HR_ABERDEEN");
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1135338196;
						case 1:
							return 1622818786;
						case 2:
							return 1332120064;
						case 3:
							return -482813695;
						case 4:
							return -2028307303;
						case 5:
							return -122228321;
						case 6:
							return -756921409;
						case 7:
							return 2011894734;
						case 8:
							return 664384371;
						case 9:
							return 1690219055;
						case 10:
							return -1308628249;
						case 11:
							return -544853791;
						case 12:
							return -2146471051;
						case 13:
							return -108185610;
						case 14:
							return joaat("RE_LP_PLN_V1_HR_CATFISH");
						case 15:
							return joaat("RE_LP_PLN_V1_HR_CHEZ");
						case 16:
							return joaat("RE_LP_PLN_V1_HR_ROCKY");
						case 17:
							return joaat("RE_LP_PLN_V1_HR_WATSON");
						case 18:
							return 1816675293;
						case 19:
							return 1816675293;
						case 20:
							return 632896217;
						case 21:
							return 799422712;
						case 22:
							return joaat("RE_LP_PLN_V1_HR_ABERDEEN");
					}
					break;
			}
			break;
		case 0:
		case 2:
		case 11:
			switch (iLocal_227)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 35053842;
						case 1:
							return -716503712;
						case 2:
							return 1632412321;
						case 3:
							return -600864679;
						case 4:
							return 429969869;
						case 5:
							return -815641095;
						case 6:
							return 1894882632;
						case 7:
							return -1201858221;
						case 8:
							return 1970414794;
						case 9:
							return 957220175;
						case 10:
							return 1100258741;
						case 11:
							return 1096541137;
						case 12:
							return 1914467392;
						case 13:
							return joaat("RE_LP_LWL_V1_HR_CATFISH");
						case 14:
							return joaat("RE_LP_LWL_V1_HR_CATFISH");
						case 15:
							return joaat("RE_LP_LWL_V1_HR_CHEZ");
						case 16:
							return joaat("RE_LP_LWL_V1_HR_ROCKY");
						case 17:
							return joaat("RE_LP_LWL_V1_HR_WATSON");
						case 18:
							return 339201214;
						case 19:
							return 1735955120;
						case 20:
							return 35212148;
						case 21:
							return 799422712;
						case 22:
							return joaat("RE_LP_LWL_V1_HR_ABERDEEN");
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 35053842;
						case 1:
							return -716503712;
						case 2:
							return 1632412321;
						case 3:
							return -600864679;
						case 4:
							return 429969869;
						case 5:
							return -815641095;
						case 6:
							return 1894882632;
						case 7:
							return -1201858221;
						case 8:
							return 1970414794;
						case 9:
							return 957220175;
						case 10:
							return 1100258741;
						case 11:
							return 1096541137;
						case 12:
							return 1914467392;
						case 13:
							return joaat("RE_LP_LWL_V1_HR_CATFISH");
						case 14:
							return joaat("RE_LP_LWL_V1_HR_CATFISH");
						case 15:
							return joaat("RE_LP_LWL_V1_HR_CHEZ");
						case 16:
							return joaat("RE_LP_LWL_V1_HR_ROCKY");
						case 17:
							return joaat("RE_LP_LWL_V1_HR_WATSON");
						case 18:
							return 339201214;
						case 19:
							return 1735955120;
						case 20:
							return 35212148;
						case 21:
							return 799422712;
						case 22:
							return joaat("RE_LP_LWL_V1_HR_ABERDEEN");
					}
					break;
			}
			break;
	}
	return -1;
}

